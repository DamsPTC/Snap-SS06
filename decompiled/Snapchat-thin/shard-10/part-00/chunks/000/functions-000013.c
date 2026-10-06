/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10733f854; end: 10733f87b;  */

void FUN_10733f854(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2cc0);
  func_0x000107344bc4();
  return;
}



/* Entry: 10733f87c; end: 10733f887;  */

undefined ** FUN_10733f87c(void)

{
  return &PTR_DAT_1109a2cc0;
}



/* Entry: 10733f888; end: 10733f8eb;  */

void FUN_10733f888(void)

{
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  
  func_0x000107346a00();
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  func_0x00010734678c();
  func_0x000107345c64();
  func_0x000107347e84(&PTR_FUN_1109a2ce0);
  if (unaff_x20 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010734558c();
  return;
}



/* Entry: 10733f8ec; end: 10733f913;  */

undefined8 FUN_10733f8ec(undefined8 param_1)

{
  func_0x000107347198(&PTR_FUN_1109a2ce0);
  return param_1;
}



/* Entry: 10733f914; end: 10733f927;  */

void FUN_10733f914(void)

{
  FUN_10733f8ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10733f928; end: 10733f947;  */

void FUN_10733f928(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar3;
  
  func_0x000107345814();
  puVar1 = (undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a2ce0;
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uVar3 = *puVar1;
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_1[3] = puVar1[2];
  return;
}



/* Entry: 10733f948; end: 10733f967;  */

void FUN_10733f948(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a2ce0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 10733f968; end: 10733fb4f;  */

void FUN_10733f968(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  long unaff_x20;
  long *unaff_x21;
  undefined **ppuVar5;
  undefined1 auStack_d0 [32];
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  byte bStack_68;
  undefined **ppuStack_60;
  undefined ***pppuStack_58;
  int iStack_50;
  undefined ***pppuStack_48;
  
  func_0x000107346ea8();
  func_0x000107344818();
  ppuVar5 = *(undefined ***)(param_1 + 0x18);
  ppuStack_b0 = (undefined **)&UNK_10e52b660;
  pppuStack_a8 = (undefined ***)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  pppuStack_58 = &ppuStack_b0;
  ppuStack_60 = &PTR_DAT_1109a2d50;
  pppuStack_48 = &ppuStack_60;
  (**(code **)(*(long *)ppuVar5[0xf] + 0x80))(ppuVar5[0xf],&ppuStack_60);
  func_0x0001072caf58(&ppuStack_60);
  pppuVar4 = (undefined ***)(unaff_x21 + 1);
  (**(code **)(*unaff_x21 + 0x38))(&lStack_78,pppuVar4,&UNK_10f40a8a9);
  uVar3 = bStack_68 == 1;
  if (((bool)uVar3) && (func_0x000107346e98(*(undefined8 *)(lStack_78 + 0x30)), (int)pppuVar4 != 0))
  {
    if ((bStack_68 & 1) == 0) goto LAB_10733fafc;
    func_0x000107346180();
    *pppuVar4 = &PTR_FUN_1109a2dd0;
    pppuVar4[1] = param_3;
    pppuVar4[2] = (undefined **)(unaff_x20 + 8);
    pppuVar4[3] = (undefined **)&ppuStack_b0;
    pppuVar4[4] = ppuVar5;
    pppuStack_48 = pppuVar4;
    (**(code **)(lStack_78 + 0x40))(auStack_d0,auStack_70,&ppuStack_60);
    func_0x000107346e50();
    FUN_1073249cc(&ppuStack_60);
  }
  pppuStack_58 = pppuStack_a8;
  ppuStack_60 = ppuStack_b0;
  FUN_1073405f8(&ppuStack_60);
  pppuVar4 = pppuStack_58;
  ppuVar1 = ppuStack_60;
  while (pppuStack_80 = pppuVar4, ppuVar1 != (undefined **)0x0) {
    (**(code **)(*(long *)ppuVar5[0xf] + 0x78))(&ppuStack_60,ppuVar5[0xf],pppuVar4);
    uVar3 = (char)pppuStack_48 == '\x01' && iStack_50 == 0;
    if ((char)pppuStack_48 == '\x01' && iStack_50 == 0) {
      FUN_107355b64(ppuStack_60,pppuVar4 + 7);
    }
    func_0x0001072b9760(&ppuStack_60);
    ppuStack_88 = (undefined **)((long)ppuVar1 + 1);
    pppuStack_80 = pppuVar4 + 9;
    FUN_1073405f8(&ppuStack_88);
    pppuVar4 = pppuStack_80;
    ppuVar1 = ppuStack_88;
  }
  func_0x0001072f5f4c(&lStack_78);
  FUN_107340630(&ppuStack_b0);
  func_0x0001073446ac();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10733fafc:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10733fb04);
  (*pcVar2)();
}



/* Entry: 10733fb50; end: 10733fb77;  */

void FUN_10733fb50(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2e40);
  func_0x000107344bc4();
  return;
}



/* Entry: 10733fb78; end: 10733fbbf;  */

undefined ** FUN_10733fb78(void)

{
  return &PTR_DAT_1109a2e40;
}



/* Entry: 10733fbc0; end: 10733fbe7;  */

void FUN_10733fbc0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109a2d50;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10733fbe8; end: 10733fc07;  */

void FUN_10733fbe8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109a2d50;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10733fc08; end: 10733fc7f;  */

void FUN_10733fc08(long param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = auStack_70;
  func_0x00010734490c();
  lVar2 = *(long *)(param_1 + 8);
  func_0x000104c2fe00();
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x000107346020();
  FUN_10733fcb4();
  if ((param_2 & 1) != 0) {
    func_0x000107347d5c(*(undefined8 *)(lVar2 + 8));
    func_0x000104c318bc();
    *(undefined8 *)(puVar1 + 0x40) = uStack_30;
    *(undefined8 *)(puVar1 + 0x38) = uStack_38;
    uStack_38 = 0;
    uStack_30 = 0;
  }
  func_0x00010733f4d0(auStack_70);
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345740();
  func_0x00010733f4d0();
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 10733fc80; end: 10733fca7;  */

void FUN_10733fc80(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2db0);
  func_0x000107344bc4();
  return;
}



/* Entry: 10733fca8; end: 10733fcb3;  */

undefined ** FUN_10733fca8(void)

{
  return &PTR_DAT_1109a2db0;
}



/* Entry: 10733fcb4; end: 10733fd53;  */

ulong FUN_10733fcb4(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long unaff_x19;
  ulong unaff_x22;
  ulong unaff_x25;
  long unaff_x27;
  ulong unaff_x28;
  
  func_0x000107346410();
  func_0x000107344bd4();
  func_0x000107344ad0();
  while( true ) {
    func_0x000107344e30();
    while (unaff_x28 != 0) {
      uVar1 = (unaff_x28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x28 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar2 = *(ulong *)(unaff_x19 + 8);
      unaff_x22 = unaff_x27 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x25;
      func_0x000104c32db4();
      if ((uVar2 & 1) != 0) {
        return unaff_x22;
      }
      func_0x00010734706c();
    }
    func_0x0001073450b0();
    if ((extraout_x8 & 1) != 0) break;
    func_0x000107347060();
  }
  func_0x0001073460c8();
  FUN_10733f3b4();
  func_0x00010734762c();
  return unaff_x22;
}



/* Entry: 10733fd54; end: 10733fd5b;  */

void FUN_10733fd54(void)

{
  return;
}



/* Entry: 10733fd5c; end: 10733fd8b;  */

void FUN_10733fd5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107346180();
  func_0x00010734521c(&PTR_FUN_1109a2dd0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return;
}



/* Entry: 10733fd8c; end: 10733fdbb;  */

void FUN_10733fd8c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_1109a2dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10733fdbc; end: 10734051f;  */

void FUN_10733fdbc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar8;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long lVar9;
  int extraout_w10;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lStack_418;
  uint auStack_3f8 [2];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_390 [24];
  undefined8 auStack_378 [2];
  byte bStack_368;
  uint auStack_360 [2];
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long alStack_308 [2];
  char cStack_2f8;
  undefined1 auStack_2d0 [56];
  char cStack_298;
  long alStack_290 [10];
  undefined1 auStack_240 [4];
  undefined1 uStack_23c;
  int iStack_1c8;
  undefined1 auStack_1c0 [32];
  undefined1 uStack_1a0;
  byte bStack_188;
  undefined1 *puStack_d8;
  undefined1 auStack_30 [16];
  char cStack_20;
  undefined8 uStack_18;
  
  func_0x000107346410();
  lVar9 = param_1;
  func_0x000107344b50();
  uVar19 = *param_2;
  uVar1 = param_2[1];
  lVar8 = *(long *)(lVar9 + 0x20);
  uStack_18 = extraout_x8_00;
  FUN_1073230a8(auStack_2d0,extraout_x9,&UNK_10f40a8bd,9,*(undefined8 *)(lVar9 + 8));
  if (cStack_298 == '\x01') {
    puVar14 = (ulong *)**(undefined8 **)(param_1 + 0x10);
    Hint_Prefetch(*puVar14,0,2,0);
    puVar6 = auStack_2d0;
    func_0x000104c2fe38(*puVar14,puVar6);
    lStack_418 = 0;
    uVar10 = puVar14[1];
    uVar2 = puVar14[2];
    func_0x000107346220(*puVar14 >> 0xc ^ (ulong)puVar6 >> 7);
    uVar18 = extraout_x8_01;
    do {
      uVar18 = uVar18 & uVar2;
      func_0x000107346214();
      uVar12 = extraout_x8_02 & 0x8080808080808080;
      lVar9 = extraout_x9_00;
      if (uVar12 != 0) {
LAB_10733fe6c:
        uVar7 = (uVar12 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar12 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar20 = uVar18 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & uVar2;
        uVar7 = uVar10 + uVar20 * lVar9;
        func_0x000104c32db4(uVar7,auStack_2d0);
        if ((uVar7 & 1) == 0) goto code_r0x00010733fe8c;
        uVar10 = puVar14[1];
        lVar15 = *(long *)(param_1 + 0x18);
        func_0x000104c302a4(auStack_1c0,uVar19,uVar1);
        uVar18 = 0;
        lVar9 = lVar15;
        FUN_10733fcb4();
        lVar11 = uVar10 + uVar20 * 0x48;
        lVar15 = *(long *)(lVar15 + 8);
        if ((uVar18 & 1) == 0) {
          FUN_107340554(lVar15 + lVar9 * 0x48 + 0x38,lVar11 + 0x38);
        }
        else {
          lVar15 = lVar15 + lVar9 * 0x48;
          func_0x000104c318bc(lVar15,auStack_1c0);
          lVar9 = *(long *)(lVar11 + 0x40);
          uVar19 = *(undefined8 *)(lVar11 + 0x38);
          *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(lVar11 + 0x40);
          *(undefined8 *)(lVar15 + 0x38) = uVar19;
          if (lVar9 != 0) {
            do {
              func_0x000107345624();
            } while (extraout_w10 != 0);
          }
        }
        func_0x000104c2f714(auStack_1c0);
        break;
      }
LAB_10733fe9c:
      func_0x0001073450b0();
      if ((extraout_x8_03 & 1) != 0) break;
      lStack_418 = lStack_418 + 8;
      uVar18 = lStack_418 + uVar18;
    } while( true );
  }
  func_0x00010002b838(auStack_1c0,&UNK_10f40a8c7);
  FUN_107325a40(&uStack_3b0,param_3,auStack_1c0,*(undefined8 *)(param_1 + 8));
  func_0x000107346f88();
  plVar16 = *(long **)(lVar8 + 0x78);
  func_0x00010734687c(auStack_1c0);
  uStack_3c8 = uStack_3a8;
  uStack_3d0 = uStack_3b0;
  uStack_3c0 = uStack_3a0;
  uStack_3a8 = 0;
  uStack_3a0 = 0;
  uStack_3b0 = 0;
  (**(code **)(*plVar16 + 0x90))(plVar16,auStack_1c0,&uStack_3d0);
  func_0x00010726e078(&uStack_3d0);
  func_0x000104c2f714(auStack_1c0);
  plVar17 = *(long **)(lVar8 + 0x78);
  func_0x00010734687c(auStack_240);
  uVar19 = *(undefined8 *)(param_1 + 8);
  plVar16 = alStack_290;
  func_0x0001073478fc(plVar16,param_3,&UNK_10f40a8dc);
  if (((alStack_290[2] & 1U) == 0) ||
     (func_0x0001073460f8(*(undefined8 *)(alStack_290[0] + 0x30)), ((ulong)plVar16 & 1) == 0)) {
    func_0x000107347c9c();
  }
  else {
    FUN_1073230a8(auStack_1c0,alStack_290,"mode",4,uVar19);
    if ((bStack_188 & 1) == 0) {
      func_0x000107347c9c();
    }
    else {
      auStack_360[0] = 0;
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_358 = 0;
      puVar6 = auStack_1c0;
      func_0x000107278484(puVar6,&DAT_10f33d28c);
      if (((ulong)puVar6 & 1) == 0) {
        if ((bStack_188 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073403b4;
        }
        puVar6 = auStack_1c0;
        func_0x000107278484(puVar6,"block");
        if (((ulong)puVar6 & 1) != 0) {
          auStack_360[0] = 1;
          goto LAB_10734008c;
        }
        func_0x000107347c9c();
      }
      else {
        auStack_360[0] = 0;
LAB_10734008c:
        plVar16 = alStack_308;
        FUN_1073232dc(plVar16,alStack_290,&DAT_10f2dd3dd,10);
        if ((cStack_2f8 == '\x01') &&
           (func_0x0001073460f8(*(undefined8 *)(alStack_308[0] + 0x18)), ((ulong)plVar16 & 1) != 0))
        {
          func_0x00010002b838(auStack_30,&DAT_10f2dd3dd);
          FUN_107325a40(auStack_3f8,alStack_290,auStack_30,uVar19);
          func_0x0001072e8af4(&uStack_358,auStack_3f8);
          func_0x00010726e078(auStack_3f8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_30);
          auStack_3f8[0] = auStack_360[0];
          uStack_3e8 = uStack_350;
          uStack_3f0 = uStack_358;
          uStack_3e0 = uStack_348;
          uStack_350 = 0;
          uStack_348 = 0;
          uStack_358 = 0;
          uStack_3d8 = 1;
        }
        else {
          uStack_3d8 = 0;
          auStack_3f8[0] = auStack_3f8[0] & 0xffffff00;
        }
        func_0x0001072f5f4c(alStack_308);
      }
      func_0x00010726e078(&uStack_358);
    }
    func_0x00010734791c();
  }
  func_0x0001072f5f4c(alStack_290);
  (**(code **)(*plVar17 + 0x98))(plVar17,auStack_240,auStack_3f8);
  FUN_1073405b4(auStack_3f8);
  func_0x000104c2f714(auStack_240);
  plVar16 = *(long **)(lVar8 + 0x78);
  func_0x00010734687c(alStack_308);
  lVar9 = *(long *)(param_1 + 8);
  FUN_1073232dc(auStack_30,param_3,&UNK_10f40a8ed,0xe);
  uVar13 = 1;
  uVar5 = cStack_20 == '\x01';
  if ((bool)uVar5) {
    uVar18 = 0;
    func_0x000107766098();
    if ((uVar18 & 1) == 0) {
      func_0x00010002b838(auStack_1c0,&UNK_10f40a8ed);
      FUN_107323340(param_3,auStack_1c0,lVar9);
      uVar13 = (uint)param_3 & 0xffff;
      uVar5 = uVar13 == 0x100;
      uVar13 = uVar13 < 0x100 | uVar13;
      func_0x000107346f88();
      goto LAB_10734034c;
    }
    func_0x000107346fb0(auStack_360);
    auStack_240[0] = 0;
    uStack_23c = 0;
    auStack_1c0[0] = 0;
    uStack_1a0 = 0;
    func_0x000107771274(auStack_378,auStack_360,auStack_30,lVar9,auStack_240,auStack_1c0);
    func_0x0001072c94e0(auStack_1c0);
    if ((bStack_368 & 1) == 0) {
LAB_107340304:
      func_0x0001072c95d0(auStack_378);
      func_0x0001072ca718(auStack_360);
      goto LAB_10734034c;
    }
    func_0x000107751284(auStack_1c0);
    func_0x0001078696e8(auStack_390);
    if (*(char *)(lVar9 + 0x38) == '\x01') {
      lVar8 = lVar9 + 0x28;
      FUN_107326bd0(lVar8);
      func_0x00010786972c(auStack_240,lVar8);
      func_0x00010726c924(auStack_390,auStack_240);
      func_0x00010726b264(auStack_240);
      puStack_d8 = auStack_390;
      FUN_107326bd0(lVar9 + 0x28);
      func_0x000107347afc(auStack_1c0);
    }
    if ((bStack_368 & 1) != 0) {
      alStack_290[8] = 0;
      alStack_290[5] = 0;
      alStack_290[4] = 0;
      alStack_290[7] = 0;
      alStack_290[6] = 0;
      alStack_290[1] = 0;
      alStack_290[0] = 0;
      alStack_290[3] = 0;
      alStack_290[2] = 0;
      func_0x000107753050(auStack_240,auStack_378[0],auStack_1c0,alStack_290);
      func_0x00010724b3d8(alStack_290);
      uVar5 = false;
      if (iStack_1c8 == 1) {
        puVar6 = auStack_240;
        FUN_1073405dc();
        uVar3 = (byte)puVar6[8] | 0x100;
        if (*(int *)(puVar6 + 0x68) != 1) {
          uVar3 = 0;
        }
        uVar13 = 0;
        if (*(int *)(puVar6 + 0x68) != 0) {
          uVar13 = uVar3;
        }
        uVar5 = uVar13 == 0x100;
        uVar13 = uVar13 < 0x100 | uVar13;
      }
      func_0x000107345840(auStack_240);
      func_0x00010726b264(auStack_390);
      func_0x000107267da8(auStack_1c0);
      goto LAB_107340304;
    }
  }
  else {
LAB_10734034c:
    func_0x0001072f5f4c(auStack_30);
    (**(code **)(*plVar16 + 0xa8))(plVar16,alStack_308,(uVar13 ^ 0xffffffff) & 1);
    func_0x000104c2f714(alStack_308);
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    func_0x00010726e078(&uStack_3b0);
    func_0x00010724b3d8(auStack_2d0);
    func_0x0001073447cc(uStack_18);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bdc2c8();
LAB_1073403b4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1073403b8);
  (*pcVar4)();
code_r0x00010733fe8c:
  uVar12 = uVar12 - 1 & uVar12;
  lVar9 = 0x48;
  if (uVar12 == 0) goto LAB_10733fe9c;
  goto LAB_10733fe6c;
}



/* Entry: 107340520; end: 107340547;  */

void FUN_107340520(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a2e30);
  func_0x000107344bc4();
  return;
}



/* Entry: 107340548; end: 107340553;  */

undefined ** FUN_107340548(void)

{
  return &PTR_DAT_1109a2e30;
}



/* Entry: 107340554; end: 10734059f;  */

undefined8 * FUN_107340554(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010733f4f4(&uStack_30);
  return param_1;
}



/* Entry: 1073405a0; end: 1073405b3;  */

void FUN_1073405a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  return;
}



/* Entry: 1073405b4; end: 1073405db;  */

void FUN_1073405b4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001073474bc();
  if ((bool)in_ZR) {
    func_0x00010726e078(unaff_x19 + 8);
  }
  return;
}



/* Entry: 1073405dc; end: 1073405f7;  */

undefined8 * FUN_1073405dc(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  if (*(int *)(param_1 + 0xf) == 1) {
    return param_1 + 1;
  }
  func_0x00010563ab98();
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107345b6c();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



/* Entry: 1073405f8; end: 10734062f;  */

void FUN_1073405f8(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x000107345b6c();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 107340630; end: 10734067f;  */

undefined8 * FUN_107340630(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010733f4d0(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x0001073457b0();
  }
  return param_1;
}



/* Entry: 107340680; end: 107340687;  */

void FUN_107340680(void)

{
  return;
}



/* Entry: 107340688; end: 1073406af;  */

void FUN_107340688(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001073450c0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_1109a2e60;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1073406b0; end: 1073406cf;  */

void FUN_1073406b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1109a2e60;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073406d0; end: 10734077f;  */

void FUN_1073406d0(uint param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  long alStack_50 [2];
  byte bStack_40;
  
  func_0x000107346eb4();
  func_0x000107344818();
  func_0x000107347154();
  func_0x0001073466f8(alStack_50);
  func_0x000107347d44();
  if (((bool)in_ZR) &&
     (func_0x000107346e98(*(undefined8 *)(alStack_50[0] + 0x30)), (param_1 & 1) != 0)) {
    if ((bStack_40 & 1) == 0) goto LAB_107340758;
    func_0x0001073475e4(&PTR_DAT_1109a2ed0);
    func_0x000107346ddc();
    func_0x000107346e50();
    func_0x0001073468f8();
  }
  func_0x0001073465cc();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107340758:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107340760);
  (*pcVar1)();
}



/* Entry: 107340780; end: 1073407a7;  */

void FUN_107340780(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a31d8);
  func_0x000107344bc4();
  return;
}



/* Entry: 1073407a8; end: 1073407bb;  */

undefined ** FUN_1073407a8(void)

{
  return &PTR_DAT_1109a31d8;
}



/* Entry: 1073407bc; end: 1073407df;  */

void FUN_1073407bc(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_DAT_1109a2ed0);
  return;
}



/* Entry: 1073407e0; end: 1073407fb;  */

void FUN_1073407e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109a2ed0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073407fc; end: 10734095b;  */

void FUN_1073407fc(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_140 [144];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [56];
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  func_0x0001073447e0();
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uStack_48 = extraout_x8;
  FUN_107323974(auStack_a0,&UNK_10f40a8fc,10,&uStack_b0);
  func_0x000107264c5c(auStack_a0);
  FUN_107323dd0(auStack_140,uVar4);
  func_0x000104c2f714(auStack_a0);
  uVar1 = uStack_a8;
  uVar4 = uStack_b0;
  uVar3 = uStack_b0;
  func_0x0001073479d4(uStack_b0,uStack_a8,"targets");
  iVar2 = (int)uVar3;
  if (iVar2 == 0) {
    func_0x0001000633dc(uVar4,uVar1,&UNK_10f40a907,0xb);
    iVar2 = (int)uVar4;
    if ((iVar2 == 0) || (func_0x000107347a2c(*(undefined8 *)(*param_3 + 0x30)), iVar2 == 0))
    goto LAB_1073408f8;
    func_0x000107346e34(&PTR_FUN_1109a3078);
    func_0x0001073471d0();
  }
  else {
    func_0x000107347a2c(*(undefined8 *)(*param_3 + 0x30));
    if (iVar2 == 0) goto LAB_1073408f8;
    func_0x000107346e34(&PTR_DAT_1109a2f40);
    func_0x0001073471d0();
  }
  FUN_1073249ac(auStack_a0);
  FUN_1073249cc();
LAB_1073408f8:
  func_0x00010734615c();
  func_0x000107346510();
  func_0x0001073447cc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073249cc(auStack_68);
  func_0x000107346510();
  func_0x000107345604();
  func_0x000107345760();
  func_0x000107345650();
  func_0x000107344bc4();
  return;
}



/* Entry: 10734095c; end: 107340983;  */

void FUN_10734095c(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a31c8);
  func_0x000107344bc4();
  return;
}



