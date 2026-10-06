/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f89098; end: 100f891b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f89098(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar4 = 0;
    param_2 = -0x2000000000000000;
  }
  else {
    uVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4fdd0);
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  uStack_50 = puVar1[2];
  uStack_48 = puVar1[3];
  uVar2 = 0x112d4fc88;
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f770(&uStack_70);
  if ((uStack_70 == uVar4) && (lStack_68 == param_2)) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lStack_68);
  }
  else {
    uVar3 = uStack_70;
    func_0x000107c605b8(uStack_70,lStack_68,uVar4,param_2,0);
    func_0x000107c6142c(lStack_68);
    if ((uVar3 & 1) == 0) {
      uStack_58 = puVar1[1];
      uStack_60 = *puVar1;
      uStack_50 = puVar1[2];
      uStack_48 = puVar1[3];
      uStack_70 = uVar4;
      lStack_68 = param_2;
      func_0x000107c5f774(&uStack_70,uVar2);
    }
    else {
      func_0x000107c6142c(param_2);
    }
  }
  return;
}



/* Entry: 100f891b8; end: 100f89207; -[_TtCV20ModularStickerCutout16RemixPromptField11Coordinator textDidChange:] */

/* WARNING: Possible PIC construction at 0x000100f891f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f891f4) */

void FUN_100f891b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100f89098(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f89208; end: 100f89253; -[_TtCV20ModularStickerCutout16RemixPromptField11Coordinator textFieldDidBeginEditing:] */

/* WARNING: Possible PIC construction at 0x000100f8923c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f89240) */

void FUN_100f89208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100f89c14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f89254; end: 100f8929f; -[_TtCV20ModularStickerCutout16RemixPromptField11Coordinator textFieldDidEndEditing:] */

/* WARNING: Possible PIC construction at 0x000100f89288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f8928c) */

void FUN_100f89254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100f89cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f892a0; end: 100f892f7; -[_TtCV20ModularStickerCutout16RemixPromptField11Coordinator textFieldShouldReturn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f892a0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d4fdd0 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d4fdd0 + 0x78);
  func_0x000107c61174();
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 100f892f8; end: 100f89357; -[_TtCV20ModularStickerCutout16RemixPromptField11Coordinator init] */

void FUN_100f892f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularStickerCutout.Coordinator",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f89324);
  (*pcVar1)();
}



/* Entry: 100f89358; end: 100f89367; -[_TtCV20ModularStickerCutout16RemixPromptField11Coordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100f89358(long param_1)

{
  param_1 = param_1 + _DAT_112d4fdd0;
  func_0x000100f893b4(param_1,&UNK_110370368);
  return param_1;
}



/* Entry: 100f89368; end: 100f89387;  */

void FUN_100f89368(void)

{
  func_0x000107c61168(&PTR_PTR_1127a5f58);
  return;
}



/* Entry: 100f89388; end: 100f89423;  */

long FUN_100f89388(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f89424; end: 100f8950f;  */

undefined8 * FUN_100f89424(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar1 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar7 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar7;
  uVar2 = param_2[9];
  uVar8 = param_2[10];
  param_1[9] = uVar2;
  param_1[10] = uVar8;
  uVar3 = param_2[0xb];
  uVar9 = param_2[0xc];
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar9;
  param_1[0xd] = param_2[0xd];
  uVar10 = param_2[0xf];
  uVar11 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar11;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar10);
  return param_1;
}



/* Entry: 100f89510; end: 100f89667;  */

undefined8 * FUN_100f89510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f89668; end: 100f8968b;  */

void FUN_100f89668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}



/* Entry: 100f8968c; end: 100f8975f;  */

undefined8 * FUN_100f8968c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  func_0x000107c6142c(param_1[8]);
  uVar1 = param_1[9];
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[10]);
  uVar1 = param_1[0xb];
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61170(uVar1);
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xf];
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100f89760; end: 100f8982f;  */

int FUN_100f89760(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f89830; end: 100f898eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f89830(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [128];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar3 = &lStack_150;
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  FUN_100f89368();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112d4fdd8) = 0x8000000000000000;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112d4fdd0);
  uVar4 = unaff_x20[8];
  uVar6 = unaff_x20[0xb];
  uVar5 = unaff_x20[10];
  puVar1[9] = unaff_x20[9];
  puVar1[8] = uVar4;
  puVar1[0xb] = uVar6;
  puVar1[10] = uVar5;
  uVar4 = unaff_x20[0xc];
  uVar6 = unaff_x20[0xf];
  uVar5 = unaff_x20[0xe];
  puVar1[0xd] = unaff_x20[0xd];
  puVar1[0xc] = uVar4;
  puVar1[0xf] = uVar6;
  puVar1[0xe] = uVar5;
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar4;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
  uVar4 = unaff_x20[4];
  uVar6 = unaff_x20[7];
  uVar5 = unaff_x20[6];
  puVar1[5] = unaff_x20[5];
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  FUN_100f899f0(&uStack_c0,auStack_140);
  lStack_150 = lVar2;
  lStack_148 = param_2;
  func_0x000107c61154(&lStack_150,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 100f898ec; end: 100f898ef;  */

void FUN_100f898ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb63e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE19_identifiedViewTree2inAA011_IdentifiedfG0O0C4TypeQz_tF_110348ea0
  )();
  return;
}



/* Entry: 100f898f0; end: 100f89903;  */

void FUN_100f898f0(void)

{
  func_0x000107c5f464();
  return;
}



/* Entry: 100f89904; end: 100f8990f;  */

void FUN_100f89904(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb63f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE21_overrideSizeThatFits_2in6uiViewySo6CGSizeVz_AA09_ProposedF0V0C4TypeQztF_110348eb0
  )();
  return;
}



/* Entry: 100f89910; end: 100f89923;  */

void FUN_100f89910(void)

{
  func_0x000107c5f46c();
  return;
}



/* Entry: 100f89924; end: 100f899c3;  */

void FUN_100f89924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100f89bd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE9_makeView4view6inputsAA01_F7OutputsVAA11_GraphValueVyxG_AA01_F6InputsVtFZ_110348ec8
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 100f899c4; end: 100f899c7;  */

void FUN_100f899c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb68fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1103494d8)();
  return;
}



/* Entry: 100f899c8; end: 100f899eb;  */

void FUN_100f899c8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_100f89bd4();
  func_0x000107c5f480(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f899ec);
  (*pcVar1)();
}



/* Entry: 100f899ec; end: 100f899ef;  */

void FUN_100f899ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4fd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915ff4;
  func_0x000107c61520(&UNK_10d915ff4,&UNK_110370368);
  puRam0000000112d4fd28 = puVar1;
  return;
}



/* Entry: 100f899f0; end: 100f89a23;  */

undefined8 FUN_100f899f0(undefined8 param_1,undefined8 param_2)

{
  FUN_100f89424(param_2,param_1,&UNK_110370368);
  return param_2;
}



/* Entry: 100f89a24; end: 100f89a67;  */

void FUN_100f89a24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48390 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d48390 = puVar1;
  return;
}



/* Entry: 100f89a68; end: 100f89a97;  */

void FUN_100f89a68(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100f89a98; end: 100f89afb;  */

void FUN_100f89a98(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 100f89afc; end: 100f89bd3;  */

undefined * FUN_100f89afc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112d4f350);
    puVar4 = puVar8;
    func_0x000107c60498();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar9[-1];
      uVar2 = *puVar9;
      uVar5 = uVar1;
      FUN_100f89a68();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f89bd0);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f89bd4);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar4;
}



/* Entry: 100f89bd4; end: 100f89c13;  */

void FUN_100f89bd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4fe18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d916044;
  func_0x000107c61520(&UNK_10d916044,&UNK_110370368);
  puRam0000000112d4fe18 = puVar1;
  return;
}



/* Entry: 100f89c14; end: 100f89d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f89c14(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  byte bStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = unaff_x20 + _DAT_112d4fdd0;
  uStack_48 = *(undefined8 *)(lVar1 + 0x20);
  uStack_40 = *(undefined8 *)(lVar1 + 0x28);
  uStack_38 = *(undefined1 *)(lVar1 + 0x30);
  uVar2 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(&bStack_49);
  if ((bStack_49 & 1) == 0) {
    uStack_48 = *(undefined8 *)(lVar1 + 0x20);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28);
    uStack_38 = *(undefined1 *)(lVar1 + 0x30);
    bStack_49 = 1;
    func_0x000107c5f774(&bStack_49,uVar2);
  }
  return;
}



/* Entry: 100f89d44; end: 100f89d6f;  */

