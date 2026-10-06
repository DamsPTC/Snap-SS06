/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10002bd08; end: 10002bd13;  */

void FUN_10002bd08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_mutex_baseC1Ev_110346640)(0x1138221a0);
  return;
}



/* Entry: 10002bd14; end: 10002bd9b;  */

undefined8 FUN_10002bd14(void)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  
  FUN_10002b838(0x1136cb970,&UNK_10f415ffd);
  FUN_10002b838(0x1136cb988,&UNK_10f416021);
  FUN_10002b838(0x1136cb9a0,&UNK_10f416045);
  puVar1 = &UNK_10f41605e;
  func_0x00010002b82c(0x1136cb9b8,&UNK_10f41605e);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 10002bd9c; end: 10002bf67;  */

void FUN_10002bd9c(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010002bd70(0x113726ab8,"",0);
  func_0x00010002bd70(0x113726ad0,&UNK_10f4345d9,0xffffffff);
  func_0x00010002bd70(0x113726ae8,&UNK_10f434603,0xfffffffe);
  func_0x00010002bd70(0x113726b00,&UNK_10f434613,0xfffffffc);
  FUN_10002bf70(auStack_98,0x113726ab8);
  FUN_10002bf70(auStack_80,0x113726ad0);
  FUN_10002bf70(auStack_68,0x113726ae8);
  FUN_10002bf70(auStack_50,0x113726b00);
  lRam0000000113726b18 = 0;
  lRam0000000113726b20 = 0;
  lRam0000000113726b28 = 0;
  uStack_a8 = 0x113726b18;
  uStack_a0 = 0;
  lVar1 = 0x60;
  func_0x000107c60e20();
  lRam0000000113726b28 = lVar1 + 0x60;
  lRam0000000113726b18 = lVar1;
  lRam0000000113726b20 = lVar1;
  for (lVar3 = 0; lVar3 != 0x60; lVar3 = lVar3 + 0x18) {
    FUN_10002bf70();
    lVar1 = lVar1 + 0x18;
  }
  uStack_a0 = 1;
  lRam0000000113726b20 = lVar1;
  FUN_10002bfac(&uStack_a8);
  lVar3 = 0x48;
  do {
    puVar2 = auStack_98 + lVar3;
    func_0x000107c60c34(puVar2);
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x18);
  uRam0000000113726a80 = 0x3fefb9ea92ec689b;
  uRam0000000113726a60 = 0x40554345b1a549d6;
  uRam0000000113726a68 = 0x3fefdcf54976344e;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  FUN_10002bfac(&uStack_a8);
  lVar3 = 0x48;
  do {
    func_0x000107c60c34(auStack_98 + lVar3);
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x18);
  func_0x000107c60bd8(puVar2);
  return;
}



/* Entry: 10002bf68; end: 10002bf6f;  */

void FUN_10002bf68(void)

{
  return;
}



/* Entry: 10002bf70; end: 10002bf9f;  */

void FUN_10002bf70(undefined8 *param_1,long param_2)

{
  func_0x000107c60c2c();
  *param_1 = &PTR_DAT_1109e9df8;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  return;
}



/* Entry: 10002bfa0; end: 10002bfab;  */

void FUN_10002bfa0(void)

{
  return;
}



/* Entry: 10002bfac; end: 10002c017;  */

void FUN_10002bfac(void)

{
  undefined8 *puVar1;
  ulong extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_10002bfa0();
  if ((extraout_x8 & 1) == 0) {
    puVar2 = (undefined8 *)*unaff_x19;
    puVar3 = (undefined8 *)*puVar2;
    if (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)puVar2[1];
      while (puVar1 != puVar3) {
        (**(code **)puVar1[-3])();
        puVar1 = puVar1 + -3;
      }
      puVar2[1] = puVar3;
      func_0x000107c60e14(*(undefined8 *)*unaff_x19);
    }
  }
  return;
}



/* Entry: 10002c018; end: 10002c023;  */

void FUN_10002c018(void)

{
  return;
}



/* Entry: 10002c024; end: 10002c063;  */

void FUN_10002c024(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  func_0x000107c610fc();
  uVar1 = puRam0000000113728ad0;
  puRam0000000113728ad0 = puVar2;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c184710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam0000000113728ad0,PTR_s_setCountLimit__11263ebe0,1000);
  return;
}



/* Entry: 10002c064; end: 10002c06f;  */

void FUN_10002c064(void)

{
  return;
}



/* Entry: 10002c070; end: 10002c0db;  */

void FUN_10002c070(undefined8 *param_1,undefined8 param_2,long param_3)

{
  FUN_10002c064();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  for (param_3 = param_3 << 2; param_3 != 0; param_3 = param_3 + -4) {
    FUN_10002c3e8();
  }
  return;
}



/* Entry: 10002c0dc; end: 10002c3e7;  */

undefined1  [16] FUN_10002c0dc(void)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 auStack_110 [3];
  undefined4 uStack_f4;
  long alStack_f0 [3];
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  undefined4 auStack_90 [2];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  puVar6 = auStack_110;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f4 = 5;
  FUN_10002c070(alStack_f0,&uStack_f4,1);
  lStack_b0._0_4_ = 2;
  FUN_10002c78c(auStack_a8,alStack_f0);
  uStack_b8 = 0x100000004;
  uStack_c0 = 0x200000003;
  puVar7 = (undefined4 *)0x4;
  FUN_10002c070(auStack_110,&uStack_c0);
  auStack_90[0] = 1;
  FUN_10002c78c(auStack_88,auStack_110);
  lVar10 = 0;
  lRam0000000113824980 = 0;
  plRam0000000113824978 = (long *)0x0;
  plRam0000000113824970 = (long *)0x113824978;
  plVar3 = (long *)0x113824978;
  do {
    if (lVar10 == 0x40) {
      lVar10 = 0x28;
      do {
        FUN_10002c948((long)&lStack_b0 + lVar10);
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != -0x18);
      FUN_10002c948(auStack_110);
      plVar3 = alStack_f0;
      FUN_10002c948();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        auVar11._8_8_ = puVar6;
        auVar11._0_8_ = plVar3;
        return auVar11;
      }
      func_0x000107c60e78();
      plVar9 = (long *)0x0;
      FUN_10002c948(auStack_110);
      plVar8 = (long *)auStack_90;
      FUN_10002c948(alStack_f0);
      if (&lStack_b0 != plVar8) {
        plVar9 = &lStack_b0;
        plVar4 = plVar8;
        do {
          plVar8 = plVar4 + -4;
          FUN_10002c948(plVar4 + -3);
          plVar4 = plVar8;
          unaff_x22 = plVar8;
        } while (plVar8 != plVar9);
      }
      plVar4 = plVar3;
      func_0x000107c60bd8();
      uStack_150 = 0x113824000;
      pcStack_118 = FUN_10002c3e8;
      plVar5 = plVar4;
      puStack_148 = unaff_x23;
      plStack_140 = unaff_x22;
      plStack_138 = plVar8;
      plStack_130 = plVar9;
      plStack_128 = plVar3;
      puStack_120 = &stack0xfffffffffffffff0;
      FUN_10002c3f0();
      lVar10 = *plVar5;
      bVar1 = lVar10 == 0;
      if (bVar1) {
        lVar10 = 0x20;
        func_0x000107c60e20();
        uStack_168 = 1;
        *(undefined4 *)(lVar10 + 0x1c) = *puVar7;
        plStack_170 = plVar4 + 1;
        func_0x00010002c6a0(plVar4,uStack_158,plVar5,lVar10);
        uStack_178 = 0;
        FUN_10002c714(&uStack_178);
      }
      auVar12[8] = bVar1;
      auVar12._0_8_ = lVar10;
      auVar12._9_7_ = 0;
      return auVar12;
    }
    plVar9 = plVar3;
    plVar8 = plVar3;
    unaff_x22 = plVar3;
    if (plRam0000000113824970 == (long *)0x113824978) {
      if (plRam0000000113824978 == (long *)0x0) goto LAB_10002c23c;
LAB_10002c1e8:
      unaff_x22 = plVar9;
      plVar8 = unaff_x22 + 1;
      if (unaff_x22[1] == 0) goto LAB_10002c23c;
    }
    else {
      func_0x00010002c810();
      iVar2 = *(int *)((long)&lStack_b0 + lVar10);
      if ((int)plVar9[4] < iVar2) {
        if (plRam0000000113824978 != (long *)0x0) goto LAB_10002c1e8;
      }
      else {
        plVar9 = plRam0000000113824978;
        if (plRam0000000113824978 != (long *)0x0) {
          do {
            while (unaff_x22 = plVar9, iVar2 < (int)unaff_x22[4]) {
              plVar9 = (long *)*unaff_x22;
              plVar8 = unaff_x22;
              if ((long *)*unaff_x22 == (long *)0x0) goto LAB_10002c23c;
            }
            if (iVar2 <= (int)unaff_x22[4]) goto LAB_10002c2ac;
            plVar9 = (long *)unaff_x22[1];
          } while ((long *)unaff_x22[1] != (long *)0x0);
          plVar8 = unaff_x22 + 1;
        }
      }
LAB_10002c23c:
      unaff_x23 = (undefined8 *)0x40;
      func_0x000107c60e20();
      uStack_d0 = 0x113824978;
      uStack_c8 = 0;
      *(int *)(unaff_x23 + 4) = *(int *)((long)&lStack_b0 + lVar10);
      puStack_d8 = unaff_x23;
      FUN_10002c78c(unaff_x23 + 5,auStack_a8 + lVar10);
      uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
      *unaff_x23 = 0;
      unaff_x23[1] = 0;
      unaff_x23[2] = unaff_x22;
      *plVar8 = (long)unaff_x23;
      if ((long *)*plRam0000000113824970 != (long *)0x0) {
        plRam0000000113824970 = (long *)*plRam0000000113824970;
      }
      puVar6 = unaff_x23;
      FUN_10002c5b0(plRam0000000113824978,unaff_x23);
      lRam0000000113824980 = lRam0000000113824980 + 1;
      puStack_d8 = (undefined8 *)0x0;
      FUN_10002c8f0(&puStack_d8);
    }