/* Entry: 107340984; end: 107340997;  */

undefined ** FUN_107340984(void)

{
  return &PTR_DAT_1109a31c8;
}



/* Entry: 107340998; end: 1073409bb;  */

void FUN_107340998(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_DAT_1109a2f40);
  return;
}



/* Entry: 1073409bc; end: 1073409d7;  */

void FUN_1073409bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109a2f40;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073409d8; end: 10734142f;  */

void FUN_1073409d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  ulong *puVar7;
  ulong extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  long unaff_x19;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long unaff_x24;
  ulong uVar11;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  undefined1 auStack_850 [144];
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [56];
  undefined1 uStack_770;
  undefined1 uStack_758;
  undefined1 auStack_750 [64];
  undefined1 auStack_710 [64];
  undefined1 auStack_6d0 [56];
  undefined1 uStack_698;
  undefined1 *puStack_690;
  ulong *puStack_688;
  undefined1 auStack_658 [56];
  byte bStack_620;
  undefined1 auStack_618 [80];
  byte bStack_5c8;
  undefined1 auStack_5c0 [80];
  char cStack_570;
  undefined1 auStack_568 [80];
  undefined1 auStack_518 [80];
  undefined1 auStack_4c8 [56];
  undefined1 auStack_490 [24];
  char cStack_478;
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [32];
  undefined1 auStack_438 [32];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [40];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [40];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [64];
  undefined1 auStack_340 [64];
  undefined1 auStack_300 [16];
  byte bStack_2f0;
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [16];
  byte bStack_298;
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [80];
  undefined1 auStack_238 [80];
  undefined1 auStack_1e8 [56];
  undefined1 auStack_1b0 [24];
  char cStack_198;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [40];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  uint uStack_20;
  byte bStack_18;
  undefined8 uStack_10;
  
  func_0x000107346410();
  func_0x0001073447e0();
  func_0x000107347e70();
  FUN_107323974(auStack_290,&UNK_10f40a913,0x12,auStack_7c0);
  func_0x000107264c5c(auStack_290);
  func_0x000107347764(auStack_850);
  func_0x000104c2f714(auStack_290);
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  auStack_290[0] = 0;
  bStack_18 = 0;
  FUN_1073232dc(auStack_300,param_3,&UNK_10f40a926,0x17);
  uVar3 = bStack_2f0 == 1;
  if ((bool)uVar3) {
    func_0x000107347a10(auStack_2a8,auStack_300,"source");
    func_0x000107347d0c();
    if ((bool)uVar3) {
      func_0x000107346f24(auStack_5c0);
      FUN_107341464();
      func_0x000107347d0c();
      if (!(bool)uVar3) goto LAB_107340ae0;
      func_0x000107346f24(auStack_618);
      FUN_107341464();
      func_0x000107347d0c();
      if (!(bool)uVar3) goto LAB_107340ae8;
      func_0x000107346464(auStack_7a8,auStack_2a8,&UNK_10f40a93e);
    }
    else {
      auStack_5c0[0] = 0;
      cStack_570 = '\0';
LAB_107340ae0:
      auStack_618[0] = 0;
      bStack_5c8 = 0;
LAB_107340ae8:
      auStack_7a8[0] = 0;
      uStack_770 = 0;
    }
    if ((bStack_2f0 & 1) != 0) {
      FUN_107341754(&puStack_690,auStack_300,auStack_850);
      if ((bStack_2f0 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1073411f4;
      }
      FUN_1073415d8(auStack_6d0,auStack_300,&DAT_10f34b835,4,auStack_850);
      if ((bStack_2f0 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1073411f4;
      }
      FUN_1073415d8(auStack_710,auStack_300,&DAT_10f40a70e,7,auStack_850);
      if ((bStack_2f0 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_1073411f4;
      }
      FUN_1073415d8(auStack_750,auStack_300,"pitch",5,auStack_850);
      uVar3 = 0;
      if (((cStack_570 == '\x01') && (uVar3 = 0, bStack_5c8 == 1)) && (uVar3 = 0, bStack_620 == 1))
      {
        func_0x000107346ec8();
        if ((bStack_5c8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073411f4;
        }
        func_0x00010734786c();
        if ((bStack_620 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073411f4;
        }
        func_0x00010727d614(auStack_4c8,&puStack_690);
        if ((bStack_620 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073411f4;
        }
        func_0x00010727d614(auStack_490,auStack_658);
        unaff_x27 = auStack_568;
        func_0x00010727eb70(auStack_458,auStack_6d0);
        func_0x00010727eb70(auStack_418,auStack_710);
        unaff_x28 = auStack_568;
        func_0x00010727eb70(auStack_3d8,auStack_750);
        func_0x00010727eb70(auStack_398,auStack_7a8);
        uVar3 = bStack_18 == 1;
        if ((bool)uVar3) {
          func_0x000107347d2c(auStack_290);
          uVar3 = extraout_w9 == 1;
          if ((bool)uVar3) {
            FUN_10734196c();
            FUN_10734196c(auStack_238,auStack_518);
            func_0x00010727df88(auStack_1e8,auStack_4c8);
            func_0x00010727df88(auStack_1b0,auStack_490);
            FUN_107341ad4(auStack_178,auStack_458);
            FUN_107341ad4(auStack_138,auStack_418);
            FUN_107341ad4(auStack_f8,auStack_3d8);
            FUN_107341ad4(auStack_b8,auStack_398);
            unaff_x24 = unaff_x19;
          }
          else {
            FUN_107341b48();
          }
        }
        else {
          func_0x000107347d2c(auStack_290);
          func_0x000107341b74();
          uStack_20 = 1;
          bStack_18 = 1;
        }
        func_0x00010727e97c(auStack_568);
      }
      func_0x000107346f0c();
      func_0x00010734727c();
      func_0x000107347094();
      func_0x000107346eec();
      func_0x00010727e950(auStack_7a8);
      func_0x000107346f14();
      func_0x000107346f30();
      func_0x0001073478cc();
      goto LAB_107340ce8;
    }
  }
  else {
LAB_107340ce8:
    func_0x0001072f5f4c(auStack_300);
    if ((bStack_18 & 1) == 0) {
      FUN_1073232dc(auStack_2a8,param_3,&UNK_10f40a95f,0x1b);
      func_0x000107347d0c();
      if ((bool)uVar3) {
        func_0x000107347a10(auStack_2c0,auStack_2a8,"source");
        func_0x000107347cc8();
        if ((bool)uVar3) {
          FUN_107341464(auStack_5c0,auStack_2c0,&UNK_10f40a766,8,auStack_850);
          func_0x000107347cc8();
          if (!(bool)uVar3) goto LAB_107340dc0;
          FUN_107341464(auStack_618,auStack_2c0,&UNK_10f40a410,10,auStack_850);
          func_0x000107347cc8();
          if (!(bool)uVar3) goto LAB_107340dc8;
          FUN_107341464(auStack_7a8,auStack_2c0,"component",9,auStack_850);
          func_0x000107347cc8();
          if (!(bool)uVar3) goto LAB_107340dd0;
          func_0x000107346464(auStack_6d0,auStack_2c0,&UNK_10f40a93e);
        }
        else {
          auStack_5c0[0] = 0;
          cStack_570 = '\0';
LAB_107340dc0:
          auStack_618[0] = 0;
          bStack_5c8 = 0;
LAB_107340dc8:
          auStack_7a8[0] = 0;
          uStack_758 = 0;
LAB_107340dd0:
          auStack_6d0[0] = 0;
          uStack_698 = 0;
        }
        if ((bStack_298 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073411f4;
        }
        FUN_107341754(&puStack_690,auStack_2a8,auStack_850);
        if ((bStack_298 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073411f4;
        }
        func_0x000107346f24(auStack_710);
        FUN_1073415d8();
        if ((bStack_298 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073411f4;
        }
        func_0x000107346f24(auStack_750);
        FUN_1073415d8();
        if ((bStack_298 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_1073411f4;
        }
        func_0x000107346f24(auStack_300);
        FUN_1073415d8();
        if (((cStack_570 == '\x01') && (bStack_5c8 == 1)) && (bStack_620 == 1)) {
          func_0x000107346ec8();
          if ((bStack_5c8 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1073411f4;
          }
          func_0x00010734786c();
          func_0x00010727ee6c(auStack_4c8,auStack_7a8);
          if ((bStack_620 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1073411f4;
          }
          func_0x00010727d614(auStack_470,&puStack_690);
          if ((bStack_620 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1073411f4;
          }
          func_0x00010727d614(auStack_438,auStack_658);
          func_0x00010727eb70(auStack_400,auStack_710);
          func_0x00010727eb70(auStack_3c0,auStack_750);
          unaff_x27 = auStack_568;
          func_0x00010727eb70(auStack_380,auStack_300);
          func_0x00010727eb70(auStack_340,auStack_6d0);
          if (bStack_18 == 1) {
            func_0x000107347d2c(auStack_290);
            if (extraout_w9_00 == 2) {
              FUN_10734196c();
              unaff_x28 = auStack_290;
              FUN_10734196c(auStack_238,unaff_x24 + 0x50);
              if (cStack_198 == cStack_478) {
                if (cStack_198 != '\0') {
                  FUN_10734196c(auStack_1e8,auStack_4c8);
                }
              }
              else if (cStack_198 == '\0') {
                FUN_107341c64(auStack_1e8,auStack_4c8);
              }
              else {
                FUN_107341c34();
              }
              func_0x00010727df88(auStack_190,auStack_470);
              func_0x00010727df88(auStack_158,auStack_438);
              FUN_107341ad4(auStack_120,auStack_400);
              FUN_107341ad4(auStack_e0,auStack_3c0);
              FUN_107341ad4(auStack_a0,auStack_380);
              FUN_107341ad4(auStack_60,auStack_340);
            }
            else {
              FUN_107341c80();
            }
          }
          else {
            func_0x000107347d2c(auStack_290);
            func_0x000107341cac();
            uStack_20 = 2;
            bStack_18 = 1;
          }
          func_0x00010727ea50(auStack_568);
        }
        func_0x00010727e950(auStack_300);
        func_0x000107346f0c();
        func_0x00010734727c();
        func_0x000107346eec();
        func_0x000107347094();
        func_0x00010727eaac(auStack_7a8);
        func_0x000107346f14();
        func_0x000107346f30();
        func_0x0001072f5f4c(auStack_2c0);
      }
      func_0x0001073478cc();
      uVar3 = bStack_18 == 1;
      if ((bool)uVar3) goto LAB_10734102c;
    }
    else {
LAB_10734102c:
      puVar9 = (ulong *)*puVar10;
      func_0x000107345bbc(auStack_568);
      Hint_Prefetch(*puVar9,0,2,0);
      puVar5 = auStack_568;
      func_0x00010727e7fc(*puVar9,puVar5);
      uVar11 = puVar9[2];
      func_0x000107346220(*puVar9 >> 0xc ^ (ulong)puVar5 >> 7);
      while( true ) {
        func_0x000107344e30();
        while (unaff_x28 != (undefined1 *)0x0) {
          uVar1 = ((ulong)unaff_x28 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  ((ulong)unaff_x28 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          puStack_690 = auStack_568;
          ppuVar6 = &puStack_690;
          puStack_688 = puVar9;
          func_0x00010727e7f0(ppuVar6,puVar9[1] +
                                      ((ulong)(unaff_x27 +
                                              ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3))
                                      & uVar11) * 0x2b0);
          if (((ulong)ppuVar6 & 1) != 0) {
            lVar8 = puVar9[1] +
                    ((ulong)(unaff_x27 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3)) &
                    uVar11) * 0x2b0;
            bVar4 = *(int *)(lVar8 + 0x2a8) == -1;
            uVar3 = bVar4 && uStack_20 == 0xffffffff;
            if (!bVar4 || uStack_20 != 0xffffffff) {
              puVar5 = (undefined1 *)(lVar8 + 0x40);
              uVar3 = uStack_20 == 0xffffffff;
              if ((bool)uVar3) {
                func_0x00010727e8b8(puVar5);
              }
              else {
                puStack_690 = puVar5;
                (*(code *)(&PTR_FUN_1109a3010)[uStack_20])(&puStack_690,puVar5,auStack_288);
              }
            }
            goto LAB_10734111c;
          }
          func_0x00010734706c();
        }
        func_0x0001073450b0();
        if ((extraout_x8 & 1) != 0) break;
        func_0x000107347060();
      }
      puVar7 = puVar9;
      FUN_107341d40(puVar9,puVar5);
      lVar8 = puVar9[1] + (long)puVar7 * 0x2b0;
      func_0x000104c318bc(lVar8,auStack_568);
      func_0x00010727e844(lVar8 + 0x40,auStack_288);
LAB_10734111c:
      func_0x000104c2f714(auStack_568);
    }
    func_0x00010734615c();
    func_0x000107280b8c(auStack_290);
    func_0x000107346510();
    func_0x0001073447cc(uStack_10);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000104bdc2c8();
LAB_1073411f4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1073411f8);
  (*pcVar2)();
}



/* Entry: 107341430; end: 107341457;  */

void FUN_107341430(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a3058);
  func_0x000107344bc4();
  return;
}



/* Entry: 107341458; end: 107341463;  */

undefined ** FUN_107341458(void)

{
  return &PTR_DAT_1109a3058;
}



/* Entry: 107341464; end: 1073415d7;  */

void FUN_107341464(undefined8 param_1,undefined8 param_2,undefined8 ***param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *unaff_x19;
  undefined1 auStack_3f0 [56];
  undefined1 auStack_3b8 [56];
  undefined1 auStack_380 [56];
  byte bStack_348;
  undefined1 auStack_340 [56];
  char cStack_308;
  undefined1 auStack_300 [16];
  byte bStack_2f0;
  undefined8 **ppuStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 auStack_298 [56];
  char cStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [56];
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  uint uStack_1c8;
  undefined8 auStack_1c0 [2];
  byte bStack_1b0;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined8 **ppuStack_168;
  undefined1 *puStack_160;
  undefined1 auStack_158 [80];
  char cStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_58;
  undefined8 auStack_50 [2];
  byte bStack_40;
  
  puVar5 = param_5;
  func_0x00010734479c();
  puVar3 = auStack_50;
  ppuStack_168 = param_3;
  puStack_160 = param_4;
  FUN_1073232dc();
  if ((bStack_40 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x50] = 0;
  }
  else {
    func_0x000107345644();
    param_3 = &ppuStack_168;
    func_0x000107346178(auStack_e8);
    func_0x000107264c5c(auStack_e8);
    uStack_169 = 1;
    uStack_16a = 1;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    param_4 = &uStack_169;
    puVar5 = &uStack_16a;
    func_0x000107346170(auStack_158,auStack_50,&uStack_100);
    param_5 = auStack_b0;
    in_ZR = cStack_108 == '\x01';
    bVar1 = !(bool)in_ZR;
    if (bVar1) {
      uStack_a0 = uStack_f8;
      uStack_a8 = uStack_100;
      uStack_98 = uStack_f0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_100 = 0;
    }
    else {
      func_0x00010727ecac(&uStack_a8,auStack_158);
    }
    uStack_58 = (uint)bVar1;
    func_0x00010727eaac(auStack_158);
    func_0x000107347104();
    func_0x0001073462e0();
    bVar1 = uStack_58 == 0;
    if (bVar1) {
      func_0x0001073470b8();
      func_0x00010727ecac();
    }
    else {
      *unaff_x19 = 0;
    }
    unaff_x19[0x50] = bVar1;
    puVar3 = &uStack_a8;
    FUN_1073418b0();
  }
  func_0x000107345cd8();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073418b0(param_5 + 8);
  func_0x000107345cd8();
  func_0x000107345604();
  func_0x00010734479c();
  puVar4 = auStack_1c0;
  ppuStack_2a8 = param_3;
  puStack_2a0 = param_4;
  FUN_1073232dc();
  if ((bStack_1b0 & 1) == 0) {
    func_0x000107346ed8();
  }
  else {
    func_0x000107345644();
    param_3 = &ppuStack_2a8;
    func_0x000107346178(auStack_240);
    func_0x000107264c5c(auStack_240);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107346f04(auStack_298,auStack_1c0,&uStack_258);
    puVar5 = auStack_208;
    in_ZR = cStack_260 == '\x01';
    bVar1 = !(bool)in_ZR;
    if (bVar1) {
      uStack_1f8 = uStack_250;
      uStack_200 = uStack_258;
      uStack_1f0 = uStack_248;
      uStack_250 = 0;
      uStack_248 = 0;
      uStack_258 = 0;
    }
    else {
      func_0x00010727d614(&uStack_200,auStack_298);
    }
    uStack_1c8 = (uint)bVar1;
    func_0x00010727e950(auStack_298);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_258);
    func_0x000104c2f714(auStack_240);
    bVar1 = uStack_1c8 == 0;
    if (bVar1) {
      func_0x0001073470b8();
      func_0x00010727d614();
    }
    else {
      *(undefined1 *)puVar3 = 0;
    }
    *(bool *)(puVar3 + 7) = bVar1;
    puVar4 = &uStack_200;
    FUN_107341900();
  }
  func_0x000107345cd8();
  func_0x0001073446ac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_107341900(puVar5 + 8);
    func_0x000107345cd8();
    func_0x000107345604();
    func_0x00010734479c();
    FUN_1073232dc(auStack_300);
    if ((bStack_2f0 & 1) == 0) {
      *(undefined1 *)puVar4 = 0;
      *(undefined1 *)(puVar4 + 0xe) = 0;
    }
    else {
      FUN_1073415d8(auStack_340,auStack_300,"latitude",8,param_3);
      if ((bStack_2f0 & 1) == 0) goto LAB_107341868;
      FUN_1073415d8(auStack_380,auStack_300,"longitude",9,param_3);
      in_ZR = cStack_308 == '\x01';
      if (((bool)in_ZR) && ((bStack_348 & 1) != 0)) {
        func_0x00010727d614(auStack_3f0,auStack_340);
        func_0x00010727d614(auStack_3b8,auStack_380);
        func_0x000107346020();
        func_0x00010727d9cc();
        func_0x00010727d9cc(puVar4 + 7,auStack_3b8);
        *(undefined1 *)(puVar4 + 0xe) = 1;
        FUN_107341944(auStack_3f0);
      }
      else {
        *(undefined1 *)puVar4 = 0;
        *(undefined1 *)(puVar4 + 0xe) = 0;
      }
      func_0x00010727e950(auStack_380);
      func_0x00010727e950(auStack_340);
    }
    func_0x000107345cd8();
    func_0x0001073446ac();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
LAB_107341868:
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107341870);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 1073415d8; end: 107341753;  */

void FUN_1073415d8(undefined8 param_1,undefined8 param_2,undefined8 ***param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 *unaff_x19;
  undefined1 auStack_280 [56];
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [56];
  byte bStack_1d8;
  undefined1 auStack_1d0 [56];
  char cStack_198;
  undefined1 auStack_190 [16];
  byte bStack_180;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [56];
  char cStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [56];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_58;
  undefined8 auStack_50 [2];
  byte bStack_40;
  
  func_0x00010734479c();
  puVar3 = auStack_50;
  ppuStack_138 = param_3;
  uStack_130 = param_4;
  FUN_1073232dc();
  if ((bStack_40 & 1) == 0) {
    func_0x000107346ed8();
  }
  else {
    func_0x000107345644();
    param_3 = &ppuStack_138;
    func_0x000107346178(auStack_d0);
    func_0x000107264c5c(auStack_d0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    func_0x000107346f04(auStack_128,auStack_50,&uStack_e8);
    param_5 = auStack_98;
    in_ZR = cStack_f0 == '\x01';
    bVar1 = !(bool)in_ZR;
    if (bVar1) {
      uStack_88 = uStack_e0;
      uStack_90 = uStack_e8;
      uStack_80 = uStack_d8;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_e8 = 0;
    }
    else {
      func_0x00010727d614(&uStack_90,auStack_128);
    }
    uStack_58 = (uint)bVar1;
    func_0x00010727e950(auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
    func_0x000104c2f714(auStack_d0);
    bVar1 = uStack_58 == 0;
    if (bVar1) {
      func_0x0001073470b8();
      func_0x00010727d614();
    }
    else {
      *unaff_x19 = 0;
    }
    unaff_x19[0x38] = bVar1;
    puVar3 = &uStack_90;
    FUN_107341900();
  }
  func_0x000107345cd8();
  func_0x0001073446ac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_107341900(param_5 + 8);
    func_0x000107345cd8();
    func_0x000107345604();
    func_0x00010734479c();
    FUN_1073232dc(auStack_190);
    if ((bStack_180 & 1) == 0) {
      *(undefined1 *)puVar3 = 0;
      *(undefined1 *)(puVar3 + 0xe) = 0;
    }
    else {
      FUN_1073415d8(auStack_1d0,auStack_190,"latitude",8,param_3);
      if ((bStack_180 & 1) == 0) goto LAB_107341868;
      FUN_1073415d8(auStack_210,auStack_190,"longitude",9,param_3);
      in_ZR = cStack_198 == '\x01';
      if (((bool)in_ZR) && ((bStack_1d8 & 1) != 0)) {
        func_0x00010727d614(auStack_280,auStack_1d0);
        func_0x00010727d614(auStack_248,auStack_210);
        func_0x000107346020();
        func_0x00010727d9cc();
        func_0x00010727d9cc(puVar3 + 7,auStack_248);
        *(undefined1 *)(puVar3 + 0xe) = 1;
        FUN_107341944(auStack_280);
      }
      else {
        *(undefined1 *)puVar3 = 0;
        *(undefined1 *)(puVar3 + 0xe) = 0;
      }
      func_0x00010727e950(auStack_210);
      func_0x00010727e950(auStack_1d0);
    }
    func_0x000107345cd8();
    func_0x0001073446ac();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
LAB_107341868:
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107341870);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 107341754; end: 1073418af;  */

void FUN_107341754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *unaff_x19;
  undefined1 auStack_140 [56];
  undefined1 auStack_108 [56];
  undefined1 auStack_d0 [56];
  byte bStack_98;
  undefined1 auStack_90 [56];
  char cStack_58;
  undefined1 auStack_50 [16];
  byte bStack_40;
  
  func_0x00010734479c();
  FUN_1073232dc(auStack_50);
  if ((bStack_40 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x70] = 0;
  }
  else {
    FUN_1073415d8(auStack_90,auStack_50,"latitude",8,param_3);
    if ((bStack_40 & 1) == 0) goto LAB_107341868;
    FUN_1073415d8(auStack_d0,auStack_50,"longitude",9,param_3);
    in_ZR = cStack_58 == '\x01';
    if (((bool)in_ZR) && ((bStack_98 & 1) != 0)) {
      func_0x00010727d614(auStack_140,auStack_90);
      func_0x00010727d614(auStack_108,auStack_d0);
      func_0x000107346020();
      func_0x00010727d9cc();
      func_0x00010727d9cc(unaff_x19 + 0x38,auStack_108);
      unaff_x19[0x70] = 1;
      FUN_107341944(auStack_140);
    }
    else {
      *unaff_x19 = 0;
      unaff_x19[0x70] = 0;
    }
    func_0x00010727e950(auStack_d0);
    func_0x00010727e950(auStack_90);
  }
  func_0x000107345cd8();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107341868:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107341870);
  (*pcVar1)();
}



/* Entry: 1073418b0; end: 1073418f3;  */

void FUN_1073418b0(long param_1)

{
  if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
    func_0x000107344d8c((&PTR_FUN_1109a2fa0)[*(uint *)(param_1 + 0x50)]);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



/* Entry: 1073418f4; end: 1073418ff;  */

void FUN_1073418f4(undefined8 param_1,long param_2)

{
  if (*(uint *)(param_2 + 0x48) != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996eb8)[*(uint *)(param_2 + 0x48)]);
  }
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 107341900; end: 107341937;  */

void FUN_107341900(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073460ac();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a2fb0)[extraout_x8]);
  }
  func_0x000107347650();
  return;
}



/* Entry: 107341938; end: 107341943;  */

void FUN_107341938(undefined8 param_1,long param_2)

{
  if (*(uint *)(param_2 + 0x30) != 0xffffffff) {
    func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(param_2 + 0x30)]);
  }
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 107341944; end: 10734196b;  */

void FUN_107341944(void)

{
  func_0x000107346a38();
  func_0x000107266a30();
  func_0x000107266a30();
  return;
}



/* Entry: 10734196c; end: 1073419cf;  */

long FUN_10734196c(long param_1,long param_2)

{
  uint uVar1;
  code *extraout_x8;
  
  uVar1 = *(uint *)(param_2 + 0x48);
  if (*(int *)(param_1 + 0x48) != -1 || uVar1 != 0xffffffff) {
    if (uVar1 == 0xffffffff) {
      func_0x0001073461dc();
    }
    else {
      func_0x000107347584((&PTR_FUN_1109a2fc0)[uVar1],param_1,param_2,param_2);
      (*extraout_x8)();
    }
  }
  return param_1;
}



/* Entry: 1073419d0; end: 1073419f7;  */

void FUN_1073419d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x48) != 0) {
    func_0x0001073461dc();
    *(undefined4 *)(lVar1 + 0x48) = 0;
  }
  return;
}



/* Entry: 1073419f8; end: 107341a3f;  */

void FUN_1073419f8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*param_1 + 0x48) == 1) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c60e14(*param_2);
    }
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar2;
    *param_2 = uVar1;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    return;
  }
  func_0x000100a2b988(*param_1,param_3);
  func_0x00010727e9d0();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  func_0x000107346b50();
  *(undefined4 *)(unaff_x20 + 9) = 1;
  return;
}



