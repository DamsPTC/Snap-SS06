/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087dc0f4; end: 1087dc0fb;  */

void FUN_1087dc0f4(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087dc2e0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x0001087dc134();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087dc0fc; end: 1087dc157;  */

void FUN_1087dc0fc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087dc2e0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x38;
    func_0x0001087dc134();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087dc158; end: 1087dc1e7;  */

undefined8 FUN_1087dc158(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    puVar2 = (&PTR_DAT_113268bb8)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f4bb905;
  }
  func_0x000107c278b8(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x2b8) {
    puVar2 = (&PTR_s_success_113269028)[uVar1];
  }
  else {
    puVar2 = &UNK_10f4bb916;
  }
  func_0x000107c28824(param_1,auStack_38,puVar2);
  func_0x0001087dc2a4();
  return param_1;
}



/* Entry: 1087dc1e8; end: 1087dc287;  */

void FUN_1087dc1e8(long param_1)

{
  func_0x000107c279c4(param_1 + 0xf0);
  func_0x000107c279dc(param_1 + 200);
  func_0x000107c279c4(param_1 + 0xa0);
  func_0x000104bee630(param_1 + 0x88);
  func_0x000107c28754(param_1 + 0x68);
  func_0x000107c27914(param_1 + 0x48);
  func_0x000107c27914(param_1 + 0x30);
  func_0x000107c27914(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1087dc288; end: 1087dc323;  */

undefined8 FUN_1087dc288(void)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined ***pppuVar6;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x24;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint in_stack_00000008;
  long in_stack_00000030;
  long in_stack_00000038;
  char in_stack_00000048;
  undefined1 auStack_360 [80];
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined4 uStack_2b0;
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [32];
  undefined8 uStack_250;
  undefined1 auStack_248 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [64];
  undefined8 **ppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined1 auStack_190 [24];
  undefined4 uStack_178;
  uint uStack_174;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  long *plStack_130;
  long lStack_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  
  if (*(char *)(unaff_x24 + 0x50) == '\x01') {
    uVar1 = *(ulong *)(unaff_x24 + 0x40);
    if (-1 < (char)*(byte *)(unaff_x24 + 0x4f)) {
      uVar1 = (ulong)*(byte *)(unaff_x24 + 0x4f);
    }
    if (uVar1 != 0) {
      plVar4 = (long *)unaff_x20[2];
      (**(code **)(*plVar4 + 0x10))();
      auStack_c0[0] = 0;
      uStack_a8 = 0;
      if (*(long *)(unaff_x24 + 0x18) != *(long *)(unaff_x24 + 0x20)) {
        FUN_1087dbf38(auStack_c0);
      }
      auStack_e0[0] = 0;
      uStack_c8 = 0;
      if ((in_stack_00000048 == '\x01') && (in_stack_00000030 != in_stack_00000038)) {
        FUN_108848384(&ppuStack_310,&stack0x00000030);
        func_0x00010b4d1804(&ppuStack_1a8,&ppuStack_310);
        func_0x000107c2a4cc(&ppuStack_310);
        if (-1 < (char)bStack_191) {
          uStack_1a0 = (ulong)bStack_191;
          ppuStack_1a8 = &ppuStack_1a8;
        }
        func_0x000107c28004(auStack_1e8,ppuStack_1a8,(long)ppuStack_1a8 + uStack_1a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_1a8);
        FUN_1086554b0(auStack_e0,auStack_1e8);
        func_0x000107c27914(auStack_1e8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_1a8,unaff_x24 + 0x38);
      func_0x0001087dc308();
      uStack_178 = *(undefined4 *)(unaff_x24 + 0x30);
      uStack_174 = in_stack_00000008;
      FUN_108691254(auStack_170);
      func_0x000107c279a0(auStack_150,&stack0x00000010);
      plVar5 = unaff_x20 + 0x14;
      plStack_130 = plVar4;
      FUN_108679cf0();
      lStack_128 = *plVar5;
      if (*plVar5 < 1) {
        lStack_128 = 0xf731400;
      }
      lStack_128 = lStack_128 + (long)plVar4;
      func_0x000107c27b7c(auStack_120,auStack_c0);
      func_0x000107c27b7c(auStack_100,auStack_e0);
      FUN_1088689d0(*unaff_x20,&ppuStack_1a8);
      FUN_108868e10(*unaff_x20,&ppuStack_1a8,auStack_190);
      uVar7 = *(undefined8 *)(*unaff_x20 + 0x18);
      func_0x000107c278b8(auStack_200,&UNK_10f4bb8e7);
      func_0x000107c31420(auStack_1e8,uVar7,auStack_200);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
      lVar8 = *unaff_x20;
      auStack_88[0] = 0;
      uStack_70 = 0;
      if (*(long *)(unaff_x21 + 0x2e8) != *(long *)(unaff_x21 + 0x2f0)) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        func_0x00010528d490(&uStack_a0,
                            (*(long *)(unaff_x21 + 0x2f0) - *(long *)(unaff_x21 + 0x2e8)) / 0x18);
        lVar2 = *(long *)(unaff_x21 + 0x2f0);
        for (lVar9 = *(long *)(unaff_x21 + 0x2e8); lVar9 != lVar2; lVar9 = lVar9 + 0x18) {
          func_0x0001086ce6c8(&uStack_a0,lVar9);
        }
        FUN_1086d53b4(auStack_88,&uStack_a0);
        func_0x000104bee630(&uStack_a0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_310,unaff_x24 + 0x38);
      func_0x0001087dc308();
      func_0x000107c27994(auStack_2e0);
      func_0x000107c27994(auStack_2c8,unaff_x21 + 0xf8);
      uStack_2b0 = *(undefined4 *)(unaff_x21 + 0x110);
      func_0x000107c28978(auStack_2a8,auStack_88);
      FUN_10867be90(auStack_288,unaff_x21 + 0x308);
      func_0x000104be0ccc(auStack_270,unaff_x21 + 0x118);
      uStack_250 = *(undefined8 *)(unaff_x21 + 0x138);
      func_0x000107c279d4(auStack_248,unaff_x21 + 0x150);
      func_0x000104be0ccc(auStack_220,unaff_x21 + 0x460);
      func_0x000107c28754(auStack_88);
      FUN_108868e98(lVar8,&ppuStack_310);
      FUN_1087dc1e8(&ppuStack_310);
      func_0x000107c31428(auStack_1e8);
      func_0x000107c31424(auStack_1e8);
      plVar4 = (long *)unaff_x20[4];
      uStack_300 = 0;
      uStack_2f8 = 0;
      ppuStack_310 = &PTR_FUN_110a609a8;
      uStack_308 = 0;
      uStack_2f0 = 0x2da;
      if (in_stack_00000008 < 6) {
        uVar3 = *(undefined4 *)(&UNK_10df58bf4 + (ulong)in_stack_00000008 * 4);
      }
      else {
        uVar3 = 0x8802a1;
      }
      pppuVar6 = &ppuStack_310;
      FUN_1087dbf6c(pppuVar6,uVar3);
      func_0x000107c2884c(auStack_360,pppuVar6);
      (**(code **)(*plVar4 + 0x50))(plVar4,auStack_360);
      func_0x000107c2882c(auStack_360);
      func_0x000107c2882c(&ppuStack_310);
      func_0x0001087dc244(&ppuStack_1a8);
      func_0x000107c279c4(auStack_e0);
      func_0x000107c279c4(auStack_c0);
      return 1;
    }
  }
  return 0;
}



/* Entry: 1087dc324; end: 1087dc443;  */

undefined1 * FUN_1087dc324(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_410 [968];
  undefined4 uStack_48;
  code *pcStack_40;
  undefined **ppuStack_38;
  
  func_0x0001087dd768();
  puVar1 = auStack_410;
  func_0x0001087dd53c();
  puVar2 = param_1;
  if (!(bool)in_ZR) {
    func_0x0001087dd5ac();
    if (extraout_x8 != 0) {
      do {
        func_0x0001087dd52c();
      } while (extraout_w10 != 0);
    }
    func_0x0001087dd63c();
    func_0x0001087dd630();
    func_0x0001087dd624();
    uStack_48 = 0;
    func_0x000107c28150();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    func_0x0001087dd718();
    lVar3 = *(long *)(lVar3 + 0x70);
    pcStack_40 = FUN_1087dd150;
    ppuStack_38 = &PTR_FUN_110a71f78;
    func_0x0001087dd754();
    func_0x0001087dd46c();
    func_0x0001087dd678();
    func_0x0001087dd65c();
    func_0x0001087dd4c8();
    func_0x0001087dd604();
    if (lVar3 == 0) {
      func_0x0001087dd648();
      if (extraout_x8_00 != 0) {
        do {
          func_0x0001087dd52c();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087dd75c();
      func_0x0001087dd710();
      func_0x0001087dd5c4();
    }
    FUN_1087dc444(auStack_410);
    puVar2 = puVar1;
    unaff_x19 = param_1;
  }
  func_0x0001087dd514();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001087dd590();
    FUN_1087dc444(auStack_410);
    func_0x0001087dd68c();
    func_0x0001087dd60c();
    func_0x0001087dd740();
    func_0x0001087dd738();
    puVar2 = unaff_x19;
    func_0x0001005528ec();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return puVar2;
}



/* Entry: 1087dc444; end: 1087dc467;  */

long FUN_1087dc444(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001087dd60c();
  func_0x0001087dd740();
  func_0x0001087dd738();
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087dc468; end: 1087dc58b;  */

undefined1 * FUN_1087dc468(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_410 [968];
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001087dd768();
  puVar1 = auStack_410;
  func_0x0001087dd53c();
  puVar2 = param_1;
  if (!(bool)in_ZR) {
    func_0x0001087dd5ac();
    if (extraout_x8 != 0) {
      do {
        func_0x0001087dd52c();
      } while (extraout_w10 != 0);
    }
    func_0x0001087dd63c();
    func_0x0001087dd630();
    func_0x0001087dd624();
    uStack_48 = 1;
    func_0x000107c28150();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    func_0x0001087dd718();
    lVar3 = *(long *)(lVar3 + 0x70);
    uStack_40 = 0x1087dd178;
    ppuStack_38 = &PTR_FUN_110a71f90;
    func_0x0001087dd754();
    func_0x0001087dd46c();
    func_0x0001087dd678();
    func_0x0001087dd65c();
    func_0x0001087dd4c8();
    func_0x0001087dd604();
    if (lVar3 == 0) {
      func_0x0001087dd648();
      if (extraout_x8_00 != 0) {
        do {
          func_0x0001087dd52c();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087dd75c();
      func_0x0001087dd710();
      func_0x0001087dd5c4();
    }
    FUN_1087dc58c(auStack_410);
    puVar2 = puVar1;
    unaff_x19 = param_1;
  }
  func_0x0001087dd514();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001087dd590();
    FUN_1087dc58c(auStack_410);
    func_0x0001087dd68c();
    func_0x0001087dd60c();
    func_0x0001087dd740();
    func_0x0001087dd738();
    puVar2 = unaff_x19;
    func_0x0001005528ec();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return puVar2;
}



/* Entry: 1087dc58c; end: 1087dc5af;  */

long FUN_1087dc58c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001087dd60c();
  func_0x0001087dd740();
  func_0x0001087dd738();
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087dc5b0; end: 1087dc6d3;  */

undefined1 * FUN_1087dc5b0(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_410 [968];
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  func_0x0001087dd768();
  puVar1 = auStack_410;
  func_0x0001087dd53c();
  puVar2 = param_1;
  if (!(bool)in_ZR) {
    func_0x0001087dd5ac();
    if (extraout_x8 != 0) {
      do {
        func_0x0001087dd52c();
      } while (extraout_w10 != 0);
    }
    func_0x0001087dd63c();
    func_0x0001087dd630();
    func_0x0001087dd624();
    uStack_48 = 3;
    func_0x000107c28150();
    lVar3 = *(long *)(unaff_x21 + 0x10);
    func_0x0001087dd718();
    lVar3 = *(long *)(lVar3 + 0x70);
    uStack_40 = 0x1087dd1a0;
    ppuStack_38 = &PTR_FUN_110a71fa8;
    func_0x0001087dd754();
    func_0x0001087dd46c();
    func_0x0001087dd678();
    func_0x0001087dd65c();
    func_0x0001087dd4c8();
    func_0x0001087dd604();
    if (lVar3 == 0) {
      func_0x0001087dd648();
      if (extraout_x8_00 != 0) {
        do {
          func_0x0001087dd52c();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087dd75c();
      func_0x0001087dd710();
      func_0x0001087dd5c4();
    }
    FUN_1087dc6d4(auStack_410);
    puVar2 = puVar1;
    unaff_x19 = param_1;
  }
  func_0x0001087dd514();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001087dd590();
    FUN_1087dc6d4(auStack_410);
    func_0x0001087dd68c();
    func_0x0001087dd60c();
    func_0x0001087dd740();
    func_0x0001087dd738();
    puVar2 = unaff_x19;
    func_0x0001005528ec();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return unaff_x19;
  }
  return puVar2;
}



/* Entry: 1087dc6d4; end: 1087dc6f7;  */

long FUN_1087dc6d4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001087dd60c();
  func_0x0001087dd740();
  func_0x0001087dd738();
  lVar1 = unaff_x19;
  func_0x0001005528ec();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087dc6f8; end: 1087dcb73;  */

void FUN_1087dc6f8(undefined8 param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  uint uVar16;
  long *plVar17;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  float fStack_90;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  long *plStack_78;
  long **pplStack_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_2 + 0x30) != *(long *)(param_2 + 0x38)) {
    FUN_108798700();
    uStack_80 = (undefined4)param_3;
    uStack_7c = (undefined1)(param_3 >> 0x20);
    if (param_3 >> 0x20 != 0) {
      lVar5 = param_2;
      FUN_1087a256c();
      bVar4 = *(char *)(param_2 + 0x950) == '\0';
      plVar1 = (long *)(param_2 + 0x938);
      if (bVar4) {
        plVar1 = (long *)&UNK_10df561c8;
      }
      plVar10 = (long *)(param_2 + 0x9c0);
      if (bVar4) {
        plVar10 = (long *)&UNK_10df561e0;
      }
      plStack_a8 = (long *)0x0;
      lStack_b0 = 0;
      lStack_98 = 0;
      plStack_a0 = (long *)0x0;
      fStack_90 = 1.0;
      func_0x0001087dd224(&lStack_b0,(long)(float)(ulong)((plVar10[1] - *plVar10) / 0x48));
      plVar2 = (long *)plVar10[1];
      for (plVar13 = (long *)*plVar10; plVar13 != plVar2; plVar13 = plVar13 + 9) {
        plVar9 = plVar13;
        FUN_108848654();
        plVar17 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          puVar15 = (undefined *)((long)plStack_a8 + -1);
          uVar16 = (uint)plStack_a8;
          if (((ulong)plStack_a8 & (ulong)puVar15) == 0) {
            plVar10 = (long *)((ulong)(uVar16 - 1) & (ulong)plVar9);
          }
          else {
            plVar10 = plVar9;
            if (plStack_a8 <= plVar9) {
              uVar3 = 0;
              if (uVar16 != 0) {
                uVar3 = (uint)plVar9 / uVar16;
              }
              plVar10 = (long *)(ulong)((uint)plVar9 - uVar3 * uVar16);
            }
          }
          plVar12 = *(long **)(lStack_b0 + (long)plVar10 * 8);
          if (plVar12 != (long *)0x0) {
            do {
              while( true ) {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_1087dc860;
                plVar6 = (long *)plVar12[1];
                if (plVar6 != plVar9) break;
                uVar7 = (ulong)(plVar12 + 2);
                func_0x000107c28078(uVar7,plVar13);
                if ((uVar7 & 1) != 0) goto LAB_1087dc990;
              }
              if (((ulong)plVar17 & (ulong)puVar15) == 0) {
                plVar6 = (long *)((ulong)plVar6 & (ulong)puVar15);
              }
              else if (plVar17 <= plVar6) {
                uVar7 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar7 = (ulong)plVar6 / (ulong)plVar17;
                }
                plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar17);
              }
            } while (plVar6 == plVar10);
          }
        }
LAB_1087dc860:
        plVar12 = (long *)0x30;
        __Znwm();
        uStack_68 = 0;
        *plVar12 = 0;
        plVar12[1] = (long)plVar9;
        plStack_78 = plVar12;
        pplStack_70 = &plStack_a0;
        func_0x000107c27994(plVar12 + 2,plVar13);
        plVar12[5] = (long)(plVar13 + 6);
        uStack_68 = CONCAT71(uStack_68._1_7_,1);
        if ((plVar17 == (long *)0x0) || (fStack_90 * (float)plVar17 < (float)(lStack_98 + 1))) {
          uVar7 = 1;
          if ((long *)0x2 < plVar17) {
            uVar7 = (ulong)(((ulong)plVar17 & (ulong)((long)plVar17 + -1)) != 0);
          }
          uVar7 = uVar7 | (long)plVar17 << 1;
          uVar8 = (ulong)((float)(lStack_98 + 1) / fStack_90);
          if (uVar7 <= uVar8) {
            uVar7 = uVar8;
          }
          func_0x0001087dd224(&lStack_b0,uVar7);
          plVar17 = plStack_a8;
          if (((ulong)plStack_a8 & (ulong)((long)plStack_a8 + -1)) == 0) {
            plVar10 = (long *)((ulong)((int)plStack_a8 - 1) & (ulong)plVar9);
          }
          else {
            plVar10 = plVar9;
            if (plStack_a8 <= plVar9) {
              uVar7 = 0;
              if (plStack_a8 != (long *)0x0) {
                uVar7 = (ulong)plVar9 / (ulong)plStack_a8;
              }
              plVar10 = (long *)((long)plVar9 - uVar7 * (long)plStack_a8);
            }
          }
        }
        plVar9 = *(long **)(lStack_b0 + (long)plVar10 * 8);
        if (plVar9 == (long *)0x0) {
          *plVar12 = (long)plStack_a0;
          *(long ***)(lStack_b0 + (long)plVar10 * 8) = &plStack_a0;
          plStack_a0 = plVar12;
          if (*plVar12 != 0) {
            plVar9 = *(long **)(*plVar12 + 8);
            if (((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0) {
              plVar9 = (long *)((ulong)plVar9 & (ulong)((long)plVar17 + -1));
            }
            else if (plVar17 <= plVar9) {
              uVar7 = 0;
              if (plVar17 != (long *)0x0) {
                uVar7 = (ulong)plVar9 / (ulong)plVar17;
              }
              plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar17);
            }
            *(long **)(lStack_b0 + (long)plVar9 * 8) = plVar12;
          }
        }
        else {
          *plVar12 = *plVar9;
          *plVar9 = (long)plVar12;
        }
        plStack_78 = (long *)0x0;
        lStack_98 = lStack_98 + 1;
        FUN_1087dd3e4(&plStack_78);
LAB_1087dc990:
      }
      plStack_78 = (long *)0x0;
      pplStack_70 = (long **)0x0;
      uStack_68 = 0;
      FUN_10863b5fc(&plStack_78,
                    (*(long *)(param_2 + 0x6d8) - *(long *)(param_2 + 0x6d0)) / 0x88 +
                    (*(long *)(param_2 + 0x98) - *(long *)(param_2 + 0x90)) / 0x58 +
                    (*(long *)(lVar5 + 0x20) - *(long *)(lVar5 + 0x18)) / 0x58);
      lVar11 = *(long *)(param_2 + 0x98);
      for (lVar14 = *(long *)(param_2 + 0x90); lVar14 != lVar11; lVar14 = lVar14 + 0x58) {
        func_0x0001087dd59c();
        FUN_1087dcb74(&plStack_78,lVar14,&uStack_80,&uStack_c8);
        func_0x0001087dd6b8();
      }
      lVar11 = *(long *)(param_2 + 0x6d8);
      for (lVar14 = *(long *)(param_2 + 0x6d0); lVar14 != lVar11; lVar14 = lVar14 + 0x88) {
        uStack_cc = 0;
        func_0x0001087dd59c();
        FUN_1087a0990(&plStack_78,lVar14,&uStack_cc,lVar14 + 0x58,&uStack_c8);
        func_0x0001087dd6b8();
      }
      lVar14 = *(long *)(lVar5 + 0x20);
      for (lVar5 = *(long *)(lVar5 + 0x18); lVar5 != lVar14; lVar5 = lVar5 + 0x58) {
        uStack_cc = 2;
        func_0x0001087dd59c();
        FUN_1087dcd08(&plStack_78,lVar5,&uStack_cc,&uStack_c8);
        func_0x0001087dd6b8();
      }
      lVar14 = plVar1[1];
      for (lVar5 = *plVar1; lVar5 != lVar14; lVar5 = lVar5 + 0x58) {
        uStack_cc = 4;
        uStack_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        FUN_1087dcd08(&plStack_78,lVar5,&uStack_cc,&uStack_c8);
        func_0x0001087dd6b8();
      }
      FUN_1087dcd94(param_1,param_2,param_2 + 0xf8,&plStack_78);
      func_0x00010863a290(&plStack_78);
      func_0x0001087dd1c8(&lStack_b0);
    }
  }
  return;
}



/* Entry: 1087dcb74; end: 1087dcbff;  */

void FUN_1087dcb74(void)

{
  undefined1 in_CY;
  long unaff_x19;
  long lVar1;
  long unaff_x24;
  undefined8 uStack_58;
  
  func_0x0001087dd694();
  if ((bool)in_CY) {
    func_0x0001087dd5e8();
    func_0x0001087dd5cc();
    func_0x0001087dd668(uStack_58);
    FUN_1087dd090();
    func_0x0001087dd748();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x0001087dd6e8();
  }
  else {
    func_0x0001087dd668();
    FUN_1087dd090();
    lVar1 = unaff_x24 + 0xb0;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 1087dcc00; end: 1087dcd07;  */

undefined8 * FUN_1087dcc00(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x19;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  puVar8 = (undefined8 *)param_2[1];
  puVar4 = param_1;
  if ((puVar8 != (undefined8 *)0x0) && (param_2[3] != 0)) {
    puVar3 = param_3;
    FUN_108848654();
    uVar9 = (long)puVar8 - 1;
    if (((ulong)puVar8 & uVar9) == 0) {
      puVar10 = (undefined8 *)((ulong)puVar3 & uVar9);
    }
    else {
      puVar10 = puVar3;
      if (puVar8 <= puVar3) {
        uVar1 = 0;
        uVar7 = (uint)puVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)puVar3 / uVar7;
        }
        puVar10 = (undefined8 *)(ulong)((uint)puVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_2 + (long)puVar10 * 8);
    puVar4 = puVar3;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1087dccc8;
          puVar5 = (undefined8 *)plVar6[1];
          if (puVar5 != puVar3) break;
          puVar4 = plVar6 + 2;
          func_0x000107c28078(puVar4,param_3);
          if ((int)puVar4 != 0) {
            func_0x000107c32144(param_1,plVar6[5]);
            func_0x000107c321c4();
            FUN_10868616c();
            return unaff_x19;
          }
        }
        if (((ulong)puVar8 & uVar9) == 0) {
          puVar5 = (undefined8 *)((ulong)puVar5 & uVar9);
        }
        else if (puVar8 <= puVar5) {
          uVar2 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar5 / (ulong)puVar8;
          }
          puVar5 = (undefined8 *)((long)puVar5 - uVar2 * (long)puVar8);
        }
      } while (puVar5 == puVar10);
    }
  }
LAB_1087dccc8:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return puVar4;
}



/* Entry: 1087dcd08; end: 1087dcd93;  */

void FUN_1087dcd08(void)

{
  undefined1 in_CY;
  long unaff_x19;
  long lVar1;
  long unaff_x24;
  undefined8 uStack_58;
  
  func_0x0001087dd694();
  if ((bool)in_CY) {
    func_0x0001087dd5e8();
    func_0x0001087dd5cc();
    func_0x0001087dd668(uStack_58);
    func_0x0001087dd0d0();
    func_0x0001087dd748();
    lVar1 = *(long *)(unaff_x19 + 8);
    func_0x0001087dd6e8();
  }
  else {
    func_0x0001087dd668();
    func_0x0001087dd0d0();
    lVar1 = unaff_x24 + 0xb0;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 1087dcd94; end: 1087dcf67;  */

void FUN_1087dcd94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  int extraout_w10;
  int extraout_w10_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x30;
  undefined8 in_stack_00000050;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined4 uStack_454;
  long lStack_450;
  undefined1 *puStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 *puStack_430;
  undefined1 *puStack_428;
  undefined8 *puStack_420;
  code *pcStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [904];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  code *pcStack_40;
  undefined **ppuStack_38;
  undefined8 *puStack_30;
  undefined1 *puStack_10;
  undefined8 uStack_8;
  
  func_0x0001087dd768();
  puVar3 = &uStack_410;
  uStack_8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(param_1 + 0x10);
  uVar5 = param_3;
  plVar6 = param_4;
  func_0x000107c27994(&uStack_410);
  puVar1 = auStack_3f8;
  FUN_108685044(puVar1,param_3);
  lStack_68 = param_4[1];
  lStack_70 = *param_4;
  lStack_60 = param_4[2];
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  lStack_50 = *(long *)(param_1 + 0x28);
  if (lStack_50 != 0) {
    do {
      func_0x0001087dd52c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar8 = *(long *)(lVar9 + 0x10);
  __ZNSt3__15mutex4lockEv(lVar8 + 8);
  lVar10 = *(long *)(lVar8 + 0x70);
  pcStack_40 = FUN_1087dd42c;
  ppuStack_38 = &PTR_FUN_110a71fc0;
  puVar2 = (undefined8 *)0x3c8;
  __Znwm();
  puVar2[1] = uStack_408;
  *puVar2 = uStack_410;
  puVar2[2] = uStack_400;
  uStack_408 = 0;
  uStack_400 = 0;
  uStack_410 = 0;
  FUN_108639eb0(puVar2 + 3,auStack_3f8);
  puVar2[0x75] = lStack_68;
  puVar2[0x74] = lStack_70;
  puVar2[0x76] = lStack_60;
  lStack_68 = 0;
  lStack_60 = 0;
  lStack_70 = 0;
  puVar2[0x78] = lStack_50;
  puVar2[0x77] = uStack_58;
  uStack_58 = 0;
  lStack_50 = 0;
  ppcVar4 = &pcStack_40;
  puStack_30 = puVar2;
  puStack_10 = puVar1;
  func_0x000107c28154(lVar8 + 0x48,ppcVar4);
  func_0x0001087dd700();
  __ZNSt3__15mutex6unlockEv(lVar8 + 8);
  uVar7 = (undefined4)unaff_x30;
  if (lVar10 == 0) {
    ppuStack_38 = *(undefined ***)(lVar9 + 0x18);
    pcStack_40 = *(code **)(lVar9 + 0x10);
    if (*(long *)(lVar9 + 0x18) != 0) {
      do {
        func_0x0001087dd52c();
        uVar7 = (undefined4)unaff_x30;
      } while (extraout_w10_00 != 0);
    }
    func_0x0001087dd75c();
    func_0x0001087dd710();
    func_0x0001087dd5c4();
  }
  FUN_1087dd040(&uStack_410);
  func_0x0001087dd514();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001087dd590();
  FUN_1087dd040(&uStack_410);
  func_0x0001087dd68c();
  pcStack_418 = FUN_1087dcf68;
  uStack_470 = 0;
  uStack_468 = 0;
  uStack_460 = 0;
  uStack_454 = uVar7;
  lStack_450 = lVar10;
  puStack_448 = (undefined1 *)&uStack_410;
  lStack_440 = lVar9;
  lStack_438 = lVar8;
  puStack_430 = puVar2;
  puStack_428 = puVar1;
  puStack_420 = &stack0x00000050;
  FUN_10863b5fc(&uStack_470,(plVar6[1] - *plVar6) / 0x58);
  lVar8 = plVar6[1];
  for (lVar9 = *plVar6; lVar9 != lVar8; lVar9 = lVar9 + 0x58) {
    uStack_488 = 0;
    uStack_480 = 0;
    uStack_478 = 0;
    FUN_1087dcb74(&uStack_470,lVar9,&uStack_454,&uStack_488);
    FUN_10861b4fc(&uStack_488);
  }
  FUN_1087dcd94(puVar3,ppcVar4,uVar5,&uStack_470);
  func_0x00010863a290(&uStack_470);
  return;
}



/* Entry: 1087dcf68; end: 1087dd03f;  */

void FUN_1087dcf68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_44 = param_5;
  FUN_10863b5fc(&uStack_60,(param_4[1] - *param_4) / 0x58);
  lVar1 = param_4[1];
  for (lVar2 = *param_4; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    FUN_1087dcb74(&uStack_60,lVar2,&uStack_44,&uStack_78);
    FUN_10861b4fc(&uStack_78);
  }
  FUN_1087dcd94(param_1,param_2,param_3,&uStack_60);
  func_0x00010863a290(&uStack_60);
  return;
}



/* Entry: 1087dd040; end: 1087dd077;  */

long FUN_1087dd040(long param_1)

{
  long lStack_28;
  
  func_0x000107c286e8(param_1 + 0x3b8);
  func_0x00010863a290(param_1 + 0x3a0);
  func_0x000104bee3a8(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1087dd078; end: 1087dd07b;  */

undefined8 * FUN_1087dd078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71ef8;
  func_0x000107c286e8(param_1 + 4);
  func_0x000107c2814c(param_1 + 2);
  return param_1;
}



/* Entry: 1087dd07c; end: 1087dd08f;  */

void FUN_1087dd07c(void)

{
  FUN_1087dd110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087dd090; end: 1087dd10f;  */

void FUN_1087dd090(void)

{
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [88];
  
  func_0x0001087dd6c0();
  func_0x0001087dd558();
  FUN_10861b4fc(auStack_e0);
  FUN_10861b5ac(auStack_c0);
  func_0x000104bee8ec(auStack_88);
  return;
}



/* Entry: 1087dd110; end: 1087dd14f;  */

undefined8 * FUN_1087dd110(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71ef8;
  func_0x000107c286e8(param_1 + 4);
  func_0x000107c2814c(param_1 + 2);
  return param_1;
}



/* Entry: 1087dd150; end: 1087dd153;  */

void FUN_1087dd150(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001087dd510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))
            ((long *)*puVar1,puVar1 + 2,puVar1 + 5,puVar1 + 8,*(undefined4 *)(puVar1 + 0x79));
  return;
}



/* Entry: 1087dd154; end: 1087dd173;  */

void FUN_1087dd154(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087dc444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087dd174; end: 1087dd17b;  */

void FUN_1087dd174(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087dd17c; end: 1087dd19b;  */

void FUN_1087dd17c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087dc58c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087dd19c; end: 1087dd1a3;  */

void FUN_1087dd19c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087dd1a4; end: 1087dd1c3;  */

void FUN_1087dd1a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087dc6d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087dd1c4; end: 1087dd1c7;  */

void FUN_1087dd1c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087dd1c8; end: 1087dd3cb;  */

long * FUN_1087dd1c8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c27914(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087dd3cc; end: 1087dd3e3;  */

void FUN_1087dd3cc(long *param_1,long param_2)

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



/* Entry: 1087dd3e4; end: 1087dd42b;  */

long * FUN_1087dd3e4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27914(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1087dd42c; end: 1087dd447;  */

void FUN_1087dd42c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001087dd444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x3b8) + 0x18))
            (*(long **)(lVar1 + 0x3b8),lVar1,lVar1 + 0x18,lVar1 + 0x3a0);
  return;
}



/* Entry: 1087dd448; end: 1087dd467;  */

void FUN_1087dd448(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087dd040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087dd468; end: 1087dd77f;  */

void FUN_1087dd468(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087dd780; end: 1087ddadf;  */

void FUN_1087dd780(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  code *extraout_x8;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  undefined1 auStack_860 [680];
  undefined8 auStack_5b8 [82];
  byte bStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [112];
  undefined1 auStack_240 [112];
  undefined1 auStack_1d0 [112];
  long alStack_160 [13];
  byte bStack_f8;
  long alStack_f0 [13];
  byte bStack_88;
  ulong *puStack_80;
  undefined1 uStack_78;
  
  FUN_1088691f8(auStack_860,*(undefined8 *)(param_1 + 0x18));
  FUN_1086c2d80(auStack_5b8,auStack_860);
  FUN_1086d4da0(auStack_860);
  if ((bStack_328 & 1) == 0) {
    FUN_1087ddae0(*(undefined8 *)(param_1 + 0x28),*param_3,param_3[1],7);
  }
  else {
    FUN_108869464(auStack_860,*(undefined8 *)(param_1 + 0x18),auStack_5b8[0]);
    FUN_10879d4d4(auStack_240,auStack_860);
    func_0x0001087e0428(auStack_1d0,auStack_240);
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    func_0x0001087e0428(auStack_2b0,&uStack_320);
    uStack_870 = 0;
    uStack_868 = 0;
    uStack_878 = 0;
    FUN_1087e04ec(alStack_f0,auStack_1d0);
    FUN_1087e04ec(alStack_160,auStack_2b0);
    puStack_80 = &uStack_878;
    uStack_78 = 0;
    while ((((bStack_88 & 1) != 0 || ((bStack_f8 & 1) != 0)) && (alStack_f0[0] != alStack_160[0])))
    {
      plVar4 = alStack_f0;
      FUN_10879d4ec(plVar4);
      if (uStack_870 < uStack_868) {
        FUN_10879e74c(uStack_870,plVar4);
        uVar11 = uStack_870 + 0x60;
      }
      else {
        lVar8 = uStack_870 - uStack_878;
        uVar11 = lVar8 / 0x60 + 1;
        if (0x2aaaaaaaaaaaaaa < uVar11) {
          FUN_1087e04b4();
LAB_1087dda48:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1087dda4c);
          (*pcVar3)();
        }
        uVar6 = (long)(uStack_868 - uStack_878) / 0x60;
        uVar7 = uVar6 * 2;
        if (uVar7 < uVar11 || uVar7 - uVar11 == 0) {
          uVar7 = uVar11;
        }
        if (0x155555555555554 < uVar6) {
          uVar7 = 0x2aaaaaaaaaaaaaa;
        }
        if (uVar7 == 0) {
          lVar5 = 0;
        }
        else {
          if (0x2aaaaaaaaaaaaaa < uVar7) {
            func_0x000104bd35f4();
            goto LAB_1087dda48;
          }
          lVar5 = uVar7 * 0x60;
          __Znwm();
        }
        lVar8 = lVar5 + lVar8;
        FUN_10879e74c(lVar8,plVar4);
        uVar2 = uStack_870;
        uVar10 = uStack_878;
        uVar9 = lVar8 + ((long)(uStack_870 - uStack_878) / -0x60) * 0x60;
        uVar6 = uVar9;
        for (uVar11 = uStack_878; uVar11 != uVar2; uVar11 = uVar11 + 0x60) {
          FUN_10879e74c(uVar6,uVar11);
          uVar6 = uVar6 + 0x60;
        }
        for (; uVar10 != uVar2; uVar10 = uVar10 + 0x60) {
          FUN_10879dd24(uVar10);
        }
        uVar11 = lVar8 + 0x60;
        uStack_868 = lVar5 + uVar7 * 0x60;
        bVar1 = uStack_878 != 0;
        uStack_878 = uVar9;
        if (bVar1) {
          uStack_870 = uVar11;
          __ZdlPv();
        }
      }
      uStack_870 = uVar11;
      FUN_10879e8a4(alStack_f0);
    }
    uStack_78 = 1;
    FUN_1087e04c0(&puStack_80);
    func_0x0001087e0d24(alStack_160);
    func_0x0001087e0d24(alStack_f0);
    func_0x0001087e0d24(auStack_2b0);
    func_0x0001087e0f24();
    func_0x0001087e0d24(auStack_1d0);
    func_0x0001087e0d24(auStack_240);
    FUN_10879e5ec(auStack_860);
    if (uStack_878 == uStack_870) {
      FUN_1087ddae0(*(undefined8 *)(param_1 + 0x28),*param_3,param_3[1],7);
    }
    else {
      func_0x0001087e0da8(*(undefined8 *)(param_1 + 8),param_2);
      (*extraout_x8)();
    }
    FUN_1087dfca8(&uStack_878);
  }
  FUN_1086cf6a4(auStack_5b8);
  return;
}



/* Entry: 1087ddae0; end: 1087ddc1f;  */

void FUN_1087ddae0(long param_1,undefined **param_2,undefined **param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  long lVar6;
  int iVar7;
  byte bVar8;
  code *pcVar9;
  undefined1 in_ZR;
  undefined1 uVar10;
  undefined ***pppuVar11;
  char *pcVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined **ppuVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  undefined **ppuVar21;
  ulong uVar22;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  ulong uVar23;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined *unaff_x24;
  undefined1 auStack_1e50 [8];
  undefined **ppuStack_1e48;
  undefined1 auStack_1e40 [272];
  char cStack_1d30;
  undefined1 auStack_1d20 [72];
  undefined1 auStack_1cd8 [24];
  undefined4 uStack_1cc0;
  long lStack_1cb8;
  long lStack_1cb0;
  char cStack_1ca0;
  undefined1 auStack_1c98 [64];
  undefined1 auStack_1c58 [32];
  undefined8 uStack_1c38;
  undefined1 auStack_1c30 [32];
  char cStack_1c10;
  undefined1 auStack_1c08 [24];
  undefined1 auStack_1bf0 [24];
  undefined4 uStack_1bd8;
  int iStack_1bd4;
  undefined1 auStack_1bd0 [40];
  ulong uStack_1ba8;
  byte bStack_1b99;
  byte bStack_1b98;
  undefined1 auStack_1b80 [24];
  char cStack_1b68;
  undefined8 uStack_1b60;
  int iStack_1b58;
  char cStack_1b48;
  char cStack_1b40;
  undefined1 auStack_1b38 [112];
  undefined4 uStack_1ac8;
  char cStack_1ac0;
  undefined1 auStack_1ab8 [24];
  long alStack_1aa0 [8];
  undefined8 uStack_1a60;
  undefined8 uStack_1a58;
  long *plStack_1a50;
  undefined8 uStack_1a48;
  undefined4 uStack_1a40;
  undefined *puStack_1a30;
  undefined *puStack_1a28;
  undefined *puStack_1a20;
  undefined *puStack_1a10;
  undefined8 uStack_1a08;
  ulong uStack_1a00;
  undefined4 uStack_19f8;
  undefined1 auStack_19f0 [32];
  undefined8 uStack_19d0;
  undefined1 auStack_19b8 [32];
  undefined8 uStack_1998;
  byte bStack_1990;
  undefined1 auStack_1988 [24];
  undefined4 uStack_1970;
  undefined1 auStack_1968 [224];
  undefined1 auStack_1888 [32];
  undefined1 auStack_1868 [32];
  undefined1 auStack_1848 [32];
  char cStack_1828;
  undefined1 auStack_1820 [24];
  undefined4 uStack_1808;
  undefined1 auStack_1800 [24];
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  undefined1 uStack_17d8;
  undefined1 auStack_17d0 [32];
  undefined1 uStack_17b0;
  undefined1 auStack_17a8 [64];
  undefined1 auStack_1768 [32];
  undefined1 auStack_1748 [48];
  undefined1 auStack_1718 [64];
  char cStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined8 uStack_16c0;
  undefined8 uStack_16b8;
  undefined1 uStack_16b0;
  undefined1 auStack_16a8 [40];
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined8 uStack_1658;
  undefined4 uStack_1650;
  ulong uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined1 uStack_1630;
  undefined1 auStack_1628 [64];
  undefined1 uStack_15e8;
  undefined **ppuStack_15d0;
  undefined **ppuStack_15c8;
  undefined *puStack_15c0;
  undefined *puStack_15b8;
  undefined *puStack_15b0;
  ulong uStack_15a8;
  undefined8 uStack_1590;
  undefined1 auStack_1578 [32];
  undefined8 uStack_1558;
  byte bStack_1550;
  undefined1 auStack_1548 [24];
  undefined4 uStack_1530;
  undefined1 auStack_1528 [40];
  byte bStack_1500;
  byte bStack_14b8;
  undefined1 auStack_1448 [32];
  undefined1 auStack_1428 [32];
  undefined1 auStack_1408 [32];
  char cStack_13e8;
  undefined1 auStack_13e0 [24];
  undefined4 uStack_13c8;
  undefined1 auStack_13c0 [24];
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined1 uStack_1398;
  undefined1 auStack_1390 [32];
  undefined1 uStack_1370;
  undefined1 auStack_1368 [64];
  undefined1 auStack_1328 [32];
  undefined1 auStack_1308 [48];
  undefined1 auStack_12d8 [64];
  char cStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined1 uStack_1270;
  undefined1 auStack_1268 [32];
  char cStack_1248;
  ulong uStack_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  char cStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined4 uStack_11b0;
  ulong uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  char cStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined **ppuStack_1170;
  undefined **ppuStack_1168;
  long lStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined1 auStack_1140 [24];
  undefined1 auStack_1128 [24];
  char cStack_1110;
  undefined1 auStack_1108 [32];
  undefined1 uStack_10e8;
  undefined1 uStack_10d0;
  undefined1 auStack_10c8 [40];
  undefined1 uStack_10a0;
  undefined1 auStack_1098 [24];
  undefined1 uStack_1080;
  undefined1 auStack_1078 [56];
  undefined1 uStack_1040;
  undefined1 auStack_1038 [24];
  undefined1 uStack_1020;
  undefined1 auStack_1018 [24];
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined1 auStack_fe0 [352];
  undefined1 uStack_e80;
  undefined1 auStack_e78 [32];
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined1 auStack_e38 [200];
  undefined1 uStack_d70;
  undefined1 auStack_c68 [24];
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined **ppuStack_c30;
  undefined **ppuStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined4 uStack_c10;
  long *plStack_c00;
  char cStack_ba8;
  char cStack_b58;
  undefined8 uStack_758;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined1 auStack_6c8 [24];
  undefined1 auStack_6b0 [64];
  long lStack_670;
  long lStack_668;
  long lStack_658;
  long lStack_650;
  long lStack_640;
  long lStack_638;
  long lStack_628;
  long lStack_620;
  long alStack_3c8 [14];
  undefined1 auStack_358 [24];
  int iStack_340;
  byte bStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined4 uStack_60;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = param_1;
  ppuVar18 = param_3;
  if (param_3 != (undefined **)0x0) {
    do {
      func_0x0001087e0c48();
    } while (extraout_w10 != 0);
  }
  uVar19 = SUB84(param_4,0);
  func_0x000107c28150();
  lVar25 = *(long *)(param_1 + 0x10);
  __ZNSt3__15mutex4lockEv(lVar25 + 8);
  lVar26 = *(long *)(lVar25 + 0x70);
  ppuStack_80 = (undefined **)0x1087e0c00;
  ppuStack_78 = &PTR_DAT_110a720d0;
  ppuStack_70 = param_2;
  ppuStack_68 = param_3;
  uStack_60 = uVar19;
  lStack_50 = lVar24;
  func_0x000107c28154(lVar25 + 0x48,&ppuStack_80);
  func_0x0001087e0c24(ppuStack_78);
  __ZNSt3__15mutex6unlockEv();
  if (lVar26 == 0) {
    param_3 = *(undefined ***)(param_1 + 0x18);
    param_2 = *(undefined ***)(param_1 + 0x10);
    ppuStack_80 = param_2;
    ppuStack_78 = param_3;
    if (*(long *)(param_1 + 0x18) != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001087e0da8();
    (*extraout_x8)();
    func_0x000107c27e74();
  }
  func_0x0001087e0d38();
  func_0x0001087e0c64(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pppuVar11 = &ppuStack_80;
  func_0x000107c27e74();
  func_0x0001087e0d38();
  func_0x0001087e0de8();
  func_0x0001087e0d70();
  uStack_f8 = extraout_x8_00;
  FUN_1088691f8(&lStack_670,pppuVar11[3]);
  FUN_1086c2d80(alStack_3c8,&lStack_670);
  FUN_1086d4da0(&lStack_670);
  if ((bStack_138 & 1) == 0) {
    uVar20 = 7;
LAB_1087ddc8c:
    pppuVar11 = (undefined ***)*param_4;
    ppuVar18 = (undefined **)param_4[1];
    FUN_1087ddae0(*(undefined8 *)(lVar24 + 0x28),pppuVar11,ppuVar18,uVar20);
  }
  else {
    if (iStack_340 == 1) {
      uVar20 = 4;
      in_ZR = 1;
      goto LAB_1087ddc8c;
    }
    lVar26 = *(long *)(*(long *)(lVar24 + 0x18) + 0x18);
    func_0x000107c278b8(auStack_6c8,&UNK_10f4bb92e);
    func_0x0001087e0e40();
    func_0x0001087e0e30();
    FUN_108868f84(*(undefined8 *)(lVar24 + 0x18),alStack_3c8[0]);
    uVar20 = *(undefined8 *)(lVar24 + 0x18);
    FUN_10879d0a0(&lStack_670,uVar20,alStack_3c8[0]);
    in_ZR = 0;
    if ((((lStack_658 == lStack_650) && (in_ZR = 0, lStack_670 == lStack_668)) &&
        (in_ZR = 0, lStack_640 == lStack_638)) && (in_ZR = lStack_628 == lStack_620, (bool)in_ZR)) {
      FUN_108869b70(*(undefined8 *)(lVar24 + 0x18),alStack_3c8[0]);
      uVar20 = *(undefined8 *)(lVar24 + 0x18);
      FUN_1088606d0(uVar20,auStack_358);
    }
    func_0x0001087e0fb8();
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    lVar25 = *(long *)(lVar26 + 0x10);
    func_0x0001087e0ed0();
    unaff_x24 = *(undefined **)(lVar25 + 0x70);
    ppuStack_130 = (undefined **)FUN_1087e05a0;
    ppuStack_128 = &PTR_DAT_110a72040;
    param_2 = ppuStack_6e0;
    param_3 = ppuStack_6d8;
    if (ppuStack_6d8 != (undefined **)0x0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_02 != 0);
    }
    pppuVar11 = &ppuStack_130;
    uStack_100 = uVar20;
    func_0x000107c28154(lVar25 + 0x48);
    func_0x0001087e0cb8(ppuStack_128);
    func_0x0001087e0d4c();
    if (unaff_x24 == (undefined *)0x0) {
      param_3 = *(undefined ***)(lVar26 + 0x18);
      param_2 = *(undefined ***)(lVar26 + 0x10);
      ppuStack_130 = param_2;
      ppuStack_128 = param_3;
      if (*(long *)(lVar26 + 0x18) != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001087e0da8();
      pppuVar11 = &ppuStack_130;
      (*extraout_x8_02)();
      func_0x000107c27e74(&ppuStack_130);
    }
    func_0x0001087e0d38();
    func_0x000107c31428(auStack_6b0);
    func_0x000104bee768(&lStack_670);
    func_0x0001087e0e38();
  }
  FUN_1086cf6a4(alStack_3c8);
  while( true ) {
    func_0x0001087e0c64(uStack_f8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001087e0c3c();
    func_0x000107c27e74(&ppuStack_130);
    func_0x0001087e0d38();
    func_0x000104bee768(&lStack_670);
    func_0x0001087e0e38();
    plVar16 = alStack_3c8;
    FUN_1086cf6a4();
    in_ZR = (int)lVar26 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001087e0eb4();
    func_0x000108848514();
    pppuVar11 = (undefined ***)*param_4;
    ppuVar18 = (undefined **)param_4[1];
    FUN_1087ddae0(*(undefined8 *)(lVar24 + 0x28),pppuVar11,ppuVar18,plVar16);
    ___cxa_end_catch();
  }
  func_0x0001087e0df8();
  func_0x0001087e0eac();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001087e0d70();
  uStack_758 = extraout_x8_03;
  uVar10 = *pppuVar11 == pppuVar11[1];
  if ((bool)uVar10) {
    func_0x0001087e0e60();
    ppuStack_15d0 = param_2;
    ppuStack_15c8 = param_3;
    if (extraout_x8_06 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_06 != 0);
    }
    func_0x000107c28150();
    lVar25 = *(long *)(lVar24 + 0x10);
    func_0x0001087e0ed8();
    lVar24 = *(long *)(lVar25 + 0x70);
    ppuStack_c30 = (undefined **)FUN_1087e05dc;
    ppuStack_c28 = &PTR_FUN_110a72058;
    ppuStack_c18 = ppuStack_15c8;
    ppuStack_c20 = ppuStack_15d0;
    ppuVar18 = ppuStack_15d0;
    ppuVar27 = ppuStack_15c8;
    if (ppuStack_15c8 != (undefined **)0x0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_07 != 0);
    }
    plStack_c00 = plVar16;
    func_0x0001087e0d2c(lVar25 + 0x48);
    func_0x000107c28154();
    func_0x0001087e0c24(ppuStack_c28);
    func_0x0001087e0d54();
    if (lVar24 == 0) {
      func_0x0001087e0e50();
      ppuStack_c30 = ppuVar18;
      ppuStack_c28 = ppuVar27;
      if (extraout_x8_07 != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_08 != 0);
      }
      func_0x0001087e0da8();
      func_0x0001087e0d2c();
      (*extraout_x8_08)();
      func_0x0001087e0c30();
    }
    FUN_10863fd4c(&ppuStack_15d0);
  }
  else {
    puStack_1a28 = (undefined *)0x0;
    puStack_1a30 = (undefined *)0x0;
    puStack_1a20 = (undefined *)0x0;
    uVar22 = ((long)pppuVar11[1] - (long)*pppuVar11) / 0x58;
    func_0x0001087e0f3c();
    if (extraout_x8_04 <= uVar22) goto LAB_1087df09c;
    FUN_1087dfe04(&ppuStack_15d0);
    func_0x0001087e0d40();
    func_0x0001087e0e10();
    uStack_1a48 = 0;
    plStack_1a50 = (long *)0x0;
    uStack_1a58 = 0;
    uStack_1a60 = 0;
    uStack_1a40 = 0x3f800000;
    pcVar12 = (char *)(lVar24 + 0x48);
    func_0x000107c289e8();
    cVar3 = *pcVar12;
    uVar20 = *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x18);
    func_0x000107c278b8(auStack_1ab8,&UNK_10f4bb943);
    func_0x000107c31420(alStack_1aa0,uVar20,auStack_1ab8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1ab8);
    lVar25 = 0;
    ppuVar1 = pppuVar11[1];
    for (ppuVar27 = *pppuVar11; ppuVar27 != ppuVar1; ppuVar27 = ppuVar27 + 0xb) {
      if (*(char *)(ppuVar27 + 10) == '\x01') {
        if (*(char *)((long)ppuVar27 + 0x4f) < '\0') {
          if (ppuVar27[8] == (undefined *)0x0) goto LAB_1087de0a4;
        }
        else if (*(char *)((long)ppuVar27 + 0x4f) == '\0') goto LAB_1087de0a4;
        func_0x0001087e0fcc(*(undefined8 *)(lVar24 + 0x18));
        FUN_108869508();
        ppuStack_15d0 = (undefined **)0x0;
        ppuStack_15c8 = (undefined **)((ulong)ppuStack_15c8 & 0xffffffffffffff00);
        bStack_1550 = 0;
        if (cStack_ba8 == '\0') {
          unaff_x24 = (undefined *)0x0;
        }
        else {
          func_0x0001087e0fa4();
          func_0x0001087e0780();
          func_0x0001087e075c(unaff_x24 + 0x10);
          unaff_x24 = (undefined *)(ulong)bStack_1550;
        }
        func_0x0001087e0f7c(ppuStack_15d0);
        _bzero();
        if (((ulong)unaff_x24 & 1) == 0) {
          func_0x0001087e0334(&uStack_1a08);
          cStack_1ac0 = '\0';
          auStack_1b38[0] = 0;
        }
        else {
          func_0x0001087e0334(&uStack_1a08);
          if ((bStack_1550 & 1) == 0) {
            unaff_x24 = ppuStack_15d0[1];
            func_0x0001087e0d18();
            func_0x0001087e0e18();
            func_0x0001087e0f70(&puStack_1a10);
            func_0x0001087e0d5c();
            func_0x0001087e0c9c();
            func_0x0001087e0d68();
            func_0x0001087e0cac();
          }
          FUN_1087e079c(auStack_1b38,&ppuStack_15c8);
          cStack_1ac0 = '\x01';
        }
        pppuVar11 = &ppuStack_15c8;
        func_0x0001087e0334();
        func_0x0001087e0c78();
        FUN_1087e06a8();
        auStack_1c08[0] = 0;
        cStack_1b40 = '\0';
        if (cVar3 != '\0') {
          func_0x0001087e0fcc(*(undefined8 *)(lVar24 + 0x18));
          FUN_108869674();
          ppuStack_15d0 = (undefined **)0x0;
          ppuStack_15c8 = (undefined **)((ulong)ppuStack_15c8 & 0xffffffffffffff00);
          bStack_1500 = 0;
          if (cStack_b58 == '\0') {
            unaff_x24 = (undefined *)0x0;
          }
          else {
            func_0x0001087e0fa4();
            func_0x0001087e0150();
            func_0x0001087e012c(unaff_x24 + 0x10);
            unaff_x24 = (undefined *)(ulong)bStack_1500;
          }
          func_0x0001087e0f7c(ppuStack_15d0);
          _bzero();
          if (((ulong)unaff_x24 & 1) == 0) {
            FUN_1087e01f4(&uStack_1a08);
            uStack_d70 = 0;
            auStack_e38[0] = 0;
          }
          else {
            FUN_1087e01f4(&uStack_1a08);
            if ((bStack_1500 & 1) == 0) {
              unaff_x24 = ppuStack_15d0[1];
              func_0x0001087e0e18(auStack_fe0);
              func_0x0001087e0d5c(&puStack_1a10);
              func_0x0001087e0c9c();
              func_0x0001087e0d68();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_fe0);
            }
            func_0x0001087e0d18();
            FUN_1087e016c();
            uStack_d70 = 1;
          }
          FUN_1087e01f4(&ppuStack_15c8);
          pppuVar11 = (undefined ***)auStack_1c08;
          func_0x0001087e0f70();
          FUN_1087e0070();
          func_0x0001087e0d18();
          FUN_1087e01f4();
          func_0x0001087e0c78();
          FUN_1087e0848();
        }
        if (cStack_1ac0 == '\x01') {
          uVar19 = 0x8b02ab;
          if (cStack_1b40 == '\0') {
            uVar19 = 0x8b02a9;
          }
          ppuStack_c30 = (undefined **)CONCAT44(ppuStack_c30._4_4_,uVar19);
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          switch(uStack_1ac8) {
          case 1:
            uVar23 = 0x100000000;
            uVar22 = 1;
            break;
          case 2:
          case 4:
            puStack_1a10 = (undefined *)0x4;
            uStack_1a08 = (undefined *)((ulong)uStack_1a08._4_4_ << 0x20);
            func_0x000107c29794();
            ppuStack_c28 = (undefined **)0x0;
            ppuStack_c20 = (undefined **)0x0;
            ppuStack_c18 = (undefined **)0x0;
            ppuStack_c30 = &PTR_FUN_110a609a8;
            uStack_c10 = 0x2dd;
            pppuVar13 = pppuVar11;
            func_0x0001087e0ebc();
            func_0x0001087e0c78();
            func_0x0001087e0e98();
            func_0x0001087e0de0();
            (**(code **)(**pppuVar11 + 8))(*pppuVar11,pppuVar13,1);
            func_0x0001087e0c58();
            goto code_r0x0001087de5c4;
          case 3:
            uVar22 = 0;
            uVar23 = 0x300000000;
            break;
          case 5:
            uVar22 = 0;
            uVar23 = 0x400000000;
            break;
          default:
            uVar22 = 0;
            uVar23 = 0;
          }
          puStack_1a10 = (undefined *)(uVar23 | uVar22);
          uStack_1a08 = (undefined *)CONCAT44(uStack_1a08._4_4_,1);
code_r0x0001087de5c4:
          puVar14 = puStack_1a28;
          if (puStack_1a28 < puStack_1a20) {
            func_0x0001087e0f5c();
            FUN_1087e0214(puVar14,ppuVar27);
            unaff_x24 = puVar14 + 0x4d0;
            puStack_1a28 = unaff_x24;
          }
          else {
            func_0x0001087e0ea0(((long)puStack_1a28 - (long)puStack_1a30) / 0x4d0);
            func_0x0001087e0e00();
            puVar14 = puStack_15c0;
            func_0x0001087e0f5c();
            FUN_1087e0214();
            puStack_15c0 = (undefined *)((long)puVar14 + 0x4d0);
            func_0x0001087e0d40();
            unaff_x24 = puStack_1a28;
            func_0x0001087e0e10();
            puStack_1a28 = unaff_x24;
          }
        }
        else if (cStack_1b40 == '\x01') {
          ppuStack_c30 = (undefined **)CONCAT44(ppuStack_c30._4_4_,0x8b02aa);
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          FUN_1088695c4(auStack_1e50,*(undefined8 *)(lVar24 + 0x18),ppuVar27 + 7,ppuVar27);
          ppuStack_15d0 = (undefined **)0x0;
          ppuStack_15c8 = (undefined **)((ulong)ppuStack_15c8 & 0xffffffffffffff00);
          bStack_14b8 = 0;
          if (cStack_1d30 == '\0') {
            ppuVar21 = (undefined **)0x0;
          }
          else {
            func_0x0001087e0a1c(&ppuStack_15c8,auStack_1e40);
            func_0x0001087e09f8(auStack_1e40);
            ppuVar21 = ppuStack_15d0;
          }
          bVar8 = bStack_14b8;
          ppuVar5 = ppuStack_1e48;
          ppuStack_15d0 = ppuStack_1e48;
          ppuStack_1e48 = ppuVar21;
          _bzero(&puStack_1a10,0x120);
          if ((bVar8 & 1) == 0) {
            func_0x0001087e0314(&uStack_1a08);
LAB_1087de43c:
            cStack_1c10 = '\0';
            auStack_1d20[0] = 0;
          }
          else {
            func_0x0001087e0314(&uStack_1a08);
            if (ppuVar5 == (undefined **)0x0) goto LAB_1087de43c;
            if ((bStack_14b8 & 1) == 0) {
              func_0x0001087e0d18();
              func_0x0001087e0e18();
              func_0x0001087e0f70(&puStack_1a10);
              func_0x0001087e0d5c();
              func_0x0001087e0c9c();
              func_0x0001087e0d68();
              func_0x0001087e0cac();
            }
            FUN_1087e0a38(auStack_1d20,&ppuStack_15c8);
            cStack_1c10 = '\x01';
          }
          func_0x0001087e0314(&ppuStack_15c8);
          auStack_1140[0] = 0;
          cStack_1110 = '\0';
          if ((iStack_1bd4 == 0) && ((bStack_1b98 & 1) != 0)) {
            uVar22 = uStack_1ba8;
            if (-1 < (char)bStack_1b99) {
              uVar22 = (ulong)bStack_1b99;
            }
            if (uVar22 != 0) {
              uStack_1a08 = (undefined *)0x0;
              puStack_1a10 = (undefined *)0x0;
              uStack_1a00 = 0;
              uStack_1148 = 0;
              uStack_1158 = 0;
              uStack_1150 = 0;
              func_0x000107c27a50(&uStack_1158);
              if (cStack_1b48 == '\x01') {
                ppuStack_15c8 = (undefined **)0x0;
                ppuStack_15d0 = &PTR_FUN_110a92130;
                puStack_15b8 = (undefined *)0x0;
                puStack_15b0 = (undefined *)0x0;
                puStack_15c0 = (undefined *)0x0;
                uStack_15a8 = uStack_15a8 & 0xffffffff00000000;
                pppuVar11 = &ppuStack_15d0;
                func_0x000107c3034c(pppuVar11,uStack_1b60,iStack_1b58 - (int)uStack_1b60);
                if ((int)pppuVar11 != 0) {
                  FUN_108845754(auStack_e38,&ppuStack_15d0);
                  func_0x0001087e0f70(&puStack_1a10);
                  FUN_1086f17d4();
                  func_0x0001087e0d18();
                  func_0x000107c27a50();
                }
                func_0x000107c2a4cc(&ppuStack_15d0);
              }
              func_0x0001087e0e18(auStack_1c08,&ppuStack_1170);
              puStack_15c0 = (undefined *)lStack_1160;
              uStack_15a8 = uStack_1a00;
              puStack_15b0 = uStack_1a08;
              puStack_15b8 = puStack_1a10;
              uStack_1a00 = 0;
              puStack_1a10 = (undefined *)0x0;
              uStack_1a08 = (undefined *)0x0;
              ppuStack_15c8 = ppuStack_1168;
              ppuStack_15d0 = ppuStack_1170;
              ppuStack_1168 = (undefined **)0x0;
              ppuStack_1170 = (undefined **)0x0;
              lStack_1160 = 0;
              uStack_1178 = 0;
              uStack_1188 = 0;
              uStack_1180 = 0;
              if (cStack_1110 == '\x01') {
                func_0x000107c27b9c(auStack_1140,&ppuStack_15d0);
                FUN_1086f17d4(auStack_1128,&puStack_15b8);
              }
              else {
                FUN_10861b4a4(auStack_1140,&ppuStack_15d0);
              }
              FUN_10861b5cc(&ppuStack_15d0);
              func_0x000107c27a50(&uStack_1188);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_1170);
              func_0x000107c27a50(&puStack_1a10);
            }
          }
          func_0x000107c27994(&uStack_1200,auStack_1bf0);
          ppuStack_15c8 = (undefined **)0x0;
          ppuStack_15d0 = (undefined **)0x0;
          puStack_15c0 = (undefined *)0x0;
          if (cStack_1b68 == '\x01') {
            func_0x000107c27994(&uStack_1220,auStack_1b80);
          }
          else {
            uStack_1218 = 0;
            uStack_1220 = 0;
            uStack_1210 = 0;
            puStack_15c0 = (undefined *)0x0;
            ppuStack_15d0 = (undefined **)0x0;
            ppuStack_15c8 = (undefined **)0x0;
          }
          uVar19 = uStack_1bd8;
          func_0x000107c27f70(&uStack_1240,auStack_1c08);
          uStack_11d0 = uStack_11f0;
          uStack_11d8 = uStack_11f8;
          uStack_11e0 = uStack_1200;
          uStack_11f0 = 0;
          uStack_11f8 = 0;
          uStack_1200 = 0;
          uStack_11c0 = uStack_1218;
          uStack_11c8 = uStack_1220;
          uStack_11b8 = uStack_1210;
          uStack_1220 = 0;
          uStack_1218 = 0;
          uStack_1210 = 0;
          uStack_11b0 = uVar19;
          uStack_11a8 = uStack_11a8 & 0xffffffffffffff00;
          cStack_1190 = cStack_1228 == '\x01';
          if ((bool)cStack_1190) {
            uStack_11a0 = uStack_1238;
            uStack_11a8 = uStack_1240;
            uStack_1198 = uStack_1230;
            uStack_1230 = 0;
            uStack_1240 = 0;
            uStack_1238 = 0;
          }
          func_0x000107c279a4(&uStack_1240);
          func_0x000107c27914(&uStack_1220);
          func_0x000107c27914(&ppuStack_15d0);
          func_0x000107c27914(&uStack_1200);
          ppuStack_15d0 = (undefined **)((ulong)ppuStack_15d0 & 0xffffffffffffff00);
          cStack_1248 = '\0';
          if (cStack_1c10 == '\x01') {
            uStack_c48 = 0;
            uStack_c50 = 0;
            uStack_c40 = 0;
            if (cStack_1ca0 == '\x01') {
              func_0x00010528d190(&uStack_c50,(lStack_1cb0 - lStack_1cb8) / 0x18);
              lVar6 = lStack_1cb0;
              for (lVar26 = lStack_1cb8; lVar26 != lVar6; lVar26 = lVar26 + 0x18) {
                FUN_1086c2e14(&uStack_c50,lVar26);
              }
            }
            func_0x000107c27994(auStack_c68,auStack_1cd8);
            uVar19 = uStack_1cc0;
            func_0x0001087e0e80();
            func_0x000104be0ccc();
            func_0x000107c279d4(auStack_e78,auStack_1c58);
            auStack_fe0[0] = 0;
            uStack_e80 = 0;
            func_0x0001087e0d18(uStack_1c38);
            func_0x00010529669c();
            uStack_ff8 = uStack_c48;
            uStack_1000 = uStack_c50;
            uStack_ff0 = uStack_c40;
            uStack_c40 = 0;
            uStack_c48 = 0;
            uStack_c50 = 0;
            FUN_10867be90(auStack_1018,auStack_1c98);
            auStack_1038[0] = 0;
            uStack_1020 = 0;
            auStack_1078[0] = 0;
            uStack_1040 = 0;
            auStack_1098[0] = 0;
            uStack_1080 = 0;
            auStack_10c8[0] = 0;
            uStack_10a0 = 0;
            auStack_1628[0] = 0;
            uStack_15e8 = 0;
            uStack_10e8 = 0;
            uStack_10d0 = 0;
            func_0x000104be0ccc(auStack_1108,auStack_1c30);
            func_0x00010528ce14(&puStack_1a10,auStack_c68,uVar19,auStack_e38,&uStack_1000,0,
                                auStack_1018,0,0,0,auStack_1038,0);
            func_0x000107c279c4(auStack_1108);
            func_0x000104bee410(auStack_1628);
            func_0x000107c27a1c(auStack_10c8);
            func_0x000107c27a40(auStack_1098);
            func_0x000107c27a2c(auStack_1078);
            func_0x000107c279c4(auStack_1038);
            func_0x000104bee630(auStack_1018);
            func_0x000104be1594(&uStack_1000);
            func_0x0001087e0d18();
            func_0x000104bee6b8();
            func_0x000104bee6e8(auStack_fe0);
            func_0x0001087e0ef8();
            func_0x0001087e0e80();
            func_0x000107c279c4();
            func_0x0001087e0eec();
            func_0x0001087e0f04();
            if (cStack_1248 == '\x01') {
              func_0x000107c3194c(&ppuStack_15d0,&puStack_1a10);
              puStack_15b8 = (undefined *)CONCAT44(puStack_15b8._4_4_,uStack_19f8);
              func_0x0001052b2b60(&puStack_15b0,auStack_19f0);
              uStack_1590 = uStack_19d0;
              func_0x000107c28908(auStack_1578,auStack_19b8);
              uStack_1558 = uStack_1998;
              bStack_1550 = bStack_1990;
              if (cStack_13e8 == cStack_1828) {
                if (cStack_13e8 != '\0') {
                  func_0x000107c27b9c(auStack_1548,auStack_1988);
                  uStack_1530 = uStack_1970;
                  FUN_10869d160(auStack_1528,auStack_1968);
                  func_0x000107c27c54(auStack_1448,auStack_1888);
                  FUN_10866a140(auStack_1428,auStack_1868);
                  FUN_10866a140(auStack_1408,auStack_1848);
                }
              }
              else if (cStack_13e8 == '\0') {
                func_0x00010528cffc(auStack_1548,auStack_1988);
              }
              else {
                FUN_1087c40d4(auStack_1548);
              }
              FUN_10869e39c(auStack_13e0,auStack_1820);
              uStack_13c8 = uStack_1808;
              FUN_10865f9c0(auStack_13c0,auStack_1800);
              uStack_13a0 = uStack_17e0;
              uStack_13a8 = uStack_17e8;
              uStack_1398 = uStack_17d8;
              func_0x0001052b2b60(auStack_1390,auStack_17d0);
              uStack_1370 = uStack_17b0;
              FUN_10869e800(auStack_1368,auStack_17a8);
              FUN_10869e26c(auStack_1328,auStack_1768);
              func_0x000107c28ea8(auStack_1308,auStack_1748);
              if (cStack_1298 == cStack_16d8) {
                if (cStack_1298 != '\0') {
                  func_0x000108794768(auStack_12d8,auStack_1718);
                }
              }
              else if (cStack_1298 == '\0') {
                func_0x00010528d148(auStack_12d8,auStack_1718);
              }
              else {
                FUN_1087c4174(auStack_12d8);
              }
              uStack_1288 = uStack_16c8;
              uStack_1290 = uStack_16d0;
              uStack_1278 = uStack_16b8;
              uStack_1280 = uStack_16c0;
              uStack_1270 = uStack_16b0;
              func_0x0001052b2b60(auStack_1268,auStack_16a8);
            }
            else {
              func_0x00010863f76c(&ppuStack_15d0,&puStack_1a10);
            }
            func_0x000104bee3a8(&puStack_1a10);
          }
          FUN_108685a78(auStack_1628,ppuVar27);
          uStack_1670 = uStack_11d0;
          iVar7 = iStack_1bd4;
          uStack_1678 = uStack_11d8;
          uStack_1680 = uStack_11e0;
          uStack_11e0 = 0;
          uStack_11d8 = 0;
          uStack_11d0 = 0;
          uStack_1660 = uStack_11c0;
          uStack_1668 = uStack_11c8;
          uStack_1658 = uStack_11b8;
          uStack_11c0 = 0;
          uStack_11b8 = 0;
          uStack_11c8 = 0;
          uStack_1650 = uStack_11b0;
          uStack_1648 = uStack_1648 & 0xffffffffffffff00;
          uStack_1630 = cStack_1190 == '\x01';
          if ((bool)uStack_1630) {
            uStack_1640 = uStack_11a0;
            uStack_1648 = uStack_11a8;
            uStack_1638 = uStack_1198;
            uStack_11a0 = 0;
            uStack_1198 = 0;
            uStack_11a8 = 0;
          }
          FUN_10861b464(auStack_1078,auStack_1140);
          uStack_e50 = 0;
          uStack_e58 = 0;
          uStack_e48 = 0;
          FUN_10861b3fc(auStack_fe0,&uStack_1680,iVar7,auStack_1078,&uStack_e58);
          func_0x0001087e0d18();
          func_0x00010863f7c8();
          func_0x000107c279d4(auStack_10c8,auStack_1bd0);
          FUN_10863f728(&puStack_1a10,&ppuStack_15d0);
          func_0x0001087e0c78();
          FUN_10863f654();
          func_0x00010863f788(&puStack_1a10);
          func_0x000107c279dc(auStack_10c8);
          func_0x0001087e0d18();
          func_0x00010863f7a8();
          func_0x00010863a318(auStack_fe0);
          func_0x0001087e0e80();
          FUN_10861b4fc();
          FUN_10861b5ac(auStack_1078);
          func_0x000104bee8ec(&uStack_1680);
          func_0x000104bee8ec(auStack_1628);
          func_0x00010863f788(&ppuStack_15d0);
          func_0x000104bee8ec(&uStack_11e0);
          FUN_10861b5ac(auStack_1140);
          if (puStack_1a28 < puStack_1a20) {
            puVar14 = puStack_1a28;
            func_0x0001087e0d2c();
            FUN_1087dfe6c();
            unaff_x24 = puVar14 + 0x4d0;
          }
          else {
            func_0x0001087e0ea0(((long)puStack_1a28 - (long)puStack_1a30) / 0x4d0);
            func_0x0001087e0e00();
            puVar14 = puStack_15c0;
            func_0x0001087e0d2c();
            FUN_1087dfe6c();
            puStack_15c0 = (undefined *)((long)puVar14 + 0x4d0);
            func_0x0001087e0d40();
            unaff_x24 = puStack_1a28;
            func_0x0001087e0e10();
          }
          puStack_1a28 = unaff_x24;
          func_0x0001087e0c78();
          FUN_1087e02dc();
          func_0x0001087e0314(auStack_1d20);
          FUN_1087e08f8(auStack_1e50);
        }
        else {
          ppuStack_c30._0_4_ = 0x8b02ac;
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          ppuStack_c30 = (undefined **)CONCAT44(ppuStack_c30._4_4_,3);
          func_0x0001087e0dcc();
        }
        FUN_1087e01f4(auStack_1c08);
        func_0x0001087e0334(auStack_1b38);
      }
      else {
LAB_1087de0a4:
        ppuStack_c30 = (undefined **)CONCAT44(ppuStack_c30._4_4_,4);
        func_0x0001087e0dcc();
        lVar25 = lVar25 + 1;
      }
    }
    func_0x000107c31428(alStack_1aa0);
    plVar16 = alStack_1aa0;
    func_0x000107c31424();
    uVar10 = lVar25 == 1;
    plVar15 = plStack_1a50;
    if (0 < lVar25) {
      func_0x000107c29794();
      ppuStack_c20 = (undefined **)0x0;
      ppuStack_c18 = (undefined **)0x0;
      ppuStack_c28 = (undefined **)0x0;
      ppuStack_c30 = &PTR_FUN_110a609a8;
      uStack_c10 = 0x2d9;
      plVar15 = plVar16;
      func_0x0001087e0ebc();
      func_0x0001087e0c78();
      func_0x0001087e0e98();
      func_0x0001087e0de0();
      plVar16 = (long *)*plVar16;
      (**(code **)(*plVar16 + 8))(plVar16,plVar15,lVar25);
      func_0x0001087e0c58();
      plVar15 = plStack_1a50;
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      func_0x000107c29794();
      ppuStack_c20 = (undefined **)0x0;
      ppuStack_c18 = (undefined **)0x0;
      ppuStack_c28 = (undefined **)0x0;
      ppuStack_c30 = &PTR_FUN_110a609a8;
      uStack_c10 = 0x2dc;
      uVar2 = *(uint *)(plVar15 + 2);
      plVar17 = plVar16;
      func_0x0001087e0ebc();
      uVar10 = (uVar2 & 0xffff) == 0x2b7;
      func_0x0001087e0c78();
      func_0x0001087e0e98();
      func_0x0001087e0de0();
      plVar16 = (long *)*plVar16;
      (**(code **)(*plVar16 + 8))(plVar16,plVar17,plVar15[3]);
      func_0x0001087e0c58();
    }
    lVar24 = *(long *)(lVar24 + 0x28);
    ppuStack_15c8 = (undefined **)ppuVar18[1];
    ppuStack_15d0 = (undefined **)*ppuVar18;
    if (ppuVar18[1] != (undefined *)0x0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_04 != 0);
    }
    puStack_15b8 = puStack_1a28;
    puStack_15c0 = puStack_1a30;
    puStack_15b0 = puStack_1a20;
    puStack_1a20 = (undefined *)0x0;
    puStack_1a28 = (undefined *)0x0;
    puStack_1a30 = (undefined *)0x0;
    func_0x000107c28150();
    lVar26 = *(long *)(lVar24 + 0x10);
    func_0x0001087e0ed0();
    lVar25 = *(long *)(lVar26 + 0x70);
    ppuStack_c30 = (undefined **)FUN_1087e0afc;
    ppuStack_c28 = &PTR_FUN_110a72070;
    ppuVar18 = (undefined **)0x28;
    __Znwm();
    ppuVar18[1] = (undefined *)ppuStack_15c8;
    *ppuVar18 = (undefined *)ppuStack_15d0;
    if (ppuStack_15c8 != (undefined **)0x0) {
      ppuVar27 = ppuStack_15c8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar27,0x10);
        if (bVar4) {
          *ppuVar27 = *ppuVar27 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar18[3] = puStack_15b8;
    ppuVar18[2] = puStack_15c0;
    ppuVar18[4] = puStack_15b0;
    puStack_15b8 = (undefined *)0x0;
    puStack_15b0 = (undefined *)0x0;
    puStack_15c0 = (undefined *)0x0;
    ppuStack_c20 = ppuVar18;
    plStack_c00 = plVar16;
    func_0x0001087e0d2c(lVar26 + 0x48);
    func_0x000107c28154();
    func_0x0001087e0e20();
    func_0x0001087e0d4c();
    if (lVar25 == 0) {
      ppuStack_c28 = *(undefined ***)(lVar24 + 0x18);
      ppuStack_c30 = *(undefined ***)(lVar24 + 0x10);
      if (*(long *)(lVar24 + 0x18) != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_05 != 0);
      }
      func_0x0001087e0da8();
      func_0x0001087e0d2c();
      (*extraout_x8_05)();
      func_0x0001087e0c30();
    }
    FUN_1087df9c8(&ppuStack_15d0);
    FUN_1087e0668(&uStack_1a60);
    func_0x0001087e038c(&puStack_1a30);
  }
  func_0x0001087e0c64(uStack_758);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
LAB_1087df09c:
  FUN_1087dfd40();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1087df0a4);
  (*pcVar9)();
}



