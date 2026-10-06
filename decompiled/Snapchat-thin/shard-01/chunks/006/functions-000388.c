/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10120653c; end: 101206a9f;  */

void FUN_10120653c(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  lStack_68 = param_3;
  func_0x000107c5eec8();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112d68090;
  lStack_a0 = lVar12;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_70 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  lVar9 = 0x112d68078;
  func_0x0001000285a8(0x112d68078,&UNK_10d92c040);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar7 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_90 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lVar9 = 0x112d3bc20;
  uVar3 = 0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  uVar8 = lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = uVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar11 - extraout_x12_01;
  lVar9 = *param_1;
  lStack_88 = param_2;
  plStack_80 = param_1;
  if (*(long *)(lVar9 + 0x10) == 0) {
    lVar9 = 0x112d68080;
    func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar7,1,1,lVar9);
  }
  else {
    lStack_98 = lVar13;
    FUN_100fda8d4(param_2);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      lVar9 = 0x112d68080;
      func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
      pcVar6 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
    }
    else {
      lVar13 = *(long *)(lVar9 + 0x38);
      lVar9 = 0x112d68080;
      func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
      lVar15 = *(long *)(lVar9 + -8);
      FUN_101207b20(lVar13 + *(long *)(lVar15 + 0x48) * param_2,lVar7,0x112d68080,&UNK_10d92c048);
      pcVar6 = *(code **)(lVar15 + 0x38);
    }
    (*pcVar6)(lVar7,bVar1,1,lVar9);
    lVar13 = lStack_98;
  }
  lVar9 = 0x112d68080;
  func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
  lVar15 = lVar7;
  (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar7,1,lVar9);
  if ((int)lVar15 == 0) {
    pcVar10 = *(code **)(lVar13 + 0x10);
    (*pcVar10)(lVar14,lVar7,lVar2);
    func_0x000101207b68(lVar7,0x112d68078,&UNK_10d92c040);
    pcVar6 = *(code **)(lVar13 + 0x38);
    (*pcVar6)(lVar14,0,1,lVar2);
  }
  else {
    func_0x000101207b68(lVar7,0x112d68078,&UNK_10d92c040);
    pcVar6 = *(code **)(lVar13 + 0x38);
    (*pcVar6)(lVar14,1,1,lVar2);
    pcVar10 = *(code **)(lVar13 + 0x10);
  }
  (*pcVar10)(lVar11,lStack_68,lVar2);
  (*pcVar6)(lVar11,0,1,lVar2);
  lVar9 = (long)*(int *)(lStack_70 + 0x30);
  FUN_101207b20(lVar14,lVar12,0x112d3bc20,&UNK_10d904ef0);
  FUN_101207b20(lVar11,lVar12 + lVar9,0x112d3bc20,&UNK_10d904ef0);
  pcVar6 = *(code **)(lVar13 + 0x30);
  lVar7 = lVar12;
  (*pcVar6)(lVar12,1,lVar2);
  uVar3 = uStack_78;
  if ((int)lVar7 == 1) {
    func_0x000101207b68(lVar11,0x112d3bc20,&UNK_10d904ef0);
    func_0x000101207b68(lVar14,0x112d3bc20,&UNK_10d904ef0);
    lVar9 = lVar12 + lVar9;
    (*pcVar6)(lVar9,1,lVar2);
    if ((int)lVar9 == 1) {
      func_0x000101207b68(lVar12,0x112d3bc20,&UNK_10d904ef0);
LAB_101206a54:
      lVar12 = lStack_90;
      FUN_101206aa0(lStack_90,lStack_88);
      uVar4 = 0x112d68078;
      puVar5 = &UNK_10d92c040;
      goto LAB_101206a78;
    }
  }
  else {
    lStack_68 = lVar14;
    FUN_101207b20(lVar12,uStack_78,0x112d3bc20,&UNK_10d904ef0);
    lVar7 = lVar12 + lVar9;
    (*pcVar6)(lVar7,1,lVar2);
    lVar14 = lStack_a0;
    if ((int)lVar7 != 1) {
      lVar7 = lStack_a0;
      (**(code **)(lVar13 + 0x20))(lStack_a0,lVar12 + lVar9,lVar2);
      FUN_101207ba8();
      uVar8 = uVar3;
      func_0x000107c5fab8(uVar3,lVar14,lVar2,lVar7);
      pcVar6 = *(code **)(lVar13 + 8);
      (*pcVar6)(lVar14,lVar2);
      func_0x000101207b68(lVar11,0x112d3bc20,&UNK_10d904ef0);
      func_0x000101207b68(lStack_68,0x112d3bc20,&UNK_10d904ef0);
      (*pcVar6)(uVar3,lVar2);
      func_0x000101207b68(lVar12,0x112d3bc20,&UNK_10d904ef0);
      if ((uVar8 & 1) == 0) {
        return;
      }
      goto LAB_101206a54;
    }
    func_0x000101207b68(lVar11,0x112d3bc20,&UNK_10d904ef0);
    func_0x000101207b68(lStack_68,0x112d3bc20,&UNK_10d904ef0);
    (**(code **)(lVar13 + 8))(uVar3,lVar2);
  }
  uVar4 = 0x112d68090;
  puVar5 = &UNK_10da24400;
