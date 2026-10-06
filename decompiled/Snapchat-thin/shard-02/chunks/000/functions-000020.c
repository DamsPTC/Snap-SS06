/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016c8c18; end: 1016c8c3b;  */

void FUN_1016c8c18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c8c3c; end: 1016c8cbf;  */

undefined1  [16]
FUN_1016c8c3c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_3f = param_4;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x00010008a7c8(&uStack_38,&uStack_50);
  func_0x000100083b20(&uStack_50);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = uStack_50;
  return auVar1;
}



/* Entry: 1016c8cc0; end: 1016c8d23;  */

/* WARNING: Possible PIC construction at 0x0001016c8cd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016c8cd8) */

void FUN_1016c8cc0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1016c8d24; end: 1016c8d8f;  */

undefined8 * FUN_1016c8d24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 1016c8d90; end: 1016c8dd3;  */

undefined8 * FUN_1016c8d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1016c8dd4; end: 1016c8ea7;  */

int FUN_1016c8dd4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016c8ea8; end: 1016c8f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016c8ea8(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_31;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000285a8(0x112dc1430,&UNK_10dbcdcc0);
  func_0x0001000b637c(uVar4);
  pcVar1 = FUN_1016c8f7c;
  func_0x0001000d5158(FUN_1016c8f7c,0,PTR___sSbN_11034dd40);
  uStack_31 = false;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    uStack_31 = *(int *)(*(long *)(unaff_x20 + 0x18) + _DAT_113075bb0) == 0;
  }
  puVar2 = &uStack_31;
  func_0x0001006c71a4(puVar2);
  func_0x000107c61574(pcVar1);
  puVar3 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  return puVar3;
}



/* Entry: 1016c8f7c; end: 1016c8fbb;  */

void FUN_1016c8f7c(undefined1 *param_1)

{
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 2;
  puStack_30 = param_1;
  func_0x0001043e1a34(FUN_1016c903c,auStack_40);
  return;
}



/* Entry: 1016c8fbc; end: 1016c8fe7;  */

void FUN_1016c8fbc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c8fe8; end: 1016c901b;  */

void FUN_1016c8fe8(void)

{
  func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
  func_0x000104886440();
  return;
}



/* Entry: 1016c901c; end: 1016c903b;  */

void FUN_1016c901c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc1478);
  return;
}



/* Entry: 1016c903c; end: 1016c906b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c903c(long param_1)

{
  long unaff_x20;
  
  if (param_1 != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = *(int *)(param_1 + _DAT_113075bb0) == 0;
    return;
  }
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1016c906c; end: 1016c919b;  */

void FUN_1016c906c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  uVar6 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_1103f94d8;
  func_0x000107c613fc(&UNK_1103f94d8,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_1103f9500;
  func_0x000107c613fc(&UNK_1103f9500,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1016c9518;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_50 = 0x1016c9544;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1016c919c;
  puStack_58 = &UNK_1103f9518;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7d0(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x6c,0x38,0x29,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016c919c);
  (*pcVar2)();
}



/* Entry: 1016c919c; end: 1016c9257;  */

void FUN_1016c919c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = 0;
  FUN_1016c9580(0,0x112dc1630,&PTR_PTR_1126d1088);
  func_0x000107c5fc54(param_2,uVar2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1016c9258; end: 1016c929b;  */

void FUN_1016c9258(void)

{
  long unaff_x20;
  
  func_0x0001016c79ec(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c929c; end: 1016c9453;  */

void FUN_1016c929c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  uVar2 = param_1;
  func_0x000107c49e18();
  if ((int)uVar2 != 0) {
    func_0x000107c4d420();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar2 = uVar1 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar2 = param_2 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        uVar2 = *(ulong *)(unaff_x20 + 0x18);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (uVar2 != 0) {
          uVar3 = uVar2;
          func_0x000107c3ef60();
          func_0x000107c61180();
          uVar4 = 0;
          FUN_1016c9580(0,0x112dc1628,&PTR_PTR_1126de338);
          uVar5 = uVar3;
          func_0x000107c5f9e8(uVar3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
          func_0x000107c61170(uVar3);
          if (*(long *)(uVar5 + 0x10) != 0) {
            func_0x000107c61434(uVar5);
            uVar3 = param_2;
            func_0x000100029284();
            if ((uVar3 & 1) != 0) {
              lVar6 = *(long *)(*(long *)(uVar5 + 0x38) + uVar1 * 8);
              func_0x000107c61174();
              func_0x000107c6142c(param_2);
              func_0x000107c61430(uVar5,2);
              lVar7 = lVar6;
              func_0x000107c4aa18();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c615e8(uVar2);
                func_0x000107c61170(lVar6);
                return;
              }
              func_0x000107c5faec();
              func_0x000107c61170(lVar7);
              func_0x000107c615e8(uVar2);
              func_0x000107c61170(lVar6);
              return;
            }
            func_0x000107c6142c(param_2);
            param_2 = uVar5;
          }
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(param_2);
          func_0x000107c615e8(uVar2);
          return;
        }
      }
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 1016c9454; end: 1016c949f;  */

void FUN_1016c9454(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016c94a0; end: 1016c9563;  */

long FUN_1016c94a0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49bac();
    func_0x000107c615e8(lVar1);
  }
  return lVar2;
}



/* Entry: 1016c9564; end: 1016c957f;  */

void FUN_1016c9564(long param_1,long param_2)

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



/* Entry: 1016c9580; end: 1016c95bf;  */

void FUN_1016c9580(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1016c95c0; end: 1016c97eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016c95c0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  code *pcVar9;
  undefined *puVar10;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar2 = _DAT_112dc1638;
  func_0x0001000285a8(0x112dc16a8,&UNK_10d97e238);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dc1640) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1648);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1650);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1658);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112dc1660;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1668);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112dc1670;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112dc1678;
  uVar3 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x000107c61180();
  plVar6 = param_1;
  func_0x000107c4b3f0();
  func_0x000107c61180();
  func_0x0001000285a8(0x112dc16b0,&UNK_10d97e240);
  plVar7 = plVar6;
  func_0x0001000b637c();
  puVar4 = &UNK_1103f9558;
  func_0x000107c613fc(&UNK_1103f9558,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar5);
  pcVar8 = FUN_1016ca794;
  puVar10 = puVar4;
  (**(code **)(*plVar7 + 0x60))(FUN_1016ca794);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar4);
  pcVar9 = pcVar8;
  func_0x000107c614f0(pcVar8);
  (**(code **)(puVar10 + 0x18))(*(undefined8 *)(puVar5 + _DAT_112dc1678),pcVar9,puVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(plVar6);
  func_0x000107c615e8(pcVar8);
  return puVar5;
}



