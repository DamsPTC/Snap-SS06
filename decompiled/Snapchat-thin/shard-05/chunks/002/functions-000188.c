/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c67df0; end: 103c6800f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103c67df0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    FUN_103c680d0();
    func_0x000107c4bfb0(lStack_48);
    func_0x000107c61170(param_1);
    lVar2 = *(long *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    puVar1 = (undefined8 *)(lVar2 + _DAT_11306f478);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(uVar5,uVar6);
    func_0x000107c6142c(uVar6);
    puVar1 = (undefined8 *)(lVar2 + _DAT_11306f480);
    uVar6 = *puVar1;
    uVar4 = puVar1[1];
    func_0x000107c61434(uVar4);
    func_0x000107c5fadc(uVar6,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000108b92790(uVar3,uVar5,uVar6,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(lStack_48);
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
  }
  return;
}



/* Entry: 103c68010; end: 103c68023;  */

bool FUN_103c68010(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c68024; end: 103c680cf;  */

void FUN_103c68024(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c680d0; end: 103c6828f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c680d0(double param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = PTR_PTR_1126ada30;
  func_0x000107c610f8(PTR_PTR_1126ada30);
  func_0x000107c453e4();
  lVar8 = *(long *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(lVar8 + _DAT_11306f478);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c524b4(puVar5);
  func_0x000107c61170(uVar6);
  puVar1 = (undefined8 *)(lVar8 + _DAT_11306f480);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c57434(puVar5);
  func_0x000107c61170(uVar6);
  if (*(char *)(unaff_x20 + 0x30) != '\x01') {
    lVar8 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c68284);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c68288);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c6828c);
      (*pcVar3)();
    }
    if (SBORROW8((long)param_1,lVar8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c68290);
      (*pcVar3)();
    }
    func_0x000107c54364(puVar5);
  }
  return puVar5;
}



/* Entry: 103c68290; end: 103c6847f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103c68290(double param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = PTR_PTR_1126ada28;
  func_0x000107c610f8(PTR_PTR_1126ada28);
  func_0x000107c453e4();
  lVar7 = *(long *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(lVar7 + _DAT_11306f478);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c524b4(puVar5);
  func_0x000107c61170(uVar6);
  puVar1 = (undefined8 *)(lVar7 + _DAT_11306f480);
  uVar6 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar6,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c57434(puVar5);
  func_0x000107c61170(uVar6);
  if (*(char *)(unaff_x20 + 0x30) != '\x01') {
    lVar7 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c5eea0(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c68474);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c68478);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c6847c);
      (*pcVar3)();
    }
    if (SBORROW8((long)param_1,lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103c68480);
      (*pcVar3)();
    }
    func_0x000107c54364(puVar5);
  }
  func_0x000107c553b4(puVar5);
  func_0x000107c54204(puVar5);
  return puVar5;
}



/* Entry: 103c68480; end: 103c684d3;  */

void FUN_103c68480(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c684d4; end: 103c6863b;  */

int FUN_103c684d4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c68550;
        goto LAB_103c68534;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c68534:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_103c68550:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c6863c; end: 103c6867b;  */

void FUN_103c6863c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffcb70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6b4bc;
  func_0x000107c61520(&UNK_10dc6b4bc,&UNK_1106f0f58);
  puRam0000000112ffcb70 = puVar1;
  return;
}



/* Entry: 103c6867c; end: 103c6874b;  */

undefined1  [16] FUN_103c6867c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6c7469745f646461;
  func_0x000107c5fadc(0x6c7469745f646461,0xe900000000000065);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1b2050);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c687fc);
  (*pcVar1)();
}



/* Entry: 103c6874c; end: 103c688c7;  */

undefined1  [16] FUN_103c6874c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1b2050);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c687fc);
  (*pcVar1)();
}



/* Entry: 103c688c8; end: 103c68977;  */

void FUN_103c688c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1106f1078;
  func_0x000107c613fc(&UNK_1106f1078,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112ffcb80,&UNK_10dc6b570);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103c68988;
  func_0x0001008f0b08(FUN_103c68988,puVar3);
  func_0x0001008f0b74(&UNK_10dc6b540,0x29,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103c68978; end: 103c68987;  */

undefined1  [16] FUN_103c68978(void)

{
  return ZEXT816(0x1106f1058);
}



/* Entry: 103c68988; end: 103c68acb;  */

void FUN_103c68988(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000103c6bbec();
  pcVar1 = "InAppPurchaseExecutorServiceProvider";
  func_0x000100082720("InAppPurchaseExecutorServiceProvider",0x24,2);
  FUN_103c756b0();
  func_0x000100082720("InAppPurchaseProductSourceImplementationServiceProvider",0x37,2);
  FUN_103c6bc80(uVar2,uVar4,pcVar1);
  func_0x000100082720("InAppPurchaseGRPCServiceImplementationServiceProvider",0x35,2);
  pcVar3 = pcVar1;
  FUN_103c72d74(pcVar1);
  func_0x000100082720("InAppPurchaseProductFetcherImplementationServiceProvider",0x38,2);
  uVar4 = uVar2;
  FUN_103c77e18(uVar2);
  func_0x000100082720("InAppPurchaseTransactionDispatcherImplementationServiceProvider",0x3f,2);
  uVar5 = uVar2;
  FUN_103c7601c(uVar2,pcVar3,param_2,uVar4);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(param_2);
  func_0x000100082720("InAppPurchaseServiceImplementationEntryPointProvider",0x34,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 103c68acc; end: 103c68b23;  */

void FUN_103c68acc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_30);
  func_0x0001008f0ca8(&uStack_28);
  func_0x000107c61574(uStack_30);
  func_0x000100083b20(param_1);
  func_0x000107c61574(uStack_28);
  return;
}



/* Entry: 103c68b24; end: 103c68b3b;  */

void FUN_103c68b24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_30);
  func_0x0001008f0ca8(&uStack_28);
  func_0x000107c61574(uStack_30);
  func_0x000100083b20(param_1);
  func_0x000107c61574(uStack_28);
  return;
}



/* Entry: 103c68b3c; end: 103c68bbb;  */

void FUN_103c68b3c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f168(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112ffcb98);
  func_0x000107c5f164(uVar1,0xd000000000000020,0x800000010f1b2200,0x7275507070416e49,
                      0xed00006573616863);
  return;
}



/* Entry: 103c68bbc; end: 103c69a9b;  */

void FUN_103c68bbc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *extraout_x13;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lStack_130;
  long lStack_128;
  code *pcStack_120;
  long lStack_118;
  code *pcStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0;
  func_0x000107c5f950();
  lVar21 = *(long *)(lVar2 + -8);
  lVar17 = *(long *)(lVar21 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)&lStack_130 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  pcVar16 = *(code **)(lVar21 + 0x10);
  (*pcVar16)(lVar19,param_2,lVar2);
  lVar3 = lVar19;
  (**(code **)(lVar21 + 0x58))(lVar19,lVar2);
  iVar1 = (int)lVar3;
  if (iVar1 == *(int *)
                PTR___s8StoreKit7ProductV14PurchaseResultO7successyAeA012VerificationE0OyAA11TransactionVGcAEmFWC_110347d80
     ) {
    (**(code **)(lVar21 + 0x60))(lVar19,lVar2);
    lVar3 = 0x112dbf790;
    func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
    lVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar14 = lVar2 + 0xfU & 0xfffffffffffffff0;
    lVar17 = lVar19 - uVar14;
    func_0x000101718fc4(lVar19,lVar17);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar19 = lVar17 - uVar14;
    FUN_103c69adc(lVar17,lVar19);
    lVar2 = lVar19;
    func_0x000107c614c4(lVar19,lVar3);
    if ((int)lVar2 == 1) {
      lVar3 = 0;
      func_0x000107c5f918();
      lVar21 = *(long *)(lVar3 + -8);
      lVar2 = *(long *)(lVar21 + 0x40);
      lStack_b8 = lVar19;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      uVar14 = lVar2 + 0xfU & 0xfffffffffffffff0;
      lVar2 = lVar19 - uVar14;
      (**(code **)(lVar21 + 0x20))(lVar2,lVar19,lVar3);
      if (lRam0000000112ffcb90 != -1) {
        func_0x000107c61568(0x112ffcb90,FUN_103c68b3c);
      }
      lVar4 = 0;
      func_0x000107c5f168();
      func_0x000100028790();
      uStack_c8 = lVar2;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
      lVar20 = lVar2 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
      lStack_d0 = extraout_x12;
      (**(code **)(extraout_x12 + 0x10))(lVar20);
      lStack_e0 = lVar20;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar15 = lVar20 - uVar14;
      pcVar16 = *(code **)(lVar21 + 0x10);
      pcStack_c0 = (code *)lVar2;
      (*pcVar16)(lVar15,lVar2,lVar3);
      lStack_e8 = lVar15;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar22 = lVar15 - uVar14;
      pcStack_d8 = pcVar16;
      (*pcVar16)(lVar22,lVar15,lVar3);
      pcVar16 = *(code **)(lVar21 + 8);
      (*pcVar16)(lVar15,lVar3);
      func_0x000107c5f160();
      lVar2 = lVar15;
      func_0x000107c5ff70();
      lVar19 = lVar15;
      func_0x000107c611d4(lVar15,(uint)lVar2 & 0xff);
      if ((int)lVar19 == 0) {
        (*pcVar16)(lVar22,lVar3);
        func_0x000107c61170(lVar15);
      }
      else {
        puVar5 = (undefined4 *)0xc;
        func_0x000107c6158c(0xc,0xffffffffffffffff);
        *puVar5 = 0x8000100;
        puVar7 = puVar5;
        func_0x000107c5f8f4();
        (*pcVar16)(lVar22,lVar3);
        *(undefined4 **)(puVar5 + 1) = puVar7;
        func_0x000107c60ea4(0x100000000,lVar15,(uint)lVar2 & 0xff,
                            "purchase.success.verified transactionId: %llu",puVar5,0xc);
        func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61170(lVar15);
      }
      (**(code **)(lStack_d0 + 8))(lVar20,lVar4);
      param_1[3] = lVar3;
      param_1[4] = &PTR_DAT_1106f19b8;
      puVar10 = param_1;
      func_0x0001000c5db4();
      pcVar18 = pcStack_c0;
      pcVar12 = pcStack_c0;
      (*pcStack_d8)();
      func_0x000107c5f92c();
      (*pcVar16)(pcVar18,lVar3);
      FUN_103c69b7c(lVar17,0x112dbf790,&UNK_10d97ae40);
      param_1[5] = puVar10;
      param_1[6] = pcVar12;
      return;
    }
    lVar3 = 0x112dbf7a0;
    func_0x0001000285a8(0x112dbf7a0,&UNK_10d97ae50);
    iVar1 = *(int *)(lVar3 + 0x30);
    lVar2 = 0;
    func_0x000107c5f918();
    lVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar14 = lVar3 + 0xfU & 0xfffffffffffffff0;
    lVar4 = lVar19 - uVar14;
    uStack_c8 = extraout_x12_00;
    (**(code **)(extraout_x12_00 + 0x20))(lVar4,lVar19);
    lVar3 = 0x112dbf7a8;
    func_0x0001000285a8(0x112dbf7a8,&UNK_10d97ae58);
    pcStack_110 = *(code **)(*(long *)(lVar3 + -8) + 0x40);
    pcStack_c0 = (code *)lVar4;
    (*(code *)PTR____chkstk_darwin_11034bd40)((long)pcStack_110 + 0xf);
    lVar21 = lVar4 - (long)extraout_x13;
    lStack_128 = lVar3;
    pcStack_120 = extraout_x13;
    lStack_e8 = extraout_x12_01;
    (**(code **)(extraout_x12_01 + 0x20))(lVar21,lVar19 + iVar1);
    if (lRam0000000112ffcb90 != -1) {
      func_0x000107c61568(0x112ffcb90,FUN_103c68b3c);
    }
    lVar3 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    lStack_d0 = lVar21;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    lVar19 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    lStack_e0 = extraout_x12_02;
    pcStack_d8 = (code *)lVar3;
    (**(code **)(extraout_x12_02 + 0x10))(lVar19);
    lStack_f8 = lVar19;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar3 = lVar19 - uVar14;
    pcVar16 = *(code **)(uStack_c8 + 0x10);
    lStack_b8 = lVar4;
    (*pcVar16)(lVar3,lVar4,lVar2);
    lStack_100 = lVar3;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar4 = lVar3 - uVar14;
    lStack_130 = lVar4;
    (*pcVar16)(lVar4,lVar3,lVar2);
    pcStack_f0 = *(code **)(uStack_c8 + 8);
    (*pcStack_f0)(lVar3,lVar2);
    lStack_108 = lVar4;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pcVar16 = pcStack_120;
    lVar3 = lStack_128;
    lVar4 = lVar4 - (long)pcStack_120;
    pcVar18 = *(code **)(lStack_e8 + 0x10);
    uStack_c8 = lVar21;
    (*pcVar18)(lVar4,lVar21,lStack_128);
    lStack_118 = lVar4;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar15 = lVar4 - (long)pcVar16;
    pcStack_110 = pcVar18;
    (*pcVar18)(lVar15,lVar4,lVar3);
    pcVar16 = *(code **)(lStack_e8 + 8);
    (*pcVar16)(lVar4,lVar3);
    lStack_e8 = lVar19;
    func_0x000107c5f160();
    lVar19 = lVar4;
    func_0x000107c5ff74();
    lVar21 = lVar4;
    func_0x000107c611d4(lVar4,(uint)lVar19 & 0xff);
    pcVar18 = pcStack_f0;
    if ((int)lVar21 == 0) {
      (*pcStack_f0)(lStack_130,lVar2);
      func_0x000107c61170(lVar4);
      (*pcVar16)(lVar15,lVar3);
      (**(code **)(lStack_e0 + 8))(lStack_e8,pcStack_d8);
    }
    else {
      puVar7 = (undefined4 *)0x16;
      func_0x000107c6158c(0x16,0xffffffffffffffff);
      plVar8 = (long *)0x8;
      pcStack_120 = pcVar16;
      func_0x000107c6158c(8,0xffffffffffffffff);
      lVar21 = lStack_130;
      *puVar7 = 0x8000202;
      plVar9 = plVar8;
      func_0x000107c5f8f4();
      pcVar18 = pcStack_f0;
      (*pcStack_f0)(lVar21,lVar2);
      *(long **)(puVar7 + 1) = plVar9;
      *(undefined2 *)(puVar7 + 3) = 0x840;
      FUN_103c69b2c();
      lVar20 = lVar3;
      func_0x000107c613f8(lVar3,lVar21,0,0);
      (*pcStack_110)(lVar21,lVar15,lVar3);
      func_0x000107c60eac();
      pcVar16 = pcStack_120;
      *(long *)((long)puVar7 + 0xe) = lVar20;
      *plVar8 = lVar20;
      (*pcStack_120)(lVar15,lVar3);
      func_0x000107c60ea4(0x100000000,lVar4,(uint)lVar19 & 0xff,
                          "purchase.success.unverified transactionId: %llu error: %@",puVar7,0x16);
      FUN_103c69b7c(plVar8,0x112da8fc0,&UNK_10dc6b9b0);
      func_0x000107c61590(plVar8,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(lVar4);
      (**(code **)(lStack_e0 + 8))(lStack_e8,pcStack_d8);
    }
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 5;
    uVar11 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    lVar19 = lStack_b8;
    uVar14 = uStack_c8;
    if ((int)uVar11 != 0) {
      FUN_103c69a9c();
      func_0x000107c61658(&uStack_90,&UNK_1106f1e20,uVar11);
    }
    (*pcVar16)(uVar14,lVar3);
    (*pcVar18)(lVar19,lVar2);
    FUN_103c69b7c(lVar17,0x112dbf790,&UNK_10d97ae40);
    uVar11 = 0;
    uVar23 = 0;
    uVar13 = 5;
  }
  else {
    if (iVar1 == *(int *)PTR___s8StoreKit7ProductV14PurchaseResultO13userCancelledyA2EmFWC_110347d70
       ) {
      if (lRam0000000112ffcb90 != -1) {
        func_0x000107c61568(0x112ffcb90,FUN_103c68b3c);
      }
      lVar21 = 0;
      func_0x000107c5f168();
      func_0x000100028790();
      lVar4 = *(long *)(lVar21 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
      lVar19 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
      lVar3 = lVar19;
      (**(code **)(lVar4 + 0x10))();
      func_0x000107c5f160();
      lVar2 = lVar3;
      func_0x000107c5ff70();
      lVar17 = lVar3;
      func_0x000107c611d4(lVar3,(uint)lVar2 & 0xff);
      if ((int)lVar17 != 0) {
        puVar6 = (undefined2 *)0x2;
        func_0x000107c6158c(2,0xffffffffffffffff);
        *puVar6 = 0;
        func_0x000107c60ea4(0x100000000,lVar3,(uint)lVar2 & 0xff,"purchase.userCancelled",puVar6,2);
        func_0x000107c61590(puVar6,0xffffffffffffffff,0xffffffffffffffff);
      }
      func_0x000107c61170(lVar3);
      (**(code **)(lVar4 + 8))(lVar19,lVar21);
      param_1[6] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (iVar1 == *(int *)PTR___s8StoreKit7ProductV14PurchaseResultO7pendingyA2EmFWC_110347d78) {
      if (lRam0000000112ffcb90 != -1) {
        func_0x000107c61568(0x112ffcb90,FUN_103c68b3c);
      }
      lVar21 = 0;
      func_0x000107c5f168();
      func_0x000100028790();
      lVar4 = *(long *)(lVar21 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
      lVar19 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      lVar3 = lVar19;
      (**(code **)(lVar4 + 0x10))();
      func_0x000107c5f160();
      lVar2 = lVar3;
      func_0x000107c5ff70();
      lVar17 = lVar3;
      func_0x000107c611d4(lVar3,(uint)lVar2 & 0xff);
      if ((int)lVar17 != 0) {
        puVar6 = (undefined2 *)0x2;
        func_0x000107c6158c(2,0xffffffffffffffff);
        *puVar6 = 0;
        func_0x000107c60ea4(0x100000000,lVar3,(uint)lVar2 & 0xff,"purchase.pending",puVar6,2);
        func_0x000107c61590(puVar6,0xffffffffffffffff,0xffffffffffffffff);
      }
      func_0x000107c61170(lVar3);
      (**(code **)(lVar4 + 8))(lVar19,lVar21);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 1;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[4] = 0;
      return;
    }
    if (lRam0000000112ffcb90 != -1) {
      func_0x000107c61568(0x112ffcb90,FUN_103c68b3c);
    }
    lVar4 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    lVar20 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(extraout_x12_03 + 0x10))(lVar20);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar14 = lVar17 + 0xfU & 0xfffffffffffffff0;
    lVar15 = lVar20 - uVar14;
    (*pcVar16)(lVar15,param_2,lVar2);
    lStack_b8 = lVar15;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar22 = lVar15 - uVar14;
    uStack_c8 = uVar14;
    (*pcVar16)(lVar22,lVar15,lVar2);
    pcStack_c0 = *(code **)(lVar21 + 8);
    (*pcStack_c0)(lVar15,lVar2);
    func_0x000107c5f160();
    lVar3 = lVar15;
    func_0x000107c5ff74();
    lVar17 = lVar15;
    func_0x000107c611d4(lVar15,(uint)lVar3 & 0xff);
    if ((int)lVar17 == 0) {
      func_0x000107c61170(lVar15);
      pcVar16 = pcStack_c0;
      (*pcStack_c0)(lVar22,lVar2);
    }
    else {
      puVar7 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar11 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar7 = 0x8200102;
      pcStack_d8 = (code *)lVar22;
      lStack_d0 = uVar11;
      uStack_90 = uVar11;
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar21 = lVar22 - uStack_c8;
      (*pcVar16)(lVar21,lVar22,lVar2);
      lVar17 = lVar2;
      func_0x000107c5fb18(lVar21,lVar2);
      func_0x0001014bfa20();
      func_0x000107c6142c(lVar17);
      pcVar16 = pcStack_c0;
      *(long *)(puVar7 + 1) = lVar21;
      (*pcStack_c0)(lVar22,lVar2);
      func_0x000107c60ea4(0x100000000,lVar15,(uint)lVar3 & 0xff,"purchase.@unknownDefault: %s",
                          puVar7,0xc);
      lVar3 = lStack_d0;
      func_0x000100183ab8(lStack_d0);
      func_0x000107c61590(lVar3,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(lVar15);
    }
    (**(code **)(extraout_x12_03 + 8))(lVar20,lVar4);
    uVar13 = 0x800000010f1b21e0;
    uStack_88 = 1;
    uStack_90 = 0;
    uStack_80 = 0xd000000000000018;
    uStack_78 = 0x800000010f1b21e0;
    uVar11 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar11 != 0) {
      FUN_103c69a9c();
      func_0x000107c61658(&uStack_90,&UNK_1106f1e20,uVar11);
    }
    (*pcVar16)(lVar19,lVar2);
    uVar23 = 0xd000000000000018;
    uVar11 = 1;
  }
  *param_3 = 0;
  param_3[2] = uVar23;
  param_3[1] = uVar11;
  param_3[3] = uVar13;
  return;
}



/* Entry: 103c69a9c; end: 103c69adb;  */

void FUN_103c69a9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffcbb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6c420;
  func_0x000107c61520(&UNK_10dc6c420,&UNK_1106f1e20);
  puRam0000000112ffcbb0 = puVar1;
  return;
}



/* Entry: 103c69adc; end: 103c69b2b;  */

undefined8 FUN_103c69adc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c69b2c; end: 103c69b7b;  */

void FUN_103c69b2c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbf7d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbf7a8;
  func_0x00010002969c(0x112dbf7a8,&UNK_10d97ae58);
  puVar2 = PTR___s8StoreKit18VerificationResultO0C5ErrorOyx_Gs0E0AAMc_110347c98;
  func_0x000107c61520(PTR___s8StoreKit18VerificationResultO0C5ErrorOyx_Gs0E0AAMc_110347c98,uVar1);
  puRam0000000112dbf7d8 = puVar2;
  return;
}



