/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065b4c10; end: 1065b4cc3; -[SCConversationChatMention initWithUserId:range:isNonParticipant:] */

undefined1 *
FUN_1065b4c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1e28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b4cc4; end: 1065b4ce7; -[SCConversationChatMention copyWithZone:] */

undefined8 FUN_1065b4cc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065b4ce8; end: 1065b4d5f; -[SCConversationChatMention hash] */

undefined8 * FUN_1065b4ce8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1065b4df0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1065b4dfc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1065b4dfc;
        }
        goto LAB_1065b4df0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1065b4dfc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1065b4d60; end: 1065b4e17; -[SCConversationChatMention isEqual:] */

long FUN_1065b4d60(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1065b4df0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1065b4dfc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1065b4dfc;
        }
        goto LAB_1065b4df0;
      }
    }
    lVar3 = 0;
  }
LAB_1065b4dfc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1065b4e18; end: 1065b4e1f; -[SCConversationChatMention userId] */

undefined8 FUN_1065b4e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065b4e20; end: 1065b4e27; -[SCConversationChatMention range] */

undefined8 FUN_1065b4e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065b4e28; end: 1065b4e2f; -[SCConversationChatMention isNonParticipant] */

undefined1 FUN_1065b4e28(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1065b4e30; end: 1065b4e5f; -[SCConversationChatMention .cxx_destruct] */

void FUN_1065b4e30(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1065b4e60; end: 1065b4eab; -[SCConversationTextRange initWithLocation:length:] */

void FUN_1065b4e60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1e30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}



/* Entry: 1065b4eac; end: 1065b4ecf; -[SCConversationTextRange copyWithZone:] */

undefined8 FUN_1065b4eac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065b4ed0; end: 1065b4f2b; -[SCConversationTextRange hash] */

ulong * FUN_1065b4ed0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  ulong uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(ulong *)(param_1 + 8) & 0xffffffff;
  uStack_28 = *(ulong *)(param_1 + 8) >> 0x20;
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(int *)((long)puVar1 + 8) != *(int *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(int *)((long)puVar1 + 0xc) == *(int *)(param_3 + 0xc));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 1065b4f2c; end: 1065b4fc3; -[SCConversationTextRange isEqual:] */

bool FUN_1065b4f2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(int *)(param_1 + 8) != *(int *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(int *)(param_1 + 0xc) == *(int *)(param_3 + 0xc);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1065b4fc4; end: 1065b4fcb; -[SCConversationTextRange location] */

undefined4 FUN_1065b4fc4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1065b4fcc; end: 1065b4fd3; -[SCConversationTextRange length] */

undefined4 FUN_1065b4fcc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1065b4fd4; end: 1065b5037;  */

undefined ** FUN_1065b4fd4(void)

{
  int iVar1;
  
  if ((bRam000000011381ac08 & 1) == 0) {
    iVar1 = 0x1381ac08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&SUB_105004938,&PTR_PTR_113153c58,0x100000000);
      ___cxa_guard_release(0x11381ac08);
    }
  }
  return &PTR_PTR_113153c58;
}



/* Entry: 1065b5038; end: 1065b50bf;  */

void FUN_1065b5038(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065b50c0; end: 1065b514b;  */

void FUN_1065b50c0(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065b514c; end: 1065b5157; +[SCConversationChatDraft table] */

undefined * FUN_1065b514c(void)

{
  return &UNK_10f384e6e;
}



/* Entry: 1065b5158; end: 1065b563b; +[SCConversationChatDraft immutableObjectParse:bufferSize:] */

void FUN_1065b5158(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  uVar5 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar5);
  puVar7 = PTR_PTR_1126cbbe0;
  _objc_alloc();
  lVar9 = (long)*piVar1;
  uVar8 = *(ushort *)((long)piVar1 - lVar9);
  if (uVar8 < 5) {
    puVar18 = (undefined *)0x0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar1 - lVar9))[2];
    if (uVar12 == 0) {
      puVar18 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar12);
      puVar18 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = (long)*piVar1;
      uVar8 = *(ushort *)((long)piVar1 - lVar9);
    }
    lVar9 = -lVar9;
    if (6 < uVar8) {
      if (*(short *)((long)piVar1 + lVar9 + 6) == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc();
        func_0x00010bffa160();
        lVar9 = -(long)*piVar1;
        uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if (uVar8 < 9) {
        puVar15 = (undefined *)0x0;
        puVar17 = (undefined *)0x0;
      }
      else {
        uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 8);
        if (uVar12 == 0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          uVar14 = (ulong)*(uint *)((long)piVar1 + uVar12);
          puVar2 = (uint *)((long)((long)piVar1 + uVar12) + uVar14);
          puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar2);
          _objc_retainAutoreleasedReturnValue();
          if (*puVar2 != 0) {
            lVar9 = (long)param_3 + uVar14 + uVar12 + (ulong)uVar5 + 0xc;
            do {
              uVar12 = (ulong)*(uint *)(lVar9 + -8);
              puVar17 = PTR_PTR_1126cbbf8;
              _objc_alloc(PTR_PTR_1126cbbf8);
              lVar3 = lVar9 + uVar12;
              lVar10 = (long)*(int *)(lVar3 + -8);
              lVar4 = lVar9 + (uVar12 - lVar10);
              uVar8 = *(ushort *)(lVar4 + -8);
              if (uVar8 < 5) {
                puVar16 = (undefined *)0x0;
LAB_1065b5434:
                puVar19 = (undefined *)0x0;
LAB_1065b5438:
                bVar6 = false;
              }
              else {
                uVar14 = (ulong)*(ushort *)(lVar4 + -4);
                if (uVar14 == 0) {
                  puVar16 = (undefined *)0x0;
                }
                else {
                  lVar4 = lVar9 + uVar12 + uVar14;
                  puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                      lVar4 + (ulong)*(uint *)(lVar4 + -8) + -4);
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = (long)*(int *)(lVar3 + -8);
                  uVar8 = *(ushort *)(lVar9 + (uVar12 - lVar10) + -8);
                }
                lVar10 = -lVar10;
                if (uVar8 < 7) goto LAB_1065b5434;
                puVar19 = (undefined *)0x0;
                if (*(short *)(lVar9 + lVar10 + uVar12 + -2) != 0) {
                  puVar19 = PTR_PTR_1126cbc00;
                  _objc_alloc(PTR_PTR_1126cbc00);
                  func_0x00010c026c00();
                  lVar10 = -(long)*(int *)(lVar3 + -8);
                  uVar8 = *(ushort *)(lVar9 + (uVar12 - (long)*(int *)(lVar3 + -8)) + -8);
                }
                if ((uVar8 < 9) ||
                   (uVar14 = (ulong)*(ushort *)(lVar9 + lVar10 + uVar12), uVar14 == 0))
                goto LAB_1065b5438;
                bVar6 = *(char *)(lVar9 + uVar12 + uVar14 + -8) != '\0';
              }
              func_0x00010c05b9a0(puVar17,param_2,puVar16,puVar19,bVar6);
              _objc_release(puVar19);
              _objc_release(puVar16);
              func_0x00010befa120(puVar15,param_2,puVar17);
              _objc_release(puVar17);
              puVar11 = (uint *)(lVar9 + -4);
              lVar9 = lVar9 + 4;
            } while (puVar11 != puVar2 + (ulong)*puVar2 + 1);
          }
          puVar17 = puVar15;
          func_0x00010bf51e00(puVar15);
          _objc_release(puVar15);
          lVar9 = -(long)*piVar1;
          uVar8 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        if ((uVar8 < 0xb) || (uVar12 = (ulong)*(ushort *)((long)piVar1 + lVar9 + 10), uVar12 == 0))
        {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar12);
          puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      goto LAB_1065b5264;
    }
  }
  puVar15 = (undefined *)0x0;
  puVar17 = (undefined *)0x0;
  puVar13 = (undefined *)0x0;
