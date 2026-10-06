/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b70104; end: 101b701a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101b70104(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  undefined1 auStack_48 [40];
  
  uVar2 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112fcd498);
  FUN_101b6dd08(param_1,auStack_48);
  func_0x000101b6c42c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  uVar1 = uVar2;
  FUN_101b6fd3c();
  func_0x000107c61170(uVar2);
  auVar3._8_8_ = &PTR_DAT_11044ce10;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101b701a8; end: 101b7042f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101b701a8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 8) + _DAT_112fcd498);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001f,0x800000010f000c60,
                        "LegacyMapServiceImplementation/LegacyMapServiceImplementation.swift",0x43,2
                        ,0x39,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70430);
    (*pcVar1)();
  }
  uVar3 = 0;
  FUN_101b68354(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    func_0x000101b708b4(0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c4c440(uVar6);
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c614e8(uVar5);
    func_0x000107c61174(lVar2);
    func_0x000107c610f8(uVar5);
    func_0x000107c469c4(0,0,0x4070000000000000,0x4070000000000000,0x4032000000000000);
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(uVar7);
    puVar8 = PTR_PTR_1126c63b8;
    func_0x000107c61168(PTR_PTR_1126c63b8);
    func_0x000107c5e8dc();
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61174(uVar3);
    func_0x000107c5af88(puVar9);
    func_0x000107c61180();
    lVar10 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c4b8d8();
    func_0x000107c61180();
    lVar4 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar4 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = lVar4;
      func_0x000107c4b88c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c49684(uVar5);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar10);
    FUN_101b6ca80(uVar5,uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b703e4);
  (*pcVar1)();
}



/* Entry: 101b70430; end: 101b70467;  */

void FUN_101b70430(void)

{
  FUN_101b701a8();
  return;
}



/* Entry: 101b70468; end: 101b70477;  */

void FUN_101b70468(void)

{
  return;
}



/* Entry: 101b70478; end: 101b7048b;  */

void FUN_101b70478(void)

{
  func_0x000107c5f464();
  return;
}



/* Entry: 101b7048c; end: 101b70497;  */

void FUN_101b7048c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb63f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE21_overrideSizeThatFits_2in6uiViewySo6CGSizeVz_AA09_ProposedF0V0C4TypeQztF_110348eb0
  )();
  return;
}



/* Entry: 101b70498; end: 101b704ab;  */

void FUN_101b70498(void)

{
  func_0x000107c5f46c();
  return;
}



/* Entry: 101b704ac; end: 101b7054b;  */

void FUN_101b704ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_101b70874();
                    /* WARNING: Could not recover jumptable at 0x00010bdb641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE9_makeView4view6inputsAA01_F7OutputsVAA11_GraphValueVyxG_AA01_F6InputsVtFZ_110348ec8
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 101b7054c; end: 101b7054f;  */

void FUN_101b7054c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb68fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1103494d8)();
  return;
}



/* Entry: 101b70550; end: 101b70573;  */

void FUN_101b70550(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_101b70874();
  func_0x000107c5f480(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70574);
  (*pcVar1)();
}



/* Entry: 101b70574; end: 101b705b3;  */

void FUN_101b70574(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e05bd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d8f70;
  func_0x000107c61520(&UNK_10d9d8f70,&UNK_11044d0f0);
  puRam0000000112e05bd8 = puVar1;
  return;
}



/* Entry: 101b705b4; end: 101b705c3;  */

undefined1  [16] FUN_101b705b4(void)

{
  return ZEXT816(0x11044d078);
}



/* Entry: 101b705c4; end: 101b705e3;  */

void FUN_101b705c4(void)

{
  func_0x000107c61168(&PTR_PTR_112e05c20);
  return;
}



/* Entry: 101b705e4; end: 101b7064f;  */

long FUN_101b705e4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b70650; end: 101b706bb;  */

undefined8 * FUN_101b70650(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  func_0x000107c6157c();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  return param_1;
}



/* Entry: 101b706bc; end: 101b7075f;  */

undefined8 * FUN_101b706bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101b70760; end: 101b707c3;  */

undefined8 * FUN_101b70760(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101b707c4; end: 101b70873;  */

int FUN_101b707c4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b70874; end: 101b708f7;  */

void FUN_101b70874(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e05c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d8ee8;
  func_0x000107c61520(&UNK_10d9d8ee8,&UNK_11044d0f0);
  puRam0000000112e05c98 = puVar1;
  return;
}



/* Entry: 101b708f8; end: 101b70c87;  */

void FUN_101b708f8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = param_3;
  func_0x000107c44c24();
  uVar15 = 0;
  if ((int)lVar4 != 0) {
    lVar4 = param_3;
    func_0x000107c5df8c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar6 = lVar4;
      func_0x000107c5b6a0();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c7c);
        (*pcVar1)();
      }
      func_0x000107c4aad8();
      uStack_78 = param_2;
      func_0x000107c61170(lVar6);
      lVar6 = lVar4;
      func_0x000107c5b6a0();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c80);
        (*pcVar1)();
      }
      func_0x000107c4b6f0();
      uVar14 = uStack_78;
      func_0x000107c61170(lVar6);
      lVar6 = lVar4;
      func_0x000107c4d76c();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c84);
        (*pcVar1)();
      }
      func_0x000107c4aad8();
      uVar13 = uVar14;
      func_0x000107c61170(lVar6);
      lVar6 = lVar4;
      func_0x000107c4d76c();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c88);
        (*pcVar1)();
      }
      func_0x000107c4b6f0();
      uVar15 = uVar13;
      func_0x000107c61170(lVar6);
      func_0x000107c5ea10(lVar4);
      func_0x000107c61170(lVar4);
      uVar10 = 0;
      uStack_80 = param_2;
      goto LAB_101b70a24;
    }
  }
  uVar14 = 0;
  uVar13 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar10 = 1;
LAB_101b70a24:
  lVar4 = param_3;
  uVar8 = uVar14;
  func_0x000107c44c2c();
  uVar12 = (uint)uVar8;
  if ((int)lVar4 == 0) {
    uVar7 = 0;
    uVar11 = 1;
  }
  else {
    lVar4 = param_3;
    func_0x000107c5e16c();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c58);
      (*pcVar1)();
    }
    func_0x000107c5c7c4();
    func_0x000107c61170(lVar4);
    lVar4 = param_3;
    func_0x000107c5e16c();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c5c);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c4007c();
    func_0x000107c61170(lVar4);
    uVar11 = 0;
    uVar7 = (ulong)uVar12 | lVar6 << 0x20;
  }
  lVar4 = param_3;
  func_0x000107c44bb4();
  if ((int)lVar4 == 0) {
    lVar4 = 0;
    uVar5 = 0;
    uStack_a0 = 0;
    uVar8 = param_4;
  }
  else {
    lVar4 = param_3;
    func_0x000107c5ca8c();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c60);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c44fd8();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c64);
      (*pcVar1)();
    }
    lVar4 = lVar6;
    func_0x000107c5faec();
    uVar8 = param_4;
    func_0x000107c61170(lVar6);
    lVar6 = param_3;
    func_0x000107c5ca8c();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c6c);
      (*pcVar1)();
    }
    lVar3 = lVar6;
    func_0x000107c4db18();
    uStack_a0 = (undefined4)lVar3;
    func_0x000107c61170(lVar6);
    uVar5 = param_4;
  }
  lVar6 = param_3;
  func_0x000107c4494c();
  if ((int)lVar6 == 0) {
    lVar6 = 0;
    uVar8 = 0;
    lVar3 = 0;
    uVar9 = 0;
  }
  else {
    lVar6 = param_3;
    func_0x000107c4b848();
    func_0x000107c61180();
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c68);
      (*pcVar1)();
    }
    lVar3 = lVar6;
    func_0x000107c4b850();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c70);
      (*pcVar1)();
    }
    lVar6 = lVar3;
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c61170(lVar3);
    func_0x000107c4b848();
    func_0x000107c61180();
    if (param_3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c74);
      (*pcVar1)();
    }
    lVar2 = param_3;
    func_0x000107c4b84c();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b70c78);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uVar13;
  param_1[2] = uVar14;
  param_1[4] = uVar15;
  *(undefined1 *)(param_1 + 5) = uVar10;
  *(ulong *)((long)param_1 + 0x2c) = uVar7;
  *(undefined1 *)((long)param_1 + 0x34) = uVar11;
  param_1[7] = lVar4;
  param_1[8] = uVar5;
  *(undefined4 *)(param_1 + 9) = uStack_a0;
  param_1[10] = lVar6;
  param_1[0xb] = uVar8;
  param_1[0xc] = lVar3;
  param_1[0xd] = uVar9;
  return;
}



/* Entry: 101b70c88; end: 101b70deb;  */

void FUN_101b70c88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e05ca8,&UNK_10d9d8fc0);
  puVar1 = &UNK_11044d258;
  func_0x000107c613fc(&UNK_11044d258,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x101b70d08,puVar1);
  return;
}