/* Entry: 103c69b7c; end: 103c69c3b;  */

undefined8 FUN_103c69b7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c69c3c; end: 103c6bb6b;  */

undefined8 FUN_103c69c3c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar17;
  long lVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long alStack_c0 [4];
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5f168();
  lStack_78 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar20 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_80 = lVar20 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (lVar20 - extraout_x12_00) - extraout_x12_01;
  lStack_88 = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - extraout_x12_02;
  alStack_c0[0] = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - extraout_x12_03;
  alStack_c0[1] = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - extraout_x12_04;
  lStack_90 = lVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar18 - extraout_x12_05;
  lVar3 = 0;
  func_0x000107c5efd0();
  lVar26 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar22 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar22 - extraout_x12_06;
  lVar4 = 0;
  func_0x000107c5f890();
  lVar24 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar2 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_c0[3] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar2 - extraout_x12_07;
  alStack_c0[2] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar25 = (undefined8 *)(lVar2 - extraout_x12_08);
  pcVar17 = *(code **)(lVar24 + 0x10);
  uStack_98 = param_1;
  (*pcVar17)(puVar25,param_1,lVar4);
  puVar9 = puVar25;
  (**(code **)(lVar24 + 0x58))(puVar25,lVar4);
  lVar13 = lStack_70;
  lVar2 = lStack_78;
  iVar1 = (int)puVar9;
  if (iVar1 == *(int *)
                PTR___s8StoreKit0aB5ErrorO07networkC0yAC10Foundation8URLErrorVcACmFWC_110347ae0) {
    (**(code **)(lVar24 + 0x60))(puVar25,lVar4);
    (**(code **)(lVar26 + 0x20))(lVar19,puVar25,lVar3);
    if (lRam0000000112ffcbc8 != -1) {
      func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
    }
    lVar13 = lStack_70;
    lVar4 = lStack_70;
    func_0x000100028790(lStack_70,0x112ffcbd0);
    lVar2 = lStack_78;
    (**(code **)(lStack_78 + 0x10))(lVar18,lVar4,lVar13);
    lVar4 = lVar22;
    (**(code **)(lVar26 + 0x10))(lVar22,lVar19,lVar3);
    func_0x000107c5f160();
    lVar20 = lVar4;
    func_0x000107c5ff74();
    lVar24 = lVar4;
    func_0x000107c611d4(lVar4,(uint)lVar20 & 0xff);
    if ((int)lVar24 == 0) {
      func_0x000107c61170(lVar4);
      pcVar21 = *(code **)(lVar26 + 8);
      (*pcVar21)(lVar22,lVar3);
      pcVar17 = *(code **)(lVar2 + 8);
    }
    else {
      puVar5 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      puVar25 = (undefined8 *)0x8;
      func_0x000107c6158c(8,0xffffffffffffffff);
      *puVar5 = 0x8400102;
      puVar9 = puVar25;
      func_0x000107c5efcc();
      func_0x000107c60eac();
      *(undefined8 **)(puVar5 + 1) = puVar9;
      *puVar25 = puVar9;
      pcVar21 = *(code **)(lVar26 + 8);
      (*pcVar21)(lVar22,lVar3);
      func_0x000107c60ea4(0x100000000,lVar4,(uint)lVar20 & 0xff,"storekit.networkError: %@",puVar5,
                          0xc);
      FUN_103c6bb6c(puVar25,0x112da8fc0,&UNK_10dc6b9b0);
      func_0x000107c61590(puVar25,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(lVar4);
      pcVar17 = *(code **)(lStack_78 + 8);
      lVar13 = lStack_70;
    }
    (*pcVar17)(lVar18,lVar13);
    (*pcVar21)(lVar19,lVar3);
  }
  else if (iVar1 == *(int *)PTR___s8StoreKit0aB5ErrorO06systemC0yACs0C0_pcACmFWC_110347ad8) {
    (**(code **)(lVar24 + 0x60))(puVar25,lVar4);
    uVar23 = *puVar25;
    uVar15 = uVar23;
    func_0x000107c5ed2c();
    lVar2 = lStack_78;
    if (lRam0000000112ffcbc8 != -1) {
      func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
    }
    lVar3 = lStack_70;
    lVar4 = lStack_70;
    func_0x000100028790(lStack_70,0x112ffcbd0);
    lVar13 = lStack_80;
    (**(code **)(lVar2 + 0x10))(lStack_80,lVar4,lVar3);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    uVar6 = uVar23;
    func_0x000107c614b0();
    func_0x000107c5f160();
    uVar7 = uVar6;
    func_0x000107c5ff74();
    uVar8 = uVar6;
    func_0x000107c611d4(uVar6,(uint)uVar7 & 0xff);
    if ((int)uVar8 == 0) {
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar15);
      func_0x000107c614ac(uVar23);
      func_0x000107c61170(uVar15);
      func_0x000107c614ac(uVar23);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar15);
      pcVar17 = *(code **)(lVar2 + 8);
    }
    else {
      puVar5 = (undefined4 *)0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      puVar9 = (undefined8 *)0x8;
      func_0x000107c6158c(8,0xffffffffffffffff);
      uVar10 = 0x20;
      uVar16 = 0xffffffffffffffff;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar5 = 0x8220302;
      uVar8 = uVar15;
      uStack_68 = uVar10;
      func_0x000107c42210();
      func_0x000107c61180();
      uVar11 = uVar8;
      func_0x000107c5faec();
      func_0x000107c61170(uVar8);
      func_0x0001014bfa20(uVar11,uVar16,&uStack_68);
      func_0x000107c6142c(uVar16);
      *(undefined8 *)(puVar5 + 1) = uVar11;
      *(undefined2 *)(puVar5 + 3) = 0x800;
      uVar8 = uVar15;
      func_0x000107c3fcb0();
      func_0x000107c61170(uVar15);
      *(undefined8 *)((long)puVar5 + 0xe) = uVar8;
      *(undefined2 *)((long)puVar5 + 0x16) = 0x840;
      func_0x000107c614b0(uVar23);
      uVar8 = uVar23;
      func_0x000107c60eac();
      *(undefined8 *)(puVar5 + 6) = uVar8;
      *puVar9 = uVar8;
      func_0x000107c614ac(uVar23);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar15);
      func_0x000107c60ea4(0x100000000,uVar6,(uint)uVar7 & 0xff,
                          "storekit.systemError %{public}s_%ld: %@",puVar5,0x20);
      FUN_103c6bb6c(puVar9,0x112da8fc0,&UNK_10dc6b9b0);
      func_0x000107c61590(puVar9,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000100183ab8(uVar10);
      func_0x000107c61590(uVar10,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(uVar6);
      func_0x000107c614ac(uVar23);
      func_0x000107c61170(uVar15);
      pcVar17 = *(code **)(lStack_78 + 8);
      lVar13 = lStack_80;
      lVar3 = lStack_70;
    }
    (*pcVar17)(lVar13,lVar3);
  }
  else if (iVar1 == *(int *)PTR___s8StoreKit0aB5ErrorO7unknownyA2CmFWC_110347b08) {
    if (lRam0000000112ffcbc8 != -1) {
      func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
    }
    lVar13 = lStack_70;
    lVar3 = lStack_70;
    func_0x000100028790(lStack_70,0x112ffcbd0);
    lVar4 = lVar20;
    (**(code **)(lVar2 + 0x10))(lVar20,lVar3,lVar13);
    func_0x000107c5f160();
    lVar3 = lVar4;
    func_0x000107c5ff74();
    lVar18 = lVar4;
    func_0x000107c611d4(lVar4,(uint)lVar3 & 0xff);
    if ((int)lVar18 != 0) {
      puVar12 = (undefined2 *)0x2;
      func_0x000107c6158c(2,0xffffffffffffffff);
      *puVar12 = 0;
      func_0x000107c60ea4(0x100000000,lVar4,(uint)lVar3 & 0xff,"storekit.unknown",puVar12,2);
      func_0x000107c61590(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(lVar4);
    (**(code **)(lVar2 + 8))(lVar20,lVar13);
  }
  else if (iVar1 == *(int *)PTR___s8StoreKit0aB5ErrorO13userCancelledyA2CmFWC_110347af8) {
    if (lRam0000000112ffcbc8 != -1) {
      func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
    }
    lVar3 = lStack_70;
    lVar4 = lStack_70;
    func_0x000100028790(lStack_70,0x112ffcbd0);
    lVar13 = lStack_88;
    lVar20 = lStack_88;
    (**(code **)(lVar2 + 0x10))(lStack_88,lVar4,lVar3);
    func_0x000107c5f160();
    lVar4 = lVar20;
    func_0x000107c5ff70();
    lVar18 = lVar20;
    func_0x000107c611d4(lVar20,(uint)lVar4 & 0xff);
    if ((int)lVar18 != 0) {
      puVar12 = (undefined2 *)0x2;
      func_0x000107c6158c(2,0xffffffffffffffff);
      *puVar12 = 0;
      func_0x000107c60ea4(0x100000000,lVar20,(uint)lVar4 & 0xff,"storekit.userCancelled",puVar12,2);
      func_0x000107c61590(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(lVar20);
    (**(code **)(lVar2 + 8))(lVar13,lVar3);
  }
  else if (iVar1 == *(int *)PTR___s8StoreKit0aB5ErrorO24notAvailableInStorefrontyA2CmFWC_110347b00)
  {
    if (lRam0000000112ffcbc8 != -1) {
      func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
    }
    lVar3 = lStack_70;
    lVar4 = lStack_70;
    func_0x000100028790(lStack_70,0x112ffcbd0);
    lVar13 = lStack_90;
    lVar20 = lStack_90;
    (**(code **)(lVar2 + 0x10))(lStack_90,lVar4,lVar3);
    func_0x000107c5f160();
    lVar4 = lVar20;
    func_0x000107c5ff74();
    lVar18 = lVar20;
    func_0x000107c611d4(lVar20,(uint)lVar4 & 0xff);
    if ((int)lVar18 != 0) {
      puVar12 = (undefined2 *)0x2;
      func_0x000107c6158c(2,0xffffffffffffffff);
      *puVar12 = 0;
      func_0x000107c60ea4(0x100000000,lVar20,(uint)lVar4 & 0xff,"storekit.notAvailableInStorefront",
                          puVar12,2);
      func_0x000107c61590(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(lVar20);
    (**(code **)(lVar2 + 8))(lVar13,lVar3);
  }
  else if ((PTR___s8StoreKit0aB5ErrorO11notEntitledyA2CmFWC_110347ae8 == (undefined *)0x0) ||
          (iVar1 != *(int *)PTR___s8StoreKit0aB5ErrorO11notEntitledyA2CmFWC_110347ae8)) {
    if ((PTR___s8StoreKit0aB5ErrorO11unsupportedyA2CmFWC_110347af0 == (undefined *)0x0) ||
       (iVar1 != *(int *)PTR___s8StoreKit0aB5ErrorO11unsupportedyA2CmFWC_110347af0)) {
      if (lRam0000000112ffcbc8 != -1) {
        func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
      }
      lVar3 = lVar13;
      func_0x000100028790(lVar13,0x112ffcbd0);
      (**(code **)(lVar2 + 0x10))(lStack_a0,lVar3,lVar13);
      lVar3 = alStack_c0[2];
      lVar20 = alStack_c0[2];
      (*pcVar17)(alStack_c0[2],uStack_98,lVar4);
      func_0x000107c5f160();
      lVar18 = lVar20;
      func_0x000107c5ff74();
      lVar19 = lVar20;
      func_0x000107c611d4(lVar20,(uint)lVar18 & 0xff);
      if ((int)lVar19 == 0) {
        func_0x000107c61170(lVar20);
        pcVar21 = *(code **)(lVar24 + 8);
        (*pcVar21)(lVar3,lVar4);
      }
      else {
        puVar5 = (undefined4 *)0xc;
        func_0x000107c6158c(0xc,0xffffffffffffffff);
        plVar14 = (long *)0x8;
        func_0x000107c6158c(8,0xffffffffffffffff);
        lStack_80 = CONCAT44(lStack_80._4_4_,(uint)lVar18);
        *puVar5 = 0x8400102;
        uVar15 = 0x112ece608;
        func_0x000103c6bbac(0x112ece608,PTR___s8StoreKit0aB5ErrorOMa_110347b10,
                            PTR___s8StoreKit0aB5ErrorOs0C0AAMc_110347b20);
        lVar18 = lVar4;
        func_0x000107c613f8(lVar4,uVar15,0,0);
        (*pcVar17)(uVar15,lVar3,lVar4);
        lVar13 = lStack_70;
        func_0x000107c60eac();
        *(long *)(puVar5 + 1) = lVar18;
        *plVar14 = lVar18;
        pcVar21 = *(code **)(lVar24 + 8);
        (*pcVar21)(lVar3,lVar4);
        func_0x000107c60ea4(0x100000000,lVar20,(uint)lStack_80 & 0xff,"storekit.@unknownDefault: %@"
                            ,puVar5,0xc);
        FUN_103c6bb6c(plVar14,0x112da8fc0,&UNK_10dc6b9b0);
        func_0x000107c61590(plVar14,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61170(lVar20);
      }
      (**(code **)(lVar2 + 8))(lStack_a0,lVar13);
      lVar2 = alStack_c0[3];
      (*pcVar17)(alStack_c0[3],uStack_98,lVar4);
      func_0x000107c5fb18(lVar2,lVar4);
      (*pcVar21)(puVar25,lVar4);
    }
    else {
      if (lRam0000000112ffcbc8 != -1) {
        func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
      }
      lVar4 = lVar13;
      func_0x000100028790(lVar13,0x112ffcbd0);
      lVar3 = alStack_c0[0];
      lVar20 = alStack_c0[0];
      (**(code **)(lVar2 + 0x10))(alStack_c0[0],lVar4,lVar13);
      func_0x000107c5f160();
      lVar4 = lVar20;
      func_0x000107c5ff74();
      lVar18 = lVar20;
      func_0x000107c611d4(lVar20,(uint)lVar4 & 0xff);
      if ((int)lVar18 != 0) {
        puVar12 = (undefined2 *)0x2;
        func_0x000107c6158c(2,0xffffffffffffffff);
        *puVar12 = 0;
        func_0x000107c60ea4(0x100000000,lVar20,(uint)lVar4 & 0xff,"storekit.unsupported",puVar12,2);
        func_0x000107c61590(puVar12,0xffffffffffffffff,0xffffffffffffffff);
      }
      func_0x000107c61170(lVar20);
      (**(code **)(lVar2 + 8))(lVar3,lVar13);
    }
  }
  else {
    if (lRam0000000112ffcbc8 != -1) {
      func_0x000107c61568(0x112ffcbc8,0x103c69bbc);
    }
    lVar4 = lVar13;
    func_0x000100028790(lVar13,0x112ffcbd0);
    lVar3 = alStack_c0[1];
    lVar20 = alStack_c0[1];
    (**(code **)(lVar2 + 0x10))(alStack_c0[1],lVar4,lVar13);
    func_0x000107c5f160();
    lVar4 = lVar20;
    func_0x000107c5ff74();
    lVar18 = lVar20;
    func_0x000107c611d4(lVar20,(uint)lVar4 & 0xff);
    if ((int)lVar18 != 0) {
      puVar12 = (undefined2 *)0x2;
      func_0x000107c6158c(2,0xffffffffffffffff);
      *puVar12 = 0;
      func_0x000107c60ea4(0x100000000,lVar20,(uint)lVar4 & 0xff,"storekit.notEntitled",puVar12,2);
      func_0x000107c61590(puVar12,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(lVar20);
    (**(code **)(lVar2 + 8))(lVar3,lVar13);
  }
  return 0;
}



/* Entry: 103c6bb6c; end: 103c6bc6f;  */

undefined8 FUN_103c6bb6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c6bc70; end: 103c6bc7f;  */

undefined1  [16] FUN_103c6bc70(void)

{
  return ZEXT816(0x1106f11e0);
}



/* Entry: 103c6bc80; end: 103c6bd17;  */

void FUN_103c6bc80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ffcbf0,&UNK_10dc6b698);
  puVar1 = &UNK_1106f1200;
  func_0x000107c613fc(&UNK_1106f1200,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_103c6bd84,puVar1);
  return;
}



/* Entry: 103c6bd18; end: 103c6bd83;  */

void FUN_103c6bd18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_103c6eadc(param_2,param_3,param_4);
  uVar1 = param_2;
  FUN_103c6ff50();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1106f1218;
  *param_1 = param_2;
  return;
}



/* Entry: 103c6bd84; end: 103c6bd8f;  */

void FUN_103c6bd84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  FUN_103c6eadc(uVar1,uVar2,uVar3);
  uVar2 = uVar1;
  FUN_103c6ff50();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_1106f1218;
  *param_1 = uVar1;
  return;
}



/* Entry: 103c6bd90; end: 103c6beab;  */

void FUN_103c6bd90(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f168(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112ffcc00);
  func_0x000107c5f164(uVar1,0xd000000000000020,0x800000010f1b2200,0x7275507070416e49,
                      0xed00006573616863);
  return;
}



/* Entry: 103c6beac; end: 103c6bed7;  */

void FUN_103c6beac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x458) = param_3;
  *(undefined8 **)(unaff_x22 + 0x450) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x448) = param_2;
  *(undefined8 *)(unaff_x22 + 0x440) = param_1;
  *(undefined8 *)(unaff_x22 + 0x460) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c6bed8,0,0);
  return;
}



