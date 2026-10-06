/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10784e47c; end: 10784e5d3;  */

void FUN_10784e47c(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 **ppuStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 *puStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [56];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2 + 8;
  uVar7 = param_3;
  func_0x00010784e6e8();
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    ppuVar5 = (undefined8 **)0x0;
  }
  else {
    unaff_x20 = (undefined8 *)0x90;
    __Znwm();
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = &PTR_DAT_1109e2298;
    func_0x000104c2fe00(auStack_80,uVar7);
    uStack_a8 = *(undefined8 *)(uVar7 + 0x40);
    uStack_b0 = *(undefined8 *)(uVar7 + 0x38);
    if (*(long *)(uVar7 + 0x40) != 0) {
      plVar1 = (long *)(*(long *)(uVar7 + 0x40) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar8 = unaff_x20 + 3;
    *puVar8 = &PTR_DAT_1109e22e8;
    func_0x000104c318bc(unaff_x20 + 4,auStack_80);
    unaff_x20[0xc] = uStack_a8;
    unaff_x20[0xb] = uStack_b0;
    uStack_90 = 0;
    uStack_88 = 0;
    *(undefined1 *)(unaff_x20 + 0xd) = 0;
    *(undefined1 *)(unaff_x20 + 0x11) = 0;
    func_0x000107331610(&uStack_90);
    func_0x000104c2f714(auStack_80);
    param_2 = param_2 + 0x28;
    puStack_a0 = puVar8;
    puStack_98 = unaff_x20;
    func_0x00010786e214(param_2);
    if ((param_3 & 1) != 0) {
      func_0x00010737de18(unaff_x20 + 0xd,param_2);
    }
    *param_1 = puVar8;
    param_1[1] = unaff_x20;
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    ppuVar5 = &puStack_a0;
    func_0x00010784e900();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    func_0x00010784e900(&puStack_a0);
    ppuVar6 = ppuVar5;
    __Unwind_Resume();
    puStack_b8 = &DAT_10784e5d4;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_e0 = 0x3f800000;
    puVar8 = ppuVar6[4];
    puStack_d0 = unaff_x20;
    ppuStack_c8 = ppuVar5;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x00010737efb4(&uStack_100);
    ppuVar6 = ppuVar6 + 1;
    func_0x0001077c2714();
    ppuStack_110 = ppuVar6;
    puStack_108 = puVar8;
    while (ppuStack_110 != (undefined8 **)0x0) {
      func_0x000107373114(&uStack_100,puStack_108);
      func_0x0001077c27b4(&ppuStack_110);
    }
    func_0x00010737efc8(extraout_x8,&uStack_100);
    func_0x0001072981bc(&uStack_100);
    return;
  }
  return;
}



/* Entry: 10784e81c; end: 10784e82f;  */

void FUN_10784e81c(void)

{
  func_0x00010784e8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784e930; end: 10784e9bf;  */

long FUN_10784e930(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010782cbd4();
  func_0x00010784f518();
  func_0x00010784eb48(lVar1 + 0x368,param_1,param_2,param_4,param_5,param_1 + 0x20,param_6,param_7);
  return param_1;
}



/* Entry: 10784ee70; end: 10784ee77;  */

void FUN_10784ee70(void)

{
  return;
}



/* Entry: 10784f2e8; end: 10784f303;  */

void FUN_10784f2e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109e25a8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10784fe90; end: 10784feab;  */

long FUN_10784fe90(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x120) != '\x01') {
    return param_1 + 0x58;
  }
  lVar1 = param_1 + 0xe0;
  if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
    return lVar1;
  }
  func_0x000104bdc2c8();
  if (*(char *)(lVar1 + 0x18) == '\x01') {
    func_0x00010737cf48();
  }
  else {
    func_0x00010737cf1c();
  }
  return lVar1;
}



/* Entry: 1078507f8; end: 10785087f;  */

void FUN_1078507f8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  func_0x000107850880();
  func_0x000107851cb4(*(undefined8 *)(param_2 + 0x38));
  lVar1 = *(long *)(param_2 + 0x38) + 0xc0;
  func_0x00010737ba38(lVar1,param_3);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x50);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    param_1[1] = *(undefined8 *)(lVar1 + 0x50);
    *param_1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x000107851c94();
      } while (extraout_w10 != 0);
    }
  }
  func_0x000107851cf8();
  return;
}



/* Entry: 107850f34; end: 107851137;  */

void FUN_107850f34(undefined8 *param_1,long *param_2,long param_3,long param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  long lVar6;
  long *plVar7;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long alStack_e0 [7];
  undefined4 auStack_a8 [2];
  long *plStack_a0;
  undefined8 uStack_68;
  
  puVar3 = param_1;
  plVar5 = param_2;
  func_0x000107851cc4();
  *(undefined4 *)puVar3 = 7;
  lStack_f0 = param_3 + param_4;
  plVar7 = (long *)0x63;
  uStack_e8 = 99;
  lStack_f8 = param_3;
  uStack_68 = extraout_x8;
LAB_107850f98:
  do {
    iVar2 = (int)&lStack_f8;
    func_0x000104c2f230();
    if (iVar2 == 0) {
      func_0x000107851c80(uStack_68);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000104c3323c();
        func_0x000107851d30();
        *param_1 = &PTR_DAT_1109e26f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
        return;
      }
      return;
    }
    in_ZR = uStack_e8._4_4_ + -1 == 6;
    switch(uStack_e8._4_4_ + -1) {
    case 0:
      plVar4 = &lStack_f8;
      func_0x000104c2f1c8(plVar4);
      lVar6 = *param_2;
      if (lVar6 == 0) {
        func_0x000104c302a4(alStack_e0,plVar4,plVar5);
      }
      else {
        lStack_100 = param_2[1];
        lStack_108 = lVar6;
        if (lStack_100 != 0) {
          do {
            func_0x000107851c94();
          } while (extraout_w10 != 0);
        }
        func_0x000104c32ecc(alStack_e0,plVar4,plVar5,&lStack_108);
      }
      plVar5 = alStack_e0;
      func_0x000104c33004(auStack_a8);
      func_0x000107851de0();
      func_0x000104c3323c(auStack_a8);
      func_0x000107851e18();
      if (lVar6 != 0) {
        func_0x000104c33970(&lStack_108);
      }
      goto LAB_107850f98;
    case 1:
      func_0x000104c331c8(&lStack_f8);
      plVar7 = (long *)(double)SUB84(plVar7,0);
      goto code_r0x00010785104c;
    case 2:
      func_0x000104c331f0(&lStack_f8);
code_r0x00010785104c:
      auStack_a8[0] = 3;
      plStack_a0 = plVar7;
      break;
    case 3:
      plVar4 = &lStack_f8;
      func_0x000104c33218();
      goto code_r0x000107851060;
    case 4:
      plVar4 = &lStack_f8;
      func_0x000104c317e4();
      auStack_a8[0] = 5;
      plStack_a0 = plVar4;
      break;
    case 5:
      plVar4 = &lStack_f8;
      func_0x000104c33220();
code_r0x000107851060:
      auStack_a8[0] = 4;
      plStack_a0 = plVar4;
      break;
    case 6:
      uVar1 = SUB81(&lStack_f8,0);
      func_0x000104c32f6c();
      auStack_a8[0] = 6;
      plStack_a0 = (long *)CONCAT71(plStack_a0._1_7_,uVar1);
      break;
    default:
      goto LAB_107851034;
    }
    func_0x000107851de0();
    func_0x000104c3323c(auStack_a8);
  } while( true );
LAB_107851034:
  func_0x000104c2f2fc(&lStack_f8);
  goto LAB_107850f98;
}



/* Entry: 1078512a0; end: 1078512f3;  */

long * FUN_1078512a0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x0001078512f4(plVar1 + 2);
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