LAB_10002c2ac:
    lVar10 = lVar10 + 0x20;
  } while( true );
}



/* Entry: 10002c3e8; end: 10002c3ef;  */

undefined1  [16] FUN_10002c3e8(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_10002c3f0(param_1,param_2,&uStack_48,auStack_50,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x20;
    func_0x000107c60e20();
    uStack_58 = 1;
    *(undefined4 *)(lVar3 + 0x1c) = *param_3;
    plStack_60 = param_1 + 1;
    func_0x00010002c6a0(param_1,uStack_48,plVar2,lVar3);
    uStack_68 = 0;
    FUN_10002c714(&uStack_68);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10002c3f0; end: 10002c59f;  */

long * FUN_10002c3f0(long *param_1,long *param_2,long *param_3,long *param_4,uint *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_2 != param_1 + 1) {
    if (*(uint *)((long)param_2 + 0x1c) <= *param_5) {
      if (*param_5 <= *(uint *)((long)param_2 + 0x1c)) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar1 = param_2;
      func_0x0001077ff5d0(param_2,1);
      if ((param_1 + 1 == plVar1) || (*param_5 < *(uint *)((long)plVar1 + 0x1c))) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar1;
          return plVar1;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_10002c84c;
    }
  }
  plVar1 = param_2;
  if ((param_2 == (long *)*param_1) ||
     (func_0x00010002c810(), *(uint *)((long)plVar1 + 0x1c) < *param_5)) {
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar1;
      param_2 = plVar1 + 1;
    }
    return param_2;
  }
LAB_10002c84c:
  param_1 = param_1 + 1;
  plVar1 = param_1;
  if ((long *)*param_1 != (long *)0x0) {
    plVar2 = (long *)*param_1;
    do {
      while (plVar1 = plVar2, *param_5 < *(uint *)((long)plVar2 + 0x1c)) {
        plVar3 = (long *)*plVar2;
        param_1 = plVar2;
        plVar2 = plVar3;
        if (plVar3 == (long *)0x0) goto LAB_10002c894;
      }
      if (*param_5 <= *(uint *)((long)plVar2 + 0x1c)) break;
      param_1 = plVar2 + 1;
      plVar2 = (long *)*param_1;
    } while ((long *)*param_1 != (long *)0x0);
  }
LAB_10002c894:
  *param_3 = (long)plVar1;
  return param_1;
}



/* Entry: 10002c5a0; end: 10002c5af;  */

void FUN_10002c5a0(void)

{
  return;
}



/* Entry: 10002c5b0; end: 10002c6eb;  */

/* WARNING: Possible PIC construction at 0x00010002c67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002c680) */

void FUN_10002c5b0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *(bool *)(param_2 + 3) = param_2 == param_1;
  do {
    if ((param_2 == param_1) || (plVar6 = (long *)param_2[2], (*(byte *)(plVar6 + 3) & 1) != 0)) {
      return;
    }
    plVar1 = (long *)plVar6[2];
    plVar5 = (long *)*plVar1;
    if (plVar6 == plVar5) {
      plVar5 = (long *)plVar1[1];
      if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) {
        if (param_2 == (long *)*plVar6) {
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(plVar1 + 3) = 0;
          lVar2 = *plVar1;
          lVar4 = *(long *)(lVar2 + 8);
          *plVar1 = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar1;
          }
          plVar6 = (long *)plVar1[2];
          *(long **)(lVar2 + 0x10) = plVar6;
          if (plVar1 == (long *)*plVar6) {
            *plVar6 = lVar2;
          }
          else {
            plVar6[1] = lVar2;
          }
          *(long **)(lVar2 + 8) = plVar1;
          plVar1[2] = lVar2;
          return;
        }
        goto SUB_10002c89c;
      }
    }
    else if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) {
      plVar5 = plVar6;
      if (param_2 == (long *)*plVar6) {
        FUN_10015dd98(plVar6);
        plVar5 = (long *)plVar6[2];
        plVar1 = (long *)plVar5[2];
      }
      plVar6 = plVar1;
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(plVar6 + 3) = 0;
SUB_10002c89c:
      plVar1 = (long *)plVar6[1];
      lVar2 = *plVar1;
      plVar6[1] = lVar2;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 0x10) = plVar6;
      }
      puVar3 = (undefined8 *)plVar6[2];
      plVar1[2] = (long)puVar3;
      if (plVar6 == (long *)*puVar3) {
        *puVar3 = plVar1;
      }
      else {
        puVar3[1] = plVar1;
      }
      *plVar1 = (long)plVar6;
      plVar6[2] = (long)plVar1;
      return;
    }
    *(undefined1 *)(plVar6 + 3) = 1;
    *(bool *)(plVar1 + 3) = plVar1 == param_1;
    *(undefined1 *)(plVar5 + 3) = 1;
    param_2 = plVar1;
  } while( true );
}



/* Entry: 10002c6ec; end: 10002c713;  */

void FUN_10002c6ec(void)

{
  return;
}



/* Entry: 10002c714; end: 10002c737;  */

undefined8 FUN_10002c714(undefined8 param_1)

{
  func_0x00010002c6fc(param_1,0);
  return param_1;
}



/* Entry: 10002c738; end: 10002c73f;  */

void FUN_10002c738(void)

{
  return;
}



/* Entry: 10002c740; end: 10002c78b;  */

void FUN_10002c740(long param_1,long param_2,long param_3)

{
  while (param_2 != param_3) {
    FUN_10002c3e8(param_1,param_1 + 8,param_2 + 0x1c);
    FUN_10002c7d4();
  }
  return;
}



/* Entry: 10002c78c; end: 10002c7d3;  */

undefined8 * FUN_10002c78c(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_10002c740(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 10002c7d4; end: 10002c8ef;  */

long * FUN_10002c7d4(long *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    do {
      plVar3 = (long *)param_1[2];
      bVar1 = param_1 != (long *)*plVar3;
      param_1 = plVar3;
    } while (bVar1);
    return plVar3;
  }
  do {
    plVar2 = plVar3;
    plVar3 = (long *)*plVar2;
  } while (plVar3 != (long *)0x0);
  return plVar2;
}



/* Entry: 10002c8f0; end: 10002c933;  */

long * FUN_10002c8f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10002c948(lVar1 + 0x28);
    }
    func_0x000107c60e14(lVar1);
  }
  return param_1;
}



/* Entry: 10002c934; end: 10002c947;  */

void FUN_10002c934(void)

{
  return;
}



/* Entry: 10002c948; end: 10002c967;  */

void FUN_10002c948(void)

{
  func_0x00010002c93c();
  FUN_10002c974();
  return;
}



/* Entry: 10002c968; end: 10002c973;  */

void FUN_10002c968(void)

{
  return;
}



/* Entry: 10002c974; end: 10002c9a7;  */