/* Entry: 103c6bed8; end: 103c6bf63;  */

void FUN_103c6bed8(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x3a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3c0);
  lVar5 = *(long *)(unaff_x22 + 0x3c8);
  func_0x0001000a8868(unaff_x22 + 0x3a8,uVar4);
  piVar3 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x468) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c6bf64;
                    /* WARNING: Could not recover jumptable at 0x000103c6bf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(uVar4,lVar5);
  return;
}



/* Entry: 103c6bf64; end: 103c6bfbb;  */

void FUN_103c6bf64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x3f0) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x3f8) = param_1;
  *(undefined8 *)(lVar1 + 0x400) = param_2;
  *(undefined8 *)(lVar1 + 0x470) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x468));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c6bfbc,0,0);
  return;
}



/* Entry: 103c6bfbc; end: 103c6c20f;  */

void FUN_103c6bfbc(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar7 = (undefined8 *)(unaff_x22 + 0x408);
  puVar1 = (undefined8 *)(unaff_x22 + 0x418);
  lVar12 = *(long *)(unaff_x22 + 0x470);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x448);
  lVar4 = unaff_x22 + 0x3a8;
  FUN_103c6f6e0();
  FUN_103c7d554((undefined8 *)(unaff_x22 + 0x288));
  *(undefined8 *)(unaff_x22 + 0x410) = *(undefined8 *)(unaff_x22 + 0x2b8);
  *puVar7 = *(undefined8 *)(unaff_x22 + 0x2b0);
  *(undefined8 *)(unaff_x22 + 0x420) = *(undefined8 *)(unaff_x22 + 0x2a8);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x2a0);
  *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0x2b0);
  *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0x2a8);
  *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0x2c0);
  *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x2b8);
  *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x290);
  *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x288);
  *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0x2a0);
  *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)(unaff_x22 + 0x298);
  FUN_103c6ccd0();
  *(long *)(unaff_x22 + 0x2d0) = lVar4;
  *(undefined1 *)(unaff_x22 + 0x2d8) = param_2;
  FUN_103c6cde4();
  FUN_103c6ff70(unaff_x22 + 0x438,0x112d38270,&UNK_10d905a20);
  *(long *)(unaff_x22 + 0x2e0) = lVar4;
  lVar4 = 0;
  FUN_103c7b79c();
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  FUN_103c6ed1c(uVar10,uVar5);
  uVar6 = uVar5;
  func_0x000107c614c4(uVar5,lVar4);
  if ((int)uVar6 == 2) {
    uVar3 = *(undefined8 *)(uVar5 + 8);
    uVar10 = *(undefined8 *)(uVar5 + 0x10);
    uVar13 = *(undefined8 *)(uVar5 + 0x18);
    func_0x000107c6142c(*(undefined8 *)(uVar5 + 0x28));
    func_0x000107c6142c(uVar3);
    func_0x000100bcb1dc(puVar1);
    func_0x000100bcb1dc(puVar7);
    func_0x000107c615c0(uVar5);
  }
  else {
    func_0x000103c6ed60(uVar5);
    func_0x000107c615c0(uVar5);
    func_0x000100bcb1dc(puVar1);
    func_0x000100bcb1dc(puVar7);
    uVar10 = 0;
    uVar13 = 0xe000000000000000;
  }
  lVar4 = -0x2000000000000000;
  if (lVar12 != 0) {
    lVar4 = lVar12;
  }
  uVar3 = 0;
  if (lVar12 != 0) {
    uVar3 = uVar11;
  }
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x2f0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar3;
  *(long *)(unaff_x22 + 0x300) = lVar4;
  puVar7 = (undefined8 *)(*(long *)(unaff_x22 + 0x450) + 0x10);
  func_0x0001000a8868(puVar7,*(undefined8 *)(*(long *)(unaff_x22 + 0x450) + 0x28));
  *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x2f8);
  *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x2f0);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x308);
  *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x310);
  *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0x2d0);
  *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x2e8);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x2e0);
  func_0x00010448a8f4(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x1e0) = 30000;
  *(undefined1 *)(unaff_x22 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x22 + 0x1f1) = *(undefined8 *)(unaff_x22 + 0x191);
  *(undefined8 *)(unaff_x22 + 0x1e9) = *(undefined8 *)(unaff_x22 + 0x189);
  *(undefined8 *)(unaff_x22 + 0x201) = *(undefined8 *)(unaff_x22 + 0x1a1);
  *(undefined8 *)(unaff_x22 + 0x1f9) = *(undefined8 *)(unaff_x22 + 0x199);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x221) = *(undefined8 *)(unaff_x22 + 0x1c1);
  *(undefined8 *)(unaff_x22 + 0x219) = *(undefined8 *)(unaff_x22 + 0x1b9);
  *(undefined8 *)(unaff_x22 + 0x231) = *(undefined8 *)(unaff_x22 + 0x1d1);
  *(undefined8 *)(unaff_x22 + 0x229) = *(undefined8 *)(unaff_x22 + 0x1c9);
  *(undefined8 *)(unaff_x22 + 0x211) = *(undefined8 *)(unaff_x22 + 0x1b1);
  *(undefined8 *)(unaff_x22 + 0x209) = *(undefined8 *)(unaff_x22 + 0x1a9);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x210);
  piVar9 = *(int **)(*(long *)*puVar7 + 0x78);
  iVar2 = *piVar9;
  plVar8 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x478) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103c6c210;
                    /* WARNING: Could not recover jumptable at 0x000103c6c20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar9))
            (plVar8,unaff_x22 + 0x10,unaff_x22 + 0x240,unaff_x22 + 0x120);
  return;
}



/* Entry: 103c6c210; end: 103c6c273;  */

