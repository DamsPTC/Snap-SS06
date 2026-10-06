/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1017082a4; end: 101708307;  */

void FUN_1017082a4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x148);
  *(long *)(lVar3 + 0x158) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x150));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101708308;
  }
  else {
    pcVar2 = FUN_101708414;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101708308; end: 101708413;  */

void FUN_101708308(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  if (*(long *)(unaff_x22 + 0x88) == 1) {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
    *(long *)(unaff_x22 + 0x28) = *(long *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000103d256f8(unaff_x22 + 0xd0);
    uVar3 = *(ulong *)(unaff_x22 + 0xe0);
    uVar2 = *(ulong *)(unaff_x22 + 0xe8);
    func_0x000107c61434(uVar2);
    FUN_1017095a4(unaff_x22 + 0xd0);
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
    if (uVar1 == 0) {
      func_0x0001017095d8(unaff_x22 + 0x70,0x112dc3cd0,&UNK_10d981218);
      func_0x000107c6142c(uVar2);
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      FUN_1017089dc(uVar3,uVar2,*(undefined8 *)(unaff_x22 + 0x120),
                    *(undefined8 *)(unaff_x22 + 0x128));
      func_0x0001017095d8(unaff_x22 + 0x70,0x112dc3cd0,&UNK_10d981218);
    }
  }
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101708410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar2);
  return;
}



/* Entry: 101708414; end: 101708457;  */

void FUN_101708414(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101708454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 101708458; end: 1017089db;  */

void FUN_101708458(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  bool bVar18;
  long lVar19;
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_90 = param_4;
  uStack_88 = param_3;
  func_0x000107c5eec8();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = 0x112d68090;
  puStack_c8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_98 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  func_0x000101709088();
  lVar19 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar10 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0x112dc3cc8;
  lStack_c0 = lVar10;
  func_0x0001000285a8(0x112dc3cc8,&UNK_10d9811f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lVar13 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  uVar11 = lVar10 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  uStack_a0 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12_01;
  func_0x000107c61428(param_1 + 0x68,auStack_78,0x20,0);
  lVar13 = *(long *)(param_1 + 0x68);
  lStack_b0 = param_1;
  lStack_a8 = param_2;
  if (*(long *)(lVar13 + 0x10) == 0) {
    bVar18 = true;
  }
  else {
    func_0x000107c61434(lVar13);
    uVar11 = uStack_88;
    func_0x000100029284(param_2);
    bVar18 = (uVar11 & 1) == 0;
    if (!bVar18) {
      func_0x0001017094f4(*(long *)(lVar13 + 0x38) + *(long *)(lVar19 + 0x48) * param_2,lVar10);
    }
    func_0x000107c6142c(lVar13);
  }
  (**(code **)(lVar19 + 0x38))(lVar10,bVar18,1,lVar3);
  lVar4 = lVar10;
  (**(code **)(lVar19 + 0x30))(lVar10,1,lVar3);
  lVar13 = lStack_c0;
  if ((int)lVar4 == 0) {
    func_0x0001017094f4(lVar10,lStack_c0);
    func_0x0001017095d8(lVar10,0x112dc3cc8,&UNK_10d9811f0);
    func_0x000107c614a8(auStack_78);
    pcVar14 = *(code **)(lVar9 + 0x10);
    (*pcVar14)(lVar15,lVar13,lVar2);
    func_0x0001017094b8(lVar13);
    pcVar12 = *(code **)(lVar9 + 0x38);
    (*pcVar12)(lVar15,0,1,lVar2);
  }
  else {
    func_0x0001017095d8(lVar10,0x112dc3cc8,&UNK_10d9811f0);
    func_0x000107c614a8(auStack_78);
    pcVar12 = *(code **)(lVar9 + 0x38);
    (*pcVar12)(lVar15,1,1,lVar2);
    pcVar14 = *(code **)(lVar9 + 0x10);
  }
  (*pcVar14)(lVar16,uStack_90,lVar2);
  (*pcVar12)(lVar16,0,1,lVar2);
  lVar13 = (long)*(int *)(lStack_98 + 0x30);
  func_0x000101709618(lVar15,lVar17,0x112d3bc20,&UNK_10d904ef0);
  func_0x000101709618(lVar16,lVar17 + lVar13,0x112d3bc20,&UNK_10d904ef0);
  pcVar12 = *(code **)(lVar9 + 0x30);
  lVar3 = lVar17;
  (*pcVar12)(lVar17,1,lVar2);
  uVar11 = uStack_a0;
  if ((int)lVar3 == 1) {
    func_0x0001017095d8(lVar16,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001017095d8(lVar15,0x112d3bc20,&UNK_10d904ef0);
    lVar13 = lVar17 + lVar13;
    (*pcVar12)(lVar13,1,lVar2);
    if ((int)lVar13 != 1) {
LAB_1017088b4:
      uVar7 = 0x112d68090;
      puVar8 = &UNK_10da24400;
      goto LAB_1017089b4;
    }
    func_0x0001017095d8(lVar17,0x112d3bc20,&UNK_10d904ef0);
  }
  else {
    func_0x000101709618(lVar17,uStack_a0,0x112d3bc20,&UNK_10d904ef0);
    lVar3 = lVar17 + lVar13;
    (*pcVar12)(lVar3,1,lVar2);
    puVar1 = puStack_c8;
    if ((int)lVar3 == 1) {
      func_0x0001017095d8(lVar16,0x112d3bc20,&UNK_10d904ef0);
      func_0x0001017095d8(lVar15,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar9 + 8))(uVar11,lVar2);
      goto LAB_1017088b4;
    }
    puVar5 = puStack_c8;
    (**(code **)(lVar9 + 0x20))(puStack_c8,lVar17 + lVar13,lVar2);
    func_0x000101207ba8();
    uVar6 = uVar11;
    func_0x000107c5fab8(uVar11,puVar1,lVar2,puVar5);
    pcVar12 = *(code **)(lVar9 + 8);
    (*pcVar12)(puVar1,lVar2);
    func_0x0001017095d8(lVar16,0x112d3bc20,&UNK_10d904ef0);
    func_0x0001017095d8(lVar15,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar12)(uVar11,lVar2);
    func_0x0001017095d8(lVar17,0x112d3bc20,&UNK_10d904ef0);
    if ((uVar6 & 1) == 0) {
      return;
    }
  }
  func_0x000107c61428(lStack_b0 + 0x68,auStack_78,0x21,0);
  lVar17 = lStack_b8;
  FUN_101711afc(lStack_b8,lStack_a8,uStack_88);
  func_0x000107c614a8(auStack_78);
  uVar7 = 0x112dc3cc8;
  puVar8 = &UNK_10d9811f0;
LAB_1017089b4:
  func_0x0001017095d8(lVar17,uVar7,puVar8);
  return;
}



/* Entry: 1017089dc; end: 101708d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017089dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long alStack_a8 [3];
  long lStack_90;
  long lStack_80;
  long lStack_78;
  
  lVar3 = 0;
  uStack_c8 = param_5;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eea0(lVar11);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar4 = 0;
  func_0x000101708d8c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  uVar2 = uStack_c8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112dc3be8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  uStack_d0 = param_2;
  lStack_c0 = lVar3;
  (**(code **)(lVar9 + 0x10))(lVar5 + _DAT_112dc3bf0,lVar11,lVar3);
  puVar8 = PTR_s_init_1125d9248;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  func_0x000107c61434(param_3);
  plVar6 = &lStack_80;
  func_0x000107c61154(plVar6,puVar8);
  uVar7 = param_4;
  func_0x000107c5fadc(param_4,uVar2);
  func_0x000107c56bcc(uVar10);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(uVar7);
  func_0x000101709618(unaff_x20 + 0x10,alStack_a8,0x112dc3cc0,&UNK_10d9811e8);
  if (lStack_90 == 0) {
    func_0x0001017095d8(alStack_a8,0x112dc3cc0,&UNK_10d9811e8);
  }
  else {
    plVar6 = alStack_a8;
    func_0x0001000a8868();
    func_0x000107c5ee8c();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1);
    uStack_b8 = 0xd00000000000001e;
    uStack_b0 = 0x800000010efb90f0;
    func_0x000107c5fb78(param_4,uVar2);
    uVar7 = uStack_b0;
    uVar12 = *(undefined8 *)(*plVar6 + 0x10);
    uVar10 = uStack_b8;
    func_0x000107c5fadc(uStack_b8,uStack_b0);
    func_0x000107c56bd8(uVar12);
    func_0x000107c61170(puVar8);
    func_0x000107c6142c(uVar7);
    func_0x000107c61170(uVar10);
    func_0x0001000834e4(alStack_a8);
  }
  func_0x000101709618(unaff_x20 + 0x10,alStack_a8,0x112dc3cc0,&UNK_10d9811e8);
  if (lStack_90 == 0) {
    (**(code **)(lVar9 + 8))(lVar11,lStack_c0);
    func_0x0001017095d8(alStack_a8,0x112dc3cc0,&UNK_10d9811e8);
  }
  else {
    plVar6 = alStack_a8;
    func_0x0001000a8868();
    uVar7 = uStack_d0;
    func_0x000107c5fadc(uStack_d0,param_3);
    uStack_b8 = 0xd00000000000001b;
    uStack_b0 = 0x800000010efb90d0;
    func_0x000107c5fb78(param_4,uVar2);
    uVar2 = uStack_b0;
    uVar12 = *(undefined8 *)(*plVar6 + 0x10);
    uVar10 = uStack_b8;
    func_0x000107c5fadc(uStack_b8,uStack_b0);
    func_0x000107c56bd8(uVar12);
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar10);
    (**(code **)(lVar9 + 8))(lVar11,lStack_c0);
    func_0x0001000834e4(alStack_a8);
  }
  return;
}



/* Entry: 101708d08; end: 101708d83;  */

void FUN_101708d08(void)

{
  long unaff_x20;
  
  func_0x0001017095d8(unaff_x20 + 0x10,0x112dc3cc0,&UNK_10d9811e8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101708d84; end: 101708d9f;  */

void FUN_101708d84(void)

{
  if (lRam0000000112dc3c20 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e64faa8);
  return;
}



/* Entry: 101708da0; end: 101708e17;  */

void FUN_101708da0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10d981190;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 101708e18; end: 101708e9f;  */

long * FUN_101708e18(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eec8();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101708ea0; end: 101708ee3;  */

void FUN_101708ea0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 101708ee4; end: 10170906f;  */

long FUN_101708ee4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101709070; end: 10170909b;  */

void FUN_101709070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10170909c; end: 1017090cb;  */

void FUN_10170909c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1017090cc; end: 10170913f;  */

void FUN_1017090cc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 101709140; end: 101709247;  */

long FUN_101709140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  
  if (param_1 == 0) {
    lVar1 = 0;
    ppuVar6 = (undefined **)0x0;
    lVar5 = 0;
  }
  else {
    lVar1 = 0;
    func_0x000101707478();
    lVar5 = lVar1;
    func_0x000107c613fc();
    *(long *)(lVar5 + 0x10) = param_1;
    ppuVar6 = &PTR_DAT_1103fd528;
  }
  lVar2 = lVar5;
  func_0x000101708d64();
  func_0x000107c613fc();
  puVar3 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x58) = puVar3;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar2 + 0x60) = uVar4;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101705348();
  *(undefined **)(lVar2 + 0x68) = puVar3;
  *(long *)(lVar2 + 0x10) = lVar5;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(long *)(lVar2 + 0x28) = lVar1;
  *(undefined ***)(lVar2 + 0x30) = ppuVar6;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  *(undefined8 *)(lVar2 + 0x40) = param_3;
  *(undefined8 *)(lVar2 + 0x48) = param_4;
  *(undefined8 *)(lVar2 + 0x50) = param_5;
  return lVar2;
}



/* Entry: 101709248; end: 1017093bb;  */

/* WARNING: Possible PIC construction at 0x0001017092c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101709394: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017092c8) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x000101709398) */

void FUN_101709248(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = &UNK_1103fd558;
  func_0x000107c613fc(&UNK_1103fd558,0x18,7);
  *(long *)(puVar1 + 0x10) = param_4;
  func_0x000107c60bc4(param_4);
  uVar2 = param_1;
  lVar5 = param_2;
  FUN_101707548(param_1);
  if (lVar5 == 0) {
    puVar3 = &UNK_1103fd580;
    func_0x000107c613fc(&UNK_1103fd580,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_3);
    puVar4 = &UNK_1103fd5a8;
    func_0x000107c613fc(&UNK_1103fd5a8,0x38,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = FUN_1017093bc;
    *(undefined **)(puVar4 + 0x20) = puVar1;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    *(long *)(puVar4 + 0x30) = param_2;
    func_0x000107c6157c(puVar1);
    func_0x000107c61434(param_2);
    func_0x0001001ca524(1,0x100,0x60,4,uVar2,0,&UNK_10d9811e0,puVar4,PTR___sytN_11034f1b0 + 8);
  }
  else {
    func_0x000107c5fadc();
    (**(code **)(param_4 + 0x10))(param_4,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1017093bc; end: 1017093c3;  */

void FUN_1017093bc(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1017093c4; end: 101709443;  */

void FUN_1017093c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101709444;
  plVar6[0x15] = lVar3;
  plVar6[0x16] = lVar7;
  plVar6[0x13] = lVar2;
  plVar6[0x14] = lVar1;
  plVar6[0x12] = lVar4;
  lVar4 = 0;
  func_0x000101709088();
  plVar6[0x17] = lVar4;
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x18] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101707b20,0,0);
  return;
}



/* Entry: 101709444; end: 1017094b7;  */

void FUN_101709444(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010170947c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1017094b8; end: 101709537;  */

undefined8 FUN_1017094b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000101709088();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101709538; end: 1017095a3;  */

void FUN_101709538(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101709678;
  plVar3[7] = lVar2;
  plVar3[8] = lVar4;
  plVar3[5] = param_1;
  plVar3[6] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101707fdc,0,0);
  return;
}



/* Entry: 1017095a4; end: 10170965f;  */

undefined8 FUN_1017095a4(undefined8 param_1)

{
  (*(code *)&DAT_103d519ec)();
  return param_1;
}



/* Entry: 101709660; end: 10170967b;  */

undefined8 * FUN_101709660(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10170967c; end: 1017096cb;  */

void FUN_10170967c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 1017096cc; end: 1017096e3;  */

void FUN_1017096cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017096e4,0,0);
  return;
}



/* Entry: 1017096e4; end: 101709817;  */

void FUN_1017096e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c42df4();
    if ((int)lVar1 != 0) {
      func_0x000100083b20(unaff_x22 + 0x50);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101709818;
      lVar1 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar1,0);
      uVar2 = 0x112dc3d90;
      func_0x0001000285a8(0x112dc3d90,&UNK_10d981310);
      *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
      *(long *)(unaff_x22 + 0x70) = lVar1;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_10170989c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1103fd688;
      func_0x000107c5c5a8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000101709814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101709818; end: 101709857;  */

void FUN_101709818(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101709858,0,0);
  return;
}



/* Entry: 101709858; end: 10170989b;  */

void FUN_101709858(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615e8(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101709898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170989c; end: 1017098ff;  */

void FUN_10170989c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  lVar2 = 0;
  if (param_2 != 0) {
    func_0x000103fd7dd8();
    func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,lVar2,PTR___sSSSHsWP_11034da90);
    lVar2 = param_2;
  }
  **(long **)(*(long *)(lVar3 + 0x40) + 0x28) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101709900; end: 101709937;  */

void FUN_101709900(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100c7572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101709938; end: 10170998b;  */

void FUN_101709938(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10170998c;
  plVar1[0x13] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017096e4,0,0);
  return;
}



/* Entry: 10170998c; end: 1017099c7;  */

void FUN_10170998c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001017099c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1017099c8; end: 1017099df;  */

long FUN_1017099c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1017099e0; end: 101709a57;  */

undefined8 FUN_1017099e0(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar1;
}



/* Entry: 101709a58; end: 101709dc7;  */

void FUN_101709a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112dc3cc8;
  uStack_70 = param_2;
  func_0x0001000285a8(0x112dc3cc8,&UNK_10d9811f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0;
  func_0x000101709088();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000101714c3c(param_1,lVar6,0x112dc3cc8,&UNK_10d9811f0);
  lVar1 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x000101714fec(lVar6,0x112dc3cc8,&UNK_10d9811f0);
    FUN_101711afc(lVar5,uStack_70,param_3);
    func_0x000107c6142c(param_3);
    func_0x000101714fec(lVar5,0x112dc3cc8,&UNK_10d9811f0);
  }
  else {
    FUN_1017055cc(lVar6,lVar7);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    FUN_101711d5c(lVar7,uStack_70,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 101709dc8; end: 101709e83;  */

undefined1  [16] FUN_101709dc8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  lVar1 = lStack_28;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lStack_28);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c40d10();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar1);
      uVar4 = 0;
      uVar3 = 0;
      if ((int)lVar2 == 0) {
        uVar3 = 6;
      }
      goto LAB_101709e74;
    }
  }
  uVar3 = 0;
  uVar4 = 1;
LAB_101709e74:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 101709e84; end: 101709e8f; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider viewerEligibilityObservable] */

void FUN_101709e84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101709e90();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101709e90; end: 10170a05f;  */

undefined * FUN_101709e90(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar2);
    if ((int)lVar1 != 0) {
      puVar4 = &UNK_1103fd6f8;
      func_0x000107c613fc(&UNK_1103fd6f8,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar3 = (undefined *)0x1;
      uVar6 = 0;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10d981330,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar3);
      func_0x0001004575f0();
      FUN_101709dc8();
      puVar5 = puVar3;
      if ((uVar6 & 0xff) != 1) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c5bc40(puVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
      }
      puVar4 = puVar5;
      func_0x000107c421ac(puVar5);
      goto LAB_10170a038;
    }
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  FUN_101714e68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar5 = (undefined *)0x0;
  func_0x000107c6010c(0);
  func_0x000107c4a8a4(puVar4);
LAB_10170a038:
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 10170a060; end: 10170a077;  */

void FUN_10170a060(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a078,0,0);
  return;
}