/* Entry: 1087ddc20; end: 1087ddef3;  */

void FUN_1087ddc20(undefined **param_1,long param_2,undefined8 param_3,ulong *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  int iVar6;
  byte bVar7;
  code *pcVar8;
  undefined1 in_ZR;
  undefined1 uVar9;
  char *pcVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong extraout_x8_03;
  undefined **ppuVar19;
  ulong uVar20;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  ulong uVar21;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x20;
  long lVar22;
  long unaff_x22;
  long lVar23;
  long lVar24;
  undefined *unaff_x24;
  undefined **in_register_00005008;
  undefined **ppuVar25;
  undefined1 auStack_1db0 [8];
  undefined **ppuStack_1da8;
  undefined1 auStack_1da0 [272];
  char cStack_1c90;
  undefined1 auStack_1c80 [72];
  undefined1 auStack_1c38 [24];
  undefined4 uStack_1c20;
  long lStack_1c18;
  long lStack_1c10;
  char cStack_1c00;
  undefined1 auStack_1bf8 [64];
  undefined1 auStack_1bb8 [32];
  undefined8 uStack_1b98;
  undefined1 auStack_1b90 [32];
  char cStack_1b70;
  undefined1 auStack_1b68 [24];
  undefined1 auStack_1b50 [24];
  undefined4 uStack_1b38;
  int iStack_1b34;
  undefined1 auStack_1b30 [40];
  ulong uStack_1b08;
  byte bStack_1af9;
  byte bStack_1af8;
  undefined1 auStack_1ae0 [24];
  char cStack_1ac8;
  undefined8 uStack_1ac0;
  int iStack_1ab8;
  char cStack_1aa8;
  char cStack_1aa0;
  undefined1 auStack_1a98 [112];
  undefined4 uStack_1a28;
  char cStack_1a20;
  undefined1 auStack_1a18 [24];
  long alStack_1a00 [8];
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  long *plStack_19b0;
  undefined8 uStack_19a8;
  undefined4 uStack_19a0;
  undefined *puStack_1990;
  undefined *puStack_1988;
  undefined *puStack_1980;
  undefined *puStack_1970;
  undefined8 uStack_1968;
  ulong uStack_1960;
  undefined4 uStack_1958;
  undefined1 auStack_1950 [32];
  undefined8 uStack_1930;
  undefined1 auStack_1918 [32];
  undefined8 uStack_18f8;
  byte bStack_18f0;
  undefined1 auStack_18e8 [24];
  undefined4 uStack_18d0;
  undefined1 auStack_18c8 [224];
  undefined1 auStack_17e8 [32];
  undefined1 auStack_17c8 [32];
  undefined1 auStack_17a8 [32];
  char cStack_1788;
  undefined1 auStack_1780 [24];
  undefined4 uStack_1768;
  undefined1 auStack_1760 [24];
  undefined8 uStack_1748;
  undefined8 uStack_1740;
  undefined1 uStack_1738;
  undefined1 auStack_1730 [32];
  undefined1 uStack_1710;
  undefined1 auStack_1708 [64];
  undefined1 auStack_16c8 [32];
  undefined1 auStack_16a8 [48];
  undefined1 auStack_1678 [64];
  char cStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined1 uStack_1610;
  undefined1 auStack_1608 [40];
  undefined8 uStack_15e0;
  undefined8 uStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined4 uStack_15b0;
  ulong uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined1 uStack_1590;
  undefined1 auStack_1588 [64];
  undefined1 uStack_1548;
  undefined **ppuStack_1530;
  undefined **ppuStack_1528;
  undefined *puStack_1520;
  undefined *puStack_1518;
  undefined *puStack_1510;
  ulong uStack_1508;
  undefined8 uStack_14f0;
  undefined1 auStack_14d8 [32];
  undefined8 uStack_14b8;
  byte bStack_14b0;
  undefined1 auStack_14a8 [24];
  undefined4 uStack_1490;
  undefined1 auStack_1488 [40];
  byte bStack_1460;
  byte bStack_1418;
  undefined1 auStack_13a8 [32];
  undefined1 auStack_1388 [32];
  undefined1 auStack_1368 [32];
  char cStack_1348;
  undefined1 auStack_1340 [24];
  undefined4 uStack_1328;
  undefined1 auStack_1320 [24];
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined1 uStack_12f8;
  undefined1 auStack_12f0 [32];
  undefined1 uStack_12d0;
  undefined1 auStack_12c8 [64];
  undefined1 auStack_1288 [32];
  undefined1 auStack_1268 [48];
  undefined1 auStack_1238 [64];
  char cStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined1 uStack_11d0;
  undefined1 auStack_11c8 [32];
  char cStack_11a8;
  ulong uStack_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  char cStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined4 uStack_1110;
  ulong uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  char cStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined **ppuStack_10d0;
  undefined **ppuStack_10c8;
  long lStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined1 auStack_10a0 [24];
  undefined1 auStack_1088 [24];
  char cStack_1070;
  undefined1 auStack_1068 [32];
  undefined1 uStack_1048;
  undefined1 uStack_1030;
  undefined1 auStack_1028 [40];
  undefined1 uStack_1000;
  undefined1 auStack_ff8 [24];
  undefined1 uStack_fe0;
  undefined1 auStack_fd8 [56];
  undefined1 uStack_fa0;
  undefined1 auStack_f98 [24];
  undefined1 uStack_f80;
  undefined1 auStack_f78 [24];
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined1 auStack_f40 [352];
  undefined1 uStack_de0;
  undefined1 auStack_dd8 [32];
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined1 auStack_d98 [200];
  undefined1 uStack_cd0;
  undefined1 auStack_bc8 [24];
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined **ppuStack_b90;
  undefined **ppuStack_b88;
  undefined **ppuStack_b80;
  undefined **ppuStack_b78;
  undefined4 uStack_b70;
  long *plStack_b60;
  char cStack_b08;
  char cStack_ab8;
  undefined8 uStack_6b8;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined1 auStack_628 [24];
  undefined1 auStack_610 [64];
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a0;
  long lStack_598;
  long lStack_588;
  long lStack_580;
  long alStack_328 [14];
  undefined1 auStack_2b8 [24];
  int iStack_2a0;
  byte bStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001087e0d70();
  uStack_58 = extraout_x8;
  FUN_1088691f8(&lStack_5d0,*(undefined8 *)(param_2 + 0x18));
  FUN_1086c2d80(alStack_328,&lStack_5d0);
  FUN_1086d4da0(&lStack_5d0);
  if ((bStack_98 & 1) == 0) {
    uVar18 = 7;
LAB_1087ddc8c:
    pppuVar11 = (undefined ***)*param_5;
    param_4 = (ulong *)param_5[1];
    FUN_1087ddae0(*(undefined8 *)(unaff_x20 + 0x28),pppuVar11,param_4,uVar18);
  }
  else {
    if (iStack_2a0 == 1) {
      uVar18 = 4;
      in_ZR = 1;
      goto LAB_1087ddc8c;
    }
    unaff_x22 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000107c278b8(auStack_628,&UNK_10f4bb92e);
    func_0x0001087e0e40();
    func_0x0001087e0e30();
    FUN_108868f84(*(undefined8 *)(unaff_x20 + 0x18),alStack_328[0]);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
    FUN_10879d0a0(&lStack_5d0,uVar18,alStack_328[0]);
    in_ZR = 0;
    if ((((lStack_5b8 == lStack_5b0) && (in_ZR = 0, lStack_5d0 == lStack_5c8)) &&
        (in_ZR = 0, lStack_5a0 == lStack_598)) && (in_ZR = lStack_588 == lStack_580, (bool)in_ZR)) {
      FUN_108869b70(*(undefined8 *)(unaff_x20 + 0x18),alStack_328[0]);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
      FUN_1088606d0(uVar18,auStack_2b8);
    }
    func_0x0001087e0fb8();
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    lVar22 = *(long *)(unaff_x22 + 0x10);
    func_0x0001087e0ed0();
    unaff_x24 = *(undefined **)(lVar22 + 0x70);
    ppuStack_90 = (undefined **)FUN_1087e05a0;
    ppuStack_88 = &PTR_DAT_110a72040;
    param_1 = ppuStack_640;
    in_register_00005008 = ppuStack_638;
    if (ppuStack_638 != (undefined **)0x0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_00 != 0);
    }
    pppuVar11 = &ppuStack_90;
    uStack_60 = uVar18;
    func_0x000107c28154(lVar22 + 0x48);
    func_0x0001087e0cb8(ppuStack_88);
    func_0x0001087e0d4c();
    if (unaff_x24 == (undefined *)0x0) {
      in_register_00005008 = *(undefined ***)(unaff_x22 + 0x18);
      param_1 = *(undefined ***)(unaff_x22 + 0x10);
      ppuStack_90 = param_1;
      ppuStack_88 = in_register_00005008;
      if (*(long *)(unaff_x22 + 0x18) != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001087e0da8();
      pppuVar11 = &ppuStack_90;
      (*extraout_x8_01)();
      func_0x000107c27e74(&ppuStack_90);
    }
    func_0x0001087e0d38();
    func_0x000107c31428(auStack_610);
    func_0x000104bee768(&lStack_5d0);
    func_0x0001087e0e38();
  }
  FUN_1086cf6a4(alStack_328);
  while( true ) {
    func_0x0001087e0c64(uStack_58);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001087e0c3c();
    func_0x000107c27e74(&ppuStack_90);
    func_0x0001087e0d38();
    func_0x000104bee768(&lStack_5d0);
    func_0x0001087e0e38();
    plVar15 = alStack_328;
    FUN_1086cf6a4();
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    func_0x0001087e0eb4();
    func_0x000108848514();
    pppuVar11 = (undefined ***)*param_5;
    param_4 = (ulong *)param_5[1];
    FUN_1087ddae0(*(undefined8 *)(unaff_x20 + 0x28),pppuVar11,param_4,plVar15);
    ___cxa_end_catch();
  }
  func_0x0001087e0df8();
  func_0x0001087e0eac();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001087e0d70();
  uStack_6b8 = extraout_x8_02;
  uVar9 = *pppuVar11 == pppuVar11[1];
  if ((bool)uVar9) {
    func_0x0001087e0e60();
    ppuStack_1530 = param_1;
    ppuStack_1528 = in_register_00005008;
    if (extraout_x8_05 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_04 != 0);
    }
    func_0x000107c28150();
    lVar23 = *(long *)(unaff_x20 + 0x10);
    func_0x0001087e0ed8();
    lVar22 = *(long *)(lVar23 + 0x70);
    ppuStack_b90 = (undefined **)FUN_1087e05dc;
    ppuStack_b88 = &PTR_FUN_110a72058;
    ppuStack_b78 = ppuStack_1528;
    ppuStack_b80 = ppuStack_1530;
    ppuVar17 = ppuStack_1530;
    ppuVar25 = ppuStack_1528;
    if (ppuStack_1528 != (undefined **)0x0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_05 != 0);
    }
    plStack_b60 = plVar15;
    func_0x0001087e0d2c(lVar23 + 0x48);
    func_0x000107c28154();
    func_0x0001087e0c24(ppuStack_b88);
    func_0x0001087e0d54();
    if (lVar22 == 0) {
      func_0x0001087e0e50();
      ppuStack_b90 = ppuVar17;
      ppuStack_b88 = ppuVar25;
      if (extraout_x8_06 != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_06 != 0);
      }
      func_0x0001087e0da8();
      func_0x0001087e0d2c();
      (*extraout_x8_07)();
      func_0x0001087e0c30();
    }
    FUN_10863fd4c(&ppuStack_1530);
  }
  else {
    puStack_1988 = (undefined *)0x0;
    puStack_1990 = (undefined *)0x0;
    puStack_1980 = (undefined *)0x0;
    uVar20 = ((long)pppuVar11[1] - (long)*pppuVar11) / 0x58;
    func_0x0001087e0f3c();
    if (extraout_x8_03 <= uVar20) goto LAB_1087df09c;
    FUN_1087dfe04(&ppuStack_1530);
    func_0x0001087e0d40();
    func_0x0001087e0e10();
    uStack_19a8 = 0;
    plStack_19b0 = (long *)0x0;
    uStack_19b8 = 0;
    uStack_19c0 = 0;
    uStack_19a0 = 0x3f800000;
    pcVar10 = (char *)(unaff_x20 + 0x48);
    func_0x000107c289e8();
    cVar3 = *pcVar10;
    uVar18 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000107c278b8(auStack_1a18,&UNK_10f4bb943);
    func_0x000107c31420(alStack_1a00,uVar18,auStack_1a18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a18);
    lVar22 = 0;
    ppuVar25 = pppuVar11[1];
    for (ppuVar17 = *pppuVar11; ppuVar17 != ppuVar25; ppuVar17 = ppuVar17 + 0xb) {
      if (*(char *)(ppuVar17 + 10) == '\x01') {
        if (*(char *)((long)ppuVar17 + 0x4f) < '\0') {
          if (ppuVar17[8] == (undefined *)0x0) goto LAB_1087de0a4;
        }
        else if (*(char *)((long)ppuVar17 + 0x4f) == '\0') goto LAB_1087de0a4;
        func_0x0001087e0fcc(*(undefined8 *)(unaff_x20 + 0x18));
        FUN_108869508();
        ppuStack_1530 = (undefined **)0x0;
        ppuStack_1528 = (undefined **)((ulong)ppuStack_1528 & 0xffffffffffffff00);
        bStack_14b0 = 0;
        if (cStack_b08 == '\0') {
          unaff_x24 = (undefined *)0x0;
        }
        else {
          func_0x0001087e0fa4();
          func_0x0001087e0780();
          func_0x0001087e075c(unaff_x24 + 0x10);
          unaff_x24 = (undefined *)(ulong)bStack_14b0;
        }
        func_0x0001087e0f7c(ppuStack_1530);
        _bzero();
        if (((ulong)unaff_x24 & 1) == 0) {
          func_0x0001087e0334(&uStack_1968);
          cStack_1a20 = '\0';
          auStack_1a98[0] = 0;
        }
        else {
          func_0x0001087e0334(&uStack_1968);
          if ((bStack_14b0 & 1) == 0) {
            unaff_x24 = ppuStack_1530[1];
            func_0x0001087e0d18();
            func_0x0001087e0e18();
            func_0x0001087e0f70(&puStack_1970);
            func_0x0001087e0d5c();
            func_0x0001087e0c9c();
            func_0x0001087e0d68();
            func_0x0001087e0cac();
          }
          FUN_1087e079c(auStack_1a98,&ppuStack_1528);
          cStack_1a20 = '\x01';
        }
        pppuVar11 = &ppuStack_1528;
        func_0x0001087e0334();
        func_0x0001087e0c78();
        FUN_1087e06a8();
        auStack_1b68[0] = 0;
        cStack_1aa0 = '\0';
        if (cVar3 != '\0') {
          func_0x0001087e0fcc(*(undefined8 *)(unaff_x20 + 0x18));
          FUN_108869674();
          ppuStack_1530 = (undefined **)0x0;
          ppuStack_1528 = (undefined **)((ulong)ppuStack_1528 & 0xffffffffffffff00);
          bStack_1460 = 0;
          if (cStack_ab8 == '\0') {
            unaff_x24 = (undefined *)0x0;
          }
          else {
            func_0x0001087e0fa4();
            func_0x0001087e0150();
            func_0x0001087e012c(unaff_x24 + 0x10);
            unaff_x24 = (undefined *)(ulong)bStack_1460;
          }
          func_0x0001087e0f7c(ppuStack_1530);
          _bzero();
          if (((ulong)unaff_x24 & 1) == 0) {
            FUN_1087e01f4(&uStack_1968);
            uStack_cd0 = 0;
            auStack_d98[0] = 0;
          }
          else {
            FUN_1087e01f4(&uStack_1968);
            if ((bStack_1460 & 1) == 0) {
              unaff_x24 = ppuStack_1530[1];
              func_0x0001087e0e18(auStack_f40);
              func_0x0001087e0d5c(&puStack_1970);
              func_0x0001087e0c9c();
              func_0x0001087e0d68();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f40);
            }
            func_0x0001087e0d18();
            FUN_1087e016c();
            uStack_cd0 = 1;
          }
          FUN_1087e01f4(&ppuStack_1528);
          pppuVar11 = (undefined ***)auStack_1b68;
          func_0x0001087e0f70();
          FUN_1087e0070();
          func_0x0001087e0d18();
          FUN_1087e01f4();
          func_0x0001087e0c78();
          FUN_1087e0848();
        }
        if (cStack_1a20 == '\x01') {
          uVar1 = 0x8b02ab;
          if (cStack_1aa0 == '\0') {
            uVar1 = 0x8b02a9;
          }
          ppuStack_b90 = (undefined **)CONCAT44(ppuStack_b90._4_4_,uVar1);
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          switch(uStack_1a28) {
          case 1:
            uVar21 = 0x100000000;
            uVar20 = 1;
            break;
          case 2:
          case 4:
            puStack_1970 = (undefined *)0x4;
            uStack_1968 = (undefined *)((ulong)uStack_1968._4_4_ << 0x20);
            func_0x000107c29794();
            ppuStack_b88 = (undefined **)0x0;
            ppuStack_b80 = (undefined **)0x0;
            ppuStack_b78 = (undefined **)0x0;
            ppuStack_b90 = &PTR_FUN_110a609a8;
            uStack_b70 = 0x2dd;
            pppuVar12 = pppuVar11;
            func_0x0001087e0ebc();
            func_0x0001087e0c78();
            func_0x0001087e0e98();
            func_0x0001087e0de0();
            (**(code **)(**pppuVar11 + 8))(*pppuVar11,pppuVar12,1);
            func_0x0001087e0c58();
            goto code_r0x0001087de5c4;
          case 3:
            uVar20 = 0;
            uVar21 = 0x300000000;
            break;
          case 5:
            uVar20 = 0;
            uVar21 = 0x400000000;
            break;
          default:
            uVar20 = 0;
            uVar21 = 0;
          }
          puStack_1970 = (undefined *)(uVar21 | uVar20);
          uStack_1968 = (undefined *)CONCAT44(uStack_1968._4_4_,1);
code_r0x0001087de5c4:
          puVar13 = puStack_1988;
          if (puStack_1988 < puStack_1980) {
            func_0x0001087e0f5c();
            FUN_1087e0214(puVar13,ppuVar17);
            unaff_x24 = puVar13 + 0x4d0;
            puStack_1988 = unaff_x24;
          }
          else {
            func_0x0001087e0ea0(((long)puStack_1988 - (long)puStack_1990) / 0x4d0);
            func_0x0001087e0e00();
            puVar13 = puStack_1520;
            func_0x0001087e0f5c();
            FUN_1087e0214();
            puStack_1520 = (undefined *)((long)puVar13 + 0x4d0);
            func_0x0001087e0d40();
            unaff_x24 = puStack_1988;
            func_0x0001087e0e10();
            puStack_1988 = unaff_x24;
          }
        }
        else if (cStack_1aa0 == '\x01') {
          ppuStack_b90 = (undefined **)CONCAT44(ppuStack_b90._4_4_,0x8b02aa);
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          FUN_1088695c4(auStack_1db0,*(undefined8 *)(unaff_x20 + 0x18),ppuVar17 + 7,ppuVar17);
          ppuStack_1530 = (undefined **)0x0;
          ppuStack_1528 = (undefined **)((ulong)ppuStack_1528 & 0xffffffffffffff00);
          bStack_1418 = 0;
          if (cStack_1c90 == '\0') {
            ppuVar19 = (undefined **)0x0;
          }
          else {
            func_0x0001087e0a1c(&ppuStack_1528,auStack_1da0);
            func_0x0001087e09f8(auStack_1da0);
            ppuVar19 = ppuStack_1530;
          }
          bVar7 = bStack_1418;
          ppuVar5 = ppuStack_1da8;
          ppuStack_1530 = ppuStack_1da8;
          ppuStack_1da8 = ppuVar19;
          _bzero(&puStack_1970,0x120);
          if ((bVar7 & 1) == 0) {
            func_0x0001087e0314(&uStack_1968);
LAB_1087de43c:
            cStack_1b70 = '\0';
            auStack_1c80[0] = 0;
          }
          else {
            func_0x0001087e0314(&uStack_1968);
            if (ppuVar5 == (undefined **)0x0) goto LAB_1087de43c;
            if ((bStack_1418 & 1) == 0) {
              func_0x0001087e0d18();
              func_0x0001087e0e18();
              func_0x0001087e0f70(&puStack_1970);
              func_0x0001087e0d5c();
              func_0x0001087e0c9c();
              func_0x0001087e0d68();
              func_0x0001087e0cac();
            }
            FUN_1087e0a38(auStack_1c80,&ppuStack_1528);
            cStack_1b70 = '\x01';
          }
          func_0x0001087e0314(&ppuStack_1528);
          auStack_10a0[0] = 0;
          cStack_1070 = '\0';
          if ((iStack_1b34 == 0) && ((bStack_1af8 & 1) != 0)) {
            uVar20 = uStack_1b08;
            if (-1 < (char)bStack_1af9) {
              uVar20 = (ulong)bStack_1af9;
            }
            if (uVar20 != 0) {
              uStack_1968 = (undefined *)0x0;
              puStack_1970 = (undefined *)0x0;
              uStack_1960 = 0;
              uStack_10a8 = 0;
              uStack_10b8 = 0;
              uStack_10b0 = 0;
              func_0x000107c27a50(&uStack_10b8);
              if (cStack_1aa8 == '\x01') {
                ppuStack_1528 = (undefined **)0x0;
                ppuStack_1530 = &PTR_FUN_110a92130;
                puStack_1518 = (undefined *)0x0;
                puStack_1510 = (undefined *)0x0;
                puStack_1520 = (undefined *)0x0;
                uStack_1508 = uStack_1508 & 0xffffffff00000000;
                pppuVar11 = &ppuStack_1530;
                func_0x000107c3034c(pppuVar11,uStack_1ac0,iStack_1ab8 - (int)uStack_1ac0);
                if ((int)pppuVar11 != 0) {
                  FUN_108845754(auStack_d98,&ppuStack_1530);
                  func_0x0001087e0f70(&puStack_1970);
                  FUN_1086f17d4();
                  func_0x0001087e0d18();
                  func_0x000107c27a50();
                }
                func_0x000107c2a4cc(&ppuStack_1530);
              }
              func_0x0001087e0e18(auStack_1b68,&ppuStack_10d0);
              puStack_1520 = (undefined *)lStack_10c0;
              uStack_1508 = uStack_1960;
              puStack_1510 = uStack_1968;
              puStack_1518 = puStack_1970;
              uStack_1960 = 0;
              puStack_1970 = (undefined *)0x0;
              uStack_1968 = (undefined *)0x0;
              ppuStack_1528 = ppuStack_10c8;
              ppuStack_1530 = ppuStack_10d0;
              ppuStack_10c8 = (undefined **)0x0;
              ppuStack_10d0 = (undefined **)0x0;
              lStack_10c0 = 0;
              uStack_10d8 = 0;
              uStack_10e8 = 0;
              uStack_10e0 = 0;
              if (cStack_1070 == '\x01') {
                func_0x000107c27b9c(auStack_10a0,&ppuStack_1530);
                FUN_1086f17d4(auStack_1088,&puStack_1518);
              }
              else {
                FUN_10861b4a4(auStack_10a0,&ppuStack_1530);
              }
              FUN_10861b5cc(&ppuStack_1530);
              func_0x000107c27a50(&uStack_10e8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_10d0);
              func_0x000107c27a50(&puStack_1970);
            }
          }
          func_0x000107c27994(&uStack_1160,auStack_1b50);
          ppuStack_1528 = (undefined **)0x0;
          ppuStack_1530 = (undefined **)0x0;
          puStack_1520 = (undefined *)0x0;
          if (cStack_1ac8 == '\x01') {
            func_0x000107c27994(&uStack_1180,auStack_1ae0);
          }
          else {
            uStack_1178 = 0;
            uStack_1180 = 0;
            uStack_1170 = 0;
            puStack_1520 = (undefined *)0x0;
            ppuStack_1530 = (undefined **)0x0;
            ppuStack_1528 = (undefined **)0x0;
          }
          uVar1 = uStack_1b38;
          func_0x000107c27f70(&uStack_11a0,auStack_1b68);
          uStack_1130 = uStack_1150;
          uStack_1138 = uStack_1158;
          uStack_1140 = uStack_1160;
          uStack_1150 = 0;
          uStack_1158 = 0;
          uStack_1160 = 0;
          uStack_1120 = uStack_1178;
          uStack_1128 = uStack_1180;
          uStack_1118 = uStack_1170;
          uStack_1180 = 0;
          uStack_1178 = 0;
          uStack_1170 = 0;
          uStack_1110 = uVar1;
          uStack_1108 = uStack_1108 & 0xffffffffffffff00;
          cStack_10f0 = cStack_1188 == '\x01';
          if ((bool)cStack_10f0) {
            uStack_1100 = uStack_1198;
            uStack_1108 = uStack_11a0;
            uStack_10f8 = uStack_1190;
            uStack_1190 = 0;
            uStack_11a0 = 0;
            uStack_1198 = 0;
          }
          func_0x000107c279a4(&uStack_11a0);
          func_0x000107c27914(&uStack_1180);
          func_0x000107c27914(&ppuStack_1530);
          func_0x000107c27914(&uStack_1160);
          ppuStack_1530 = (undefined **)((ulong)ppuStack_1530 & 0xffffffffffffff00);
          cStack_11a8 = '\0';
          if (cStack_1b70 == '\x01') {
            uStack_ba8 = 0;
            uStack_bb0 = 0;
            uStack_ba0 = 0;
            if (cStack_1c00 == '\x01') {
              func_0x00010528d190(&uStack_bb0,(lStack_1c10 - lStack_1c18) / 0x18);
              lVar24 = lStack_1c10;
              for (lVar23 = lStack_1c18; lVar23 != lVar24; lVar23 = lVar23 + 0x18) {
                FUN_1086c2e14(&uStack_bb0,lVar23);
              }
            }
            func_0x000107c27994(auStack_bc8,auStack_1c38);
            uVar1 = uStack_1c20;
            func_0x0001087e0e80();
            func_0x000104be0ccc();
            func_0x000107c279d4(auStack_dd8,auStack_1bb8);
            auStack_f40[0] = 0;
            uStack_de0 = 0;
            func_0x0001087e0d18(uStack_1b98);
            func_0x00010529669c();
            uStack_f58 = uStack_ba8;
            uStack_f60 = uStack_bb0;
            uStack_f50 = uStack_ba0;
            uStack_ba0 = 0;
            uStack_ba8 = 0;
            uStack_bb0 = 0;
            FUN_10867be90(auStack_f78,auStack_1bf8);
            auStack_f98[0] = 0;
            uStack_f80 = 0;
            auStack_fd8[0] = 0;
            uStack_fa0 = 0;
            auStack_ff8[0] = 0;
            uStack_fe0 = 0;
            auStack_1028[0] = 0;
            uStack_1000 = 0;
            auStack_1588[0] = 0;
            uStack_1548 = 0;
            uStack_1048 = 0;
            uStack_1030 = 0;
            func_0x000104be0ccc(auStack_1068,auStack_1b90);
            func_0x00010528ce14(&puStack_1970,auStack_bc8,uVar1,auStack_d98,&uStack_f60,0,
                                auStack_f78,0,0,0,auStack_f98,0);
            func_0x000107c279c4(auStack_1068);
            func_0x000104bee410(auStack_1588);
            func_0x000107c27a1c(auStack_1028);
            func_0x000107c27a40(auStack_ff8);
            func_0x000107c27a2c(auStack_fd8);
            func_0x000107c279c4(auStack_f98);
            func_0x000104bee630(auStack_f78);
            func_0x000104be1594(&uStack_f60);
            func_0x0001087e0d18();
            func_0x000104bee6b8();
            func_0x000104bee6e8(auStack_f40);
            func_0x0001087e0ef8();
            func_0x0001087e0e80();
            func_0x000107c279c4();
            func_0x0001087e0eec();
            func_0x0001087e0f04();
            if (cStack_11a8 == '\x01') {
              func_0x000107c3194c(&ppuStack_1530,&puStack_1970);
              puStack_1518 = (undefined *)CONCAT44(puStack_1518._4_4_,uStack_1958);
              func_0x0001052b2b60(&puStack_1510,auStack_1950);
              uStack_14f0 = uStack_1930;
              func_0x000107c28908(auStack_14d8,auStack_1918);
              uStack_14b8 = uStack_18f8;
              bStack_14b0 = bStack_18f0;
              if (cStack_1348 == cStack_1788) {
                if (cStack_1348 != '\0') {
                  func_0x000107c27b9c(auStack_14a8,auStack_18e8);
                  uStack_1490 = uStack_18d0;
                  FUN_10869d160(auStack_1488,auStack_18c8);
                  func_0x000107c27c54(auStack_13a8,auStack_17e8);
                  FUN_10866a140(auStack_1388,auStack_17c8);
                  FUN_10866a140(auStack_1368,auStack_17a8);
                }
              }
              else if (cStack_1348 == '\0') {
                func_0x00010528cffc(auStack_14a8,auStack_18e8);
              }
              else {
                FUN_1087c40d4(auStack_14a8);
              }
              FUN_10869e39c(auStack_1340,auStack_1780);
              uStack_1328 = uStack_1768;
              FUN_10865f9c0(auStack_1320,auStack_1760);
              uStack_1300 = uStack_1740;
              uStack_1308 = uStack_1748;
              uStack_12f8 = uStack_1738;
              func_0x0001052b2b60(auStack_12f0,auStack_1730);
              uStack_12d0 = uStack_1710;
              FUN_10869e800(auStack_12c8,auStack_1708);
              FUN_10869e26c(auStack_1288,auStack_16c8);
              func_0x000107c28ea8(auStack_1268,auStack_16a8);
              if (cStack_11f8 == cStack_1638) {
                if (cStack_11f8 != '\0') {
                  func_0x000108794768(auStack_1238,auStack_1678);
                }
              }
              else if (cStack_11f8 == '\0') {
                func_0x00010528d148(auStack_1238,auStack_1678);
              }
              else {
                FUN_1087c4174(auStack_1238);
              }
              uStack_11e8 = uStack_1628;
              uStack_11f0 = uStack_1630;
              uStack_11d8 = uStack_1618;
              uStack_11e0 = uStack_1620;
              uStack_11d0 = uStack_1610;
              func_0x0001052b2b60(auStack_11c8,auStack_1608);
            }
            else {
              func_0x00010863f76c(&ppuStack_1530,&puStack_1970);
            }
            func_0x000104bee3a8(&puStack_1970);
          }
          FUN_108685a78(auStack_1588,ppuVar17);
          uStack_15d0 = uStack_1130;
          iVar6 = iStack_1b34;
          uStack_15d8 = uStack_1138;
          uStack_15e0 = uStack_1140;
          uStack_1140 = 0;
          uStack_1138 = 0;
          uStack_1130 = 0;
          uStack_15c0 = uStack_1120;
          uStack_15c8 = uStack_1128;
          uStack_15b8 = uStack_1118;
          uStack_1120 = 0;
          uStack_1118 = 0;
          uStack_1128 = 0;
          uStack_15b0 = uStack_1110;
          uStack_15a8 = uStack_15a8 & 0xffffffffffffff00;
          uStack_1590 = cStack_10f0 == '\x01';
          if ((bool)uStack_1590) {
            uStack_15a0 = uStack_1100;
            uStack_15a8 = uStack_1108;
            uStack_1598 = uStack_10f8;
            uStack_1100 = 0;
            uStack_10f8 = 0;
            uStack_1108 = 0;
          }
          FUN_10861b464(auStack_fd8,auStack_10a0);
          uStack_db0 = 0;
          uStack_db8 = 0;
          uStack_da8 = 0;
          FUN_10861b3fc(auStack_f40,&uStack_15e0,iVar6,auStack_fd8,&uStack_db8);
          func_0x0001087e0d18();
          func_0x00010863f7c8();
          func_0x000107c279d4(auStack_1028,auStack_1b30);
          FUN_10863f728(&puStack_1970,&ppuStack_1530);
          func_0x0001087e0c78();
          FUN_10863f654();
          func_0x00010863f788(&puStack_1970);
          func_0x000107c279dc(auStack_1028);
          func_0x0001087e0d18();
          func_0x00010863f7a8();
          func_0x00010863a318(auStack_f40);
          func_0x0001087e0e80();
          FUN_10861b4fc();
          FUN_10861b5ac(auStack_fd8);
          func_0x000104bee8ec(&uStack_15e0);
          func_0x000104bee8ec(auStack_1588);
          func_0x00010863f788(&ppuStack_1530);
          func_0x000104bee8ec(&uStack_1140);
          FUN_10861b5ac(auStack_10a0);
          if (puStack_1988 < puStack_1980) {
            puVar13 = puStack_1988;
            func_0x0001087e0d2c();
            FUN_1087dfe6c();
            unaff_x24 = puVar13 + 0x4d0;
          }
          else {
            func_0x0001087e0ea0(((long)puStack_1988 - (long)puStack_1990) / 0x4d0);
            func_0x0001087e0e00();
            puVar13 = puStack_1520;
            func_0x0001087e0d2c();
            FUN_1087dfe6c();
            puStack_1520 = (undefined *)((long)puVar13 + 0x4d0);
            func_0x0001087e0d40();
            unaff_x24 = puStack_1988;
            func_0x0001087e0e10();
          }
          puStack_1988 = unaff_x24;
          func_0x0001087e0c78();
          FUN_1087e02dc();
          func_0x0001087e0314(auStack_1c80);
          FUN_1087e08f8(auStack_1db0);
        }
        else {
          ppuStack_b90._0_4_ = 0x8b02ac;
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          ppuStack_b90 = (undefined **)CONCAT44(ppuStack_b90._4_4_,3);
          func_0x0001087e0dcc();
        }
        FUN_1087e01f4(auStack_1b68);
        func_0x0001087e0334(auStack_1a98);
      }
      else {
LAB_1087de0a4:
        ppuStack_b90 = (undefined **)CONCAT44(ppuStack_b90._4_4_,4);
        func_0x0001087e0dcc();
        lVar22 = lVar22 + 1;
      }
    }
    func_0x000107c31428(alStack_1a00);
    plVar15 = alStack_1a00;
    func_0x000107c31424();
    uVar9 = lVar22 == 1;
    plVar14 = plStack_19b0;
    if (0 < lVar22) {
      func_0x000107c29794();
      ppuStack_b80 = (undefined **)0x0;
      ppuStack_b78 = (undefined **)0x0;
      ppuStack_b88 = (undefined **)0x0;
      ppuStack_b90 = &PTR_FUN_110a609a8;
      uStack_b70 = 0x2d9;
      plVar14 = plVar15;
      func_0x0001087e0ebc();
      func_0x0001087e0c78();
      func_0x0001087e0e98();
      func_0x0001087e0de0();
      plVar15 = (long *)*plVar15;
      (**(code **)(*plVar15 + 8))(plVar15,plVar14,lVar22);
      func_0x0001087e0c58();
      plVar14 = plStack_19b0;
    }
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      func_0x000107c29794();
      ppuStack_b80 = (undefined **)0x0;
      ppuStack_b78 = (undefined **)0x0;
      ppuStack_b88 = (undefined **)0x0;
      ppuStack_b90 = &PTR_FUN_110a609a8;
      uStack_b70 = 0x2dc;
      uVar2 = *(uint *)(plVar14 + 2);
      plVar16 = plVar15;
      func_0x0001087e0ebc();
      uVar9 = (uVar2 & 0xffff) == 0x2b7;
      func_0x0001087e0c78();
      func_0x0001087e0e98();
      func_0x0001087e0de0();
      plVar15 = (long *)*plVar15;
      (**(code **)(*plVar15 + 8))(plVar15,plVar16,plVar14[3]);
      func_0x0001087e0c58();
    }
    lVar22 = *(long *)(unaff_x20 + 0x28);
    ppuStack_1528 = (undefined **)param_4[1];
    ppuStack_1530 = (undefined **)*param_4;
    if (param_4[1] != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_02 != 0);
    }
    puStack_1518 = puStack_1988;
    puStack_1520 = puStack_1990;
    puStack_1510 = puStack_1980;
    puStack_1980 = (undefined *)0x0;
    puStack_1988 = (undefined *)0x0;
    puStack_1990 = (undefined *)0x0;
    func_0x000107c28150();
    lVar24 = *(long *)(lVar22 + 0x10);
    func_0x0001087e0ed0();
    lVar23 = *(long *)(lVar24 + 0x70);
    ppuStack_b90 = (undefined **)FUN_1087e0afc;
    ppuStack_b88 = &PTR_FUN_110a72070;
    ppuVar17 = (undefined **)0x28;
    __Znwm();
    ppuVar17[1] = (undefined *)ppuStack_1528;
    *ppuVar17 = (undefined *)ppuStack_1530;
    if (ppuStack_1528 != (undefined **)0x0) {
      ppuVar25 = ppuStack_1528 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar25,0x10);
        if (bVar4) {
          *ppuVar25 = *ppuVar25 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar17[3] = puStack_1518;
    ppuVar17[2] = puStack_1520;
    ppuVar17[4] = puStack_1510;
    puStack_1518 = (undefined *)0x0;
    puStack_1510 = (undefined *)0x0;
    puStack_1520 = (undefined *)0x0;
    ppuStack_b80 = ppuVar17;
    plStack_b60 = plVar15;
    func_0x0001087e0d2c(lVar24 + 0x48);
    func_0x000107c28154();
    func_0x0001087e0e20();
    func_0x0001087e0d4c();
    if (lVar23 == 0) {
      ppuStack_b88 = *(undefined ***)(lVar22 + 0x18);
      ppuStack_b90 = *(undefined ***)(lVar22 + 0x10);
      if (*(long *)(lVar22 + 0x18) != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001087e0da8();
      func_0x0001087e0d2c();
      (*extraout_x8_04)();
      func_0x0001087e0c30();
    }
    FUN_1087df9c8(&ppuStack_1530);
    FUN_1087e0668(&uStack_19c0);
    func_0x0001087e038c(&puStack_1990);
  }
  func_0x0001087e0c64(uStack_6b8);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1087df09c:
  FUN_1087dfd40();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1087df0a4);
  (*pcVar8)();
}