void FUN_103c6c210(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x480) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x478));
  func_0x000100e19000(lVar2 + 0x1e0);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c6c274;
  }
  else {
    pcVar1 = FUN_103c6c9c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c6c274; end: 103c6c9bf;  */

void FUN_103c6c274(void)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  code *pcVar18;
  code *pcVar19;
  long unaff_x22;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar23 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  uVar12 = *(long *)(*(long *)(lVar23 + -8) + 0x40) + 0xf;
  uVar4 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000107c61434(uVar3);
  func_0x000107c5eea8(uVar4,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  uVar5 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar22 = *(long *)(lVar6 + -8);
  (**(code **)(lVar22 + 0x38))(uVar5,1,1,lVar6);
  lVar23 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  uVar7 = *(long *)(*(long *)(lVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar23 = (long)*(int *)(lVar23 + 0x30);
  func_0x000103c6ffb0(uVar4,uVar7,0x112d3bc20,&UNK_10d904ef0);
  func_0x000103c6ffb0(uVar5,uVar7 + lVar23,0x112d3bc20,&UNK_10d904ef0);
  pcVar19 = *(code **)(lVar22 + 0x30);
  uVar21 = uVar7;
  (*pcVar19)(uVar7,1,lVar6);
  if ((int)uVar21 == 1) {
    func_0x000103c6ff70(uVar5,0x112d3bc20,&UNK_10d904ef0);
    lVar23 = uVar7 + lVar23;
    (*pcVar19)(lVar23,1,lVar6);
    if ((int)lVar23 == 1) {
      func_0x000103c6ff70(uVar7,0x112d3bc20,&UNK_10d904ef0);
      func_0x000107c615c0(uVar7);
      func_0x000107c615c0(uVar5);
      goto LAB_103c6c584;
    }
LAB_103c6c48c:
    func_0x000103c6ff70(uVar7,0x112d68090,&UNK_10da24400);
    func_0x000107c615c0(uVar7);
  }
  else {
    uVar21 = uVar12 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x000103c6ffb0(uVar7,uVar21,0x112d3bc20,&UNK_10d904ef0);
    lVar23 = uVar7 + lVar23;
    (*pcVar19)(lVar23,1,lVar6);
    if ((int)lVar23 == 1) {
      func_0x000103c6ff70(uVar5,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar22 + 8))(uVar21,lVar6);
      func_0x000107c615c0(uVar21);
      goto LAB_103c6c48c;
    }
    uVar11 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar11;
    func_0x000107c615b8(uVar11);
    uVar13 = uVar8;
    (**(code **)(lVar22 + 0x20))();
    func_0x000101207ba8();
    uVar9 = uVar21;
    func_0x000107c5fab8(uVar21,uVar8,lVar6,uVar13);
    pcVar18 = *(code **)(lVar22 + 8);
    (*pcVar18)(uVar8,lVar6);
    func_0x000103c6ff70(uVar5,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar18)(uVar21,lVar6);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar21);
    func_0x000103c6ff70(uVar7,0x112d3bc20,&UNK_10d904ef0);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar5);
    if ((uVar9 & 1) == 0) goto LAB_103c6c67c;
LAB_103c6c584:
    if (lRam0000000112ffcbf8 != -1) {
      func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
    }
    lVar23 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    lVar20 = *(long *)(lVar23 + -8);
    uVar5 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    uVar21 = uVar5;
    (**(code **)(lVar20 + 0x10))();
    func_0x000107c5f160();
    uVar7 = uVar21;
    func_0x000107c5ff70();
    uVar8 = uVar21;
    func_0x000107c611d4(uVar21,(uint)uVar7 & 0xff);
    if ((int)uVar8 != 0) {
      puVar10 = (undefined2 *)0x2;
      func_0x000107c6158c(2,0xffffffffffffffff);
      *puVar10 = 0;
      func_0x000107c60ea4(0x100000000,uVar21,(uint)uVar7 & 0xff,
                          "grpc.preparePurchase.nonUUIDExternalUserID minting client-side token",
                          puVar10,2);
      func_0x000107c61590(puVar10,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar21);
    (**(code **)(lVar20 + 8))(uVar5,lVar23);
  }
  func_0x000107c615c0(uVar5);
  uVar11 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
LAB_103c6c67c:
  func_0x000107c615b8();
  uVar12 = uVar12 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000103c6ffb0(uVar4,uVar12,0x112d3bc20,&UNK_10d904ef0);
  uVar21 = uVar12;
  (*pcVar19)(uVar12,1,lVar6);
  if ((int)uVar21 == 1) {
    func_0x000107c5eec4(uVar11);
    uVar21 = uVar12;
    (*pcVar19)(uVar12,1,lVar6);
    if ((int)uVar21 != 1) {
      func_0x000103c6ff70(uVar12,0x112d3bc20,&UNK_10d904ef0);
    }
  }
  else {
    (**(code **)(lVar22 + 0x20))(uVar11,uVar12,lVar6);
  }
  func_0x000107c615c0(uVar12);
  if (lRam0000000112ffcbf8 != -1) {
    func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
  }
  lVar23 = 0;
  func_0x000107c5f168();
  func_0x000100028790();
  lVar20 = *(long *)(lVar23 + -8);
  uVar13 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar13);
  (**(code **)(lVar20 + 0x10))();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar12 = *(ulong *)(unaff_x22 + 0x30);
  uVar21 = *(ulong *)(unaff_x22 + 0x38);
  FUN_103c6f700(unaff_x22 + 0x10,unaff_x22 + 0x98);
  func_0x000107c61434(uVar3);
  uVar7 = uVar21;
  func_0x000107c61434();
  func_0x000107c5f160();
  uVar5 = uVar7;
  func_0x000107c5ff70();
  uVar8 = uVar7;
  func_0x000107c611d4(uVar7,(uint)uVar5 & 0xff);
  if ((uVar8 & 1) == 0) {
    func_0x000107c61170(uVar7);
    func_0x000103c6f73c(unaff_x22 + 0x10);
  }
  else {
    puVar14 = (undefined4 *)0xc;
    func_0x000107c6158c(0xc,0xffffffffffffffff);
    uVar15 = 0x20;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar14 = 0x8220102;
    uStack_60 = uVar15;
    func_0x000107c61434(uVar3);
    uVar16 = uVar2;
    func_0x0001014bfa20(uVar2,uVar3,&uStack_60);
    func_0x000107c6142c(uVar3);
    *(undefined8 *)(puVar14 + 1) = uVar16;
    func_0x000103c6f73c(unaff_x22 + 0x10);
    func_0x000107c60ea4(0x100000000,uVar7,(uint)uVar5 & 0xff,
                        "grpc.preparePurchase.ok contextId: %{public}s",puVar14,0xc);
    FUN_103c6f6e0(uVar15);
    func_0x000107c61590(uVar15,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar14,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(uVar7);
  }
  (**(code **)(lVar20 + 8))(uVar13,lVar23);
  func_0x000103c6ff70(uVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar20 = *(long *)(unaff_x22 + 0x440);
  func_0x000107c615c0(uVar13);
  lVar23 = 0;
  FUN_103c7a4b8();
  (**(code **)(lVar22 + 0x20))(lVar20 + *(int *)(lVar23 + 0x14),uVar11,lVar6);
  func_0x000107c6142c(uVar21);
  uVar7 = uVar12 & 0xffffffffffff;
  if ((uVar21 & 0x2000000000000000) != 0) {
    uVar7 = uVar21 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) {
    uVar12 = 0;
    uVar21 = 0;
  }
  else {
    func_0x000107c61434(uVar21);
  }
  puVar17 = *(undefined8 **)(unaff_x22 + 0x440);
  func_0x000103c6f73c(unaff_x22 + 0x10);
  *puVar17 = uVar2;
  puVar17[1] = uVar3;
  puVar1 = (ulong *)((long)puVar17 + (long)*(int *)(lVar23 + 0x18));
  *puVar1 = uVar12;
  puVar1[1] = uVar21;
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar4);
  FUN_103c6f670(unaff_x22 + 0x2d0);
                    /* WARNING: Could not recover jumptable at 0x000103c6c98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c6c9c0; end: 103c6cccf;  */

void FUN_103c6c9c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  undefined8 *puVar14;
  long lVar15;
  
  puVar1 = (undefined8 *)(unaff_x22 + 0x2d0);
  lVar2 = *(long *)(unaff_x22 + 0x480);
  FUN_103c6ed9c();
  if ((param_3 == 0) || (func_0x000107c6142c(param_3), lVar2 != 0xc)) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x480);
    uVar12 = 0x5065726170657270;
    uVar13 = 0xef65736168637275;
    FUN_103c6cfe8();
    *(undefined8 *)(unaff_x22 + 0x3d0) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x3d8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x3e0) = uVar13;
    *(undefined8 *)(unaff_x22 + 1000) = param_4;
    uVar10 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar10 != 0) {
      FUN_103c69a9c();
      func_0x000107c61658(unaff_x22 + 0x3d0,&UNK_1106f1e20,uVar10);
    }
    puVar14 = *(undefined8 **)(unaff_x22 + 0x458);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x480));
    func_0x000103c6f670(puVar1);
    *puVar14 = uVar8;
    puVar14[1] = uVar12;
    puVar14[2] = uVar13;
    puVar14[3] = param_4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar14 = (undefined8 *)(unaff_x22 + 0x318);
    if (lRam0000000112ffcbf8 != -1) {
      func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
    }
    lVar2 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    lVar15 = *(long *)(lVar2 + -8);
    uVar3 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar3);
    (**(code **)(lVar15 + 0x10))();
    *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x2f8);
    *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x2f0);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x308);
    *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x300);
    *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0x310);
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x2d8);
    *puVar14 = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x2e8);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x2e0);
    puVar4 = puVar14;
    func_0x000103c6f6a4(puVar14,unaff_x22 + 0x360);
    func_0x000107c5f160();
    puVar5 = puVar4;
    func_0x000107c5ff70();
    puVar6 = puVar4;
    func_0x000107c611d4(puVar4,(uint)puVar5 & 0xff);
    if ((int)puVar6 == 0) {
      func_0x000103c6f670(puVar14);
      func_0x000107c61170(puVar4);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    }
    else {
      puVar7 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar8 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar7 = 0x8220102;
      *(undefined8 *)(unaff_x22 + 0x428) = *(undefined8 *)(unaff_x22 + 0x318);
      *(undefined1 *)(unaff_x22 + 0x430) = *(undefined1 *)(unaff_x22 + 800);
      puVar11 = &UNK_1106f2b28;
      lVar9 = unaff_x22 + 0x428;
      func_0x000107c5fb18(lVar9,&UNK_1106f2b28);
      func_0x0001014bfa20();
      func_0x000107c6142c(puVar11);
      *(long *)(puVar7 + 1) = lVar9;
      func_0x000103c6f670(puVar14);
      func_0x000107c60ea4(0x100000000,puVar4,(uint)puVar5 & 0xff,
                          "grpc.preparePurchase.unsupportedDomain domain: %{public}s",puVar7,0xc);
      FUN_103c6f6e0(uVar8);
      func_0x000107c61590(uVar8,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(puVar4);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    }
    (*UNRECOVERED_JUMPTABLE)(uVar3,lVar2);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x480);
    puVar14 = *(undefined8 **)(unaff_x22 + 0x440);
    func_0x000107c615c0(uVar3);
    lVar2 = 0;
    FUN_103c7a4b8();
    func_0x000107c5eec4((long)puVar14 + (long)*(int *)(lVar2 + 0x14));
    func_0x000107c614ac(uVar8);
    *puVar14 = 0;
    puVar14[1] = 0xe000000000000000;
    puVar14 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar2 + 0x18));
    *puVar14 = 0;
    puVar14[1] = 0;
    func_0x000103c6f670(puVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c6ccb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c6ccd0; end: 103c6cde3;  */

undefined1  [16] FUN_103c6ccd0(void)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0;
  FUN_103c7b79c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + lVar5;
  FUN_103c6ed1c();
  puVar3 = puVar6;
  func_0x000107c614c4(puVar6,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffd8 + lVar5));
      lVar5 = 0x112ffccd0;
      func_0x0001000285a8(0x112ffccd0,&UNK_10dc6b780);
      iVar1 = *(int *)(lVar5 + 0x30);
      lVar5 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar6 + iVar1,lVar5);
      uVar4 = 4;
    }
    else {
      func_0x000103c6ed60(puVar6);
      uVar4 = 1;
    }
  }
  else if (iVar1 == 2) {
    func_0x000103c6ed60(puVar6);
    uVar4 = 2;
  }
  else if (iVar1 == 3) {
    func_0x000103c6ed60(puVar6);
    uVar4 = 3;
  }
  else {
    func_0x000103c6ed60(puVar6);
    uVar4 = 5;
  }
  auVar7._8_8_ = 1;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 103c6cde4; end: 103c6cfe7;  */

void FUN_103c6cde4(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar7 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_103c7b79c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar9 = (undefined8 *)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_103c6ed1c();
  puVar4 = puVar9;
  func_0x000107c614c4(puVar9,lVar3);
  iVar1 = (int)puVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_0x000107c6142c(puVar9[1]);
      lVar3 = 0x112ffccd0;
      func_0x0001000285a8(0x112ffccd0,&UNK_10dc6b780);
      (**(code **)(lVar11 + 0x20))(puVar7,(long)puVar9 + (long)*(int *)(lVar3 + 0x30),lVar2);
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      uVar6 = 0x30;
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      lVar5 = lVar3;
      func_0x000107c5eeac();
      (**(code **)(lVar11 + 8))(puVar7,lVar2);
      *(long *)(lVar3 + 0x20) = lVar5;
      *(undefined8 *)(lVar3 + 0x28) = uVar6;
      return;
    }
    uVar6 = *puVar9;
    uVar8 = puVar9[1];
  }
  else {
    if (iVar1 == 2) {
      uVar6 = puVar9[3];
      uVar8 = puVar9[4];
      uVar10 = puVar9[5];
      func_0x000107c6142c(puVar9[1]);
      func_0x000107c6142c(uVar6);
      lVar2 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      *(undefined8 *)(lVar2 + 0x20) = uVar8;
      *(undefined8 *)(lVar2 + 0x28) = uVar10;
      return;
    }
    if (iVar1 != 3) {
      func_0x000103c6ed60(puVar9);
      return;
    }
    uVar6 = puVar9[2];
    uVar8 = puVar9[3];
    func_0x000107c6142c(puVar9[1]);
  }
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = uVar6;
  *(undefined8 *)(lVar2 + 0x28) = uVar8;
  return;
}



/* Entry: 103c6cfe8; end: 103c6d97f;  */

undefined8 FUN_103c6cfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long extraout_x8;
  code *pcVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5f168();
  lVar17 = *(long *)(lVar3 + -8);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar7 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_68 = param_1;
  func_0x000107c614b0(param_1);
  lVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = &uStack_69;
  func_0x000107c6147c(puVar4,&uStack_68,lVar3,&UNK_110786678,0);
  if ((int)puVar4 == 0) {
    func_0x000107c614ac(uStack_68);
    uStack_68 = param_1;
    func_0x000107c614b0(param_1);
    iVar2 = (int)&uStack_69;
    puVar12 = &uStack_68;
    lVar14 = lVar3;
    func_0x000107c6147c();
    if (iVar2 == 0) {
      func_0x000107c614ac(uStack_68);
      uVar9 = param_1;
      FUN_103c6ed9c();
      if (lVar14 != 0) {
        puStack_a0 = puVar12;
        if (lRam0000000112ffcbf8 != -1) {
          func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
        }
        lVar3 = lStack_90;
        lVar7 = lStack_90;
        func_0x000100028790(lStack_90,0x112ffcc00);
        (**(code **)(lVar17 + 0x10))(lVar16,lVar7,lVar3);
        func_0x000107c61438(lVar14,4);
        uVar10 = param_3;
        func_0x000107c61434();
        func_0x000107c5f160();
        uVar11 = uVar10;
        func_0x000107c5ff74();
        uVar6 = uVar10;
        func_0x000107c611d4(uVar10,(uint)uVar11 & 0xff);
        if ((int)uVar6 == 0) {
          func_0x000107c61170(uVar10);
          func_0x000107c6142c(param_3);
          func_0x000107c61430(lVar14,4);
          pcVar15 = *(code **)(lVar17 + 8);
        }
        else {
          puVar5 = (undefined4 *)0x2a;
          func_0x000107c6158c(0x2a,0xffffffffffffffff);
          uVar8 = 0x60;
          func_0x000107c6158c(0x60,0xffffffffffffffff);
          *puVar5 = 0x8220402;
          uVar13 = param_3;
          uStack_80 = uVar8;
          func_0x0001014bfa20(param_2,param_3,&uStack_80);
          *(undefined8 *)(puVar5 + 1) = param_2;
          *(undefined2 *)(puVar5 + 3) = 0x802;
          func_0x000107c6142c(lVar14);
          *(undefined8 *)((long)puVar5 + 0xe) = uVar9;
          *(undefined2 *)((long)puVar5 + 0x16) = 0x822;
          uVar6 = uVar9;
          FUN_103c6f884();
          lStack_98 = lVar17;
          func_0x0001014bfa20();
          func_0x000107c6142c(uVar13);
          *(undefined8 *)(puVar5 + 6) = uVar6;
          *(undefined2 *)(puVar5 + 8) = 0x822;
          func_0x000107c61434(lVar14);
          puVar12 = puStack_a0;
          func_0x0001014bfa20(puStack_a0,lVar14,&uStack_80);
          func_0x000107c6142c(lVar14);
          *(undefined8 **)((long)puVar5 + 0x22) = puVar12;
          func_0x000107c6142c(param_3);
          func_0x000107c61430(lVar14,3);
          func_0x000107c60ea4(0x100000000,uVar10,(uint)uVar11 & 0xff,
                              "grpc.%{public}s.status code: %{public}ld (%{public}s) message: %{public}s"
                              ,puVar5,0x2a);
          func_0x000107c61408(uVar8,3,PTR___sypN_11034f1a8 + 8);
          func_0x000107c61590(uVar8,0xffffffffffffffff,0xffffffffffffffff);
          func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
          func_0x000107c61170(uVar10);
          pcVar15 = *(code **)(lStack_98 + 8);
        }
        (*pcVar15)(lVar16,lStack_90);
        func_0x000103c6faa4(uVar9);
        func_0x000107c6142c(lVar14);
        return uVar9;
      }
      if (lRam0000000112ffcbf8 != -1) {
        func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
      }
      lVar16 = lStack_90;
      lVar18 = lStack_90;
      func_0x000100028790(lStack_90,0x112ffcc00);
      (**(code **)(lVar17 + 0x10))(lVar7,lVar18,lVar16);
      func_0x000107c614b0(param_1);
      uVar9 = param_3;
      func_0x000107c61434();
      func_0x000107c5f160();
      uVar10 = uVar9;
      func_0x000107c5ff74();
      uVar11 = uVar9;
      func_0x000107c611d4(uVar9,(uint)uVar10 & 0xff);
      if ((int)uVar11 == 0) {
        func_0x000107c6142c(param_3);
        func_0x000107c614ac(param_1);
        func_0x000107c61170(uVar9);
        pcVar15 = *(code **)(lVar17 + 8);
      }
      else {
        puVar5 = (undefined4 *)0x16;
        func_0x000107c6158c(0x16,0xffffffffffffffff);
        uVar11 = 0x40;
        func_0x000107c6158c(0x40,0xffffffffffffffff);
        *puVar5 = 0x8220202;
        uStack_80 = uVar11;
        func_0x0001014bfa20(param_2,param_3,&uStack_80);
        *(undefined8 *)(puVar5 + 1) = param_2;
        *(undefined2 *)(puVar5 + 3) = 0x822;
        uStack_68 = param_1;
        func_0x000107c614b0(param_1);
        puVar12 = &uStack_68;
        func_0x000107c5fb18(puVar12,lVar3);
        func_0x0001014bfa20();
        func_0x000107c6142c(lVar3);
        *(undefined8 **)((long)puVar5 + 0xe) = puVar12;
        func_0x000107c614ac(param_1);
        func_0x000107c6142c(param_3);
        func_0x000107c60ea4(0x100000000,uVar9,(uint)uVar10 & 0xff,
                            "grpc.%{public}s.transport: %{public}s",puVar5,0x16);
        func_0x000107c61408(uVar11,2,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61590(uVar11,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61170(uVar9);
        pcVar15 = *(code **)(lVar17 + 8);
      }
      (*pcVar15)(lVar7,lStack_90);
      return 0;
    }
    if (lRam0000000112ffcbf8 != -1) {
      func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
    }
    lVar16 = lStack_90;
    lVar7 = lStack_90;
    func_0x000100028790(lStack_90,0x112ffcc00);
    (**(code **)(lVar17 + 0x10))(lVar18,lVar7,lVar16);
    func_0x000107c614b0(param_1);
    uVar9 = param_3;
    func_0x000107c61434();
    func_0x000107c5f160();
    uVar10 = uVar9;
    func_0x000107c5ff74();
    uVar11 = uVar9;
    func_0x000107c611d4(uVar9,(uint)uVar10 & 0xff);
    if ((int)uVar11 == 0) {
      func_0x000107c6142c(param_3);
      func_0x000107c614ac(param_1);
      func_0x000107c61170(uVar9);
      pcVar15 = *(code **)(lVar17 + 8);
    }
    else {
      puVar5 = (undefined4 *)0x16;
      func_0x000107c6158c(0x16,0xffffffffffffffff);
      uVar6 = 0x40;
      func_0x000107c6158c(0x40,0xffffffffffffffff);
      *puVar5 = 0x8220202;
      uVar11 = param_2;
      uStack_80 = uVar6;
      func_0x0001014bfa20(param_2,param_3,&uStack_80);
      *(undefined8 *)(puVar5 + 1) = uVar11;
      *(undefined2 *)(puVar5 + 3) = 0x822;
      uStack_88 = param_1;
      func_0x000107c614b0(param_1);
      puVar12 = &uStack_88;
      func_0x000107c5fb18(puVar12,lVar3);
      lStack_98 = lVar17;
      func_0x0001014bfa20();
      func_0x000107c6142c(lVar3);
      *(undefined8 **)((long)puVar5 + 0xe) = puVar12;
      func_0x000107c614ac(param_1);
      func_0x000107c6142c(param_3);
      func_0x000107c60ea4(0x100000000,uVar9,(uint)uVar10 & 0xff,
                          "grpc.%{public}s.malformedRequest: %{public}s",puVar5,0x16);
      func_0x000107c61408(uVar6,2,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(uVar9);
      pcVar15 = *(code **)(lStack_98 + 8);
    }
    (*pcVar15)(lVar18,lStack_90);
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x18);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0x2e63707267;
    uStack_78 = 0xe500000000000000;
    func_0x000107c5fb78(param_2,param_3);
    pcVar1 = ".malformedRequest";
    uVar9 = 0xd000000000000011;
  }
  else {
    if (lRam0000000112ffcbf8 != -1) {
      func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
    }
    lVar16 = lStack_90;
    lVar7 = lStack_90;
    func_0x000100028790(lStack_90,0x112ffcc00);
    (**(code **)(lVar17 + 0x10))(lVar18 - extraout_x12_01,lVar7,lVar16);
    func_0x000107c614b0(param_1);
    uVar9 = param_3;
    func_0x000107c61434();
    func_0x000107c5f160();
    uVar10 = uVar9;
    func_0x000107c5ff74();
    uVar11 = uVar9;
    func_0x000107c611d4(uVar9,(uint)uVar10 & 0xff);
    if ((int)uVar11 == 0) {
      func_0x000107c6142c(param_3);
      func_0x000107c614ac(param_1);
      func_0x000107c61170(uVar9);
      pcVar15 = *(code **)(lVar17 + 8);
    }
    else {
      puVar5 = (undefined4 *)0x16;
      func_0x000107c6158c(0x16,0xffffffffffffffff);
      uVar6 = 0x40;
      func_0x000107c6158c(0x40,0xffffffffffffffff);
      *puVar5 = 0x8220202;
      uVar11 = param_2;
      uStack_80 = uVar6;
      func_0x0001014bfa20(param_2,param_3,&uStack_80);
      *(undefined8 *)(puVar5 + 1) = uVar11;
      *(undefined2 *)(puVar5 + 3) = 0x822;
      uStack_88 = param_1;
      func_0x000107c614b0(param_1);
      puVar12 = &uStack_88;
      func_0x000107c5fb18(puVar12,lVar3);
      func_0x0001014bfa20();
      lStack_98 = lVar17;
      func_0x000107c6142c(lVar3);
      *(undefined8 **)((long)puVar5 + 0xe) = puVar12;
      func_0x000107c614ac(param_1);
      func_0x000107c6142c(param_3);
      func_0x000107c60ea4(0x100000000,uVar9,(uint)uVar10 & 0xff,
                          "grpc.%{public}s.malformedResponse: %{public}s",puVar5,0x16);
      func_0x000107c61408(uVar6,2,PTR___sypN_11034f1a8 + 8);
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(uVar9);
      pcVar15 = *(code **)(lStack_98 + 8);
    }
    (*pcVar15)(lVar18 - extraout_x12_01,lStack_90);
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0x2e63707267;
    uStack_78 = 0xe500000000000000;
    func_0x000107c5fb78(param_2,param_3);
    pcVar1 = ".malformedResponse";
    uVar9 = 0xd000000000000012;
  }
  func_0x000107c5fb78(uVar9,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c614ac(uStack_68);
  return 0;
}



/* Entry: 103c6d980; end: 103c6d9bf;  */

void FUN_103c6d980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x7b0) = param_8;
  *(undefined8 **)(unaff_x22 + 0x7a8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x7a0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x798) = param_6;
  *(undefined8 *)(unaff_x22 + 0x790) = param_5;
  *(undefined8 *)(unaff_x22 + 0x788) = param_4;
  *(undefined8 *)(unaff_x22 + 0x780) = param_3;
  *(undefined8 *)(unaff_x22 + 0x778) = param_2;
  *(undefined8 *)(unaff_x22 + 0x770) = param_1;
  *(undefined8 *)(unaff_x22 + 0x7b8) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c6d9c0,0,0);
  return;
}