/* Entry: 10170a078; end: 10170a183;  */

void FUN_10170a078(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x10170a0fc;
    plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a1f0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010170a0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170a184; end: 10170a1d7;  */

void FUN_10170a184(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101715110;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a078,0,0);
  return;
}



/* Entry: 10170a1d8; end: 10170a1ef;  */

void FUN_10170a1d8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a1f0,0,0);
  return;
}



/* Entry: 10170a1f0; end: 10170a51b;  */

void FUN_10170a1f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  lVar8 = lVar5;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar5 == 0) {
LAB_10170a4f0:
                    /* WARNING: Could not recover jumptable at 0x00010170a508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  lVar8 = lVar5;
  func_0x000107c42df4();
  func_0x000107c615e8(lVar5);
  if ((int)lVar8 == 0) goto LAB_10170a4f0;
  func_0x000100083b20(unaff_x22 + 0x18);
  lVar5 = *(long *)(unaff_x22 + 0x18);
  lVar8 = lVar5;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10170a518);
    (*pcVar1)();
  }
  uVar4 = 0xefb9110;
  uVar2 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e);
  lVar5 = lVar8;
  func_0x000107c4c0d0();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(lVar8);
  lVar8 = lVar5 * 1000;
  if (SUB168(SEXT816(lVar5) * SEXT816(1000),8) != lVar8 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10170a510);
    (*pcVar1)();
  }
  func_0x000100083b20(unaff_x22 + 0x20);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  lVar5 = lVar6;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar6;
  func_0x000107c40cf8();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar5 == 0) {
    uVar4 = 0x12d38c88;
    FUN_101714e68(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar5 = 0;
    func_0x000107c60110();
  }
  lVar6 = lVar5;
  func_0x000107c60668();
  func_0x000107c61170(lVar5);
  func_0x000100083b20(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x28);
  lVar5 = lVar7;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10170a51c);
    (*pcVar1)();
  }
  lVar7 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar7 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar7;
    func_0x000107c40cf4();
    func_0x000107c61170(lVar7);
  }
  lVar7 = lVar5 * 1000;
  if (SUB168(SEXT816(lVar5) * SEXT816(1000),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10170a514);
    (*pcVar1)();
  }
  FUN_101709dc8();
  if ((uVar4 & 0xff) == 1) {
    if ((0 < lVar7) && (lVar6 < lVar8)) {
LAB_10170a47c:
      plVar3 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x38) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_10170a51c;
      lVar8 = *(long *)(unaff_x22 + 0x30);
      lVar6 = 0;
      goto LAB_10170a4d8;
    }
    plVar3 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar3;
    lVar8 = 0x10170a560;
  }
  else {
    if (lVar7 < 1) goto LAB_10170a4f0;
    if (lVar6 < lVar8) goto LAB_10170a47c;
    if (lVar7 <= lVar6) goto LAB_10170a4f0;
    plVar3 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar3;
    lVar8 = 0x10170a5a4;
  }
  *plVar3 = unaff_x22;
  plVar3[1] = lVar8;
  lVar8 = *(long *)(unaff_x22 + 0x30);
LAB_10170a4d8:
  *(undefined1 *)((long)plVar3 + 0x31) = 0;
  plVar3[0xe] = lVar6;
  plVar3[0xf] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170ef7c,0,0);
  return;
}



/* Entry: 10170a51c; end: 10170a5e7;  */

void FUN_10170a51c(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010170a55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10170a5e8; end: 10170a5ff;  */

void FUN_10170a5e8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a600,0,0);
  return;
}



