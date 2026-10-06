/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10784e9c0; end: 10784ea9b;  */

void FUN_10784e9c0(long param_1,uint param_2)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar5;
  undefined1 auStack_78 [8];
  long alStack_70 [9];
  undefined8 uStack_28;
  
  func_0x00010784a94c();
  uVar2 = param_2 == *(byte *)(param_1 + 0x370);
  if (!(bool)uVar2) {
    *(char *)(param_1 + 0x370) = (char)param_2;
    if (param_2 == 0) {
      if ((*(char *)(param_1 + 0x379) == '\x02') &&
         (plVar3 = *(long **)(param_1 + 0x580), plVar3 != (long *)0x0)) {
        *(undefined8 *)(param_1 + 0x580) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010784ea28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))();
        return;
      }
    }
    else if (*(long *)(param_1 + 0x580) == 0) {
      param_1 = param_1 + 0x368;
      func_0x00010784f54c();
      uStack_28 = extraout_x8;
      if (*(long *)(param_1 + 0x208) == 0) {
        uVar5 = *unaff_x19;
        func_0x00010784f4dc();
        func_0x0001078489f8(auStack_78);
        func_0x00010784f5ac();
        func_0x00010782d3f0(uVar5,alStack_70);
        func_0x00010784f560();
        __ZNSt13exception_ptrD1Ev(auStack_78);
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x11) = 2;
        unaff_x19[0x2e] = unaff_x19[0x44];
        *(undefined1 *)(unaff_x19 + 0x2f) = *(undefined1 *)(unaff_x19 + 0x45);
        func_0x00010784f5fc(&PTR_DAT_1109e25a8);
        func_0x00010784f59c();
        lVar1 = alStack_70[0];
        alStack_70[0] = 0;
        lVar4 = unaff_x19[0x43];
        unaff_x19[0x43] = lVar1;
        if (lVar4 != 0) {
          func_0x00010784f4d0();
          lVar1 = alStack_70[0];
          alStack_70[0] = 0;
          if (lVar1 != 0) {
            func_0x00010784f4d0();
          }
        }
        func_0x00010784f5e4();
      }
      func_0x00010784f568(uStack_28);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010784f560();
      __ZNSt13exception_ptrD1Ev(auStack_78);
      func_0x00010784f62c();
      return;
    }
  }
  return;
}



/* Entry: 10784ee78; end: 10784eea3;  */