/* Entry: 1078513f8; end: 10785141f;  */

void FUN_1078513f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x000107851db4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e2810;
  param_1[1] = uVar1;
  return;
}



/* Entry: 107851768; end: 10785176b;  */

void FUN_107851768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2890;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107851a30; end: 107851a3b;  */

void FUN_107851a30(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e28e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107851ba0; end: 107851bb3;  */

void FUN_107851ba0(void)

{
  func_0x000107851c64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107851fd8; end: 107851fdb;  */

undefined8 * FUN_107851fd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e29f8;
  (**(code **)(*(long *)param_1[0x1e] + 0x18))((long *)param_1[0x1e],*(undefined4 *)(param_1 + 1));
  func_0x0001078536e4(param_1 + 0x1f);
  func_0x0001074f8ec0(param_1 + 2);
  return param_1;
}



/* Entry: 1078531ac; end: 1078531bf;  */

void FUN_1078531ac(void)

{
  func_0x0001078531fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078533d0; end: 1078533f7;  */

void FUN_1078533d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109e2aa0;
  return;
}



/* Entry: 1078536c8; end: 1078536e3;  */

void FUN_1078536c8(long param_1)

{
  func_0x000105302f48();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 107853fd8; end: 107853fe3;  */

undefined ** FUN_107853fd8(void)

{
  return &PTR_DAT_1109e2b80;
}



/* Entry: 107854214; end: 107854227;  */

void FUN_107854214(void)

{
  func_0x0001078541e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10785464c; end: 10785466f;  */

void FUN_10785464c(void)

{
  func_0x000107854820();
  func_0x000107853040();
  return;
}



/* Entry: 107854c80; end: 107854c83;  */

void FUN_107854c80(void)

{
  func_0x000107854cd8();
  func_0x0001074f8ec0();
  return;
}



/* Entry: 107854fec; end: 107854fef;  */

void FUN_107854fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e2ce0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10785514c; end: 10785519b;  */

void FUN_10785514c(long param_1)

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



/* Entry: 1078556c4; end: 1078556eb;  */

undefined8 * FUN_1078556c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109e2d70;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107855db8();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  func_0x000107855644(puVar1 + 4,puVar2 + 3);
  return puVar1;
}



/* Entry: 107855d6c; end: 107855def;  */

long FUN_107855d6c(undefined8 param_1,long param_2)

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



/* Entry: 107856524; end: 10785654b;  */

void FUN_107856524(long param_1)

{
  func_0x0001001148fc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x0001072792b8();
  }
  return;
}



/* Entry: 107856738; end: 10785676f;  */

long FUN_107856738(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109e2f10);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107856958; end: 107856993;  */

undefined8 FUN_107856958(undefined8 param_1)

{
  func_0x000107856b98();
  func_0x000107856aa8();
  return param_1;
}



/* Entry: 107856bc0; end: 107856c57;  */

long * FUN_107856bc0(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)0x0;
  if ((param_2 == 0xb) && ((*(byte *)(param_3 + 2) & 1) != 0)) {
    func_0x000107392e34();
    lVar2 = ((long *)*param_3)[6];
    (**(code **)(*(long *)*param_3 + 0x40))(&uStack_50);
    if (cStack_40 == '\x01') {
      plVar1 = *(long **)(param_1 + 0x20);
      uStack_28 = uStack_48;
      uStack_30 = uStack_50;
      if (plVar1 == (long *)0x0) {
        func_0x000104bfeb48();
        *plVar1 = (long)&PTR_DAT_1109e2ff0;
        func_0x0001074fdf6c(plVar1 + 1);
        return plVar1;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x60,&uStack_30);
      plVar1 = (long *)0x1;
    }
    else {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}



/* Entry: 107857008; end: 107857047;  */

undefined1 * FUN_107857008(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  func_0x000107857048();
  return param_1;
}



/* Entry: 1078571ac; end: 1078571bf;  */

void FUN_1078571ac(void)

{
  func_0x0001078571e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107857498; end: 1078576af;  */

void FUN_107857498(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong extraout_x8;
  long lVar7;
  long *plVar8;
  long lStack_a8;
  undefined1 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_60 [32];
  undefined4 uStack_40;
  
  plVar8 = (long *)(param_1 + 8);
  cVar2 = *(char *)(param_1 + 0x18);
  cVar4 = '\0';
  if (*plVar8 != *param_2) {
    cVar4 = cVar2;
  }
  cVar3 = cVar2;
  if (cVar2 != (char)param_2[2] || cVar4 != '\0') {
    func_0x0001078576b0(param_1 + 0xd8);
    cVar2 = (char)param_2[2];
    cVar3 = *(char *)(param_1 + 0x18);
  }
  if (cVar2 == cVar3 && cVar2 != '\0') {
    lVar7 = *param_2;
    if (lVar7 == *plVar8) {
      return;
    }
    if (cVar3 != '\0') {
      lVar6 = param_2[1];
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_78 = *(undefined8 *)(param_1 + 0x10);
      puStack_80 = *(undefined **)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar7;
      *(long *)(param_1 + 0x10) = lVar6;
      func_0x000107410ccc(&puStack_80);
      puStack_80 = &UNK_10e52b660;
      func_0x0001078599a4(*(undefined1 *)(param_1 + 0x18));
      uStack_40 = 0x3f800000;
      if ((extraout_x8 & 1) == 0) goto LAB_107857598;
      goto LAB_107857630;
    }
  }
  else {
    if (cVar2 == cVar3) {
      return;
    }
    if (cVar3 == '\0') {
      lVar7 = param_2[1];
      lVar6 = *param_2;
      *(long *)(param_1 + 0x10) = param_2[1];
      *plVar8 = lVar6;
      if (lVar7 != 0) {
        plVar1 = (long *)(lVar7 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      puStack_80 = &UNK_10e52b660;
      func_0x0001078599a4();
LAB_107857630:
      uStack_40 = 0x3f800000;
      func_0x0001078576b8(plVar8);
      lVar7 = *(long *)*plVar8;
      lVar6 = ((long *)*plVar8)[1];
      func_0x000107859844();
      lStack_90 = lVar7;
      while (lStack_88 = lVar6, lStack_90 != 0) {
        func_0x0001072628ec(&lStack_a8,&puStack_80,lVar6);
        plVar8 = (long *)(lVar6 + 0x48);
        while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
          func_0x0001004c3c6c(auStack_60,plVar8 + 2);
        }
        func_0x0001078598c4(&lStack_90);
        lVar6 = lStack_88;
      }
      goto LAB_107857598;
    }
    func_0x000107410ccc(plVar8);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  puStack_80 = &UNK_10e52b660;
  func_0x0001078599a4();
  uStack_40 = 0x3f800000;
LAB_107857598:
  lStack_a8 = param_1 + 0xf0;
  uStack_a0 = 1;
  func_0x000107279a5c();
  func_0x00010735ace0(param_1 + 0x58,&puStack_80);
  func_0x0001005d0464(param_1 + 0x78,auStack_60);
  func_0x000107279ee0(&lStack_a8);
  func_0x000107858f30(&puStack_80);
  return;
}



/* Entry: 10785815c; end: 1078583d7;  */

void FUN_10785815c(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 extraout_x8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong *puStack_70;
  undefined8 uStack_58;
  
  lVar13 = param_2;
  func_0x0001078599bc();
  lStack_a0 = lVar13 + 0xf0;
  uStack_98 = 1;
  uStack_58 = extraout_x8;
  func_0x000107279a5c();
  uVar5 = *(char *)(param_2 + 0x18) == '\x01';
  if ((bool)uVar5) {
    uVar10 = param_2 + 0x78;
    func_0x0001072d2e68(uVar10,param_3);
    if ((uVar10 & 1) != 0) {
      if ((char)param_4[2] == '\x01') {
        func_0x000107392e34();
        lVar13 = *(long *)(*param_4 + 0x30);
        uVar5 = *(char *)(lVar13 + 0x120) == '\x01';
        if ((bool)uVar5) {
          uVar10 = param_2 + 0x58;
          func_0x0001072a02dc(uVar10,lVar13 + 0xe8);
          if ((uVar10 & 1) == 0) {
            lVar6 = param_2 + 0xa0;
            lVar13 = lVar13 + 0xe8;
            func_0x000107859160();
            if (lVar6 == 0) goto LAB_1078582bc;
            plVar15 = (long *)(*(long *)(lVar13 + 0x38) + 0x10);
            do {
              plVar15 = (long *)*plVar15;
              if (plVar15 == (long *)0x0) goto LAB_1078582bc;
              func_0x000107859228(&lStack_90,plVar15 + 2);
              uVar10 = param_2 + 0x58;
              func_0x0001072a02dc(uVar10,&lStack_90);
              func_0x000104c2f714(&lStack_90);
            } while ((uVar10 & 1) == 0);
          }
        }
      }
      goto LAB_107858244;
    }
LAB_1078582bc:
    uVar8 = 1;
LAB_10785834c:
    *(undefined4 *)(param_1 + 4) = uVar8;
    func_0x000107279ee0(&lStack_a0);
    func_0x00010785997c(uStack_58);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_107858244:
    puVar9 = (ulong *)(param_2 + 0xd0);
    uVar10 = *puVar9;
    uVar14 = *(ulong *)(param_2 + 200);
    uVar5 = uVar14 == uVar10;
    if (uVar14 < uVar10) {
      func_0x0001078599f4();
      lVar13 = uVar14 + 0x40;
      *(long *)(param_2 + 200) = lVar13;
LAB_107858344:
      uVar8 = 0;
      *(long *)(param_2 + 200) = lVar13;
      goto LAB_10785834c;
    }
    lVar13 = uVar14 - *(long *)(param_2 + 0xc0);
    uVar14 = (lVar13 >> 6) + 1;
    if (uVar14 >> 0x3a == 0) {
      uVar10 = uVar10 - *(long *)(param_2 + 0xc0);
      uVar11 = (long)uVar10 >> 5;
      if (uVar11 <= uVar14) {
        uVar11 = uVar14;
      }
      if (0x7fffffffffffffbf < uVar10) {
        uVar11 = 0x3ffffffffffffff;
      }
      puStack_70 = puVar9;
      if (uVar11 == 0) {
        lVar6 = 0;
      }
      else {
        if (uVar11 >> 0x3a != 0) {
          func_0x000104bd35f4();
          goto LAB_107858390;
        }
        lVar6 = uVar11 << 6;
        __Znwm();
      }
      lVar13 = lVar6 + lVar13;
      lVar1 = lVar6 + uVar11 * 0x40;
      lStack_90 = lVar6;
      lStack_88 = lVar13;
      lStack_80 = lVar13;
      lStack_78 = lVar1;
      func_0x0001078599f4();
      lVar12 = *(long *)(param_2 + 0xc0);
      lVar3 = *(long *)(param_2 + 200);
      lVar2 = lVar13 + (lVar12 - lVar3);
      lVar7 = lVar2;
      for (lVar6 = lVar12; lVar6 != lVar3; lVar6 = lVar6 + 0x40) {
        FUN_107859514(lVar7,lVar6);
        lVar7 = lVar7 + 0x40;
      }
      for (; uVar5 = lVar12 == lVar3, !(bool)uVar5; lVar12 = lVar12 + 0x40) {
        func_0x00010785902c(lVar12);
      }
      lVar13 = lVar13 + 0x40;
      lStack_90 = *(long *)(param_2 + 0xc0);
      *(long *)(param_2 + 0xc0) = lVar2;
      *(long *)(param_2 + 200) = lVar13;
      lStack_78 = *(undefined8 *)(param_2 + 0xd0);
      *(long *)(param_2 + 0xd0) = lVar1;
      lStack_88 = lStack_90;
      lStack_80 = lStack_90;
      func_0x000107859558(&lStack_90);
      goto LAB_107858344;
    }
  }
  func_0x000107859508();
LAB_107858390:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x107858394);
  (*pcVar4)();
}



/* Entry: 107858fcc; end: 10785905b;  */

long FUN_107858fcc(long param_1)

{
  func_0x00010730b05c(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107859514; end: 10785959f;  */

void FUN_107859514(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107859a74();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x0001072a6994(param_1 + 3,param_2 + 3);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 1078597ec; end: 10785980f;  */

undefined8 FUN_1078597ec(undefined8 param_1)

{
  func_0x000107859810(param_1,0);
  return param_1;
}



/* Entry: 107859b30; end: 107859b57;  */

undefined8 FUN_107859b30(undefined8 param_1)

{
  func_0x000107859b58(param_1,0);
  return param_1;
}



/* Entry: 107859fbc; end: 107859ffb;  */

void FUN_107859fbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *param_1 = puVar1;
  if (((ulong)puVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000107859fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(param_2 + 1,param_1 + 1,0);
    return;
  }
  uVar3 = param_2[2];
  uVar2 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10785a2ac; end: 10785a377;  */

/* WARNING: Possible PIC construction at 0x00010785a2e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785a2ec) */
/* WARNING: Removing unreachable block (ram,0x00010785a30c) */
/* WARNING: Removing unreachable block (ram,0x00010785a2fc) */
/* WARNING: Removing unreachable block (ram,0x00010785a314) */
/* WARNING: Removing unreachable block (ram,0x00010785a318) */
/* WARNING: Removing unreachable block (ram,0x00010785a320) */
/* WARNING: Removing unreachable block (ram,0x00010785a338) */
/* WARNING: Removing unreachable block (ram,0x00010785a330) */
/* WARNING: Removing unreachable block (ram,0x00010785a304) */
/* WARNING: Removing unreachable block (ram,0x00010785a33c) */
/* WARNING: Removing unreachable block (ram,0x00010785a360) */
/* WARNING: Removing unreachable block (ram,0x00010785a374) */
/* WARNING: Removing unreachable block (ram,0x00010785a348) */

char * FUN_10785a2ac(char *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char acStack_50 [32];
  
  pcVar1 = acStack_50;
  pcVar3 = acStack_50;
  func_0x00010785a7a0();
  func_0x00010688d7f0();
  func_0x00010785a824();
  while ((pcVar1 != param_1 &&
         (puVar2 = pcVar3, func_0x00010688d198(pcVar3,(long)*pcVar1), ((ulong)puVar2 & 1) == 0))) {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}



/* Entry: 10785a560; end: 10785a607;  */

/* WARNING: Possible PIC construction at 0x00010785a5a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010785a5ac) */
/* WARNING: Removing unreachable block (ram,0x00010785a5dc) */
/* WARNING: Removing unreachable block (ram,0x00010785a5f4) */
/* WARNING: Removing unreachable block (ram,0x00010785a604) */
/* WARNING: Removing unreachable block (ram,0x00010785a5c8) */

void FUN_10785a560(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [24];
  undefined8 *puStack_110;
  undefined1 uStack_108;
  undefined1 auStack_c8 [80];
  undefined8 auStack_78 [4];
  undefined1 auStack_58 [56];
  
  puVar2 = param_1;
  func_0x00010785a7a0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  func_0x000107859f64(auStack_78);
  func_0x000107859f64(auStack_c8,param_3);
  uStack_108 = 0;
  puVar2 = param_1;
  puStack_110 = param_1;
  while( true ) {
    iVar1 = (int)puVar2;
    func_0x00010785a824();
    func_0x00010785a6a4();
    if (iVar1 == 0) break;
    func_0x00010785a780(auStack_128,auStack_58);
    func_0x0001000fecf4(param_1,auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
    puVar2 = auStack_78;
    func_0x00010785a110();
  }
  uStack_108 = 1;
  func_0x00010007e37c(&puStack_110);
  return;
}



/* Entry: 10785a9d4; end: 10785a9eb;  */

void FUN_10785a9d4(void)

{
  func_0x00010785b8d8();
  return;
}



/* Entry: 10785afe4; end: 10785b057;  */

void FUN_10785afe4(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_48 [40];
  
  func_0x00010785c114();
  if ((ulong)(extraout_x9 / 0x18) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x00010785b47c();
      func_0x00010785c0a0();
      func_0x00010785c018();
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      if (param_1[1] != 0) {
        plVar1 = (long *)(param_1[1] + 0x10);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010785bd24(extraout_x8,&uStack_80,param_1[2]);
      func_0x00010785c0a8();
      return;
    }
    func_0x00010785b4cc(auStack_48);
    func_0x00010785c0d4();
    func_0x00010785c0a0();
  }
  return;
}



/* Entry: 10785b314; end: 10785b34b;  */

void FUN_10785b314(long *param_1,long param_2)

{
  func_0x00010785c08c();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x00010785c020();
  return;
}



/* Entry: 10785b488; end: 10785b4cb;  */

void FUN_10785b488(long *param_1,long param_2)

{
  func_0x00010785c08c();
  func_0x00010785b568(param_1 + 2,*param_1,param_1[1],
                      *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x00010785c020();
  return;
}



/* Entry: 10785b798; end: 10785b7e7;  */

long * FUN_10785b798(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    func_0x00010785b47c();
    plStack_38 = param_1;
    func_0x00010785b814(&plStack_38);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 10785bcbc; end: 10785bce3;  */

void FUN_10785bcbc(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000df370(&uStack_18,8);
  return;
}



/* Entry: 10785bef8; end: 10785bfcb;  */

undefined8 * FUN_10785bef8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = &PTR_DAT_1109e3100;
  puStack_40 = param_1 + 1;
  *puStack_40 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar9 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uStack_38 = 0;
  lVar8 = (long)puVar2 - (long)puVar9;
  if (lVar8 != 0) {
    uVar7 = lVar8 >> 4;
    if (uVar7 >> 0x3c != 0) {
      func_0x00010785b34c();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10785bfbc);
      (*pcVar5)();
    }
    puVar6 = param_1 + 3;
    func_0x00010785b3a0();
    param_1[1] = puVar6;
    param_1[2] = puVar6;
    param_1[3] = puVar6 + uVar7 * 2;
    for (; puVar9 != puVar2; puVar9 = puVar9 + 2) {
      lVar8 = puVar9[1];
      uVar10 = *puVar9;
      puVar6[1] = puVar9[1];
      *puVar6 = uVar10;
      if (lVar8 != 0) {
        plVar1 = (long *)(lVar8 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
    param_1[2] = puVar6;
  }
  uStack_38 = 1;
  func_0x00010785bfcc(&puStack_40);
  return param_1;
}



/* Entry: 10785c7cc; end: 10785c83b;  */

undefined8 FUN_10785c7cc(double *param_1,double *param_2)

{
  if ((((*param_1 <= param_2[3]) && (*param_2 <= param_1[3])) && (param_1[1] <= param_2[4])) &&
     (((param_2[1] <= param_1[4] && (param_1[2] <= param_2[5])) && (param_2[2] <= param_1[5])))) {
    return 1;
  }
  return 0;
}



/* Entry: 10785cb24; end: 10785cb9f;  */

undefined1  [16] FUN_10785cb24(long param_1)

{
  double dVar1;
  undefined1 auStack_30 [16];
  
  dVar1 = *(double *)(param_1 + 0x88) * -6.283185307179586 + 3.141592653589793;
  _exp(dVar1);
  _atan();
  func_0x00010785d34c();
  func_0x00010785d334(dVar1 * 57.29577951308232,*(double *)(param_1 + 0x80) * 360.0 + -180.0);
  return auStack_30;
}



/* Entry: 10785ce78; end: 10785ceeb;  */

void FUN_10785ce78(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dStack_70 = 0.0;
  dStack_68 = 0.0;
  uStack_60 = 0x3ff0000000000000;
  dVar1 = -param_2;
  func_0x000107878958(&dStack_70);
  param_1 = -param_1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0x3ff0000000000000;
  dStack_50 = dVar1;
  dStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107878958(&uStack_88);
  dStack_70 = param_1;
  dStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  FUN_10787899c(&dStack_50,&dStack_70);
  return;
}



/* Entry: 10785d208; end: 10785d2df;  */

void FUN_10785d208(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_4 + 0x40) == '\x01') {
    *(undefined1 *)(param_4 + 0x40) = 0;
  }
  if (*(char *)(param_4 + 0x18) == '\x01') {
    func_0x00010785d340();
    lVar1 = param_4;
    uStack_38 = param_1;
    uStack_30 = param_2;
    uStack_28 = param_3;
    func_0x00010785d2e0(param_4);
    func_0x00010785c128(&uStack_38,lVar1);
    uStack_50 = param_1;
    uStack_48 = param_2;
    uStack_40 = param_3;
    if (*(char *)(param_6 + 3) == '\x01') {
      func_0x0001074174bc();
      dStack_60 = (double)param_6[2];
      uStack_68 = param_6[1];
      uStack_70 = *param_6;
    }
    else {
      uStack_70 = 0;
      uStack_68 = 0;
      dStack_60 = 1.0;
    }
    dStack_60 = ABS(dStack_60);
    func_0x00010785cf48(&uStack_98,&uStack_50,&uStack_70);
    if (cStack_78 == '\x01') {
      *(undefined8 *)(param_4 + 0x28) = uStack_90;
      *(undefined8 *)(param_4 + 0x20) = uStack_98;
      *(undefined8 *)(param_4 + 0x38) = uStack_80;
      *(undefined8 *)(param_4 + 0x30) = uStack_88;
      if ((*(byte *)(param_4 + 0x40) & 1) == 0) {
        *(undefined1 *)(param_4 + 0x40) = 1;
      }
    }
  }
  return;
}



/* Entry: 10785d5a8; end: 10785d5e7;  */

void FUN_10785d5a8(void)

{
  long *unaff_x20;
  
  FUN_10785dc34();
  func_0x00010785dd18(*(undefined8 *)(*unaff_x20 + 0x48));
  func_0x00010785dc70();
  func_0x00010785dd7c();
  return;
}



/* Entry: 10785d8cc; end: 10785d90f;  */

long * FUN_10785d8cc(void)

{
  long *in_x3;
  long *unaff_x20;
  ulong unaff_x21;
  
  FUN_10785dc34();
  func_0x00010785dcbc(*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x00010785dc60();
  if ((unaff_x21 & 1) == 0) {
    unaff_x20 = in_x3;
  }
  return unaff_x20;
}



/* Entry: 10785dc34; end: 10785dd9f;  */

undefined1 * FUN_10785dc34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000020 = param_2;
  uStack0000000000000028 = param_3;
  func_0x000107c60c50(&stack0x00000008,param_2,param_3);
  return &stack0x00000008;
}



/* Entry: 10785e438; end: 10785e463;  */

void FUN_10785e438(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 10785e878; end: 10785e897;  */

void FUN_10785e878(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_107867dd0(param_1,&uStack_14);
  return;
}



/* Entry: 10785ebf8; end: 10785ec8f;  */

void FUN_10785ebf8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  func_0x000107868d20();
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010786909c(uVar1);
  if ((param_2 != 0) && (*(int *)(param_2 + 0x30) == 10)) {
    puVar2 = (undefined8 *)(param_2 + 0x20);
    func_0x000107868524();
    func_0x00010785ec58(param_1,*puVar2);
    func_0x0001078691fc();
  }
  return;
}



/* Entry: 10785f150; end: 10785f193;  */

void FUN_10785f150(undefined8 param_1,long param_2)

{
  func_0x00010786903c();
  func_0x00010724e404();
  func_0x000107268350(param_1,param_2 + 0xa8);
  func_0x00010786932c();
  return;
}



/* Entry: 107864ebc; end: 107864f5b;  */

void FUN_107864ebc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w10;
  ulong uVar2;
  undefined8 auStack_70 [6];
  undefined1 auStack_40 [16];
  
  auStack_70[0] = *param_4;
  _strlen();
  func_0x00010786912c();
  func_0x000107869274();
  func_0x000107869014();
  uVar2 = *(ulong *)(param_2 + 0xbd0);
  func_0x000107866774(auStack_70,*param_4,auStack_40);
  func_0x0001078690b4();
  func_0x000107868ff0();
  if ((uVar2 & 1) == 0) {
    func_0x0001078690c0();
    lVar1 = extraout_x8_00;
  }
  else {
    func_0x00010786921c();
    lVar1 = extraout_x8;
  }
  auStack_70[0] = param_1;
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



/* Entry: 1078656f0; end: 10786575f;  */

void FUN_1078656f0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  plVar2 = (long *)(*(long *)(param_1 + 0xbd0) + 0x10);
  uStack_40 = param_2;
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    func_0x0001078660bc(plVar2 + 4);
    uVar1 = (ulong)*(uint *)(plVar2 + 6);
    if (*(uint *)(plVar2 + 6) == 0xffffffff) {
      uVar1 = 0xffffffffffffffff;
    }
    puStack_38 = (undefined1 *)&uStack_40;
    (*(code *)(&PTR_DAT_1109e3350)[uVar1])(&puStack_38,plVar2 + 4);
  }
  return;
}



/* Entry: 107865ffc; end: 107866043;  */

void FUN_107865ffc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x10) != 0xffffffff) {
    func_0x000107869404((&PTR_DAT_1109e3260)[*(uint *)(param_1 + 0x10)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 1078669b0; end: 107866a43;  */

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

undefined1 * FUN_1078669b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  long extraout_x9_07;
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
  int extraout_w11_09;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  undefined1 auStack_a28 [24];
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 ***pppuStack_a00;
  undefined *puStack_9f8;
  long lStack_9f0;
  long lStack_9e8;
  undefined1 auStack_9e0 [24];
  undefined1 auStack_9c8 [72];
  undefined4 uStack_980;
  undefined1 auStack_978 [72];
  undefined8 ***pppuStack_910;
  undefined *puStack_908;
  undefined8 uStack_900;
  long lStack_8f8;
  long alStack_8ea [8];
  undefined1 auStack_8a8 [72];
  undefined4 uStack_860;
  undefined8 ***pppuStack_7f0;
  undefined *puStack_7e8;
  undefined1 auStack_7d8 [16];
  undefined8 uStack_7c8;
  undefined4 uStack_780;
  undefined8 ***pppuStack_710;
  code *pcStack_708;
  undefined1 auStack_6f8 [16];
  undefined4 uStack_6e8;
  undefined4 uStack_6a0;
  undefined8 ***pppuStack_630;
  undefined *puStack_628;
  undefined1 auStack_618 [16];
  long lStack_608;
  undefined4 uStack_5c0;
  undefined8 ***pppuStack_550;
  undefined *puStack_548;
  undefined1 auStack_538 [16];
  long lStack_528;
  undefined4 uStack_4e0;
  undefined8 ***pppuStack_470;
  undefined *puStack_468;
  undefined1 auStack_458 [16];
  undefined4 uStack_448;
  undefined4 uStack_400;
  undefined8 ***pppuStack_390;
  undefined *puStack_388;
  undefined1 auStack_378 [16];
  undefined4 uStack_368;
  undefined4 uStack_320;
  undefined1 ***pppuStack_2b0;
  undefined *puStack_2a8;
  undefined1 auStack_298 [16];
  ushort uStack_288;
  undefined4 uStack_240;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined1 auStack_1b8 [16];
  ushort uStack_1a8;
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  undefined1 uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x000107869368();
  uStack_c8 = (undefined1)param_2;
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
      uStack_c8 = (undefined1)param_2;
    } while (extraout_w11 != 0);
  }
  func_0x0001078693e8();
  func_0x00010740f2f8();
  uStack_80 = 2;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar5 = auStack_d8;
  func_0x00010740f32c(puVar5);
  func_0x000107868d60();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107868f1c();
    func_0x0001078690e4();
    func_0x00010740f32c(auStack_d8);
    func_0x00010786906c();
    puStack_e8 = &DAT_107866a44;
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
    uVar3 = *(ushort *)(unaff_x21 + 0xa8);
    func_0x00010786933c();
    uStack_160 = 3;
    uStack_1a8 = uVar3;
    func_0x000107868f10();
    func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x0001078690ec();
    func_0x0001078690e4();
    puVar5 = auStack_1b8;
    func_0x000107867444(puVar5);
    func_0x000107868d60();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107868f1c();
      func_0x0001078690e4();
      func_0x000107867444(auStack_1b8);
      func_0x00010786906c();
      puStack_1c8 = &DAT_107866ae0;
      ppuStack_1d0 = &puStack_f0;
      func_0x000107868d78();
      func_0x0001078693dc();
      if (extraout_x9_01 != 0) {
        do {
          func_0x000107868ef4();
        } while (extraout_w11_01 != 0);
      }
      func_0x000107868fa4();
      func_0x0001078692b0();
      uVar3 = *(ushort *)((ulong)uVar3 + 0xa8);
      uVar7 = (ulong)uVar3;
      func_0x00010786933c();
      uStack_240 = 4;
      uStack_288 = uVar3;
      func_0x000107868f10();
      func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
      func_0x0001078690ec();
      func_0x0001078690e4();
      puVar5 = auStack_298;
      func_0x000107867468(puVar5);
      func_0x000107868d60();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107868f1c();
        func_0x0001078690e4();
        puVar5 = auStack_298;
        func_0x000107867468();
        func_0x00010786906c();
        puStack_2a8 = &DAT_107866b7c;
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
        func_0x0001072adc24();
        uStack_320 = 5;
        uStack_368 = uVar4;
        func_0x000107868f10();
        func_0x000107868e1c(*(undefined8 *)(uVar7 + 0x18));
        func_0x0001078690ec();
        func_0x0001078690e4();
        puVar5 = auStack_378;
        func_0x000107289dd4(puVar5);
        func_0x000107868d60();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107868f1c();
          func_0x0001078690e4();
          puVar5 = auStack_378;
          func_0x000107289dd4();
          func_0x00010786906c();
          puStack_388 = &DAT_107866c10;
          pppuStack_390 = &pppuStack_2b0;
          func_0x000107868d78();
          func_0x000107869368();
          uVar4 = SUB84(puVar5,0);
          if (extraout_x9_03 != 0) {
            do {
              func_0x000107868ef4();
              uVar4 = SUB84(puVar5,0);
            } while (extraout_w11_03 != 0);
          }
          func_0x0001078693e8();
          func_0x0001072cd320();
          uStack_400 = 6;
          uStack_448 = uVar4;
          func_0x000107868f10();
          func_0x000107868e1c(*(undefined8 *)(uVar7 + 0x18));
          func_0x0001078690ec();
          func_0x0001078690e4();
          puVar5 = auStack_458;
          func_0x000107289cc8(puVar5);
          func_0x000107868d60();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x000107868f1c();
            func_0x0001078690e4();
            func_0x000107289cc8(auStack_458);
            func_0x00010786906c();
            puStack_468 = &DAT_107866ca4;
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
            lVar8 = *(long *)(uVar7 + 0xa8);
            func_0x00010786933c();
            uStack_4e0 = 7;
            lStack_528 = lVar8;
            func_0x000107868f10();
            func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
            func_0x0001078690ec();
            func_0x0001078690e4();
            puVar5 = auStack_538;
            func_0x00010786748c(puVar5);
            func_0x000107868d60();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x000107868f1c();
              func_0x0001078690e4();
              func_0x00010786748c(auStack_538);
              func_0x00010786906c();
              puStack_548 = &DAT_107866d40;
              pppuStack_550 = &pppuStack_470;
              func_0x000107868d78();
              func_0x0001078693dc();
              if (extraout_x9_05 != 0) {
                do {
                  func_0x000107868ef4();
                } while (extraout_w11_05 != 0);
              }
              func_0x000107868fa4();
              func_0x0001078692b0();
              lVar8 = *(long *)(lVar8 + 0xa8);
              func_0x00010786933c();
              uStack_5c0 = 8;
              lStack_608 = lVar8;
              func_0x000107868f10();
              func_0x000107868e1c(*(undefined8 *)(unaff_x22 + 0x18));
              func_0x0001078690ec();
              func_0x0001078690e4();
              puVar5 = auStack_618;
              func_0x0001078674b0(puVar5);
              func_0x000107868d60();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x000107868f1c();
                func_0x0001078690e4();
                func_0x0001078674b0(auStack_618);
                func_0x00010786906c();
                puStack_628 = &DAT_107866ddc;
                pppuStack_630 = &pppuStack_550;
                func_0x000107868d78();
                func_0x000107869368();
                if (extraout_x9_06 != 0) {
                  do {
                    func_0x000107868ef4();
                  } while (extraout_w11_06 != 0);
                }
                func_0x0001078693e8();
                func_0x00010750833c();
                uStack_6e8 = (undefined4)param_1;
                uStack_6a0 = 9;
                func_0x000107868f10();
                func_0x000107868e1c(*(undefined8 *)(lVar8 + 0x18));
                func_0x0001078690ec();
                func_0x0001078690e4();
                puVar5 = auStack_6f8;
                func_0x000107289e5c(puVar5);
                func_0x000107868d60();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x000107868f1c();
                  func_0x0001078690e4();
                  func_0x000107289e5c(auStack_6f8);
                  func_0x00010786906c();
                  pcStack_708 = FUN_107866e70;
                  pppuStack_710 = &pppuStack_630;
                  func_0x000107868d78();
                  func_0x000107869368();
                  if (extraout_x9_07 != 0) {
                    do {
                      func_0x000107868ef4();
                    } while (extraout_w11_07 != 0);
                  }
                  func_0x0001078693e8();
                  func_0x00010740f294();
                  uStack_780 = 10;
                  uStack_7c8 = param_1;
                  func_0x000107868f10();
                  func_0x000107868e1c(*(undefined8 *)(lVar8 + 0x18));
                  func_0x0001078690ec();
                  func_0x0001078690e4();
                  puVar5 = auStack_7d8;
                  func_0x00010740f2d0(puVar5);
                  func_0x000107868d60();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x000107868f1c();
                    func_0x0001078690e4();
                    func_0x00010740f2d0(auStack_7d8);
                    func_0x00010786906c();
                    puStack_7e8 = &DAT_107866f04;
                    pppuStack_7f0 = &pppuStack_710;
                    func_0x000107868d78();
                    uStack_900 = *param_3;
                    lStack_8f8 = param_3[1];
                    plVar6 = extraout_x8;
                    if (lStack_8f8 != 0) {
                      do {
                        func_0x000107868ef4();
                        plVar6 = extraout_x8_00;
                      } while (extraout_w11_08 != 0);
                    }
                    lVar8 = *plVar6;
                    func_0x00010785f084(alStack_8ea);
                    plVar6 = alStack_8ea;
                    func_0x0001078692c8(auStack_8a8);
                    uStack_860 = 0xb;
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
                    puStack_908 = &DAT_107866fac;
                    pppuStack_910 = &pppuStack_7f0;
                    func_0x000107868d78();
                    lVar8 = *plVar6;
                    lStack_9e8 = plVar6[1];
                    lStack_9f0 = lVar8;
                    if (lStack_9e8 != 0) {
                      do {
                        func_0x000107868ef4();
                      } while (extraout_w11_09 != 0);
                    }
                    uVar1 = *(undefined8 *)(lVar8 + 0xc0);
                    uVar2 = *(undefined8 *)(lVar8 + 200);
                    func_0x000107328418(auStack_9e0);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (auStack_9c8,auStack_9e0);
                    uStack_980 = 0xc;
                    puVar5 = auStack_978;
                    puStack_9f8 = &UNK_10786700c;
                    uStack_a10 = uVar2;
                    uStack_a08 = uVar1;
                    pppuStack_a00 = &pppuStack_910;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                              (auStack_a28);
                    func_0x000107268798(puVar5,auStack_a28);
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
  }
  return puVar5;
}



/* Entry: 107866e70; end: 107866f03;  */

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

undefined1 * FUN_107866e70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  long *plVar4;
  long *extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_328 [24];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 ***pppuStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [72];
  undefined4 uStack_280;
  undefined1 auStack_278 [72];
  undefined1 **ppuStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long alStack_1ea [8];
  undefined1 auStack_1a8 [72];
  undefined4 uStack_160;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined4 uStack_80;
  
  func_0x000107868d78();
  func_0x000107869368();
  if (extraout_x9 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11 != 0);
  }
  func_0x0001078693e8();
  func_0x00010740f294();
  uStack_80 = 10;
  uStack_c8 = param_1;
  func_0x000107868f10();
  func_0x000107868e1c(*(undefined8 *)(unaff_x21 + 0x18));
  func_0x0001078690ec();
  func_0x0001078690e4();
  puVar3 = auStack_d8;
  func_0x00010740f2d0(puVar3);
  func_0x000107868d60();
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000107868f1c();
  func_0x0001078690e4();
  func_0x00010740f2d0(auStack_d8);
  func_0x00010786906c();
  puStack_e8 = &DAT_107866f04;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107868d78();
  uStack_200 = *param_3;
  lStack_1f8 = param_3[1];
  plVar4 = extraout_x8;
  if (lStack_1f8 != 0) {
    do {
      func_0x000107868ef4();
      plVar4 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  lVar5 = *plVar4;
  func_0x00010785f084(alStack_1ea);
  plVar4 = alStack_1ea;
  func_0x0001078692c8(auStack_1a8);
  uStack_160 = 0xb;
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
  puStack_208 = &DAT_107866fac;
  ppuStack_210 = &puStack_f0;
  func_0x000107868d78();
  lVar5 = *plVar4;
  lStack_2e8 = plVar4[1];
  lStack_2f0 = lVar5;
  if (lStack_2e8 != 0) {
    do {
      func_0x000107868ef4();
    } while (extraout_w11_01 != 0);
  }
  uVar1 = *(undefined8 *)(lVar5 + 0xc0);
  uVar2 = *(undefined8 *)(lVar5 + 200);
  func_0x000107328418(auStack_2e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_2c8,auStack_2e0);
  uStack_280 = 0xc;
  puVar3 = auStack_278;
  puStack_2f8 = &UNK_10786700c;
  uStack_310 = uVar2;
  uStack_308 = uVar1;
  pppuStack_300 = &ppuStack_210;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_328);
  func_0x000107268798(puVar3,auStack_328);
  func_0x0001078693fc();
  return puVar3;
}



/* Entry: 10786759c; end: 10786759f;  */

undefined8 * FUN_10786759c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e33d8;
  func_0x00010786760c(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1078676f4; end: 107867713;  */

void FUN_1078676f4(void)

{
  func_0x0001078694e0();
  func_0x000107867714();
  func_0x000107869480();
  return;
}



/* Entry: 1078677d4; end: 1078677ef;  */

void FUN_1078677d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e3408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107867d00; end: 107867d27;  */

void FUN_107867d00(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010786943c();
  *param_1 = &PTR_DAT_1109e34d0;
  func_0x000107867d7c(param_1 + 3);
  return;
}



/* Entry: 107867dd0; end: 107867deb;  */

void FUN_107867dd0(void)

{
  func_0x000107869164();
  func_0x000107867dec();
  return;
}



/* Entry: 107867ee8; end: 107867f03;  */

void FUN_107867ee8(void)

{
  func_0x000107869234();
  func_0x000107867f04();
  return;
}



/* Entry: 107868038; end: 10786804b;  */

void FUN_107868038(void)

{
  func_0x000107868054();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107868134; end: 107868153;  */

void FUN_107868134(void)

{
  func_0x0001078694e0();
  func_0x000107868154();
  func_0x000107869480();
  return;
}



/* Entry: 107868240; end: 10786825b;  */

void FUN_107868240(void)

{
  func_0x000107869164();
  func_0x00010786825c();
  return;
}



/* Entry: 107868380; end: 107868383;  */

void FUN_107868380(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078686fc; end: 107868713;  */

void FUN_1078686fc(void)

{
  func_0x000107297b6c();
  return;
}



/* Entry: 1078688dc; end: 107868c5b;  */

void FUN_1078688dc(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long *extraout_x8;
  long lVar7;
  long *extraout_x9;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  uVar1 = *(uint *)(param_2 + 2);
  plVar16 = (long *)(ulong)uVar1;
  param_2[1] = (long)plVar16;
  plVar17 = (long *)param_1[1];
  if ((plVar17 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar17 < (float)(param_1[3] + 1))) {
    bVar4 = (long *)0x2 < plVar17;
    bVar5 = plVar17 == (long *)0x3;
    plVar9 = param_1;
    func_0x0001078692d0((long)plVar17 << 1);
    plVar15 = extraout_x8;
    if (!bVar4 || bVar5) {
      plVar15 = extraout_x9;
    }
    if ((long)plVar15 - 1U == 0) {
      plVar15 = (long *)0x2;
    }
    else if (((ulong)plVar15 & (long)plVar15 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar17 = (long *)param_1[1];
      plVar9 = plVar15;
    }
    if (plVar17 < plVar15) {
LAB_10786897c:
      plVar17 = plVar15;
      func_0x000107868ccc(plVar15);
      func_0x000107868cb4(param_1,plVar17);
      param_1[1] = (long)plVar15;
      lVar7 = *param_1;
      for (plVar17 = (long *)0x0; plVar15 != plVar17; plVar17 = (long *)((long)plVar17 + 1)) {
        *(undefined8 *)(lVar7 + (long)plVar17 * 8) = 0;
      }
      plVar9 = (long *)param_1[2];
      plVar17 = plVar15;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar8 = (long)plVar15 - 1;
        if (((ulong)plVar15 & uVar8) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar8);
        }
        else if (plVar15 <= plVar10) {
          uVar2 = 0;
          if (plVar15 != (long *)0x0) {
            uVar2 = (ulong)plVar10 / (ulong)plVar15;
          }
          plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar15);
        }
        *(long **)(lVar7 + (long)plVar10 * 8) = param_1 + 2;
        while (plVar14 = plVar9, plVar9 = (long *)*plVar14, plVar9 != (long *)0x0) {
          plVar11 = (long *)plVar9[1];
          if (((ulong)plVar15 & uVar8) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar8);
          }
          else if (plVar15 <= plVar11) {
            uVar2 = 0;
            if (plVar15 != (long *)0x0) {
              uVar2 = (ulong)plVar11 / (ulong)plVar15;
            }
            plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar15);
          }
          if (plVar11 != plVar10) {
            plVar13 = plVar9;
            if (*(long *)(lVar7 + (long)plVar11 * 8) == 0) {
              *(long **)(lVar7 + (long)plVar11 * 8) = plVar14;
              plVar10 = plVar11;
            }
            else {
              do {
                plVar12 = plVar13;
                plVar13 = (long *)*plVar12;
                if (plVar13 == (long *)0x0) break;
              } while (*(int *)(plVar9 + 2) == *(int *)(plVar13 + 2));
              *plVar14 = (long)plVar13;
              *plVar12 = **(long **)(lVar7 + (long)plVar11 * 8);
              **(long **)(lVar7 + (long)plVar11 * 8) = (long)plVar9;
              plVar9 = plVar14;
            }
          }
        }
      }
    }
    else if (plVar15 < plVar17) {
      func_0x0001078694f8();
      if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010786904c();
      }
      if (plVar15 <= plVar9) {
        plVar15 = plVar9;
      }
      if (plVar15 < plVar17) {
        if (plVar15 != (long *)0x0) goto LAB_10786897c;
        func_0x000107868cb4(param_1,0);
        param_1[1] = 0;
        plVar17 = (long *)0x0;
      }
      else {
        plVar17 = (long *)param_1[1];
      }
    }
  }
  uVar8 = (long)plVar17 - 1;
  if (((ulong)plVar17 & uVar8) == 0) {
    plVar15 = (long *)(ulong)((int)plVar17 - 1U & uVar1);
  }
  else {
    plVar15 = plVar16;
    if (plVar17 <= plVar16) {
      uVar2 = 0;
      if (plVar17 != (long *)0x0) {
        uVar2 = (ulong)plVar16 / (ulong)plVar17;
      }
      plVar15 = (long *)((long)plVar16 - uVar2 * (long)plVar17);
    }
  }
  lVar7 = *param_1;
  plVar9 = *(long **)(lVar7 + (long)plVar15 * 8);
  if (plVar9 == (long *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    bVar5 = false;
    bVar3 = 0;
    do {
      plVar10 = plVar9;
      plVar9 = (long *)*plVar10;
      if (plVar9 == (long *)0x0) break;
      plVar14 = (long *)plVar9[1];
      if (((ulong)plVar17 & uVar8) == 0) {
        plVar11 = (long *)((ulong)plVar14 & uVar8);
      }
      else {
        plVar11 = plVar14;
        if (plVar17 <= plVar14) {
          uVar2 = 0;
          if (plVar17 != (long *)0x0) {
            uVar2 = (ulong)plVar14 / (ulong)plVar17;
          }
          plVar11 = (long *)((long)plVar14 - uVar2 * (long)plVar17);
        }
      }
      if (plVar11 != plVar15) break;
      if (plVar14 == plVar16) {
        bVar4 = (int)plVar9[2] == (int)param_2[2];
      }
      else {
        bVar4 = false;
      }
      bVar6 = bVar4 != bVar5;
      bVar4 = (bool)(bVar3 & bVar6);
      bVar5 = (bool)(bVar5 | bVar6);
      bVar3 = bVar3 | bVar6;
    } while (!bVar4);
  }
  plVar16 = (long *)param_2[1];
  if (((ulong)plVar17 & uVar8) == 0) {
    plVar16 = (long *)(uVar8 & (ulong)plVar16);
    if (plVar10 == (long *)0x0) goto LAB_107868bb0;
LAB_107868b74:
    *param_2 = *plVar10;
    *plVar10 = (long)param_2;
    if (*param_2 == 0) goto LAB_107868c04;
    plVar15 = *(long **)(*param_2 + 8);
    if (((ulong)plVar17 & uVar8) == 0) {
      plVar15 = (long *)((ulong)plVar15 & uVar8);
    }
    else if (plVar17 <= plVar15) {
      uVar8 = 0;
      if (plVar17 != (long *)0x0) {
        uVar8 = (ulong)plVar15 / (ulong)plVar17;
      }
      plVar15 = (long *)((long)plVar15 - uVar8 * (long)plVar17);
    }
    if (plVar15 == plVar16) goto LAB_107868c04;
  }
  else {
    if (plVar17 <= plVar16) {
      uVar2 = 0;
      if (plVar17 != (long *)0x0) {
        uVar2 = (ulong)plVar16 / (ulong)plVar17;
      }
      plVar16 = (long *)((long)plVar16 - uVar2 * (long)plVar17);
    }
    if (plVar10 != (long *)0x0) goto LAB_107868b74;
LAB_107868bb0:
    plVar15 = param_1 + 2;
    *param_2 = *plVar15;
    *plVar15 = (long)param_2;
    *(long **)(lVar7 + (long)plVar16 * 8) = plVar15;
    if (*param_2 == 0) goto LAB_107868c04;
    plVar15 = *(long **)(*param_2 + 8);
    if (((ulong)plVar17 & uVar8) == 0) {
      plVar15 = (long *)((ulong)plVar15 & uVar8);
    }
    else if (plVar17 <= plVar15) {
      uVar8 = 0;
      if (plVar17 != (long *)0x0) {
        uVar8 = (ulong)plVar15 / (ulong)plVar17;
      }
      plVar15 = (long *)((long)plVar15 - uVar8 * (long)plVar17);
    }
  }
  *(long **)(lVar7 + (long)plVar15 * 8) = param_2;
LAB_107868c04:
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 107869664; end: 10786967b;  */

void FUN_107869664(long *param_1,long param_2)

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



/* Entry: 10786981c; end: 107869873;  */

void FUN_10786981c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1;
  func_0x00010786b258(auStack_38);
  func_0x00010786970c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 107869c68; end: 107869d13;  */

/* WARNING: Possible PIC construction at 0x000107869c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107869c98) */
/* WARNING: Removing unreachable block (ram,0x000107869cec) */
/* WARNING: Removing unreachable block (ram,0x000107869d08) */
/* WARNING: Removing unreachable block (ram,0x000107869ce4) */
/* WARNING: Removing unreachable block (ram,0x00010786d89c) */

undefined8 FUN_107869c68(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010786d778();
  func_0x000107869c4c();
  func_0x00010786b5b8();
  return *unaff_x19;
}



/* Entry: 10786a074; end: 10786a0b3;  */

void FUN_10786a074(long param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x00010786a0b4();
  if (param_1 == 0) {
    if (*(long **)(param_4 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_4 + 0x18) + 0x30))();
      return;
    }
    func_0x000104bfeb48();
    func_0x000104c00420();
    return;
  }
  if (*(long **)(param_3 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786dd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_3 + 0x18) + 0x30))();
    return;
  }
  func_0x000104bfeb48(0,param_1 + 0x48);
  return;
}



/* Entry: 10786a340; end: 10786a367;  */

void FUN_10786a340(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010786ad08();
  func_0x00010786970c();
  func_0x00010786da84();
  return;
}



/* Entry: 10786a648; end: 10786a73f;  */

void FUN_10786a648(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_48;
  
  func_0x00010786d78c();
  uStack_48 = extraout_x8;
  func_0x00010786a4e4();
  if (((param_1 & 1) == 0) && (func_0x00010786dca8(), (param_1 & 1) == 0)) {
    func_0x00010786de0c();
    uStack_c0 = 0;
    lStack_b8 = 0;
    func_0x00010786af00(&uStack_c0);
    func_0x00010786dc08();
    func_0x00010786dc58();
    func_0x00010786dc28();
    func_0x00010786dcdc();
    func_0x00010786ddfc(uStack_a0);
    func_0x00010786ddb4();
    func_0x00010786dc18();
    func_0x00010786dbe8();
    func_0x00010786dc00();
    func_0x00010786dc90();
    param_1 = lStack_b8 + 0x38;
    func_0x00010745f4b0();
    func_0x00010746bbb8(param_4);
    FUN_10774a60c(param_1,param_4,param_2,0);
    func_0x00010786970c();
    *(ulong *)(unaff_x19 + 0x10) = param_1;
  }
  func_0x00010786d6e8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010786dc00();
  func_0x00010786dc90();
  func_0x00010786d838();
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x10) <= param_5) {
    uVar1 = param_5;
  }
  FUN_10786a648();
  *(ulong *)(param_1 + 0x10) = uVar1;
  return;
}