LAB_101206a78:
  func_0x000101207b68(lVar12,uVar4,puVar5);
  return;
}



/* Entry: 101206aa0; end: 101206d57;  */

void FUN_101206aa0(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_100fda8d4();
  if ((param_3 & 1) == 0) {
    lVar2 = 0x112d68080;
    func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1012073ec();
    }
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar2 = 0x112d68080;
    func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
    lVar6 = *(long *)(lVar2 + -8);
    FUN_1012071e4(lVar5 + *(long *)(lVar6 + 0x48) * param_2,param_1,0x112d68080,&UNK_10d92c048);
    FUN_101207960(param_2,lVar4);
    *unaff_x20 = lVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101206b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,lVar2);
  return;
}



/* Entry: 101206d58; end: 101206dcb;  */

void FUN_101206d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  uVar2 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101206dcc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0x10,param_4,uVar2);
  return;
}



/* Entry: 101206dcc; end: 101206e13;  */

void FUN_101206dcc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101206e14,0,0);
  return;
}



/* Entry: 101206e14; end: 101206e67;  */

void FUN_101206e14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(unaff_x22 + 0x20))(uVar1,uVar2,0);
  func_0x0001000b44c0(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101206e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101206e68; end: 101206ef7; -[_TtC33ComposerMusicDependenciesProvider15AudioDataLoader loadAudioDataForTrackWithTrack:callback:] */

void FUN_101206e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110393c40;
  func_0x000107c613fc(&UNK_110393c40,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101205a34(param_3,FUN_101207004,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101206ef8; end: 101206f4b;  */

void FUN_101206ef8(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101206f4c; end: 101206fab; -[_TtC33ComposerMusicDependenciesProvider15AudioDataLoader init] */

void FUN_101206f4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerMusicDependenciesProvider.AudioDataLoader",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101206f78);
  (*pcVar1)();
}



/* Entry: 101206fac; end: 101206fe3; -[_TtC33ComposerMusicDependenciesProvider15AudioDataLoader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101206fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101206fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101206fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d68038));
  return;
}



/* Entry: 101206fe4; end: 101207003;  */

void FUN_101206fe4(void)

{
  func_0x000107c61168(&PTR_PTR_1127bb190);
  return;
}



/* Entry: 101207004; end: 10120700b;  */

void FUN_101207004(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10120700c; end: 101207027;  */

void FUN_10120700c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101205b9c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101207028; end: 101207093;  */

void FUN_101207028(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101207bec;
  plVar5[4] = lVar1;
  plVar5[5] = lVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  plVar5[6] = (long)plVar3;
  uVar4 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  *plVar3 = (long)plVar5;
  plVar3[1] = (long)FUN_101206dcc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(plVar5 + 2,uVar6,uVar4);
  return;
}



/* Entry: 101207094; end: 1012071a7;  */

void FUN_101207094(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar11 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  lVar5 = 0;
  func_0x000107c5eec8();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + uVar9 + 0x20 + 8 & (uVar7 ^ 0xffffffffffffffff);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + uVar9);
  lVar2 = ((long *)(unaff_x20 + uVar9))[1];
  plVar6 = (long *)(unaff_x20 + uVar9 + 0x10);
  lVar10 = *(long *)(unaff_x20 + uVar9 + 0x20);
  lVar1 = *plVar6;
  lVar3 = plVar6[1];
  lVar5 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar7 + 7 & 0xffffffffffffff8));
  plVar6 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1012071a8;
  plVar6[0x14] = unaff_x20 + uVar7;
  plVar6[0x15] = lVar5;
  plVar6[0x12] = lVar3;
  plVar6[0x13] = lVar10;
  plVar6[0x10] = lVar2;
  plVar6[0x11] = lVar1;
  plVar6[0xe] = unaff_x20 + uVar11;
  plVar6[0xf] = lVar4;
  plVar6[0xc] = param_1;
  plVar6[0xd] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012062ec,0,0);
  return;
}



/* Entry: 1012071a8; end: 1012071e3;  */

void FUN_1012071a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012071e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1012071e4; end: 10120722b;  */

undefined8 FUN_1012071e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10120722c; end: 1012073eb;  */

void FUN_10120722c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0x112d68080;
  func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
  FUN_1012071e4(param_3,lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,0x112d68080,
                &UNK_10d92c048);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012072d4);
  (*pcVar1)();
}



/* Entry: 1012073ec; end: 10120790f;  */

void FUN_1012073ec(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  
  lVar3 = 0x112d68080;
  func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d68088,&UNK_10d92c060);
  lVar8 = *unaff_x20;
  lVar3 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) == 0) {
    func_0x000107c61574(lVar8);
LAB_1012075d8:
    *unaff_x20 = lVar3;
    return;
  }
  lVar1 = lVar8 + 0x40;
  uVar5 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar3 != lVar8) || (lVar1 + uVar5 * 8 <= lVar3 + 0x40U)) {
    func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar5 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
  uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
  if (uVar5 == 0) goto LAB_101207528;
  do {
    uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar5 = uVar5 - 1 & uVar5;
    while( true ) {
      uVar7 = LZCOUNT(uVar7) | lVar11 << 6;
      uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
      lVar10 = *(long *)(lVar4 + 0x48) * uVar7;
      FUN_101207b20(*(long *)(lVar8 + 0x38) + lVar10,auStack_90 + -extraout_x8,0x112d68080,
                    &UNK_10d92c048);
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar7 * 8) = uVar9;
      FUN_1012071e4(auStack_90 + -extraout_x8,*(long *)(lVar3 + 0x38) + lVar10,0x112d68080,
                    &UNK_10d92c048);
      if (uVar5 != 0) break;
LAB_101207528:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101207600);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar8);
          goto LAB_1012075d8;
        }
        uVar5 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Entry: 101207910; end: 10120795f;  */