/* Entry: 1087ddef4; end: 1087df543;  */

void FUN_1087ddef4(undefined **param_1,long *param_2,long *param_3,ulong *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  byte bVar7;
  code *pcVar8;
  undefined1 uVar9;
  char *pcVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined **ppuVar17;
  ulong uVar18;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  ulong uVar19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long unaff_x20;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *unaff_x24;
  long lVar24;
  undefined **in_register_00005008;
  undefined **ppuVar25;
  undefined1 auStack_1770 [8];
  undefined **ppuStack_1768;
  undefined1 auStack_1760 [272];
  char cStack_1650;
  undefined1 auStack_1640 [72];
  undefined1 auStack_15f8 [24];
  undefined4 uStack_15e0;
  long lStack_15d8;
  long lStack_15d0;
  char cStack_15c0;
  undefined1 auStack_15b8 [64];
  undefined1 auStack_1578 [32];
  undefined8 uStack_1558;
  undefined1 auStack_1550 [32];
  char cStack_1530;
  undefined1 auStack_1528 [24];
  undefined1 auStack_1510 [24];
  undefined4 uStack_14f8;
  int iStack_14f4;
  undefined1 auStack_14f0 [40];
  ulong uStack_14c8;
  byte bStack_14b9;
  byte bStack_14b8;
  undefined1 auStack_14a0 [24];
  char cStack_1488;
  undefined8 uStack_1480;
  int iStack_1478;
  char cStack_1468;
  char cStack_1460;
  undefined1 auStack_1458 [112];
  undefined4 uStack_13e8;
  char cStack_13e0;
  undefined1 auStack_13d8 [24];
  long alStack_13c0 [8];
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  long *plStack_1370;
  undefined8 uStack_1368;
  undefined4 uStack_1360;
  undefined *puStack_1350;
  undefined *puStack_1348;
  undefined *puStack_1340;
  undefined *puStack_1330;
  undefined8 uStack_1328;
  ulong uStack_1320;
  undefined4 uStack_1318;
  undefined1 auStack_1310 [32];
  undefined8 uStack_12f0;
  undefined1 auStack_12d8 [32];
  undefined8 uStack_12b8;
  byte bStack_12b0;
  undefined1 auStack_12a8 [24];
  undefined4 uStack_1290;
  undefined1 auStack_1288 [224];
  undefined1 auStack_11a8 [32];
  undefined1 auStack_1188 [32];
  undefined1 auStack_1168 [32];
  char cStack_1148;
  undefined1 auStack_1140 [24];
  undefined4 uStack_1128;
  undefined1 auStack_1120 [24];
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined1 uStack_10f8;
  undefined1 auStack_10f0 [32];
  undefined1 uStack_10d0;
  undefined1 auStack_10c8 [64];
  undefined1 auStack_1088 [32];
  undefined1 auStack_1068 [48];
  undefined1 auStack_1038 [64];
  char cStack_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 uStack_fd8;
  undefined1 uStack_fd0;
  undefined1 auStack_fc8 [40];
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined4 uStack_f70;
  ulong uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined1 uStack_f50;
  undefined1 auStack_f48 [64];
  undefined1 uStack_f08;
  undefined **ppuStack_ef0;
  undefined **ppuStack_ee8;
  undefined *puStack_ee0;
  undefined *puStack_ed8;
  undefined *puStack_ed0;
  ulong uStack_ec8;
  undefined8 uStack_eb0;
  undefined1 auStack_e98 [32];
  undefined8 uStack_e78;
  byte bStack_e70;
  undefined1 auStack_e68 [24];
  undefined4 uStack_e50;
  undefined1 auStack_e48 [40];
  byte bStack_e20;
  byte bStack_dd8;
  undefined1 auStack_d68 [32];
  undefined1 auStack_d48 [32];
  undefined1 auStack_d28 [32];
  char cStack_d08;
  undefined1 auStack_d00 [24];
  undefined4 uStack_ce8;
  undefined1 auStack_ce0 [24];
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined1 uStack_cb8;
  undefined1 auStack_cb0 [32];
  undefined1 uStack_c90;
  undefined1 auStack_c88 [64];
  undefined1 auStack_c48 [32];
  undefined1 auStack_c28 [48];
  undefined1 auStack_bf8 [64];
  char cStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined1 uStack_b90;
  undefined1 auStack_b88 [32];
  char cStack_b68;
  ulong uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  char cStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined4 uStack_ad0;
  ulong uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  char cStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined **ppuStack_a90;
  undefined **ppuStack_a88;
  long lStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined1 auStack_a60 [24];
  undefined1 auStack_a48 [24];
  char cStack_a30;
  undefined1 auStack_a28 [32];
  undefined1 uStack_a08;
  undefined1 uStack_9f0;
  undefined1 auStack_9e8 [40];
  undefined1 uStack_9c0;
  undefined1 auStack_9b8 [24];
  undefined1 uStack_9a0;
  undefined1 auStack_998 [56];
  undefined1 uStack_960;
  undefined1 auStack_958 [24];
  undefined1 uStack_940;
  undefined1 auStack_938 [24];
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 auStack_900 [352];
  undefined1 uStack_7a0;
  undefined1 auStack_798 [32];
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined1 auStack_758 [200];
  undefined1 uStack_690;
  undefined1 auStack_588 [24];
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined4 uStack_530;
  long *plStack_520;
  char cStack_4c8;
  char cStack_478;
  undefined8 uStack_78;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001087e0d70();
  uVar9 = *param_3 == param_3[1];
  uStack_78 = extraout_x8;
  if ((bool)uVar9) {
    func_0x0001087e0e60();
    ppuStack_ef0 = param_1;
    ppuStack_ee8 = in_register_00005008;
    if (extraout_x8_02 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    lVar22 = *(long *)(unaff_x20 + 0x10);
    func_0x0001087e0ed8();
    lVar21 = *(long *)(lVar22 + 0x70);
    ppuStack_550 = (undefined **)FUN_1087e05dc;
    ppuStack_548 = &PTR_FUN_110a72058;
    ppuStack_538 = ppuStack_ee8;
    ppuStack_540 = ppuStack_ef0;
    ppuVar17 = ppuStack_ef0;
    ppuVar25 = ppuStack_ee8;
    if (ppuStack_ee8 != (undefined **)0x0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_02 != 0);
    }
    plStack_520 = param_2;
    func_0x0001087e0d2c(lVar22 + 0x48);
    func_0x000107c28154();
    func_0x0001087e0c24(ppuStack_548);
    func_0x0001087e0d54();
    if (lVar21 == 0) {
      func_0x0001087e0e50();
      ppuStack_550 = ppuVar17;
      ppuStack_548 = ppuVar25;
      if (extraout_x8_03 != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_03 != 0);
      }
      func_0x0001087e0da8();
      func_0x0001087e0d2c();
      (*extraout_x8_04)();
      func_0x0001087e0c30();
    }
    FUN_10863fd4c(&ppuStack_ef0);
  }
  else {
    puStack_1348 = (undefined *)0x0;
    puStack_1350 = (undefined *)0x0;
    puStack_1340 = (undefined *)0x0;
    uVar18 = (param_3[1] - *param_3) / 0x58;
    func_0x0001087e0f3c();
    if (extraout_x8_00 <= uVar18) goto LAB_1087df09c;
    FUN_1087dfe04(&ppuStack_ef0);
    func_0x0001087e0d40();
    func_0x0001087e0e10();
    uStack_1368 = 0;
    plStack_1370 = (long *)0x0;
    uStack_1378 = 0;
    uStack_1380 = 0;
    uStack_1360 = 0x3f800000;
    pcVar10 = (char *)(unaff_x20 + 0x48);
    func_0x000107c289e8();
    cVar3 = *pcVar10;
    uVar20 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000107c278b8(auStack_13d8,&UNK_10f4bb943);
    func_0x000107c31420(alStack_13c0,uVar20,auStack_13d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_13d8);
    lVar21 = 0;
    lVar23 = param_3[1];
    for (lVar22 = *param_3; lVar22 != lVar23; lVar22 = lVar22 + 0x58) {
      if (*(char *)(lVar22 + 0x50) == '\x01') {
        if (*(char *)(lVar22 + 0x4f) < '\0') {
          if (*(long *)(lVar22 + 0x40) == 0) goto LAB_1087de0a4;
        }
        else if (*(char *)(lVar22 + 0x4f) == '\0') goto LAB_1087de0a4;
        func_0x0001087e0fcc(*(undefined8 *)(unaff_x20 + 0x18));
        FUN_108869508();
        ppuStack_ef0 = (undefined **)0x0;
        ppuStack_ee8 = (undefined **)((ulong)ppuStack_ee8 & 0xffffffffffffff00);
        bStack_e70 = 0;
        if (cStack_4c8 == '\0') {
          unaff_x24 = (undefined *)0x0;
        }
        else {
          func_0x0001087e0fa4();
          func_0x0001087e0780();
          func_0x0001087e075c(unaff_x24 + 0x10);
          unaff_x24 = (undefined *)(ulong)bStack_e70;
        }
        func_0x0001087e0f7c(ppuStack_ef0);
        _bzero();
        if (((ulong)unaff_x24 & 1) == 0) {
          func_0x0001087e0334(&uStack_1328);
          cStack_13e0 = '\0';
          auStack_1458[0] = 0;
        }
        else {
          func_0x0001087e0334(&uStack_1328);
          if ((bStack_e70 & 1) == 0) {
            unaff_x24 = ppuStack_ef0[1];
            func_0x0001087e0d18();
            func_0x0001087e0e18();
            func_0x0001087e0f70(&puStack_1330);
            func_0x0001087e0d5c();
            func_0x0001087e0c9c();
            func_0x0001087e0d68();
            func_0x0001087e0cac();
          }
          FUN_1087e079c(auStack_1458,&ppuStack_ee8);
          cStack_13e0 = '\x01';
        }
        pppuVar11 = &ppuStack_ee8;
        func_0x0001087e0334();
        func_0x0001087e0c78();
        FUN_1087e06a8();
        auStack_1528[0] = 0;
        cStack_1460 = '\0';
        if (cVar3 != '\0') {
          func_0x0001087e0fcc(*(undefined8 *)(unaff_x20 + 0x18));
          FUN_108869674();
          ppuStack_ef0 = (undefined **)0x0;
          ppuStack_ee8 = (undefined **)((ulong)ppuStack_ee8 & 0xffffffffffffff00);
          bStack_e20 = 0;
          if (cStack_478 == '\0') {
            unaff_x24 = (undefined *)0x0;
          }
          else {
            func_0x0001087e0fa4();
            func_0x0001087e0150();
            func_0x0001087e012c(unaff_x24 + 0x10);
            unaff_x24 = (undefined *)(ulong)bStack_e20;
          }
          func_0x0001087e0f7c(ppuStack_ef0);
          _bzero();
          if (((ulong)unaff_x24 & 1) == 0) {
            FUN_1087e01f4(&uStack_1328);
            uStack_690 = 0;
            auStack_758[0] = 0;
          }
          else {
            FUN_1087e01f4(&uStack_1328);
            if ((bStack_e20 & 1) == 0) {
              unaff_x24 = ppuStack_ef0[1];
              func_0x0001087e0e18(auStack_900);
              func_0x0001087e0d5c(&puStack_1330);
              func_0x0001087e0c9c();
              func_0x0001087e0d68();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_900);
            }
            func_0x0001087e0d18();
            FUN_1087e016c();
            uStack_690 = 1;
          }
          FUN_1087e01f4(&ppuStack_ee8);
          pppuVar11 = (undefined ***)auStack_1528;
          func_0x0001087e0f70();
          FUN_1087e0070();
          func_0x0001087e0d18();
          FUN_1087e01f4();
          func_0x0001087e0c78();
          FUN_1087e0848();
        }
        if (cStack_13e0 == '\x01') {
          uVar1 = 0x8b02ab;
          if (cStack_1460 == '\0') {
            uVar1 = 0x8b02a9;
          }
          ppuStack_550 = (undefined **)CONCAT44(ppuStack_550._4_4_,uVar1);
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          switch(uStack_13e8) {
          case 1:
            uVar19 = 0x100000000;
            uVar18 = 1;
            break;
          case 2:
          case 4:
            puStack_1330 = (undefined *)0x4;
            uStack_1328 = (undefined *)((ulong)uStack_1328._4_4_ << 0x20);
            func_0x000107c29794();
            ppuStack_548 = (undefined **)0x0;
            ppuStack_540 = (undefined **)0x0;
            ppuStack_538 = (undefined **)0x0;
            ppuStack_550 = &PTR_FUN_110a609a8;
            uStack_530 = 0x2dd;
            pppuVar12 = pppuVar11;
            func_0x0001087e0ebc();
            func_0x0001087e0c78();
            func_0x0001087e0e98();
            func_0x0001087e0de0();
            (**(code **)(**pppuVar11 + 8))(*pppuVar11,pppuVar12,1);
            func_0x0001087e0c58();
            goto code_r0x0001087de5c4;
          case 3:
            uVar18 = 0;
            uVar19 = 0x300000000;
            break;
          case 5:
            uVar18 = 0;
            uVar19 = 0x400000000;
            break;
          default:
            uVar18 = 0;
            uVar19 = 0;
          }
          puStack_1330 = (undefined *)(uVar19 | uVar18);
          uStack_1328 = (undefined *)CONCAT44(uStack_1328._4_4_,1);
code_r0x0001087de5c4:
          puVar13 = puStack_1348;
          if (puStack_1348 < puStack_1340) {
            func_0x0001087e0f5c();
            FUN_1087e0214(puVar13,lVar22);
            unaff_x24 = puVar13 + 0x4d0;
            puStack_1348 = unaff_x24;
          }
          else {
            func_0x0001087e0ea0(((long)puStack_1348 - (long)puStack_1350) / 0x4d0);
            func_0x0001087e0e00();
            puVar13 = puStack_ee0;
            func_0x0001087e0f5c();
            FUN_1087e0214();
            puStack_ee0 = (undefined *)((long)puVar13 + 0x4d0);
            func_0x0001087e0d40();
            unaff_x24 = puStack_1348;
            func_0x0001087e0e10();
            puStack_1348 = unaff_x24;
          }
        }
        else if (cStack_1460 == '\x01') {
          ppuStack_550 = (undefined **)CONCAT44(ppuStack_550._4_4_,0x8b02aa);
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          FUN_1088695c4(auStack_1770,*(undefined8 *)(unaff_x20 + 0x18),lVar22 + 0x38,lVar22);
          ppuStack_ef0 = (undefined **)0x0;
          ppuStack_ee8 = (undefined **)((ulong)ppuStack_ee8 & 0xffffffffffffff00);
          bStack_dd8 = 0;
          if (cStack_1650 == '\0') {
            ppuVar17 = (undefined **)0x0;
          }
          else {
            func_0x0001087e0a1c(&ppuStack_ee8,auStack_1760);
            func_0x0001087e09f8(auStack_1760);
            ppuVar17 = ppuStack_ef0;
          }
          bVar7 = bStack_dd8;
          ppuVar25 = ppuStack_1768;
          ppuStack_ef0 = ppuStack_1768;
          ppuStack_1768 = ppuVar17;
          _bzero(&puStack_1330,0x120);
          if ((bVar7 & 1) == 0) {
            func_0x0001087e0314(&uStack_1328);
LAB_1087de43c:
            cStack_1530 = '\0';
            auStack_1640[0] = 0;
          }
          else {
            func_0x0001087e0314(&uStack_1328);
            if (ppuVar25 == (undefined **)0x0) goto LAB_1087de43c;
            if ((bStack_dd8 & 1) == 0) {
              func_0x0001087e0d18();
              func_0x0001087e0e18();
              func_0x0001087e0f70(&puStack_1330);
              func_0x0001087e0d5c();
              func_0x0001087e0c9c();
              func_0x0001087e0d68();
              func_0x0001087e0cac();
            }
            FUN_1087e0a38(auStack_1640,&ppuStack_ee8);
            cStack_1530 = '\x01';
          }
          func_0x0001087e0314(&ppuStack_ee8);
          auStack_a60[0] = 0;
          cStack_a30 = '\0';
          if ((iStack_14f4 == 0) && ((bStack_14b8 & 1) != 0)) {
            uVar18 = uStack_14c8;
            if (-1 < (char)bStack_14b9) {
              uVar18 = (ulong)bStack_14b9;
            }
            if (uVar18 != 0) {
              uStack_1328 = (undefined *)0x0;
              puStack_1330 = (undefined *)0x0;
              uStack_1320 = 0;
              uStack_a68 = 0;
              uStack_a78 = 0;
              uStack_a70 = 0;
              func_0x000107c27a50(&uStack_a78);
              if (cStack_1468 == '\x01') {
                ppuStack_ee8 = (undefined **)0x0;
                ppuStack_ef0 = &PTR_FUN_110a92130;
                puStack_ed8 = (undefined *)0x0;
                puStack_ed0 = (undefined *)0x0;
                puStack_ee0 = (undefined *)0x0;
                uStack_ec8 = uStack_ec8 & 0xffffffff00000000;
                pppuVar11 = &ppuStack_ef0;
                func_0x000107c3034c(pppuVar11,uStack_1480,iStack_1478 - (int)uStack_1480);
                if ((int)pppuVar11 != 0) {
                  FUN_108845754(auStack_758,&ppuStack_ef0);
                  func_0x0001087e0f70(&puStack_1330);
                  FUN_1086f17d4();
                  func_0x0001087e0d18();
                  func_0x000107c27a50();
                }
                func_0x000107c2a4cc(&ppuStack_ef0);
              }
              func_0x0001087e0e18(auStack_1528,&ppuStack_a90);
              puStack_ee0 = (undefined *)lStack_a80;
              uStack_ec8 = uStack_1320;
              puStack_ed0 = uStack_1328;
              puStack_ed8 = puStack_1330;
              uStack_1320 = 0;
              puStack_1330 = (undefined *)0x0;
              uStack_1328 = (undefined *)0x0;
              ppuStack_ee8 = ppuStack_a88;
              ppuStack_ef0 = ppuStack_a90;
              ppuStack_a88 = (undefined **)0x0;
              ppuStack_a90 = (undefined **)0x0;
              lStack_a80 = 0;
              uStack_a98 = 0;
              uStack_aa8 = 0;
              uStack_aa0 = 0;
              if (cStack_a30 == '\x01') {
                func_0x000107c27b9c(auStack_a60,&ppuStack_ef0);
                FUN_1086f17d4(auStack_a48,&puStack_ed8);
              }
              else {
                FUN_10861b4a4(auStack_a60,&ppuStack_ef0);
              }
              FUN_10861b5cc(&ppuStack_ef0);
              func_0x000107c27a50(&uStack_aa8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_a90);
              func_0x000107c27a50(&puStack_1330);
            }
          }
          func_0x000107c27994(&uStack_b20,auStack_1510);
          ppuStack_ee8 = (undefined **)0x0;
          ppuStack_ef0 = (undefined **)0x0;
          puStack_ee0 = (undefined *)0x0;
          if (cStack_1488 == '\x01') {
            func_0x000107c27994(&uStack_b40,auStack_14a0);
          }
          else {
            uStack_b38 = 0;
            uStack_b40 = 0;
            uStack_b30 = 0;
            puStack_ee0 = (undefined *)0x0;
            ppuStack_ef0 = (undefined **)0x0;
            ppuStack_ee8 = (undefined **)0x0;
          }
          uVar1 = uStack_14f8;
          func_0x000107c27f70(&uStack_b60,auStack_1528);
          uStack_af0 = uStack_b10;
          uStack_af8 = uStack_b18;
          uStack_b00 = uStack_b20;
          uStack_b10 = 0;
          uStack_b18 = 0;
          uStack_b20 = 0;
          uStack_ae0 = uStack_b38;
          uStack_ae8 = uStack_b40;
          uStack_ad8 = uStack_b30;
          uStack_b40 = 0;
          uStack_b38 = 0;
          uStack_b30 = 0;
          uStack_ad0 = uVar1;
          uStack_ac8 = uStack_ac8 & 0xffffffffffffff00;
          cStack_ab0 = cStack_b48 == '\x01';
          if ((bool)cStack_ab0) {
            uStack_ac0 = uStack_b58;
            uStack_ac8 = uStack_b60;
            uStack_ab8 = uStack_b50;
            uStack_b50 = 0;
            uStack_b60 = 0;
            uStack_b58 = 0;
          }
          func_0x000107c279a4(&uStack_b60);
          func_0x000107c27914(&uStack_b40);
          func_0x000107c27914(&ppuStack_ef0);
          func_0x000107c27914(&uStack_b20);
          ppuStack_ef0 = (undefined **)((ulong)ppuStack_ef0 & 0xffffffffffffff00);
          cStack_b68 = '\0';
          if (cStack_1530 == '\x01') {
            uStack_568 = 0;
            uStack_570 = 0;
            uStack_560 = 0;
            if (cStack_15c0 == '\x01') {
              func_0x00010528d190(&uStack_570,(lStack_15d0 - lStack_15d8) / 0x18);
              lVar5 = lStack_15d0;
              for (lVar24 = lStack_15d8; lVar24 != lVar5; lVar24 = lVar24 + 0x18) {
                FUN_1086c2e14(&uStack_570,lVar24);
              }
            }
            func_0x000107c27994(auStack_588,auStack_15f8);
            uVar1 = uStack_15e0;
            func_0x0001087e0e80();
            func_0x000104be0ccc();
            func_0x000107c279d4(auStack_798,auStack_1578);
            auStack_900[0] = 0;
            uStack_7a0 = 0;
            func_0x0001087e0d18(uStack_1558);
            func_0x00010529669c();
            uStack_918 = uStack_568;
            uStack_920 = uStack_570;
            uStack_910 = uStack_560;
            uStack_560 = 0;
            uStack_568 = 0;
            uStack_570 = 0;
            FUN_10867be90(auStack_938,auStack_15b8);
            auStack_958[0] = 0;
            uStack_940 = 0;
            auStack_998[0] = 0;
            uStack_960 = 0;
            auStack_9b8[0] = 0;
            uStack_9a0 = 0;
            auStack_9e8[0] = 0;
            uStack_9c0 = 0;
            auStack_f48[0] = 0;
            uStack_f08 = 0;
            uStack_a08 = 0;
            uStack_9f0 = 0;
            func_0x000104be0ccc(auStack_a28,auStack_1550);
            func_0x00010528ce14(&puStack_1330,auStack_588,uVar1,auStack_758,&uStack_920,0,
                                auStack_938,0,0,0,auStack_958,0);
            func_0x000107c279c4(auStack_a28);
            func_0x000104bee410(auStack_f48);
            func_0x000107c27a1c(auStack_9e8);
            func_0x000107c27a40(auStack_9b8);
            func_0x000107c27a2c(auStack_998);
            func_0x000107c279c4(auStack_958);
            func_0x000104bee630(auStack_938);
            func_0x000104be1594(&uStack_920);
            func_0x0001087e0d18();
            func_0x000104bee6b8();
            func_0x000104bee6e8(auStack_900);
            func_0x0001087e0ef8();
            func_0x0001087e0e80();
            func_0x000107c279c4();
            func_0x0001087e0eec();
            func_0x0001087e0f04();
            if (cStack_b68 == '\x01') {
              func_0x000107c3194c(&ppuStack_ef0,&puStack_1330);
              puStack_ed8 = (undefined *)CONCAT44(puStack_ed8._4_4_,uStack_1318);
              func_0x0001052b2b60(&puStack_ed0,auStack_1310);
              uStack_eb0 = uStack_12f0;
              func_0x000107c28908(auStack_e98,auStack_12d8);
              uStack_e78 = uStack_12b8;
              bStack_e70 = bStack_12b0;
              if (cStack_d08 == cStack_1148) {
                if (cStack_d08 != '\0') {
                  func_0x000107c27b9c(auStack_e68,auStack_12a8);
                  uStack_e50 = uStack_1290;
                  FUN_10869d160(auStack_e48,auStack_1288);
                  func_0x000107c27c54(auStack_d68,auStack_11a8);
                  FUN_10866a140(auStack_d48,auStack_1188);
                  FUN_10866a140(auStack_d28,auStack_1168);
                }
              }
              else if (cStack_d08 == '\0') {
                func_0x00010528cffc(auStack_e68,auStack_12a8);
              }
              else {
                FUN_1087c40d4(auStack_e68);
              }
              FUN_10869e39c(auStack_d00,auStack_1140);
              uStack_ce8 = uStack_1128;
              FUN_10865f9c0(auStack_ce0,auStack_1120);
              uStack_cc0 = uStack_1100;
              uStack_cc8 = uStack_1108;
              uStack_cb8 = uStack_10f8;
              func_0x0001052b2b60(auStack_cb0,auStack_10f0);
              uStack_c90 = uStack_10d0;
              FUN_10869e800(auStack_c88,auStack_10c8);
              FUN_10869e26c(auStack_c48,auStack_1088);
              func_0x000107c28ea8(auStack_c28,auStack_1068);
              if (cStack_bb8 == cStack_ff8) {
                if (cStack_bb8 != '\0') {
                  func_0x000108794768(auStack_bf8,auStack_1038);
                }
              }
              else if (cStack_bb8 == '\0') {
                func_0x00010528d148(auStack_bf8,auStack_1038);
              }
              else {
                FUN_1087c4174(auStack_bf8);
              }
              uStack_ba8 = uStack_fe8;
              uStack_bb0 = uStack_ff0;
              uStack_b98 = uStack_fd8;
              uStack_ba0 = uStack_fe0;
              uStack_b90 = uStack_fd0;
              func_0x0001052b2b60(auStack_b88,auStack_fc8);
            }
            else {
              func_0x00010863f76c(&ppuStack_ef0,&puStack_1330);
            }
            func_0x000104bee3a8(&puStack_1330);
          }
          FUN_108685a78(auStack_f48,lVar22);
          uStack_f90 = uStack_af0;
          iVar6 = iStack_14f4;
          uStack_f98 = uStack_af8;
          uStack_fa0 = uStack_b00;
          uStack_b00 = 0;
          uStack_af8 = 0;
          uStack_af0 = 0;
          uStack_f80 = uStack_ae0;
          uStack_f88 = uStack_ae8;
          uStack_f78 = uStack_ad8;
          uStack_ae0 = 0;
          uStack_ad8 = 0;
          uStack_ae8 = 0;
          uStack_f70 = uStack_ad0;
          uStack_f68 = uStack_f68 & 0xffffffffffffff00;
          uStack_f50 = cStack_ab0 == '\x01';
          if ((bool)uStack_f50) {
            uStack_f60 = uStack_ac0;
            uStack_f68 = uStack_ac8;
            uStack_f58 = uStack_ab8;
            uStack_ac0 = 0;
            uStack_ab8 = 0;
            uStack_ac8 = 0;
          }
          FUN_10861b464(auStack_998,auStack_a60);
          uStack_770 = 0;
          uStack_778 = 0;
          uStack_768 = 0;
          FUN_10861b3fc(auStack_900,&uStack_fa0,iVar6,auStack_998,&uStack_778);
          func_0x0001087e0d18();
          func_0x00010863f7c8();
          func_0x000107c279d4(auStack_9e8,auStack_14f0);
          FUN_10863f728(&puStack_1330,&ppuStack_ef0);
          func_0x0001087e0c78();
          FUN_10863f654();
          func_0x00010863f788(&puStack_1330);
          func_0x000107c279dc(auStack_9e8);
          func_0x0001087e0d18();
          func_0x00010863f7a8();
          func_0x00010863a318(auStack_900);
          func_0x0001087e0e80();
          FUN_10861b4fc();
          FUN_10861b5ac(auStack_998);
          func_0x000104bee8ec(&uStack_fa0);
          func_0x000104bee8ec(auStack_f48);
          func_0x00010863f788(&ppuStack_ef0);
          func_0x000104bee8ec(&uStack_b00);
          FUN_10861b5ac(auStack_a60);
          if (puStack_1348 < puStack_1340) {
            puVar13 = puStack_1348;
            func_0x0001087e0d2c();
            FUN_1087dfe6c();
            unaff_x24 = puVar13 + 0x4d0;
          }
          else {
            func_0x0001087e0ea0(((long)puStack_1348 - (long)puStack_1350) / 0x4d0);
            func_0x0001087e0e00();
            puVar13 = puStack_ee0;
            func_0x0001087e0d2c();
            FUN_1087dfe6c();
            puStack_ee0 = (undefined *)((long)puVar13 + 0x4d0);
            func_0x0001087e0d40();
            unaff_x24 = puStack_1348;
            func_0x0001087e0e10();
          }
          puStack_1348 = unaff_x24;
          func_0x0001087e0c78();
          FUN_1087e02dc();
          func_0x0001087e0314(auStack_1640);
          FUN_1087e08f8(auStack_1770);
        }
        else {
          ppuStack_550._0_4_ = 0x8b02ac;
          func_0x0001087e0cc4();
          func_0x0001087e0e70();
          ppuStack_550 = (undefined **)CONCAT44(ppuStack_550._4_4_,3);
          func_0x0001087e0dcc();
        }
        FUN_1087e01f4(auStack_1528);
        func_0x0001087e0334(auStack_1458);
      }
      else {
LAB_1087de0a4:
        ppuStack_550 = (undefined **)CONCAT44(ppuStack_550._4_4_,4);
        func_0x0001087e0dcc();
        lVar21 = lVar21 + 1;
      }
    }
    func_0x000107c31428(alStack_13c0);
    plVar15 = alStack_13c0;
    func_0x000107c31424();
    uVar9 = lVar21 == 1;
    plVar14 = plStack_1370;
    if (0 < lVar21) {
      func_0x000107c29794();
      ppuStack_540 = (undefined **)0x0;
      ppuStack_538 = (undefined **)0x0;
      ppuStack_548 = (undefined **)0x0;
      ppuStack_550 = &PTR_FUN_110a609a8;
      uStack_530 = 0x2d9;
      plVar14 = plVar15;
      func_0x0001087e0ebc();
      func_0x0001087e0c78();
      func_0x0001087e0e98();
      func_0x0001087e0de0();
      plVar15 = (long *)*plVar15;
      (**(code **)(*plVar15 + 8))(plVar15,plVar14,lVar21);
      func_0x0001087e0c58();
      plVar14 = plStack_1370;
    }
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      func_0x000107c29794();
      ppuStack_540 = (undefined **)0x0;
      ppuStack_538 = (undefined **)0x0;
      ppuStack_548 = (undefined **)0x0;
      ppuStack_550 = &PTR_FUN_110a609a8;
      uStack_530 = 0x2dc;
      uVar2 = *(uint *)(plVar14 + 2);
      plVar16 = plVar15;
      func_0x0001087e0ebc();
      uVar9 = (uVar2 & 0xffff) == 0x2b7;
      func_0x0001087e0c78();
      func_0x0001087e0e98();
      func_0x0001087e0de0();
      plVar15 = (long *)*plVar15;
      (**(code **)(*plVar15 + 8))(plVar15,plVar16,plVar14[3]);
      func_0x0001087e0c58();
    }
    lVar21 = *(long *)(unaff_x20 + 0x28);
    ppuStack_ee8 = (undefined **)param_4[1];
    ppuStack_ef0 = (undefined **)*param_4;
    if (param_4[1] != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10 != 0);
    }
    puStack_ed8 = puStack_1348;
    puStack_ee0 = puStack_1350;
    puStack_ed0 = puStack_1340;
    puStack_1340 = (undefined *)0x0;
    puStack_1348 = (undefined *)0x0;
    puStack_1350 = (undefined *)0x0;
    func_0x000107c28150();
    lVar23 = *(long *)(lVar21 + 0x10);
    func_0x0001087e0ed0();
    lVar22 = *(long *)(lVar23 + 0x70);
    ppuStack_550 = (undefined **)FUN_1087e0afc;
    ppuStack_548 = &PTR_FUN_110a72070;
    ppuVar17 = (undefined **)0x28;
    __Znwm();
    ppuVar17[1] = (undefined *)ppuStack_ee8;
    *ppuVar17 = (undefined *)ppuStack_ef0;
    if (ppuStack_ee8 != (undefined **)0x0) {
      ppuVar25 = ppuStack_ee8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar25,0x10);
        if (bVar4) {
          *ppuVar25 = *ppuVar25 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuVar17[3] = puStack_ed8;
    ppuVar17[2] = puStack_ee0;
    ppuVar17[4] = puStack_ed0;
    puStack_ed8 = (undefined *)0x0;
    puStack_ed0 = (undefined *)0x0;
    puStack_ee0 = (undefined *)0x0;
    ppuStack_540 = ppuVar17;
    plStack_520 = plVar15;
    func_0x0001087e0d2c(lVar23 + 0x48);
    func_0x000107c28154();
    func_0x0001087e0e20();
    func_0x0001087e0d4c();
    if (lVar22 == 0) {
      ppuStack_548 = *(undefined ***)(lVar21 + 0x18);
      ppuStack_550 = *(undefined ***)(lVar21 + 0x10);
      if (*(long *)(lVar21 + 0x18) != 0) {
        do {
          func_0x0001087e0c48();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087e0da8();
      func_0x0001087e0d2c();
      (*extraout_x8_01)();
      func_0x0001087e0c30();
    }
    FUN_1087df9c8(&ppuStack_ef0);
    FUN_1087e0668(&uStack_1380);
    func_0x0001087e038c(&puStack_1350);
  }
  func_0x0001087e0c64(uStack_78);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1087df09c:
  FUN_1087dfd40();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1087df0a4);
  (*pcVar8)();
}



