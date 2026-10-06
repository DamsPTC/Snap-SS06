/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082ec95c; end: 1082ec973;  */

void FUN_1082ec95c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x28;
      do {
        if (*(int *)(lVar1 + -0x28 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x28 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1082ec974; end: 1082eca57;  */

void FUN_1082ec974(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar6 = param_2;
  FUN_1082ec87c();
  uVar4 = param_1[1];
  uVar5 = (uint)puVar6;
  uVar1 = uVar4 - 1 & uVar5;
  uVar2 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    puVar7 = (uint *)(*(long *)(param_1 + 2) + (long)(int)uVar1 * 0x28);
    if (*puVar7 == 0) break;
    if ((uVar5 == *puVar7) &&
       (puVar6 = param_2, func_0x0001082ec8a0(param_2,puVar7 + 1), (int)puVar6 != 0)) {
      *puVar7 = 0;
      uVar9 = param_2[1];
      uVar8 = *param_2;
      uVar11 = param_2[3];
      uVar10 = param_2[2];
      puVar7[9] = *(uint *)(param_2 + 4);
      *(undefined8 *)(puVar7 + 7) = uVar11;
      *(undefined8 *)(puVar7 + 5) = uVar10;
      *(undefined8 *)(puVar7 + 3) = uVar9;
      *(undefined8 *)(puVar7 + 1) = uVar8;
      *puVar7 = uVar5;
      return;
    }
    uVar3 = 0;
    if ((int)uVar1 < 1) {
      uVar3 = uVar4;
    }
    uVar1 = (uVar1 + uVar3) - 1;
    uVar2 = uVar2 - 1;
  }
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  puVar7[9] = *(uint *)(param_2 + 4);
  *(undefined8 *)(puVar7 + 7) = uVar11;
  *(undefined8 *)(puVar7 + 5) = uVar10;
  *(undefined8 *)(puVar7 + 3) = uVar9;
  *(undefined8 *)(puVar7 + 1) = uVar8;
  *puVar7 = uVar5;
  *param_1 = *param_1 + 1;
  return;
}



/* Entry: 1082eca58; end: 1082eca93;  */

long FUN_1082eca58(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001082ece44(uVar1);
  return param_1;
}



/* Entry: 1082eca94; end: 1082ecabf;  */

void FUN_1082eca94(void)

{
  code *pcVar1;
  
  FUN_10841076c(&UNK_10f48846a);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ecac0);
  (*pcVar1)();
}



/* Entry: 1082ecac0; end: 1082ecac7;  */

void FUN_1082ecac0(void)

{
  return;
}



/* Entry: 1082ecac8; end: 1082ecaeb;  */

void FUN_1082ecac8(void)

{
  func_0x0001082ecda8();
  func_0x0001082ece28(&PTR_FUN_110a396d8);
  return;
}



/* Entry: 1082ecaec; end: 1082ecb07;  */

void FUN_1082ecaec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a396d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082ecb08; end: 1082ecbd7;  */

/* WARNING: Removing unreachable block (ram,0x0001082ecb5c) */

long FUN_1082ecb08(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar2 = param_1;
  func_0x0001082ecdc8();
  plVar1 = *(long **)(lVar2 + 8);
  lStack_28 = extraout_x8;
  if (plVar1 != (long *)0x0) {
    func_0x0001082ece7c(&PTR_DAT_110a39758);
    param_2 = auStack_48;
    (**(code **)(*plVar1 + 0x18))();
    func_0x0001082ece60();
  }
  lVar2 = **(long **)(param_1 + 0x10);
  if (lVar2 != 0) {
    func_0x0001082ece7c(&PTR_FUN_110a397d8);
    param_2 = auStack_48;
    FUN_108296038();
    func_0x0001082ece60();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return 0;
  }
  ___stack_chk_fail();
  func_0x0001082ece60();
  func_0x0001082ecda0();
  func_0x0001082ece50(param_2);
  func_0x0001082ece18();
  return lVar2;
}



/* Entry: 1082ecbd8; end: 1082ecc03;  */

void FUN_1082ecbd8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082ece50(param_2,param_1,&PTR_DAT_110a39848);
  func_0x0001082ece18();
  return;
}



/* Entry: 1082ecc04; end: 1082ecc17;  */

undefined ** FUN_1082ecc04(void)

{
  return &PTR_DAT_110a39848;
}



/* Entry: 1082ecc18; end: 1082ecc3b;  */

void FUN_1082ecc18(void)

{
  func_0x0001082ecda8();
  func_0x0001082ece28(&PTR_DAT_110a39758);
  return;
}



/* Entry: 1082ecc3c; end: 1082ecc6f;  */

void FUN_1082ecc3c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110a39758;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082ecc70; end: 1082ecc9b;  */

void FUN_1082ecc70(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082ece50(param_2,param_1,&PTR_DAT_110a397b8);
  func_0x0001082ece18();
  return;
}



/* Entry: 1082ecc9c; end: 1082ecca7;  */

undefined ** FUN_1082ecc9c(void)

{
  return &PTR_DAT_110a397b8;
}



/* Entry: 1082ecca8; end: 1082ecce3;  */

long FUN_1082ecca8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x0001082ece44(uVar1);
  return param_1;
}



/* Entry: 1082ecce4; end: 1082ecceb;  */

void FUN_1082ecce4(void)

{
  return;
}



/* Entry: 1082eccec; end: 1082ecd0f;  */

void FUN_1082eccec(void)

{
  func_0x0001082ecda8();
  func_0x0001082ece28(&PTR_FUN_110a397d8);
  return;
}



/* Entry: 1082ecd10; end: 1082ecd43;  */

void FUN_1082ecd10(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_110a397d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082ecd44; end: 1082ecd6f;  */

void FUN_1082ecd44(undefined8 param_1,undefined8 param_2)

{
  func_0x0001082ece50(param_2,param_1,&PTR_DAT_110a39838);
  func_0x0001082ece18();
  return;
}



/* Entry: 1082ecd70; end: 1082ece8f;  */

undefined ** FUN_1082ecd70(void)

{
  return &PTR_DAT_110a39838;
}



/* Entry: 1082ece90; end: 1082ecf87;  */

undefined8 * FUN_1082ece90(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  FUN_1082953c4(auStack_50,*param_4,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0xb8));
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uStack_58 = *param_3;
  *param_3 = 0;
  FUN_1082fe8dc(param_1,uVar2,auStack_50,uVar1,&uStack_58);
  FUN_108294260(&uStack_58);
  FUN_1082764bc(auStack_50);
  *param_1 = &PTR_FUN_110a39890;
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[0x11d] = uVar1;
  FUN_1082eda98(param_1 + 0x11e,2,0x1420);
  param_1[0x1c7] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c4] = 0;
  return param_1;
}



/* Entry: 1082ecf88; end: 1082ed0af;  */

undefined8
FUN_1082ecf88(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,int param_7,short *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  undefined8 uStack_80;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_1 + 0x8e8);
  FUN_108295414(uVar2,param_5,param_6,param_8);
  if ((int)uVar2 != 0) {
    uStack_80 = *param_2;
    uStack_68 = param_2[3];
    fStack_78 = (float)param_2[1];
    uStack_74 = (undefined4)((ulong)param_2[1] >> 0x20);
    uStack_70 = (undefined4)param_2[2];
    fStack_6c = (float)((ulong)param_2[2] >> 0x20);
    uStack_60 = param_2[4];
    iVar4 = (int)((ulong)param_4 >> 0x20);
    if (param_7 == 0) {
      FUN_108363ef4((float)((int)*param_8 - (int)param_4),(float)(param_8[1] - iVar4),&uStack_80);
    }
    else {
      uVar3 = CONCAT44(uStack_70,uStack_74);
      uStack_74 = (undefined4)uStack_80;
      uStack_70 = (undefined4)((ulong)uStack_80 >> 0x20);
      fVar5 = fStack_6c - (float)iVar4;
      fStack_6c = (fStack_78 - (float)(int)param_4) + (float)(int)param_8[1];
      uStack_60 = CONCAT44(0x80,(undefined4)uStack_60);
      uStack_80 = uVar3;
      fStack_78 = fVar5 + (float)(int)*param_8;
    }
    uVar3 = param_3;
    func_0x0001082eb764();
    lVar1 = 0xe30;
    if ((int)uVar3 == 0) {
      lVar1 = 0xe20;
    }
    FUN_1082ed0b0(param_1 + lVar1,param_1 + 0x8f0,&uStack_80,param_3);
  }
  return uVar2;
}



/* Entry: 1082ed0b0; end: 1082ed11f;  */

void FUN_1082ed0b0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  FUN_1082ed704(param_2,param_3,param_4,&UNK_10df170e8,param_1);
  *param_1 = param_2;
  if ((*(byte *)((long)param_4 + 0xe) >> 1 & 1) != 0) {
    *(byte *)(param_2 + 0x36) = *(byte *)(param_2 + 0x36) ^ 2;
  }
  param_1[1] = CONCAT44((int)((ulong)param_1[1] >> 0x20) + 1,
                        (int)param_1[1] + *(int *)(*param_4 + 0x48));
  return;
}



/* Entry: 1082ed120; end: 1082ed43f;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001082ed244 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined *** FUN_1082ed120(undefined8 param_1,long param_2,ulong param_3,unkbyte9 *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  ulong uVar7;
  unkbyte9 *pVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1cc;
  undefined1 uStack_1cb;
  undefined1 uStack_1ca;
  undefined1 uStack_1c9;
  undefined1 uStack_1c8;
  undefined1 uStack_1c7;
  undefined1 uStack_1c6;
  undefined1 uStack_1c5;
  undefined1 uStack_1c4;
  undefined1 uStack_1c3;
  undefined1 uStack_1c2;
  undefined1 uStack_1c1;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined1 uStack_1be;
  undefined1 uStack_1bd;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined1 uStack_197;
  undefined1 uStack_196;
  undefined1 uStack_195;
  undefined1 uStack_194;
  undefined1 uStack_193;
  undefined1 uStack_192;
  undefined1 uStack_191;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 uStack_18e;
  undefined1 uStack_18d;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  ulong uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  unkbyte9 *pStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  long alStack_a0 [4];
  
  alStack_a0[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar11 = *(long *)(*(long *)(param_3 + 0x10) + 0xb8);
    *(undefined8 *)(**(long **)(param_2 + 0x28) + 0x90) =
         *(undefined8 *)(*(long *)(param_2 + 0x8e8) + 0x20);
    if (0 < *(int *)(param_2 + 0x30)) {
      plVar4 = (long *)**(long **)(param_2 + 0x28);
      (**(code **)(*plVar4 + 0x28))();
      *(undefined1 *)((long)plVar4 + 9) = 1;
      if (0 < *(int *)(param_2 + 0x30)) {
        fVar21 = (float)*(int *)(**(long **)(param_2 + 0x28) + 0x90);
        fVar20 = (float)*(int *)(**(long **)(param_2 + 0x28) + 0x94);
        uStack_b0 = 0;
        pStack_110 = param_4;
        uStack_108 = param_3;
        fStack_a8 = fVar21;
        fStack_a4 = fVar20;
        if ((*(byte *)(lVar11 + 0x1b) & 0x28) == 0) {
          FUN_1082ff6ec(param_1,0,0,0,param_2,1);
          *(undefined4 *)(param_2 + 0xac) = 1;
        }
        else {
          *(undefined4 *)(param_2 + 0x98) = 2;
          *(undefined8 *)(param_2 + 0xa4) = 0;
          *(undefined8 *)(param_2 + 0x9c) = 0;
          *(undefined4 *)(param_2 + 0xac) = 0;
          FUN_1082ed440(param_2,param_3,&uStack_b0,&UNK_10df170e8,&UNK_10df170cc);
        }
        lVar12 = 0;
        alStack_a0[0] = param_2 + 0xe20;
        alStack_a0[1] = param_2 + 0xe30;
        uStack_f8 = 0;
        uStack_100 = 0;
        while( true ) {
          uVar7 = uStack_108;
          if (lVar12 == 0x10) break;
          puVar10 = *(undefined8 **)((long)alStack_a0 + lVar12);
          uVar1 = *(uint *)((long)puVar10 + 0xc);
          param_3 = (ulong)uVar1;
          if (0 < (int)uVar1) {
            uVar13 = *puVar10;
            uVar14 = *(undefined4 *)(puVar10 + 1);
            uStack_d0 = 0;
            uStack_b4 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 1;
            uStack_bc = 0x3f800000;
            uStack_b8 = 0x3f800000;
            uStack_c4 = 0x3f800000;
            uStack_c0 = 0x3f800000;
            puVar5 = (undefined8 *)0xc0;
            __Znwm();
            puVar10 = puVar5;
            FUN_1082edad0();
            puVar5[2] = uStack_f8;
            puVar5[1] = uStack_100;
            *(short *)(puVar5 + 3) = (short)puVar10;
            *(undefined8 *)((long)puVar5 + 0x24) = 0;
            *(undefined8 *)((long)puVar5 + 0x1c) = 0;
            *(undefined4 *)((long)puVar5 + 0x2c) = 0;
            *puVar5 = &PTR_FUN_110a3ad20;
            puVar5[6] = uVar13;
            *(undefined4 *)(puVar5 + 7) = uVar14;
            *(uint *)((long)puVar5 + 0x3c) = uVar1;
            puVar5[8] = 0x200000001;
            puVar5[10] = CONCAT44(uStack_b8,uStack_bc);
            puVar5[9] = CONCAT44(uStack_c0,uStack_c4);
            FUN_1082a3af0(puVar5 + 0xb,&uStack_e0);
            puVar5[0x17] = 0;
            puVar5[0x10] = 0;
            puVar5[0xf] = 0;
            puVar5[0x12] = 0;
            puVar5[0x11] = 0;
            puVar5[0x14] = 0;
            puVar5[0x13] = 0;
            *(undefined8 *)((long)puVar5 + 0xac) = 0;
            *(undefined8 *)((long)puVar5 + 0xa4) = 0;
            puVar5[5] = CONCAT44(fStack_a4,fStack_a8);
            puVar5[4] = uStack_b0;
            *(undefined2 *)((long)puVar5 + 0x1a) = 0;
            func_0x00010827ee54(&uStack_e0);
            puStack_e8 = puVar5;
            FUN_1082ed52c(param_2,&puStack_e8,lVar11);
            puVar10 = puStack_e8;
            puStack_e8 = (undefined8 *)0x0;
            if (puVar10 != (undefined8 *)0x0) {
              FUN_1082edb3c();
            }
          }
          lVar12 = lVar12 + 8;
        }
        uStack_b0 = NEON_fmov(0xbf800000,4);
        fStack_a8 = fVar21 + 1.0;
        fStack_a4 = fVar20 + 1.0;
        puVar10 = (undefined8 *)&UNK_10df17114;
        puVar9 = &UNK_10df170f8;
        FUN_1082ed440(param_2,uStack_108,&uStack_b0,&UNK_10df17114,&UNK_10df170f8);
        pVar8 = pStack_110;
        FUN_1082ffe70();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_a0[2]) {
          return (undefined ***)0x0;
        }
        ___stack_chk_fail();
        lVar11 = param_2;
        func_0x0001082edb48();
        pcStack_118 = FUN_1082ed440;
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_13c = puVar10[1];
        uStack_144 = *puVar10;
        ppuStack_160 = &PTR_PTR_110a38218;
        uStack_148 = 0;
        uVar13 = *(undefined8 *)((long)pVar8 + 8);
        uStack_1c3 = (undefined1)((ulong)uVar13 >> 8);
        uStack_1c2 = (undefined1)((ulong)uVar13 >> 0x10);
        uStack_1c1 = (undefined1)((ulong)uVar13 >> 0x18);
        uVar15 = (undefined1)((ulong)uVar13 >> 0x20);
        uVar16 = (undefined1)((ulong)uVar13 >> 0x28);
        uVar17 = (undefined1)((ulong)uVar13 >> 0x30);
        uVar18 = (undefined1)((ulong)uVar13 >> 0x38);
        uStack_1cc = *(undefined1 *)pVar8;
        uStack_1cb = *(undefined1 *)((long)pVar8 + 1);
        uStack_1ca = *(undefined1 *)((long)pVar8 + 2);
        uStack_1c9 = *(undefined1 *)((long)pVar8 + 3);
        uStack_1c4 = *(undefined1 *)((long)pVar8 + 8);
        uStack_1c8 = *(undefined1 *)pVar8;
        uStack_1c7 = *(undefined1 *)((long)pVar8 + 1);
        uStack_1c6 = *(undefined1 *)((long)pVar8 + 2);
        uStack_1c5 = *(undefined1 *)((long)pVar8 + 3);
        uStack_1c0 = *(undefined1 *)((long)pVar8 + 8);
        auVar19[9] = uStack_1c3;
        auVar19._0_9_ = *pVar8;
        auVar19[10] = uStack_1c2;
        auVar19[0xb] = uStack_1c1;
        auVar19[0xc] = uVar15;
        auVar19[0xd] = uVar16;
        auVar19[0xe] = uVar17;
        auVar19[0xf] = uVar18;
        auVar2[9] = uStack_1c3;
        auVar2._0_9_ = *pVar8;
        auVar2[10] = uStack_1c2;
        auVar2[0xb] = uStack_1c1;
        auVar2[0xc] = uVar15;
        auVar2[0xd] = uVar16;
        auVar2[0xe] = uVar17;
        auVar2[0xf] = uVar18;
        uVar14 = (undefined4)((unkuint9)*pVar8 >> 0x20);
        uStack_1b4 = CONCAT44(auVar19._12_4_,(int)((unkuint9)*pVar8 >> 0x20));
        uStack_1bc = CONCAT44(auVar2._12_4_,uVar14);
        auVar19 = NEON_fmov(0x3f800000,4);
        uStack_1a4 = auVar19._8_8_;
        uStack_1ac = auVar19._0_8_;
        uStack_19c = 0;
        uStack_188 = CONCAT44(auVar2._12_4_,uVar14);
        uStack_168 = 0xf00000000;
        uStack_1bf = uStack_1c3;
        uStack_1be = uStack_1c2;
        uStack_1bd = uStack_1c1;
        uStack_198 = uStack_1cc;
        uStack_197 = uStack_1cb;
        uStack_196 = uStack_1ca;
        uStack_195 = uStack_1c9;
        uStack_194 = uStack_1c8;
        uStack_193 = uStack_1c7;
        uStack_192 = uStack_1c6;
        uStack_191 = uStack_1c5;
        uStack_190 = uStack_1c4;
        uStack_18f = uStack_1c3;
        uStack_18e = uStack_1c2;
        uStack_18d = uStack_1c1;
        uStack_18c = uStack_1c0;
        uStack_18b = uStack_1c3;
        uStack_18a = uStack_1c2;
        uStack_189 = uStack_1c1;
        uStack_180 = uStack_1b4;
        uStack_178 = uStack_1ac;
        uStack_170 = uStack_1a4;
        uStack_130 = param_3;
        lStack_128 = param_2;
        puStack_120 = &stack0xfffffffffffffff0;
        FUN_1082facb8(&lStack_1d8,&ppuStack_160,2,&uStack_1cc,puVar9,0);
        lStack_1e0 = lStack_1d8;
        FUN_1082ed52c(lVar11,&lStack_1e0,*(undefined8 *)(*(long *)(uVar7 + 0x10) + 0xb8));
        if (lStack_1e0 != 0) {
          FUN_1082edb3c();
        }
        pppuVar6 = &ppuStack_160;
        func_0x00010827ee54(pppuVar6);
        return pppuVar6;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1082ed400);
  (*pcVar3)();
}



/* Entry: 1082ed440; end: 1082ed52b;  */