/* Entry: 101b70dec; end: 101b70e63; -[_TtC35MapArrivalNotificationsBillboardFHP51MapArrivalNotificationsBillboardFHPUIConfigProvider canHandleCampaignId:] */

uint FUN_101b70dec(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == -0x2fffffffffffffd4) && (param_2 == -0x7ffffffef0fff350)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 101b70e64; end: 101b7119b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b70e64(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar2 = uStack_58;
  uVar1 = uStack_58;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    uVar1 = uVar2;
    func_0x000107c3e544();
    func_0x000107c61180();
    if (uVar1 == 0) {
      func_0x000107c615e8(uVar2);
    }
    else {
      uVar3 = uVar1;
      func_0x000107c5faec();
      func_0x000107c615e8(uVar2);
      func_0x000107c61170(uVar1);
      uVar2 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar2 = param_2 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) goto LAB_101b70f60;
      func_0x000107c6142c(param_2);
    }
  }
  uVar3 = 0xd000000000000012;
  param_2 = 0x800000010f000d40;
LAB_101b70f60:
  uVar2 = param_2;
  func_0x000107c5fadc(uVar3,param_2);
  func_0x000100083b20(&uStack_58);
  lVar4 = *(long *)(uStack_58 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(uStack_58);
  lVar5 = lVar4;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 == 0) {
    lVar5 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
  }
  puVar6 = PTR_PTR_1126aeed8;
  func_0x000107c61168();
  uVar7 = 0x3235343339303032;
  func_0x000107c5fadc(0x3235343339303032,0xe800000000000000);
  func_0x000107c3ea30();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(param_2);
  puVar8 = PTR_PTR_1126aed90;
  func_0x000107c610f8();
  uVar7 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f000cb0);
  func_0x000107c45cc4();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  lVar5 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uVar7 = 0;
  func_0x000101b711d0(0,0x112d38dc8,&PTR_PTR_1126aed90);
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  *(undefined **)(lVar5 + 0x20) = puVar8;
  func_0x000101b711d0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61174(puVar8);
  func_0x000107c600f0(lVar5);
  func_0x000107c451b0(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar5);
  return puVar6;
}



/* Entry: 101b7119c; end: 101b7120f; -[_TtC35MapArrivalNotificationsBillboardFHP51MapArrivalNotificationsBillboardFHPUIConfigProvider configs] */

void FUN_101b7119c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b70e64();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b71210; end: 101b71243;  */

void FUN_101b71210(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b71244; end: 101b7127b; -[_TtC35MapArrivalNotificationsBillboardFHP51MapArrivalNotificationsBillboardFHPUIConfigProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b71260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b71264) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b71244(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e05cb8));
  return;
}



/* Entry: 101b7127c; end: 101b712c7;  */

undefined ** FUN_101b7127c(void)

{
  return &PTR_DAT_112e1ed90;
}



/* Entry: 101b712c8; end: 101b712e7;  */

void FUN_101b712c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127faa68);
  return;
}



/* Entry: 101b712e8; end: 101b7154f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101b712e8(ulong param_1)

{
  ulong uVar1;
  double *pdVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 unaff_x20;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  undefined *apuStack_90 [3];
  undefined8 uStack_78;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  func_0x000107c61174();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b7152c);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar10;
        FUN_101b71550(uVar10,param_1);
      }
      uVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b71528);
        (*pcVar3)();
      }
      puVar7 = PTR_PTR_1126a8b38;
      func_0x000107c610f8();
      func_0x000107c453e4();
      pdVar2 = (double *)(uVar4 + _DAT_112fcd1d8);
      dVar11 = *pdVar2;
      func_0x000107c61174();
      func_0x000107c55ab8((float)dVar11);
      func_0x000107c55fc4((float)pdVar2[1],puVar7);
      func_0x000107c61170(puVar7);
      uVar5 = 0;
      FUN_101b716f8();
      uStack_78 = uVar5;
      func_0x000107c61170(uVar4);
      puVar6 = puVar8;
      apuStack_90[0] = puVar7;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x000100f6a040(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar4 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x000100f6a040(puVar8,uVar4 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
      func_0x000100102924(apuStack_90,puVar8 + uVar4 * 0x20 + 0x20);
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar9);
  }
  func_0x000107c6142c(param_1);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = puVar8;
  func_0x000107c5fc48(puVar8,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar8);
  func_0x000107c45788(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c56510(unaff_x20);
  func_0x000107c61170(puVar7);
  func_0x000107c53624(unaff_x20);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 101b71550; end: 101b716f7;  */

ulong FUN_101b71550(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b71624);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b71628);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103a2a260(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = 0;
    func_0x000103a2a260(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x70657473746f6f46,0xee0079726f6d654d);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b716f8);
  (*pcVar2)();
}



/* Entry: 101b716f8; end: 101b7173b;  */

void FUN_101b716f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e05d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8b38;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e05d28 = puVar1;
  return;
}



/* Entry: 101b7173c; end: 101b7198f;  */

undefined * FUN_101b7173c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined *)0x0;
  if (param_1 != 0) {
    if (param_2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR_PTR_1126ae728;
      func_0x000107c61168(PTR_PTR_1126ae728);
      func_0x000107c615f0(param_1);
      func_0x000107c615f0(param_2);
      func_0x000107c3edf4(puVar1);
      func_0x000107c61180();
      uVar7 = 0x800000010ef34920;
      uVar2 = 0xd000000000000014;
      func_0x000107c5fadc(0xd000000000000014,0x800000010ef34920);
      puVar6 = puVar1;
      func_0x000107c545b8(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar6);
      func_0x000107c57f3c(puVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c59d5c(puVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c5343c(puVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      puVar6 = PTR_PTR_1126b0380;
      func_0x000107c61168();
      func_0x000107c5d8e4();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar7);
      }
      puVar3 = puVar1;
      func_0x000107c5a2ec(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c53310(puVar1);
      func_0x000107c61180();
      func_0x000107c61170();
      uVar2 = 0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010f000d60);
      lVar4 = param_2;
      func_0x000107c4e60c(param_2);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      uVar2 = 0xd00000000000001b;
      func_0x000107c5fadc(0xd00000000000001b,0x800000010f000d80);
      lVar5 = param_1;
      func_0x000107c40a28(param_1);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      puVar6 = PTR_PTR_1126a8b40;
      func_0x000107c610f8(PTR_PTR_1126a8b40);
      func_0x000107c49088();
      func_0x000107c615e8(param_2);
      func_0x000107c615e8(param_1);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(lVar5);
    }
  }
  return puVar6;
}



/* Entry: 101b71990; end: 101b720f7;  */