undefined8 FUN_101207910(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d68080;
  func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101207960; end: 101207b07;  */

void FUN_101207960(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar12 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar13 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar13 = uVar13 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar11 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined8 *)(lVar11 + uVar12 * 8);
      func_0x000107c60688(uVar7,*puVar2);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar13) {
        if (uVar13 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_101207a38:
          puVar3 = (undefined8 *)(lVar11 + param_1 * 8);
          if ((param_1 != uVar12) || (puVar2 + 1 <= puVar3)) {
            *puVar3 = *puVar2;
          }
          lVar11 = *(long *)(param_2 + 0x38);
          lVar5 = 0x112d68080;
          func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
          lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
          lVar8 = lVar10 * param_1;
          uVar7 = lVar11 + lVar8;
          lVar9 = lVar10 * uVar12;
          lVar11 = lVar11 + lVar9;
          param_1 = uVar12;
          if (lVar8 < lVar9 || (ulong)(lVar11 + lVar10) <= uVar7) {
            func_0x000107c61414(uVar7,lVar11,1,lVar5);
          }
          else if (lVar8 - lVar9 != 0) {
            func_0x000107c61410(uVar7,lVar11,1);
          }
        }
      }
      else if (uVar13 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_101207a38;
      uVar12 = uVar12 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101207b08);
  (*pcVar4)();
}



/* Entry: 101207b08; end: 101207b1f;  */

void FUN_101207b08(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10120653c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101207b20; end: 101207ba7;  */

undefined8 FUN_101207b20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101207ba8; end: 101207beb;  */

void FUN_101207ba8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d68098 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eec8(0xff);
  puVar2 = PTR___s10Foundation4UUIDVSQAAMc_110350c50;
  func_0x000107c61520(PTR___s10Foundation4UUIDVSQAAMc_110350c50,uVar1);
  puRam0000000112d68098 = puVar2;
  return;
}



/* Entry: 101207bec; end: 101207bef;  */

void FUN_101207bec(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001012071e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101207bf0; end: 101207ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101207bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x0001000d224c(&puStack_80);
  if (puStack_80 != (undefined *)0x0) {
    func_0x000107c41408(param_1);
    func_0x000107c61180();
    puVar1 = puStack_80;
    func_0x000107c4e864();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_80);
    func_0x000107c615e8(param_1);
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x000107c4d06c();
      func_0x000107c61180();
      pcVar3 = "presentCameraRollView(withContainer:callback:)";
      func_0x0001000c10c0("presentCameraRollView(withContainer:callback:)");
      func_0x000107c61180();
      puVar4 = &UNK_110393ce0;
      func_0x000107c613fc(&UNK_110393ce0,0x30,7);
      *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
      *(undefined **)(puVar4 + 0x18) = puVar2;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      *(undefined8 *)(puVar4 + 0x28) = param_3;
      pcStack_60 = FUN_101208070;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110393cf8;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c61174();
      func_0x000107c615f0(puVar2);
      func_0x000107c6157c(param_3);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(puVar1);
      func_0x000107c615e8(puVar2);
      func_0x000107c615e8(pcVar3);
    }
  }
  return;
}



/* Entry: 101207ea4; end: 101207f77; -[_TtC33ComposerMusicDependenciesProvider34MusicPickerCameraRollDeckPresenter presentCameraRollViewWithContainer:callback:] */

