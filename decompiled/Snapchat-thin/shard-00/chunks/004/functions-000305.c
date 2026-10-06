/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10067d760; end: 10067d85f;  */

void FUN_10067d760(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 *puStack_50;
  ulong uStack_48;
  
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 == (undefined8 *)param_1[3]) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = (long)((long)puVar2 - uVar1) >> 3;
      if ((long)puVar2 - uVar1 == 0) {
        uVar3 = 1;
      }
      func_0x00010067d718(&uStack_60,uVar3,uVar3 >> 2,param_1[4]);
      lVar4 = param_1[2] - (long)param_1[1];
      uVar1 = (long)puStack_50 + lVar4;
      puVar2 = (undefined8 *)param_1[1];
      for (; lVar4 != 0; lVar4 = lVar4 + -0x10) {
        uVar5 = *puVar2;
        puStack_50[1] = puVar2[1];
        *puStack_50 = uVar5;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
        puStack_50 = puStack_50 + 2;
      }
      uVar6 = param_1[1];
      uVar3 = *param_1;
      uVar7 = param_1[3];
      puStack_50 = (undefined8 *)param_1[2];
      param_1[1] = uStack_58;
      *param_1 = uStack_60;
      param_1[2] = uVar1;
      param_1[3] = uStack_48;
      uStack_60 = uVar3;
      uStack_58 = uVar6;
      uStack_48 = uVar7;
      FUN_10067d930(&uStack_60);
      puVar2 = (undefined8 *)param_1[2];
    }
    else {
      lVar4 = (((long)(uVar3 - uVar1) >> 4) + 1) / -2;
      FUN_10089bf9c(uVar3,puVar2,uVar3 + lVar4 * 0x10);
      param_1[1] = param_1[1] + lVar4 * 0x10;
      param_1[2] = (ulong)puVar2;
    }
  }
  lVar4 = param_2[1];
  uVar5 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_10067d860();
    } while (extraout_w10 != 0);
    puVar2 = (undefined8 *)param_1[2];
  }
  param_1[2] = (ulong)(puVar2 + 2);
  return;
}



/* Entry: 10067d860; end: 10067d86f;  */

void FUN_10067d860(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10067d870; end: 10067d91b;  */

undefined8 FUN_10067d870(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  func_0x000107c610b4(param_2[2],param_3,param_1[1] - param_3);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 - (param_3 - lVar2);
  func_0x000107c610b4(lVar3);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 10067d91c; end: 10067d92f;  */

undefined8 * FUN_10067d91c(void)

{
  long in_stack_00000008;
  
  func_0x00010067d928();
  if (in_stack_00000008 != 0) {
    func_0x000107c60e14();
  }
  return &stack0x00000008;
}



/* Entry: 10067d930; end: 10067d997;  */

long * FUN_10067d930(long *param_1)

{
  func_0x00010067d928();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10067d998; end: 10067d9a7;  */

void FUN_10067d998(void)

{
  return;
}



/* Entry: 10067d9a8; end: 10067d9d3;  */

long FUN_10067d9a8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x333333333333334) {
    lVar1 = param_2 * 0x50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10067d9a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10067d9d4; end: 10067d9fb;  */

long FUN_10067d9d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10067d9a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10067d9fc; end: 10067db53;  */

void FUN_10067d9fc(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  long **pplVar3;
  code *extraout_x8;
  long *plStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  long *aplStack_40 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10067d9d4(aplStack_40,1);
  puStack_48 = puStack_30;
  *puStack_30 = &PTR_DAT_1108789a8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110878a10;
  puStack_30[4] = FUN_10067dc4c;
  puStack_30[5] = &PTR_FUN_110cd2cc0;
  puStack_30[6] = param_1;
  puStack_30 = (undefined8 *)0x0;
  plVar2 = puStack_48 + 3;
  iVar1 = (int)aplStack_40;
  plStack_50 = plVar2;
  FUN_10067db54();
  FUN_10060f340();
  if (iVar1 != 0) {
    func_0x000107c2c7a8(aplStack_40);
    plVar2 = aplStack_40[0];
    FUN_100669930();
    iVar1 = (int)plVar2;
    (*extraout_x8)();
    func_0x000107c35834();
    plVar2 = plStack_50;
    if (iVar1 == 0) {
      func_0x000107c2c7a8(aplStack_40);
      puStack_58 = puStack_48;
      plStack_60 = plStack_50;
      plStack_50 = (long *)0x0;
      puStack_48 = (undefined8 *)0x0;
      (**(code **)(*aplStack_40[0] + 0x10))(aplStack_40[0],&plStack_60);
      FUN_100576684(&plStack_60);
      func_0x000107c35834();
      goto LAB_10067daf4;
    }
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
LAB_10067daf4:
  FUN_10068f378(&plStack_50);
  func_0x0001006696e4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3580c();
  FUN_100576684();
  func_0x000107c35834();
  pplVar3 = &plStack_50;
  FUN_10068f378();
  func_0x000107c357f0();
  if (pplVar3[2] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10067db54; end: 10067db6b;  */

void FUN_10067db54(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10067db6c; end: 10067dba7;  */

long FUN_10067db6c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_100b442b0();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_10067dc9c();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 10067dba8; end: 10067dc1b;  */

void FUN_10067dba8(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  for (plVar2 = (long *)*param_3; plVar2 != (long *)*param_4; plVar2 = plVar2 + 2) {
    if ((iVar1 == 0) || ((*(byte *)(*plVar2 + 0x17c) & 1) == 0)) {
      FUN_10067db6c(param_1,plVar2);
    }
  }
  return;
}



/* Entry: 10067dc1c; end: 10067dc4b;  */

void FUN_10067dc1c(long *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(*param_1 + 0x28);
  uStack_20 = *(undefined8 *)(*param_1 + 0x30);
  FUN_10067dba8(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10067dc4c; end: 10067dc9b;  */

void FUN_10067dc4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_10067dc1c(auStack_38,*(undefined8 *)(lVar1 + 0x40));
  (**(code **)(**(long **)(lVar1 + 0x30) + 0x50))
            (*(long **)(lVar1 + 0x30),auStack_38,*(undefined4 *)(lVar1 + 0x48));
  FUN_10068f364();
  return;
}



/* Entry: 10067dc9c; end: 10067dd4f;  */

long FUN_10067dc9c(long *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar3 = param_1;
  FUN_10067d698(param_1,(param_1[1] - *param_1 >> 4) + 1);
  func_0x00010067d718(auStack_48,plVar3,param_1[1] - *param_1 >> 4,param_1 + 2);
  lVar4 = param_2[1];
  uVar5 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar5;
  if (lVar4 != 0) {
    plVar3 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_38 = puStack_38 + 2;
  FUN_10067dd50(param_1,auStack_48);
  lVar4 = param_1[1];
  FUN_10067d930(auStack_48);
  return lVar4;
}



/* Entry: 10067dd50; end: 10067ddc7;  */

void FUN_10067dd50(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] - (param_1[1] - *param_1);
  func_0x000107c610b4(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10067ddc8; end: 10067dde7;  */

void FUN_10067ddc8(void)

{
  return;
}



/* Entry: 10067dde8; end: 10067df77;  */

undefined8 * FUN_10067dde8(long param_1,undefined **param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  undefined8 *puVar7;
  long unaff_x22;
  long lVar8;
  undefined8 *puStack_140;
  undefined1 uStack_138;
  long lStack_130;
  undefined8 **ppuStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [40];
  undefined8 *puStack_b8;
  undefined8 auStack_b0 [3];
  undefined4 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_e0;
  FUN_1006541a8();
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  puStack_b8 = puVar7;
  uStack_58 = extraout_x8;
  FUN_10067dfb0(auStack_b0);
  plVar3 = (long *)*puVar7;
  uStack_98 = param_3;
  (**(code **)(*plVar3 + 0x20))();
  if ((int)plVar3 == 0) {
    lVar8 = puVar7[2];
    func_0x000107c2c8c4(auStack_e0,&puStack_b8);
    FUN_10028c49c();
    unaff_x22 = *(long *)(lVar8 + 0x10);
    func_0x000107c60d88(unaff_x22 + 8);
    lVar8 = *(long *)(unaff_x22 + 0x70);
    puStack_90 = &UNK_10b2e35a8;
    ppuStack_88 = &PTR_DAT_110cd38a8;
    puVar7 = (undefined8 *)0x28;
    func_0x000107c60e20();
    func_0x000107c2c8c4();
    param_2 = &puStack_90;
    puStack_80 = puVar7;
    puStack_60 = puVar4;
    FUN_1005760fc(unaff_x22 + 0x48);
    func_0x000107c35ae4(ppuStack_88);
    func_0x000107c35b2c();
    if (lVar8 == 0) {
      func_0x000107c35b6c();
      if (extraout_x8_00 != 0) {
        do {
          FUN_10063c448();
        } while (extraout_w10 != 0);
      }
      FUN_1006680f4();
      param_2 = &puStack_90;
      (*extraout_x8_01)();
      func_0x000107c35b28();
    }
    func_0x000107c35b50();
  }
  else {
    FUN_10067e138(&puStack_b8);
  }
  puVar5 = auStack_b0;
  func_0x00010067f53c();
  func_0x000100654944(uStack_58);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000107c35b28();
    func_0x000107c35b50();
    puVar6 = auStack_b0;
    func_0x00010067f53c();
    func_0x000107c35af0();
    pcStack_e8 = FUN_10067df78;
    puStack_100 = puVar7;
    puStack_f8 = puVar5;
    puStack_f0 = &stack0xfffffffffffffff0;
    if ((ulong)param_2 >> 0x3c != 0) {
      func_0x000107c2c70c();
      pcStack_108 = FUN_10067dfb0;
      lStack_130 = unaff_x22;
      ppuStack_128 = &puStack_b8;
      puStack_120 = puVar7;
      puStack_118 = puVar5;
      ppuStack_110 = &puStack_f0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar1 = *param_2;
      puVar2 = param_2[1];
      uStack_138 = 0;
      lVar8 = (long)puVar2 - (long)puVar1;
      puStack_140 = puVar6;
      if (lVar8 != 0) {
        FUN_10067df78(puVar6,lVar8 >> 4);
        puVar7 = puVar6 + 2;
        FUN_10067e058(puVar7,puVar1,puVar2,puVar6[1]);
        puVar6[1] = puVar7;
      }
      uStack_138 = 1;
      FUN_10067e10c(&puStack_140);
      return puVar6;
    }
    puVar7 = puVar6 + 2;
    FUN_10067d6f4();
    *puVar6 = puVar7;
    puVar6[1] = puVar7;
    puVar6[2] = puVar7 + (long)param_2 * 2;
    return puVar7;
  }
  return puVar5;
}



/* Entry: 10067df78; end: 10067dfaf;  */

undefined8 * FUN_10067df78(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    puVar4 = param_1 + 2;
    FUN_10067d6f4();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + (long)param_2 * 2;
    return puVar4;
  }
  func_0x000107c2c70c();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_58 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_60 = param_1;
  if (lVar3 != 0) {
    FUN_10067df78(param_1,lVar3 >> 4);
    puVar4 = param_1 + 2;
    FUN_10067e058(puVar4,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar4;
  }
  uStack_58 = 1;
  FUN_10067e10c(&puStack_60);
  return param_1;
}



/* Entry: 10067dfb0; end: 10067e04f;  */

undefined8 * FUN_10067dfb0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puStack_40;
  undefined1 uStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  uStack_38 = 0;
  lVar3 = lVar2 - lVar1;
  puStack_40 = param_1;
  if (lVar3 != 0) {
    FUN_10067df78(param_1,lVar3 >> 4);
    puVar4 = param_1 + 2;
    FUN_10067e058(puVar4,lVar1,lVar2,param_1[1]);
    param_1[1] = puVar4;
  }
  uStack_38 = 1;
  FUN_10067e10c(&puStack_40);
  return param_1;
}



/* Entry: 10067e050; end: 10067e057;  */

void FUN_10067e050(void)

{
  return;
}



/* Entry: 10067e058; end: 10067e0db;  */

undefined8 *
FUN_10067e058(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puVar5 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar4 = param_2[1];
    uVar6 = *param_2;
    puVar5[1] = param_2[1];
    *puVar5 = uVar6;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar5 = puVar5 + 2;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  puStack_28 = puVar5;
  FUN_10067e0dc(&uStack_50);
  return puVar5;
}



/* Entry: 10067e0dc; end: 10067e10b;  */

long FUN_10067e0dc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000107c2c738(param_1);
  }
  return param_1;
}



/* Entry: 10067e10c; end: 10067e137;  */

long FUN_10067e10c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10067f500(param_1);
  }
  return param_1;
}



/* Entry: 10067e138; end: 10067e217;  */

void FUN_10067e138(long *param_1)

{
  code *extraout_x8;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lStack_70;
  long lStack_68;
  long *plStack_58;
  long *plStack_50;
  
  lVar1 = *param_1;
  (**(code **)(**(long **)(lVar1 + 0x300) + 0x18))
            (&lStack_70,*(long **)(lVar1 + 0x300),param_1 + 1,lVar1 + 0x1e8,(int)param_1[4]);
  for (; lVar2 = lStack_70, plStack_58 != plStack_50; plStack_58 = plStack_58 + 2) {
    func_0x000107c2c7d8(lVar1 + 0x148,plStack_58);
    *(int *)(*plStack_58 + 0x2b0) = *(int *)(*plStack_58 + 0x2b0) + 1;
  }
  for (; lVar2 != lStack_68; lVar2 = lVar2 + 0x10) {
    puVar4 = *(undefined8 **)(lVar1 + 0x318);
    for (puVar3 = *(undefined8 **)(lVar1 + 0x310); puVar3 != puVar4; puVar3 = puVar3 + 1) {
      FUN_1006680f4(*puVar3);
      (*extraout_x8)();
    }
    FUN_1006508ac();
    FUN_100680758();
  }
  FUN_10067f8f0(&lStack_70);
  return;
}



/* Entry: 10067e218; end: 10067e817;  */

void FUN_10067e218(undefined8 *param_1,ulong param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  code *extraout_x9;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  uStack_a8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3f800000;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_120 = 0x3f800000;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_150 = 0x3f800000;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_180 = 0x3f800000;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x3f800000;
  lStack_1e8 = 0;
  lStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1f0 = 0x3f800000;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (*(long *)(param_4 + 0x10) != 0) {
    FUN_10067e8d0(param_2,*(long *)(param_4 + 0x10) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010067e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e573d60)[param_2 & 0xffffffff] * 4 + 0x10067e2f4))(&uStack_110);
    return;
  }
  uStack_220 = 0;
  uStack_218 = 0;
  puVar1 = &uStack_220;
  puStack_228 = &uStack_220;
  if (*param_3 == param_3[1]) {
    while (puVar1 != &uStack_220) {
      (**(code **)(**(long **)(param_2 + 0x10) + 0x10))
                (*(long **)(param_2 + 0x10),*(undefined4 *)((long)puVar1 + 0x24),
                 *(undefined4 *)(param_2 + 0x68),*(undefined4 *)((long)puVar1 + 0x1c),
                 *(undefined4 *)(puVar1 + 4));
      FUN_10002c7d4();
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    if ((lStack_e8 != lStack_e0) && (*(char *)(param_2 + 0x60) == '\x01')) {
      FUN_10066862c(param_2 + 0x58);
      func_0x00010067eb38(*(undefined8 *)(param_2 + 0x58));
      (*extraout_x9)(&uStack_258);
      FUN_10067f5b0(param_2,uStack_258,uStack_250,&uStack_1d0,5);
      FUN_10067f72c();
      FUN_10067f8e8();
    }
    if (lStack_d0 != lStack_c8) {
      func_0x00010067eb38(*(undefined8 *)(param_2 + 0x50));
      func_0x00010067eb44(&uStack_258);
      FUN_10067f5b0(param_2,uStack_258,uStack_250,&uStack_1a0,4);
      FUN_10067f72c();
      FUN_10067f8e8();
    }
    if (lStack_88 != lStack_80) {
      func_0x00010067eb38(*(undefined8 *)(param_2 + 0x28));
      func_0x00010067eb44(&uStack_258);
      FUN_10067f5b0(param_2,uStack_258,uStack_250,&uStack_110,0);
      FUN_10067f72c();
      FUN_10067f8e8();
    }
    if (lStack_1e8 != lStack_1e0) {
      func_0x00010067eb38(*(undefined8 *)(param_2 + 0x40));
      func_0x00010067eb44(&uStack_258);
      FUN_10067f5b0(param_2,uStack_258,uStack_250,&uStack_210,3);
      FUN_10067f72c();
      FUN_10067f8e8();
    }
    if (lStack_a0 != lStack_98) {
      func_0x00010067eb38(*(undefined8 *)(param_2 + 0x30));
      func_0x00010067eb44(&uStack_258);
      FUN_10067f5b0(param_2,uStack_258,uStack_250,&uStack_140,1);
      FUN_10067f72c();
      FUN_10067f8e8();
    }
    if (lStack_b8 != lStack_b0) {
      func_0x00010067eb38(*(undefined8 *)(param_2 + 0x38));
      func_0x00010067eb44(&uStack_258);
      FUN_10067f5b0(param_2,uStack_258,uStack_250,&uStack_170,2);
      FUN_10067f72c();
      FUN_10067f8e8();
    }
    func_0x00010067f918(uStack_220);
    func_0x00010067f988(&uStack_210);
    func_0x00010067f53c(&lStack_1e8);
    func_0x00010067f988(&uStack_1d0);
    func_0x00010067f988(&uStack_1a0);
    func_0x00010067f988(&uStack_170);
    func_0x00010067f988(&uStack_140);
    func_0x00010067f988(&uStack_110);
    func_0x00010067f53c(&lStack_e8);
    func_0x00010067f53c(&lStack_d0);
    func_0x00010067f53c(&lStack_b8);
    func_0x00010067f53c(&lStack_a0);
    func_0x00010067f53c(&lStack_88);
    return;
  }
  FUN_10067e8d0(param_2,*param_3);
                    /* WARNING: Could not recover jumptable at 0x00010067e378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e573d66)[param_2 & 0xffffffff] * 4 + 0x10067e37c))(&lStack_88);
  return;
}



/* Entry: 10067e818; end: 10067e8b3;  */

long FUN_10067e818(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10067e8b4; end: 10067e8cf;  */

bool FUN_10067e8b4(long param_1)

{
  FUN_10067e818();
  return param_1 != 0;
}



/* Entry: 10067e8d0; end: 10067e9cb;  */

undefined4 FUN_10067e8d0(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uStack_24;
  
  uStack_24 = *(undefined4 *)(*param_2 + 0xa8);
  uVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0x38) + 0x1a0;
  FUN_10067e8b4(uVar4,&uStack_24);
  if ((uVar4 & 1) != 0) {
    return 3;
  }
  lVar5 = *param_2;
  lVar1 = 0xc0;
  if (*(char *)(lVar5 + 0x120) == '\0') {
    lVar1 = 0x60;
  }
  uVar2 = *(uint *)(lVar5 + lVar1 + 0x48);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    if (9 < uVar2) {
      return 2;
    }
    uVar3 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar3 & 0x94) != 0) {
      return 0;
    }
    if ((uVar3 & 0x101) != 0) {
      return 1;
    }
    if ((1 << (ulong)(uVar2 & 0x1f) & 0x220U) == 0) {
      return 2;
    }
    if (*(int *)(lVar5 + 0x180) == 4) {
      return 5;
    }
  }
  if (9 < uVar2) {
    return 2;
  }
  return *(undefined4 *)(&UNK_10e573d9c + (ulong)uVar2 * 4);
}



/* Entry: 10067e9cc; end: 10067eb0f;  */

void FUN_10067e9cc(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long alStack_90 [4];
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  
  FUN_10066690c();
  if (in_NG == in_OV) {
    FUN_10067eb10();
    func_0x00010067eb20();
    if (extraout_x8 == 0) {
      func_0x000107c358b8();
      alStack_90[2] = 0;
      alStack_90[3] = 0;
      alStack_90[0] = extraout_x8_00 + 0x10;
      alStack_90[1] = 0;
      uStack_70 = 6;
      func_0x000107c358f0();
      func_0x000107c2c740(alStack_90,auStack_a8,(&PTR_s_Metadata_110cd3110)[param_4]);
      func_0x000107c358ec();
      func_0x000107c2c740(alStack_90,auStack_c0,(&PTR_DAT_110cd3140)[param_5]);
      func_0x000107c3586c();
      func_0x000107c35880();
      func_0x000107c2c740(alStack_90,auStack_d8);
      func_0x000107c2c744(auStack_68,alStack_90);
      func_0x000107c358ac();
      func_0x000107c358cc();
      func_0x000107c358d0();
      func_0x000107c2c748(alStack_90);
      func_0x000107c35884(*(undefined8 *)(param_1 + 0x48));
      (*extraout_x8_01)();
      func_0x000107c2c748(auStack_68);
    }
  }
  return;
}



/* Entry: 10067eb10; end: 10067eb4b;  */

void FUN_10067eb10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010067eb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10067eb4c; end: 10067ec13;  */

long FUN_10067eb4c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    func_0x000100685b68();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar2 != plVar6) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 10067ec14; end: 10067f217;  */