void FUN_101b71990(long param_1,undefined *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  
  uVar15 = (ulong)param_2 >> 0x3e;
  if (uVar15 == 0) {
    puVar21 = *(undefined **)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar21 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      puVar21 = param_2;
    }
    func_0x000107c60480();
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar4;
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720e4);
    (*pcVar5)();
  }
  lVar20 = 0;
  uVar13 = 0;
  while( true ) {
    bVar6 = (long)puVar21 <= (long)uVar13;
    if (param_1 < 1) {
      bVar6 = (long)uVar13 <= (long)puVar21;
    }
    if (bVar6) break;
    bVar6 = SCARRY8(uVar13,param_1);
    uVar1 = uVar13 + param_1;
    uVar13 = (long)uVar1 >> 0x3f ^ 0x8000000000000000;
    if (!bVar6) {
      uVar13 = uVar1;
    }
    bVar6 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b71a14);
      (*pcVar5)();
    }
  }
  FUN_101b72ec0(0,lVar20,0);
  if (lVar20 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    if (uVar15 == 0) {
      puStack_a0 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
      puStack_98 = puStack_a0;
      puStack_90 = puStack_a0;
    }
    else {
      puStack_a0 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
      if (((ulong)param_2 & 0x8000000000000000) != 0) {
        puStack_a0 = param_2;
      }
      puStack_90 = puStack_a0;
      func_0x000107c60480();
      puStack_98 = puStack_a0;
      func_0x000107c60480();
      func_0x000107c60480();
    }
    puVar14 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    lVar17 = 0;
    puVar2 = puVar14;
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      puVar2 = param_2;
    }
    puVar10 = (undefined *)0x0;
    do {
      bVar6 = (long)puVar21 <= (long)puVar10;
      if (param_1 < 1) {
        bVar6 = (long)puVar10 <= (long)puVar21;
      }
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b72090);
        (*pcVar5)();
      }
      puVar22 = puVar10 + param_1;
      if (SCARRY8((long)puVar10,param_1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b72094);
        (*pcVar5)();
      }
      puVar9 = puStack_90;
      if ((long)puVar22 <= (long)puStack_90) {
        puVar9 = puVar22;
      }
      if ((long)puVar9 < (long)puVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b72098);
        (*pcVar5)();
      }
      if ((long)puStack_98 < (long)puVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b7209c);
        (*pcVar5)();
      }
      if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720a0);
        (*pcVar5)();
      }
      if ((long)puStack_a0 < (long)puVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720a4);
        (*pcVar5)();
      }
      if ((((ulong)param_2 & 0xc000000000000001) == 0) || (puVar10 == puVar9)) {
        func_0x000107c61434();
        if (uVar15 != 0) goto LAB_101b71f40;
LAB_101b71e9c:
        param_4 = (long)puVar9 << 1 | 1;
        puVar19 = (undefined *)((ulong)puVar9 & 0x7fffffffffffffff);
        puVar9 = puVar14 + 0x20;
        puVar12 = puVar10;
        puVar10 = puVar14;
LAB_101b71eb4:
        uVar7 = 0;
        func_0x000107c605fc(0);
        puVar8 = puVar10;
        func_0x000107c615f4(puVar10,2);
        func_0x000107c61480();
        if (puVar8 == (undefined *)0x0) {
          func_0x000107c615e8(puVar10);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        lVar18 = *(long *)(puVar8 + 0x10);
        func_0x000107c61574();
        lVar3 = (long)puVar19 - (long)puVar12;
        if (SBORROW8((long)puVar19,(long)puVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720c0);
          (*pcVar5)();
        }
        if (lVar18 != lVar3) {
          puVar16 = puVar10;
          func_0x000107c615e8();
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          goto joined_r0x000101b71f70;
        }
        puVar9 = puVar10;
        func_0x000107c61480(puVar10,uVar7);
        func_0x000107c615e8(puVar10);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar9 == (undefined *)0x0) goto LAB_101b72024;
      }
      else {
        uVar7 = 0;
        func_0x000103a2a260(0);
        func_0x000107c61434(param_2);
        puVar19 = puVar10;
        do {
          puVar12 = puVar19 + 1;
          func_0x000107c60318(puVar19,param_2,uVar7);
          puVar19 = puVar12;
        } while (puVar9 != puVar12);
        if (uVar15 == 0) goto LAB_101b71e9c;
LAB_101b71f40:
        func_0x000107c6142c(param_2);
        puVar12 = puVar2;
        func_0x000107c60484();
        puVar19 = (undefined *)(param_4 >> 1);
        if ((param_4 & 1) != 0) goto LAB_101b71eb4;
        lVar3 = (long)puVar19 - (long)puVar12;
        puVar16 = puVar10;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (SBORROW8((long)puVar19,(long)puVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720bc);
          (*pcVar5)();
        }
joined_r0x000101b71f70:
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
        if (lVar3 != 0) {
          if (0 < lVar3) {
            FUN_101b7300c();
            func_0x000107c613fc();
            puVar11 = puVar16;
            func_0x000107c610a4();
            puVar8 = puVar11 + -0x19;
            if (0x1f < (long)puVar11) {
              puVar8 = puVar11 + -0x20;
            }
            *(long *)(puVar16 + 0x10) = lVar3;
            *(ulong *)(puVar16 + 0x18) = ((long)puVar8 >> 3) << 1 | 1;
            puVar8 = puVar16;
          }
          if (puVar12 == puVar19) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720f4);
            (*pcVar5)();
          }
          param_4 = 0;
          func_0x000103a2a260();
          func_0x000107c6140c(puVar8 + 0x20,puVar9 + (long)puVar12 * 8,lVar3);
        }
LAB_101b72024:
        func_0x000107c615e8(puVar10);
        puVar9 = puVar8;
      }
      uVar13 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
        FUN_101b72ec0(1 < *(ulong *)(puVar4 + 0x18),uVar13 + 1,1);
      }
      lVar17 = lVar17 + 1;
      *(ulong *)(puVar4 + 0x10) = uVar13 + 1;
      *(undefined **)(puVar4 + uVar13 * 8 + 0x20) = puVar9;
      puVar10 = puVar22;
    } while (lVar20 != lVar17);
  }
  bVar6 = (long)puVar21 <= (long)puVar22;
  if (param_1 < 1) {
    bVar6 = (long)puVar22 <= (long)puVar21;
  }
  if (!bVar6) {
    puVar14 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    puVar2 = puVar14;
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      puVar2 = param_2;
    }
    do {
      puVar10 = puVar22 + param_1;
      if (SCARRY8((long)puVar22,param_1)) {
        if (param_1 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720ec);
          (*pcVar5)();
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720f0);
        (*pcVar5)();
      }
      if (uVar15 == 0) {
        puVar19 = *(undefined **)(puVar14 + 0x10);
        puVar9 = puVar19;
        if ((long)puVar10 <= (long)puVar19) {
          puVar9 = puVar10;
        }
        if ((long)puVar9 < (long)puVar22) {
LAB_101b720a4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720a8);
          (*pcVar5)();
        }
      }
      else {
        puVar9 = puVar2;
        func_0x000107c60480();
        if ((long)puVar10 <= (long)puVar9) {
          puVar9 = puVar10;
        }
        if ((long)puVar9 < (long)puVar22) goto LAB_101b720a4;
        puVar19 = puVar2;
        func_0x000107c60480();
      }
      if ((long)puVar19 < (long)puVar22) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720ac);
        (*pcVar5)();
      }
      if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720b0);
        (*pcVar5)();
      }
      if (uVar15 == 0) {
        puVar19 = *(undefined **)(puVar14 + 0x10);
      }
      else {
        puVar19 = puVar2;
        func_0x000107c60480();
      }
      if ((long)puVar19 < (long)puVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720b4);
        (*pcVar5)();
      }
      if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720b8);
        (*pcVar5)();
      }
      if ((((ulong)param_2 & 0xc000000000000001) == 0) || (puVar22 == puVar9)) {
        func_0x000107c61434();
        if (uVar15 != 0) goto LAB_101b71c34;
LAB_101b71b8c:
        uVar13 = (long)puVar9 << 1;
        puVar19 = puVar14;
        puVar9 = puVar14 + 0x20;
        puVar12 = puVar22;
LAB_101b71ba0:
        uVar7 = 0;
        func_0x000107c605fc(0);
        puVar22 = puVar19;
        func_0x000107c615f4(puVar19,2);
        func_0x000107c61480();
        if (puVar22 == (undefined *)0x0) {
          func_0x000107c615e8(puVar19);
          puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        lVar17 = *(long *)(puVar22 + 0x10);
        func_0x000107c61574();
        puVar16 = (undefined *)(uVar13 >> 1);
        lVar20 = (long)puVar16 - (long)puVar12;
        if (SBORROW8((long)puVar16,(long)puVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720cc);
          (*pcVar5)();
        }
        if (lVar17 != lVar20) {
          puVar22 = puVar19;
          func_0x000107c615e8();
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
          goto joined_r0x000101b71d08;
        }
        puVar22 = puVar19;
        func_0x000107c61480(puVar19,uVar7);
        func_0x000107c615e8(puVar19);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar22 == (undefined *)0x0) goto LAB_101b71d1c;
      }
      else {
        if (puVar9 <= puVar22) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720c8);
          (*pcVar5)();
        }
        uVar7 = 0;
        func_0x000103a2a260(0);
        func_0x000107c61434(param_2);
        puVar19 = puVar22;
        do {
          puVar12 = puVar19 + 1;
          func_0x000107c60318(puVar19,param_2,uVar7);
          puVar19 = puVar12;
        } while (puVar9 != puVar12);
        if (uVar15 == 0) goto LAB_101b71b8c;
LAB_101b71c34:
        func_0x000107c6142c(param_2);
        puVar12 = puVar2;
        func_0x000107c60484();
        puVar19 = puVar22;
        uVar13 = param_4;
        if ((param_4 & 1) != 0) goto LAB_101b71ba0;
        puVar16 = (undefined *)(param_4 >> 1);
        lVar20 = (long)puVar16 - (long)puVar12;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (SBORROW8((long)puVar16,(long)puVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720c4);
          (*pcVar5)();
        }
joined_r0x000101b71d08:
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
        if (lVar20 != 0) {
          if (0 < lVar20) {
            FUN_101b7300c();
            func_0x000107c613fc();
            puVar11 = puVar22;
            func_0x000107c610a4();
            puVar8 = puVar11 + -0x19;
            if (0x1f < (long)puVar11) {
              puVar8 = puVar11 + -0x20;
            }
            *(long *)(puVar22 + 0x10) = lVar20;
            *(ulong *)(puVar22 + 0x18) = ((long)puVar8 >> 3) << 1 | 1;
            puVar8 = puVar22;
          }
          if (puVar12 == puVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101b720f8);
            (*pcVar5)();
          }
          param_4 = 0;
          func_0x000103a2a260();
          func_0x000107c6140c(puVar8 + 0x20,puVar9 + (long)puVar12 * 8,lVar20);
        }
LAB_101b71d1c:
        func_0x000107c615e8(puVar19);
        puVar22 = puVar8;
      }
      uVar13 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
        FUN_101b72ec0(1 < *(ulong *)(puVar4 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar13 + 1;
      *(undefined **)(puVar4 + uVar13 * 8 + 0x20) = puVar22;
      bVar6 = (long)puVar21 <= (long)puVar10;
      if (param_1 < 1) {
        bVar6 = (long)puVar10 <= (long)puVar21;
      }
      puVar22 = puVar10;
    } while (!bVar6);
  }
  return;
}