void FUN_1082ed440(undefined8 param_1,long param_2,undefined1 (*param_3) [12],undefined8 *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_2c = param_4[1];
  uStack_34 = *param_4;
  ppuStack_50 = &PTR_PTR_110a38218;
  uStack_38 = 0;
  uVar6 = (undefined4)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar5 = (undefined4)((ulong)*(undefined8 *)*param_3 >> 0x20);
  uVar1 = SUB124(*param_3,0);
  uVar2 = SUB124(*param_3,8);
  uVar3 = SUB124(*param_3,0);
  uVar4 = SUB124(*param_3,8);
  uStack_a4 = CONCAT44(uVar6,uVar5);
  uStack_ac = CONCAT44(uVar6,uVar5);
  uStack_b4 = CONCAT44(uVar4,uVar2);
  uStack_bc = CONCAT44(uVar3,uVar1);
  auVar7 = NEON_fmov(0x3f800000,4);
  uStack_94 = auVar7._8_8_;
  uStack_9c = auVar7._0_8_;
  uStack_8c = 0;
  uStack_80 = CONCAT44(uVar4,uVar2);
  uStack_88 = CONCAT44(uVar3,uVar1);
  uStack_70 = CONCAT44(uVar6,uVar5);
  uStack_78 = CONCAT44(uVar6,uVar5);
  uStack_58 = 0xf00000000;
  uStack_68 = uStack_9c;
  uStack_60 = uStack_94;
  FUN_1082facb8(&lStack_c8,&ppuStack_50,2,&uStack_bc,param_5,0);
  lStack_d0 = lStack_c8;
  FUN_1082ed52c(param_1,&lStack_d0,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0xb8));
  if (lStack_d0 != 0) {
    FUN_1082edb3c();
  }
  func_0x00010827ee54(&ppuStack_50);
  return;
}



/* Entry: 1082ed52c; end: 1082ed623;  */

void FUN_1082ed52c(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lStack_78;
  undefined1 auStack_70 [20];
  int iStack_5c;
  undefined1 auStack_58 [20];
  int iStack_44;
  
  plVar6 = (long *)*param_2;
  iVar1 = *(int *)(*(long *)(param_1 + 0x8e8) + 8);
  FUN_1082ed7c0(auStack_58,iVar1);
  if (iStack_44 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_1082ed7c0(auStack_70,iVar1);
    uVar5 = 1;
    if (iVar1 != 0x13) {
      uVar5 = 2;
    }
    uVar4 = 0;
    if (iStack_5c != 1) {
      uVar4 = uVar5;
    }
  }
  plVar3 = plVar6;
  (**(code **)(*plVar6 + 0x50))(plVar6,param_3,0,uVar4);
  *(undefined2 *)((long)plVar6 + 0x1a) = 0;
  lStack_78 = *param_2;
  *param_2 = 0;
  FUN_1082febe0(param_1,&lStack_78,1,(uint)plVar3 & 0xffff,0,0,param_3);
  lVar2 = lStack_78;
  lStack_78 = 0;
  if (lVar2 != 0) {
    FUN_1082edb3c();
  }
  return;
}



/* Entry: 1082ed624; end: 1082ed6e7;  */

long FUN_1082ed624(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_40;
  ulong uStack_38;
  
  lVar2 = param_1;
  FUN_1082ff3a8();
  if ((int)lVar2 != 0) {
    if (*(int *)(param_1 + 0x30) < 1) {
LAB_1082ed6e4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ed6e8);
      (*pcVar1)();
    }
    uVar3 = **(ulong **)(param_1 + 0x28);
    if ((*(byte *)(uVar3 + 0x18) >> 2 & 1) != 0) {
      FUN_1082b1dfc();
      uVar3 = uVar3 >> 0x20;
      uVar4 = 0;
      FUN_10826c7b0(0,uVar3,0,*(undefined8 *)(*(long *)(param_1 + 0x8e8) + 0x20));
      uStack_40 = uVar4;
      uStack_38 = uVar3;
      if (*(int *)(param_1 + 0x30) < 1) goto LAB_1082ed6e4;
      uVar4 = *(undefined8 *)(param_2 + 0x160);
      plVar5 = *(long **)(**(long **)(param_1 + 0x28) + 0x10);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar5 + 0x68))();
      }
      FUN_10829fbc0(uVar4,plVar5,&uStack_40);
    }
  }
  return lVar2;
}



/* Entry: 1082ed6e8; end: 1082ed6eb;  */

undefined8 * FUN_1082ed6e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  long alStack_58 [2];
  int iStack_48;
  long alStack_40 [2];
  int iStack_30;
  int iStack_2c;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + 0x11e;
  ppuVar2 = &puStack_28;
  puStack_28 = puVar1;
  FUN_108270170(ppuVar2);
  FUN_1082eda28(alStack_40,ppuVar2,param_2);
  FUN_1082eda28(alStack_58,0,0);
  while ((alStack_58[0] != alStack_40[0] || ((alStack_58[0] != 0 && (iStack_48 != iStack_30))))) {
    FUN_10837ca38(alStack_40[0] + iStack_30 + 0x28);
    iStack_30 = iStack_30 + -0x50;
    if (iStack_30 < iStack_2c) {
      func_0x000108270228(alStack_40);
      func_0x0001082eda50(alStack_40);
    }
  }
  FUN_10840fc40(puVar1);
  FUN_108270280(puVar1);
  FUN_1082edaa0(param_1 + 0x11d);
  *param_1 = &PTR_FUN_110a3aa88;
  FUN_1082fea1c();
  FUN_1082f6590(param_1 + 0x117);
  FUN_108294260(param_1 + 0x116);
  FUN_1082fff5c(param_1 + 0x114);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082ed6ec; end: 1082ed6ff;  */

void FUN_1082ed6ec(void)

{
  FUN_1082ed948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082ed700; end: 1082ed703;  */

void FUN_1082ed700(void)

{
  return;
}



/* Entry: 1082ed704; end: 1082ed773;  */

undefined8 *
FUN_1082ed704(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1082ed774();
  uVar1 = *param_5;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x000108376b14(param_1 + 5,param_3);
  uVar2 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar2;
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 1082ed774; end: 1082ed7bf;  */

long FUN_1082ed774(long param_1)

{
  long lStack_38;
  int iStack_2c;
  
  FUN_108275a3c(&lStack_38,param_1,0x50);
  *(int *)(lStack_38 + 0x18) = iStack_2c;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return lStack_38 + iStack_2c;
}



/* Entry: 1082ed7c0; end: 1082ed947;  */

void FUN_1082ed7c0(undefined8 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 0:
    *param_1 = 0;
    param_1[1] = 0;
    goto code_r0x0001082ed93c;
  case 1:
  case 0x19:
    uVar4 = 0x800000000;
    uVar3 = 0;
    break;
  case 2:
  case 3:
    uVar4 = 5;
    uVar3 = 0x600000005;
    break;
  case 4:
  case 0x22:
  case 0x23:
    uVar3 = 0x400000004;
    uVar4 = 0x400000004;
    break;
  case 5:
  case 9:
    uVar3 = 0x800000008;
    uVar4 = 0x800000008;
    break;
  case 6:
    param_1[1] = 0x800000008;
    *param_1 = 0x800000008;
    uVar3 = 0x100000000;
    goto code_r0x0001082ed920;
  case 7:
  case 0x1d:
    uVar4 = 8;
    uVar3 = 0x800000008;
    break;
  case 8:
    uVar3 = 0x800000008;
    goto code_r0x0001082ed8d4;
  case 10:
  case 0xb:
    uVar4 = 0x20000000a;
    uVar3 = 0xa0000000a;
    break;
  case 0xc:
    uVar4 = 10;
    uVar3 = 0xa0000000a;
    break;
  case 0xd:
    uVar3 = 0xa0000000a;
    uVar4 = 0xa0000000a;
    break;
  case 0xe:
  case 0xf:
  case 0x1b:
    param_1[1] = 0;
    *param_1 = 0;
    uVar3 = 8;
    goto code_r0x0001082ed920;
  case 0x10:
    uVar4 = 0x1000000000;
    uVar3 = 0;
    goto code_r0x0001082ed914;
  case 0x11:
  case 0x13:
    uVar3 = 0x1000000010;
    uVar4 = 0x1000000010;
    goto code_r0x0001082ed914;
  case 0x12:
    uVar4 = 0x10;
    uVar3 = 0x1000000010;
    goto code_r0x0001082ed914;
  case 0x14:
    uVar3 = 0x2000000020;
    uVar4 = 0x2000000020;
    goto code_r0x0001082ed914;
  case 0x15:
    uVar4 = 0x1000000000;
    uVar3 = 0;
    break;
  case 0x16:
    uVar3 = 0x1000000010;
code_r0x0001082ed8d4:
    *param_1 = uVar3;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  case 0x17:
    uVar4 = 0;
    uVar3 = 0x1000000010;
    goto code_r0x0001082ed914;
  case 0x18:
    uVar3 = 0x1000000010;
    uVar4 = 0x1000000010;
    break;
  case 0x1a:
    uVar4 = 0x2000000000;
    uVar3 = 0;
code_r0x0001082ed914:
    param_1[1] = uVar4;
    *param_1 = uVar3;
    uVar3 = 0x200000000;
code_r0x0001082ed920:
    param_1[2] = uVar3;
    return;
  case 0x1c:
  case 0x1e:
    uVar2 = 8;
    goto code_r0x0001082ed898;
  case 0x1f:
    uVar2 = 0x10;
code_r0x0001082ed898:
    *(undefined4 *)param_1 = uVar2;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    return;
  case 0x20:
    *(undefined4 *)param_1 = 0x10;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 2;
    return;
  case 0x21:
    param_1[1] = 0;
    *param_1 = 0;
    uVar3 = 0x200000010;
    goto code_r0x0001082ed920;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ed948);
    (*pcVar1)();
  }
  param_1[1] = uVar4;
  *param_1 = uVar3;
code_r0x0001082ed93c:
  param_1[2] = 0;
  return;
}