void FUN_10067ec14(long *param_1,long *param_2,long *param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  ulong *puVar2;
  long **pplVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  uint *puVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  long *plVar23;
  char *pcVar24;
  uint uStack_184;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long **pplStack_130;
  undefined8 uStack_128;
  ulong uStack_f8;
  int iStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  float fStack_c0;
  undefined5 uStack_bc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  
  plStack_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  uStack_140 = 0;
  plStack_168 = (long *)0x0;
  uStack_160 = 0;
  uStack_158 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  lStack_180 = 0;
  lStack_178 = 0;
  uStack_170 = 0;
  lVar4 = param_3[1];
  for (lVar18 = *param_3; plVar7 = plStack_148, lVar18 != lVar4; lVar18 = lVar18 + 0x10) {
    lVar9 = param_4;
    FUN_10067eb4c(param_4,lVar18);
    pplVar3 = &plStack_150;
    if (lVar9 != 0) {
      pplVar3 = &plStack_168;
    }
    FUN_10067db6c(pplVar3,lVar18);
  }
  plVar19 = plStack_150;
  do {
    if (plVar19 == plVar7) {
      if (((*(byte *)(param_2[4] + 0x10) & 1) != 0) && (lStack_180 != lStack_178)) {
        func_0x000107c2c978(&lStack_180,param_1,param_1 + 3,&plStack_168,param_2 + 4,
                            *(undefined4 *)((long)param_2 + 0x34),param_2[2],param_5);
      }
      func_0x00010067f53c(&lStack_180);
      func_0x00010067f53c(&plStack_168);
      func_0x00010067f53c(&plStack_150);
      return;
    }
    lVar18 = *plVar19;
    lVar4 = 0xc0;
    if (*(char *)(lVar18 + 0x120) == '\0') {
      lVar4 = 0x60;
    }
    FUN_10064f5f4(&uStack_f8,0,param_2[4] + 0x18);
    lVar18 = lVar18 + lVar4;
    pcVar1 = (char *)(lVar18 + 8);
    puVar21 = &uStack_f8;
    if ((uStack_f8 & 1) != 0) {
      puVar21 = (ulong *)(uStack_f8 + 7);
    }
    puVar2 = puVar21 + iStack_f0;
    for (; bVar8 = puVar21 == puVar2, !bVar8; puVar21 = puVar21 + 1) {
      uVar22 = *puVar21;
      uVar11 = *(ulong *)(uVar22 + 0x10) & 0xfffffffffffffffc;
      if (*(char *)(uVar11 + 0x17) < '\0') {
        if (*(long *)(uVar11 + 8) != 0) goto LAB_10067ed48;
      }
      else if (*(char *)(uVar11 + 0x17) != '\0') {
LAB_10067ed48:
        func_0x000106887594(&plStack_138,uVar11,0);
        uVar11 = *(ulong *)(lVar18 + 0x10);
        pcVar12 = *(char **)(lVar18 + 8);
        if (-1 < (char)*(byte *)(lVar18 + 0x1f)) {
          uVar11 = (ulong)*(byte *)(lVar18 + 0x1f);
          pcVar12 = pcVar1;
        }
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        uStack_d8 = 0;
        lStack_e0 = 0;
        uStack_c8 = 0;
        plStack_d0 = (long *)0x0;
        uStack_bc = 0;
        uStack_c7 = 0;
        fStack_c0 = 0.0;
        FUN_1001535a4(pcVar12,pcVar12 + uVar11,&lStack_e0,&plStack_138,0);
        FUN_10015b3ec(&lStack_e0);
        if ((int)pcVar12 != 0) {
          uStack_184 = *(uint *)(uVar22 + 0x28);
        }
        FUN_10015b424(&plStack_138);
        if (((ulong)pcVar12 & 1) != 0) break;
      }
      pcVar12 = (char *)(*(ulong *)(uVar22 + 0x18) & 0xfffffffffffffffc);
      if (pcVar12[0x17] < '\0') {
        if (*(long *)(pcVar12 + 8) != 0) goto LAB_10067ede8;
      }
      else if (pcVar12[0x17] != '\0') {
LAB_10067ede8:
        pcVar24 = pcVar1;
        FUN_10067f218(pcVar1,pcVar12,0);
        if (pcVar24 == (char *)0x0) {
LAB_10067ee60:
          bVar8 = false;
          uStack_184 = *(uint *)(uVar22 + 0x28);
          break;
        }
      }
      pcVar24 = (char *)(*(ulong *)(uVar22 + 0x20) & 0xfffffffffffffffc);
      if (pcVar24[0x17] < '\0') {
        if (*(long *)(pcVar24 + 8) != 0) goto LAB_10067ee18;
      }
      else if (pcVar24[0x17] != '\0') {
LAB_10067ee18:
        pcVar10 = pcVar1;
        FUN_1006801f0();
        pcVar13 = pcVar12;
        FUN_1006801f0();
        do {
          if (pcVar12 == pcVar10 || pcVar13 == pcVar24) {
            if (pcVar13 == pcVar24) goto LAB_10067ee60;
            break;
          }
          pcVar12 = pcVar12 + -1;
          pcVar13 = pcVar13 + -1;
        } while (*pcVar12 == *pcVar13);
      }
    }
    FUN_100650d70(&uStack_f8);
    uVar11 = (ulong)uStack_184;
    if (bVar8) {
      lVar18 = param_2[4];
      uStack_d8 = 0;
      lStack_e0 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      plStack_d0 = (long *)0x0;
      fStack_c0 = *(float *)(lVar18 + 0x170);
      FUN_10067f3bc(&lStack_e0,*(undefined8 *)(lVar18 + 0x158));
      plVar23 = (long *)(lVar18 + 0x160);
LAB_10067eea8:
      uVar22 = uStack_d8;
      plVar23 = (long *)*plVar23;
      if (plVar23 != (long *)0x0) {
        uVar20 = (ulong)*(int *)(plVar23 + 2);
        lVar18 = plVar23[2];
        if (uStack_d8 != 0) {
          uVar14 = uStack_d8 - 1;
          if ((uStack_d8 & uVar14) == 0) {
            uVar11 = uVar14 & uVar20;
          }
          else {
            uVar11 = uVar20;
            if (uStack_d8 <= uVar20) {
              uVar11 = 0;
              if (uStack_d8 != 0) {
                uVar11 = uVar20 / uStack_d8;
              }
              uVar11 = uVar20 - uVar11 * uStack_d8;
            }
          }
          plVar16 = *(long **)(lStack_e0 + uVar11 * 8);
          if (plVar16 != (long *)0x0) {
            do {
              while( true ) {
                plVar16 = (long *)*plVar16;
                if (plVar16 == (long *)0x0) goto LAB_10067ef40;
                uVar17 = plVar16[1];
                if (uVar17 != uVar20) break;
                if (*(int *)(plVar16 + 2) == *(int *)(plVar23 + 2)) goto LAB_10067eea8;
              }
              if ((uStack_d8 & uVar14) == 0) {
                uVar17 = uVar17 & uVar14;
              }
              else if (uStack_d8 <= uVar17) {
                uVar5 = 0;
                if (uStack_d8 != 0) {
                  uVar5 = uVar17 / uStack_d8;
                }
                uVar17 = uVar17 - uVar5 * uStack_d8;
              }
            } while (uVar17 == uVar11);
          }
        }
LAB_10067ef40:
        plVar16 = (long *)0x18;
        func_0x000107c60e20();
        uStack_128 = 1;
        *plVar16 = 0;
        plVar16[1] = uVar20;
        plVar16[2] = lVar18;
        fVar6 = (float)(CONCAT71(uStack_c7,uStack_c8) + 1);
        plStack_138 = plVar16;
        pplStack_130 = &plStack_d0;
        if ((uVar22 == 0) || (fStack_c0 * (float)uVar22 < fVar6)) {
          uVar11 = 1;
          if (2 < uVar22) {
            uVar11 = (ulong)((uVar22 & uVar22 - 1) != 0);
          }
          uVar11 = uVar11 | uVar22 << 1;
          uVar22 = (ulong)(fVar6 / fStack_c0);
          if (uVar11 <= uVar22) {
            uVar11 = uVar22;
          }
          FUN_10067f3bc(&lStack_e0,uVar11);
          uVar22 = uStack_d8;
          if ((uStack_d8 & uStack_d8 - 1) == 0) {
            uVar11 = uStack_d8 - 1 & uVar20;
          }
          else {
            uVar11 = uVar20;
            if (uStack_d8 <= uVar20) {
              uVar11 = 0;
              if (uStack_d8 != 0) {
                uVar11 = uVar20 / uStack_d8;
              }
              uVar11 = uVar20 - uVar11 * uStack_d8;
            }
          }
        }
        plVar16 = *(long **)(lStack_e0 + uVar11 * 8);
        if (plVar16 == (long *)0x0) {
          *plStack_138 = (long)plStack_d0;
          plStack_d0 = plStack_138;
          *(long ***)(lStack_e0 + uVar11 * 8) = &plStack_d0;
          if (*plStack_138 != 0) {
            uVar20 = *(ulong *)(*plStack_138 + 8);
            if ((uVar22 & uVar22 - 1) == 0) {
              uVar20 = uVar20 & uVar22 - 1;
            }
            else if (uVar22 <= uVar20) {
              uVar14 = 0;
              if (uVar22 != 0) {
                uVar14 = uVar20 / uVar22;
              }
              uVar20 = uVar20 - uVar14 * uVar22;
            }
            *(long **)(lStack_e0 + uVar20 * 8) = plStack_138;
          }
        }
        else {
          *plStack_138 = *plVar16;
          *plVar16 = (long)plStack_138;
        }
        plStack_138 = (long *)0x0;
        lVar18 = CONCAT71(uStack_c7,uStack_c8) + 1;
        uStack_c8 = (undefined1)lVar18;
        uStack_c7 = (undefined7)((ulong)lVar18 >> 8);
        func_0x000107c2c794(&plStack_138);
        goto LAB_10067eea8;
      }
      plStack_138 = (long *)CONCAT44(plStack_138._4_4_,*(undefined4 *)(*plVar19 + 0x180));
      plVar23 = &lStack_e0;
      FUN_10064f928(plVar23,&plStack_138);
      if (plVar23 == (long *)0x0) {
        puVar15 = (uint *)(param_2[4] + 0x74);
      }
      else {
        puVar15 = (uint *)((long)plVar23 + 0x14);
      }
      uVar11 = (ulong)*puVar15;
      func_0x00010067f480(&lStack_e0);
    }
    lVar18 = *(long *)(param_4 + 0x18) + (param_1[1] - *param_1 >> 4);
    plVar16 = param_2;
    (**(code **)(*param_2 + 0x30))
              (param_2,uVar11,lVar18,*(undefined4 *)(*plVar19 + 0x178),
               *(undefined4 *)(*plVar19 + 0x180));
    plVar23 = param_1;
    if (lVar18 != 0 && ((ulong)plVar16 & 1) == 0) {
      plVar23 = &lStack_180;
    }
    FUN_10067db6c(plVar23,plVar19);
    plVar19 = plVar19 + 2;
  } while( true );
}



