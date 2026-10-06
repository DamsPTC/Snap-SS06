/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107476524; end: 10747654f;  */

void FUN_107476524(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b3128;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107476550; end: 10747666b;  */

void FUN_107476550(undefined8 param_1)

{
  long lVar1;
  undefined4 *puVar2;
  code *extraout_x8;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 *puStack_48;
  
  func_0x000107479ce4();
  func_0x00010747a900(&uStack_58);
  func_0x000107479cc8(*(undefined8 *)(CONCAT44(uStack_54,uStack_58) + 0x2b0));
  (*extraout_x8)();
  puVar3 = *(undefined8 **)(unaff_x20 + 8);
  *puVar3 = param_1;
  *(undefined1 *)(puVar3 + 1) = 1;
  func_0x000107479fd4();
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  if (*(char *)(puVar3 + 2) == '\x01') {
    func_0x000107280b2c();
    puVar4 = *(undefined8 **)(unaff_x19 + 0x108);
    if (puVar4 < *(undefined8 **)(unaff_x19 + 0x110)) {
      uVar5 = *puVar3;
      puVar4[1] = puVar3[1];
      *puVar4 = uVar5;
      puVar4 = puVar4 + 2;
    }
    else {
      lVar1 = unaff_x19 + 0x100;
      func_0x00010725aeb4(lVar1,((long)puVar4 - *(long *)(unaff_x19 + 0x100) >> 4) + 1);
      func_0x00010725ad0c(&uStack_58,lVar1,
                          *(long *)(unaff_x19 + 0x108) - *(long *)(unaff_x19 + 0x100) >> 4,
                          unaff_x19 + 0x110);
      uVar5 = *puVar3;
      puStack_48[1] = puVar3[1];
      *puStack_48 = uVar5;
      puStack_48 = puStack_48 + 2;
      func_0x00010725ac94(unaff_x19 + 0x100,&uStack_58);
      puVar4 = *(undefined8 **)(unaff_x19 + 0x108);
      func_0x00010725ad94(&uStack_58);
    }
    *(undefined8 **)(unaff_x19 + 0x108) = puVar4;
  }
  puVar2 = *(undefined4 **)(unaff_x20 + 0x18);
  if (*(char *)(puVar2 + 1) == '\x01') {
    func_0x00010726a954();
    uStack_58 = *puVar2;
    FUN_1073b50ac(unaff_x19 + 0x118,&uStack_58);
  }
  return;
}



/* Entry: 10747666c; end: 107476693;  */

void FUN_10747666c(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3188);
  func_0x000107479b00();
  return;
}



/* Entry: 107476694; end: 10747669f;  */

undefined ** FUN_107476694(void)

{
  return &PTR_DAT_1109b3188;
}



/* Entry: 1074766a0; end: 1074766d3;  */

void FUN_1074766a0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107479bd0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107479b8c(uVar1);
  return;
}



/* Entry: 1074766d4; end: 1074766ff;  */

undefined8 FUN_1074766d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_107476700(param_1,param_2,&uStack_18,&uStack_19);
  return uStack_18;
}



/* Entry: 107476700; end: 107476743;  */

long FUN_107476700(long *param_1,long param_2,undefined8 param_3)

{
  for (; param_1 != (long *)param_2; param_1 = (long *)*param_1) {
    FUN_107476744(param_3,param_1 + 2);
  }
  return param_2;
}



/* Entry: 107476744; end: 10747674f;  */

void FUN_107476744(long *param_1,long param_2)