LAB_1065b5264:
  func_0x00010c004ba0(puVar7,param_2,puVar18,puVar13,puVar17,puVar15);
  _objc_release(puVar15);
  _objc_release(puVar17);
  _objc_release(puVar13);
  _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1065b563c; end: 1065b565f; +[SCConversationChatDraft objectClassFunctionPointer] */

undefined1  [16] FUN_1065b563c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1065b5658;
  auVar1._0_8_ = 0x1065b5650;
  return auVar1;
}



/* Entry: 1065b5660; end: 1065b5793;  */

undefined1 *
FUN_1065b5660(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126f1e38;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1065b5794; end: 1065b5e23;  */

void FUN_1065b5794(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain();
  puVar11 = PTR_PTR_1126cbc08;
  _objc_retain(param_1);
  _objc_opt_self(puVar11);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_1065b5bb8:
    lVar9 = 0;
LAB_1065b5bbc:
    _objc_release(lVar9);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      lVar1 = param_1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar9 = param_1;
      if (lVar1 != 0) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar11;
        func_0x00010bf636c0();
        _objc_release(puVar11);
        func_0x0001001b9e08(puVar2,&UNK_10f384e86);
        if (puVar2 != (undefined *)0x0) {
          lVar1 = param_1;
          func_0x00010bf50280(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar3 = lVar1;
          _objc_retainAutorelease(lVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar2,1,lVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(lVar1);
          _objc_release(lVar1);
          puVar11 = puVar2;
          _sqlite3_step();
          if ((int)puVar11 == 100) {
            puVar11 = puVar2;
            _sqlite3_column_int64(puVar2,0);
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cbbe0);
            _sqlite3_column_blob(puVar2,1);
            _sqlite3_column_bytes(puVar2,1);
            puVar5 = puVar4;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar4);
            _sqlite3_reset(puVar2);
            if (puVar5 == (undefined *)0x0) goto LAB_1065b5bb8;
            puVar2 = PTR_PTR_1126cbc08;
            _objc_alloc();
            puVar4 = puVar5;
            func_0x00010bf50280(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf0e540(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            func_0x00010c0ca820(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar5;
            func_0x00010c112720(puVar5);
            _objc_retainAutoreleasedReturnValue();
            FUN_1065b5660(puVar2,puVar11,puVar4,puVar6,puVar7,puVar8);
            goto LAB_1065b58d4;
          }
        }
      }
      goto LAB_1065b5bbc;
    }
    lVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cbbe0);
    puVar5 = puVar11;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar11);
    if (puVar5 == (undefined *)0x0) goto LAB_1065b5bb8;
    puVar2 = PTR_PTR_1126cbc08;
    _objc_alloc();
    puVar4 = puVar5;
    func_0x00010bf50280(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf0e540(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0ca820(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c112720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_1065b5660(puVar2,lVar1,puVar4,puVar6,puVar7,puVar8);
LAB_1065b58d4:
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      lVar1 = param_1;
      func_0x00010bf50280(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf0e540(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0ca820(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c112720(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      _objc_retain(puVar2);
      puVar11 = puVar2;
      goto LAB_1065b5cb0;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar11 = PTR_PTR_1126cbc08;
  _objc_retain(param_1);
  _objc_opt_self(puVar11);
  puVar2 = PTR_PTR_1126cbc08;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bf50280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf0e540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0ca820(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c112720(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1065b5660(puVar2,0xffffffffffffffff,lVar1,lVar9,lVar3,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar9);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar11 = (undefined *)0x0;
LAB_1065b5cb0:
  _objc_release(puVar11);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065b5e24; end: 1065b5e87;  */

void FUN_1065b5e24(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cbbe0;
    _objc_alloc(PTR_PTR_1126cbbe0);
    func_0x00010c004ba0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065b5e88; end: 1065b5ecf; -[SCConversationChatDraftChangeRequest .cxx_destruct] */

void FUN_1065b5e88(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1065b5ed0; end: 1065b5edb; -[SCConversationChatDraftChangeRequest table] */

undefined * FUN_1065b5ed0(void)

{
  return &UNK_10f384e6e;
}



/* Entry: 1065b5edc; end: 1065b5f23; -[SCConversationChatDraftChangeRequest createTableWithSQLite:] */

void FUN_1065b5edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dddcd00,0x95,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1065b5f24; end: 1065b62ab; -[SCConversationChatDraftChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1065b5f24(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1065b5e24(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1065b62ac(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f384f06);
    if (lVar6 == 0) goto LAB_1065b6248;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1065b6248;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126cbbe0);
    func_0x00010c21c9a0(puVar7);
LAB_1065b6230:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f384ed3);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126cbbe0);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1065b6254;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_1065b6254;
    }
    FUN_1065b5e24(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1065b62ac(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f384f4e);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126cbbe0);
        func_0x00010c21c9a0(puVar7);
        goto LAB_1065b6230;
      }
    }
LAB_1065b6248:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1065b6254:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1065b62ac; end: 1065b6847;  */

ulong FUN_1065b62ac(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuStack_110 = &PTR_FUN_11092db58;
  pcStack_108 = FUN_1065b6848;
  pppuStack_f8 = &ppuStack_110;
  uVar5 = param_2;
  func_0x00010c0ca820();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(uVar5);
  uVar10 = uVar5;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  if (uVar10 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar19 = (undefined4 *)0x0;
    puVar14 = (undefined4 *)0x0;
    do {
      uVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(uVar5);
        }
        uVar15 = *(undefined8 *)(uVar13 * 8);
        _objc_retain(uVar15);
        _objc_retain(uVar15);
        uStack_118 = uVar15;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_1065b6734;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar19 < puVar14) {
          *puVar19 = (int)pppuVar6;
          puVar18 = puStack_168;
        }
        else {
          lVar17 = (long)puVar19 - (long)puStack_168;
          uVar16 = (lVar17 >> 2) + 1;
          if (uVar16 >> 0x3e != 0) {
            FUN_1065b6b88();
LAB_1065b6734:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1065b6738);
            (*pcVar4)();
          }
          uVar12 = (long)puVar14 - (long)puStack_168 >> 1;
          if (uVar12 <= uVar16) {
            uVar12 = uVar16;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar14 - (long)puStack_168)) {
            uVar12 = 0x3fffffffffffffff;
          }
          if (uVar12 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_1065b6734;
          }
          lVar7 = uVar12 << 2;
          __Znwm();
          puVar19 = (undefined4 *)(lVar7 + lVar17);
          puVar14 = (undefined4 *)(lVar7 + uVar12 * 4);
          puVar18 = puVar19 + -(lVar17 >> 2);
          *puVar19 = (int)pppuVar6;
          _memcpy(puVar18,puStack_168,lVar17);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar18;
        puVar19 = puVar19 + 1;
        _objc_release(uVar15);
        uVar13 = uVar13 + 1;
      } while (uVar10 != uVar13);
      uVar10 = uVar5;
      func_0x00010bf52a60();
    } while (uVar10 != 0);
  }
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar5);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar11 = 0x20;
  }
  else {
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_1065b64dc;
    lVar11 = 0x28;
  }
  (**(code **)((long)*pppuStack_f8 + lVar11))();
LAB_1065b64dc:
  uVar5 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  FUN_1065b6a58(param_1,uVar5);
  uVar13 = param_2;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar13 == 0) {
    uVar16 = 0;
  }
  else {
    _objc_retainAutorelease(uVar13);
    uVar12 = uVar13;
    func_0x00010bf25f00(uVar13);
    uVar8 = uVar13;
    func_0x00010c08fa60(uVar13);
    uVar16 = param_1;
    func_0x0001001d1030(param_1,uVar12,uVar8);
  }
  _objc_release(uVar13);
  uVar12 = (long)puVar19 - (long)puStack_168;
  puVar14 = (undefined4 *)&UNK_10dddcf86;
  if (uVar12 != 0) {
    puVar14 = puStack_168;
  }
  *(undefined1 *)(param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar12,4);
  func_0x0001001cddd0(param_1,uVar12,4);
  if (puStack_168 != puVar19) {
    lVar11 = (long)uVar12 >> 2;
    do {
      iVar3 = puVar14[lVar11 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                                   *(int *)(param_1 + 0x28)) - iVar3) + 4);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
  uVar8 = param_1;
  func_0x0001001ce0bc(param_1,uVar12 >> 2);
  uVar12 = param_2;
  func_0x00010c112720();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_1065b6a58(param_1,uVar12);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,10,uVar9 & 0xffffffff);
  if ((int)uVar8 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,8,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar8) + 4,0);
  }
  func_0x0001001ce220(param_1,6,uVar16 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar10 & 0xffffffff);
  uVar10 = (ulong)(uint)((iVar3 - iVar1) + iVar2);
  func_0x0001001ce548(param_1);
  _objc_release(uVar12);
  _objc_release(uVar13);
  _objc_release(uVar5);
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
  }
  uVar5 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puStack_168 != (undefined4 *)0x0) {
      __ZdlPv(puStack_168);
    }
    _objc_release(param_2);
    __Unwind_Resume();
    _objc_retain(uVar10);
    uVar13 = uVar10;
    func_0x00010c11f2a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar13 == 0) {
      uVar16 = 0;
    }
    else {
      uVar12 = uVar10;
      func_0x00010c11f2a0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uVar16 = uVar12;
      func_0x00010c09ea00(uVar12);
      uVar8 = uVar12;
      func_0x00010c08fa60(uVar12);
      *(undefined1 *)(uVar5 + 0x46) = 1;
      iVar3 = *(int *)(uVar5 + 0x20);
      iVar1 = *(int *)(uVar5 + 0x30);
      iVar2 = *(int *)(uVar5 + 0x28);
      func_0x0001001ce354(uVar5,6,uVar8,0);
      func_0x0001001ce354(uVar5,4,uVar16,0);
      uVar16 = uVar5;
      func_0x0001001ce548(uVar5,(iVar3 - iVar1) + iVar2);
      _objc_release(uVar12);
      _objc_release(uVar12);
      uVar16 = uVar16 & 0xffffffff;
    }
    _objc_release(uVar13);
    uVar13 = uVar10;
    func_0x00010c2923e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    FUN_1065b6a58(uVar5,uVar13);
    uVar8 = uVar10;
    func_0x00010c078d00(uVar10);
    *(undefined1 *)(uVar5 + 0x46) = 1;
    iVar3 = *(int *)(uVar5 + 0x20);
    iVar1 = *(int *)(uVar5 + 0x30);
    iVar2 = *(int *)(uVar5 + 0x28);
    if (uVar16 != 0) {
      func_0x0001001ce088(uVar5,4);
      func_0x0001001ce354(uVar5,6,(((*(int *)(uVar5 + 0x20) - *(int *)(uVar5 + 0x30)) +
                                   *(int *)(uVar5 + 0x28)) - (int)uVar16) + 4,0);
    }
    func_0x0001001ce2e4(uVar5,4,uVar12 & 0xffffffff);
    func_0x000100ab13ac(uVar5,8,uVar8,0);
    func_0x0001001ce548(uVar5,(iVar3 - iVar1) + iVar2);
    _objc_release(uVar13);
    _objc_release(uVar10);
    return uVar5;
  }
  return param_1;
}