/* Entry: 1016c97ec; end: 1016c985b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c97ec(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1016c985c(*(undefined8 *)(lVar1 + _DAT_113081bb8));
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1016c985c; end: 1016c9a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c985c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long alStack_d0 [2];
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  undefined1 auStack_90 [16];
  long *plStack_80;
  undefined1 auStack_70 [16];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = 0;
  plStack_a0 = &lStack_58;
  plStack_80 = &lStack_58;
  plStack_60 = &lStack_58;
  func_0x0001044f8428(FUN_1016ca5a4,0,FUN_1016ca79c,alStack_d0,0x1016ca88c,auStack_70,0x1016ca890,
                      auStack_90,0x1016ca894,auStack_b0);
  if (lStack_58 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc1640);
    *(long *)(unaff_x20 + _DAT_112dc1640) = lStack_58;
    lVar3 = lStack_58;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    uVar4 = ((undefined8 *)(lVar3 + _DAT_113081bf0))[1];
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1648);
    uVar5 = puVar1[1];
    *puVar1 = *(undefined8 *)(lVar3 + _DAT_113081bf0);
    puVar1[1] = uVar4;
    func_0x000107c61434();
    func_0x000107c6142c(uVar5);
    func_0x000100087bd4(FUN_1016ca7c8,alStack_d0,PTR___sytN_11034f1b0 + 8);
    lStack_58 = 0;
    plStack_a0 = &lStack_58;
    plStack_80 = &lStack_58;
    plStack_60 = &lStack_58;
    func_0x0001044f8428(0x1016ca5a8,0,FUN_1016ca7e0,alStack_d0,FUN_1016ca888,auStack_70,0x1016ca818,
                        auStack_90,0x1016ca850,auStack_b0);
    lVar2 = lStack_58;
    if (lStack_58 != 0) {
      alStack_d0[0] = lStack_58;
      func_0x000100087c34(alStack_d0);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1016c9a08; end: 1016c9a13; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter lensSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c9a08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dc1648))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112dc1648);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016c9a14; end: 1016c9a1f; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter setLensSessionId:] */

void FUN_1016c9a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1016c9a20(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016c9a20; end: 1016c9a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c9a20(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (param_2 == 0) {
    lVar2 = unaff_x20;
    func_0x000107c614f0();
    func_0x000104366fc4(0xd000000000000018,0x800000010efb78b0,lVar2,&PTR_DAT_1103f9468);
    param_1 = 0;
    param_2 = -0x2000000000000000;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1648);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1016c9a94; end: 1016c9b37; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter baseSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c9a94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100087bd4(&uStack_40,FUN_1016ca764,auStack_60,uVar1);
  func_0x000107c61170(param_1);
  if (lStack_38 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lStack_38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016c9b38; end: 1016c9bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c9b38(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112dc1670;
  func_0x000107c61428(param_2 + _DAT_112dc1670,auStack_58,0x20,0);
  lVar2 = *(long *)(param_2 + lVar2);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 0x10);
      uVar4 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6142c(lVar2);
  }
  *param_1 = uVar4;
  param_1[1] = uVar3;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1016c9c00; end: 1016c9c33; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter currentLensIndex] */

undefined8 FUN_1016c9c00(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1016c9c34();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1016c9c34; end: 1016c9e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1016c9c34(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_70;
  
  if (*(long *)(unaff_x20 + _DAT_112dc1640) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x20 + _DAT_112dc1640) + _DAT_113081c00);
    uVar10 = *(ulong *)(lVar3 + _DAT_113081a60);
    if ((uVar10 != 0) && (uVar9 = *(ulong *)(lVar3 + _DAT_113081a68), uVar9 != 0)) {
      uVar12 = uVar9 & 0xffffffffffffff8;
      if (uVar9 >> 0x3e == 0) {
        uStack_70 = *(ulong *)(uVar12 + 0x10);
      }
      else {
        uStack_70 = uVar9;
        if (-1 < (long)uVar9) {
          uStack_70 = uVar12;
        }
        func_0x000107c60480();
      }
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61434(uVar9);
      uVar11 = 0;
      while (uStack_70 != uVar11) {
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c9e4c);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar11;
          param_2 = uVar9;
          func_0x000100ff3f88();
        }
        uVar5 = uVar4;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        uVar8 = param_2;
        func_0x000107c61170(uVar5);
        uVar5 = uVar10;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar7 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if ((uVar6 == uVar7) && (param_2 == uVar8)) {
          func_0x000107c6142c(uVar9);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(uVar4);
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(uVar8);
LAB_1016c9e34:
          func_0x000107c61170(uVar10);
          if (!SCARRY8(uVar11,1)) {
            return uVar11 + 1;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c9e48);
          (*pcVar1)();
        }
        uVar5 = param_2;
        func_0x000107c605b8(uVar6,param_2,uVar7,uVar8,0);
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(uVar8);
        if ((uVar6 & 1) != 0) {
          func_0x000107c6142c(uVar9);
          func_0x000107c61170(lVar3);
          goto LAB_1016c9e34;
        }
        bVar2 = SCARRY8(uVar11,1);
        uVar11 = uVar11 + 1;
        param_2 = uVar5;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c9e50);
          (*pcVar1)();
        }
      }
      func_0x000107c61170(uVar10);
      func_0x000107c6142c(uVar9);
      func_0x000107c61170(lVar3);
    }
  }
  return 1;
}