void FUN_101207ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110393cb8;
  func_0x000107c613fc(&UNK_110393cb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_101207bf0(param_3,FUN_101208060,puVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101207f78; end: 101207fd7; -[_TtC33ComposerMusicDependenciesProvider34MusicPickerCameraRollDeckPresenter init] */

void FUN_101207f78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerMusicDependenciesProvider.MusicPickerCameraRollDeckPresenter",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101207fa4);
  (*pcVar1)();
}



/* Entry: 101207fd8; end: 10120803f; -[_TtC33ComposerMusicDependenciesProvider34MusicPickerCameraRollDeckPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101207ff4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101208014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101207ff8) */
/* WARNING: Removing unreachable block (ram,0x000101208018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101207fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d680a0));
  return;
}



/* Entry: 101208040; end: 10120805f;  */

void FUN_101208040(void)

{
  func_0x000107c61168(&PTR_PTR_1127bb258);
  return;
}



/* Entry: 101208060; end: 10120806f;  */

void FUN_101208060(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010120806c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 101208070; end: 101208097;  */

void FUN_101208070(void)

{
  long unaff_x20;
  
  func_0x000101207d74(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101208098; end: 1012080bb;  */

void FUN_101208098(long param_1,long param_2)

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



/* Entry: 1012080bc; end: 10120856b;  */

long FUN_1012080bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  uVar1 = param_2;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  return unaff_x20;
}



/* Entry: 10120856c; end: 10120868b;  */

/* WARNING: Possible PIC construction at 0x000101208578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101208588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012085a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012085b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012085c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012085d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012085c4) */
/* WARNING: Removing unreachable block (ram,0x0001012085b4) */
/* WARNING: Removing unreachable block (ram,0x0001012085a4) */
/* WARNING: Removing unreachable block (ram,0x00010120858c) */
/* WARNING: Removing unreachable block (ram,0x00010120857c) */
/* WARNING: Removing unreachable block (ram,0x0001012085d4) */

void FUN_10120856c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10120868c; end: 1012086af;  */

void FUN_10120868c(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010120819c();
  *param_1 = param_2;
  return;
}



/* Entry: 1012086b0; end: 10120881f;  */

undefined * FUN_1012086b0(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar9 = 0x112d68250;
  func_0x0001000285a8(0x112d68250,&UNK_10d92c178);
  lVar10 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d68088,&UNK_10d92c060);
    puVar3 = puVar8;
    func_0x000107c60498();
    iVar1 = *(int *)(lVar9 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar10 + 0x48);
    do {
      puVar5 = puVar7;
      FUN_1012088bc(param_1);
      uVar11 = *puVar7;
      uVar4 = uVar11;
      FUN_100fda8d4();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10120881c);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar11;
      lVar12 = *(long *)(puVar3 + 0x38);
      lVar10 = 0x112d68080;
      func_0x0001000285a8(0x112d68080,&UNK_10d92c048);
      func_0x00010120890c((undefined1 *)((long)puVar7 + (long)iVar1),
                          lVar12 + *(long *)(*(long *)(lVar10 + -8) + 0x48) * uVar4);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101208820);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + lVar9;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  return puVar3;
}



/* Entry: 101208820; end: 1012088bb;  */

void FUN_101208820(undefined8 param_1)

{
  if (lRam0000000112d68138 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e628bf8);
  return;
}



/* Entry: 1012088bc; end: 10120895b;  */

undefined8 FUN_1012088bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d68250;
  func_0x0001000285a8(0x112d68250,&UNK_10d92c178);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10120895c; end: 101208acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10120895c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [40];
  
  func_0x0001000d224c(auStack_58);
  uVar1 = 0x112d68290;
  func_0x0001000285a8(0x112d68290,&UNK_10d92c1a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  FUN_101209b40(auStack_58,auStack_80);
  puVar2 = &UNK_110393d70;
  func_0x000107c613fc(&UNK_110393d70,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  FUN_101209b84(auStack_80,puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x40) = uVar1;
  func_0x000107c61434(param_1);
  func_0x000107c6157c(uVar1);
  uVar3 = 3;
  func_0x0001001ca524(3,3,0x50,4,0,0,&UNK_10d92c1b0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  uVar3 = 0;
  FUN_10120a0f0(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar4 = FUN_1012097bc;
  func_0x0001000bfde0(FUN_1012097bc,0,uVar3);
  pcVar5 = pcVar4;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar4);
  pcVar4 = pcVar5;
  func_0x000107c5cb24(pcVar5);
  func_0x000107c61180();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(pcVar5);
  func_0x0001000834e4(auStack_58);
  return pcVar4;
}



/* Entry: 101208ad0; end: 101208aeb;  */

void FUN_101208ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_3;
  *(undefined8 *)(unaff_x22 + 0x158) = param_4;
  *(undefined8 *)(unaff_x22 + 0x148) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101208aec,0,0);
  return;
}



/* Entry: 101208aec; end: 101208c1b;  */

void FUN_101208aec(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x148);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar4 = 0x112d682a0;
    func_0x0001000285a8(0x112d682a0,&UNK_10d92c1d0);
    uVar2 = 0x112d682b0;
    func_0x0001000285a8(0x112d682b0,&UNK_10d92c1e0);
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x160) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101208c1c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar3,unaff_x22 + 0x130,uVar4,uVar2,0,0,&UNK_10d92c1c8,unaff_x22 + 0x110,uVar4,uVar2);
    return;
  }
  uVar4 = 0x112d682a0;
  func_0x0001000285a8(0x112d682a0,&UNK_10d92c1d0);
  func_0x000107c615ac(unaff_x22 + 0x10,uVar4);
  *(long *)(unaff_x22 + 0x138) = unaff_x22 + 0x10;
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x168) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101208c64;
  lVar7 = *(long *)(unaff_x22 + 0x150);
  plVar3[0x11] = *(long *)(unaff_x22 + 0x148);
  plVar3[0x12] = lVar7;
  plVar3[0xf] = unaff_x22 + 0x130;
  plVar3[0x10] = unaff_x22 + 0x138;
  lVar7 = 0x112d682b8;
  func_0x0001000285a8(0x112d682b8,&UNK_10d92c1e8);
  plVar3[0x13] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar3[0x14] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x15] = uVar5;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x16] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x17] = uVar5;
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar5;
  lVar7 = 0;
  func_0x000107c5ede0();
  plVar3[0x19] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar3[0x1a] = lVar7;
  lVar7 = *(long *)(lVar7 + 0x40);
  plVar3[0x1b] = lVar7;
  uVar5 = lVar7 + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1c] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1d] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101208eac,0,0);
  return;
}



/* Entry: 101208c1c; end: 101208c63;  */