/* Entry: 1082ed948; end: 1082eda27;  */

undefined8 * FUN_1082ed948(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  long alStack_58 [2];
  int iStack_48;
  long alStack_40 [2];
  int iStack_30;
  int iStack_2c;
  undefined8 *puStack_28;
  
  puVar1 = param_1 + 0x11e;
  ppuVar2 = &puStack_28;
  puStack_28 = puVar1;
  FUN_108270170(ppuVar2);
  FUN_1082eda28(alStack_40,ppuVar2,param_2);
  FUN_1082eda28(alStack_58,0,0);
  while ((alStack_58[0] != alStack_40[0] || ((alStack_58[0] != 0 && (iStack_48 != iStack_30))))) {
    FUN_10837ca38(alStack_40[0] + iStack_30 + 0x28);
    iStack_30 = iStack_30 + -0x50;
    if (iStack_30 < iStack_2c) {
      func_0x000108270228(alStack_40);
      func_0x0001082eda50(alStack_40);
    }
  }
  FUN_10840fc40(puVar1);
  FUN_108270280(puVar1);
  FUN_1082edaa0(param_1 + 0x11d);
  *param_1 = &PTR_FUN_110a3aa88;
  FUN_1082fea1c();
  FUN_1082f6590(param_1 + 0x117);
  FUN_108294260(param_1 + 0x116);
  FUN_1082fff5c(param_1 + 0x114);
  *param_1 = &PTR_FUN_110a36530;
  FUN_10828a2cc(param_1 + 0xe);
  FUN_10828a2cc(param_1 + 0xb);
  func_0x00010828a2f4(param_1 + 7);
  FUN_10828a31c(param_1 + 5);
  return param_1;
}



/* Entry: 1082eda28; end: 1082eda97;  */

undefined8 * FUN_1082eda28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001082eda50();
  return param_1;
}



/* Entry: 1082eda98; end: 1082eda9f;  */

void FUN_1082eda98(undefined8 *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1[2] = 0;
  uVar1 = param_3 + 7U >> 3;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  uVar2 = 0x20000040000;
  if ((param_2 & 0xfffffffd) != 1) {
    uVar2 = 0x20000000000;
  }
  *param_1 = param_1 + 2;
  param_1[1] = uVar2 | ((param_2 & 3) << 0x10 | (uint)uVar1);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x520;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 1082edaa0; end: 1082edacf;  */

long * FUN_1082edaa0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1082edb3c();
  }
  return param_1;
}



/* Entry: 1082edad0; end: 1082edb3b;  */

int FUN_1082edad0(void)

{
  int iVar1;
  
  if ((bRam0000000113254d80 & 1) == 0) {
    iVar1 = 0x13254d80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam0000000113254d78 = iVar1;
      ___cxa_guard_release(0x113254d80);
    }
  }
  return iRam0000000113254d78;
}



/* Entry: 1082edb3c; end: 1082edb4f;  */

void FUN_1082edb3c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082edb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082edb50; end: 1082edbab;  */

long FUN_1082edb50(long *param_1)

{
  long extraout_x8;
  long lVar1;
  
  func_0x0001082eeca8();
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = 0;
    return lVar1;
  }
  lVar1 = extraout_x8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(extraout_x8);
  return lVar1;
}



/* Entry: 1082edbac; end: 1082edbe3;  */

void FUN_1082edbac(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dc90;
  (*(code *)PTR___tlv_bootstrap_11340dc90)();
  __ZdlPv(*ppuVar1);
  *ppuVar1 = (undefined *)0x0;
  return;
}



/* Entry: 1082edbe4; end: 1082eddd3;  */

undefined8 *
FUN_1082edbe4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,uint param_6,int param_7,undefined4 param_8,long param_9,
             long param_10,undefined8 param_11)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uStack_78;
  
  if ((bRam000000011372a908 & 1) == 0) {
    iVar5 = 0x1372a908;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_1082e6880();
      iRam000000011372a900 = iVar5;
      ___cxa_guard_release(0x11372a908);
    }
  }
  iVar5 = iRam000000011372a900;
  param_5[1] = 0;
  param_5[2] = 0;
  *(short *)(param_5 + 3) = (short)iVar5;
  *(undefined8 *)((long)param_5 + 0x24) = 0;
  *(undefined8 *)((long)param_5 + 0x1c) = 0;
  *(undefined4 *)((long)param_5 + 0x2c) = 0;
  *param_5 = &PTR_FUN_110a39928;
  FUN_1082a3af0(param_5 + 6,param_11);
  uVar7 = *(uint *)((long)param_5 + 0x54);
  *(undefined4 *)(param_5 + 10) = param_8;
  *(uint *)((long)param_5 + 0x54) = uVar7 & 0xfffffc00;
  if (param_6 < 3) {
    uVar8 = 0x4000;
    if (param_7 == 0) {
      uVar8 = 0;
    }
    uVar8 = uVar7 & 0xffff8000 | param_6 << 10 | uVar8;
    *(uint *)((long)param_5 + 0x54) = uVar8;
    if (param_7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar6 = param_9 + 0x10;
      FUN_10828e338();
      uVar7 = 0x8000;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
      }
      uVar8 = *(uint *)((long)param_5 + 0x54);
    }
    param_5[0xb] = 0;
    *(uint *)((long)param_5 + 0x54) = uVar8 & 0xfffe7fff | uVar7;
    *(undefined4 *)(param_5 + 0xc) = 0;
    param_5[0xd] = param_9;
    param_5[0xe] = param_9 + 0x60;
    *(undefined4 *)(param_5 + 4) = param_1;
    *(undefined4 *)((long)param_5 + 0x24) = param_2;
    *(undefined4 *)(param_5 + 5) = param_3;
    *(undefined4 *)((long)param_5 + 0x2c) = param_4;
    *(undefined2 *)((long)param_5 + 0x1a) = 0;
    if ((uVar8 & 0x1c00) == 0x800) {
      if (*(long *)(param_10 + 8) != 0) {
        piVar1 = (int *)(*(long *)(param_10 + 8) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_78 = 0;
      func_0x00010828b088(param_5 + 0xb);
      FUN_10827f5a4(&uStack_78);
    }
    return param_5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1082edd8c);
  (*pcVar4)();
}



/* Entry: 1082eddd4; end: 1082ede63;  */

void FUN_1082eddd4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001081865ac(param_9,0x68,8);
  uVar1 = *param_7;
  *param_7 = 0;
  *param_9 = param_3;
  param_9[1] = uVar1;
  uVar1 = param_4[4];
  uVar4 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  param_9[3] = param_4[1];
  param_9[2] = uVar4;
  param_9[5] = uVar3;
  param_9[4] = uVar2;
  param_9[6] = uVar1;
  *(undefined4 *)(param_9 + 7) = param_1;
  *(undefined4 *)((long)param_9 + 0x3c) = param_2;
  param_9[8] = param_5;
  param_9[9] = param_6;
  uVar1 = *param_8;
  param_9[0xb] = param_8[1];
  param_9[10] = uVar1;
  param_9[0xc] = 0;
  return;
}



/* Entry: 1082ede64; end: 1082ede73;  */