/* Entry: 101b720f8; end: 101b72107; -[_TtC37MapFootstepMemoryStreamImplementation27MemoriesStreamingController syncStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b720f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e05d78));
  return;
}



/* Entry: 101b72108; end: 101b7251b;  */

/* WARNING: Possible PIC construction at 0x000101b72200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b7225c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b72204) */
/* WARNING: Removing unreachable block (ram,0x000101b72260) */
/* WARNING: Removing unreachable block (ram,0x000101b7228c) */
/* WARNING: Removing unreachable block (ram,0x000101b72294) */
/* WARNING: Removing unreachable block (ram,0x000101b72280) */
/* WARNING: Removing unreachable block (ram,0x000101b722a0) */
/* WARNING: Removing unreachable block (ram,0x000101b722b4) */
/* WARNING: Removing unreachable block (ram,0x000101b721c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b72108(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  ulong uStack_58;
  
  if (param_1 != 0) {
    if (param_1 >> 0x3e == 0) {
      uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = param_1 & 0xffffffffffffff8;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar1 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar1 != 0) {
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000107c5eb50();
      uVar2 = 0x112e05dd0;
      uStack_58 = param_1;
      func_0x0001000285a8(0x112e05dd0,&UNK_10d9d9190);
      uVar3 = 0x112e05df8;
      FUN_101b73504(0x112e05df8,0x112e05e00,&UNK_10dc3cce8,PTR___sSayxGSEsSERzlMc_11034dce0);
      func_0x000107c5eb4c(&uStack_58,uVar2,uVar3);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e05d78);
      func_0x000103a2b5b8(0);
      func_0x000107c610f8();
      uVar2 = 1;
      func_0x000103a2b510(1);
      func_0x000107c4d664(uVar3);
      goto code_r0x000107c61170;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e05d78);
  func_0x000103a2b5b8(0);
  func_0x000107c610f8();
  uVar2 = 2;
  func_0x000103a2b510(2);
  func_0x000107c4d664(uVar3);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b7251c; end: 101b72577; -[_TtC37MapFootstepMemoryStreamImplementation27MemoriesStreamingController streamMemories:] */

void FUN_101b7251c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x000103a2a260(0);
    func_0x000107c5fc54(param_3,uVar1);
  }
  func_0x000107c61174(param_1);
  FUN_101b72108(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101b72578; end: 101b7295b;  */

void FUN_101b72578(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000101b72600(uVar2,uVar1,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101b7295c; end: 101b72b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7295c(undefined8 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12;
  if ((param_2 & 1) == 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e05d88);
    if (*(char *)(unaff_x20 + _DAT_112e05d70) == '\x01') {
      func_0x000105edb554();
    }
    else {
      func_0x000105edb4dc(uVar8,1);
    }
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e05d88);
    func_0x000105edb464(uVar8,1);
  }
  lVar1 = _DAT_112e05d90;
  func_0x000107c61428(unaff_x20 + _DAT_112e05d90,auStack_88,0,0);
  func_0x0001009f0578(unaff_x20 + lVar1,puVar6);
  puVar3 = puVar6;
  (**(code **)(lVar9 + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001000d1dcc(puVar6);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar5,puVar6,lVar2);
    func_0x000107c5eea0(lVar7);
    func_0x000107c5ee68(lVar5);
    pcVar4 = *(code **)(lVar9 + 8);
    (*pcVar4)(lVar7,lVar2);
    func_0x000105edb644(param_1,uVar8,param_2 & 1);
    (*pcVar4)(lVar5,lVar2);
  }
  return;
}



/* Entry: 101b72b34; end: 101b72b93; -[_TtC37MapFootstepMemoryStreamImplementation27MemoriesStreamingController init] */

void FUN_101b72b34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFootstepMemoryStreamImplementation.MemoriesStreamingController",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b72b60);
  (*pcVar1)();
}



/* Entry: 101b72b94; end: 101b72c4f; -[_TtC37MapFootstepMemoryStreamImplementation27MemoriesStreamingController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b72b94(long param_1)

{
  long lVar1;
  
  func_0x0001000834e4(param_1 + _DAT_112e05d30);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e05d38));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e05d40 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e05d48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e05d50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e05d60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e05d78));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e05d80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e05d88));
  param_1 = param_1 + _DAT_112e05d90;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101b72c50; end: 101b72c57;  */

void FUN_101b72c50(void)

{
  if (lRam0000000112e05dc0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e678658);
  return;
}



/* Entry: 101b72c58; end: 101b72c8f;  */

void FUN_101b72c58(undefined8 param_1)

{
  if (lRam0000000112e05dc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e678658);
  return;
}



/* Entry: 101b72c90; end: 101b72d5f;  */

void FUN_101b72c90(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_80 = PTR___sBOWV_11034d658 + 0x40;
  puStack_88 = &UNK_10d9d9130;
  puStack_78 = &UNK_10d9d9148;
  puStack_68 = PTR___sBoWV_11034d678 + 0x40;
  puStack_60 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_58 = PTR___sBbWV_11034d660 + 0x40;
  puStack_50 = &UNK_10d9d9160;
  puStack_48 = &UNK_10d9d9160;
  puStack_38 = &UNK_10d9d9178;
  lVar1 = 0x13f;
  puStack_70 = puStack_80;
  puStack_40 = puStack_80;
  puStack_30 = puStack_80;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,0xd,&puStack_88,param_1 + 0x50);
  }
  return;
}



/* Entry: 101b72d60; end: 101b72e67; -[_TtC37MapFootstepMemoryStreamImplementation27MemoriesStreamingController processJobWithJobConfig:input:context:onComplete:] */