void FUN_101208c1c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x160));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101208d5c,0,0);
  return;
}



/* Entry: 101208c64; end: 101208cd7;  */

void FUN_101208c64(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x168));
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(lVar3 + 0x170) = plVar1;
  func_0x0001000285a8(0x112d682a8,&UNK_10d92c1d8);
  *plVar1 = lVar2;
  plVar1[1] = (long)FUN_101208cd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 101208cd8; end: 101208d5b;  */

void FUN_101208cd8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101208d20,0,0);
  return;
}



/* Entry: 101208d5c; end: 101208d9f;  */

void FUN_101208d5c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar1;
  func_0x0001002a64a8(unaff_x22 + 0x140);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101208d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101208da0; end: 101208eab;  */

void FUN_101208da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  lVar3 = 0x112d682b8;
  func_0x0001000285a8(0x112d682b8,&UNK_10d92c1e8);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 200) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  lVar3 = *(long *)(lVar3 + 0x40);
  *(long *)(unaff_x22 + 0xd8) = lVar3;
  uVar1 = lVar3 + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101208eac,0,0);
  return;
}



/* Entry: 101208eac; end: 101209393;  */

void FUN_101208eac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long unaff_x22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  
  uVar20 = *(ulong *)(unaff_x22 + 0x88);
  if (uVar20 >> 0x3e == 0) {
    uVar26 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar26 = uVar20 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar20) {
      uVar26 = uVar20;
    }
    func_0x000107c60480();
  }
  if (uVar26 != 0) {
    uVar22 = 0;
    lVar11 = *(long *)(unaff_x22 + 0x88);
    lVar2 = *(long *)(unaff_x22 + 0xd0);
    lVar3 = *(long *)(unaff_x22 + 0xd8);
    do {
      if ((uVar20 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1012092ec);
          (*pcVar13)();
        }
        uVar5 = *(ulong *)(lVar11 + 0x20 + uVar22 * 8);
        func_0x000107c61174();
      }
      else {
        param_2 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar5 = uVar22;
        FUN_101209c74(uVar22,param_2,&PTR_PTR_1126a6670,0x112d68288);
      }
      uVar1 = uVar22 + 1;
      if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1012092e8);
        (*pcVar13)();
      }
      uVar6 = uVar5;
      func_0x000107c4c9a4();
      func_0x000107c61180();
      if (uVar6 == 0) {
        func_0x000107c61170(uVar5);
      }
      else {
        uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar19 = *(undefined8 *)(unaff_x22 + 200);
        uVar15 = uVar6;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        uVar23 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        func_0x000107c5edd0(uVar17,uVar23,param_2);
        func_0x000107c6142c(param_2);
        (**(code **)(lVar2 + 0x30))(uVar17,1,uVar19);
        if ((int)uVar17 == 1) {
          uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar6);
          param_2 = 0x112d36580;
          FUN_10120a294(uVar17,0x112d36580,&UNK_10d9016d0);
        }
        else {
          uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
          uVar21 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar25 = *(undefined8 *)(unaff_x22 + 200);
          uVar19 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
          pcVar13 = *(code **)(lVar2 + 0x20);
          (*pcVar13)(uVar21,*(undefined8 *)(unaff_x22 + 0xc0),uVar25);
          lVar7 = 0;
          func_0x000107c5fd0c();
          lVar14 = *(long *)(lVar7 + -8);
          (**(code **)(lVar14 + 0x38))(uVar4,1,1,lVar7);
          FUN_101209b40(uVar12,unaff_x22 + 0x10);
          (**(code **)(lVar2 + 0x10))(uVar17,uVar21,uVar25);
          uVar15 = (ulong)*(byte *)(lVar2 + 0x50);
          uVar24 = uVar15 + 0x48 & (uVar15 ^ 0xffffffffffffffff);
          uVar23 = lVar3 + 7 + uVar24 & 0xfffffffffffffff8;
          puVar8 = &UNK_110393d98;
          func_0x000107c613fc(&UNK_110393d98,uVar23 + 0x10,uVar15 | 7);
          *(long *)(puVar8 + 0x10) = 0;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          FUN_101209b84(unaff_x22 + 0x10,puVar8 + 0x20);
          (*pcVar13)(puVar8 + uVar24,uVar17,uVar25);
          *(ulong *)(puVar8 + uVar23) = uVar6;
          *(ulong *)(puVar8 + uVar23 + 8) = uVar5;
          func_0x0001000abe04(uVar4,uVar19);
          (**(code **)(lVar14 + 0x30))(uVar19,1,lVar7);
          func_0x000107c61174(uVar6);
          func_0x000107c61174();
          uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
          if ((int)uVar19 == 1) {
            FUN_10120a294(uVar17,0x112d453c8,&UNK_10d90ac60);
            uVar15 = 0x3100;
          }
          else {
            uVar15 = uVar5;
            func_0x000107c5fd08();
            (**(code **)(lVar14 + 8))(uVar17,lVar7);
            uVar15 = uVar15 & 0xff | 0x3100;
          }
          lVar7 = *(long *)(puVar8 + 0x10);
          if (lVar7 == 0) {
            lVar14 = 0;
            lVar18 = 0;
          }
          else {
            lVar18 = *(long *)(puVar8 + 0x18);
            lVar14 = lVar7;
            func_0x000107c614f0();
            func_0x000107c615f0(lVar7);
            func_0x000107c5fca8();
            func_0x000107c615e8(lVar7);
          }
          uVar19 = **(undefined8 **)(unaff_x22 + 0x80);
          puVar9 = &UNK_110393dc0;
          func_0x000107c613fc(&UNK_110393dc0,0x20,7);
          *(undefined **)(puVar9 + 0x10) = &UNK_10d92c1f8;
          *(undefined **)(puVar9 + 0x18) = puVar8;
          func_0x000107c6157c(puVar8);
          uVar17 = 0x112d682a0;
          func_0x0001000285a8(0x112d682a0,&UNK_10d92c1d0);
          puVar16 = (undefined8 *)0x0;
          if (lVar18 != 0 || lVar14 != 0) {
            *(undefined8 *)(unaff_x22 + 0x38) = 0;
            *(undefined8 *)(unaff_x22 + 0x40) = 0;
            *(long *)(unaff_x22 + 0x48) = lVar14;
            *(long *)(unaff_x22 + 0x50) = lVar18;
            puVar16 = (undefined8 *)(unaff_x22 + 0x38);
          }
          uVar21 = *(undefined8 *)(unaff_x22 + 0xe8);
          param_2 = *(undefined8 *)(unaff_x22 + 200);
          uVar25 = *(undefined8 *)(unaff_x22 + 0xb8);
          *(undefined8 *)(unaff_x22 + 0x58) = 1;
          *(undefined8 **)(unaff_x22 + 0x60) = puVar16;
          *(undefined8 *)(unaff_x22 + 0x68) = uVar19;
          func_0x000107c615bc(uVar15,unaff_x22 + 0x58,uVar17,&UNK_10d92c208,puVar9);
          func_0x000107c61574(puVar8);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar6);
          func_0x000107c61574(uVar15);
          FUN_10120a294(uVar25,0x112d453c8,&UNK_10d90ac60);
          (**(code **)(lVar2 + 8))(uVar21);
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar1 != uVar26);
  }
  uVar21 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar19 = **(undefined8 **)(unaff_x22 + 0x80);
  uVar17 = 0x112d682a0;
  func_0x0001000285a8(0x112d682a0,&UNK_10d92c1d0);
  func_0x000107c5fcc4(uVar21,uVar19,uVar17);
  *(undefined **)(unaff_x22 + 0xf0) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar10 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101209394;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
            (plVar10,unaff_x22 + 0x70,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 101209394; end: 1012093db;  */

void FUN_101209394(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012093dc,0,0);
  return;
}