void FUN_1082ede64(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long lVar3;
  long unaff_x20;
  long *plVar4;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_108296038(*(long *)(param_1 + 0x30),param_2);
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a35a10;
  pppuStack_30 = &ppuStack_48;
  uStack_40 = param_2;
  FUN_1082960a8(*(long *)(param_1 + 0x38),&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_10826e20c();
  func_0x000108298c3c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar2 != (undefined ***)0x0) && (*(int *)(unaff_x20 + 8) == 0x2d)) {
      func_0x0001082987ac(pppuVar1,unaff_x20);
    }
    plVar4 = *(long **)(unaff_x20 + 0x18);
    for (lVar3 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
      if (*plVar4 != 0) {
        FUN_1082960a8(*plVar4,pppuVar1);
      }
      plVar4 = plVar4 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1082ede74; end: 1082edf23;  */

uint FUN_1082ede74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  uVar2 = *(uint *)(param_1 + 0x54) >> 10 & 7;
  lVar4 = *(long *)(param_1 + 0x68);
  if (uVar2 == 2) {
    uStack_34 = 0;
  }
  else {
    uStack_28 = *(undefined8 *)(lVar4 + 0x58);
    uStack_30 = *(undefined8 *)(lVar4 + 0x50);
    uStack_34 = 3;
    if (*(float *)(lVar4 + 0x5c) != 1.0) {
      uStack_34 = 1;
    }
  }
  uVar5 = 1;
  if (uVar2 == 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (uVar2 != 2) {
    uVar1 = uVar5;
  }
  lVar3 = param_1 + 0x30;
  FUN_1082a3cdc(lVar3,&uStack_34,uVar1,param_3,&UNK_10df14cb4,param_2,param_4,lVar4 + 0x50);
  *(uint *)(param_1 + 0x54) =
       *(uint *)(param_1 + 0x54) & 0xffffc000 |
       *(uint *)(param_1 + 0x54) & 0x1fff | ((uint)lVar3 & 1) << 0xd;
  return (uint)lVar3 & 0xffff;
}



/* Entry: 1082edf24; end: 1082ee5cf;  */

long ** FUN_1082edf24(long param_1,long **param_2,long **param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined1 in_ZR;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  long *plVar10;
  int extraout_w8;
  int extraout_w8_00;
  long lVar11;
  long *extraout_x8;
  int iVar12;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  long **pplVar18;
  ulong uVar19;
  ulong uVar20;
  long *plStack_188;
  int *piStack_180;
  int *piStack_178;
  int *piStack_170;
  int *piStack_168;
  long *plStack_160;
  long ***ppplStack_158;
  int *piStack_150;
  long **pplStack_148;
  long lStack_140;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long **pplStack_108;
  long **pplStack_100;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long **pplStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  uint uStack_9c;
  undefined **ppuStack_98;
  long ***ppplStack_90;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = param_2;
  pplStack_b8 = param_2;
  (*(code *)(*param_2)[0x16])();
  uStack_d8 = uRam0000000113254e28;
  uStack_e0 = uRam0000000113254e20;
  uStack_c8 = uRam0000000113254e38;
  uStack_d0 = uRam0000000113254e30;
  uStack_c0 = uRam0000000113254e40;
  pplVar18 = pplVar5;
  if ((*(byte *)(param_1 + 0x55) >> 5 & 1) != 0) {
    pplVar18 = (long **)(*(long *)(param_1 + 0x68) + 0x10);
    FUN_10818cfd0(pplVar18,&uStack_e0);
    if ((int)pplVar18 == 0) goto LAB_1082ee510;
  }
  FUN_1082eec98((*param_2)[0x18]);
  func_0x0001082eeccc();
  in_ZR = extraout_w8 == 1;
  param_3 = (long **)&uStack_e4;
  FUN_1082ee5d0();
  if (pplVar18 == (long **)0x0) {
    pplVar18 = (long **)&UNK_10f4884fc;
    FUN_10841076c();
  }
  else {
    pplVar6 = pplVar18;
    FUN_1082eec98((*param_2)[0x1c]);
    pplVar7 = pplVar6;
    func_0x0001081865e0();
    pplVar6[1] = (long *)(pplVar7 + 4);
    for (lVar11 = 0; lVar11 != 0x20; lVar11 = lVar11 + 8) {
      *(undefined8 *)((long)pplVar7 + lVar11) = 0;
    }
    for (lVar11 = 0; (ulong)uStack_e4 * 8 - lVar11 != 0; lVar11 = lVar11 + 8) {
      *(long **)((long)pplVar7 + lVar11) = *pplVar18;
      FUN_1082eec98((*param_2)[0x19]);
      plStack_188 = *pplVar18;
      func_0x0001082ee628();
      pplVar18 = pplVar18 + 2;
    }
    iStack_f8 = 0;
    iStack_f4 = 0;
    iStack_f0 = 0;
    plStack_118 = (long *)0x0;
    plStack_110 = (long *)0x0;
    pplStack_100 = pplVar7;
    FUN_1082ee6b0(&plStack_188,pplVar5);
    plVar15 = plStack_188;
    plStack_188 = (long *)0x0;
    in_ZR = plVar15 == (long *)0x0;
    plVar13 = (long *)0x0;
    if (!(bool)in_ZR) {
      plVar13 = plVar15 + 0x16;
    }
    if (plStack_110 != (long *)0x0) {
      lVar11 = *plStack_110;
      plStack_110 = plVar13;
      (**(code **)(lVar11 + 0x18))();
      plVar13 = plStack_110;
    }
    plStack_110 = plVar13;
    pplVar18 = &plStack_188;
    FUN_10828f708();
    FUN_1082eec98((*param_2)[0x1c]);
    FUN_1082eec98((*param_2)[0x1a]);
    puVar14 = (ulong *)(param_1 + 0x68);
    uVar19 = *puVar14;
    plStack_120 = (long *)0x0;
    if (*(long *)(param_1 + 0x58) != 0) {
      do {
        func_0x0001082eecbc();
        plStack_120 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    pplVar5 = pplVar18;
    FUN_10840f8d0(pplVar18,0x311,8);
    uVar1 = *(undefined4 *)(pplVar18 + 1);
    pplVar18[1] = (long *)(pplVar5 + 0x61);
    pplVar5[0x61] = (long *)0x1082eea20;
    plVar13 = pplVar18[1];
    pplVar18[1] = plVar13 + 1;
    *(char *)(plVar13 + 1) = (char)pplVar5 - (char)uVar1;
    *pplVar18 = (long *)((long)pplVar18[1] + 1);
    pplVar18[1] = (long *)((long)pplVar18[1] + 1);
    plStack_188 = plStack_120;
    plStack_120 = (long *)0x0;
    param_3 = (long **)(uVar19 + 0x50);
    FUN_1082c6600();
    FUN_10827f5a4(&plStack_188);
    pplStack_108 = pplVar5;
    FUN_10827f5a4(&plStack_120);
    iStack_124 = *(int *)(pplStack_108 + 4);
    lVar11 = (long)iStack_124;
    iStack_128 = 0;
    iVar12 = (int)(lVar11 * 4);
    if (iVar12 != 0) {
      iStack_128 = 0x8000 / iVar12;
    }
    iStack_12c = 0;
    iStack_130 = *(int *)(param_1 + 0x50);
    plStack_188 = (long *)&iStack_134;
    piStack_180 = &iStack_138;
    piStack_178 = &iStack_128;
    piStack_170 = &iStack_130;
    piStack_168 = &iStack_12c;
    plStack_160 = &lStack_140;
    ppplStack_158 = &pplStack_b8;
    piStack_150 = &iStack_124;
    pplStack_148 = &plStack_118;
    iVar12 = (int)&plStack_188;
    FUN_1082ee72c();
    if (iVar12 != 0) {
      for (; puVar14 = (ulong *)*puVar14, puVar14 != (ulong *)0x0; puVar14 = puVar14 + 0xc) {
        plVar15 = (long *)*puVar14;
        plVar13 = plVar15;
        (**(code **)(*plVar15 + 0x18))();
        pplVar18 = (long **)0x0;
        while( true ) {
          pplVar5 = pplVar18;
          iVar17 = (int)pplVar5;
          iVar16 = (int)plVar13;
          iVar12 = iVar16 - iVar17;
          in_ZR = iVar12 == 0;
          if ((bool)in_ZR || iVar16 < iVar17) break;
          iVar3 = iStack_138 - iStack_134;
          in_ZR = iVar3 == iVar12;
          if (iVar12 <= iVar3) {
            iVar3 = iVar12;
          }
          ppplStack_90 = &pplStack_b8;
          ppuStack_98 = &PTR_FUN_110a399d8;
          pppuStack_80 = &ppuStack_98;
          param_3 = (long **)(ulong)(uint)(iVar3 + iVar17);
          plVar8 = plVar15;
          (**(code **)(*plVar15 + 0x50))(plVar15,pplVar5,param_3,&ppuStack_98);
          FUN_1082eec54(&ppuStack_98);
          if (((ulong)plVar8 & 1) == 0) goto LAB_1082ee4f8;
          (**(code **)(*(long *)*puVar14 + 0x48))
                    ((int)puVar14[7],*(undefined4 *)((long)puVar14 + 0x3c),(long *)*puVar14,
                     lStack_140 + (long)iStack_134 * lVar11 * 4,pplVar5,(ulong)plVar8 >> 0x20,
                     puVar14 + 10,puVar14 + 2,puVar14[8],puVar14[9]);
          pplVar6 = pplStack_b8;
          iVar12 = (int)((ulong)plVar8 >> 0x20);
          pplVar18 = (long **)(ulong)(uint)(iVar17 + iVar12);
          iStack_134 = iStack_134 + iVar12;
          iStack_12c = iStack_12c + iVar12;
          iStack_f8 = iStack_f8 + iVar12;
          param_3 = pplVar5;
          if (iStack_134 == iStack_138 || iVar17 + iVar12 < iVar16) {
            if (iStack_f8 != 0) {
              pplVar9 = pplStack_b8;
              (*(code *)(*pplStack_b8)[0x18])();
              pplVar7 = pplStack_108;
              func_0x0001082eeccc();
              pplVar5 = (long **)&uStack_9c;
              FUN_1082ee5d0();
              if ((pplVar9 != (long **)0x0) && (uVar19 = (ulong)uStack_9c, uStack_9c != 0)) {
                uVar2 = *(uint *)(pplVar7 + 8);
                uVar20 = (ulong)uVar2;
                if (uVar2 != uStack_9c) {
                  for (; uVar20 < uVar19; uVar20 = uVar20 + 1) {
                    pplStack_100[uVar20] = pplVar9[uVar20 * 2];
                    (*(code *)(*pplVar6)[0x19])(pplVar6);
                    plStack_a8 = pplVar9[uVar20 * 2];
                    func_0x0001082ee628();
                    iVar12 = 0;
                    while (iVar12 < iStack_f0) {
                      do {
                        func_0x0001082eecbc();
                      } while (extraout_w11_00 != 0);
                      iVar12 = extraout_w8_00 + 1;
                    }
                  }
                  FUN_1082c6888(pplVar7,pplVar9,uVar19,
                                (ulong)(*(uint *)(param_1 + 0x54) >> 0xe & 1) << 0x20,0x100000000);
                }
                plVar10 = plStack_110;
                (**(code **)(*plStack_110 + 0x20))();
                pplVar5 = pplVar6;
                FUN_1082e91fc();
                plVar8 = plStack_110;
                if (plStack_110 != (long *)0x0) {
                  (**(code **)(*plStack_110 + 0x10))(plStack_110);
                }
                iVar12 = iStack_f8;
                plVar4 = plStack_118;
                plStack_a8 = plVar8;
                if (plStack_118 != (long *)0x0) {
                  (**(code **)(*plStack_118 + 0x10))(plStack_118);
                }
                plStack_b0 = plVar4;
                FUN_1082e9218(pplVar5,&plStack_a8,6,iVar12,(ulong)plVar10 / 0xc,&plStack_b0,4,
                              iStack_f4);
                FUN_1082647e4(&plStack_b0);
                FUN_1082647e4(&plStack_a8);
                (*(code *)(*pplVar6)[2])(pplVar6,pplStack_108,pplVar5,1,pplStack_100,0);
                iVar12 = iStack_f8 * 4;
                iStack_f8 = 0;
                iStack_f4 = iStack_f4 + iVar12;
                iStack_f0 = iStack_f0 + 1;
              }
            }
            param_3 = pplVar5;
            if ((iStack_134 == iStack_138) &&
               (in_ZR = iStack_12c == iStack_130, iStack_12c < iStack_130)) {
              uVar19 = 0;
              FUN_1082ee72c();
              param_3 = pplVar5;
              if ((uVar19 & 1) == 0) goto LAB_1082ee4f8;
            }
          }
        }
      }
    }
LAB_1082ee4f8:
    pplVar18 = &plStack_118;
    func_0x0001082eea4c();
  }
LAB_1082ee510:
  func_0x0001082eecfc(uStack_78);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10828f708(&plStack_188);
    func_0x0001082eea4c(&plStack_118);
    __Unwind_Resume();
    pplVar5 = pplVar18;
    FUN_1082ee93c();
    FUN_108313838(pplVar18,pplVar5);
    if ((int)pplVar18 == 0) {
      pplVar18 = (long **)0x0;
      *(uint *)param_3 = 0;
    }
    else {
      func_0x0001082eece4();
      *(uint *)param_3 = *(uint *)((long)pplVar18 + 0x18c);
      func_0x0001082eece4();
      pplVar18 = pplVar18 + 0x1d;
    }
    return pplVar18;
  }
  return pplVar18;
}



/* Entry: 1082ee5d0; end: 1082ee6af;  */

long FUN_1082ee5d0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1082ee93c();
  FUN_108313838(param_1,lVar1);
  if ((int)param_1 == 0) {
    param_1 = 0;
    *param_3 = 0;
  }
  else {
    func_0x0001082eece4();
    *param_3 = *(undefined4 *)(param_1 + 0x18c);
    func_0x0001082eece4();
    param_1 = param_1 + 0xe8;
  }
  return param_1;
}



/* Entry: 1082ee6b0; end: 1082ee72b;  */

void FUN_1082ee6b0(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  long *plVar2;
  undefined8 uStack_28;
  
  plVar2 = (long *)(param_2 + 0x18);
  if (*plVar2 == 0) {
    FUN_1082af3e8(&uStack_28);
    uVar1 = uStack_28;
    uStack_28 = 0;
    FUN_1082eea00(plVar2,uVar1);
    FUN_10828f708(&uStack_28);
    uVar1 = 0;
    if (*plVar2 == 0) goto LAB_1082ee704;
  }
  do {
    func_0x0001082eecbc();
    uVar1 = extraout_x8;
  } while (extraout_w11 != 0);
LAB_1082ee704:
  *param_1 = uVar1;
  return;
}



/* Entry: 1082ee72c; end: 1082ee7c7;  */

undefined8 FUN_1082ee72c(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  
  piVar2 = (int *)param_1[1];
  *(undefined4 *)*param_1 = 0;
  iVar1 = *(int *)param_1[3] - *(int *)param_1[4];
  if (*(int *)param_1[2] <= *(int *)param_1[3] - *(int *)param_1[4]) {
    iVar1 = *(int *)param_1[2];
  }
  *piVar2 = iVar1;
  plVar3 = *(long **)param_1[6];
  (**(code **)(*plVar3 + 0x18))
            (plVar3,(long)*(int *)param_1[7],iVar1 << 2,param_1[8],param_1[8] + 0x24);
  *(long **)param_1[5] = plVar3;
  if ((plVar3 == (long *)0x0) || (*(long *)param_1[8] == 0)) {
    FUN_10841076c(&UNK_10f488006);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



/* Entry: 1082ee7c8; end: 1082ee81b;  */

long FUN_1082ee7c8(long param_1,long param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_118 [96];
  char cStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  lVar1 = param_2;
  FUN_1082fc624(param_2,param_1 + 0x30,0);
  lVar2 = param_2;
  func_0x0001082a20a0();
  uStack_68 = extraout_x8;
  while ((*(long *)(param_2 + 0x180) != 0 &&
         (in_ZR = 0, *(long *)(*(long *)(param_2 + 0x180) + 0x18) == param_1))) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x170) + 8);
    lVar2 = *(long *)(param_2 + 0x188);
    while ((lVar2 != 0 && (*(long *)(lVar2 + 0x20) == lVar3 + 1))) {
      (**(code **)(**(long **)(param_2 + 0x178) + 0x10))(*(long **)(param_2 + 0x178),param_2);
      lVar2 = *(long *)(*(long *)(param_2 + 0x188) + 0x28);
      *(long *)(param_2 + 0x188) = lVar2;
    }
    lVar2 = *(long *)(param_2 + 0x150);
    FUN_1082a47e4(auStack_118,*(undefined8 *)(*(long *)(param_2 + 0x160) + 0x10),
                  *(undefined8 *)(lVar2 + 8),*(undefined1 *)(lVar2 + 0x18),lVar1,&UNK_10df14cb4,
                  **(undefined8 **)(param_2 + 0x180),
                  *(undefined1 *)((long)*(undefined8 **)(param_2 + 0x180) + 0x24),
                  *(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c));
    FUN_1082a1068(param_2,auStack_118,param_3);
    lVar2 = param_2;
    FUN_1082a10b4(param_2,uStack_80,*(undefined8 *)(*(long *)(param_2 + 0x180) + 8),uStack_90);
    lVar5 = 0;
    for (lVar3 = 0; lVar4 = *(long *)(param_2 + 0x180), lVar3 < *(int *)(lVar4 + 0x20);
        lVar3 = lVar3 + 1) {
      lVar2 = param_2;
      FUN_1082a10bc(param_2,*(long *)(lVar4 + 0x10) + lVar5);
      lVar5 = lVar5 + 0x30;
    }
    *(long *)(*(long *)(param_2 + 0x170) + 8) = *(long *)(*(long *)(param_2 + 0x170) + 8) + 1;
    *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(lVar4 + 0x28);
    in_ZR = cStack_b8 == '\x01';
    if ((bool)in_ZR) {
      func_0x0001082a20ec();
    }
  }
  func_0x0001082a208c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (cStack_b8 == '\x01') {
      func_0x0001082a20ec();
    }
    func_0x0001082a20b8();
    return *(long *)(*(long *)(lVar2 + 0x150) + 8);
  }
  return lVar2;
}



/* Entry: 1082ee81c; end: 1082ee8ef;  */

undefined8 FUN_1082ee81c(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if (((*(uint *)(param_2 + 0x54) ^ *(uint *)(param_1 + 0x54)) & 0x1ffff) != 0) {
    return 2;
  }
  uVar1 = param_1 + 0x30;
  FUN_1082ee8f0(uVar1,param_2 + 0x30);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x54);
    if ((uVar3 >> 0xd & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x68) + 0x10;
      FUN_10829dddc(lVar4,*(long *)(param_2 + 0x68) + 0x10);
      if ((int)lVar4 == 0) goto LAB_1082ee85c;
      uVar3 = *(uint *)(param_1 + 0x54);
    }
    if ((uVar3 & 0x1c00) == 0x800) {
      uVar1 = *(long *)(param_1 + 0x68) + 0x50;
      FUN_10828e84c(uVar1,*(long *)(param_2 + 0x68) + 0x50);
      if ((uVar1 & 1) != 0) goto LAB_1082ee85c;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x50);
    lVar4 = *(long *)(param_2 + 0x68);
    **(long **)(param_1 + 0x70) = lVar4;
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x60);
    } while (lVar4 != 0);
    uVar2 = 0;
    *(long *)(param_1 + 0x70) = lVar5 + 0x60;
    *(undefined8 *)(param_2 + 0x68) = 0;
  }
  else {
LAB_1082ee85c:
    uVar2 = 2;
  }
  return uVar2;
}



/* Entry: 1082ee8f0; end: 1082ee907;  */

uint FUN_1082ee8f0(uint param_1)

{
  FUN_1082a3bbc();
  return param_1 ^ 1;
}



/* Entry: 1082ee908; end: 1082ee90b;  */

undefined8 * FUN_1082ee908(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[0xd];
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x60);
    FUN_10827fb54(lVar1 + 8);
    lVar1 = lVar2;
  }
  FUN_10827f5a4(param_1 + 0xb);
  FUN_1082a3b78(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082ee90c; end: 1082ee91f;  */

void FUN_1082ee90c(long *param_1)

{
  long extraout_x8;
  
  func_0x0001082eea74();
  func_0x0001082eeca8();
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(extraout_x8);
    return;
  }
  *param_1 = extraout_x8;
  return;
}



/* Entry: 1082ee920; end: 1082ee93b;  */

undefined * FUN_1082ee920(void)

{
  return &UNK_10f48852a;
}



/* Entry: 1082ee93c; end: 1082ee9db;  */

undefined8 * FUN_1082ee93c(undefined8 **param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 **ppuVar2;
  uint uVar3;
  undefined1 auStack_98 [4];
  char cStack_94;
  undefined8 *apuStack_90 [10];
  char cStack_40;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = false;
  if ((int)param_2 == 1) {
    param_1 = *(undefined8 ***)(*(long *)(param_1[7][2] + 0x10) + 0xb8);
    FUN_10828a818(auStack_98,param_1,2,0);
    if (cStack_40 == '\x01') {
      param_1 = apuStack_90;
      (*(code *)*apuStack_90[0])();
    }
    bVar1 = cStack_94 == '\0';
    uVar3 = 1;
    if (bVar1) {
      uVar3 = 2;
    }
    param_2 = (undefined8 *)(ulong)uVar3;
  }
  func_0x0001082eecfc(uStack_28);
  if (bVar1) {
    return param_2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppuVar2 = param_1;
  FUN_1082ee93c();
  return param_1[(long)(int)ppuVar2 + 3];
}



/* Entry: 1082ee9dc; end: 1082ee9ff;  */

undefined8 FUN_1082ee9dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1082ee93c();
  return *(undefined8 *)(param_1 + (long)(int)lVar1 * 8 + 0x18);
}



