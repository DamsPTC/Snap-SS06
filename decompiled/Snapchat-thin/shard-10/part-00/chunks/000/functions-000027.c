/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107371ca0; end: 107371ccb;  */

void FUN_107371ca0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *extraout_x8;
  long lVar2;
  undefined4 auStack_178 [2];
  undefined4 uStack_170;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [112];
  
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107379958();
    (*extraout_x8)();
    return;
  }
  func_0x000104bfeb48();
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar2 = *param_2;
  FUN_107371af8(auStack_e0,0x109,*param_4,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8,param_5);
  func_0x00010726e300(auStack_e0,&DAT_10f40aef2,auStack_f8);
  func_0x000107379514();
  auStack_178[0] = 1;
  uStack_170 = 0;
  uStack_108 = *param_1;
  uStack_100 = 3;
  func_0x00010737955c();
  FUN_10743fa9c();
  FUN_107371af8(auStack_178,0x10b,*param_4,param_3);
  func_0x0001073793d0((long)puVar1 - lVar2);
  uStack_100 = 3;
  func_0x00010737955c();
  FUN_10743f9dc();
  func_0x000107262330(auStack_178);
  func_0x000107262330(auStack_e0);
  return;
}



/* Entry: 107371ccc; end: 107371e07;  */

void FUN_107371ccc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 auStack_158 [2];
  undefined4 uStack_150;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [112];
  
  puVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar2 = *param_2;
  FUN_107371af8(auStack_c0,0x109,*param_4,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,param_5);
  func_0x00010726e300(auStack_c0,&DAT_10f40aef2,auStack_d8);
  func_0x000107379514();
  auStack_158[0] = 1;
  uStack_150 = 0;
  uStack_e8 = *param_1;
  uStack_e0 = 3;
  func_0x00010737955c();
  FUN_10743fa9c();
  FUN_107371af8(auStack_158,0x10b,*param_4,param_3);
  func_0x0001073793d0((long)puVar1 - lVar2);
  uStack_e0 = 3;
  func_0x00010737955c();
  FUN_10743f9dc();
  func_0x000107262330(auStack_158);
  func_0x000107262330(auStack_c0);
  return;
}



/* Entry: 107371e08; end: 107371e4f;  */