void FUN_10002c974(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10002c968();
    FUN_10002c974();
    FUN_10002c9a8();
    FUN_10002c974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10002c9a8; end: 10002c9c3;  */

void FUN_10002c9a8(void)

{
  return;
}



/* Entry: 10002c9c4; end: 10002cc57;  */

double FUN_10002c9c4(ulong param_1)

{
  ulong uVar1;
  double dVar2;
  
  dVar2 = 1.0;
  if (1 < param_1) {
    uVar1 = 2;
    while (param_1 = param_1 - 1, param_1 != 0) {
      dVar2 = dVar2 * (double)uVar1;
      uVar1 = uVar1 + 1;
    }
  }
  return dVar2;
}



/* Entry: 10002cc58; end: 10002cc8f;  */

void FUN_10002cc58(undefined8 param_1)

{
  func_0x000107c6110c();
  func_0x000107c60a40(0x113829b60,1,10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10002cc90; end: 10002d11f;  */

void FUN_10002cc90(void)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x20;
  long lVar16;
  ulong uVar17;
  
  lVar16 = 0;
  uRam0000000113732d08 = 0;
  lRam0000000113732d00 = 0;
  uRam0000000113732d18 = 0;
  plRam0000000113732d10 = (long *)0x0;
  fRam0000000113732d20 = 1.0;
  do {
    lVar6 = *(long *)((long)&PTR_DAT_110af45e0 + lVar16);
    lVar2 = *(long *)(&UNK_110af45e8 + lVar16);
    uVar12 = 0x113732d00;
    FUN_10002d328(0x113732d00,lVar6,lVar2);
    uVar9 = uRam0000000113732d08;
    if (uRam0000000113732d08 != 0) {
      uVar17 = uRam0000000113732d08 - 1;
      if ((uRam0000000113732d08 & uVar17) == 0) {
        unaff_x20 = uVar17 & uVar12;
      }
      else {
        unaff_x20 = uVar12;
        if (uRam0000000113732d08 <= uVar12) {
          uVar8 = 0;
          if (uRam0000000113732d08 != 0) {
            uVar8 = uVar12 / uRam0000000113732d08;
          }
          unaff_x20 = uVar12 - uVar8 * uRam0000000113732d08;
        }
      }
      plVar7 = *(long **)(lRam0000000113732d00 + unaff_x20 * 8);
      if (plVar7 != (long *)0x0) {
        for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
          uVar8 = plVar7[1];
          if (uVar8 == uVar12) {
            if (plVar7[3] == lVar2) {
              uVar5 = plVar7[2];
              func_0x000107c610b0(uVar5,lVar6,lVar2);
              if ((int)uVar5 == 0) goto LAB_10002d054;
            }
          }
          else {
            if ((uVar9 & uVar17) == 0) {
              uVar8 = uVar8 & uVar17;
            }
            else if (uVar9 <= uVar8) {
              uVar10 = 0;
              if (uVar9 != 0) {
                uVar10 = uVar8 / uVar9;
              }
              uVar8 = uVar8 - uVar10 * uVar9;
            }
            if (uVar8 != unaff_x20) break;
          }
        }
      }
    }
    plVar7 = (long *)0x28;
    func_0x000107c60e20();
    *plVar7 = 0;
    plVar7[1] = uVar12;
    lVar6 = *(long *)((long)&PTR_DAT_110af45e0 + lVar16);
    plVar7[3] = *(long *)(&UNK_110af45e8 + lVar16);
    plVar7[2] = lVar6;
    plVar7[4] = *(long *)(&UNK_110af45f0 + lVar16);
    if ((uVar9 == 0) || (fRam0000000113732d20 * (float)uVar9 < (float)(uRam0000000113732d18 + 1))) {
      uVar17 = 1;
      if (2 < uVar9) {
        uVar17 = (ulong)((uVar9 & uVar9 - 1) != 0);
      }
      uVar17 = uVar17 | uVar9 << 1;
      uVar8 = (ulong)((float)(uRam0000000113732d18 + 1) / fRam0000000113732d20);
      if (uVar17 <= uVar8) {
        uVar17 = uVar8;
      }
      uVar8 = uVar9;
      if (uVar17 - 1 == 0) {
        uVar17 = 2;
      }
      else if ((uVar17 & uVar17 - 1) != 0) {
        func_0x000107c60c44();
        uVar8 = uRam0000000113732d08;
      }
      if (uVar8 < uVar17) {
LAB_10002ce4c:
        if (uVar17 >> 0x3d != 0) {
          func_0x000104c4f740();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10002d0f4);
          (*pcVar4)();
        }
        lVar6 = uVar17 << 3;
        func_0x000107c60e20();
        bVar1 = lRam0000000113732d00 != 0;
        lRam0000000113732d00 = lVar6;
        if (bVar1) {
          func_0x000107c60e14();
        }
        uVar9 = 0;
        uRam0000000113732d08 = uVar17;
        do {
          *(undefined8 *)(lRam0000000113732d00 + uVar9 * 8) = 0;
          plVar11 = plRam0000000113732d10;
          uVar9 = uVar9 + 1;
        } while (uVar17 != uVar9);
        uVar9 = uVar17;
        if (plRam0000000113732d10 != (long *)0x0) {
          uVar8 = plRam0000000113732d10[1];
          uVar10 = uVar17 - 1;
          if ((uVar17 & uVar10) == 0) {
            uVar8 = uVar8 & uVar10;
          }
          else if (uVar17 <= uVar8) {
            uVar15 = 0;
            if (uVar17 != 0) {
              uVar15 = uVar8 / uVar17;
            }
            uVar8 = uVar8 - uVar15 * uVar17;
          }
          *(undefined8 *)(lRam0000000113732d00 + uVar8 * 8) = 0x113732d10;
          plVar13 = (long *)*plVar11;
          lVar6 = lRam0000000113732d00;
          while (lRam0000000113732d00 = lVar6, plVar13 != (long *)0x0) {
            uVar15 = plVar13[1];
            if ((uVar17 & uVar10) == 0) {
              uVar15 = uVar15 & uVar10;
            }
            else if (uVar17 <= uVar15) {
              uVar3 = 0;
              if (uVar17 != 0) {
                uVar3 = uVar15 / uVar17;
              }
              uVar15 = uVar15 - uVar3 * uVar17;
            }
            plVar14 = plVar13;
            if (uVar15 != uVar8) {
              if (*(long *)(lVar6 + uVar15 * 8) == 0) {
                *(long **)(lVar6 + uVar15 * 8) = plVar11;
                uVar8 = uVar15;
              }
              else {
                *plVar11 = *plVar13;
                *plVar13 = **(long **)(lVar6 + uVar15 * 8);
                **(undefined8 **)(lVar6 + uVar15 * 8) = plVar13;
                plVar14 = plVar11;
              }
            }
            lVar6 = lRam0000000113732d00;
            plVar11 = plVar14;
            plVar13 = (long *)*plVar14;
          }
        }
      }
      else {
        uVar9 = uVar8;
        if (uVar17 < uVar8) {
          uVar9 = (ulong)((float)uRam0000000113732d18 / fRam0000000113732d20);
          if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
            func_0x000107c60c44();
          }
          else if (1 < uVar9) {
            uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
          }
          lVar6 = lRam0000000113732d00;
          if (uVar17 <= uVar9) {
            uVar17 = uVar9;
          }
          uVar9 = uRam0000000113732d08;
          if (uVar17 < uVar8) {
            if (uVar17 != 0) goto LAB_10002ce4c;
            lRam0000000113732d00 = 0;
            if (lVar6 != 0) {
              func_0x000107c60e14();
            }
            uRam0000000113732d08 = 0;
            uVar9 = 0;
          }
        }
      }
      if ((uVar9 & uVar9 - 1) == 0) {
        unaff_x20 = uVar9 - 1 & uVar12;
      }
      else {
        unaff_x20 = uVar12;
        if (uVar9 <= uVar12) {
          uVar17 = 0;
          if (uVar9 != 0) {
            uVar17 = uVar12 / uVar9;
          }
          unaff_x20 = uVar12 - uVar17 * uVar9;
        }
      }
    }
    lVar6 = lRam0000000113732d00;
    plVar11 = *(long **)(lRam0000000113732d00 + unaff_x20 * 8);
    if (plVar11 == (long *)0x0) {
      *plVar7 = (long)plRam0000000113732d10;
      plRam0000000113732d10 = plVar7;
      *(undefined8 *)(lVar6 + unaff_x20 * 8) = 0x113732d10;
      if (*plVar7 != 0) {
        uVar12 = *(ulong *)(*plVar7 + 8);
        if ((uVar9 & uVar9 - 1) == 0) {
          uVar12 = uVar12 & uVar9 - 1;
        }
        else if (uVar9 <= uVar12) {
          uVar17 = 0;
          if (uVar9 != 0) {
            uVar17 = uVar12 / uVar9;
          }
          uVar12 = uVar12 - uVar17 * uVar9;
        }
        plVar11 = (long *)(lRam0000000113732d00 + uVar12 * 8);
        goto LAB_10002d040;
      }
    }
    else {
      *plVar7 = *plVar11;
LAB_10002d040:
      *plVar11 = (long)plVar7;
    }
    uRam0000000113732d18 = uRam0000000113732d18 + 1;
LAB_10002d054:
    lVar16 = lVar16 + 0x18;
    if (lVar16 == 0x108) {
      func_0x000107c60e34(&UNK_10937dadc,0x113732d00,0x100000000);
      uRam0000000113732cf8 = 0x113732d00;
      return;
    }
  } while( true );
}



/* Entry: 10002d120; end: 10002d327;  */