/* Entry: 1016c9e70; end: 1016c9e8f; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter lensCount] */

void FUN_1016c9e70(void)

{
  FUN_1016c9e90();
  return;
}



/* Entry: 1016c9e90; end: 1016c9f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1016c9e90(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + _DAT_112dc1640) == 0) ||
     (uVar2 = *(ulong *)(*(long *)(*(long *)(unaff_x20 + _DAT_112dc1640) + _DAT_113081c00) +
                        _DAT_113081a68), uVar2 == 0)) {
    return 0;
  }
  if (uVar2 >> 0x3e == 0) {
    return *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  if (-1 < (long)uVar2) {
    uVar2 = uVar2 & 0xffffffffffffff8;
  }
  func_0x000107c60480();
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016c9f04);
    (*pcVar1)();
  }
  return uVar2;
}



/* Entry: 1016c9f0c; end: 1016c9f6b; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter lensSourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016c9f0c(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + _DAT_112dc1640) != 0) {
    puVar1 = PTR_PTR_1126bd498;
    func_0x000107c61168(PTR_PTR_1126bd498);
                    /* WARNING: Could not recover jumptable at 0x00010c096d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar1;
  }
  return (undefined *)0x12;
}



/* Entry: 1016c9f6c; end: 1016c9fa7; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter lensSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016c9f6c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dc1640) != 0) {
    return *(undefined8 *)
            (*(long *)(*(long *)(param_1 + _DAT_112dc1640) + _DAT_113081bf8) + _DAT_113081a28);
  }
  return 0;
}



/* Entry: 1016c9fa8; end: 1016c9fe3; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter snapSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1016c9fa8(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dc1640) != 0) {
    return *(undefined8 *)
            (*(long *)(*(long *)(param_1 + _DAT_112dc1640) + _DAT_113081bf8) + _DAT_113081a20);
  }
  return 8;
}



/* Entry: 1016c9fe4; end: 1016ca02f; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter currentLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016c9fe4(long param_1)

{
  if (*(long *)(param_1 + _DAT_112dc1640) != 0) {
    func_0x000107c61174(*(undefined8 *)
                         (*(long *)(*(long *)(param_1 + _DAT_112dc1640) + _DAT_113081c00) +
                         _DAT_113081a60));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016ca030; end: 1016ca06f; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter lensSessionInfoObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca030(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016ca070; end: 1016ca07b; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter lensSwipeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dc1650))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112dc1650);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016ca07c; end: 1016ca087; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter setLensSwipeId:] */

void FUN_1016ca07c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1016ca088(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016ca088; end: 1016ca0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca088(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (param_2 == 0) {
    lVar2 = unaff_x20;
    func_0x000107c614f0();
    func_0x000104366fc4(0xd000000000000016,0x800000010efb7890,lVar2,&PTR_DAT_1103f9468);
    param_1 = 0;
    param_2 = -0x2000000000000000;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1650);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1016ca0fc; end: 1016ca123; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter lensSwipeIdObservable] */

void FUN_1016ca0fc(void)

{
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c42538();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016ca124; end: 1016ca12f; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter arBarTabSessionId] */

void FUN_1016ca124(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1130819d8;
  func_0x0001016ca184(&DAT_1130819d8);
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016ca130; end: 1016ca13b; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter arBarTabCategoryId] */

void FUN_1016ca130(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1130819e0;
  func_0x0001016ca184(&DAT_1130819e0);
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1016ca13c; end: 1016ca1f7;  */

void FUN_1016ca13c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001016ca184(param_3);
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016ca1f8; end: 1016ca203; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca1f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dc1658))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112dc1658);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016ca204; end: 1016ca25b;  */

void FUN_1016ca204(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016ca25c; end: 1016ca267; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter setContextSessionId:] */

