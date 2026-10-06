/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103dc4bdc; end: 103dc4d2b;  */

long FUN_103dc4bdc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_7;
  if (param_1 == 0) {
    _swift_retain(param_3);
    _swift_retain(param_7);
    (*param_4)();
    _swift_release(param_5);
    _swift_release(param_3);
    param_5 = param_7;
  }
  else if (param_1 != 1) {
    func_0x0001000ab060(0);
    puVar1 = &UNK_110711908;
    _swift_allocObject(&UNK_110711908,0x20,7);
    *(code **)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_5;
    _swift_retain(param_3);
    _swift_retain(param_7);
    _swift_retain(param_5);
    lVar2 = param_1;
    func_0x0001009107f0(param_1,0,0,0,FUN_103dc4d2c,puVar1);
    _swift_release(puVar1);
    _swift_unknownObjectRelease(lVar2);
    _swift_release(param_3);
    _swift_release(param_5);
    _swift_release(param_7);
    func_0x0001009107f4(param_1);
    return unaff_x20;
  }
  _swift_release(param_5);
  return unaff_x20;
}



/* Entry: 103dc4d2c; end: 103dc4d4b;  */

void FUN_103dc4d2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103dc4d4c; end: 103dc4e03;  */

void FUN_103dc4d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110711a20;
  _swift_allocObject(&UNK_110711a20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_103dc50b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110711a38;
  puStack_38 = puVar1;
  __Block_copy(&puStack_60);
  puVar1 = puStack_38;
  _swift_retain(param_2);
  _swift_release(puVar1);
  func_0x000107c5e2a8(param_3);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 103dc4e04; end: 103dc4e0b;  */

void FUN_103dc4e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110711a20;
  _swift_allocObject(&UNK_110711a20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  pcStack_40 = FUN_103dc50b0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110711a38;
  puStack_38 = puVar1;
  __Block_copy(&puStack_60);
  puVar1 = puStack_38;
  _swift_retain(param_2);
  _swift_release(puVar1);
  func_0x000107c5e2a8(uVar3);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 103dc4e0c; end: 103dc4e37;  */

void FUN_103dc4e0c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dc4e38; end: 103dc4e9f;  */

void FUN_103dc4e38(ulong param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (((param_1 & 1) != 0) && ((**(code **)(unaff_x20 + 0x20))(), param_1 != 0)) {
    puVar1 = &UNK_1107119f8;
    _swift_allocObject(&UNK_1107119f8,0x18,7);
    *(ulong *)(puVar1 + 0x10) = param_1;
  }
  return;
}



/* Entry: 103dc4ea0; end: 103dc4eb7;  */

void FUN_103dc4ea0(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 103dc4eb8; end: 103dc4fb3;  */

ulong * FUN_103dc4eb8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      _objc_retain();
    }
  }
  else if (uVar1 < 0xffffffff) {
    _objc_release(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    _objc_retain();
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 103dc4fb4; end: 103dc50af;  */

int FUN_103dc4fb4(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 103dc50b0; end: 103dc50cf;  */

void FUN_103dc50b0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103dc50d0; end: 103dc50fb;  */

void FUN_103dc50d0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103dc50fc; end: 103dc513b;  */

void FUN_103dc50fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103dc513c; end: 103dc55bf;  */

void FUN_103dc513c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long *unaff_x20;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  undefined *apuStack_88 [3];
  
  lVar12 = *unaff_x20;
  lVar4 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar18 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar16 = unaff_x20[3];
  uVar20 = *(ulong *)(lVar16 + 0x10);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    apuStack_88[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_e8 = lVar18;
    lStack_e0 = lVar4;
    FUN_103dc478c(0,uVar20,0);
    uVar15 = 0;
    puVar19 = (undefined8 *)(lVar16 + 0x30);
    puVar14 = apuStack_88[0];
    do {
      if (*(ulong *)(lVar16 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103dc55a8);
        (*pcVar3)();
      }
      uVar6 = puVar19[-2];
      uVar10 = puVar19[-1];
      puVar9 = &UNK_110711a78;
      _swift_allocObject(&UNK_110711a78,0x20,7);
      param_1 = *puVar19;
      *(undefined8 *)(puVar9 + 0x18) = puVar19[1];
      *(undefined8 *)(puVar9 + 0x10) = param_1;
      lVar4 = 0;
      func_0x000103dc30fc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = uVar6;
      *(undefined8 *)(lVar4 + 0x18) = uVar10;
      *(code **)(lVar4 + 0x20) = FUN_103dc5a14;
      *(undefined **)(lVar4 + 0x28) = puVar9;
      uVar1 = *(ulong *)(puVar14 + 0x10);
      uVar2 = *(ulong *)(puVar14 + 0x18);
      apuStack_88[0] = puVar14;
      _swift_unknownObjectRetain(param_1);
      _swift_bridgeObjectRetain(uVar10);
      if (uVar2 >> 1 <= uVar1) {
        FUN_103dc478c(1 < uVar2,uVar1 + 1,1);
        puVar14 = apuStack_88[0];
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(puVar14 + 0x10) = uVar1 + 1;
      *(long *)(puVar14 + uVar1 * 8 + 0x20) = lVar4;
      puVar19 = puVar19 + 4;
      lVar4 = lStack_e0;
      lVar18 = lStack_e8;
    } while (uVar20 != uVar15);
  }
  if (unaff_x20[4] == 0) {
    puVar9 = PTR_PTR_1126a6e20;
    _objc_allocWithZone();
    func_0x000107c453e4();
    lVar16 = 0;
    func_0x000103dc4bbc();
    _swift_allocObject();
    (**(code **)(lVar18 + 0x68))
              (auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar4);
    puVar5 = PTR_PTR_1126ae790;
    _objc_allocWithZone();
    uVar6 = 0xd000000000000028;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1b9310);
    __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
    func_0x000107c470d0();
    _objc_release(uVar6);
    (**(code **)(lVar18 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    *(undefined **)(lVar16 + 0x10) = puVar9;
    *(undefined **)(lVar16 + 0x18) = puVar5;
    lVar4 = unaff_x20[4];
    unaff_x20[4] = lVar16;
    _swift_release(lVar4);
  }
  puVar17 = (undefined *)unaff_x20[2];
  uVar6 = 0x11300ba70;
  apuStack_88[0] = puVar17;
  func_0x0001000285a8(0x11300ba70,&UNK_10dc94320);
  ppuVar7 = apuStack_88;
  __sSS10describingSSx_tclufC();
  ppuVar8 = ppuVar7;
  func_0x0001000298f0();
  _swift_beginAccess();
  puVar9 = *ppuVar8;
  _objc_retain(puVar9);
  __ss11_StringGutsV4growyySiF(0x12);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(ppuVar7,uVar6);
  uVar10 = 0xd000000000000010;
  func_0x000100029b28(0xd000000000000010,0x800000010f1b9340);
  _objc_release(puVar9);
  _swift_bridgeObjectRelease(0x800000010f1b9340);
  _CACurrentMediaTime();
  puVar9 = &UNK_110711aa0;
  uVar21 = param_1;
  _swift_allocObject(&UNK_110711aa0,0x18,7);
  _swift_weakInit(puVar9 + 0x10,unaff_x20);
  puVar5 = &UNK_110711ac8;
  uVar20 = 0;
  _swift_allocObject(&UNK_110711ac8,0x50,7);
  *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(lVar12 + 0x50);
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined **)(puVar5 + 0x20) = puVar9;
  *(undefined ***)(puVar5 + 0x28) = ppuVar7;
  *(undefined8 *)(puVar5 + 0x30) = uVar6;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  *(undefined8 *)(puVar5 + 0x40) = param_2;
  *(undefined8 *)(puVar5 + 0x48) = param_3;
  _swift_retain(puVar9);
  _swift_retain(param_3);
  func_0x00010b88a600();
  if (lRam000000011300b9f8 != -1) {
    uVar20 = 0;
    _swift_once(0x11300b9f8);
  }
  lVar4 = lRam0000000113812108;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(long *)(lRam0000000113812108 + 0x10) != 0) &&
     (puVar11 = puVar17, func_0x0001000a7158(), puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8,
     (uVar20 & 1) != 0)) {
    puVar13 = *(undefined **)(*(long *)(lVar4 + 0x38) + (long)puVar11 * 8);
    _swift_bridgeObjectRetain(puVar13);
  }
  puVar11 = puVar13;
  func_0x000100403a6c(puVar13);
  _swift_bridgeObjectRelease(puVar13);
  FUN_103dc4870(0);
  _swift_allocObject();
  FUN_103dc347c(uVar21,puVar17,puVar11,puVar14,0x103dc5a1c,puVar5);
  _swift_release(puVar9);
  lVar4 = unaff_x20[5];
  unaff_x20[5] = (long)puVar17;
  _swift_release(lVar4);
  return;
}



/* Entry: 103dc55c0; end: 103dc5677;  */

void FUN_103dc55c0(code *param_1,undefined8 param_2,code *param_3,long param_4)

{
  undefined *puVar1;
  
  _swift_getObjectType();
  (**(code **)(param_4 + 8))();
  if (param_3 == (code *)0x0) {
    (*param_1)();
    return;
  }
  puVar1 = &UNK_110711c70;
  _swift_allocObject(&UNK_110711c70,0x20,7);
  *(code **)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_retain(param_2);
  (*param_3)(FUN_103dc5ba0,puVar1);
  _swift_release(puVar1);
  if (param_3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_4);
    return;
  }
  return;
}



/* Entry: 103dc5678; end: 103dc578f;  */

void FUN_103dc5678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  puVar1 = &UNK_110711bd0;
  _swift_allocObject(&UNK_110711bd0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_2;
  pcStack_70 = FUN_103dc5b58;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_110711be8;
  puStack_68 = puVar1;
  __Block_copy(&puStack_90);
  puVar1 = puStack_68;
  _swift_retain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(param_8);
  _swift_bridgeObjectRetain(param_2);
  _swift_release(puVar1);
  func_0x0001000d76cc("ScopeInitializationService.cleanup",ppuVar2);
  __Block_release(ppuVar2);
  return;
}



/* Entry: 103dc5790; end: 103dc596b;  */

void FUN_103dc5790(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  dVar7 = param_1;
  _CACurrentMediaTime();
  _swift_beginAccess(param_2 + 0x10,auStack_88,0,0);
  puVar2 = (undefined8 *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)puVar2[4];
    if (puVar6 != (undefined8 *)0x0) {
      _swift_retain(puVar6);
      _swift_release(puVar2);
      uVar5 = puVar6[2];
      uVar1 = puVar6[3];
      puVar3 = &UNK_110711c20;
      _swift_allocObject(&UNK_110711c20,0x30,7);
      *(undefined8 *)(puVar3 + 0x10) = uVar5;
      *(undefined8 *)(puVar3 + 0x18) = param_3;
      *(undefined8 *)(puVar3 + 0x20) = param_4;
      *(double *)(puVar3 + 0x28) = dVar7 - param_1;
      uStack_98 = 0x103dc5b90;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_110711c38;
      ppuVar4 = &puStack_b8;
      puStack_90 = puVar3;
      __Block_copy(ppuVar4);
      puVar3 = puStack_90;
      _objc_retain(uVar5);
      _swift_bridgeObjectRetain(param_4);
      _swift_release(puVar3);
      func_0x000107c4e524(uVar1);
      __Block_release(ppuVar4);
      puVar2 = puVar6;
    }
    _swift_release();
  }
  func_0x0001000298f0();
  _swift_beginAccess();
  uVar5 = *puVar2;
  _objc_retain(uVar5);
  func_0x000100069b5c(param_5);
  _objc_release(uVar5);
  _swift_beginAccess(param_2 + 0x10,auStack_d0,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    _swift_release();
    _swift_release(uVar5);
  }
  (*param_6)(param_8);
  return;
}



