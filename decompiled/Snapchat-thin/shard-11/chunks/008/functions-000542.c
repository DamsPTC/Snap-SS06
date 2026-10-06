/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1089336d0; end: 108933707;  */

undefined8 FUN_1089336d0(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x000108934544();
  func_0x00010b9a92f0(auStack_30);
  func_0x000108934504();
  return param_1;
}



/* Entry: 108933708; end: 108933aef;  */

long FUN_108933708(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  func_0x00010b9a10dc(auStack_38);
  func_0x00010b9a9358(&lStack_28,auStack_38);
  func_0x000108934530();
  lVar1 = lStack_28;
  if (lStack_28 == 0) {
    lStack_28 = 0;
  }
  else {
    func_0x000108934518();
  }
  func_0x000107c278f8(lStack_28);
  return lVar1;
}



/* Entry: 108933af0; end: 108933af3;  */

void FUN_108933af0(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 in_ZR;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b9a11bc(&lStack_58);
  func_0x00010b9a1dfc();
  if (!(bool)in_ZR) goto code_r0x00010b9a1778;
  func_0x00010b9a10dc(auStack_68,param_1,0xffffffff);
  if ((*(byte *)(*(long *)(param_1 + 8) + 8) & 1) != 0) {
    func_0x00010b9a0dcc(param_1);
    if (-1 < (int)param_3) {
      if ((ulong)(long)(int)param_3 < *(ulong *)(lStack_58 + 0x10)) {
        func_0x00010b9a9020(lStack_58 + (long)(int)param_3 * 0x10 + 0x18,auStack_68);
        goto code_r0x00010b9a1770;
      }
    }
    func_0x000107c31084();
    uStack_40 = *(undefined8 *)(lStack_58 + 0x10);
    uStack_50 = (ulong)param_3;
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x00010b9a1ef4();
    func_0x00010b9a1ee8(auStack_90);
    func_0x000107c31080(auStack_78,param_1,auStack_90);
    func_0x00010b99f560(auStack_70,auStack_78);
    func_0x00010b9a1f00();
    func_0x000104bda93c(auStack_70);
    func_0x000107c278f4(auStack_78);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  }
code_r0x00010b9a1770:
  func_0x00010b9a8d98(auStack_68);
code_r0x00010b9a1778:
  func_0x00010b9a1e9c();
  return;
}



/* Entry: 108933af4; end: 108933b23;  */

long FUN_108933af4(int param_1)

{
  func_0x00010b9a155c();
  return (long)param_1;
}



/* Entry: 108933b24; end: 108933bcb;  */

long FUN_108933b24(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plStack_38;
  
  plVar3 = (long *)0x18;
  __Znwm();
  plVar5 = plVar3 + 1;
  *plVar5 = 1;
  *plVar3 = (long)&PTR_DAT_110a9a478;
  plVar3[2] = param_2;
  func_0x000103c30078(param_2);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    lVar4 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  if (lVar4 + -1 == 0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  func_0x00010b9a0cc0(param_1,&plStack_38);
  func_0x000104bda3ac(plStack_38);
  return (long)(int)param_1;
}



/* Entry: 108933bcc; end: 108933c0b;  */

long FUN_108933bcc(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010b9a113c(&lStack_28);
  lVar1 = lStack_28;
  if (lStack_28 == 0) {
    lStack_28 = 0;
  }
  else {
    func_0x000108934518();
  }
  func_0x000104bda3ac(lStack_28);
  return lVar1;
}



/* Entry: 108933c0c; end: 108933c17;  */

void FUN_108933c0c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001089345b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 108933c18; end: 108933ceb;  */

char FUN_108933c18(long *param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int extraout_w10;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x0001089345d8();
    } while (extraout_w10 != 0);
  }
  auStack_58[0] = 8;
  if (param_3 != 0) {
    auStack_58[0] = 9;
  }
  lStack_48 = (long)*(int *)(param_2 + 0x18);
  uStack_40 = *(undefined8 *)(param_2 + 8);
  uStack_50 = *(undefined8 *)(param_2 + 0x10);
  uStack_38 = 0;
  (**(code **)(*param_1 + 0x20))(auStack_68,param_1,auStack_58);
  cVar2 = *(char *)(*(long *)(param_2 + 8) + 8);
  if (cVar2 == '\x01') {
    func_0x00010b9a8f04(auStack_78,auStack_68);
    func_0x000108934588();
    func_0x00010b9a0b80();
    func_0x000108934530();
  }
  func_0x00010b9a8d98(auStack_68);
  plVar1 = param_1 + 1;
  do {
    lVar5 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return cVar2;
}