void FUN_1016ca25c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_1016ca2d0(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016ca268; end: 1016ca2cf;  */

void FUN_1016ca268(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016ca2d0; end: 1016ca343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca2d0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (param_2 == 0) {
    lVar2 = unaff_x20;
    func_0x000107c614f0();
    func_0x000104366fc4(0xd00000000000001b,0x800000010efb7870,lVar2,&PTR_DAT_1103f9468);
    param_1 = 0;
    param_2 = -0x2000000000000000;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc1658);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1016ca344; end: 1016ca34b; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter currentLensOptionId] */

void FUN_1016ca344(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1016ca34c; end: 1016ca353; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter currentLensOptionSourceType] */

undefined8 FUN_1016ca34c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 1016ca354; end: 1016ca35b; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter frontCameraSnapFacesCount] */

undefined8 FUN_1016ca354(void)

{
  return 0;
}



/* Entry: 1016ca35c; end: 1016ca363; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter backCameraSnapFacesCount] */

undefined8 FUN_1016ca35c(void)

{
  return 0;
}



/* Entry: 1016ca364; end: 1016ca46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca364(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_113081be8);
  uVar3 = ((undefined8 *)(param_2 + _DAT_113081be8))[1];
  puVar1 = (undefined8 *)(param_1 + _DAT_112dc1668);
  uVar8 = puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000107c61438(uVar3,2);
  func_0x000107c6142c(uVar8);
  lVar5 = _DAT_112dc1670;
  uVar8 = *(undefined8 *)(param_2 + _DAT_113081bf0);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113081bf0))[1];
  func_0x000107c61428(param_1 + _DAT_112dc1670,auStack_68,0x21,0);
  func_0x000107c61434(uVar4);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  func_0x000107c61558(uVar6);
  uVar7 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0x8000000000000000;
  func_0x00010018433c(uVar2,uVar3,uVar8,uVar4,uVar6);
  func_0x000107c6142c(uVar4);
  *(undefined8 *)(param_1 + lVar5) = uVar7;
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1016ca46c; end: 1016ca4cb; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter init] */

void FUN_1016ca46c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLoggingIntegration.LensCarouselSessionAdapter",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016ca498);
  (*pcVar1)();
}



/* Entry: 1016ca4cc; end: 1016ca583; -[_TtC22LensLoggingIntegration26LensCarouselSessionAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016ca4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016ca544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016ca4ec) */
/* WARNING: Removing unreachable block (ram,0x0001016ca548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca4cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc1638));
  return;
}



/* Entry: 1016ca584; end: 1016ca5a3;  */

void FUN_1016ca584(void)

{
  func_0x000107c61168(&PTR_PTR_1127e72d0);
  return;
}



/* Entry: 1016ca5a4; end: 1016ca5ab;  */

void FUN_1016ca5a4(void)

{
  return;
}



/* Entry: 1016ca5ac; end: 1016ca763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016ca5ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113081bf0);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_113081bf0))[1];
  func_0x000107c61168(PTR_PTR_1126bd498);
  lVar4 = *(long *)(unaff_x20 + _DAT_113081bf8);
  func_0x000107c4b420();
  lVar4 = *(long *)(lVar4 + _DAT_113081a18);
  if (lVar4 == 0) {
    lVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    lVar4 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar4 + _DAT_1130819d8);
    lVar7 = ((undefined8 *)(lVar4 + _DAT_1130819d8))[1];
    uVar5 = *(undefined8 *)(lVar4 + _DAT_1130819e0);
    lVar4 = ((undefined8 *)(lVar4 + _DAT_1130819e0))[1];
    func_0x000107c61434(lVar4);
    func_0x000107c61434(lVar7);
  }
  func_0x000107c5fadc(uVar2,uVar1);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c5fadc(uVar6,lVar7);
    func_0x000107c6142c(lVar7);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c5fadc(uVar5,lVar4);
    func_0x000107c6142c(lVar4);
  }
  puVar3 = PTR_PTR_1126c4378;
  func_0x000107c610f8(PTR_PTR_1126c4378);
  func_0x000107c48628();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  return puVar3;
}



/* Entry: 1016ca764; end: 1016ca793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca764(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112dc1668);
  uVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 1016ca794; end: 1016ca79b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016ca794(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1016c985c(*(undefined8 *)(lVar2 + _DAT_113081bb8));
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1016ca79c; end: 1016ca7c7;  */

void FUN_1016ca79c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1016ca7c8; end: 1016ca7df;  */

void FUN_1016ca7c8(void)

{
  long unaff_x20;
  
  FUN_1016ca364(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1016ca7e0; end: 1016ca887;  */

void FUN_1016ca7e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 1;
  FUN_1016ca5ac(param_1);
  uVar2 = *puVar3;
  *puVar3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1016ca888; end: 1016ca897;  */

void FUN_1016ca888(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = 1;
  FUN_1016ca5ac(param_1);
  uVar2 = *puVar3;
  *puVar3 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1016ca898; end: 1016caa23;  */

void FUN_1016ca898(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
    func_0x000104886440();
  }
  else {
    lVar3 = lVar2;
    FUN_1016cabf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 5;
    *(undefined8 *)(lVar3 + 0x10) = 2;
    lVar4 = lVar2;
    func_0x000107c5e32c();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016caa20);
      (*pcVar1)();
    }
    *(long *)(lVar3 + 0x20) = lVar4;
    lVar4 = lVar2;
    func_0x000107c5e334();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016caa24);
      (*pcVar1)();
    }
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    *(long *)(lVar3 + 0x28) = lVar4;
    uVar6 = 0x112d5b0a0;
    func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar6);
    func_0x000107c61574(lVar3);
    func_0x000107c4cd50(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    puVar7 = puVar5;
    func_0x0001000b637c(puVar5);
    func_0x000107c61170(puVar5);
    func_0x0001000bfde0(FUN_1016caa24,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(puVar7);
  }
  return;
}



