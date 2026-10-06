/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1081205b8; end: 1081205bf;  */

undefined4 FUN_1081205b8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



/* Entry: 1081205c0; end: 10812069f;  */

void FUN_1081205c0(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x108) != param_1) {
    *(float *)(param_2 + 0x108) = param_1;
    func_0x000108122624();
    func_0x00010812280c();
  }
  return;
}



/* Entry: 1081206a0; end: 108120727;  */

long * FUN_1081206a0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long lStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_68;
  undefined **appuStack_60 [5];
  undefined8 uStack_38;
  
  func_0x0001081226d4();
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    FUN_10812002c();
  }
  unaff_x19[0x15] = unaff_x20;
  unaff_x19[0x17] = 0;
  *(int *)(unaff_x19 + 4) = (int)unaff_x19[4] + 1;
  puVar1 = (undefined8 *)unaff_x19[6];
  for (puVar4 = (undefined8 *)unaff_x19[5]; uVar2 = puVar4 == puVar1, !(bool)uVar2;
      puVar4 = puVar4 + 1) {
    func_0x00010812297c(*(undefined8 *)(*(long *)*puVar4 + 0x88));
  }
  *(int *)(unaff_x19 + 4) = (int)unaff_x19[4] + -1;
  if (unaff_x19[0x15] == 0) {
    FUN_10811fed8();
    if (((*(byte *)((long)unaff_x19 + 0x1d7) & 1) == 0) && ((*(byte *)(unaff_x19 + 0x3a) & 1) == 0))
    {
      *(undefined1 *)(unaff_x19 + 0x3a) = 1;
      func_0x0001081148f4(unaff_x19 + 0x30);
      plVar3 = unaff_x19 + 0x2e;
      func_0x0001081148f4(plVar3);
      func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar3;
    }
    return unaff_x19;
  }
  func_0x0001081228cc();
  uStack_38 = extraout_x8;
  if ((((*(byte *)((long)unaff_x19 + 0x1e4) & 1) == 0) && (unaff_x19[0xf] != 0)) &&
     (unaff_x19[0x15] != 0)) {
    func_0x000108102774(&lStack_80,unaff_x19);
    if (lStack_78 != 0) {
      do {
        func_0x000108122744();
      } while (extraout_w10 != 0);
    }
    pcStack_68 = FUN_108121e80;
    appuStack_60[0] = &PTR_FUN_110a25538;
    uStack_90 = 0;
    uStack_88 = 0;
    plVar3 = unaff_x19;
    FUN_108120010(unaff_x19,&pcStack_68);
    (*(code *)*appuStack_60[0])(appuStack_60);
    func_0x000108102744(&uStack_90);
    *(long **)((long)unaff_x19 + 0x1dc) = plVar3;
    *(undefined1 *)((long)unaff_x19 + 0x1e4) = 1;
    unaff_x19 = &lStack_80;
    func_0x000108102744();
  }
  func_0x000108122730(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001081226e0();
    FUN_108121700();
    func_0x000108122818();
    plVar3 = unaff_x19;
    FUN_108121c58();
    if ((int)plVar3 == 0) {
      plVar3 = (long *)(*unaff_x19 + unaff_x19[3]);
    }
    else {
      plVar3 = (long *)(*unaff_x19 + lStack_b8);
    }
    return plVar3;
  }
  return unaff_x19;
}



/* Entry: 108120728; end: 108120883;  */

void FUN_108120728(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x0001081226d4();
  func_0x00010813b780(auStack_30,*param_2);
  func_0x00010812277c();
  func_0x00010812284c();
  if (lStack_28 != 0) {
    func_0x00010812079c();
  }
  *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x19 + 0x44) + 1;
  func_0x000108120804(unaff_x19 + 0x48);
  *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x19 + 0x44) + -1;
  func_0x00010813b700(*unaff_x20);
  func_0x00010812289c();
  return;
}



/* Entry: 108120884; end: 10812092b;  */

undefined1  [16] FUN_108120884(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar8 = 0;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = *(long *)(param_1 + 0x50);
  uVar9 = 1;
  uVar4 = param_1;
  uVar5 = param_2;
  for (lVar10 = 0; lVar1 + lVar10 != lVar2; lVar10 = lVar10 + 8) {
    plVar6 = *(long **)(lVar1 + lVar8 * 8);
    if (plVar6 == (long *)0x0) {
      ___cxa_bad_typeid();
      uVar4 = *(ulong *)(uVar4 + 8);
      uVar7 = *(ulong *)(uVar5 + 8);
      if (uVar4 == uVar7) {
        auVar12._8_8_ = uVar5;
        auVar12._0_8_ = 1;
        return auVar12;
      }
      if (-1 < (long)(uVar7 & uVar4)) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar5;
        return auVar3 << 0x40;
      }
      uVar4 = uVar4 & 0x7fffffffffffffff;
      uVar7 = uVar7 & 0x7fffffffffffffff;
      _strcmp(uVar4,uVar7);
      auVar13._1_7_ = 0;
      auVar13[0] = (int)uVar4 == 0;
      auVar13._8_8_ = uVar7;
      return auVar13;
    }
    uVar4 = *(ulong *)(*plVar6 + -8);
    uVar5 = param_2;
    FUN_10812092c();
    if ((uVar4 & 1) != 0) goto LAB_1081208fc;
    lVar8 = lVar8 + 1;
  }
  uVar9 = 0;
  lVar8 = 0;