undefined8 FUN_100f89d44(undefined8 param_1)

{
  func_0x000100f893b4(param_1,&UNK_110370368);
  return param_1;
}



/* Entry: 100f89d70; end: 100f89e07;  */

undefined1  [16]
FUN_100f89d70(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_4 != 0) {
    puVar5 = (undefined8 *)(param_5 + 0x48);
    lVar6 = *(long *)(param_5 + 0x10) + 1;
    do {
      lVar6 = lVar6 + -1;
      uVar3 = param_1;
      uVar4 = param_2;
      if (lVar6 == 0) break;
      uVar2 = puVar5[-5];
      plVar1 = puVar5 + -4;
      uVar3 = puVar5[-1];
      uVar4 = *puVar5;
      if (uVar2 == param_3 && param_4 == *plVar1) break;
      puVar5 = puVar5 + 10;
      func_0x000107c605b8(uVar2,*plVar1,param_3,param_4,0);
    } while ((uVar2 & 1) == 0);
  }
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Entry: 100f89e08; end: 100f89e0f;  */

void FUN_100f89e08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100f89e10; end: 100f89e7b;  */

undefined8 * FUN_100f89e10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f89e7c; end: 100f89f1f;  */

int FUN_100f89e7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f89f20; end: 100f8a007;  */

void FUN_100f89f20(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5f410();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar1 = 0x112d4fe20;
  func_0x0001000285a8(0x112d4fe20,&UNK_10d916158);
  FUN_100f8a008((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_a0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar1 = 0x112d4fe28;
  func_0x0001000285a8(0x112d4fe28,&UNK_10d916160);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar1 + 0x24));
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = uStack_38;
  param_1[0xc] = uStack_40;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 100f8a008; end: 100f8a623;  */

void FUN_100f8a008(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 auStack_218 [72];
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  long lStack_118;
  long lStack_110;
  long alStack_108 [2];
  undefined1 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar2 = 0x112d4fe30;
  lStack_228 = param_1;
  func_0x0001000285a8(0x112d4fe30,&UNK_10d916168);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_240 - extraout_x8;
  lVar3 = 0x112d4fe38;
  func_0x0001000285a8(0x112d4fe38,&UNK_10d916170);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_220 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lStack_b0 = param_2;
  lStack_a8 = param_3;
  func_0x000107c6157c(param_3);
  uVar4 = 0x112d4fe40;
  func_0x0001000285a8(0x112d4fe40,&UNK_10dac3050);
  uVar5 = uVar4;
  FUN_100f8a6d8();
  plVar11 = &lStack_c0;
  lVar3 = param_2;
  lVar9 = param_3;
  func_0x000107c5f738(lVar8,param_2,param_3,0x100f8a6d0,plVar11,uVar4,uVar5);
  *(undefined1 *)(lVar8 + *(int *)(lVar2 + 0x24)) = 0;
  func_0x000100f97818();
  lStack_c0 = lVar3;
  lStack_b8 = lVar9;
  FUN_100e8b654();
  plVar6 = &lStack_c0;
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0(plVar6,PTR___sSSN_11034da80,lVar3);
  plVar7 = plVar6;
  FUN_100f8a740();
  lStack_230 = lVar12;
  func_0x000107c5f640(lVar12,plVar6,puVar10,lVar3,plVar11,lVar2,plVar7);
  func_0x000100f795bc(plVar6,puVar10,lVar3);
  func_0x000107c6142c(plVar11);
  func_0x000100f8a840(lVar8,0x112d4fe30,&UNK_10d916168);
  func_0x000107c5f410();
  func_0x000100f8a400(&lStack_c0,param_2,param_3);
  lStack_148 = 0x4018000000000000;
  uStack_140 = 0;
  lStack_138 = lStack_c0;
  lStack_130 = lStack_b8;
  lStack_128 = lStack_b0;
  uStack_120 = (undefined1)lStack_a8;
  lStack_118 = lStack_a0;
  lStack_110 = 0x3ff0000000000000;
  alStack_108[1] = 0x4018000000000000;
  uStack_f8 = 0;
  lStack_f0 = lStack_c0;
  lStack_e8 = lStack_b8;
  lStack_e0 = lStack_b0;
  uStack_d8 = (undefined1)lStack_a8;
  lStack_d0 = lStack_a0;
  uStack_c8 = 0x3ff0000000000000;
  uVar4 = 0x112d4fe78;
  lStack_150 = lVar8;
  alStack_108[0] = lVar8;
  func_0x000100f8a7f8(&lStack_150,&lStack_c0,0x112d4fe78,&UNK_10d916190);
  plVar6 = alStack_108;
  func_0x000100f8a840(plVar6,0x112d4fe78,&UNK_10d916190);
  func_0x000107c5f6cc();
  plVar7 = plVar6;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_180,0x4036000000000000,0,0x4036000000000000,0,plVar7,uVar4);
  lVar2 = lStack_220;
  uStack_240 = uStack_158;
  uStack_238 = uStack_180;
  func_0x000100f8a7f8(lVar12,lStack_220,0x112d4fe38,&UNK_10d916170);
  lVar3 = lStack_228;
  lStack_1a0 = CONCAT71(uStack_11f,uStack_120);
  lStack_1a8 = lStack_128;
  lStack_1b0 = lStack_130;
  lStack_198 = lStack_118;
  lStack_190 = lStack_110;
  lStack_1c0 = CONCAT71(uStack_13f,uStack_140);
  lStack_1c8 = lStack_148;
  lStack_1d0 = lStack_150;
  lStack_1b8 = lStack_138;
  func_0x000100f8a7f8(lVar2,lStack_228,0x112d4fe38,&UNK_10d916170);
  lVar2 = 0x112d4fe80;
  func_0x0001000285a8(0x112d4fe80,&UNK_10d916198);
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x30));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  plVar7 = (long *)(lVar3 + *(int *)(lVar2 + 0x40));
  lStack_98 = lStack_1a8;
  lStack_a0 = lStack_1b0;
  lStack_88 = lStack_198;
  lStack_90 = lStack_1a0;
  lStack_b8 = lStack_1c8;
  lStack_c0 = lStack_1d0;
  lStack_a8 = lStack_1b8;
  lStack_b0 = lStack_1c0;
  lStack_80 = lStack_190;
  plVar7[5] = lStack_1a8;
  plVar7[4] = lStack_1b0;
  plVar7[7] = lStack_198;
  plVar7[6] = lStack_1a0;
  plVar7[8] = lStack_190;
  plVar7[1] = lStack_1c8;
  *plVar7 = lStack_1d0;
  plVar7[3] = lStack_1b8;
  plVar7[2] = lStack_1c0;
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x50));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x60));
  *puVar1 = plVar6;
  puVar1[1] = uStack_238;
  *(undefined1 *)(puVar1 + 2) = uStack_178;
  puVar1[3] = uStack_170;
  *(undefined1 *)(puVar1 + 4) = uStack_168;
  puVar1[5] = uStack_160;
  puVar1[6] = uStack_240;
  func_0x000100f8a7f8(&lStack_c0,auStack_218,0x112d4fe78,&UNK_10d916190);
  func_0x000107c6157c(plVar6);
  func_0x000100f8a840(lStack_230,0x112d4fe38,&UNK_10d916170);
  func_0x000107c61574(plVar6);
  func_0x000100f8a840(&lStack_1d0,0x112d4fe78,&UNK_10d916190);
  func_0x000100f8a840(lStack_220,0x112d4fe38,&UNK_10d916170);
  return;
}



/* Entry: 100f8a624; end: 100f8a6bb;  */

void FUN_100f8a624(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4036000000000000,0x4036000000000000,puVar2,param_3,0x83,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5f6e8();
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 100f8a6bc; end: 100f8a6d7;  */

void FUN_100f8a6bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f8a6d8; end: 100f8a73f;  */

void FUN_100f8a6d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112d4fe48 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fe40;
  func_0x00010002969c(0x112d4fe40,&UNK_10dac3050);
  puStack_18 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_110349778;
  puVar2 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar1,&puStack_18);
  puRam0000000112d4fe48 = puVar2;
  return;
}