/* Entry: 1082eea00; end: 1082eea1f;  */

void FUN_1082eea00(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long unaff_x19;
  long unaff_x20;
  
  plVar8 = (long *)*param_1;
  *param_1 = param_2;
  if (plVar8 == (long *)0x0) {
    return;
  }
  plVar1 = plVar8 + 1;
  do {
    iVar7 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 != 0) {
    return;
  }
  iVar7 = 0;
  if (plVar8[0x10] == 0) {
    if ((*(int *)((long)plVar8 + 0xc) == 0) && ((int)*plVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001082a0900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x18))(plVar8);
      return;
    }
    return;
  }
  iVar5 = (int)*(undefined8 *)(*(long *)(plVar8[0x10] + 0x20) + 0x78);
  func_0x0001082ade30();
  if ((iVar7 == 0) && (func_0x0001082addb4(), iVar5 != 0)) {
    func_0x0001082adf08();
  }
  if ((*(int *)(unaff_x19 + 8) == 0) && (*(int *)(unaff_x19 + 0xc) == 0)) {
    lVar6 = unaff_x20;
    FUN_1082ab4d8();
    *(int *)(unaff_x19 + 0x14) = (int)lVar6;
    lVar6 = unaff_x19;
    FUN_1082a0834();
    if ((int)lVar6 != 0) {
      func_0x0001082adf18();
      FUN_1082ab814();
      lVar6 = unaff_x20 + 0x18;
      FUN_1082abdf4();
      __ZNSt3__16chrono12steady_clock3nowEv();
      *(long *)(unaff_x19 + 0x18) = lVar6;
      func_0x0001082ae078();
      *(long *)(unaff_x20 + 0x90) = *(long *)(unaff_x20 + 0x90) + lVar6;
      sVar2 = *(short *)(*(long *)(unaff_x19 + 0x48) + 4);
      if (*(char *)(unaff_x19 + 0x90) == '\0') {
        if ((*(ulong *)(unaff_x20 + 0x88) <= *(ulong *)(unaff_x20 + 0x70)) &&
           (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0 || sVar2 != 0)) {
          return;
        }
      }
      else {
        if ((sVar2 != 0) && (*(char *)(unaff_x19 + 0x90) == '\x02')) {
          return;
        }
        if ((((*(byte *)(unaff_x19 + 0x91) & 1) == 0) &&
            (*(short *)(*(long *)(unaff_x19 + 0x20) + 4) != 0)) &&
           (func_0x0001082ae078(),
           (ulong)(*(long *)(unaff_x20 + 0x88) + lVar6) <= *(ulong *)(unaff_x20 + 0x70))) {
          FUN_1082a0950();
          return;
        }
      }
      FUN_1082ab9e0(&stack0xffffffffffffffd8);
    }
  }
  return;
}



/* Entry: 1082eea20; end: 1082eeabf;  */

undefined8 * FUN_1082eea20(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + -0x311);
  (**(code **)*puVar1)(puVar1);
  return puVar1;
}



/* Entry: 1082eeac0; end: 1082eeae3;  */

void FUN_1082eeac0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_1082eeae4;
  puStack_20 = &stack0xfffffffffffffff0;
  if (*(int *)(param_1 + 1) != 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082eeae4; end: 1082eeb57;  */

void FUN_1082eeae4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082eeb58; end: 1082eeb87;  */

void FUN_1082eeb58(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082eeb88; end: 1082eeb8f;  */

void FUN_1082eeb88(void)

{
  return;
}



/* Entry: 1082eeb90; end: 1082eebbf;  */

void FUN_1082eeb90(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a399d8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1082eebc0; end: 1082eec0f;  */

void FUN_1082eebc0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a399d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1082eec10; end: 1082eec47;  */

long FUN_1082eec10(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a39a48);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1082eec48; end: 1082eec53;  */

undefined ** FUN_1082eec48(void)

{
  return &PTR_DAT_110a39a48;
}



/* Entry: 1082eec54; end: 1082eec97;  */

long * FUN_1082eec54(long *param_1)

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



/* Entry: 1082eec98; end: 1082eed0f;  */

void FUN_1082eec98(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001082eec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1082eed10; end: 1082eed4f;  */

void FUN_1082eed10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_25;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_24 = 1;
  uStack_25 = 0;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_1082eed50(param_5,&uStack_24,param_6,&uStack_20,&uStack_25);
  return;
}



/* Entry: 1082eed50; end: 1082eed87;  */

void FUN_1082eed50(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001082ef0fc();
  func_0x0001082ef128();
  FUN_1082eee00();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1082eed88; end: 1082eedc7;  */

void FUN_1082eed88(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_11;
  
  uStack_18 = 2;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_11 = param_3;
  FUN_1082eedc8(param_1,&uStack_18,param_2,&uStack_28,&uStack_11);
  return;
}



/* Entry: 1082eedc8; end: 1082eedff;  */

void FUN_1082eedc8(void)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001082ef0fc();
  func_0x0001082ef128();
  FUN_1082eee00();
  *unaff_x19 = unaff_x20;
  return;
}



/* Entry: 1082eee00; end: 1082eeeab;  */

undefined8 *
FUN_1082eee00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = param_5;
  uVar4 = param_2;
  uVar5 = param_3;
  uVar6 = param_4;
  FUN_1082eeeac();
  param_5[1] = 0;
  param_5[2] = 0;
  *(short *)(param_5 + 3) = (short)puVar1;
  *(undefined8 *)((long)param_5 + 0x24) = 0;
  *(undefined8 *)((long)param_5 + 0x1c) = 0;
  *(undefined4 *)((long)param_5 + 0x2c) = 0;
  *param_5 = &PTR_FUN_110a39a68;
  uVar3 = param_7[1];
  uVar2 = *param_7;
  param_5[8] = param_7[2];
  param_5[7] = uVar3;
  param_5[6] = uVar2;
  *(undefined4 *)(param_5 + 9) = param_1;
  *(undefined4 *)((long)param_5 + 0x4c) = param_2;
  *(undefined4 *)(param_5 + 10) = param_3;
  *(undefined4 *)((long)param_5 + 0x54) = param_4;
  *(undefined1 *)(param_5 + 0xb) = param_8;
  *(undefined4 *)((long)param_5 + 0x5c) = param_6;
  FUN_10817500c(param_7 + 1);
  *(int *)(param_5 + 4) = (int)uVar2;
  *(undefined4 *)((long)param_5 + 0x24) = uVar4;
  *(undefined4 *)(param_5 + 5) = uVar5;
  *(undefined4 *)((long)param_5 + 0x2c) = uVar6;
  *(undefined2 *)((long)param_5 + 0x1a) = 0;
  return param_5;
}



/* Entry: 1082eeeac; end: 1082eef13;  */

int FUN_1082eeeac(void)

{
  int iVar1;
  
  if ((bRam0000000113254d90 & 1) == 0) {
    iVar1 = 0x13254d90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1082e6880();
      iRam0000000113254d88 = iVar1;
      ___cxa_guard_release(0x113254d90);
    }
  }
  return iRam0000000113254d88;
}



/* Entry: 1082eef14; end: 1082ef033;  */

undefined8 FUN_1082eef14(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2 + 0x30;
  if (*(int *)(param_2 + 0x5c) == *(int *)(param_1 + 0x5c)) {
    func_0x0001082eefec();
    if ((int)lVar1 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
      return 0;
    }
    lVar1 = param_2 + 0x48;
    func_0x00010778c18c(lVar1,param_1 + 0x48);
    if (((int)lVar1 != 0) && (*(char *)(param_2 + 0x58) == *(char *)(param_1 + 0x58))) {
      uVar2 = param_1 + 0x30;
      func_0x0001082eefec(uVar2,param_2 + 0x30);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
    }
  }
  else {
    FUN_1082ef034(lVar1,param_1 + 0x30);
    if ((int)lVar1 != 0) {
      uVar3 = *(uint *)(param_2 + 0x5c);
      if ((uVar3 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
        *(undefined8 *)(param_1 + 0x48) = uVar4;
        uVar3 = *(uint *)(param_2 + 0x5c);
      }
      if ((uVar3 >> 1 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
      }
      *(undefined4 *)(param_1 + 0x5c) = 3;
      return 0;
    }
  }
  return 2;
}



/* Entry: 1082ef034; end: 1082ef053;  */

bool FUN_1082ef034(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return false;
  }
  _memcmp(piVar1,param_2 + 2,0x10);
  return (int)piVar1 == 0;
}



/* Entry: 1082ef054; end: 1082ef0cf;  */

void FUN_1082ef054(long param_1,long param_2)

{
  undefined1 uVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x5c);
  if ((uVar3 & 1) != 0) {
    plVar2 = *(long **)(param_2 + 0x178);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    uVar6 = *(undefined4 *)(param_1 + 0x50);
    uVar7 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(plVar2 + 6) = 1;
    (**(code **)(*plVar2 + 0x80))(uVar4,uVar5,uVar6,uVar7,plVar2,param_1 + 0x30);
    uVar3 = *(uint *)(param_1 + 0x5c);
  }
  if ((uVar3 >> 1 & 1) == 0) {
    return;
  }
  plVar2 = *(long **)(param_2 + 0x178);
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  *(undefined4 *)(plVar2 + 6) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001082ef0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,param_1 + 0x30,uVar1);
  return;
}



/* Entry: 1082ef0d0; end: 1082ef0d3;  */

undefined8 * FUN_1082ef0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082ef0d4; end: 1082ef0e7;  */

void FUN_1082ef0d4(void)

{
  FUN_1082e696c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082ef0e8; end: 1082ef15b;  */

undefined * FUN_1082ef0e8(void)

{
  return &DAT_10f488536;
}



/* Entry: 1082ef15c; end: 1082ef1e7;  */

void FUN_1082ef15c(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *unaff_x20;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  long *plStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 uStack_39;
  long alStack_38 [2];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2[4];
  uVar3 = *(int *)(lVar10 + 0x58) == 1;
  plVar8 = param_2;
  if ((bool)uVar3) {
    plVar8 = alStack_38;
    lVar5 = lVar10;
    FUN_1082d8e40(lVar10,plVar8,&uStack_39);
    unaff_x20 = param_2;
    if ((int)lVar5 != 0) {
      plVar6 = alStack_38;
      plVar8 = (long *)(lVar10 + 0x40);
      FUN_1082ef808(plVar6,plVar8,param_2[3]);
      uVar3 = (int)plVar6 == 0;
    }
  }
  func_0x0001082ef348(uStack_28);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  plStack_60 = unaff_x20;
  lStack_58 = lVar10;
  puStack_50 = &stack0xfffffffffffffff0;
  pcStack_48 = FUN_1082ef1e8;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(*plVar8 + 0x20) + 0x54) == '\x01') {
    FUN_10827b938(*(long *)(*plVar8 + 0x20),&UNK_10f48853c);
  }
  iVar2 = (int)plVar8[8];
  iVar1 = iVar2;
  if (iVar2 != 2) {
    iVar1 = 0;
  }
  if (iVar2 == 1) {
    iVar1 = 1;
  }
  puVar9 = (undefined8 *)plVar8[7];
  if (*(char *)(puVar9 + 7) == '\x06') {
    uStack_78 = puVar9[1];
    uStack_80 = *puVar9;
  }
  FUN_1082ef35c(&lStack_a8,*plVar8,plVar8[1],plVar8[6],&uStack_80,iVar1,puVar9 + 8,plVar8[2]);
  lVar10 = lStack_a8;
  if (lStack_a8 != 0) {
    lStack_b0 = lStack_a8;
    lStack_a8 = 0;
    uStack_88 = 0;
    FUN_1082c0f08(plVar8[3],plVar8[4],&lStack_b0,auStack_a0);
    FUN_10827fb18(auStack_a0);
    lVar5 = lStack_b0;
    lStack_b0 = 0;
    if (lVar5 != 0) {
      func_0x0001082ef33c();
    }
    lVar5 = lStack_a8;
    lStack_a8 = 0;
    if (lVar5 != 0) {
      func_0x0001082ef33c();
    }
  }
  bVar4 = lVar10 == 0;
  uVar7 = (ulong)!bVar4;
  func_0x0001082ef348(uStack_68,uVar7);
  if (!bVar4) {
    ___stack_chk_fail();
    FUN_10827fb18(auStack_a0);
    lVar10 = lStack_b0;
    lStack_b0 = 0;
    if (lVar10 != 0) {
      func_0x0001082ef33c();
    }
    lVar10 = lStack_a8;
    lStack_a8 = 0;
    if (lVar10 != 0) {
      func_0x0001082ef33c();
    }
    __Unwind_Resume(uVar7);
    return;
  }
  return;
}



/* Entry: 1082ef1e8; end: 1082ef31f;  */

void FUN_1082ef1e8(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(*param_2 + 0x20) + 0x54) == '\x01') {
    FUN_10827b938(*(long *)(*param_2 + 0x20),&UNK_10f48853c);
  }
  iVar2 = (int)param_2[8];
  iVar1 = iVar2;
  if (iVar2 != 2) {
    iVar1 = 0;
  }
  if (iVar2 == 1) {
    iVar1 = 1;
  }
  puVar7 = (undefined8 *)param_2[7];
  if (*(char *)(puVar7 + 7) == '\x06') {
    uStack_38 = puVar7[1];
    uStack_40 = *puVar7;
  }
  FUN_1082ef35c(&lStack_68,*param_2,param_2[1],param_2[6],&uStack_40,iVar1,puVar7 + 8,param_2[2]);
  lVar4 = lStack_68;
  if (lStack_68 != 0) {
    lStack_70 = lStack_68;
    lStack_68 = 0;
    uStack_48 = 0;
    FUN_1082c0f08(param_2[3],param_2[4],&lStack_70,auStack_60);
    FUN_10827fb18(auStack_60);
    lVar3 = lStack_70;
    lStack_70 = 0;
    if (lVar3 != 0) {
      func_0x0001082ef33c();
    }
    lVar3 = lStack_68;
    lStack_68 = 0;
    if (lVar3 != 0) {
      func_0x0001082ef33c();
    }
  }
  bVar5 = lVar4 == 0;
  uVar6 = (ulong)!bVar5;
  func_0x0001082ef348(uStack_28,uVar6);
  if (bVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_10827fb18(auStack_60);
  lVar4 = lStack_70;
  lStack_70 = 0;
  if (lVar4 != 0) {
    func_0x0001082ef33c();
  }
  lVar4 = lStack_68;
  lStack_68 = 0;
  if (lVar4 != 0) {
    func_0x0001082ef33c();
  }
  __Unwind_Resume(uVar6);
  return;
}