/* Entry: 103c6d9c0; end: 103c6de2f;  */

void FUN_103c6d9c0(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 uVar10;
  undefined *puVar11;
  int *piVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar14 = *(long *)(unaff_x22 + 0x7a0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x798);
  lVar16 = *(long *)(unaff_x22 + 0x790);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x788);
  lVar17 = *(long *)(unaff_x22 + 0x780);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x778);
  *(undefined8 *)(unaff_x22 + 0x5f8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x5f0) = 0;
  *(undefined8 *)(unaff_x22 + 0x5b0) = 1;
  *(undefined1 *)(unaff_x22 + 0x5b8) = 1;
  uVar15 = *(undefined8 *)(lVar17 + 0x18);
  lVar4 = *(long *)(lVar17 + 0x20);
  func_0x0001000a8868(lVar17,uVar15);
  (**(code **)(lVar4 + 0x18))();
  *(undefined8 *)(unaff_x22 + 0x5c0) = uVar15;
  *(long *)(unaff_x22 + 0x5c8) = lVar4;
  uVar15 = *(undefined8 *)(lVar17 + 0x18);
  lVar4 = *(long *)(lVar17 + 0x20);
  func_0x0001000a8868(lVar17,uVar15);
  (**(code **)(lVar4 + 8))(uVar15,lVar4);
  *(undefined8 *)(unaff_x22 + 0x768) = uVar15;
  puVar2 = PTR___ss6UInt64VN_11034f048;
  puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  *(undefined **)(unaff_x22 + 0x5d0) = puVar2;
  *(undefined **)(unaff_x22 + 0x5d8) = puVar11;
  uVar15 = 0;
  if (lVar16 != 0) {
    uVar15 = uVar19;
  }
  lVar4 = -0x2000000000000000;
  if (lVar16 != 0) {
    lVar4 = lVar16;
  }
  *(undefined8 *)(unaff_x22 + 0x5e0) = uVar15;
  *(long *)(unaff_x22 + 0x5e8) = lVar4;
  func_0x000107c61434(lVar16);
  FUN_103c7d640(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x668) = *(undefined8 *)(unaff_x22 + 0x5c8);
  *(undefined8 *)(unaff_x22 + 0x660) = *(undefined8 *)(unaff_x22 + 0x5c0);
  *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)(unaff_x22 + 0x5d8);
  *(undefined8 *)(unaff_x22 + 0x670) = *(undefined8 *)(unaff_x22 + 0x5d0);
  *(undefined8 *)(unaff_x22 + 0x688) = *(undefined8 *)(unaff_x22 + 0x5e8);
  *(undefined8 *)(unaff_x22 + 0x680) = *(undefined8 *)(unaff_x22 + 0x5e0);
  *(undefined8 *)(unaff_x22 + 0x698) = *(undefined8 *)(unaff_x22 + 0x5f8);
  *(undefined8 *)(unaff_x22 + 0x690) = *(undefined8 *)(unaff_x22 + 0x5f0);
  *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x5b8);
  *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x5b0);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x5d8);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x5d0);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x5e8);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x5e0);
  *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0x5f8);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x5f0);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x5b8);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x5b0);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x5c8);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x5c0);
  *(undefined8 *)(unaff_x22 + 0x608) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x648) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x640) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x638) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x630) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x628) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x620) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x618) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x610) = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000103c6f770(unaff_x22 + 0x650,unaff_x22 + 0x6a0);
  FUN_103c6ff70(unaff_x22 + 0x600,0x112ffcc18,&UNK_10dc6c5d0);
  uVar15 = 0;
  if (lVar14 != 0) {
    uVar15 = uVar18;
  }
  lVar4 = -0x2000000000000000;
  if (lVar14 != 0) {
    lVar4 = lVar14;
  }
  *(undefined8 *)(unaff_x22 + 0x738) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x730) = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c61434(lVar14);
  func_0x000100bcb1dc(unaff_x22 + 0x730);
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar15;
  *(long *)(unaff_x22 + 0x1c8) = lVar4;
  lVar14 = 0;
  FUN_103c7b79c();
  lVar16 = *(long *)(lVar14 + -8);
  uVar7 = *(long *)(lVar16 + 0x40) + 0xf;
  uVar3 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x7c0) = uVar3;
  lVar4 = 0x112ffcc20;
  func_0x0001000285a8(0x112ffcc20,&UNK_10dc6b6c0);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000103c6ffb0(uVar13,uVar5,0x112ffcc20,&UNK_10dc6b6c0);
  uVar6 = uVar5;
  (**(code **)(lVar16 + 0x30))(uVar5,1,lVar14);
  if ((int)uVar6 == 1) {
    FUN_103c6ff70(uVar5,0x112ffcc20,&UNK_10dc6b6c0);
    func_0x000107c615c0(uVar5);
  }
  else {
    puVar8 = (undefined8 *)(unaff_x22 + 0x740);
    *(undefined8 *)(unaff_x22 + 0x748) = *(undefined8 *)(unaff_x22 + 0x110);
    *puVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    *(undefined8 *)(unaff_x22 + 0x760) = *(undefined8 *)(unaff_x22 + 0x100);
    uVar6 = uVar3;
    FUN_103c6fce4(uVar5);
    uVar10 = (undefined1)uVar6;
    func_0x000107c615c0();
    FUN_103c6ccd0();
    *(ulong *)(unaff_x22 + 0x1b0) = uVar5;
    *(undefined1 *)(unaff_x22 + 0x1b8) = uVar10;
    FUN_103c6cde4();
    FUN_103c6ff70(unaff_x22 + 0x760,0x112d38270,&UNK_10d905a20);
    *(ulong *)(unaff_x22 + 0x1d0) = uVar5;
    uVar7 = uVar7 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    FUN_103c6ed1c(uVar3,uVar7);
    uVar6 = uVar7;
    func_0x000107c614c4(uVar7,lVar14);
    if ((int)uVar6 == 2) {
      func_0x000103c6ed60(uVar3);
      uVar18 = *(undefined8 *)(uVar7 + 8);
      uVar15 = *(undefined8 *)(uVar7 + 0x10);
      uVar13 = *(undefined8 *)(uVar7 + 0x18);
      func_0x000107c6142c(*(undefined8 *)(uVar7 + 0x28));
      func_0x000107c6142c(uVar18);
      func_0x000100bcb1dc(puVar8);
      func_0x000107c615c0(uVar7);
    }
    else {
      func_0x000103c6ed60(uVar7);
      func_0x000107c615c0(uVar7);
      func_0x000103c6ed60(uVar3);
      func_0x000100bcb1dc(puVar8);
      uVar15 = 0;
      uVar13 = 0xe000000000000000;
    }
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar13;
  }
  puVar8 = (undefined8 *)(*(long *)(unaff_x22 + 0x7a8) + 0x10);
  func_0x0001000a8868(puVar8,*(undefined8 *)(*(long *)(unaff_x22 + 0x7a8) + 0x28));
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x278);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x270);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x00010448a8f4(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x340) = 30000;
  *(undefined1 *)(unaff_x22 + 0x348) = 0;
  *(undefined8 *)(unaff_x22 + 0x351) = *(undefined8 *)(unaff_x22 + 0x2f1);
  *(undefined8 *)(unaff_x22 + 0x349) = *(undefined8 *)(unaff_x22 + 0x2e9);
  *(undefined8 *)(unaff_x22 + 0x361) = *(undefined8 *)(unaff_x22 + 0x301);
  *(undefined8 *)(unaff_x22 + 0x359) = *(undefined8 *)(unaff_x22 + 0x2f9);
  *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(unaff_x22 + 0x338);
  *(undefined8 *)(unaff_x22 + 0x381) = *(undefined8 *)(unaff_x22 + 0x321);
  *(undefined8 *)(unaff_x22 + 0x379) = *(undefined8 *)(unaff_x22 + 0x319);
  *(undefined8 *)(unaff_x22 + 0x391) = *(undefined8 *)(unaff_x22 + 0x331);
  *(undefined8 *)(unaff_x22 + 0x389) = *(undefined8 *)(unaff_x22 + 0x329);
  *(undefined8 *)(unaff_x22 + 0x371) = *(undefined8 *)(unaff_x22 + 0x311);
  *(undefined8 *)(unaff_x22 + 0x369) = *(undefined8 *)(unaff_x22 + 0x309);
  *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x348);
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x340);
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x358);
  *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x350);
  *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x388);
  *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x380);
  *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x398);
  *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x390);
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x368);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x360);
  *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x378);
  *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x370);
  piVar12 = *(int **)(*(long *)*puVar8 + 0x80);
  iVar1 = *piVar12;
  plVar9 = (long *)(ulong)(uint)piVar12[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x7c8) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_103c6de30;
                    /* WARNING: Could not recover jumptable at 0x000103c6de2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar12))
            (plVar9,unaff_x22 + 0x3a0,unaff_x22 + 0x10,unaff_x22 + 0x280);
  return;
}



/* Entry: 103c6de30; end: 103c6de93;  */