void FUN_107371e08(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    func_0x00010737907c((&PTR_FUN_1109a6470)[*(uint *)(param_1 + 0x20)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



/* Entry: 107371e50; end: 107371e6b;  */

void FUN_107371e50(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107378e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 107371e6c; end: 107371e9b;  */

void FUN_107371e6c(undefined1 *param_1,undefined1 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107379004();
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 8,param_2 + 8);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107371e9c; end: 107371eeb;  */

void FUN_107371e9c(long param_1)

{
  undefined1 uStack_11;
  
  func_0x00010785f1f4();
  uStack_11 = 0;
  func_0x00010724e2c8(param_1 + 0xb50,&uStack_11);
  return;
}



/* Entry: 107371eec; end: 1073723df;  */

long * FUN_107371eec(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 extraout_x8;
  long *plVar8;
  int extraout_w10;
  long *plVar9;
  long *unaff_x19;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x20;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  plVar16 = param_1;
  func_0x000107378e90();
  uStack_68 = extraout_x8;
  FUN_107331ae4();
  uVar5 = (long)plVar16 + -2 < 0;
  uVar6 = plVar16 == (long *)0x2;
  if (1 < (long)plVar16) {
    lVar10 = *param_1;
    FUN_1073318c4(&uStack_80,1);
    puVar2 = puStack_70;
    puStack_70[1] = 0;
    puStack_70[2] = 0;
    *puStack_70 = &PTR_FUN_1109a3a60;
    plVar12 = puStack_70 + 3;
    puStack_70[4] = 0;
    *plVar12 = 0;
    puStack_70[6] = 0;
    puStack_70[5] = 0;
    *(undefined4 *)(puStack_70 + 7) = *(undefined4 *)(lVar10 + 0x20);
    FUN_1073313fc(plVar12,*(undefined8 *)(lVar10 + 8));
    plVar16 = (long *)(lVar10 + 0x10);
    plVar7 = puVar2 + 5;
LAB_107371f84:
    puVar3 = puStack_70;
    plVar16 = (long *)*plVar16;
    if (plVar16 != (long *)0x0) {
      plVar9 = plVar16 + 2;
      func_0x000104c2fe38();
      plVar11 = (long *)puVar2[4];
      plVar14 = plVar9;
      if (plVar11 != (long *)0x0) {
        uVar15 = (long)plVar11 - 1;
        if (((ulong)plVar11 & uVar15) == 0) {
          unaff_x20 = (long *)(uVar15 & (ulong)plVar9);
          uVar6 = true;
          uVar5 = false;
        }
        else {
          uVar5 = (long)plVar9 - (long)plVar11 < 0;
          uVar6 = plVar9 == plVar11;
          unaff_x20 = plVar9;
          if (plVar11 <= plVar9) {
            uVar1 = 0;
            if (plVar11 != (long *)0x0) {
              uVar1 = (ulong)plVar9 / (ulong)plVar11;
            }
            unaff_x20 = (long *)((long)plVar9 - uVar1 * (long)plVar11);
          }
        }
        plVar13 = *(long **)(*plVar12 + (long)unaff_x20 * 8);
        if (plVar13 != (long *)0x0) {
          do {
            while( true ) {
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) goto LAB_107372024;
              plVar8 = (long *)plVar13[1];
              uVar5 = (long)plVar8 - (long)plVar9 < 0;
              uVar6 = plVar8 == plVar9;
              if (!(bool)uVar6) break;
              plVar14 = plVar13 + 2;
              func_0x000104c32db4(plVar14,plVar16 + 2);
              if (((ulong)plVar14 & 1) != 0) goto LAB_107371f84;
            }
            if (((ulong)plVar11 & uVar15) == 0) {
              plVar8 = (long *)((ulong)plVar8 & uVar15);
            }
            else if (plVar11 <= plVar8) {
              uVar1 = 0;
              if (plVar11 != (long *)0x0) {
                uVar1 = (ulong)plVar8 / (ulong)plVar11;
              }
              plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar11);
            }
            uVar5 = (long)plVar8 - (long)unaff_x20 < 0;
            uVar6 = plVar8 == unaff_x20;
          } while ((bool)uVar6);
        }
      }
LAB_107372024:
      func_0x0001073790fc();
      uStack_90 = 1;
      *plVar14 = 0;
      plVar14[1] = (long)plVar9;
      plStack_a0 = plVar14;
      plStack_98 = plVar7;
      func_0x000104c2fe00(plVar14 + 2,plVar16 + 2);
      lVar10 = plVar16[10];
      lVar17 = plVar16[9];
      plVar14[10] = plVar16[10];
      plVar14[9] = lVar17;
      uVar4 = uVar5;
      if (lVar10 != 0) {
        do {
          func_0x000107378f58();
        } while (extraout_w10 != 0);
      }
      func_0x00010737912c(puVar2[6]);
      if (plVar11 == (long *)0x0) {
LAB_107372078:
        func_0x000107378e10((long)plVar11 << 1);
        FUN_1073313fc(plVar12);
        plVar11 = (long *)puVar2[4];
        if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
          uVar6 = 1;
          uVar5 = false;
          unaff_x20 = (long *)((long)plVar11 - 1U & (ulong)plVar9);
        }
        else {
          uVar5 = (long)plVar9 - (long)plVar11 < 0;
          uVar6 = plVar9 == plVar11;
          unaff_x20 = plVar9;
          if (plVar11 <= plVar9) {
            uVar15 = 0;
            if (plVar11 != (long *)0x0) {
              uVar15 = (ulong)plVar9 / (ulong)plVar11;
            }
            unaff_x20 = (long *)((long)plVar9 - uVar15 * (long)plVar11);
          }
        }
      }
      else {
        func_0x000107379114();
        uVar5 = false;
        if ((bool)uVar4) goto LAB_107372078;
      }
      lVar10 = *plVar12;
      if (*(long *)(lVar10 + (long)unaff_x20 * 8) == 0) {
        *plStack_a0 = *plVar7;
        *plVar7 = (long)plStack_a0;
        *(long **)(lVar10 + (long)unaff_x20 * 8) = plVar7;
        if (*plStack_a0 != 0) {
          plVar9 = *(long **)(*plStack_a0 + 8);
          if (((ulong)plVar11 & (long)plVar11 - 1U) == 0) {
            plVar9 = (long *)((ulong)plVar9 & (long)plVar11 - 1U);
            uVar6 = true;
            uVar5 = false;
          }
          else {
            uVar5 = (long)plVar9 - (long)plVar11 < 0;
            uVar6 = plVar9 == plVar11;
            if (plVar11 <= plVar9) {
              uVar15 = 0;
              if (plVar11 != (long *)0x0) {
                uVar15 = (ulong)plVar9 / (ulong)plVar11;
              }
              plVar9 = (long *)((long)plVar9 - uVar15 * (long)plVar11);
            }
          }
          *(long **)(lVar10 + (long)plVar9 * 8) = plStack_a0;
        }
      }
      else {
        func_0x0001073795e4();
      }
      plStack_a0 = (long *)0x0;
      puVar2[6] = puVar2[6] + 1;
      func_0x00010737958c();
      goto LAB_107371f84;
    }
    *(undefined4 *)(puVar2 + 8) = 0;
    puStack_70 = (undefined8 *)0x0;
    unaff_x20 = puVar3 + 3;
    FUN_107331958(&uStack_80);
    uStack_80 = 0;
    uStack_78 = 0;
    plStack_98 = (long *)param_1[1];
    plStack_a0 = (long *)*param_1;
    *param_1 = (long)unaff_x20;
    param_1[1] = (long)puVar3;
    FUN_107331934(&plStack_a0);
    FUN_107331934(&uStack_80);
  }
  param_1 = (long *)*param_1;
  plVar16 = param_2;
  func_0x000104c2fe38();
  plVar12 = (long *)param_1[1];
  plVar7 = plVar16;
  if (plVar12 != (long *)0x0) {
    uVar15 = (long)plVar12 - 1;
    if (((ulong)plVar12 & uVar15) == 0) {
      unaff_x20 = (long *)(uVar15 & (ulong)plVar16);
      uVar6 = true;
      uVar5 = false;
    }
    else {
      uVar5 = (long)plVar16 - (long)plVar12 < 0;
      uVar6 = plVar16 == plVar12;
      unaff_x20 = plVar16;
      if (plVar12 <= plVar16) {
        uVar1 = 0;
        if (plVar12 != (long *)0x0) {
          uVar1 = (ulong)plVar16 / (ulong)plVar12;
        }
        unaff_x20 = (long *)((long)plVar16 - uVar1 * (long)plVar12);
      }
    }
    plVar14 = *(long **)(*param_1 + (long)unaff_x20 * 8);
    plVar9 = plVar16;
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          plVar7 = plVar9;
          if (plVar14 == (long *)0x0) goto LAB_10737221c;
          plVar11 = (long *)plVar14[1];
          uVar5 = (long)plVar11 - (long)plVar16 < 0;
          uVar6 = plVar11 == plVar16;
          if (!(bool)uVar6) break;
          plVar9 = plVar14 + 2;
          func_0x000104c32db4(plVar9,param_2);
          if (((ulong)plVar9 & 1) != 0) {
            func_0x000107378dfc(uStack_68);
            if ((bool)uVar6) {
              func_0x000107345010(plVar14 + 9,param_3);
              func_0x000107331610();
              return unaff_x19;
            }
            goto LAB_107372394;
          }
        }
        if (((ulong)plVar12 & uVar15) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar15);
        }
        else if (plVar12 <= plVar11) {
          uVar1 = 0;
          if (plVar12 != (long *)0x0) {
            uVar1 = (ulong)plVar11 / (ulong)plVar12;
          }
          plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar12);
        }
        uVar5 = (long)plVar11 - (long)unaff_x20 < 0;
        uVar6 = plVar11 == unaff_x20;
      } while ((bool)uVar6);
    }
  }