{
  if (*(long **)(*param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107476760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48(0,param_2,param_2 + 0x38);
  return;
}



/* Entry: 107476750; end: 10747676f;  */

void FUN_107476750(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107476760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 107476770; end: 107476777;  */

void FUN_107476770(void)

{
  return;
}



/* Entry: 107476778; end: 1074767a7;  */

void FUN_107476778(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010747a2c4();
  func_0x000107479c38(&PTR_FUN_1109b31a8);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1074767a8; end: 1074767d3;  */

void FUN_1074767a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b31a8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074767d4; end: 107476cd7;  */

void FUN_1074767d4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x9;
  long extraout_x11;
  ulong extraout_x12;
  ulong uVar9;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  long alStack_1c8 [2];
  long alStack_1b8 [2];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_170 [24];
  long alStack_158 [3];
  long alStack_140 [7];
  undefined4 uStack_108;
  undefined4 uStack_104;
  long *plStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  
  lVar4 = param_1;
  lVar12 = param_3;
  func_0x000107479adc();
  uVar5 = *(undefined8 *)(lVar4 + 8);
  lVar1 = *(long *)(lVar4 + 0x10);
  uStack_90 = extraout_x8;
  FUN_10746bb6c(alStack_140,lVar12);
  func_0x0001077506b8(uVar5,alStack_140[0] + 0x2c0);
  func_0x00010747a980();
  lVar12 = *(long *)(param_1 + 0x18);
  func_0x000107479fdc(alStack_140);
  lVar4 = alStack_140[0];
  func_0x00010747a980();
  if (*(int *)(lVar4 + 0x2e8) == 0) {
    uVar14 = 1;
  }
  else if (*(int *)(lVar4 + 0x2e8) == 1) {
    uVar14 = 0;
  }
  else {
    func_0x000107479fdc(alStack_140);
    func_0x00010747a980();
    func_0x000104c2fe00(alStack_140,alStack_140[0] + 0x90);
    func_0x00010724ef84(alStack_158,alStack_140[0] + 0x58);
    puVar13 = (undefined8 *)(lVar12 + 0x20);
    Hint_Prefetch(*puVar13,0,2,0);
    func_0x0001072a02f8(*puVar13,puVar13,alStack_158);
    lVar10 = 0;
    func_0x00010747ab64(*(ulong *)(lVar12 + 0x20) >> 0xc ^ (ulong)puVar13 >> 7);
    uVar7 = extraout_x8_00;
    uVar9 = extraout_x12;
    while( true ) {
      func_0x00010747ab9c();
      lVar2 = extraout_x9;
      for (uVar11 = extraout_x8_01 & 0x8080808080808080; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11)
      {
        uVar6 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar15 = (uVar7 & uVar9) + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) &
                 extraout_x12_00;
        uVar6 = extraout_x11 + uVar15 * lVar2;
        plVar8 = alStack_158;
        func_0x000107283140();
        if ((uVar6 & 1) != 0) {
          if (*(int *)(lVar4 + 0x2e8) != 2) goto LAB_1074769c8;
          lVar12 = *(long *)(lVar12 + 0x28);
          lVar4 = lVar4 + 0x2d8;
          FUN_107440e54();
          FUN_10746bbb8();
          lStack_198 = lVar4;
          plStack_190 = plVar8;
          goto LAB_10747697c;
        }
        lVar2 = 0;
      }
      func_0x00010747a1bc();
      if ((extraout_x8_02 & 1) != 0) break;
      lVar10 = lVar10 + 8;
      uVar7 = lVar10 + (uVar7 & uVar9);
      uVar9 = extraout_x12_01;
    }
LAB_1074769c8:
    uVar14 = 0;
LAB_1074769d8:
    func_0x00010747a318();
    func_0x00010747a4dc();
  }
  puVar13 = *(undefined8 **)(lVar1 + 0x248);
  func_0x000107479fdc(alStack_1b8);
  func_0x000107479fdc(alStack_1c8);
  if ((uint)uVar5 != 0) {
    func_0x000107476d0c(alStack_158,*(undefined4 *)(alStack_1b8[0] + 0x2d0));
    func_0x000107479eec();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_170,alStack_158);
    plVar8 = alStack_140;
    func_0x00010726e300(plVar8,&DAT_10f415918,auStack_170);
    func_0x00010729d56c();
    lStack_198 = CONCAT44(lStack_198._4_4_,1);
    plStack_190 = (long *)((ulong)plStack_190 & 0xffffffff00000000);
    uStack_180 = *puVar13;
    uStack_178 = 3;
    func_0x00010747a0e8(puVar13,plVar8,&lStack_198,&uStack_180);
    func_0x00010747a830();
    func_0x00010747a988();
    func_0x00010747a318();
  }
  if (uVar14 != 0) {
    func_0x000107476d0c(alStack_158,*(undefined4 *)(alStack_1c8[0] + 0x2e8));
    func_0x000107479eec();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&lStack_198,alStack_158);
    plVar8 = alStack_140;
    func_0x00010726e300(plVar8,&DAT_10f415918,&lStack_198);
    func_0x00010729d56c();
    uStack_180 = CONCAT44(uStack_180._4_4_,1);
    uStack_178 = 0;
    uStack_1a8 = *puVar13;
    uStack_1a0 = 3;
    func_0x00010747a0e8(puVar13,plVar8,&uStack_180,&uStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_198);
    func_0x00010747a988();
    func_0x00010747a318();
  }
  func_0x0001074737a0();
  func_0x00010747a894();
  uVar3 = ((uint)uVar5 | uVar14) == 1;
  if ((bool)uVar3) {
    func_0x0001072ab574(lVar1 + 0x2e8);
    plVar8 = alStack_140;
    func_0x000104c2fe00(plVar8,param_2);
    uStack_104 = *(undefined4 *)(param_3 + 0xf8);
    uStack_108 = 1;
    func_0x00010747a8ec();
    func_0x00010747a8ac();
    func_0x000107479fdc(alStack_158);
    func_0x000107479cc8(*(undefined8 *)(alStack_158[0] + 0x2b0));
    (*extraout_x8_03)();
    uStack_c8 = 1;
    uStack_a0 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    plStack_d0 = plVar8;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plStack_98 = plVar8;
    func_0x0001074737a0(alStack_158);
    FUN_10746b934(*(undefined8 *)(lVar1 + 0x248),alStack_140);
    FUN_107470bbc(lVar1 + 0x328,alStack_140);
    func_0x00010747a4e4();
    func_0x00010747a93c();
  }
  func_0x000107479a9c(uStack_90);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010747a318();
    func_0x00010747a4dc();
    func_0x000107479c68();
    func_0x000107479cd8();
    func_0x000107479ca4();
    func_0x000107479b00();
    return;
  }
  return;
LAB_10747697c:
  plVar8 = plStack_190;
  uVar14 = (uint)(lStack_198 != 0);
  if (lStack_198 == 0) goto LAB_1074769d8;
  func_0x00010724ef84(auStack_170,alStack_140);
  uVar7 = lVar12 + uVar15 * 0x50 + 0x38;
  func_0x00010786a8ec(uVar7,auStack_170,alStack_140[0] + 0x20,plVar8);
  func_0x00010747a830();
  if ((uVar7 & 1) != 0) goto LAB_1074769d8;
  func_0x000107262260(&lStack_198);
  goto LAB_10747697c;
}



/* Entry: 107476cd8; end: 107476cff;  */

void FUN_107476cd8(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3218);
  func_0x000107479b00();
  return;
}



/* Entry: 107476d00; end: 107476d37;  */

undefined ** FUN_107476d00(void)

{
  return &PTR_DAT_1109b3218;
}



/* Entry: 107476d38; end: 107476d6b;  */

void FUN_107476d38(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000107479bd0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x000107479b8c(uVar1);
  return;
}



/* Entry: 107476d6c; end: 107476dc7;  */

void FUN_107476d6c(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_1 + 0x10) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(param_1 + 0x10)])(&uStack_21,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return;
    }
    (*(code *)(&PTR_FUN_1109b3228)[uVar1])(&stack0xffffffffffffffe8);
  }
  return;
}



/* Entry: 107476dc8; end: 107476ddb;  */

void FUN_107476dc8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x10) != 0) {
    uStack_18 = param_3;
    FUN_107476e08(&lStack_20);
  }
  return;
}



/* Entry: 107476ddc; end: 107476e07;  */

void FUN_107476ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_107476e08(&lStack_20);
  }
  return;
}



/* Entry: 107476e08; end: 107476e23;  */

void FUN_107476e08(void)

{
  long unaff_x19;
  
  func_0x00010747a874();
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  return;
}



/* Entry: 107476e24; end: 107476e2b;  */

void FUN_107476e24(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  lStack_20 = *param_1;
  if (*(int *)(lStack_20 + 0x10) != 1) {
    uStack_18 = param_3;
    FUN_107476e5c(&lStack_20);
  }
  return;
}



/* Entry: 107476e2c; end: 107476e5b;  */

void FUN_107476e2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_20;
  undefined8 uStack_18;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    lStack_20 = param_1;
    uStack_18 = param_3;
    FUN_107476e5c(&lStack_20);
  }
  return;
}



/* Entry: 107476e5c; end: 107476e7b;  */

void FUN_107476e5c(void)

{
  long unaff_x19;
  
  func_0x00010747a874();
  *(undefined4 *)(unaff_x19 + 0x10) = 1;
  return;
}



/* Entry: 107476e7c; end: 107476e83;  */