/* Entry: 1087df544; end: 1087df62b;  */

void FUN_1087df544(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    func_0x0001087e0f30(uVar3);
    lVar2 = uVar3 + 0x4d0;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_1087e0010(param_1,(long)(uVar3 - *param_1) / 0x4d0 + 1);
    FUN_1087dfe04(auStack_68,plVar1,(param_1[1] - *param_1) / 0x4d0,param_1 + 2);
    func_0x0001087e0f30();
    lStack_58 = lStack_58 + 0x4d0;
    FUN_1087dfd4c(param_1,auStack_68);
    lVar2 = param_1[1];
    func_0x0001087dfec0(auStack_68);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1087df62c; end: 1087df9c7;  */

long * FUN_1087df62c(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong unaff_x21;
  ulong uVar13;
  ulong uVar14;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  iVar2 = *param_2;
  uVar13 = (ulong)iVar2;
  uVar14 = param_1[1];
  if (uVar14 != 0) {
    uVar5 = uVar14 - 1;
    if ((uVar14 & uVar5) == 0) {
      unaff_x21 = uVar5 & uVar13;
    }
    else {
      unaff_x21 = uVar13;
      if (uVar14 <= uVar13) {
        uVar6 = 0;
        if (uVar14 != 0) {
          uVar6 = uVar13 / uVar14;
        }
        unaff_x21 = uVar13 - uVar6 * uVar14;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x21 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1087df6e0;
          uVar6 = plVar12[1];
          if (uVar6 != uVar13) break;
          if ((int)plVar12[2] == iVar2) goto LAB_1087df990;
        }
        if ((uVar14 & uVar5) == 0) {
          uVar6 = uVar6 & uVar5;
        }
        else if (uVar14 <= uVar6) {
          uVar7 = 0;
          if (uVar14 != 0) {
            uVar7 = uVar6 / uVar14;
          }
          uVar6 = uVar6 - uVar7 * uVar14;
        }
      } while (uVar6 == unaff_x21);
    }
  }
LAB_1087df6e0:
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar12 = 0;
  plVar12[1] = uVar13;
  *(int *)(plVar12 + 2) = iVar2;
  plVar12[3] = 0;
  plStack_60 = plVar1;
  if ((uVar14 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar14))
  goto LAB_1087df918;
  uVar5 = 1;
  if (2 < uVar14) {
    uVar5 = (ulong)((uVar14 & uVar14 - 1) != 0);
  }
  uVar5 = uVar5 | uVar14 << 1;
  uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  plStack_68 = plVar12;
  if (uVar5 - 1 == 0) {
    uVar5 = 2;
  }
  else if ((uVar5 & uVar5 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar14 = param_1[1];
  }
  if (uVar14 < uVar5) {
LAB_1087df78c:
    if (uVar5 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1087df9b8);
      (*pcVar3)();
    }
    lVar4 = uVar5 << 3;
    __Znwm(lVar4);
    FUN_1087e08b4(param_1,lVar4);
    param_1[1] = uVar5;
    lVar4 = *param_1;
    for (uVar14 = 0; uVar5 != uVar14; uVar14 = uVar14 + 1) {
      *(undefined8 *)(lVar4 + uVar14 * 8) = 0;
    }
    plVar8 = (long *)*plVar1;
    uVar14 = uVar5;
    if (plVar8 != (long *)0x0) {
      uVar10 = plVar8[1];
      uVar7 = uVar5 - 1;
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar10 / uVar5;
      }
      uVar11 = uVar10;
      if (uVar5 <= uVar10) {
        uVar11 = uVar10 - uVar6 * uVar5;
      }
      if ((uVar5 & uVar7) == 0) {
        uVar11 = uVar10 & uVar7;
      }
      *(long **)(lVar4 + uVar11 * 8) = plVar1;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        uVar6 = plVar8[1];
        if ((uVar5 & uVar7) == 0) {
          uVar6 = uVar6 & uVar7;
        }
        else if (uVar5 <= uVar6) {
          uVar10 = 0;
          if (uVar5 != 0) {
            uVar10 = uVar6 / uVar5;
          }
          uVar6 = uVar6 - uVar10 * uVar5;
        }
        if (uVar6 != uVar11) {
          if (*(long *)(lVar4 + uVar6 * 8) == 0) {
            *(long **)(lVar4 + uVar6 * 8) = plVar9;
            uVar11 = uVar6;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + uVar6 * 8);
            **(long **)(lVar4 + uVar6 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (uVar5 < uVar14) {
    uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar14 < 3) || ((uVar14 & uVar14 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar6) {
      uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 < uVar14) {
      if (uVar5 != 0) goto LAB_1087df78c;
      FUN_1087e08b4(param_1,0);
      param_1[1] = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = param_1[1];
    }
  }
  if ((uVar14 & uVar14 - 1) == 0) {
    unaff_x21 = uVar14 - 1 & uVar13;
  }
  else {
    unaff_x21 = uVar13;
    if (uVar14 <= uVar13) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar13 / uVar14;
      }
      unaff_x21 = uVar13 - uVar5 * uVar14;
    }
  }
LAB_1087df918:
  lVar4 = *param_1;
  plVar8 = *(long **)(lVar4 + unaff_x21 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar4 + unaff_x21 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar13 = *(ulong *)(*plVar12 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar13 = uVar13 & uVar14 - 1;
      }
      else if (uVar14 <= uVar13) {
        uVar5 = 0;
        if (uVar14 != 0) {
          uVar5 = uVar13 / uVar14;
        }
        uVar13 = uVar13 - uVar5 * uVar14;
      }
      *(long **)(lVar4 + uVar13 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar8;
    *plVar8 = (long)plVar12;
  }
  plStack_68 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1087e08cc(&plStack_68);
LAB_1087df990:
  return plVar12 + 3;
}



/* Entry: 1087df9c8; end: 1087df9ef;  */

long FUN_1087df9c8(long param_1)

{
  func_0x0001087e038c(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087df9f0; end: 1087dfc8f;  */

void FUN_1087df9f0(long param_1,long *param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_register_00005008;
  long alStack_d0 [3];
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long lStack_98;
  long *plStack_70;
  undefined8 uStack_58;
  
  func_0x0001087e0d70();
  uVar1 = *param_3 == param_3[1];
  uStack_58 = extraout_x8;
  if ((bool)uVar1) {
    func_0x0001087e0e60();
    alStack_d0[0] = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_02 != 0);
    }
    func_0x000107c28150();
    plVar4 = *(long **)(unaff_x20 + 0x10);
    func_0x0001087e0ed8();
    lVar5 = plVar4[0xe];
    func_0x0001087e0f90(0x1087e0b88);
    if (extraout_x8_04 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_03 != 0);
    }
    plVar3 = plVar4 + 9;
    plStack_70 = param_2;
    func_0x000107c28154(plVar3,&lStack_a0);
    func_0x0001087e0c24(lStack_98);
    func_0x0001087e0d54();
    if (lVar5 != 0) goto LAB_1087dfba0;
    func_0x0001087e0e50();
    lStack_a0 = param_1;
    lStack_98 = in_register_00005008;
    if (extraout_x8_05 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_04 != 0);
    }
    func_0x0001087e0da8();
    (*extraout_x8_06)();
  }
  else {
    plVar4 = *(long **)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000107c278b8(auStack_b8,&UNK_10f4bb956);
    func_0x0001087e0e40();
    func_0x0001087e0e30();
    FUN_1087dbd90(alStack_d0,*(undefined8 *)(unaff_x20 + 0x38),param_3);
    plVar2 = &lStack_a0;
    func_0x000107c31428();
    func_0x0001087e0e38();
    func_0x0001087e0fb8();
    if (extraout_x8_00 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10 != 0);
    }
    func_0x000107c28150();
    lVar5 = plVar4[2];
    func_0x0001087e0ed0();
    lVar6 = *(long *)(lVar5 + 0x70);
    func_0x0001087e0f90(0x1087e0bc4);
    if (extraout_x8_01 != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_00 != 0);
    }
    plVar3 = (long *)(lVar5 + 0x48);
    plStack_70 = plVar2;
    func_0x000107c28154(plVar3,&lStack_a0);
    func_0x0001087e0cb8(lStack_98);
    func_0x0001087e0d4c();
    param_2 = param_4;
    if (lVar6 != 0) goto LAB_1087dfba0;
    plVar3 = (long *)*plVar4;
    lStack_98 = plVar4[3];
    lStack_a0 = plVar4[2];
    if (plVar4[3] != 0) {
      do {
        func_0x0001087e0c48();
      } while (extraout_w10_01 != 0);
    }
    func_0x0001087e0da8();
    (*extraout_x8_02)();
  }
  func_0x0001087e0f1c();
