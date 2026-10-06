/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106acc830; end: 106acc8a7;  */

void FUN_106acc830(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11095dff0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106acc8a8; end: 106acca73; -[SCBlizzardUploadRequestInfo initWithLogQueueName:numEventsOnDisk:numEventsInRequest:numSeqItemsInRequest:uploadUrl:isBackgroundUpload:timeSinceLastUpload:requestDate:fileUploadTrigger:files:priority:region:isFrame:isSpectrum:] */

undefined8 *
FUN_106acc8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_78 = PTR_PTR_1126f4a48;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    puVar1[5] = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_9;
    puVar1[7] = param_1;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    puVar1[9] = param_11;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 10) = param_15._1_1_;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 106acca74; end: 106acca97; -[SCBlizzardUploadRequestInfo copyWithZone:] */

undefined8 FUN_106acca74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106acca98; end: 106accb7f; -[SCBlizzardUploadRequestInfo hash] */

undefined8 * FUN_106acca98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = *(undefined8 *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = uVar1;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar3 = &uStack_98;
  uStack_40 = uVar2;
  func_0x000100505190(puVar3,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106accd08:
    puVar7 = (undefined8 *)0x1;
  }
  else {
    puVar7 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106accd14;
    puVar7 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) && (puVar3[5] == param_3[5])) &&
         ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[9] == param_3[9])))))) &&
       ((*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9) &&
        (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))) {
      dVar8 = ABS((double)puVar3[7] - (double)param_3[7]);
      if ((((((dVar8 < 2.2250738585072014e-308) ||
             (dVar8 < ABS((double)puVar3[7] + (double)param_3[7]) * 2.220446049250313e-16)) &&
            ((lVar5 = puVar3[2], lVar5 == param_3[2] || (func_0x00010c071ae0(), (int)lVar5 != 0))))
           && ((lVar5 = puVar3[6], lVar5 == param_3[6] || (func_0x00010c071ae0(), (int)lVar5 != 0)))
           ) && ((lVar5 = puVar3[8], lVar5 == param_3[8] || (func_0x00010c071ae0(), (int)lVar5 != 0)
                 ))) &&
         (((lVar5 = puVar3[10], lVar5 == param_3[10] || (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
          ((lVar5 = puVar3[0xb], lVar5 == param_3[0xb] || (func_0x00010c071ae0(), (int)lVar5 != 0)))
          ))) {
        puVar7 = (undefined8 *)puVar3[0xc];
        if (puVar7 != (undefined8 *)param_3[0xc]) {
          func_0x00010c071ae0();
          goto LAB_106accd14;
        }
        goto LAB_106accd08;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_106accd14:
  _objc_release(param_3);
  return puVar7;
}



/* Entry: 106accb80; end: 106accd2f; -[SCBlizzardUploadRequestInfo isEqual:] */

long FUN_106accb80(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106accd08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106accd14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
           (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
          (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
         ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
       ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      dVar4 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      if ((((((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                      2.220446049250313e-16)) &&
            ((lVar3 = *(long *)(param_1 + 0x10), lVar3 == *(long *)(param_3 + 0x10) ||
             (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
           ((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
            (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
          ((lVar3 = *(long *)(param_1 + 0x40), lVar3 == *(long *)(param_3 + 0x40) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
         (((lVar3 = *(long *)(param_1 + 0x50), lVar3 == *(long *)(param_3 + 0x50) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
          ((lVar3 = *(long *)(param_1 + 0x58), lVar3 == *(long *)(param_3 + 0x58) ||
           (func_0x00010c071ae0(), (int)lVar3 != 0)))))) {
        lVar3 = *(long *)(param_1 + 0x60);
        if (lVar3 != *(long *)(param_3 + 0x60)) {
          func_0x00010c071ae0();
          goto LAB_106accd14;
        }
        goto LAB_106accd08;
      }
    }
    lVar3 = 0;
  }
LAB_106accd14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106accd30; end: 106accd37; -[SCBlizzardUploadRequestInfo logQueueName] */

undefined8 FUN_106accd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106accd38; end: 106accd3f; -[SCBlizzardUploadRequestInfo numEventsOnDisk] */

undefined8 FUN_106accd38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106accd40; end: 106accd47; -[SCBlizzardUploadRequestInfo numEventsInRequest] */

undefined8 FUN_106accd40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106accd48; end: 106accd4f; -[SCBlizzardUploadRequestInfo numSeqItemsInRequest] */

undefined8 FUN_106accd48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106accd50; end: 106accd57; -[SCBlizzardUploadRequestInfo uploadUrl] */

undefined8 FUN_106accd50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106accd58; end: 106accd5f; -[SCBlizzardUploadRequestInfo isBackgroundUpload] */

undefined1 FUN_106accd58(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106accd60; end: 106accd67; -[SCBlizzardUploadRequestInfo timeSinceLastUpload] */

undefined8 FUN_106accd60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106accd68; end: 106accd6f; -[SCBlizzardUploadRequestInfo requestDate] */

undefined8 FUN_106accd68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106accd70; end: 106accd77; -[SCBlizzardUploadRequestInfo fileUploadTrigger] */

undefined8 FUN_106accd70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106accd78; end: 106accd7f; -[SCBlizzardUploadRequestInfo files] */

undefined8 FUN_106accd78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106accd80; end: 106accd87; -[SCBlizzardUploadRequestInfo priority] */

undefined8 FUN_106accd80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106accd88; end: 106accd8f; -[SCBlizzardUploadRequestInfo region] */

undefined8 FUN_106accd88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106accd90; end: 106accd97; -[SCBlizzardUploadRequestInfo isFrame] */

undefined1 FUN_106accd90(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106accd98; end: 106accd9f; -[SCBlizzardUploadRequestInfo isSpectrum] */

undefined1 FUN_106accd98(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106accda0; end: 106accdff; -[SCBlizzardUploadRequestInfo .cxx_destruct] */

void FUN_106accda0(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106acce00; end: 106acced7; -[SCBlizzardUploadResponseInfo initWithLogQueueName:statusCode:isUploadSuccessful:requestSizeInBytes:responseSizeInBytes:requestLatency:] */

undefined1 *
FUN_106acce00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f4a50;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106acced8; end: 106accefb; -[SCBlizzardUploadResponseInfo copyWithZone:] */

undefined8 FUN_106acced8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106accefc; end: 106accfa3; -[SCBlizzardUploadResponseInfo hash] */

undefined8 * FUN_106accefc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar4 = &uStack_58;
  uStack_50 = uVar3;
  func_0x000100505190(puVar4,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_106acd088:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106acd094;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       (((*(char *)(puVar4 + 1) == *(char *)(param_3 + 1) && (puVar4[4] == param_3[4])) &&
        (puVar4[5] == param_3[5])))) {
      dVar10 = ABS((double)puVar4[6] - (double)param_3[6]);
      dVar9 = ABS((double)puVar4[6] + (double)param_3[6]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[3];
        if (puVar8 != (undefined8 *)param_3[3]) {
          func_0x00010c071ae0();
          goto LAB_106acd094;
        }
        goto LAB_106acd088;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_106acd094:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 106accfa4; end: 106acd0af; -[SCBlizzardUploadResponseInfo isEqual:] */

long FUN_106accfa4(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106acd088:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106acd094;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
      dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_106acd094;
        }
        goto LAB_106acd088;
      }
    }
    lVar4 = 0;
  }
LAB_106acd094:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 106acd0b0; end: 106acd0b7; -[SCBlizzardUploadResponseInfo logQueueName] */

undefined8 FUN_106acd0b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106acd0b8; end: 106acd0bf; -[SCBlizzardUploadResponseInfo statusCode] */

undefined8 FUN_106acd0b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106acd0c0; end: 106acd0c7; -[SCBlizzardUploadResponseInfo isUploadSuccessful] */

undefined1 FUN_106acd0c0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106acd0c8; end: 106acd0cf; -[SCBlizzardUploadResponseInfo requestSizeInBytes] */

undefined8 FUN_106acd0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106acd0d0; end: 106acd0d7; -[SCBlizzardUploadResponseInfo responseSizeInBytes] */

undefined8 FUN_106acd0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106acd0d8; end: 106acd0df; -[SCBlizzardUploadResponseInfo requestLatency] */

undefined8 FUN_106acd0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106acd0e0; end: 106acd10f; -[SCBlizzardUploadResponseInfo .cxx_destruct] */

void FUN_106acd0e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106acd110; end: 106acd20f; -[SCBlizzardConfig initWithCoder:] */

undefined1 * FUN_106acd110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4a58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106acd210; end: 106acd233; -[SCBlizzardConfig copyWithZone:] */

undefined8 FUN_106acd210(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106acd234; end: 106acd2bb; -[SCBlizzardConfig encodeWithCoder:] */

void FUN_106acd234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e6c898);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6c8b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e6c8d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110e6c8f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106acd2bc; end: 106acd347; -[SCBlizzardConfig hash] */

undefined8 * FUN_106acd2bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106acd3f8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106acd404;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[2];
        if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[3];
          if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[4];
            if (puVar6 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_106acd404;
            }
            goto LAB_106acd3f8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106acd404:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106acd348; end: 106acd41f; -[SCBlizzardConfig isEqual:] */

long FUN_106acd348(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106acd3f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106acd404;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_106acd404;
            }
            goto LAB_106acd3f8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106acd404:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106acd420; end: 106acd467; -[SCBlizzardConfig .cxx_destruct] */

void FUN_106acd420(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106acd468; end: 106acd53f; -[SCBlizzardLogQueueDefinition initWithCoder:] */

undefined1 * FUN_106acd468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4a60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106acd540; end: 106acd563; -[SCBlizzardLogQueueDefinition copyWithZone:] */

undefined8 FUN_106acd540(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106acd564; end: 106acd5d7; -[SCBlizzardLogQueueDefinition encodeWithCoder:] */

void FUN_106acd564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e6c918);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e6c938);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e6c958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106acd5d8; end: 106acd657; -[SCBlizzardLogQueueDefinition hash] */

undefined8 * FUN_106acd5d8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106acd6f0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106acd6fc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106acd6fc;
          }
          goto LAB_106acd6f0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106acd6fc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106acd658; end: 106acd717; -[SCBlizzardLogQueueDefinition isEqual:] */

long FUN_106acd658(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106acd6f0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106acd6fc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_106acd6fc;
          }
          goto LAB_106acd6f0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106acd6fc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106acd718; end: 106acd753; -[SCBlizzardLogQueueDefinition .cxx_destruct] */

void FUN_106acd718(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106acd754; end: 106acd7c7; -[SCBlizzardSnaptokenProvider initWithGrapheneRegistry:] */

undefined1 * FUN_106acd754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4a68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106acd7c8; end: 106acd893; -[SCBlizzardSnaptokenProvider _loadFromDiskSnapToken] */

void FUN_106acd7c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d02e8;
  func_0x00010be21940();
  _objc_retainAutoreleasedReturnValue();
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) && (puVar1 != (undefined *)0x0)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    puVar2 = puVar1;
    func_0x00010c25d300();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      FUN_106ac68a0(*(undefined8 *)(param_1 + 8),1);
    }
    uVar3 = *(ulong *)(param_1 + 0x10);
    if ((uVar3 == 0) || (func_0x00010c0720c0(), (uVar3 & 1) != 0)) {
      puVar4 = puVar2;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar4;
      _objc_release(uVar5);
    }
    else {
      func_0x00010c1d0560(puVar1);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106acd894; end: 106acd8b7; -[SCBlizzardSnaptokenProvider _sendGrapheneSnapTokenStatus:] */

void FUN_106acd894(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar6 = *(long *)(param_1 + 8);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db6ad8;
  if (param_3 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db6af8;
  }
  puVar9 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar4;
  _objc_retain(ppuVar4);
  if (lVar6 != 0) {
    plVar1 = *(long **)(lVar6 + 8);
    ppuVar2 = (undefined **)&UNK_11095cf60;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(lVar6 + 8);
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar2 = (undefined **)&UNK_10f3adf9b;
      }
      else {
        ppuVar2 = ppuVar4;
        _objc_retainAutorelease(ppuVar4);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar4);
      func_0x00010002b838(auStack_60,ppuVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      ppuVar2 = (undefined **)&UNK_11095cf60;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cf60,&uStack_80,10);
      puStack_68 = (undefined1 *)&uStack_80;
      func_0x00010007e5dc(&puStack_68);
      puVar9 = (undefined1 *)puVar7;
      if (cStack_49 < '\0') {
        __ZdlPv(auStack_60[0]);
        puVar9 = (undefined1 *)puVar7;
      }
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_106ac8788;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  puVar8 = puVar9;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar1 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar4 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_e0,ppuVar4);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    ppuVar4 = (undefined **)&UNK_11095cfb0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095cfb0,&uStack_100,puVar9);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_108 = FUN_106ac88fc;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar4;
  puVar9 = puVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(ppuVar4);
  if (ppuVar3 != (undefined **)0x0) {
    plVar1 = (long *)ppuVar3[1];
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar2 = ppuVar4;
      _objc_retainAutorelease(ppuVar4);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_160,ppuVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    ppuVar2 = (undefined **)&UNK_11095d000;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d000,&uStack_180,puVar8);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar9 = (undefined1 *)puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar9 = (undefined1 *)puVar7;
    }
  }
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  __Unwind_Resume();
  pcStack_188 = FUN_106ac8a70;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar2;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(ppuVar2);
  if (ppuVar3 != (undefined **)0x0) {
    plVar1 = (long *)ppuVar3[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f3adf9b;
    }
    else {
      ppuVar4 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_1e0,ppuVar4);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    ppuVar4 = (undefined **)&UNK_11095d050;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11095d050,&uStack_200,puVar9);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  ppuVar3 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar2);
  _objc_release(ppuVar2);
  ppuVar5 = ppuVar3;
  __Unwind_Resume();
  puStack_228 = (undefined1 *)&uStack_240;
  pcStack_208 = FUN_106ac8be4;
  if (ppuVar5 != (undefined **)0x0) {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    ppuStack_220 = ppuVar3;
    ppuStack_218 = ppuVar2;
    pppuStack_210 = &pppuStack_190;
    (**(code **)(*(long *)ppuVar5[1] + 0x18))(ppuVar5[1],&UNK_11095d0a0,&uStack_240,ppuVar4);
    func_0x00010007e5dc(&puStack_228);
  }
  return;
}



/* Entry: 106acd8b8; end: 106acda67; -[SCBlizzardSnaptokenProvider snapToken] */

void FUN_106acd8b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain();
  _objc_sync_enter(param_1);
  func_0x00010be4d4e0(param_1);
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126d02e8;
  func_0x00010be22b80();
  _objc_retainAutoreleasedReturnValue();
  if (((*(byte *)(param_1 + 0x19) & 1) == 0) && (puVar1 != (undefined *)0x0)) {
    *(undefined1 *)(param_1 + 0x19) = 1;
    uVar2 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_106acda68;
    puStack_68 = &UNK_110843540;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_copyWeak(auStack_88,auStack_58);
    func_0x00010bfa48e0(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_60);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106acda68; end: 106acdb53;  */

void FUN_106acda68(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
    if ((param_2 != 0) && (uVar1 = param_2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
      uVar1 = param_2;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(ulong *)(param_1 + 0x10) = uVar1;
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126d02e8;
      func_0x00010be21940(PTR_PTR_1126d02e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560();
      _objc_release(puVar2);
    }
    func_0x00010be9f3e0(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106acdb54; end: 106acdbdb;  */

void FUN_106acdb54(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    *(undefined1 *)(param_1 + 0x19) = 0;
    func_0x00010be9f3e0(param_1);
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106acdbdc; end: 106acdc43; +[SCBlizzardSnaptokenProvider _getSnapTokenProvider] */

void FUN_106acdbdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = uRam00000001136c49b8;
  func_0x00010c269d40(uRam00000001136c49b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106acdc44; end: 106acdcab; +[SCBlizzardSnaptokenProvider _getPreferences] */

void FUN_106acdc44(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = uRam00000001136c49c0;
  func_0x00010c269d40(uRam00000001136c49c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106acdcac; end: 106acdcef; +[SCBlizzardSnaptokenProvider removeSnapTokenProvider] */

void FUN_106acdcac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = uRam00000001136c49b8;
  uRam00000001136c49b8 = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106acdcf0; end: 106acdcf7; -[SCBlizzardSnaptokenProvider graphene] */

undefined8 FUN_106acdcf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106acdcf8; end: 106acdd27; -[SCBlizzardSnaptokenProvider .cxx_destruct] */

void FUN_106acdcf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106acdd28; end: 106acdfd3; -[SCBlizzardConfig jsonDictionary] */

undefined * FUN_106acdd28(undefined *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_1;
  func_0x00010c11cc40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar14 = param_1;
  func_0x00010c298be0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar14;
  if (puVar14 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar13;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  if (puVar14 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar14);
  if (puVar3 == (undefined *)0x0) {
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010c0ad480();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf529e0();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ad480();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar3 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        uVar7 = *(undefined8 *)((long)puVar14 * 8);
        func_0x00010c085d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(uVar7);
        puVar14 = puVar14 + 1;
      } while (puVar3 != puVar14);
      puVar3 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  puVar3 = puVar6;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar11);
    puVar4 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar14 = puVar4;
    _objc_opt_isKindOfClass(puVar4,puVar3);
    puVar3 = puVar4;
    if (((ulong)puVar14 & 1) == 0) {
      puVar3 = (undefined *)0x0;
    }
    _objc_retain(puVar3);
    _objc_release(puVar4);
    if (puVar3 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar4);
      puVar5 = puVar4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar4);
          }
          puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uVar15 = *(ulong *)((long)puVar13 * 8);
          _objc_retain(uVar15);
          _objc_opt_class(puVar8);
          uVar9 = uVar15;
          _objc_opt_isKindOfClass(uVar15,puVar8);
          uVar1 = uVar15;
          if ((uVar9 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar15);
          if (uVar1 != 0) {
            puVar8 = PTR_PTR_1126d02f0;
            _objc_alloc(PTR_PTR_1126d02f0);
            func_0x00010c0206e0();
            func_0x00010befa120(puVar14);
            _objc_release(puVar8);
          }
          _objc_release(uVar1);
          puVar13 = puVar13 + 1;
        } while (puVar5 != puVar13);
        puVar5 = puVar4;
        func_0x00010bf52a60();
      }
      _objc_release(puVar4);
    }
    puVar5 = puVar14;
    func_0x00010bf51e00(puVar14);
    puVar13 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar8 = puVar13;
    _objc_opt_isKindOfClass(puVar13,puVar4);
    puVar4 = puVar13;
    if (((ulong)puVar8 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar13);
    puVar8 = puVar11;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar10 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar13);
    puVar13 = puVar8;
    if (((ulong)puVar10 & 1) == 0) {
      puVar13 = (undefined *)0x0;
    }
    _objc_retain(puVar13);
    _objc_release(puVar8);
    func_0x00010c027120();
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar14);
    _objc_release(puVar11);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      return puVar6;
    }
    ___stack_chk_fail();
    if (lRam00000001136c4a00 != -1) {
      func_0x00010002a2fc(0x1136c4a00,&PTR___NSConcreteGlobalBlock_11095ed40);
    }
    puVar3 = puRam00000001136c49f8;
    _objc_retain(puRam00000001136c49f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 106acdfd4; end: 106ace2bb; -[SCBlizzardConfig initWithJSONDictionary:] */

undefined8 FUN_106acdfd4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar12);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    uVar4 = uVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (uVar4 != 0) {
      uVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(uVar3);
        }
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        uVar13 = *(ulong *)(uVar11 * 8);
        _objc_retain(uVar13);
        _objc_opt_class(puVar5);
        uVar6 = uVar13;
        _objc_opt_isKindOfClass(uVar13,puVar5);
        uVar8 = uVar13;
        if ((uVar6 & 1) == 0) {
          uVar8 = 0;
        }
        _objc_retain(uVar8);
        _objc_release(uVar13);
        if (uVar8 != 0) {
          puVar5 = PTR_PTR_1126d02f0;
          _objc_alloc(PTR_PTR_1126d02f0);
          func_0x00010c0206e0();
          func_0x00010befa120(puVar12);
          _objc_release(puVar5);
        }
        _objc_release(uVar8);
        uVar11 = uVar11 + 1;
      } while (uVar4 != uVar11);
      uVar4 = uVar3;
      func_0x00010bf52a60();
    }
    _objc_release(uVar3);
  }
  puVar5 = puVar12;
  func_0x00010bf51e00(puVar12);
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar11 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar7);
  uVar3 = uVar4;
  if ((uVar11 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar7);
  uVar4 = uVar11;
  if ((uVar8 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar11);
  func_0x00010c027120();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar12);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_1;
  }
  ___stack_chk_fail();
  if (lRam00000001136c4a00 != -1) {
    func_0x00010002a2fc(0x1136c4a00,&PTR___NSConcreteGlobalBlock_11095ed40);
  }
  uVar9 = uRam00000001136c49f8;
  _objc_retain(uRam00000001136c49f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return uVar9;
}



/* Entry: 106ace2bc; end: 106ace30f; +[SCBlizzardConfig SPECTRUM_REGIONALIZED_ALLOWLIST] */

void FUN_106ace2bc(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c4a00 != -1) {
    func_0x00010002a2fc(0x1136c4a00,&PTR___NSConcreteGlobalBlock_11095ed40);
  }
  uVar1 = uRam00000001136c49f8;
  _objc_retain(uRam00000001136c49f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ace310; end: 106ace34b;  */

void FUN_106ace310(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      &PTR__OBJC_CLASS___NSConstantArray_111180f50);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c49f8;
  puRam00000001136c49f8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ace34c; end: 106ace4ab; -[SCBlizzardConfigAdapter priorityForQueueWithName:region:] */

long FUN_106ace34c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf46060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c11e020();
  if (lVar5 == 0) {
    func_0x00010bf46060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c0e00e0(param_1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010c11e020();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106ace4ac; end: 106ace60b; -[SCBlizzardConfigAdapter fileEventCountWithName:region:] */

long FUN_106ace4ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf46060();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfacb80();
  if (lVar5 == 0) {
    func_0x00010bf46060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c0e00e0(param_1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010bfacb80();
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(puVar6);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 106ace60c; end: 106ace623; -[SCBlizzardConfigAdapter eventUploadThresholdForPriority:] */

undefined8 FUN_106ace60c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0x28;
  if (param_3 != 1) {
    lVar1 = 0x30;
  }
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 106ace624; end: 106ace787; -[SCBlizzardConfigAdapter uploadBatchForPriority:region:] */

long FUN_106ace624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_1;
  func_0x00010c11df80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf46060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c28d9e0();
  if (lVar6 == 0) {
    func_0x00010bf46060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c0e00e0(param_1,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x00010c28d9e0();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(param_1);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 106ace788; end: 106ace823; -[SCBlizzardConfigAdapter queueNameForSpectrumPriority:] */

void FUN_106ace788(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x00010c249bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e6ca78;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106ace824; end: 106ace987; -[SCBlizzardConfigAdapter spectrumBytesPerRequestForPriority:region:] */

long FUN_106ace824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = param_1;
  func_0x00010c11dfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf46060();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c249a00();
  if (lVar6 == 0) {
    func_0x00010bf46060(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c0e00e0(param_1,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    func_0x00010c249a00();
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(param_1);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar6;
}



/* Entry: 106ace988; end: 106ace98f; -[SCBlizzardConfigAdapter experimentProvider] */

undefined8 FUN_106ace988(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ace990; end: 106ace997; -[SCBlizzardConfigAdapter setFileTTLMs:] */

void FUN_106ace990(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106ace998; end: 106ace9c7; -[SCBlizzardConfigAdapter setPriorityQueueNameMap:] */

void FUN_106ace998(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ace9c8; end: 106ace9cf; -[SCBlizzardConfigAdapter setOverallUploadIntervalSec:] */

void FUN_106ace9c8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 106ace9d0; end: 106ace9d7; -[SCBlizzardConfigAdapter jsonFramesEventUploadForMediumPriority] */

undefined8 FUN_106ace9d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ace9d8; end: 106ace9df; -[SCBlizzardConfigAdapter setJsonFramesEventUploadForMediumPriority:] */

void FUN_106ace9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106ace9e0; end: 106ace9e7; -[SCBlizzardConfigAdapter jsonFramesEventUploadForLowPriority] */

undefined8 FUN_106ace9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ace9e8; end: 106ace9ef; -[SCBlizzardConfigAdapter setJsonFramesEventUploadForLowPriority:] */

void FUN_106ace9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106ace9f0; end: 106ace9f7; -[SCBlizzardConfigAdapter setMaxConcurrentRequests:] */

void FUN_106ace9f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 106ace9f8; end: 106ace9ff; -[SCBlizzardConfigAdapter setSpectrumFileTTLMs:] */

void FUN_106ace9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106acea00; end: 106acea07; -[SCBlizzardConfigAdapter spectrumPriorityQueueNameMap] */

undefined8 FUN_106acea00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106acea08; end: 106acea37; -[SCBlizzardConfigAdapter setSpectrumPriorityQueueNameMap:] */

void FUN_106acea08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106acea38; end: 106acea3f; -[SCBlizzardConfigAdapter setSpectrumUploadIntervalSec:] */

void FUN_106acea38(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 106acea40; end: 106acea47; -[SCBlizzardConfigAdapter setSpectrumMaxConcurrentRequests:] */

void FUN_106acea40(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 106acea48; end: 106acea4f; -[SCBlizzardConfigAdapter spectrumEventUploadThreshold] */

undefined8 FUN_106acea48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106acea50; end: 106acea57; -[SCBlizzardConfigAdapter setSpectrumEventUploadThreshold:] */

void FUN_106acea50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 106acea58; end: 106acea5f; -[SCBlizzardConfigAdapter setDiskQuotaBytes:] */

void FUN_106acea58(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 106acea60; end: 106acea8f; -[SCBlizzardConfigAdapter setConfigMap:] */

void FUN_106acea60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106acea90; end: 106acead7; -[SCBlizzardConfigAdapter .cxx_destruct] */

void FUN_106acea90(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106acead8; end: 106aceadf; -[SCBlizzardLogQueueConfigAdapter version] */

undefined8 FUN_106acead8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106aceae0; end: 106aceb0f; -[SCBlizzardLogQueueConfigAdapter setVersion:] */

void FUN_106aceae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106aceb10; end: 106aceb17; -[SCBlizzardLogQueueConfigAdapter logQueueName] */

undefined8 FUN_106aceb10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106aceb18; end: 106aceb1f; -[SCBlizzardLogQueueConfigAdapter setLogQueueName:] */

void FUN_106aceb18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106aceb20; end: 106aceb27; -[SCBlizzardLogQueueConfigAdapter eventSaveBatchSize] */

undefined8 FUN_106aceb20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106aceb28; end: 106aceb2f; -[SCBlizzardLogQueueConfigAdapter setEventSaveBatchSize:] */

void FUN_106aceb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106aceb30; end: 106aceb37; -[SCBlizzardLogQueueConfigAdapter eventRemoveBatchSize] */

undefined8 FUN_106aceb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106aceb38; end: 106aceb3f; -[SCBlizzardLogQueueConfigAdapter setEventRemoveBatchSize:] */

void FUN_106aceb38(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 106aceb40; end: 106aceb47; -[SCBlizzardLogQueueConfigAdapter eventMaxCount] */

undefined8 FUN_106aceb40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106aceb48; end: 106aceb4f; -[SCBlizzardLogQueueConfigAdapter setEventMaxCount:] */

void FUN_106aceb48(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106aceb50; end: 106aceb57; -[SCBlizzardLogQueueConfigAdapter eventUploadMaxBatchSize] */

undefined8 FUN_106aceb50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106aceb58; end: 106aceb5f; -[SCBlizzardLogQueueConfigAdapter setEventUploadMaxBatchSize:] */

void FUN_106aceb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 106aceb60; end: 106aceb67; -[SCBlizzardLogQueueConfigAdapter eventUploadThreshold] */

undefined8 FUN_106aceb60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106aceb68; end: 106aceb6f; -[SCBlizzardLogQueueConfigAdapter setEventUploadThreshold:] */

void FUN_106aceb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 106aceb70; end: 106aceb77; -[SCBlizzardLogQueueConfigAdapter blizzardDiskFlushIntervalSecs] */

undefined8 FUN_106aceb70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106aceb78; end: 106aceb7f; -[SCBlizzardLogQueueConfigAdapter setBlizzardDiskFlushIntervalSecs:] */

void FUN_106aceb78(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 106aceb80; end: 106acebaf; -[SCBlizzardLogQueueConfigAdapter setBlacklistedEvents:] */

void FUN_106aceb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