/* Entry: 1012093dc; end: 101209587;  */

void FUN_1012093dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  ulong uVar13;
  ulong uVar14;
  
  lVar11 = *(long *)(unaff_x22 + 0x70);
  if (lVar11 != 1) {
    if (lVar11 != 0) {
      uVar14 = *(ulong *)(unaff_x22 + 0xf0);
      lVar7 = lVar11;
      func_0x000107c61174();
      uVar8 = uVar14;
      func_0x000107c61550();
      uVar13 = *(ulong *)(unaff_x22 + 0xf0);
      if ((((int)uVar8 == 0) || ((uVar14 >> 0x3e & 1) != 0)) || (uVar8 = uVar13, (long)uVar13 < 0))
      {
        if (uVar13 >> 0x3e == 0) {
          uVar14 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar14 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uVar14 = uVar13;
          }
          func_0x000107c60480(uVar14);
          uVar13 = *(ulong *)(unaff_x22 + 0xf0);
        }
        uVar8 = 0;
        FUN_101209e30(0,uVar14 + 1,1,uVar13);
        uVar14 = uVar8;
      }
      uVar14 = uVar14 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar14 + 0x10);
      uVar10 = uVar8;
      if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar13) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
        FUN_101209e30(uVar10,uVar13 + 1,1,uVar8);
        uVar14 = uVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar14 + 0x10) = uVar13 + 1;
      *(long *)(uVar14 + uVar13 * 8 + 0x20) = lVar7;
      FUN_10120a424(lVar11);
      *(ulong *)(unaff_x22 + 0xf0) = uVar10;
    }
    plVar9 = (long *)(ulong)*(uint *)(PTR___sScG8IteratorV4nextxSgyYaFTu_11034fc08 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf8) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101209394;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG8IteratorV4nextxSgyYaF_11034fc00)
              (plVar9,(long *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x98));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar11 = *(long *)(unaff_x22 + 0xa0);
  **(undefined8 **)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xf0);
  (**(code **)(lVar11 + 8))(uVar3,uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101209548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101209588; end: 1012095a7;  */

void FUN_101209588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012095a8,0,0);
  return;
}



/* Entry: 1012095a8; end: 10120971f;  */

void FUN_1012095a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x18);
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x20);
  uVar6 = uVar2;
  func_0x0001000a8868();
  func_0x000107c427c0();
  func_0x000107c61180();
  if (lVar9 == 0) {
    lVar9 = 0;
    uVar10 = 0xf000000000000000;
    uVar11 = uVar6;
  }
  else {
    lVar4 = lVar9;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    lVar9 = lVar4;
    func_0x000107c5ee30();
    uVar11 = uVar6;
    func_0x000107c61170(lVar4);
    uVar10 = uVar6;
  }
  *(long *)(unaff_x22 + 0x38) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c427c0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4a804();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar5);
      goto LAB_101209694;
    }
  }
  lVar4 = 0;
  uVar11 = 0xf000000000000000;