/* Entry: 103dc596c; end: 103dc5a13;  */

void FUN_103dc596c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 103dc5a14; end: 103dc5a33;  */

void FUN_103dc5a14(code *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar3 + 8))();
  if (pcVar1 == (code *)0x0) {
    (*param_1)();
    return;
  }
  puVar2 = &UNK_110711c70;
  _swift_allocObject(&UNK_110711c70,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  _swift_retain(param_2);
  (*pcVar1)(FUN_103dc5ba0,puVar2);
  _swift_release(puVar2);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 103dc5a34; end: 103dc5b57;  */

undefined * FUN_103dc5a34(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103dc5b58);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000103dc59b8();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000103dc30fc(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 103dc5b58; end: 103dc5b9f;  */

void FUN_103dc5b58(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  dVar14 = *(double *)(unaff_x20 + 0x18);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  pcVar2 = *(code **)(unaff_x20 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  dVar13 = dVar14;
  _CACurrentMediaTime();
  _swift_beginAccess(lVar10 + 0x10,auStack_88,0,0);
  puVar6 = (undefined8 *)(lVar10 + 0x10);
  _swift_weakLoadStrong();
  if (puVar6 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)puVar6[4];
    if (puVar12 != (undefined8 *)0x0) {
      _swift_retain(puVar12);
      _swift_release(puVar6);
      uVar1 = puVar12[2];
      uVar3 = puVar12[3];
      puVar7 = &UNK_110711c20;
      _swift_allocObject(&UNK_110711c20,0x30,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar1;
      *(undefined8 *)(puVar7 + 0x18) = uVar4;
      *(undefined8 *)(puVar7 + 0x20) = uVar9;
      *(double *)(puVar7 + 0x28) = dVar13 - dVar14;
      uStack_98 = 0x103dc5b90;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000f6b44;
      puStack_a0 = &UNK_110711c38;
      ppuVar8 = &puStack_b8;
      puStack_90 = puVar7;
      __Block_copy(ppuVar8);
      puVar7 = puStack_90;
      _objc_retain(uVar1);
      _swift_bridgeObjectRetain(uVar9);
      _swift_release(puVar7);
      func_0x000107c4e524(uVar3);
      __Block_release(ppuVar8);
      puVar6 = puVar12;
    }
    _swift_release();
  }
  func_0x0001000298f0();
  _swift_beginAccess();
  uVar9 = *puVar6;
  _objc_retain(uVar9);
  func_0x000100069b5c(uVar5);
  _objc_release(uVar9);
  _swift_beginAccess(lVar10 + 0x10,auStack_d0,0,0);
  lVar10 = lVar10 + 0x10;
  _swift_weakLoadStrong();
  if (lVar10 != 0) {
    uVar9 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = 0;
    _swift_release();
    _swift_release(uVar9);
  }
  (*pcVar2)(uVar11);
  return;
}



/* Entry: 103dc5ba0; end: 103dc5bbf;  */

void FUN_103dc5ba0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103dc5bc0; end: 103dc5bd7;  */

void FUN_103dc5bc0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 103dc5bd8; end: 103dc5cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103dc5bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  FUN_103dc5fec();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    _swift_release(uStack_58);
    *(long *)(unaff_x20 + _DAT_11300bd60) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11300bd68) = param_3;
    _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
    _objc_release(param_1);
    _objc_release(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc5cb4);
  (*pcVar1)();
}



/* Entry: 103dc5cb4; end: 103dc5d13; -[_TtC46BitmojiCameraPermissionRequestScopeGraphBridge61BitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint init] */

void FUN_103dc5cb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BitmojiCameraPermissionRequestScopeGraphBridge.BitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint"
             ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc5ce0);
  (*pcVar1)();
}