/* Entry: 100f8a740; end: 100f8a87f;  */

void FUN_100f8a740(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4fe50 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fe30;
  func_0x00010002969c(0x112d4fe30,&UNK_10d916168);
  uVar2 = 0x112d4fe58;
  func_0x000100f8a930(0x112d4fe58,0x112d4fe60,&UNK_10d916180,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar3 = 0x112d4fe68;
  func_0x000100f8a930(0x112d4fe68,0x112d4fe70,&UNK_10da5a660,
                      PTR___s7SwiftUI21_ContentShapeModifierVyxGAA04ViewE0AAMc_110348fd8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4fe50 = puVar4;
  return;
}



/* Entry: 100f8a880; end: 100f8a897;  */

void FUN_100f8a880(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100f8a898; end: 100f8a973;  */

void FUN_100f8a898(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d4fe88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4fe28;
  func_0x00010002969c(0x112d4fe28,&UNK_10d916160);
  uVar2 = 0x112d4fe90;
  func_0x000100f8a930(0x112d4fe90,0x112d4fe98,&UNK_10d9161a0,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4fe88 = puVar3;
  return;
}



/* Entry: 100f8a974; end: 100f8a97b;  */

undefined8 * FUN_100f8a974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 100f8a97c; end: 100f8aa03; -[_TtC20ModularStickerCutout30RemixTrayWrapperViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100f8a97c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_30;
  long lStack_28;
  
  plVar3 = &lStack_30;
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d4fea0) = 0;
  *(undefined1 *)(param_1 + _DAT_112d4fea8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d4feb0) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4feb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c5677c();
  return (undefined1 *)plVar3;
}



/* Entry: 100f8aa04; end: 100f8aa8f; -[_TtC20ModularStickerCutout30RemixTrayWrapperViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8aa04(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  *(undefined8 *)(param_1 + _DAT_112d4fea0) = 0;
  *(undefined1 *)(param_1 + _DAT_112d4fea8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d4feb0) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d4feb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ModularStickerCutout/RemixTrayWrapperViewController.swift",0x39,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f8aa90);
  (*pcVar2)();
}



/* Entry: 100f8aa90; end: 100f8ab2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8aa90(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4fea0);
  if (lVar2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c615f0(lVar2);
    func_0x000107c41570(puVar1);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f8ab2c; end: 100f8abdb; -[_TtC20ModularStickerCutout30RemixTrayWrapperViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8ab2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112d4fea0);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    func_0x000107c41570(puVar2);
    func_0x000107c61180();
    func_0x000107c4ffa0();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f8abdc; end: 100f8ac17; -[_TtC20ModularStickerCutout30RemixTrayWrapperViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8abdc(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d4fea0));
  if (*(long *)(param_1 + _DAT_112d4feb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d4feb8))[1]);
    return;
  }
  return;
}



/* Entry: 100f8ac18; end: 100f8ad93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8ac18(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c52b50();
    func_0x000107c61170(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c61168();
    func_0x000107c41570();
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c4c188();
    func_0x000107c61180();
    puVar5 = &UNK_110370538;
    func_0x000107c613fc(&UNK_110370538,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_60 = FUN_100f8b43c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_100ef35e4;
    puStack_68 = &UNK_110370550;
    puStack_58 = puVar5;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    puVar5 = puVar3;
    func_0x000107c3d7c4();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d4fea0);
    *(undefined **)(unaff_x20 + _DAT_112d4fea0) = puVar5;
    func_0x000107c615e8(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f8ad94);
  (*pcVar1)();
}



/* Entry: 100f8ad94; end: 100f8adef;  */

void FUN_100f8ad94(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100f8adf0(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100f8adf0; end: 100f8b26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8adf0(double param_1,double param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar4 = &puStack_c0;
  ppuVar7 = &puStack_c0;
  ppuVar10 = &puStack_c0;
  ppuVar14 = &puStack_c0;
  func_0x000107c5eba8();
  if (param_3 == (undefined8 *)0x0) {
    return;
  }
  lVar3 = *(long *)PTR__UIKeyboardFrameEndUserInfoKey_110345d08;
  func_0x000107c5faec();
  lStack_90 = lVar3;
  puStack_88 = param_4;
  func_0x000107c61434(param_4);
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_c0,&lStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_3[2] == 0) {
LAB_100f8aea4:
    param_1 = 0.0;
    puStack_78 = (undefined8 *)0x0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    FUN_100df95d0(&puStack_c0);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_100f8aea4;
    }
    func_0x0001000bb420(param_3[7] + (long)ppuVar4 * 0x20,&uStack_80);
    func_0x000107c6142c(param_4);
    param_4 = param_3;
  }
  func_0x000107c6142c(param_4);
  func_0x0001007bbff0(&puStack_c0);
  if (lStack_68 == 0) goto LAB_100f8b078;
  uVar5 = 0;
  FUN_100f8b460(0);
  puVar12 = PTR___sypN_11034f1a8;
  plVar6 = &lStack_90;
  puVar15 = &uStack_80;
  func_0x000107c6147c(plVar6,puVar15,PTR___sypN_11034f1a8 + 8,uVar5,6);
  lVar3 = lStack_90;
  if (((ulong)plVar6 & 1) == 0) goto LAB_100f8b08c;
  func_0x000107c3ab38(lStack_90);
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)PTR__UIKeyboardAnimationDurationUserInfoKey_110345ce0;
  func_0x000107c5faec();
  lStack_90 = lVar3;
  puStack_88 = puVar15;
  func_0x000107c61434(puVar15);
  puVar13 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_c0,&lStack_90,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_3[2] == 0) {
LAB_100f8af88:
    param_1 = 0.0;
    puStack_78 = (undefined8 *)0x0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    FUN_100df95d0(&puStack_c0);
    if (((ulong)puVar13 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_100f8af88;
    }
    func_0x0001000bb420(param_3[7] + (long)ppuVar7 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar15);
    puVar15 = param_3;
  }
  func_0x000107c6142c(puVar15);
  func_0x0001007bbff0(&puStack_c0);
  if (lStack_68 == 0) {
LAB_100f8b078:
    func_0x000107c6142c(param_3);
    func_0x00010006e7f4(&uStack_80);
    return;
  }
  plVar6 = &lStack_90;
  puVar15 = &uStack_80;
  func_0x000107c6147c(plVar6,puVar15,puVar12 + 8,PTR___sSdN_11034dd90,6);
  lVar3 = lStack_90;
  if (((ulong)plVar6 & 1) == 0) {
LAB_100f8b08c:
    func_0x000107c6142c(param_3);
    return;
  }
  lVar8 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100f8b26c);
    (*pcVar16)();
  }
  lVar9 = lVar8;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar9 == 0) goto LAB_100f8b08c;
  uVar5 = *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8;
  func_0x000107c5faec();
  uStack_80 = uVar5;
  puStack_78 = puVar15;
  func_0x000107c61434(puVar15);
  puVar13 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_c0,&uStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_3[2] == 0) {
LAB_100f8b0bc:
    param_1 = 0.0;
    puStack_78 = (undefined8 *)0x0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    FUN_100df95d0(&puStack_c0);
    if (((ulong)puVar13 & 1) == 0) {
      func_0x000107c6142c(param_3);
      goto LAB_100f8b0bc;
    }
    func_0x0001000bb420(param_3[7] + (long)ppuVar10 * 0x20,&uStack_80);
    func_0x000107c6142c(puVar15);
    puVar15 = param_3;
  }
  func_0x000107c6142c(puVar15);
  func_0x000107c6142c(param_3);
  func_0x0001007bbff0(&puStack_c0);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    plVar6 = &lStack_90;
    func_0x000107c6147c(plVar6,&uStack_80,puVar12 + 8,PTR___sSiN_11034deb0,6);
    lVar8 = lStack_90;
    if ((int)plVar6 != 0) goto LAB_100f8b118;
  }
  lVar8 = 0;