void FUN_103c6de30(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 2000) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x7c8));
  func_0x000100e19000(lVar2 + 0x340);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c6de94;
  }
  else {
    pcVar1 = FUN_103c6e70c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c6de94; end: 103c6e70b;  */

void FUN_103c6de94(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  char *in_x3;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x22;
  ulong uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uStack_60;
  
  uVar18 = *(ulong *)(unaff_x22 + 0x3b0);
  uVar17 = *(ulong *)(unaff_x22 + 0x3b8);
  uVar3 = uVar18 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar3 = uVar17 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    uVar23 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c61434(uVar17);
    uVar3 = uVar18;
    uVar23 = uVar17;
  }
  lVar22 = *(long *)(unaff_x22 + 0x3a0);
  cVar1 = *(char *)(unaff_x22 + 0x3a8);
  if (cVar1 == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) goto LAB_103c6df08;
      if (lRam0000000112ffcbf8 != -1) {
        func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
      }
      lVar8 = 0;
      func_0x000107c5f168();
      func_0x000100028790();
      lVar2 = *(long *)(lVar8 + -8);
      uVar9 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar9);
      (**(code **)(lVar2 + 0x10))();
      lVar22 = unaff_x22 + 0x3a0;
      func_0x000103c6f814(lVar22,unaff_x22 + 0x558);
      func_0x000107c5f160();
      lVar6 = lVar22;
      func_0x000107c5ff70();
      lVar7 = lVar22;
      func_0x000107c611d4(lVar22,(uint)lVar6 & 0xff);
      if ((int)lVar7 == 0) {
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000107c61170(lVar22);
      }
      else {
        puVar4 = (undefined4 *)0xc;
        func_0x000107c6158c(0xc,0xffffffffffffffff);
        uVar5 = 0x20;
        func_0x000107c6158c(0x20,0xffffffffffffffff);
        *puVar4 = 0x8220102;
        uStack_60 = uVar5;
        func_0x000107c61434(uVar17);
        func_0x0001014bfa20(uVar18,uVar17,&uStack_60);
        func_0x000107c6142c(uVar17);
        *(ulong *)(puVar4 + 1) = uVar18;
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000107c60ea4(0x100000000,lVar22,(uint)lVar6 & 0xff,
                            "grpc.purchase.completed orderId: %{public}s",puVar4,0xc);
        FUN_103c6f6e0(uVar5);
        func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61170(lVar22);
        func_0x000103c6f850(unaff_x22 + 0x3a0);
      }
      (**(code **)(lVar2 + 8))(uVar9,lVar8);
      func_0x000107c615c0(uVar9);
      uVar16 = 0;
      uVar18 = 0;
      uVar20 = 0;
      in_x3 = (char *)0xf;
    }
    else if (lVar22 == 2) {
      if (lRam0000000112ffcbf8 != -1) {
        func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
      }
      lVar8 = 0;
      func_0x000107c5f168();
      func_0x000100028790();
      lVar2 = *(long *)(lVar8 + -8);
      uVar9 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar9);
      (**(code **)(lVar2 + 0x10))();
      lVar22 = unaff_x22 + 0x3a0;
      func_0x000103c6f814(lVar22,unaff_x22 + 0x500);
      func_0x000107c5f160();
      lVar6 = lVar22;
      func_0x000107c5ff70();
      lVar7 = lVar22;
      func_0x000107c611d4(lVar22,(uint)lVar6 & 0xff);
      if ((int)lVar7 == 0) {
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000107c61170(lVar22);
      }
      else {
        puVar4 = (undefined4 *)0xc;
        func_0x000107c6158c(0xc,0xffffffffffffffff);
        uVar5 = 0x20;
        func_0x000107c6158c(0x20,0xffffffffffffffff);
        *puVar4 = 0x8220102;
        uStack_60 = uVar5;
        func_0x000107c61434(uVar17);
        func_0x0001014bfa20(uVar18,uVar17,&uStack_60);
        func_0x000107c6142c(uVar17);
        *(ulong *)(puVar4 + 1) = uVar18;
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000107c60ea4(0x100000000,lVar22,(uint)lVar6 & 0xff,
                            "grpc.purchase.pending orderId: %{public}s",puVar4,0xc);
        FUN_103c6f6e0(uVar5);
        func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61170(lVar22);
        func_0x000103c6f850(unaff_x22 + 0x3a0);
      }
      (**(code **)(lVar2 + 8))(uVar9,lVar8);
      func_0x000107c615c0(uVar9);
      uVar16 = 0;
      uVar18 = 0;
      uVar20 = 0;
      in_x3 = (char *)0x10;
    }
    else {
      if (lRam0000000112ffcbf8 != -1) {
        func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
      }
      uVar10 = 0;
      func_0x000107c5f168();
      func_0x000100028790();
      lVar22 = *(long *)(uVar10 - 8);
      uVar11 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar11);
      uVar20 = uVar10;
      (**(code **)(lVar22 + 0x10))();
      uVar16 = *(ulong *)(unaff_x22 + 0x3c0);
      uVar21 = *(ulong *)(unaff_x22 + 0x3c8);
      func_0x000103c6f814(unaff_x22 + 0x3a0,unaff_x22 + 0x450);
      func_0x000103c6f814(unaff_x22 + 0x3a0,unaff_x22 + 0x4a8);
      uVar9 = uVar21;
      func_0x000107c61434();
      func_0x000107c5f160();
      uVar12 = uVar9;
      func_0x000107c5ff74();
      uVar13 = uVar9;
      func_0x000107c611d4(uVar9,(uint)uVar12 & 0xff);
      if ((int)uVar13 == 0) {
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000107c61170(uVar9);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 8);
      }
      else {
        puVar4 = (undefined4 *)0x16;
        func_0x000107c6158c(0x16,0xffffffffffffffff);
        uVar5 = 0x40;
        func_0x000107c6158c(0x40,0xffffffffffffffff);
        *puVar4 = 0x8220202;
        uStack_60 = uVar5;
        func_0x000107c61434(uVar21);
        uVar13 = uVar16;
        func_0x0001014bfa20(uVar16,uVar21,&uStack_60);
        func_0x000107c6142c(uVar21);
        *(ulong *)(puVar4 + 1) = uVar13;
        *(undefined2 *)(puVar4 + 3) = 0x822;
        func_0x000107c61434(uVar17);
        func_0x0001014bfa20(uVar18,uVar17,&uStack_60);
        func_0x000107c6142c(uVar17);
        *(ulong *)((long)puVar4 + 0xe) = uVar18;
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        func_0x000103c6f850(unaff_x22 + 0x3a0);
        in_x3 = "grpc.purchase.failed reasonCode: %{public}s orderId: %{public}s";
        func_0x000107c60ea4(0x100000000,uVar9,(uint)uVar12 & 0xff,
                            "grpc.purchase.failed reasonCode: %{public}s orderId: %{public}s",puVar4
                            ,0x16);
        func_0x000107c61408(uVar5,2,PTR___sypN_11034f1a8 + 8);
        func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
        uVar20 = 0xffffffffffffffff;
        func_0x000107c61590(puVar4,0xffffffffffffffff);
        func_0x000107c61170(uVar9);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 8);
      }
      (*UNRECOVERED_JUMPTABLE)(uVar11,uVar10);
      func_0x000107c615c0(uVar11);
      uVar18 = uVar21;
      FUN_103c6fb40();
      func_0x000103c6f850(unaff_x22 + 0x3a0);
      func_0x000107c6142c(uVar21);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x7c0);
    puVar15 = *(ulong **)(unaff_x22 + 0x770);
    func_0x000103c6f7ac(unaff_x22 + 0x1b0);
    func_0x000103c6f7e0(unaff_x22 + 0x5b0);
    *puVar15 = uVar3;
    puVar15[1] = uVar23;
    puVar15[2] = uVar16;
    puVar15[3] = uVar18;
    puVar15[4] = uVar20;
    puVar15[5] = (ulong)in_x3;
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
LAB_103c6df08:
    func_0x000107c6142c(uVar23);
    if (lRam0000000112ffcbf8 != -1) {
      func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
    }
    lVar2 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    lVar24 = *(long *)(lVar2 + -8);
    uVar3 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar3);
    (**(code **)(lVar24 + 0x10))();
    lVar6 = unaff_x22 + 0x3a0;
    func_0x000103c6f814(lVar6,unaff_x22 + 0x3f8);
    func_0x000107c5f160();
    lVar7 = lVar6;
    func_0x000107c5ff74();
    lVar8 = lVar6;
    func_0x000107c611d4(lVar6,(uint)lVar7 & 0xff);
    if ((int)lVar8 == 0) {
      func_0x000103c6f850(unaff_x22 + 0x3a0);
    }
    else {
      puVar4 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar5 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar4 = 0x8200102;
      *(long *)(unaff_x22 + 0x750) = lVar22;
      *(char *)(unaff_x22 + 0x758) = cVar1;
      puVar14 = &UNK_1106f2c48;
      lVar22 = unaff_x22 + 0x750;
      uStack_60 = uVar5;
      func_0x000107c5fb18(lVar22,&UNK_1106f2c48);
      func_0x0001014bfa20();
      func_0x000107c6142c(puVar14);
      *(long *)(puVar4 + 1) = lVar22;
      func_0x000103c6f850(unaff_x22 + 0x3a0);
      func_0x000107c60ea4(0x100000000,lVar6,(uint)lVar7 & 0xff,"grpc.purchase.unknownStatus: %s",
                          puVar4,0xc);
      FUN_103c6f6e0(uVar5);
      func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(lVar6);
    (**(code **)(lVar24 + 8))(uVar3,lVar2);
    func_0x000107c615c0(uVar3);
    *(undefined8 *)(unaff_x22 + 0x718) = 1;
    *(undefined8 *)(unaff_x22 + 0x710) = 0;
    *(undefined8 *)(unaff_x22 + 0x720) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x728) = 0x800000010f1b22f0;
    uVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar5 != 0) {
      FUN_103c69a9c();
      func_0x000107c61658(unaff_x22 + 0x710,&UNK_1106f1e20,uVar5);
    }
    func_0x000103c6f850(unaff_x22 + 0x3a0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x7c0);
    puVar19 = *(undefined8 **)(unaff_x22 + 0x7b0);
    func_0x000103c6f7ac(unaff_x22 + 0x1b0);
    func_0x000103c6f7e0(unaff_x22 + 0x5b0);
    func_0x000107c615c0(uVar5);
    puVar19[1] = 1;
    *puVar19 = 0;
    puVar19[2] = 0xd000000000000016;
    puVar19[3] = 0x800000010f1b22f0;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c6e6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c6e70c; end: 103c6e7e7;  */

void FUN_103c6e70c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_x3;
  long unaff_x22;
  undefined8 *puVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 2000);
  uVar3 = 0x6573616863727570;
  uVar4 = 0xe800000000000000;
  FUN_103c6cfe8();
  *(undefined8 *)(unaff_x22 + 0x6f0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x6f8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x700) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x708) = in_x3;
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar2 != 0) {
    FUN_103c69a9c();
    func_0x000107c61658(unaff_x22 + 0x6f0,&UNK_1106f1e20,uVar2);
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 2000));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x7c0);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x7b0);
  func_0x000103c6f7ac(unaff_x22 + 0x1b0);
  func_0x000103c6f7e0(unaff_x22 + 0x5b0);
  func_0x000107c615c0(uVar2);
  *puVar5 = uVar1;
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  puVar5[3] = in_x3;
                    /* WARNING: Could not recover jumptable at 0x000103c6e7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c6e7e8; end: 103c6e863;  */

void FUN_103c6e7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103c70034;
                    /* WARNING: Could not recover jumptable at 0x000103c6e860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103c6fd28(plVar1,unaff_x22 + 0x10,param_2,param_3,unaff_x22 + 0x40);
  return;
}



/* Entry: 103c6e864; end: 103c6e88f;  */

void FUN_103c6e864(void)

{
  long unaff_x20;
  
  FUN_103c6f6e0(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c6e890; end: 103c6e8fb;  */

void FUN_103c6e890(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  plVar2 = (long *)*unaff_x20;
  plVar1 = (long *)0x490;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c6e8fc;
  plVar1[0x8b] = unaff_x22 + 0x10;
  plVar1[0x8a] = (long)plVar2;
  plVar1[0x89] = param_2;
  plVar1[0x88] = param_1;
  plVar1[0x8c] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c6bed8,0,0);
  return;
}



/* Entry: 103c6e8fc; end: 103c6e953;  */

void FUN_103c6e8fc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c6e950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c6e954; end: 103c6e9f3;  */

void FUN_103c6e954(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  plVar2 = (long *)*unaff_x20;
  plVar1 = (long *)0x7e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103c70038;
  plVar1[0xf6] = unaff_x22 + 0x40;
  plVar1[0xf5] = (long)plVar2;
  plVar1[0xf4] = param_7;
  plVar1[0xf3] = param_6;
  plVar1[0xf2] = param_5;
  plVar1[0xf1] = param_4;
  plVar1[0xf0] = param_3;
  plVar1[0xef] = param_2;
  plVar1[0xee] = unaff_x22 + 0x10;
  plVar1[0xf7] = *plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c6d9c0,0,0);
  return;
}



/* Entry: 103c6e9f4; end: 103c6ea6f;  */

void FUN_103c6e9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c6ea70;
                    /* WARNING: Could not recover jumptable at 0x000103c6ea6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103c6fd28(plVar1,unaff_x22 + 0x10,param_2,param_3,unaff_x22 + 0x40);
  return;
}



/* Entry: 103c6ea70; end: 103c6eadb;  */

void FUN_103c6ea70(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x60);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    uVar8 = *(undefined8 *)(lVar2 + 0x38);
    uVar7 = *(undefined8 *)(lVar2 + 0x30);
    puVar1[3] = *(undefined8 *)(lVar2 + 0x28);
    puVar1[2] = uVar6;
    puVar1[5] = uVar8;
    puVar1[4] = uVar7;
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(lVar2 + 0x68);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    uVar6 = *(undefined8 *)(lVar2 + 0x58);
    uVar5 = *(undefined8 *)(lVar2 + 0x50);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x48);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c6ead8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c6eadc; end: 103c6ed1b;  */

/* WARNING: Removing unreachable block (ram,0x000103c6ece0) */

undefined8 ***** FUN_103c6eadc(undefined8 param_1,undefined8 param_2,undefined8 ****param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 *****pppppuVar2;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 auStack_160 [2];
  undefined1 auStack_150 [40];
  undefined8 ****appppuStack_128 [3];
  undefined8 ***pppuStack_110;
  undefined **ppuStack_108;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  undefined6 uStack_b6;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000100083b20(auStack_d0);
  func_0x0001000a8868(auStack_d0,CONCAT62(uStack_b6,uStack_b8));
  (**(code **)(lStack_b0 + 8))();
  FUN_103c6f6e0(auStack_d0);
  func_0x000100083b20(appppuStack_128);
  func_0x0001000a8868(appppuStack_128,pppuStack_110);
  uStack_c0 = 0;
  uStack_b8 = 0x201;
  uStack_70 = 0;
  uStack_a8 = 0;
  lStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7e = 0;
  uStack_86 = 0;
  uStack_80 = 0;
  uStack_68 = 1;
  (**(code **)((long)ppuStack_108 + 8))
            (auStack_150,0x706149,0xe300000000000000,auStack_d0,pppuStack_110,ppuStack_108);
  func_0x000103c6fff8(auStack_d0);
  func_0x000100e9ebd4(auStack_150,auStack_100);
  FUN_103c6f6e0(appppuStack_128);
  func_0x000100e1b010(auStack_100,appppuStack_128);
  ppppuVar1 = (undefined8 ****)0x0;
  func_0x000103c8daf8();
  func_0x000107c613fc();
  pppppuVar2 = appppuStack_128;
  FUN_103c8d050();
  ppuStack_108 = &PTR_DAT_1106f11b0;
  appppuStack_128[0] = pppppuVar2;
  pppuStack_110 = ppppuVar1;
  FUN_103c6ff50();
  func_0x000107c613fc();
  func_0x0001000c6518(appppuStack_128,ppppuVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppuVar1[-1][8]);
  puVar3 = (undefined8 *)((long)auStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar3);
  ppppuVar4 = (undefined8 ****)*puVar3;
  pppppuVar2[5] = ppppuVar1;
  pppppuVar2[6] = (undefined8 ****)&PTR_DAT_1106f11b0;
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  pppppuVar2[2] = ppppuVar4;
  FUN_103c6f6e0(auStack_100);
  pppppuVar2[7] = param_3;
  FUN_103c6f6e0(appppuStack_128);
  return pppppuVar2;
}



/* Entry: 103c6ed1c; end: 103c6ed9b;  */

undefined8 FUN_103c6ed1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103c7b79c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c6ed9c; end: 103c6f66f;  */