LAB_1087dfba0:
  func_0x0001087e0d38();
  while (func_0x0001087e0c64(uStack_58), !(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001087e0f1c();
    func_0x0001087e0d38();
    plVar2 = plVar3;
    do {
      func_0x0001087e0df8();
      func_0x0001087e0c3c();
      func_0x0001087e0d38();
      uVar1 = (int)plVar4 == 1;
    } while (!(bool)uVar1);
    func_0x0001087e0eb4();
    func_0x000108848514();
    plVar3 = *(long **)(unaff_x20 + 0x28);
    FUN_1087ddae0(plVar3,*param_2,param_2[1],plVar2);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087dfc90; end: 1087dfc93;  */

undefined8 * FUN_1087dfc90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71fe8;
  func_0x000107c289f8(param_1 + 9);
  func_0x000107c2999c(param_1 + 7);
  func_0x000107c2814c(param_1 + 5);
  func_0x000107c28808(param_1 + 3);
  func_0x000107c28714(param_1 + 1);
  return param_1;
}



/* Entry: 1087dfc94; end: 1087dfca7;  */

void FUN_1087dfc94(void)

{
  func_0x0001087e03d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087dfca8; end: 1087dfcdb;  */

undefined8 FUN_1087dfca8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  FUN_1087dfcdc(&uStack_28);
  return param_1;
}



/* Entry: 1087dfcdc; end: 1087dfd3f;  */

void FUN_1087dfcdc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    lVar1 = plVar2[1];
    while (lVar1 != lVar3) {
      lVar1 = lVar1 + -0x60;
      FUN_10879dd24();
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1087dfd40; end: 1087dfd4b;  */

void FUN_1087dfd40(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001087e0ec4();
  func_0x0001087e0e8c();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x4d0) * 0x4d0;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x4d0) {
    FUN_1087dfe6c(lVar2,lVar3);
    lVar2 = lVar2 + 0x4d0;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x4d0) {
    FUN_1087e02dc(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1087dfd4c; end: 1087dfe03;  */

void FUN_1087dfd4c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001087e0e8c();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x4d0) * 0x4d0;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x4d0) {
    FUN_1087dfe6c(lVar2,lVar3);
    lVar2 = lVar2 + 0x4d0;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x4d0) {
    FUN_1087e02dc(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1087dfe04; end: 1087dfe6b;  */

long * FUN_1087dfe04(long *param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *extraout_x8;
  long lVar3;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    plVar1 = param_1;
    func_0x0001087e0f3c();
    if (extraout_x8 <= param_2) {
      func_0x000104bd35f4();
      func_0x0001087e0e8c();
      func_0x000105291934();
      lVar2 = param_1[0xb];
      *(char *)(plVar1 + 0xc) = (char)param_1[0xc];
      plVar1[0xb] = lVar2;
      FUN_10863f6c8(plVar1 + 0xd,param_1 + 0xd);
      func_0x000107c27afc(param_2 + 0x24,param_1 + 0x24);
      FUN_10863f728(param_2 + 0x28,param_1 + 0x28);
      return param_2;
    }
    lVar2 = (long)param_2 * 0x4d0;
    __Znwm();
  }
  lVar3 = lVar2 + param_3 * 0x4d0;
  *param_1 = lVar2;
  param_1[1] = lVar3;
  param_1[2] = lVar3;
  param_1[3] = lVar2 + (long)param_2 * 0x4d0;
  return param_1;
}



/* Entry: 1087dfe6c; end: 1087dff07;  */

void FUN_1087dfe6c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e0e8c();
  func_0x000105291934();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(unaff_x19 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  FUN_10863f6c8(param_1 + 0x68,unaff_x19 + 0x68);
  func_0x000107c27afc(unaff_x20 + 0x120,unaff_x19 + 0x120);
  FUN_10863f728(unaff_x20 + 0x140,unaff_x19 + 0x140);
  return;
}



/* Entry: 1087dff08; end: 1087e000f;  */

undefined8 FUN_1087dff08(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined4 uStack_520;
  ulong uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  char cStack_500;
  undefined1 auStack_4f8 [904];
  undefined1 uStack_170;
  undefined1 auStack_168 [24];
  undefined1 uStack_150;
  undefined1 auStack_148 [176];
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  FUN_108685a78(&uStack_550);
  uStack_88 = uStack_548;
  uStack_90 = uStack_550;
  uStack_80 = uStack_540;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_70 = uStack_530;
  uStack_78 = uStack_538;
  uStack_68 = uStack_528;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_530 = 0;
  uStack_528 = 0;
  uStack_60 = uStack_520;
  uStack_58 = uStack_58 & 0xffffffffffffff00;
  uStack_40 = cStack_500 == '\x01';
  if ((bool)uStack_40) {
    uStack_50 = uStack_510;
    uStack_58 = uStack_518;
    uStack_48 = uStack_508;
    uStack_510 = 0;
    uStack_508 = 0;
    uStack_518 = 0;
  }
  auStack_148[0] = 0;
  uStack_98 = 0;
  auStack_168[0] = 0;
  uStack_150 = 0;
  auStack_4f8[0] = 0;
  uStack_170 = 0;
  FUN_10863f654(param_1,&uStack_90,*param_3,0,auStack_148,auStack_168,auStack_4f8);
  func_0x00010863f788(auStack_4f8);
  func_0x000107c279dc(auStack_168);
  func_0x00010863f7a8(auStack_148);
  func_0x000104bee8ec(&uStack_90);
  func_0x000104bee8ec(&uStack_550);
  return param_1;
}



/* Entry: 1087e0010; end: 1087e006f;  */

long * FUN_1087e0010(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  
  if ((long *)0x3531dec0d4c77b < param_2) {
    FUN_1087dfd40();
    cVar1 = (char)param_1[0x19];
    if (cVar1 == (char)param_2[0x19]) {
      if (cVar1 != '\0') {
        FUN_1087e00c8(param_1);
      }
    }
    else if (cVar1 == '\0') {
      func_0x0001087e0150(param_1);
    }
    else {
      FUN_1087e012c(param_1);
    }
    return param_1;
  }
  uVar2 = (param_1[2] - *param_1) / 0x4d0;
  plVar3 = (long *)(uVar2 * 2);
  if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
    plVar3 = param_2;
  }
  if (0x1a98ef606a63bc < uVar2) {
    plVar3 = (long *)0x3531dec0d4c77b;
  }
  return plVar3;
}



/* Entry: 1087e0070; end: 1087e00c7;  */

long FUN_1087e0070(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 200);
  if (cVar1 == *(char *)(param_2 + 200)) {
    if (cVar1 != '\0') {
      FUN_1087e00c8(param_1);
    }
  }
  else if (cVar1 == '\0') {
    func_0x0001087e0150(param_1);
  }
  else {
    FUN_1087e012c(param_1);
  }
  return param_1;
}