/* Entry: 1082ef320; end: 1082ef35b;  */

void FUN_1082ef320(void)

{
  return;
}



/* Entry: 1082ef35c; end: 1082ef807;  */

void FUN_1082ef35c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  float *param_5,int param_6,long param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  long *plVar12;
  uint uVar13;
  undefined4 *puVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined4 uVar22;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
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
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_80;
  
  uVar7 = 0;
  puVar14 = *(undefined4 **)(param_7 + 0x20);
  uVar22 = *(undefined4 *)(param_7 + 0x1c);
  uVar1 = *(ushort *)(param_7 + 0xc);
  uStack_f8 = 0;
  uStack_100 = 0x3f800000;
  uStack_e8 = 0;
  uStack_f0 = 0x3f800000;
  uStack_e0 = 0x103f800000;
  uStack_d0 = 0;
  uStack_d8 = 0x3f800000;
  uStack_c0 = 0;
  uStack_c8 = 0x3f800000;
  fStack_a0 = *(float *)(param_7 + 4);
  fVar16 = param_5[1];
  fVar15 = param_5[3];
  uStack_b8 = 0x103f800000;
  if (fVar16 == fVar15) {
    fVar21 = *param_5;
    fVar18 = param_5[2];
    if (fVar18 < fVar21) goto LAB_1082ef400;
    uStack_d8 = 0x3f800000;
    uStack_d0 = 0;
    uStack_c8 = 0x3f800000;
    uStack_c0 = 0;
    uStack_b8 = 0x103f800000;
    uStack_b0 = *(undefined8 *)param_5;
    fStack_a8 = (float)*(undefined8 *)(param_5 + 2);
    fStack_a4 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20);
  }
  else {
    fVar18 = param_5[2];
    fVar21 = *param_5;
LAB_1082ef400:
    uStack_80._0_4_ = fVar18 - fVar21;
    uStack_80._4_4_ = fVar15 - fVar16;
    bVar4 = false;
    if ((fVar15 == fVar16) && (bVar4 = false, !NAN(fVar18) && !NAN(fVar21))) {
      bVar4 = fVar18 == fVar21;
    }
    if (bVar4) {
      fVar15 = 1.0;
      uStack_80._0_4_ = 1.0;
      uStack_80._4_4_ = 0.0;
    }
    FUN_1082878c8(&uStack_80);
    fVar16 = 1.0 / fVar15;
    if (fVar15 == 0.0) {
      fVar16 = 0.0;
    }
    fStack_120 = (float)uStack_80 * fVar16;
    uStack_80._4_4_ = uStack_80._4_4_ * fVar16;
    uStack_130 = CONCAT44(uStack_80._4_4_,fStack_120);
    uStack_128 = CONCAT44(-uStack_80._4_4_,
                          (1.0 - fStack_120) * *param_5 - param_5[1] * uStack_80._4_4_);
    fStack_11c = (1.0 - fStack_120) * param_5[1] + *param_5 * uStack_80._4_4_;
    uStack_118 = 0;
    uStack_110 = 0xc03f800000;
    uStack_80 = uStack_130;
    FUN_1083645e0(&uStack_130,&uStack_b0,param_5,2);
    fStack_a4 = param_5[1];
    FUN_10818cfd0(&uStack_130,&uStack_d8);
    if ((uVar7 & 1) == 0) {
      FUN_10841076c(&UNK_10f488566);
      goto LAB_1082ef590;
    }
    fVar18 = param_5[2];
    fVar15 = param_5[3];
    fVar21 = *param_5;
    fVar16 = param_5[1];
  }
  uStack_130._0_4_ = fVar18 - fVar21;
  uStack_130._4_4_ = fVar15 - fVar16;
  bVar4 = false;
  if ((fVar18 == fVar21) && (bVar4 = false, !NAN(fVar15) && !NAN(fVar16))) {
    bVar4 = fVar15 == fVar16;
  }
  if (bVar4) {
    fVar15 = 1.0;
    uStack_130._0_4_ = 1.0;
    uStack_130._4_4_ = 0.0;
  }
  FUN_1082878c8(&uStack_130);
  fVar16 = 1.0 / fVar15;
  if (fVar15 == 0.0) {
    fVar16 = 0.0;
  }
  uVar10 = CONCAT44(uStack_130._4_4_ * fVar16,(float)uStack_130 * fVar16);
  uStack_80 = CONCAT44((float)uStack_130 * fVar16,-(uStack_130._4_4_ * fVar16));
  uStack_130 = uVar10;
  func_0x0001082f14ec();
  fVar15 = (float)uVar10;
  func_0x0001082f14ec();
  FUN_1082878c8(&uStack_130);
  fStack_90 = fVar15;
  FUN_1082878c8(&uStack_80);
  fVar16 = ABS(fVar15);
  bVar4 = false;
  bVar5 = false;
  if (0.00024414062 < ABS(fStack_90)) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar16)) {
      bVar4 = fVar16 == 0.00024414062;
      bVar5 = 0.00024414062 <= fVar16;
    }
  }
  if (bVar5 && !bVar4) {
    fStack_94 = (float)puVar14[1];
    uVar13 = (uint)uVar1;
    fVar16 = fStack_90 * fStack_94 - fVar15 * fStack_a0;
    if (fStack_a0 == 0.0 || uVar13 != 2) {
      fVar16 = fStack_90 * fStack_94;
    }
    uStack_f8 = param_4[1];
    uStack_100 = *param_4;
    uStack_f0 = param_4[2];
    uStack_e8 = param_4[3];
    uStack_e0 = param_4[4];
    uStack_98 = *puVar14;
    puVar8 = (undefined8 *)0x108;
    uStack_9c = uVar22;
    fStack_8c = fVar15;
    __Znwm();
    if ((bRam000000011372a918 & 1) == 0) {
      iVar6 = 0x1372a918;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        FUN_1082e6880();
        iRam000000011372a910 = iVar6;
        ___cxa_guard_release(0x11372a918);
      }
    }
    iVar6 = iRam000000011372a910;
    puVar8[2] = 0;
    puVar8[1] = 0;
    *(short *)(puVar8 + 3) = (short)iVar6;
    *(undefined8 *)((long)puVar8 + 0x24) = 0;
    *(undefined8 *)((long)puVar8 + 0x1c) = 0;
    *(undefined4 *)((long)puVar8 + 0x2c) = 0;
    *puVar8 = &PTR_SUB_110a39b38;
    plVar12 = puVar8 + 0x15;
    *plVar12 = (long)(puVar8 + 6);
    puVar8[0x16] = 0x200000000;
    uVar10 = *(undefined8 *)(param_3 + 0x1c);
    puVar8[0x18] = *(undefined8 *)(param_3 + 0x24);
    puVar8[0x17] = uVar10;
    bVar11 = 2;
    if (fVar16 <= 0.0 && param_6 == 0) {
      bVar11 = 0;
    }
    *(byte *)(puVar8 + 0x19) = bVar11 | (byte)((uVar13 & 7) << 2) | *(byte *)(puVar8 + 0x19) & 0xe1;
    *(int *)((long)puVar8 + 0xcc) = param_6;
    FUN_1082a3af0(puVar8 + 0x1a,param_3);
    puVar8[0x1f] = 0;
    puVar8[0x20] = 0;
    puVar8[0x1e] = param_8;
    iVar6 = *(int *)(puVar8 + 0x16);
    lVar9 = (long)iVar6;
    if (iVar6 < (int)(*(uint *)((long)puVar8 + 0xb4) >> 1)) {
      func_0x0001082f1500(*plVar12 + (long)iVar6 * 0x78,&uStack_100);
    }
    else {
      uVar10 = 1;
      FUN_1082f0820(lVar9,1);
      func_0x0001082f1500(lVar9 + (long)*(int *)(puVar8 + 0x16) * 0x78,&uStack_100);
      FUN_1082f0868(plVar12,lVar9,uVar10);
    }
    *(int *)(puVar8 + 0x16) = *(int *)(puVar8 + 0x16) + 1;
    auVar2._8_4_ = fStack_a8;
    auVar2._0_8_ = uStack_b0;
    auVar2._12_4_ = fStack_a4;
    auVar19 = NEON_ext(auVar2,auVar2,8,1);
    auVar20._0_4_ = -(uint)(auVar19._0_4_ < (float)uStack_b0);
    auVar20._4_4_ = -(uint)(auVar19._4_4_ < (float)((ulong)uStack_b0 >> 0x20));
    auVar20._8_4_ = -(uint)(auVar19._8_4_ < fStack_a8);
    auVar20._12_4_ = -(uint)(auVar19._12_4_ < fStack_a4);
    auVar17._8_8_ = uStack_b0;
    auVar17._0_8_ = uStack_b0;
    auVar19._8_8_ = auVar2._8_8_;
    auVar19._0_8_ = auVar2._8_8_;
    auVar17 = auVar17 ^ (auVar17 ^ auVar19) & auVar20;
    uStack_128 = auVar17._8_8_;
    uStack_130 = auVar17._0_8_;
    fVar15 = 0.0;
    if (uVar13 != 0) {
      fVar15 = fStack_a0 * 0.5;
    }
    func_0x00010816882c(fVar15,&uStack_130);
    if (0 < *(int *)(puVar8 + 0x16)) {
      lVar9 = *plVar12;
      FUN_108363f68(lVar9 + 0x28,&uStack_100);
      FUN_1082ef8cc(puVar8,&uStack_130,lVar9 + 0x28,param_6 != 0,fStack_a0 == 0.0);
      *param_1 = puVar8;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1082ef7c0);
    (*pcVar3)();
  }
LAB_1082ef590:
  *param_1 = 0;
  return;
}



/* Entry: 1082ef808; end: 1082ef8bf;  */

undefined8 FUN_1082ef808(float *param_1,long param_2,int param_3)

{
  float *pfVar1;
  
  if ((*param_1 == param_1[2]) || (param_1[1] == param_1[3])) {
    func_0x000108363d40(0x39800000);
    if (param_3 == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x18) != 1 || *(int *)(param_2 + 0x40) != 2) {
      return 0;
    }
    pfVar1 = *(float **)(param_2 + 0x20);
    if (((*pfVar1 != 0.0) || (pfVar1[1] != 0.0)) &&
       ((*(short *)(param_2 + 0xc) != 1 ||
        ((*pfVar1 == 0.0 && (*(float *)(param_2 + 4) <= pfVar1[1])))))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1082ef8c0; end: 1082ef8cb;  */

void FUN_1082ef8c0(code *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  pcVar1 = param_1;
  FUN_10828e338();
  if ((int)pcVar1 == 0) {
    uStack_70 = *(undefined8 *)param_1;
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(ulong *)(param_1 + 0x10) & 0xffffffff;
    uStack_68 = *(ulong *)(param_1 + 8) & 0xffffffff00000000;
    uStack_50 = *(ulong *)(param_1 + 0x20) & 0xfffffffeffffffff;
    FUN_1083645e0(&uStack_70,param_2,param_2,param_3);
  }
  else {
    pcVar1 = param_1;
    FUN_1082e9844();
    (*pcVar1)(0,0,param_1,&uStack_70);
    puVar2 = (undefined4 *)(param_2 + (param_3 & 0xffffffff) * 8 + -4);
    for (param_3 = param_3 & 0xffffffff; 0 < (int)param_3; param_3 = param_3 - 1) {
      (*pcVar1)(puVar2[-1],*puVar2,param_1,auStack_48);
      *(ulong *)(param_2 + -8 + param_3 * 8) =
           CONCAT44(auStack_48._4_4_ - (float)((ulong)uStack_70 >> 0x20),
                    auStack_48._0_4_ - (float)uStack_70);
      puVar2 = puVar2 + -2;
    }
  }
  return;
}



/* Entry: 1082ef8cc; end: 1082ef91b;  */

void FUN_1082ef8cc(long param_1,undefined8 param_2,undefined8 param_3,ushort param_4,int param_5)

{
  ushort uVar1;
  
  FUN_108364f90(param_3,param_1 + 0x20,param_2,1);
  uVar1 = 2;
  if (param_5 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0x1a) = uVar1 | param_4;
  return;
}



/* Entry: 1082ef91c; end: 1082ef977;  */

long FUN_1082ef91c(long param_1)

{
  if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x78));
  }
  return param_1;
}



/* Entry: 1082ef978; end: 1082ef98b;  */

void FUN_1082ef978(void)

{
  func_0x0001082ef948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082ef98c; end: 1082ef9af;  */

undefined * FUN_1082ef98c(void)

{
  return &UNK_10f488594;
}



/* Entry: 1082ef9b0; end: 1082efad3;  */

undefined8 FUN_1082ef9b0(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar5 = param_1 + 0xd0;
  FUN_1082ee8f0(uVar5,param_2 + 0xd0);
  if ((((uVar5 & 1) == 0) && (*(int *)(param_1 + 0xcc) == *(int *)(param_2 + 0xcc))) &&
     (((*(byte *)(param_2 + 200) ^ *(byte *)(param_1 + 200)) & 0x1e) == 0)) {
    uVar5 = param_1 + 0xb8;
    FUN_10828e84c(uVar5,param_2 + 0xb8);
    if ((uVar5 & 1) == 0) {
      if ((*(byte *)(param_1 + 200) & 1) != 0) {
        if ((*(int *)(param_1 + 0xb0) < 1) || (*(int *)(param_2 + 0xb0) < 1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1082efad4);
          (*pcVar2)();
        }
        uVar4 = *(undefined8 *)(param_1 + 0xa8);
        FUN_10829dddc(uVar4,*(undefined8 *)(param_2 + 0xa8));
        if ((int)uVar4 == 0) {
          return 2;
        }
      }
      uVar1 = *(uint *)(param_2 + 0xb0);
      uVar7 = (ulong)uVar1;
      lVar6 = *(long *)(param_2 + 0xa8);
      uVar3 = *(uint *)(param_1 + 0xb0);
      uVar5 = (ulong)uVar3;
      if ((int)((*(uint *)(param_1 + 0xb4) >> 1) - uVar3) < (int)uVar1) {
        FUN_1082f0820(uVar5,uVar7);
        FUN_1082f0868(param_1 + 0xa8,uVar5,uVar7);
        uVar3 = *(uint *)(param_1 + 0xb0);
      }
      lVar8 = *(long *)(param_1 + 0xa8) + (long)(int)uVar3 * 0x78;
      *(uint *)(param_1 + 0xb0) = uVar3 + uVar1;
      for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0;
          uVar5 = uVar5 - 1) {
        func_0x0001082f1500(lVar8,lVar6);
        lVar8 = lVar8 + 0x78;
        lVar6 = lVar6 + 0x78;
      }
      return 0;
    }
  }
  return 2;
}