void FUN_101b72d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  uVar2 = param_3;
  FUN_101b73268(param_3,param_4,param_2,param_5,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101b72e68; end: 101b72ebf;  */

void FUN_101b72e68(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101b72ec0; end: 101b72edb;  */

void FUN_101b72ec0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101b72edc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101b72edc; end: 101b7300b;  */

undefined * FUN_101b72edc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b7300c);
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
    puVar3 = (undefined *)0x112e05df0;
    func_0x0001000285a8(0x112e05df0,&UNK_10d9d91b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e05dd0;
    func_0x0001000285a8(0x112e05dd0,&UNK_10d9d9190);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101b7300c; end: 101b73067;  */

void FUN_101b7300c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000103a2a260();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e05de8;
  plVar5 = (long *)&UNK_10d9d91a0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101b73068; end: 101b73267;  */

/* WARNING: Possible PIC construction at 0x000101b73220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b73244: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b73224) */
/* WARNING: Removing unreachable block (ram,0x000101b73248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b73068(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_60 + -extraout_x8;
  plVar2 = (long *)&UNK_11044d368;
  func_0x000107c613fc(&UNK_11044d368,0x18,7);
  plVar2[2] = param_2;
  cVar1 = *(char *)(param_1 + _DAT_112e05d68);
  func_0x000107c60bc4(param_2);
  if (cVar1 == '\x01') {
    (**(code **)(param_2 + 0x10))(param_2,2,0);
    plVar4 = plVar2;
  }
  else {
    func_0x000107c5eea0(puVar7);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar7,0,1,lVar3);
    lVar3 = _DAT_112e05d90;
    func_0x000107c61428(param_1 + _DAT_112e05d90,auStack_58,0x21,0);
    func_0x000100ed9cbc(puVar7,param_1 + lVar3);
    func_0x000107c614a8(auStack_58);
    plVar4 = (long *)(param_1 + _DAT_112e05d30);
    func_0x0001000a8868(plVar4,plVar4[3]);
    FUN_101b7363c();
    puVar5 = &UNK_11044d390;
    func_0x000107c613fc(&UNK_11044d390,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_1);
    puVar6 = &UNK_11044d3b8;
    func_0x000107c613fc(&UNK_11044d3b8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(code **)(puVar6 + 0x18) = FUN_101b734f0;
    *(long **)(puVar6 + 0x20) = plVar2;
    pcVar8 = *(code **)(*plVar4 + 0x60);
    func_0x000107c6157c(plVar2);
    (*pcVar8)(0x101b734f8,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(plVar4);
  return;
}



/* Entry: 101b73268; end: 101b734ef;  */

/* WARNING: Removing unreachable block (ram,0x000101b7336c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_101b73268(ulong param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,long param_6)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  if (param_3 >> 0x3c < 0xf) {
    func_0x000107c5eb24();
    func_0x000107c613fc();
    func_0x000107c60bc4(param_6);
    uVar3 = param_2;
    func_0x000100de78a0(param_2,param_3);
    func_0x000107c5eb20();
    uVar5 = 0x112e05dd0;
    func_0x0001000285a8(0x112e05dd0,&UNK_10d9d9190);
    uVar6 = 0x112e05dd8;
    FUN_101b73504(0x112e05dd8,0x112e05de0,&UNK_10dc3ccc0,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c5eb1c(&uStack_68,uVar5,param_2,param_3,uVar5,uVar6);
    func_0x000107c507f0();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c60bd0(param_6);
      func_0x000107c60bd0(param_6);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b734f0);
      (*pcVar2)();
    }
    uVar4 = param_1;
    func_0x000107c4c880();
    func_0x000107c61170(param_1);
    if (*(ulong *)(param_4 + _DAT_11307e728) == (uVar4 & 0xffffffff)) {
      *(undefined1 *)(param_5 + _DAT_112e05d70) = 1;
    }
    cVar1 = *(char *)(param_5 + _DAT_112e05d68);
    func_0x000107c60bc4(param_6);
    if (cVar1 == '\x01') {
      (**(code **)(param_6 + 0x10))(param_6,2,0);
      func_0x000105edb554(*(undefined8 *)(param_5 + _DAT_112e05d88),1);
    }
    else {
      func_0x000107c60bc4(param_6);
      uVar5 = 2000;
      FUN_101b71990(2000,uStack_68);
      uVar6 = *(undefined8 *)(param_5 + _DAT_112e05d60);
      *(undefined8 *)(param_5 + _DAT_112e05d60) = uVar5;
      func_0x000107c6142c(uVar6);
      func_0x000107c60bc4(param_6);
      FUN_101b73068(param_5,param_6);
      func_0x000107c60bd0(param_6);
      func_0x000107c60bd0(param_6);
    }
    func_0x000107c60bd0(param_6);
    func_0x000107c6142c(uStack_68);
    func_0x000107c61574(uVar3);
    func_0x0001000b44c0(param_2,param_3);
    func_0x000107c60bd0(param_6);
  }
  else {
    func_0x000105edb554(*(undefined8 *)(param_5 + _DAT_112e05d88),1);
    (**(code **)(param_6 + 0x10))(param_6,2,0);
  }
  return 0;
}



/* Entry: 101b734f0; end: 101b73503;  */

void FUN_101b734f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101b73504; end: 101b73587;  */

void FUN_101b73504(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  
  if (*param_1 == 0) {
    uVar1 = 0x112e05dd0;
    func_0x00010002969c(0x112e05dd0,&UNK_10d9d9190);
    FUN_101b73588(param_2,param_3);
    uStack_48 = param_2;
    func_0x000107c61520(param_4,uVar1,&uStack_48);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 101b73588; end: 101b735c7;  */

void FUN_101b73588(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000103a2a260(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101b735c8; end: 101b7363b;  */

uint FUN_101b735c8(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar3 = *param_2;
  cVar1 = (char)param_2[1];
  if ((char)param_1[1] == '\0') {
    if (cVar1 == '\0') {
      return (uint)(lVar4 == lVar3);
    }
  }
  else if ((char)param_1[1] == '\x01') {
    if (cVar1 == '\x01') {
      return ((uint)lVar3 ^ (uint)lVar4 ^ 1) & 1;
    }
  }
  else {
    if (lVar4 == 0) {
      bVar2 = lVar3 == 0;
    }
    else {
      bVar2 = lVar3 == 1;
    }
    if (cVar1 == '\x02' && bVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 101b7363c; end: 101b73937;  */

undefined8 FUN_101b7363c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar5);
  func_0x0001000c74f0(&puStack_70);
  func_0x000107c61574(uVar5);
  if (puStack_70 == (undefined *)0x0) {
    func_0x000100083b20(&puStack_70);
    puVar1 = puStack_70;
    if (puStack_70 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126bc1b8;
      func_0x000107c61168(PTR_PTR_1126bc1b8);
      func_0x000106b13b74();
      func_0x000107c61180();
      puVar3 = &UNK_11044d490;
      func_0x000107c613fc(&UNK_11044d490,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      pcStack_50 = FUN_101b73ddc;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      pcStack_60 = FUN_101b73938;
      puStack_58 = &UNK_11044d4d0;
      ppuVar4 = &puStack_70;
      puStack_48 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar3 = puStack_48;
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar3);
      puVar3 = puVar1;
      func_0x000107c5c134();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(puVar2);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c6157c(uVar5);
      func_0x000100075034(FUN_101b73e00,&puStack_70,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar5);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
      puStack_70 = (undefined *)0x0;
      uStack_68 = CONCAT71(uStack_68._1_7_,2);
      func_0x000100087c34(&puStack_70);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c6157c(uVar5);
      return uVar5;
    }
  }
  else {
    func_0x000107c61170();
  }
  func_0x0001000285a8(0x112e05ef0,&UNK_10d9d9260);
  func_0x000107c613fc();
  uVar5 = 1;
  func_0x00010008747c(1);
  return uVar5;
}



/* Entry: 101b73938; end: 101b739bf;  */

/* WARNING: Possible PIC construction at 0x000101b739a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b739a4) */

void FUN_101b73938(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101b739c0; end: 101b73ae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b739c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar2 = &UNK_11044d490;
  func_0x000107c613fc(&UNK_11044d490,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11044d4b8;
  func_0x000107c613fc(&UNK_11044d4b8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  lVar4 = 0;
  FUN_101b73ca0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar5 + _DAT_112e05eb8);
  *puVar1 = 0x101b73d90;
  puVar1[1] = puVar3;
  plVar6 = &lStack_50;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(&lStack_58);
  func_0x000107c61574(uVar7);
  if (lStack_58 != 0) {
    FUN_101b73d98(0);
    func_0x000107c61434(param_1);
    FUN_101b712e8();
    func_0x000107c51d94(lStack_58);
    func_0x000107c61170(lStack_58);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(plVar6);
  return;
}



/* Entry: 101b73ae8; end: 101b73b67;  */

void FUN_101b73ae8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_1);
    uStack_50 = 0;
    uStack_58 = param_2;
    func_0x000100087c34(&uStack_58);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101b73b68; end: 101b73b97;  */

void FUN_101b73b68(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 101b73b98; end: 101b73beb;  */

void FUN_101b73b98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b73bec; end: 101b73c2b; -[_TtC37MapFootstepMemoryStreamImplementationP33_0AB1C0B26D1ACC6FD2999D5CE2CB6CD614StreamCallback onSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b73bec(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112e05eb8);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b73c2c; end: 101b73c8b; -[_TtC37MapFootstepMemoryStreamImplementationP33_0AB1C0B26D1ACC6FD2999D5CE2CB6CD614StreamCallback init] */

void FUN_101b73c2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFootstepMemoryStreamImplementation.StreamCallback",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b73c58);
  (*pcVar1)();
}



/* Entry: 101b73c8c; end: 101b73c9f; -[_TtC37MapFootstepMemoryStreamImplementationP33_0AB1C0B26D1ACC6FD2999D5CE2CB6CD614StreamCallback .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b73c8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e05eb8 + 8));
  return;
}



/* Entry: 101b73ca0; end: 101b73cbf;  */

void FUN_101b73ca0(void)

{
  func_0x000107c61168(&PTR_PTR_1127fac58);
  return;
}



/* Entry: 101b73cc0; end: 101b73d97;  */

int FUN_101b73cc0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101b73d98; end: 101b73ddb;  */

void FUN_101b73d98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e05ee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8b48;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e05ee8 = puVar1;
  return;
}



/* Entry: 101b73ddc; end: 101b73dff;  */

void FUN_101b73ddc(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_80 [24];
  ulong uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  if (param_3 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_80,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(lVar1);
      uStack_58 = 1;
      uStack_50 = 2;
      func_0x000100087c34(&uStack_58);
      func_0x000107c61574(uVar3);
    }
  }
  if (((param_1 & 1) == 0) && (param_2 != 0)) {
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_58,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      func_0x000107c61174();
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(lVar1);
      uVar2 = param_2;
      func_0x000107c5c3b4();
      uStack_68 = uVar2 & 0xffffffff;
      uStack_60 = 1;
      func_0x000100087c34(&uStack_68);
      func_0x000107c61574(uVar3);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 101b73e00; end: 101b73e43;  */

void FUN_101b73e00(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 101b73e44; end: 101b73ee3;  */

void FUN_101b73e44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001000ad7c4();
  uVar1 = 0x101b73eec;
  func_0x00010072927c(0x101b73eec,0,PTR___syXlN_11034f1a0 + 8);
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  func_0x000107c61574(uVar1);
  func_0x0001002b0e3c(0);
  func_0x000107c610f8();
  func_0x000103a2b6c0(param_2,uVar2,0xd00000000000001d,0x800000010f000e30);
  *param_1 = param_2;
  return;
}



/* Entry: 101b73ee4; end: 101b73ef7;  */

void FUN_101b73ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  uVar1 = 0x101b73eec;
  func_0x00010072927c(0x101b73eec,0,PTR___syXlN_11034f1a0 + 8);
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  func_0x000107c61574(uVar1);
  func_0x0001002b0e3c(0);
  func_0x000107c610f8();
  func_0x000103a2b6c0(unaff_x20,uVar2,0xd00000000000001d,0x800000010f000e30);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101b73ef8; end: 101b742f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b73ef8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *apuStack_e0 [2];
  long lStack_d0;
  long lStack_c8;
  undefined8 auStack_c0 [3];
  long lStack_a8;
  undefined **ppuStack_a0;
  long alStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  apuStack_e0[0] = param_6;
  apuStack_e0[1] = param_1;
  func_0x0001000285a8(0x112e05f08,&UNK_10d9d92e0);
  puVar3 = &UNK_11044d580;
  func_0x000107c613fc(&UNK_11044d580,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  pcVar4 = FUN_101b74414;
  func_0x0001000823a8(FUN_101b74414,puVar3);
  lVar5 = 0;
  func_0x000101b73bcc();
  lVar6 = lVar5;
  func_0x000107c613fc();
  alStack_98[0] = 0;
  func_0x0001000285a8(0x112e05f10,&UNK_10d9d92e8);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  plVar7 = alStack_98;
  func_0x00010006c248();
  *(long **)(lVar6 + 0x18) = plVar7;
  func_0x0001000285a8(0x112e05ef0,&UNK_10d9d9260);
  func_0x000107c613fc();
  uVar8 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar6 + 0x20) = uVar8;
  *(code **)(lVar6 + 0x10) = pcVar4;
  func_0x000100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_11307e6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&uStack_70);
  uVar8 = uStack_70;
  func_0x000107c4c440();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  ppuStack_78 = &PTR_DAT_11044d460;
  lVar10 = 0;
  alStack_98[0] = lVar6;
  lStack_80 = lVar5;
  FUN_101b72c58();
  lVar11 = lVar10;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_98,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar15);
  auStack_c0[0] = *puVar15;
  ppuStack_a0 = &PTR_DAT_11044d460;
  *(undefined8 *)(lVar11 + _DAT_112e05d58) = 2000;
  *(undefined **)(lVar11 + _DAT_112e05d60) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(lVar11 + _DAT_112e05d68) = 0;
  *(undefined1 *)(lVar11 + _DAT_112e05d70) = 0;
  lVar1 = _DAT_112e05d78;
  puVar3 = PTR_PTR_1126ae820;
  lStack_a8 = lVar5;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar6);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar1) = puVar3;
  puVar15 = (undefined8 *)(lVar11 + _DAT_112e05d80);
  *puVar15 = 0;
  puVar15[1] = 0;
  lVar5 = _DAT_112e05d90;
  lVar12 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar11 + lVar5,1,1,lVar12);
  FUN_101b7441c(auStack_c0,lVar11 + _DAT_112e05d30);
  puVar2 = apuStack_e0[0];
  *(undefined8 *)(lVar11 + _DAT_112e05d38) = uVar9;
  puVar15 = (undefined8 *)(lVar11 + _DAT_112e05d40);
  *puVar15 = 0xd00000000000001d;
  puVar15[1] = 0x800000010f000e30;
  *(undefined8 *)(lVar11 + _DAT_112e05d48) = uVar8;
  *(undefined8 **)(lVar11 + _DAT_112e05d50) = apuStack_e0[0];
  puVar3 = PTR_PTR_1126a8b50;
  func_0x000107c610f8();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(puVar2);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + _DAT_112e05d88) = puVar3;
  uVar14 = *(undefined8 *)(lVar11 + lVar1);
  func_0x000103a2b5b8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar14);
  uVar13 = 0;
  func_0x000103a2b510(0);
  func_0x000107c4d664(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  plVar7 = &lStack_d0;
  lStack_d0 = lVar11;
  lStack_c8 = lVar10;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(pcVar4);
  func_0x0001000834e4(auStack_c0);
  func_0x0001000834e4(alStack_98);
  *apuStack_e0[1] = plVar7;
  return;
}



/* Entry: 101b742f4; end: 101b74323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b742f4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar14;
  long unaff_x20;
  undefined8 *puVar15;
  undefined8 *apuStack_e0 [2];
  long lStack_d0;
  long lStack_c8;
  undefined8 auStack_c0 [3];
  long lStack_a8;
  undefined **ppuStack_a0;
  long alStack_98 [3];
  long lStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  apuStack_e0[0] = *(undefined8 **)(unaff_x20 + 0x30);
  apuStack_e0[1] = param_1;
  func_0x0001000285a8(0x112e05f08,&UNK_10d9d92e0,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  puVar3 = &UNK_11044d580;
  func_0x000107c613fc(&UNK_11044d580,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  pcVar4 = FUN_101b74414;
  func_0x0001000823a8(FUN_101b74414,puVar3);
  lVar5 = 0;
  func_0x000101b73bcc();
  lVar6 = lVar5;
  func_0x000107c613fc();
  alStack_98[0] = 0;
  func_0x0001000285a8(0x112e05f10,&UNK_10d9d92e8);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar4);
  plVar7 = alStack_98;
  func_0x00010006c248();
  *(long **)(lVar6 + 0x18) = plVar7;
  func_0x0001000285a8(0x112e05ef0,&UNK_10d9d9260);
  func_0x000107c613fc();
  uVar8 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar6 + 0x20) = uVar8;
  *(code **)(lVar6 + 0x10) = pcVar4;
  func_0x000100083b20(&lStack_68);
  uVar9 = *(undefined8 *)(lStack_68 + _DAT_11307e6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  func_0x000100083b20(&uStack_70);
  uVar8 = uStack_70;
  func_0x000107c4c440();
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  ppuStack_78 = &PTR_DAT_11044d460;
  lVar10 = 0;
  alStack_98[0] = lVar6;
  lStack_80 = lVar5;
  FUN_101b72c58();
  lVar11 = lVar10;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_98,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar15 = (undefined8 *)((long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar15);
  auStack_c0[0] = *puVar15;
  ppuStack_a0 = &PTR_DAT_11044d460;
  *(undefined8 *)(lVar11 + _DAT_112e05d58) = 2000;
  *(undefined **)(lVar11 + _DAT_112e05d60) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(lVar11 + _DAT_112e05d68) = 0;
  *(undefined1 *)(lVar11 + _DAT_112e05d70) = 0;
  lVar1 = _DAT_112e05d78;
  puVar3 = PTR_PTR_1126ae820;
  lStack_a8 = lVar5;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar6);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar1) = puVar3;
  puVar15 = (undefined8 *)(lVar11 + _DAT_112e05d80);
  *puVar15 = 0;
  puVar15[1] = 0;
  lVar5 = _DAT_112e05d90;
  lVar12 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar11 + lVar5,1,1,lVar12);
  FUN_101b7441c(auStack_c0,lVar11 + _DAT_112e05d30);
  puVar2 = apuStack_e0[0];
  *(undefined8 *)(lVar11 + _DAT_112e05d38) = uVar9;
  puVar15 = (undefined8 *)(lVar11 + _DAT_112e05d40);
  *puVar15 = 0xd00000000000001d;
  puVar15[1] = 0x800000010f000e30;
  *(undefined8 *)(lVar11 + _DAT_112e05d48) = uVar8;
  *(undefined8 **)(lVar11 + _DAT_112e05d50) = apuStack_e0[0];
  puVar3 = PTR_PTR_1126a8b50;
  func_0x000107c610f8();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(puVar2);
  func_0x000107c453e4();
  *(undefined **)(lVar11 + _DAT_112e05d88) = puVar3;
  uVar14 = *(undefined8 *)(lVar11 + lVar1);
  func_0x000103a2b5b8(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar14);
  uVar13 = 0;
  func_0x000103a2b510(0);
  func_0x000107c4d664(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  plVar7 = &lStack_d0;
  lStack_d0 = lVar11;
  lStack_c8 = lVar10;
  func_0x000107c61154(plVar7,PTR_s_init_1125d9248);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(pcVar4);
  func_0x0001000834e4(auStack_c0);
  func_0x0001000834e4(alStack_98);
  *apuStack_e0[1] = plVar7;
  return;
}



/* Entry: 101b74324; end: 101b74413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b74324(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_113093a98);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_48);
  uVar4 = uVar3;
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  lVar1 = lVar2;
  FUN_101b7173c(lVar2,uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c615e8(uVar4);
  *param_1 = lVar1;
  return;
}



/* Entry: 101b74414; end: 101b7441b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b74414(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar2 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c44580();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_113093a98);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_48);
  uVar4 = uVar3;
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  lVar1 = lVar2;
  FUN_101b7173c(lVar2,uVar4);
  func_0x000107c615e8(lVar2);
  func_0x000107c615e8(uVar4);
  *param_1 = lVar1;
  return;
}



/* Entry: 101b7441c; end: 101b7445f;  */

long FUN_101b7441c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101b74460; end: 101b744db;  */

void FUN_101b74460(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e05f20,&UNK_10d9d9330);
  func_0x000107c613fc();
  pcVar1 = FUN_101b744ec;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10d9d9300,0x2c,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101b744dc; end: 101b744eb;  */

undefined1  [16] FUN_101b744dc(void)

{
  return ZEXT816(0x11044d630);
}



/* Entry: 101b744ec; end: 101b746a7;  */

void FUN_101b744ec(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uVar3 = *param_2;
  func_0x0001000285a8(0x112e05f28,&UNK_10d9d9338);
  puVar1 = &uStack_38;
  uStack_38 = uVar3;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101b74578();
  func_0x000107c61574(puVar1);
  func_0x000100082720("MapFriendCompassViewEntryPointProvider",0x26,2);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 101b746a8; end: 101b746f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101b746a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e05f38;
  func_0x000107c61428(unaff_x20 + _DAT_112e05f38,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar2);
  return uVar2;
}



/* Entry: 101b746f4; end: 101b74747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b746f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e05f38;
  func_0x000107c61428(unaff_x20 + _DAT_112e05f38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b74748; end: 101b74787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101b74748(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112e05f38;
  func_0x000107c61428(unaff_x20 + _DAT_112e05f38,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_101b74788;
  return auVar2;
}



/* Entry: 101b74788; end: 101b7478b;  */

void FUN_101b74788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101b7478c; end: 101b74a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b7478c(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112e05f40;
  ppuVar6 = &puStack_90;
  func_0x000107c61614(unaff_x20 + _DAT_112e05f40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e05f48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f50) = 0;
  lVar2 = _DAT_112e05f58;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112e05f60;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f68) = 0;
  lVar2 = _DAT_112e05f70;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112e05f78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f88) = 0;
  *(ulong **)(unaff_x20 + _DAT_112e05f90) = param_1;
  func_0x000107c61174();
  uVar4 = param_2;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + _DAT_112e05f98) = uVar4;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x60))();
  func_0x000107c61604(unaff_x20 + lVar1,uVar4);
  func_0x000107c615e8(uVar4);
  func_0x000107c61168();
  func_0x00010674bf30();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + _DAT_112e05fa0) = puVar3;
  FUN_101b74a60();
  puVar5 = &stack0xffffffffffffffa0;
  func_0x000107c61154(0,0,0,0,puVar5,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c5a050();
  uVar7 = *(undefined8 *)((long)param_1 + _DAT_112fcd080);
  puVar3 = &UNK_11044d700;
  func_0x000107c613fc(&UNK_11044d700,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar5);
  pcStack_70 = FUN_101b74a80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101b7621c;
  puStack_78 = &UNK_11044d718;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  uVar4 = uVar7;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(puVar5 + _DAT_112e05f48);
  *(undefined8 *)(puVar5 + _DAT_112e05f48) = uVar4;
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  return puVar5;
}