/* Entry: 10170a600; end: 10170a6c7;  */

void FUN_10170a600(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  lVar1 = lVar3;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar3);
    if ((int)lVar1 != 0) {
      plVar2 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x20) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10170a6c8;
      plVar2[6] = *(long *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a1f0,0,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010170a6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10170a6c8; end: 10170a75b;  */

void FUN_10170a6c8(undefined8 param_1)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10170a71c,0,0);
  return;
}



/* Entry: 10170a75c; end: 10170a887; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider isViewerEligibleToSubscribeWithCompletionHandler:] */

void FUN_10170a75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fdba0;
  func_0x000107c613fc(&UNK_1103fdba0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fdbc8;
  func_0x000107c613fc(&UNK_1103fdbc8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981648;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fdbf0;
  func_0x000107c613fc(&UNK_1103fdbf0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981650;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d981658,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10170a888; end: 10170a8df;  */

void FUN_10170a888(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x30;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101715100;
  plVar1[3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a600,0,0);
  return;
}



/* Entry: 10170a8e0; end: 10170aad7;  */

void FUN_10170a8e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1[1] != 0) {
    uStack_a8 = *param_1;
    uVar1 = param_1[7];
    uVar4 = param_1[8];
    uVar2 = param_1[5];
    uVar5 = param_1[6];
    uVar3 = param_1[3];
    uVar6 = param_1[4];
    uVar10 = param_1[2];
    uStack_90 = param_1[3];
    uStack_98 = param_1[2];
    uStack_80 = param_1[5];
    uStack_88 = param_1[4];
    uStack_70 = param_1[7];
    uStack_78 = param_1[6];
    lStack_a0 = param_1[1];
    uStack_68 = uVar4;
    func_0x000107c61434();
    func_0x00010006c00c(uVar10,uVar3);
    func_0x000101713510(uVar6,uVar2,uVar5,uVar1,uVar4);
    func_0x000100083b20(&puStack_b0);
    puVar8 = puStack_b0;
    func_0x000107c4ec80();
    func_0x000107c61180();
    func_0x000107c61170(puStack_b0);
    puVar9 = puVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar9 == (undefined *)0x0) {
      func_0x000101714fec(param_1,0x112dc4038,&UNK_10d981738);
    }
    else {
      func_0x000103d25634();
      if (((ulong)puVar8 & 1) != 0) {
        bVar7 = (uStack_88 & 0xff) != 2;
        uVar1 = 0;
        if (bVar7) {
          uVar1 = uStack_70;
        }
        uVar2 = 0xc000000000000000;
        if (bVar7) {
          uVar2 = uStack_68;
        }
        func_0x000101713510(uStack_88,uStack_80,uStack_78);
        func_0x00010006c090(uVar1,uVar2);
      }
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c53b14(puVar9);
      func_0x000101714fec(param_1,0x112dc4038,&UNK_10d981738);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
    }
  }
  FUN_101709dc8();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_b0 = puVar8;
  func_0x000100087c34(&puStack_b0);
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 10170aad8; end: 10170ad03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170aad8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long alStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar6 = _DAT_112dc3e08;
  lVar8 = *(long *)(param_2 + _DAT_112dc3e08);
  if (lVar8 != 0) {
    *param_1 = lVar8;
    func_0x000107c6157c();
    return;
  }
  FUN_10170ad04();
  uVar11 = *(undefined8 *)(param_2 + _DAT_112dc3da8);
  func_0x0001000285a8(0x112d7e670,&UNK_10d9e4e40);
  lVar9 = lVar8;
  func_0x000107c6048c();
  lVar17 = 0;
  uVar14 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar8 + 0x40);
  if (uVar16 == 0) goto LAB_10170abb8;
  do {
    uVar12 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
    uVar16 = uVar16 - 1 & uVar16;
    while( true ) {
      uVar12 = LZCOUNT(uVar12);
      uVar13 = uVar12 | lVar17 << 6;
      puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar13 * 0x10);
      uVar5 = *(undefined1 *)(*(long *)(*(long *)(lVar8 + 0x38) + uVar13 * 8) + _DAT_113041e98);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar15 = (uVar12 & 0xffffffffffffffc0 | lVar17 << 6) >> 3;
      *(ulong *)(lVar9 + 0x40 + uVar15) = *(ulong *)(lVar9 + 0x40 + uVar15) | 1L << (uVar12 & 0x3f);
      puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar13 * 0x10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      *(undefined1 *)(*(long *)(lVar9 + 0x38) + uVar13) = uVar5;
      if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10170ad04);
        (*pcVar7)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      func_0x000107c61434();
      if (uVar16 != 0) break;