LAB_100f8b118:
  func_0x000107c3ec60(lVar9);
  func_0x000107c609b0();
  lVar2 = _DAT_112d4fea8;
  cVar1 = *(char *)(unaff_x20 + _DAT_112d4fea8);
  *(bool *)(unaff_x20 + _DAT_112d4fea8) = param_2 - param_1 < 0.0;
  if (lVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x100f8b268);
    (*pcVar16)();
  }
  uVar5 = NEON_fminnm(param_2 - param_1,0);
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar12 = &UNK_110370538;
  func_0x000107c613fc(&UNK_110370538,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  puVar13 = &UNK_110370588;
  func_0x000107c613fc(&UNK_110370588,0x20,7);
  *(undefined **)(puVar13 + 0x10) = puVar12;
  *(undefined8 *)(puVar13 + 0x18) = uVar5;
  pcStack_a0 = FUN_100f8b4a4;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1103705a0;
  puStack_98 = puVar13;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c61574(puStack_98);
  func_0x000107c3dcd4(lVar3,0,puVar11);
  func_0x000107c60bd0(ppuVar14);
  if (cVar1 != *(char *)(unaff_x20 + lVar2)) {
    pcVar16 = *(code **)(unaff_x20 + _DAT_112d4feb8);
    if (pcVar16 != (code *)0x0) {
      uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112d4feb8))[1];
      func_0x000107c6157c(uVar5);
      (*pcVar16)();
      func_0x000107c61170(lVar9);
      func_0x00010058d43c(pcVar16,uVar5);
      return;
    }
  }
  func_0x000107c61170(lVar9);
  return;
}



/* Entry: 100f8b26c; end: 100f8b293; -[_TtC20ModularStickerCutout30RemixTrayWrapperViewController viewDidLoad] */

void FUN_100f8b26c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f8ac18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f8b294; end: 100f8b31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8b294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewSafeAreaInsetsDidChange_11252f568);
  if ((*(byte *)(unaff_x20 + _DAT_112d4fea8) & 1) == 0) {
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f8b320);
      (*pcVar1)();
    }
    func_0x000107c515a0();
    func_0x000107c61170(lVar2);
    *(undefined8 *)(unaff_x20 + _DAT_112d4feb0) = param_3;
  }
  return;
}



/* Entry: 100f8b320; end: 100f8b347; -[_TtC20ModularStickerCutout30RemixTrayWrapperViewController viewSafeAreaInsetsDidChange] */

void FUN_100f8b320(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f8b294();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f8b348; end: 100f8b3ef;  */

void FUN_100f8b348(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f8b3f0);
      (*pcVar1)();
    }
    func_0x000107c60890(auStack_80,0,param_1);
    func_0x000107c5a03c(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100f8b3f0; end: 100f8b43b; -[_TtC20ModularStickerCutout30RemixTrayWrapperViewController initWithNibName:bundle:] */

void FUN_100f8b3f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularStickerCutout.RemixTrayWrapperViewController",0x33,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f8b41c);
  (*pcVar1)();
}



/* Entry: 100f8b43c; end: 100f8b45f;  */

void FUN_100f8b43c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100f8adf0(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f8b460; end: 100f8b4a3;  */

void FUN_100f8b460(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f348 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4f348 = puVar1;
  return;
}



/* Entry: 100f8b4a4; end: 100f8b4b7;  */

void FUN_100f8b4a4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [56];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f8b3f0);
      (*pcVar1)();
    }
    func_0x000107c60890(auStack_80,0,uVar4);
    func_0x000107c5a03c(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100f8b4b8; end: 100f8b7ef;  */

undefined1 FUN_100f8b4b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10d916250;
  func_0x000107c614e0(&UNK_10d916250);
  puVar2 = &UNK_10d916278;
  func_0x000107c614e0(&UNK_10d916278);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 100f8b7f0; end: 100f8b867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f8b7f0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d4fee8;
  lVar2 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d4fef0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112d4fef8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f8b868; end: 100f8b86f;  */

void FUN_100f8b868(void)

{
  if (lRam0000000112d4ff28 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61bf4c);
  return;
}



/* Entry: 100f8b870; end: 100f8b8a7;  */

void FUN_100f8b870(undefined8 param_1)

{
  if (lRam0000000112d4ff28 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61bf4c);
  return;
}



/* Entry: 100f8b8a8; end: 100f8b92b;  */

void FUN_100f8b8a8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100f8b92c();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = &UNK_10d9161f8;
    func_0x000107c61630(param_1,0x100,3,&lStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 100f8b92c; end: 100f8b97b;  */

void FUN_100f8b92c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d4ff38 != 0) {
    return;
  }
  puVar1 = PTR___sSbN_11034dd40;
  func_0x000107c5f214();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d4ff38 = param_1;
  return;
}



/* Entry: 100f8b97c; end: 100f8b987;  */

undefined * FUN_100f8b97c(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 100f8b988; end: 100f8b9af;  */

void FUN_100f8b988(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 100f8b9b0; end: 100f8b9d7;  */

void FUN_100f8b9b0(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  byte bStack_49;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    puVar2 = &UNK_10d916250;
    func_0x000107c614e0(&UNK_10d916250);
    puVar3 = &UNK_10d916278;
    func_0x000107c614e0(&UNK_10d916278);
    bStack_49 = bVar1 & 1;
    func_0x000107c5f210(&bStack_49,lVar4,puVar2,puVar3);
  }
  return;
}



/* Entry: 100f8b9d8; end: 100f8ba7b;  */

long FUN_100f8b9d8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f8ba7c; end: 100f8bb93;  */

undefined8 * FUN_100f8ba7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  lVar6 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = lVar6;
  pcVar5 = (code *)**(undefined8 **)(lVar6 + -8);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  (*pcVar5)(param_1 + 0xb,param_2 + 0xb,lVar6);
  uVar2 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar2;
  param_1[0x12] = param_2[0x12];
  uVar7 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar7;
  uVar1 = param_2[0x15];
  uVar3 = param_2[0x16];
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar3;
  uVar4 = param_2[0x17];
  param_1[0x17] = uVar4;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar4);
  return param_1;
}



/* Entry: 100f8bb94; end: 100f8bd0f;  */

undefined8 * FUN_100f8bb94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x000100083374(param_1 + 0xb,param_2 + 0xb);
  uVar1 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0x15];
  uVar1 = param_2[0x15];
  uVar3 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar2);
  uVar1 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100f8bd10; end: 100f8bd43;  */

void FUN_100f8bd10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  uVar4 = param_2[0x13];
  uVar3 = param_2[0x12];
  uVar5 = param_2[0x14];
  uVar7 = param_2[0x17];
  uVar6 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar7;
  param_1[0x16] = uVar6;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar4;
  param_1[0x12] = uVar3;
  return;
}



/* Entry: 100f8bd44; end: 100f8be37;  */

undefined8 * FUN_100f8bd44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x0001000834e4(param_1 + 0xb);
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  uVar1 = param_1[0x10];
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = uVar2;
  func_0x000107c61574(uVar1);
  uVar2 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61574(uVar2);
  uVar2 = param_2[0x13];
  uVar1 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[0x15];
  uVar1 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar1;
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  func_0x000107c61170(uVar2);
  uVar2 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f8be38; end: 100f8bf0f;  */

int FUN_100f8be38(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f8bf10; end: 100f8bf97;  */

void FUN_100f8bf10(double param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112d4f960 != -1) {
    func_0x000107c61568(0x112d4f960,FUN_100f7de5c);
  }
  uVar1 = uRam00000001137ff0e0;
  func_0x000107c61174(uRam00000001137ff0e0);
  func_0x000107c4b63c();
  func_0x000107c61170(uVar1);
  dRam0000000112d50018 = 60.0;
  if (60.0 < param_1 * 3.0) {
    dRam0000000112d50018 = param_1 * 3.0;
  }
  return;
}



/* Entry: 100f8bf98; end: 100f8c4db;  */