/* Entry: 1082efad4; end: 1082efbab;  */

void FUN_1082efad4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(long *)(param_1 + 0x100) != 0) && (*(long *)(param_1 + 0xf8) != 0)) {
    FUN_1082a1068(param_2);
    FUN_1082a10b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0x100) + 0x98),0,
                  *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x88));
    puVar1 = *(undefined8 **)(param_1 + 0xf8);
    plVar2 = (long *)*puVar1;
    if (plVar2 == (long *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
      plVar2 = (long *)puVar1[4];
      if (plVar2 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      }
      plStack_48 = plVar2;
      FUN_1082a16e0(param_2,&uStack_38,&uStack_40,&plStack_48,0);
      func_0x0001082a20e4();
      FUN_1082647e4(&uStack_40);
      FUN_1082647e4(&uStack_38);
      func_0x0001082a1754(param_2,*(undefined4 *)(puVar1 + 5),*(undefined4 *)((long)puVar1 + 0x2c));
    }
    else {
      func_0x0001082a2158(*(undefined8 *)(*plVar2 + 0x10));
      uStack_58 = 0;
      plStack_60 = (long *)puVar1[4];
      plStack_50 = plVar2;
      if (plStack_60 != (long *)0x0) {
        func_0x0001082a2158(*(undefined8 *)(*plStack_60 + 0x10));
      }
      FUN_1082a16e0(param_2,&plStack_50,&uStack_58,&plStack_60,*(undefined1 *)((long)puVar1 + 0x1c))
      ;
      FUN_1082647e4(&plStack_60);
      func_0x0001082a2114();
      func_0x0001082a2124();
      if (*(int *)((long)puVar1 + 0xc) == 0) {
        func_0x0001082a175c(param_2,*(undefined4 *)(puVar1 + 1),*(undefined4 *)((long)puVar1 + 0x14)
                            ,*(undefined2 *)(puVar1 + 3),*(undefined2 *)((long)puVar1 + 0x1a),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
      else {
        func_0x0001082a1764(param_2,*(undefined4 *)(puVar1 + 1),*(int *)((long)puVar1 + 0xc),
                            *(undefined4 *)(puVar1 + 2),*(undefined4 *)(puVar1 + 5),
                            *(undefined4 *)((long)puVar1 + 0x2c));
      }
    }
    return;
  }
  return;
}



/* Entry: 1082efbac; end: 1082efbdf;  */

undefined1 FUN_1082efbac(long param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(int *)(param_1 + 0xcc) == 2;
  uVar2 = 2;
  if ((bool)uVar1) {
    uVar2 = 3;
  }
  if (*(undefined **)(param_1 + 0xf0) != &UNK_10df14cb4) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1082efbe0; end: 1082efe1f;  */

void FUN_1082efbe0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar6;
  undefined1 uVar7;
  uint auStack_a8 [2];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  bVar1 = *(byte *)(param_1 + 200);
  lVar5 = param_3;
  if ((bVar1 >> 1 & 1) == 0) {
    uStack_90 = 0;
    uStack_84 = (undefined4)*(undefined8 *)(param_1 + 0xc0);
    uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
    uStack_8c = (undefined4)*(undefined8 *)(param_1 + 0xb8);
    uStack_88 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xb8) >> 0x20);
    auStack_a8[0] = bVar1 & 1;
    uStack_98 = 0;
    uStack_94 = 0xff;
    uStack_a0 = 0;
    if (*(int *)(param_1 + 0xb0) < 1) goto LAB_1082efe1c;
    FUN_10828de24(param_3,&uStack_90,&uStack_98,auStack_a8,*(undefined8 *)(param_1 + 0xa8));
  }
  else {
    if (*(int *)(param_1 + 0xb0) < 1) {
LAB_1082efe1c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082efe20);
      (*pcVar3)();
    }
    uVar4 = *(ulong *)(param_1 + 0xa8);
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_90 = 0x3f800000;
    uStack_8c = 0;
    uStack_78 = 0;
    uStack_80 = 0x3f800000;
    uStack_7c = 0;
    uStack_70 = 0x103f800000;
    if (((bVar1 & 1) != 0) && (FUN_10818cfd0(uVar4,&uStack_90), (uVar4 & 1) == 0)) {
      FUN_10841076c(&UNK_10f4885c1);
      goto LAB_1082efdf0;
    }
    FUN_10840f8d0(param_3,0xd9,8);
    iVar2 = (int)lVar5 - *(int *)(param_3 + 8);
    *(long *)(param_3 + 8) = lVar5 + 0xd0;
    if ((bVar1 & 0x1c) == 4) {
      func_0x0001082f1374(iVar2);
      func_0x0001082f156c(0xc);
      *(undefined4 *)(lVar5 + 0x40) = 0;
      func_0x0001082f1254(&PTR_FUN_110a39be8);
      *(undefined4 *)(lVar5 + 0xb0) = extraout_w8;
      *(undefined **)(lVar5 + 0xb8) = &UNK_10f4885e0;
      *(undefined4 *)(lVar5 + 0xc0) = extraout_w8;
      uVar7 = 0x15;
      uVar6 = extraout_w8;
    }
    else {
      func_0x0001082f1374(iVar2);
      func_0x0001082f156c(0xd);
      *(undefined4 *)(lVar5 + 0x40) = 0;
      func_0x0001082f1254(&PTR_FUN_110a39c88);
      *(undefined4 *)(lVar5 + 0xb0) = extraout_w8_00;
      *(undefined **)(lVar5 + 0xb8) = &UNK_10f488746;
      *(undefined4 *)(lVar5 + 0xc0) = 3;
      uVar7 = 0x17;
      uVar6 = extraout_w8_00;
    }
    *(undefined1 *)(lVar5 + 0xc4) = uVar7;
    *(undefined4 *)(lVar5 + 200) = uVar6;
    FUN_10829e324(lVar5 + 0x10,lVar5 + 0x88,3);
  }
  if (lVar5 != 0) {
    FUN_1082fc788(param_2,param_3,param_4,param_5,param_6,param_7,lVar5,param_1 + 0xd0,0,param_8,
                  param_9,0,*(undefined8 *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0x100) = param_2;
    return;
  }
LAB_1082efdf0:
  FUN_10841076c(&UNK_10f48859b);
  return;
}



/* Entry: 1082efe20; end: 1082f081f;  */