/* Entry: 107341a40; end: 107341ad3;  */

void FUN_107341a40(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100a2b988();
  func_0x00010727e9d0();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  func_0x000107346b50();
  *(undefined4 *)(unaff_x20 + 9) = 1;
  return;
}



/* Entry: 107341ad4; end: 107341afb;  */

long FUN_107341ad4(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      lVar2 = param_1;
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x000107266a30();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return lVar2;
    }
    func_0x00010727d9cc();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    func_0x00010727dfac();
    return param_1;
  }
  return param_1;
}



/* Entry: 107341afc; end: 107341b2b;  */

void FUN_107341afc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000107266a30();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 107341b2c; end: 107341b47;  */

void FUN_107341b2c(long param_1)

{
  func_0x00010727d9cc();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 107341b48; end: 107341c13;  */

void FUN_107341b48(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727e8b8();
  func_0x000107345dfc();
  func_0x000107341b74();
  *(undefined4 *)(unaff_x20 + 0x268) = 1;
  return;
}



/* Entry: 107341c14; end: 107341c33;  */

void FUN_107341c14(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_107341944();
  }
  return;
}



/* Entry: 107341c34; end: 107341c63;  */

void FUN_107341c34(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010727e9d0();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 107341c64; end: 107341c7f;  */

void FUN_107341c64(long param_1)

{
  FUN_107339d04();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 107341c80; end: 107341d3f;  */

void FUN_107341c80(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727e8b8();
  func_0x000107345dfc();
  func_0x000107341cac();
  *(undefined4 *)(unaff_x20 + 0x268) = 2;
  return;
}



/* Entry: 107341d40; end: 107341de7;  */

void FUN_107341d40(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x00010734479c();
  func_0x000100061de0();
  func_0x0001073464fc();
  if ((extraout_x9 == 0) && (func_0x000107346ad8(), !(bool)in_ZR)) {
    func_0x000107347d00();
    if (((bool)in_CY) && (func_0x000107345a18(), (bool)in_CY)) {
      func_0x00010ae6c914();
    }
    else {
      unaff_x19 = param_1;
      func_0x0001073464c0();
      FUN_107341de8();
    }
    func_0x000107345130();
    param_1 = unaff_x19;
  }
  func_0x000107345560();
  uVar1 = *(char *)(extraout_x8 + param_1) == -0x80;
  func_0x00010734475c();
  func_0x0001073446ac();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107341e58();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010727e7fc(param_2);
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107347f90();
      FUN_107341e88();
    }
    param_2 = param_2 + 0x2b0;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107341de8; end: 107341e57;  */

void FUN_107341de8(void)

{
  long unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107348074();
  func_0x000107344ef0();
  FUN_107341e58();
  func_0x000107346acc();
  for (; unaff_x23 != unaff_x24; unaff_x24 = unaff_x24 + 1) {
    if (-1 < *(char *)(unaff_x22 + unaff_x24)) {
      func_0x00010727e7fc(unaff_x20);
      func_0x000107344cd8();
      func_0x000107344734();
      func_0x000107347f90();
      FUN_107341e88();
    }
    unaff_x20 = unaff_x20 + 0x2b0;
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 107341e58; end: 107341e87;  */

void FUN_107341e58(undefined8 param_1)

{
  func_0x000107345a40();
  func_0x000107345c6c();
  func_0x000107345994();
  func_0x0001000631d0(param_1,0x2b0);
  return;
}



/* Entry: 107341e88; end: 107341efb;  */

void FUN_107341e88(long param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
  func_0x00010727e8b8((undefined1 *)(param_1 + 0x40));
  uVar1 = *(uint *)(unaff_x19 + 0x2a8);
  if (uVar1 != 0xffffffff) {
    func_0x000107347860((&PTR_FUN_1109a2fd8)[uVar1]);
    *(uint *)(unaff_x20 + 0x2a8) = uVar1;
  }
  func_0x00010727e8b8(unaff_x19 + 0x40);
  func_0x000104c2f714();
  return;
}



/* Entry: 107341efc; end: 107341f13;  */

void FUN_107341efc(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988(*param_1);
  func_0x00010727d9cc();
  func_0x000107347500();
  func_0x00010727d9cc();
  func_0x000107341bdc(unaff_x20 + 0x70,unaff_x19 + 0x70);
  func_0x000107341bdc(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  func_0x000107341bdc(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  return;
}



/* Entry: 107341f14; end: 107341f5f;  */

void FUN_107341f14(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x00010727d9cc();
  func_0x000107347500();
  func_0x00010727d9cc();
  func_0x000107341bdc(unaff_x20 + 0x70,unaff_x19 + 0x70);
  func_0x000107341bdc(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  func_0x000107341bdc(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  return;
}



/* Entry: 107341f60; end: 107341f73;  */

ulong FUN_107341f60(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  ulong extraout_x8;
  ulong extraout_x10;
  
  ppuVar1 = &PTR_LOOP_110c8acd8;
  lVar2 = param_2;
  func_0x000107264c5c(param_2);
  func_0x000100062d4c(&PTR_LOOP_110c8acd8,param_2);
  func_0x000100061c28((long)ppuVar1 + lVar2);
  return extraout_x8 ^ extraout_x10;
}



/* Entry: 107341f74; end: 107342187;  */

/* WARNING: Possible PIC construction at 0x000107341b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107341b1c) */

void FUN_107341f74(void)

{
  char cVar1;
  long lVar2;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_160 [304];
  
  func_0x00010734733c();
  if (extraout_w8 != 0) {
    func_0x00010727eaec(auStack_160);
    func_0x00010727e8b8();
    FUN_107341f14();
    *(undefined4 *)(unaff_x21 + 0x268) = 0;
    func_0x00010727e914(auStack_160);
    return;
  }
  func_0x000107345bc8();
  func_0x000107346c90();
  FUN_107342188();
  FUN_107342354(unaff_x20 + 0x70,unaff_x19 + 0x70);
  FUN_107342354(unaff_x20 + 0xb0,unaff_x19 + 0xb0);
  lVar2 = unaff_x20 + 0xf0;
  cVar1 = *(char *)(unaff_x20 + 0x128);
  if (cVar1 == *(char *)(unaff_x19 + 0x128)) {
    if (cVar1 == '\0') {
      return;
    }
    if (*(int *)(unaff_x20 + 0x120) != -1 || *(int *)(unaff_x19 + 0x120) != -1) {
      if (*(int *)(unaff_x19 + 0x120) == -1) goto code_r0x000107266a30;
      func_0x000107345474(lVar2,lVar2,unaff_x19 + 0xf0);
    }
    return;
  }
  if (cVar1 == '\0') {
    func_0x00010727d614();
    *(undefined1 *)(lVar2 + 0x38) = 1;
    return;
  }
  if (*(char *)(unaff_x20 + 0x128) != '\x01') {
    return;
  }
  unaff_x29 = &stack0xfffffffffffffff0;
  unaff_x30 = 0x107341b1c;
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  unaff_x19 = lVar2;
code_r0x000107266a30:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*(uint *)(unaff_x20 + 0x120) != 0xffffffff) {
    func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(unaff_x20 + 0x120)]);
  }
  *(undefined4 *)(unaff_x20 + 0x120) = 0xffffffff;
  return;
}



/* Entry: 107342188; end: 1073421db;  */

void FUN_107342188(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    if (*(int *)(param_2 + 0x30) == -1) {
      if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
        func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(param_1 + 0x30)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 1073421dc; end: 1073421ef;  */

void FUN_1073421dc(long *param_1)

{
  if (*(int *)(*param_1 + 0x30) != 0) {
    func_0x0001073460d4();
    FUN_107342218();
  }
  return;
}



/* Entry: 1073421f0; end: 107342217;  */

void FUN_1073421f0(long param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x0001073460d4();
    FUN_107342218();
  }
  return;
}



/* Entry: 107342218; end: 107342237;  */

void FUN_107342218(void)

{
  long unaff_x19;
  
  func_0x000107346d54();
  func_0x000107266a30();
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 107342238; end: 10734223f;  */

void FUN_107342238(long *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(*param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001073460d4();
  FUN_107342274();
  return;
}



/* Entry: 107342240; end: 107342273;  */

void FUN_107342240(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (*(int *)(param_1 + 0x30) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x0001073460d4();
  FUN_107342274();
  return;
}



/* Entry: 107342274; end: 10734227f;  */

void FUN_107342274(undefined8 *param_1)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x000107266a30();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 1;
  return;
}



/* Entry: 107342280; end: 1073422af;  */

void FUN_107342280(void)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x000100a2b988();
  func_0x000107266a30();
  *unaff_x20 = *unaff_x19;
  unaff_x20[0xc] = 1;
  return;
}



/* Entry: 1073422b0; end: 1073422b7;  */

void FUN_1073422b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x30) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x0001072f6188();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  func_0x0001073460d4();
  FUN_10734231c();
  return;
}



/* Entry: 1073422b8; end: 1073422eb;  */

void FUN_1073422b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x000100a2b988(param_2,param_3);
    func_0x0001072f6188();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  func_0x0001073460d4();
  FUN_10734231c();
  return;
}



/* Entry: 1073422ec; end: 10734231b;  */

void FUN_1073422ec(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x0001072f6188();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
  return;
}



/* Entry: 10734231c; end: 107342327;  */

void FUN_10734231c(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000100a2b988(*param_1,param_1[1]);
  func_0x000107266a30();
  func_0x000107345dfc();
  func_0x00010727d69c();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 107342328; end: 107342353;  */

void FUN_107342328(void)

{
  long unaff_x20;
  
  func_0x000100a2b988();
  func_0x000107266a30();
  func_0x000107345dfc();
  func_0x00010727d69c();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 107342354; end: 10734237b;  */

/* WARNING: Possible PIC construction at 0x000107341b18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107341b1c) */

void FUN_107342354(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 == '\0') {
      func_0x00010727d614();
      *(undefined1 *)(param_1 + 0x38) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x38) != '\x01') {
      return;
    }
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x107341b1c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    lVar2 = param_2;
    param_2 = param_3;
    unaff_x19 = param_1;
code_r0x000107266a30:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (*(uint *)(param_1 + 0x30) != 0xffffffff) {
      func_0x0001072745a8((&PTR_DAT_110995e60)[*(uint *)(param_1 + 0x30)],param_1,lVar2,param_2);
    }
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    return;
  }
  if (cVar1 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x30) != -1 || *(int *)(param_2 + 0x30) != -1) {
    lVar2 = param_1;
    if (*(int *)(param_2 + 0x30) == -1) goto code_r0x000107266a30;
    func_0x000107345474();
  }
  return;
}



/* Entry: 10734237c; end: 1073423cf;  */

void FUN_10734237c(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x48) != -1 || *(int *)(param_2 + 0x48) != -1) {
    if (*(int *)(param_2 + 0x48) == -1) {
      if (*(uint *)(param_1 + 0x48) != 0xffffffff) {
        func_0x000107285594((&PTR_DAT_110996eb8)[*(uint *)(param_1 + 0x48)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      return;
    }
    func_0x000107345474();
  }
  return;
}



/* Entry: 1073423d0; end: 10734244f;  */

void FUN_1073423d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x48) != 0) {
    func_0x0001073461dc();
    *(undefined4 *)(lVar1 + 0x48) = 0;
  }
  return;
}