/* Entry: 1087e00c8; end: 1087e012b;  */

void FUN_1087e00c8(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001087e0e8c();
  func_0x000107c27b9c();
  func_0x0001087e0d9c();
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  func_0x000107c28908(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x000107c27c54(unaff_x20 + 0x58,unaff_x19 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  func_0x0001052b2b60(unaff_x20 + 0x88,unaff_x19 + 0x88);
  func_0x0001052b2b60(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  return;
}



/* Entry: 1087e012c; end: 1087e016b;  */

void FUN_1087e012c(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x0001087dc244();
    *(undefined1 *)(param_1 + 200) = 0;
  }
  return;
}



/* Entry: 1087e016c; end: 1087e01f3;  */

void FUN_1087e016c(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001087e0cd4();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c27afc(param_1 + 0x38,param_2 + 0x38);
  *(undefined1 *)(unaff_x19 + 0x58) = 0;
  *(undefined1 *)(unaff_x19 + 0x70) = 0;
  if (*(char *)(unaff_x20 + 0x70) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined8 *)(unaff_x19 + 0x68) = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined1 *)(unaff_x19 + 0x70) = 1;
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  func_0x000107c27b7c(unaff_x19 + 0x88,unaff_x20 + 0x88);
  func_0x000107c27b7c(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  return;
}



/* Entry: 1087e01f4; end: 1087e0213;  */

void FUN_1087e01f4(long param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x0001087dc244();
  }
  return;
}



/* Entry: 1087e0214; end: 1087e02db;  */

undefined8
FUN_1087e0214(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_500 [904];
  undefined1 uStack_178;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [176];
  undefined1 uStack_a0;
  undefined1 auStack_98 [88];
  
  FUN_108685a78(auStack_98);
  uVar1 = *param_3;
  uVar2 = *param_4;
  auStack_150[0] = 0;
  uStack_a0 = 0;
  FUN_108691254(auStack_170,param_5);
  auStack_500[0] = 0;
  uStack_178 = 0;
  FUN_10863f654(param_1,auStack_98,uVar1,uVar2,auStack_150,auStack_170,auStack_500);
  func_0x00010863f788(auStack_500);
  func_0x000107c279dc(auStack_170);
  func_0x00010863f7a8(auStack_150);
  func_0x000104bee8ec(auStack_98);
  return param_1;
}



/* Entry: 1087e02dc; end: 1087e0313;  */

/* WARNING: Possible PIC construction at 0x000104bee908: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104bee90c) */

long FUN_1087e02dc(long param_1)

{
  long alStack_48 [2];
  long lStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  func_0x00010863f788(param_1 + 0x140);
  func_0x000107c279dc(param_1 + 0x120);
  func_0x00010863f7a8(param_1 + 0x68);
  func_0x0001001148fc(param_1 + 0x38);
  puStack_28 = &UNK_104bee90c;
  alStack_48[0] = param_1 + 0x18;
  lStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x000100100fd4(alStack_48);
  return param_1 + 0x18;
}



/* Entry: 1087e0314; end: 1087e0353;  */

void FUN_1087e0314(long param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_1087dc1e8();
  }
  return;
}