void FUN_107476e7c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined8 auStack_30 [2];
  
  if (*(int *)(*param_2 + 0x10) != 2) {
    FUN_107476ebc(&stack0xffffffffffffffe0);
    return;
  }
  if (param_3 != param_4) {
    func_0x000107479e30();
    auStack_30[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010747a254();
    FUN_1073ebe30();
    FUN_1073dd578(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107476e84; end: 107476ebb;  */

void FUN_107476e84(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined8 auStack_30 [2];
  
  if (*(int *)(param_2 + 0x10) != 2) {
    FUN_107476ebc(&stack0xffffffffffffffe0);
    return;
  }
  if (param_3 != param_4) {
    func_0x000107479e30();
    auStack_30[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010747a254();
    FUN_1073ebe30();
    FUN_1073dd578(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107476ebc; end: 107476efb;  */

void FUN_107476ebc(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_1073dd510(auStack_30,*(undefined8 *)(param_1 + 8));
  func_0x00010747a254();
  func_0x0001073ebe74();
  FUN_1073e0028(auStack_30);
  return;
}



/* Entry: 107476efc; end: 107476fc3;  */

void FUN_107476efc(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  undefined8 auStack_30 [2];
  
  if (param_2 != param_3) {
    func_0x000107479e30();
    auStack_30[0] = param_1;
    if (extraout_x8 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    if (*unaff_x19 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010747a254();
    FUN_1073ebe30();
    FUN_1073dd578(auStack_30);
    if (*unaff_x19 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_01 != 0);
    }
  }
  return;
}



/* Entry: 107476fc4; end: 107476fcb;  */

void FUN_107476fc4(void)

{
  return;
}



/* Entry: 107476fcc; end: 107476fef;  */

void FUN_107476fcc(void)

{
  func_0x00010747a224();
  func_0x000107479c38(&PTR_FUN_1109b3250);
  return;
}



/* Entry: 107476ff0; end: 10747700b;  */

void FUN_107476ff0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b3250;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10747700c; end: 10747723f;  */

void FUN_10747700c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined1 in_NG;
  long *plVar3;
  long *extraout_x8;
  long lVar4;
  long *plVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long *unaff_x23;
  long *plVar9;
  ulong uVar10;
  undefined1 auStack_88 [24];
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)(param_5 + 0x150);
  plVar1 = *(long **)(param_3 + 0x10);
  **(long **)(param_3 + 8) = **(long **)(param_3 + 8) + lVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_88,param_5 + 0xa8);
  plVar5 = plVar1 + 3;
  lStack_70 = lVar7;
  func_0x000100102e7c(plVar5,auStack_88);
  plVar8 = (long *)plVar1[1];
  if (plVar8 != (long *)0x0) {
    uVar10 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar10) == 0) {
      unaff_x23 = (long *)(uVar10 & (ulong)plVar5);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar5 - (long)plVar8 < 0;
      unaff_x23 = plVar5;
      if (plVar8 <= plVar5) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x23 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
      }
    }
    plVar9 = *(long **)(*plVar1 + (long)unaff_x23 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_1074770e8;
          plVar3 = (long *)plVar9[1];
          in_NG = (long)plVar3 - (long)plVar5 < 0;
          if (plVar3 != plVar5) break;
          plVar3 = plVar9 + 2;
          func_0x0001000e107c(plVar3,auStack_88);
          if (((ulong)plVar3 & 1) != 0) {
            bVar6 = false;
            goto LAB_1074771f4;
          }
        }
        if (((ulong)plVar8 & uVar10) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar10);
        }
        else if (plVar8 <= plVar3) {
          func_0x00010747a39c();
          plVar3 = extraout_x8;
        }
        in_NG = (long)plVar3 - (long)unaff_x23 < 0;
      } while (plVar3 == unaff_x23);
    }
  }