LAB_10170abb8:
      do {
        lVar1 = lVar17 + 1;
        if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10170ad00);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar1) {
          uStack_70 = uVar11;
          lStack_68 = lVar9;
          func_0x000100087bd4(FUN_101714ea8,alStack_80,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(lVar9);
          alStack_80[0] = lVar8;
          func_0x0001000285a8(0x112dc4028,&UNK_10d981710);
          func_0x000107c613fc();
          plVar10 = alStack_80;
          func_0x00010042e6a0();
          uVar11 = *(undefined8 *)(param_2 + lVar6);
          *(long **)(param_2 + lVar6) = plVar10;
          func_0x000107c6157c();
          func_0x000107c61574(uVar11);
          *param_1 = (long)plVar10;
          return;
        }
        uVar16 = ((ulong *)(lVar8 + 0x40))[lVar1];
        lVar17 = lVar17 + 1;
      } while (uVar16 == 0);
      uVar12 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar17 = lVar1;
    }
  } while( true );
}



/* Entry: 10170ad04; end: 10170b21b;  */

/* WARNING: Removing unreachable block (ram,0x00010170ae48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10170ad04(void)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *unaff_x20;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  long lStack_78;
  undefined *apuStack_70 [2];
  
  func_0x000100083b20(apuStack_70);
  puVar6 = apuStack_70[0];
  puVar5 = apuStack_70[0];
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = puVar6;
    func_0x000107c42df4();
    func_0x000107c615e8(puVar6);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((int)puVar5 != 0) {
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_1017054cc();
      func_0x0001000285a8(0x112dc4008,&UNK_10d9816f8);
      func_0x000100087bd4(&lStack_78,0x101714e38);
      if (lStack_78 != 0) {
        uVar7 = 0;
        FUN_101714e68(0,0x112dc4010,&PTR_PTR_1126a7a88);
        uVar17 = 0x112dc4018;
        func_0x0001000285a8(0x112dc4018,&UNK_10d981700);
        unaff_x20 = (undefined *)0x0;
        func_0x0001031ac8e8(apuStack_70,0,0,FUN_1017114e0,0,lStack_78,uVar7,uVar17);
        func_0x000107c61170(lStack_78);
        puVar6 = apuStack_70[0];
      }
      if ((ulong)puVar6 >> 0x3e == 0) {
        puVar24 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar24 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar6) {
          puVar24 = puVar6;
        }
        func_0x000107c60480();
      }
      if (puVar24 != (undefined *)0x0) {
        uVar27 = 0;
        do {
          if (((ulong)puVar6 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10170b1c8);
              (*pcVar4)();
            }
            uVar8 = *(ulong *)(puVar6 + uVar27 * 8 + 0x20);
            func_0x000107c61174();
            puVar19 = unaff_x20;
          }
          else {
            uVar8 = uVar27;
            puVar19 = puVar6;
            FUN_101711940(uVar27,puVar6,&PTR_PTR_1126b85c0,0x112dc4020);
          }
          puVar1 = (undefined *)(uVar27 + 1);
          if (SCARRY8(uVar27,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10170b1bc);
            (*pcVar4)();
          }
          uVar9 = uVar8;
          func_0x0001053dba20();
          func_0x000107c61180();
          uVar10 = uVar9;
          func_0x000107c5faec();
          puVar18 = puVar19;
          func_0x000107c61170(uVar9);
          uVar9 = uVar8;
          func_0x0001053dba20();
          func_0x000107c61180();
          uVar11 = uVar9;
          func_0x000107c5faec();
          puVar20 = puVar18;
          func_0x000107c61170(uVar9);
          uVar9 = uVar8;
          func_0x0001053dba2c();
          func_0x000107c61180();
          uVar23 = uVar9;
          func_0x000107c5faec();
          puVar21 = puVar20;
          func_0x000107c61170(uVar9);
          uVar9 = uVar8;
          func_0x0001053dba38();
          uVar12 = uVar8;
          func_0x0001053dba50();
          uVar13 = uVar8;
          func_0x0001053dba5c();
          uVar14 = uVar8;
          func_0x0001053dba68();
          func_0x000107c61180();
          uVar15 = uVar14;
          func_0x000107c5faec();
          puVar22 = puVar21;
          func_0x000107c61170(uVar14);
          uVar14 = uVar8;
          func_0x0001053dba74();
          uVar16 = uVar8;
          func_0x0001053dba80();
          func_0x000107c61180();
          if (uVar16 == 0) {
            uVar28 = 0;
            puVar26 = (undefined *)0x0;
            puVar25 = puVar22;
          }
          else {
            uVar28 = uVar16;
            func_0x000107c5faec();
            puVar25 = puVar22;
            func_0x000107c61170(uVar16);
            puVar26 = puVar22;
          }
          uVar16 = uVar8;
          func_0x0001053dba8c();
          func_0x000107c61180();
          if (uVar16 == 0) {
            uVar29 = 0;
            puVar25 = (undefined *)0x0;
          }
          else {
            uVar29 = uVar16;
            func_0x000107c5faec();
            func_0x000107c61170(uVar16);
          }
          uVar17 = 0;
          func_0x000103fd7dd8(0);
          func_0x000107c610f8();
          func_0x000103fd7a10(uVar17,uVar11,puVar18,uVar23,puVar20,uVar9 & 0xffffffff,uVar12,uVar13,
                              uVar15,puVar21,uVar14,uVar28,puVar26,uVar29,puVar25);
          puVar18 = puVar5;
          func_0x000107c61558();
          uVar9 = uVar10;
          puVar20 = puVar19;
          apuStack_70[0] = puVar5;
          func_0x000100029284();
          uVar23 = (ulong)~(uint)puVar20 & 1;
          lVar2 = *(long *)(puVar5 + 0x10) + uVar23;
          if (SCARRY8(*(long *)(puVar5 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10170b1c0);
            (*pcVar4)();
          }
          if (*(long *)(puVar5 + 0x18) < lVar2) {
            func_0x000101712870(lVar2,puVar18);
            uVar9 = uVar10;
            unaff_x20 = puVar19;
            func_0x000100029284();
            if (((uint)puVar20 & 1) != ((uint)unaff_x20 & 1)) {
              func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10170b21c);
              (*pcVar4)();
            }
LAB_10170b148:
            if (((ulong)puVar20 & 1) == 0) goto LAB_10170b150;
LAB_10170aeb4:
            puVar5 = apuStack_70[0];
            uVar17 = *(undefined8 *)(*(long *)(apuStack_70[0] + 0x38) + uVar9 * 8);
            *(ulong *)(*(long *)(apuStack_70[0] + 0x38) + uVar9 * 8) = uVar11;
            func_0x000107c6142c(puVar19);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(uVar17);
          }
          else {
            unaff_x20 = puVar20;
            if (((ulong)puVar18 & 1) != 0) goto LAB_10170b148;
            FUN_1017121cc();
            if (((ulong)puVar20 & 1) != 0) goto LAB_10170aeb4;
LAB_10170b150:
            puVar5 = apuStack_70[0];
            *(ulong *)(apuStack_70[0] + (uVar9 >> 6) * 8 + 0x40) =
                 *(ulong *)(apuStack_70[0] + (uVar9 >> 6) * 8 + 0x40) | 1L << (uVar9 & 0x3f);
            puVar3 = (ulong *)(*(long *)(apuStack_70[0] + 0x30) + uVar9 * 0x10);
            *puVar3 = uVar10;
            puVar3[1] = (ulong)puVar19;
            *(ulong *)(*(long *)(apuStack_70[0] + 0x38) + uVar9 * 8) = uVar11;
            func_0x000107c61170(uVar8);
            if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10170b1c4);
              (*pcVar4)();
            }
            *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
          }
          uVar27 = uVar27 + 1;
        } while (puVar1 != puVar24);
      }
      func_0x000107c6142c(puVar6);
      return puVar5;
    }
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1017054cc(PTR___swiftEmptyArrayStorage_11034f1c8);
  return puVar6;
}



/* Entry: 10170b21c; end: 10170b32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170b21c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lStack_48;
  
  lVar1 = _DAT_112dc3e18;
  lVar2 = *(long *)(param_2 + _DAT_112dc3e18);
  lVar5 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x112dc4028;
    func_0x0001000285a8(0x112dc4028,&UNK_10d981710);
    func_0x000100087bd4(&lStack_48,0x101714e50,param_2,uVar3);
    uVar3 = 0;
    FUN_101714e68(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    pcVar4 = FUN_10170b32c;
    func_0x0001000bfde0(FUN_10170b32c,0,uVar3);
    func_0x000107c61574();
    lVar5 = lStack_48;
    func_0x0001004575f0();
    func_0x000107c61574(pcVar4);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(long *)(param_2 + lVar1) = lVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    lVar2 = 0;
  }
  *param_1 = lVar5;
  func_0x000107c61174(lVar2);
  return;
}



/* Entry: 10170b32c; end: 10170b373;  */