/* Entry: 1087e0354; end: 1087e046b;  */

/* WARNING: Possible PIC construction at 0x0001087e0368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e0378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087e036c) */
/* WARNING: Removing unreachable block (ram,0x0001087e037c) */

long FUN_1087e0354(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x58;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x58;
}



/* Entry: 1087e046c; end: 1087e04b3;  */

undefined8 * FUN_1087e046c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    func_0x00010879e730(param_1 + 1,param_2 + 1);
  }
  return param_1;
}



/* Entry: 1087e04b4; end: 1087e04bf;  */

long FUN_1087e04b4(long param_1)

{
  func_0x0001087e0ec4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1087dfcdc(param_1);
  }
  return param_1;
}



/* Entry: 1087e04c0; end: 1087e04eb;  */

long FUN_1087e04c0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1087dfcdc(param_1);
  }
  return param_1;
}



/* Entry: 1087e04ec; end: 1087e059f;  */

undefined8 * FUN_1087e04ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    func_0x000107c27994(param_1 + 1,param_2 + 1);
    param_1[4] = param_2[4];
    func_0x000107c27994(param_1 + 5,param_2 + 5);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    func_0x000107c279a0(param_1 + 9,param_2 + 9);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return param_1;
}



/* Entry: 1087e05a0; end: 1087e05db;  */