void FUN_100f8bf98(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar7 = 0x112d4f160;
  lStack_160 = param_1;
  func_0x0001000285a8(0x112d4f160,&UNK_10d914e38);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_180 - extraout_x8;
  lVar7 = 0x112d4ffd0;
  func_0x0001000285a8(0x112d4ffd0,&UNK_10d916310);
  lVar11 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar13 - extraout_x8_00;
  FUN_100f8d248();
  puVar2 = &UNK_1103706e0;
  func_0x000107c613fc(&UNK_1103706e0,0xd0,7);
  *(undefined8 *)(puVar2 + 0x98) = uStack_a8;
  *(undefined8 *)(puVar2 + 0x90) = uStack_b0;
  *(undefined8 *)(puVar2 + 0xa8) = uStack_98;
  *(undefined8 *)(puVar2 + 0xa0) = uStack_a0;
  *(undefined8 *)(puVar2 + 0xb8) = uStack_88;
  *(undefined8 *)(puVar2 + 0xb0) = uStack_90;
  *(undefined8 *)(puVar2 + 200) = uStack_78;
  *(undefined8 *)(puVar2 + 0xc0) = uStack_80;
  *(undefined8 *)(puVar2 + 0x58) = uStack_e8;
  *(undefined8 *)(puVar2 + 0x50) = uStack_f0;
  *(undefined8 *)(puVar2 + 0x68) = uStack_d8;
  *(undefined8 *)(puVar2 + 0x60) = uStack_e0;
  *(undefined8 *)(puVar2 + 0x78) = uStack_c8;
  *(undefined8 *)(puVar2 + 0x70) = uStack_d0;
  *(undefined8 *)(puVar2 + 0x88) = uStack_b8;
  *(undefined8 *)(puVar2 + 0x80) = uStack_c0;
  *(undefined8 *)(puVar2 + 0x18) = uStack_128;
  *(undefined8 *)(puVar2 + 0x10) = uStack_130;
  *(undefined8 *)(puVar2 + 0x28) = uStack_118;
  *(undefined8 *)(puVar2 + 0x20) = uStack_120;
  *(undefined8 *)(puVar2 + 0x38) = uStack_108;
  *(undefined8 *)(puVar2 + 0x30) = uStack_110;
  *(undefined8 *)(puVar2 + 0x48) = uStack_f8;
  *(undefined8 *)(puVar2 + 0x40) = uStack_100;
  uVar3 = 0x112d4ffd8;
  func_0x0001000285a8(0x112d4ffd8,&UNK_10d916318);
  uVar6 = uVar3;
  FUN_100f8d28c();
  pcVar4 = FUN_100f8d27c;
  puVar9 = &uStack_150;
  func_0x000107c5f738(lVar10,FUN_100f8d27c,puVar2,0x100f8d284,puVar9,uVar3,uVar6);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_128 = uVar3;
  FUN_100e8b654();
  func_0x000107c61434(uVar3);
  puVar5 = &uStack_130;
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0(puVar5,PTR___sSSN_11034da80,pcVar4);
  uVar3 = 0x112d4fff8;
  func_0x000100f8d324(0x112d4fff8,0x112d4ffd0,&UNK_10d916310,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  lStack_168 = lVar13;
  func_0x000107c5f640(lVar13,puVar5,puVar2,pcVar4,puVar9,lVar7,uVar3);
  func_0x000100f795bc(puVar5,puVar2,pcVar4);
  func_0x000107c6142c(puVar9);
  (**(code **)(lVar11 + 8))(lVar10,lVar7);
  FUN_100f8d248();
  uVar6 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  func_0x000107c5fce8();
  uVar3 = 0x112d45220;
  func_0x000100f8d684(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  puVar2 = &UNK_110370708;
  func_0x000107c613fc(&UNK_110370708,0xe0,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0xa8) = uStack_a8;
  *(undefined8 *)(puVar2 + 0xa0) = uStack_b0;
  *(undefined8 *)(puVar2 + 0xb8) = uStack_98;
  *(undefined8 *)(puVar2 + 0xb0) = uStack_a0;
  *(undefined8 *)(puVar2 + 200) = uStack_88;
  *(undefined8 *)(puVar2 + 0xc0) = uStack_90;
  *(undefined8 *)(puVar2 + 0xd8) = uStack_78;
  *(undefined8 *)(puVar2 + 0xd0) = uStack_80;
  *(undefined8 *)(puVar2 + 0x68) = uStack_e8;
  *(undefined8 *)(puVar2 + 0x60) = uStack_f0;
  *(undefined8 *)(puVar2 + 0x78) = uStack_d8;
  *(undefined8 *)(puVar2 + 0x70) = uStack_e0;
  *(undefined8 *)(puVar2 + 0x88) = uStack_c8;
  *(undefined8 *)(puVar2 + 0x80) = uStack_d0;
  *(undefined8 *)(puVar2 + 0x98) = uStack_b8;
  *(undefined8 *)(puVar2 + 0x90) = uStack_c0;
  *(undefined8 *)(puVar2 + 0x28) = uStack_128;
  *(undefined8 *)(puVar2 + 0x20) = uStack_130;
  *(undefined8 *)(puVar2 + 0x38) = uStack_118;
  *(undefined8 *)(puVar2 + 0x30) = uStack_120;
  *(undefined8 *)(puVar2 + 0x48) = uStack_108;
  *(undefined8 *)(puVar2 + 0x40) = uStack_110;
  *(undefined8 *)(puVar2 + 0x58) = uStack_f8;
  *(undefined8 *)(puVar2 + 0x50) = uStack_100;
  lVar7 = 0;
  func_0x000107c5fd0c();
  lVar11 = *(long *)(lVar7 + -8);
  lVar13 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar13 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uVar12;
  func_0x000107c5fcf4(lVar10);
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,4,0);
  if (iVar1 == 0) {
    lVar13 = 0x112d4f158;
    func_0x0001000285a8(0x112d4f158,&UNK_10d914e30);
    lVar14 = lStack_160;
    puVar5 = (undefined8 *)(lStack_160 + *(int *)(lVar13 + 0x24));
    lVar13 = 0;
    func_0x000107c5f2fc();
    (**(code **)(lVar11 + 0x20))((long)puVar5 + (long)*(int *)(lVar13 + 0x14),lVar10,lVar7);
    *puVar5 = &UNK_10d916330;
    puVar5[1] = puVar2;
    FUN_100f8d400(lStack_168,lVar14);
  }
  else {
    lVar13 = 0;
    func_0x000107c5f330();
    lStack_180 = *(long *)(lVar13 + -8);
    lStack_178 = lVar13;
    lStack_170 = lVar10;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_180 + 0x40));
    lVar13 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    uStack_150 = 0;
    uStack_148 = 0xe000000000000000;
    func_0x000107c602fc(0x11);
    func_0x000107c6142c(uStack_148);
    uStack_150 = 0xd000000000000038;
    uStack_148 = 0x800000010ef1d010;
    uStack_158 = 0x2c;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    uVar6 = uStack_148;
    uVar3 = uStack_150;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar14 = lVar13 - uVar12;
    (**(code **)(lVar11 + 0x10))(lVar14,lVar10,lVar7);
    func_0x000107c5f32c(lVar13,uVar3,uVar6,0,0,lVar14,&UNK_10d916330,puVar2);
    (**(code **)(lVar11 + 8))(lVar10,lVar7);
    lVar10 = lStack_160;
    FUN_100f8d400(lStack_168,lStack_160);
    lVar7 = 0x112d4f168;
    func_0x0001000285a8(0x112d4f168,&UNK_10d914e40);
    (**(code **)(lStack_180 + 0x20))(lVar10 + *(int *)(lVar7 + 0x24),lVar13,lStack_178);
  }
  return;
}



/* Entry: 100f8c4dc; end: 100f8c55f;  */

void FUN_100f8c4dc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    func_0x000107c61434(lVar2);
    lVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = lVar1;
  }
  uStack_40 = uVar3;
  lStack_38 = lVar2;
  func_0x000107c61434(lVar1);
  uVar3 = 0x112d4fc88;
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f774(&uStack_40,uVar3);
  (**(code **)(param_1 + 0xa0))();
  return;
}



/* Entry: 100f8c560; end: 100f8c63b;  */

void FUN_100f8c560(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_2;
  func_0x000107c5f438();
  *param_1 = uVar1;
  param_1[1] = 0x4010000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112d50008;
  pcVar3 = (code *)&UNK_10d916340;
  func_0x0001000285a8(0x112d50008,&UNK_10d916340);
  FUN_100f8c63c((long)param_1 + (long)*(int *)(lVar2 + 0x2c),param_2);
  if (lRam0000000112d50010 != -1) {
    param_2 = 0x112d50010;
    pcVar3 = FUN_100f8bf10;
    func_0x000107c61568(0x112d50010,FUN_100f8bf10);
  }
  uVar1 = uRam0000000112d50018;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_50,uVar1,0,0,1,param_2,pcVar3);
  lVar2 = 0x112d4ffd8;
  func_0x0001000285a8(0x112d4ffd8,&UNK_10d916318);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 100f8c63c; end: 100f8cb13;  */