LAB_1081208fc:
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = lVar8;
  return auVar11;
}



/* Entry: 10812092c; end: 108120973;  */

bool FUN_10812092c(long param_1,long param_2)

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
  _strcmp(uVar1,uVar2 & 0x7fffffffffffffff);
  return (int)uVar1 == 0;
}



/* Entry: 108120974; end: 1081209c3;  */

void FUN_108120974(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = iVar5 + 1;
  lVar4 = *(long *)(*(long *)(param_2 + 0x48) + param_3 * 8);
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
    iVar5 = *(int *)(param_2 + 0x40) + -1;
  }
  *param_1 = lVar4;
  *(int *)(param_2 + 0x40) = iVar5;
  return;
}



/* Entry: 1081209c4; end: 108120a07;  */

long * FUN_1081209c4(long *param_1)

{
  long lVar1;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  func_0x00010812254c(lVar1,10);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc(param_1,lVar1);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv(param_1);
  return param_1;
}



/* Entry: 108120a08; end: 108120a17;  */

undefined1  [16] FUN_108120a08(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 5;
  auVar1._0_8_ = &UNK_10f47ba2e;
  return auVar1;
}



/* Entry: 108120a18; end: 108120a3b;  */

void FUN_108120a18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[1];
  uStack_20 = *param_2;
  FUN_10812158c(param_1,&uStack_20);
  return;
}



/* Entry: 108120a3c; end: 108120a7f;  */

undefined8 FUN_108120a3c(void)

{
  return 1;
}



/* Entry: 108120a80; end: 108120ac7;  */

undefined8 FUN_108120a80(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000108120aa8(param_1 + 8);
  func_0x0001081227d8(param_1);
  FUN_108120b0c();
  return unaff_x19;
}



/* Entry: 108120ac8; end: 108120aeb;  */

void FUN_108120ac8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108122680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108120aec; end: 108120b0b;  */

void FUN_108120aec(void)

{
  func_0x0001081227d8();
  FUN_108120b0c();
  return;
}



/* Entry: 108120b0c; end: 108120b2f;  */

void FUN_108120b0c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108122680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108120b30; end: 108120bab;  */

void FUN_108120b30(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_108120bac(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x10;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 108120bac; end: 108120c37;  */

undefined8 FUN_108120bac(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1080e5cf8(param_1 + 8);
  func_0x00010007e5d0(param_1);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 108120c38; end: 108120c3f;  */

void FUN_108120c38(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000108120c74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108120c40; end: 108120cf7;  */

void FUN_108120c40(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000108120c74();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108120cf8; end: 108120d23;  */

void FUN_108120cf8(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *plVar4 = lVar5;
  *(long **)(param_1 + 8) = plVar4 + 1;
  return;
}



/* Entry: 108120d24; end: 108120d93;  */

undefined8 FUN_108120d24(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x9;
  long unaff_x19;
  undefined8 uVar4;
  
  func_0x0001081225e0();
  FUN_108120d94();
  func_0x000108122640();
  if (param_2 != 0) {
    FUN_108120df0();
  }
  func_0x0001081225c4();
  if ((extraout_x9 != 0) && (*(long *)(extraout_x9 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(extraout_x9 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108122654();
  FUN_108120dbc();
  uVar4 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001081228a4();
  return uVar4;
}



/* Entry: 108120d94; end: 108120dbb;  */

undefined8 FUN_108120d94(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001081229e8();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_108120de4();
  func_0x0001081226e0();
  func_0x0001081228fc();
  FUN_108120e30();
  func_0x000108122690();
  return param_1;
}



/* Entry: 108120dbc; end: 108120de3;  */

void FUN_108120dbc(void)

{
  func_0x0001081226e0();
  func_0x0001081228fc();
  FUN_108120e30();
  func_0x000108122690();
  return;
}



/* Entry: 108120de4; end: 108120def;  */

void FUN_108120de4(void)

{
  _abort();
  FUN_108120e14();
  return;
}



/* Entry: 108120df0; end: 108120e13;  */

void FUN_108120df0(void)

{
  FUN_108120e14();
  return;
}



/* Entry: 108120e14; end: 108120e2f;  */

void FUN_108120e14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4 = param_4 + 1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x0001078bee2c();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 108120e30; end: 108120e4f;  */

void FUN_108120e30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x0001078bee2c();
  }
  return;
}



/* Entry: 108120e50; end: 108120eab;  */

void FUN_108120e50(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x0001078bee2c();
  }
  return;
}



/* Entry: 108120eac; end: 108120eb3;  */

void FUN_108120eac(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001078bee2c();
  }
  return;
}



/* Entry: 108120eb4; end: 108120ee7;  */

void FUN_108120eb4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001078bee2c();
  }
  return;
}



/* Entry: 108120ee8; end: 108120f27;  */

void FUN_108120ee8(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (puVar2 = (undefined8 *)((long)*(undefined8 **)(param_1 + 8) + (param_2 - param_4));
      puVar2 < param_3; puVar2 = puVar2 + 1) {
    *puVar1 = *puVar2;
    *puVar2 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  func_0x000108122768(param_2);
  FUN_10812110c();
  return;
}



/* Entry: 108120f28; end: 10812103b;  */

void FUN_108120f28(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long extraout_x8;
  long *plVar8;
  int extraout_w11;
  ulong *unaff_x19;
  long *unaff_x20;
  
  func_0x0001081226d4();
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == *(long **)(param_1 + 0x18)) {
    uVar1 = *unaff_x19;
    uVar6 = unaff_x19[1];
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = (long)((long)plVar5 - uVar1) >> 2;
      if ((long)plVar5 - uVar1 == 0) {
        uVar6 = 1;
      }
      uVar3 = unaff_x19[4];
      uVar4 = uVar6;
      FUN_108120df0();
      uVar1 = uVar3 + (uVar6 >> 2) * 8;
      uVar6 = unaff_x19[1];
      uVar2 = unaff_x19[2];
      for (lVar7 = 0; uVar2 - uVar6 != lVar7; lVar7 = lVar7 + 8) {
        *(undefined8 *)(uVar1 + lVar7) = *(undefined8 *)(uVar6 + lVar7);
        *(undefined8 *)(uVar6 + lVar7) = 0;
      }
      *unaff_x19 = uVar3;
      unaff_x19[1] = uVar1;
      unaff_x19[2] = uVar1 + (uVar2 - uVar6);
      unaff_x19[3] = uVar3 + uVar4 * 8;
      func_0x0001081228a4();
      plVar5 = (long *)unaff_x19[2];
    }
    else {
      lVar7 = (((long)(uVar6 - uVar1) >> 3) + 1) / -2;
      FUN_108121168(uVar6,plVar5,uVar6 + lVar7 * 8);
      unaff_x19[1] = unaff_x19[1] + lVar7 * 8;
      unaff_x19[2] = (ulong)plVar5;
    }
  }
  lVar7 = *unaff_x20;
  plVar8 = plVar5;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
    do {
      func_0x0001081228ec();
    } while (extraout_w11 != 0);
    plVar8 = (long *)unaff_x19[2];
    lVar7 = extraout_x8;
  }
  *plVar5 = lVar7;
  unaff_x19[2] = (ulong)(plVar8 + 1);
  return;
}



/* Entry: 10812103c; end: 1081210ef;  */

undefined8 FUN_10812103c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x0001081227b4();
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_108120e30(param_1 + 0x10);
  lVar3 = *unaff_x21;
  lVar2 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  FUN_108120e30(unaff_x21 + 2);
  unaff_x20[1] = lVar2 + (lVar3 - unaff_x19);
  lVar3 = *unaff_x21;
  unaff_x21[1] = lVar3;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar3;
  lVar3 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar3;
  lVar3 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar3;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 1081210f0; end: 10812110b;  */

void FUN_1081210f0(void)

{
  func_0x000108122768();
  FUN_10812110c();
  return;
}



/* Entry: 10812110c; end: 108121167;  */

void FUN_10812110c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  func_0x0001081228dc();
  while (param_4 = param_4 + -8, param_3 != unaff_x21) {
    param_3 = param_3 + -8;
    func_0x0001078beedc(param_4,param_3);
  }
  func_0x000108122818();
  return;
}