LAB_10737221c:
  plVar14 = param_1 + 2;
  func_0x0001073790fc();
  uStack_90 = 1;
  plVar9 = plVar7 + 2;
  *plVar7 = 0;
  plVar7[1] = (long)plVar16;
  plStack_a0 = plVar7;
  plStack_98 = plVar14;
  func_0x000104c2fe00(plVar9,param_2);
  lVar10 = *param_3;
  plVar7[10] = param_3[1];
  plVar7[9] = lVar10;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x00010737912c(param_1[3]);
  if ((plVar12 == (long *)0x0) || (func_0x000107379114(), (bool)uVar5)) {
    func_0x000107378e10((long)plVar12 << 1);
    plVar9 = param_1;
    FUN_1073313fc();
    plVar12 = (long *)param_1[1];
    if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
      uVar6 = 1;
      unaff_x20 = (long *)((long)plVar12 - 1U & (ulong)plVar16);
    }
    else {
      uVar6 = plVar16 == plVar12;
      unaff_x20 = plVar16;
      if (plVar12 <= plVar16) {
        uVar15 = 0;
        if (plVar12 != (long *)0x0) {
          uVar15 = (ulong)plVar16 / (ulong)plVar12;
        }
        unaff_x20 = (long *)((long)plVar16 - uVar15 * (long)plVar12);
      }
    }
  }
  lVar10 = *param_1;
  if (*(long *)(lVar10 + (long)unaff_x20 * 8) == 0) {
    *plStack_a0 = *plVar14;
    *plVar14 = (long)plStack_a0;
    *(long **)(lVar10 + (long)unaff_x20 * 8) = plVar14;
    if (*plStack_a0 != 0) {
      plVar16 = *(long **)(*plStack_a0 + 8);
      if (((ulong)plVar12 & (long)plVar12 - 1U) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (long)plVar12 - 1U);
        uVar6 = true;
      }
      else {
        uVar6 = plVar16 == plVar12;
        if (plVar12 <= plVar16) {
          uVar15 = 0;
          if (plVar12 != (long *)0x0) {
            uVar15 = (ulong)plVar16 / (ulong)plVar12;
          }
          plVar16 = (long *)((long)plVar16 - uVar15 * (long)plVar12);
        }
      }
      *(long **)(lVar10 + (long)plVar16 * 8) = plStack_a0;
    }
  }
  else {
    func_0x0001073795e4();
  }
  plStack_a0 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010737958c();
  func_0x000107378dfc(uStack_68);
  if ((bool)uVar6) {
    return plVar9;
  }
LAB_107372394:
  ___stack_chk_fail();
  func_0x00010737958c();
  func_0x000107378f88();
  plVar9[1] = plVar9[1] + 0x50;
  *plVar9 = *plVar9 + 1;
  func_0x000107372780();
  return plVar9;
}



/* Entry: 1073723e0; end: 107372413;  */

long * FUN_1073723e0(long *param_1)

{
  param_1[1] = param_1[1] + 0x50;
  *param_1 = *param_1 + 1;
  func_0x000107372780();
  return param_1;
}



/* Entry: 107372414; end: 1073724e3;  */

long FUN_107372414(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3f800000;
  func_0x000107371ec8();
  lVar4 = 0;
  lStack_70 = param_1;
  lStack_68 = param_2;
  do {
    if (lStack_70 == 0) {
      func_0x000107373850(&uStack_60);
      return lVar4;
    }
    plVar1 = *(long **)(lStack_68 + 0x40);
    for (plVar5 = *(long **)(lStack_68 + 0x38); plVar5 != plVar1; plVar5 = plVar5 + 4) {
      if ((int)plVar5[2] == 0) {
        puVar3 = &uStack_60;
        FUN_1073734f0(puVar3,*plVar5);
        if (((ulong)puVar3 & 1) != 0) {
          plVar2 = (long *)*plVar5;
          (**(code **)(*plVar2 + 0x78))();
          goto LAB_107372498;
        }
      }
      else {
        puVar3 = &uStack_60;
        FUN_1073734f0(puVar3,*plVar5);
        if (((ulong)puVar3 & 1) != 0) {
          plVar2 = *(long **)(*plVar5 + 0x130);
LAB_107372498:
          lVar4 = (long)plVar2 + lVar4;
        }
      }
    }
    FUN_1073723e0(&lStack_70);
  } while( true );
}



/* Entry: 1073724e4; end: 107372503;  */

void FUN_1073724e4(void)

{
  func_0x000107379694();
  FUN_107372504();
  return;
}



/* Entry: 107372504; end: 10737258f;  */

void FUN_107372504(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad3e8 & 1) == 0) {
    iVar3 = 0x131ad3e8;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_107372590(0x1131ad3d8);
      ___cxa_guard_release(0x1131ad3e8);
    }
  }
  lVar2 = lRam00000001131ad3e0;
  uVar1 = uRam00000001131ad3d8;
  param_1[1] = lRam00000001131ad3e0;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107372590; end: 1073725ab;  */

void FUN_107372590(void)

{
  undefined1 uStack_11;
  
  FUN_1073725ac(&uStack_11);
  return;
}



/* Entry: 1073725ac; end: 10737261f;  */