/* Entry: 103dc5d14; end: 103dc5d4b; -[_TtC46BitmojiCameraPermissionRequestScopeGraphBridge61BitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc5d14(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11300bd60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300bd68));
  return;
}



/* Entry: 103dc5d4c; end: 103dc5d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc5d4c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11300bd68),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11300bd60));
  return;
}



/* Entry: 103dc5d74; end: 103dc5d93;  */

void FUN_103dc5d74(void)

{
  _objc_opt_self(&PTR_PTR_11294b5b8);
  return;
}



/* Entry: 103dc5d94; end: 103dc5e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103dc5d94(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11300bd98) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_11300bda0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dc5e1c);
  (*pcVar2)();
}



/* Entry: 103dc5e1c; end: 103dc5f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103dc5e1c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  _objc_opt_self();
  func_0x000107c3e26c();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11300bd98);
  *(undefined **)(unaff_x20 + _DAT_11300bd98) = puVar2;
  _objc_retain();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11300bda0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_11300bda0))[1];
  _swift_getObjectType(uVar4);
  puVar3 = &UNK_110711d90;
  _swift_allocObject(&UNK_110711d90,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  _objc_retain(puVar2);
  (*pcVar5)(0x103dc5f08,puVar3,uVar4,lVar1);
  _swift_release(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 103dc5f04; end: 103dc5f0f;  */