/* Entry: 107342450; end: 1073424c7;  */

void FUN_107342450(long *param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined1 auStack_78 [72];
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x48) != 2) {
    func_0x000107347584();
    func_0x00010727ed3c();
    func_0x000107341aa8(lVar2,auStack_78);
    func_0x00010727ea28(auStack_78);
    return;
  }
  func_0x0001072f6188(param_2,param_3);
  lVar2 = param_2 + 0x28;
  cVar1 = *(char *)(param_2 + 0x40);
  if (cVar1 == *(char *)(param_3 + 0x40)) {
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350)();
      return;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_2 + 0x40) == '\x01') {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      *(undefined1 *)(lVar2 + 0x18) = 0;
    }
    return;
  }
  func_0x000107c60c94();
  func_0x00010028b5dc();
  return;
}



/* Entry: 1073424c8; end: 1073424cf;  */

void FUN_1073424c8(void)

{
  return;
}



/* Entry: 1073424d0; end: 1073424f3;  */

void FUN_1073424d0(void)

{
  func_0x00010734506c();
  func_0x00010734521c(&PTR_FUN_1109a3078);
  return;
}



/* Entry: 1073424f4; end: 10734250f;  */

void FUN_1073424f4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109a3078;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107342510; end: 107342ff3;  */