/* Entry: 108121168; end: 108121183;  */

void FUN_108121168(void)

{
  func_0x000108122768();
  FUN_108121184();
  return;
}



/* Entry: 108121184; end: 1081211cb;  */

void FUN_108121184(void)

{
  long in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001081228dc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 8) {
    func_0x0001078beedc(in_x3,unaff_x21);
    in_x3 = in_x3 + 8;
  }
  func_0x000108122818();
  return;
}



/* Entry: 1081211cc; end: 1081211ff;  */

void FUN_1081211cc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x0001078bee2c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108121200; end: 10812126b;  */

undefined8 FUN_108121200(undefined8 param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long extraout_x9;
  long unaff_x19;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  
  func_0x0001081225e0();
  FUN_1080c40b0();
  func_0x000108122640();
  if (param_2 != 0) {
    func_0x000104bfe148();
  }
  func_0x0001081225c4();
  if (extraout_x9 != 0) {
    piVar1 = (int *)(extraout_x9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108122654();
  func_0x000104bdd41c();
  uVar4 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000104bdd4f0(auStack_58);
  return uVar4;
}



/* Entry: 10812126c; end: 1081212a3;  */

void FUN_10812126c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0();
  while (param_2 != 0) {
    FUN_1080e5cf8(unaff_x20 + 8);
    func_0x0001003a8c94(unaff_x20);
    unaff_x20 = unaff_x20 + 0x10;
    unaff_x19 = unaff_x19 + -1;
    param_2 = unaff_x19;
  }
  return;
}



/* Entry: 1081212a4; end: 1081212cf;  */

void FUN_1081212a4(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar5 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *plVar4 = lVar5;
  *(long **)(param_1 + 8) = plVar4 + 1;
  return;
}



/* Entry: 1081212d0; end: 1081213ab;  */

undefined8 FUN_1081212d0(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x9;
  long unaff_x19;
  undefined8 uVar4;
  
  func_0x0001081225e0();
  FUN_108120d94();
  func_0x000108122640();
  if (param_2 != 0) {
    FUN_108120df0();
  }
  func_0x0001081225c4();
  if ((extraout_x9 != 0) && (*(long *)(extraout_x9 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(extraout_x9 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108122654();
  FUN_108120dbc();
  uVar4 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001081228a4();
  return uVar4;
}



/* Entry: 1081213ac; end: 1081213d3;  */

undefined8 FUN_1081213ac(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  if (param_2 >> 0x3d == 0) {
    func_0x0001081229e8();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_1081213fc();
  func_0x0001081226e0();
  func_0x0001081228fc();
  FUN_108121448();
  func_0x000108122690();
  return param_1;
}



/* Entry: 1081213d4; end: 1081213fb;  */

void FUN_1081213d4(void)

{
  func_0x0001081226e0();
  func_0x0001081228fc();
  FUN_108121448();
  func_0x000108122690();
  return;
}



/* Entry: 1081213fc; end: 108121407;  */

void FUN_1081213fc(void)

{
  _abort();
  FUN_10812142c();
  return;
}



/* Entry: 108121408; end: 10812142b;  */

void FUN_108121408(void)

{
  FUN_10812142c();
  return;
}



/* Entry: 10812142c; end: 108121447;  */

void FUN_10812142c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104bfe188();
    for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
      *param_4 = *puVar1;
      *puVar1 = 0;
      param_4 = param_4 + 1;
    }
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      func_0x000108120c74();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
  return;
}



/* Entry: 108121448; end: 108121467;  */

void FUN_108121448(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 1) {
    *param_4 = *puVar1;
    *puVar1 = 0;
    param_4 = param_4 + 1;
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    func_0x000108120c74();
  }
  return;
}



/* Entry: 108121468; end: 1081214c3;  */

void FUN_108121468(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x000108120c74();
  }
  return;
}



/* Entry: 1081214c4; end: 1081214cb;  */

void FUN_1081214c4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000108120c74();
  }
  return;
}