void FUN_103dc5f04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103dc5f10; end: 103dc5f6f; -[_TtC46BitmojiCameraPermissionRequestScopeGraphBridge61SCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint init] */

void FUN_103dc5f10(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BitmojiCameraPermissionRequestScopeGraphBridge.SCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint"
             ,0x6c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc5f3c);
  (*pcVar1)();
}



/* Entry: 103dc5f70; end: 103dc5fa7; -[_TtC46BitmojiCameraPermissionRequestScopeGraphBridge61SCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc5f70(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11300bda0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300bd98));
  return;
}



/* Entry: 103dc5fa8; end: 103dc5fab;  */

void FUN_103dc5fa8(void)

{
  return;
}



/* Entry: 103dc5fac; end: 103dc5fcb;  */

void FUN_103dc5fac(void)

{
  FUN_103dc5e1c();
  return;
}



/* Entry: 103dc5fcc; end: 103dc5feb;  */

void FUN_103dc5fcc(void)

{
  _objc_opt_self(&PTR_PTR_11294b680);
  return;
}



/* Entry: 103dc5fec; end: 103dc60bb;  */

undefined8 FUN_103dc5fec(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  _swift_beginAccess(0x11300bdd0,&uStack_40,0x20,0);
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = &uStack_40;
  _swift_endAccess(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60,unaff_x20);
    _swift_unknownObjectRelease(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_103dc60bc();
    puVar2 = &uStack_68;
    _swift_dynamicCast(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103dc60bc; end: 103dc60db;  */

void FUN_103dc60bc(void)

{
  _objc_opt_self(&PTR_PTR_11294b748);
  return;
}



/* Entry: 103dc60dc; end: 103dc60f7;  */

void FUN_103dc60dc(undefined8 param_1)

{
  func_0x0001000285a8(0x11300bdd8,&UNK_10dc944a8);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_103dc6164,param_1);
  return;
}



/* Entry: 103dc60f8; end: 103dc6163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc60f8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_103dc60bc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11300bde0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103dc6164; end: 103dc616b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6164(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_103dc60bc();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_11300bde0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103dc616c; end: 103dc61b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc616c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11300bde0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dc61b8; end: 103dc6217; -[_TtC46BitmojiCameraPermissionRequestScopeGraphBridge54BitmojiCameraPermissionRequestScopeGraphBridgeServices init] */

void FUN_103dc61b8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("BitmojiCameraPermissionRequestScopeGraphBridge.BitmojiCameraPermissionRequestScopeGraphBridgeServices"
             ,0x65,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc61e4);
  (*pcVar1)();
}



/* Entry: 103dc6218; end: 103dc6227; -[_TtC46BitmojiCameraPermissionRequestScopeGraphBridge54BitmojiCameraPermissionRequestScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11300bde0));
  return;
}



/* Entry: 103dc6228; end: 103dc62b3;  */

void FUN_103dc6228(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x103dc6268,0);
  return;
}