long FUN_103c6ed9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  uint uVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  code *pcVar19;
  long lVar20;
  long lStack_1b0;
  code *pcStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  byte bStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined1 auStack_130 [32];
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [32];
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_b8;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_70 [16];
  
  lVar4 = 0;
  func_0x000107c606b4();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  pcVar19 = (code *)((long)&lStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar15 = 0x112dcc470;
  pcStack_1a8 = pcVar19;
  func_0x0001000285a8(0x112dcc470,&UNK_10d98eb78);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)pcVar19 - extraout_x8_00;
  lVar5 = 0x112dcc478;
  func_0x0001000285a8(0x112dcc478,&UNK_10d98eb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  uVar13 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_198 = uVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = uVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar14 - extraout_x12_00;
  lVar5 = 0;
  func_0x000107c606c4();
  lStack_1a0 = *(long *)(lVar5 + -8);
  lStack_188 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1a0 + 0x40));
  lVar5 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_1b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_01;
  func_0x000107c614cc(param_1,auStack_70,auStack_88);
  lStack_c8 = lStack_80;
  func_0x0001000a9d90(&lStack_e0);
  (**(code **)(*(long *)(lStack_80 + -8) + 0x10))();
  func_0x000107c606b0(lVar5,&lStack_e0);
  lStack_190 = lVar5;
  func_0x000107c606b8(lVar20);
  (**(code **)(lVar17 + 0x68))
            (lVar14,*(undefined4 *)PTR___ss6MirrorV12DisplayStyleO4enumyA2DmFWC_11034efa0,lVar4);
  (**(code **)(lVar17 + 0x38))(lVar14,0,1,lVar4);
  lVar15 = (long)*(int *)(lVar15 + 0x30);
  func_0x000103c6ffb0(lVar20,lVar16,0x112dcc478,&UNK_10d98eb80);
  func_0x000103c6ffb0(lVar14,lVar16 + lVar15,0x112dcc478,&UNK_10d98eb80);
  pcVar19 = *(code **)(lVar17 + 0x30);
  lVar5 = lVar16;
  (*pcVar19)(lVar16,1,lVar4);
  if ((int)lVar5 == 1) {
    func_0x000103c6ff70(lVar14,0x112dcc478,&UNK_10d98eb80);
    func_0x000103c6ff70(lVar20,0x112dcc478,&UNK_10d98eb80);
    lVar15 = lVar16 + lVar15;
    (*pcVar19)(lVar15,1,lVar4);
    if ((int)lVar15 != 1) {
LAB_103c6f0b0:
      func_0x000103c6ff70(lVar16,0x112dcc470,&UNK_10d98eb78);
      lVar15 = lStack_190;
      goto LAB_103c6f208;
    }
    func_0x000103c6ff70(lVar16,0x112dcc478,&UNK_10d98eb80);
  }
  else {
    func_0x000103c6ffb0(lVar16,uStack_198,0x112dcc478,&UNK_10d98eb80);
    lVar5 = lVar16 + lVar15;
    (*pcVar19)(lVar5,1,lVar4);
    pcVar19 = pcStack_1a8;
    if ((int)lVar5 == 1) {
      func_0x000103c6ff70(lVar14,0x112dcc478,&UNK_10d98eb80);
      func_0x000103c6ff70(lVar20,0x112dcc478,&UNK_10d98eb80);
      (**(code **)(lVar17 + 8))(uStack_198,lVar4);
      goto LAB_103c6f0b0;
    }
    (**(code **)(lVar17 + 0x20))(pcStack_1a8,lVar16 + lVar15,lVar4);
    uVar13 = uStack_198;
    uVar6 = uStack_198;
    func_0x000107c5fab8(uStack_198,pcVar19,lVar4,PTR___ss6MirrorV12DisplayStyleOSQsWP_11034efc0);
    pcVar18 = *(code **)(lVar17 + 8);
    (*pcVar18)(pcVar19,lVar4);
    func_0x000103c6ff70(lVar14,0x112dcc478,&UNK_10d98eb80);
    func_0x000103c6ff70(lVar20,0x112dcc478,&UNK_10d98eb80);
    (*pcVar18)(uVar13,lVar4);
    func_0x000103c6ff70(lVar16,0x112dcc478,&UNK_10d98eb80);
    lVar15 = lStack_190;
    if ((uVar6 & 1) == 0) goto LAB_103c6f208;
  }
  lVar15 = lStack_190;
  func_0x000107c606c0();
  uVar13 = *(ulong *)(lVar16 + 0x10);
  uVar11 = *(undefined8 *)(lVar16 + 0x18);
  uVar6 = *(ulong *)(lVar16 + 0x20);
  uVar1 = *(undefined8 *)(lVar16 + 0x28);
  uVar7 = uVar13;
  func_0x000107c614f0();
  func_0x000107c615f0(uVar13);
  func_0x000107c615f0(uVar6);
  uVar8 = uVar7;
  func_0x000107c60310(uVar7,uVar11);
  uVar9 = uVar6;
  func_0x000107c614f0();
  func_0x000107c60310();
  if (uVar8 != uVar9) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x103c6f670);
    (*pcVar19)();
  }
  uVar8 = uVar6;
  func_0x000107c60314(uVar6,uVar1,uVar7,uVar11);
  func_0x000107c615e8(uVar6);
  if ((uVar8 & 1) == 0) {
    func_0x000107c603e8(&lStack_110,uVar13,uVar11);
    func_0x000107c615e8(uVar13);
    func_0x000107c61574(lVar16);
    lStack_d8 = lStack_108;
    lStack_e0 = lStack_110;
    func_0x000100102924(auStack_100,auStack_d0);
    func_0x000107c6142c(lStack_d8);
    func_0x000100102924(auStack_d0,auStack_a8);
    func_0x0001000bb420(auStack_a8,&lStack_e0);
    lVar5 = lStack_1b0;
    plVar10 = &lStack_e0;
    func_0x000107c606b0(lStack_1b0,plVar10);
    func_0x000107c606c0();
    pcVar19 = *(code **)(lStack_1a0 + 8);
    (*pcVar19)(lVar5,lStack_188);
    func_0x000107c603c8();
    func_0x000107c61574(plVar10);
    func_0x000107c6049c(&lStack_e0);
    if (lStack_b8 == 0) {
      func_0x000107c61574(lVar5);
      uVar13 = 0;
    }
    else {
      lStack_1a0 = 0;
      uStack_198 = 0;
      lVar4 = 0;
      uVar12 = 1;
      pcStack_1a8 = pcVar19;
      do {
        lVar16 = lStack_d8;
        lVar15 = lStack_e0;
        lStack_110 = lStack_e0;
        lStack_108 = lStack_d8;
        func_0x000100102924(auStack_d0,auStack_100);
        if (lVar16 != 0) {
          if (lVar15 != 0x65646f63 || lVar16 != -0x1c00000000000000) {
            uVar13 = 0x65646f63;
            func_0x000107c605b8(0x65646f63,0xe400000000000000,lVar15,lVar16,0);
            if ((uVar13 & 1) == 0) {
              if ((lVar15 != 0x737574617473) || (lVar16 != -0x1a00000000000000)) {
                uVar13 = 0x737574617473;
                func_0x000107c605b8(0x737574617473,0xe600000000000000,lVar15,lVar16,0);
                if ((uVar13 & 1) == 0) {
                  if ((lVar15 != 0x6567617373656d) || (lVar16 != -0x1900000000000000)) {
                    uVar13 = 0x6567617373656d;
                    func_0x000107c605b8(0x6567617373656d,0xe700000000000000,lVar15,lVar16,0);
                    if (((uVar13 & 1) == 0) &&
                       ((lVar15 != 0x73654d726f727265 || (lVar16 != -0x13ffffff9a989e8d)))) {
                      uVar13 = 0x73654d726f727265;
                      func_0x000107c605b8(0x73654d726f727265,0xec00000065676173,lVar15,lVar16,0);
                      if ((uVar13 & 1) == 0) goto LAB_103c6f378;
                    }
                  }
                  func_0x000107c6142c(uStack_198);
                  func_0x000103c6ffb0(&lStack_110,auStack_140,0x112ece620,&UNK_10daf4310);
                  func_0x000107c6142c(uStack_138);
                  plVar10 = &lStack_170;
                  func_0x000107c6147c(plVar10,auStack_130,PTR___sypN_11034f1a8 + 8,
                                      PTR___sSSN_11034da80,6);
                  lStack_1a0 = lStack_170;
                  uStack_198 = uStack_168;
                  if ((int)plVar10 == 0) {
                    lStack_1a0 = 0;
                    uStack_198 = 0;
                  }
                  goto LAB_103c6f378;
                }
              }
              func_0x000103c6ffb0(&lStack_110,auStack_140,0x112ece620,&UNK_10daf4310);
              func_0x000107c6142c(uStack_138);
              puVar2 = PTR___sypN_11034f1a8;
              plVar10 = &lStack_170;
              func_0x000107c6147c(plVar10,auStack_130,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,
                                  6);
              if ((int)plVar10 == 0) {
                func_0x000103c6ffb0(&lStack_110,&lStack_170,0x112ece620,&UNK_10daf4310);
                func_0x000107c6142c(uStack_168);
                uVar11 = 0x112d4f4d0;
                func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
                plVar10 = &lStack_180;
                func_0x000107c6147c(plVar10,auStack_160,puVar2 + 8,uVar11,6);
                bVar3 = (int)plVar10 == 0;
                lVar4 = lStack_180;
                if (bVar3) {
                  lVar4 = 0;
                }
                uVar12 = (uint)bStack_178;
                if (bVar3) {
                  uVar12 = 1;
                }
              }
              else {
                uVar12 = 0;
                lVar4 = lStack_170;
              }
              goto LAB_103c6f378;
            }
          }
          func_0x000103c6ffb0(&lStack_110,auStack_140,0x112ece620,&UNK_10daf4310);
          func_0x000107c6142c(uStack_138);
          plVar10 = &lStack_170;
          func_0x000107c6147c(plVar10,auStack_130,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
          lVar4 = lStack_170;
          if ((uint)plVar10 == 0) {
            lVar4 = 0;
          }
          uVar12 = (uint)plVar10 ^ 1;
        }
LAB_103c6f378:
        func_0x000103c6ff70(&lStack_110,0x112ece620,&UNK_10daf4310);
        func_0x000107c6049c(&lStack_e0);
      } while (lStack_b8 != 0);
      func_0x000107c61574(lVar5);
      uVar13 = uStack_198;
      pcVar19 = pcStack_1a8;
      lVar15 = lStack_190;
      if ((uVar12 & 0xff) != 1) {
        FUN_103c6f6e0(auStack_a8);
        (*pcStack_1a8)(lStack_190,lStack_188);
        return lVar4;
      }
    }
    func_0x000107c6142c(uVar13);
    FUN_103c6f6e0(auStack_a8);
    (*pcVar19)(lVar15,lStack_188);
    return 0;
  }
  func_0x000107c615e8(uVar13);
  func_0x000107c61574(lVar16);
LAB_103c6f208:
  (**(code **)(lStack_1a0 + 8))(lVar15,lStack_188);
  return 0;
}



/* Entry: 103c6f670; end: 103c6f6df;  */

undefined8 FUN_103c6f670(undefined8 param_1)

{
  FUN_103c896d0();
  return param_1;
}



/* Entry: 103c6f6e0; end: 103c6f6ff;  */

void FUN_103c6f6e0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c6f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103c6f700; end: 103c6f883;  */

undefined8 FUN_103c6f700(undefined8 param_1,undefined8 param_2)

{
  FUN_103c899b0(param_2,param_1);
  return param_2;
}



/* Entry: 103c6f884; end: 103c6fb3f;  */

undefined1  [16] FUN_103c6f884(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar2 = 0xe200000000000000;
  uVar1 = 0x4b4f;
  switch(param_1) {
  case 1:
    uVar1 = 0x454c4c45434e4143;
    break;
  case 2:
    auVar9._8_8_ = 0xe700000000000000;
    auVar9._0_8_ = 0x4e574f4e4b4e55;
    return auVar9;
  case 3:
    auVar11._8_8_ = 0x800000010f1b2430;
    auVar11._0_8_ = 0xd000000000000010;
    return auVar11;
  case 4:
    pcVar3 = "DEADLINE_EXCEEDED";
    goto code_r0x000103c6f9e8;
  case 5:
    uVar1 = 0x4e554f465f544f4e;
    break;
  case 6:
    auVar16._8_8_ = 0xee00535453495845;
    auVar16._0_8_ = 0x5f59444145524c41;
    return auVar16;
  case 7:
    pcVar3 = "PERMISSION_DENIED";
code_r0x000103c6f9e8:
    auVar12._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar12._0_8_ = 0xd000000000000011;
    return auVar12;
  case 8:
    auVar18._8_8_ = 0x800000010f1b23d0;
    auVar18._0_8_ = 0xd000000000000012;
    return auVar18;
  case 9:
    auVar8._8_8_ = 0x800000010f1b23b0;
    auVar8._0_8_ = 0xd000000000000013;
    return auVar8;
  case 10:
    auVar17._8_8_ = 0xe700000000000000;
    auVar17._0_8_ = 0x444554524f4241;
    return auVar17;
  case 0xb:
    auVar6._8_8_ = 0xec00000045474e41;
    auVar6._0_8_ = 0x525f464f5f54554f;
    return auVar6;
  case 0xc:
    auVar7._8_8_ = 0xed00004445544e45;
    auVar7._0_8_ = 0x4d454c504d494e55;
    return auVar7;
  case 0xd:
    auVar15._8_8_ = 0xe800000000000000;
    auVar15._0_8_ = 0x4c414e5245544e49;
    return auVar15;
  case 0xe:
    auVar5._8_8_ = 0xeb00000000454c42;
    auVar5._0_8_ = 0x414c494156414e55;
    return auVar5;
  case 0xf:
    auVar10._8_8_ = 0xe900000000000053;
    auVar10._0_8_ = 0x534f4c5f41544144;
    return auVar10;
  case 0x10:
    auVar4._8_8_ = 0xef44455441434954;
    auVar4._0_8_ = 0x4e45485455414e55;
    return auVar4;
  default:
    uVar2 = 0xec00000044455a49;
    uVar1 = 0x4e474f4345524e55;
  case 0:
    auVar13._8_8_ = uVar2;
    auVar13._0_8_ = uVar1;
    return auVar13;
  }
  auVar14._8_8_ = 0xe900000000000044;
  auVar14._0_8_ = uVar1;
  return auVar14;
}



/* Entry: 103c6fb40; end: 103c6fce3;  */

undefined8 FUN_103c6fb40(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((param_1 != 0xd000000000000015) || (param_2 != 0x800000010f1b2310)) {
    uVar1 = 0xd000000000000015;
    func_0x000107c605b8(0xd000000000000015,0x800000010f1b2310,param_1,param_2,0);
    if (((uVar1 & 1) == 0) && ((param_1 != 0xd000000000000014 || (param_2 != 0x800000010f1b2330))))
    {
      uVar1 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010f1b2330,param_1,param_2,0);
      if ((((uVar1 & 1) == 0) &&
          (((uVar1 = 0x5f59444145524c41, param_1 != 0x5f59444145524c41 ||
            (param_2 != 0xed000044454e574f)) &&
           (func_0x000107c605b8(0x5f59444145524c41,0xed000044454e574f,param_1,param_2,0),
           (uVar1 & 1) == 0)))) &&
         (((uVar1 = 0xd00000000000001d, param_1 != 0xd00000000000001d ||
           (param_2 != 0x800000010f1b2350)) &&
          (func_0x000107c605b8(0xd00000000000001d,0x800000010f1b2350,param_1,param_2,0),
          (uVar1 & 1) == 0)))) {
        uVar1 = param_1 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar1 = param_2 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          func_0x000107c61434(param_2);
        }
      }
    }
  }
  return 0;
}



/* Entry: 103c6fce4; end: 103c6fd27;  */

undefined8 FUN_103c6fce4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103c7b79c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103c6fd28; end: 103c6fd43;  */

void FUN_103c6fd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c6fd44,0,0);
  return;
}



/* Entry: 103c6fd44; end: 103c6ff3f;  */

void FUN_103c6fd44(void)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_60;
  
  if (lRam0000000112ffcbf8 != -1) {
    func_0x000107c61568(0x112ffcbf8,FUN_103c6bd90);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar1 = 0;
  func_0x000107c5f168();
  func_0x000100028790();
  lVar10 = *(long *)(lVar1 + -8);
  uVar2 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar2);
  (**(code **)(lVar10 + 0x10))();
  func_0x000107c61434();
  func_0x000107c5f160();
  uVar5 = uVar7;
  func_0x000107c5ff74();
  uVar4 = uVar7;
  func_0x000107c611d4(uVar7,(uint)uVar5 & 0xff);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  if ((int)uVar4 == 0) {
    func_0x000107c6142c(uVar8);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar3 = (undefined4 *)0xc;
    func_0x000107c6158c(0xc,0xffffffffffffffff);
    uVar4 = 0x20;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar3 = 0x8220102;
    uStack_60 = uVar4;
    func_0x0001014bfa20(uVar9,uVar8,&uStack_60);
    *(undefined8 *)(puVar3 + 1) = uVar9;
    func_0x000107c6142c(uVar8);
    func_0x000107c60ea4(0x100000000,uVar7,(uint)uVar5 & 0xff,
                        "grpc.redeemGift.stub giftId: %{public}s",puVar3,0xc);
    FUN_103c6f6e0(uVar4);
    func_0x000107c61590(uVar4,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar3,0xffffffffffffffff,0xffffffffffffffff);
  }
  func_0x000107c61170(uVar7);
  (**(code **)(lVar10 + 8))(uVar2,lVar1);
  func_0x000107c615c0(uVar2);
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 9;
  uVar5 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar5 != 0) {
    FUN_103c69a9c();
    func_0x000107c61658(unaff_x22 + 0x10,&UNK_1106f1e20,uVar5);
  }
  puVar6 = *(undefined8 **)(unaff_x22 + 0x40);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 9;
                    /* WARNING: Could not recover jumptable at 0x000103c6ff24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c6ff40; end: 103c6ff4f;  */

undefined1  [16] FUN_103c6ff40(void)

{
  return ZEXT816(0x1106f1248);
}



/* Entry: 103c6ff50; end: 103c6ff6f;  */

void FUN_103c6ff50(void)

{
  func_0x000107c61168(&PTR_PTR_112ffcc68);
  return;
}



/* Entry: 103c6ff70; end: 103c7002b;  */

undefined8 FUN_103c6ff70(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c7002c; end: 103c7003b;  */

undefined1  [16] FUN_103c7002c(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x43);
  func_0x000107c5fb78(0xd000000000000041,0x800000010f1b24e0);
  uVar2 = 0x112d393f0;
  uStack_38 = uVar3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&uStack_38,&uStack_30,uVar2,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 103c7003c; end: 103c700bb;  */

void FUN_103c7003c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f168(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112ffcea0);
  func_0x000107c5f164(uVar1,0xd000000000000020,0x800000010f1b2200,0x7275507070416e49,
                      0xed00006573616863);
  return;
}



/* Entry: 103c700bc; end: 103c70143;  */

void FUN_103c700bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fb58(auStack_88,uVar1,uVar3);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,uVar2,lVar4);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 103c70144; end: 103c701ab;  */

/* WARNING: Possible PIC construction at 0x000103c70160: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c70164) */
/* WARNING: Removing unreachable block (ram,0x000103c70190) */
/* WARNING: Removing unreachable block (ram,0x000103c70168) */

void FUN_103c70144(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 103c701ac; end: 103c7022f;  */

void FUN_103c701ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_88);
  func_0x000107c5fb58(auStack_88,uVar1,uVar3);
  if (lVar4 == 0) {
    func_0x000107c60694(0);
  }
  else {
    func_0x000107c60694(1);
    func_0x000107c5fb58(auStack_88,uVar2,lVar4);
  }
  func_0x000107c606a8();
  return;
}



/* Entry: 103c70230; end: 103c7024f;  */

