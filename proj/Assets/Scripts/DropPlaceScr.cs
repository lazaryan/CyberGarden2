using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DropPlaceScr : MonoBehaviour, IDropHandler, IPointerEnterHandler, IPointerExitHandler
{
    public void OnDrop(PointerEventData eventData)
    {
        CarMovementdScr card = eventData.pointerDrag.GetComponent<CarMovementdScr>();

        if (card)
        {
            card.DefaultParent = transform;
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        if(eventData.pointerDrag == null)
        {
            return;
        }
        CarMovementdScr card = eventData.pointerDrag.GetComponent<CarMovementdScr>();
        if (card)
        {
            card.DefaultTempCardParent = transform;
        }
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        if (eventData.pointerDrag == null)
        {
            return;
        }
        CarMovementdScr card = eventData.pointerDrag.GetComponent<CarMovementdScr>();
        if (card && card.DefaultTempCardParent == transform)
        {
            card.DefaultTempCardParent = card.DefaultParent;
        }
    }
}