ulong FUN_10002d120(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  if (0x20 < param_3) {
    if (param_3 < 0x41) {
      lVar9 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar10 = *param_2 + (lVar9 + param_3) * -0x3c5a37a36834ced9;
      uVar13 = param_2[3];
      uVar7 = uVar10 + param_2[1];
      uVar6 = uVar7 + param_2[2];
      uVar8 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      lVar12 = *(long *)((long)param_2 + (param_3 - 8)) + uVar13;
      uVar11 = lVar12 + uVar8;
      lVar15 = (uVar7 >> 7 | uVar7 << 0x39) + (uVar10 >> 0x25 | uVar10 * 0x8000000) +
               (uVar10 + uVar13 >> 0x34 | (uVar10 + uVar13) * 0x1000) +
               (uVar6 >> 0x1f | uVar6 << 0x21);
      uVar7 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar8;
      uVar10 = uVar7 + lVar9;
      uVar7 = (uVar10 + lVar12 + lVar15) * -0x3c5a37a36834ced9 +
              (uVar6 + uVar13 + (uVar8 >> 0x25 | uVar8 * 0x8000000) + (uVar7 >> 7 | uVar7 << 0x39) +
                       (uVar11 >> 0x34 | uVar11 * 0x1000) + (uVar10 >> 0x1f | uVar10 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar7 = lVar15 + (uVar7 ^ uVar7 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar15 = *(long *)((long)param_2 + (param_3 - 0x30));
    lVar2 = *(long *)((long)param_2 + (param_3 - 0x28));
    uVar10 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    uVar6 = (uVar10 ^ lVar15 + param_3) * -0x622015f714c7d297;
    lVar3 = *(long *)((long)param_2 + (param_3 - 0x38));
    lVar9 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar4 = *(long *)((long)param_2 + (param_3 - 8));
    uVar7 = lVar3 + lVar9;
    uVar6 = (uVar10 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar14 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    lVar12 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    uVar6 = lVar15 + lVar3 + lVar12;
    uVar8 = lVar12 + lVar2 + uVar14;
    uVar11 = uVar6 + lVar2;
    uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar12 + (uVar8 >> 0x15 | uVar8 << 0x2b);
    lVar12 = uVar7 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    uVar8 = lVar12 + lVar2 + lVar4;
    uVar10 = uVar10 + lVar9 + lVar12;
    uVar13 = uVar10 + lVar4;
    uVar8 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar12 + (uVar8 >> 0x15 | uVar8 << 0x2b);
    puVar5 = param_2 + 4;
    lVar15 = *param_2 + lVar2 * -0x4b6d499041670d8d;
    lVar12 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      uVar10 = lVar15 + uVar11 + uVar7 + puVar5[-3];
      uVar7 = uVar7 + uVar6 + puVar5[2];
      uVar7 = puVar5[1] + uVar11 + (uVar7 >> 0x2a | uVar7 * 0x400000) * -0x4b6d499041670d8d;
      uVar1 = uVar14 + uVar13;
      lVar9 = puVar5[-4] + uVar6 * -0x4b6d499041670d8d;
      uVar6 = lVar9 + puVar5[-3] + puVar5[-2];
      uVar11 = uVar6 + puVar5[-1];
      uVar14 = (uVar10 >> 0x25 | uVar10 * 0x8000000) * -0x4b6d499041670d8d ^ uVar8;
      lVar15 = (uVar1 >> 0x21 | uVar1 * 0x80000000) * -0x4b6d499041670d8d;
      uVar10 = lVar9 + uVar13 + puVar5[-1] + uVar14;
      uVar6 = (uVar6 >> 0x2c | uVar6 * 0x100000) + lVar9 + (uVar10 >> 0x15 | uVar10 << 0x2b);
      lVar9 = lVar15 + uVar8 + *puVar5;
      uVar8 = uVar7 + puVar5[-2] + lVar9 + puVar5[3];
      uVar10 = puVar5[1] + puVar5[2] + lVar9;
      uVar13 = uVar10 + puVar5[3];
      uVar8 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar9 + (uVar8 >> 0x15 | uVar8 << 0x2b);
      puVar5 = puVar5 + 8;
      lVar12 = lVar12 + 0x40;
    } while (lVar12 != 0);
    uVar11 = (uVar13 ^ uVar11) * -0x622015f714c7d297;
    uVar11 = (uVar13 ^ uVar11 >> 0x2f ^ uVar11) * -0x622015f714c7d297;
    uVar6 = (uVar8 ^ uVar6) * -0x622015f714c7d297;
    uVar6 = (uVar8 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    uVar6 = lVar15 + (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = (uVar6 ^ uVar14 + (uVar7 ^ uVar7 >> 0x2f) * -0x4b6d499041670d8d +
                     (uVar11 ^ uVar11 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar7 = (uVar6 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  if (0x10 < param_3) {
    lVar12 = *(long *)((long)param_2 + (param_3 - 8));
    uVar6 = lVar12 * -0x651e95c4d06fbfb1;
    uVar8 = *param_2 * -0x4b6d499041670d8d - param_2[1];
    uVar7 = param_2[1] ^ 0xc949d7c7509e6557;
    uVar7 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar7 >> 0x14 | uVar7 << 0x2c) +
            lVar12 * 0x651e95c4d06fbfb1;
    uVar6 = ((uVar6 >> 0x1e | uVar6 << 0x22) + (uVar8 >> 0x2b | uVar8 * 0x200000) +
             *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar7) *
            -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  if (8 < param_3) {
    uVar6 = *(ulong *)((long)param_2 + (param_3 - 8));
    uVar7 = uVar6 + param_3;
    uVar8 = uVar7 >> (param_3 & 0x3f) | uVar7 << 0x40 - (param_3 & 0x3f);
    uVar7 = (uVar8 ^ *param_2) * -0x622015f714c7d297;
    uVar7 = (uVar8 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297 ^ uVar6;
  }
  if (3 < param_3) {
    uVar7 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
    uVar6 = (param_3 + (uint)((int)*param_2 << 3) ^ uVar7) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar6 >> 0x2f ^ uVar6) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar7 = 0x9ae16a3b2f90404f;
  if (param_3 != 0) {
    uVar7 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
            -0x651e95c4d06fbfb1;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar7;
}



/* Entry: 10002d328; end: 10002d34b;  */

void FUN_10002d328(void)

{
  undefined1 uStack_11;
  
  FUN_10002d120(&uStack_11);
  return;
}



/* Entry: 10002d34c; end: 10002d443;  */

ulong FUN_10002d34c(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (8 < param_2) {
    uVar1 = *(ulong *)((long)param_1 + (param_2 - 8));
    uVar2 = uVar1 + param_2;
    uVar3 = uVar2 >> (param_2 & 0x3f) | uVar2 << 0x40 - (param_2 & 0x3f);
    uVar2 = (uVar3 ^ *param_1) * -0x622015f714c7d297;
    uVar2 = (uVar3 ^ uVar2 >> 0x2f ^ uVar2) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297 ^ uVar1;
  }
  if (3 < param_2) {
    uVar2 = (ulong)*(uint *)((long)param_1 + (param_2 - 4));
    uVar1 = (param_2 + (uint)((int)*param_1 << 3) ^ uVar2) * -0x622015f714c7d297;
    uVar2 = (uVar2 ^ uVar1 >> 0x2f ^ uVar1) * -0x622015f714c7d297;
    return (uVar2 ^ uVar2 >> 0x2f) * -0x622015f714c7d297;
  }
  uVar2 = 0x9ae16a3b2f90404f;
  if (param_2 != 0) {
    uVar2 = (param_2 | (ulong)*(byte *)((long)param_1 + (param_2 - 1)) << 2) * -0x36b62838af619aa9 ^
            (ulong)CONCAT11(*(undefined1 *)((long)param_1 + (param_2 >> 1)),(char)*param_1) *
            -0x651e95c4d06fbfb1;
    uVar2 = (uVar2 ^ uVar2 >> 0x2f) * -0x651e95c4d06fbfb1;
  }
  return uVar2;
}



/* Entry: 10002d444; end: 10002d4d7;  */

void FUN_10002d444(void)

{
  int iVar1;
  
  if ((bRam00000001132dfae0 & 1) == 0) {
    iVar1 = 0x132dfae0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10002d4d8(0x1132dfac8,&UNK_10f5737e4);
      func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                          ,0x1132dfac8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132dfae0);
      return;
    }
  }
  return;
}



/* Entry: 10002d4d8; end: 10002d57b;  */

ulong * FUN_10002d4d8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar2 = param_2;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000104c4f6b8();
    if ((bRam00000001132dfb00 & 1) == 0) {
      puVar2 = (ulong *)0x1132dfb00;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        FUN_10002d4d8(0x1132dfae8,&UNK_10f5738ce);
        func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                            ,0x1132dfae8,0x100000000);
        puVar2 = (ulong *)0x1132dfb00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132dfb00);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto LAB_10002d55c;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,param_2,puVar2);
LAB_10002d55c:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10002d57c; end: 10002d60f;  */

void FUN_10002d57c(void)

{
  int iVar1;
  
  if ((bRam00000001132dfb00 & 1) == 0) {
    iVar1 = 0x132dfb00;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10002d4d8(0x1132dfae8,&UNK_10f5738ce);
      func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                          ,0x1132dfae8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132dfb00);
      return;
    }
  }
  return;
}



/* Entry: 10002d610; end: 10002d6a3;  */

void FUN_10002d610(void)

{
  int iVar1;
  
  if ((bRam00000001132dfae0 & 1) == 0) {
    iVar1 = 0x132dfae0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10002d4d8(0x1132dfac8,&UNK_10f5737e4);
      func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                          ,0x1132dfac8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132dfae0);
      return;
    }
  }
  return;
}



/* Entry: 10002d6a4; end: 10002d737;  */

void FUN_10002d6a4(void)

{
  int iVar1;
  
  if ((bRam00000001132dfb00 & 1) == 0) {
    iVar1 = 0x132dfb00;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10002d4d8(0x1132dfae8,&UNK_10f5738ce);
      func_0x000107c60e34(PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED1Ev_110346340
                          ,0x1132dfae8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132dfb00);
      return;
    }
  }
  return;
}



/* Entry: 10002d738; end: 100031f53;  */

void FUN_10002d738(void)

{
  int iVar1;
  
  if ((bRam00000001132dfb30 & 1) == 0) {
    iVar1 = 0x132dfb30;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam00000001132dfb28 = 0;
      func_0x000107c60e34(&UNK_1095bedbc,0x1132dfb10,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1132dfb30);
      return;
    }
  }
  return;
}



/* Entry: 100031f54; end: 100031fdf;  */

void FUN_100031f54(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100031fe0; end: 10003206f;  */

undefined8 * FUN_100031fe0(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam000000011382a988 & 1) == 0) {
    iVar1 = 0x1382a988;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x50;
      func_0x000107c60e20();
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 4) = 0x3f800000;
      puVar2[6] = 0;
      puVar2[5] = 0;
      puVar2[8] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 9) = 0x3f800000;
      puRam000000011382a980 = puVar2;
      func_0x000107c60e4c(0x11382a988);
    }
  }
  return puRam000000011382a980;
}



/* Entry: 100032070; end: 100032b8f;  */