void FUN_10784ee78(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010784f614();
  *param_1 = &PTR_DAT_1109e2528;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10784f304; end: 10784f48b;  */

void FUN_10784f304(long param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long lVar7;
  long lStack_198;
  undefined4 uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined4 uStack_170;
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined4 uStack_108;
  undefined1 auStack_100 [8];
  undefined4 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined4 auStack_a0 [2];
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)(param_1 + 0x10);
  auStack_a0[0] = 0x2b;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_DAT_110996720;
  uStack_78 = 0;
  uStack_60 = 0x2b;
  uStack_58 = CONCAT35((int3)((ulong)uStack_58 >> 0x28),0x100000000);
  func_0x00010784f650(auStack_a0);
  if (*(undefined1 **)(param_2 + 0x10) == (undefined1 *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = **(undefined1 **)(param_2 + 0x10);
  }
  func_0x0001072a0318(auStack_a0,&DAT_10f40aef2,uVar3);
  uStack_110 = **(ulong **)(lVar7 + 0x270);
  uStack_108 = 3;
  func_0x00010743f9dc(*(ulong **)(lVar7 + 0x270),auStack_a0,param_2 + 8,&uStack_110,7);
  if ((*(long *)(param_2 + 0x20) != 0) && ((param_2[0x18] & 1) == 0)) {
    uStack_110 = CONCAT44(uStack_110._4_4_,0x58);
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    ppuStack_f0 = &PTR_DAT_110996720;
    uStack_e8 = 0;
    uStack_d0 = 0x58;
    uStack_c8 = 0;
    uStack_c4 = 1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    func_0x00010784f650(&uStack_110);
    lStack_120 = (long)*(char *)(*(long *)(param_2 + 0x20) + 0x17);
    if (lStack_120 < 0) {
      lStack_120 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    }
    lStack_118 = CONCAT44(lStack_118._4_4_,3);
    uStack_130 = **(undefined8 **)(lVar7 + 0x270);
    uStack_128 = CONCAT44(uStack_128._4_4_,3);
    func_0x00010743fa44(*(undefined8 **)(lVar7 + 0x270),&uStack_110,&lStack_120,&uStack_130,7);
    func_0x000107262330(&uStack_110);
  }
  func_0x000107262330(auStack_a0);
  pbVar6 = param_2;
  func_0x00010784f54c(lVar7);
  uStack_58 = extraout_x8;
  if ((*(char **)(pbVar6 + 0x10) != (char *)0x0) && (**(char **)(pbVar6 + 0x10) != '\x02')) {
    lVar7 = *unaff_x19;
    func_0x0001073070f0(&lStack_118);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (auStack_a8,*(long *)(param_2 + 0x10) + 8);
    func_0x0001052b2bd0(&lStack_188);
    func_0x0001073787c0(auStack_100,&lStack_188);
    func_0x00010782d3f0(lVar7,&lStack_118);
    func_0x0001073787dc(&lStack_118);
    __ZNSt13exception_ptrD1Ev(&lStack_188);
    __ZNSt13runtime_errorD1Ev(auStack_a8);
    goto code_r0x00010784f10c;
  }
  if (param_2[0x19] == 1) {
    lVar7 = *(long *)(param_2 + 0x40);
    *(byte *)(unaff_x19 + 0x27) = param_2[0x48];
    unaff_x19[0x26] = lVar7;
    func_0x00010784f57c();
    goto code_r0x00010784f10c;
  }
  func_0x00010784f4ec();
  func_0x00010784f57c();
  lVar7 = *unaff_x19;
  if (param_2[0x18] == 1) {
    lStack_188 = 0;
    uStack_180 = 0;
code_r0x00010784f0e8:
    lStack_98 = 0;
    func_0x00010784f5bc();
    lVar7 = lStack_98;
    lStack_98 = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(ulong *)(param_2 + 0x28);
    lStack_188 = lVar1;
    uStack_180 = uVar2;
    if (uVar2 != 0) {
      do {
        func_0x00010784f5ec();
      } while (extraout_w10 != 0);
    }
    if (lVar1 == 0) goto code_r0x00010784f0e8;
    lVar4 = 0x48;
    __Znwm();
    lStack_118 = lVar1;
    uStack_110 = uVar2;
    if (uVar2 != 0) {
      do {
        func_0x00010784f5ec();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010732be90(lVar4,&lStack_118,lVar7 + 0x1b8,0x2000);
    func_0x000104c33970(&lStack_118);
    lStack_198 = lVar4;
    func_0x00010784f5bc();
    lVar7 = lStack_198;
    lStack_198 = 0;
  }
  if (lVar7 != 0) {
    func_0x00010784f4d0();
  }
  func_0x000104c33970(&lStack_188);
code_r0x00010784f10c:
  lStack_188._0_4_ = 0x2a;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  ppuStack_168 = &PTR_DAT_110996720;
  uStack_160 = 0;
  uStack_148 = 0x2a;
  uStack_140 = 0;
  uStack_13c = 1;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_138 = 0;
  func_0x000104c2fe00(auStack_90,unaff_x19 + 0x46);
  plVar5 = &lStack_188;
  func_0x000107371bc4(plVar5,"source",auStack_90);
  func_0x000107849070();
  uVar3 = (*param_2 & 0xfe) == 2;
  func_0x0001072bbe40();
  func_0x00010726e6c0(&lStack_118,plVar5);
  func_0x000104c2f714(auStack_90);
  func_0x000107262330(&lStack_188);
  lStack_188 = CONCAT44(lStack_188._4_4_,1);
  uStack_180 = uStack_180 & 0xffffffff00000000;
  lStack_198 = *(long *)unaff_x19[0x4e];
  uStack_190 = 3;
  func_0x00010743fa9c((long *)unaff_x19[0x4e],&lStack_118,&lStack_188,&lStack_198,7);
  func_0x000107262330(&lStack_118);
  func_0x00010784f568(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = lStack_198;
  lStack_198 = 0;
  if (lVar7 != 0) {
    func_0x00010784f4d0();
  }
  func_0x000104c33970(&lStack_188);
  func_0x00010784f62c();
  return;
}



/* Entry: 10784feac; end: 1078504d7;  */

void FUN_10784feac(long *param_1,long param_2,long ****param_3)

{
  long lVar1;
  long ***ppplVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  long ***ppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  undefined8 extraout_x8;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long ***ppplStack_100;
  long lStack_f8;
  long alStack_f0 [2];
  long ***ppplStack_e0;
  undefined1 uStack_d8;
  undefined2 uStack_ca;
  undefined8 uStack_c8;
  ulong uStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long lStack_a0;
  undefined8 uStack_90;
  
  lVar18 = param_2;
  func_0x000107851cc4();
  ppplStack_b0 = (long ***)CONCAT71(ppplStack_b0._1_7_,1);
  ppplStack_b8 = (long ***)(lVar18 + 0x130);
  uStack_90 = extraout_x8;
  func_0x000107851e38();
  lVar16 = param_2 + 0x1d8;
  uVar8 = *(char *)(param_2 + 0x1f0) == '\x01';
  if ((bool)uVar8) {
    *param_1 = lVar16;
    *(undefined4 *)(param_1 + 1) = 1;
    pppplVar11 = &ppplStack_b8;
    func_0x00010724e49c();
    goto LAB_107850248;
  }
  func_0x00010724e49c(&ppplStack_b8);
  uStack_d8 = 1;
  ppplStack_e0 = (long ***)(lVar18 + 0x130);
  func_0x000107851e40();
  if ((*(byte *)(param_2 + 0x1f0) & 1) != 0) goto LAB_107850234;
  uVar23 = *(undefined4 *)(param_2 + 0x128);
  uVar24 = *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x3c);
  ppplStack_100 = (long ***)0x0;
  lStack_f8 = 0;
  alStack_f0[0] = 0;
  pppplVar11 = (long ****)(param_2 + 0x40);
  func_0x000104c33994();
  func_0x00010737c974(&ppplStack_100);
  pppplVar10 = &ppplStack_100;
  func_0x0001073e7da4(pppplVar10);
  uVar14 = 0;
  lVar17 = 0;
  lVar18 = 0;
  uVar13 = 0;
  fVar19 = (float)NEON_ucvtf(uVar23);
  fVar21 = (float)NEON_ucvtf(uVar24);
  uStack_c8 = *(long ****)(param_2 + 0xc0);
  uStack_c0 = *(ulong *)(param_2 + 200);
  ppplVar2 = *(long ****)(param_2 + 0xd0);
  uVar3 = *(ulong *)(param_2 + 0xd8);
  cVar4 = *(char *)(param_2 + 0x98);
  lVar1 = 2;
  if (cVar4 != '\x03') {
    lVar1 = 0;
  }
  if (cVar4 == '\x02') {
    lVar1 = 1;
  }
  bVar5 = true;
  uVar15 = 1;
  do {
    while( true ) {
      if (uStack_c8 == ppplVar2 && uStack_c0 == uVar3) {
        lVar18 = (lStack_f8 - (long)ppplStack_100) / 0x18;
        plStack_120 = param_1;
        lStack_118 = param_2;
        lStack_110 = lVar16;
        if ((ulong)(lStack_f8 - (long)ppplStack_100) < (ulong)(alStack_f0[0] - (long)ppplStack_100)
            && (ulong)(lVar18 << 2) <= (ulong)((alStack_f0[0] - (long)ppplStack_100) / 0x18)) {
          func_0x00010737ca74(&ppplStack_b8,lVar18,lVar18,alStack_f0);
          if ((ulong)(lStack_a0 - (long)ppplStack_b8) < (ulong)(alStack_f0[0] - (long)ppplStack_100)
             ) {
            func_0x00010737c9f4(&ppplStack_100,&ppplStack_b8);
          }
          func_0x00010737cb7c(&ppplStack_b8);
        }
        do {
          param_3 = &ppplStack_100;
          func_0x00010737c564(lStack_110);
          func_0x000107851d7c();
          while( true ) {
            uVar14 = *(uint *)(*(long *)(lStack_118 + 0x50) + 0x38);
            uVar8 = uVar14 == 1;
            param_1 = plStack_120;
            lVar16 = lStack_110;
            if ((uVar14 < 2) && (uVar8 = *(char *)(lStack_118 + 0x98) == '\x03', (bool)uVar8)) {
              func_0x000107833560(&ppplStack_b8,lStack_110);
              param_3 = &ppplStack_b8;
              func_0x00010737c564(lStack_110);
              func_0x0001072977d0(&ppplStack_b8);
            }
LAB_107850234:
            *param_1 = lVar16;
            *(undefined4 *)(param_1 + 1) = 1;
            pppplVar11 = &ppplStack_e0;
            func_0x000107279ee0();
LAB_107850248:
            func_0x000107851c80(uStack_90);
            if ((bool)uVar8) {
              return;
            }
            ___stack_chk_fail();
            if ((int)param_3 != 0) break;
            while( true ) {
              __Unwind_Resume();
              pppplVar10 = param_3;
              func_0x000107851d7c();
              if ((int)param_3 == 1) break;
              func_0x000107279ee0(&ppplStack_e0);
              param_3 = pppplVar10;
            }
            ___cxa_begin_catch();
            cVar4 = *(char *)(lStack_118 + 0x98);
            if (cVar4 == '\x03') {
              uStack_c8 = (long ***)0x0;
              uStack_c0 = uStack_c0 & 0xffffffff00000000;
              func_0x00010737c664(&ppplStack_b8,&uStack_c8,3);
              func_0x000107851ca4();
            }
            else if (cVar4 == '\x02') {
              uStack_c8 = (long ***)0x0;
              func_0x00010737c664(&ppplStack_b8,&uStack_c8,2);
              func_0x000107851ca4();
            }
            else if (cVar4 == '\x01') {
              uStack_c8 = (long ***)((ulong)uStack_c8._4_4_ << 0x20);
              func_0x000107851d4c();
              func_0x000107851ca4();
            }
            else {
              uStack_c8 = (long ***)((ulong)uStack_c8._4_4_ << 0x20);
              func_0x000107851d4c();
              func_0x000107851ca4();
            }
            func_0x000104c336c8(&ppplStack_b8);
            func_0x00010737c564(lStack_110,&ppplStack_100);
            func_0x000107851d7c();
            (*(code *)(*pppplVar11)[2])();
            lStack_f8 = 0;
            ppplStack_100 = (long ***)pppplVar11;
            func_0x0001003a91d4(&UNK_10f42b31f);
            func_0x0001003a9204(&ppplStack_b8);
            param_3 = &ppplStack_b8;
            func_0x00010786df04(0xe,param_3,0,0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppplStack_b8);
            ___cxa_end_catch();
          }
          func_0x00010737cb7c(&ppplStack_b8);
          ___cxa_begin_catch(pppplVar11);
          ___cxa_end_catch();
        } while( true );
      }
      if (uVar13 == 0) {
        pppplVar10 = (long ****)&uStack_c8;
        func_0x000107851d08();
        ppplStack_b8 = (long ***)pppplVar10;
        ppplStack_b0 = (long ***)pppplVar11;
        func_0x000107851dcc();
        uVar15 = (uint)pppplVar10 & 7;
        uVar13 = (uint)pppplVar10 >> 3;
        uVar14 = uVar13;
        if (0xffff < uVar13) {
          uVar14 = 0x10000;
        }
      }
      if (uVar15 - 1 < 2) break;
      if (uVar15 != 7) {
        func_0x000107851d00();
        __ZNSt13runtime_errorC1EPKc();
        func_0x000107851cd4();
        ___cxa_throw(pppplVar10);
        goto LAB_1078502c0;
      }
      pppplVar10 = (long ****)(lStack_f8 + -0x18);
      pppplVar11 = (long ****)*pppplVar10;
      if (pppplVar11 != *(long *****)(lStack_f8 + -0x10)) {
        func_0x000104c33ff8();
      }
      uVar13 = 0;
    }
    if (cVar4 == '\x01') {
      if (uVar15 != 1 || !bVar5) goto LAB_107850084;
      pppplVar11 = (long ****)(ulong)uVar14;
      func_0x00010737c974(&ppplStack_100);
      bVar5 = false;
LAB_10785008c:
      lVar12 = *(long *)(lStack_f8 + -0x18);
      if (lVar12 != *(long *)(lStack_f8 + -0x10)) {
        if ((ulong)(*(long *)(lStack_f8 + -0x10) - lVar12) <=
            (ulong)(*(long *)(lStack_f8 + -8) - lVar12 >> 2)) {
          func_0x000104c33e74();
        }
        func_0x0001073e7da4(&ppplStack_100);
        bVar5 = (bool)(cVar4 != '\x01' | bVar5);
      }
    }
    else if (uVar15 != 2 || (bool)(bVar5 ^ 1)) {
LAB_107850084:
      if (uVar15 == 1) goto LAB_10785008c;
    }
    else {
      pppplVar11 = (long ****)(lVar1 + (ulong)uVar14);
      func_0x000104c33d24(lStack_f8 + -0x18);
      bVar5 = false;
    }
    ppplVar9 = (long ***)&uStack_c8;
    func_0x000107851d08();
    ppplStack_b8 = ppplVar9;
    ppplStack_b0 = (long ***)pppplVar11;
    func_0x000107851dcc();
    pppplVar10 = (long ****)&uStack_c8;
    func_0x000107851d08();
    ppplStack_b8 = (long ***)pppplVar10;
    ppplStack_b0 = (long ***)pppplVar11;
    func_0x000107851dcc();
    lVar18 = lVar18 + (int)(-((uint)ppplVar9 & 1) ^ (uint)ppplVar9 >> 1);
    fVar20 = (float)(int)((fVar19 / fVar21) * (float)lVar18);
    bVar7 = true;
    if ((fVar20 <= 32767.0) && (bVar7 = false, !NAN(fVar20))) {
      bVar7 = fVar20 < -32768.0;
    }
    if (bVar7) {
LAB_1078502a0:
      func_0x000107851d00();
      __ZNSt13runtime_errorC1EPKc();
      func_0x000107851cd4();
      ___cxa_throw(pppplVar10);
LAB_1078502c0:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1078502c4);
      (*pcVar6)();
    }
    lVar17 = lVar17 + (int)(-((uint)pppplVar10 & 1) ^ (uint)pppplVar10 >> 1);
    fVar22 = (float)(int)((fVar19 / fVar21) * (float)lVar17);
    bVar7 = true;
    if ((fVar22 <= 32767.0) && (bVar7 = false, !NAN(fVar22))) {
      bVar7 = fVar22 < -32768.0;
    }
    if (bVar7) goto LAB_1078502a0;
    pppplVar10 = (long ****)(lStack_f8 + -0x18);
    ppplStack_b8 = (long ***)CONCAT62(ppplStack_b8._2_6_,(short)(int)fVar20);
    uStack_ca = (undefined2)(int)fVar22;
    pppplVar11 = &ppplStack_b8;
    func_0x000104c33f04(pppplVar10,pppplVar11,&uStack_ca);
    uVar13 = uVar13 - 1;
  } while( true );
}



/* Entry: 107850880; end: 107850e27;  */

long ** FUN_107850880(long param_1,long **param_2)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  undefined1 in_ZR;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long **pplVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  long *plVar13;
  undefined8 *puVar14;
  int extraout_w10;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 *puStack_188;
  undefined1 auStack_180 [8];
  ulong uStack_178;
  long *plStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined1 uStack_128;
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  long *plStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_98 [32];
  char cStack_78;
  undefined8 uStack_70;
  
  lVar6 = param_1;
  func_0x000107851cc4();
  plStack_120 = *(long **)(lVar6 + 0x38);
  puStack_118 = (undefined8 *)CONCAT71(puStack_118._1_7_,1);
  uStack_70 = extraout_x8;
  func_0x00010724e404();
  bVar3 = *(byte *)(*(long *)(param_1 + 0x38) + 0xa8);
  pplVar11 = &plStack_120;
  func_0x00010724e49c();
  if ((bVar3 & 1) == 0) {
    plVar7 = *(long **)(param_1 + 0x38);
    uStack_168 = 1;
    plStack_170 = plVar7;
    func_0x000107279a5c();
    if ((*(byte *)(*(long *)(param_1 + 0x38) + 0xa8) & 1) == 0) {
      func_0x00010785f1f4();
      plStack_120 = (long *)((ulong)plStack_120 & 0xffffffffffffff00);
      plVar7 = plVar7 + 0x96;
      func_0x00010724e2c8(plVar7,&plStack_120);
      plVar13 = *(long **)(param_1 + 8);
      cVar4 = *(char *)((long)plVar13 + 0x17);
      plStack_d0 = (long *)*plVar13;
      if (-1 < (long)cVar4) {
        plStack_d0 = plVar13;
      }
      puStack_c8 = (undefined8 *)plVar13[1];
      if (-1 < cVar4) {
        puStack_c8 = (undefined8 *)(long)cVar4;
      }
      func_0x000104c2f01c(&plStack_120,&plStack_d0);
      func_0x000104c308c0(&puStack_188,&plStack_120);
      func_0x000104c30c1c(&plStack_120);
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_190 = 0x3f800000;
      func_0x00010737efb4(&uStack_1b0,uStack_178);
      uStack_1d8 = 0;
      lStack_1e0 = 0;
      lStack_1c8 = 0;
      lStack_1d0 = 0;
      uStack_1c0 = 0x3f800000;
      func_0x00010737ea58(&lStack_1e0,(long)(float)uStack_178);
      puVar10 = puStack_188;
      while (puVar10 != auStack_180) {
        func_0x000104c2fe00(&plStack_d0,puVar10 + 0x20);
        lVar6 = param_1 + 0x18;
        uVar12 = 0;
        func_0x00010786e214(lVar6);
        func_0x000107373114(&uStack_1b0,&plStack_d0);
        lVar17 = *(long *)(param_1 + 0x10);
        uVar16 = *(undefined8 *)(param_1 + 8);
        puVar8 = (undefined8 *)0x170;
        __Znwm();
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = &PTR_FUN_1109e26f0;
        uStack_150 = uVar16;
        lStack_148 = lVar17;
        if (lVar17 != 0) {
          do {
            func_0x000107851c94();
          } while (extraout_w10 != 0);
        }
        auStack_98[0] = 0;
        cStack_78 = 0;
        bVar1 = (uVar12 & 1) != 0;
        if (bVar1) {
          func_0x0001073248fc(auStack_98,lVar6);
          uVar16 = uStack_150;
          lVar17 = lStack_148;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x30);
        puVar8[3] = &PTR_DAT_1109e2688;
        *(char *)(puVar8 + 4) = (char)plVar7;
        puVar8[6] = lVar17;
        puVar8[5] = uVar16;
        uStack_150 = 0;
        lStack_148 = 0;
        puVar9 = (undefined8 *)0xb8;
        cStack_78 = bVar1;
        __Znwm();
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar14 = puVar9 + 3;
        *puVar9 = &PTR_DAT_1109e2890;
        func_0x000104c30c7c(puVar14,puVar10 + 0x58);
        puVar8[7] = puVar14;
        puVar8[8] = puVar9;
        func_0x000104c2fe00(puVar8 + 9,puVar14);
        *(undefined1 *)(puVar8 + 0x10) = 0;
        *(undefined1 *)(puVar8 + 0x14) = 0;
        if (cStack_78 == '\x01') {
          func_0x00010737de4c(puVar8 + 0x10,auStack_98);
        }
        *(undefined4 *)(puVar8 + 0x15) = uVar2;
        __ZNSt3__119__shared_mutex_baseC1Ev(puVar8 + 0x16);
        puStack_130 = puVar8 + 0x2b;
        lVar6 = *(long *)(puVar8[7] + 0x88);
        lVar17 = *(long *)(puVar8[7] + 0x90);
        uStack_140 = 0;
        lStack_138 = 0;
        puVar8[0x2c] = 0;
        puVar8[0x2d] = 0;
        puVar8[0x2b] = 0;
        uStack_128 = 0;
        lVar17 = lVar17 - lVar6;
        if (lVar17 != 0) {
          func_0x000107374324(puStack_130,lVar17 >> 4);
          puVar14 = (undefined8 *)puVar8[0x2c];
          puVar9 = (undefined8 *)((long)puVar14 + lVar17);
          for (; puVar14 != puVar9; puVar14 = puVar14 + 2) {
            puVar14[1] = lStack_138;
            *puVar14 = uStack_140;
            if (lStack_138 != 0) {
              plVar13 = (long *)(lStack_138 + 8);
              do {
                cVar4 = '\x01';
                bVar1 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar1) {
                  *plVar13 = *plVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          puVar8[0x2c] = puVar9;
        }
        uStack_128 = 1;
        func_0x000107374724(&puStack_130);
        func_0x000107330fdc(&uStack_140);
        puVar8[3] = &PTR_DAT_1109e2740;
        func_0x00010737dbe4(auStack_98);
        func_0x000104c33970(&uStack_150);
        func_0x000104c2fe00(&plStack_120,&plStack_d0);
        uStack_160 = 0;
        uStack_158 = 0;
        puStack_e8 = puVar8 + 3;
        puStack_e0 = puVar8;
        func_0x00010737ea04(&lStack_1e0,&plStack_120);
        func_0x00010737dff0(&plStack_120);
        func_0x0001078511d8(&uStack_160);
        func_0x000104c2f714(&plStack_d0);
        func_0x00010002c7d4();
      }
      func_0x00010737efc8(&plStack_120,&uStack_1b0);
      param_2 = &plStack_120;
      func_0x00010737ef78(*(long *)(param_1 + 0x38) + 0xb0);
      func_0x000107283194(&plStack_120);
      if (lStack_1c8 == 0) {
        func_0x00010737e56c(&plStack_d0,&plStack_d0);
      }
      else {
        param_2 = (long **)0x1;
        func_0x00010737e690(&plStack_120);
        puStack_c8 = puStack_110;
        uVar12 = uStack_1d8;
        lVar6 = lStack_1e0;
        puStack_110[1] = 0;
        puStack_110[2] = 0;
        *puStack_110 = &PTR_DAT_1109a7838;
        puStack_110[3] = lStack_1e0;
        puStack_110[4] = uStack_1d8;
        lStack_1e0 = 0;
        uStack_1d8 = 0;
        puStack_110[5] = lStack_1d0;
        puStack_110[6] = lStack_1c8;
        *(undefined4 *)(puStack_110 + 7) = uStack_1c0;
        if (lStack_1c8 != 0) {
          uVar15 = *(ulong *)(lStack_1d0 + 8);
          if ((uVar12 & uVar12 - 1) == 0) {
            uVar15 = uVar15 & uVar12 - 1;
          }
          else if (uVar12 <= uVar15) {
            uVar5 = 0;
            if (uVar12 != 0) {
              uVar5 = uVar15 / uVar12;
            }
            uVar15 = uVar15 - uVar5 * uVar12;
          }
          *(undefined8 **)(lVar6 + uVar15 * 8) = puStack_110 + 5;
          lStack_1d0 = 0;
          lStack_1c8 = 0;
        }
        *(undefined4 *)(puStack_110 + 8) = 0;
        puStack_110 = (undefined8 *)0x0;
        plStack_d0 = puStack_c8 + 3;
        func_0x00010737e7dc(&plStack_120);
      }
      in_ZR = (long **)(*(long *)(param_1 + 0x38) + 0xc0) == &plStack_d0;
      if (!(bool)in_ZR) {
        puStack_118 = puStack_c8;
        plStack_120 = plStack_d0;
        plStack_d0 = (long *)0x0;
        puStack_c8 = (undefined8 *)0x0;
        param_2 = &plStack_120;
        func_0x00010737ea1c();
        func_0x00010737e7b8(&plStack_120);
      }
      func_0x00010737e7f8(&plStack_d0);
      *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa8) = 1;
      func_0x00010737e71c(&lStack_1e0);
      func_0x0001072981bc(&uStack_1b0);
      func_0x000104c30c1c(&puStack_188);
    }
    pplVar11 = &plStack_170;
    func_0x000107279ee0();
  }
  func_0x000107851c80(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if ((int)param_2 != 0) {
      func_0x000104bd46a0();
      func_0x00010737e71c(&lStack_1e0);
      func_0x0001072981bc(&uStack_1b0);
      func_0x000104c30c1c(&puStack_188);
      pplVar11 = &plStack_170;
      func_0x000107279ee0();
    }
    func_0x000107851cf0();
    FUN_107850880();
    func_0x000107851cb4(pplVar11[7]);
    plVar7 = pplVar11[7] + 0x18;
    func_0x00010737ba38(plVar7,param_2);
    if (plVar7 == (long *)0x0) {
      pplVar11 = (long **)0x0;
    }
    else {
      pplVar11 = (long **)plVar7[9];
      (*(code *)(*pplVar11)[2])();
    }
    func_0x000107851cf8();
    return pplVar11;
  }
  return pplVar11;
}



/* Entry: 107851138; end: 10785113b;  */

void FUN_107851138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e26f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078512f4; end: 10785131f;  */

long FUN_1078512f4(long param_1)

{
  func_0x000107267ed0(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107851420; end: 107851453;  */

void FUN_107851420(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e2810;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10785176c; end: 10785177f;  */

void FUN_10785176c(void)

{
  func_0x00010785178c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107851a3c; end: 107851a63;  */

long FUN_107851a3c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107851bb4; end: 107851be3;  */

void FUN_107851bb4(long param_1)

{
  func_0x00010737e7f8(param_1 + 0xd8);
  func_0x000107283194(param_1 + 200);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 107851fdc; end: 107851fef;  */

void FUN_107851fdc(void)

{
  func_0x000107851f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078531c0; end: 1078531f7;  */

void FUN_1078531c0(long param_1)

{
  undefined1 uStack_21;
  
  func_0x00010724b3d8(param_1 + 0x160);
  func_0x00010724b3d8(param_1 + 0x120);
  func_0x000107279298(param_1 + 0x108);
  if (*(uint *)(param_1 + 0x100) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109e2a78)[*(uint *)(param_1 + 0x100)])(&uStack_21,param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  return;
}



/* Entry: 1078533f8; end: 107853423;  */

void FUN_1078533f8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001078545d8(param_2,param_1,&PTR_DAT_1109e2b00);
  func_0x00010785458c();
  return;
}



/* Entry: 1078536e4; end: 10785370b;  */

long FUN_1078536e4(long param_1)

{
  func_0x00010785370c();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107853fe4; end: 10785406b;  */

ulong FUN_107853fe4(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  puVar1 = &uStack_31;
  func_0x00010726364c(puVar1,param_1);
  puVar1 = puVar1 + -0x61c8864680b583eb;
  puVar2 = &uStack_32;
  func_0x00010726364c(puVar2,param_1 + 0x38);
  uVar3 = (ulong)(puVar2 + (long)puVar1 * 0x1000 + ((ulong)puVar1 >> 4) + -0x61c8864680b583eb) ^
          (ulong)puVar1;
  puVar1 = &uStack_33;
  func_0x00010726364c(puVar1,param_1 + 0x70);
  return (ulong)(puVar1 + (uVar3 >> 4) + uVar3 * 0x1000 + -0x61c8864680b583eb) ^ uVar3;
}



/* Entry: 107854228; end: 10785424f;  */

undefined8 * FUN_107854228(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e2ba0;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107854460();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  func_0x000107853680(puVar1 + 4,puVar2 + 3);
  return puVar1;
}



/* Entry: 107854670; end: 1078547e3;  */

undefined8 FUN_107854670(long param_1,int param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_1b9;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [104];
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [168];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0xc) {
    uVar2 = 0;
    goto LAB_107854768;
  }
  lVar4 = *param_4;
  if (*(char *)(lVar4 + 0x1f) < '\0') {
    if (*(long *)(lVar4 + 0x10) != 0) goto LAB_1078546d0;
  }
  else if (*(char *)(lVar4 + 0x1f) != '\0') {
LAB_1078546d0:
    lVar1 = (*(long **)(lVar4 + 0x20))[1];
    for (lVar3 = **(long **)(lVar4 + 0x20); lVar3 != lVar1; lVar3 = lVar3 + 0x40) {
      func_0x000100060964(auStack_138,&DAT_10f311774);
      func_0x0001077765a4(auStack_1a8,lVar3,&uStack_1b9);
      func_0x0001072deec0(auStack_100,auStack_138,auStack_1a8);
      func_0x0001072965a0(auStack_1b8,auStack_100,1);
      func_0x00010729651c(auStack_100);
      func_0x00010726af18(auStack_1a0);
      func_0x000104c2f714(auStack_138);
      func_0x000107854174(param_1 + 0x88,lVar4 + 8,param_3,auStack_1b8);
      func_0x00010726b264(auStack_1b8);
    }
  }
  uVar2 = 1;
LAB_107854768:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    __Unwind_Resume(uVar2);
    func_0x000107854820();
    func_0x0001074f8ec0();
    return uVar2;
  }
  return uVar2;
}



/* Entry: 107854c84; end: 107854c97;  */

void FUN_107854c84(void)

{
  func_0x000107854c98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107854ff0; end: 107855003;  */

void FUN_107854ff0(void)

{
  func_0x000107855014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10785519c; end: 10785519f;  */

void FUN_10785519c(long param_1)

{
  long unaff_x19;
  
  func_0x000107855dd0();
  if (*(long *)(param_1 + 0x120) != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(unaff_x19 + 0x120);
  func_0x0001072508cc(unaff_x19 + 0x120);
  func_0x00010785559c(unaff_x19 + 0x100);
  func_0x00010724bd50(unaff_x19 + 0xf0);
  func_0x0001074f8ec0(unaff_x19 + 8);
  return;
}



/* Entry: 1078556ec; end: 107855717;  */

undefined8 * FUN_1078556ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e2d70;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107855db8();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  func_0x000107855644(param_2 + 4,puVar1 + 3);
  return param_2;
}



/* Entry: 107855df0; end: 107855e3f;  */

undefined8 * FUN_107855df0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109e2e10;
  func_0x000107853040(param_1 + 1);
  param_1[0x1d] = param_3;
  func_0x00010726ed14(param_1 + 0x1e);
  param_1[0x20] = param_1;
  return param_1;
}



/* Entry: 10785654c; end: 10785654f;  */

void FUN_10785654c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107856770; end: 10785677b;  */

undefined ** FUN_107856770(void)

{
  return &PTR_DAT_1109e2f10;
}



/* Entry: 107856994; end: 1078569b7;  */

undefined8 * FUN_107856994(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e2f30;
  func_0x0001078567b4(param_2 + 1);
  func_0x0001078568c0(param_2 + 4,param_1 + 0x20);
  return param_2;
}



/* Entry: 107856c58; end: 107856c5b;  */

undefined8 * FUN_107856c58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2ff0;
  func_0x0001074fdf6c(param_1 + 1);
  return param_1;
}



/* Entry: 107857048; end: 10785705b;  */

void FUN_107857048(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x000107857078();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1078571c0; end: 107857223;  */

void FUN_1078571c0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001078571d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 1078576b0; end: 1078576b7;  */

void FUN_1078576b0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107859a74(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x90;
    func_0x000107859604();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1078583d8; end: 107858793;  */

ulong FUN_1078583d8(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x23;
  uint uVar16;
  ulong uVar17;
  float fVar18;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar14 = (ulong)uVar2;
  *(uint *)(param_1 + 0x20) = uVar2 + 1;
  uVar17 = *(ulong *)(param_1 + 0x30);
  if (uVar17 != 0) {
    uVar6 = uVar17 - 1;
    uVar16 = (uint)uVar17;
    if ((uVar17 & uVar6) == 0) {
      unaff_x23 = (ulong)(uVar16 - 1 & uVar2);
    }
    else {
      unaff_x23 = uVar14;
      if (uVar17 <= uVar14) {
        uVar3 = 0;
        if (uVar16 != 0) {
          uVar3 = uVar2 / uVar16;
        }
        unaff_x23 = (ulong)(uVar2 - uVar3 * uVar16);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x28) + unaff_x23 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_107858498;
          uVar8 = plVar15[1];
          if (uVar8 != uVar14) break;
          if (*(uint *)(plVar15 + 2) == uVar2) goto LAB_107858748;
        }
        if ((uVar17 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar17 <= uVar8) {
          uVar9 = 0;
          if (uVar17 != 0) {
            uVar9 = uVar8 / uVar17;
          }
          uVar8 = uVar8 - uVar9 * uVar17;
        }
      } while (uVar8 == unaff_x23);
    }
  }
LAB_107858498:
  plVar1 = (long *)(param_1 + 0x38);
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar14;
  *(uint *)(plVar15 + 2) = uVar2;
  plVar15[3] = 0;
  fVar18 = (float)(*(long *)(param_1 + 0x40) + 1);
  if ((uVar17 != 0) && (fVar18 <= *(float *)(param_1 + 0x48) * (float)uVar17)) goto LAB_1078586d4;
  uVar6 = 1;
  if (2 < uVar17) {
    uVar6 = (ulong)((uVar17 & uVar17 - 1) != 0);
  }
  uVar6 = uVar6 | uVar17 << 1;
  uVar8 = (ulong)(fVar18 / *(float *)(param_1 + 0x48));
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar17 = *(ulong *)(param_1 + 0x30);
  }
  if (uVar17 < uVar6) {
LAB_107858544:
    if (uVar6 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x107858788);
      (*pcVar4)();
    }
    lVar5 = uVar6 << 3;
    __Znwm(lVar5);
    func_0x0001078598f8(param_1 + 0x28,lVar5);
    *(ulong *)(param_1 + 0x30) = uVar6;
    lVar5 = *(long *)(param_1 + 0x28);
    for (uVar17 = 0; uVar6 != uVar17; uVar17 = uVar17 + 1) {
      *(undefined8 *)(lVar5 + uVar17 * 8) = 0;
    }
    plVar10 = (long *)*plVar1;
    uVar17 = uVar6;
    if (plVar10 != (long *)0x0) {
      uVar12 = plVar10[1];
      uVar9 = uVar6 - 1;
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar12 / uVar6;
      }
      uVar13 = uVar12;
      if (uVar6 <= uVar12) {
        uVar13 = uVar12 - uVar8 * uVar6;
      }
      if ((uVar6 & uVar9) == 0) {
        uVar13 = uVar12 & uVar9;
      }
      *(long **)(lVar5 + uVar13 * 8) = plVar1;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        uVar8 = plVar10[1];
        if ((uVar6 & uVar9) == 0) {
          uVar8 = uVar8 & uVar9;
        }
        else if (uVar6 <= uVar8) {
          uVar12 = 0;
          if (uVar6 != 0) {
            uVar12 = uVar8 / uVar6;
          }
          uVar8 = uVar8 - uVar12 * uVar6;
        }
        if (uVar8 != uVar13) {
          if (*(long *)(lVar5 + uVar8 * 8) == 0) {
            *(long **)(lVar5 + uVar8 * 8) = plVar11;
            uVar13 = uVar8;
          }
          else {
            *plVar11 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar5 + uVar8 * 8);
            **(long **)(lVar5 + uVar8 * 8) = (long)plVar10;
            plVar10 = plVar11;
          }
        }
      }
    }
  }
  else if (uVar6 < uVar17) {
    uVar8 = (ulong)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x48));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar8) {
      uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
    }
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar6 < uVar17) {
      if (uVar6 != 0) goto LAB_107858544;
      func_0x0001078598f8(param_1 + 0x28,0);
      *(undefined8 *)(param_1 + 0x30) = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulong *)(param_1 + 0x30);
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar17 - 1U & uVar2);
  }
  else {
    unaff_x23 = uVar14;
    if (uVar17 <= uVar14) {
      uVar6 = 0;
      if (uVar17 != 0) {
        uVar6 = uVar14 / uVar17;
      }
      unaff_x23 = uVar14 - uVar6 * uVar17;
    }
  }