/* Entry: 103dc62b4; end: 103dc62cf;  */

void FUN_103dc62b4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_103dc6320,param_1);
  return;
}



/* Entry: 103dc62d0; end: 103dc631f;  */

void FUN_103dc62d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  _swift_retain(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 103dc6320; end: 103dc6353;  */

void FUN_103dc6320(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 103dc6354; end: 103dc635b;  */

undefined8 FUN_103dc6354(void)

{
  return 0x1b;
}



/* Entry: 103dc635c; end: 103dc64d3;  */

void FUN_103dc635c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110711dd8;
  _swift_allocObject(&UNK_110711dd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_retain(param_1);
  _swift_retain(param_2);
  func_0x0001000823a8(FUN_103dc64d4,puVar1);
  return;
}



/* Entry: 103dc64d4; end: 103dc64db;  */

void FUN_103dc64d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  _swift_beginAccess(0x11300bdd0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  _objc_setAssociatedObject(auStack_50[0],0x11300bdd0,uVar1,1);
  _swift_endAccess(auStack_50);
  _objc_release(uVar1);
  _objc_release(uVar1);
  puVar2 = &UNK_110711eb0;
  _swift_allocObject(&UNK_110711eb0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  _swift_allocObject();
  uVar1 = 0x103dc65a8;
  func_0x00010058fa64(0x103dc65a8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103dc64dc; end: 103dc6537;  */

void FUN_103dc64dc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11300bdd0,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x11300bdd0,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 103dc6538; end: 103dc65af;  */

undefined ** FUN_103dc6538(void)

{
  return &PTR_DAT_1130667d8;
}



/* Entry: 103dc65b0; end: 103dc65f7; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc65b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300be38;
  _swift_beginAccess(param_1 + _DAT_11300be38,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dc65f8; end: 103dc664f; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc65f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300be38;
  _swift_beginAccess(param_1 + _DAT_11300be38,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103dc6650; end: 103dc6697; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint sCCameraBIPAScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6650(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300be40;
  _swift_beginAccess(param_1 + _DAT_11300be40,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103dc6698; end: 103dc66a3; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint setSCCameraBIPAScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6698(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300be40;
  _swift_beginAccess(param_1 + _DAT_11300be40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103dc66a4; end: 103dc66eb; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint bitmojiCameraPermissionRequestScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc66a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300be48;
  _swift_beginAccess(param_1 + _DAT_11300be48,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103dc66ec; end: 103dc66f7; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint setBitmojiCameraPermissionRequestScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc66ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300be48;
  _swift_beginAccess(param_1 + _DAT_11300be48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103dc66f8; end: 103dc6757;  */

void FUN_103dc66f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 103dc6758; end: 103dc6913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6758(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  plVar8 = &lStack_80;
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50b1c();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c3e98c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = 0;
      FUN_103dc5d74();
      lVar6 = lVar5;
      _objc_allocWithZone();
      _objc_retain();
      _objc_retain();
      _objc_retain();
      lVar7 = lVar2;
      FUN_103dc5fec();
      if (lVar7 != 0) {
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        _swift_release(uStack_68);
        *(long *)(lVar6 + _DAT_11300bd60) = lVar7;
        *(long *)(lVar6 + _DAT_11300bd68) = lVar4;
        lStack_80 = lVar6;
        lStack_78 = lVar5;
        _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
        _objc_release(lVar2);
        _objc_release(lVar3);
        func_0x000107c42c20(*(undefined8 *)((long)plVar8 + _DAT_11300bd68));
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11300be50);
        *(long **)(unaff_x20 + _DAT_11300be50) = plVar8;
        _objc_release(uVar9);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc6914);
      (*pcVar1)();
    }
    _objc_release(lVar2);
    lVar2 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 103dc6914; end: 103dc693b; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint begin] */

void FUN_103dc6914(undefined8 param_1)

{
  _objc_retain();
  FUN_103dc6758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103dc693c; end: 103dc697f; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint end] */

void FUN_103dc693c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dc6980; end: 103dc6b83;  */

void FUN_103dc6980(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0f8a0b0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000018,0x800000010f075f50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000003d;
        if (((param_2 != -0x2fffffffffffffc3) || (param_3 != -0x7ffffffef0e46b00)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000003d,0x800000010f1b9500,param_2,param_3,0), (uVar2 & 1) == 0))
        {
          __ss11_StringGutsV4growyySiF(0x15);
          _swift_bridgeObjectRelease(0xe000000000000000);
          __sSS6appendyySSF(param_2,param_3);
          __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                    ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                     "BitmojiCameraPermissionRequestScopeGraphBridge/SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint.swift"
                     ,0x74,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc6b84);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        __ss27_bridgeAnythingToObjectiveCyyXlxlF();
        func_0x000107c52cd4();
        goto LAB_103dc6a0c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c580c4();
  }
LAB_103dc6a0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103dc6b84; end: 103dc6c2f; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_103dc6b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103dc6980(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103dc6c30; end: 103dc6ca7; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6c30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11300be38,0);
  *(undefined8 *)(param_1 + _DAT_11300be40) = 0;
  *(undefined8 *)(param_1 + _DAT_11300be48) = 0;
  *(undefined8 *)(param_1 + _DAT_11300be50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dc6ca8; end: 103dc6cdb;  */

void FUN_103dc6ca8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103dc6cdc; end: 103dc6d33; -[SCBitmojiCameraPermissionRequestScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6cdc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11300be38);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11300be40));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11300be48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300be50));
  return;
}