void FUN_100032070(long *param_1,long *param_2,long param_3,long *param_4,ulong param_5,int param_6)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *****pppppuVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined8 *****pppppuVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  int *piVar19;
  byte *pbVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  ulong uVar32;
  undefined8 ****ppppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined7 uStack_90;
  char cStack_89;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar26 = *(ulong *)(param_3 + 8);
  if ((long)uVar26 < 0) {
    pbVar20 = (byte *)(uVar26 & 0x7fffffffffffffff);
    uVar29 = 0x1505;
    do {
      uVar26 = uVar29;
      bVar6 = *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar29 = uVar26 * 0x21 ^ (ulong)bVar6;
    } while ((ulong)bVar6 != 0);
  }
  uVar29 = param_1[6];
  if (uVar29 != 0) {
    uVar31 = uVar29 - 1;
    if ((uVar29 & uVar31) == 0) {
      uVar32 = uVar31 & uVar26;
    }
    else {
      uVar32 = uVar26;
      if (uVar29 <= uVar26) {
        uVar32 = 0;
        if (uVar29 != 0) {
          uVar32 = uVar26 / uVar29;
        }
        uVar32 = uVar26 - uVar32 * uVar29;
      }
    }
    puVar15 = *(undefined8 **)(param_1[5] + uVar32 * 8);
    if (puVar15 != (undefined8 *)0x0) {
      for (plVar28 = (long *)*puVar15; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
        uVar16 = plVar28[1];
        if (uVar16 == uVar26) {
          uVar16 = plVar28[2];
          FUN_1000334dc(uVar16,param_3);
          if ((uVar16 & 1) != 0) goto LAB_1000329b8;
        }
        else {
          if ((uVar29 & uVar31) == 0) {
            uVar16 = uVar16 & uVar31;
          }
          else if (uVar29 <= uVar16) {
            uVar9 = 0;
            if (uVar29 != 0) {
              uVar9 = uVar16 / uVar29;
            }
            uVar16 = uVar16 - uVar9 * uVar29;
          }
          if (uVar16 != uVar32) break;
        }
      }
    }
  }
  puVar15 = (undefined8 *)0x28;
  func_0x000107c610a0();
  *(undefined4 *)(puVar15 + 3) = 1;
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined4 *)(puVar15 + 2) = 0;
  puVar15[4] = &PTR_FUN_110b00de0;
  ppuStack_88 = &PTR_DAT_110b00f28;
  FUN_100032b90();
  func_0x000107c612c4();
  *(undefined4 *)(puVar15 + 3) = 1;
  *puVar15 = 0;
  puVar15[1] = 0;
  *(undefined4 *)(puVar15 + 2) = 0;
  puStack_80 = puVar15 + 4;
  *puStack_80 = &PTR_DAT_110b01ba0;
  puVar15[6] = 0;
  puVar15[5] = 0;
  puVar15[8] = 0;
  puVar15[7] = 0;
  puVar15[10] = 0;
  puVar15[9] = 0;
  puVar15[0xc] = 0;
  puVar15[0xb] = 0;
  puVar10 = PTR___ZTIv_110346ad8;
  puVar15[0xd] = 0;
  puVar15[0xe] = puVar10;
  puVar15[0xf] = 0;
  puVar15[0x10] = 0;
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000104c4f6b8();
    goto LAB_100032b1c;
  }
  if (param_5 < 0x17) {
    uStack_a8 = CONCAT17((char)param_5,(undefined7)uStack_a8);
    pppppuVar12 = &ppppuStack_b8;
    if (param_5 != 0) goto LAB_100032238;
  }
  else {
    pppppuVar4 = (undefined8 *****)0x19;
    if ((param_5 | 7) != 0x17) {
      pppppuVar4 = (undefined8 *****)((param_5 | 7) + 1);
    }
    pppppuVar12 = pppppuVar4;
    func_0x000107c60e20();
    uStack_a8 = (ulong)pppppuVar4 | 0x8000000000000000;
    ppppuStack_b8 = pppppuVar12;
    uStack_b0 = param_5;
LAB_100032238:
    func_0x000107c610b8(pppppuVar12,param_4,param_5);
  }
  *(undefined1 *)((long)pppppuVar12 + param_5) = 0;
  FUN_100032bfc(&lStack_a0,&ppppuStack_b8);
  if ((long)uStack_a8 < 0) {
    func_0x000107c60e14(ppppuStack_b8);
  }
  puVar15[0xe] = param_3;
  func_0x000107c60ca4(puVar15 + 0xb,&lStack_a0);
  plVar28 = param_2;
  (**(code **)(*param_2 + 0x38))();
  puVar15[0xf] = plVar28;
  plVar28 = param_2;
  (**(code **)(*param_2 + 0x40))();
  puVar15[0x10] = plVar28;
  plVar28 = param_1;
  FUN_100032e5c(param_1,&lStack_a0);
  plVar30 = (long *)param_1[1];
  if (plVar30 != (long *)0x0) {
    uVar26 = (long)plVar30 - 1;
    if (((ulong)plVar30 & uVar26) == 0) {
      param_4 = (long *)(uVar26 & (ulong)plVar28);
    }
    else {
      param_4 = plVar28;
      if (plVar30 <= plVar28) {
        uVar29 = 0;
        if (plVar30 != (long *)0x0) {
          uVar29 = (ulong)plVar28 / (ulong)plVar30;
        }
        param_4 = (long *)((long)plVar28 - uVar29 * (long)plVar30);
      }
    }
    plVar17 = *(long **)(*param_1 + (long)param_4 * 8);
    if (plVar17 != (long *)0x0) {
      for (plVar17 = (long *)*plVar17; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
        plVar18 = (long *)plVar17[1];
        if (plVar18 == plVar28) {
          plVar18 = param_1;
          func_0x000104c4fbc4(param_1,plVar17 + 2,&lStack_a0);
          if (((ulong)plVar18 & 1) != 0) goto LAB_10003262c;
        }
        else {
          if (((ulong)plVar30 & uVar26) == 0) {
            plVar18 = (long *)((ulong)plVar18 & uVar26);
          }
          else if (plVar30 <= plVar18) {
            uVar29 = 0;
            if (plVar30 != (long *)0x0) {
              uVar29 = (ulong)plVar18 / (ulong)plVar30;
            }
            plVar18 = (long *)((long)plVar18 - uVar29 * (long)plVar30);
          }
          if (plVar18 != param_4) break;
        }
      }
    }
  }
  plVar17 = (long *)0x38;
  func_0x000107c60e20();
  uStack_68 = 0;
  *plVar17 = 0;
  plVar17[1] = (long)plVar28;
  plStack_78 = plVar17;
  plStack_70 = param_1;
  if (cStack_89 < '\0') {
    FUN_100033dac(plVar17 + 2,lStack_a0,lStack_98);
  }
  else {
    plVar17[3] = lStack_98;
    plVar17[2] = lStack_a0;
    plVar17[4] = CONCAT17(cStack_89,uStack_90);
  }
  plVar17[6] = (long)puStack_80;
  plVar17[5] = (long)ppuStack_88;
  if (plVar17[6] != 0) {
    piVar19 = (int *)(plVar17[6] + -8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar8) {
        *piVar19 = *piVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar17[5] = (long)&PTR_DAT_110b00f28;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  if ((plVar30 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar30 < (float)(param_1[3] + 1))) {
    uVar26 = 1;
    if ((long *)0x2 < plVar30) {
      uVar26 = (ulong)(((ulong)plVar30 & (long)plVar30 - 1U) != 0);
    }
    plVar18 = (long *)(uVar26 | (long)plVar30 << 1);
    plVar30 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar18 <= plVar30) {
      plVar18 = plVar30;
    }
    if ((long)plVar18 - 1U == 0) {
      plVar18 = (long *)0x2;
    }
    else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
      func_0x000107c60c44();
    }
    plVar30 = (long *)param_1[1];
    if (plVar30 < plVar18) {
LAB_100032440:
      if ((ulong)plVar18 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_100032b1c;
      }
      lVar13 = (long)plVar18 << 3;
      func_0x000107c60e20();
      lVar14 = *param_1;
      *param_1 = lVar13;
      if (lVar14 != 0) {
        func_0x000107c60e14();
      }
      plVar30 = (long *)0x0;
      param_1[1] = (long)plVar18;
      do {
        *(undefined8 *)(*param_1 + (long)plVar30 * 8) = 0;
        plVar30 = (long *)((long)plVar30 + 1);
      } while (plVar18 != plVar30);
      plVar21 = (long *)param_1[2];
      plVar30 = plVar18;
      if (plVar21 != (long *)0x0) {
        plVar22 = (long *)plVar21[1];
        uVar26 = (long)plVar18 - 1;
        if (((ulong)plVar18 & uVar26) == 0) {
          plVar22 = (long *)((ulong)plVar22 & uVar26);
        }
        else if (plVar18 <= plVar22) {
          uVar29 = 0;
          if (plVar18 != (long *)0x0) {
            uVar29 = (ulong)plVar22 / (ulong)plVar18;
          }
          plVar22 = (long *)((long)plVar22 - uVar29 * (long)plVar18);
        }
        *(long **)(*param_1 + (long)plVar22 * 8) = param_1 + 2;
        plVar23 = (long *)*plVar21;
        while (plVar23 != (long *)0x0) {
          plVar25 = (long *)plVar23[1];
          if (((ulong)plVar18 & uVar26) == 0) {
            plVar25 = (long *)((ulong)plVar25 & uVar26);
          }
          else if (plVar18 <= plVar25) {
            uVar29 = 0;
            if (plVar18 != (long *)0x0) {
              uVar29 = (ulong)plVar25 / (ulong)plVar18;
            }
            plVar25 = (long *)((long)plVar25 - uVar29 * (long)plVar18);
          }
          plVar24 = plVar23;
          if (plVar25 != plVar22) {
            lVar13 = *param_1;
            if (*(long *)(lVar13 + (long)plVar25 * 8) == 0) {
              *(long **)(lVar13 + (long)plVar25 * 8) = plVar21;
              plVar22 = plVar25;
            }
            else {
              *plVar21 = *plVar23;
              *plVar23 = **(undefined8 **)(lVar13 + (long)plVar25 * 8);
              **(long **)(lVar13 + (long)plVar25 * 8) = (long)plVar23;
              plVar24 = plVar21;
            }
          }
          plVar21 = plVar24;
          plVar23 = (long *)*plVar24;
        }
      }
    }
    else if (plVar18 < plVar30) {
      plVar21 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar30 < (long *)0x3) || (((ulong)plVar30 & (long)plVar30 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar21) {
        plVar21 = (long *)(1L << (-LZCOUNT((long)plVar21 + -1) & 0x3fU));
      }
      if (plVar18 <= plVar21) {
        plVar18 = plVar21;
      }
      if (plVar18 < plVar30) {
        if (plVar18 != (long *)0x0) goto LAB_100032440;
        lVar13 = *param_1;
        *param_1 = 0;
        if (lVar13 != 0) {
          func_0x000107c60e14();
        }
        param_1[1] = 0;
        plVar30 = (long *)0x0;
      }
      else {
        plVar30 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
      param_4 = (long *)((long)plVar30 - 1U & (ulong)plVar28);
    }
    else {
      param_4 = plVar28;
      if (plVar30 <= plVar28) {
        uVar26 = 0;
        if (plVar30 != (long *)0x0) {
          uVar26 = (ulong)plVar28 / (ulong)plVar30;
        }
        param_4 = (long *)((long)plVar28 - uVar26 * (long)plVar30);
      }
    }
  }
  lVar13 = *param_1;
  plVar28 = *(long **)(lVar13 + (long)param_4 * 8);
  if (plVar28 == (long *)0x0) {
    plVar28 = param_1 + 2;
    *plVar17 = *plVar28;
    *plVar28 = (long)plVar17;
    *(long **)(lVar13 + (long)param_4 * 8) = plVar28;
    if (*plVar17 != 0) {
      plVar28 = *(long **)(*plVar17 + 8);
      if (((ulong)plVar30 & (long)plVar30 - 1U) == 0) {
        plVar28 = (long *)((ulong)plVar28 & (long)plVar30 - 1U);
      }
      else if (plVar30 <= plVar28) {
        uVar26 = 0;
        if (plVar30 != (long *)0x0) {
          uVar26 = (ulong)plVar28 / (ulong)plVar30;
        }
        plVar28 = (long *)((long)plVar28 - uVar26 * (long)plVar30);
      }
      *(long **)(*param_1 + (long)plVar28 * 8) = plVar17;
    }
  }
  else {
    *plVar17 = *plVar28;
    *plVar28 = (long)plVar17;
  }
  param_1[3] = param_1[3] + 1;
LAB_10003262c:
  plVar17 = *(long **)(param_3 + 8);
  if ((long)plVar17 < 0) {
    pbVar20 = (byte *)((ulong)plVar17 & 0x7fffffffffffffff);
    plVar28 = (long *)0x1505;
    do {
      plVar17 = plVar28;
      bVar6 = *pbVar20;
      pbVar20 = pbVar20 + 1;
      plVar28 = (long *)((long)plVar17 * 0x21 ^ (ulong)bVar6);
    } while ((ulong)bVar6 != 0);
  }
  plVar18 = (long *)param_1[6];
  if (plVar18 != (long *)0x0) {
    uVar26 = (long)plVar18 - 1;
    if (((ulong)plVar18 & uVar26) == 0) {
      plVar30 = (long *)(uVar26 & (ulong)plVar17);
    }
    else {
      plVar30 = plVar17;
      if (plVar18 <= plVar17) {
        uVar29 = 0;
        if (plVar18 != (long *)0x0) {
          uVar29 = (ulong)plVar17 / (ulong)plVar18;
        }
        plVar30 = (long *)((long)plVar17 - uVar29 * (long)plVar18);
      }
    }
    puVar15 = *(undefined8 **)(param_1[5] + (long)plVar30 * 8);
    if (puVar15 != (undefined8 *)0x0) {
      for (plVar28 = (long *)*puVar15; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
        plVar21 = (long *)plVar28[1];
        if (plVar21 == plVar17) {
          uVar29 = plVar28[2];
          FUN_1000334dc(uVar29,param_3);
          if ((uVar29 & 1) != 0) goto LAB_100032994;
        }
        else {
          if (((ulong)plVar18 & uVar26) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar26);
          }
          else if (plVar18 <= plVar21) {
            uVar29 = 0;
            if (plVar18 != (long *)0x0) {
              uVar29 = (ulong)plVar21 / (ulong)plVar18;
            }
            plVar21 = (long *)((long)plVar21 - uVar29 * (long)plVar18);
          }
          if (plVar21 != plVar30) break;
        }
      }
    }
  }
  plVar28 = (long *)0x28;
  func_0x000107c60e20();
  *plVar28 = 0;
  plVar28[1] = (long)plVar17;
  plVar28[2] = param_3;
  plVar28[4] = (long)puStack_80;
  plVar28[3] = (long)ppuStack_88;
  if (plVar28[4] != 0) {
    piVar19 = (int *)(plVar28[4] + -8);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar8) {
        *piVar19 = *piVar19 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar28[3] = (long)&PTR_DAT_110b00f28;
  if ((plVar18 == (long *)0x0) ||
     (*(float *)(param_1 + 9) * (float)plVar18 < (float)(param_1[8] + 1))) {
    uVar26 = 1;
    if ((long *)0x2 < plVar18) {
      uVar26 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
    }
    plVar30 = (long *)(uVar26 | (long)plVar18 << 1);
    plVar18 = (long *)(long)((float)(param_1[8] + 1) / *(float *)(param_1 + 9));
    if (plVar30 <= plVar18) {
      plVar30 = plVar18;
    }
    if ((long)plVar30 - 1U == 0) {
      plVar30 = (long *)0x2;
    }
    else if (((ulong)plVar30 & (long)plVar30 - 1U) != 0) {
      func_0x000107c60c44();
    }
    plVar18 = (long *)param_1[6];
    if (plVar18 < plVar30) {
LAB_1000327a8:
      if ((ulong)plVar30 >> 0x3d != 0) {
        func_0x000104c4f740();
LAB_100032b1c:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100032b20);
        (*pcVar11)();
      }
      lVar13 = (long)plVar30 << 3;
      func_0x000107c60e20();
      lVar14 = param_1[5];
      param_1[5] = lVar13;
      if (lVar14 != 0) {
        func_0x000107c60e14();
      }
      plVar18 = (long *)0x0;
      param_1[6] = (long)plVar30;
      do {
        *(undefined8 *)(param_1[5] + (long)plVar18 * 8) = 0;
        plVar18 = (long *)((long)plVar18 + 1);
      } while (plVar30 != plVar18);
      plVar21 = (long *)param_1[7];
      plVar18 = plVar30;
      if (plVar21 != (long *)0x0) {
        plVar22 = (long *)plVar21[1];
        uVar26 = (long)plVar30 - 1;
        if (((ulong)plVar30 & uVar26) == 0) {
          plVar22 = (long *)((ulong)plVar22 & uVar26);
        }
        else if (plVar30 <= plVar22) {
          uVar29 = 0;
          if (plVar30 != (long *)0x0) {
            uVar29 = (ulong)plVar22 / (ulong)plVar30;
          }
          plVar22 = (long *)((long)plVar22 - uVar29 * (long)plVar30);
        }
        *(long **)(param_1[5] + (long)plVar22 * 8) = param_1 + 7;
        plVar23 = (long *)*plVar21;
        while (plVar23 != (long *)0x0) {
          plVar25 = (long *)plVar23[1];
          if (((ulong)plVar30 & uVar26) == 0) {
            plVar25 = (long *)((ulong)plVar25 & uVar26);
          }
          else if (plVar30 <= plVar25) {
            uVar29 = 0;
            if (plVar30 != (long *)0x0) {
              uVar29 = (ulong)plVar25 / (ulong)plVar30;
            }
            plVar25 = (long *)((long)plVar25 - uVar29 * (long)plVar30);
          }
          plVar24 = plVar23;
          if (plVar25 != plVar22) {
            lVar13 = param_1[5];
            if (*(long *)(lVar13 + (long)plVar25 * 8) == 0) {
              *(long **)(lVar13 + (long)plVar25 * 8) = plVar21;
              plVar22 = plVar25;
            }
            else {
              *plVar21 = *plVar23;
              *plVar23 = **(undefined8 **)(lVar13 + (long)plVar25 * 8);
              **(long **)(lVar13 + (long)plVar25 * 8) = (long)plVar23;
              plVar24 = plVar21;
            }
          }
          plVar21 = plVar24;
          plVar23 = (long *)*plVar24;
        }
      }
    }
    else if (plVar30 < plVar18) {
      plVar21 = (long *)(long)((float)(ulong)param_1[8] / *(float *)(param_1 + 9));
      if ((plVar18 < (long *)0x3) || (((ulong)plVar18 & (long)plVar18 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else if ((long *)0x1 < plVar21) {
        plVar21 = (long *)(1L << (-LZCOUNT((long)plVar21 + -1) & 0x3fU));
      }
      if (plVar30 <= plVar21) {
        plVar30 = plVar21;
      }
      if (plVar30 < plVar18) {
        if (plVar30 != (long *)0x0) goto LAB_1000327a8;
        lVar13 = param_1[5];
        param_1[5] = 0;
        if (lVar13 != 0) {
          func_0x000107c60e14();
        }
        param_1[6] = 0;
        plVar18 = (long *)0x0;
      }
      else {
        plVar18 = (long *)param_1[6];
      }
    }
    if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
      plVar30 = (long *)((long)plVar18 - 1U & (ulong)plVar17);
    }
    else {
      plVar30 = plVar17;
      if (plVar18 <= plVar17) {
        uVar26 = 0;
        if (plVar18 != (long *)0x0) {
          uVar26 = (ulong)plVar17 / (ulong)plVar18;
        }
        plVar30 = (long *)((long)plVar17 - uVar26 * (long)plVar18);
      }
    }
  }
  lVar13 = param_1[5];
  plVar17 = *(long **)(lVar13 + (long)plVar30 * 8);
  if (plVar17 == (long *)0x0) {
    plVar17 = param_1 + 7;
    *plVar28 = *plVar17;
    *plVar17 = (long)plVar28;
    *(long **)(lVar13 + (long)plVar30 * 8) = plVar17;
    if (*plVar28 == 0) goto LAB_100032988;
    plVar30 = *(long **)(*plVar28 + 8);
    if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
      plVar30 = (long *)((ulong)plVar30 & (long)plVar18 - 1U);
    }
    else if (plVar18 <= plVar30) {
      uVar26 = 0;
      if (plVar18 != (long *)0x0) {
        uVar26 = (ulong)plVar30 / (ulong)plVar18;
      }
      plVar30 = (long *)((long)plVar30 - uVar26 * (long)plVar18);
    }
    plVar17 = (long *)(param_1[5] + (long)plVar30 * 8);
  }
  else {
    *plVar28 = *plVar17;
  }
  *plVar17 = (long)plVar28;
LAB_100032988:
  param_1[8] = param_1[8] + 1;
LAB_100032994:
  if (cStack_89 < '\0') {
    func_0x000107c60e14(lStack_a0);
  }
  ppuStack_88 = &PTR_DAT_110b01d60;
  FUN_100032e98(&ppuStack_88);
LAB_1000329b8:
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    lVar13 = 0x20;
    if (param_6 == 0) {
      lVar13 = 8;
    }
    plVar28 = (long *)(plVar28[4] + lVar13);
    lVar13 = param_2[1];
    iVar5 = *(int *)((long)plVar28 + 0xc);
    if (*(uint *)(plVar28 + 1) <= (uint)(((int)plVar28[2] + iVar5) * 3)) {
      uVar2 = *(uint *)(plVar28 + 1) + 2;
      lVar27 = *plVar28;
      lVar14 = 1;
      func_0x000107c60ee8(1,(ulong)(uVar2 * 2) << 3);
      *plVar28 = lVar14;
      *(uint *)(plVar28 + 1) = uVar2 * 2 - 2;
      if ((iVar5 != 0) && (*(undefined4 *)((long)plVar28 + 0xc) = 0, uVar2 != 0)) {
        uVar26 = 0;
        do {
          puVar1 = (ulong *)(lVar27 + uVar26 * 8);
          if (1 < *puVar1) {
            uVar29 = puVar1[1];
            plVar30 = plVar28;
            func_0x000100032f98();
            plVar30[1] = uVar29;
          }
          uVar3 = (int)uVar26 + 2;
          uVar26 = (ulong)uVar3;
        } while (uVar3 < uVar2);
      }
      func_0x000107c60fd0(lVar27);
    }
    func_0x000100032f98(plVar28,lVar13);
    plVar28[1] = (long)param_2;
  }
  return;
}