/* Entry: 1081214cc; end: 1081214ff;  */

void FUN_1081214cc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001081226e0();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000108120c74();
  }
  return;
}



/* Entry: 108121500; end: 10812151b;  */

void FUN_108121500(void)

{
  func_0x000108122768();
  FUN_10812151c();
  return;
}



/* Entry: 10812151c; end: 108121563;  */

void FUN_10812151c(void)

{
  long in_x3;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001081228dc();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 8) {
    FUN_108121564(in_x3,unaff_x21);
    in_x3 = in_x3 + 8;
  }
  func_0x000108122818();
  return;
}



/* Entry: 108121564; end: 10812158b;  */

void FUN_108121564(void)

{
  undefined1 in_ZR;
  
  func_0x00010812292c();
  if (!(bool)in_ZR) {
    func_0x0001081227c4();
    func_0x0001080ecc38();
  }
  return;
}



/* Entry: 10812158c; end: 108121597;  */

void FUN_10812158c(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (param_1,*param_2,param_2[1]);
  return;
}



/* Entry: 108121598; end: 1081215db;  */

void FUN_108121598(long param_1)

{
  func_0x0001081229dc();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1081215dc; end: 1081215ff;  */

void FUN_1081215dc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108122680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108121600; end: 10812161f;  */

void FUN_108121600(void)

{
  func_0x0001081227d8();
  func_0x0001080f64e8();
  return;
}



/* Entry: 108121620; end: 108121643;  */

void FUN_108121620(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000108122680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 108121644; end: 108121667;  */

void FUN_108121644(long param_1)

{
  func_0x0001081229dc();
  if (param_1 != 0) {
    func_0x0001003a81fc();
  }
  return;
}



/* Entry: 108121668; end: 1081216ff;  */

void FUN_108121668(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  
  plVar4 = param_2;
  FUN_108121700();
  plVar5 = param_2;
  plVar7 = param_3;
  func_0x000108121724(param_2,param_3,plVar4);
  uVar6 = SUB81(plVar7,0);
  if (((ulong)plVar7 & 1) != 0) {
    plVar7 = (long *)(param_2[1] + (long)plVar5 * 0x10);
    lVar8 = *param_3;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar7 = lVar8;
    plVar7[1] = 0;
    *(byte *)(*param_2 + (long)plVar5) = (byte)plVar4 & 0x7f;
    func_0x000108122914();
  }
  lVar8 = param_2[1];
  *param_1 = *param_2 + (long)plVar5;
  param_1[1] = lVar8 + (long)plVar5 * 0x10;
  *(undefined1 *)(param_1 + 2) = uVar6;
  return;
}



/* Entry: 108121700; end: 1081217ff;  */

void FUN_108121700(long param_1)

{
  long lStack_18;
  
  lStack_18 = param_1 + 0x28;
  func_0x0001081217e0(&lStack_18);
  return;
}



/* Entry: 108121800; end: 1081218c3;  */

void FUN_108121800(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long lVar3;
  ulong uVar4;
  
  func_0x0001081226d4();
  lVar3 = *param_1;
  uVar4 = param_1[3];
  lVar1 = lVar3;
  FUN_1081218c4(lVar3,uVar4);
  lVar2 = unaff_x19[5];
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + lVar1) == -2) {
      lVar2 = 0;
    }
    else {
      if ((uVar4 == 0) || (uVar4 - (uVar4 >> 3) >> 1 < (ulong)unaff_x19[2])) {
        FUN_108121904();
      }
      else {
        func_0x000108121a2c();
      }
      lVar3 = *unaff_x19;
      lVar1 = lVar3;
      FUN_1081218c4(lVar3,unaff_x19[3]);
      lVar2 = unaff_x19[5];
    }
  }
  unaff_x19[2] = unaff_x19[2] + 1;
  unaff_x19[5] = lVar2 - (ulong)(*(char *)(lVar3 + lVar1) == -0x80);
  return;
}