/* Entry: 103dc6d34; end: 103dc6d53;  */

void FUN_103dc6d34(void)

{
  _objc_opt_self(&PTR_PTR_11294b808);
  return;
}



/* Entry: 103dc6d54; end: 103dc6d9b; -[SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6d54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11300be80;
  _swift_beginAccess(param_1 + _DAT_11300be80,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dc6d9c; end: 103dc6df3; -[SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11300be80;
  _swift_beginAccess(param_1 + _DAT_11300be80,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103dc6df4; end: 103dc6ecb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc6df4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_103dc5fcc();
    lVar5 = lVar4;
    _objc_allocWithZone();
    *(undefined8 *)(lVar5 + _DAT_11300bd98) = 0;
    _objc_retain();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    _objc_release(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103dc6ecc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_11300bda0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    _objc_release(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11300be88);
    *(long **)(unaff_x20 + _DAT_11300be88) = plVar7;
    _objc_release(uVar8);
  }
  return;
}



/* Entry: 103dc6ecc; end: 103dc6ef3; -[SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint begin] */

void FUN_103dc6ecc(undefined8 param_1)

{
  _objc_retain();
  FUN_103dc6df4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103dc6ef4; end: 103dc706b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103dc6ef4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  puVar4 = &stack0xffffffffffffff90;
  _swift_getObjectType();
  lVar5 = *(long *)(unaff_x20 + _DAT_11300be88);
  if (lVar5 != 0) {
    puVar2 = PTR_PTR_1126afc98;
    _objc_opt_self();
    _objc_retain();
    func_0x000107c3e26c();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar5 + _DAT_11300bd98);
    *(undefined **)(lVar5 + _DAT_11300bd98) = puVar2;
    _objc_retain();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(lVar5 + _DAT_11300bda0);
    lVar1 = ((undefined8 *)(lVar5 + _DAT_11300bda0))[1];
    _swift_getObjectType(uVar6);
    puVar3 = &UNK_110711ee8;
    _swift_allocObject(&UNK_110711ee8,0x18,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    pcVar7 = *(code **)(lVar1 + 8);
    _objc_retain();
    (*pcVar7)(FUN_103dc706c,puVar3,uVar6,lVar1);
    _swift_release(puVar3);
    puVar3 = puVar2;
    func_0x000107c4f3ec();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar5);
    if (puVar3 != (undefined *)0x0) {
      return puVar3;
    }
  }
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return puVar4;
}