LAB_1074770e8:
  plVar9 = (long *)0x30;
  __Znwm();
  plVar3 = plVar1 + 2;
  uStack_58 = 0;
  *plVar9 = 0;
  plVar9[1] = (long)plVar5;
  plStack_68 = plVar9;
  plStack_60 = plVar3;
  FUN_107473420(plVar9 + 2,auStack_88);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  func_0x0001001684fc();
  if ((plVar8 == (long *)0x0) || (func_0x00010747a1a8(param_1,param_2,(float)plVar8), (bool)in_NG))
  {
    func_0x00010747a6d8();
    func_0x000100168528();
    FUN_107477274(plVar1);
    plVar8 = (long *)plVar1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x23 = (long *)((long)plVar8 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x23 = plVar5;
      if (plVar8 <= plVar5) {
        uVar10 = 0;
        if (plVar8 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x23 = (long *)((long)plVar5 - uVar10 * (long)plVar8);
      }
    }
  }
  plVar9 = plStack_68;
  lVar4 = *plVar1;
  plVar5 = *(long **)(lVar4 + (long)unaff_x23 * 8);
  if (plVar5 == (long *)0x0) {
    *plStack_68 = *plVar3;
    *plVar3 = (long)plStack_68;
    *(long **)(lVar4 + (long)unaff_x23 * 8) = plVar3;
    if (*plStack_68 != 0) {
      plVar5 = *(long **)(*plStack_68 + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar5) {
        uVar10 = 0;
        if (plVar8 != (long *)0x0) {
          uVar10 = (ulong)plVar5 / (ulong)plVar8;
        }
        plVar5 = (long *)((long)plVar5 - uVar10 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar5;
    *plVar5 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  plVar1[3] = plVar1[3] + 1;
  FUN_107477408(&plStack_68);
  bVar6 = true;
LAB_1074771f4:
  func_0x000107479f38();
  if (!bVar6) {
    plVar9[5] = plVar9[5] + lVar7;
  }
  return;
}



/* Entry: 107477240; end: 107477267;  */

void FUN_107477240(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b32c0);
  func_0x000107479b00();
  return;
}



/* Entry: 107477268; end: 107477273;  */

undefined ** FUN_107477268(void)

{
  return &PTR_DAT_1109b32c0;
}



/* Entry: 107477274; end: 10747730b;  */

void FUN_107477274(ulong param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar6;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = param_1;
  uVar5 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar3 = param_2;
  }
  uVar9 = *(ulong *)(param_1 + 8);
  bVar2 = uVar9 <= param_2;
  if (uVar9 < param_2) {
LAB_1074772bc:
    func_0x00010747a290();
    if (uVar5 == 0) {
      FUN_1074773d4(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      lVar4 = uVar3 + 8;
      FUN_1074773ec(lVar4);
      FUN_1074773d4(uVar3,lVar4);
      func_0x00010747a5f4();
      uVar9 = extraout_x9;
      while (uVar5 != uVar9) {
        func_0x00010747a6cc();
        uVar9 = extraout_x9_00;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x00010747a0a8();
        func_0x00010747a08c();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9_01;
        uVar3 = extraout_x10;
        uVar9 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((uVar5 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (uVar5 <= uVar8) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar8 / uVar5;
            }
            uVar8 = uVar8 - uVar1 * uVar5;
          }
          if (uVar8 != uVar9) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar6;
              uVar9 = uVar8;
            }
            else {
              *plVar6 = *plVar7;
              func_0x000107479ba4();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_02;
              uVar3 = extraout_x10_00;
              uVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x00010747a4fc();
    if ((bVar2) && ((uVar9 & uVar9 - 1) == 0)) {
      func_0x000107479ab0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    if (param_2 < uVar9) goto LAB_1074772bc;
  }
  return;
}



/* Entry: 10747730c; end: 1074773d3;  */

void FUN_10747730c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1074773d4(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1074773ec(lVar2);
    FUN_1074773d4(param_1,lVar2);
    func_0x00010747a5f4();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x00010747a6cc();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010747a0a8();
      func_0x00010747a08c();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x000107479ba4();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1074773d4; end: 1074773eb;  */

void FUN_1074773d4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074773ec; end: 107477407;  */

void FUN_1074773ec(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010747a3a8();
  FUN_107477428();
  return;
}



/* Entry: 107477408; end: 107477427;  */

void FUN_107477408(void)

{
  func_0x00010747a3a8();
  FUN_107477428();
  return;
}



/* Entry: 107477428; end: 10747743f;  */

void FUN_107477428(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 107477440; end: 1074774b3;  */

void FUN_107477440(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1074774b4; end: 1074774bb;  */

void FUN_1074774b4(void)

{
  return;
}



/* Entry: 1074774bc; end: 1074774df;  */

void FUN_1074774bc(void)

{
  func_0x00010747a224();
  func_0x000107479c38(&PTR_FUN_1109b32e0);
  return;
}



/* Entry: 1074774e0; end: 1074774fb;  */

void FUN_1074774e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109b32e0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1074774fc; end: 10747757f;  */

void FUN_1074774fc(long param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  undefined1 auStack_38 [16];
  undefined1 uStack_28;
  
  puVar1 = (uint *)**(undefined8 **)(param_1 + 8);
  if (puVar1 == (uint *)0x0) {
    lVar2 = 0;
  }
  else {
    func_0x00010778196c();
    lVar2 = (ulong)*puVar1 * (ulong)puVar1[1] * 4;
  }
  auStack_38[0] = 0;
  uStack_28 = 0;
  FUN_10746f344(param_2,auStack_38,lVar2);
  FUN_10747758c(auStack_38);
  return;
}



/* Entry: 107477580; end: 10747758b;  */

undefined ** FUN_107477580(void)

{
  return &PTR_DAT_1109b3340;
}



/* Entry: 10747758c; end: 1074775ab;  */

void FUN_10747758c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1073c5f18();
  }
  return;
}



/* Entry: 1074775ac; end: 1074775b3;  */

void FUN_1074775ac(void)

{
  return;
}



/* Entry: 1074775b4; end: 1074775df;  */

void FUN_1074775b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010747a0a0();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_1109b3360;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1074775e0; end: 10747761f;  */

void FUN_1074775e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109b3360;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107477620; end: 107477647;  */

void FUN_107477620(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b33c0);
  func_0x000107479b00();
  return;
}



/* Entry: 107477648; end: 107477653;  */

undefined ** FUN_107477648(void)

{
  return &PTR_DAT_1109b33c0;
}



/* Entry: 107477654; end: 10747767f;  */

undefined8 * FUN_107477654(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b33e0;
  FUN_10746ebc4(param_1 + 1);
  return param_1;
}



/* Entry: 107477680; end: 107477693;  */

void FUN_107477680(void)

{
  FUN_107477654();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107477694; end: 1074776cb;  */

undefined8 FUN_107477694(void)

{
  undefined8 uVar1;
  
  uVar1 = 600;
  __Znwm(600);
  FUN_1074779a0();
  return uVar1;
}



/* Entry: 1074776cc; end: 1074776ef;  */

void FUN_1074776cc(long param_1,undefined8 param_2)

{
  func_0x000107479cac(param_2,param_1 + 8);
  func_0x00010747a4bc(&PTR_FUN_1109b33e0);
  FUN_107472e48();
  return;
}



/* Entry: 1074776f0; end: 10747796b;  */

void FUN_1074776f0(void)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_5c8 [16];
  undefined1 auStack_5b8 [8];
  undefined1 auStack_5b0 [168];
  long lStack_508;
  undefined1 auStack_500 [368];
  undefined4 uStack_390;
  undefined1 auStack_388 [88];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [368];
  undefined4 uStack_1a0;
  undefined1 auStack_198 [96];
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_48;
  
  func_0x00010747a364();
  func_0x000107479adc();
  uStack_48 = extraout_x8;
  FUN_107469c74(auStack_5c8,unaff_x19 + 8);
  iVar2 = (int)unaff_x19 + 8;
  func_0x000107469cd8();
  if (iVar2 != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x30);
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000107479dc0(*(undefined8 *)(unaff_x19 + 0x28));
    uVar4 = *(undefined8 *)(lVar6 + 0x248);
    FUN_10746bb6c(&lStack_508,unaff_x19 + 0x38);
    FUN_10746ea64(&uStack_330,0xd3,*(undefined8 *)(lStack_508 + 0x10),unaff_x19 + 0xe0);
    uStack_118 = **(undefined8 **)(lVar6 + 0x248);
    uStack_110 = 3;
    func_0x00010747a0f0(uVar4,&uStack_330,auStack_5b8,&uStack_118);
    func_0x000107262330(&uStack_330);
    func_0x0001074737a0(&lStack_508);
    plVar5 = *(long **)(lVar6 + 0x10);
    lStack_508 = lVar6;
    FUN_107472e90(auStack_500,unaff_x19 + 0x38);
    if ((*(byte *)(unaff_x19 + 0x1ac) & 1) == 0) goto LAB_1074778c8;
    uStack_390 = *(undefined4 *)(unaff_x19 + 0x1a8);
    FUN_107473180(auStack_388);
    FUN_10746eb70(&uStack_330,lVar6 + 0x428);
    FUN_107477a2c(&uStack_318,&lStack_508);
    puStack_120 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x1f8;
    __Znwm();
    *puVar3 = &PTR_FUN_1109b3460;
    puVar3[2] = uStack_328;
    puVar3[1] = uStack_330;
    uStack_330 = 0;
    uStack_328 = 0;
    puVar3[4] = uStack_318;
    puVar3[3] = uStack_320;
    FUN_107472e90(puVar3 + 5,auStack_310);
    *(undefined4 *)(puVar3 + 0x33) = uStack_1a0;
    func_0x00010746fdfc(puVar3 + 0x34,auStack_198);
    puStack_120 = puVar3;
    FUN_1073ae318(auStack_5b0,unaff_x19 + 0x1b0);
    func_0x000107273dcc(&uStack_118,auStack_138,auStack_5b0);
    func_0x00010747a540(*(undefined8 *)(*plVar5 + 0x18));
    func_0x000107273efc(&uStack_118);
    func_0x000107273f24(auStack_5b0);
    func_0x0001006393ec(auStack_138);
    FUN_1074779e4(&uStack_330);
    func_0x000107477a04(&lStack_508);
  }
  func_0x00010747a18c();
  func_0x000107479a9c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1074778c8:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1074778d0);
  (*pcVar1)();
}



/* Entry: 10747796c; end: 107477993;  */

void FUN_10747796c(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b34d0);
  func_0x000107479b00();
  return;
}



/* Entry: 107477994; end: 10747799f;  */

undefined ** FUN_107477994(void)

{
  return &PTR_DAT_1109b34d0;
}



/* Entry: 1074779a0; end: 1074779e3;  */

void FUN_1074779a0(void)

{
  func_0x000107479cac();
  func_0x00010747a4bc(&PTR_FUN_1109b33e0);
  FUN_107472e48();
  return;
}



/* Entry: 1074779e4; end: 107477a2b;  */

long FUN_1074779e4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010016825c();
  func_0x000107477a04();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107477a2c; end: 107477a73;  */

void FUN_107477a2c(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479cac();
  *param_1 = *param_2;
  FUN_107472e90(param_1 + 1,param_2 + 1);
  *(undefined4 *)(unaff_x19 + 0x178) = *(undefined4 *)(unaff_x20 + 0x178);
  FUN_107473180(unaff_x19 + 0x180,unaff_x20 + 0x180);
  return;
}



/* Entry: 107477a74; end: 107477a9f;  */

undefined8 * FUN_107477a74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3460;
  FUN_1074779e4(param_1 + 1);
  return param_1;
}



/* Entry: 107477aa0; end: 107477ab3;  */

void FUN_107477aa0(void)

{
  FUN_107477a74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107477ab4; end: 107477aeb;  */

undefined8 FUN_107477ab4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f8;
  __Znwm(0x1f8);
  FUN_1074782c4();
  return uVar1;
}



/* Entry: 107477aec; end: 107477b0f;  */

void FUN_107477aec(long param_1,undefined8 param_2)

{
  func_0x000107479cac(param_2,param_1 + 8);
  func_0x00010747a4bc(&PTR_FUN_1109b3460);
  FUN_107477a2c();
  return;
}



/* Entry: 107477b10; end: 10747828f;  */

void FUN_107477b10(long param_1)

{
  undefined ****ppppuVar1;
  long *plVar2;
  undefined1 in_ZR;
  undefined ****ppppuVar3;
  undefined8 extraout_x8;
  undefined ***extraout_x8_00;
  undefined ***pppuVar4;
  int extraout_w10;
  int extraout_w11;
  long lVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined1 auStack_7e0 [16];
  undefined **ppuStack_7d0;
  long lStack_7c8;
  int iStack_7b0;
  undefined4 uStack_7a4;
  undefined1 auStack_7a0 [8];
  long lStack_798;
  undefined4 uStack_790;
  undefined ****ppppuStack_780;
  undefined *puStack_778;
  long *plStack_770;
  undefined1 auStack_768 [368];
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  long lStack_5f0;
  undefined1 auStack_5e8 [88];
  long *plStack_590;
  long lStack_588;
  undefined1 uStack_580;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 **ppuStack_408;
  long lStack_400;
  long lStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined ****ppppuStack_3d0;
  undefined *puStack_3c8;
  long lStack_3b8;
  long *plStack_3b0;
  undefined ***pppuStack_3a8;
  undefined4 *puStack_3a0;
  long *plStack_398;
  undefined ***pppuStack_390;
  undefined4 *puStack_388;
  undefined ***pppuStack_380;
  undefined ***pppuStack_378;
  undefined8 auStack_370 [2];
  undefined1 auStack_360 [336];
  undefined1 auStack_210 [32];
  undefined ***pppuStack_1f0;
  undefined ***pppuStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_58;
  
  func_0x000107479adc();
  uStack_58 = extraout_x8;
  FUN_107469c74(auStack_7e0,param_1 + 8);
  lVar5 = param_1 + 8;
  func_0x000107469cd8();
  if ((int)lVar5 == 0) goto LAB_10747809c;
  plVar7 = *(long **)(param_1 + 0x20);
  ppppuVar1 = (undefined ****)(param_1 + 0x28);
  uStack_7a4 = *(undefined4 *)(param_1 + 0x198);
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar2 = *(long **)(param_1 + 0x158);
  lStack_588 = *(long *)(param_1 + 0x160);
  plStack_590 = plVar2;
  if (lStack_588 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  ppppuVar3 = ppppuVar1;
  FUN_10746bb6c(&plStack_770,ppppuVar1);
  __ZNSt3__16chrono12steady_clock3nowEv();
  (**(code **)(*plVar2 + 0x30))(&ppuStack_7d0,plVar2,&plStack_770,param_1 + 0x1a0,ppppuVar3);
  func_0x0001074737a0(&plStack_770);
  func_0x00010747377c(&plStack_590);
  plStack_770 = plVar7;
  func_0x00010747a814(auStack_768);
  uStack_5f8 = uStack_7a4;
  lStack_5f0 = lVar5;
  FUN_107473180(auStack_5e8,param_1 + 0x1a0);
  plStack_590 = plStack_770;
  FUN_107472e90(&lStack_588,auStack_768);
  uStack_418 = CONCAT44(uStack_5f4,uStack_5f8);
  lStack_410 = lStack_5f0;
  FUN_107473180(&ppuStack_408,auStack_5e8);
  plVar2 = plStack_590;
  puStack_3a0 = &uStack_7a4;
  in_ZR = iStack_7b0 == 1;
  plStack_3b0 = plVar7;
  pppuStack_3a8 = (undefined ***)ppppuVar1;
  plStack_398 = plVar7;
  pppuStack_390 = (undefined ***)ppppuVar1;
  puStack_388 = puStack_3a0;
  if ((bool)in_ZR) {
    func_0x00010747a77c();
    func_0x00010747aaa4();
    FUN_107478420(&pppuStack_1f0,0xcf);
    func_0x00010747a634();
    func_0x00010747a124(plVar2[0x49]);
    func_0x000107479c48();
    func_0x00010747a35c();
    func_0x00010747a354();
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000107479dc0(lStack_410);
    lVar5 = plVar2[0x49];
    func_0x00010747a77c();
    func_0x00010747aaa4();
    FUN_10746ea64(&pppuStack_1f0,0xd5);
    lStack_798 = *(long *)plVar2[0x49];
    uStack_790 = 3;
    func_0x00010747a0f0(lVar5,&pppuStack_1f0,auStack_7a0,&lStack_798);
    func_0x00010747a35c();
    func_0x00010747a354();
    pppuStack_378 = (undefined ***)0x0;
    pppuStack_380 = (undefined ***)0x0;
    auStack_370[0] = 0;
    func_0x0001000fc044(&pppuStack_380,
                        lStack_3b8 + lStack_3f0 + ((long)puStack_3e0 - (long)puStack_3e8 >> 4));
    FUN_107471e5c();
    ppppuStack_780 = (undefined ****)ppuStack_408;
    puStack_778 = (undefined *)lStack_400;
    while (ppppuStack_780 != (undefined ****)0x0) {
      func_0x00010778196c(*(undefined8 *)((long)puStack_778 + 0x38));
      func_0x00010747aa00();
      func_0x00010747a194(uStack_580);
      func_0x00010747aa2c();
      func_0x000107479d34();
      func_0x00010747a230();
      func_0x00010747a344();
      FUN_107471f08(&ppppuStack_780);
    }
    for (; puStack_3e8 != puStack_3e0; puStack_3e8 = puStack_3e8 + 2) {
      func_0x00010778196c(*puStack_3e8);
      func_0x00010747aa00();
      func_0x00010747a194(uStack_580);
      func_0x00010747aa2c();
      func_0x000107479d34();
      func_0x00010747a230();
      func_0x00010747a344();
    }
    FUN_1074721ac();
    ppppuStack_780 = ppppuStack_3d0;
    puStack_778 = puStack_3c8;
    while (ppppuStack_780 != (undefined ****)0x0) {
      lVar5 = *(long *)(puStack_778 + 0x38);
      func_0x0001072bb3b4();
      func_0x00010747a194(lVar5 == 0);
      func_0x00010747aa2c();
      func_0x000107479d34();
      func_0x00010747a230();
      func_0x00010747a344();
      FUN_107472210(&ppppuStack_780);
    }
    in_ZR = pppuStack_378 == pppuStack_380;
    if ((bool)in_ZR) {
      func_0x00010002b838(&lStack_798,"none");
    }
    else {
      puStack_1e0 = &DAT_10f68f19e;
      uStack_1d8 = 2;
      ppppuStack_780 = &pppuStack_1f0;
      puStack_778 = &UNK_1072ac1a8;
      pppuStack_1f0 = pppuStack_380;
      pppuStack_1e8 = pppuStack_378;
      func_0x0001003a91d4(&DAT_10f2fb62f);
      func_0x0001003a9204(&lStack_798);
    }
    func_0x00010747a344();
    func_0x0001000e30f4(&pppuStack_380);
    func_0x00010724bb70(&lStack_798,plVar2 + 0x58);
    if (lStack_798 != 0) {
      pppuVar4 = &ppuStack_7d0;
      pppuVar6 = (undefined ***)plVar2[0x57];
      pppuStack_378 = (undefined ***)lStack_7c8;
      pppuStack_380 = (undefined ***)ppuStack_7d0;
      if (lStack_7c8 != 0) {
        do {
          func_0x000107479c1c();
          pppuVar4 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      FUN_1073c67e4(auStack_370,pppuVar4 + 2);
      FUN_107472e90(auStack_360,&lStack_588);
      __Znwm(0x1b0);
      func_0x00010747a624();
      func_0x000107478610();
      pppuStack_380 = (undefined ***)&PTR_FUN_1109b3630;
      pppuStack_378 = pppuVar6;
      func_0x00010747a644(FUN_10746edb4);
      func_0x000107478610();
      func_0x0001074786ac(&pppuStack_1f0);
      pppuStack_1f0 = (undefined ***)&pppuStack_380;
      func_0x0001074786ac(&pppuStack_380);
      func_0x00010747a23c();
      goto LAB_10747806c;
    }
  }
  else if (iStack_7b0 == 0) {
    func_0x00010747a770();
    func_0x00010747aaa4();
    FUN_107478420(&pppuStack_1f0,0xd0);
    func_0x00010747a634();
    func_0x00010747a124(plVar7[0x49]);
    func_0x000107479c48();
    func_0x00010747a35c();
    func_0x00010747a354();
    pppuVar4 = pppuStack_3a8;
    func_0x00010747aa6c();
    if (lStack_798 != 0) {
      pppuVar6 = (undefined ***)plVar7[0x57];
      func_0x00010747a814(&pppuStack_380);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_210,&ppuStack_7d0);
      __Znwm(0x1a8);
      func_0x00010747a624();
      FUN_107478518();
      *pppuVar4 = &PTR_FUN_1109b35f0;
      pppuVar4[1] = (undefined **)pppuVar6;
      func_0x00010747a644(FUN_10746ec0c);
      FUN_107478518();
      func_0x0001074785e8(&pppuStack_1f0);
      pppuStack_1f0 = pppuVar4;
      func_0x0001074785e8(&pppuStack_380);
      func_0x00010747a23c();
LAB_10747806c:
      pppuVar4 = pppuStack_1f0;
      pppuStack_1f0 = (undefined ***)0x0;
      if ((undefined ****)pppuVar4 != (undefined ****)0x0) {
        func_0x000107479c84();
      }
    }
  }
  else {
    func_0x00010747a770();
    func_0x00010747aaa4();
    FUN_107478420(&pppuStack_1f0,0xde);
    func_0x00010747a634();
    func_0x00010747a124(plVar7[0x49]);
    func_0x000107479c48();
    func_0x00010747a35c();
    func_0x00010747a354();
    pppuVar4 = pppuStack_390;
    func_0x00010747aa6c();
    if (lStack_798 != 0) {
      pppuVar6 = (undefined ***)plVar7[0x57];
      func_0x00010747a814(&pppuStack_380);
      __Znwm(400);
      func_0x00010747a624();
      FUN_10747854c();
      *pppuVar4 = &PTR_FUN_1109b3670;
      pppuVar4[1] = (undefined **)pppuVar6;
      func_0x00010747a644(FUN_10746ed28);
      FUN_10747854c();
      FUN_107472fbc(&pppuStack_1f0);
      pppuStack_1f0 = pppuVar4;
      FUN_107472fbc(&pppuStack_380);
      func_0x00010747a23c();
      goto LAB_10747806c;
    }
  }
  func_0x00010724bcd8(&lStack_798);
  FUN_1074731d8(&plStack_590);
  FUN_1074731d8(&plStack_770);
  FUN_107473200(&ppuStack_7d0);
LAB_10747809c:
  func_0x000107270b00();
  func_0x000107479a9c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar4 = pppuStack_1f0;
  pppuStack_1f0 = (undefined ***)0x0;
  if (pppuVar4 != (undefined ***)0x0) {
    func_0x000107479c84();
  }
  func_0x00010724bcd8(&lStack_798);
  FUN_1074731d8(&plStack_590);
  FUN_1074731d8(&plStack_770);
  FUN_107473200(&ppuStack_7d0);
  func_0x000107270b00(auStack_7e0);
  func_0x000107479c68();
  func_0x000107479cd8();
  func_0x000107479ca4();
  func_0x000107479b00();
  return;
}



/* Entry: 107478290; end: 1074782b7;  */

void FUN_107478290(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b34c0);
  func_0x000107479b00();
  return;
}



/* Entry: 1074782b8; end: 1074782c3;  */

undefined ** FUN_1074782b8(void)

{
  return &PTR_DAT_1109b34c0;
}



/* Entry: 1074782c4; end: 107478307;  */

void FUN_1074782c4(void)

{
  func_0x000107479cac();
  func_0x00010747a4bc(&PTR_FUN_1109b3460);
  FUN_107477a2c();
  return;
}



/* Entry: 107478308; end: 10747830f;  */

void FUN_107478308(void)

{
  return;
}



/* Entry: 107478310; end: 10747832f;  */

void FUN_107478310(undefined8 *param_1)

{
  func_0x00010747a0a0();
  *param_1 = &PTR_FUN_1109b34f0;
  return;
}



/* Entry: 107478330; end: 107478367;  */

void FUN_107478330(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109b34f0;
  return;
}



/* Entry: 107478368; end: 10747838f;  */

void FUN_107478368(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3550);
  func_0x000107479b00();
  return;
}



/* Entry: 107478390; end: 1074783a3;  */

undefined ** FUN_107478390(void)

{
  return &PTR_DAT_1109b3550;
}



/* Entry: 1074783a4; end: 1074783c3;  */

void FUN_1074783a4(undefined8 *param_1)

{
  func_0x00010747a0a0();
  *param_1 = &PTR_DAT_1109b3570;
  return;
}



/* Entry: 1074783c4; end: 1074783eb;  */

void FUN_1074783c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109b3570;
  return;
}



/* Entry: 1074783ec; end: 107478413;  */

void FUN_1074783ec(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b35d0);
  func_0x000107479b00();
  return;
}