/* Entry: 1081218c4; end: 108121903;  */

ulong FUN_1081218c4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 108121904; end: 108121bd3;  */

void FUN_108121904(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar7 = param_1[3];
  lVar8 = (param_2 & 0xfffffffffffffff8) + 0x10;
  lVar3 = lVar8 + param_2 * 0x10;
  __Znwm();
  *param_1 = lVar3;
  param_1[1] = lVar3 + lVar8;
  _memset();
  lVar8 = 0;
  *(undefined1 *)(lVar3 + param_2) = 0xff;
  lVar3 = 6;
  if (param_2 != 7) {
    lVar3 = param_2 - (param_2 >> 3);
  }
  param_1[5] = lVar3 - param_1[2];
  param_1[3] = param_2;
  for (; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar3 = lVar5;
      FUN_108121bd4();
      lVar6 = *param_1;
      lVar4 = lVar6;
      FUN_1081218c4(lVar6,param_1[3],lVar3);
      bVar2 = (byte)lVar3 & 0x7f;
      *(byte *)(lVar6 + lVar4) = bVar2;
      *(byte *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & lVar4 - 8U) + 1) = bVar2;
      FUN_108121bf4(param_1[1] + lVar4 * 0x10,lVar5);
    }
    lVar5 = lVar5 + 0x10;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108121bd4; end: 108121bf3;  */

void FUN_108121bd4(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*param_1);
  return;
}



/* Entry: 108121bf4; end: 108121c07;  */

undefined8 FUN_108121bf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1080e5cf8(param_2 + 1);
  func_0x00010007e5d0(param_2);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 108121c08; end: 108121c57;  */

long FUN_108121c08(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_108121c58();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 108121c58; end: 108121cf7;  */

bool FUN_108121c58(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 0x10) == lVar7) goto LAB_108121cec;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_108121cec:
  return uVar5 != 0;
}



/* Entry: 108121cf8; end: 108121d2b;  */

long * FUN_108121cf8(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_108121d64();
  return param_1;
}



/* Entry: 108121d2c; end: 108121d63;  */

void FUN_108121d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long *unaff_x21;
  
  func_0x0001081227b4();
  FUN_108120bac(param_3);
  uVar2 = 0;
  unaff_x21[2] = unaff_x21[2] + -1;
  puVar3 = (undefined1 *)((long)unaff_x20 + (-8 - *unaff_x21));
  uVar5 = *(ulong *)(*unaff_x21 + ((ulong)puVar3 & unaff_x21[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *unaff_x20 & ~*unaff_x20 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)unaff_x20 = uVar4;
  *(undefined1 *)(*unaff_x21 + (unaff_x21[3] & 7U) + (unaff_x21[3] & (ulong)puVar3) + 1) = uVar4;
  unaff_x21[5] = unaff_x21[5] + uVar2;
  return;
}



/* Entry: 108121d64; end: 108121db3;  */

void FUN_108121d64(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 0x10;
  }
  return;
}



/* Entry: 108121db4; end: 108121e57;  */

void FUN_108121db4(long *param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = 0;
  param_1[2] = param_1[2] + -1;
  puVar3 = (undefined1 *)((long)param_2 + (-8 - *param_1));
  uVar5 = *(ulong *)(*param_1 + ((ulong)puVar3 & param_1[3]));
  uVar4 = 0xfe;
  uVar5 = uVar5 & ~uVar5 << 6 & 0x8080808080808080;
  if ((uVar5 != 0) && (uVar6 = *param_2 & ~*param_2 << 6 & 0x8080808080808080, uVar6 != 0)) {
    uVar6 = uVar6 >> 7;
    uVar2 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    bVar1 = (int)((ulong)LZCOUNT(uVar5) >> 3) + ((uint)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3)
            < 8;
    uVar2 = (ulong)bVar1;
    uVar4 = 0x80;
    if (!bVar1) {
      uVar4 = 0xfe;
    }
  }
  *(undefined1 *)param_2 = uVar4;
  *(undefined1 *)(*param_1 + (param_1[3] & 7U) + (param_1[3] & (ulong)puVar3) + 1) = uVar4;
  param_1[5] = param_1[5] + uVar2;
  return;
}



/* Entry: 108121e58; end: 108121e7f;  */