/* Entry: 103dc706c; end: 103dc7073;  */

void FUN_103dc706c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103dc7074; end: 103dc70a7; -[SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint end] */

void FUN_103dc7074(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103dc6ef4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dc70a8; end: 103dc71c7;  */

void FUN_103dc70a8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0)) {
    __ss11_StringGutsV4growyySiF(0x15);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(param_2,param_3);
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
              ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
               "BitmojiCameraPermissionRequestScopeGraphBridge/SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint.swift"
               ,0x74,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc71c8);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103dc71c8; end: 103dc7273; -[SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_103dc71c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103dc70a8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103dc7274; end: 103dc72d3; -[SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc7274(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11300be80,0);
  *(undefined8 *)(param_1 + _DAT_11300be88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dc72d4; end: 103dc7307;  */

void FUN_103dc72d4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103dc7308; end: 103dc733f; -[SCSCBitmojiCameraPermissionRequestScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc7308(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11300be80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300be88));
  return;
}



/* Entry: 103dc7340; end: 103dc735f;  */

void FUN_103dc7340(void)

{
  _objc_opt_self(&PTR_PTR_11294b8d8);
  return;
}



/* Entry: 103dc7360; end: 103dc73ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc7360(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11300bec0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dc73ac; end: 103dc749f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103dc73ac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110711fd8;
    ppuVar3 = &puStack_78;
    lStack_58 = param_2;
    uStack_50 = param_3;
    __Block_copy(ppuVar3);
    uVar1 = uStack_50;
    _swift_retain(param_3);
    _swift_release(uVar1);
  }
  puVar2 = PTR_PTR_1126a7b10;
  _objc_allocWithZone();
  func_0x000107c48f18();
  __Block_release(ppuVar3);
  puStack_78 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_78);
  func_0x000100083b20(&puStack_78);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(puStack_78);
  return puVar2;
}



/* Entry: 103dc74a0; end: 103dc7553; -[_TtC22SCCameraBIPAScopeProxy25SCCameraBIPAScopeServices buildWithUIContainer:completionBlock:] */

void FUN_103dc74a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_110712058;
    _swift_allocObject(&UNK_110712058,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar3 = 0x103dc75d0;
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103dc73ac(param_3,uVar3,puVar2);
  func_0x00010058d43c(uVar3,puVar2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dc7554; end: 103dc7583;  */

void FUN_103dc7554(void)

{
  func_0x00010020e754();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103dc7584; end: 103dc75db; -[_TtC22SCCameraBIPAScopeProxy25SCCameraBIPAScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc7584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11300bec0));
  return;
}



/* Entry: 103dc75dc; end: 103dc7663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103dc75dc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4a754();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11300bf08) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11300bf10) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc7664);
  (*pcVar1)();
}



/* Entry: 103dc7664; end: 103dc76c3; -[_TtC32ActivUserSessionScopeGraphBridge47ActivUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103dc7664(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ActivUserSessionScopeGraphBridge.ActivUserSessionScopeGraphBridgeSaberEntryPoint",0x50
             ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dc7690);
  (*pcVar1)();
}



/* Entry: 103dc76c4; end: 103dc76fb; -[_TtC32ActivUserSessionScopeGraphBridge47ActivUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc76c4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11300bf08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11300bf10));
  return;
}



/* Entry: 103dc76fc; end: 103dc7723;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dc76fc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11300bf10),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11300bf08));
  return;
}



/* Entry: 103dc7724; end: 103dc7787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103dc7724(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11300c6a0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103dc7788; end: 103dc778f;  */

void FUN_103dc7788(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103dc7790; end: 103dc782f;  */

void FUN_103dc7790(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dc7830; end: 103dc784f;  */

void FUN_103dc7830(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103dc7850; end: 103dc78b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103dc7850(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11300c6a8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103dc78b4; end: 103dc78bb;  */

void FUN_103dc78b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103dc78bc; end: 103dc795b;  */

void FUN_103dc78bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dc795c; end: 103dc797b;  */

void FUN_103dc795c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103dc797c; end: 103dc79df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103dc797c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11300c6b0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103dc79e0; end: 103dc79e7;  */

void FUN_103dc79e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