/* Entry: 100032b90; end: 100032bfb;  */

long * FUN_100032b90(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)((long)param_1 + 0xc) != 0) {
    uVar4 = 0;
    do {
      puVar1 = (ulong *)(*param_1 + uVar4 * 8);
      plVar3 = (long *)*puVar1;
      if ((long *)0x1 < plVar3) {
        (**(code **)(*plVar3 + 8))(plVar3,puVar1[1]);
      }
      uVar2 = (int)uVar4 + 2;
      uVar4 = (ulong)uVar2;
    } while (uVar2 <= *(uint *)(param_1 + 1));
  }
  func_0x000107c60fd0(*param_1);
  return param_1;
}



/* Entry: 100032bfc; end: 100032e43;  */

undefined8 * FUN_100032bfc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long alStack_c8 [2];
  byte abStack_b1 [25];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10002d4d8(alStack_c8,&UNK_10f57c06b);
  FUN_10002d4d8(abStack_b1 + 1,&UNK_10f48d203);
  FUN_10002d4d8(auStack_98,&UNK_10f57c072);
  puVar5 = auStack_80;
  FUN_10002d4d8(puVar5," ");
  lVar9 = 0;
LAB_100032c94:
  uVar8 = 0;
  do {
    uVar6 = (ulong)*(char *)((long)param_2 + 0x17);
    puVar10 = param_2;
    if ((long)uVar6 < 0) {
      uVar6 = param_2[1];
      puVar10 = (undefined8 *)*param_2;
    }
    uVar1 = *(ulong *)((long)alStack_c8 + lVar9 + 8);
    plVar3 = (long *)*(char **)((long)alStack_c8 + lVar9);
    if (-1 < (char)abStack_b1[lVar9]) {
      uVar1 = (ulong)abStack_b1[lVar9];
      plVar3 = (long *)((long)alStack_c8 + lVar9);
    }
    lVar7 = uVar6 - uVar8;
    if (uVar6 < uVar8) break;
    if (uVar1 != 0) {
      if (lVar7 < (long)uVar1) break;
      puVar4 = (undefined8 *)((long)puVar10 + uVar8);
      cVar2 = *(char *)plVar3;
      while( true ) {
        puVar5 = puVar4;
        if ((0xfffffffffffffffe < lVar7 - uVar1) ||
           (func_0x000107c610ac(puVar4,(long)cVar2,(lVar7 - uVar1) + 1), puVar5 = puVar4,
           puVar4 == (undefined8 *)0x0)) goto LAB_100032d50;
        func_0x000107c610b0();
        if ((int)puVar5 == 0) break;
        puVar4 = (undefined8 *)((long)puVar4 + 1);
        lVar7 = (long)((long)puVar10 + uVar6) - (long)puVar4;
        puVar5 = puVar4;
        if (lVar7 < (long)uVar1) goto LAB_100032d50;
      }
      if ((puVar4 == (undefined8 *)((long)puVar10 + uVar6)) ||
         (uVar8 = (long)puVar4 - (long)puVar10, uVar8 == 0xffffffffffffffff)) break;
    }
    puVar5 = param_2;
    func_0x000107c60c4c(param_2,uVar8,uVar1);
  } while( true );