/* Entry: 101b74a60; end: 101b74a7f;  */

void FUN_101b74a60(void)

{
  func_0x000107c61168(&PTR_PTR_1127fad18);
  return;
}



/* Entry: 101b74a80; end: 101b74afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b74a80(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_113072f80);
    if (lVar2 != 0) {
      func_0x000107c61174();
      FUN_101b74b40();
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101b74afc; end: 101b74b17;  */

void FUN_101b74afc(long param_1,long param_2)

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



/* Entry: 101b74b18; end: 101b74b3f; -[SCMapSaberFriendCompassView initWithCoder:] */

void FUN_101b74b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101b760f4();
  return;
}



/* Entry: 101b74b40; end: 101b74f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b74b40(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  if (*(long *)(unaff_x20 + _DAT_112e05f50) == 0) {
    FUN_101b74fa8();
  }
  lVar1 = _DAT_112e05f38;
  func_0x000107c61428(unaff_x20 + _DAT_112e05f38,auStack_78,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61170(uVar6);
  lVar1 = *(long *)(unaff_x20 + _DAT_112e05f98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e05f60);
  lVar7 = ((undefined8 *)(param_1 + _DAT_113072f38))[1];
  if (lVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_113072f38);
    func_0x000107c61434(lVar7);
    func_0x000107c5fadc(uVar8,lVar7);
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c59c6c(uVar6);
  func_0x000107c61170(uVar8);
  lVar7 = _DAT_112e05f80;
  if (((*(ulong *)(param_1 + _DAT_113072f30) ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0 &&
      (*(ulong *)(param_1 + _DAT_113072f30) & 0xfffffffffffff) != 0) {
    if (*(byte *)(param_1 + _DAT_113072f28) != 0) goto LAB_101b74e84;
  }
  else {
    if ((*(byte *)(param_1 + _DAT_113072f28) & 1) == 0) {
      if (*(long *)(unaff_x20 + _DAT_112e05f80) == 0) {
        lVar2 = lVar1;
        func_0x000107c44d88();
        func_0x000107c61180();
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e05f68);
        *(long *)(unaff_x20 + _DAT_112e05f68) = lVar2;
        func_0x000107c61170(uVar6);
        lVar2 = lVar1;
        func_0x000107c4b930();
        func_0x000107c61180();
        puVar5 = &UNK_11044d700;
        func_0x000107c613fc(&UNK_11044d700,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_88 = FUN_101b75f30;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        pcStack_98 = FUN_101981064;
        puStack_90 = &UNK_11044d7b0;
        ppuVar3 = &puStack_a8;
        puStack_80 = puVar5;
        func_0x000107c60bc4(ppuVar3);
        func_0x000107c61574(puStack_80);
        lVar4 = lVar2;
        func_0x000107c5c320();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c61170(lVar2);
        puVar5 = *(undefined **)(unaff_x20 + _DAT_112e05f88);
        *(long *)(unaff_x20 + _DAT_112e05f88) = lVar4;
        func_0x000107c61170();
        FUN_101b74a60();
        uVar6 = 0x112e05fd0;
        puStack_a8 = puVar5;
        func_0x0001000285a8(0x112e05fd0,&UNK_10d9d93e8);
        ppuVar3 = &puStack_a8;
        func_0x000107c5fb18(ppuVar3,uVar6);
        uVar8 = 0;
        func_0x0001048b0ec8(0);
        func_0x000107c610f8();
        func_0x0001048b0b48(ppuVar3,uVar6,0x18,uVar8);
        uVar6 = *(undefined8 *)PTR__kCLLocationAccuracyBest_110349b70;
        uVar8 = *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68;
        puVar5 = PTR_PTR_1126c1818;
        func_0x000107c610f8(PTR_PTR_1126c1818);
        func_0x000107c45818(uVar6,uVar8);
        func_0x000107c61170(ppuVar3);
        lVar2 = lVar1;
        func_0x000107c50314();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
        *(long *)(unaff_x20 + lVar7) = lVar2;
        func_0x000107c615e8(uVar6);
      }
      lVar7 = unaff_x20 + _DAT_112e05f40;
      func_0x000107c61618();
      if (lVar7 != 0) {
        func_0x000107c4398c();
        func_0x000107c615e8(lVar7);
      }
      FUN_101b75774();
      goto LAB_101b74f04;
    }
LAB_101b74e84:
    lVar7 = unaff_x20 + _DAT_112e05f40;
    func_0x000107c61618();
    if (lVar7 != 0) {
      func_0x000107c43988();
      func_0x000107c615e8(lVar7);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e05f88);
  *(undefined8 *)(unaff_x20 + _DAT_112e05f88) = 0;
  func_0x000107c61170(uVar6);
  lVar7 = _DAT_112e05f80;
  uVar6 = 0;
  if (*(long *)(unaff_x20 + _DAT_112e05f80) != 0) {
    func_0x000107c5d320();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
  }
  *(undefined8 *)(unaff_x20 + lVar7) = 0;
  func_0x000107c615e8(uVar6);
  lVar7 = unaff_x20 + _DAT_112e05f40;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c43994();
    func_0x000107c615e8(lVar7);
  }
LAB_101b74f04:
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112e05f70));
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + _DAT_112e05fa0));
  func_0x000107c61170(param_1);
  func_0x000107c615e8(lVar1);
  return;
}



/* Entry: 101b74f5c; end: 101b74fa7;  */