LAB_101209694:
  *(long *)(unaff_x22 + 0x48) = lVar4;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c5bdd8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  piVar8 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101209720;
                    /* WARNING: Could not recover jumptable at 0x00010120971c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (*(undefined8 *)(unaff_x22 + 0x20),lVar9,uVar10,lVar4,uVar11,uVar6,uVar2,lVar3);
  return;
}



/* Entry: 101209720; end: 1012097a7;  */

void FUN_101209720(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0x58);
  uVar2 = *(undefined8 *)(lVar6 + 0x48);
  uVar4 = *(undefined8 *)(lVar6 + 0x50);
  uVar3 = *(undefined8 *)(lVar6 + 0x38);
  uVar5 = *(undefined8 *)(lVar6 + 0x40);
  *(undefined8 *)(lVar6 + 0x68) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x60));
  func_0x000107c61170(uVar1);
  func_0x0001000b44c0(uVar2,uVar4);
  func_0x0001000b44c0(uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012097a8,0,0);
  return;
}



/* Entry: 1012097a8; end: 1012097bb;  */

void FUN_1012097a8(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x0001012097b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1012097bc; end: 101209837;  */

void FUN_1012097bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  FUN_101209838(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar1);
  func_0x000107c45788();
  func_0x000107c61170(uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 101209838; end: 101209a33;  */

undefined * FUN_101209838(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101209a34);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_10120a0f0(0,0x112d68298,&PTR_PTR_1126d9180);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_101209c74(uVar7,param_1,&PTR_PTR_1126d9180,0x112d68298);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_10120a0f0(0,0x112d68298,&PTR_PTR_1126d9180);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 101209a34; end: 101209aaf; -[_TtC33ComposerMusicDependenciesProvider25MusicEditorContentManager loadLyricsStickerBoltForMediaWithMusicStickerMediaInfos:] */

void FUN_101209a34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10120a0f0(0,0x112d68288,&PTR_PTR_1126a6670);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10120895c(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101209ab0; end: 101209b0f; -[_TtC33ComposerMusicDependenciesProvider25MusicEditorContentManager init] */

void FUN_101209ab0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ComposerMusicDependenciesProvider.MusicEditorContentManager",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101209adc);
  (*pcVar1)();
}



/* Entry: 101209b10; end: 101209b1f; -[_TtC33ComposerMusicDependenciesProvider25MusicEditorContentManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101209b10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d68258));
  return;
}



/* Entry: 101209b20; end: 101209b3f;  */

void FUN_101209b20(void)

{
  func_0x000107c61168(&PTR_PTR_1127bb338);
  return;
}



/* Entry: 101209b40; end: 101209b83;  */

long FUN_101209b40(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101209b84; end: 101209b9b;  */

undefined8 * FUN_101209b84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101209b9c; end: 101209c07;  */

void FUN_101209b9c(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  plVar1 = (long *)0x180;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10120a434;
  plVar1[0x2a] = unaff_x20 + 0x18;
  plVar1[0x2b] = lVar3;
  plVar1[0x29] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101208aec,0,0);
  return;
}



/* Entry: 101209c08; end: 101209c73;  */

void FUN_101209c08(void)

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
    FUN_10120a0f0(0,0x112d68298,&PTR_PTR_1126d9180);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d682c0;
  plVar5 = (long *)&UNK_10d92c210;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101209c74; end: 101209e2f;  */

ulong FUN_101209c74(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101209d58);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101209d5c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
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
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10120a0f0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101209e30);
  (*pcVar2)();
}



/* Entry: 101209e30; end: 101209f57;  */

ulong FUN_101209e30(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101209f58);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_101209f58(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101209f54);
      (*pcVar1)();
    }
    FUN_101209fd8(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 101209f58; end: 101209fd7;  */

undefined * FUN_101209f58(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_101209c08();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 101209fd8; end: 10120a0ef;  */

long FUN_101209fd8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10120a0ec);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10120a0f0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10120a0f0(0,0x112d68298,&PTR_PTR_1126d9180);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10120a0f0(0,0x112d68298,&PTR_PTR_1126d9180);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10120a0e8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 10120a0f0; end: 10120a12f;  */

void FUN_10120a0f0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10120a130; end: 10120a19b;  */

void FUN_10120a130(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10120a19c;
  plVar4[0x11] = lVar5;
  plVar4[0x12] = lVar1;
  plVar4[0xf] = param_1;
  plVar4[0x10] = param_2;
  lVar5 = 0x112d682b8;
  func_0x0001000285a8(0x112d682b8,&UNK_10d92c1e8);
  plVar4[0x13] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x14] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar2;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x17] = uVar2;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar2;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar4[0x19] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x1a] = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  plVar4[0x1b] = lVar5;
  uVar2 = lVar5 + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1c] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1d] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101208eac,0,0);
  return;
}



/* Entry: 10120a19c; end: 10120a1d7;  */

void FUN_10120a19c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010120a1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10120a1d8; end: 10120a293;  */

