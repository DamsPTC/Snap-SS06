/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1091764f8; end: 109176527; -[SCPreviewSnapSenderConfiguration setCreationDateForProfileSavedChatMedia:] */

void FUN_1091764f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109176528; end: 10917652f; -[SCPreviewSnapSenderConfiguration creationTime] */

undefined8 FUN_109176528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 109176530; end: 10917655f; -[SCPreviewSnapSenderConfiguration setCreationTime:] */

void FUN_109176530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109176560; end: 109176567; -[SCPreviewSnapSenderConfiguration snapCreationTimestampOverride] */

undefined8 FUN_109176560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 109176568; end: 109176597; -[SCPreviewSnapSenderConfiguration setSnapCreationTimestampOverride:] */

void FUN_109176568(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109176598; end: 10917659f; -[SCPreviewSnapSenderConfiguration userSession] */

undefined8 FUN_109176598(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1091765a0; end: 1091765a7; -[SCPreviewSnapSenderConfiguration storyFactory] */

undefined8 FUN_1091765a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1091765a8; end: 10917664f; -[SCPreviewSnapSenderConfiguration .cxx_destruct] */

void FUN_1091765a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109176650; end: 109176857; -[SCPreviewSnapSenderDataModel initWithFromPreview:fromReplyCamera:fromSendTo:blizzardEventsForSuccessfulSend:businessIds:recipientUsernames:recipientUserIds:phoneNumbers:additionalText:captureSessionId:storiesPostingConfig:importedContentId:] */

undefined8 *
FUN_109176650(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_112700a10;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 109176858; end: 10917687b; -[SCPreviewSnapSenderDataModel copyWithZone:] */

undefined8 FUN_109176858(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10917687c; end: 109176957; -[SCPreviewSnapSenderDataModel hash] */

ulong * FUN_10917687c(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  uStack_80 = (ulong)*(byte *)(param_1 + 9);
  uStack_78 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_109176ab0:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_109176abc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((char)puVar3[1] == (char)param_3[1] &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      uVar5 = puVar3[2];
      if ((uVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        uVar5 = puVar3[3];
        if ((uVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
          uVar5 = puVar3[4];
          if ((uVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
            uVar5 = puVar3[5];
            if ((uVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
              uVar5 = puVar3[6];
              if ((uVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
                uVar5 = puVar3[7];
                if ((uVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
                  uVar5 = puVar3[8];
                  if ((uVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
                    uVar5 = puVar3[9];
                    if ((uVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
                      puVar6 = (ulong *)puVar3[10];
                      if (puVar6 != (ulong *)param_3[10]) {
                        func_0x00010c071ae0();
                        goto LAB_109176abc;
                      }
                      goto LAB_109176ab0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_109176abc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 109176958; end: 109176ad7; -[SCPreviewSnapSenderDataModel isEqual:] */

long FUN_109176958(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109176ab0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109176abc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if (lVar3 != *(long *)(param_3 + 0x50)) {
                        func_0x00010c071ae0();
                        goto LAB_109176abc;
                      }
                      goto LAB_109176ab0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_109176abc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 109176ad8; end: 109176adf; -[SCPreviewSnapSenderDataModel fromPreview] */

undefined1 FUN_109176ad8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 109176ae0; end: 109176ae7; -[SCPreviewSnapSenderDataModel fromReplyCamera] */

undefined1 FUN_109176ae0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 109176ae8; end: 109176aef; -[SCPreviewSnapSenderDataModel fromSendTo] */

undefined1 FUN_109176ae8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 109176af0; end: 109176af7; -[SCPreviewSnapSenderDataModel blizzardEventsForSuccessfulSend] */

undefined8 FUN_109176af0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109176af8; end: 109176aff; -[SCPreviewSnapSenderDataModel businessIds] */

undefined8 FUN_109176af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109176b00; end: 109176b07; -[SCPreviewSnapSenderDataModel recipientUsernames] */

undefined8 FUN_109176b00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109176b08; end: 109176b0f; -[SCPreviewSnapSenderDataModel recipientUserIds] */

undefined8 FUN_109176b08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 109176b10; end: 109176b17; -[SCPreviewSnapSenderDataModel phoneNumbers] */

undefined8 FUN_109176b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109176b18; end: 109176b1f; -[SCPreviewSnapSenderDataModel additionalText] */

undefined8 FUN_109176b18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 109176b20; end: 109176b27; -[SCPreviewSnapSenderDataModel captureSessionId] */

undefined8 FUN_109176b20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 109176b28; end: 109176b2f; -[SCPreviewSnapSenderDataModel storiesPostingConfig] */

undefined8 FUN_109176b28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 109176b30; end: 109176b37; -[SCPreviewSnapSenderDataModel importedContentId] */

undefined8 FUN_109176b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 109176b38; end: 109176bbb; -[SCPreviewSnapSenderDataModel .cxx_destruct] */

void FUN_109176b38(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 109176bbc; end: 109176bd7; +[SCPreviewSnapSenderDataModelBuilder previewSnapSenderDataModel] */

void FUN_109176bbc(void)

{
  _objc_alloc_init(PTR_PTR_1126cbed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109176bd8; end: 109176eff; +[SCPreviewSnapSenderDataModelBuilder previewSnapSenderDataModelFromExistingPreviewSnapSenderDataModel:] */

void FUN_109176bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  
  puVar1 = PTR_PTR_1126cbed8;
  _objc_retain(param_3);
  func_0x00010c111ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfbada0(param_3);
  puVar3 = puVar1;
  func_0x00010c2ae820(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfbae80(param_3);
  puVar4 = puVar3;
  func_0x00010c2ae840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfbaf40(param_3);
  puVar5 = puVar4;
  func_0x00010c2ae860(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf1ce40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2a95a0(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf24f00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010c2a9aa0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c122ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2b69a0(puVar8,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_3;
  func_0x00010c122e60();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010c2b6980(puVar10,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x00010c0fb120(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar12;
  func_0x00010c2b55c0(puVar12,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c2a7fa0(puVar14,param_2,uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf31200(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2aa1c0(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c258a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar18;
  func_0x00010c2ba320(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010bfea5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar22 = puVar20;
  func_0x00010c2afb40(puVar20,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  _objc_release(puVar20);
  _objc_release(uVar19);
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(uVar13);
  _objc_release(puVar12);
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 109176f00; end: 109176f5b; -[SCPreviewSnapSenderDataModelBuilder build] */

void FUN_109176f00(void)

{
  _objc_alloc(PTR_PTR_1126dd928);
  func_0x00010c016800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109176f5c; end: 109176f63; -[SCPreviewSnapSenderDataModelBuilder withFromPreview:] */

void FUN_109176f5c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 109176f64; end: 109176f6b; -[SCPreviewSnapSenderDataModelBuilder withFromReplyCamera:] */

void FUN_109176f64(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 109176f6c; end: 109176f73; -[SCPreviewSnapSenderDataModelBuilder withFromSendTo:] */

void FUN_109176f6c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 109176f74; end: 109176fab; -[SCPreviewSnapSenderDataModelBuilder withBlizzardEventsForSuccessfulSend:] */

long FUN_109176f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109176fac; end: 109176fe3; -[SCPreviewSnapSenderDataModelBuilder withBusinessIds:] */

long FUN_109176fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109176fe4; end: 10917701b; -[SCPreviewSnapSenderDataModelBuilder withRecipientUsernames:] */

long FUN_109176fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10917701c; end: 109177053; -[SCPreviewSnapSenderDataModelBuilder withRecipientUserIds:] */

long FUN_10917701c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109177054; end: 10917708b; -[SCPreviewSnapSenderDataModelBuilder withPhoneNumbers:] */

long FUN_109177054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10917708c; end: 1091770c3; -[SCPreviewSnapSenderDataModelBuilder withAdditionalText:] */

long FUN_10917708c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091770c4; end: 1091770fb; -[SCPreviewSnapSenderDataModelBuilder withCaptureSessionId:] */

long FUN_1091770c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1091770fc; end: 109177133; -[SCPreviewSnapSenderDataModelBuilder withStoriesPostingConfig:] */

long FUN_1091770fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109177134; end: 10917716b; -[SCPreviewSnapSenderDataModelBuilder withImportedContentId:] */

long FUN_109177134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10917716c; end: 1091771ef; -[SCPreviewSnapSenderDataModelBuilder .cxx_destruct] */

void FUN_10917716c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1091771f0; end: 10917722f; +[SCContentDeliveryGlobalScopeAccess contentDelivery] */

void FUN_1091771f0(void)

{
  if (lRam00000001137317e8 != -1) {
    func_0x000107c27d9c(0x1137317e8,&PTR___NSConcreteGlobalBlock_110adeba0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfe63b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uRam00000001137317e0,PTR_s_ifExposed_1125d72b0);
  return;
}



/* Entry: 109177230; end: 109177297;  */

void FUN_109177230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd930;
  _objc_opt_class(PTR_PTR_1126dd930);
  uVar3 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar2,&PTR___NSConcreteGlobalBlock_110adebe0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001137317e0;
  uRam00000001137317e0 = uVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109177298; end: 10917729f;  */

void FUN_109177298(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4c250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_contentDelivery_1125b0a38);
  return;
}



/* Entry: 1091772a0; end: 1091772ff; +[SCS2CellId cellIdForLatLong:] */

void FUN_1091772a0(double param_1,double param_2,undefined8 param_3)

{
  double dStack_30;
  double dStack_28;
  
  dStack_30 = param_1 * 0.017453292519943295;
  dStack_28 = param_2 * 0.017453292519943295;
  FUN_10917abc0(&dStack_30);
  _objc_alloc(param_3);
  func_0x00010c040dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109177300; end: 10917737f; +[SCS2CellId cellIdForLatLong:atLevel:] */

void FUN_109177300(double param_1,double param_2,undefined8 param_3)

{
  double dStack_40;
  double dStack_38;
  
  dStack_40 = param_1 * 0.017453292519943295;
  dStack_38 = param_2 * 0.017453292519943295;
  FUN_10917abc0(&dStack_40);
  _objc_alloc(param_3);
  func_0x00010c040dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109177380; end: 10917743b; +[SCS2CellId cellIdForToken:] */

void FUN_109177380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc3520();
  func_0x000107c278b8(auStack_48,uVar1);
  FUN_10917a84c(auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  _objc_alloc(param_1);
  func_0x00010c040dc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10917743c; end: 109177483; -[SCS2CellId initWithS2CellId:] */

void FUN_10917743c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700a18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 109177484; end: 10917748b; -[SCS2CellId getId] */

undefined8 FUN_109177484(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10917748c; end: 10917752b; -[SCS2CellId token] */

void FUN_10917748c(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_10917a770(appuStack_48,param_1 + 8);
  cVar2 = cStack_31;
  pppuVar1 = (undefined8 ***)appuStack_48[0];
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf68f00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  if (-1 < cVar2) {
    pppuVar1 = appuStack_48;
  }
  func_0x00010c25d8e0(puVar4,param_2,pppuVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  if (cStack_31 < '\0') {
    __ZdlPv(appuStack_48[0]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10917752c; end: 10917759b; -[SCS2CellId latlng] */

void FUN_10917752c(long param_1)

{
  double dVar1;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  FUN_10917adb8(&dStack_48,param_1 + 8);
  dVar1 = dStack_38;
  _atan2(dStack_38,SQRT(dStack_40 * dStack_40 + dStack_48 * dStack_48));
  _atan2(dStack_40,dStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CLLocationCoordinate2DMake_110349b58)
            (dVar1 * 57.29577951308232,dStack_40 * 57.29577951308232);
  return;
}



/* Entry: 10917759c; end: 1091775a3; -[SCS2CellId setId:] */

void FUN_10917759c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1091775a4; end: 1091775ab; -[SCS2CellId getS2CellId] */

undefined8 FUN_1091775a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1091775ac; end: 1091775ef; -[SCS2CellId parent] */

void FUN_1091775ac(void)

{
  _objc_alloc(PTR_PTR_1126b6598);
  func_0x00010c040dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091775f0; end: 10917763f; -[SCS2CellId parentAtLevel:] */

void FUN_1091775f0(void)

{
  _objc_alloc(PTR_PTR_1126b6598);
  func_0x00010c040dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109177640; end: 109177647; -[SCS2CellId level] */

int FUN_109177640(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(param_1 + 8);
  uVar2 = (uint)uVar3;
  if ((uVar3 & 1) == 0) {
    uVar1 = (uint)(uVar3 >> 0x20);
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
    iVar4 = 0xf;
    if (uVar2 == 0) {
      iVar4 = -1;
    }
    uVar1 = uVar1 & -uVar1;
    if ((uVar1 & 0x5555) != 0) {
      iVar4 = iVar4 + 8;
    }
    if ((uVar1 & 0x550055) != 0) {
      iVar4 = iVar4 + 4;
    }
    if ((uVar1 & 0x5050505) != 0) {
      iVar4 = iVar4 + 2;
    }
    if ((uVar1 & 0x11111111) != 0) {
      iVar4 = iVar4 + 1;
    }
    return iVar4;
  }
  return 0x1e;
}



/* Entry: 109177648; end: 1091777a3; -[SCS2CellId edgeNeighbors] */

undefined * FUN_109177648(double param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10917b1a4(param_2 + 8,auStack_68);
  puVar3 = PTR_PTR_1126b6598;
  _objc_alloc();
  func_0x00010c040dc0();
  puVar4 = PTR_PTR_1126b6598;
  puStack_88 = puVar3;
  _objc_alloc();
  func_0x00010c040dc0();
  puVar5 = PTR_PTR_1126b6598;
  puStack_80 = puVar4;
  _objc_alloc();
  func_0x00010c040dc0();
  puVar6 = PTR_PTR_1126b6598;
  puStack_78 = puVar5;
  _objc_alloc();
  func_0x00010c040dc0();
  uVar9 = (uint)&puStack_88;
  uVar10 = 4;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar8 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  __Unwind_Resume(puVar8);
  if (0x1d < (int)uVar10) {
    uVar10 = 0x1e;
  }
  uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar9 <= (int)uVar10) {
    iVar2 = -uVar10;
    uVar11 = uVar10;
    do {
      dVar12 = 2.0604227389984717;
      _ldexp(iVar2);
      uVar10 = uVar11;
      if (param_1 <= dVar12 * 6367000.0 * 0.5) break;
      iVar2 = iVar2 + 1;
      bVar1 = (int)uVar9 < (int)uVar11;
      uVar10 = uVar9 - 1;
      uVar11 = uVar11 - 1;
    } while (bVar1);
  }
  if ((int)uVar10 <= (int)uVar9) {
    uVar10 = uVar9;
  }
  return (undefined *)(ulong)uVar10;
}



/* Entry: 1091777a4; end: 109177843; +[SCS2CellId levelForAccuracy:minLevel:maxLevel:] */

uint FUN_1091777a4(double param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  if (0x1d < (int)param_5) {
    param_5 = 0x1e;
  }
  param_4 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  if ((int)param_4 <= (int)param_5) {
    iVar2 = -param_5;
    uVar3 = param_5;
    do {
      dVar4 = 2.0604227389984717;
      _ldexp(iVar2);
      param_5 = uVar3;
      if (param_1 <= dVar4 * 6367000.0 * 0.5) break;
      iVar2 = iVar2 + 1;
      bVar1 = (int)param_4 < (int)uVar3;
      param_5 = param_4 - 1;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  if ((int)param_5 <= (int)param_4) {
    param_5 = param_4;
  }
  return param_5;
}



/* Entry: 109177844; end: 10917786f; -[SCS2CellId copyWithZone:] */

void FUN_109177844(void)

{
  _objc_alloc(PTR_PTR_1126b6598);
                    /* WARNING: Could not recover jumptable at 0x00010c040dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 109177870; end: 109177927; -[SCS2CellId isEqual:] */

bool FUN_109177870(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126b6598;
    _objc_opt_class(PTR_PTR_1126b6598);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
    }
    else {
      _objc_retain(param_3);
      func_0x00010bfc6400(param_1);
      uVar3 = param_3;
      func_0x00010bfc6400(param_3);
      bVar1 = param_1 == uVar3;
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109177928; end: 10917792b; -[SCS2CellId hash] */

void FUN_109177928(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getId_1125cf2a8);
  return;
}



/* Entry: 10917792c; end: 109177933; -[SCS2CellId .cxx_construct] */

void FUN_10917792c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 109177934; end: 109177c27; -[SCS2Polygon initWithGeofilterPolygon:] */

undefined8 *
FUN_109177934(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 unaff_x21;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 *puStack_198;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined *puStack_118;
  double dStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puStack_118 = PTR_PTR_112700a20;
  puVar4 = &uStack_120;
  uStack_120 = param_3;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    lVar2 = param_5;
    func_0x00010bf529e0(param_5);
    FUN_109177da8(&lStack_138,lVar2);
    dVar10 = 0.0;
    _objc_retain(param_5);
    lVar3 = param_5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        lVar8 = 0;
        iVar6 = (int)lVar7;
        lVar7 = (long)iVar6;
        lVar9 = (lVar7 * 2 + (long)iVar6) * 8;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(param_5);
          }
          uVar5 = *(undefined8 *)(lVar8 * 8);
          func_0x00010bf51c80(uVar5);
          func_0x00010bf51c80(uVar5);
          dVar10 = dVar10 * 0.017453292519943295;
          param_2 = param_2 * 0.017453292519943295;
          dVar11 = dVar10;
          dStack_110 = param_2;
          _cos();
          dVar12 = dStack_110;
          _cos();
          dVar13 = dStack_110;
          _sin();
          _sin();
          lVar7 = lVar7 + 1;
          pdVar1 = (double *)(lStack_138 + lVar9);
          *pdVar1 = dVar11 * dVar12;
          pdVar1[1] = dVar11 * dVar13;
          pdVar1[2] = dVar10;
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x18;
        } while (lVar3 != lVar8);
        lVar3 = param_5;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(param_5);
    uVar5 = 0xa8;
    __Znwm();
    FUN_10917d918();
    FUN_10917ef74(uVar5);
    puStack_198 = (undefined8 *)0x8;
    __Znwm();
    *puStack_198 = uVar5;
    unaff_x21 = 0x50;
    __Znwm();
    FUN_109180780();
    puVar4[1] = unaff_x21;
    if (puStack_198 != (undefined8 *)0x0) {
      __ZdlPv();
    }
    if (lStack_138 != 0) {
      lStack_130 = lStack_138;
      __ZdlPv();
    }
  }
  lVar2 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __ZdlPv(unaff_x21);
    if (puStack_198 != (undefined8 *)0x0) {
      __ZdlPv(puStack_198);
    }
    if (lStack_138 != 0) {
      lStack_130 = lStack_138;
      __ZdlPv();
    }
    _objc_release(puVar4);
    _objc_release(param_5);
    __Unwind_Resume();
    puVar4 = *(undefined8 **)(lVar2 + 8);
    FUN_10918162c(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 109177c28; end: 109177c4b; -[SCS2Polygon area] */

double FUN_109177c28(double param_1,long param_2)

{
  FUN_10918162c(*(undefined8 *)(param_2 + 8));
  return param_1 * 40589768000000.0;
}



/* Entry: 109177c4c; end: 109177d33; +[SCS2Polygon polygonFromIntersectionOf:withPolygon:] */

void FUN_109177c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  *puVar1 = &PTR_FUN_110adef78;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = &PTR_FUN_110aded28;
  puVar1[6] = 0;
  puVar1[5] = 0x3ff0000000000000;
  puVar1[8] = 0xc00921fb54442d18;
  puVar1[7] = 0x400921fb54442d18;
  *(undefined2 *)(puVar1 + 9) = 1;
  *(undefined4 *)((long)puVar1 + 0x4c) = 0;
  FUN_109182270(0x3cdb05876e5b0120);
  puVar2 = PTR_PTR_1126dd7c0;
  _objc_alloc_init();
  *(undefined8 **)(puVar2 + 8) = puVar1;
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 109177d34; end: 109177d3f; +[SCS2Polygon intersects:withPolygon:] */

long FUN_109177d34(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar2 = *(ulong *)(param_3 + 8);
  lVar6 = *(long *)(param_4 + 8);
  if (((*(long *)(uVar2 + 0x10) - (long)*(ulong **)(uVar2 + 8) & 0x7fffffff8U) == 8) &&
     ((*(long *)(lVar6 + 0x10) - (long)*(ulong **)(lVar6 + 8) & 0x7fffffff8U) == 8)) {
    uVar7 = **(ulong **)(lVar6 + 8);
    uVar2 = **(ulong **)(uVar2 + 8);
    iVar8 = *(int *)(uVar7 + 8);
    do {
      uVar4 = uVar7;
      uVar7 = uVar2;
      bVar1 = *(int *)(uVar7 + 8) < iVar8;
      uVar2 = uVar4;
      iVar8 = *(int *)(uVar7 + 8);
    } while (bVar1);
    lVar6 = uVar7 + 0x20;
    func_0x00010917d2dc(lVar6,uVar4 + 0x20);
    if ((int)lVar6 == 0) {
      return lVar6;
    }
    uVar2 = uVar7;
    FUN_10917e38c(uVar7,*(long *)(uVar4 + 0x10) +
                        (ulong)(-*(int *)(uVar4 + 8) & (-*(int *)(uVar4 + 8) >> 0x1f ^ 0xffffffffU))
                        * 0x18);
    if (((int)uVar2 == 0) ||
       (uVar2 = uVar7,
       FUN_10917eb5c(uVar7,*(long *)(uVar4 + 0x10) +
                           (ulong)(-*(int *)(uVar4 + 8) &
                                  (-*(int *)(uVar4 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
       -1 < (int)uVar2)) {
      uVar2 = uVar7;
      FUN_10917fc04(uVar7,uVar4,&stack0xffffffffffffffc0);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      lVar6 = uVar4 + 0x20;
      func_0x00010917d2a4(lVar6,uVar7 + 0x20);
      if ((((int)lVar6 == 0) ||
          (uVar2 = uVar4,
          FUN_10917e38c(uVar4,*(long *)(uVar7 + 0x10) +
                              (ulong)(-*(int *)(uVar7 + 8) &
                                     (-*(int *)(uVar7 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
          (int)uVar2 == 0)) ||
         (FUN_10917eb5c(uVar4,*(long *)(uVar7 + 0x10) +
                              (ulong)(-*(int *)(uVar7 + 8) &
                                     (-*(int *)(uVar7 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
         -1 < (int)uVar4)) {
        return 0;
      }
    }
    return 1;
  }
  lVar5 = uVar2 + 0x20;
  func_0x00010917d2dc(lVar5,lVar6 + 0x20);
  if ((int)lVar5 != 0) {
    if ((*(char *)(uVar2 + 0x49) == '\0') && (*(char *)(lVar6 + 0x49) == '\0')) {
      lVar5 = *(long *)(uVar2 + 8);
      lVar9 = *(long *)(uVar2 + 0x10);
      if (0 < (int)((ulong)(lVar9 - lVar5) >> 3)) {
        lVar12 = 0;
        lVar10 = *(long *)(lVar6 + 8);
        lVar11 = *(long *)(lVar6 + 0x10);
        do {
          if (0 < (int)((ulong)(lVar11 - lVar10) >> 3)) {
            lVar5 = 0;
            do {
              uVar7 = *(ulong *)(*(long *)(uVar2 + 8) + lVar12 * 8);
              FUN_10917f878(uVar7,*(undefined8 *)(lVar10 + lVar5 * 8));
              if ((uVar7 & 1) != 0) goto LAB_109181ba0;
              lVar5 = lVar5 + 1;
              lVar10 = *(long *)(lVar6 + 8);
              lVar11 = *(long *)(lVar6 + 0x10);
            } while (lVar5 < (int)((ulong)(lVar11 - lVar10) >> 3));
            lVar5 = *(long *)(uVar2 + 8);
            lVar9 = *(long *)(uVar2 + 0x10);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)((ulong)(lVar9 - lVar5) >> 3));
      }
      lVar5 = 0;
    }
    else {
      uVar7 = uVar2;
      FUN_1091818f4(uVar2,lVar6);
      if ((uVar7 & 1) == 0) {
        lVar5 = *(long *)(uVar2 + 8);
        lVar9 = *(long *)(uVar2 + 0x10);
        if ((int)((ulong)(lVar9 - lVar5) >> 3) < 1) {
          return 0;
        }
        lVar12 = 0;
        do {
          uVar7 = *(ulong *)(lVar5 + lVar12 * 8);
          if (((*(byte *)(uVar7 + 0x4c) & 1) == 0) &&
             (lVar10 = *(long *)(lVar6 + 8),
             0 < (int)((ulong)(*(long *)(lVar6 + 0x10) - lVar10) >> 3))) {
            lVar5 = 0;
            bVar1 = false;
            do {
              uVar3 = *(undefined8 *)(lVar10 + lVar5 * 8);
              FUN_10917f694(uVar3,uVar7);
              if ((int)uVar3 == 0) {
                uVar4 = uVar7;
                FUN_10917f694(uVar7,*(undefined8 *)(*(long *)(lVar6 + 8) + lVar5 * 8));
                if ((uVar4 & 1) == 0) {
                  uVar4 = *(ulong *)(*(long *)(lVar6 + 8) + lVar5 * 8);
                  FUN_10917f878(uVar4,uVar7);
                  if ((uVar4 & 1) != 0) {
                    return 1;
                  }
                }
              }
              else {
                bVar1 = (bool)(bVar1 ^ 1);
              }
              lVar5 = lVar5 + 1;
              lVar10 = *(long *)(lVar6 + 8);
            } while (lVar5 < (int)((ulong)(*(long *)(lVar6 + 0x10) - lVar10) >> 3));
            if (bVar1) {
              return 1;
            }
            lVar5 = *(long *)(uVar2 + 8);
            lVar9 = *(long *)(uVar2 + 0x10);
          }
          lVar12 = lVar12 + 1;
          if ((int)((ulong)(lVar9 - lVar5) >> 3) <= lVar12) {
            return 0;
          }
        } while( true );
      }
LAB_109181ba0:
      lVar5 = 1;
    }
  }
  return lVar5;
}



/* Entry: 109177d40; end: 109177d4b; -[SCS2Polygon contains:] */

void FUN_109177d40(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [8];
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  undefined **ppuStack_40;
  byte bStack_38;
  undefined7 uStack_37;
  
  uVar1 = *(ulong *)(param_1 + 8);
  lVar3 = *(long *)(param_3 + 8);
  if (((*(long *)(uVar1 + 0x10) - (long)*(ulong **)(uVar1 + 8) & 0x7fffffff8U) == 8) &&
     ((*(long *)(lVar3 + 0x10) - (long)*(long **)(lVar3 + 8) & 0x7fffffff8U) == 8)) {
    uVar1 = **(ulong **)(uVar1 + 8);
    lVar4 = **(long **)(lVar3 + 8);
    lVar3 = uVar1 + 0x20;
    FUN_10917d2a4(lVar3,lVar4 + 0x20);
    if (((int)lVar3 != 0) &&
       ((uVar2 = uVar1,
        FUN_10917e38c(uVar1,*(long *)(lVar4 + 0x10) +
                            (ulong)(-*(int *)(lVar4 + 8) &
                                   (-*(int *)(lVar4 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
        (uVar2 & 1) != 0 ||
        (uVar2 = uVar1,
        FUN_10917eb5c(uVar1,*(long *)(lVar4 + 0x10) +
                            (ulong)(-*(int *)(lVar4 + 8) &
                                   (-*(int *)(lVar4 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
        -1 < (int)uVar2)))) {
      ppuStack_40 = &PTR_FUN_110adeea8;
      bStack_38 = 0;
      uVar2 = uVar1;
      FUN_10917fc04(uVar1,lVar4,&ppuStack_40);
      if (((uVar2 & 1) == 0) &&
         (((((bStack_38 & 1) == 0 &&
            (FUN_10917d374(auStack_68,uVar1 + 0x20,lVar4 + 0x20), dStack_60 == -1.5707963267948966))
           && (dStack_58 == 1.5707963267948966)) &&
          ((dStack_48 - dStack_50 == 6.283185307179586 &&
           (lVar3 = lVar4,
           FUN_10917e38c(lVar4,*(long *)(uVar1 + 0x10) +
                               (ulong)(-*(int *)(uVar1 + 8) &
                                      (-*(int *)(uVar1 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
           (int)lVar3 != 0)))))) {
        FUN_10917eb5c(lVar4,*(long *)(uVar1 + 0x10) +
                            (ulong)(-*(int *)(uVar1 + 8) &
                                   (-*(int *)(uVar1 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18);
      }
    }
    return;
  }
  uVar2 = uVar1 + 0x20;
  FUN_10917d2a4(uVar2,lVar3 + 0x20);
  if (((uVar2 & 1) != 0) ||
     (FUN_1091782dc(&ppuStack_40,uVar1 + 0x38,lVar3 + 0x38),
     (double)CONCAT71(uStack_37,bStack_38) - (double)ppuStack_40 == 6.283185307179586)) {
    if ((*(char *)(uVar1 + 0x49) == '\0') && (*(char *)(lVar3 + 0x49) == '\0')) {
      lVar4 = *(long *)(lVar3 + 8);
      if (0 < (int)((ulong)(*(long *)(lVar3 + 0x10) - lVar4) >> 3)) {
        lVar5 = 0;
        do {
          uVar2 = uVar1;
          func_0x000109181778(uVar1,*(undefined8 *)(lVar4 + lVar5 * 8));
          if ((uVar2 & 1) == 0) {
            return;
          }
          lVar5 = lVar5 + 1;
          lVar4 = *(long *)(lVar3 + 8);
        } while (lVar5 < (int)((ulong)(*(long *)(lVar3 + 0x10) - lVar4) >> 3));
      }
    }
    else {
      uVar2 = uVar1;
      func_0x0001091817e8(uVar1,lVar3);
      if ((int)uVar2 != 0) {
        func_0x000109181870(lVar3,uVar1);
      }
    }
  }
  return;
}



/* Entry: 109177d4c; end: 109177d53; -[SCS2Polygon getS2Polygon] */

undefined8 FUN_109177d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109177d54; end: 109177da7; -[SCS2Polygon dealloc] */

void FUN_109177d54(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  puStack_28 = PTR_PTR_112700a20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 109177da8; end: 109177e3f;  */

undefined8 * FUN_109177da8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109177e40(param_1);
    lVar2 = param_1[1];
    lVar1 = ((param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar2,lVar1);
    param_1[1] = lVar2 + lVar1;
  }
  return param_1;
}



/* Entry: 109177e40; end: 109177e8b;  */

undefined1  [16] FUN_109177e40(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_e0 [56];
  undefined8 uStack_a8;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1 + 2;
    FUN_109177ea0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  FUN_109177e8c();
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000104bd35f4();
  puVar3 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  func_0x000104bd35f4();
  uVar4 = 0;
  _time();
  uStack_a8 = uVar4;
  _localtime_r(&uStack_a8,auStack_e0);
  uVar4 = 9;
  _snprintf(puVar3,9,&UNK_10f55a2a5);
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = puVar3;
  return auVar8;
}



/* Entry: 109177e8c; end: 109177e9f;  */

undefined1  [16] FUN_109177e8c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104bd35f4();
  uVar3 = 0;
  _time();
  uStack_88 = uVar3;
  _localtime_r(&uStack_88,auStack_c0);
  uVar3 = 9;
  _snprintf(puVar2,9,&UNK_10f55a2a5);
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 109177ea0; end: 109177ee3;  */

undefined1  [16] FUN_109177ea0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104bd35f4();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar1;
    return auVar5;
  }
  func_0x000104bd35f4();
  uVar3 = 0;
  _time();
  uStack_78 = uVar3;
  _localtime_r(&uStack_78,auStack_b0);
  uVar3 = 9;
  _snprintf(puVar2,9,&UNK_10f55a2a5);
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 109177ee4; end: 109177ef7;  */

undefined1  [16] FUN_109177ee4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104bd35f4();
  uVar3 = 0;
  _time();
  uStack_58 = uVar3;
  _localtime_r(&uStack_58,auStack_90);
  uVar3 = 9;
  _snprintf(puVar1,9,&UNK_10f55a2a5);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 109177ef8; end: 109177f8f;  */

undefined1  [16] FUN_109177ef8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  uVar2 = 0;
  _time();
  uStack_48 = uVar2;
  _localtime_r(&uStack_48,auStack_80);
  uVar2 = 9;
  _snprintf(param_1,9,&UNK_10f55a2a5);
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109177f90; end: 10917819f;  */

void FUN_109177f90(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = param_2[1];
  dVar2 = param_2[2];
  dVar6 = param_1[1];
  dVar3 = param_1[2];
  dVar5 = *param_2;
  dVar7 = *param_1;
  dVar1 = -(dVar4 * dVar3) + dVar2 * dVar6;
  dVar8 = -(dVar2 * dVar7) + dVar5 * dVar3;
  dVar9 = -(dVar5 * dVar6) + dVar4 * dVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__atan2_11034bf20)
            (SQRT(dVar8 * dVar8 + dVar1 * dVar1 + dVar9 * dVar9),
             dVar6 * dVar4 + dVar5 * dVar7 + dVar2 * dVar3);
  return;
}



/* Entry: 1091781a0; end: 1091782db;  */

void FUN_1091781a0(double *param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_3;
  dVar4 = param_3[1];
  if (dVar1 - dVar4 == 6.283185307179586) {
    *param_1 = dVar1;
    param_1[1] = dVar4;
  }
  else {
    dVar2 = dVar4 - dVar1;
    dVar3 = dVar2 + 6.283185307179586;
    if (dVar3 <= 0.0) {
      dVar3 = -1.0;
    }
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    if (6.283185307179585 <= dVar3 + param_2 * 2.0) {
      param_1[1] = 3.141592653589793;
      *param_1 = -3.141592653589793;
    }
    else {
      dVar1 = dVar1 - param_2;
      _remainder(dVar1,0x401921fb54442d18);
      param_2 = param_2 + dVar4;
      _remainder(param_2,0x401921fb54442d18);
      *param_1 = dVar1;
      param_1[1] = param_2;
      dVar4 = dVar1;
      if ((dVar1 == -3.141592653589793) && (param_2 != 3.141592653589793)) {
        *param_1 = 3.141592653589793;
        dVar4 = 3.141592653589793;
      }
      if ((dVar1 != 3.141592653589793) && (param_2 == -3.141592653589793)) {
        param_1[1] = 3.141592653589793;
      }
      if (dVar4 <= -3.141592653589793) {
        *param_1 = 3.141592653589793;
      }
    }
  }
  return;
}



/* Entry: 1091782dc; end: 10917845b;  */

void FUN_1091782dc(double *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = (int)param_2;
  dVar5 = *param_3;
  dVar4 = param_3[1];
  dVar8 = *param_2;
  if (dVar5 - dVar4 == 6.283185307179586) {
    dVar4 = param_2[1];
  }
  else {
    dVar9 = param_2[1];
    if (dVar9 < dVar8) {
      bVar1 = false;
      bVar2 = false;
      if (dVar9 < dVar5) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar5) && !NAN(dVar8)) {
          bVar1 = dVar5 < dVar8;
          bVar2 = false;
        }
      }
      if ((bVar1 != bVar2) || (dVar8 - dVar9 == 6.283185307179586)) {
        bVar1 = dVar4 < dVar8;
        if ((dVar8 - dVar9 != 6.283185307179586) && (dVar4 <= dVar9 || !bVar1)) goto LAB_109178454;
        goto LAB_1091783a8;
      }
      bVar1 = false;
      bVar2 = false;
      if (dVar4 < dVar8) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar4) && !NAN(dVar9)) {
          bVar1 = dVar4 == dVar9;
          bVar2 = dVar9 <= dVar4;
        }
      }
      if (!bVar2 || bVar1) goto LAB_1091783e0;
    }
    else {
      if ((dVar5 < dVar8) || (dVar9 < dVar5)) {
        if (dVar8 <= dVar4) {
          if (dVar4 <= dVar9) goto LAB_109178454;
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
LAB_1091783a8:
        if (dVar8 - dVar9 != 6.283185307179586) {
          if (dVar5 <= dVar4) {
            bVar1 = true;
            bVar2 = false;
            if (dVar8 <= dVar4) {
              bVar1 = false;
              bVar2 = true;
              if (!NAN(dVar8) && !NAN(dVar5)) {
                bVar1 = dVar8 < dVar5;
                bVar2 = false;
              }
            }
            if (bVar1 != bVar2) goto LAB_10917840c;
          }
          else {
            bVar2 = false;
            if (dVar8 < dVar5) {
              bVar2 = bVar1;
            }
            if (bVar2) {
LAB_10917840c:
              dVar6 = (dVar8 + 3.141592653589793) - (dVar4 + -3.141592653589793);
              if (0.0 <= dVar8 - dVar4) {
                dVar6 = dVar8 - dVar4;
              }
              dVar7 = (dVar5 + 3.141592653589793) - (dVar9 + -3.141592653589793);
              if (0.0 <= dVar5 - dVar9) {
                dVar7 = dVar5 - dVar9;
              }
              if (dVar6 < dVar7) {
LAB_109178454:
                *param_1 = dVar5;
                param_1[1] = dVar9;
                return;
              }
              goto LAB_109178310;
            }
          }
        }
        *param_1 = dVar5;
        goto LAB_109178314;
      }
      bVar1 = false;
      bVar2 = true;
      if (dVar8 <= dVar4) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar4) && !NAN(dVar9)) {
          bVar1 = dVar4 == dVar9;
          bVar2 = dVar9 <= dVar4;
        }
      }
      if (!bVar2 || bVar1) {
LAB_1091783e0:
        func_0x000109177fd8();
        if (iVar3 != 0) {
          *param_1 = dVar8;
          param_1[1] = dVar9;
          return;
        }
        param_1[1] = 3.141592653589793;
        *param_1 = -3.141592653589793;
        return;
      }
    }
  }
LAB_109178310:
  *param_1 = dVar8;
LAB_109178314:
  param_1[1] = dVar4;
  return;
}



/* Entry: 10917845c; end: 10917857f;  */

uint FUN_10917845c(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (param_2[2] & 0x7ffffffe) + 0x12b9b0a1;
  iVar4 = -0x12b9b0a1 - (param_2[2] & 0x7ffffffe);
  uVar2 = ((*param_2 & 0x7ffffffe) - (param_2[1] & 0x7ffffffe)) + iVar4 ^ uVar1 >> 0xd;
  uVar3 = (iVar4 + (param_2[1] & 0x7ffffffe)) - uVar2 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 << 10;
  iVar4 = uVar3 + (param_2[4] & 0x7ffffffe);
  uVar1 = ((uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xf) + (param_2[5] & 0x7ffffffe);
  uVar2 = ((uVar2 + (param_2[3] & 0x7ffffffe)) - iVar4) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (iVar4 - uVar1) - uVar2 ^ uVar2 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 >> 0xc;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar1 >> 3;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar2 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar3 >> 0xf;
}



/* Entry: 109178580; end: 109178657;  */

void FUN_109178580(double *param_1,double *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double adStack_28 [5];
  
  dVar6 = param_2[2];
  dVar7 = ABS(dVar6);
  dVar9 = param_2[1];
  dVar8 = *param_2;
  dVar10 = ABS(dVar8);
  dVar11 = ABS(dVar9);
  lVar1 = 0;
  if (dVar10 <= dVar7) {
    lVar1 = 2;
  }
  lVar2 = 2;
  if (dVar7 < dVar11) {
    lVar2 = 1;
  }
  if (dVar10 <= dVar11) {
    lVar1 = lVar2;
  }
  adStack_28[2] = 0.0053;
  adStack_28[1] = 0.012;
  adStack_28[3] = 0.00457;
  bVar3 = false;
  bVar4 = true;
  bVar5 = false;
  if (dVar7 < dVar10) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(dVar10) && !NAN(dVar11)) {
      bVar3 = dVar10 < dVar11;
      bVar4 = dVar10 == dVar11;
      bVar5 = false;
    }
  }
  lVar2 = 2;
  if (bVar4 || bVar3 != bVar5) {
    lVar2 = lVar1 + -1;
  }
  adStack_28[lVar2 + 1] = 1.0;
  dVar11 = -(adStack_28[2] * dVar6) + adStack_28[3] * dVar9;
  dVar10 = dVar8 * -adStack_28[3] + adStack_28[1] * dVar6;
  dVar8 = dVar9 * -adStack_28[1] + adStack_28[2] * dVar8;
  dVar7 = dVar10 * dVar10 + dVar11 * dVar11 + dVar8 * dVar8;
  dVar9 = SQRT(dVar7);
  dVar6 = 1.0 / dVar9;
  if (dVar7 == 0.0) {
    dVar6 = dVar9;
  }
  *param_1 = dVar11 * dVar6;
  param_1[2] = dVar8 * dVar6;
  param_1[1] = dVar10 * dVar6;
  return;
}



/* Entry: 109178658; end: 10917873f;  */

void FUN_109178658(double *param_1,double *param_2,double *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double adStack_28 [5];
  
  dVar6 = *param_3;
  dVar9 = *param_2;
  dVar8 = param_3[2];
  dVar11 = param_2[2];
  dVar12 = param_3[1] + param_2[1];
  dVar10 = param_3[1] - param_2[1];
  dVar7 = (dVar8 + dVar11) * -dVar10 + (dVar8 - dVar11) * dVar12;
  dVar8 = (dVar6 + dVar9) * -(dVar8 - dVar11) + (dVar6 - dVar9) * (dVar8 + dVar11);
  dVar6 = -(dVar6 - dVar9) * dVar12 + dVar10 * (dVar6 + dVar9);
  if (((dVar7 == 0.0) && (dVar8 == 0.0)) && (dVar6 == 0.0)) {
    dVar6 = param_2[2];
    dVar7 = ABS(dVar6);
    dVar9 = param_2[1];
    dVar8 = *param_2;
    dVar10 = ABS(dVar8);
    dVar11 = ABS(dVar9);
    lVar1 = 0;
    if (dVar10 <= dVar7) {
      lVar1 = 2;
    }
    lVar2 = 2;
    if (dVar7 < dVar11) {
      lVar2 = 1;
    }
    if (dVar10 <= dVar11) {
      lVar1 = lVar2;
    }
    adStack_28[2] = 0.0053;
    adStack_28[1] = 0.012;
    adStack_28[3] = 0.00457;
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (dVar7 < dVar10) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(dVar10) && !NAN(dVar11)) {
        bVar3 = dVar10 < dVar11;
        bVar4 = dVar10 == dVar11;
        bVar5 = false;
      }
    }
    lVar2 = 2;
    if (bVar4 || bVar3 != bVar5) {
      lVar2 = lVar1 + -1;
    }
    adStack_28[lVar2 + 1] = 1.0;
    dVar11 = -(adStack_28[2] * dVar6) + adStack_28[3] * dVar9;
    dVar10 = dVar8 * -adStack_28[3] + adStack_28[1] * dVar6;
    dVar8 = dVar9 * -adStack_28[1] + adStack_28[2] * dVar8;
    dVar7 = dVar10 * dVar10 + dVar11 * dVar11 + dVar8 * dVar8;
    dVar9 = SQRT(dVar7);
    dVar6 = 1.0 / dVar9;
    if (dVar7 == 0.0) {
      dVar6 = dVar9;
    }
    *param_1 = dVar11 * dVar6;
    param_1[2] = dVar8 * dVar6;
    param_1[1] = dVar10 * dVar6;
    return;
  }
  param_1[1] = dVar8;
  *param_1 = dVar7;
  param_1[2] = dVar6;
  return;
}



/* Entry: 109178740; end: 109178a83;  */

double * FUN_109178740(double *param_1,double *param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  dVar14 = *param_1;
  dVar13 = *param_2;
  if ((((dVar14 == dVar13) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) ||
     (((dVar15 = *param_3, dVar13 == dVar15 && (param_2[1] == param_3[1])) &&
      (param_2[2] == param_3[2])))) {
    return (double *)0x0;
  }
  if (dVar15 == dVar14) {
    dVar16 = param_3[1];
    dVar17 = param_1[1];
    if ((dVar16 == dVar17) && (param_3[2] == param_1[2])) {
      return (double *)0x0;
    }
  }
  else {
    dVar17 = param_1[1];
    dVar16 = param_3[1];
  }
  dVar28 = param_2[1];
  dVar19 = param_2[2];
  dVar20 = param_1[2];
  dVar22 = -1.0;
  if (dVar17 * dVar28 + dVar13 * dVar14 + dVar19 * dVar20 <= 0.0) {
    dVar22 = 1.0;
  }
  dVar18 = param_3[2];
  dVar24 = -1.0;
  if (dVar16 * dVar28 + dVar15 * dVar13 + dVar18 * dVar19 <= 0.0) {
    dVar24 = 1.0;
  }
  dVar5 = -1.0;
  if (dVar16 * dVar17 + dVar14 * dVar15 + dVar20 * dVar18 <= 0.0) {
    dVar5 = 1.0;
  }
  dVar6 = dVar14 + dVar13 * dVar22;
  dVar9 = dVar17 + dVar28 * dVar22;
  dVar11 = dVar20 + dVar19 * dVar22;
  dVar7 = dVar13 + dVar15 * dVar24;
  dVar8 = dVar28 + dVar16 * dVar24;
  dVar21 = dVar19 + dVar18 * dVar24;
  dVar10 = dVar15 + dVar14 * dVar5;
  dVar12 = dVar16 + dVar17 * dVar5;
  dVar23 = dVar18 + dVar20 * dVar5;
  dVar25 = dVar9 * dVar9 + dVar6 * dVar6 + dVar11 * dVar11;
  dVar26 = dVar8 * dVar8 + dVar7 * dVar7 + dVar21 * dVar21;
  dVar27 = dVar12 * dVar12 + dVar10 * dVar10 + dVar23 * dVar23;
  if ((dVar27 < dVar26) ||
     ((dVar27 == dVar26 &&
      ((dVar14 < dVar13 ||
       ((dVar14 <= dVar13 && ((dVar17 < dVar28 || ((dVar17 <= dVar28 && (dVar20 < dVar19))))))))))))
  {
    if ((dVar25 < dVar26) ||
       ((dVar25 == dVar26 &&
        ((dVar14 < dVar15 ||
         ((dVar14 <= dVar15 && ((dVar17 < dVar16 || ((dVar17 <= dVar16 && (dVar20 < dVar18))))))))))
       )) {
      dVar22 = dVar22 * (dVar17 * (-(dVar23 * dVar6) + dVar10 * dVar11) +
                         dVar14 * (-(dVar12 * dVar11) + dVar23 * dVar9) +
                        dVar20 * (-(dVar10 * dVar9) + dVar12 * dVar6));
      goto LAB_1091789b8;
    }
  }
  else if ((dVar25 < dVar27) ||
          ((dVar25 == dVar27 &&
           ((dVar13 < dVar15 ||
            ((dVar13 <= dVar15 && ((dVar28 < dVar16 || ((dVar28 <= dVar16 && (dVar19 < dVar18)))))))
            ))))) {
    dVar22 = dVar24 * (dVar28 * (-(dVar11 * dVar7) + dVar6 * dVar21) +
                       dVar13 * (-(dVar9 * dVar21) + dVar11 * dVar8) +
                      dVar19 * (-(dVar6 * dVar8) + dVar9 * dVar7));
    goto LAB_1091789b8;
  }
  dVar22 = dVar5 * (dVar16 * (-(dVar21 * dVar10) + dVar7 * dVar23) +
                    dVar15 * (-(dVar8 * dVar23) + dVar21 * dVar12) +
                   dVar18 * (-(dVar7 * dVar12) + dVar8 * dVar10));
LAB_1091789b8:
  if (0.0 < dVar22) {
    param_1 = (double *)0x1;
  }
  else if (dVar22 < 0.0) {
    param_1 = (double *)0xffffffff;
  }
  else {
    FUN_109178a84(dVar17,dVar20,dVar28,dVar19,dVar16,dVar18);
    if (((int)param_1 == 0) &&
       (FUN_109178a84(dVar20,dVar14,dVar19,dVar13,dVar18,dVar15), (int)param_1 == 0)) {
      dVar22 = -1.0;
      if (dVar17 * dVar28 + dVar13 * dVar14 <= 0.0) {
        dVar22 = 1.0;
      }
      dVar18 = dVar14 + dVar13 * dVar22;
      dVar24 = dVar17 + dVar28 * dVar22;
      dVar19 = dVar17 * dVar17 + dVar14 * dVar14;
      dVar20 = dVar28 * dVar28 + dVar13 * dVar13;
      if ((dVar19 < dVar20) ||
         ((dVar19 == dVar20 && ((dVar14 < dVar13 || ((dVar14 <= dVar13 && (dVar17 < dVar28)))))))) {
        dVar22 = dVar22 * (-(dVar18 * dVar17) + dVar24 * dVar14);
      }
      else {
        dVar22 = -(dVar13 * dVar24) + dVar28 * dVar18;
      }
      dVar18 = -1.0;
      if (dVar28 * dVar16 + dVar15 * dVar13 <= 0.0) {
        dVar18 = 1.0;
      }
      dVar5 = dVar13 + dVar15 * dVar18;
      dVar6 = dVar28 + dVar16 * dVar18;
      dVar24 = dVar16 * dVar16 + dVar15 * dVar15;
      if ((dVar20 < dVar24) ||
         ((dVar20 == dVar24 && ((dVar13 < dVar15 || ((dVar13 <= dVar15 && (dVar28 < dVar16)))))))) {
        dVar18 = dVar18 * (-(dVar5 * dVar28) + dVar6 * dVar13);
      }
      else {
        dVar18 = -(dVar15 * dVar6) + dVar16 * dVar5;
      }
      dVar13 = -1.0;
      if (dVar17 * dVar16 + dVar14 * dVar15 <= 0.0) {
        dVar13 = 1.0;
      }
      dVar20 = dVar15 + dVar14 * dVar13;
      dVar28 = dVar16 + dVar17 * dVar13;
      if ((dVar24 < dVar19) ||
         ((dVar24 == dVar19 && ((dVar15 < dVar14 || ((dVar15 <= dVar14 && (dVar16 < dVar17)))))))) {
        dVar13 = dVar13 * (-(dVar20 * dVar16) + dVar28 * dVar15);
      }
      else {
        dVar13 = -(dVar14 * dVar28) + dVar17 * dVar20;
      }
      iVar2 = -(uint)(dVar22 < 0.0);
      if (0.0 < dVar22) {
        iVar2 = 1;
      }
      iVar3 = -(uint)(dVar18 < 0.0);
      if (0.0 < dVar18) {
        iVar3 = 1;
      }
      iVar4 = -(uint)(dVar13 < 0.0);
      if (0.0 < dVar13) {
        iVar4 = 1;
      }
      iVar4 = iVar3 + iVar2 + iVar4;
      uVar1 = iVar4 >> 0x1f;
      if (0 < iVar4) {
        uVar1 = 1;
      }
      return (double *)(ulong)uVar1;
    }
  }
  return param_1;
}



/* Entry: 109178a84; end: 109178c03;  */

int FUN_109178a84(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar4 = -1.0;
  if (param_2 * param_4 + param_3 * param_1 <= 0.0) {
    dVar4 = 1.0;
  }
  dVar7 = param_1 + param_3 * dVar4;
  dVar8 = param_2 + param_4 * dVar4;
  dVar5 = param_2 * param_2 + param_1 * param_1;
  dVar6 = param_4 * param_4 + param_3 * param_3;
  if ((dVar5 < dVar6) ||
     ((dVar5 == dVar6 && ((param_1 < param_3 || ((param_1 <= param_3 && (param_2 < param_4)))))))) {
    dVar4 = dVar4 * (-(dVar7 * param_2) + dVar8 * param_1);
  }
  else {
    dVar4 = -(param_3 * dVar8) + param_4 * dVar7;
  }
  dVar7 = -1.0;
  if (param_4 * param_6 + param_5 * param_3 <= 0.0) {
    dVar7 = 1.0;
  }
  dVar9 = param_3 + param_5 * dVar7;
  dVar10 = param_4 + param_6 * dVar7;
  dVar8 = param_6 * param_6 + param_5 * param_5;
  if ((dVar6 < dVar8) ||
     ((dVar6 == dVar8 && ((param_3 < param_5 || ((param_3 <= param_5 && (param_4 < param_6)))))))) {
    dVar7 = dVar7 * (-(dVar9 * param_4) + dVar10 * param_3);
  }
  else {
    dVar7 = -(param_5 * dVar10) + param_6 * dVar9;
  }
  dVar6 = -1.0;
  if (param_2 * param_6 + param_1 * param_5 <= 0.0) {
    dVar6 = 1.0;
  }
  dVar9 = param_5 + param_1 * dVar6;
  dVar10 = param_6 + param_2 * dVar6;
  if ((dVar8 < dVar5) ||
     ((dVar8 == dVar5 && ((param_5 < param_1 || ((param_5 <= param_1 && (param_6 < param_2)))))))) {
    dVar6 = dVar6 * (-(dVar9 * param_6) + dVar10 * param_5);
  }
  else {
    dVar6 = -(param_1 * dVar10) + param_2 * dVar9;
  }
  iVar1 = -(uint)(dVar4 < 0.0);
  if (0.0 < dVar4) {
    iVar1 = 1;
  }
  iVar2 = -(uint)(dVar7 < 0.0);
  if (0.0 < dVar7) {
    iVar2 = 1;
  }
  iVar3 = -(uint)(dVar6 < 0.0);
  if (0.0 < dVar6) {
    iVar3 = 1;
  }
  iVar3 = iVar2 + iVar1 + iVar3;
  iVar1 = iVar3 >> 0x1f;
  if (0 < iVar3) {
    iVar1 = 1;
  }
  return iVar1;
}



/* Entry: 109178c04; end: 109178cc7;  */

double FUN_109178c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  
  FUN_109178658(&dStack_58,param_2,param_1);
  FUN_109178658(&dStack_70,param_3,param_2);
  dVar1 = -(dStack_68 * dStack_48) + dStack_60 * dStack_50;
  dVar2 = -(dStack_60 * dStack_58) + dStack_70 * dStack_48;
  dVar3 = -(dStack_70 * dStack_50) + dStack_68 * dStack_58;
  dVar1 = SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
  _atan2(dVar1,dStack_50 * dStack_68 + dStack_70 * dStack_58 + dStack_60 * dStack_48);
  func_0x0001091786d4(param_1,param_2,param_3);
  if ((int)param_1 < 1) {
    dVar1 = -dVar1;
  }
  return dVar1;
}



/* Entry: 109178cc8; end: 109178f87;  */

double FUN_109178cc8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double adStack_d0 [3];
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  FUN_109177f90(param_3,param_4);
  adStack_d0[2] = param_1;
  FUN_109177f90(param_4,param_2);
  adStack_d0[1] = param_1;
  FUN_109177f90(param_2,param_3);
  adStack_d0[0] = param_1;
  dVar2 = (adStack_d0[2] + adStack_d0[1] + param_1) * 0.5;
  if (0.0003 <= dVar2) {
    pdVar1 = adStack_d0;
    if (param_1 <= adStack_d0[1]) {
      pdVar1 = adStack_d0 + 1;
    }
    if (*pdVar1 <= adStack_d0[2]) {
      pdVar1 = adStack_d0 + 2;
    }
    dVar5 = *pdVar1;
    if (dVar2 - dVar5 < dVar2 * dVar2 * dVar2 * dVar2 * dVar2 * 0.01) {
      FUN_109178658(&dStack_88,param_2,param_3);
      FUN_109178658(&dStack_a0,param_3,param_4);
      FUN_109178658(&dStack_b8,param_2,param_4);
      dVar3 = -(dStack_b0 * dStack_78) + dStack_a8 * dStack_80;
      dVar4 = -(dStack_a8 * dStack_88) + dStack_b8 * dStack_78;
      dVar6 = -(dStack_b8 * dStack_80) + dStack_b0 * dStack_88;
      dVar3 = SQRT(dVar4 * dVar4 + dVar3 * dVar3 + dVar6 * dVar6);
      _atan2(dVar3,dStack_80 * dStack_b0 + dStack_b8 * dStack_88 + dStack_a8 * dStack_78);
      dVar4 = -(dStack_98 * dStack_78) + dStack_90 * dStack_80;
      dVar6 = -(dStack_90 * dStack_88) + dStack_a0 * dStack_78;
      dVar7 = -(dStack_a0 * dStack_80) + dStack_98 * dStack_88;
      dVar4 = SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar7 * dVar7);
      _atan2(dVar4,dStack_80 * dStack_98 + dStack_a0 * dStack_88 + dStack_90 * dStack_78);
      dVar6 = -(dStack_b0 * dStack_90) + dStack_a8 * dStack_98;
      dVar7 = -(dStack_a8 * dStack_a0) + dStack_b8 * dStack_90;
      dVar8 = -(dStack_b8 * dStack_98) + dStack_b0 * dStack_a0;
      dVar6 = SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar8 * dVar8);
      _atan2(dVar6,dStack_b0 * dStack_98 + dStack_b8 * dStack_a0 + dStack_a8 * dStack_90);
      dVar6 = (dVar3 - dVar4) + dVar6;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      if (dVar2 - dVar5 < dVar2 * dVar6 * 0.1) {
        return dVar6;
      }
    }
  }
  dVar5 = dVar2 * 0.5;
  _tan();
  dVar3 = (dVar2 - adStack_d0[2]) * 0.5;
  _tan();
  dVar4 = (dVar2 - adStack_d0[1]) * 0.5;
  _tan();
  dVar2 = (dVar2 - adStack_d0[0]) * 0.5;
  _tan();
  dVar2 = dVar5 * dVar3 * dVar4 * dVar2;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar2 = SQRT(dVar2);
  _atan(dVar2);
  return dVar2 * 4.0;
}



/* Entry: 109178f88; end: 109178fdb;  */

double FUN_109178f88(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_109178cc8();
  func_0x0001091786d4(param_2,param_3,param_4);
  return param_1 * (double)(int)param_2;
}



/* Entry: 109178fdc; end: 109179073;  */

bool FUN_109178fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar2 = param_2;
  func_0x0001091786d4(param_2,param_4,param_1);
  uVar3 = param_3;
  func_0x0001091786d4(param_3,param_4,param_2);
  uVar4 = 1;
  if ((uint)uVar2 < 0x80000000) {
    uVar4 = 2;
  }
  uVar1 = ~(uint)uVar2 >> 0x1f;
  if (-1 < (int)uVar3) {
    uVar1 = uVar4;
  }
  func_0x0001091786d4(param_1,param_4,param_3);
  if (0 < (int)param_1) {
    uVar1 = uVar1 + 1;
  }
  return 1 < uVar1;
}



/* Entry: 109179074; end: 1091790e3;  */

void FUN_109179074(long param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)(param_1 + 0x20);
  if (0.0 <= dVar1) {
    dVar2 = *(double *)(param_1 + 8) - *param_2;
    dVar3 = *(double *)(param_1 + 0x10) - param_2[1];
    dVar4 = *(double *)(param_1 + 0x18) - param_2[2];
    dVar2 = (dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4) * 0.5000000000000001;
    if (dVar2 <= dVar1) {
      dVar2 = dVar1;
    }
  }
  else {
    *(double *)(param_1 + 8) = *param_2;
    *(double *)(param_1 + 0x10) = param_2[1];
    *(double *)(param_1 + 0x18) = param_2[2];
    dVar2 = 0.0;
  }
  *(double *)(param_1 + 0x20) = dVar2;
  return;
}



/* Entry: 1091790e4; end: 109179123;  */

void FUN_1091790e4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110adec28;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 109179124; end: 109179143;  */

void FUN_109179124(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110adec28;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  return;
}



/* Entry: 109179144; end: 1091792b3;  */

void FUN_109179144(undefined8 *param_1,long param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = *(double *)(param_2 + 0x20);
  if (0.0 <= dVar10) {
    dVar6 = *(double *)(param_2 + 0x10);
    dVar2 = *(double *)(param_2 + 0x18);
    dVar8 = *(double *)(param_2 + 8);
    _atan2(dVar2,SQRT(dVar6 * dVar6 + dVar8 * dVar8));
    _atan2(dVar6,dVar8);
    dVar9 = SQRT(dVar10 * 0.5);
    _asin();
    dVar3 = dVar2 - (dVar9 + dVar9);
    dVar8 = -1.5707963267948966;
    if (-1.5707963267948966 < dVar3) {
      dVar8 = dVar3;
    }
    dVar4 = dVar9 + dVar9 + dVar2;
    dVar9 = 1.5707963267948966;
    if (dVar4 < 1.5707963267948966) {
      dVar9 = dVar4;
    }
    dVar7 = 3.141592653589793;
    dVar5 = -3.141592653589793;
    if ((dVar4 < 1.5707963267948966) && (-1.5707963267948966 < dVar3)) {
      dVar10 = SQRT(dVar10 * (2.0 - dVar10));
      _cos();
      if (dVar10 <= dVar2) {
        dVar10 = dVar10 / dVar2;
        _asin();
        dVar3 = dVar6 - dVar10;
        _remainder(dVar3,0x401921fb54442d18);
        dVar6 = dVar6 + dVar10;
        _remainder(dVar6,0x401921fb54442d18);
        bVar1 = false;
        if ((dVar6 != 3.141592653589793) && (bVar1 = false, !NAN(dVar3))) {
          bVar1 = dVar3 == -3.141592653589793;
        }
        dVar5 = 3.141592653589793;
        if (!bVar1) {
          dVar5 = dVar3;
        }
        bVar1 = true;
        if ((dVar6 == -3.141592653589793) && (bVar1 = false, !NAN(dVar3))) {
          bVar1 = dVar3 == 3.141592653589793;
        }
        dVar7 = 3.141592653589793;
        if (bVar1) {
          dVar7 = dVar6;
        }
      }
    }
  }
  else {
    dVar9 = 0.0;
    dVar8 = 1.0;
    dVar5 = 3.141592653589793;
    dVar7 = -3.141592653589793;
  }
  *param_1 = &PTR_FUN_110aded28;
  param_1[1] = dVar8;
  param_1[2] = dVar9;
  param_1[3] = dVar5;
  param_1[4] = dVar7;
  return;
}



/* Entry: 1091792b4; end: 109179437;  */

uint FUN_1091792b4(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint extraout_w8;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  uVar3 = 0;
  dVar10 = *(double *)(param_1 + 0x20);
  if ((dVar10 < 1.0) && (0.0 <= dVar10)) {
    uVar1 = param_2;
    func_0x00010917a54c(param_2,param_1 + 8);
    if ((uVar1 & 1) == 0) {
      lVar5 = 0;
      dVar11 = *(double *)(param_1 + 8);
      dVar12 = *(double *)(param_1 + 0x10);
      dVar13 = *(double *)(param_1 + 0x18);
      pdVar6 = (double *)(param_3 + 0x10);
      do {
        func_0x000109179938(&dStack_98,param_2,lVar5);
        dVar7 = dVar12 * dStack_90 + dStack_98 * dVar11 + dStack_88 * dVar13;
        uVar3 = extraout_w8;
        if (dVar7 <= 0.0) {
          dVar7 = dVar7 * dVar7;
          dVar9 = dVar10 * (2.0 - dVar10) *
                  (dStack_90 * dStack_90 + dStack_98 * dStack_98 + dStack_88 * dStack_88);
          uVar3 = (uint)(dVar7 <= dVar9);
          uVar2 = (uint)(dVar7 <= dVar9);
          if (dVar7 <= dVar9) {
            dVar9 = dStack_88 * -dVar12 + dVar13 * dStack_90;
            dVar8 = dStack_98 * -dVar13 + dVar11 * dStack_88;
            dVar7 = dStack_90 * -dVar11 + dVar12 * dStack_98;
            if ((0.0 <= dVar8 * pdVar6[-1] + pdVar6[-2] * dVar9 + *pdVar6 * dVar7) ||
               (pdVar4 = (double *)(param_3 + (ulong)((int)lVar5 + 1U & 3) * 0x18),
               dVar8 * pdVar4[1] + *pdVar4 * dVar9 + pdVar4[2] * dVar7 <= 0.0)) goto LAB_1091793f0;
          }
          uVar3 = 1;
          goto LAB_10917940c;
        }
LAB_1091793f0:
        uVar2 = uVar3;
        lVar5 = lVar5 + 1;
        pdVar6 = pdVar6 + 3;
      } while (lVar5 != 4);
      uVar3 = 0;
LAB_10917940c:
      uVar3 = uVar3 & uVar2;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* Entry: 109179438; end: 1091795a3;  */

void FUN_109179438(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  long lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined **ppuStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double adStack_c0 [11];
  long lStack_68;
  
  lVar3 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  adStack_c0[7] = 0.0;
  adStack_c0[6] = 0.0;
  adStack_c0[9] = 0.0;
  adStack_c0[8] = 0.0;
  adStack_c0[3] = 0.0;
  adStack_c0[2] = 0.0;
  adStack_c0[5] = 0.0;
  adStack_c0[4] = 0.0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  adStack_c0[1] = 0.0;
  adStack_c0[0] = 0.0;
  dVar9 = *(double *)(param_1 + 8);
  dVar10 = *(double *)(param_1 + 0x10);
  dVar8 = *(double *)(param_1 + 0x18);
  dVar11 = *(double *)(param_1 + 0x20);
  pdVar4 = adStack_c0;
  while( true ) {
    FUN_109179894(&ppuStack_f8,param_2,lVar3);
    dVar5 = dStack_f0 * dStack_f0 + (double)ppuStack_f8 * (double)ppuStack_f8 +
            dStack_e8 * dStack_e8;
    dVar7 = SQRT(dVar5);
    dVar6 = 1.0 / dVar7;
    if (dVar5 == 0.0) {
      dVar6 = dVar7;
    }
    pdVar4[-2] = (double)ppuStack_f8 * dVar6;
    pdVar4[-1] = dStack_f0 * dVar6;
    *pdVar4 = dStack_e8 * dVar6;
    dVar5 = dVar9 - (double)ppuStack_f8 * dVar6;
    dVar7 = dVar10 - dStack_f0 * dVar6;
    dVar6 = dVar8 - dStack_e8 * dVar6;
    if (dVar11 + dVar11 < dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6) break;
    lVar3 = lVar3 + 1;
    pdVar4 = pdVar4 + 3;
    if (lVar3 == 4) {
      dVar6 = 0.0;
      if (0.0 <= dVar11) {
        dVar6 = dVar11;
      }
      dStack_d8 = -1.0;
      if (dVar11 < 2.0) {
        dStack_d8 = 2.0 - dVar6;
      }
      dStack_f0 = -dVar9;
      dStack_e8 = -dVar10;
      ppuStack_f8 = &PTR_FUN_110adec28;
      dStack_e0 = -dVar8;
      pppuVar2 = &ppuStack_f8;
      FUN_1091792b4(pppuVar2,param_2,&uStack_d0);
      uVar1 = (uint)pppuVar2 ^ 1;
LAB_109179568:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail(uVar1);
      return;
    }
  }
  uVar1 = 0;
  goto LAB_109179568;
}



/* Entry: 1091795a4; end: 1091795a7;  */

void FUN_1091795a4(void)

{
  return;
}



/* Entry: 1091795a8; end: 1091796d3;  */

void FUN_1091795a8(long param_1,undefined8 param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double adStack_c0 [11];
  long lStack_68;
  
  lVar1 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  adStack_c0[7] = 0.0;
  adStack_c0[6] = 0.0;
  adStack_c0[9] = 0.0;
  adStack_c0[8] = 0.0;
  adStack_c0[3] = 0.0;
  adStack_c0[2] = 0.0;
  adStack_c0[5] = 0.0;
  adStack_c0[4] = 0.0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  adStack_c0[1] = 0.0;
  adStack_c0[0] = 0.0;
  dVar7 = *(double *)(param_1 + 8);
  dVar8 = *(double *)(param_1 + 0x10);
  dVar9 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 0x20);
  pdVar2 = adStack_c0;
  do {
    FUN_109179894(&dStack_e8,param_2,lVar1);
    dVar4 = dStack_e0 * dStack_e0 + dStack_e8 * dStack_e8 + dStack_d8 * dStack_d8;
    dVar6 = SQRT(dVar4);
    dVar5 = 1.0 / dVar6;
    if (dVar4 == 0.0) {
      dVar5 = dVar6;
    }
    pdVar2[-2] = dStack_e8 * dVar5;
    pdVar2[-1] = dStack_e0 * dVar5;
    *pdVar2 = dStack_d8 * dVar5;
    dVar4 = dVar7 - dStack_e8 * dVar5;
    dVar6 = dVar8 - dStack_e0 * dVar5;
    dVar5 = dVar9 - dStack_d8 * dVar5;
    if (dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5 <= dVar3 + dVar3) goto LAB_109179698;
    lVar1 = lVar1 + 1;
    pdVar2 = pdVar2 + 3;
  } while (lVar1 != 4);
  FUN_1091792b4(param_1,param_2,&uStack_d0);
LAB_109179698:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1091796d4; end: 10917970f;  */

void FUN_1091796d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109179710; end: 1091797ab;  */

undefined1 * FUN_109179710(void)

{
  undefined1 *puVar1;
  undefined1 auStack_31 [9];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1091797b4(auStack_31,&UNK_10f55a2b4,0x98);
  func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a2e7,0xd);
  puVar1 = auStack_31;
  FUN_109179870(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_109179870(auStack_31);
  __Unwind_Resume(puVar1);
  return (undefined1 *)0x0;
}



/* Entry: 1091797ac; end: 1091797b3;  */

undefined8 FUN_1091797ac(void)

{
  return 0;
}



/* Entry: 1091797b4; end: 10917986f;  */

undefined8 FUN_1091797b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR___ZNSt3__14cerrE_110346738;
  func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a2f5,1);
  uVar2 = param_1;
  func_0x000109177f2c(param_1);
  _strlen();
  func_0x000107c2808c(puVar1,param_1,uVar2);
  func_0x000107c2808c();
  uVar2 = param_2;
  _strlen(param_2);
  func_0x000107c2808c(puVar1,param_2,uVar2);
  func_0x000107c2808c();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  func_0x000107c2808c();
  return param_1;
}



/* Entry: 109179870; end: 109179893;  */

void FUN_109179870(void)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  double *extraout_x8;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar3 = 0xf55a2ff;
  puVar2 = PTR___ZNSt3__14cerrE_110346738;
  func_0x00010549023c();
  _abort();
  func_0x000104bd46a0();
  bVar1 = puVar2[8];
  dVar4 = *(double *)(puVar2 + (long)(int)(uVar3 & 1 ^ (int)uVar3 >> 1) * 8 + 0x18);
  dVar5 = *(double *)(puVar2 + (long)((int)uVar3 >> 1) * 8 + 0x28);
  if (bVar1 < 2) {
    dVar7 = 1.0;
    dVar6 = dVar5;
    if (bVar1 == 0) goto LAB_10917992c;
    if (bVar1 == 1) {
      dVar7 = -dVar4;
      dVar4 = 1.0;
      goto LAB_10917992c;
    }
  }
  else {
    if (bVar1 == 2) {
      dVar7 = -dVar4;
      dVar4 = -dVar5;
      dVar6 = 1.0;
      goto LAB_10917992c;
    }
    if (bVar1 == 3) {
      dVar6 = -dVar4;
      dVar7 = -1.0;
      dVar4 = -dVar5;
      goto LAB_10917992c;
    }
    if (bVar1 == 4) {
      dVar6 = -dVar4;
      dVar4 = -1.0;
      dVar7 = dVar5;
      goto LAB_10917992c;
    }
  }
  dVar6 = -1.0;
  dVar7 = dVar5;
LAB_10917992c:
  *extraout_x8 = dVar7;
  extraout_x8[1] = dVar4;
  extraout_x8[2] = dVar6;
  return;
}