void FUN_10170b32c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x000103fd7dd8(0);
  func_0x000107c5f9dc(uVar2,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  *param_1 = uVar2;
  return;
}



/* Entry: 10170b374; end: 10170b61f;  */

void FUN_10170b374(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x00010044d5e8(0);
  func_0x000107c613fc();
  FUN_10171a388(uStack_38,uStack_40);
  *param_1 = uStack_38;
  return;
}



/* Entry: 10170b620; end: 10170b63b;  */

void FUN_10170b620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170b63c,0,0);
  return;
}



/* Entry: 10170b63c; end: 10170b6fb;  */

void FUN_10170b63c(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x70,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  if (lVar3 != 0) {
    func_0x000100083b20(unaff_x22 + 0x88);
    lVar4 = *(long *)(unaff_x22 + 0x88);
    *(long *)(unaff_x22 + 0xb8) = lVar4;
    plVar1 = (long *)0x160;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10170b6fc;
    lVar3 = *(long *)(unaff_x22 + 0x98);
    plVar1[0x1c] = *(long *)(unaff_x22 + 0xa0);
    plVar1[0x1d] = lVar4;
    plVar1[0x1a] = unaff_x22 + 0x10;
    plVar1[0x1b] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10171943c,0,0);
    return;
  }
  puVar2 = *(undefined8 **)(unaff_x22 + 0x90);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010170b6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170b6fc; end: 10170b77f;  */

void FUN_10170b6fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xd8) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x108) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar2 + 0x118) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined8 *)(lVar2 + 0x128) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)(lVar2 + 0x120) = *(undefined8 *)(lVar2 + 0x60);
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0xb8));
    pcVar1 = FUN_10170b780;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0xb8));
    pcVar1 = (code *)0x10170b7d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10170b780; end: 10170b803;  */

void FUN_10170b780(void)

{
  undefined8 *puVar1;
  long unaff_x22;
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
  undefined8 uVar12;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  puVar1 = *(undefined8 **)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0xd8);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  puVar1[5] = uVar6;
  puVar1[4] = uVar5;
  puVar1[7] = uVar8;
  puVar1[6] = uVar7;
  puVar1[9] = uVar10;
  puVar1[8] = uVar9;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010170b7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170b804; end: 10170b81f;  */