/* Entry: 10067f218; end: 10067f253;  */

long FUN_10067f218(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar5 = param_1;
  if ((long)uVar7 < 0) {
    puVar5 = (undefined8 *)*param_1;
    uVar7 = param_1[1];
  }
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  uVar2 = uVar7;
  if (param_3 <= uVar7) {
    uVar2 = param_3;
  }
  uVar3 = uVar2 + uVar1;
  if (uVar7 - uVar2 <= uVar1) {
    uVar3 = uVar7;
  }
  puVar6 = puVar5;
  FUN_10067f328(puVar5,(undefined8 *)((long)puVar5 + uVar3),puVar4,(long)puVar4 + uVar1,0x10067f248)
  ;
  lVar8 = (long)puVar6 - (long)puVar5;
  if (puVar6 == (undefined8 *)((long)puVar5 + uVar3) && uVar1 != 0) {
    lVar8 = -1;
  }
  return lVar8;
}



/* Entry: 10067f254; end: 10067f327;  */

undefined1  [16]
FUN_10067f254(char *param_1,char *param_2,char *param_3,char *param_4,code *param_5)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  
  pcVar3 = param_2;
  pcVar5 = param_2;
  pcVar7 = param_1;
  if (param_3 != param_4) {
    while (pcVar7 = pcVar7 + 1, param_1 != param_2) {
      lVar1 = (long)*param_1;
      (*param_5)(lVar1,(long)*param_3);
      pcVar8 = param_3;
      if ((int)lVar1 == 0) {
        param_1 = param_1 + 1;
      }
      else {
        do {
          pcVar8 = pcVar8 + 1;
          pcVar4 = param_1;
          pcVar6 = pcVar7;
          if (pcVar8 == param_4) break;
          if (pcVar7 == param_2) goto LAB_10067f304;
          uVar2 = (ulong)*pcVar7;
          (*param_5)(uVar2,(long)*pcVar8);
          pcVar4 = pcVar5;
          pcVar6 = pcVar3;
          pcVar7 = pcVar7 + 1;
        } while ((uVar2 & 1) != 0);
        param_1 = param_1 + 1;
        pcVar7 = param_1;
        pcVar3 = pcVar6;
        pcVar5 = pcVar4;
      }
    }
  }
LAB_10067f304:
  auVar9._8_8_ = pcVar3;
  auVar9._0_8_ = pcVar5;
  return auVar9;
}



/* Entry: 10067f328; end: 10067f34f;  */

void FUN_10067f328(void)

{
  FUN_10067f254();
  return;
}



/* Entry: 10067f350; end: 10067f3bb;  */

long FUN_10067f350(long param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  uVar2 = uVar1 + param_5;
  if (param_2 - uVar1 <= param_5) {
    uVar2 = param_2;
  }
  lVar3 = param_1;
  FUN_10067f328(param_1,param_1 + uVar2,param_3,param_3 + param_5,0x10067f248);
  lVar4 = lVar3 - param_1;
  if (lVar3 == param_1 + uVar2 && param_5 != 0) {
    lVar4 = -1;
  }
  return lVar4;
}



/* Entry: 10067f3bc; end: 10067f453;  */