/* Entry: 108933cec; end: 108933d3f;  */

long FUN_108933cec(void)

{
  long lVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010b9a11dc(&uStack_28);
  func_0x0001052b24d4(&lStack_30,&uStack_28);
  lVar1 = lStack_30;
  if (lStack_30 == 0) {
    lStack_30 = 0;
  }
  else {
    func_0x000108934518();
  }
  func_0x0001052b2c50(lStack_30);
  func_0x000104bddf04(uStack_28);
  return lVar1;
}



/* Entry: 108933d40; end: 108933d4b;  */

void FUN_108933d40(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001089345b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}



/* Entry: 108933d4c; end: 108933e17;  */

long FUN_108933d4c(int param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_28;
  
  func_0x000104bf2d3c(&lStack_28);
  lVar4 = lStack_28;
  if ((lStack_28 != 0) && (*(long *)(lStack_28 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lStack_28 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001089345bc();
  func_0x000104bddf04(lVar4);
  func_0x000104bf3588(lStack_28);
  return (long)param_1;
}



/* Entry: 108933e18; end: 108933f4f;  */

void FUN_108933e18(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int extraout_w10;
  undefined8 uStack_38;
  
  func_0x00010b9a113c(&uStack_38,param_1,param_3);
  func_0x0001052b2560();
  lVar1 = param_2;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    do {
      func_0x0001089345c8();
    } while (extraout_w10 != 0);
  }
  func_0x0001089345bc();
  func_0x000104bddf04(param_2);
  func_0x0001052b2c50(param_2);
  func_0x00010b9a1250(param_1,lVar1,&uStack_38);
  func_0x000104bda3ac(uStack_38);
  return;
}



/* Entry: 108933f50; end: 108933f9f;  */

void FUN_108933f50(long *param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    ___dynamic_cast(param_2,&PTR_DAT_110d7e928,&PTR_DAT_110d7e9f0,0);
  }
  func_0x00010893448c();
  *param_1 = param_2;
  return;
}



/* Entry: 108933fa0; end: 108934043;  */

void FUN_108933fa0(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long *plStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x0001089344f4();
  uStack_38 = extraout_x8;
  func_0x0001052b2560();
  FUN_108933f50(&uStack_58,param_1);
  func_0x00010b99f5f8(&uStack_60,param_2);
  uStack_50 = 2;
  uStack_48 = uStack_60;
  uStack_60 = 0;
  func_0x00010b9a4940(uStack_58,&uStack_50);
  func_0x000104bda914(&uStack_50);
  func_0x000104bda960(uStack_60);
  func_0x000104bf3588(uStack_58);
  plVar1 = param_1;
  func_0x0001052b2c50();
  func_0x0001089344c8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_108934044;
  plStack_80 = param_1;
  lStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001052b2560();
  (**(code **)(*plVar1 + 0x38))();
  lStack_78 = plVar1[2];
  plStack_80 = (long *)plVar1[1];
  func_0x0001003a90c4(&plStack_80);
  return;
}



/* Entry: 108934044; end: 108934073;  */

void FUN_108934044(long *param_1)

{
  func_0x0001052b2560();
  (**(code **)(*param_1 + 0x38))();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 108934074; end: 1089341bb;  */

undefined1  [16] FUN_108934074(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long lVar5;
  code **ppcVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_78;
  long lStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_38;
  
  func_0x0001089344f4();
  uStack_38 = extraout_x8;
  func_0x00010b9a113c(&lStack_70);
  func_0x0001052b2560();
  FUN_108933f50(&uStack_78,param_2);
  if (lStack_70 != 0) {
    plVar1 = (long *)(lStack_70 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pcStack_68 = FUN_108934208;
  ppuStack_60 = &PTR_FUN_110a9a3b8;
  lStack_58 = lStack_70;
  ppcVar6 = &pcStack_68;
  func_0x00010b9a4874(uStack_78,ppcVar6);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  func_0x000104bf3588(uStack_78);
  func_0x0001052b2c50(param_2);
  func_0x000104bda3ac();
  func_0x0001089344c8(uStack_38);
  if (!(bool)in_ZR) {
    lVar5 = lStack_70;
    ___stack_chk_fail();
    if (lVar5 == 0) {
      func_0x000107c278f8();
      uVar7 = 0;
      puVar8 = &UNK_10f7d0ef0;
    }
    else {
      piVar2 = (int *)(lVar5 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      func_0x000107c278f8(0);
      puVar8 = (undefined *)(lVar5 + 0x18);
      uVar7 = (ulong)*(uint *)(lVar5 + 0xc);
    }
    func_0x000107c278f8(lVar5);
    auVar10._8_8_ = uVar7;
    auVar10._0_8_ = puVar8;
    return auVar10;
  }
  auVar9._8_8_ = ppcVar6;
  auVar9._0_8_ = lStack_70;
  return auVar9;
}



/* Entry: 1089341bc; end: 1089341c3;  */

void FUN_1089341bc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar1 = param_1 + 1;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    func_0x0001003a8364();
    func_0x0001003ac8f0();
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1089341c4; end: 1089341d7;  */

void FUN_1089341c4(void)

{
  FUN_1089341d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089341d8; end: 108934207;  */

undefined8 * FUN_1089341d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9a378;
  func_0x00010b9a01e4(param_1 + 0xf);
  *param_1 = &PTR_DAT_110d7e848;
  func_0x000107c27900(param_1 + 0xe);
  func_0x00010b8df154(param_1 + 2);
  return param_1;
}



/* Entry: 108934208; end: 10893424b;  */

void FUN_108934208(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  puVar1 = auStack_30;
  func_0x0001089344f4();
  uStack_18 = extraout_x8;
  func_0x00010b9ac09c(auStack_30,*(undefined8 *)(param_1 + 0x10));
  func_0x000104bda914(auStack_30);
  func_0x0001089344c8(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001003adc0c(puVar1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 10893424c; end: 10893429f;  */

void FUN_10893424c(long param_1)

{
  func_0x0001003adc0c(param_1 + 8);
  func_0x000104bda3ac();
  return;
}



/* Entry: 1089342a0; end: 1089342b3;  */

void FUN_1089342a0(void)

{
  FUN_108934320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089342b4; end: 1089342c7;  */

void FUN_1089342b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001089342bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1089342c8; end: 1089342db;  */

void FUN_1089342c8(void)

{
  FUN_1089342ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089342dc; end: 1089342eb;  */

undefined1  [16] FUN_1089342dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xb;
  auVar1._0_8_ = &UNK_10f4ecf22;
  return auVar1;
}



/* Entry: 1089342ec; end: 10893431f;  */

undefined8 * FUN_1089342ec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9a438;
  func_0x000103c30080(param_1[5]);
  *param_1 = &PTR_DAT_110d7f008;
  func_0x000104bdbf78(param_1 + 4);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 108934320; end: 108934333;  */

void FUN_108934320(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9a3e8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108934334; end: 108934347;  */

void FUN_108934334(void)

{
  FUN_10893445c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108934348; end: 10893444b;  */

undefined1  [16] FUN_108934348(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  uint uStack_a8;
  undefined8 uStack_48;
  
  lVar3 = param_3;
  func_0x0001089344f4();
  uStack_48 = extraout_x8;
  func_0x00010b9a0ad4(auStack_c0,*(undefined8 *)(lVar3 + 0x18));
  uVar1 = *(uint *)(param_3 + 0x10);
  for (uVar6 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar6; uVar6 = uVar6 + 1) {
    lVar3 = param_3;
    func_0x00010b9abfa4(param_3,uVar6);
    func_0x00010b9a8f04(auStack_d0,lVar3);
    func_0x00010b9a0b80(auStack_c0,auStack_d0);
    func_0x000108934504();
  }
  uVar6 = *(ulong *)(param_2 + 0x10);
  puVar5 = auStack_c0;
  func_0x000103c2ffec(uVar6,puVar5);
  if ((uVar6 & 1) == 0) {
    uVar2 = *(char *)(lStack_b8 + 8) == '\x01';
    if ((bool)uVar2) {
      puVar5 = &UNK_10f4ecf2e;
      func_0x00010b9a0050(lStack_b8,&UNK_10f4ecf2e);
    }
  }
  else {
    uVar2 = uStack_a8 == uVar1;
    if ((int)uVar1 < (int)uStack_a8) {
      puVar5 = (undefined *)0xffffffff;
      func_0x00010b9a10dc(param_1,auStack_c0,0xffffffff);
      goto LAB_10893441c;
    }
  }
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
LAB_10893441c:
  puVar4 = auStack_c0;
  func_0x00010b9a0b2c(puVar4);
  func_0x0001089344c8(uStack_48);
  if ((bool)uVar2) {
    auVar7._8_8_ = puVar5;
    auVar7._0_8_ = puVar4;
    return auVar7;
  }
  ___stack_chk_fail();
  auVar8._8_8_ = 0xd;
  auVar8._0_8_ = &UNK_10f4ecf59;
  return auVar8;
}



/* Entry: 10893444c; end: 10893445b;  */

undefined1  [16] FUN_10893444c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f4ecf59;
  return auVar1;
}



/* Entry: 10893445c; end: 1089344bb;  */

undefined8 * FUN_10893445c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a9a478;
  func_0x000103c30080(param_1[2]);
  return param_1;
}



/* Entry: 1089344bc; end: 1089345e7;  */

void FUN_1089344bc(void)

{
  return;
}



/* Entry: 1089345e8; end: 10893465b; -[SCNTalkcoreTsErrorReporterImpl initWithCrashLogger:] */

undefined1 * FUN_1089345e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd370;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10893465c; end: 10893465f; -[SCNTalkcoreTsErrorReporterImpl reportCallingErrorWithErrorCode:message:] */

void FUN_10893465c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportErrorWithErrorCode_messag_112581798);
  return;
}



/* Entry: 108934660; end: 108934663; -[SCNTalkcoreTsErrorReporterImpl reportPresenceErrorWithErrorCode:message:] */

void FUN_108934660(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportErrorWithErrorCode_messag_112581798);
  return;
}



/* Entry: 108934664; end: 108934667; -[SCNTalkcoreTsErrorReporterImpl reportError:message:] */

void FUN_108934664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reportErrorWithErrorCode_messag_112581798);
  return;
}



/* Entry: 108934668; end: 10893470b; -[SCNTalkcoreTsErrorReporterImpl _reportErrorWithErrorCode:message:] */

void FUN_108934668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3e90;
  if (*(long *)(param_1 + 8) != 0) {
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010b7ea584();
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar3);
    _objc_release(param_4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10893470c; end: 108934717; -[SCNTalkcoreTsErrorReporterImpl .cxx_destruct] */

void FUN_10893470c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108934718; end: 108934813; -[SCNTalkcoreTsTalkCoreDependenciesImpl initWithVideoRendererController:localFrameProvider:opsDataProvider:errorReporter:] */

undefined1 *
FUN_108934718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fd378;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108934814; end: 10893481b; -[SCNTalkcoreTsTalkCoreDependenciesImpl getExternalVideoService] */

undefined8 FUN_108934814(void)

{
  return 0;
}



/* Entry: 10893481c; end: 108934843; -[SCNTalkcoreTsTalkCoreDependenciesImpl getLocalFrameProvider] */

void FUN_10893481c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108934844; end: 10893486b; -[SCNTalkcoreTsTalkCoreDependenciesImpl getVideoRendererController] */

void FUN_108934844(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10893486c; end: 108934893; -[SCNTalkcoreTsTalkCoreDependenciesImpl getOpsDataProvider] */

void FUN_10893486c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108934894; end: 108934a2f; -[SCNTalkcoreTsTalkCoreDependenciesImpl getCodecConfig] */

void FUN_108934894(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e1c0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07e1a0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075ce0();
  if ((int)puVar2 != 0) {
    puVar2 = PTR_PTR_1126b2930;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfd3880();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfda7c0();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = PTR_PTR_1126b2930;
      func_0x00010bf5e640();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfd3880();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfda7c0();
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = PTR_PTR_1126b2930;
        func_0x00010bf5e640(PTR_PTR_1126b2930);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010bfd3880();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfda7c0();
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_alloc(PTR_PTR_1126dad70);
  func_0x00010c019c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108934a30; end: 108934b43; -[SCNTalkcoreTsTalkCoreDependenciesImpl getAppInfo] */

void FUN_108934a30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfd3880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c267460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e86738);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126dad78;
  _objc_alloc(PTR_PTR_1126dad78);
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010bf066e0(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c320(puVar1,param_2,puVar5,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108934b44; end: 108934b6b; -[SCNTalkcoreTsTalkCoreDependenciesImpl getErrorReporter] */

void FUN_108934b44(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108934b6c; end: 108934b93; -[SCNTalkcoreTsTalkCoreDependenciesImpl getCapturedAudioProvider] */

void FUN_108934b6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108934b94; end: 108934baf; -[SCNTalkcoreTsTalkCoreDependenciesImpl getLogger] */

void FUN_108934b94(void)

{
  _objc_opt_new(PTR_PTR_1126dad80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108934bb0; end: 108934bf7; -[SCNTalkcoreTsTalkCoreDependenciesImpl .cxx_destruct] */

void FUN_108934bb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108934bf8; end: 108934c27; -[SCRendererManagerBridgeImpl setListener:] */

void FUN_108934bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108934c28; end: 108934c2f; -[SCRendererManagerBridgeImpl startRendering:callback:] */

void FUN_108934c28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onStartRendering_callback__112617498);
  return;
}



/* Entry: 108934c30; end: 108934c37; -[SCRendererManagerBridgeImpl stopRendering:] */

void FUN_108934c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onStopRendering__1126174d0);
  return;
}



/* Entry: 108934c38; end: 108934c43; -[SCRendererManagerBridgeImpl .cxx_destruct] */

void FUN_108934c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108934c44; end: 108934cbb; -[SCTCallOpsDataProviderImpl init] */

undefined1 * FUN_108934c44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd380;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x14) = 0xbf800000;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108934cbc; end: 108934cbf; -[SCTCallOpsDataProviderImpl getBatteryLevel] */

void FUN_108934cbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_batteryLevel_1125a36e8);
  return;
}



/* Entry: 108934cc0; end: 108934cc7; -[SCTCallOpsDataProviderImpl getTemperature] */

undefined8 FUN_108934cc0(void)

{
  return 0xfffffeef;
}



/* Entry: 108934cc8; end: 108934e17; -[SCTCallOpsDataProviderImpl _batteryStateDidChange] */

void FUN_108934cc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf176e0();
  _objc_release(puVar1);
  uVar5 = (ulong)puVar2 & 0xfffffffffffffffe;
  lVar4 = param_1;
  func_0x00010c07a920();
  if ((uint)(uVar5 == 2) != (uint)lVar4) {
    func_0x00010c1b36c0(param_1,param_2,uVar5 == 2);
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 8);
    _objc_retain(lVar4);
    lVar3 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
    if (lVar3 != 0) {
      lVar6 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar6) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010c105b60(*(undefined8 *)(lStack_108 + lVar7 * 8),param_2,uVar5 == 2);
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_110,auStack_c8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  func_0x00010c16f9e0(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108934e18; end: 108934e5b; -[SCTCallOpsDataProviderImpl _batteryLevelDidChange] */

void FUN_108934e18(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17500();
  func_0x00010c16f9e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108934e5c; end: 108934f67; -[SCTCallOpsDataProviderImpl start] */

void FUN_108934e5c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c06d140();
    *(char *)(param_1 + 0x11) = (char)puVar2;
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16faa0();
    _objc_release(puVar1);
    func_0x00010bdd2fa0(param_1);
    func_0x00010bdd2fe0(param_1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 108934f68; end: 10893502f; -[SCTCallOpsDataProviderImpl stop] */

void FUN_108934f68(long param_1)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16faa0();
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 108935030; end: 108935087; -[SCTCallOpsDataProviderImpl addListener:] */

void FUN_108935030(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010c07a920(param_1);
    func_0x00010c105b60(param_3,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108935088; end: 10893508f; -[SCTCallOpsDataProviderImpl removeListener:] */

void FUN_108935088(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__112628ef8)
  ;
  return;
}



/* Entry: 108935090; end: 108935097; -[SCTCallOpsDataProviderImpl batteryLevel] */

undefined4 FUN_108935090(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108935098; end: 10893509f; -[SCTCallOpsDataProviderImpl setBatteryLevel:] */

void FUN_108935098(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



/* Entry: 1089350a0; end: 1089350ab; -[SCTCallOpsDataProviderImpl isPowered] */

byte FUN_1089350a0(long param_1)

{
  return *(byte *)(param_1 + 0x12) & 1;
}



/* Entry: 1089350ac; end: 1089350b3; -[SCTCallOpsDataProviderImpl setIsPowered:] */

void FUN_1089350ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x12) = param_3;
  return;
}



/* Entry: 1089350b4; end: 1089350bf; -[SCTCallOpsDataProviderImpl .cxx_destruct] */

void FUN_1089350b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1089350c0; end: 1089350c3; -[SCTalkAdlLogger log:tag:message:] */

void FUN_1089350c0(void)

{
  return;
}



/* Entry: 1089350c4; end: 1089350cb; -[SCTalkLocalFrameProviderImpl injectCameraFrame:] */

void FUN_1089350c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_injectFrame__1125f6e10);
  return;
}



/* Entry: 1089350cc; end: 10893513f; -[SCTalkLocalFrameProviderImpl injectScreenFrame:] */

void FUN_1089350cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  _CMSampleBufferGetFormatDescription();
  iVar1 = (int)uVar2;
  _CMFormatDescriptionGetMediaType();
  if (iVar1 == 0x736f756e) {
                    /* WARNING: Could not recover jumptable at 0x00010be3bf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__injectAudioFrame__11256c968,param_3);
    return;
  }
  if (iVar1 == 0x76696465) {
                    /* WARNING: Could not recover jumptable at 0x00010c065010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_injectFrame__1125f6e10,param_3);
    return;
  }
  return;
}



/* Entry: 108935140; end: 1089351a7; -[SCTalkLocalFrameProviderImpl setInjector:source:] */

void FUN_108935140(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    if (param_4 == 0) {
      lVar2 = 8;
    }
    else {
      if (param_4 != 1) goto LAB_108935194;
      lVar2 = 0x10;
    }
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
LAB_108935194:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1089351a8; end: 108935267; -[SCTalkLocalFrameProviderImpl setResolution:width:height:] */

void FUN_1089351a8(undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  double dStack_48;
  double dStack_40;
  undefined1 auStack_38 [8];
  
  if (param_3 == 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108935268;
    puStack_58 = &UNK_110849d70;
    _objc_copyWeak(auStack_50,auStack_38);
    dStack_48 = (double)param_4;
    dStack_40 = (double)param_5;
    func_0x000107c312cc("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 108935268; end: 1089352bf;  */

void FUN_108935268(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c13a400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09d9e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1089352c0; end: 1089352ef; -[SCTalkLocalFrameProviderImpl setListener:] */

void FUN_1089352c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1089352f0; end: 1089353ef; -[SCTalkLocalFrameProviderImpl _injectAudioFrame:] */

void FUN_1089352f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (param_3 != 0) {
    _CMSampleBufferGetFormatDescription();
    _CMAudioFormatDescriptionGetStreamBasicDescription();
    lVar1 = param_3;
    _CMSampleBufferGetDataBuffer();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      _CMBlockBufferGetDataLength();
      puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x00010bf64b80(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      _objc_retainAutorelease();
      func_0x00010c0d3c60();
      _CMBlockBufferCopyDataBytes(lVar1,0,lVar2,puVar4);
      if ((int)lVar1 == 0) {
        _CMSampleBufferGetNumSamples(param_3);
        _CMSampleBufferGetPresentationTimeStamp(auStack_70,param_3);
        _CMTimeConvertScale(auStack_58,auStack_70,1000000000,1);
        func_0x00010c0e4560(*(undefined8 *)(param_1 + 0x18));
      }
      _objc_release(puVar3);
    }
  }
  return;
}



/* Entry: 1089353f0; end: 108935407; -[SCTalkLocalFrameProviderImpl resolutionDelegate] */

void FUN_1089353f0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108935408; end: 108935413; -[SCTalkLocalFrameProviderImpl setResolutionDelegate:] */

void FUN_108935408(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108935414; end: 108935457; -[SCTalkLocalFrameProviderImpl .cxx_destruct] */

void FUN_108935414(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108935458; end: 10893555b;  */

void FUN_108935458(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf70c20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_48);
  uVar2 = param_2;
  func_0x00010bf066e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(&uStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10893555c; end: 108935627;  */

ulong FUN_10893555c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfd7940(param_1);
  uVar3 = param_1;
  func_0x00010bfd7920();
  uVar4 = param_1;
  func_0x00010bfd7980();
  uVar5 = param_1;
  func_0x00010bfd7960();
  uVar6 = param_1;
  func_0x00010bf8ff00();
  _objc_release(param_1);
  uVar1 = 0x100000000;
  if ((int)uVar6 == 0) {
    uVar1 = 0;
  }
  uVar6 = 0x1000000;
  if ((int)uVar5 == 0) {
    uVar6 = 0;
  }
  uVar5 = 0x10000;
  if ((int)uVar4 == 0) {
    uVar5 = 0;
  }
  uVar4 = 0x100;
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  return uVar4 | uVar2 & 0xffffffff | uVar5 | uVar6 | uVar1;
}



/* Entry: 108935628; end: 1089356df;  */

void FUN_108935628(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a9a538;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_1089356e0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108935964(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1089356e0; end: 1089357df;  */

void FUN_1089356e0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9a578;
  puVar4[3] = &PTR_DAT_110a9a5f0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a9a5c8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108935964(&uStack_50);
  return;
}



/* Entry: 1089357e0; end: 1089357e3;  */

void FUN_1089357e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1089357e4; end: 1089357f7;  */

void FUN_1089357e4(void)

{
  FUN_108935954();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1089357f8; end: 108935803;  */

long FUN_1089357f8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9a538;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108935804; end: 108935843;  */

void FUN_108935804(void)

{
  FUN_108935990();
  return;
}



/* Entry: 108935844; end: 1089358bf;  */

void FUN_108935844(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c27f28(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c132d00(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1089358c0; end: 108935953;  */

long FUN_1089358c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9a538;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 108935954; end: 108935963;  */

void FUN_108935954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108935964; end: 10893598f;  */

long FUN_108935964(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108935990; end: 10893599b;  */

long FUN_108935990(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9a538;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10893599c; end: 108935a53;  */

void FUN_10893599c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a9a660;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_108935a54);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_108935f2c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108935a54; end: 108935b4f;  */

void FUN_108935a54(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a9a6a0;
  puVar4[3] = &PTR_DAT_110a9a758;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a9a6f0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_108935f2c(&uStack_50);
  return;
}



/* Entry: 108935b50; end: 108935b53;  */

void FUN_108935b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a9a6a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108935b54; end: 108935b67;  */

void FUN_108935b54(void)

{
  FUN_108935f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108935b68; end: 108935b73;  */

long FUN_108935b68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a9a660;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 108935b74; end: 108935bb3;  */

void FUN_108935b74(void)

{
  func_0x000108935f98();
  return;
}



/* Entry: 108935bb4; end: 108935c17;  */

void FUN_108935bb4(long param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfc54c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_1 == 0) {
    *unaff_x21 = 0;
    unaff_x21[1] = 0;
  }
  else {
    FUN_108946f90(param_1);
  }
  func_0x000108935f7c();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108935c18; end: 108935c7b;  */

void FUN_108935c18(long param_1)

{
  undefined8 *unaff_x21;
  
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfc71c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_1 == 0) {
    *unaff_x21 = 0;
    unaff_x21[1] = 0;
  }
  else {
    FUN_108947dac(param_1);
  }
  func_0x000108935f7c();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 108935c7c; end: 108935cc3;  */

void FUN_108935c7c(void)

{
  func_0x000108935f64();
  func_0x000108935f8c();
  func_0x00010bfcc180();
  _objc_retainAutoreleasedReturnValue();
  FUN_1089362b0();
  func_0x000108935f7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}