/* Entry: 1016caa24; end: 1016caa27;  */

void FUN_1016caa24(void)

{
  return;
}



/* Entry: 1016caa28; end: 1016cab53;  */

void FUN_1016caa28(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    func_0x000104886440();
  }
  else {
    lVar3 = lVar2;
    func_0x000107c41a3c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016cab50);
      (*pcVar1)();
    }
    func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
    lVar4 = lVar3;
    func_0x0001000b637c(lVar3);
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c3f600();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016cab54);
      (*pcVar1)();
    }
    plVar5 = &lStack_38;
    lStack_38 = lVar3;
    func_0x0001006c71a4(plVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(lVar4);
    pcVar1 = FUN_1016cab54;
    func_0x0001000bfde0(FUN_1016cab54,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(plVar5);
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(pcVar1);
  }
  return;
}



/* Entry: 1016cab54; end: 1016cabab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016cab54(undefined8 param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = *(int *)(lVar3 + _DAT_113075bb0);
    func_0x000107c61170();
    bVar2 = iVar1 == 0;
  }
  *(bool *)param_1 = bVar2;
  return;
}



/* Entry: 1016cabac; end: 1016cabcf;  */

void FUN_1016cabac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016cabd0; end: 1016cabef;  */

void FUN_1016cabd0(void)

{
  FUN_1016ca898();
  return;
}



/* Entry: 1016cabf0; end: 1016cac77;  */

/* WARNING: Possible PIC construction at 0x0001016cac20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016cac24) */
/* WARNING: Removing unreachable block (ram,0x0001016cac28) */

void FUN_1016cabf0(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112d5b228;
    plVar5 = (long *)&UNK_10d9223b0;
  }
  else {
    puVar3 = (ulong *)0x112d5b0a0;
    plVar5 = (long *)&UNK_10d97aac0;
    unaff_x30 = 0x1016cac24;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1016cac78; end: 1016cad3f;  */

void FUN_1016cac78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112dc1758,&UNK_10d97e2a0);
  puVar1 = &UNK_1103f95a0;
  func_0x000107c613fc(&UNK_1103f95a0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1016cae68,puVar1);
  return;
}



/* Entry: 1016cad40; end: 1016cae67;  */

void FUN_1016cad40(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_a0);
  FUN_1016cc088();
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined **)(param_2 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x28) = uStack_68;
  *(undefined8 *)(param_2 + 0x30) = uStack_70;
  *(undefined8 *)(param_2 + 0x48) = uStack_78;
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x18) = uStack_98;
  *(undefined8 *)(param_2 + 0x10) = uStack_a0;
  *(undefined2 *)(param_2 + 0x20) = uStack_90;
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_1103f9658;
  return;
}



/* Entry: 1016cae68; end: 1016cae77;  */

void FUN_1016cae68(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_a0);
  FUN_1016cc088();
  func_0x000107c613fc();
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined **)(lVar1 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined4 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x28) = uStack_68;
  *(undefined8 *)(lVar1 + 0x30) = uStack_70;
  *(undefined8 *)(lVar1 + 0x48) = uStack_78;
  *(undefined8 *)(lVar1 + 0x50) = uVar2;
  *(undefined8 *)(lVar1 + 0x38) = uStack_88;
  *(undefined8 *)(lVar1 + 0x40) = uStack_80;
  *(undefined8 *)(lVar1 + 0x18) = uStack_98;
  *(undefined8 *)(lVar1 + 0x10) = uStack_a0;
  *(undefined2 *)(lVar1 + 0x20) = uStack_90;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1103f9658;
  return;
}



/* Entry: 1016cae78; end: 1016caf3f;  */

long FUN_1016cae78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined4 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x48) = param_3;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_6;
  *(undefined8 *)(unaff_x20 + 0x18) = param_7;
  *(char *)(unaff_x20 + 0x20) = (char)param_8;
  *(char *)(unaff_x20 + 0x21) = (char)((uint)param_8 >> 8);
  return unaff_x20;
}