void FUN_10120a1d8(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  ulong uVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar5 = uVar3 + 0x48 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  lVar1 = *(long *)(unaff_x20 + uVar3);
  lVar4 = *(long *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8));
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10120a438;
  plVar2[5] = lVar1;
  plVar2[6] = lVar4;
  plVar2[3] = unaff_x20 + 0x20;
  plVar2[4] = unaff_x20 + uVar5;
  plVar2[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1012095a8,0,0);
  return;
}



/* Entry: 10120a294; end: 10120a2d3;  */

undefined8 FUN_10120a294(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10120a2d4; end: 10120a337;  */

void FUN_10120a2d4(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10120a338;
                    /* WARNING: Could not recover jumptable at 0x00010120a334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 10120a338; end: 10120a377;  */

void FUN_10120a338(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010120a374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10120a378; end: 10120a3e7;  */

void FUN_10120a378(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10120a3e8;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10120a338;
                    /* WARNING: Could not recover jumptable at 0x00010120a334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 10120a3e8; end: 10120a423;  */

void FUN_10120a3e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010120a420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10120a424; end: 10120a43b;  */

void FUN_10120a424(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10120a43c; end: 10120a447; -[SCComposerMusicDependenciesServiceProvider systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a43c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d682c8;
  func_0x000107c61428(param_1 + _DAT_112d682c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a448; end: 10120a453; -[SCComposerMusicDependenciesServiceProvider setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a448(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d682c8;
  func_0x000107c61428(param_1 + _DAT_112d682c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a454; end: 10120a45f; -[SCComposerMusicDependenciesServiceProvider deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a454(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d682d0;
  func_0x000107c61428(param_1 + _DAT_112d682d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a460; end: 10120a46b; -[SCComposerMusicDependenciesServiceProvider setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d682d0;
  func_0x000107c61428(param_1 + _DAT_112d682d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a46c; end: 10120a477; -[SCComposerMusicDependenciesServiceProvider applicationBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a46c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d682d8;
  func_0x000107c61428(param_1 + _DAT_112d682d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a478; end: 10120a483; -[SCComposerMusicDependenciesServiceProvider setApplicationBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d682d8;
  func_0x000107c61428(param_1 + _DAT_112d682d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a484; end: 10120a48f; -[SCComposerMusicDependenciesServiceProvider audioSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a484(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d682e0;
  func_0x000107c61428(param_1 + _DAT_112d682e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a490; end: 10120a49b; -[SCComposerMusicDependenciesServiceProvider setAudioSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d682e0;
  func_0x000107c61428(param_1 + _DAT_112d682e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a49c; end: 10120a4a7; -[SCComposerMusicDependenciesServiceProvider boltDataUploaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a49c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d682e8;
  func_0x000107c61428(param_1 + _DAT_112d682e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a4a8; end: 10120a4b3; -[SCComposerMusicDependenciesServiceProvider setBoltDataUploaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d682e8;
  func_0x000107c61428(param_1 + _DAT_112d682e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a4b4; end: 10120a4bf; -[SCComposerMusicDependenciesServiceProvider composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d682f0;
  func_0x000107c61428(param_1 + _DAT_112d682f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a4c0; end: 10120a4cb; -[SCComposerMusicDependenciesServiceProvider setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d682f0;
  func_0x000107c61428(param_1 + _DAT_112d682f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a4cc; end: 10120a4d7; -[SCComposerMusicDependenciesServiceProvider memoriesPickerV2ScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d682f8;
  func_0x000107c61428(param_1 + _DAT_112d682f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a4d8; end: 10120a4e3; -[SCComposerMusicDependenciesServiceProvider setMemoriesPickerV2ScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d682f8;
  func_0x000107c61428(param_1 + _DAT_112d682f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a4e4; end: 10120a4ef; -[SCComposerMusicDependenciesServiceProvider musicFavoritesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68300;
  func_0x000107c61428(param_1 + _DAT_112d68300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a4f0; end: 10120a4fb; -[SCComposerMusicDependenciesServiceProvider setMusicFavoritesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68300;
  func_0x000107c61428(param_1 + _DAT_112d68300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a4fc; end: 10120a507; -[SCComposerMusicDependenciesServiceProvider musicRecentsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a4fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68308;
  func_0x000107c61428(param_1 + _DAT_112d68308,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a508; end: 10120a513; -[SCComposerMusicDependenciesServiceProvider setMusicRecentsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68308;
  func_0x000107c61428(param_1 + _DAT_112d68308,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a514; end: 10120a51f; -[SCComposerMusicDependenciesServiceProvider musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a514(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68310;
  func_0x000107c61428(param_1 + _DAT_112d68310,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a520; end: 10120a52b; -[SCComposerMusicDependenciesServiceProvider setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68310;
  func_0x000107c61428(param_1 + _DAT_112d68310,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a52c; end: 10120a537; -[SCComposerMusicDependenciesServiceProvider taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a52c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68318;
  func_0x000107c61428(param_1 + _DAT_112d68318,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10120a538; end: 10120a543; -[SCComposerMusicDependenciesServiceProvider setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a538(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d68318;
  func_0x000107c61428(param_1 + _DAT_112d68318,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10120a544; end: 10120a54f; -[SCComposerMusicDependenciesServiceProvider temporaryFileWriterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120a544(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d68320;
  func_0x000107c61428(param_1 + _DAT_112d68320,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