LAB_100032d50:
  lVar9 = lVar9 + 0x18;
  if (lVar9 == 0x60) {
    lVar9 = 0;
    uVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    do {
      if ((&cStack_69)[lVar9] < '\0') {
        puVar5 = *(undefined8 **)((long)auStack_80 + lVar9);
        func_0x000107c60e14(puVar5);
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x60);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return puVar5;
    }
    func_0x000107c60e78();
    func_0x000107c60bd8(puVar5);
    return (undefined8 *)&UNK_109683574;
  }
  goto LAB_100032c94;
}



/* Entry: 100032e44; end: 100032e5b;  */

undefined * FUN_100032e44(void)

{
  return &UNK_109683574;
}



/* Entry: 100032e5c; end: 100032e97;  */

void FUN_100032e5c(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uStack_11;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_10002d120(&uStack_11,puVar2,uVar1);
  return;
}



/* Entry: 100032e98; end: 100032f83;  */

void FUN_100032e98(long param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  
  if (*(long *)(param_1 + 8) != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 8) + -8);
    do {
      iVar1 = *piVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar3) {
        *piVar4 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      DataMemoryBarrier(2,1);
      (**(code **)**(undefined8 **)(param_1 + 8))();
      FUN_100032b90(*(long *)(param_1 + 8) + -0x20);
      func_0x000107c60fd0(*(long *)(param_1 + 8) + -0x20);
    }
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 100032f84; end: 10003300f;  */

undefined8 FUN_100032f84(void)

{
  return 0;
}



/* Entry: 100033010; end: 1000332d3;  */

void FUN_100033010(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  ppuStack_40 = &PTR_DAT_110b01468;
  uStack_38 = 0;
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 7;
  *puVar3 = &PTR_DAT_110b00f88;
  puVar3[1] = &UNK_10f57be5c;
  puVar4 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar3[3] = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = uStack_38;
    *puVar4 = ppuStack_40;
    if (puVar4[1] != 0) {
      piVar7 = (int *)(puVar4[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_40 = &PTR_DAT_110b01d60;
  puRam000000011382a900 = puVar3;
  FUN_100032e98(&ppuStack_40);
  uVar5 = 0x20;
  func_0x000107c60e20();
  FUN_100033398();
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  uRam000000011382a908 = uVar5;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b01148;
  puVar3[1] = &UNK_10f57be6c;
  puVar6 = (undefined1 *)0x1;
  func_0x000107c610a0();
  puVar3[3] = puVar6;
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  uVar5 = 0x20;
  puRam000000011382a910 = puVar3;
  func_0x000107c60e20();
  FUN_100033398();
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  uRam000000011382a918 = uVar5;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b01210;
  puVar3[1] = "Context";
  uVar5 = 0x10;
  func_0x000107c610a0();
  puVar3[3] = uVar5;
  FUN_100031fe0();
  FUN_100032070();
  puVar4 = (undefined8 *)0x20;
  puRam0000000113735b68 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar4 + 2) = 5;
  *puVar4 = &PTR_DAT_110b013a0;
  puVar4[1] = &UNK_10f57be7c;
  puVar3 = (undefined8 *)0x1;
  func_0x000107c60ee8(1,0x10);
  puVar4[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_100033528();
    *puVar3 = &PTR_DAT_110b01708;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382a920 = puVar4;
  return;
}



/* Entry: 1000332d4; end: 100033397;  */

undefined * FUN_1000332d4(void)

{
  return &UNK_109694364;
}



/* Entry: 100033398; end: 1000333df;  */

undefined8 * FUN_100033398(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 2) = 5;
  *param_1 = &PTR_DAT_110b01080;
  param_1[1] = param_2;
  lVar1 = 0x10;
  func_0x000107c610a0();
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_1000333e0();
  }
  return param_1;
}



/* Entry: 1000333e0; end: 10003346f;  */

undefined8 * FUN_1000333e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_FUN_110b00de0;
  }
  *param_1 = &PTR_DAT_110b00af0;
  param_1[1] = puVar1;
  puVar1 = param_1;
  FUN_100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_DAT_110b01c08;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 100033470; end: 100033473;  */

void FUN_100033470(void)

{
  return;
}



/* Entry: 100033474; end: 1000334db;  */

void FUN_100033474(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  (**(code **)**(undefined8 **)(param_1 + 8))();
  FUN_100032b90(*(long *)(param_1 + 8) + -0x20);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + -0x20);
  func_0x000107c612c4(puVar1,(long)param_2 + 0x20);
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 4;
  return;
}



/* Entry: 1000334dc; end: 100033527;  */

bool FUN_1000334dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar1 == uVar2) {
    return true;
  }
  if (-1 < (long)(uVar2 & uVar1)) {
    return false;
  }
  uVar1 = uVar1 & 0x7fffffffffffffff;
  func_0x000107c613c0(uVar1,uVar2 & 0x7fffffffffffffff);
  return (int)uVar1 == 0;
}



/* Entry: 100033528; end: 1000335b7;  */

undefined8 * FUN_100033528(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_FUN_110b00de0;
  }
  *param_1 = &PTR_DAT_110b01468;
  param_1[1] = puVar1;
  puVar1 = param_1;
  FUN_100033474(param_1,0x20);
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR_DAT_110b01c70;
  puVar1[1] = 0;
  return param_1;
}



/* Entry: 1000335b8; end: 1000335c7;  */

/* WARNING: Removing unreachable block (ram,0x000100033614) */
/* WARNING: Removing unreachable block (ram,0x00010003361c) */