/* Entry: 1016caf40; end: 1016cb0db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016caf40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  func_0x000100087bd4(&puStack_88,FUN_1016cbdf0);
  if ((char)puStack_88 == '\x01') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081858);
    puVar4 = &UNK_1103f95c8;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1103f95c8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_68 = FUN_1016cbe20;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = (undefined *)0x1016cc144;
    puStack_70 = &UNK_1103f95e0;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(uVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4db94(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c613fc(&UNK_1103f95c8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcStack_68 = (code *)0x1016cc148;
    puStack_88 = puVar1;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100b83e24;
    puStack_70 = &UNK_1103f9608;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_60);
    func_0x000107c4db94(uVar5);
    func_0x000107c60bd0(ppuVar3);
    FUN_1016cb0dc();
  }
  return;
}



/* Entry: 1016cb0dc; end: 1016cb8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016cb0dc(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long unaff_x20;
  undefined8 *puVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined *puVar28;
  undefined8 uStack_178;
  undefined1 uStack_16c;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [56];
  undefined *puStack_a0;
  undefined8 uStack_98;
  
  func_0x0001000285a8(0x112dc1910,&UNK_10d97e3e8);
  func_0x000100087bd4(&puStack_a0,0x1016cc0c8);
  puVar2 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    return;
  }
  FUN_1016ca584(0);
  func_0x000107c610f8();
  func_0x000107c615f0();
  puVar3 = puStack_a0;
  FUN_1016c95c0();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar5 = &UNK_1103f96b8;
  func_0x000107c613fc(&UNK_1103f96b8,0x18,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  ppuVar6 = &puStack_a0;
  func_0x000107c60bc4();
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0();
  puVar28 = *(undefined **)(*(long *)(unaff_x20 + 0x28) + _DAT_113083868);
  lVar23 = *(long *)(unaff_x20 + 0x18);
  cVar1 = *(char *)(unaff_x20 + 0x20);
  func_0x0001016cc0a8();
  func_0x000107c61534();
  puVar5 = (undefined *)0x112dc1428;
  func_0x0001000285a8(0x112dc1428,&UNK_10d97e110);
  func_0x000104886440();
  ppuVar6[2] = puVar5;
  ppuVar7 = (undefined **)0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  if (cVar1 == '\x02') {
    func_0x000104886440();
    func_0x000107c61174(puVar28);
  }
  else {
    puStack_a0 = (undefined *)(CONCAT71(puStack_a0._1_7_,cVar1) & 0xffffffffffffff01);
    func_0x000107c61174(puVar28);
    ppuVar7 = &puStack_a0;
    func_0x000100854cb0();
  }
  ppuVar6[3] = (undefined *)ppuVar7;
  puVar8 = *(undefined **)(unaff_x20 + 0x40);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c4b080();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5b7f4();
  func_0x000107c61180();
  lVar24 = *(long *)(unaff_x20 + 0x48);
  puVar11 = &UNK_1103f9708;
  func_0x000107c613fc(&UNK_1103f9708,0x18,7);
  *(undefined **)(puVar11 + 0x10) = puVar3;
  if (*(char *)(unaff_x20 + 0x21) == '\x02') {
    uStack_178 = 0;
    uStack_16c = 1;
  }
  else {
    if (*(char *)(unaff_x20 + 0x21) == '\x01') {
      uStack_178 = 1;
    }
    else {
      uStack_178 = 2;
    }
    uStack_16c = 0;
  }
  lVar12 = 0;
  func_0x0001016c927c();
  func_0x000107c613fc();
  puVar25 = (undefined8 *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *puVar25 = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  func_0x000107c61174();
  func_0x000107c61174();
  puVar13 = puVar28;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c61574(ppuVar6);
  }
  else {
    puVar14 = puVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
      func_0x000107c61574(ppuVar6);
    }
    else {
      puVar15 = puVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar15 == (undefined *)0x0) {
        func_0x000107c61574(ppuVar6);
      }
      else {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar23 != 0) {
          func_0x0001000285a8(0x112dc1178,&UNK_10d97deb0);
          lVar16 = lVar23;
          func_0x000107c4ae74(lVar23);
          func_0x000107c61180();
          lVar17 = lVar16;
          func_0x0001000b637c();
          func_0x000107c61170(lVar16);
          uVar18 = 0x112dc1180;
          func_0x0001000285a8(0x112dc1180,&UNK_10d97deb8);
          pcVar27 = FUN_1016c906c;
          func_0x0001000d5158(FUN_1016c906c,0,uVar18);
          func_0x000107c61574(lVar17);
          puVar19 = &UNK_1103f9730;
          func_0x000107c613fc(&UNK_1103f9730,0x20,7);
          *(undefined8 *)(puVar19 + 0x10) = uVar9;
          *(undefined8 *)(puVar19 + 0x18) = uVar10;
          func_0x0001000285a8(0x112dc1188,&UNK_10d97dec0);
          func_0x000107c613fc();
          func_0x000107c61174();
          func_0x000107c61174();
          uVar18 = 0x1016cc110;
          func_0x0001000bdd8c(0x1016cc110,puVar19);
          func_0x0001000285a8(0x112d3b3f0,&UNK_10d904a98);
          func_0x000107c615f0(puVar13);
          puVar19 = puVar14;
          func_0x000107c4b3fc();
          func_0x000107c61180();
          puVar20 = puVar19;
          func_0x0001000b637c();
          func_0x000107c61170(puVar19);
          func_0x000107c6157c(pcVar27);
          func_0x000107c6157c(puVar5);
          func_0x000107c6157c(ppuVar7);
          func_0x000107c6157c(uVar18);
          puVar19 = puVar15;
          func_0x000107c4c020();
          func_0x000107c61180();
          puVar21 = PTR_PTR_1126aeea8;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar26 = *(undefined8 *)(lVar24 + _DAT_113036458);
          FUN_1016d36c8();
          func_0x000107c613fc();
          func_0x000107c6157c(uVar26);
          func_0x000107c6157c(puVar11);
          puVar22 = puVar13;
          func_0x0001016d02e4(puVar13,puVar20,pcVar27,puVar5,ppuVar7,uVar18,puVar19,puVar21,uVar26,
                              0x1016cc0e8,puVar11,uStack_178,uStack_16c);
          func_0x000107c615e8(puVar14);
          func_0x000107c615e8(puVar15);
          func_0x000107c61170(puVar28);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar8);
          puStack_a0 = puVar22;
          func_0x000107c61574(ppuVar6);
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar10);
          func_0x000107c615e8(puVar13);
          func_0x000107c61574(pcVar27);
          func_0x000107c61574(uVar18);
          func_0x000107c61574(puVar11);
          func_0x000107c615e8(lVar23);
          func_0x000107c61428(puVar25,&uStack_100,0x21,0);
          FUN_1016c794c(&puStack_a0,puVar25);
          func_0x000107c614a8(&uStack_100);
          goto LAB_1016cb72c;
        }
        func_0x000107c61574(ppuVar6);
        func_0x000107c615e8(puVar14);
        puVar14 = puVar15;
      }
      func_0x000107c615e8(puVar14);
    }
    func_0x000107c615e8(puVar13);
  }
  func_0x000107c61170(puVar28);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(puVar11);
LAB_1016cb72c:
  func_0x000100087bd4(&uStack_100,FUN_1016cc0f0,&puStack_a0,PTR___sSbN_11034dd40);
  if ((char)uStack_100 == '\x01') {
    func_0x000107c61428(puVar25,auStack_d8,0,0);
    func_0x0001016c799c(puVar25,&uStack_100);
    if (lStack_e8 == 0) {
      func_0x000107c61580();
      func_0x0001016c79ec(&uStack_100);
      func_0x0001016cbb60();
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61578();
      func_0x000107c61574(lVar12);
    }
    else {
      FUN_1016c7a34(&uStack_100,&puStack_a0);
      func_0x0001000a8868(&puStack_a0,puVar3);
      pcVar27 = *(code **)(lVar12 + 8);
      func_0x000107c6157c();
      (*pcVar27)(FUN_1016cc10c);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61574();
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_e8 = 0;
      uStack_f0 = 0;
      func_0x000107c61428(puVar25,auStack_118,0x21,0);
      FUN_1016c794c(&uStack_100,puVar25);
      func_0x000107c614a8(auStack_118);
      func_0x000107c61574(lVar12);
      func_0x0001000834e4(&puStack_a0);
    }
  }
  else {
    func_0x000107c61574(lVar12);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(puVar2);
  }
  return;
}



/* Entry: 1016cb8c4; end: 1016cb917;  */