void FUN_1073725ac(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uStack_30;
  
  func_0x000107378e90();
  func_0x0001073799a8();
  FUN_107372620();
  *(undefined8 *)(uStack_30 + 0x10) = 0;
  func_0x00010737994c();
  *(undefined8 *)(extraout_x8_00 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  *(undefined4 *)(extraout_x8_00 + 0x38) = 0x3f800000;
  func_0x000107378ef8();
  FUN_107372770();
  func_0x000107378dfc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107379984();
  FUN_107372640();
  func_0x000107379920();
  return;
}



/* Entry: 107372620; end: 10737263f;  */

void FUN_107372620(void)

{
  func_0x000107379984();
  FUN_107372640();
  func_0x000107379920();
  return;
}



/* Entry: 107372640; end: 10737266b;  */

void FUN_107372640(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a7300;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10737266c; end: 10737266f;  */

void FUN_10737266c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7300;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107372670; end: 107372683;  */

void FUN_107372670(void)

{
  func_0x000107372690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107372684; end: 10737269b;  */

undefined8 FUN_107372684(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010737999c(param_1 + 0x18);
  func_0x0001073726c0();
  func_0x000107379580();
  FUN_107372734();
  return unaff_x19;
}



/* Entry: 10737269c; end: 107372733;  */

undefined8 FUN_10737269c(void)

{
  undefined8 unaff_x19;
  
  func_0x00010737999c();
  func_0x0001073726c0();
  func_0x000107379580();
  FUN_107372734();
  return unaff_x19;
}



/* Entry: 107372734; end: 10737274b;  */

void FUN_107372734(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10737274c; end: 10737276f;  */

void FUN_10737274c(long param_1)

{
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107372770; end: 1073727b7;  */

void FUN_107372770(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073727b8; end: 1073727df;  */

void FUN_1073727b8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  FUN_1073727e0(param_1,&uStack_20);
  return;
}



/* Entry: 1073727e0; end: 1073727eb;  */

void FUN_1073727e0(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_1,*param_2,param_2[1]);
  return;
}



/* Entry: 1073727ec; end: 1073729a3;  */

void FUN_1073727ec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  long *unaff_x19;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  ulong *puStack_58;
  
  func_0x0001073793c4();
  puVar5 = (ulong *)(param_1 + 0x10);
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 < *puVar5) {
    func_0x0001073797a8();
    lVar8 = uVar7 + 0x70;
    unaff_x19[1] = lVar8;
  }
  else {
    lVar8 = uVar7 - *unaff_x19;
    uVar7 = lVar8 / 0x70 + 1;
    if (0x249249249249249 < uVar7) {
      FUN_107372a00();
LAB_107372980:
      func_0x000104bd35f4();
      FUN_107372a0c(&lStack_78);
      __Unwind_Resume();
      func_0x000107379010();
      func_0x000104c2fe00();
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar8 + 0x38);
      func_0x0001072c8ed8(param_1 + 0x40,lVar8 + 0x40);
      func_0x000107261fa8(unaff_x19 + 10,lVar8 + 0x50);
      return;
    }
    uVar3 = (long)(*puVar5 - *unaff_x19) / 0x70;
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
      uVar6 = uVar7;
    }
    if (0x124924924924923 < uVar3) {
      uVar6 = 0x249249249249249;
    }
    puStack_58 = puVar5;
    if (uVar6 == 0) {
      lVar12 = 0;
    }
    else {
      if (0x249249249249249 < uVar6) goto LAB_107372980;
      lVar12 = uVar6 * 0x70;
      __Znwm();
    }
    lVar8 = lVar12 + lVar8;
    lVar10 = lVar12 + uVar6 * 0x70;
    lStack_78 = lVar12;
    lStack_70 = lVar8;
    lStack_68 = lVar8;
    lStack_60 = lVar10;
    func_0x0001073797a8();
    lVar9 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar11 = lVar8 + ((lVar2 - lVar9) / -0x70) * 0x70;
    for (lVar12 = 0; lVar1 = lVar9 + lVar12, lVar1 != lVar2; lVar12 = lVar12 + 0x70) {
      lVar4 = lVar11 + lVar12;
      func_0x000104c318bc(lVar4,lVar1);
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
      uVar13 = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(lVar4 + 0x40) = uVar13;
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(undefined8 *)(lVar1 + 0x48) = 0;
      FUN_10732f758(lVar4 + 0x50,lVar1 + 0x50);
    }
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x70) {
      func_0x000107372a54(lVar9);
    }
    lVar8 = lVar8 + 0x70;
    lStack_78 = *unaff_x19;
    *unaff_x19 = lVar11;
    unaff_x19[1] = lVar8;
    lStack_60 = unaff_x19[2];
    unaff_x19[2] = lVar10;
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    FUN_107372a0c(&lStack_78);
  }
  unaff_x19[1] = lVar8;
  return;
}



/* Entry: 1073729a4; end: 1073729ff;  */