void FUN_101b74f5c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101b74fa8; end: 101b75773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b74fa8(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_88 [24];
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e05f50);
  *(undefined **)(unaff_x20 + _DAT_112e05f50) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e05f58);
  func_0x000107c5a050(uVar9);
  uVar8 = uVar9;
  func_0x000107c4aba4(uVar9);
  func_0x000107c61180();
  func_0x000107c539d4(0x402c000000000000);
  func_0x000107c61170(uVar8);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar4 = puVar3;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(uVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c526c0(0x3fe3333333333333,uVar9);
  func_0x000107c5a050(puVar2);
  puVar4 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c52e0c(0x4000000000000000);
  func_0x000107c61170(puVar4);
  puVar4 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c5af88(puVar3);
  func_0x000107c61180();
  puVar5 = puVar3;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c52df8(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  puVar3 = puVar2;
  func_0x000107c4aba4(puVar2);
  func_0x000107c61180();
  func_0x000107c539d4(0x4030000000000000);
  func_0x000107c61170(puVar3);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e05f60);
  func_0x000107c5a050(uVar8);
  func_0x000107c5a100(uVar8);
  lVar12 = _DAT_112e05f38;
  func_0x000107c61428(unaff_x20 + _DAT_112e05f38,auStack_88,0,0);
  if (*(long *)(unaff_x20 + lVar12) != 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + lVar12) + _DAT_113072f38);
    lVar12 = puVar1[1];
    if (lVar12 != 0) {
      uVar10 = *puVar1;
      func_0x000107c61434(lVar12);
      func_0x000107c5fadc(uVar10,lVar12);
      func_0x000107c6142c(lVar12);
      goto LAB_101b751cc;
    }
  }
  uVar10 = 0;