void FUN_1016cb8c4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1016cb0dc();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1016cb918; end: 1016cbc17;  */

void FUN_1016cb918(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x00010006c804();
  *(undefined1 *)(unaff_x20 + 0x68) = 1;
  if (param_1 != 0) {
    puVar4 = &UNK_1103f9640;
    func_0x000107c613fc(&UNK_1103f9640,0x20,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    func_0x000107c61428(unaff_x20 + 0x70,auStack_68,0x21,0);
    uVar7 = *(ulong *)(unaff_x20 + 0x70);
    func_0x000107c6157c(param_2);
    uVar5 = uVar7;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + 0x70) = uVar7;
    uVar6 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      FUN_1016cbf48(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      *(ulong *)(unaff_x20 + 0x70) = uVar6;
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1016cbf48(uVar7,uVar5 + 1,1,uVar6);
    }
    *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
    lVar1 = uVar7 + uVar5 * 0x10;
    *(code **)(lVar1 + 0x20) = FUN_1016cbe54;
    *(undefined **)(lVar1 + 0x28) = puVar4;
    *(ulong *)(unaff_x20 + 0x70) = uVar7;
    func_0x000107c614a8(auStack_68);
  }
  if ((*(byte *)(unaff_x20 + 0x6b) & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    func_0x000107c61170(uVar2);
    bVar3 = *(byte *)(unaff_x20 + 0x6a);
    *(byte *)(unaff_x20 + 0x6b) = lVar1 != 0 | bVar3 & 1;
    func_0x000100070bfc();
    if (lVar1 == 0) {
      if ((bVar3 & 1) == 0) {
        func_0x0001016cbb60();
      }
    }
    else {
      func_0x000107c61428(lVar1 + 0x10,auStack_80,0,0);
      func_0x0001016c799c(lVar1 + 0x10,&uStack_b0);
      if (lStack_98 == 0) {
        func_0x000107c61580();
        func_0x0001016c79ec(&uStack_b0);
        func_0x0001016cbb60();
        func_0x000107c61578();
        func_0x000107c61574(lVar1);
      }
      else {
        FUN_1016c7a34(&uStack_b0,auStack_68);
        func_0x0001000a8868(auStack_68,uStack_50);
        pcVar8 = *(code **)(lStack_48 + 8);
        func_0x000107c6157c();
        (*pcVar8)(0x1016cc14c);
        func_0x000107c61574();
        uStack_90 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
        func_0x000107c61428(lVar1 + 0x10,auStack_c8,0x21,0);
        func_0x0001016c794c(&uStack_b0,lVar1 + 0x10);
        func_0x000107c614a8(auStack_c8);
        func_0x000107c61574(lVar1);
        func_0x0001000834e4(auStack_68);
      }
    }
  }
  else {
    func_0x000100070bfc();
  }
  return;
}



/* Entry: 1016cbc18; end: 1016cbcbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016cbc18(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((((*(byte *)(param_2 + 0x68) & 1) == 0) && ((*(byte *)(param_2 + 0x6a) & 1) == 0)) &&
     (*(long *)(param_2 + 0x58) == 0)) {
    lVar2 = *(long *)(*(long *)(param_2 + 0x10) + _DAT_113081858);
    func_0x000107c4500c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x18);
      func_0x000107c49bc8();
      if (iVar1 == 0) {
        func_0x000107c615e8(lVar2);
        lVar2 = 0;
      }
      else {
        *(undefined1 *)(param_2 + 0x6a) = 1;
      }
    }
  }
  else {
    lVar2 = 0;
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1016cbcbc; end: 1016cbcf3;  */

void FUN_1016cbcbc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1016cbcf4; end: 1016cbd63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1016cbcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  
  uVar1 = 0x112d35ff8;
  uStack_60 = param_3;
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000100087bd4(auStack_40,FUN_1016cc118,auStack_70,uVar1);
  return auStack_40;
}