void FUN_1000335b8(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000335c8; end: 100033667;  */

void FUN_1000335c8(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100033668; end: 10003367f;  */

undefined * FUN_100033668(void)

{
  return &UNK_109695a90;
}



/* Entry: 100033680; end: 10003371f;  */

void FUN_100033680(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100033720; end: 1000337d7;  */

/* WARNING: Removing unreachable block (ram,0x00010003390c) */
/* WARNING: Removing unreachable block (ram,0x000100033914) */

void FUN_100033720(void)

{
  undefined1 *puVar1;
  
  FUN_100033680("",0);
  FUN_1000337f0("",0);
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000337d8; end: 1000337ef;  */

undefined * FUN_1000337d8(void)

{
  return &UNK_1096949c0;
}



/* Entry: 1000337f0; end: 10003388f;  */

void FUN_1000337f0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100033890; end: 1000338bf;  */

undefined * FUN_100033890(void)

{
  return &UNK_1096945cc;
}



/* Entry: 1000338c0; end: 10003395f;  */

void FUN_1000338c0(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100033960; end: 100033977;  */

undefined * FUN_100033960(void)

{
  return &UNK_109695230;
}



/* Entry: 100033978; end: 100033acf;  */

void FUN_100033978(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  puVar3 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b019c0;
  puVar3[1] = &DAT_10f57c05c;
  lVar4 = 0x10;
  func_0x000107c610a0();
  puVar3[3] = lVar4;
  if (lVar4 != 0) {
    FUN_1000333e0();
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_30 = &PTR_DAT_110b01468;
  uStack_28 = 0;
  puVar5 = (undefined8 *)0x20;
  puRam000000011382a930 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar5 + 2) = 5;
  *puVar5 = &PTR_DAT_110b01a88;
  puVar5[1] = &UNK_10f57c061;
  puVar3 = (undefined8 *)0x10;
  func_0x000107c610a0();
  puVar5[3] = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = uStack_28;
    *puVar3 = ppuStack_30;
    if (puVar3[1] != 0) {
      piVar6 = (int *)(puVar3[1] + -8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  FUN_100031fe0();
  FUN_100032070();
  ppuStack_30 = &PTR_DAT_110b01d60;
  puRam0000000113735b70 = puVar5;
  FUN_100032e98(&ppuStack_30);
  return;
}



/* Entry: 100033ad0; end: 100033ae3;  */

undefined8 FUN_100033ad0(void)

{
  return 0;
}



/* Entry: 100033ae4; end: 100033b7b;  */

undefined8 * FUN_100033ae4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_110b01d60;
  puVar1 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 3) = 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 4;
    *puVar1 = &PTR_FUN_110b00de0;
  }
  *param_1 = &PTR_DAT_110b01f68;
  param_1[1] = puVar1;
  FUN_100033c28(param_1);
  lVar2 = param_1[1];
  *(undefined8 *)(lVar2 + 8) = param_2;
  *(undefined4 *)(lVar2 + 0x10) = param_3;
  return param_1;
}



/* Entry: 100033b7c; end: 100033c27;  */

/* WARNING: Possible PIC construction at 0x000100033bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100033bf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033bcc) */
/* WARNING: Removing unreachable block (ram,0x000100033bf4) */

void FUN_100033b7c(void)

{
  FUN_100033ae4(0x113735b78,*(undefined8 *)PTR____stdinp_11034bdd0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&DAT_10969757c,0x113735b78,0x100000000);
  return;
}



/* Entry: 100033c28; end: 100033cab;  */

void FUN_100033c28(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  
  FUN_100033474(param_1,0x28);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b00de0;
  puVar3 = param_1;
  FUN_100033cac();
  param_1[3] = &PTR_DAT_110b01d60;
  uVar5 = *puVar3;
  param_1[4] = puVar3[1];
  param_1[3] = uVar5;
  if (param_1[4] != 0) {
    piVar4 = (int *)(param_1[4] + -8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[3] = &PTR_DAT_110b00af0;
  *param_1 = &PTR_DAT_110b01fe0;
  return;
}



/* Entry: 100033cac; end: 100033d07;  */

undefined8 FUN_100033cac(void)

{
  int iVar1;
  
  if ((bRam000000011382a948 & 1) == 0) {
    iVar1 = 0x1382a948;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      ppuRam000000011382a938 = &PTR_DAT_110b01d60;
      uRam000000011382a940 = 0;
      func_0x000107c60e4c(0x11382a948);
    }
  }
  return 0x11382a938;
}



/* Entry: 100033d08; end: 100033d93;  */

void FUN_100033d08(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100033d94; end: 100033dab;  */

undefined * FUN_100033d94(void)

{
  return &UNK_10969e474;
}



/* Entry: 100033dac; end: 100033e2f;  */

void FUN_100033dac(long *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = param_1;
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
  }
  else {
    if (0x7ffffffffffffff6 < param_3) {
      func_0x000104bd47d4();
      func_0x000107c60e20(param_2);
      return;
    }
    uVar2 = 0x19;
    if ((param_3 | 7) != 0x17) {
      uVar2 = (param_3 | 7) + 1;
    }
    FUN_100033e30();
    param_1[1] = param_3;
    param_1[2] = uVar2 | 0x8000000000000000;
    *param_1 = (long)plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(plVar1,param_2,param_3 + 1);
  return;
}



/* Entry: 100033e30; end: 100033edb;  */

void FUN_100033e30(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c60e20(param_2);
  return;
}



/* Entry: 100033edc; end: 100033f67;  */

void FUN_100033edc(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100033f68; end: 100033f7f;  */

undefined * FUN_100033f68(void)

{
  return &UNK_10969f024;
}



/* Entry: 100033f80; end: 10003400f;  */

void FUN_100033f80(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_DAT_110b02538;
  puVar1[1] = &UNK_10f57c1c7;
  lVar2 = 0x10;
  func_0x000107c610a0();
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    FUN_1000333e0();
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa08 = puVar1;
  return;
}



/* Entry: 100034010; end: 10003409b;  */

void FUN_100034010(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 10003409c; end: 1000340b3;  */

undefined * FUN_10003409c(void)

{
  return &UNK_1096a138c;
}



/* Entry: 1000340b4; end: 10003413f;  */

void FUN_1000340b4(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100034140; end: 100034157;  */

undefined * FUN_100034140(void)

{
  return &UNK_1096a5350;
}



/* Entry: 100034158; end: 1000341df;  */

void FUN_100034158(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_DAT_110b02990;
  puVar1[1] = &UNK_10f57c26e;
  puVar2 = (undefined8 *)0x28;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa10 = puVar1;
  return;
}



/* Entry: 1000341e0; end: 10003436b;  */

void FUN_1000341e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b02b88;
  puVar1[1] = &UNK_10f57c2ef;
  lVar2 = 0x10;
  func_0x000107c610a0();
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    FUN_1000333e0();
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam0000000113735bc8 = puVar1;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b02c50;
  puVar3[1] = &DAT_10f63a6be;
  uVar4 = 1;
  func_0x000107c60ee8(1,0x10);
  puVar3[3] = uVar4;
  FUN_100031fe0();
  FUN_100032070();
  puVar1 = (undefined8 *)0x20;
  puRam000000011382aa18 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_DAT_110b02d40;
  puVar1[1] = "Image";
  puVar5 = (undefined4 *)0x60;
  func_0x000107c610a0();
  puVar1[3] = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x42ff0000;
    *(undefined8 *)(puVar5 + 3) = 0;
    *(undefined8 *)(puVar5 + 1) = 0;
    *(undefined8 *)(puVar5 + 7) = 0;
    *(undefined8 *)(puVar5 + 5) = 0;
    *(undefined8 *)(puVar5 + 0xb) = 0;
    *(undefined8 *)(puVar5 + 9) = 0;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined8 *)(puVar5 + 0x14) = 0;
    *(undefined4 **)(puVar5 + 0x10) = puVar5 + 2;
    *(undefined4 **)(puVar5 + 0x12) = puVar5 + 0x14;
    *(undefined8 *)(puVar5 + 0x16) = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam0000000113735bd0 = puVar1;
  return;
}



/* Entry: 10003436c; end: 100034393;  */

undefined8 FUN_10003436c(void)

{
  return 0;
}



/* Entry: 100034394; end: 1000344df;  */

void FUN_100034394(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b02f40;
  puVar1[1] = &UNK_10f57c512;
  puVar2 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam000000011382aa20 = puVar1;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b02f40;
  puVar3[1] = &UNK_10f57c51f;
  puVar2 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar3[3] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar1 = (undefined8 *)0x20;
  puRam000000011382aa28 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b02f40;
  puVar1[1] = &UNK_10f57c52b;
  puVar2 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa30 = puVar1;
  return;
}



/* Entry: 1000344e0; end: 1000344f7;  */

undefined * FUN_1000344e0(void)

{
  return &UNK_1096a7bdc;
}



/* Entry: 1000344f8; end: 10003457b;  */

void FUN_1000344f8(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b03140;
  puVar1[1] = &UNK_10f57c512;
  puVar2 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0xffffffff;
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa38 = puVar1;
  return;
}



/* Entry: 10003457c; end: 100034593;  */

undefined * FUN_10003457c(void)

{
  return &UNK_1096a8ae8;
}



/* Entry: 100034594; end: 10003461f;  */

void FUN_100034594(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100034620; end: 100034633;  */

undefined8 FUN_100034620(void)

{
  return 0;
}



/* Entry: 100034634; end: 1000346bf;  */

void FUN_100034634(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000346c0; end: 1000346d7;  */

undefined * FUN_1000346c0(void)

{
  return &UNK_1096ab248;
}



/* Entry: 1000346d8; end: 100034813;  */

void FUN_1000346d8(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 100034814; end: 10003491b;  */

undefined * FUN_100034814(void)

{
  return &UNK_1096abf10;
}



/* Entry: 10003491c; end: 1000349a7;  */

void FUN_10003491c(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x1;
  func_0x000107c610a0();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c60fd0();
  }
  return;
}



/* Entry: 1000349a8; end: 1000349bf;  */

undefined * FUN_1000349a8(void)

{
  return &UNK_1096ad430;
}



/* Entry: 1000349c0; end: 100034b1b;  */

void FUN_1000349c0(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 5;
  *puVar1 = &PTR_DAT_110b03ed0;
  puVar1[1] = &UNK_10f57c979;
  puVar2 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar1[3] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar3 = (undefined8 *)0x20;
  puRam000000011382aa48 = puVar1;
  func_0x000107c60e20();
  *(undefined4 *)(puVar3 + 2) = 5;
  *puVar3 = &PTR_DAT_110b03ed0;
  puVar3[1] = &UNK_10f57c984;
  puVar2 = (undefined4 *)0x4;
  func_0x000107c610a0();
  puVar3[3] = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
  }
  FUN_100031fe0();
  FUN_100032070();
  puVar1 = (undefined8 *)0x20;
  puRam000000011382aa50 = puVar3;
  func_0x000107c60e20();
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_DAT_110b03f98;
  puVar1[1] = &UNK_10f57c98f;
  lVar4 = 0x10;
  func_0x000107c610a0();
  puVar1[3] = lVar4;
  if (lVar4 != 0) {
    FUN_100034b34();
  }
  FUN_100031fe0();
  FUN_100032070();
  puRam000000011382aa58 = puVar1;
  return;
}