/* Entry: 10786a954; end: 10786a95b;  */

void FUN_10786a954(undefined8 *param_1)

{
  undefined8 uVar1;
  uint extraout_w8;
  long unaff_x27;
  
  uVar1 = *param_1;
  func_0x00010786dae8();
  func_0x00010786d7c0();
  func_0x00010786d8e4();
  func_0x00010786d9f0();
  func_0x00010786d74c();
  while( true ) {
    func_0x00010786d7f4();
    while (unaff_x27 != 0) {
      func_0x00010786d86c();
      func_0x000104c32db4();
      if ((int)uVar1 != 0) {
        func_0x00010786da10();
        return;
      }
      func_0x00010786de98();
    }
    func_0x00010786d85c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010786de8c();
  }
  return;
}



/* Entry: 10786aa74; end: 10786aa97;  */

void FUN_10786aa74(long param_1)

{
  long unaff_x19;
  
  func_0x00010786ddcc();
  func_0x00010786dcf4();
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 10786ac4c; end: 10786ac4f;  */

void FUN_10786ac4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e37e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10786adac; end: 10786adc7;  */

void FUN_10786adac(void)

{
  undefined1 uStack_11;
  
  func_0x00010786adc8(&uStack_11);
  return;
}



/* Entry: 10786aef0; end: 10786aeff;  */

void FUN_10786aef0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10786b06c; end: 10786b07f;  */

void FUN_10786b06c(void)

{
  func_0x00010786b08c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10786b244; end: 10786b257;  */

void FUN_10786b244(long *param_1,ulong param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *extraout_x8;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
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



/* Entry: 10786b490; end: 10786b4cf;  */

void FUN_10786b490(long param_1)

{
  long *plVar1;
  long *plStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010786b4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  uStack_18 = 0x10786b4b0;
  plStack_28 = plVar1;
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x00010786b4d0(&plStack_28);
  return;
}



/* Entry: 10786b5fc; end: 10786b617;  */

void FUN_10786b5fc(void)

{
  func_0x00010786de6c();
  func_0x00010786b618();
  return;
}



/* Entry: 10786baf4; end: 10786bb17;  */

undefined8 FUN_10786baf4(undefined8 param_1)

{
  func_0x00010786bb18(param_1,0);
  return param_1;
}



/* Entry: 10786befc; end: 10786bf03;  */

void FUN_10786befc(void)

{
  return;
}



/* Entry: 10786c2c4; end: 10786c2eb;  */

void FUN_10786c2c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010786daac();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_1109e3940;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10786c3e8; end: 10786c40b;  */

void FUN_10786c3e8(void)

{
  func_0x00010786dab8();
  func_0x00010786da90(&PTR_DAT_1109e3a70);
  return;
}



/* Entry: 10786c5a4; end: 10786c5af;  */

undefined ** FUN_10786c5a4(void)

{
  return &PTR_DAT_1109e3b50;
}



/* Entry: 10786c854; end: 10786c887;  */

void FUN_10786c854(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e3b70;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10786c984; end: 10786c99f;  */

void FUN_10786c984(void)

{
  func_0x00010786de6c();
  func_0x00010786c9a0();
  return;
}



/* Entry: 10786cc60; end: 10786cc8b;  */

undefined1  [16] FUN_10786cc60(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  func_0x00010786cc8c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10786cec0; end: 10786cef7;  */

undefined8 * FUN_10786cec0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010786ddf4();
  return param_1;
}



/* Entry: 10786d030; end: 10786d067;  */

undefined8 * FUN_10786d030(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e3880;
  func_0x00010786d068(param_1 + 3);
  return param_1;
}