/* Entry: 107478414; end: 10747841f;  */

undefined ** FUN_107478414(void)

{
  return &PTR_DAT_1109b35d0;
}



/* Entry: 107478420; end: 107478517;  */

void FUN_107478420(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 unaff_x19;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010747a1fc();
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48,param_3);
  func_0x00010726e300();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,param_4);
  func_0x00010726e300(unaff_x19,&UNK_10f4158de,auStack_60);
  func_0x00010002b838(auStack_78,(&PTR_DAT_1109b38e0)[param_5 & 0xffffffff]);
  func_0x00010726e300(unaff_x19,"reason",auStack_78);
  func_0x000107479f38();
  func_0x00010747a334();
  func_0x00010747a2e0();
  return;
}



/* Entry: 107478518; end: 10747854b;  */

void FUN_107478518(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10747854c();
  uVar2 = *(undefined8 *)(param_2 + 0x178);
  uVar1 = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  return;
}



/* Entry: 10747854c; end: 10747857b;  */

void FUN_10747854c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479cac();
  __ZNSt3__119__shared_mutex_baseC1Ev();
  FUN_107476410(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  return;
}



/* Entry: 10747857c; end: 10747857f;  */

undefined8 * FUN_10747857c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b35f0;
  func_0x0001074785e8(param_1 + 4);
  return param_1;
}