void FUN_100f8c63c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  undefined *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar20;
  undefined8 *puVar21;
  long alStack_170 [15];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined *puStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined1 uStack_70;
  
  lVar13 = 0x112d50020;
  alStack_170[4] = param_1;
  func_0x0001000285a8(0x112d50020,&UNK_10d916348);
  alStack_170[2] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = (long)alStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_170[5] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(lVar13 - extraout_x12);
  lVar13 = 0x112d50028;
  func_0x0001000285a8(0x112d50028,&UNK_10d916350);
  alStack_170[1] = *(long *)(*(long *)(lVar13 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(alStack_170[1] + 0xfU & 0xfffffffffffffff0);
  alStack_170[3] = (long)puVar21 - extraout_x8_00;
  FUN_100f8cb14();
  puStack_b0 = *(undefined **)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uStack_a8 = uVar8;
  FUN_100e8b654();
  func_0x000107c61434(uVar8);
  ppuVar7 = &puStack_b0;
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0(ppuVar7,PTR___sSSN_11034da80,lVar13);
  if (lRam0000000112d4f960 != -1) {
    func_0x000107c61568(0x112d4f960,FUN_100f7de5c);
  }
  uVar8 = uRam00000001137ff0e0;
  func_0x000107c61174();
  func_0x000107c5f5ac();
  uVar9 = uVar8;
  ppuVar15 = ppuVar7;
  puVar12 = puVar10;
  lVar18 = lVar13;
  func_0x000107c5f5d4();
  func_0x000107c61574(uVar8);
  func_0x000100f795bc(ppuVar7,puVar10,lVar13);
  func_0x000107c6142c(param_5);
  puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  puVar11 = puVar10;
  uVar16 = uVar9;
  ppuVar7 = ppuVar15;
  puVar19 = puVar12;
  func_0x000107c5f5d0();
  func_0x000107c61574(puVar10);
  func_0x000100f795bc(uVar9,ppuVar15,puVar12);
  func_0x000107c6142c(lVar18);
  puVar10 = &UNK_10d916358;
  func_0x000107c614e0();
  puVar12 = &UNK_10d916388;
  func_0x000107c614e0();
  lVar13 = 0x112d50030;
  func_0x0001000285a8(0x112d50030,&UNK_10d9163b8);
  puVar1 = (undefined8 *)((long)puVar21 + (long)*(int *)(lVar13 + 0x24));
  lVar13 = 0x112d50038;
  func_0x0001000285a8(0x112d50038,&UNK_10d9163c0);
  iVar3 = *(int *)(lVar13 + 0x1c);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI4TextV14TruncationModeO4tailyA2EmFWC_1103493c0;
  lVar13 = 0;
  func_0x000107c5f5cc();
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar13);
  uStack_d0 = 2;
  uStack_c8 = 0;
  uStack_b8 = 1;
  puVar14 = &UNK_10d9163c8;
  puStack_f8 = puVar11;
  uStack_f0 = uVar16;
  uStack_e8 = (char)ppuVar7;
  puStack_e0 = puVar19;
  puStack_d8 = puVar10;
  puStack_c0 = puVar12;
  func_0x000107c614e0();
  *puVar1 = puVar14;
  *(undefined1 *)(puVar21 + 8) = uStack_b8;
  puVar6 = puStack_c0;
  puVar14 = puStack_d8;
  uVar8 = CONCAT71(uStack_c7,uStack_c8);
  puVar21[5] = uStack_d0;
  puVar21[4] = puVar14;
  puVar21[7] = puVar6;
  puVar21[6] = uVar8;
  puVar6 = puStack_e0;
  puVar14 = puStack_f8;
  uVar8 = CONCAT71(uStack_e7,uStack_e8);
  puVar21[1] = uStack_f0;
  *puVar21 = puVar14;
  puVar21[3] = puVar6;
  puVar21[2] = uVar8;
  uStack_88 = 2;
  uStack_80 = 0;
  uStack_70 = 1;
  puStack_b0 = puVar11;
  uStack_a8 = uVar16;
  uStack_a0 = (char)ppuVar7;
  puStack_98 = puVar19;
  puStack_90 = puVar10;
  puStack_78 = puVar12;
  FUN_100f8d4cc(&puStack_f8,alStack_170 + 6,0x112d50040,&UNK_10d9163f8);
  func_0x000100f8d514(&puStack_b0,0x112d50040,&UNK_10d9163f8);
  lVar13 = 0x112d50048;
  pcVar17 = (code *)&UNK_10d916400;
  func_0x0001000285a8(0x112d50048,&UNK_10d916400);
  *(undefined2 *)((long)puVar21 + (long)*(int *)(lVar13 + 0x24)) = 0x100;
  if (lRam0000000112d50010 != -1) {
    lVar13 = 0x112d50010;
    pcVar17 = FUN_100f8bf10;
    func_0x000107c61568(0x112d50010,FUN_100f8bf10);
  }
  uVar8 = uRam0000000112d50018;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(alStack_170 + 6,uVar8,0,0,1,lVar13,pcVar17);
  puVar1 = (undefined8 *)((long)puVar21 + (long)*(int *)(alStack_170[2] + 0x24));
  puVar1[1] = alStack_170[7];
  *puVar1 = alStack_170[6];
  puVar1[3] = alStack_170[9];
  puVar1[2] = alStack_170[8];
  puVar1[5] = alStack_170[0xb];
  puVar1[4] = alStack_170[10];
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = alStack_170[3];
  lVar20 = ((long)puVar21 - extraout_x8_00) - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100c9d2f8(alStack_170[3],lVar20);
  lVar5 = alStack_170[5];
  FUN_100f8d4cc(puVar21,alStack_170[5],0x112d50020,&UNK_10d916348);
  lVar4 = alStack_170[4];
  FUN_100c9d2f8(lVar20,alStack_170[4]);
  lVar13 = 0x112d50050;
  func_0x0001000285a8(0x112d50050,&UNK_10d916408);
  FUN_100f8d4cc(lVar5,lVar4 + *(int *)(lVar13 + 0x30),0x112d50020,&UNK_10d916348);
  func_0x000100f8d514(puVar21,0x112d50020,&UNK_10d916348);
  func_0x000100c9d348(lVar18);
  func_0x000100f8d514(lVar5,0x112d50020,&UNK_10d916348);
  func_0x000100c9d348(lVar20);
  return;
}