undefined1  [16] FUN_108121e58(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_108121d64(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 108121e80; end: 108122077;  */

long * FUN_108121e80(undefined8 param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar6;
  long lVar7;
  int extraout_w11;
  int extraout_w11_00;
  long alStack_c8 [2];
  long lStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [64];
  undefined8 uStack_48;
  
  func_0x0001081228cc();
  param_3 = param_3 + 0x10;
  uStack_48 = extraout_x8;
  func_0x0001081026fc(alStack_c8);
  if (alStack_c8[0] != 0) {
    in_ZR = *(char *)(alStack_c8[0] + 0x1e4) == '\x01';
    if ((bool)in_ZR) {
      *(undefined1 *)(alStack_c8[0] + 0x1e4) = 0;
    }
    if (*(long *)(alStack_c8[0] + 0x78) != 0) {
      lStack_90 = 4;
      lStack_98 = 0;
      puStack_a0 = auStack_88;
      func_0x0001081227f8();
      lVar5 = *(long *)(alStack_c8[0] + 0x68);
      lVar7 = *(long *)(alStack_c8[0] + 0x80);
      lStack_b8 = param_3;
      plStack_b0 = param_4;
      while (in_ZR = lStack_b8 == lVar5 + lVar7, !(bool)in_ZR) {
        puVar4 = (undefined8 *)(puStack_a0 + lStack_98 * 0x10);
        if (lStack_98 == lStack_90) {
          FUN_1081220d0(auStack_a8,&puStack_a0,puVar4,plStack_b0 + 1);
        }
        else {
          uVar6 = 0;
          plVar2 = plStack_b0;
          if (*plStack_b0 != 0) {
            do {
              func_0x000108122964();
              uVar6 = extraout_x8_00;
            } while (extraout_w11 != 0);
          }
          *puVar4 = uVar6;
          uVar6 = 0;
          if (plVar2[1] != 0) {
            do {
              func_0x0001081226ec();
              uVar6 = extraout_x8_01;
            } while (extraout_w11_00 != 0);
          }
          puVar4[1] = uVar6;
          lStack_98 = lStack_98 + 1;
        }
        FUN_108121cf8(&lStack_b8);
      }
      func_0x000108122714();
      puVar1 = puStack_a0;
      for (lVar5 = lStack_98 << 4; lVar5 != 0; lVar5 = lVar5 + -0x10) {
        plVar2 = *(long **)(puVar1 + 8);
        (**(code **)(*plVar2 + 0x20))(param_2,plVar2,alStack_c8[0]);
        if ((int)plVar2 != 0) {
          *(int *)(alStack_c8[0] + 100) = *(int *)(alStack_c8[0] + 100) + 1;
          lVar7 = alStack_c8[0] + 0x68;
          puVar3 = puVar1;
          FUN_10811fe64();
          plVar2 = *(long **)(puVar1 + 8);
          in_ZR = *(long *)(alStack_c8[0] + 0x68) + *(long *)(alStack_c8[0] + 0x80) == lVar7;
          if ((!(bool)in_ZR) && (in_ZR = *(long **)(puVar3 + 8) == plVar2, (bool)in_ZR)) {
            FUN_10811fe8c(alStack_c8[0] + 0x68,lVar7,puVar3);
            plVar2 = *(long **)(puVar1 + 8);
          }
          *(int *)(alStack_c8[0] + 100) = *(int *)(alStack_c8[0] + 100) + -1;
          func_0x000108122824(*(undefined8 *)(*plVar2 + 0x30));
        }
        puVar1 = puVar1 + 0x10;
      }
      FUN_10811fd84(alStack_c8[0]);
      FUN_10812126c(puStack_a0,lStack_98);
      if ((lStack_90 != 0) && (in_ZR = auStack_88 == puStack_a0, !(bool)in_ZR)) {
        __ZdlPv();
      }
    }
  }
  plVar2 = alStack_c8;
  func_0x000108102844();
  func_0x000108122730(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  if (plVar2[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar2 + 1;
}



/* Entry: 108122078; end: 1081220cf;  */

long FUN_108122078(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 1081220d0; end: 10812221f;  */

long * FUN_1081220d0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar6;
  ulong extraout_x9;
  ulong uVar7;
  int extraout_w11;
  int extraout_w11_00;
  long *unaff_x19;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  
  plVar5 = param_3;
  if ((ulong)((param_2[1] + 1) - param_2[2]) <= 0x7ffffffffffffffU - param_2[2]) {
    func_0x0001081226d4();
    if (extraout_x9 >> 0x3d == 0) {
      uVar7 = (extraout_x9 << 3) / 5;
    }
    else {
      uVar7 = extraout_x9 << 3;
      if (4 < extraout_x9 >> 0x3d) {
        uVar7 = 0xffffffffffffffff;
      }
    }
    if (0x7fffffffffffffe < uVar7) {
      uVar7 = 0x7ffffffffffffff;
    }
    uVar1 = extraout_x8;
    if (extraout_x8 <= uVar7) {
      uVar1 = uVar7;
    }
    if (extraout_x8 >> 0x3b == 0) {
      lVar8 = *unaff_x20;
      lVar3 = uVar1 << 4;
      __Znwm();
      puVar2 = (undefined8 *)*unaff_x20;
      lVar9 = unaff_x20[1];
      puVar4 = puVar2;
      FUN_108122220(puVar2,param_3,lVar3);
      uVar6 = 0;
      if (*param_5 != 0) {
        do {
          func_0x000108122964();
          uVar6 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      *puVar4 = uVar6;
      uVar6 = 0;
      if (*param_4 != 0) {
        do {
          func_0x0001081226ec();
          uVar6 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      puVar4[1] = uVar6;
      plVar5 = param_3;
      FUN_108122220(param_3,puVar2 + lVar9 * 2,puVar4 + 2);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_10812126c(puVar2,unaff_x20[1]);
        plVar5 = (long *)*unaff_x20;
        if (unaff_x20 + 3 != plVar5) {
          __ZdlPv();
        }
      }
      *unaff_x20 = lVar3;
      unaff_x20[1] = unaff_x20[1] + 1;
      unaff_x20[2] = uVar1;
      *unaff_x19 = (long)param_3 + (lVar3 - lVar8);
      return plVar5;
    }
  }
  _abort();
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    lVar9 = *param_1;
    plVar5[1] = param_1[1];
    *plVar5 = lVar9;
    *param_1 = 0;
    param_1[1] = 0;
    plVar5 = plVar5 + 2;
  }
  return plVar5;
}



/* Entry: 108122220; end: 108122247;  */

undefined8 * FUN_108122220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar1 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar1;
    *param_1 = 0;
    param_1[1] = 0;
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 108122248; end: 108122343;  */

void FUN_108122248(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010812228c(&uStack_30);
  param_1[1] = lStack_28;
  *param_1 = uStack_30;
  if (lStack_28 != 0) {
    do {
      func_0x000108122744();
    } while (extraout_w10 != 0);
  }
  func_0x00010812285c();
  return;
}



/* Entry: 108122344; end: 10812234f;  */

void FUN_108122344(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 108122350; end: 10812240f;  */

void FUN_108122350(void)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  char acStack_50 [16];
  
  func_0x0001081226d4();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_50);
  if (acStack_50[0] == '\x01') {
    lVar1 = (long)unaff_x19 + *(long *)(*unaff_x19 + -0x18);
    lVar2 = *(long *)(lVar1 + 0x28);
    FUN_108122514(lVar1);
    FUN_108122410();
    if (lVar2 == 0) {
      func_0x0001081225ac((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18),5);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_50);
  return;
}



/* Entry: 108122410; end: 108122513;  */

undefined1 *
FUN_108122410(undefined1 *param_1,long param_2,long param_3,long param_4,long param_5,
             undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  
  if (param_1 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  lVar4 = *(long *)(param_5 + 0x18);
  puVar1 = param_1;
  if (param_3 - param_2 < 1) {
LAB_108122470:
    if (param_4 - param_2 < lVar4) {
      puVar3 = (undefined1 *)(lVar4 - (param_4 - param_2));
      puVar2 = auStack_68;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEmc
                (puVar2,puVar3,param_6);
      func_0x0001081228ac();
      (*extraout_x8_00)();
      puVar1 = auStack_68;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
      if (puVar2 != puVar3) goto LAB_1081224f0;
    }
    if (0 < param_4 - param_3) {
      func_0x0001081228ac();
      (*extraout_x8_01)();
      if (puVar1 != (undefined1 *)(param_4 - param_3)) goto LAB_1081224f0;
    }
    *(undefined8 *)(param_5 + 0x18) = 0;
  }
  else {
    func_0x0001081228ac();
    (*extraout_x8)();
    if (puVar1 == (undefined1 *)(param_3 - param_2)) goto LAB_108122470;
LAB_1081224f0:
    param_1 = (undefined1 *)0x0;
  }
  return param_1;
}



/* Entry: 108122514; end: 10812259f;  */

int FUN_108122514(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == -1) {
    lVar2 = param_1;
    func_0x00010812254c(param_1,0x20);
    iVar1 = (int)lVar2;
    *(int *)(param_1 + 0x90) = iVar1;
  }
  return (int)(char)iVar1;
}



/* Entry: 1081225a0; end: 108122a0f;  */

void FUN_1081225a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt3__16locale9use_facetERNS0_2idE_110346100)
            (param_1,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  return;
}



/* Entry: 108122a10; end: 10812387f;  */

void FUN_108122a10(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a255a0;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  param_1[3] = lVar5;
  param_1[4] = 0;
  uVar6 = *(undefined8 *)(*param_2 + 0x48);
  uVar2 = *(undefined1 *)(*param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x1a] = uVar6;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((long)param_1 + 0xd9) = uVar2;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0x3f800000;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x100;
  *(undefined1 *)((long)param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return;
}



/* Entry: 108123880; end: 1081238fb;  */

undefined8 * FUN_108123880(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a25698;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_108376ad8(param_1 + 4);
  param_1[6] = 0x8ff000000;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



/* Entry: 1081238fc; end: 1081238ff;  */

undefined8 * FUN_1081238fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a25698;
  FUN_10837ca38(param_1 + 4);
  return param_1;
}



/* Entry: 108123900; end: 108123913;  */

void FUN_108123900(void)

{
  func_0x0001081238cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108123914; end: 10812393b;  */

void FUN_108123914(long param_1)

{
  FUN_108376b90(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10812393c; end: 108123957;  */

void FUN_10812393c(long param_1,undefined8 *param_2)

{
  byte extraout_w8;
  int *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x48) != 0) {
    func_0x00010837cce4();
    if (*extraout_x8 == 1) {
      func_0x00010837ecd4(*unaff_x19);
    }
    else {
      FUN_10837e150();
      FUN_108376bdc();
    }
    func_0x00010837cd40();
    *(byte *)((long)unaff_x19 + 0xe) = extraout_w8 & 0xfc;
    func_0x00010837cb1c();
    return;
  }
  return;
}



/* Entry: 108123958; end: 1081239cf;  */

undefined4 FUN_108123958(long param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_34 [4];
  char cStack_24;
  
  func_0x000108142318(auStack_34,param_1 + 0x20);
  puVar1 = auStack_34;
  if (cStack_24 == '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x10);
  }
  return *puVar1;
}



/* Entry: 1081239d0; end: 108123af7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1081239d0(long *param_1,float param_2,float param_3,float param_4,float param_5,
                  long *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long alStack_98 [6];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  fStack_40 = param_2;
  FUN_108123958();
  bVar3 = false;
  if ((fStack_40 < param_4) && (bVar3 = false, !NAN(param_3) && !NAN(param_5))) {
    bVar3 = param_3 < param_5;
  }
  if (bVar3) {
    uStack_5c = 0;
    uStack_60 = 0;
    alStack_98[4] = 0;
    alStack_98[3] = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    alStack_98[5] = 0;
    alStack_98[2] = 0;
    alStack_98[1] = 0;
    uStack_54 = 0x3f800000;
    uStack_4c = 0x40800000;
    fStack_3c = param_3;
    fStack_38 = param_4;
    fStack_34 = param_5;
    (**(code **)(*param_6 + 0x30))(param_6,alStack_98 + 1,&fStack_40);
    func_0x000108123aac(alStack_98,alStack_98 + 1,param_6 + 4,param_6 + 2);
    if (alStack_98[0] == 0) {
      lVar4 = 0;
    }
    else {
      plVar1 = (long *)(alStack_98[0] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lVar4 = alStack_98[0];
      } while (cVar2 != '\0');
    }
    FUN_108121620(lVar4);
    FUN_108375e94(alStack_98 + 1);
  }
  else {
    alStack_98[0] = 0;
  }
  *param_1 = alStack_98[0];
  return;
}



/* Entry: 108123af8; end: 108123aff;  */

undefined4 FUN_108123af8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



/* Entry: 108123b00; end: 108123b33;  */

void FUN_108123b00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_108376208(param_2,*(undefined4 *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x34) == 3) {
    uVar1 = 0;
  }
  else {
    FUN_108333b64(&uStack_28,*(int *)(param_1 + 0x34));
    uVar1 = uStack_28;
  }
  uStack_28 = 0;
  FUN_108166224(param_2 + 0x28,uVar1);
  FUN_108154c6c(&uStack_28);
  return;
}



/* Entry: 108123b34; end: 108126a7b;  */

undefined8 * FUN_108123b34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a256f8;
  func_0x0001081240d4(param_1 + 7);
  func_0x0001081240d4(param_1 + 6);
  return param_1;
}



/* Entry: 108126a7c; end: 108126b5f;  */

undefined8 * FUN_108126a7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10811e8f8();
  *puVar1 = &PTR_FUN_110a25c40;
  FUN_108376ad8(puVar1 + 0x3e);
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 0x3f800000;
  param_1[0x48] = 0x4080000000000000;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((long)param_1 + 0x284) = 0;
  *(undefined8 *)((long)param_1 + 0x27c) = 0;
  *(undefined4 *)((long)param_1 + 0x28c) = 0x3f800000;
  param_1[0x52] = 0x4080000000000000;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x56] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  return param_1;
}



/* Entry: 108126b60; end: 108126b63;  */

undefined8 * FUN_108126b60(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110a25c40;
  FUN_108126f94(param_1 + 0x57);
  FUN_108120a80(param_1 + 0x54);
  FUN_108375e94(param_1 + 0x4a);
  FUN_108375e94(param_1 + 0x40);
  FUN_10837ca38(param_1 + 0x3e);
  *param_1 = &PTR_FUN_110a25488;
  plVar1 = (long *)param_1[9];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  plVar2 = (long *)param_1[10];
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    func_0x00010813b754(*plVar1 + 0x10);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  func_0x0001003a8c94(param_1 + 0x3d);
  FUN_10837ca38(param_1 + 0x32);
  FUN_1081148cc(param_1 + 0x30);
  FUN_1081148cc(param_1 + 0x2e);
  FUN_1081148cc(param_1 + 0x2c);
  FUN_108121600(param_1 + 0x2b);
  func_0x0001081215bc(param_1 + 0x2a);
  FUN_108120a80(param_1 + 0x28);
  FUN_108120a80(param_1 + 0x26);
  if ((long *)param_1[0x16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x16] + 0x18))();
  }
  func_0x000108121598(param_1 + 0x13);
  FUN_108120b30(param_1 + 0xd);
  func_0x000108120bd4(param_1 + 9);
  func_0x000108120c94(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 108126b64; end: 108126b77;  */

void FUN_108126b64(void)

{
  func_0x000108126b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108126b78; end: 108126beb;  */

void FUN_108126b78(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) & 0xffffff7f | 0x41;
  *(uint *)(param_1 + 0x298) = *(uint *)(param_1 + 0x298) & 0xffffff3f | 1;
  FUN_108126bec(param_1,0);
  func_0x000108126c08(param_1,0);
  FUN_108126c24(param_1,0);
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  func_0x000108126c48(param_1);
  *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 108126bec; end: 108126c23;  */

void FUN_108126bec(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (uint)param_2;
  if (uVar1 < 3) {
    *(uint *)(param_1 + 0x248) = *(uint *)(param_1 + 0x248) & 0xfffffff3 | uVar1 << 2;
  }
  if (((*(byte *)(param_1 + 0x1d7) & 1) == 0) && ((*(byte *)(param_1 + 0x1d0) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x1d0) = 1;
    func_0x0001081148f4(param_1 + 0x180);
    func_0x0001081148f4(param_1 + 0x170);
    func_0x0001081228bc();
                    /* WARNING: Could not recover jumptable at 0x000108122988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)CONCAT44(uVar2,uVar1))();
    return;
  }
  return;
}