/* Entry: 107478580; end: 107478593;  */

void FUN_107478580(void)

{
  FUN_1074785bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107478594; end: 1074785bb;  */

void FUN_107478594(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001074785b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 400);
  return;
}



/* Entry: 1074785bc; end: 10747863b;  */

undefined8 * FUN_1074785bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b35f0;
  func_0x0001074785e8(param_1 + 4);
  return param_1;
}



/* Entry: 10747863c; end: 10747863f;  */

undefined8 * FUN_10747863c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3630;
  func_0x0001074786ac(param_1 + 4);
  return param_1;
}



/* Entry: 107478640; end: 107478653;  */

void FUN_107478640(void)

{
  FUN_107478680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107478654; end: 10747867f;  */

void FUN_107478654(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010747867c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40);
  return;
}



/* Entry: 107478680; end: 1074786db;  */

undefined8 * FUN_107478680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3630;
  func_0x0001074786ac(param_1 + 4);
  return param_1;
}



/* Entry: 1074786dc; end: 1074786df;  */

undefined8 * FUN_1074786dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3670;
  FUN_107472fbc(param_1 + 4);
  return param_1;
}



/* Entry: 1074786e0; end: 1074786f3;  */

void FUN_1074786e0(void)

{
  FUN_107478718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074786f4; end: 107478717;  */

void FUN_1074786f4(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000107478714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 107478718; end: 10747876f;  */

undefined8 * FUN_107478718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3670;
  FUN_107472fbc(param_1 + 4);
  return param_1;
}



/* Entry: 107478770; end: 107478783;  */

void FUN_107478770(void)

{
  func_0x000107478744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107478784; end: 1074787a7;  */

long FUN_107478784(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010747a070();
  func_0x000107479ce4();
  *param_1 = &PTR_SUB_1109b36b0;
  func_0x00010747226c(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 1074787a8; end: 1074787cb;  */

void FUN_1074787a8(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109b36b0;
  func_0x00010747226c(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1074787cc; end: 107478a7f;  */

void FUN_1074787cc(void)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar6;
  code *extraout_x8_01;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  undefined1 auStack_3a8 [16];
  long lStack_398;
  undefined1 uStack_390;
  undefined **appuStack_388 [3];
  undefined ***pppuStack_370;
  undefined1 auStack_368 [56];
  long *plStack_330;
  long *plStack_328;
  undefined1 uStack_320;
  undefined4 uStack_31f;
  undefined3 uStack_31b;
  undefined1 uStack_1c0;
  undefined1 auStack_1b8 [32];
  undefined1 uStack_198;
  undefined8 uStack_48;
  undefined ***pppuVar4;
  
  func_0x000107479ce4();
  func_0x000107479adc();
  uStack_48 = extraout_x8;
  FUN_107469c74(auStack_3a8,unaff_x20 + 8);
  iVar3 = (int)unaff_x20 + 8;
  func_0x000107469cd8();
  if (iVar3 != 0) {
    lVar14 = *(long *)(unaff_x20 + 0x20);
    func_0x000104c2fe00(auStack_368);
    pppuStack_370 = appuStack_388;
    appuStack_388[0] = &PTR_FUN_1109b3860;
    lVar6 = lVar14 + 0x178;
    uStack_390 = 1;
    lStack_398 = lVar6;
    func_0x000107279a5c();
    func_0x00010747a9e0();
    if (lVar6 == 0) {
LAB_1074788a4:
      plStack_330 = (long *)((ulong)plStack_330 & 0xffffffffffffff00);
      uStack_1c0 = 0;
    }
    else {
      if (pppuStack_370 == (undefined ***)0x0) goto LAB_107478a2c;
      pppuVar4 = pppuStack_370;
      func_0x00010747a260();
      iVar3 = (int)pppuVar4;
      (*extraout_x8_00)();
      if (iVar3 == 0) goto LAB_1074788a4;
      plVar5 = (long *)auStack_1b8;
      FUN_10747854c(plVar5,lVar6 + 0x48);
      func_0x00010747a9e0();
      if (plVar5 != (long *)0x0) {
        uVar8 = *(ulong *)(lVar14 + 0x228);
        lVar6 = *plVar5;
        uVar7 = plVar5[1];
        uVar10 = uVar8 - 1;
        if ((uVar8 & uVar10) == 0) {
          uVar7 = uVar10 & uVar7;
        }
        else if (uVar8 <= uVar7) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar7 / uVar8;
          }
          uVar7 = uVar7 - uVar12 * uVar8;
        }
        lVar11 = *(long *)(lVar14 + 0x220);
        plVar1 = *(long **)(lVar11 + uVar7 * 8);
        do {
          plVar9 = plVar1;
          plVar1 = (long *)*plVar9;
        } while ((long *)*plVar9 != plVar5);
        plStack_328 = (long *)(lVar14 + 0x230);
        in_ZR = true;
        if (plVar9 == plStack_328) {
LAB_107478904:
          if (lVar6 == 0) {
LAB_107478938:
            *(undefined8 *)(lVar11 + uVar7 * 8) = 0;
            lVar6 = *plVar5;
            goto LAB_107478940;
          }
          uVar12 = *(ulong *)(lVar6 + 8);
          if ((uVar8 & uVar10) == 0) {
            uVar13 = uVar12 & uVar10;
          }
          else {
            uVar13 = uVar12;
            if (uVar8 <= uVar12) {
              uVar13 = 0;
              if (uVar8 != 0) {
                uVar13 = uVar12 / uVar8;
              }
              uVar13 = uVar12 - uVar13 * uVar8;
            }
          }
          in_ZR = uVar13 == uVar7;
          if (!(bool)in_ZR) goto LAB_107478938;
LAB_107478948:
          if ((uVar8 & uVar10) == 0) {
            uVar12 = uVar12 & uVar10;
          }
          else if (uVar8 <= uVar12) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar12 / uVar8;
            }
            uVar12 = uVar12 - uVar10 * uVar8;
          }
          in_ZR = uVar12 == uVar7;
          if (!(bool)in_ZR) {
            *(long **)(lVar11 + uVar12 * 8) = plVar9;
            lVar6 = *plVar5;
          }
        }
        else {
          uVar12 = plVar9[1];
          if ((uVar8 & uVar10) == 0) {
            uVar12 = uVar12 & uVar10;
          }
          else if (uVar8 <= uVar12) {
            uVar13 = 0;
            if (uVar8 != 0) {
              uVar13 = uVar12 / uVar8;
            }
            uVar12 = uVar12 - uVar13 * uVar8;
          }
          in_ZR = uVar12 == uVar7;
          if (!(bool)in_ZR) goto LAB_107478904;
LAB_107478940:
          if (lVar6 != 0) {
            uVar12 = *(ulong *)(lVar6 + 8);
            goto LAB_107478948;
          }
        }
        *plVar9 = lVar6;
        *plVar5 = 0;
        *(long *)(lVar14 + 0x238) = *(long *)(lVar14 + 0x238) + -1;
        uStack_320 = 1;
        uStack_31f = 0;
        uStack_31b = 0;
        plStack_330 = plVar5;
        FUN_107476120(&plStack_330);
      }
      FUN_10747854c(&plStack_330,auStack_1b8);
      uStack_1c0 = 1;
      FUN_107472fbc(auStack_1b8);
    }
    func_0x000107279ee0(&lStack_398);
    func_0x000107470f48(&plStack_330);
    FUN_107478fbc(appuStack_388);
    func_0x000104c2f714(auStack_368);
    auStack_1b8[0] = 0;
    uStack_198 = 0;
    func_0x00010747a260(*(undefined8 *)(lVar14 + 0x140));
    (*extraout_x8_01)();
    func_0x00010730b1b0(auStack_1b8);
  }
  func_0x00010747a18c();
  func_0x000107479a9c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107478a2c:
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107478a34);
  (*pcVar2)();
}



/* Entry: 107478a80; end: 107478aa7;  */

void FUN_107478a80(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b3720);
  func_0x000107479b00();
  return;
}



/* Entry: 107478aa8; end: 107478ab3;  */

undefined ** FUN_107478aa8(void)

{
  return &PTR_DAT_1109b3720;
}



/* Entry: 107478ab4; end: 107478ae7;  */

void FUN_107478ab4(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4();
  *param_1 = &PTR_SUB_1109b36b0;
  func_0x00010747226c(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}