/* Entry: 100f8cb14; end: 100f8ce5b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100f8cb14(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  double *pdVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  long unaff_x20;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  double dVar15;
  undefined8 auStack_d0 [5];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar7 = 0;
  func_0x000107c5f37c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar10 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)auStack_d0 + lVar10);
  iVar6 = *(int *)(lVar7 + 0x14);
  uVar5 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar7 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))((long)puVar12 + (long)iVar6,uVar5,lVar7);
  auVar13 = NEON_fmov(0x402c000000000000,8);
  *(long *)((long)auStack_d0 + lVar10 + 8U) = auVar13._8_8_;
  *puVar12 = auVar13._0_8_;
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar9 = puVar8;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  func_0x000100f8d554(puVar12,param_1);
  lVar10 = 0x112d50058;
  puVar11 = &UNK_10d916410;
  func_0x0001000285a8(0x112d50058,&UNK_10d916410);
  *(undefined **)(param_1 + *(int *)(lVar10 + 0x34)) = puVar9;
  *(undefined2 *)(param_1 + *(int *)(lVar10 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(auStack_d0 + 1,0x404b800000000000,0,0x404b800000000000,0,lVar10,puVar11);
  lVar10 = 0x112d50060;
  puVar11 = &UNK_10d916418;
  func_0x0001000285a8();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  puVar1[1] = auStack_d0[2];
  *puVar1 = auStack_d0[1];
  puVar1[3] = auStack_d0[4];
  puVar1[2] = auStack_d0[3];
  puVar1[5] = uStack_a0;
  puVar1[4] = uStack_a8;
  func_0x000107c5f7ac();
  lVar7 = 0x112d50068;
  func_0x0001000285a8(0x112d50068,&UNK_10d916420);
  lVar2 = param_1 + *(int *)(lVar7 + 0x24);
  FUN_100f8d07c(lVar2);
  lVar7 = 0x112d50070;
  func_0x0001000285a8(0x112d50070,&UNK_10d916428);
  plVar3 = (long *)(lVar2 + *(int *)(lVar7 + 0x24));
  *plVar3 = lVar10;
  plVar3[1] = (long)puVar11;
  uVar14 = 0x4000000000000000;
  if (*(char *)(unaff_x20 + 0x50) == '\0') {
    uVar14 = 0x3ff0000000000000;
  }
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar10 = 0x112d50028;
  func_0x0001000285a8(0x112d50028,&UNK_10d916350);
  param_1 = param_1 + *(int *)(lVar10 + 0x24);
  func_0x000107c5f2b4(&dStack_98,uVar14,0x4024000000000000,0,0,0,
                      PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100f8d554(puVar12,param_1);
  dVar15 = dStack_98 * 0.5;
  lVar10 = 0x112d50078;
  func_0x0001000285a8(0x112d50078,&UNK_10d916430);
  lVar2 = param_1 + *(int *)(lVar10 + 0x44);
  func_0x000100f8d554(puVar12,lVar2);
  lVar10 = 0;
  func_0x000107c5f378();
  *(double *)(lVar2 + *(int *)(lVar10 + 0x14)) = dVar15;
  lVar10 = 0x112d50080;
  func_0x0001000285a8(0x112d50080,&UNK_10d916438);
  pdVar4 = (double *)(lVar2 + *(int *)(lVar10 + 0x24));
  pdVar4[1] = dStack_90;
  *pdVar4 = dStack_98;
  pdVar4[3] = dStack_80;
  pdVar4[2] = dStack_88;
  pdVar4[4] = dStack_78;
  lVar10 = 0x112d50088;
  puVar11 = &UNK_10d916440;
  func_0x0001000285a8();
  *(undefined **)(lVar2 + *(int *)(lVar10 + 0x34)) = puVar8;
  *(undefined2 *)(lVar2 + *(int *)(lVar10 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  lVar7 = 0x112d50090;
  puVar8 = &UNK_10d916448;
  func_0x0001000285a8();
  plVar3 = (long *)(lVar2 + *(int *)(lVar7 + 0x24));
  *plVar3 = lVar10;
  plVar3[1] = (long)puVar11;
  func_0x000107c5f7ac();
  lVar10 = 0x112d50098;
  func_0x0001000285a8(0x112d50098,&UNK_10d916450);
  plVar3 = (long *)(param_1 + *(int *)(lVar10 + 0x24));
  *plVar3 = lVar7;
  plVar3[1] = (long)puVar8;
  func_0x000100f8d598(puVar12);
  return;
}



/* Entry: 100f8ce5c; end: 100f8ceeb;  */

void FUN_100f8ce5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  uVar3 = 0x112d45220;
  func_0x000100f8d684(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f8ceec,uVar2,uVar3);
  return;
}



/* Entry: 100f8ceec; end: 100f8cfc7;  */

void FUN_100f8ceec(void)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar7 = *(undefined8 **)(unaff_x22 + 0x68);
  uVar1 = puVar7[8] & 0xffffffffffff;
  if ((puVar7[9] & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar7[9] >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar3 = puVar7[0xe];
    lVar4 = puVar7[0xf];
    func_0x0001000a8868(puVar7 + 0xb,uVar3);
    uVar8 = *puVar7;
    *(undefined8 *)(unaff_x22 + 0x18) = puVar7[1];
    *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
    uVar8 = puVar7[6];
    uVar10 = puVar7[9];
    uVar9 = puVar7[8];
    uVar14 = puVar7[3];
    uVar13 = puVar7[2];
    uVar12 = puVar7[5];
    uVar11 = puVar7[4];
    *(undefined8 *)(unaff_x22 + 0x48) = puVar7[7];
    *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
    piVar6 = *(int **)(lVar4 + 0x10);
    iVar2 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100f8cfc8;
                    /* WARNING: Could not recover jumptable at 0x000100f8cfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar6))(plVar5,unaff_x22 + 0x10,uVar3,lVar4);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100f8cfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f8cfc8; end: 100f8d013;  */

void FUN_100f8cfc8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x90) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100f8d014,*(undefined8 *)(lVar1 + 0x78),*(undefined8 *)(lVar1 + 0x80));
  return;
}



/* Entry: 100f8d014; end: 100f8d07b;  */