void FUN_10170b804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170b820,0,0);
  return;
}



/* Entry: 10170b820; end: 10170b8f3;  */

void FUN_10170b820(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x30;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x10170b8a4;
    plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bf40,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010170b8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170b8f4; end: 10170b993;  */

void FUN_10170b8f4(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x28);
    uVar2 = *(ulong *)(unaff_x22 + 0x30);
    func_0x000107c61434(lVar3);
    func_0x000100029284();
    lVar3 = *(long *)(unaff_x22 + 0x50);
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar4);
    }
    func_0x000107c6142c(lVar3);
    lVar3 = *(long *)(unaff_x22 + 0x50);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010170b990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10170b994; end: 10170ba2b;  */

void FUN_10170b994(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10170b9dc;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bf40,0,0);
  return;
}



/* Entry: 10170ba2c; end: 10170babf;  */

void FUN_10170ba2c(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x10);
    uVar2 = *(ulong *)(unaff_x22 + 0x18);
    func_0x000107c61434();
    func_0x000100029284();
    lVar3 = *(long *)(unaff_x22 + 0x28);
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar4);
    }
    func_0x000107c6142c(lVar3);
    lVar1 = *(long *)(unaff_x22 + 0x28);
  }
  func_0x000107c6142c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010170babc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10170bac0; end: 10170baf7;  */

void FUN_10170bac0(long param_1)

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



/* Entry: 10170baf8; end: 10170bbf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10170baf8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112dc3e28;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dc3e28);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000100083b20(&uStack_48);
    lVar3 = 0;
    func_0x000101717124();
    func_0x000107c613fc();
    func_0x000107c61614(lVar3 + 0x10,0);
    func_0x00010044d36c(0);
    func_0x000107c613fc();
    lVar2 = unaff_x20;
    func_0x000107c6157c();
    func_0x00010044d38c();
    *(long *)(lVar3 + 0x18) = lVar2;
    *(undefined8 *)(lVar3 + 0x28) = 0x4000000000000000;
    *(undefined8 *)(lVar3 + 0x30) = 1000000000;
    *(undefined8 *)(lVar3 + 0x38) = 0x4024000000000000;
    func_0x000107c61604(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x20) = uStack_48;
    func_0x000107c61574();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 10170bbf8; end: 10170bc03; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider creatorSubscriptionsObservable] */

void FUN_10170bbf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_10170bc3c();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10170bc04; end: 10170bc3b;  */

void FUN_10170bc04(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  (*param_3)();
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10170bc3c; end: 10170bd7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10170bc3c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  lVar1 = lStack_38;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar2);
    if ((int)lVar1 != 0) {
      puVar3 = &UNK_1103fd6f8;
      func_0x000107c613fc(&UNK_1103fd6f8,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      uVar4 = 1;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10d981370,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
    }
  }
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  func_0x000100087bd4(&lStack_38,0x101711784);
  return lStack_38;
}



/* Entry: 10170bd7c; end: 10170bd93;  */

void FUN_10170bd7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bd94,0,0);
  return;
}



/* Entry: 10170bd94; end: 10170be9b;  */

void FUN_10170bd94(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x30) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x10170be18;
    plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a1f0,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010170be14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170be9c; end: 10170bf27; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider hasActiveSubscriptionToCreatorId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10170be9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  func_0x000107c5faec();
  uStack_50 = *(undefined8 *)(param_1 + _DAT_112dc3da8);
  uStack_48 = param_3;
  uStack_40 = param_2;
  func_0x000107c6157c(param_1);
  func_0x000100087bd4(&uStack_31,FUN_1017150ac,auStack_60,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return uStack_31;
}



/* Entry: 10170bf28; end: 10170bf3f;  */

void FUN_10170bf28(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bf40,0,0);
  return;
}



/* Entry: 10170bf40; end: 10170c00f;  */

void FUN_10170bf40(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  lVar1 = lVar3;
  func_0x000107c42e5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar3);
    if ((int)lVar1 != 0) {
      plVar2 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x20) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10170c010;
      plVar2[6] = *(long *)(unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a1f0,0,0);
      return;
    }
  }
  FUN_1017054cc(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010170c00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170c010; end: 10170c097;  */

void FUN_10170c010(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10170c060,0,0);
  return;
}



/* Entry: 10170c098; end: 10170c1c3; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider getCreatorSubscriptionsWithCompletionHandler:] */

void FUN_10170c098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fdb28;
  func_0x000107c613fc(&UNK_1103fdb28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fdb50;
  func_0x000107c613fc(&UNK_1103fdb50,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981628;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fdb78;
  func_0x000107c613fc(&UNK_1103fdb78,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981630;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d981638,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10170c1c4; end: 10170c21b;  */

void FUN_10170c1c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x30;
  func_0x000107c6157c(param_2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10170c21c;
  plVar1[3] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bf40,0,0);
  return;
}



/* Entry: 10170c21c; end: 10170c2b7;  */

void FUN_10170c21c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x20));
  func_0x000107c61574(uVar2);
  uVar1 = 0;
  func_0x000103fd7dd8(0);
  uVar2 = param_1;
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(param_1);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010170c2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 10170c2b8; end: 10170c3fb; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider getCreatorSubscriptionFor:completionHandler:] */

void FUN_10170c2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fdab0;
  func_0x000107c613fc(&UNK_1103fdab0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fdad8;
  func_0x000107c613fc(&UNK_1103fdad8,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d981608;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fdb00;
  func_0x000107c613fc(&UNK_1103fdb00,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d981610;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d981618,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10170c3fc; end: 10170c45b;  */

void FUN_10170c3fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  func_0x000107c5faec();
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  plVar1 = (long *)0x30;
  func_0x000107c6157c(param_3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10170c45c;
  plVar1[3] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bf40,0,0);
  return;
}



/* Entry: 10170c45c; end: 10170c4ab;  */

void FUN_10170c45c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170c4ac,0,0);
  return;
}



/* Entry: 10170c4ac; end: 10170c52f;  */

void FUN_10170c4ac(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_1017099e0(uVar4,uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(uVar3);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010170c52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10170c530; end: 10170c64f; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider fetchProductDisplayNameForCreatorId:completion:] */

/* WARNING: Possible PIC construction at 0x00010170c5c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010170c5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010170c5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010170c61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010170c62c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010170c620) */
/* WARNING: Removing unreachable block (ram,0x00010170c5f0) */
/* WARNING: Removing unreachable block (ram,0x00010170c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010170c5c8) */
/* WARNING: Removing unreachable block (ram,0x00010170c630) */

void FUN_10170c530(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4(param_4);
  lVar1 = param_1;
  func_0x000107c6157c();
  func_0x00010170b3ec();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c60bc4(param_4);
    FUN_101709248(param_3,param_2,lVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Block_release_11034bcf0)(param_4);
    return;
  }
  (**(code **)(param_4 + 0x10))(param_4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10170c650; end: 10170c6bf;  */

void FUN_10170c650(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x290) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x288) = param_2;
  *(undefined8 *)(unaff_x22 + 0x280) = param_1;
  *(undefined8 *)(unaff_x22 + 0x298) = *unaff_x20;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x2a0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x2a8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2b0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170c6c0,0,0);
  return;
}



/* Entry: 10170c6c0; end: 10170c7b7;  */