void FUN_1073729a4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107379010();
  func_0x000104c2fe00();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001072c8ed8(param_1 + 0x40,unaff_x20 + 0x40);
  func_0x000107261fa8(unaff_x19 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 107372a00; end: 107372a0b;  */

long * FUN_107372a00(long *param_1)

{
  long lVar1;
  
  func_0x00010737918c();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x70;
    func_0x000107372a54();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107372a0c; end: 107372aa3;  */

long * FUN_107372a0c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x70;
    func_0x000107372a54();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107372aa4; end: 107372ab7;  */

void FUN_107372aa4(long param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  
  lVar2 = (long)((float)param_2 / *(float *)(param_1 + 0x20));
  func_0x000100168540();
  if ((!(bool)in_ZR) && (func_0x000107274d1c(), !(bool)in_ZR)) {
    func_0x000107274b2c();
  }
  func_0x0001001685c8();
  if ((bool)in_CY && !(bool)in_ZR) {
code_r0x000107270c00:
    func_0x0001001685d4();
    if (lVar2 == 0) {
      func_0x000107270cf0(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      func_0x0001001685e0();
      func_0x000107270d08();
      func_0x0001001686b8();
      func_0x000107270cf0();
      func_0x0001001686dc();
      uVar3 = extraout_x9;
      while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
        func_0x0001001686ec();
        uVar3 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x0001072742e0();
        func_0x0001072742f4();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x000107274bf0();
          lVar2 = extraout_x8_00;
          plVar4 = extraout_x12;
          uVar3 = extraout_x11;
          if ((bool)uVar1) {
            uVar5 = extraout_x13 & extraout_x10;
          }
          else {
            uVar5 = extraout_x13;
            if (unaff_x19 <= extraout_x13) {
              func_0x000107274bd8();
              lVar2 = extraout_x8_01;
              uVar3 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              uVar5 = extraout_x13_00;
            }
          }
          uVar1 = uVar5 == uVar3;
          if (!(bool)uVar1) {
            if (*(long *)(lVar2 + uVar5 * 8) == 0) {
              func_0x000107274bcc();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x00010727411c();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)in_CY) {
    func_0x00010727419c();
    if (((bool)in_CY) && (func_0x000107274be4(), extraout_x8 == 0)) {
      func_0x0001072740fc();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010727462c();
    if (!(bool)in_CY) goto code_r0x000107270c00;
  }
  return;
}



/* Entry: 107372ab8; end: 107372b9f;  */

void FUN_107372ab8(void)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x000107379010();
  func_0x0001072c5cdc();
  plVar2 = (long *)*unaff_x19;
  uVar4 = plVar2[1];
  if (uVar4 < (ulong)plVar2[2]) {
    func_0x0001072c6058(uVar4);
    lVar3 = uVar4 + 0x70;
    plVar2[1] = lVar3;
  }
  else {
    plVar1 = plVar2;
    func_0x0001072c7268(plVar2,(long)(uVar4 - *plVar2) / 0x70 + 1);
    func_0x0001072c6e84(auStack_58,plVar1,(plVar2[1] - *plVar2) / 0x70,plVar2 + 2);
    func_0x0001072c6058(lStack_48);
    lStack_48 = lStack_48 + 0x70;
    func_0x0001072c6e50(plVar2,auStack_58);
    lVar3 = plVar2[1];
    func_0x0001072c7020(auStack_58);
  }
  plVar2[1] = lVar3;
  return;
}



/* Entry: 107372ba0; end: 107372bbb;  */

bool FUN_107372ba0(long param_1)

{
  FUN_107372bbc();
  return param_1 != 0;
}



/* Entry: 107372bbc; end: 107372c07;  */

long FUN_107372bbc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x19;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined1 auStack_90 [16];
  
  func_0x000107379004();
  func_0x00010737951c();
  func_0x00010729e618();
  lVar6 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ param_1 >> 7;
  bVar3 = (byte)param_1;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      func_0x000104c32d9c(auStack_90,uVar1 + uVar9 * 0x78);
      if (iVar4 != 0) {
        return *unaff_x19 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 107372c08; end: 107372c93;  */

void FUN_107372c08(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int extraout_w10;
  
  if ((bRam00000001131ad400 & 1) == 0) {
    iVar3 = 0x131ad400;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      FUN_107372c94(0x1131ad3f0);
      ___cxa_guard_release(0x1131ad400);
    }
  }
  lVar2 = lRam00000001131ad3f8;
  uVar1 = uRam00000001131ad3f0;
  param_1[1] = lRam00000001131ad3f8;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107372c94; end: 107372caf;  */

void FUN_107372c94(void)

{
  undefined1 uStack_11;
  
  FUN_107372cb0(&uStack_11);
  return;
}



/* Entry: 107372cb0; end: 107372d23;  */

void FUN_107372cb0(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uStack_30;
  
  func_0x000107378e90();
  func_0x0001073799a8();
  FUN_107372d24();
  *(undefined8 *)(uStack_30 + 0x10) = 0;
  func_0x00010737994c();
  *(undefined8 *)(extraout_x8_00 + 0x40) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x20) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x28) = 0;
  *(undefined4 *)(extraout_x8_00 + 0x38) = 0x3f800000;
  func_0x000107378ef8();
  FUN_107372e74();
  func_0x000107378dfc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107379984();
  FUN_107372d44();
  func_0x000107379920();
  return;
}



/* Entry: 107372d24; end: 107372d43;  */

void FUN_107372d24(void)

{
  func_0x000107379984();
  FUN_107372d44();
  func_0x000107379920();
  return;
}



/* Entry: 107372d44; end: 107372d6f;  */

void FUN_107372d44(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a7350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107372d70; end: 107372d73;  */

void FUN_107372d70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107372d74; end: 107372d87;  */

void FUN_107372d74(void)

{
  func_0x000107372d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107372d88; end: 107372d9f;  */

undefined8 FUN_107372d88(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010737999c(param_1 + 0x18);
  func_0x000107372dc4();
  func_0x000107379580();
  FUN_107372e38();
  return unaff_x19;
}



/* Entry: 107372da0; end: 107372e37;  */

undefined8 FUN_107372da0(void)

{
  undefined8 unaff_x19;
  
  func_0x00010737999c();
  func_0x000107372dc4();
  func_0x000107379580();
  FUN_107372e38();
  return unaff_x19;
}



/* Entry: 107372e38; end: 107372e4f;  */

void FUN_107372e38(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107372e50; end: 107372e73;  */

void FUN_107372e50(long param_1)

{
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107372e74; end: 107372e83;  */

void FUN_107372e74(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107372e84; end: 107372eb3;  */

void FUN_107372e84(void)

{
  undefined8 *unaff_x20;
  
  func_0x000107379004();
  func_0x0001073730cc();
  FUN_107373114(*unaff_x20);
  return;
}



/* Entry: 107372eb4; end: 107372eef;  */

long FUN_107372eb4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107372ef0; end: 107372f13;  */

void FUN_107372ef0(void)

{
  func_0x000107378f68();
  FUN_107372e50();
  return;
}



/* Entry: 107372f14; end: 107373053;  */

void FUN_107372f14(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x000107379438();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x000107378e4c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107373054(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_107373054(param_1,lVar3);
    func_0x000107379604();
    plVar6 = extraout_x9;
    while (param_2 != plVar6) {
      func_0x000107379634();
      plVar6 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x000107379178();
      func_0x000107379164();
      lVar3 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar5 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar6, plVar6 = (long *)*plVar8, plVar6 != (long *)0x0) {
        plVar7 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar6;
            func_0x000107378ebc();
            lVar3 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar5 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar6;
  *plVar6 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107373054; end: 10737306b;  */

void FUN_107373054(long *param_1,long param_2)

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



/* Entry: 10737306c; end: 107373113;  */

long * FUN_10737306c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107372df4(lVar1 + 0x10);
    }
    func_0x000107379224();
  }
  return param_1;
}



/* Entry: 107373114; end: 10737314b;  */

void FUN_107373114(void)

{
  func_0x000107298a08();
  return;
}



/* Entry: 10737314c; end: 1073731b7;  */

undefined8 * FUN_10737314c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 auStack_40 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107378e90();
  uStack_28 = extraout_x8;
  func_0x0001073799a8();
  func_0x0001072cdb30();
  FUN_1073731b8(puStack_30,param_2);
  func_0x000107378ef8();
  func_0x0001072cdbac();
  func_0x000107378dfc(uStack_28);
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x0001072cdbac();
  func_0x000107378f88();
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_11099be48;
  puVar1[1] = 0;
  FUN_1073731fc(puVar1 + 3);
  return puVar1;
}



/* Entry: 1073731b8; end: 1073731fb;  */

undefined8 * FUN_1073731b8(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11099be48;
  param_1[1] = 0;
  FUN_1073731fc(param_1 + 3);
  return param_1;
}



/* Entry: 1073731fc; end: 107373213;  */

void FUN_1073731fc(long param_1)

{
  func_0x000107298994();
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 107373214; end: 10737324f;  */

long FUN_107373214(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 107373250; end: 10737338f;  */

void FUN_107373250(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x000107379438();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x000107378e4c();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107373390(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    FUN_107373390(param_1,lVar3);
    func_0x000107379604();
    plVar6 = extraout_x9;
    while (param_2 != plVar6) {
      func_0x000107379634();
      plVar6 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x000107379178();
      func_0x000107379164();
      lVar3 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar5 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar6, plVar6 = (long *)*plVar8, plVar6 != (long *)0x0) {
        plVar7 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar6;
            func_0x000107378ebc();
            lVar3 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar5 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar6;
  *plVar6 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107373390; end: 1073733a7;  */

void FUN_107373390(long *param_1,long param_2)

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



/* Entry: 1073733a8; end: 1073733c7;  */

void FUN_1073733a8(void)

{
  func_0x000107379694();
  FUN_1073733c8();
  return;
}



/* Entry: 1073733c8; end: 10737340b;  */

void FUN_1073733c8(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10737340c; end: 10737344b;  */

long * FUN_10737340c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001073726f0(lVar1 + 0x10);
    }
    func_0x000107379224();
  }
  return param_1;
}



/* Entry: 10737344c; end: 1073734a7;  */

void FUN_10737344c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  FUN_107372eb4();
  if ((puVar1 == (undefined8 *)0x1) && (lRam00000001138369a8 != 0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010737985c();
    func_0x0001000df524(&uStack_30);
  }
  FUN_107372e50(param_1);
  return;
}



/* Entry: 1073734a8; end: 1073734ef;  */

long * FUN_1073734a8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x70;
      func_0x000107372a54();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1073734f0; end: 10737380f;  */

undefined8 FUN_1073734f0(undefined8 param_1,long *param_2,long *****param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long ******pppppplVar6;
  long lVar7;
  ulong extraout_x8;
  long ******extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long *plVar8;
  long ******extraout_x9;
  long ******extraout_x9_00;
  ulong uVar9;
  ulong extraout_x9_01;
  undefined8 *puVar10;
  long ******extraout_x9_02;
  long ******extraout_x9_03;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long *plVar13;
  long *plVar14;
  long *extraout_x10;
  ulong extraout_x10_00;
  long ******pppppplVar15;
  long ******extraout_x11;
  long ******pppppplVar16;
  long ******pppppplVar17;
  long ******unaff_x25;
  long *****ppppplStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pppppplVar11 = &ppppplStack_68;
  ppppplStack_68 = param_3;
  func_0x0001000df370(pppppplVar11,8);
  pppppplVar17 = (long ******)param_2[1];
  if (pppppplVar17 != (long ******)0x0) {
    func_0x0001073794b0();
    if ((bool)in_ZR) {
      unaff_x25 = (long ******)(extraout_x8 & (ulong)pppppplVar11);
      in_ZR = true;
    }
    else {
      in_NG = (long)pppppplVar11 - (long)pppppplVar17 < 0;
      in_ZR = pppppplVar11 == pppppplVar17;
      unaff_x25 = pppppplVar11;
      if (pppppplVar17 <= pppppplVar11) {
        uVar1 = 0;
        if (pppppplVar17 != (long ******)0x0) {
          uVar1 = (ulong)pppppplVar11 / (ulong)pppppplVar17;
        }
        unaff_x25 = (long ******)((long)pppppplVar11 - uVar1 * (long)pppppplVar17);
      }
    }
    plVar8 = *(long **)(*param_2 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1073735b0;
          pppppplVar12 = (long ******)plVar8[1];
          if (pppppplVar12 != pppppplVar11) break;
          in_NG = plVar8[2] - (long)param_3 < 0;
          in_ZR = false;
          if ((long *****)plVar8[2] == param_3) {
            return 0;
          }
        }
        if (((ulong)pppppplVar17 & extraout_x8) == 0) {
          pppppplVar12 = (long ******)((ulong)pppppplVar12 & extraout_x8);
        }
        else if (pppppplVar17 <= pppppplVar12) {
          uVar1 = 0;
          if (pppppplVar17 != (long ******)0x0) {
            uVar1 = (ulong)pppppplVar12 / (ulong)pppppplVar17;
          }
          pppppplVar12 = (long ******)((long)pppppplVar12 - uVar1 * (long)pppppplVar17);
        }
        in_NG = (long)pppppplVar12 - (long)unaff_x25 < 0;
        in_ZR = pppppplVar12 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_1073735b0:
  plVar8 = param_2 + 2;
  pppppplVar6 = (long ******)0x18;
  __Znwm();
  uStack_58 = 1;
  *pppppplVar6 = (long *****)0x0;
  pppppplVar6[1] = (long *****)pppppplVar11;
  pppppplVar6[2] = param_3;
  pppppplVar12 = pppppplVar6;
  ppppplStack_68 = (long *****)pppppplVar6;
  plStack_60 = plVar8;
  func_0x00010737912c(param_2[3]);
  if ((pppppplVar17 != (long ******)0x0) &&
     (func_0x000107379044(param_1,(int)param_2[4]), !(bool)in_NG)) goto LAB_107373784;
  func_0x000107379640();
  bVar3 = (long ******)0x2 < pppppplVar17;
  bVar4 = pppppplVar17 == (long ******)0x3;
  func_0x000107378e6c();
  pppppplVar16 = extraout_x8_00;
  if (!bVar3 || bVar4) {
    pppppplVar16 = extraout_x9;
  }
  if ((long)pppppplVar16 - 1U == 0) {
    pppppplVar16 = (long ******)0x2;
  }
  else if (((ulong)pppppplVar16 & (long)pppppplVar16 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    pppppplVar17 = (long ******)param_2[1];
    pppppplVar12 = pppppplVar16;
  }
  uVar5 = pppppplVar16 == pppppplVar17;
  if (pppppplVar17 < pppppplVar16) {
LAB_107373630:
    if ((ulong)pppppplVar16 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107373804);
      (*pcVar2)();
    }
    lVar7 = (long)pppppplVar16 << 3;
    __Znwm(lVar7);
    FUN_107373810(param_2,lVar7);
    pppppplVar17 = (long ******)0x0;
    param_2[1] = (long)pppppplVar16;
    lVar7 = *param_2;
    while (uVar5 = pppppplVar16 == pppppplVar17, !(bool)uVar5) {
      func_0x000107379634();
      lVar7 = extraout_x8_01;
      pppppplVar17 = extraout_x9_00;
    }
    plVar13 = (long *)*plVar8;
    pppppplVar17 = pppppplVar16;
    if (plVar13 != (long *)0x0) {
      pppppplVar12 = (long ******)plVar13[1];
      uVar9 = (long)pppppplVar16 - 1;
      uVar1 = 0;
      if (pppppplVar16 != (long ******)0x0) {
        uVar1 = (ulong)pppppplVar12 / (ulong)pppppplVar16;
      }
      pppppplVar15 = pppppplVar12;
      if (pppppplVar16 <= pppppplVar12) {
        pppppplVar15 = (long ******)((long)pppppplVar12 - uVar1 * (long)pppppplVar16);
      }
      uVar5 = ((ulong)pppppplVar16 & uVar9) == 0;
      if ((bool)uVar5) {
        pppppplVar15 = (long ******)((ulong)pppppplVar12 & uVar9);
      }
      *(long **)(lVar7 + (long)pppppplVar15 * 8) = plVar8;
      while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
        pppppplVar12 = (long ******)plVar13[1];
        if (((ulong)pppppplVar16 & uVar9) == 0) {
          pppppplVar12 = (long ******)((ulong)pppppplVar12 & uVar9);
        }
        else if (pppppplVar16 <= pppppplVar12) {
          uVar1 = 0;
          if (pppppplVar16 != (long ******)0x0) {
            uVar1 = (ulong)pppppplVar12 / (ulong)pppppplVar16;
          }
          pppppplVar12 = (long ******)((long)pppppplVar12 - uVar1 * (long)pppppplVar16);
        }
        uVar5 = pppppplVar12 == pppppplVar15;
        if (!(bool)uVar5) {
          if (*(long *)(lVar7 + (long)pppppplVar12 * 8) == 0) {
            *(long **)(lVar7 + (long)pppppplVar12 * 8) = plVar14;
            pppppplVar15 = pppppplVar12;
          }
          else {
            *plVar14 = *plVar13;
            func_0x000107378ebc();
            lVar7 = extraout_x8_02;
            uVar9 = extraout_x9_01;
            plVar13 = extraout_x10;
            pppppplVar15 = extraout_x11;
          }
        }
      }
    }
  }
  else if (pppppplVar16 < pppppplVar17) {
    func_0x000107379658();
    if ((pppppplVar17 < (long ******)0x3) || (((ulong)pppppplVar17 & (long)pppppplVar17 - 1U) != 0))
    {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107378e4c();
    }
    if (pppppplVar16 <= pppppplVar12) {
      pppppplVar16 = pppppplVar12;
    }
    uVar5 = pppppplVar16 == pppppplVar17;
    if (pppppplVar16 < pppppplVar17) {
      if (pppppplVar16 != (long ******)0x0) goto LAB_107373630;
      FUN_107373810(param_2,0);
      param_2[1] = 0;
      pppppplVar17 = (long ******)0x0;
    }
    else {
      pppppplVar17 = (long ******)param_2[1];
    }
  }
  func_0x0001073794b0();
  if ((bool)uVar5) {
    in_ZR = 1;
    unaff_x25 = (long ******)(extraout_x8_03 & (ulong)pppppplVar11);
  }
  else {
    in_ZR = pppppplVar11 == pppppplVar17;
    unaff_x25 = pppppplVar11;
    if (pppppplVar17 <= pppppplVar11) {
      uVar1 = 0;
      if (pppppplVar17 != (long ******)0x0) {
        uVar1 = (ulong)pppppplVar11 / (ulong)pppppplVar17;
      }
      unaff_x25 = (long ******)((long)pppppplVar11 - uVar1 * (long)pppppplVar17);
    }
  }
LAB_107373784:
  lVar7 = *param_2;
  puVar10 = *(undefined8 **)(lVar7 + (long)unaff_x25 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    *pppppplVar6 = (long *****)*plVar8;
    *plVar8 = (long)pppppplVar6;
    *(long **)(lVar7 + (long)unaff_x25 * 8) = plVar8;
    if (*pppppplVar6 != (long *****)0x0) {
      func_0x0001073791a0();
      lVar7 = extraout_x8_04;
      if ((bool)in_ZR) {
        pppppplVar11 = (long ******)((ulong)extraout_x9_02 & extraout_x10_00);
      }
      else {
        pppppplVar11 = extraout_x9_02;
        if (pppppplVar17 <= extraout_x9_02) {
          func_0x000107379900();
          lVar7 = extraout_x8_05;
          pppppplVar11 = extraout_x9_03;
        }
      }
      *(long *******)(lVar7 + (long)pppppplVar11 * 8) = pppppplVar6;
    }
  }
  else {
    *pppppplVar6 = (long *****)*puVar10;
    *puVar10 = pppppplVar6;
  }
  ppppplStack_68 = (long *****)0x0;
  param_2[3] = param_2[3] + 1;
  FUN_107373828(&ppppplStack_68);
  return 1;
}



/* Entry: 107373810; end: 107373827;  */

void FUN_107373810(long *param_1,long param_2)

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



/* Entry: 107373828; end: 107373893;  */

void FUN_107373828(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107379990();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107373894; end: 10737395b;  */

long FUN_107373894(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
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
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
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



/* Entry: 10737395c; end: 1073739fb;  */

void FUN_10737395c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_1;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar2 = param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (uVar7 < param_2) {
LAB_1073739a4:
    if (param_2 == 0) {
      FUN_107373ac4(param_1);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar3 = param_1 + 8;
      FUN_107373adc(lVar3);
      FUN_107373ac4(param_1,lVar3);
      func_0x000107379604();
      uVar2 = extraout_x9;
      while (param_2 != uVar2) {
        func_0x000107379634();
        uVar2 = extraout_x9_00;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        func_0x000107379178();
        func_0x000107379164();
        lVar3 = extraout_x8;
        plVar5 = extraout_x9_01;
        uVar2 = extraout_x10;
        uVar7 = extraout_x11;
        while (plVar4 = plVar5, plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
          uVar6 = plVar5[1];
          if ((param_2 & uVar2) == 0) {
            uVar6 = uVar6 & uVar2;
          }
          else if (param_2 <= uVar6) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar6 / param_2;
            }
            uVar6 = uVar6 - uVar1 * param_2;
          }
          if (uVar6 != uVar7) {
            if (*(long *)(lVar3 + uVar6 * 8) == 0) {
              *(long **)(lVar3 + uVar6 * 8) = plVar4;
              uVar7 = uVar6;
            }
            else {
              *plVar4 = *plVar5;
              func_0x000107378ebc();
              lVar3 = extraout_x8_00;
              plVar5 = extraout_x9_02;
              uVar2 = extraout_x10_00;
              uVar7 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    func_0x000107379658();
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x000107378e4c();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar7) goto LAB_1073739a4;
  }
  return;
}



/* Entry: 1073739fc; end: 107373ac3;  */

void FUN_1073739fc(long param_1,ulong param_2)

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
    FUN_107373ac4(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_107373adc(lVar2);
    FUN_107373ac4(param_1,lVar2);
    func_0x000107379604();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x000107379634();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107379178();
      func_0x000107379164();
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
            func_0x000107378ebc();
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



/* Entry: 107373ac4; end: 107373adb;  */

void FUN_107373ac4(long *param_1,long param_2)

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



/* Entry: 107373adc; end: 107373af7;  */

void FUN_107373adc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107379580();
  FUN_107373b18();
  return;
}



/* Entry: 107373af8; end: 107373b17;  */

void FUN_107373af8(void)

{
  func_0x000107379580();
  FUN_107373b18();
  return;
}



/* Entry: 107373b18; end: 107373b2f;  */

void FUN_107373b18(long *param_1,long param_2)

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



/* Entry: 107373b30; end: 107373b6f;  */

void FUN_107373b30(long param_1,long param_2)

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



/* Entry: 107373b70; end: 107373bcb;  */

void FUN_107373b70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = param_1;
  FUN_107373214();
  if ((puVar1 == (undefined8 *)0x1) && (lRam00000001138369a8 != 0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x00010737985c();
    func_0x0001000df524(&uStack_30);
  }
  FUN_10737274c(param_1);
  return;
}



/* Entry: 107373bcc; end: 107373c37;  */

void FUN_107373bcc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107379970();
  *param_1 = extraout_x8;
  FUN_107373c38(&uStack_40,param_2);
  *(undefined8 *)(unaff_x19 + 0x10) = uStack_38;
  *(undefined8 *)(unaff_x19 + 8) = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_107373d4c(&uStack_40);
  FUN_107332298(unaff_x19 + 0x18,param_3);
  return;
}



/* Entry: 107373c38; end: 107373c57;  */

void FUN_107373c38(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_107373c58(&uStack_11,param_1);
  return;
}



/* Entry: 107373c58; end: 107373cc3;  */

void FUN_107373c58(undefined8 param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar1;
  long lStack_30;
  
  func_0x000107378e90();
  func_0x0001073799a8();
  FUN_107373cc4();
  *(undefined8 *)(lStack_30 + 0x10) = 0;
  func_0x00010737994c();
  uVar1 = *param_2;
  *(undefined8 *)(extraout_x8_00 + 0x20) = param_2[1];
  *(undefined8 *)(extraout_x8_00 + 0x18) = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000107378ef8();
  func_0x000107373d3c();
  func_0x000107378dfc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x000107379984();
  FUN_107373ce4();
  func_0x000107379920();
  return;
}



/* Entry: 107373cc4; end: 107373ce3;  */

void FUN_107373cc4(void)

{
  func_0x000107379984();
  FUN_107373ce4();
  func_0x000107379920();
  return;
}



/* Entry: 107373ce4; end: 107373d0b;  */

void FUN_107373ce4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109a6490;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107373d0c; end: 107373d0f;  */

void FUN_107373d0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a6490;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107373d10; end: 107373d23;  */

void FUN_107373d10(void)

{
  func_0x000107373d30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107373d24; end: 107373d4b;  */

void FUN_107373d24(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar3 = puVar1;
  func_0x0001072c5d20();
  pcVar2 = pcRam00000001138369a8;
  if ((puVar3 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x20);
    uStack_30 = *puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    (*pcVar2)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  func_0x0001072c6dc4(puVar1);
  return;
}



/* Entry: 107373d4c; end: 107373da3;  */

void FUN_107373d4c(long param_1)

{
  func_0x00010737928c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107373da4; end: 107373e43;  */

long FUN_107373da4(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (param_1[3] != 0)) {
    param_2 = param_2 & 0xff;
    uVar6 = (ulong)param_2;
    uVar7 = uVar5 - 1;
    uVar4 = (uint)uVar5;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = (ulong)(uVar4 - 1 & param_2);
    }
    else {
      uVar8 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = param_2 / uVar4;
        }
        uVar8 = (ulong)(param_2 - uVar1 * uVar4);
      }
    }
    plVar3 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar9 = plVar3[1];
        if (uVar9 != uVar6) break;
        if (*(byte *)(plVar3 + 2) == param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar5 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar5 <= uVar9) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar9 / uVar5;
        }
        uVar9 = uVar9 - uVar2 * uVar5;
      }
    } while (uVar9 == uVar8);
  }
  return 0;
}



/* Entry: 107373e44; end: 107373e7f;  */

long FUN_107373e44(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_107373e80();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_107373eb4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 107373e80; end: 107373eb3;  */

void FUN_107373e80(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 107373eb4; end: 107373f5b;  */

long FUN_107373eb4(undefined8 param_1)

{
  long lVar1;
  int extraout_w10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x000107379010();
  FUN_107373f5c();
  FUN_10737401c(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107378f58();
    } while (extraout_w10 != 0);
  }
  puStack_38 = puStack_38 + 2;
  FUN_107373f9c();
  lVar1 = unaff_x19[1];
  FUN_1073740a4(auStack_48);
  return lVar1;
}



/* Entry: 107373f5c; end: 107373f9b;  */

ulong FUN_107373f5c(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_107374010();
  func_0x000107379004();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 107373f9c; end: 10737400f;  */

void FUN_107373f9c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000107379004();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107374010; end: 10737401b;  */

long * FUN_107374010(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010737918c();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107374064();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10737401c; end: 107374087;  */

long * FUN_10737401c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107374064();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 107374088; end: 1073740a3;  */

long * FUN_107374088(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073740d0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073740a4; end: 1073740cf;  */

long * FUN_1073740a4(long *param_1)

{
  FUN_1073740d0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073740d0; end: 1073740d7;  */

void FUN_1073740d0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107379004(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_107330fdc();
  }
  return;
}



/* Entry: 1073740d8; end: 1073741df;  */

void FUN_1073740d8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107379004();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    FUN_107330fdc();
  }
  return;
}



/* Entry: 1073741e0; end: 10737424b;  */

void FUN_1073741e0(void)

{
  long unaff_x22;
  long unaff_x23;
  long lVar1;
  
  func_0x0001073793a0();
  for (lVar1 = 0; unaff_x23 != lVar1; lVar1 = lVar1 + 1) {
    if (-1 < *(char *)(unaff_x22 + lVar1)) {
      func_0x0001073797b4();
      func_0x0001073795ac();
      func_0x0001073790cc();
      FUN_10737424c();
    }
  }
  if (unaff_x23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(unaff_x22 + -8);
    return;
  }
  return;
}



/* Entry: 10737424c; end: 107374293;  */

undefined8 FUN_10737424c(void)

{
  undefined8 unaff_x19;
  
  func_0x000104c318bc();
  func_0x0001073791b0();
  func_0x000107379568();
  FUN_107374434();
  func_0x000107379084();
  return unaff_x19;
}



/* Entry: 107374294; end: 1073742eb;  */

long FUN_107374294(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1073742ec; end: 10737435b;  */

void FUN_1073742ec(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10737442c();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10737435c; end: 1073743ab;  */

long FUN_10737435c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_1073743ac(lVar1,param_1);
    lVar1 = lVar1 + 0x10;
    param_3 = param_3 + 0x10;
  }
  return param_3;
}