undefined8 FUN_103c70230(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  if (((uVar4 != *param_2) || (param_1[1] != param_2[1])) &&
     (func_0x000107c605b8(uVar4,param_1[1],*param_2,param_2[1],0), (uVar4 & 1) == 0)) {
    return 0;
  }
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      return 0;
    }
  }
  else if ((uVar3 == 0) ||
          (((uVar5 != uVar1 || (uVar2 != uVar3)) &&
           (func_0x000107c605b8(uVar5,uVar2,uVar1,uVar3,0), (uVar5 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 103c70250; end: 103c70f43;  */

void FUN_103c70250(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar15;
  code *pcVar16;
  long unaff_x20;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_c0 [24];
  undefined8 auStack_a8 [5];
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  func_0x000107c5f168();
  lVar20 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puVar17 = &stack0xfffffffffffffee0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  uVar12 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = uVar13 - extraout_x12_00;
  lVar5 = 0x112ffce80;
  func_0x0001000285a8(0x112ffce80,&UNK_10dc6b890);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12_01;
  lVar5 = 0;
  FUN_103c712f4();
  lVar18 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar19 - extraout_x12_02;
  if (param_5 == 0) {
    if (lRam0000000112ffce98 != -1) {
      func_0x000107c61568(0x112ffce98,FUN_103c7003c);
    }
    lVar5 = lVar3;
    func_0x000100028790(lVar3,0x112ffcea0);
    (**(code **)(lVar20 + 0x10))(puVar17,lVar5,lVar3);
    uVar12 = param_3;
    func_0x000107c61434();
    func_0x000107c5f160();
    uVar13 = uVar12;
    func_0x000107c5ff70();
    uVar6 = uVar12;
    func_0x000107c611d4(uVar12,(uint)uVar13 & 0xff);
    if ((int)uVar6 == 0) {
      func_0x000107c61170(uVar12);
      func_0x000107c6142c(0);
      func_0x000107c6142c(param_3);
    }
    else {
      puVar7 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar8 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar7 = 0x8200102;
      auStack_a8[0] = uVar8;
      func_0x0001014bfa20(param_2,param_3,auStack_a8);
      *(long *)(puVar7 + 1) = param_2;
      func_0x000107c6142c(0);
      func_0x000107c6142c(param_3);
      func_0x000107c60ea4(0x100000000,uVar12,(uint)uVar13 & 0xff,
                          "cache.bypass.noStorefront productId: %s",puVar7,0xc);
      func_0x000103c72d3c(uVar8);
      func_0x000107c61590(uVar8,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar7,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(uVar12);
    }
    (**(code **)(lVar20 + 8))(puVar17,lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    goto LAB_103c706c8;
  }
  func_0x000107c61428(unaff_x20 + 0x90,auStack_80,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if (*(long *)(lVar3 + 0x10) == 0) {
    (**(code **)(lVar18 + 0x38))(lVar15,1,1,lVar5);
LAB_103c705cc:
    func_0x000103c72b94(lVar15);
  }
  else {
    func_0x000107c61434(lVar3);
    lVar20 = param_2;
    uVar6 = param_3;
    FUN_103c74ec4(param_2,param_3,param_4,param_5);
    bVar1 = (uVar6 & 1) == 0;
    if (!bVar1) {
      func_0x000103c72bdc(*(long *)(lVar3 + 0x38) + *(long *)(lVar18 + 0x48) * lVar20,lVar15);
    }
    (**(code **)(lVar18 + 0x38))(lVar15,bVar1,1,lVar5);
    func_0x000107c6142c(lVar3);
    lVar3 = lVar15;
    (**(code **)(lVar18 + 0x30))(lVar15,1,lVar5);
    if ((int)lVar3 == 1) goto LAB_103c705cc;
    func_0x000103c72c70(lVar15,lVar11);
    (**(code **)(unaff_x20 + 0x70))(lVar10);
    func_0x000103c72bdc(lVar11,lVar19);
    lVar3 = lVar19;
    func_0x000107c614c4(lVar19,lVar5);
    if ((int)lVar3 == 1) {
      (**(code **)(lVar9 + 0x20))(uVar12,lVar19,lVar4);
      uVar13 = uVar12;
      func_0x000107c5ee74(uVar12,lVar10);
      if ((uVar13 & 1) != 0) {
        pcVar16 = *(code **)(lVar9 + 8);
        (*pcVar16)(uVar12,lVar4);
        (*pcVar16)(lVar10,lVar4);
        FUN_103c712b8(lVar11);
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[4] = 0;
        return;
      }
      func_0x000107c61428(unaff_x20 + 0x90,auStack_a8,0x21,0);
      FUN_103c7182c(lVar14,param_2,param_3,param_4,param_5);
      func_0x000107c614a8(auStack_a8);
      func_0x000103c72b94(lVar14);
      pcVar16 = *(code **)(lVar9 + 8);
      (*pcVar16)(uVar12,lVar4);
    }
    else {
      lVar5 = 0x112ffcdc8;
      func_0x0001000285a8(0x112ffcdc8,&UNK_10dc6b7d0);
      iVar2 = *(int *)(lVar5 + 0x30);
      func_0x000103c72d5c(lVar19,auStack_a8);
      (**(code **)(lVar9 + 0x20))(uVar13,lVar19 + iVar2,lVar4);
      uVar12 = uVar13;
      func_0x000107c5ee74(uVar13,lVar10);
      if ((uVar12 & 1) != 0) {
        pcVar16 = *(code **)(lVar9 + 8);
        (*pcVar16)(uVar13,lVar4);
        (*pcVar16)(lVar10,lVar4);
        FUN_103c712b8(lVar11);
        func_0x000103c72d5c(auStack_a8,param_1);
        return;
      }
      func_0x000107c61428(unaff_x20 + 0x90,auStack_c0,0x21,0);
      FUN_103c7182c(lVar14,param_2,param_3,param_4,param_5);
      func_0x000107c614a8(auStack_c0);
      func_0x000103c72b94(lVar14);
      pcVar16 = *(code **)(lVar9 + 8);
      (*pcVar16)(uVar13,lVar4);
      func_0x000103c72d3c(auStack_a8);
    }
    (*pcVar16)(lVar10,lVar4);
    FUN_103c712b8(lVar11);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_103c706c8:
  param_1[4] = 0;
  param_1[3] = 1;
  return;
}



/* Entry: 103c70f44; end: 103c70f8f;  */

void FUN_103c70f44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 103c70f90; end: 103c71097;  */

long * FUN_103c70f90(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar3 = (int)plVar4 != 1;
    if (bVar3) {
      lVar5 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar5;
      (*(code *)**(undefined8 **)(lVar5 + -8))(param_1,param_2);
      lVar5 = 0x112ffcdc8;
      func_0x0001000285a8(0x112ffcdc8,&UNK_10dc6b7d0);
      iVar2 = *(int *)(lVar5 + 0x30);
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar5);
    }
    else {
      lVar5 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    }
    func_0x000107c6159c(param_1,param_3,!bVar3);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c71098; end: 103c710fb;  */

void FUN_103c71098(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c614c4();
  if ((int)lVar1 != 1) {
    FUN_103c72d3c(param_1);
    lVar1 = 0x112ffcdc8;
    func_0x0001000285a8(0x112ffcdc8,&UNK_10dc6b7d0);
    param_1 = param_1 + *(int *)(lVar1 + 0x30);
  }
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000103c710f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 103c710fc; end: 103c712b7;  */

long FUN_103c710fc(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar2 = (int)lVar3 != 1;
  if (bVar2) {
    lVar3 = *(long *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(long *)(param_1 + 0x18) = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,param_2);
    lVar3 = 0x112ffcdc8;
    func_0x0001000285a8(0x112ffcdc8,&UNK_10dc6b7d0);
    iVar1 = *(int *)(lVar3 + 0x30);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar3);
  }
  else {
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  }
  func_0x000107c6159c(param_1,param_3,!bVar2);
  return param_1;
}



/* Entry: 103c712b8; end: 103c712f3;  */

undefined8 FUN_103c712b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103c712f4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103c712f4; end: 103c7132b;  */

void FUN_103c712f4(undefined8 param_1)

{
  if (lRam0000000112ffce40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7bd37c);
  return;
}



/* Entry: 103c7132c; end: 103c714c3;  */

undefined8 * FUN_103c7132c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar2 = (int)puVar3 != 1;
  if (bVar2) {
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    param_1[4] = param_2[4];
    lVar4 = 0x112ffcdc8;
    func_0x0001000285a8(0x112ffcdc8,&UNK_10dc6b7d0);
    iVar1 = *(int *)(lVar4 + 0x30);
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  }
  else {
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  }
  func_0x000107c6159c(param_1,param_3,!bVar2);
  return param_1;
}



/* Entry: 103c714c4; end: 103c714f3;  */

void FUN_103c714c4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103c714cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103c714f4; end: 103c71577;  */

void FUN_103c714f4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_60 [32];
  undefined1 *puStack_40;
  long lStack_38;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61504(auStack_60,&UNK_10dc6b7e0,lVar1);
    puStack_40 = auStack_60;
    lStack_38 = lVar1;
    func_0x000107c61528(param_1,0x100,2,&puStack_40);
  }
  return;
}



/* Entry: 103c71578; end: 103c71607;  */

long FUN_103c71578(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c71608; end: 103c71673;  */

undefined8 * FUN_103c71608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103c71674; end: 103c716b7;  */

undefined8 * FUN_103c71674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103c716b8; end: 103c71753;  */

int FUN_103c716b8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103c71754; end: 103c71793;  */

void FUN_103c71754(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffce78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6b7fc;
  func_0x000107c61520(&UNK_10dc6b7fc,&UNK_1106f12c8);
  puRam0000000112ffce78 = puVar1;
  return;
}



/* Entry: 103c71794; end: 103c7179f;  */

void FUN_103c71794(void)

{
  return;
}



/* Entry: 103c717a0; end: 103c7182b;  */

void FUN_103c717a0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_7 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_7 + 0x30) + param_1 * 0x20);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  lVar4 = *(long *)(param_7 + 0x38);
  lVar3 = 0;
  FUN_103c712f4();
  func_0x000103c72c70(param_6,lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1);
  if (!SCARRY8(*(long *)(param_7 + 0x10),1)) {
    *(long *)(param_7 + 0x10) = *(long *)(param_7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103c7182c);
  (*pcVar2)();
}



/* Entry: 103c7182c; end: 103c7195f;  */

void FUN_103c7182c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *unaff_x20;
  func_0x000107c61434(lVar5);
  FUN_103c74ec4(param_2,param_3,param_4,param_5);
  func_0x000107c6142c(lVar5);
  if ((param_3 & 1) == 0) {
    lVar5 = 0;
    FUN_103c712f4();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000103c71e4c();
    }
    lVar5 = *(long *)(lVar2 + 0x30) + param_2 * 0x20;
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    func_0x000107c6142c(*(undefined8 *)(lVar5 + 8));
    func_0x000107c6142c(uVar3);
    lVar4 = *(long *)(lVar2 + 0x38);
    lVar5 = 0;
    FUN_103c712f4();
    lVar6 = *(long *)(lVar5 + -8);
    func_0x000103c72c70(lVar4 + *(long *)(lVar6 + 0x48) * param_2,param_1);
    FUN_103c71a40(param_2,lVar2);
    *unaff_x20 = lVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000103c7194c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar5);
  return;
}



/* Entry: 103c71960; end: 103c71a3f;  */

undefined8 FUN_103c71960(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  FUN_103c74ec4(param_1,param_2,param_3,param_4);
  func_0x000107c6142c(lVar4);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar4 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x000103c72060();
    }
    lVar1 = *(long *)(lVar4 + 0x30) + param_1 * 0x20;
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c6142c(*(undefined8 *)(lVar1 + 8));
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
    func_0x000103c71c54(param_1,lVar4);
    *unaff_x20 = lVar4;
  }
  return uVar3;
}



/* Entry: 103c71a40; end: 103c72af3;  */

void FUN_103c71a40(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar14 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar13 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar13 = uVar13 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x20);
      uVar15 = *puVar2;
      uVar17 = puVar2[1];
      uVar16 = puVar2[2];
      lVar12 = puVar2[3];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(lVar12);
      func_0x000107c61434(uVar17);
      func_0x000107c5fb58(auStack_a8,uVar15,uVar17);
      if (lVar12 == 0) {
        puVar5 = (undefined1 *)0x0;
        func_0x000107c60694();
      }
      else {
        func_0x000107c60694(1);
        puVar5 = auStack_a8;
        func_0x000107c5fb58(puVar5,uVar16,lVar12);
      }
      func_0x000107c606a8();
      func_0x000107c6142c(lVar12);
      func_0x000107c6142c(uVar17);
      uVar8 = (ulong)puVar5 & uVar7;
      if ((long)param_1 < (long)uVar13) {
        if (uVar8 < uVar13) {
LAB_103c71b74:
          if ((long)param_1 < (long)uVar8) goto LAB_103c71abc;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x20);
        if ((param_1 != uVar14) || (puVar3 + 4 <= puVar2)) {
          uVar15 = *puVar3;
          uVar17 = puVar3[3];
          uVar16 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar15;
          puVar2[3] = uVar17;
          puVar2[2] = uVar16;
        }
        lVar12 = *(long *)(param_2 + 0x38);
        lVar6 = 0;
        FUN_103c712f4();
        lVar11 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
        lVar9 = lVar11 * param_1;
        uVar8 = lVar12 + lVar9;
        lVar10 = lVar11 * uVar14;
        lVar12 = lVar12 + lVar10;
        param_1 = uVar14;
        if (lVar9 < lVar10 || (ulong)(lVar12 + lVar11) <= uVar8) {
          func_0x000107c61414(uVar8,lVar12,1,lVar6);
        }
        else if (lVar9 - lVar10 != 0) {
          func_0x000107c61410(uVar8,lVar12,1);
        }
      }
      else if (uVar13 <= uVar8) goto LAB_103c71b74;
LAB_103c71abc:
      uVar14 = uVar14 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x103c71c54);
  (*pcVar4)();
}



/* Entry: 103c72af4; end: 103c72b93;  */

undefined8
FUN_103c72af4(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  if (param_4 == 0) {
    if (param_8 != 0) {
      return 0;
    }
  }
  else if ((param_8 == 0) ||
          (((param_3 != param_7 || (param_4 != param_8)) &&
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) == 0)))) {
    return 0;
  }
  return 1;
}



/* Entry: 103c72b94; end: 103c72d3b;  */

undefined8 FUN_103c72b94(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ffce80;
  func_0x0001000285a8(0x112ffce80,&UNK_10dc6b890);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103c72d3c; end: 103c72d73;  */

void FUN_103c72d3c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c72d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103c72d74; end: 103c72dbf;  */

void FUN_103c72d74(undefined8 param_1)

{
  func_0x0001000285a8(0x112ffceb8,&UNK_10dc6b8b0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103c72e84,param_1);
  return;
}



/* Entry: 103c72dc0; end: 103c72e83;  */

void FUN_103c72dc0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_2;
  FUN_103c7535c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c61474(lVar2);
  lVar3 = 0;
  func_0x000103c70f70();
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103c7506c();
  *(undefined **)(lVar3 + 0x90) = puVar4;
  *(undefined8 *)(lVar3 + 0x70) = 0x103c7024c;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0x40f5180000000000;
  *(undefined8 *)(lVar3 + 0x80) = 0x40ac200000000000;
  *(long *)(lVar2 + 0x78) = lVar3;
  func_0x000103c75210();
  *(undefined **)(lVar2 + 0x80) = puVar5;
  *(long *)(lVar2 + 0x70) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106f1328;
  *param_1 = lVar2;
  return;
}



/* Entry: 103c72e84; end: 103c72e8b;  */

void FUN_103c72e84(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_103c7535c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c6157c();
  func_0x000107c61474(lVar2);
  lVar3 = 0;
  func_0x000103c70f70();
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103c7506c();
  *(undefined **)(lVar3 + 0x90) = puVar4;
  *(undefined8 *)(lVar3 + 0x70) = 0x103c7024c;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x88) = 0x40f5180000000000;
  *(undefined8 *)(lVar3 + 0x80) = 0x40ac200000000000;
  *(long *)(lVar2 + 0x78) = lVar3;
  func_0x000103c75210();
  *(undefined **)(lVar2 + 0x80) = puVar5;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106f1328;
  *param_1 = lVar2;
  return;
}



/* Entry: 103c72e8c; end: 103c72f27;  */

long FUN_103c72e8c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  lVar1 = 0;
  func_0x000103c70f70();
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000103c7506c();
  *(undefined **)(lVar1 + 0x90) = puVar2;
  *(undefined8 *)(lVar1 + 0x70) = 0x103c7024c;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0x40f5180000000000;
  *(undefined8 *)(lVar1 + 0x80) = 0x40ac200000000000;
  *(long *)(unaff_x20 + 0x78) = lVar1;
  func_0x000103c75210();
  *(undefined **)(unaff_x20 + 0x80) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  return unaff_x20;
}



/* Entry: 103c72f28; end: 103c72fa7;  */

void FUN_103c72f28(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f168(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112ffcec8);
  func_0x000107c5f164(uVar1,0xd000000000000020,0x800000010f1b2200,0x7275507070416e49,
                      0xed00006573616863);
  return;
}



/* Entry: 103c72fa8; end: 103c72fc3;  */

void FUN_103c72fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c72fc4);
  return;
}



/* Entry: 103c72fc4; end: 103c73053;  */

void FUN_103c72fc4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  FUN_103c7b670();
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103c73054;
                    /* WARNING: Could not recover jumptable at 0x000103c73050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}