void FUN_10170c6c0(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x280) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x22 + 0x288) & 0x2000000000000000) != 0) {
    uVar1 = *(ulong *)(unaff_x22 + 0x288) >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x270);
    lVar4 = *(long *)(unaff_x22 + 0x270);
    lVar2 = lVar4;
    func_0x000107c42e5c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c42df4();
      func_0x000107c615e8(lVar4);
      if ((int)lVar2 != 0) {
        plVar3 = (long *)0x30;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x2b8) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_10170c7b8;
        plVar3[3] = *(long *)(unaff_x22 + 0x290);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a600,0,0);
        return;
      }
    }
    uVar5 = 3;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2b0));
                    /* WARNING: Could not recover jumptable at 0x00010170c7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5);
  return;
}



/* Entry: 10170c7b8; end: 10170c807;  */

void FUN_10170c7b8(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x269) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x2b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170c808,0,0);
  return;
}



/* Entry: 10170c808; end: 10170c95b;  */

void FUN_10170c808(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(char *)(unaff_x22 + 0x269) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x298);
    lVar4 = *(long *)(unaff_x22 + 0x290);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x280);
    func_0x000107c5eea0(uVar3);
    FUN_10170cbe0();
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(lVar4 + 0x80);
    *(long *)(unaff_x22 + 0x20) = lVar4;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x40) = param_1;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
    uVar3 = 0x112dc3db0;
    func_0x0001000285a8(0x112dc3db0,&UNK_10d981388);
    func_0x000100087bd4(unaff_x22 + 0x260,0x1017134c8,unaff_x22 + 0x10,uVar3);
    if (*(char *)(unaff_x22 + 0x268) == '\x01') {
      func_0x000100083b20(unaff_x22 + 0x278);
      lVar5 = *(long *)(unaff_x22 + 0x278);
      *(long *)(unaff_x22 + 0x2c8) = lVar5;
      plVar1 = (long *)0x440;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x2d0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_10170c95c;
      lVar2 = *(long *)(unaff_x22 + 0x288);
      lVar4 = *(long *)(unaff_x22 + 0x280);
      plVar1[0x85] = lVar5;
      plVar1[0x84] = lVar2;
      plVar1[0x83] = lVar4;
      plVar1[0x82] = unaff_x22 + 0x170;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10171967c,0,0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x260);
    (**(code **)(*(long *)(unaff_x22 + 0x2a8) + 8))
              (*(undefined8 *)(unaff_x22 + 0x2b0),*(undefined8 *)(unaff_x22 + 0x2a0));
  }
  else {
    uVar3 = 6;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2b0));
                    /* WARNING: Could not recover jumptable at 0x00010170c958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 10170c95c; end: 10170c9c3;  */

void FUN_10170c95c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x2c8);
  *(long *)(lVar2 + 0x2d8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2d0));
  func_0x000107c61574(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10170c9c4;
  }
  else {
    pcVar1 = FUN_10170cb90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10170c9c4; end: 10170cb8f;  */

void FUN_10170c9c4(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x1a0);
  iVar5 = (int)unaff_x22 + 0x80;
  FUN_1017134ec();
  if (iVar5 == 1) {
    uVar7 = 2;
  }
  else {
    uVar1 = *(ulong *)(unaff_x22 + 0x148);
    lVar3 = *(long *)(unaff_x22 + 0x150);
    uVar2 = *(ulong *)(unaff_x22 + 0x158);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar9 = uVar1 & 0xff;
    uVar7 = 0;
    if (uVar9 != 2) {
      uVar7 = uVar4;
    }
    uVar8 = 0xc000000000000000;
    if (uVar9 != 2) {
      uVar8 = uVar6;
    }
    func_0x000101713510(uVar1,lVar3,uVar2,uVar4,uVar6);
    func_0x00010006c090(uVar7,uVar8);
    uVar7 = 0;
    if ((uVar1 & 1) == 0) {
      uVar7 = uVar4;
      uVar8 = uVar6;
      lVar10 = lVar3;
      if (uVar9 == 2) {
        uVar7 = 0;
        uVar8 = 0xc000000000000000;
        lVar10 = 0;
      }
      func_0x000101713510(uVar1,lVar3,uVar2,uVar4,uVar6);
      func_0x00010006c090(uVar7,uVar8);
      if (uVar9 != 2 && (uVar2 & 0xff) != 1) {
        uVar7 = 2;
      }
      else {
        uVar7 = *(undefined8 *)(&UNK_10d981748 + lVar10 * 8);
      }
    }
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x290);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x280);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x288);
    *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
    func_0x000100087bd4(FUN_10171352c,unaff_x22 + 0x50,PTR___sytN_11034f1b0 + 8);
    func_0x000101714fec(unaff_x22 + 0x170,0x112dc3db8,&UNK_10d981390);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x2a8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x2b0),*(undefined8 *)(unaff_x22 + 0x2a0));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2b0));
                    /* WARNING: Could not recover jumptable at 0x00010170cb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7);
  return;
}



/* Entry: 10170cb90; end: 10170cbdf;  */

void FUN_10170cb90(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x2d8));
  (**(code **)(*(long *)(unaff_x22 + 0x2a8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x2b0),*(undefined8 *)(unaff_x22 + 0x2a0));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x2b0));
                    /* WARNING: Could not recover jumptable at 0x00010170cbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 10170cbe0; end: 10170cc87;  */

double FUN_10170cbe0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    uVar3 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010efb91c0);
    lVar4 = lVar2;
    func_0x000107c4c0d0(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    return (double)lVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10170cc88);
  (*pcVar1)();
}



/* Entry: 10170cc88; end: 10170ce8b;  */

void FUN_10170cc88(undefined8 *param_1,double param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 auStack_90 [2];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112dc3840;
  dVar8 = param_2;
  auStack_90[1] = param_6;
  func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar5 = (undefined8 *)((long)auStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12_00;
  func_0x000107c61428(param_3 + 0x78,auStack_78,0x20,0);
  lVar4 = *(long *)(param_3 + 0x78);
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    func_0x000100029284(param_4);
    if ((param_5 & 1) != 0) {
      FUN_101714bac(*(long *)(lVar4 + 0x38) + *(long *)(lVar3 + 0x48) * param_4,lVar7,0x112dc3840,
                    &UNK_10d980f60);
      func_0x000101714c3c(lVar7,lVar6,0x112dc3840,&UNK_10d980f60);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar4);
      func_0x000107c5ee68(lVar6 + *(int *)(lVar2 + 0x30));
      if (dVar8 < param_2) {
        func_0x000101714c3c(lVar6,puVar5,0x112dc3840,&UNK_10d980f60);
        iVar1 = *(int *)(lVar2 + 0x30);
        *param_1 = *puVar5;
        *(undefined1 *)(param_1 + 1) = 0;
        lVar2 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar2 + -8) + 8))((long)puVar5 + (long)iVar1,lVar2);
        return;
      }
      func_0x000101714fec(lVar6,0x112dc3840,&UNK_10d980f60);
      goto LAB_10170ce3c;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c614a8(auStack_78);
LAB_10170ce3c:
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10170ce8c; end: 10170cf93;  */