/* Entry: 1016cbd64; end: 1016cbdef;  */

void FUN_1016cbd64(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_2 + 0x6a) = 0;
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = param_4;
    func_0x000107c61174(param_3);
    func_0x000107c61574(uVar2);
    func_0x000107c6157c(param_4);
    uVar1 = *(undefined1 *)(param_2 + 0x68);
  }
  else {
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1016cbdf0; end: 1016cbe1f;  */

void FUN_1016cbdf0(undefined1 *param_1)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x68) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  if ((*(byte *)(unaff_x20 + 0x69) & 1) != 0) {
    *param_1 = 0;
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x69) = 1;
  *param_1 = 1;
  return;
}



/* Entry: 1016cbe20; end: 1016cbe37;  */

void FUN_1016cbe20(void)

{
  FUN_1016cb8c4();
  return;
}



/* Entry: 1016cbe38; end: 1016cbe53;  */

void FUN_1016cbe38(long param_1,long param_2)

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



/* Entry: 1016cbe54; end: 1016cbee7;  */

void FUN_1016cbe54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1016cbee8; end: 1016cbf07;  */

void FUN_1016cbee8(void)

{
  func_0x0001016cbe74();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016cbf08; end: 1016cbf0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016cbf08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  func_0x000100087bd4(&puStack_88,FUN_1016cbdf0);
  if ((char)puStack_88 == '\x01') {
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113081858);
    puVar4 = &UNK_1103f95c8;
    puVar2 = puVar4;
    func_0x000107c613fc(&UNK_1103f95c8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_68 = FUN_1016cbe20;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = (undefined *)0x1016cc144;
    puStack_70 = &UNK_1103f95e0;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(uVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4db94(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c613fc(&UNK_1103f95c8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcStack_68 = (code *)0x1016cc148;
    puStack_88 = puVar1;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100b83e24;
    puStack_70 = &UNK_1103f9608;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_60);
    func_0x000107c4db94(uVar5);
    func_0x000107c60bd0(ppuVar3);
    FUN_1016cb0dc();
  }
  return;
}



/* Entry: 1016cbf10; end: 1016cbf3b;  */

void FUN_1016cbf10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016cbf3c; end: 1016cbf47;  */

void FUN_1016cbf3c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1016cbf48; end: 1016cc077;  */

undefined * FUN_1016cbf48(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016cc078);
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
    puVar3 = (undefined *)0x112d9de78;
    func_0x0001000285a8(0x112d9de78,&UNK_10dbfb6a0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d3a690;
    func_0x0001000285a8(0x112d3a690,&UNK_10d93eac0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1016cc078; end: 1016cc087;  */

undefined1  [16] FUN_1016cc078(void)

{
  return ZEXT816(0x1103f9680);
}



/* Entry: 1016cc088; end: 1016cc0df;  */

void FUN_1016cc088(void)

{
  func_0x000107c61168(&PTR_PTR_112dc17a0);
  return;
}



/* Entry: 1016cc0e0; end: 1016cc0ef;  */

void FUN_1016cc0e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1016cc0f0; end: 1016cc10b;  */

void FUN_1016cc0f0(void)

{
  long unaff_x20;
  
  FUN_1016cbd64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1016cc10c; end: 1016cc117;  */

void FUN_1016cc10c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_58 [24];
  
  func_0x00010006c804();
  func_0x000107c61428(unaff_x20 + 0x70,auStack_58,1,0);
  lVar3 = *(long *)(unaff_x20 + 0x70);
  *(undefined **)(unaff_x20 + 0x70) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + 0x6b) = 0;
  func_0x000100070bfc();
  uVar4 = *(ulong *)(lVar3 + 0x10);
  if (uVar4 != 0) {
    uVar5 = 0;
    puVar6 = (undefined8 *)(lVar3 + 0x28);
    do {
      if (*(ulong *)(lVar3 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016cbc18);
        (*pcVar2)();
      }
      uVar5 = uVar5 + 1;
      pcVar2 = (code *)puVar6[-1];
      uVar1 = *puVar6;
      func_0x000107c6157c(uVar1);
      (*pcVar2)();
      func_0x000107c61574(uVar1);
      puVar6 = puVar6 + 2;
    } while (uVar4 != uVar5);
  }
  func_0x000107c6142c(lVar3);
  return;
}



/* Entry: 1016cc118; end: 1016cc133;  */

void FUN_1016cc118(void)

{
  long unaff_x20;
  
  FUN_1016c9b38(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1016cc134; end: 1016cc14f;  */

void FUN_1016cc134(long param_1,long param_2)

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