LAB_1078586d4:
  lVar5 = *(long *)(param_1 + 0x28);
  plVar10 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar15 = *plVar1;
    *plVar1 = (long)plVar15;
    *(long **)(lVar5 + unaff_x23 * 8) = plVar1;
    if (*plVar15 != 0) {
      uVar6 = *(ulong *)(*plVar15 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar6 = uVar6 & uVar17 - 1;
      }
      else if (uVar17 <= uVar6) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar6 / uVar17;
        }
        uVar6 = uVar6 - uVar8 * uVar17;
      }
      *(long **)(lVar5 + uVar6 * 8) = plVar15;
    }
  }
  else {
    *plVar15 = *plVar10;
    *plVar10 = (long)plVar15;
  }
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  func_0x000107859ab8();
LAB_107858748:
  lVar7 = *param_2;
  *param_2 = 0;
  lVar5 = plVar15[3];
  plVar15[3] = lVar7;
  if (lVar5 != 0) {
    func_0x000107859a98();
  }
  return uVar14;
}



/* Entry: 10785905c; end: 107859227;  */

void FUN_10785905c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong extraout_x8;
  long extraout_x11;
  long extraout_x13;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 unaff_x30;
  byte bVar9;
  char unaff_b8;
  char unaff_00005101;
  char unaff_00005102;
  char unaff_00005103;
  char unaff_00005104;
  char unaff_00005105;
  char unaff_00005106;
  char unaff_00005107;
  char unaff_b9;
  char unaff_00005121;
  char unaff_00005122;
  char unaff_00005123;
  char unaff_00005124;
  char unaff_00005125;
  char unaff_00005126;
  char unaff_00005127;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar10;
  char cVar17;
  
  func_0x000107859b0c();
  func_0x000107859a3c();
  lVar7 = 0;
  uVar1 = param_1[2];
  func_0x000107859ad4(*param_1 >> 0xc);
  uVar6 = extraout_x8;
  while( true ) {
    uVar6 = uVar6 & uVar1;
    uVar10 = *(undefined8 *)(extraout_x13 + uVar6);
    cVar11 = (char)((ulong)uVar10 >> 8);
    cVar12 = (char)((ulong)uVar10 >> 0x10);
    cVar13 = (char)((ulong)uVar10 >> 0x18);
    cVar14 = (char)((ulong)uVar10 >> 0x20);
    cVar15 = (char)((ulong)uVar10 >> 0x28);
    cVar16 = (char)((ulong)uVar10 >> 0x30);
    cVar17 = (char)((ulong)uVar10 >> 0x38);
    for (uVar4 = CONCAT17(-(cVar17 == unaff_00005107),
                          CONCAT16(-(cVar16 == unaff_00005106),
                                   CONCAT15(-(cVar15 == unaff_00005105),
                                            CONCAT14(-(cVar14 == unaff_00005104),
                                                     CONCAT13(-(cVar13 == unaff_00005103),
                                                              CONCAT12(-(cVar12 == unaff_00005102),
                                                                       CONCAT11(-(cVar11 ==
                                                                                 unaff_00005101),
                                                                                -((char)uVar10 ==
                                                                                 unaff_b8)))))))) &
                 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar3 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar6 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar1;
      uVar3 = extraout_x11 + uVar8 * 0x60;
      func_0x000104c32db4(uVar3,param_2);
      if ((uVar3 & 1) != 0) {
        lVar7 = param_1[1] + uVar8 * 0x60 + 0x38;
        func_0x000107859654(lVar7,param_3);
        if (lVar7 != 0) {
          puVar2 = *(undefined8 **)(lVar7 + 0x30);
          for (puVar5 = *(undefined8 **)(lVar7 + 0x28); puVar5 != puVar2; puVar5 = puVar5 + 1) {
            func_0x000107859244(param_4,*puVar5);
          }
        }
        goto LAB_10785914c;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(cVar17 == unaff_00005127),
                                CONCAT16(-(cVar16 == unaff_00005126),
                                         CONCAT15(-(cVar15 == unaff_00005125),
                                                  CONCAT14(-(cVar14 == unaff_00005124),
                                                           CONCAT13(-(cVar13 == unaff_00005123),
                                                                    CONCAT12(-(cVar12 ==
                                                                              unaff_00005122),
                                                                             CONCAT11(-(cVar11 ==
                                                                                                                                                                              
                                                  unaff_00005121),-((char)uVar10 == unaff_b9))))))))
                       ,1);
    if ((bVar9 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
LAB_10785914c:
  func_0x000107859ae8(unaff_x30);
  return;
}



/* Entry: 1078595a0; end: 1078595ab;  */

void FUN_1078595a0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107859998();
  func_0x000107859a74();
  func_0x000107859514();
  func_0x000104c318bc(param_1 + 0x40,unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x80) = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  return;
}



/* Entry: 107859810; end: 107859827;  */

void FUN_107859810(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107859b30(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107859b58; end: 107859b6f;  */

void FUN_107859b58(long *param_1,long param_2)

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



/* Entry: 107859ffc; end: 10785a0af;  */

/* WARNING: Possible PIC construction at 0x00010785a03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010785a05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785a040) */
/* WARNING: Removing unreachable block (ram,0x00010785a060) */
/* WARNING: Removing unreachable block (ram,0x00010785a084) */
/* WARNING: Removing unreachable block (ram,0x00010785a0a8) */
/* WARNING: Removing unreachable block (ram,0x00010785a06c) */
/* WARNING: Removing unreachable block (ram,0x00010785a058) */

long FUN_107859ffc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 auStack_a8 [32];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [40];
  
  func_0x00010785a7a0();
  func_0x00010688cca4(auStack_58,param_4);
  uStack_68 = 0x10785a040;
  uStack_80 = param_3;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x00010785a7a0(param_1,auStack_58,0);
  uStack_88 = extraout_x8;
  func_0x00010785a7cc();
  lVar1 = param_1;
  func_0x00010785a164(param_1,auStack_a8,0);
  func_0x00010785a7c4();
  func_0x00010785a78c(uStack_88);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010785a7b0();
  func_0x00010785a7bc();
  lVar3 = *(long *)(lVar1 + 0x30);
  lVar2 = lVar1;
  func_0x00010785a474();
  if ((*(long *)(lVar1 + 0x38) == lVar2 && *(long *)(lVar1 + 0x38) == lVar3) &&
     (*(long *)(lVar1 + 0x28) == lVar3)) {
    *(undefined1 *)(lVar1 + 0x40) = 1;
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x30);
  *(long *)(lVar1 + 0x28) = lVar2;
  *(long *)(lVar1 + 0x30) = lVar3;
  return lVar2;
}



/* Entry: 10785a378; end: 10785a3bf;  */

char * FUN_10785a378(char *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  
  while ((param_1 != param_2 &&
         (uVar1 = param_3, func_0x00010688d198(param_3,(long)*param_1), (uVar1 & 1) == 0))) {
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* Entry: 10785a608; end: 10785a6a3;  */

void FUN_10785a608(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  lVar2 = param_1;
  lStack_40 = param_1;
  while( true ) {
    iVar1 = (int)lVar2;
    func_0x00010785a824();
    func_0x00010785a6a4();
    if (iVar1 == 0) break;
    func_0x00010785a780(auStack_58,param_2 + 0x20);
    func_0x0001000fecf4(param_1,auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
    lVar2 = param_2;
    func_0x00010785a110();
  }
  uStack_38 = 1;
  func_0x00010007e37c(&lStack_40);
  return;
}



/* Entry: 10785a9ec; end: 10785aa87;  */

void FUN_10785a9ec(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 extraout_w8;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  param_1[1] = 1;
  puVar1 = param_1;
  func_0x00010785c07c();
  *puVar1 = extraout_w8;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  func_0x00010785aec8(&uStack_50);
  *puVar1 = 0;
  param_1[1] = 0;
  func_0x00010785b1ac(&uStack_50);
  return;
}



/* Entry: 10785b058; end: 10785b0b7;  */

void FUN_10785b058(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010785bd24(param_1,&uStack_30,param_2[2]);
  func_0x00010785c0a8();
  return;
}



/* Entry: 10785b34c; end: 10785b357;  */

long * FUN_10785b34c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010785c0e8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010785b3a0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10785b4cc; end: 10785b53b;  */

long * FUN_10785b4cc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010785b518();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 10785b7e8; end: 10785b84b;  */

undefined8 FUN_10785b7e8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010785b814(&uStack_28);
  return param_1;
}



/* Entry: 10785bce4; end: 10785bcfb;  */

void FUN_10785bce4(long *param_1,long param_2)

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



/* Entry: 10785bfcc; end: 10785bff7;  */

long FUN_10785bfcc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010785b1d8(param_1);
  }
  return param_1;
}



/* Entry: 10785c83c; end: 10785c8af;  */

void FUN_10785c83c(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((param_3 & 1) != 0) ||
     (uVar1 = param_1, func_0x00010785c5f8(param_1,param_2), (int)uVar1 != 0)) {
    uStack_80 = *param_2;
    uStack_78 = param_2[1];
    uStack_68 = param_2[3];
    uStack_48 = param_2[4];
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_60 = uStack_78;
    uStack_50 = uStack_68;
    uStack_38 = uStack_80;
    uStack_30 = uStack_48;
    func_0x00010785c8b0(param_1,&uStack_80,4);
  }
  return;
}



/* Entry: 10785cba0; end: 10785cbab;  */

undefined8 FUN_10785cba0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10785ceec; end: 10785cf33;  */

void FUN_10785ceec(long param_1,undefined8 param_2)

{
  undefined1 auStack_a0 [96];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107878b80(auStack_a0,param_2);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  uStack_30 = *(undefined8 *)(param_1 + 0x70);
  _memcpy(param_1,auStack_a0,0x80);
  return;
}



/* Entry: 10785d2e0; end: 10785d2f7;  */

double FUN_10785d2e0(double param_1,double *param_2)

{
  if (((ulong)param_2[3] & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  return param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
}



/* Entry: 10785d5e8; end: 10785d67b;  */

undefined4 FUN_10785d5e8(undefined4 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_2;
  func_0x00010785dc78();
  func_0x00010785dc48();
  func_0x00010785dd8c();
  func_0x00010785dc70();
  func_0x00010785dd24();
  plVar2 = (long *)*param_2;
  func_0x00010785dc48();
  func_0x00010785dd0c(*(undefined8 *)(*plVar2 + 0x38));
  func_0x00010785dc70();
  if (((ulong)puVar1 & 0x100000000) != 0) {
    param_1 = (int)puVar1;
  }
  return param_1;
}



/* Entry: 10785d910; end: 10785d983;  */

undefined4
FUN_10785d910(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  long *plVar2;
  ulong unaff_x21;
  
  func_0x00010785dc78();
  func_0x00010785dc48();
  func_0x00010785dcec();
  func_0x00010785dc70();
  func_0x00010785dce4();
  plVar2 = (long *)*param_1;
  func_0x00010785dc48();
  func_0x00010785dcbc(*(undefined8 *)(*plVar2 + 0x50));
  func_0x00010785dc60();
  uVar1 = (int)plVar2;
  if ((unaff_x21 & 1) == 0) {
    uVar1 = param_4;
  }
  return uVar1;
}



/* Entry: 10785dda0; end: 10785de1b;  */

void FUN_10785dda0(float *param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = (float)((ulong)param_2 >> 0x20);
  uVar2 = (uint)param_2;
  func_0x0001078d8738();
  bVar1 = (param_3 & 1) == 0;
  if (bVar1) {
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[3] = fVar3;
    fVar3 = fVar3 / 255.0;
    *param_1 = fVar3 * (float)(uVar2 & 0xff);
    param_1[1] = fVar3 * (float)(uVar2 >> 8 & 0xff);
    param_1[2] = fVar3 * (float)(uVar2 >> 0x10 & 0xff);
  }
  *(bool *)(param_1 + 4) = !bVar1;
  return;
}



/* Entry: 10785e464; end: 10785e583;  */

void FUN_10785e464(undefined8 *param_1,undefined8 param_2,ulong *param_3,long *param_4,long *param_5
                  )

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_168 [3];
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_134 [244];
  
  if (param_4[1] - *param_4 == 0x10) {
    uVar3 = *param_3;
    if ((uVar3 != param_3[1]) &&
       (func_0x00010ae2de6c(uVar3,((int)param_3[1] - (int)uVar3) * 8,auStack_134),
       (uVar3 & 0xff) == 0)) {
      uStack_140 = 0;
      lStack_148 = 0;
      uStack_150 = 0;
      lVar1 = *param_5;
      uVar3 = param_5[1] - lVar1;
      uVar2 = 0;
      uVar4 = 0;
      lVar5 = 0;
      if (0xf < uVar3) {
        uVar3 = uVar3 & 0xfffffffffffffff0;
        func_0x000100651cb4(&uStack_150,uVar3);
        lVar5 = lStack_148;
        func_0x00010054f8dc(auStack_168,param_4);
        func_0x0001001e51e0(lVar1,lVar5 - uVar3,uVar3,auStack_134,auStack_168[0],0);
        func_0x000100100fec(auStack_168);
        uVar2 = uStack_140;
        uVar4 = uStack_150;
        lVar5 = lStack_148;
      }
      param_1[1] = lVar5;
      *param_1 = uVar4;
      param_1[2] = uVar2;
      lStack_148 = 0;
      uStack_140 = 0;
      uStack_150 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      func_0x000100100fec(&uStack_150);
      return;
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10785e898; end: 10785e91f;  */

void FUN_10785e898(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 in_register_00005008;
  undefined1 auStack_40 [16];
  
  func_0x000107869104();
  func_0x00010785e920();
  func_0x000107868fd8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x000107869448();
  func_0x000107868ff0();
  if ((unaff_x20 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
  }
  else {
    func_0x00010786921c();
    unaff_x19[1] = in_register_00005008;
    *unaff_x19 = param_1;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000107868df0();
      } while (extraout_w10_00 != 0);
    }
  }
  func_0x000107289cc8(auStack_40);
  return;
}



/* Entry: 10785ec90; end: 10785ed13;  */

/* WARNING: Possible PIC construction at 0x00010785ecec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785ecf0) */

void FUN_10785ec90(long param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  undefined1 auStack_80 [80];
  
  func_0x000107868dcc();
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010786909c(uVar1);
  if (param_1 != 0) {
    in_ZR = 0;
    if (*(int *)(param_1 + 0x30) == 0xb) {
      plVar2 = (long *)(param_1 + 0x20);
      func_0x000107868540();
      param_1 = *plVar2;
      func_0x0001078692c8(auStack_80,param_3);
      param_2 = auStack_80;
      goto code_r0x00010785ed14;
    }
  }
  func_0x000107868d60();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010785ed14:
  func_0x000107868fbc();
  func_0x0001078692c8(param_1 + 0xa8,param_2);
  func_0x0001078692b8();
  return;
}



/* Entry: 10785f194; end: 10785f1f3;  */

void FUN_10785f194(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x000107868f98(uVar1);
  return;
}



/* Entry: 107864f5c; end: 107864fd7;  */

void FUN_107864f5c(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w10;
  ulong unaff_x20;
  
  func_0x000107868f7c();
  func_0x00010786912c();
  func_0x000107869274();
  func_0x00010785e7b8(param_1,1);
  func_0x000107869174();
  func_0x000107866714();
  func_0x0001078690b4();
  func_0x000107869158();
  if ((unaff_x20 & 1) == 0) {
    func_0x0001078690c0();
    lVar1 = extraout_x8_00;
  }
  else {
    func_0x00010786921c();
    lVar1 = extraout_x8;
  }
  if (lVar1 != 0) {
    do {
      func_0x000107868df0();
    } while (extraout_w10 != 0);
  }
  func_0x0001078690a8();
  func_0x0001078692c0();
  func_0x000107869150();
  return;
}



/* Entry: 107865760; end: 107865793;  */

void FUN_107865760(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0xbe4) = *(int *)(param_1 + 0xbe4) + 1;
  func_0x000104c003e8(param_2);
  *(int *)(param_1 + 0xbe4) = *(int *)(param_1 + 0xbe4) + -1;
  if ((*(int *)(param_1 + 0xbe4) == 0) && (*(char *)(param_1 + 0xbe0) == '\x01')) {
    *(undefined1 *)(param_1 + 0xbe0) = 0;
    func_0x000107865840(param_1,&stack0xffffffffffffffef);
    return;
  }
  return;
}



/* Entry: 107866044; end: 1078660bb;  */

long FUN_107866044(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_2;
}



/* Entry: 107866a44; end: 107866adf;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866a44(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined1 in_ZR;
  undefined4 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  undefined1 auStack_948 [24];
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 ***pppuStack_920;
  undefined *puStack_918;
  long lStack_910;
  long lStack_908;
  undefined1 auStack_900 [24];
  undefined1 auStack_8e8 [72];
  undefined4 uStack_8a0;
  undefined1 auStack_898 [72];
  undefined8 ***pppuStack_830;
  undefined *puStack_828;
  undefined8 uStack_820;
  long lStack_818;
  long alStack_80a [8];
  undefined1 auStack_7c8 [72];
  undefined4 uStack_780;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined1 auStack_6f8 [16];
  undefined8 uStack_6e8;
  undefined4 uStack_6a0;
  undefined8 ***pppuStack_630;
  undefined *puStack_628;
  undefined1 auStack_618 [16];
  undefined4 uStack_608;
  undefined4 uStack_5c0;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  undefined1 auStack_538 [16];
  long lStack_528;
  undefined4 uStack_4e0;
  undefined8 ***pppuStack_470;
  undefined *puStack_468;
  undefined1 auStack_458 [16];
  long lStack_448;
  undefined4 uStack_400;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined1 auStack_378 [16];
  undefined4 uStack_368;
  undefined4 uStack_320;
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_298 [16];
  undefined4 uStack_288;
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  ushort uStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  ushort uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x0001078693dc();
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  func_0x000107868fa4();
  func_0x0001078692b0();
  uVar3 = *(ushort *)(unaff_x21 + 0xa8);
  func_0x00010786933c();
  uStack_80 = 3;
  uStack_c8 = uVar3;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar5 = auStack_d8;
  func_0x000107867444(puVar5);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    func_0x000107867444(auStack_d8);
    func_0x00010786906c();
    puStack_e8 = &DAT_107866ae0;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x000107868d78();
    func_0x0001078693dc();
    if (extraout_x9_00 != 0) {
      do {
        func_0x000107868ef4();
      } while (extraout_w11_00 != 0);
    }
    func_0x000107868fa4();
    func_0x0001078692b0();
    uVar3 = *(ushort *)((ulong)uVar3 + 0xa8);
    uVar7 = (ulong)uVar3;
    func_0x00010786933c();
    uStack_160 = 4;
    uStack_1a8 = uVar3;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar5 = auStack_1b8;
    func_0x000107867468(puVar5);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      puVar5 = auStack_1b8;
      func_0x000107867468();
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866b7c;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      func_0x000107869368();
      uVar4 = SUB84(puVar5,0);
      if (extraout_x9_01 != 0) {
        do {
          func_0x000107868ef4();
          uVar4 = SUB84(puVar5,0);
        } while (extraout_w11_01 != 0);
      }
      func_0x0001078693e8();
      func_0x0001072adc24();
      uStack_240 = 5;
      uStack_288 = uVar4;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(uVar7 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar5 = auStack_298;
      func_0x000107289dd4(puVar5);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        puVar5 = auStack_298;
        func_0x000107289dd4();
        func_0x00010786906c();
        puStack_2a8 = &DAT_107866c10;
        pppuStack_2b0 = &ppuStack_1d0;
        func_0x000107868d78();
        func_0x000107869368();
        uVar4 = SUB84(puVar5,0);
        if (extraout_x9_02 != 0) {
          do {
            func_0x000107868ef4();
            uVar4 = SUB84(puVar5,0);
          } while (extraout_w11_02 != 0);
        }
        func_0x0001078693e8();
        func_0x0001072cd320();
        uStack_320 = 6;
        uStack_368 = uVar4;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(uVar7 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar5 = auStack_378;
        func_0x000107289cc8(puVar5);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          func_0x000107289cc8(auStack_378);
          func_0x00010786906c();
          puStack_388 = &DAT_107866ca4;
          pppuStack_390 = &pppuStack_2b0;
          func_0x000107868d78();
          func_0x0001078693dc();
          if (extraout_x9_03 != 0) {
            do {
              func_0x000107868ef4();
            } while (extraout_w11_03 != 0);
          }
          func_0x000107868fa4();
          func_0x0001078692b0();
          lVar8 = *(long *)(uVar7 + 0xa8);
          func_0x00010786933c();
          uStack_400 = 7;
          lStack_448 = lVar8;
          func_0x000107868f10();
          func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
          func_0x0001078690ec();
          func_0x0001078690e4();
          puVar5 = auStack_458;
          func_0x00010786748c(puVar5);
          func_0x000107868d60();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107868f1c();
            func_0x0001078690e4();
            func_0x00010786748c(auStack_458);
            func_0x00010786906c();
            puStack_468 = &DAT_107866d40;
            pppuStack_470 = &pppuStack_390;
            func_0x000107868d78();
            func_0x0001078693dc();
            if (extraout_x9_04 != 0) {
              do {
                func_0x000107868ef4();
              } while (extraout_w11_04 != 0);
            }
            func_0x000107868fa4();
            func_0x0001078692b0();
            lVar8 = *(long *)(lVar8 + 0xa8);
            func_0x00010786933c();
            uStack_4e0 = 8;
            lStack_528 = lVar8;
            func_0x000107868f10();
            func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
            func_0x0001078690ec();
            func_0x0001078690e4();
            puVar5 = auStack_538;
            func_0x0001078674b0(puVar5);
            func_0x000107868d60();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107868f1c();
              func_0x0001078690e4();
              func_0x0001078674b0(auStack_538);
              func_0x00010786906c();
              puStack_548 = &DAT_107866ddc;
              pppuStack_550 = &pppuStack_470;
              func_0x000107868d78();
              func_0x000107869368();
              if (extraout_x9_05 != 0) {
                do {
                  func_0x000107868ef4();
                } while (extraout_w11_05 != 0);
              }
              func_0x0001078693e8();
              func_0x00010750833c();
              uStack_608 = (undefined4)param_1;
              uStack_5c0 = 9;
              func_0x000107868f10();
              func_0x000107868e1c(*(undefined8 *)(lVar8 + 0x18));
              func_0x0001078690ec();
              func_0x0001078690e4();
              puVar5 = auStack_618;
              func_0x000107289e5c(puVar5);
              func_0x000107868d60();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000107868f1c();
                func_0x0001078690e4();
                func_0x000107289e5c(auStack_618);
                func_0x00010786906c();
                puStack_628 = &DAT_107866e70;
                pppuStack_630 = &pppuStack_550;
                func_0x000107868d78();
                func_0x000107869368();
                if (extraout_x9_06 != 0) {
                  do {
                    func_0x000107868ef4();
                  } while (extraout_w11_06 != 0);
                }
                func_0x0001078693e8();
                func_0x00010740f294();
                uStack_6a0 = 10;
                uStack_6e8 = param_1;
                func_0x000107868f10();
                func_0x000107868e1c(*(undefined8 *)(lVar8 + 0x18));
                func_0x0001078690ec();
                func_0x0001078690e4();
                puVar5 = auStack_6f8;
                func_0x00010740f2d0(puVar5);
                func_0x000107868d60();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x000107868f1c();
                  func_0x0001078690e4();
                  func_0x00010740f2d0(auStack_6f8);
                  func_0x00010786906c();
                  pcStack_708 = FUN_107866f04;
                  pppuStack_710 = &pppuStack_630;
                  func_0x000107868d78();
                  uStack_820 = *param_3;
                  lStack_818 = param_3[1];
                  plVar6 = extraout_x8;
                  if (lStack_818 != 0) {
                    do {
                      func_0x000107868ef4();
                      plVar6 = extraout_x8_00;
                    } while (extraout_w11_07 != 0);
                  }
                  lVar8 = *plVar6;
                  func_0x00010785f084(alStack_80a);
                  plVar6 = alStack_80a;
                  func_0x0001078692c8(auStack_7c8);
                  uStack_780 = 0xb;
                  func_0x00010786954c();
                  puVar5 = *(undefined1 **)(lVar8 + 0x18);
                  func_0x000107868ecc();
                  func_0x000107869290();
                  func_0x0001078693cc();
                  func_0x000107869424();
                  func_0x000107868d60();
                  if ((bool)in_ZR) {
                    return puVar5;
                  }
                  ___stack_chk_fail();
                  func_0x000107869290();
                  func_0x0001078693cc();
                  func_0x000107869424();
                  func_0x00010786906c();
                  puStack_828 = &DAT_107866fac;
                  pppuStack_830 = &pppuStack_710;
                  func_0x000107868d78();
                  lVar8 = *plVar6;
                  lStack_908 = plVar6[1];
                  lStack_910 = lVar8;
                  if (lStack_908 != 0) {
                    do {
                      func_0x000107868ef4();
                    } while (extraout_w11_08 != 0);
                  }
                  uVar1 = *(undefined8 *)(lVar8 + 0xc0);
                  uVar2 = *(undefined8 *)(lVar8 + 200);
                  func_0x000107328418(auStack_900);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (auStack_8e8,auStack_900);
                  uStack_8a0 = 0xc;
                  puVar5 = auStack_898;
                  puStack_918 = &UNK_10786700c;
                  uStack_930 = uVar2;
                  uStack_928 = uVar1;
                  pppuStack_920 = &pppuStack_830;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (auStack_948);
                  func_0x000107268798(puVar5,auStack_948);
                  func_0x0001078693fc();
                  return puVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  return puVar5;
}



/* Entry: 107866f04; end: 107866fab;  */

/* WARNING: Possible PIC construction at 0x000107867008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078670cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078671f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078670d0) */
/* WARNING: Removing unreachable block (ram,0x00010786710c) */
/* WARNING: Removing unreachable block (ram,0x000107867120) */
/* WARNING: Removing unreachable block (ram,0x00010786712c) */
/* WARNING: Removing unreachable block (ram,0x000107867138) */
/* WARNING: Removing unreachable block (ram,0x000107867174) */
/* WARNING: Removing unreachable block (ram,0x000107867178) */
/* WARNING: Removing unreachable block (ram,0x000107867180) */
/* WARNING: Removing unreachable block (ram,0x0001078671d8) */
/* WARNING: Removing unreachable block (ram,0x0001078671a4) */
/* WARNING: Removing unreachable block (ram,0x0001078671a8) */
/* WARNING: Removing unreachable block (ram,0x0001078671b0) */
/* WARNING: Removing unreachable block (ram,0x0001078671b8) */
/* WARNING: Removing unreachable block (ram,0x0001078671c4) */
/* WARNING: Removing unreachable block (ram,0x0001078671cc) */
/* WARNING: Removing unreachable block (ram,0x0001078671d4) */
/* WARNING: Removing unreachable block (ram,0x0001078671e4) */
/* WARNING: Removing unreachable block (ram,0x000107867104) */
/* WARNING: Removing unreachable block (ram,0x00010786700c) */
/* WARNING: Removing unreachable block (ram,0x00010786704c) */
/* WARNING: Removing unreachable block (ram,0x000107867060) */
/* WARNING: Removing unreachable block (ram,0x00010786706c) */
/* WARNING: Removing unreachable block (ram,0x00010786707c) */
/* WARNING: Removing unreachable block (ram,0x0001078670a8) */
/* WARNING: Removing unreachable block (ram,0x0001078670ac) */
/* WARNING: Removing unreachable block (ram,0x0001078670b4) */
/* WARNING: Removing unreachable block (ram,0x000107867038) */
/* WARNING: Removing unreachable block (ram,0x0001078671fc) */
/* WARNING: Removing unreachable block (ram,0x00010786724c) */
/* WARNING: Removing unreachable block (ram,0x000107867264) */
/* WARNING: Removing unreachable block (ram,0x000107867278) */
/* WARNING: Removing unreachable block (ram,0x0001078672b4) */
/* WARNING: Removing unreachable block (ram,0x000107867298) */
/* WARNING: Removing unreachable block (ram,0x00010786918c) */
/* WARNING: Removing unreachable block (ram,0x000107867230) */
/* WARNING: Removing unreachable block (ram,0x00010014aed4) */
/* WARNING: Removing unreachable block (ram,0x000107867380) */
/* WARNING: Removing unreachable block (ram,0x00010786735c) */
/* WARNING: Removing unreachable block (ram,0x00010786733c) */
/* WARNING: Removing unreachable block (ram,0x00010786731c) */
/* WARNING: Removing unreachable block (ram,0x0001078672f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672f4) */
/* WARNING: Removing unreachable block (ram,0x0001078672c8) */
/* WARNING: Removing unreachable block (ram,0x00010786730c) */
/* WARNING: Removing unreachable block (ram,0x00010786732c) */
/* WARNING: Removing unreachable block (ram,0x00010786734c) */
/* WARNING: Removing unreachable block (ram,0x0001078672cc) */
/* WARNING: Removing unreachable block (ram,0x0001078672f8) */
/* WARNING: Removing unreachable block (ram,0x00010786736c) */
/* WARNING: Removing unreachable block (ram,0x000107867384) */
/* WARNING: Removing unreachable block (ram,0x00010724ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010724ae90) */
/* WARNING: Removing unreachable block (ram,0x00010724aea4) */
/* WARNING: Removing unreachable block (ram,0x0001078673f0) */
/* WARNING: Removing unreachable block (ram,0x0001078672d4) */

undefined1 * FUN_107866f04(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  long lVar5;
  undefined1 auStack_248 [24];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 **ppuStack_220;
  undefined *puStack_218;
  long lStack_210;
  long lStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [72];
  undefined4 uStack_1a0;
  undefined1 auStack_198 [72];
  undefined1 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long alStack_10a [8];
  undefined1 auStack_c8 [72];
  undefined4 uStack_80;
  
  func_0x000107868d78();
  uStack_120 = *param_2;
  lStack_118 = param_2[1];
  plVar4 = extraout_x8;
  if (lStack_118 != 0) {
    do {
      func_0x000107868ef4();
      plVar4 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lVar5 = *plVar4;
  func_0x00010785f084(alStack_10a);
  plVar4 = alStack_10a;
  func_0x0001078692c8(auStack_c8);
  uStack_80 = 0xb;
  func_0x00010786954c();
  puVar3 = *(undefined1 **)(lVar5 + 0x18);
  func_0x000107868ecc();
  func_0x000107869290();
  func_0x0001078693cc();
  func_0x000107869424();
  func_0x000107868d60();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107869290();
  func_0x0001078693cc();
  func_0x000107869424();
  func_0x00010786906c();
  puStack_128 = &DAT_107866fac;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000107868d78();
  lVar5 = *plVar4;
  lStack_208 = plVar4[1];
  lStack_210 = lVar5;
  if (lStack_208 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11_00 != 0);
  }
  uVar1 = *(undefined8 *)(lVar5 + 0xc0);
  uVar2 = *(undefined8 *)(lVar5 + 200);
  func_0x000107328418(auStack_200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1e8,auStack_200);
  uStack_1a0 = 0xc;
  puVar3 = auStack_198;
  puStack_218 = &UNK_10786700c;
  uStack_230 = uVar2;
  uStack_228 = uVar1;
  ppuStack_220 = &puStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_248);
  func_0x000107268798(puVar3,auStack_248);
  func_0x0001078693fc();
  return puVar3;
}



/* Entry: 1078675a0; end: 1078675b3;  */

void FUN_1078675a0(void)

{
  func_0x000107865050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107867714; end: 10786773b;  */

void FUN_107867714(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e3408;
  func_0x000107867790(param_1 + 3);
  return;
}



/* Entry: 1078677f0; end: 107867823;  */

void FUN_1078677f0(void)

{
  func_0x000107867808();
  return;
}



/* Entry: 107867d28; end: 107867d5b;  */

void FUN_107867d28(undefined8 *param_1)

{
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e34d0;
  func_0x000107867d7c(param_1 + 3);
  return;
}



/* Entry: 107867dec; end: 107867e4b;  */

/* WARNING: Possible PIC construction at 0x000107867e08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107867e0c) */
/* WARNING: Removing unreachable block (ram,0x000107867e34) */
/* WARNING: Removing unreachable block (ram,0x000107867e48) */
/* WARNING: Removing unreachable block (ram,0x000107867e2c) */
/* WARNING: Removing unreachable block (ram,0x000107868f6c) */

void FUN_107867dec(void)

{
  func_0x000107868e58();
  func_0x0001078694bc();
  func_0x0001078694e0();
  func_0x000107867e6c();
  func_0x000107869480();
  return;
}



/* Entry: 107867f04; end: 107867f1f;  */

void FUN_107867f04(void)

{
  func_0x0001078692a4();
  func_0x0001078695b0();
  return;
}



/* Entry: 10786804c; end: 107868063;  */

void FUN_10786804c(long param_1)

{
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x88);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 107868154; end: 107868183;  */

void FUN_107868154(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xdd67c8a60dd67d) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x128);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e36b0;
  func_0x0001078681d8(param_1 + 3);
  return;
}



/* Entry: 10786825c; end: 1078682bb;  */

/* WARNING: Possible PIC construction at 0x000107868278: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786827c) */
/* WARNING: Removing unreachable block (ram,0x0001078682a4) */
/* WARNING: Removing unreachable block (ram,0x0001078682b8) */
/* WARNING: Removing unreachable block (ram,0x00010786829c) */
/* WARNING: Removing unreachable block (ram,0x000107868f6c) */

void FUN_10786825c(void)

{
  func_0x000107868e58();
  func_0x0001078694bc();
  func_0x0001078694e0();
  func_0x0001078682dc();
  func_0x000107869480();
  return;
}



/* Entry: 107868384; end: 10786839f;  */

void FUN_107868384(void)

{
  func_0x000107869234();
  func_0x0001078683a0();
  return;
}



/* Entry: 107868714; end: 107868757;  */

long * FUN_107868714(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107868c5c; end: 107868cb3;  */

long FUN_107868c5c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    func_0x00010786958c(param_2[3]);
    func_0x000107869404();
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10786967c; end: 1078696e7;  */

undefined8 FUN_10786967c(void)

{
  int iVar1;
  
  if ((bRam0000000113822d70 & 1) == 0) {
    iVar1 = 0x13822d70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001078696e8(0x113822d58);
      ___cxa_guard_release(0x113822d70);
    }
  }
  return 0x113822d58;
}



/* Entry: 107869874; end: 10786991f;  */

/* WARNING: Possible PIC construction at 0x0001078698a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078698a4) */
/* WARNING: Removing unreachable block (ram,0x0001078698c0) */
/* WARNING: Removing unreachable block (ram,0x0001078698b0) */
/* WARNING: Removing unreachable block (ram,0x0001078698dc) */
/* WARNING: Removing unreachable block (ram,0x0001078698e0) */
/* WARNING: Removing unreachable block (ram,0x00010786990c) */
/* WARNING: Removing unreachable block (ram,0x0001078698f4) */

undefined1  [16] FUN_107869874(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010786d78c();
  func_0x0001074d2700();
  param_2 = param_2 + 0x38;
  if (param_3 == 0) {
    param_2 = 0;
  }
  auVar1[8] = param_3 != 0;
  auVar1._0_8_ = param_2;
  auVar1._9_7_ = 0;
  return auVar1;
}



/* Entry: 107869d14; end: 107869d33;  */

undefined8 FUN_107869d14(undefined8 *param_1)

{
  func_0x00010786b5b8();
  return *param_1;
}



/* Entry: 10786a0b4; end: 10786a0bb;  */

long FUN_10786a0b4(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar2 = (long *)*param_1;
  plVar6 = (long *)plVar2[1];
  if ((plVar6 != (long *)0x0) && (plVar2[3] != 0)) {
    plVar3 = plVar2;
    func_0x00010786d91c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar3 & uVar7);
    }
    else {
      plVar8 = plVar3;
      if (plVar6 <= plVar3) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar3 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar3 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*plVar2 + (long)plVar8 * 8);
    plVar2 = plVar3;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar3) break;
        func_0x00010786de34();
        if ((int)plVar2 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 10786a368; end: 10786a3cb;  */

void FUN_10786a368(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010786d890();
  func_0x00010786a3cc();
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10786af00(&uStack_40);
  func_0x00010786dd44(auStack_58);
  func_0x00010786ccc8();
  puVar1 = &uStack_40;
  func_0x00010786b120();
  func_0x00010786970c();
  *(undefined8 **)(unaff_x19 + 0x10) = puVar1;
  return;
}



/* Entry: 10786a740; end: 10786a76b;  */

void FUN_10786a740(long param_1)

{
  ulong uVar1;
  ulong in_x4;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x10) <= in_x4) {
    uVar1 = in_x4;
  }
  func_0x00010786a648();
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 10786a95c; end: 10786a977;  */

bool FUN_10786a95c(long param_1)

{
  func_0x00010786a978();
  return param_1 != 0;
}



/* Entry: 10786aa98; end: 10786aacb;  */

void FUN_10786aa98(long param_1)

{
  func_0x000107277f0c();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10786ac50; end: 10786ac63;  */

void FUN_10786ac50(void)

{
  func_0x00010786ac70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10786adc8; end: 10786ae2f;  */

/* WARNING: Possible PIC construction at 0x00010786ade0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786ade4) */
/* WARNING: Removing unreachable block (ram,0x00010786ae28) */
/* WARNING: Removing unreachable block (ram,0x00010786ae20) */
/* WARNING: Removing unreachable block (ram,0x00010786d7d0) */

void FUN_10786adc8(long param_1,undefined8 param_2)

{
  func_0x00010786d71c();
  func_0x00010786dbbc();
  *(undefined8 *)(param_1 + 8) = param_2;
  func_0x00010786ae54();
  func_0x00010786da84();
  return;
}



/* Entry: 10786af00; end: 10786af1f;  */

void FUN_10786af00(void)

{
  func_0x00010786def8();
  func_0x00010786af20();
  return;
}



/* Entry: 10786b080; end: 10786b097;  */

undefined8 * FUN_10786b080(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    pcVar1 = *(char **)(param_1 + 0x18);
    lVar2 = *(long *)(param_1 + 0x20);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        func_0x00010786b21c(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010786ddc0();
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10786b258; end: 10786b2b7;  */

void FUN_10786b258(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *extraout_x8;
  
  func_0x00010786d8f4();
  func_0x00010729604c();
  func_0x00010786dec4();
  plVar2 = param_1;
  uVar3 = param_2;
  func_0x00010726c9e8();
  if ((uVar3 & 1) == 0) {
    func_0x0001072955a4(param_1[1] + (long)plVar2 * 0xa8 + 0x40,param_3 + 8);
  }
  else {
    func_0x000107460058(param_1,plVar2,param_2,param_3);
  }
  lVar1 = param_1[1];
  *extraout_x8 = *param_1 + (long)plVar2;
  extraout_x8[1] = lVar1 + (long)plVar2 * 0xa8;
  *(char *)(extraout_x8 + 2) = (char)uVar3;
  return;
}



/* Entry: 10786b4d0; end: 10786b4d7;  */

void FUN_10786b4d0(undefined8 param_1,long param_2)

{
  func_0x00010786d840(param_1,param_2,param_2 + 0x38);
  func_0x00010786b4f4();
  return;
}



/* Entry: 10786b618; end: 10786b677;  */

/* WARNING: Possible PIC construction at 0x00010786b640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786b644) */
/* WARNING: Removing unreachable block (ram,0x00010786b660) */
/* WARNING: Removing unreachable block (ram,0x00010786b674) */
/* WARNING: Removing unreachable block (ram,0x00010786b658) */
/* WARNING: Removing unreachable block (ram,0x00010786d7d0) */

undefined8 * FUN_10786b618(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  
  func_0x00010786d71c();
  func_0x00010786dbbc();
  func_0x00010786abf8();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1109e37e0;
  func_0x00010786b6b0(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 10786bb18; end: 10786bb2f;  */

void FUN_10786bb18(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x00010786acd0(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10786bf04; end: 10786bf37;  */

void FUN_10786bf04(long param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  __Znwm();
  func_0x00010786da90(&PTR_DAT_1109e38d0);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10786c2ec; end: 10786c317;  */

void FUN_10786c2ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e3940;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10786c40c; end: 10786c427;  */

void FUN_10786c40c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e3a70;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10786c5b0; end: 10786c613;  */

void FUN_10786c5b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010786bdc4();
  if (lVar1 != 0) {
    func_0x00010786c5e0(param_1,lVar1);
  }
  return;
}



/* Entry: 10786c888; end: 10786c8af;  */

void FUN_10786c888(undefined8 param_1)

{
  func_0x00010786db18();
  func_0x00010786d924(param_1,&PTR_DAT_1109e3bd0);
  func_0x00010786d80c();
  return;
}



/* Entry: 10786c9a0; end: 10786c9ff;  */

/* WARNING: Possible PIC construction at 0x00010786c9c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010786c9cc) */
/* WARNING: Removing unreachable block (ram,0x00010786c9e8) */
/* WARNING: Removing unreachable block (ram,0x00010786c9fc) */
/* WARNING: Removing unreachable block (ram,0x00010786c9e0) */
/* WARNING: Removing unreachable block (ram,0x00010786d7d0) */

undefined8 * FUN_10786c9a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puStack_30;
  
  func_0x00010786d71c();
  func_0x00010786dbbc();
  func_0x00010786ae30();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_DAT_1109e3830;
  func_0x00010786ca38(puStack_30 + 3,param_2);
  return puStack_30;
}



/* Entry: 10786cc8c; end: 10786ccc7;  */

void FUN_10786cc8c(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010786de40();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10786cef8; end: 10786cf17;  */

void FUN_10786cef8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010786cf18(&uStack_18);
  return;
}



/* Entry: 10786d068; end: 10786d09b;  */

void FUN_10786d068(long param_1)

{
  func_0x00010786d080();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10786d308; end: 10786d37b;  */

undefined1  [16] FUN_10786d308(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  ulong unaff_x28;
  undefined1 auVar2 [16];
  
  func_0x00010786d9f0();
  func_0x00010786d890();
  func_0x00010786d7c0();
  func_0x00010786d9b8();
  do {
    func_0x00010786dd2c();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x00010786d92c();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_10786d35c;
      }
    }
    func_0x00010786d85c();
  } while ((extraout_x8 & 1) == 0);
  func_0x00010786d9e4();
  func_0x00010786d394();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_10786d35c:
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = unaff_x22;
  return auVar2;
}



/* Entry: 10786d4f8; end: 10786d58b;  */

long * FUN_10786d4f8(long *param_1)

{
  param_1[1] = param_1[1] + 0x48;
  *param_1 = *param_1 + 1;
  FUN_10786cc8c();
  return param_1;
}