LAB_101b751cc:
  func_0x000107c59c6c(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c5b09c(uVar8);
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  func_0x000107c3d89c();
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e05fa0);
  func_0x000107c5a050(uVar13);
  func_0x000107c3d89c();
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar4 = puVar3;
  func_0x0001008478a8();
  puVar5 = puVar4;
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 5;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  uVar10 = uVar13;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c3f75c(puVar2);
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  uVar10 = uVar13;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar6 = puVar2;
  func_0x000107c3f764(puVar2);
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar5 + 0x28) = uVar11;
  uVar7 = 0;
  func_0x000100847984(0);
  puVar6 = puVar5;
  func_0x000107c5fc48(puVar5,uVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c550d8(uVar13);
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e05f70);
  func_0x000107c5a050(uVar11);
  uVar10 = 0x8b919ff0;
  func_0x000107c5fadc(0x8b919ff0,0xa400000000000000);
  func_0x000107c59c6c(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c3d89c(puVar2);
  func_0x000107c51730(uVar11);
  func_0x000107c550d8(uVar11);
  func_0x000107c613fc(puVar4,((ulong)*(uint *)(puVar4 + 0x30) + 7 & 0x1fffffff8) + 0x50,
                      *(ushort *)(puVar4 + 0x34) | 7);
  *(undefined8 *)(puVar4 + 0x18) = 0x15;
  *(undefined8 *)(puVar4 + 0x10) = 10;
  puVar5 = puVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar12 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar12);
  *(undefined **)(puVar4 + 0x20) = puVar6;
  puVar5 = puVar2;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40290(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(puVar4 + 0x28) = puVar6;
  puVar5 = puVar2;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40290(0x4040000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(puVar4 + 0x30) = puVar6;
  puVar5 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(unaff_x20);
  *(undefined **)(puVar4 + 0x38) = puVar6;
  uVar10 = uVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c4acb0(puVar2);
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c40284(0x4000000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar4 + 0x40) = uVar11;
  uVar10 = uVar9;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c3f764(puVar2);
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  uVar10 = uVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar11 = uVar8;
  func_0x000107c5cbe4(uVar8);
  func_0x000107c61180();
  uVar13 = uVar10;
  func_0x000107c40284(0xc018000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  *(undefined8 *)(puVar4 + 0x50) = uVar13;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar10 = uVar8;
  func_0x000107c5ce8c(uVar8);
  func_0x000107c61180();
  uVar11 = uVar9;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  *(undefined8 *)(puVar4 + 0x58) = uVar11;
  uVar9 = uVar8;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c5ce8c(puVar2);
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c40284(0x4010000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar4 + 0x60) = uVar10;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar5 = puVar2;
  func_0x000107c3f764(puVar2);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar5);
  *(undefined8 *)(puVar4 + 0x68) = uVar9;
  puVar5 = puVar4;
  func_0x000107c5fc48(puVar4,uVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101b75774; end: 101b75a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b75774(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [24];
  
  lVar2 = _DAT_112e05f38;
  func_0x000107c61428(unaff_x20 + _DAT_112e05f38,auStack_88,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if ((((lVar2 == 0) || (lVar7 = *(long *)(unaff_x20 + _DAT_112e05f68), lVar7 == 0)) ||
      (lVar9 = *(long *)(unaff_x20 + _DAT_112e05f50), lVar9 == 0)) ||
     (NAN(*(double *)(lVar2 + _DAT_113072f30)))) {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_112e05fa0);
    uVar4 = uVar8;
    func_0x000107c49eac();
    if ((uVar4 & 1) == 0) {
      lVar2 = unaff_x20 + _DAT_112e05f40;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c43994();
        func_0x000107c615e8(lVar2);
      }
    }
    func_0x000107c550d8(uVar8);
  }
  else {
    dVar11 = *(double *)(lVar2 + _DAT_113072f30) * 3.141592653589793;
    dVar12 = dVar11 / 180.0;
    func_0x000107c61174();
    func_0x000107c61174(lVar7);
    func_0x000107c61174(lVar9);
    func_0x000107c5d06c(lVar7);
    dVar12 = dVar12 - (dVar11 * 3.141592653589793) / 180.0;
    dVar11 = dVar12;
    func_0x000107c60fc4(dVar12,0x401921fb54442d18);
    lVar1 = _DAT_112e05f78;
    if (0.0872665 <= ABS(dVar11)) {
      uVar13 = 0x3fd999999999999a;
    }
    else {
      if ((*(byte *)(unaff_x20 + _DAT_112e05f78) & 1) == 0) {
        lVar3 = unaff_x20 + _DAT_112e05f40;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x000107c43990();
          func_0x000107c615e8(lVar3);
        }
      }
      *(undefined1 *)(unaff_x20 + lVar1) = 1;
      uVar13 = 0x3ff0000000000000;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e05f60);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar6 = puVar5;
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c59c78(uVar10);
    func_0x000107c61170(puVar6);
    func_0x000107c5af88(puVar5);
    func_0x000107c61180();
    func_0x000107c52b50(lVar9);
    func_0x000107c61170(puVar5);
    func_0x000107c526c0(uVar13,lVar9);
    func_0x000107c60fc4(dVar12 + -0.8028514559173915,0x401921fb54442d18);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e05fa0);
    func_0x000107c60888(auStack_c0);
    func_0x000107c5a03c(uVar13);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 101b75a10; end: 101b75b5f;  */

/* WARNING: Possible PIC construction at 0x000101b75b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b75b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b75b0c) */
/* WARNING: Removing unreachable block (ram,0x000101b75b1c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b75a10(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e05f98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c44d88();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = &UNK_11044d700;
    func_0x000107c613fc(&UNK_11044d700,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11044d770;
    func_0x000107c613fc(&UNK_11044d770,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar2;
    puVar3 = &UNK_11044d798;
    func_0x000107c613fc(&UNK_11044d798,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10d9d93d0;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    func_0x000107c61174(lVar2);
    func_0x0001001ca524(0x52,0,0x3c,4,0,0,&UNK_10d9d93e0,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 101b75b60; end: 101b75bcb;  */

void FUN_101b75b60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b75bcc,uVar1,uVar2);
  return;
}



/* Entry: 101b75bcc; end: 101b75cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b75bcc(double param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  double dVar5;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e05f68;
  if (lVar4 == 0) goto LAB_101b75c90;
  lVar2 = *(long *)(lVar4 + _DAT_112e05f68);
  if (lVar2 == 0) {
    uVar3 = 0;
LAB_101b75c70:
    *(undefined8 *)(lVar4 + lVar1) = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    FUN_101b75774();
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c61174();
    func_0x000107c5d06c();
    dVar5 = param_1;
    func_0x000107c5d06c(uVar3);
    func_0x000107c61170(lVar2);
    if (1e-05 <= ABS(param_1 - dVar5)) {
      uVar3 = *(undefined8 *)(lVar4 + lVar1);
      goto LAB_101b75c70;
    }
  }
  func_0x000107c61170(lVar4);
LAB_101b75c90:
                    /* WARNING: Could not recover jumptable at 0x000101b75ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b75cac; end: 101b75d17;  */

void FUN_101b75cac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b75ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b75d18; end: 101b75e23; -[SCMapSaberFriendCompassView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b75d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b75d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b75d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b75da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b75dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b75da8) */
/* WARNING: Removing unreachable block (ram,0x000101b75d88) */
/* WARNING: Removing unreachable block (ram,0x000101b75d68) */
/* WARNING: Removing unreachable block (ram,0x000101b75d38) */
/* WARNING: Removing unreachable block (ram,0x000101b75dc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b75d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e05f98));
  return;
}



/* Entry: 101b75e24; end: 101b75e33;  */

undefined1  [16] FUN_101b75e24(void)

{
  return ZEXT816(0x11044d750);
}



/* Entry: 101b75e34; end: 101b75e83;  */

void FUN_101b75e34(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b75e84;
  plVar3[5] = lVar2;
  plVar3[6] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b75bcc,lVar1,lVar2);
  return;
}



/* Entry: 101b75e84; end: 101b75ebf;  */

void FUN_101b75e84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b75ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b75ec0; end: 101b75f2f;  */

void FUN_101b75ec0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b76220;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}