void FUN_100f8d014(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  uVar1 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f730((undefined8 *)(unaff_x22 + 0x60),uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100f8d078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f8d07c; end: 100f8d237;  */

void FUN_100f8d07c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5f6f0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_58 = *(undefined8 *)(param_2 + 0xb8);
  uStack_60 = *(undefined8 *)(param_2 + 0xb0);
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(&lStack_68);
  if (lStack_68 == 0) {
    lVar1 = 0x112d500a0;
    func_0x0001000285a8(0x112d500a0,&UNK_10d916458);
    pcVar5 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  else {
    lVar2 = lStack_68;
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5f6e8();
    (**(code **)(lVar7 + 0x68))
              (puVar6,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar1);
    puVar4 = puVar6;
    func_0x000107c5f6fc(0,0,0,0,puVar6,lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(lVar3);
    (**(code **)(lVar7 + 8))(puVar6,lVar1);
    lVar1 = 0x112d500a0;
    func_0x0001000285a8(0x112d500a0,&UNK_10d916458);
    lVar2 = (long)param_1 + (long)*(int *)(lVar1 + 0x24);
    func_0x000100f8d554(param_3,lVar2);
    lVar7 = 0x112d500a8;
    func_0x0001000285a8(0x112d500a8,&UNK_10d916460);
    *(undefined2 *)(lVar2 + *(int *)(lVar7 + 0x24)) = 0x100;
    *param_1 = puVar4;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0x101;
    pcVar5 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  }
  (*pcVar5)(param_1,lStack_68 == 0,1,lVar1);
  return;
}



/* Entry: 100f8d238; end: 100f8d247;  */

void FUN_100f8d238(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f8d248; end: 100f8d27b;  */

undefined8 FUN_100f8d248(undefined8 param_1,undefined8 param_2)

{
  FUN_100f8ba7c(param_2,param_1,&UNK_1103706a8);
  return param_2;
}



/* Entry: 100f8d27c; end: 100f8d28b;  */

void FUN_100f8d27c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar2 = *(long *)(unaff_x20 + 0x38);
    func_0x000107c61434(lVar2);
    lVar1 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    lVar2 = lVar1;
  }
  uStack_40 = uVar3;
  lStack_38 = lVar2;
  func_0x000107c61434(lVar1);
  uVar3 = 0x112d4fc88;
  func_0x0001000285a8(0x112d4fc88,&UNK_10d915ed0);
  func_0x000107c5f774(&uStack_40,uVar3);
  (**(code **)(unaff_x20 + 0xb0))();
  return;
}



/* Entry: 100f8d28c; end: 100f8d367;  */

void FUN_100f8d28c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d4ffe0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4ffd8;
  func_0x00010002969c(0x112d4ffd8,&UNK_10d916318);
  uVar2 = 0x112d4ffe8;
  func_0x000100f8d324(0x112d4ffe8,0x112d4fff0,&UNK_10d916320,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  puStack_28 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4ffe0 = puVar3;
  return;
}



/* Entry: 100f8d368; end: 100f8d3c3;  */

void FUN_100f8d368(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100f8d3c4;
  plVar5[0xd] = unaff_x20 + 0x20;
  lVar3 = 0;
  func_0x000107c5fcec(0,uVar1);
  puVar2 = PTR___sScMMa_11034fc70;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0xe] = lVar4;
  lVar4 = 0x112d45220;
  func_0x000100f8d684(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[0xf] = lVar3;
  plVar5[0x10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f8ceec,lVar3,lVar4);
  return;
}



/* Entry: 100f8d3c4; end: 100f8d3ff;  */

void FUN_100f8d3c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f8d3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f8d400; end: 100f8d44f;  */

undefined8 FUN_100f8d400(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d4f160;
  func_0x0001000285a8(0x112d4f160,&UNK_10d914e38);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100f8d450; end: 100f8d4cb;  */

void FUN_100f8d450(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000107c5f5cc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  func_0x000107c5f3a8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 100f8d4cc; end: 100f8d71f;  */

undefined8 FUN_100f8d4cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100f8d720; end: 100f8d7e7;  */

undefined8 * FUN_100f8d720(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 100f8d7e8; end: 100f8d83b;  */

undefined8 * FUN_100f8d7e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100f8d83c; end: 100f8d8e3;  */

int FUN_100f8d83c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f8d8e4; end: 100f8dbaf;  */

void FUN_100f8d8e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_220 [80];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = param_2;
  func_0x000107c5f410();
  uStack_158 = 0x4020000000000000;
  uStack_150 = 0;
  uStack_160 = uVar4;
  FUN_100f8dbb0(&uStack_1d0,param_2,param_3,param_4,param_5);
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_b8 = uStack_198;
  uStack_c0 = uStack_1a0;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_d8 = uStack_1b8;
  uStack_e0 = uStack_1c0;
  uStack_78 = uStack_1a8;
  uStack_80 = uStack_1b0;
  uStack_68 = uStack_198;
  uStack_70 = uStack_1a0;
  uStack_58 = uStack_188;
  uStack_60 = uStack_190;
  uStack_88 = uStack_1b8;
  uStack_90 = uStack_1c0;
  uStack_a8 = uStack_188;
  uStack_b0 = uStack_190;
  uStack_98 = uStack_1c8;
  uStack_a0 = uStack_1d0;
  FUN_100f8de28(&uStack_f0,auStack_220,0x112d500c0,&UNK_10d9164d8);
  func_0x000100f8de70(&uStack_a0,0x112d500c0,&UNK_10d9164d8);
  uStack_130 = uStack_d8;
  uStack_138 = uStack_e0;
  uStack_120 = uStack_c8;
  uStack_128 = uStack_d0;
  uStack_110 = uStack_b8;
  uStack_118 = uStack_c0;
  uStack_100 = uStack_a8;
  uStack_108 = uStack_b0;
  uStack_140 = uStack_e8;
  uStack_148 = uStack_f0;
  uVar8 = uStack_b0;
  func_0x000107c5f590();
  uVar4 = 0x112d500c8;
  func_0x0001000285a8(0x112d500c8,&UNK_10d9164e0);
  uVar5 = 0x112d500d0;
  FUN_100f8e108(0x112d500d0,0x112d500c8,&UNK_10d9164e0,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  func_0x000107c5f5fc(param_1,uVar8,0,uVar4,uVar5);
  func_0x000100f8de70(&uStack_160,0x112d500c8,&UNK_10d9164e0);
  puVar6 = &UNK_10d9164e8;
  func_0x000107c614e0();
  lVar7 = 0x112d500d8;
  func_0x0001000285a8(0x112d500d8,&UNK_10d916518);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = puVar6;
  puVar1[1] = param_5;
  func_0x000107c6157c();
  uVar3 = (undefined1)param_5;
  func_0x000107c5f56c();
  lVar7 = 0x112d500e0;
  func_0x0001000285a8();
  puVar2 = (undefined1 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar2 = uVar3;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x28] = 1;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_1d0,0,1,0,1,0,1,0x404a000000000000,0,0,1);
  lVar7 = 0x112d500e8;
  func_0x0001000285a8();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar1[9] = uStack_188;
  puVar1[8] = uStack_190;
  puVar1[0xb] = uStack_178;
  puVar1[10] = uStack_180;
  puVar1[0xd] = uStack_168;
  puVar1[0xc] = uStack_170;
  puVar1[1] = uStack_1c8;
  *puVar1 = uStack_1d0;
  puVar1[3] = uStack_1b8;
  puVar1[2] = uStack_1c0;
  puVar1[5] = uStack_1a8;
  puVar1[4] = uStack_1b0;
  puVar1[7] = uStack_198;
  puVar1[6] = uStack_1a0;
  func_0x000107c5f7ac();
  func_0x000107c5f388(&uStack_160,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar7 = 0x112d500f0;
  func_0x0001000285a8(0x112d500f0,&UNK_10d916530);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  puVar1[9] = uStack_118;
  puVar1[8] = uStack_120;
  puVar1[0xb] = uStack_108;
  puVar1[10] = uStack_110;
  puVar1[0xd] = uStack_f8;
  puVar1[0xc] = uStack_100;
  puVar1[1] = uStack_158;
  *puVar1 = uStack_160;
  puVar1[3] = uStack_148;
  puVar1[2] = CONCAT71(uStack_14f,uStack_150);
  puVar1[5] = uStack_138;
  puVar1[4] = uStack_140;
  puVar1[7] = uStack_128;
  puVar1[6] = uStack_130;
  return;
}



/* Entry: 100f8dbb0; end: 100f8de0f;  */

void FUN_100f8dbb0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [72];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar1 = 0;
  uStack_1f0 = param_3;
  func_0x000107c5eccc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = auStack_1e8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = 0;
  func_0x000107c5eca0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  if (param_2 != 0) {
    func_0x000107c61174();
    func_0x000107c5f6e8();
    func_0x000107c6157c();
  }
  func_0x000107c61434(param_4);
  func_0x000107c5ecc8(puVar5);
  func_0x000107c5eca4(lVar7,uStack_1f0,param_4);
  uVar4 = SUB81(puVar5,0);
  FUN_100f90c90(lVar8,5);
  (**(code **)(lVar6 + 8))(lVar7);
  func_0x000107c5f5dc();
  puVar2 = &UNK_10d916538;
  func_0x000107c614e0();
  puVar3 = &UNK_10d916568;
  func_0x000107c614e0();
  lStack_128 = 1;
  uStack_120 = 0;
  lStack_110 = 0x3fe8000000000000;
  uStack_e0 = 1;
  uStack_d8 = 0;
  uStack_c8 = 0x3fe8000000000000;
  lStack_150 = lVar8;
  lStack_148 = lVar1;
  uStack_140 = uVar4;
  lStack_138 = param_5;
  puStack_130 = puVar2;
  puStack_118 = puVar3;
  lStack_108 = lVar8;
  lStack_100 = lVar1;
  uStack_f8 = uVar4;
  lStack_f0 = param_5;
  puStack_e8 = puVar2;
  puStack_d0 = puVar3;
  FUN_100f8de28(&lStack_150,&lStack_c0,0x112d4fb70,&UNK_10d915bb8);
  func_0x000100f8de70(&lStack_108,0x112d4fb70,&UNK_10d915bb8);
  lStack_170 = CONCAT71(uStack_11f,uStack_120);
  lStack_178 = lStack_128;
  puStack_180 = puStack_130;
  puStack_168 = puStack_118;
  lStack_160 = lStack_110;
  lStack_190 = CONCAT71(uStack_13f,uStack_140);
  lStack_198 = lStack_148;
  lStack_1a0 = lStack_150;
  lStack_188 = lStack_138;
  lStack_98 = lStack_128;
  puStack_a0 = puStack_130;
  puStack_88 = puStack_118;
  lStack_80 = lStack_110;
  lStack_b8 = lStack_148;
  lStack_c0 = lStack_150;
  lStack_a8 = lStack_138;
  lStack_b0 = lStack_190;
  lStack_90 = lStack_170;
  func_0x000107c6157c(param_2);
  FUN_100f8de28(&lStack_c0,auStack_1e8,0x112d4fb70,&UNK_10d915bb8);
  func_0x000107c61574(param_2);
  *param_1 = param_2;
  param_1[4] = lStack_a8;
  param_1[3] = lStack_b0;
  param_1[6] = lStack_98;
  param_1[5] = (long)puStack_a0;
  param_1[8] = (long)puStack_88;
  param_1[7] = lStack_90;
  param_1[9] = lStack_80;
  param_1[2] = lStack_b8;
  param_1[1] = lStack_c0;
  func_0x000100f8de70(&lStack_1a0,0x112d4fb70,&UNK_10d915bb8);
  func_0x000107c61574(param_2);
  return;
}