void FUN_1087e05a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087e0c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1087e05dc; end: 1087e062b;  */

void FUN_1087e05dc(long param_1)

{
  code *extraout_x8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001087e0da8(*(undefined8 *)(param_1 + 0x10));
  (*extraout_x8)();
  func_0x0001087e038c(&uStack_38);
  return;
}



/* Entry: 1087e062c; end: 1087e0667;  */

long FUN_1087e062c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c278a0();
  }
  return param_1 + 8;
}



/* Entry: 1087e0668; end: 1087e06a7;  */

long FUN_1087e0668(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  func_0x0001087e0f50();
  if (plVar1 != (long *)0x0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087e06a8; end: 1087e070f;  */

long FUN_1087e06a8(long param_1)

{
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [128];
  
  _bzero(auStack_a8,0x88);
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x88) != '\0') {
    FUN_1087e075c(param_1 + 0x10);
  }
  func_0x0001087e0334(auStack_a0);
  func_0x0001087e0f50();
  func_0x000107c31408();
  func_0x0001087e0334(param_1 + 0x10);
  return param_1;
}



/* Entry: 1087e0710; end: 1087e075b;  */

void FUN_1087e0710(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e0e8c();
  func_0x000107c3194c();
  func_0x0001087e0d9c();
  *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
  func_0x000107c27c54(unaff_x20 + 0x38,unaff_x19 + 0x38);
  func_0x000107c3194c(unaff_x20 + 0x58,unaff_x19 + 0x58);
  *(undefined4 *)(unaff_x20 + 0x70) = *(undefined4 *)(unaff_x19 + 0x70);
  return;
}



/* Entry: 1087e075c; end: 1087e079b;  */

void FUN_1087e075c(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_1087e0354();
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}



/* Entry: 1087e079c; end: 1087e0847;  */

void FUN_1087e079c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  uVar1 = *(undefined4 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_2 + 10) == '\x01') {
    uVar3 = param_2[8];
    uVar2 = param_2[7];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[7] = uVar2;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[7] = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[0xd] = param_2[0xd];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  return;
}



/* Entry: 1087e0848; end: 1087e08b3;  */

long FUN_1087e0848(long param_1)

{
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [208];
  
  _bzero(auStack_108,0xd8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1087e0070(param_1 + 0x10,auStack_100);
  FUN_1087e01f4(auStack_100);
  func_0x0001087e0f50();
  func_0x000107c31408();
  FUN_1087e01f4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1087e08b4; end: 1087e08cb;  */

void FUN_1087e08b4(long *param_1,long param_2)

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



/* Entry: 1087e08cc; end: 1087e08f7;  */

long * FUN_1087e08cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087e08f8; end: 1087e0967;  */

long FUN_1087e08f8(long param_1)

{
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [280];
  
  _bzero(auStack_150,0x120);
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x120) != '\0') {
    FUN_1087e09f8(param_1 + 0x10);
  }
  FUN_1087e0314(auStack_148);
  func_0x0001087e0f50();
  func_0x000107c31408();
  FUN_1087e0314(param_1 + 0x10);
  return param_1;
}



/* Entry: 1087e0968; end: 1087e09f7;  */

void FUN_1087e0968(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087e0e8c();
  func_0x000107c27b9c();
  func_0x0001087e0d9c();
  func_0x000107c3194c(unaff_x20 + 0x30,unaff_x19 + 0x30);
  func_0x000107c3194c(unaff_x20 + 0x48,unaff_x19 + 0x48);
  *(undefined4 *)(unaff_x20 + 0x60) = *(undefined4 *)(unaff_x19 + 0x60);
  func_0x000107c28960(unaff_x20 + 0x68,unaff_x19 + 0x68);
  FUN_10865f9c0(unaff_x20 + 0x88,unaff_x19 + 0x88);
  func_0x0001052b2b60(unaff_x20 + 0xa0,unaff_x19 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0xc0) = *(undefined8 *)(unaff_x19 + 0xc0);
  func_0x000107c28908(unaff_x20 + 200,unaff_x19 + 200);
  *(undefined8 *)(unaff_x20 + 0xe8) = *(undefined8 *)(unaff_x19 + 0xe8);
  func_0x0001052b2b60(unaff_x20 + 0xf0,unaff_x19 + 0xf0);
  return;
}



/* Entry: 1087e09f8; end: 1087e0a37;  */

void FUN_1087e09f8(long param_1)

{
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_1087dc1e8();
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  return;
}



/* Entry: 1087e0a38; end: 1087e0afb;  */

void FUN_1087e0a38(long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001087e0cd4();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  func_0x000107c28978(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  func_0x000107c27b7c(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  func_0x000107c27afc(unaff_x19 + 200,unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
  func_0x000107c27b7c(unaff_x19 + 0xf0,unaff_x20 + 0xf0);
  return;
}



/* Entry: 1087e0afc; end: 1087e0b0f;  */

void FUN_1087e0afc(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001087e0b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1087e0b10; end: 1087e0b2f;  */

void FUN_1087e0b10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087df9c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087e0b30; end: 1087e0fdf;  */

void FUN_1087e0b30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087e0fe0; end: 1087e100b;  */

void FUN_1087e0fe0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_1087e1400(*param_1,param_1[1]);
  func_0x000107c32670(param_1,param_1[1] + -0xd0);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xd0;
    FUN_1086a9ac4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087e100c; end: 1087e1147;  */

/* WARNING: Possible PIC construction at 0x000100634204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e10bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100634208) */

ulong FUN_1087e100c(ulong param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong extraout_x8;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xfffffffffffffff0;
  func_0x000107c33624();
  uVar11 = 0;
  if ((bool)in_CY) {
    uVar11 = extraout_x8;
  }
  if (!(bool)in_CY || (bool)in_ZR) {
    return param_1;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    uVar9 = param_1 + 0x70;
    func_0x000107c28078(uVar9,param_2);
    if ((int)uVar9 == 0) {
      unaff_x30 = 0x1087e10c0;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_2;
      unaff_x20 = param_1;
      unaff_x21 = uVar11;
      unaff_x29 = puVar2;
    }
    else {
      lVar6 = (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) / 0xd0;
      lVar12 = 0;
      if (lVar6 != 0) {
        lVar12 = lVar6 + -1;
      }
      lVar7 = (*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) / 0xd0;
      lVar6 = 0;
      if (lVar7 != 0) {
        lVar6 = lVar7 + -1;
      }
      lVar8 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) / 0xd0;
      lVar7 = 0;
      if (lVar8 != 0) {
        lVar7 = lVar8 + -1;
      }
      if ((ulong)(lVar6 + lVar12 + lVar7) < uVar11) goto LAB_1087e10cc;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar1 = (long *)(param_1 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x38) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x30) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x28) = &UNK_100634208;
    lVar12 = *(long *)(param_1 + 0x18) - *plVar1;
    uVar9 = uVar11;
    if ((ulong)(lVar12 / 0xd0) < 2) {
      if (lVar12 == 0xd0) {
        func_0x000107c29a1c(plVar1);
      }
    }
    else {
      while( true ) {
        uVar11 = uVar9;
        func_0x000107c29a1c(plVar1);
        if (*plVar1 == *(long *)(param_1 + 0x18)) break;
        uVar9 = 0;
        if (uVar11 != 0) {
          func_0x00010065d008(param_1 + 0x90,*plVar1 + 0xa0);
          uVar9 = uVar11 - 1;
        }
      }
    }
    return uVar11;
  }
  uVar9 = param_1 + 0x70;
  FUN_108690b88(uVar9,param_2);
LAB_1087e10cc:
  ppuVar3 = *(undefined ***)(param_2 + 0x68);
  if (*(int *)(param_2 + 0x70) != 10) {
    ppuVar3 = &PTR_PTR_11327c140;
  }
  ppuVar4 = &PTR_PTR_11326be38;
  if ((undefined **)ppuVar3[4] != (undefined **)0x0) {
    ppuVar4 = (undefined **)ppuVar3[4];
  }
  iVar5 = *(int *)(ppuVar4 + 2);
  if (iVar5 == 2) {
    puVar10 = (ulong *)(param_1 + 0x50);
  }
  else if (iVar5 == 1) {
    puVar10 = (ulong *)(param_1 + 0x30);
  }
  else {
    if (iVar5 != 0) {
      return uVar9;
    }
    puVar10 = (ulong *)(param_1 + 0x10);
  }
  FUN_1087e118c(puVar10,param_2);
  uVar11 = *puVar10;
  FUN_1087e12ac(uVar11,puVar10[1],&stack0xffffffffffffffef);
  return uVar11;
}



/* Entry: 1087e1148; end: 1087e116b;  */

void FUN_1087e1148(undefined8 *param_1)

{
  FUN_1087e118c();
  FUN_1087e12ac(*param_1,param_1[1],&stack0xffffffffffffffef);
  return;
}



/* Entry: 1087e116c; end: 1087e118b;  */

void FUN_1087e116c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1087e12ac(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 1087e118c; end: 1087e11c7;  */

long FUN_1087e118c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1087e11c8();
    lVar2 = uVar1 + 0xd0;
  }
  else {
    lVar2 = param_1;
    FUN_1087e1200();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0xd0;
}



/* Entry: 1087e11c8; end: 1087e11ff;  */

void FUN_1087e11c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_1086d3ab0(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0xd0;
  return;
}



/* Entry: 1087e1200; end: 1087e12ab;  */

long FUN_1087e1200(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_1086d3818(param_1,(param_1[1] - *param_1) / 0xd0 + 1);
  FUN_1086d38cc(auStack_58,plVar1,(param_1[1] - *param_1) / 0xd0,param_1 + 2);
  FUN_1086d3ab0(lStack_48,param_2);
  lStack_48 = lStack_48 + 0xd0;
  FUN_1086d3870(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x0001086d3a4c(auStack_58);
  return lVar2;
}



/* Entry: 1087e12ac; end: 1087e12bb;  */

void FUN_1087e12ac(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_120 [104];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  lVar5 = (param_2 - param_1) / 0xd0;
  if (1 < lVar5) {
    uVar4 = lVar5 - 2U >> 1;
    lVar5 = param_1 + uVar4 * 0xd0;
    uVar1 = *(undefined8 *)(lVar5 + 0x68);
    FUN_1087e138c(uVar1,*(undefined4 *)(lVar5 + 0x70),*(undefined8 *)(param_2 + -0x68),
                  *(undefined4 *)(param_2 + -0x60));
    if ((int)uVar1 != 0) {
      FUN_1086ad844(auStack_120,param_2 + -0xd0);
      lVar3 = param_2 + -0xd0;
      do {
        lVar6 = lVar5;
        FUN_1086ad7c0(lVar3,lVar6);
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1 >> 1;
        lVar5 = param_1 + uVar4 * 0xd0;
        uVar2 = *(ulong *)(lVar5 + 0x68);
        FUN_1087e138c(uVar2,*(undefined4 *)(lVar5 + 0x70),uStack_b8,uStack_b0);
        lVar3 = lVar6;
      } while ((uVar2 & 1) != 0);
      FUN_1086ad7c0(lVar6,auStack_120);
      FUN_1086a9ac4(auStack_120);
    }
  }
  return;
}



/* Entry: 1087e12bc; end: 1087e138b;  */

void FUN_1087e12bc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_120 [104];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  if (1 < param_4) {
    uVar4 = param_4 - 2U >> 1;
    lVar5 = param_1 + uVar4 * 0xd0;
    uVar1 = *(undefined8 *)(lVar5 + 0x68);
    FUN_1087e138c(uVar1,*(undefined4 *)(lVar5 + 0x70),*(undefined8 *)(param_2 + -0x68),
                  *(undefined4 *)(param_2 + -0x60));
    if ((int)uVar1 != 0) {
      FUN_1086ad844(auStack_120,param_2 + -0xd0);
      lVar3 = param_2 + -0xd0;
      do {
        lVar6 = lVar5;
        FUN_1086ad7c0(lVar3,lVar6);
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1 >> 1;
        lVar5 = param_1 + uVar4 * 0xd0;
        uVar2 = *(ulong *)(lVar5 + 0x68);
        FUN_1087e138c(uVar2,*(undefined4 *)(lVar5 + 0x70),uStack_b8,uStack_b0);
        lVar3 = lVar6;
      } while ((uVar2 & 1) != 0);
      FUN_1086ad7c0(lVar6,auStack_120);
      FUN_1086a9ac4(auStack_120);
    }
  }
  return;
}



/* Entry: 1087e138c; end: 1087e13ff;  */

bool FUN_1087e138c(undefined **param_1,int param_2,undefined **param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 != 10) {
    param_1 = &PTR_PTR_11327c140;
  }
  ppuVar1 = &PTR_PTR_11326be38;
  if ((undefined **)param_1[4] != (undefined **)0x0) {
    ppuVar1 = (undefined **)param_1[4];
  }
  if (*(int *)((long)ppuVar1 + 0x24) == 2) {
    puVar2 = ppuVar1[3];
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  if (param_4 != 10) {
    param_3 = &PTR_PTR_11327c140;
  }
  ppuVar1 = &PTR_PTR_11326be38;
  if ((undefined **)param_3[4] != (undefined **)0x0) {
    ppuVar1 = (undefined **)param_3[4];
  }
  if (*(int *)((long)ppuVar1 + 0x24) == 2) {
    puVar3 = ppuVar1[3];
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  return puVar2 < puVar3;
}



/* Entry: 1087e1400; end: 1087e142b;  */

void FUN_1087e1400(long param_1,long param_2)

{
  undefined1 uStack_11;
  
  FUN_1087e1438(param_1,param_2,&uStack_11,(param_2 - param_1) / 0xd0);
  return;
}



/* Entry: 1087e142c; end: 1087e1437;  */

void FUN_1087e142c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*(long *)(param_1 + 8) + -0xd0);
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xd0;
    FUN_1086a9ac4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087e1438; end: 1087e157f;  */

void FUN_1087e1438(long param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_138 [216];
  
  if (1 < param_4) {
    FUN_1086ad844(auStack_138,param_1);
    uVar7 = 0;
    lVar6 = param_1;
    do {
      lVar4 = lVar6 + uVar7 * 0xd0;
      uVar2 = uVar7 << 1 | 1;
      uVar1 = uVar7 * 2 + 2;
      lVar5 = lVar4 + 0xd0;
      uVar7 = uVar2;
      if ((long)uVar1 < param_4) {
        uVar3 = *(undefined8 *)(lVar4 + 0x138);
        FUN_1087e138c(uVar3,*(undefined4 *)(lVar4 + 0x140),*(undefined8 *)(lVar4 + 0x208),
                      *(undefined4 *)(lVar4 + 0x210));
        lVar5 = lVar4 + 0x1a0;
        uVar7 = uVar1;
        if ((int)uVar3 == 0) {
          lVar5 = lVar4 + 0xd0;
          uVar7 = uVar2;
        }
      }
      FUN_1086ad7c0(lVar6,lVar5);
      lVar6 = lVar5;
    } while ((long)uVar7 <= (long)(param_4 - 2U >> 1));
    param_2 = param_2 + -0xd0;
    if (param_2 == lVar5) {
      FUN_1086ad7c0(lVar5,auStack_138);
    }
    else {
      FUN_1086ad7c0(lVar5,param_2);
      FUN_1086ad7c0(param_2,auStack_138);
      FUN_1087e12bc(param_1,lVar5 + 0xd0,param_3,((lVar5 + 0xd0) - param_1) / 0xd0);
    }
    FUN_1086a9ac4(auStack_138);
  }
  return;
}



/* Entry: 1087e1580; end: 1087e15d3;  */

undefined8 * FUN_1087e1580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72110;
  func_0x000107c29a28(param_1 + 7);
  FUN_1087e5e00(param_1 + 6);
  func_0x000107c29a50(param_1 + 5);
  func_0x000107c29a5c(param_1 + 3);
  func_0x000107c29a64(param_1 + 1);
  return param_1;
}



/* Entry: 1087e15d4; end: 1087e15d7;  */

undefined8 * FUN_1087e15d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a72110;
  func_0x000107c29a28(param_1 + 7);
  FUN_1087e5e00(param_1 + 6);
  func_0x000107c29a50(param_1 + 5);
  func_0x000107c29a5c(param_1 + 3);
  func_0x000107c29a64(param_1 + 1);
  return param_1;
}



/* Entry: 1087e15d8; end: 1087e15eb;  */

void FUN_1087e15d8(void)

{
  FUN_1087e1580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