void FUN_10067f3bc(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *plVar5;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong uVar6;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar7 = param_2;
  }
  plVar9 = (long *)param_1[1];
  bVar2 = plVar9 <= param_2;
  if (plVar9 < param_2) {
LAB_10067f404:
    func_0x0001006315c0();
    if (plVar3 == (long *)0x0) {
      func_0x00010b2dd7cc(plVar7);
      plVar7[1] = 0;
    }
    else {
      plVar9 = plVar7 + 1;
      func_0x00010b2dd7e4(plVar9);
      func_0x00010b2dd7cc(plVar7,plVar9);
      plVar7[1] = (long)plVar3;
      lVar4 = *plVar7;
      for (plVar9 = (long *)0x0; plVar3 != plVar9; plVar9 = (long *)((long)plVar9 + 1)) {
        *(undefined8 *)(lVar4 + (long)plVar9 * 8) = 0;
      }
      if (plVar7[2] != 0) {
        func_0x00010b2ddcc0();
        func_0x00010b2ddcac();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9;
        uVar6 = extraout_x10;
        plVar9 = extraout_x11;
        while (plVar5 = plVar7, plVar7 = (long *)*plVar5, plVar7 != (long *)0x0) {
          plVar8 = (long *)plVar7[1];
          if (((ulong)plVar3 & uVar6) == 0) {
            plVar8 = (long *)((ulong)plVar8 & uVar6);
          }
          else if (plVar3 <= plVar8) {
            uVar1 = 0;
            if (plVar3 != (long *)0x0) {
              uVar1 = (ulong)plVar8 / (ulong)plVar3;
            }
            plVar8 = (long *)((long)plVar8 - uVar1 * (long)plVar3);
          }
          if (plVar8 != plVar9) {
            if (*(long *)(lVar4 + (long)plVar8 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar8 * 8) = plVar5;
              plVar9 = plVar8;
            }
            else {
              func_0x00010b2ddc04();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_00;
              uVar6 = extraout_x10_00;
              plVar9 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!bVar2) {
    func_0x000107c3598c();
    if ((bVar2) && (((ulong)plVar9 & (long)plVar9 - 1U) == 0)) {
      func_0x000107c35984();
    }
    else {
      func_0x000107c60c44();
    }
    if (param_2 <= plVar7) {
      param_2 = plVar7;
    }
    if (param_2 < plVar9) goto LAB_10067f404;
  }
  return;
}



/* Entry: 10067f454; end: 10067f4c7;  */

void FUN_10067f454(undefined8 param_1,long *param_2)

{
  while (param_2 != (long *)0x0) {
    param_2 = (long *)*param_2;
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 10067f4c8; end: 10067f4ff;  */

void FUN_10067f4c8(long *param_1)

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



/* Entry: 10067f500; end: 10067f56f;  */

void FUN_10067f500(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10067f570();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10067f570; end: 10067f577;  */

void FUN_10067f570(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010067c914();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10067f578; end: 10067f5af;  */

void FUN_10067f578(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010067c914();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10067f5b0; end: 10067f5f7;  */

void FUN_10067f5b0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  plVar2 = (long *)(param_4 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lVar1 = *(long *)(plVar2[2] + 0x38) + lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010067f5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
            (*(long **)(param_1 + 0x10),*(long *)(param_4 + 0x18) + (param_3 - param_2 >> 4),lVar1,
             *(undefined4 *)(param_1 + 0x68));
  return;
}



/* Entry: 10067f5f8; end: 10067f72b;  */

void FUN_10067f5f8(long param_1,undefined8 param_2,long param_3)

{
  char in_NG;
  char in_OV;
  long extraout_x8;
  code *extraout_x8_00;
  
  FUN_10066690c();
  if (in_NG == in_OV) {
    FUN_10067eb10();
    func_0x00010067eb20();
    if (extraout_x8 == 0) {
      func_0x000107c358a8();
      func_0x000107c358e4();
      func_0x000107c35898();
      func_0x000107c358bc();
      func_0x000107c358e8();
      func_0x000107c3587c();
      func_0x000107c3588c();
      func_0x000107c35894();
      func_0x000107c358c4();
      func_0x000107c35884(*(undefined8 *)(param_1 + 0x48));
      (*extraout_x8_00)();
      func_0x000107c358dc();
      if (param_3 != 0) {
        func_0x000107c358a8();
        func_0x000107c358e4();
        func_0x000107c35898();
        func_0x000107c358e8();
        func_0x000107c3587c();
        func_0x000107c3588c();
        func_0x000107c35894();
        func_0x000107c358c4();
        func_0x000107c35884(*(undefined8 *)(param_1 + 0x48));
        func_0x000107c358c8();
        func_0x000107c358dc();
      }
    }
  }
  return;
}



/* Entry: 10067f72c; end: 10067f743;  */

void FUN_10067f72c(void)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  
  func_0x00010067f738();
  FUN_10067f778();
  puVar7 = *(undefined8 **)(unaff_x19 + 0x18);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  plVar4 = unaff_x20 + 3;
  lVar10 = lVar6 - (long)puVar7;
  lVar9 = lVar10 >> 4;
  if (0 < lVar9) {
    func_0x00010067f738(plVar4,unaff_x20[4]);
    plVar5 = plVar4 + 2;
    lVar8 = plVar4[1];
    if (lVar10 <= *plVar5 - lVar8) {
      lVar10 = lVar8 - unaff_x19 >> 4;
      if (lVar10 < lVar9) {
        func_0x000107c2c970(plVar5,(long)puVar7 + (lVar8 - unaff_x19),lVar6,lVar8);
        unaff_x20[1] = (long)plVar5;
        if (lVar10 < 1) {
          return;
        }
        func_0x000107c35be0();
        lVar9 = lVar10;
      }
      else {
        func_0x000107c35be0();
      }
      lVar6 = unaff_x19 + lVar9 * 0x10;
      for (; unaff_x19 != lVar6; unaff_x19 = unaff_x19 + 0x10) {
        if (puVar7[1] != 0) {
          plVar4 = (long *)(puVar7[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010b2d78e4(unaff_x19,&stack0xffffffffffffffb0);
        func_0x000107c2c578(&stack0xffffffffffffffb0);
        puVar7 = puVar7 + 2;
      }
      return;
    }
    plVar4 = unaff_x20;
    FUN_10067d698(unaff_x20,lVar9 + (lVar8 - *unaff_x20 >> 4));
    func_0x00010067d718(auStack_78,plVar4,unaff_x19 - *unaff_x20 >> 4,plVar5);
    puVar1 = (undefined8 *)((long)puStack_68 + lVar10);
    for (; puStack_68 != puVar1; puStack_68 = puStack_68 + 2) {
      lVar6 = puVar7[1];
      uVar11 = *puVar7;
      puStack_68[1] = puVar7[1];
      *puStack_68 = uVar11;
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar7 = puVar7 + 2;
    }
    puStack_68 = puVar1;
    FUN_10067d870(unaff_x20,auStack_78,unaff_x19);
    FUN_10067d930(auStack_78);
  }
  return;
}



/* Entry: 10067f744; end: 10067f777;  */

void FUN_10067f744(void)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  
  func_0x00010067f738();
  FUN_10067f778();
  puVar7 = *(undefined8 **)(unaff_x19 + 0x18);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  plVar4 = unaff_x20 + 3;
  lVar10 = lVar6 - (long)puVar7;
  lVar9 = lVar10 >> 4;
  if (0 < lVar9) {
    func_0x00010067f738(plVar4,unaff_x20[4]);
    plVar5 = plVar4 + 2;
    lVar8 = plVar4[1];
    if (lVar10 <= *plVar5 - lVar8) {
      lVar10 = lVar8 - unaff_x19 >> 4;
      if (lVar10 < lVar9) {
        func_0x000107c2c970(plVar5,(long)puVar7 + (lVar8 - unaff_x19),lVar6,lVar8);
        unaff_x20[1] = (long)plVar5;
        if (lVar10 < 1) {
          return;
        }
        func_0x000107c35be0();
        lVar9 = lVar10;
      }
      else {
        func_0x000107c35be0();
      }
      lVar6 = unaff_x19 + lVar9 * 0x10;
      for (; unaff_x19 != lVar6; unaff_x19 = unaff_x19 + 0x10) {
        if (puVar7[1] != 0) {
          plVar4 = (long *)(puVar7[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar3) {
              *plVar4 = *plVar4 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010b2d78e4(unaff_x19,&stack0xffffffffffffffb0);
        func_0x000107c2c578(&stack0xffffffffffffffb0);
        puVar7 = puVar7 + 2;
      }
      return;
    }
    plVar4 = unaff_x20;
    FUN_10067d698(unaff_x20,lVar9 + (lVar8 - *unaff_x20 >> 4));
    func_0x00010067d718(auStack_78,plVar4,unaff_x19 - *unaff_x20 >> 4,plVar5);
    puVar1 = (undefined8 *)((long)puStack_68 + lVar10);
    for (; puStack_68 != puVar1; puStack_68 = puStack_68 + 2) {
      lVar6 = puVar7[1];
      uVar11 = *puVar7;
      puStack_68[1] = puVar7[1];
      *puStack_68 = uVar11;
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar7 = puVar7 + 2;
    }
    puStack_68 = puVar1;
    FUN_10067d870(unaff_x20,auStack_78,unaff_x19);
    FUN_10067d930(auStack_78);
  }
  return;
}



/* Entry: 10067f778; end: 10067f8e7;  */

void FUN_10067f778(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  
  lVar8 = param_4 - (long)param_3;
  lVar7 = lVar8 >> 4;
  if (0 < lVar7) {
    func_0x00010067f738();
    plVar6 = (long *)(param_1 + 0x10);
    lVar5 = *(long *)(param_1 + 8);
    if (lVar8 <= *plVar6 - lVar5) {
      lVar8 = lVar5 - unaff_x19 >> 4;
      if (lVar8 < lVar7) {
        func_0x000107c2c970(plVar6,(long)param_3 + (lVar5 - unaff_x19),param_4,lVar5);
        unaff_x20[1] = (long)plVar6;
        if (lVar8 < 1) {
          return;
        }
        func_0x000107c35be0();
        lVar7 = lVar8;
      }
      else {
        func_0x000107c35be0();
      }
      lVar7 = unaff_x19 + lVar7 * 0x10;
      for (; unaff_x19 != lVar7; unaff_x19 = unaff_x19 + 0x10) {
        if (param_3[1] != 0) {
          plVar6 = (long *)(param_3[1] + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x00010b2d78e4(unaff_x19,&stack0xffffffffffffffb0);
        func_0x000107c2c578(&stack0xffffffffffffffb0);
        param_3 = param_3 + 2;
      }
      return;
    }
    plVar4 = unaff_x20;
    FUN_10067d698();
    func_0x00010067d718(auStack_78,plVar4,unaff_x19 - *unaff_x20 >> 4,plVar6);
    puVar1 = (undefined8 *)((long)puStack_68 + lVar8);
    for (; puStack_68 != puVar1; puStack_68 = puStack_68 + 2) {
      lVar7 = param_3[1];
      uVar9 = *param_3;
      puStack_68[1] = param_3[1];
      *puStack_68 = uVar9;
      if (lVar7 != 0) {
        plVar6 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      param_3 = param_3 + 2;
    }
    puStack_68 = puVar1;
    FUN_10067d870();
    FUN_10067d930(auStack_78);
  }
  return;
}



/* Entry: 10067f8e8; end: 10067f8ef;  */

/* WARNING: Possible PIC construction at 0x00010067f904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010067f908) */

undefined1 * FUN_10067f8e8(void)

{
  undefined1 *puStack_48;
  
  puStack_48 = &stack0x00000030;
  func_0x00010067f500(&puStack_48);
  return &stack0x00000030;
}



/* Entry: 10067f8f0; end: 10067f9af;  */

/* WARNING: Possible PIC construction at 0x00010067f904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010067f908) */

long FUN_10067f8f0(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x18;
  func_0x00010067f500(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 10067f9b0; end: 10067f9cf;  */

void FUN_10067f9b0(void)

{
  return;
}



/* Entry: 10067f9d0; end: 10067f9f3;  */

undefined8 FUN_10067f9d0(undefined8 param_1)

{
  func_0x00010067f9b8(param_1,0);
  return param_1;
}



/* Entry: 10067f9f4; end: 10067fcab;  */

void FUN_10067f9f4(long param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  ulong uStack_90;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  undefined8 *puStack_70;
  ulong *puStack_68;
  undefined1 auStack_58 [24];
  
  if (*(char *)(param_1 + 0x40) != '\x01') {
    return;
  }
  lVar4 = 0xc0;
  if (*(char *)(*param_2 + 0x120) == '\0') {
    lVar4 = 0x60;
  }
  lVar4 = *param_2 + lVar4;
  uVar5 = lVar4 + 8;
  uVar2 = uVar5;
  FUN_1005d480c(uVar5,&DAT_10f73e23f,0);
  if (uVar2 == 0xffffffffffffffff) {
LAB_10067fc1c:
    uStack_d0 = uStack_d0 & 0xffffffffffffff00;
    uStack_a0 = 0;
  }
  else {
    uVar3 = *(ulong *)(lVar4 + 8);
    if (-1 < *(char *)(lVar4 + 0x1f)) {
      uVar3 = uVar5;
    }
    cVar1 = *(char *)(uVar3 + uVar2 + -1);
    if (cVar1 == '/') {
      func_0x000107c356fc();
      if ((uVar2 == 0xffffffffffffffff) ||
         (uVar3 = uVar5, func_0x000107c60be4(uVar5,0x2f,uVar2 + 1), uVar3 == 0xffffffffffffffff))
      goto LAB_10067fc1c;
      FUN_1000e1048(&uStack_90,uVar5,uVar2 + 1,uVar3 + ~uVar2);
      func_0x000107c3571c(auStack_58);
      func_0x000107c35710();
      if ((extraout_x8_01 != 0) && (func_0x000107c3570c(), extraout_x8_02 != 0)) {
        func_0x000107c356f0();
        goto LAB_10067fb30;
      }
LAB_10067fc28:
      uStack_d0 = uStack_d0 & 0xffffffffffffff00;
      uStack_a0 = 0;
      func_0x000107c35700();
    }
    else {
      if (cVar1 != '.') goto LAB_10067fc1c;
      FUN_1000e1048(&uStack_90,uVar5,8,uVar2 - 9);
      func_0x000107c356fc();
      if (uVar5 != 0xffffffffffffffff) {
        func_0x000107c3571c(auStack_58);
        func_0x000107c35710();
        if ((extraout_x8 == 0) || (func_0x000107c3570c(), extraout_x8_00 == 0)) goto LAB_10067fc28;
        func_0x000107c356f0();
LAB_10067fb30:
        uStack_b8 = uStack_118;
        uStack_c8 = uStack_128;
        uStack_d0 = uStack_130;
        uStack_c0 = uStack_120;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        uStack_118 = 0;
        uStack_b0 = uStack_110;
        uStack_a8 = uStack_108;
        uStack_110 = 0;
        uStack_108 = 0;
        uStack_a0 = 1;
        FUN_1003b0614(&uStack_130);
        func_0x000107c35700();
        func_0x000107c35714();
        lVar4 = param_1 + 0x48;
        puVar8 = &uStack_d0;
        func_0x0001067e0440();
        if (lVar4 != 0) {
          (**(code **)(*(long *)*param_2 + 0x10))(&uStack_130);
          uVar5 = *(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc;
          FUN_1005d466c();
          puVar6 = &uStack_d0;
          puVar9 = puVar8;
          FUN_1005d466c();
          puVar7 = &uStack_b8;
          puVar10 = puVar9;
          FUN_1005d466c();
          uStack_90 = uVar5;
          puStack_88 = puVar8;
          puStack_80 = puVar6;
          puStack_78 = puVar9;
          puStack_70 = puVar7;
          puStack_68 = puVar10;
          FUN_1003a91d4(&UNK_10f742454);
          FUN_1003a9204(auStack_58);
          FUN_100066230(&uStack_128,auStack_58);
          func_0x000107c35700();
          FUN_100680610(*param_2,&uStack_130);
          FUN_1005ae430(&uStack_130);
        }
        goto LAB_10067fc44;
      }
      uStack_d0 = uStack_d0 & 0xffffffffffffff00;
      uStack_a0 = 0;
    }
    func_0x000107c35714();
  }
LAB_10067fc44:
  FUN_10067fcac(&uStack_d0);
  return;
}



/* Entry: 10067fcac; end: 10067fccb;  */

void FUN_10067fcac(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1003b0614();
  }
  return;
}



/* Entry: 10067fccc; end: 10067fcdf;  */

void FUN_10067fccc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010067fcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(&stack0x00000068);
  return;
}



/* Entry: 10067fce0; end: 10067ff83;  */

void FUN_10067fce0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long unaff_x21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *apuStack_98 [6];
  undefined1 auStack_68 [16];
  long lStack_58;
  
  FUN_10067fccc(*param_2);
  lVar2 = unaff_x21 + 8;
  FUN_1005d480c(lVar2,&UNK_10f74238f,0);
  FUN_10068009c();
  if (lVar2 != -1) {
    FUN_10067fccc(*param_2);
    FUN_10002b838(&uStack_100,&UNK_10f50ec19);
    puVar3 = &uStack_100;
    FUN_100680100(puVar3,lVar2 + 0x20);
    puVar1 = puStack_a0;
    func_0x000107c60ca0(&uStack_100);
    FUN_10068009c();
    if (puVar1 == puVar3) {
      (**(code **)(*(long *)*param_2 + 0x10))(auStack_c8);
      FUN_10002b838(&uStack_100,&UNK_10f74237f);
      puVar3 = &uStack_100;
      FUN_100680100(puVar3,&lStack_a8);
      func_0x000107c60ca0(&uStack_100);
      FUN_10002b838(&uStack_118,&UNK_10f50ec19);
      FUN_10002b838(&uStack_130,"");
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_f0 = uStack_108;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      func_0x000107c60ca0(&uStack_130);
      func_0x000107c60ca0(&uStack_118);
      if (puStack_a0 == puVar3) {
        func_0x000107c2c7a4(auStack_68);
        FUN_100066230(&uStack_e8,auStack_68);
        func_0x000107c60ca0(auStack_68);
      }
      else {
        func_0x000107c60ca4(&uStack_e8,puVar3 + 3);
        if (*(char *)(param_1 + 8) == '\x01') {
          func_0x000107c2c554(&lStack_a8,puVar3);
        }
      }
      if (puStack_a0 < apuStack_98[0]) {
        FUN_1005ad0d4(puStack_a0,&uStack_100);
        puStack_a0 = puStack_a0 + 6;
      }
      else {
        plVar4 = &lStack_a8;
        FUN_1005ac980(plVar4,((long)puStack_a0 - lStack_a8) / 0x30 + 1);
        func_0x0001005aca14(auStack_68,plVar4,((long)puStack_a0 - lStack_a8) / 0x30,apuStack_98);
        FUN_1005ad0d4(lStack_58,&uStack_100);
        lStack_58 = lStack_58 + 0x30;
        FUN_1005acb9c(&lStack_a8,auStack_68);
        FUN_1005acc98(auStack_68);
      }
      FUN_100680610(*param_2,auStack_c8);
      FUN_1005acd08(&uStack_100);
      FUN_10068009c();
    }
  }
  return;
}



/* Entry: 10067ff84; end: 10067ffa3;  */

undefined8 * FUN_10067ff84(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  
  lVar3 = 0xc0;
  if (*(char *)(param_2 + 0x120) == '\0') {
    lVar3 = 0x60;
  }
  puVar1 = (undefined8 *)(param_2 + lVar3);
  *param_1 = *puVar1;
  func_0x000107c60c94(param_1 + 1,puVar1 + 1);
  FUN_10067b9e4(param_1 + 4,puVar1 + 4);
  uVar2 = puVar1[8];
  *(undefined8 *)((long)param_1 + 0x45) = *(undefined8 *)((long)puVar1 + 0x45);
  param_1[8] = uVar2;
  lVar3 = puVar1[0xb];
  uVar2 = puVar1[10];
  param_1[0xb] = puVar1[0xb];
  param_1[10] = uVar2;
  if (lVar3 != 0) {
    do {
      func_0x00010060f468();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10067ffa4; end: 100680057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10067ffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fcab38) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab40) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab48) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab50) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab58) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fcab60) = param_6;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100680058; end: 10068009b;  */

void FUN_100680058(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10068009c; end: 1006800ab;  */

undefined1 * FUN_10068009c(void)

{
  FUN_1005ad23c(&stack0x000000b8);
  func_0x0001005ad2a8(&stack0x00000088);
  func_0x000107c60ca0(&stack0x00000070);
  return &stack0x00000068;
}



/* Entry: 1006800ac; end: 1006800ff;  */

void FUN_1006800ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100680100; end: 1006801ef;  */

undefined1 * FUN_100680100(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar6 = (undefined1 *)*param_2;
  do {
    if (puVar6 == (undefined1 *)param_2[1]) {
      return puVar6;
    }
    func_0x000107c60dac(auStack_60);
    puVar4 = auStack_60;
    func_0x000107c60da8(auStack_58);
    puVar1 = puVar6;
    FUN_1006801f0();
    puVar2 = param_1;
    puVar5 = puVar4;
    FUN_1006801f0();
    for (; puVar1 != puVar4 && puVar2 != puVar5; puVar1 = puVar1 + 1) {
      puVar3 = auStack_58;
      FUN_100680244(puVar3,puVar1,puVar2);
      if ((int)puVar3 == 0) {
        FUN_100680330();
        func_0x000100680338();
        goto LAB_1006801b4;
      }
      puVar2 = puVar2 + 1;
    }
    FUN_100680330();
    func_0x000100680338();
    if (puVar1 == puVar4 && puVar2 == puVar5) {
      return puVar6;
    }
LAB_1006801b4:
    puVar6 = puVar6 + 0x30;
  } while( true );
}



/* Entry: 1006801f0; end: 100680213;  */

void FUN_1006801f0(void)

{
  return;
}



/* Entry: 100680214; end: 100680243;  */

void FUN_100680214(undefined8 param_1,long *param_2)

{
  FUN_100152084();
                    /* WARNING: Could not recover jumptable at 0x000100680240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))();
  return;
}



/* Entry: 100680244; end: 10068028f;  */

bool FUN_100680244(undefined8 param_1,char *param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)*param_2;
  FUN_100680214(lVar1,param_1);
  lVar2 = (long)*param_3;
  FUN_100680214(lVar2,param_1);
  return (int)lVar1 == (int)lVar2;
}



/* Entry: 100680290; end: 10068029b;  */

void FUN_100680290(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005c2bcc();
  func_0x000107c613fc();
  FUN_100682670(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10068029c; end: 10068032f;  */

void FUN_10068029c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005c2bcc();
  func_0x000107c613fc();
  FUN_100682670(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100680330; end: 100680347;  */

void FUN_100680330(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__16localeD1Ev_110346830)(&stack0x00000008);
  return;
}



/* Entry: 100680348; end: 10068039b;  */

void FUN_100680348(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10068039c; end: 1006803af;  */

void FUN_10068039c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100218eec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_1006805cc(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  FUN_1006812dc();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  FUN_100681338();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 1006803b0; end: 1006805cb;  */

void FUN_1006803b0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100218eec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_1006805cc(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_1006812dc();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_100681338();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 1006805cc; end: 100680603;  */

void FUN_1006805cc(undefined8 param_1)

{
  if (lRam0000000112df4a00 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66cfe8);
  return;
}



/* Entry: 100680604; end: 10068060f;  */

undefined1 * FUN_100680604(void)

{
  return &stack0x00000008;
}



/* Entry: 100680610; end: 100680667;  */

void FUN_100680610(void)

{
  long unaff_x19;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  
  FUN_100680604();
  FUN_100680668();
  FUN_1006806f8(unaff_x19 + 0xc0,auStack_88);
  func_0x000100680738(auStack_88);
  auStack_88[0] = 0;
  uStack_70 = 0;
  FUN_1002a8208(unaff_x19 + 0x290,auStack_88);
  FUN_1001148fc(auStack_88);
  return;
}



/* Entry: 100680668; end: 1006806cf;  */

void FUN_100680668(long param_1)

{
  FUN_10067b954();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 1006806d0; end: 1006806f7;  */

void FUN_1006806d0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xc);
  if (cVar1 != *(char *)(param_2 + 0xc)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xc) == '\x01') {
        func_0x000107c2c528();
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      return;
    }
    FUN_10067bc28();
    *(undefined1 *)(param_1 + 0xc) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c397ac();
    *param_1 = *param_2;
    func_0x000107c27b9c(param_1 + 1,param_2 + 1);
    func_0x00010b4b2e34(unaff_x20 + 0x20,unaff_x19 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x45);
    *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x45) = uVar2;
    func_0x00010b4b2e5c(unaff_x20 + 0x50,unaff_x19 + 0x50);
    return;
  }
  return;
}



/* Entry: 1006806f8; end: 10068071b;  */

undefined8 FUN_1006806f8(undefined8 param_1)

{
  FUN_1006806d0();
  return param_1;
}



/* Entry: 10068071c; end: 100680757;  */

void FUN_10068071c(long param_1)

{
  FUN_10067bc28();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 100680758; end: 1006812cf;  */

void FUN_100680758(long ******param_1,long *****param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  undefined1 in_ZR;
  undefined1 uVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined8 extraout_x8;
  long ******extraout_x8_00;
  long lVar18;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *puVar19;
  long extraout_x8_05;
  long *****ppppplVar20;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long *plVar21;
  long extraout_x8_09;
  long extraout_x8_10;
  long ******extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long ******pppppplVar22;
  long ******pppppplVar23;
  int iVar24;
  long *****ppppplVar25;
  long ******pppppplVar26;
  undefined8 uVar27;
  long ******pppppplVar28;
  long ****pppplVar29;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  long *****ppppplStack_160;
  long ***ppplStack_158;
  long ***ppplStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  long *****ppppplStack_138;
  long ****pppplStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  long *****ppppplStack_f0;
  long *****ppppplStack_e8;
  long *****ppppplStack_e0;
  long *****ppppplStack_d8;
  long *****ppppplStack_c8;
  long ****pppplStack_c0;
  undefined8 uStack_b8;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  undefined1 uStack_8c;
  undefined4 uStack_88;
  long ****pppplStack_80;
  undefined8 uStack_78;
  
  pppppplVar11 = param_1;
  ppppplVar13 = param_2;
  FUN_1006541a8();
  pppppplVar23 = (long ******)*ppppplVar13;
  uStack_78 = extraout_x8;
  FUN_1006812d0(*(undefined1 *)(pppppplVar23 + 0x24));
  pppppplVar26 = (long ******)0xc0;
  if ((bool)in_ZR) {
    pppppplVar26 = extraout_x8_00;
  }
  ppppplVar13 = param_2;
  if ((bRam00000001137f4f08 & 1) == 0) {
    pppppplVar22 = (long ******)0x1137f4f08;
    pppppplVar11 = pppppplVar22;
    func_0x000107c60e48();
    if ((int)pppppplVar11 != 0) {
      FUN_100100da0(&ppppplStack_b0,&UNK_10f743868,0x24,"",0);
      pppppplVar11 = (long ******)ppppplStack_b0;
      if (-1 < (long)uStack_a0._7_1_) {
        pppppplVar11 = &ppppplStack_b0;
      }
      pppppplVar12 = (long ******)ppppplStack_a8;
      if (-1 < (long)uStack_a0) {
        pppppplVar12 = (long ******)(long)uStack_a0._7_1_;
      }
      func_0x000100681f8c(pppppplVar11,pppppplVar12);
      if ((int)pppppplVar11 == 0) goto LAB_1006810d0;
      func_0x000107c60c94(&ppppplStack_170,&ppppplStack_b0);
      pppppplVar11 = pppppplVar22;
      goto LAB_1006810d8;
    }
  }
LAB_1006807ac:
  pppppplVar22 = *(long *******)((long)pppppplVar23 + (long)pppppplVar26 + 0x20);
  pppppplVar23 = *(long *******)((long)pppppplVar23 + (long)pppppplVar26 + 0x28);
LAB_1006807b8:
  uVar10 = pppppplVar22 == pppppplVar23;
  param_2 = ppppplVar13;
  if ((bool)uVar10) {
    FUN_100682038();
    pppppplVar23 = pppppplVar11;
    ppppplStack_e0 = (long *****)pppppplVar11;
    func_0x00010064c310();
    *pppppplVar23 = (long *****)&PTR_DAT_110cd38e8;
    pppppplVar23[1] = (long *****)0x0;
    pppppplVar23[2] = (long *****)0x0;
    pppppplVar23[3] = (long *****)pppppplVar11;
    ppppplStack_d8 = (long *****)pppppplVar23;
    func_0x0001006820ac();
    pppppplVar26 = pppppplVar23;
    func_0x0001006820e4();
    iVar24 = (int)pppppplVar26;
    ppppplStack_f0 = (long *****)0x0;
    ppppplStack_e8 = (long *****)0x0;
    if (((ulong)param_1[0x10] & 1) == 0) {
      FUN_10068210c();
      uVar10 = iVar24 == 2;
      lVar18 = 0x120;
      if (!(bool)uVar10) {
        lVar18 = 0x108;
      }
    }
    else {
      lVar18 = 0x110;
    }
    ppppplVar25 = *(long ******)((long)param_1 + lVar18);
    (*(code *)(**ppppplVar13)[6])(&uStack_100);
    lVar18 = CONCAT44(uStack_fc,uStack_100);
    if (lVar18 != 0) {
      FUN_1006680f4();
      iVar24 = (int)lVar18;
      (*extraout_x8_01)();
      if (iVar24 == 0) {
        (**(code **)(*(long *)CONCAT44(uStack_fc,uStack_100) + 0x28))(&ppppplStack_b0);
        pppplVar29 = *ppppplVar13;
        FUN_1006812d0(*(undefined1 *)(pppplVar29 + 0x24));
        ppppplVar9 = ppppplStack_d8;
        ppppplVar8 = ppppplStack_e0;
        lVar18 = 0xc0;
        if ((bool)uVar10) {
          lVar18 = extraout_x8_05;
        }
        ppppplVar20 = param_1[0x1d];
        pppppplVar26 = (long ******)0xd0;
        func_0x000107c60e20();
        pppppplVar26[1] = (long *****)0x0;
        pppppplVar26[2] = (long *****)0x0;
        *pppppplVar26 = (long *****)&PTR_DAT_110cd3998;
        ppppplStack_168 = ppppplVar9;
        ppppplStack_170 = ppppplVar8;
        if ((long ******)ppppplVar9 != (long ******)0x0) {
          do {
            FUN_10063c448();
          } while (extraout_w10_00 != 0);
        }
        func_0x000107c2c890(pppppplVar26 + 3,&ppppplStack_b0,ppppplVar20,&ppppplStack_170,
                            *(undefined8 *)((long)pppplVar29 + lVar18),param_1 + 0x29,param_1,
                            param_1 + 6,*(undefined1 *)(param_1 + 0x10));
        FUN_10068338c();
        ppppplStack_168 = ppppplStack_e8;
        ppppplStack_170 = ppppplStack_f0;
        ppppplStack_f0 = (long *****)(pppppplVar26 + 3);
        ppppplStack_e8 = (long *****)pppppplVar26;
        FUN_100683394(&ppppplStack_170);
        FUN_1001148fc(&ppppplStack_b0);
        pppppplVar22 = pppppplVar11;
      }
      else {
        uVar10 = iVar24 == 1;
        if ((bool)uVar10) {
          (**(code **)(*(long *)CONCAT44(uStack_fc,uStack_100) + 0x20))(&ppppplStack_110);
          pppplVar29 = *ppppplVar13;
          FUN_1006812d0(*(undefined1 *)(pppplVar29 + 0x24));
          pppppplVar22 = (long ******)ppppplStack_d8;
          ppppplVar25 = ppppplStack_e0;
          lVar18 = 0xc0;
          if ((bool)uVar10) {
            lVar18 = extraout_x8_03;
          }
          pppppplVar26 = (long ******)0xc8;
          func_0x000107c60e20();
          puVar19 = (undefined8 *)((long)pppplVar29 + lVar18);
          pppppplVar26[1] = (long *****)0x0;
          pppppplVar26[2] = (long *****)0x0;
          *pppppplVar26 = (long *****)&PTR_DAT_110cd3948;
          ppppplStack_168 = (long *****)pppppplVar22;
          ppppplStack_170 = ppppplVar25;
          if (pppppplVar22 != (long ******)0x0) {
            do {
              func_0x000100683168();
              puVar19 = extraout_x8_04;
            } while (extraout_w11_00 != 0);
          }
          uVar27 = *puVar19;
          func_0x000107c60c94(&ppppplStack_b0,puVar19 + 1);
          FUN_100683270(pppppplVar26 + 3,&ppppplStack_110,&ppppplStack_170,uVar27,param_1 + 0x29,
                        param_1,param_1 + 6,&ppppplStack_b0);
          func_0x000100681fc4();
          FUN_10068338c();
          ppppplStack_a8 = ppppplStack_e8;
          ppppplStack_b0 = ppppplStack_f0;
          ppppplStack_f0 = (long *****)(pppppplVar26 + 3);
          ppppplStack_e8 = (long *****)pppppplVar26;
          FUN_100683394(&ppppplStack_b0);
          func_0x0001006833b8(&ppppplStack_110);
          ppppplVar25 = param_1[0x21];
        }
        else {
          uVar10 = iVar24 == 2;
          if ((bool)uVar10) {
            (**(code **)(*(long *)CONCAT44(uStack_fc,uStack_100) + 0x18))(auStack_120);
            pppplVar29 = *ppppplVar13;
            FUN_1006812d0(*(undefined1 *)(pppplVar29 + 0x24));
            pppppplVar22 = (long ******)ppppplStack_d8;
            ppppplVar8 = ppppplStack_e0;
            lVar18 = 0xc0;
            if ((bool)uVar10) {
              lVar18 = extraout_x8_02;
            }
            pppppplVar12 = (long ******)0xd0;
            func_0x000107c60e20();
            pppppplVar28 = pppppplVar12 + 1;
            *pppppplVar28 = (long *****)0x0;
            pppppplVar12[2] = (long *****)0x0;
            *pppppplVar12 = (long *****)&PTR_DAT_110cd39e8;
            pppppplVar26 = pppppplVar12 + 3;
            ppppplStack_a8 = (long *****)pppppplVar22;
            ppppplStack_b0 = ppppplVar8;
            if (pppppplVar22 != (long ******)0x0) {
              do {
                FUN_10063c448();
              } while (extraout_w10 != 0);
            }
            func_0x000107c2c89c(pppppplVar26,auStack_120,&ppppplStack_b0,
                                *(undefined8 *)((long)pppplVar29 + lVar18),param_1 + 0x29,param_1,
                                param_1 + 6,*(undefined1 *)(param_1 + 0x10));
            FUN_100683368(&ppppplStack_b0);
            if ((pppppplVar12[0x14] == (long *****)0x0) ||
               (uVar10 = pppppplVar12[0x14][1] == (long ****)0xffffffffffffffff, (bool)uVar10)) {
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppplVar28,0x10);
                if (bVar6) {
                  *pppppplVar28 = (long *****)((long)*pppppplVar28 + 1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
                ppppplStack_170 = (long *****)pppppplVar26;
                ppppplStack_168 = (long *****)pppppplVar12;
                ppppplStack_110 = (long *****)pppppplVar26;
                ppppplStack_108 = (long *****)pppppplVar12;
              } while (cVar5 != '\0');
              do {
                func_0x000100683168();
              } while (extraout_w11 != 0);
              ppppplStack_b0 = pppppplVar12[0x13];
              pppppplVar12[0x13] = (long *****)pppppplVar26;
              pppppplVar12[0x14] = (long *****)pppppplVar12;
              func_0x000107c2c8a4(&ppppplStack_b0);
              func_0x000107c2c8a0(&ppppplStack_170);
              pppppplVar12 = (long ******)ppppplStack_108;
              pppppplVar26 = (long ******)ppppplStack_110;
            }
            ppppplStack_110 = (long *****)0x0;
            ppppplStack_108 = (long *****)0x0;
            ppppplStack_a8 = ppppplStack_e8;
            ppppplStack_b0 = ppppplStack_f0;
            ppppplStack_f0 = (long *****)pppppplVar26;
            ppppplStack_e8 = (long *****)pppppplVar12;
            FUN_100683394(&ppppplStack_b0);
            func_0x000107c2c8a0(&ppppplStack_110);
            func_0x0001052bb074(auStack_120);
          }
        }
      }
    }
    FUN_10067c884(&uStack_100);
    if ((long ******)ppppplStack_f0 != (long ******)0x0) {
      FUN_1006833e4(pppppplVar23,ppppplStack_f0[0xd]);
      func_0x0001006833ec(pppppplVar23,ppppplVar25);
    }
    FUN_1006833f4();
    lVar18 = 0xc0;
    if ((bool)uVar10) {
      lVar18 = extraout_x9;
    }
    uVar7 = *(int *)(extraout_x8_06 + lVar18 + 0x38) - 1;
    uVar10 = uVar7 == 3;
    if (uVar7 < 4) {
      puVar14 = (&PTR_s_POST_110cd3d68)[uVar7];
    }
    else {
      puVar14 = &DAT_10f2d965b;
    }
    pppppplVar26 = pppppplVar23;
    FUN_100683408(pppppplVar23,puVar14);
    FUN_1006833f4();
    lVar18 = 0xc0;
    if ((bool)uVar10) {
      lVar18 = extraout_x9_00;
    }
    puVar3 = *(undefined8 **)(extraout_x8_07 + lVar18 + 0x28);
    for (puVar19 = *(undefined8 **)(extraout_x8_07 + lVar18 + 0x20); puVar19 != puVar3;
        puVar19 = puVar19 + 6) {
      if (*(char *)((long)puVar19 + 0x17) < '\0') {
        if (puVar19[1] != 0) goto LAB_100680c6c;
      }
      else if (*(char *)((long)puVar19 + 0x17) != '\0') {
LAB_100680c6c:
        FUN_100683408();
        puVar15 = puVar19;
        if (*(char *)((long)puVar19 + 0x17) < '\0') {
          puVar15 = (undefined8 *)*puVar19;
        }
        func_0x000100683428(pppppplVar26,puVar15);
        pcVar16 = " ";
        if (*(char *)((long)puVar19 + 0x2f) < '\0') {
          if (puVar19[4] != 0) {
            pcVar16 = (char *)puVar19[3];
          }
        }
        else if (*(char *)((long)puVar19 + 0x2f) != '\0') {
          pcVar16 = (char *)(puVar19 + 3);
        }
        func_0x00010068342c(pppppplVar26,pcVar16);
        FUN_100683434();
        func_0x0001006837c4();
      }
    }
    uVar10 = bRam00000001137f4f27 == 0;
    uVar1 = uRam00000001137f4f18;
    if (-1 < (char)bRam00000001137f4f27) {
      uVar1 = (ulong)bRam00000001137f4f27;
    }
    if (uVar1 != 0) {
      func_0x00010068340c();
      func_0x000100683428();
      uVar10 = bRam00000001137f4f27 == 0;
      uVar27 = uRam00000001137f4f10;
      if (-1 < (char)bRam00000001137f4f27) {
        uVar27 = 0x1137f4f10;
      }
      func_0x00010068342c(pppppplVar26,uVar27);
      FUN_100683434();
      func_0x0001006837c4(pppppplVar26);
    }
    FUN_100100ed0(&ppppplStack_170);
    FUN_100683a4c(&ppppplStack_b0,&ppppplStack_170);
    uStack_100 = *(undefined4 *)(*ppppplVar13 + 0x2f);
    pppppplVar26 = &ppppplStack_b0;
    FUN_1006846dc(pppppplVar26,&uStack_100);
    FUN_1006846f8(pppppplVar23,(uint)pppppplVar26 ^ 1);
    func_0x000100650590(&ppppplStack_b0);
    FUN_1000df75c(&ppppplStack_170);
    iVar24 = 0xf74381f;
    FUN_10011bfd4(&DAT_10f74381f,0x23,0);
    if (iVar24 != 0) {
      ppppplVar25 = param_1[0x65];
      func_0x000107c2c8a8(ppppplVar25,ppppplVar13);
      if (((ulong)ppppplVar25 >> 0x20 & 1) != 0) {
        func_0x000107c2febc(pppppplVar23);
      }
    }
    FUN_1006833f4();
    lVar18 = 0xc0;
    if ((bool)uVar10) {
      lVar18 = extraout_x9_01;
    }
    plVar21 = (long *)(extraout_x8_08 + lVar18 + 8);
    cVar5 = *(char *)(extraout_x8_08 + lVar18 + 0x1f);
    uVar10 = cVar5 == '\0';
    plVar2 = (long *)*plVar21;
    if (-1 < cVar5) {
      plVar2 = plVar21;
    }
    pppppplVar26 = pppppplVar11;
    func_0x000100684700(pppppplVar11,param_1[0x5f],plVar2,pppppplVar23,param_1[0x2c],param_1[0x21]);
    func_0x000100685a98(pppppplVar23);
    iVar24 = (int)pppppplVar26;
    if (iVar24 == 0) {
      param_2 = *param_1;
      (*(code *)(*param_2)[4])();
      if ((int)param_2 == 0) {
        pppppplVar23 = (long ******)param_1[2];
        ppppplStack_160 = ppppplStack_d8;
        ppppplStack_168 = ppppplStack_e0;
        ppppplStack_170 = (long *****)param_1;
        if ((long ******)ppppplStack_d8 != (long ******)0x0) {
          do {
            FUN_10063c448();
          } while (extraout_w10_01 != 0);
        }
        ppplStack_150 = (long ***)ppppplVar13[1];
        ppplStack_158 = (long ***)*ppppplVar13;
        if (ppppplVar13[1] != (long ****)0x0) {
          do {
            FUN_10063c448();
          } while (extraout_w10_02 != 0);
        }
        ppppplStack_140 = ppppplStack_e8;
        ppppplStack_148 = ppppplStack_f0;
        ppppplStack_f0 = (long *****)0x0;
        ppppplStack_e8 = (long *****)0x0;
        FUN_10028c49c();
        param_1 = (long ******)pppppplVar23[2];
        ppppplVar13 = param_2;
        func_0x000107c35b58();
        pppppplVar26 = (long ******)param_1[0xe];
        ppppplStack_b0 = (long *****)&UNK_10b2e38ec;
        ppppplStack_a8 = (long *****)&PTR_DAT_110cd3a28;
        func_0x000100654eb0();
        pppppplVar12 = &ppppplStack_170;
        ppppplVar13[1] = (long ****)ppppplStack_168;
        *ppppplVar13 = (long ****)ppppplStack_170;
        ppppplVar13[2] = (long ****)ppppplStack_160;
        *(undefined8 *)((ulong)&ppppplStack_170 | 8) = 0;
        ((undefined8 *)((ulong)&ppppplStack_170 | 8))[1] = 0;
        ppppplVar13[4] = (long ****)ppplStack_150;
        ppppplVar13[3] = (long ****)ppplStack_158;
        if ((long ****)ppplStack_150 != (long ****)0x0) {
          do {
            func_0x000100683168();
            pppppplVar12 = extraout_x8_11;
          } while (extraout_w11_01 != 0);
        }
        ppppplVar13[6] = (long ****)ppppplStack_140;
        ppppplVar13[5] = (long ****)ppppplStack_148;
        pppppplVar12[5] = (long *****)0x0;
        pppppplVar12[6] = (long *****)0x0;
        uStack_a0 = ppppplVar13;
        pppplStack_80 = (long ****)param_2;
        FUN_1005760fc(param_1 + 9,&ppppplStack_b0);
        func_0x000107c35b38();
        func_0x000107c35b08();
        if (pppppplVar26 == (long ******)0x0) {
          ppppplStack_a8 = pppppplVar23[3];
          ppppplStack_b0 = pppppplVar23[2];
          if (pppppplVar23[3] != (long *****)0x0) {
            do {
              FUN_10063c448();
            } while (extraout_w10_03 != 0);
          }
          FUN_1006680f4();
          (*extraout_x8_12)();
          FUN_100576684(&ppppplStack_b0);
        }
        func_0x000107c2c8cc(&ppppplStack_170);
      }
      else {
        FUN_100685dac(param_1 + 0x29,&ppppplStack_e0,ppppplVar13,&ppppplStack_f0);
        (*(code *)(**ppppplVar13)[5])(&ppppplStack_b0);
        FUN_1006833f4();
        lVar18 = 0xc0;
        if ((bool)uVar10) {
          lVar18 = extraout_x9_02;
        }
        (*(code *)(*ppppplStack_b0)[2])(ppppplStack_b0,extraout_x8_09 + lVar18);
        func_0x00010067c8a8(&ppppplStack_b0);
        param_1 = (long ******)param_1[4];
        FUN_1006833f4();
        lVar18 = 0xc0;
        if ((bool)uVar10) {
          lVar18 = extraout_x9_03;
        }
        func_0x000107c60de8(&ppppplStack_b0,*(undefined8 *)(extraout_x8_10 + lVar18));
        pppplVar29 = *ppppplVar13;
        FUN_100686d00(pppplVar29);
        (*(code *)(*param_1)[2])(param_1,&ppppplStack_b0,pppplVar29);
        func_0x000100681fc4();
        param_2 = ppppplVar13;
      }
      FUN_10068ef20(pppppplVar11);
    }
    else {
      FUN_10002b838(&ppppplStack_138,&UNK_10f743843);
      uVar10 = iVar24 == -0x69;
      uVar17 = 0x3f1;
      if (!(bool)uVar10) {
        uVar17 = 0x3f2;
      }
      ppppplStack_b0 = (long *****)CONCAT44(ppppplStack_b0._4_4_,uVar17);
      pppppplVar22 = &ppppplStack_b0;
      uStack_a0 = (long *****)pppplStack_130;
      ppppplStack_a8 = ppppplStack_138;
      uStack_98 = uStack_128;
      ppppplStack_138 = (long *****)0x0;
      pppplStack_130 = (long ****)0x0;
      uStack_128 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      iStack_90 = iVar24;
      func_0x000107c35b64();
      func_0x000107c35b44();
      func_0x000107c60ca0(&ppppplStack_138);
    }
    FUN_100683394(&ppppplStack_f0);
    FUN_100683368(&ppppplStack_e0);
    goto LAB_100681038;
  }
  bVar4 = *(byte *)((long)pppppplVar22 + 0x17);
  uVar10 = bVar4 == 0;
  ppppplVar25 = pppppplVar22[1];
  pppppplVar11 = (long ******)*pppppplVar22;
  if (-1 < (char)bVar4) {
    ppppplVar25 = (long *****)(ulong)bVar4;
    pppppplVar11 = pppppplVar22;
  }
  func_0x000100681fcc(pppppplVar11,ppppplVar25);
  if ((int)pppppplVar11 != 0) goto code_r0x0001006807e0;
  goto LAB_100680808;
code_r0x0001006807e0:
  bVar4 = *(byte *)((long)pppppplVar22 + 0x2f);
  uVar10 = bVar4 == 0;
  ppppplVar25 = pppppplVar22[4];
  pppppplVar11 = (long ******)pppppplVar22[3];
  if (-1 < (char)bVar4) {
    ppppplVar25 = (long *****)(ulong)bVar4;
    pppppplVar11 = pppppplVar22 + 3;
  }
  func_0x000100681f8c(pppppplVar11,ppppplVar25);
  pppppplVar22 = pppppplVar22 + 6;
  if (((ulong)pppppplVar11 & 1) == 0) goto LAB_100680808;
  goto LAB_1006807b8;
LAB_100680808:
  FUN_10002b838(&ppppplStack_c8,&UNK_10f7437f7);
  ppppplStack_b0 = (long *****)CONCAT44(ppppplStack_b0._4_4_,0x3f1);
  pppppplVar22 = &ppppplStack_b0;
  uStack_a0 = (long *****)pppplStack_c0;
  ppppplStack_a8 = ppppplStack_c8;
  uStack_98 = uStack_b8;
  ppppplStack_c8 = (long *****)0x0;
  pppplStack_c0 = (long ****)0x0;
  uStack_b8 = 0;
  iStack_90 = -0x69;
  uStack_8c = 0;
  uStack_88 = 0;
  func_0x000107c35b64();
  func_0x000107c35b44();
  func_0x000107c60ca0(&ppppplStack_c8);
LAB_100681038:
  func_0x000100654944(uStack_78);
  if ((bool)uVar10) {
    return;
  }
  func_0x000107c60e78();
LAB_1006810d0:
  ppppplStack_170 = (long *****)0x0;
  ppppplStack_168 = (long *****)0x0;
  ppppplStack_160 = (long *****)0x0;
  pppppplVar11 = pppppplVar22;
LAB_1006810d8:
  func_0x000100681fc4();
  pppppplVar11[2] = ppppplStack_168;
  pppppplVar11[1] = ppppplStack_170;
  pppppplVar11[3] = ppppplStack_160;
  ppppplStack_170 = (long *****)0x0;
  ppppplStack_168 = (long *****)0x0;
  ppppplStack_160 = (long *****)0x0;
  func_0x000107c60ca0(&ppppplStack_170);
  func_0x000107c60e4c();
  ppppplVar13 = param_2;
  goto LAB_1006807ac;
}



/* Entry: 1006812d0; end: 1006812db;  */

void FUN_1006812d0(void)

{
  return;
}



/* Entry: 1006812dc; end: 100681337;  */

void FUN_1006812dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 100681338; end: 100681c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100681338(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long extraout_x8;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  long alStack_1e0 [2];
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined *apuStack_170 [3];
  undefined *puStack_158;
  undefined **ppuStack_150;
  long alStack_148 [3];
  long lStack_130;
  undefined **ppuStack_128;
  long alStack_120 [3];
  long lStack_108;
  undefined **ppuStack_100;
  long alStack_f8 [3];
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined *apuStack_d0 [3];
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  
  lVar15 = *(long *)(unaff_x20 + 0x28);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar1 = &UNK_110438290;
  func_0x000107c613fc(&UNK_110438290,0x18,7);
  *(long *)(puVar1 + 0x10) = lVar15;
  ppuStack_88 = (undefined **)&UNK_101a97954;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_101a97a84;
  puStack_90 = &UNK_1104382a8;
  ppuVar2 = &puStack_a8;
  puStack_80 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_80;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puStack_1a0 = puVar4;
  func_0x000107c60bd0(ppuVar2);
  lStack_198 = lVar15;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x100681c00);
    (*pcVar19)();
  }
  lVar3 = 0;
  FUN_100681c3c();
  func_0x000107c613fc();
  *(long *)(lVar3 + 0x10) = lVar15;
  puVar4 = (undefined *)0x0;
  lStack_188 = lVar3;
  func_0x000100681c5c();
  puStack_1b8 = puVar4;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a8778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + 0x10) = puVar1;
  FUN_1000285a8(0x112d51870,&UNK_10d9bd0b0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar14 = uVar5;
  FUN_1000bda74();
  uStack_1b0 = uVar14;
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c(puVar4);
  func_0x000107c3eba8(uVar5);
  func_0x000107c61180();
  lVar15 = _DAT_113093a98;
  lStack_1c0 = *(long *)(unaff_x20 + 0x18);
  uVar17 = *(undefined8 *)(lStack_1c0 + _DAT_113093a98);
  uVar6 = 0;
  FUN_100681dd8();
  uVar14 = uVar6;
  func_0x000107c613fc();
  func_0x000107c61174(uVar17);
  puStack_1a8 = puVar4;
  FUN_100681df8(puVar4,uVar5,uVar17,uVar14);
  uVar14 = 0;
  if (puVar4 != (undefined *)0x0) {
    uVar14 = uVar6;
  }
  ppuVar2 = (undefined **)0x0;
  if (puVar4 != (undefined *)0x0) {
    ppuVar2 = &PTR_DAT_110437820;
  }
  puVar7 = (undefined *)0x0;
  func_0x000100682184();
  puVar1 = puVar7;
  func_0x000107c613fc();
  ppuStack_88 = &PTR_DAT_110437ad8;
  puVar8 = (undefined *)0x0;
  puStack_a8 = puVar1;
  puStack_90 = puVar7;
  func_0x0001006821a4();
  puStack_1d0 = puVar8;
  func_0x000107c613fc();
  FUN_1000c6518(&puStack_a8,puVar7);
  lVar3 = *(long *)(*(long *)(puVar7 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = lVar3 + 0xfU & 0xfffffffffffffff0;
  puVar16 = (undefined8 *)((long)alStack_1e0 - uVar20);
  pcVar19 = *(code **)(extraout_x8 + 0x10);
  (*pcVar19)(puVar16);
  uVar5 = *puVar16;
  *(undefined **)(puVar8 + 0x50) = puVar7;
  *(undefined **)(puVar8 + 0x10) = puVar4;
  *(undefined8 *)(puVar8 + 0x18) = 0;
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = uVar14;
  *(undefined ***)(puVar8 + 0x30) = ppuVar2;
  *(undefined8 *)(puVar8 + 0x38) = uVar5;
  *(undefined ***)(puVar8 + 0x58) = &PTR_DAT_110437ad8;
  *(undefined8 *)(puVar8 + 0x60) = 3;
  puStack_1c8 = puVar4;
  func_0x000107c6157c(puVar4);
  func_0x0001000834e4(&puStack_a8);
  puVar1 = puVar7;
  func_0x000107c613fc(puVar7,0x10,7);
  ppuStack_88 = &PTR_DAT_110437ad8;
  lVar9 = 0;
  puStack_a8 = puVar1;
  puStack_90 = puVar7;
  func_0x0001006821c4();
  alStack_1e0[1] = lVar9;
  func_0x000107c613fc();
  FUN_1000c6518(&puStack_a8,puVar7);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (undefined8 *)((long)alStack_1e0 - uVar20);
  (*pcVar19)(puVar16);
  lVar3 = lStack_1c0;
  uVar14 = *puVar16;
  *(undefined **)(lVar9 + 0x28) = puVar7;
  *(undefined ***)(lVar9 + 0x30) = &PTR_DAT_110437ad8;
  *(undefined8 *)(lVar9 + 0x10) = uVar14;
  *(long *)(lVar9 + 0x38) = lStack_188;
  func_0x000107c6157c();
  func_0x0001000834e4(&puStack_a8);
  lVar10 = *(long *)(lVar3 + lVar15);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar18 = 0;
  }
  else {
    uVar14 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010efce860);
    lVar18 = lVar10;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(uVar14);
  }
  puVar4 = puStack_1a8;
  puVar1 = puStack_1b8;
  puStack_90 = puStack_1b8;
  ppuStack_88 = &PTR_DAT_110437ca0;
  puStack_a8 = puStack_1a8;
  lVar11 = 0;
  func_0x0001006821e4();
  lVar10 = lVar11;
  func_0x000107c613fc();
  FUN_100682204(&puStack_a8,lVar10 + 0x10);
  puVar7 = *(undefined **)(unaff_x20 + 0x20);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar8);
  lStack_190 = lVar9;
  func_0x000107c6157c(lVar9);
  func_0x000107c44580();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(lVar3 + lVar15);
  uVar5 = 0;
  FUN_10068221c();
  uVar14 = uVar5;
  func_0x000107c613fc();
  func_0x000107c6157c(puVar4);
  func_0x000107c61174(uVar6);
  FUN_10068223c(puVar7,uVar6,puVar4,uVar14);
  uVar14 = uStack_1b0;
  if (puVar7 == (undefined *)0x0) {
    uVar5 = 0;
    ppuStack_88 = (undefined **)0x0;
    uStack_a0 = 0;
    puStack_98 = (undefined *)0x0;
  }
  else {
    ppuStack_88 = &PTR_DAT_110438068;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  puStack_a8 = puVar7;
  puStack_90 = (undefined *)uVar5;
  func_0x000107c40430();
  func_0x000107c61180();
  puStack_b8 = puVar1;
  ppuStack_b0 = &PTR_DAT_110437ca0;
  apuStack_d0[0] = puVar4;
  lVar9 = 0;
  FUN_100682464();
  lVar15 = lVar9;
  func_0x000107c613fc();
  *(undefined8 *)(lVar15 + 0x10) = uVar6;
  FUN_100682204(apuStack_d0,lVar15 + 0x18);
  puVar7 = puStack_1a0;
  *(undefined **)(lVar15 + 0x40) = puStack_1a0;
  *(undefined8 *)(lVar15 + 0x48) = uVar14;
  *(long *)(lVar15 + 0x50) = lVar18;
  func_0x000107c615f0(lVar18);
  func_0x000107c6157c(puVar4);
  func_0x000107c61174();
  func_0x000107c6157c(uVar14);
  lVar3 = lStack_198;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puStack_b8 = puStack_1d0;
    ppuStack_b0 = &PTR_DAT_110437a58;
    ppuStack_d8 = &PTR_DAT_110437980;
    ppuStack_100 = &PTR_DAT_110437ac0;
    lStack_108 = alStack_1e0[1];
    alStack_120[0] = lStack_190;
    ppuStack_128 = &PTR_DAT_110438360;
    ppuStack_150 = &PTR_DAT_110437ca0;
    puStack_158 = puVar1;
    apuStack_170[0] = puVar4;
    lVar12 = 0;
    alStack_148[0] = lVar15;
    lStack_130 = lVar9;
    alStack_f8[0] = lVar10;
    lStack_e0 = lVar11;
    apuStack_d0[0] = puVar8;
    func_0x000100682484();
    func_0x000107c613fc();
    lVar9 = 0;
    func_0x0001006824a4();
    lVar15 = lVar9;
    func_0x000107c613fc();
    FUN_100681f48(alStack_148,lVar15 + 0x10);
    FUN_100681f48(apuStack_170,lVar15 + 0x38);
    *(undefined8 *)(lVar15 + 0x68) = uVar14;
    *(long *)(lVar15 + 0x70) = lVar18;
    *(long *)(lVar15 + 0x60) = lVar3;
    *(long *)(lVar12 + 0x28) = lVar9;
    *(undefined ***)(lVar12 + 0x30) = &PTR_DAT_110437fa0;
    *(long *)(lVar12 + 0x10) = lVar15;
    lVar10 = 0;
    func_0x0001006824c4();
    lVar9 = lVar10;
    func_0x000107c613fc();
    FUN_100681f48(alStack_f8,lVar9 + 0x10);
    FUN_100681f48(apuStack_d0,lVar9 + 0x38);
    FUN_100681f48(alStack_120,lVar9 + 0x60);
    FUN_100681f48(alStack_148,lVar9 + 0x88);
    FUN_1006824e4(&puStack_a8,lVar9 + 0xb0);
    FUN_100681f48(apuStack_170,lVar9 + 0xd8);
    lVar15 = lStack_188;
    *(long *)(lVar9 + 0x100) = lVar3;
    *(long *)(lVar9 + 0x108) = lStack_188;
    *(long *)(lVar12 + 0x50) = lVar10;
    *(undefined ***)(lVar12 + 0x58) = &PTR_DAT_110438120;
    *(long *)(lVar12 + 0x38) = lVar9;
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(lVar15);
    func_0x000107c6157c(uVar14);
    func_0x000107c615f0(lVar18);
    func_0x000107c615f0(lVar3);
    func_0x000100682534(&puStack_a8);
    func_0x0001000834e4(apuStack_170);
    func_0x0001000834e4(alStack_148);
    func_0x0001000834e4(alStack_120);
    func_0x0001000834e4(alStack_f8);
    func_0x0001000834e4(apuStack_d0);
    puVar13 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    ppuStack_88 = (undefined **)&UNK_101a97a68;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101a97a88;
    puStack_90 = &UNK_1104382d0;
    ppuVar2 = &puStack_a8;
    puStack_80 = (undefined *)lVar12;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_80;
    func_0x000107c6157c(lVar12);
    func_0x000107c61574(puVar1);
    func_0x000107c3e4fc(puVar13);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar2);
    FUN_100218f78(0);
    func_0x000107c610f8();
    FUN_100682580(puVar13,puVar7);
    func_0x000107c61574(lVar15);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar14);
    func_0x000107c61574(puStack_1c8);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(lStack_190);
    func_0x000107c615e8(lVar18);
    func_0x000107c61574(lVar12);
    return puVar13;
  }
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x100681c04);
  (*pcVar19)();
}



/* Entry: 100681c04; end: 100681c27;  */

void FUN_100681c04(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100681c28; end: 100681c3b;  */

void FUN_100681c28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100681c3c; end: 100681c7b;  */

void FUN_100681c3c(void)

{
  func_0x000107c61168(&PTR_PTR_112df4b10);
  return;
}



/* Entry: 100681c7c; end: 100681cef; -[SCGrapheneTinselMetric2 init] */

undefined1 * FUN_100681c7c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f34c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100681cf0; end: 100681dbb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100681cf0(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107c34a4c();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107c2a488(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000107c2a504(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000107c2a5ac(*(undefined8 *)(param_1 + 0x30));
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000107c2a29c(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000107c2a2d0(*(undefined8 *)(param_1 + 0x40));
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000107c2a5b0(*(undefined8 *)(param_1 + 0x48));
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x000107c2a5b4(*(undefined8 *)(param_1 + 0x50));
    }
  }
  if ((uVar1 >> 8 & 1) != 0) {
    func_0x000107c2a5b8(*(undefined8 *)(param_1 + 0x58));
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 100681dbc; end: 100681dcf;  */

void FUN_100681dbc(void)

{
  return;
}



/* Entry: 100681dd0; end: 100681dd7; -[SCSnapDocManagerServices snapDocManager] */

undefined8 FUN_100681dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100681dd8; end: 100681df7;  */

void FUN_100681dd8(void)

{
  func_0x000107c61168(&PTR_PTR_112df3e40);
  return;
}



/* Entry: 100681df8; end: 100681f47;  */

undefined8 * FUN_100681df8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined **ppuStack_48;
  
  uVar4 = *param_4;
  uVar1 = 0;
  func_0x000100681c5c();
  ppuStack_48 = &PTR_DAT_110437ca0;
  auStack_68[0] = param_1;
  uStack_50 = uVar1;
  FUN_100681f48(auStack_68,param_4 + 2);
  param_4[7] = param_2;
  func_0x000107c61174(param_2);
  lVar2 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001000834e4(auStack_68);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x0001000834e4(param_4 + 2);
    func_0x000107c61170(param_4[7]);
    func_0x000107c61464(param_4,uVar4,0x48,7);
    param_4 = (undefined8 *)0x0;
  }
  else {
    uVar1 = 0x742e6c65736e6974;
    func_0x000107c5fadc(0x742e6c65736e6974,0xed00006c65736e69);
    lVar3 = lVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    func_0x0001000834e4(auStack_68);
    param_4[8] = lVar3;
  }
  return param_4;
}



/* Entry: 100681f48; end: 100681f8b;  */

long FUN_100681f48(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100681f8c; end: 100682037;  */

bool FUN_100681f8c(byte *param_1,long param_2)

{
  while ((param_2 != 0 && (0xd < *param_1 || (1 << (ulong)(*param_1 & 0x1f) & 0x2401U) == 0))) {
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  return param_2 == 0;
}



/* Entry: 100682038; end: 10068210b;  */

undefined8 * FUN_100682038(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110ce9798;
  puVar1[1] = 0;
  FUN_1000ffe38(puVar1 + 2);
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)((long)puVar1 + 0x5f) = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0x3f800000;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  return puVar1;
}



/* Entry: 10068210c; end: 100682203;  */

undefined4 FUN_10068210c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  FUN_10011a768(0x11383a708);
  if (!(bool)in_ZR) {
    FUN_100668920();
    func_0x00010011a788(0x11383a708,param_2,0x10068215c);
  }
  return uRam000000011383a700;
}



/* Entry: 100682204; end: 10068221b;  */

undefined8 * FUN_100682204(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10068221c; end: 10068223b;  */

void FUN_10068221c(void)

{
  func_0x000107c61168(&PTR_PTR_112df47d0);
  return;
}



/* Entry: 10068223c; end: 100682433;  */

long FUN_10068223c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  uVar1 = 0;
  func_0x000100681c5c();
  ppuStack_58 = &PTR_DAT_110437ca0;
  auStack_78[0] = param_3;
  uStack_60 = uVar1;
  FUN_100681f48(auStack_78,param_4 + 0x10);
  lVar2 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x0001000834e4(auStack_78);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x0001000834e4(param_4 + 0x10);
    uVar1 = 0;
    FUN_10068221c(0);
    func_0x000107c61464(param_4,uVar1,0x40,7);
    param_4 = 0;
  }
  else {
    uVar1 = 0x742e6c65736e6974;
    func_0x000107c5fadc(0x742e6c65736e6974,0xed00006c65736e69);
    lVar3 = lVar2;
    func_0x000107c4e60c();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar5 = &UNK_110438308;
    func_0x000107c613fc(&UNK_110438308,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(long *)(puVar5 + 0x18) = lVar3;
    puStack_88 = &UNK_101a97a70;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_101a97a80;
    puStack_90 = &UNK_110438320;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_2);
    func_0x0001000834e4(auStack_78);
    *(undefined **)(param_4 + 0x38) = puVar4;
  }
  return param_4;
}



/* Entry: 100682434; end: 10068245f;  */

void FUN_100682434(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100682460; end: 100682463;  */

void FUN_100682460(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}