void FUN_1082efe20(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  long extraout_x9;
  long extraout_x9_00;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  byte *pbVar22;
  long lVar23;
  float *pfVar24;
  bool bVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_23e0;
  undefined8 uStack_23d8;
  undefined1 *puStack_23d0;
  code *pcStack_23c8;
  ulong uStack_23b8;
  byte *pbStack_23b0;
  uint uStack_23a4;
  float fStack_23a0;
  uint uStack_239c;
  long lStack_2398;
  byte *pbStack_2390;
  long lStack_2388;
  float fStack_2380;
  float fStack_237c;
  float fStack_2378;
  float fStack_2374;
  long lStack_2370;
  long lStack_2368;
  int iStack_235c;
  float fStack_2358;
  float fStack_2354;
  long lStack_2350;
  uint uStack_2344;
  long lStack_2340;
  byte bStack_2331;
  long lStack_2330;
  undefined8 uStack_2328;
  long lStack_22f0;
  undefined8 uStack_22e8;
  long alStack_22d0 [832];
  long *plStack_8d0;
  undefined8 uStack_8c8;
  byte abStack_8c0 [2048];
  byte *pbStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_1 + 0xb0);
  uStack_239c = (uint)*(byte *)(param_1 + 200);
  uStack_2344 = *(byte *)(param_1 + 200) >> 2 & 7;
  uStack_23a4 = (uint)(uStack_2344 != 1);
  pbVar12 = param_2;
  if (*(long *)(param_1 + 0x100) == 0) {
    FUN_1082fbcfc();
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_1082f0780;
    uStack_239c = (uint)*(byte *)(param_1 + 200);
  }
  iVar21 = *(int *)(param_1 + 0xcc);
  pbStack_c0 = abStack_8c0;
  uStack_b8 = 0x10000000000;
  plStack_8d0 = alStack_22d0;
  uStack_8c8 = 0x10000000000;
  bStack_2331 = 1;
  uVar3 = uVar1 * 3;
  pbVar22 = (byte *)(ulong)uVar3;
  if ((int)uVar1 < 0x2b) {
    iVar14 = 0;
  }
  else {
    uStack_2328 = 0x7fffffff;
    lStack_2330 = 0x10;
    pbVar11 = (byte *)&lStack_2330;
    FUN_10840fe24(0x3ff8000000000000);
    pbVar12 = pbVar22;
    if ((int)uStack_b8 != 0) {
      param_3 = (long)(int)uStack_b8 << 4;
      pbVar12 = pbStack_c0;
      _memcpy(pbVar11,pbStack_c0,param_3);
    }
    if ((uStack_b8 & 0x100000000) != 0) {
      _free(pbStack_c0);
    }
    func_0x0001082f14ac((ulong)pbVar22 >> 4);
    iVar14 = (int)uStack_b8;
    uStack_b8 = CONCAT44(extraout_w8 << 1,(int)uStack_b8) | 0x100000000;
    pbStack_c0 = pbVar11;
  }
  uStack_b8 = CONCAT44(uStack_b8._4_4_,iVar14 + uVar3);
  pbVar22 = pbStack_c0 + (long)iVar14 * 0x10;
  for (uVar16 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)); uVar16 != 0;
      uVar16 = uVar16 - 1) {
    pbVar22[0] = 0;
    pbVar22[1] = 0;
    pbVar22[2] = 0;
    pbVar22[3] = 0;
    pbVar22[4] = 0;
    pbVar22[5] = 0;
    pbVar22[6] = 0;
    pbVar22[7] = 0;
    pbVar22[8] = 0;
    pbVar22[9] = 0;
    pbVar22[10] = 0;
    pbVar22[0xb] = 0;
    pbVar22[0xc] = 0;
    pbVar22[0xd] = 0;
    pbVar22[0xe] = 0;
    pbVar22[0xf] = 0;
    pbVar22 = pbVar22 + 0x10;
  }
  lVar19 = 0;
  lVar26 = 0;
  lVar23 = 0;
  lVar17 = 0;
  iStack_235c = 0;
  fStack_23a0 = 0.0;
  if (uStack_2344 == 1) {
    fStack_23a0 = 0.5;
  }
  uStack_23b8 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  lStack_2398 = uStack_23b8 * 0x78;
  pbStack_23b0 = param_2;
  lStack_2368 = param_1;
  for (; lVar4 = lStack_2368, lStack_2398 != lVar19; lVar19 = lVar19 + 0x78) {
    if (*(int *)(lStack_2368 + 0xb0) <= lVar17) goto LAB_1082f07d0;
    lStack_2350 = *(long *)(lStack_2368 + 0xa8);
    lVar18 = lStack_2350 + lVar19;
    uStack_22e8 = *(undefined8 *)(lVar18 + 0x58);
    lStack_22f0 = *(long *)(lVar18 + 0x50);
    uVar20 = *(undefined8 *)(lVar18 + 0x68);
    fVar36 = *(float *)(lVar18 + 100);
    lStack_2370 = lVar17;
    if ((int)uStack_8c8 < (int)(uStack_8c8._4_4_ >> 1)) {
      uVar30 = *(undefined8 *)(lVar18 + 0x50);
      pfVar24 = (float *)((long)plStack_8d0 + (long)(int)uStack_8c8 * 0x34);
      *(undefined8 *)(pfVar24 + 2) = *(undefined8 *)(lVar18 + 0x58);
      *(undefined8 *)pfVar24 = uVar30;
      *(undefined8 *)(pfVar24 + 4) = uVar20;
      pfVar24[6] = fVar36;
    }
    else {
      if ((int)uStack_8c8 == 0x7fffffff) {
        func_0x00010bdb1a68();
        goto LAB_1082f07d0;
      }
      uStack_2328 = 0x7fffffff;
      lStack_2330 = 0x34;
      plVar13 = &lStack_2330;
      uVar16 = (ulong)((int)uStack_8c8 + 1);
      FUN_10840fe24(0x3ff8000000000000,plVar13,uVar16);
      lVar17 = lStack_22f0;
      pfVar24 = (float *)((long)plVar13 + (long)(int)uStack_8c8 * 0x34);
      *(undefined8 *)(pfVar24 + 2) = uStack_22e8;
      *(long *)pfVar24 = lVar17;
      *(undefined8 *)(pfVar24 + 4) = uVar20;
      pfVar24[6] = fVar36;
      if ((int)uStack_8c8 != 0) {
        _memcpy(plVar13,plStack_8d0,(long)(int)uStack_8c8 * 0x34);
      }
      if ((uStack_8c8 & 0x100000000) != 0) {
        _free(plStack_8d0);
      }
      func_0x0001082f14ac(uVar16 / 0x34);
      uStack_8c8 = CONCAT44(extraout_w8_00 << 1,(int)uStack_8c8) | 0x100000000;
      plStack_8d0 = plVar13;
    }
    pbVar12 = pbStack_c0;
    uStack_8c8 = CONCAT44(uStack_8c8._4_4_,(int)uStack_8c8 + 1);
    lVar17 = lStack_2350 + lVar19;
    fVar36 = *(float *)(lVar17 + 0x60) * 0.5;
    if (((fVar36 == 0.0) || (fVar27 = fVar36, *(int *)(lVar4 + 0xcc) != 2)) &&
       (fVar27 = 0.5 / *(float *)(lVar17 + 0x74), fVar27 <= fVar36)) {
      fVar27 = fVar36;
    }
    fVar36 = 0.0;
    if (uStack_2344 != 0) {
      fVar36 = fVar27;
    }
    if ((((int)uStack_b8 <= lVar23) || ((int)uStack_b8 <= (int)lVar23 + 1)) ||
       ((uStack_b8 & 0xffffffff) <= lVar23 + 2U)) goto LAB_1082f07d0;
    pbVar22 = pbStack_c0 + lVar26;
    fVar32 = pfVar24[6];
    bVar10 = iVar21 != 0;
    bVar2 = 0.0 < fVar32;
    fVar31 = pfVar24[4];
    bVar6 = fVar32 < fVar31;
    bVar25 = bVar6 && (bVar2 && bVar10);
    fVar37 = 0.0;
    if (bVar6 && (bVar2 && bVar10)) {
      lStack_2330 = *(long *)pfVar24;
      uVar15 = (undefined4)((ulong)lStack_2330 >> 0x20);
      uStack_2328 = CONCAT44(uVar15,(undefined4)uStack_2328);
      fVar32 = (fVar31 + (float)lStack_2330) - fVar32;
      fVar31 = pfVar24[2];
      if (fVar32 <= pfVar24[2]) {
        fVar31 = fVar32;
      }
      uStack_2328 = CONCAT44(uVar15,fVar31);
      func_0x0001082f1550(pbVar22 + 0x10,&lStack_2330);
      func_0x0001082f153c(fVar36,pbVar22 + 0x10);
      fVar31 = pfVar24[4];
      fVar32 = pfVar24[6];
      fVar28 = (fVar31 + pfVar24[5]) - fVar32;
    }
    else {
      fVar28 = 0.0;
    }
    bVar7 = true;
    bVar9 = false;
    if (fVar32 != 0.0) {
      bVar7 = false;
      bVar9 = true;
      if (!NAN(fVar32) && !NAN(fVar31)) {
        bVar7 = fVar32 < fVar31;
        bVar9 = false;
      }
    }
    if (bVar7 == bVar9) {
      fVar37 = (fVar31 + pfVar24[5]) - fVar32;
    }
    fVar28 = fVar28 + fVar37;
    fVar37 = *pfVar24;
    if (fVar28 != 0.0) {
      fVar37 = fVar28 + fVar37;
      *pfVar24 = fVar37;
      pfVar24[6] = 0.0;
      fVar32 = 0.0;
    }
    fVar35 = pfVar24[2];
    fVar29 = 0.0;
    fVar34 = 0.0;
    fVar33 = 0.0;
    if (fVar37 < fVar35) {
      fVar34 = fVar31 + pfVar24[5];
      fVar32 = fVar32 + ((fVar35 - fVar37) - fVar34 * (float)(int)((fVar35 - fVar37) / fVar34));
      fVar32 = fVar32 - fVar34 * (float)(int)(fVar32 / fVar34);
      if (fVar32 != 0.0) {
        fVar34 = fVar32;
      }
      fVar33 = fVar34 - fVar31;
      if (fVar34 <= fVar31) {
        fVar33 = 0.0;
      }
    }
    pbVar12 = pbVar12 + lVar26;
    fVar35 = fVar35 - fVar33;
    pfVar24[2] = fVar35;
    bVar7 = fVar35 <= fVar37;
    bVar9 = false;
    if ((!bVar7) && (bVar9 = false, !NAN(fVar33))) {
      bVar9 = fVar33 == 0.0;
    }
    uVar1 = 0;
    if (fVar34 != fVar31) {
      uVar1 = (uint)(byte)(iVar21 != 0 & bVar9);
    }
    uVar16 = (ulong)uVar1;
    lStack_2388 = lVar26;
    if (uVar1 == 1) {
      uStack_2328 = *(undefined8 *)(pfVar24 + 2);
      lStack_2330 = CONCAT44((int)((ulong)uStack_2328 >> 0x20),(float)uStack_2328 - fVar34);
      func_0x0001082f1550(pbVar12 + 0x20,&lStack_2330);
      func_0x0001082f153c(fVar36,pbVar12 + 0x20);
      fVar29 = fVar34 + pfVar24[5];
      fVar32 = pfVar24[2];
      pfVar24[2] = fVar32 - fVar29;
      bVar7 = fVar32 - fVar29 <= *pfVar24 || fVar35 <= fVar37;
      fVar37 = *pfVar24;
      fVar35 = pfVar24[2];
      fVar33 = fVar29;
    }
    bVar9 = true;
    if ((fVar33 == 0.0) && (bVar9 = false, !NAN(fVar28))) {
      bVar9 = fVar28 == 0.0;
    }
    if (fVar37 == fVar35) {
      bVar7 = (bool)((!bVar9 || uStack_2344 == 0) & bVar7);
    }
    if (fVar28 == 0.0) {
      fStack_2374 = pfVar24[6];
    }
    else {
      pfVar24[6] = 0.0;
      fStack_2374 = 0.0;
    }
    lVar26 = lStack_2350 + lVar19;
    fVar32 = pfVar24[4] * *(float *)(lVar26 + 0x70);
    pfVar24[4] = fVar32;
    fVar33 = pfVar24[5] * *(float *)(lVar26 + 0x70);
    pfVar24[5] = fVar33;
    fVar34 = *(float *)(lVar26 + 0x70);
    fVar31 = *(float *)(lVar17 + 0x60) * *(float *)(lVar26 + 0x74);
    bVar9 = false;
    if ((iVar21 == 0) && (bVar9 = false, !NAN(fVar31))) {
      bVar9 = fVar31 < 1.0;
    }
    bVar8 = true;
    if ((!bVar9) && (bVar8 = false, !NAN(fVar31))) {
      bVar8 = fVar31 == 0.0;
    }
    if (bVar8) {
      fVar31 = 1.0;
    }
    if (uStack_2344 == 2) {
      fVar33 = fVar33 - fVar31;
      pfVar24[4] = fVar32 + fVar31;
      pfVar24[5] = fVar33;
    }
    fStack_2354 = 0.0;
    fVar32 = fStack_23a0;
    if ((*(int *)(lStack_2368 + 0xcc) != 2) && (fVar32 = 0.0, *(int *)(lStack_2368 + 0xcc) == 1)) {
      fStack_2354 = 0.5;
      fVar32 = 0.5;
    }
    fStack_2358 = fVar31 * 0.5;
    fStack_2378 = *(float *)(lVar26 + 0x70);
    fStack_237c = *(float *)(lVar26 + 0x74);
    pbStack_2390 = pbVar12;
    fStack_2380 = fVar36;
    if ((fVar33 <= 0.0) && (iVar21 != 0)) {
      if (!bVar6 || (!bVar2 || !bVar10)) {
        fVar28 = 0.0;
      }
      *pfVar24 = fVar37 - fVar28;
      pfVar24[2] = fVar29 + fVar35;
      func_0x0001082f1550(pbVar22 + 0x10,pfVar24);
      fVar36 = fStack_2380;
      func_0x0001082f153c(pbVar22 + 0x10);
      func_0x0001082f13bc(lStack_2350 + lVar19);
      func_0x0001082f149c();
      uVar16 = 0;
      func_0x0001082f142c();
      pfVar24[4] = fVar36;
      bVar7 = true;
      bVar25 = true;
    }
    fVar36 = fStack_2374 * fVar34 + fVar33 * 0.5;
    pbVar11 = &bStack_2331;
    FUN_1082e91c4(pbVar11,iStack_235c,bVar7 ^ 1);
    pbVar12 = &bStack_2331;
    FUN_1082e91c4(pbVar12,pbVar11,bVar25);
    param_3 = uVar16;
    iVar14 = (int)&bStack_2331;
    FUN_1082e91c4();
    iStack_235c = iVar14;
    if ((uStack_2344 == 1) && (*(float *)(lVar17 + 0x60) != 0.0)) {
      fVar36 = fVar36 - fStack_2358;
    }
    fVar37 = fStack_2354 / fStack_2378;
    fVar32 = fVar32 / fStack_237c;
    if (!bVar7) {
      fVar28 = fStack_2354;
      func_0x0001082f13bc(lStack_2350 + lVar19);
      func_0x0001082f149c();
      func_0x0001082f142c();
      pfVar24[9] = fVar28;
      uVar20 = *(undefined8 *)pfVar24;
      *(undefined8 *)(pbVar22 + 8) = *(undefined8 *)(pfVar24 + 2);
      *(undefined8 *)pbVar22 = uVar20;
      func_0x00010816882c(fStack_2380 + fVar37,fVar27 + fVar32,pbVar22);
    }
    if (bVar25 != false) {
      func_0x0001082f1544(pbVar22 + 0x10);
    }
    if ((int)uVar16 != 0) {
      func_0x0001082f1544(pbStack_2390 + 0x20);
    }
    pfVar24[7] = fVar36;
    pfVar24[10] = fStack_2354;
    pfVar24[0xb] = *(float *)(lVar26 + 0x74);
    pfVar24[8] = fVar31;
    *(bool *)((long)pfVar24 + 0x31) = bVar25;
    *(bool *)(pfVar24 + 0xc) = bVar7;
    *(char *)((long)pfVar24 + 0x32) = (char)uVar16;
    lVar17 = lStack_2370 + 1;
    lVar26 = lStack_2388 + 0x30;
    lVar23 = lVar23 + 3;
  }
  if ((iStack_235c != 0) && ((bStack_2331 & 1) != 0)) {
    param_3 = *(ulong *)(*(long *)(*(long *)(lStack_2368 + 0x100) + 0x98) + 0x20);
    pbVar12 = pbStack_23b0;
    FUN_1082fc0f8(&lStack_22f0,pbStack_23b0,param_3);
    lStack_2340 = lStack_22f0;
    if (lStack_22f0 != 0) {
      lVar18 = 0;
      lVar26 = 0;
      lVar17 = 0;
      uVar16 = uStack_23b8 & 0xffffffff;
      lVar23 = 0x28;
      for (lVar19 = 0; uVar16 * 0x34 - lVar19 != 0; lVar19 = lVar19 + 0x34) {
        if ((*(int *)(lVar4 + 0xb0) <= lVar26) || ((int)uStack_8c8 <= lVar26)) goto LAB_1082f07d0;
        if ((*(byte *)((long)plStack_8d0 + lVar19 + 0x30) & 1) == 0) {
          if ((uStack_239c >> 1 & 1) == 0) {
            if ((int)uStack_b8 <= lVar17) goto LAB_1082f07d0;
            func_0x0001082f1520(&lStack_2330,pbStack_c0 + lVar18);
            func_0x0001082f1368();
          }
          else {
            if ((int)uStack_b8 <= lVar17) {
LAB_1082f07d0:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1082f07d4);
              (*pcVar5)();
            }
            pbVar12 = (byte *)&lStack_2340;
            param_3 = *(long *)(lVar4 + 0xa8) + lVar23;
            FUN_1082f0f34(*(undefined4 *)((long)plStack_8d0 + lVar19 + 0x1c),
                          *(undefined4 *)((long)plStack_8d0 + lVar19 + 0x28),
                          *(undefined4 *)((long)plStack_8d0 + lVar19 + 0x24),
                          *(undefined4 *)((long)plStack_8d0 + lVar19 + 0x10),
                          *(undefined4 *)((long)plStack_8d0 + lVar19 + 0x14),
                          *(undefined4 *)((long)plStack_8d0 + lVar19 + 0x20),
                          *(undefined4 *)((long)plStack_8d0 + lVar19 + 0x2c),pbStack_c0 + lVar18,
                          pbVar12,param_3,uStack_23a4);
          }
        }
        if ((int)uStack_8c8 <= lVar26) goto LAB_1082f07d0;
        iVar21 = (int)lVar17;
        if (*(char *)((long)plStack_8d0 + lVar19 + 0x31) == '\x01') {
          if ((uStack_239c >> 1 & 1) == 0) {
            if ((int)uStack_b8 <= iVar21 + 1) goto LAB_1082f07d0;
            func_0x0001082f1520(&lStack_2330,pbStack_c0 + lVar18 + 0x10);
            func_0x0001082f1368();
          }
          else {
            if ((int)uStack_b8 <= iVar21 + 1) goto LAB_1082f07d0;
            func_0x0001082f1448();
            func_0x0001082f13d0(extraout_x9 + 0x10);
          }
        }
        if ((int)uStack_8c8 <= lVar26) goto LAB_1082f07d0;
        if (*(char *)((long)plStack_8d0 + lVar19 + 0x32) == '\x01') {
          if ((uStack_239c >> 1 & 1) == 0) {
            if ((int)uStack_b8 <= iVar21 + 2) goto LAB_1082f07d0;
            func_0x0001082f1520(&lStack_2330,pbStack_c0 + lVar18 + 0x20);
            func_0x0001082f1368();
          }
          else {
            if ((int)uStack_b8 <= iVar21 + 2) goto LAB_1082f07d0;
            func_0x0001082f1448();
            func_0x0001082f13d0(extraout_x9_00 + 0x20);
          }
        }
        lVar17 = lVar17 + 3;
        lVar26 = lVar26 + 1;
        lVar23 = lVar23 + 0x78;
        lVar18 = lVar18 + 0x30;
      }
      *(undefined8 *)(lVar4 + 0xf8) = uStack_22e8;
    }
  }
  func_0x0001082f117c();
  func_0x0001082f141c();
LAB_1082f0780:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  plVar13 = alStack_22d0;
  func_0x0001082f117c();
  func_0x0001082f141c();
  func_0x0001082f1494();
  pcStack_23c8 = FUN_1082f0820;
  puStack_23d0 = &stack0xfffffffffffffff0;
  if ((int)pbVar12 <= (int)((uint)plVar13 ^ 0x7fffffff)) {
    uStack_23d8 = 0x7fffffff;
    uStack_23e0 = 0x78;
    FUN_10840fe24(0x3ff8000000000000,&uStack_23e0,(int)pbVar12 + (uint)plVar13);
    return;
  }
  func_0x00010bdb1a68();
  if ((int)plVar13[1] != 0) {
    _memcpy(pbVar12,*plVar13,(long)(int)plVar13[1] * 0x78);
  }
  if ((*(byte *)((long)plVar13 + 0xc) & 1) != 0) {
    _free(*plVar13);
  }
  func_0x0001082f14ac(param_3 / 0x78);
  *plVar13 = (long)pbVar12;
  *(uint *)((long)plVar13 + 0xc) = extraout_w8_01 << 1 | 1;
  return;
}



/* Entry: 1082f0820; end: 1082f0867;  */

void FUN_1082f0820(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int extraout_w8;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((int)((uint)param_1 ^ 0x7fffffff) < (int)param_2) {
    func_0x00010bdb1a68();
    if (*(int *)(param_1 + 1) != 0) {
      _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x78);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    func_0x0001082f14ac(param_3 / 0x78);
    *param_1 = param_2;
    *(uint *)((long)param_1 + 0xc) = extraout_w8 << 1 | 1;
    return;
  }
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x78;
  FUN_10840fe24(0x3ff8000000000000,&uStack_20,(int)param_2 + (uint)param_1);
  return;
}



/* Entry: 1082f0868; end: 1082f08d3;  */

void FUN_1082f0868(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int extraout_w8;
  
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x78);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  func_0x0001082f14ac(param_3 / 0x78);
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = extraout_w8 << 1 | 1;
  return;
}



/* Entry: 1082f08d4; end: 1082f08ef;  */

void FUN_1082f08d4(void)

{
  func_0x0001082f1400();
  return;
}



/* Entry: 1082f08f0; end: 1082f0903;  */

void FUN_1082f08f0(void)

{
  return;
}