void FUN_10170ce8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112dc4000;
  func_0x0001000285a8(0x112dc4000,&UNK_10d9816c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = (undefined8 *)((long)&uStack_70 - extraout_x8);
  lVar2 = 0x112dc3840;
  func_0x0001000285a8(0x112dc3840,&UNK_10d980f60);
  iVar1 = *(int *)(lVar2 + 0x30);
  *puVar3 = param_4;
  func_0x000107c61434(param_3);
  func_0x000107c5eea0((long)puVar3 + (long)iVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  func_0x000107c61428(param_1 + 0x78,auStack_68,0x21,0);
  func_0x000101709c04(puVar3,param_2,param_3);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 10170cf94; end: 10170d0d7; -[_TtC42CreatorSubscriptionsServicesImplementation32CreatorSubscriptionsInfoProvider isEligibleToSubscribeTo:completionHandler:] */

void FUN_10170cf94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_1103fda38;
  func_0x000107c613fc(&UNK_1103fda38,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_1103fda60;
  func_0x000107c613fc(&UNK_1103fda60,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9815e8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1103fda88;
  func_0x000107c613fc(&UNK_1103fda88,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9815f0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d9815f8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 10170d0d8; end: 10170d14f;  */

void FUN_10170d0d8(long param_1,long param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  long *plVar3;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(long **)(unaff_x22 + 0x18) = param_3;
  func_0x000107c5faec();
  *(long *)(unaff_x22 + 0x20) = param_2;
  plVar3 = (long *)0x2e0;
  func_0x000107c6157c(param_3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10170d150;
  plVar3[0x52] = (long)param_3;
  plVar3[0x51] = param_2;
  plVar3[0x50] = param_1;
  plVar3[0x53] = *param_3;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar3[0x54] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x55] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x56] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170c6c0,0,0);
  return;
}



/* Entry: 10170d150; end: 10170d1bb;  */

void FUN_10170d150(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  lVar2 = *(long *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar3);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010170d1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 10170d1bc; end: 10170d283;  */

void FUN_10170d1bc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x1d8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1e0) = *unaff_x20;
  lVar1 = 0;
  func_0x000107c5eea4();
  *(long *)(unaff_x22 + 0x1e8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x1f0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x200) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10170d234;
  plVar3[3] = (long)unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a600,0,0);
  return;
}



/* Entry: 10170d284; end: 10170d39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10170d284(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x249) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
    lVar5 = *(long *)(unaff_x22 + 0x1d8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c5eea0(uVar3);
    *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(lVar5 + _DAT_112dc3dc0);
    *(long *)(unaff_x22 + 0x20) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
    uVar1 = 0x112dc3dc8;
    func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
    func_0x000100087bd4(unaff_x22 + 0x248,0x101713548,unaff_x22 + 0x10,uVar1);
    bVar4 = *(byte *)(unaff_x22 + 0x248);
    if (bVar4 == 2) {
      func_0x000100083b20(unaff_x22 + 0x1d0);
      lVar5 = *(long *)(unaff_x22 + 0x1d0);
      *(long *)(unaff_x22 + 0x210) = lVar5;
      plVar2 = (long *)0x100;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x218) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10170d3a0;
      plVar2[0x18] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101719a44,0,0);
      return;
    }
    (**(code **)(*(long *)(unaff_x22 + 0x1f0) + 8))
              (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1e8));
  }
  else {
    bVar4 = 0;
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010170d39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar4 & 1);
  return;
}



/* Entry: 10170d3a0; end: 10170d41b;  */

void FUN_10170d3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x210);
  *(undefined8 *)(lVar2 + 0x220) = param_1;
  *(undefined8 *)(lVar2 + 0x228) = param_2;
  *(undefined8 *)(lVar2 + 0x230) = param_3;
  *(undefined8 *)(lVar2 + 0x238) = param_4;
  *(long *)(lVar2 + 0x240) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x218));
  func_0x000107c61574(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10170d41c;
  }
  else {
    pcVar1 = FUN_10170d698;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10170d41c; end: 10170d697;  */

void FUN_10170d41c(void)

{
  ulong uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = *(long *)(unaff_x22 + 0x228);
  if (lVar7 == 0) {
    bVar3 = false;
  }
  else {
    uVar8 = *(ulong *)(unaff_x22 + 0x220);
    uVar1 = uVar8 & 0x10101;
    bVar3 = uVar1 != 0;
    lVar5 = *(long *)(lVar7 + 0x10);
    if (lVar5 != 0) {
      FUN_10171320c(0,lVar5,0);
      puVar6 = (undefined8 *)(lVar7 + 0x20);
      do {
        uVar10 = puVar6[1];
        uVar9 = *puVar6;
        uVar12 = puVar6[3];
        uVar11 = puVar6[2];
        uVar14 = puVar6[5];
        uVar13 = puVar6[4];
        uVar15 = puVar6[6];
        *(undefined8 *)(unaff_x22 + 0x70) = puVar6[7];
        *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
        *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
        *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
        *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
        *(undefined8 *)(unaff_x22 + 0x38) = uVar9;
        uVar10 = puVar6[9];
        uVar9 = puVar6[8];
        uVar12 = puVar6[0xb];
        uVar11 = puVar6[10];
        uVar14 = puVar6[0xd];
        uVar13 = puVar6[0xc];
        uVar15 = puVar6[0xe];
        *(undefined8 *)(unaff_x22 + 0xb0) = puVar6[0xf];
        *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
        *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
        *(undefined8 *)(unaff_x22 + 0x98) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x90) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar11;
        *(undefined8 *)(unaff_x22 + 0x80) = uVar10;
        *(undefined8 *)(unaff_x22 + 0x78) = uVar9;
        uVar10 = puVar6[0x11];
        uVar9 = puVar6[0x10];
        uVar12 = puVar6[0x13];
        uVar11 = puVar6[0x12];
        uVar14 = puVar6[0x15];
        uVar13 = puVar6[0x14];
        *(undefined8 *)(unaff_x22 + 0xe8) = puVar6[0x16];
        *(undefined8 *)(unaff_x22 + 0xe0) = uVar14;
        *(undefined8 *)(unaff_x22 + 0xd8) = uVar13;
        *(undefined8 *)(unaff_x22 + 0xd0) = uVar12;
        *(undefined8 *)(unaff_x22 + 200) = uVar11;
        *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
        *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
        uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
        puVar4 = PTR_PTR_1126a7a80;
        func_0x000107c610f8();
        FUN_101713564(unaff_x22 + 0x38,unaff_x22 + 0x118);
        func_0x000107c453e4();
        func_0x000107c5fadc(uVar9,uVar12);
        func_0x000107c53af8(puVar4);
        func_0x000107c61170(uVar9);
        func_0x000107c5fadc(uVar10,uVar13);
        func_0x000107c54230(puVar4);
        func_0x000107c61170(uVar10);
        func_0x000107c5fadc(uVar11,uVar14);
        func_0x000107c57384(puVar4);
        func_0x000107c61170(uVar11);
        func_0x0001017135a0(unaff_x22 + 0x38);
        uVar8 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar8) {
          FUN_10171320c(1 < *(ulong *)(puVar2 + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar8 + 1;
        *(undefined **)(puVar2 + uVar8 * 8 + 0x20) = puVar4;
        puVar6 = puVar6 + 0x17;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      lVar7 = *(long *)(unaff_x22 + 0x228);
      uVar8 = *(ulong *)(unaff_x22 + 0x220);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x230);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x1d8);
    *(bool *)(unaff_x22 + 0x108) = uVar1 != 0;
    *(undefined **)(unaff_x22 + 0x110) = puVar2;
    func_0x000100087bd4(FUN_1017135d4,unaff_x22 + 0xf0,PTR___sytN_11034f1b0 + 8);
    FUN_1017135f4(uVar8,lVar7,uVar10,uVar9);
    func_0x000107c6142c(puVar2);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x1f0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1e8));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x00010170d694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar3);
  return;
}