void FUN_107342510(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined1 ***pppuVar5;
  undefined1 *extraout_x8;
  long extraout_x8_00;
  undefined8 uVar6;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  int extraout_w9;
  long extraout_x11;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_4d0 [144];
  undefined1 auStack_440 [16];
  undefined1 auStack_430 [56];
  byte bStack_3f8;
  undefined1 uStack_3ea;
  undefined1 uStack_3e9;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  char acStack_3a0 [8];
  int iStack_398;
  uint uStack_388;
  undefined1 auStack_368 [16];
  undefined1 auStack_358 [40];
  undefined1 auStack_330 [80];
  char cStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  undefined1 auStack_298 [56];
  byte bStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  byte bStack_248;
  undefined1 **ppuStack_240;
  undefined8 *puStack_238;
  char cStack_208;
  char cStack_1f8;
  char cStack_1c8;
  undefined1 auStack_1c0 [16];
  char cStack_1b0;
  byte bStack_188;
  byte bStack_178;
  undefined1 auStack_170 [16];
  byte bStack_160;
  undefined1 auStack_158 [16];
  char cStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [120];
  char cStack_40;
  uint uStack_38;
  char cStack_30;
  undefined1 auStack_28 [16];
  byte bStack_18;
  undefined8 uStack_10;
  
  func_0x000107346410();
  func_0x000107344b50();
  func_0x000107347e70();
  FUN_107323974(auStack_140,&UNK_10f40a97b,0x16,auStack_440);
  func_0x000107264c5c(auStack_140);
  func_0x000107347764(auStack_4d0);
  func_0x000104c2f714(auStack_140);
  plVar10 = *(long **)(param_1 + 0x10);
  auStack_140[0] = 0;
  cStack_30 = '\0';
  FUN_1073232dc(auStack_158,param_3,&UNK_10f40a992,0x12);
  if (cStack_148 == '\x01') {
    if (cStack_30 == '\x01') {
      if (uStack_38 != 0) {
        func_0x00010727fb44(auStack_138);
        uStack_38 = 0;
      }
    }
    else {
      uStack_38 = 0;
      cStack_30 = '\x01';
    }
LAB_107342bec:
    func_0x0001072f5f4c(auStack_158);
    uVar2 = cStack_30 == '\x01';
    if ((bool)uVar2) {
      lVar9 = *plVar10;
      func_0x000107345bbc(&puStack_3d8);
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      Hint_Prefetch(uVar6,0,2,0);
      pppuVar5 = (undefined1 ***)&puStack_3d8;
      func_0x00010727e7fc(uVar6,pppuVar5);
      lVar13 = 0;
      uVar12 = *(ulong *)(lVar9 + 0x30);
      func_0x000107344ffc(*(ulong *)(lVar9 + 0x20) >> 0xc);
      uVar14 = extraout_x8_01;
      while( true ) {
        uVar14 = uVar14 & uVar12;
        func_0x000107346214();
        lVar7 = extraout_x11;
        for (uVar8 = extraout_x8_02 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
          ppuStack_240 = (undefined1 **)&puStack_3d8;
          uVar11 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar14 + ((ulong)LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) >> 3) & uVar12;
          pppuVar5 = &ppuStack_240;
          puStack_238 = (undefined8 *)(lVar9 + 0x20);
          func_0x00010727fac4(pppuVar5,*(long *)(lVar9 + 0x28) + uVar11 * lVar7);
          if (((ulong)pppuVar5 & 1) != 0) {
            lVar13 = *(long *)(lVar9 + 0x28) + uVar11 * 0x148;
            bVar3 = *(int *)(lVar13 + 0x140) == -1;
            uVar2 = bVar3 && uStack_38 == 0xffffffff;
            if (!bVar3 || uStack_38 != 0xffffffff) {
              ppuVar4 = (undefined8 **)(lVar13 + 0x40);
              uVar2 = uStack_38 == 0xffffffff;
              if ((bool)uVar2) {
                func_0x00010727fb44(ppuVar4);
              }
              else {
                ppuStack_240 = (undefined1 **)ppuVar4;
                (*(code *)(&PTR_FUN_1109a3168)[uStack_38])(&ppuStack_240,ppuVar4,auStack_138);
              }
            }
            goto LAB_107342d08;
          }
          lVar7 = 0x148;
        }
        func_0x0001073450b0();
        if ((extraout_x8_03 & 1) != 0) break;
        lVar13 = lVar13 + 8;
        uVar14 = lVar13 + uVar14;
      }
      func_0x000107346964();
      FUN_107343588();
      lVar13 = *(long *)(lVar9 + 0x28) + (long)pppuVar5 * 0x148;
      func_0x000104c318bc(lVar13,&puStack_3d8);
      func_0x00010727fad0(lVar13 + 0x40,auStack_138);
LAB_107342d08:
      func_0x000104c2f714(&puStack_3d8);
    }
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    func_0x000107280b5c(auStack_140);
    func_0x000107346510();
    func_0x0001073447cc(uStack_10);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x0001073478fc(auStack_170,param_3,&UNK_10f40a9a5);
    if (bStack_160 != 1) {
      FUN_1073232dc(&uStack_2d8,param_3,&UNK_10f40a9db,0x11);
      if ((char)uStack_2c8 == '\x01') {
        FUN_1073415d8(&ppuStack_240,&uStack_2d8,&UNK_10f40a9ed,0x19,auStack_4d0);
        if ((uStack_2c8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_107342dcc;
        }
        FUN_1073415d8(auStack_1c0,&uStack_2d8,&UNK_10f40aa07,0xd,auStack_4d0);
        if ((uStack_2c8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_107342dcc;
        }
        func_0x000107346464(auStack_430,&uStack_2d8,&UNK_10f40aa15);
        if ((uStack_2c8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_107342dcc;
        }
        FUN_1073415d8(auStack_298,&uStack_2d8,&UNK_10f40aa26,0xe,auStack_4d0);
        if ((((cStack_208 == '\x01') && (bStack_188 == 1)) && (bStack_3f8 == 1)) &&
           (uVar2 = bStack_260 == 1, (bool)uVar2)) {
          func_0x00010727d614(&puStack_3d8,&ppuStack_240);
          if ((bStack_188 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_107342dcc;
          }
          func_0x00010727d614(acStack_3a0,auStack_1c0);
          if ((bStack_3f8 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_107342dcc;
          }
          func_0x00010727d614(auStack_368,auStack_430);
          if ((bStack_260 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_107342dcc;
          }
          func_0x00010727d614(auStack_330,auStack_298);
          func_0x0001073473ec();
          if ((bool)uVar2) {
            if (uStack_38 == 2) {
              func_0x0001073475c0();
              func_0x00010727df44();
            }
            else {
              func_0x0001073475c0();
              func_0x000107343530();
            }
          }
          else {
            func_0x0001073475c0();
            func_0x00010727d988();
            uStack_38 = 2;
            cStack_30 = '\x01';
          }
          func_0x00010727d560(&puStack_3d8);
        }
        func_0x00010727e950(auStack_298);
        func_0x00010734725c();
        func_0x00010727e950(auStack_1c0);
        func_0x00010727e950(&ppuStack_240);
      }
      else {
        FUN_1073232dc(auStack_1c0,param_3,&UNK_10f40aa35,0x1a);
        if (cStack_1b0 == '\x01') {
          func_0x00010734776c(&puStack_3d8,auStack_1c0,"duration");
          uVar2 = acStack_3a0[0] == '\x01';
          if ((bool)uVar2) {
            func_0x00010727d614(&ppuStack_240,&puStack_3d8);
            func_0x0001073473ec();
            if ((bool)uVar2) {
              if (uStack_38 == 3) {
                func_0x00010727df88();
              }
              else {
                func_0x00010734355c(extraout_x8_00 + 8,&ppuStack_240);
              }
            }
            else {
              func_0x00010727d9cc(extraout_x8_00 + 8,&ppuStack_240);
              uStack_38 = 3;
              cStack_30 = '\x01';
            }
            func_0x000107266a30(&ppuStack_240);
          }
          func_0x00010727e950(&puStack_3d8);
        }
        func_0x0001072f5f4c(auStack_1c0);
      }
      func_0x0001072f5f4c(&uStack_2d8);
LAB_107342be4:
      func_0x0001072f5f4c(auStack_170);
      goto LAB_107342bec;
    }
    func_0x00010734776c(auStack_430,auStack_170,"duration");
    if ((bStack_160 & 1) != 0) {
      puStack_258 = &UNK_10f40a9b6;
      uStack_250 = 6;
      func_0x000107347a10(auStack_28,auStack_170);
      if ((bStack_18 & 1) == 0) {
        auStack_1c0[0] = 0;
        bStack_178 = 0;
      }
      else {
        func_0x000107345644();
        func_0x000107346178(auStack_298);
        func_0x000107264c5c(auStack_298);
        puStack_3e8 = (undefined *)CONCAT71(puStack_3e8._1_7_,1);
        uStack_3e9 = 1;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        uStack_2c8 = 0;
        FUN_107343028(&ppuStack_240,auStack_28,&uStack_2d8,auStack_4d0,&puStack_3e8,&uStack_3e9);
        if (cStack_1f8 != '\x01') {
          uStack_3c8 = uStack_2d0;
          uStack_3d0 = uStack_2d8;
          uStack_3c0 = uStack_2c8;
          uStack_2c8 = 0;
          uStack_2d8 = 0;
          uStack_2d0 = 0;
        }
        else {
          func_0x00010727fd2c(&uStack_3d0,&ppuStack_240);
        }
        uStack_388 = (uint)(cStack_1f8 != '\x01');
        FUN_107343508(&ppuStack_240);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2d8);
        func_0x000104c2f714(auStack_298);
        bStack_178 = uStack_388 == 0;
        if ((bool)bStack_178) {
          func_0x00010727fd2c(auStack_1c0,&uStack_3d0);
        }
        else {
          auStack_1c0[0] = 0;
        }
        FUN_107343044(&uStack_3d0);
      }
      func_0x0001073468c8();
      if ((bStack_3f8 == 1) && (bStack_178 == 1)) {
        ppuStack_240 = (undefined1 **)((ulong)ppuStack_240 & 0xffffffffffffff00);
        cStack_1c8 = '\0';
        if ((bStack_160 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_107342dcc;
        }
        FUN_1073232dc(&puStack_258,auStack_170,&UNK_10f40a9bd,3);
        uVar2 = 0;
        if (bStack_248 == 1) {
          puStack_3e8 = &UNK_10f40a9c1;
          uStack_3e0 = 0x19;
          FUN_1073232dc(auStack_28,&puStack_258,&UNK_10f40a9c1,0x19);
          if ((bStack_18 & 1) == 0) {
            auStack_298[0] = 0;
            bStack_260 = 0;
          }
          else {
            func_0x000107345644();
            func_0x000107346178(&uStack_2d8);
            func_0x000107264c5c(&uStack_2d8);
            uStack_3e9 = 1;
            uStack_3ea = 1;
            FUN_107343088(&puStack_3d8,auStack_28,auStack_4d0,&uStack_3e9,&uStack_3ea);
            func_0x000104c2f714(&uStack_2d8);
            bStack_260 = iStack_398 == 0;
            if ((bool)bStack_260) {
              ppuVar4 = &puStack_3d8;
              func_0x000107343144(ppuVar4);
              func_0x00010727fe7c(auStack_298,ppuVar4);
            }
            else {
              auStack_298[0] = 0;
            }
            func_0x0001073478e8(&puStack_3d8);
          }
          func_0x0001073468c8();
          if ((bStack_248 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_107342dcc;
          }
          FUN_1073415d8(&uStack_2d8,&puStack_258,&UNK_10f40a753,0x12,auStack_4d0);
          uVar2 = 0;
          if (bStack_260 == 1) {
            func_0x00010727fe7c(&puStack_3d8,auStack_298);
            func_0x00010727eb70(acStack_3a0,&uStack_2d8);
            uVar2 = cStack_1c8 == '\x01';
            if ((bool)uVar2) {
              FUN_1073431a0();
            }
            else {
              func_0x0001073431c8(&ppuStack_240,&puStack_3d8);
            }
            func_0x00010727fbf0(&puStack_3d8);
          }
          func_0x00010727e950(&uStack_2d8);
          FUN_10733e5d8(auStack_298);
        }
        func_0x0001072f5f4c(&puStack_258);
        if ((bStack_3f8 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_107342dcc;
        }
        func_0x00010727d614(&puStack_3d8,auStack_430);
        if ((bStack_178 & 1) == 0) {
          func_0x000104bdc2c8();
          goto LAB_107342dcc;
        }
        func_0x00010727fd2c(acStack_3a0,auStack_1c0);
        func_0x00010727fde8(auStack_358,&ppuStack_240);
        func_0x0001073473ec();
        if ((bool)uVar2) {
          func_0x0001073475c0();
          if (extraout_w9 == 1) {
            func_0x00010727df88();
            FUN_1073431f4(auStack_100,acStack_3a0);
            if (cStack_40 == cStack_2e0) {
              if (cStack_40 != '\0') {
                FUN_1073431a0(auStack_b8,auStack_358);
              }
            }
            else if (cStack_40 == '\0') {
              func_0x0001073431c8(auStack_b8,auStack_358);
            }
            else {
              FUN_1073433e8();
            }
          }
          else {
            FUN_10734340c();
          }
        }
        else {
          func_0x0001073475c0();
          func_0x000107343438();
          uStack_38 = 1;
          cStack_30 = '\x01';
        }
        func_0x00010727fba0(&puStack_3d8);
        func_0x00010727fbd0(&ppuStack_240);
      }
      FUN_107343508(auStack_1c0);
      func_0x00010734725c();
      goto LAB_107342be4;
    }
  }
  func_0x000104bdc2c8();
LAB_107342dcc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107342dd0);
  (*pcVar1)();
}



/* Entry: 107342ff4; end: 10734301b;  */

void FUN_107342ff4(undefined8 param_1)

{
  func_0x000107345760();
  func_0x000107345650(param_1,&PTR_DAT_1109a31b8);
  func_0x000107344bc4();
  return;
}



/* Entry: 10734301c; end: 107343027;  */

undefined ** FUN_10734301c(void)

{
  return &PTR_DAT_1109a31b8;
}



/* Entry: 107343028; end: 107343043;  */

void FUN_107343028(void)

{
  func_0x0001073446c4();
  FUN_107555934();
  return;
}



/* Entry: 107343044; end: 10734307f;  */

void FUN_107343044(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734747c();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a30d8)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 107343080; end: 107343087;  */

void FUN_107343080(undefined8 param_1,long param_2)

{
  if (*(uint *)(param_2 + 0x40) != 0xffffffff) {
    func_0x000107285594((&PTR_DAT_110996f60)[*(uint *)(param_2 + 0x40)]);
  }
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 107343088; end: 10734312b;  */

void FUN_107343088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [56];
  char cStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10733e5bc(auStack_78,param_2,&uStack_38,param_3,param_4,param_5);
  if (cStack_40 == '\x01') {
    FUN_10734312c(param_1 + 8,auStack_78);
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = uStack_30;
    *(undefined8 *)(param_1 + 8) = uStack_38;
    *(undefined8 *)(param_1 + 0x18) = uStack_28;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  FUN_10733e5d8(auStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_38);
  return;
}



/* Entry: 10734312c; end: 10734315b;  */

void FUN_10734312c(long param_1)

{
  func_0x00010727fe7c();
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