/* Entry: 1065b6848; end: 1065b6a57;  */

ulong FUN_1065b6848(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010c11f2a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    lVar5 = param_2;
    func_0x00010c11f2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar6 = lVar5;
    func_0x00010c09ea00(lVar5);
    lVar7 = lVar5;
    func_0x00010c08fa60(lVar5);
    *(undefined1 *)(param_1 + 0x46) = 1;
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x28);
    func_0x0001001ce354(param_1,6,lVar7,0);
    func_0x0001001ce354(param_1,4,lVar6,0);
    uVar9 = param_1;
    func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
    _objc_release(lVar5);
    _objc_release(lVar5);
    uVar9 = uVar9 & 0xffffffff;
  }
  _objc_release(lVar4);
  lVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  FUN_1065b6a58(param_1,lVar4);
  lVar5 = param_2;
  func_0x00010c078d00(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  if (uVar9 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,6,
                        (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - (int)uVar9) + 4,0);
  }
  func_0x0001001ce2e4(param_1,4,uVar8 & 0xffffffff);
  func_0x000100ab13ac(param_1,8,lVar5,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1065b6a58; end: 1065b6b87;  */

undefined8 FUN_1065b6a58(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1065b6b38;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1065b6b38;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1065b6af8;
    param_1 = 0;
  }
  else {
LAB_1065b6af8:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_1065b6b38:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1065b6b88; end: 1065b6b9b;  */

void FUN_1065b6b88(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 1065b6b9c; end: 1065b6ba3;  */

void FUN_1065b6b9c(void)

{
  return;
}



/* Entry: 1065b6ba4; end: 1065b6bd7;  */

void FUN_1065b6ba4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_11092db58;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1065b6bd8; end: 1065b6c17;  */

void FUN_1065b6bd8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11092db58;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1065b6c18; end: 1065b6c53;  */

long FUN_1065b6c18(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11092dbc8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1065b6c54; end: 1065b6c5f;  */

undefined ** FUN_1065b6c54(void)

{
  return &PTR_DAT_11092dbc8;
}



/* Entry: 1065b6c60; end: 1065b719b; -[SCMessagingIntentDonatingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b6c60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126cbc10;
  _objc_alloc_init();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274b13c);
  *(undefined **)(param_1 + _DAT_11274b13c) = puVar1;
  _objc_release(uVar14);
  lVar2 = param_1 + _DAT_11274b140;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf50180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,PTR_DAT_1126a5500);
  lVar2 = lVar4;
  if ((int)lVar3 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar4);
  puVar1 = PTR_PTR_1126cbc18;
  _objc_alloc();
  lVar3 = lVar2;
  func_0x00010c15cc60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e140();
  lVar17 = (long)_DAT_11274b144;
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  *(undefined **)(param_1 + lVar17) = puVar1;
  _objc_release(uVar14);
  _objc_release(lVar3);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065b719c;
  puStack_90 = &UNK_11092dbf8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274b148);
  *(undefined **)(param_1 + _DAT_11274b148) = puVar1;
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274b14c);
  *(undefined **)(param_1 + _DAT_11274b14c) = puVar1;
  _objc_release(uVar14);
  lVar3 = param_1;
  func_0x00010bdf3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274b150);
  *(long *)(param_1 + _DAT_11274b150) = lVar3;
  _objc_release(uVar14);
  puVar1 = PTR_PTR_1126cbc20;
  _objc_alloc();
  lVar18 = (long)_DAT_11274b154;
  lVar3 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar17);
  func_0x00010c0d5c40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011f40();
  uVar15 = *(undefined8 *)(param_1 + _DAT_11274b158);
  *(undefined **)(param_1 + _DAT_11274b158) = puVar1;
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126cbc28;
  _objc_alloc();
  lVar16 = (long)_DAT_11274b15c;
  lVar3 = param_1 + lVar16;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b160;
  _objc_loadWeakRetained();
  lVar7 = lVar4;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained(lVar18);
  lVar8 = lVar18;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11274b164;
  _objc_loadWeakRetained(lVar17);
  lVar9 = lVar17;
  func_0x00010bfcf900();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11274b168;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010c2916a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274b16c;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bb80();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11274b170);
  *(undefined **)(param_1 + _DAT_11274b170) = puVar1;
  _objc_release(uVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  param_1 = param_1 + lVar16;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bfac0();
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar2);
  return;
}



/* Entry: 1065b719c; end: 1065b721b;  */

void FUN_1065b719c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065b721c; end: 1065b725f;  */

void FUN_1065b721c(void)

{
  return;
}



/* Entry: 1065b7260; end: 1065b737f; -[SCMessagingIntentDonatingEntryPoint _createOneOnOneConvoDonator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b7260(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126cbc30;
  _objc_alloc(PTR_PTR_1126cbc30);
  lVar2 = param_1 + _DAT_11274b160;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b174;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11274b15c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0496e0(puVar1,param_2,lVar3,lVar5,lVar8,*(undefined8 *)(param_1 + _DAT_11274b13c));
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065b7380; end: 1065b750b; -[SCMessagingIntentDonatingEntryPoint _createGroupConvoDonator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b7380(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126cbc38;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274b174;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b164;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11274b15c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274b178;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049640(puVar1,param_2,lVar3,lVar5,lVar8,lVar12,
                      *(undefined8 *)(param_1 + _DAT_11274b13c));
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065b750c; end: 1065b76d3; -[SCMessagingIntentDonatingEntryPoint _createStoriesDonator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b750c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126cbc40;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11274b15c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11274b154;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11274b17c;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c0d4b00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_11274b178;
  lVar9 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf1ad00();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar11 = lVar14;
  func_0x00010bf1c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11274b174;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b200(puVar1,param_2,lVar4,lVar6,lVar8,lVar10,lVar11,lVar13,
                      *(undefined8 *)(param_1 + _DAT_11274b13c));
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar14);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065b76d4; end: 1065b772f; -[SCMessagingIntentDonatingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b76d4(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf6b3e0(*(undefined8 *)(param_1 + _DAT_11274b170),param_2,0);
  puStack_28 = PTR_PTR_1126f1e40;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065b7730; end: 1065b7843; -[SCMessagingIntentDonatingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065b7730(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b16c);
  _objc_destroyWeak(param_1 + _DAT_11274b17c);
  _objc_destroyWeak(param_1 + _DAT_11274b164);
  _objc_destroyWeak(param_1 + _DAT_11274b154);
  _objc_destroyWeak(param_1 + _DAT_11274b140);
  _objc_destroyWeak(param_1 + _DAT_11274b178);
  _objc_destroyWeak(param_1 + _DAT_11274b15c);
  _objc_destroyWeak(param_1 + _DAT_11274b180);
  _objc_destroyWeak(param_1 + _DAT_11274b168);
  _objc_destroyWeak(param_1 + _DAT_11274b174);
  _objc_destroyWeak(param_1 + _DAT_11274b160);
  _objc_storeStrong(param_1 + _DAT_11274b170,0);
  _objc_storeStrong(param_1 + _DAT_11274b150,0);
  _objc_storeStrong(param_1 + _DAT_11274b14c,0);
  _objc_storeStrong(param_1 + _DAT_11274b148,0);
  _objc_storeStrong(param_1 + _DAT_11274b158,0);
  _objc_storeStrong(param_1 + _DAT_11274b144,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274b13c,0);
  return;
}



/* Entry: 1065b7844; end: 1065b7953; -[SCMessagingIntentDonationListener initWithFeatureSettingsService:nativeSendAttemptEventObservable:oneOnOneDonator:groupDonator:] */

undefined1 *
FUN_1065b7844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1e48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    func_0x00010be66620(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b7954; end: 1065b7a2f; -[SCMessagingIntentDonationListener _observeMessagingIntentDonationEvents:] */

void FUN_1065b7954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b7a30; end: 1065b7a77;  */

void FUN_1065b7a30(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81aa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b7a78; end: 1065b7b9f; -[SCMessagingIntentDonationListener _processObservableSendAttemptEvent:] */

void FUN_1065b7a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf91040();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1065b7ba0;
    puStack_58 = &UNK_110848ab8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0bdf80(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065b7ba0; end: 1065b7be7;  */

void FUN_1065b7ba0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05b20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b7be8; end: 1065b7c3f;  */

void FUN_1065b7be8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be05ae0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b7c40; end: 1065b7c8f; -[SCMessagingIntentDonationListener _donateIntentForUserId:] */

void FUN_1065b7c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88060();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065b7c90; end: 1065b7cef; -[SCMessagingIntentDonationListener _donateIntentForGroupId:isSnap:] */

void FUN_1065b7c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88040();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065b7cf0; end: 1065b7d37; -[SCMessagingIntentDonationListener .cxx_destruct] */

void FUN_1065b7cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b7d38; end: 1065b7e1b; -[SCMessagingIntentGroupDonator initWithSnapchattersBitmojiSelfieFetcher:groupsDataFetcher:currentUserId:currentUserDisplayName:intentDonator:] */

undefined8
FUN_1065b7d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cbc48;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff8260();
  _objc_release(param_3);
  func_0x00010bff5fc0(param_1,param_2,puVar1,param_4,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1065b7e1c; end: 1065b7f3f; -[SCMessagingIntentGroupDonator initWithAvatarGenerator:groupsDataFetcher:currentUserId:currentUserDisplayName:intentDonator:] */

undefined1 *
FUN_1065b7e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1e50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b7f40; end: 1065b8067; -[SCMessagingIntentGroupDonator donateIntentIfNeededForGroupId:isSnap:] */

void FUN_1065b7f40(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = 0xffffffffffff8000;
    func_0x0001000819a8(0xffffffffffff8000,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6120(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065b8068; end: 1065b80b7;  */

void FUN_1065b8068(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05ac0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1065b80b8; end: 1065b81c7; -[SCMessagingIntentGroupDonator _donateIntentForGroup:] */

void FUN_1065b80b8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = 0xffffffffffff8000;
    func_0x0001000819a8(0xffffffffffff8000,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfbf5c0(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065b81c8; end: 1065b821b;  */

void FUN_1065b81c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdeab40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b821c; end: 1065b8363; -[SCMessagingIntentGroupDonator _createAndDonateIntentForGroup:groupBitmojiAvatarImage:] */

void FUN_1065b821c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdeec60(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    _objc_alloc();
    func_0x00010c01e5a0();
    uVar3 = param_3;
    func_0x00010bfceb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a4780(puVar2,param_2,uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1065b8364;
    puStack_60 = &UNK_11088b408;
    _objc_retain(param_3);
    uStack_58 = param_3;
    puStack_50 = puVar2;
    _objc_retain(param_4);
    uStack_48 = param_4;
    _objc_retain(puVar2);
    func_0x00010bf88080(uVar3,param_2,puVar2,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(puStack_50);
    _objc_release(uStack_58);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b8364; end: 1065b8367;  */

void FUN_1065b8364(void)

{
  return;
}



/* Entry: 1065b8368; end: 1065b85c3; -[SCMessagingIntentGroupDonator _createIntentForGroup:groupBitmojiAvatarImage:] */

void FUN_1065b8368(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000108ef3728(param_3,uVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___INSpeakableString_1126cbc58;
  _objc_alloc(PTR__OBJC_CLASS___INSpeakableString_1126cbc58);
  func_0x00010c04b1e0();
  puVar4 = PTR__OBJC_CLASS___INPersonHandle_1126cbc60;
  _objc_alloc(PTR__OBJC_CLASS___INPersonHandle_1126cbc60);
  uVar5 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0604c0(puVar4);
  _objc_release(uVar5);
  puVar6 = PTR__OBJC_CLASS___INPerson_1126cbc68;
  _objc_alloc();
  uVar5 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035700();
  _objc_release(uVar5);
  puVar7 = PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70;
  _objc_alloc(PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c03d620(puVar7);
  _objc_release(uVar5);
  _objc_release(puVar8);
  if (param_4 != 0) {
    lVar9 = param_4;
    FUN_1065b8618(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___INImage_1126cbc78;
    func_0x00010bfe9800(PTR__OBJC_CLASS___INImage_1126cbc78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fa0(puVar7);
    _objc_release(puVar8);
    _objc_release(lVar9);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x28,0);
  _objc_storeStrong(param_4 + 0x20,0);
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 1065b85c4; end: 1065b8617; -[SCMessagingIntentGroupDonator .cxx_destruct] */

void FUN_1065b85c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b8618; end: 1065b8767;  */

void FUN_1065b8618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  func_0x00010c23d0a0(param_3);
  uVar4 = param_1;
  func_0x00010c14e120(param_3);
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,uVar4,0);
  _UIGraphicsGetCurrentContext();
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  _objc_release(puVar2);
  uVar4 = 0;
  _CGContextFillRect(0,0,param_1,param_2,uVar1);
  func_0x00010c23d0a0(param_3);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0x3ff0000000000000;
  uStack_50 = 0;
  uStack_58 = 0xbff0000000000000;
  uStack_48 = uVar4;
  _CGContextConcatCTM(uVar1,&uStack_70);
  uVar4 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _objc_release(param_3);
  _CGContextDrawImage(0,0,param_1,param_2,uVar1,uVar4);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065b8768; end: 1065b880b; -[SCMessagingIntentNativeTranslatorPublisher initWithNativeSendStartEventObservable:] */

undefined1 * FUN_1065b8768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1e58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    func_0x00010be666c0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b880c; end: 1065b88e7; -[SCMessagingIntentNativeTranslatorPublisher _observeNativeSendAttempts:] */

void FUN_1065b880c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b88e8; end: 1065b892f;  */

void FUN_1065b88e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82280();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065b8930; end: 1065b8957; -[SCMessagingIntentNativeTranslatorPublisher nativeSendAttemptEventObservable] */

void FUN_1065b8930(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065b8958; end: 1065b8a07; -[SCMessagingIntentNativeTranslatorPublisher _processSendStartEvent:] */

void FUN_1065b8958(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c15c200();
  if (uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c0ccde0();
    if ((uVar1 - 4 < 0x40) || (uVar1 < 3)) {
      func_0x00010be07f60(param_1,param_2,param_3);
    }
    else if (uVar1 == 3) {
      func_0x00010be07fa0(param_1,param_2,param_3);
    }
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065b8a08; end: 1065b8b83; -[SCMessagingIntentNativeTranslatorPublisher _emitNativeSendAttemptForSnapStartedEvent:] */

void FUN_1065b8a08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0fe1c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60(puVar1,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ec620(puVar1,param_2,0);
  puVar5 = puVar1;
  func_0x00010bf67000(puVar1,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf0a3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf529e0();
    _objc_release(puVar7);
    if (puVar8 == (undefined *)0x1) {
      puVar7 = puVar6;
      func_0x00010bf0a3a0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010be07f80(param_1,param_2,puVar6,1);
      _objc_release(puVar8);
    }
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065b8b84; end: 1065b8ca3; -[SCMessagingIntentNativeTranslatorPublisher _emitNativeSendAttemptForChatMessageStartedEvent:] */

void FUN_1065b8b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0fe1c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60(puVar1,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ec620(puVar1,param_2,0);
  puVar5 = puVar1;
  func_0x00010bf67000(puVar1,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf6eca0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be07f80(param_1,param_2,puVar6,0);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1065b8ca4; end: 1065b8f0f; -[SCMessagingIntentNativeTranslatorPublisher _emitNativeSendAttemptForDestinationInfo:isSnap:] */

void FUN_1065b8ca4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bf0a320();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) goto LAB_1065b8ecc;
  }
  else {
    _objc_release(lVar1);
  }
  lVar3 = param_3;
  func_0x00010bf0a3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      puVar4 = PTR_PTR_1126cbc80;
      func_0x00010bfb9140(PTR_PTR_1126cbc80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar4);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x00010bf0a320();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      puVar4 = PTR_PTR_1126cbc80;
      func_0x00010bfcf640(PTR_PTR_1126cbc80);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar6);
      _objc_release(puVar4);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
LAB_1065b8ecc:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1065b8f10; end: 1065b8f3f; -[SCMessagingIntentNativeTranslatorPublisher .cxx_destruct] */

void FUN_1065b8f10(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b8f40; end: 1065b903b; -[SCMessagingIntentOneOnOneDonator initWithSnapchattersDataFetcher:bitmojiSelfieFetcher:currentUserId:intentDonator:] */

undefined1 *
FUN_1065b8f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1e60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b903c; end: 1065b9183; -[SCMessagingIntentOneOnOneDonator donateIntentIfNeededForUserId:] */

void FUN_1065b903c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0xffffffffffff8000;
    func_0x0001000819a8(0xffffffffffff8000,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c2448c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065b9184; end: 1065b91d7;  */

void FUN_1065b9184(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be05b00();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1065b91d8; end: 1065b964f; -[SCMessagingIntentOneOnOneDonator _donateIntentForSnapchatter:] */

void FUN_1065b91d8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **unaff_x27;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000100bf119c();
  if ((int)lVar1 == 0) goto LAB_1065b95dc;
  param_2 = param_1;
  _objc_initWeak(auStack_78,param_1);
  lVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  lVar3 = param_3;
  if (lVar2 == 0) {
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        _objc_release(lVar2);
        _objc_release(lVar1);
LAB_1065b9588:
        puVar13 = auStack_78;
        _objc_loadWeakRetained();
        lVar1 = param_3;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdeab60(puVar13);
      }
      else {
        lVar4 = param_3;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar6 == 0) goto LAB_1065b9588;
        puVar7 = PTR_PTR_1126afd38;
        func_0x00010bf1b4c0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c2bc360();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010bf1bae0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010bf1acc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c2a8ea0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_3;
        func_0x00010bf1bae0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bf1c0a0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c2b8160();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar10;
        func_0x00010c2b78c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(puVar9);
        _objc_release(lVar4);
        _objc_release(lVar2);
        _objc_release(puVar8);
        _objc_release(lVar1);
        _objc_release(puVar7);
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar13;
        func_0x00010bf21f60(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b19f8;
        func_0x00010c0cbb20();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_70 = puVar8;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = 0xffffffffffff8000;
        func_0x0001000819a8(0xffffffffffff8000,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_1065b9650;
        puStack_98 = &UNK_11092dd18;
        _objc_retain(param_3);
        unaff_x27 = &puStack_b0;
        param_2 = auStack_78;
        lStack_90 = param_3;
        _objc_copyWeak(auStack_80,param_2);
        _objc_retain(lVar3);
        lStack_88 = lVar3;
        func_0x00010bfaa020(uVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar11);
        _objc_release(lStack_88);
        _objc_destroyWeak(auStack_80);
        lVar1 = lStack_90;
      }
      _objc_release(lVar1);
      _objc_release(puVar13);
    }
  }
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_78);
LAB_1065b95dc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 6);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  lVar1 = param_3 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c2923e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeab60(lVar1);
  _objc_release(param_2);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065b9650; end: 1065b96c7;  */

void FUN_1065b9650(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeab60(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065b96c8; end: 1065b98ab; -[SCMessagingIntentOneOnOneDonator _createAndDonateIntentWithFriendDisplayName:friendUserId:imageForIntent:] */

void FUN_1065b96c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb0a0;
  func_0x00010bfc8380(PTR_PTR_1126cb0a0,param_2,puVar1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    lVar5 = param_1;
    func_0x00010bdeec80(param_1,param_2,param_3,param_4,puVar4,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      puVar3 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
      _objc_alloc();
      func_0x00010c01e5a0();
      func_0x00010c1a4780();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_1065b98ac;
      puStack_80 = &UNK_11088b408;
      _objc_retain(param_4);
      uStack_78 = param_4;
      puStack_70 = puVar3;
      _objc_retain(param_5);
      uStack_68 = param_5;
      _objc_retain(puVar3);
      func_0x00010bf88080(uVar6,param_2,puVar3,&puStack_98);
      _objc_release(uStack_68);
      _objc_release(puStack_70);
      _objc_release(uStack_78);
      _objc_release(puVar3);
    }
    _objc_release(lVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065b98ac; end: 1065b98af;  */

void FUN_1065b98ac(void)

{
  return;
}



/* Entry: 1065b98b0; end: 1065b9a9f; -[SCMessagingIntentOneOnOneDonator _createIntentWithFriendDisplayName:friendUserId:convoId:imageForIntent:] */

void FUN_1065b98b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___INSpeakableString_1126cbc58;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c04b1e0();
  puVar2 = PTR__OBJC_CLASS___INPersonHandle_1126cbc60;
  _objc_alloc(PTR__OBJC_CLASS___INPersonHandle_1126cbc60);
  func_0x00010c0604c0();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___INPerson_1126cbc68;
  _objc_alloc();
  func_0x00010c035700();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70;
  _objc_alloc(PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d600(puVar4);
  _objc_release(param_5);
  _objc_release(puVar5);
  if (param_6 != 0) {
    lVar6 = param_6;
    FUN_1065b8618(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___INImage_1126cbc78;
    func_0x00010bfe9800(PTR__OBJC_CLASS___INImage_1126cbc78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fa0(puVar4);
    _objc_release(puVar5);
    _objc_release(lVar6);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_6 + 0x20,0);
  _objc_storeStrong(param_6 + 0x18,0);
  _objc_storeStrong(param_6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_6 + 8,0);
  return;
}



/* Entry: 1065b9aa0; end: 1065b9ae7; -[SCMessagingIntentOneOnOneDonator .cxx_destruct] */

void FUN_1065b9aa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065b9ae8; end: 1065b9cab; -[SCMessagingIntentRemover initWithUserId:snapchattersDataTracker:featureSettingsService:groupsDataTracker:userClearConversationEventObservable:customStoriesDataFetcher:] */

undefined1 *
FUN_1065b9ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f1e68;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010be66d20(puVar1);
    func_0x00010be67040(puVar1);
    func_0x00010beddee0(puVar1);
    uVar2 = param_8;
    func_0x00010c269d40(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1065b9cac; end: 1065b9ea3; -[SCMessagingIntentRemover _observeShareIntentsFeatureSetting:] */

void FUN_1065b9cac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  lVar2 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  puVar9 = auStack_68;
  _objc_copyWeak(auStack_70);
  lVar6 = lVar2;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar6;
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  _objc_retain(puVar9);
  puVar7 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar7 != (undefined1 *)0x0) {
    puVar7 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf1f3c0();
    _objc_release(puVar7);
    if (((ulong)puVar8 & 1) == 0) {
      param_3 = param_3 + 0x28;
      _objc_loadWeakRetained(param_3);
      func_0x00010bdf9ca0();
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 1065b9ea4; end: 1065b9f3f;  */

void FUN_1065b9ea4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f3c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained(param_1);
      func_0x00010bdf9ca0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065b9f40; end: 1065ba01b; -[SCMessagingIntentRemover _observeUserClearConversationEvents:] */

void FUN_1065b9f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ba01c; end: 1065ba063;  */

void FUN_1065ba01c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa1e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ba064; end: 1065ba157; -[SCMessagingIntentRemover _updatePrivateStories] */

void FUN_1065ba064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1055a0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1065ba158; end: 1065ba19f;  */

void FUN_1065ba158(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e440();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ba1a0; end: 1065ba2d7; -[SCMessagingIntentRemover _handlePostableCustomStories:] */

void FUN_1065ba1a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = &PTR___NSConcreteGlobalBlock_11092dd78;
  func_0x000100504554();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0d3c80();
  func_0x00010c12d500();
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010bdfa240(param_1);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar4);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  ppuVar7 = ppuVar5;
  func_0x00010c27dd80();
  if (ppuVar7 == (undefined **)0x1) {
    ppuVar7 = ppuVar5;
    func_0x00010c11ac00(ppuVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar7 = (undefined **)0x0;
  }
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1065ba2d8; end: 1065ba333;  */

void FUN_1065ba2d8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    lVar1 = param_2;
    func_0x00010c11ac00(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065ba334; end: 1065ba337; -[SCMessagingIntentRemover deleteAllIntentsOnSessionEnd:] */

void FUN_1065ba334(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteAllIntents__11255c0c8);
  return;
}



/* Entry: 1065ba338; end: 1065ba33b; -[SCMessagingIntentRemover didStartSnapchattersUpdateDataRequest:] */

void FUN_1065ba338(void)

{
  return;
}



/* Entry: 1065ba33c; end: 1065ba477; -[SCMessagingIntentRemover didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1065ba33c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 != 0) {
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1065ba478;
    puStack_58 = &UNK_1108caea8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_copyWeak(auStack_78,auStack_48);
    func_0x00010c0bc6c0(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ba478; end: 1065ba557;  */

void FUN_1065ba478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bdfa220(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065ba558; end: 1065ba55b; -[SCMessagingIntentRemover didUpdateGroupsDataRequest:groupId:] */

void FUN_1065ba558(void)

{
  return;
}



/* Entry: 1065ba55c; end: 1065ba6ab; -[SCMessagingIntentRemover didGroupsUpdateDataRequest:] */

void FUN_1065ba55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1065ba6ac;
  puStack_58 = &UNK_11085a5a8;
  _objc_copyWeak(auStack_50,auStack_48);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1065ba740;
  puStack_80 = &UNK_110842c58;
  _objc_copyWeak(auStack_78,auStack_48);
  _objc_copyWeak(auStack_a0,auStack_48);
  func_0x00010c0c0fa0(param_3);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ba6ac; end: 1065ba73f;  */

void FUN_1065ba6ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010beb3000();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    uVar3 = param_2;
    func_0x00010bfceb20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfa200(param_1);
    _objc_release(uVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ba740; end: 1065ba89f;  */

void FUN_1065ba740(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      lVar3 = param_1 + 0x20;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010beb3000();
      _objc_release(lVar3);
      if ((int)lVar4 != 0) {
        lVar3 = param_1 + 0x20;
        _objc_loadWeakRetained(lVar3);
        func_0x00010bfceb20(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdfa200(lVar3);
        _objc_release(uVar7);
        _objc_release(lVar3);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010bdfa200();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065ba8a0; end: 1065ba8e7;  */

void FUN_1065ba8a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa200();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


