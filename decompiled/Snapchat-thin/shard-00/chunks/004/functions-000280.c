/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100621640; end: 10062168b;  */

void FUN_100621640(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1006a248c();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10062168c; end: 10062177b;  */

void FUN_10062168c(long param_1)

{
  long *plVar1;
  long alStack_778 [77];
  byte bStack_510;
  long alStack_508 [77];
  byte bStack_2a0;
  undefined1 auStack_298 [632];
  
  FUN_100621640(param_1 + 0x128);
  FUN_1006217cc(auStack_298,*(undefined8 *)(param_1 + 0x50));
  func_0x00010062b470(alStack_508,auStack_298);
  func_0x000107c60ee4(alStack_778,0x270);
  while ((((bStack_2a0 & 1) != 0 || ((bStack_510 & 1) != 0)) && (alStack_508[0] != alStack_778[0])))
  {
    plVar1 = alStack_508;
    FUN_10062b56c();
    if ((((int)plVar1[0x13] == 0) && ((*(byte *)(plVar1 + 0x1f) & 1) == 0)) &&
       ((char)plVar1[0x17] == '\x01')) {
      func_0x000107c28ce8(param_1 + 0x128,plVar1 + 0x14);
    }
    FUN_1006219b8(alStack_508);
  }
  FUN_10062b818(alStack_778);
  FUN_10062b818(alStack_508);
  FUN_10062b84c(auStack_298);
  return;
}



/* Entry: 10062177c; end: 1006217cb;  */

void FUN_10062177c(long param_1)

{
  undefined1 auStack_d8 [112];
  undefined1 auStack_68 [72];
  
  FUN_10062168c();
  FUN_10062b9cc(auStack_d8,param_1 + 0x50);
  FUN_10062b428(auStack_68);
  return;
}



/* Entry: 1006217cc; end: 10062184b;  */

void FUN_1006217cc(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1006218f4();
  return;
}



/* Entry: 10062184c; end: 1006218f3;  */

long FUN_10062184c(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1006218c0;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1006218c0:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_10062184c();
  func_0x0001005ec788(extraout_x8);
  FUN_100621964();
  return param_1;
}



/* Entry: 1006218f4; end: 100621917;  */

void FUN_1006218f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_10062184c();
  func_0x0001005ec788(param_1);
  FUN_100621964(param_2,auStack_28);
  return;
}



/* Entry: 100621918; end: 100621963;  */

void FUN_100621918(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_100621964(param_1,auStack_28);
  return;
}



/* Entry: 100621964; end: 100621987;  */

void FUN_100621964(void)

{
  FUN_1005ec7e4();
  FUN_100621988();
  return;
}



/* Entry: 100621988; end: 1006219b7;  */

void FUN_100621988(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0x268) = 0;
  FUN_1006219b8();
  return;
}



/* Entry: 1006219b8; end: 100621a23;  */

void FUN_1006219b8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_280 [608];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_10054c3a4(), (int)lVar1 != 0)) {
    FUN_100622210(auStack_280,*param_1);
    func_0x00010062af28();
    FUN_10062b180();
    FUN_10062b3e0(auStack_280);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[0x4d] == '\x01') {
    FUN_10062b3e0();
    *(undefined1 *)(plVar2 + 0x4c) = 0;
  }
  return;
}



/* Entry: 100621a24; end: 10062218f;  */

undefined8 * FUN_100621a24(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  long unaff_x19;
  
  *param_1 = 0;
  piVar6 = *(int **)(unaff_x19 + 0x550);
  if (piVar6 != (int *)0x0) {
    do {
      iVar1 = *piVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar3) {
        *piVar6 = iVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(0,0x10015d490);
      (*pcVar4)();
    }
    piVar5 = (int *)*param_1;
    *param_1 = piVar6;
    if (piVar5 != (int *)0x0) {
      do {
        iVar1 = *piVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (**(code **)(piVar5 + 4))(piVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 100622190; end: 10062220f;  */

undefined8 * FUN_100622190(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_100561f40(&uStack_30);
  return param_1;
}



/* Entry: 100622210; end: 1006224af;  */

void FUN_100622210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_10054c7ec();
  FUN_10061f61c(param_1);
  FUN_10061f5a8(param_1 + 0x20,param_2,1);
  FUN_10061f678(param_1 + 0x38,param_2,2);
  uVar1 = param_2;
  FUN_10054c8f4(param_2,3);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  uVar1 = param_2;
  FUN_1006224ec(param_2,4);
  *(int *)(param_1 + 0x58) = (int)uVar1;
  *(char *)(param_1 + 0x5c) = (char)((ulong)uVar1 >> 0x20);
  uVar2 = 5;
  uVar1 = param_2;
  FUN_100622558();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x68) = uVar2;
  uVar2 = 6;
  uVar1 = param_2;
  FUN_100622558();
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined1 *)(param_1 + 0x78) = uVar2;
  uVar2 = 7;
  uVar1 = param_2;
  FUN_100622558();
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined1 *)(param_1 + 0x88) = uVar2;
  uVar1 = param_2;
  FUN_10054c8f4(param_2,8);
  *(int *)(param_1 + 0x90) = (int)uVar1;
  uVar1 = param_2;
  func_0x000100622570(param_2,9);
  *(char *)(param_1 + 0x94) = (char)uVar1;
  uVar1 = param_2;
  FUN_10054c8f4(param_2,10);
  *(int *)(param_1 + 0x98) = (int)uVar1;
  FUN_10061f61c(param_1 + 0xa0,param_2,0xb);
  FUN_10061f61c(param_1 + 0xc0,param_2,0xc);
  uVar2 = 0xd;
  uVar1 = param_2;
  FUN_100622558();
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  *(undefined1 *)(param_1 + 0xe8) = uVar2;
  uVar2 = 0xe;
  uVar1 = param_2;
  FUN_100622558();
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(undefined1 *)(param_1 + 0xf8) = uVar2;
  FUN_10062258c(param_1 + 0x100,param_2,0xf);
  uVar1 = param_2;
  FUN_10054c8f4(param_2,0x10);
  *(int *)(param_1 + 0x120) = (int)uVar1;
  uVar1 = param_2;
  FUN_10054c8f4(param_2,0x11);
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  FUN_100622624(param_1 + 0x130,param_2,0x12);
  uVar2 = 0x13;
  uVar1 = param_2;
  FUN_100622558();
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  *(undefined1 *)(param_1 + 0x170) = uVar2;
  FUN_10062b058(param_1 + 0x178,param_2,0x14);
  uVar1 = param_2;
  func_0x000100622570(param_2,0x15);
  *(char *)(param_1 + 0x1f8) = (char)uVar1;
  uVar2 = 0x16;
  uVar1 = param_2;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  *(undefined1 *)(param_1 + 0x208) = uVar2;
  uVar1 = param_2;
  FUN_10062b100(param_2,0x17);
  *(int *)(param_1 + 0x210) = (int)uVar1;
  *(char *)(param_1 + 0x214) = (char)((ulong)uVar1 >> 0x20);
  uVar1 = param_2;
  FUN_10062b15c(param_2,0x18);
  *(int *)(param_1 + 0x218) = (int)uVar1;
  *(char *)(param_1 + 0x21c) = (char)((ulong)uVar1 >> 0x20);
  uVar2 = 0x19;
  uVar1 = param_2;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x220) = uVar1;
  *(undefined1 *)(param_1 + 0x228) = uVar2;
  uVar2 = 0x1a;
  uVar1 = param_2;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x230) = uVar1;
  *(undefined1 *)(param_1 + 0x238) = uVar2;
  uVar2 = 0x1b;
  uVar1 = param_2;
  FUN_100622558();
  *(undefined8 *)(param_1 + 0x240) = uVar1;
  *(undefined1 *)(param_1 + 0x248) = uVar2;
  uVar2 = 0x1c;
  FUN_1005f9230();
  *(undefined8 *)(param_1 + 0x250) = param_2;
  *(undefined1 *)(param_1 + 600) = uVar2;
  return;
}



/* Entry: 1006224b0; end: 1006224bb;  */

void FUN_1006224b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_type_11034d010)();
  return;
}



/* Entry: 1006224bc; end: 1006224eb;  */

void FUN_1006224bc(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
    func_0x000100622510();
  }
  return;
}



/* Entry: 1006224ec; end: 100622503;  */

ulong FUN_1006224ec(ulong param_1)

{
  FUN_1006224bc();
  return param_1 & 0xffffffffff;
}



/* Entry: 100622504; end: 10062251f;  */

void FUN_100622504(void)

{
  FUN_10054c918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_11034cff8)();
  return;
}



/* Entry: 100622520; end: 100622557;  */

void FUN_100622520(int param_1)

{
  FUN_1006224b0();
  if (param_1 != 5) {
    FUN_100622504();
  }
  return;
}



/* Entry: 100622558; end: 10062258b;  */

void FUN_100622558(void)

{
  FUN_100622520();
  return;
}



/* Entry: 10062258c; end: 100622603;  */

void FUN_10062258c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = param_2;
  func_0x000107c61360();
  bVar1 = (int)uVar2 != 5;
  if (bVar1) {
    FUN_1005ecf0c(&uStack_48,param_2,param_3);
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[2] = uStack_38;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    func_0x000107c60ca0(&uStack_48);
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 100622604; end: 100622623;  */

void FUN_100622604(void)

{
  return;
}



/* Entry: 100622624; end: 100622677;  */

void FUN_100622624(int param_1)

{
  undefined1 *unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x000100622614();
  if (param_1 == 5) {
    *unaff_x19 = 0;
    unaff_x19[0x30] = 0;
  }
  else {
    FUN_100622684(auStack_60);
    func_0x00010062af28();
    FUN_10062af40();
    FUN_10062b018(auStack_60);
  }
  return;
}



/* Entry: 100622678; end: 100622683;  */

undefined8 * FUN_100622678(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1005ecf5c(&stack0x00000008);
  if ((int)param_2 == 4) {
    func_0x000107c61350();
    func_0x000107c6134c();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_10029a7f4();
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_2;
}



/* Entry: 100622684; end: 1006226bf;  */

void FUN_100622684(void)

{
  undefined1 auStack_38 [24];
  
  FUN_100622678();
  FUN_1006226c0(auStack_38);
  func_0x00010062af18();
  return;
}



/* Entry: 1006226c0; end: 10062270f;  */

void FUN_1006226c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_DAT_110cf3e18;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_10006369c(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}



/* Entry: 100622710; end: 100622743;  */

void FUN_100622710(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 100622744; end: 100622807;  */

undefined1  [16] FUN_100622744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *unaff_x20;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  func_0x000100622738(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  FUN_1000b693c(param_2,param_3);
  uVar2 = param_2;
  func_0x000100622884();
  func_0x000107c61574(param_2);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar3 = &DAT_10dd3bd30;
  uStack_48 = uVar2;
  func_0x000107c61520(&DAT_10dd3bd30,uVar1);
  puVar4 = &uStack_48;
  (*pcVar5)(puVar4,uVar1,puVar3);
  func_0x000107c61574(uVar2);
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = puVar4;
  return auVar7;
}



/* Entry: 100622808; end: 10062280b;  */

void FUN_100622808(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10062280c; end: 1006228bb;  */

void FUN_10062280c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c61524(param_1,0,2,&lStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 1006228bc; end: 10062298b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006228bc(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  func_0x000107c60188(0,lVar2);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c5eec4((long)unaff_x20 + _DAT_1138154a8);
  *(undefined8 *)((long)unaff_x20 + _DAT_1130956b0) = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,1,1,lVar2);
  func_0x000107c6157c(param_1);
  func_0x000100087f6c(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 10062298c; end: 10062299b;  */

void FUN_10062298c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar3 = 0;
  func_0x000107c60188(0,lVar2);
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b8 + (-8 - extraout_x8);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    pcStack_c0 = *(code **)(lVar1 + 0x60);
    uVar5 = uVar8;
    (*pcStack_c0)(uVar8,lVar1);
    FUN_10006c804();
    func_0x000107c61574(uVar5);
    lVar9 = *(long *)(lVar2 + -8);
    (**(code **)(lVar9 + 0x10))(puVar10,param_1,lVar2);
    (**(code **)(lVar9 + 0x38))(puVar10,0,1,lVar2);
    pcVar6 = (code *)auStack_98;
    uVar5 = uVar8;
    (**(code **)(lVar1 + 0x50))(pcVar6,uVar8,lVar1);
    pcVar7 = (code *)auStack_b8;
    func_0x000107c61564();
    (**(code **)(lVar11 + 0x28))(uVar5,puVar10,lVar3);
    (*pcVar7)(auStack_b8,0);
    (*pcVar6)(auStack_98,0);
    (**(code **)(lVar1 + 0x70))(uVar8,lVar1);
    (*pcStack_c0)(uVar8,lVar1);
    FUN_100070bfc();
    func_0x000107c615e8(lVar4);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 10062299c; end: 100622b3b;  */

void FUN_10062299c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  long extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  code *pcStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c60188(0,param_5);
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_b8 + (-8 - extraout_x8);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcStack_c0 = *(code **)(param_6 + 0x60);
    uVar2 = param_4;
    (*pcStack_c0)(param_4,param_6);
    FUN_10006c804();
    func_0x000107c61574(uVar2);
    lVar5 = *(long *)(param_5 + -8);
    (**(code **)(lVar5 + 0x10))(puVar6,param_1,param_5);
    (**(code **)(lVar5 + 0x38))(puVar6,0,1,param_5);
    pcVar3 = (code *)auStack_98;
    uVar2 = param_4;
    (**(code **)(param_6 + 0x50))(pcVar3,param_4,param_6);
    pcVar4 = (code *)auStack_b8;
    func_0x000107c61564();
    (**(code **)(lVar7 + 0x28))(uVar2,puVar6,lVar1);
    (*pcVar4)(auStack_b8,0);
    (*pcVar3)(auStack_98,0);
    (**(code **)(param_6 + 0x70))(param_4,param_6);
    (*pcStack_c0)(param_4,param_6);
    FUN_100070bfc();
    func_0x000107c615e8(param_2);
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 100622b3c; end: 100622b4b;  */

void FUN_100622b3c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)
            (*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)));
  return;
}



/* Entry: 100622b4c; end: 100622b8b;  */

undefined1  [16] FUN_100622b4c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x70);
  func_0x000107c61428((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = 0x100622b98;
  return auVar2;
}



/* Entry: 100622b8c; end: 100622b9f;  */

void FUN_100622b8c(void)

{
  return;
}



/* Entry: 100622ba0; end: 100622deb;  */

void FUN_100622ba0(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar10 = *unaff_x20;
  lVar7 = *(long *)(lVar10 + 0x50);
  lVar9 = *(long *)(lVar10 + 0x58);
  lVar6 = *(long *)(lVar10 + 0x60);
  lVar3 = 0xff;
  func_0x000107c61514(0xff,lVar7,lVar9,lVar6,0,0);
  lVar4 = 0;
  func_0x000107c60188(0,lVar3);
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar12 = auStack_b0 + -extraout_x8;
  puStack_68 = PTR___ss5NeverON_11034ee88;
  lVar4 = 0;
  lStack_98 = lVar7;
  lStack_90 = lVar9;
  lStack_88 = lVar6;
  lStack_80 = lVar7;
  lStack_78 = lVar9;
  lStack_70 = lVar6;
  FUN_10061efb8(0,&lStack_80);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar12 - extraout_x8_00;
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  lVar6 = *(long *)(lVar10 + 0x70);
  func_0x000107c61428((long)unaff_x20 + lVar6,&lStack_80,0,0);
  (**(code **)(lVar11 + 0x10))(lVar7,(long)unaff_x20 + lVar6,lVar4);
  FUN_10062317c(puVar12,lVar4);
  (**(code **)(lVar11 + 8))(lVar7,lVar4);
  puVar5 = puVar12;
  (**(code **)(lVar9 + 0x30))(puVar12,1,lVar3);
  if ((int)puVar5 == 1) {
    (**(code **)(lStack_a8 + 8))(puVar12,lStack_a0);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar14,puVar12,lVar3);
    iVar1 = *(int *)(lVar3 + 0x30);
    iVar2 = *(int *)(lVar3 + 0x40);
    (**(code **)(*(long *)(lStack_98 + -8) + 0x10))(lVar13,lVar14);
    (**(code **)(*(long *)(lStack_90 + -8) + 0x10))(lVar13 + iVar1,lVar14 + iVar1);
    (**(code **)(*(long *)(lStack_88 + -8) + 0x10))(lVar13 + iVar2,lVar14 + iVar2);
    func_0x000100087f6c(lVar13);
    pcVar8 = *(code **)(lVar9 + 8);
    (*pcVar8)(lVar13,lVar3);
    (*pcVar8)(lVar14,lVar3);
  }
  return;
}



/* Entry: 100622dec; end: 100622e1b;  */

void FUN_100622dec(void)

{
  return;
}



/* Entry: 100622e1c; end: 100622e3f;  */

void FUN_100622e1c(long param_1)

{
  func_0x000100622e10();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100622e40; end: 100622e47;  */

long FUN_100622e40(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd02c0;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 100622e48; end: 100622edb;  */

long FUN_100622e48(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cd02c0;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 100622edc; end: 100623177;  */

long FUN_100622edc(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar4);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    func_0x000107c610b4(param_1,param_2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + param_1) = *(undefined1 *)(lVar7 + param_2);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    func_0x000107c610b4(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x20);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    func_0x000107c610b4(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  lVar4 = *(long *)(param_3 + 0x28);
  lVar6 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar7 = lVar7 + uVar1 + 1;
  uVar5 = lVar7 + uVar5 & (uVar1 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + uVar2 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar1 == 0) {
    (**(code **)(lVar6 + 0x10))(uVar5,uVar2,lVar4);
    (**(code **)(lVar6 + 0x38))(uVar5,0,1,lVar4);
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x54);
    lVar7 = *(long *)(lVar6 + 0x40);
    lVar4 = lVar7;
    if (iVar3 == 0) {
      lVar4 = lVar7 + 1;
    }
    func_0x000107c610b4(uVar5,uVar2,lVar4);
  }
  if (iVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  *(undefined1 *)(lVar7 + uVar5) = *(undefined1 *)(lVar7 + uVar2);
  return param_1;
}



/* Entry: 100623178; end: 10062317b;  */

void FUN_100623178(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10062317c; end: 1006235bb;  */

void FUN_10062317c(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar8;
  code *pcVar9;
  long extraout_x12;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar10 = *(long *)(param_2 + 0x20);
  lVar3 = 0xff;
  func_0x000107c60188(0xff,lVar10);
  puVar2 = PTR___sSbN_11034dd40;
  lVar4 = 0;
  lStack_c0 = lVar3;
  func_0x000107c61510(0,lVar3,PTR___sSbN_11034dd40,"value completed ",0);
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lStack_98 = *(long *)(lVar10 + -8);
  lStack_90 = (long)&pcStack_d0 - extraout_x8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar6 = ((long)&pcStack_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_2 + 0x18);
  lVar3 = 0xff;
  lStack_c8 = lVar6;
  func_0x000107c60188(0xff,lVar15);
  lVar4 = 0;
  lStack_b8 = lVar3;
  func_0x000107c61510(0,lVar3,puVar2,"value completed ",0);
  lVar11 = *(long *)(lVar4 + -8);
  lStack_88 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_01;
  lStack_80 = *(long *)(lVar15 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar7 = lVar6 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(param_2 + 0x10);
  lVar4 = 0xff;
  lStack_b0 = lVar7;
  func_0x000107c60188(0xff,lVar14);
  lVar3 = 0;
  func_0x000107c61510(0,lVar4,puVar2,"value completed ",0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_03;
  lVar12 = *(long *)(lVar14 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar7 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar7);
  lVar3 = lVar7;
  (**(code **)(lVar12 + 0x30))(lVar7,1,lVar14);
  if ((int)lVar3 == 1) {
    (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar7,lVar4);
  }
  else {
    pcStack_d0 = *(code **)(lVar12 + 0x20);
    (*pcStack_d0)(lVar13,lVar7,lVar14);
    (**(code **)(lVar11 + 0x10))(lVar6,unaff_x20 + *(int *)(param_2 + 0x34),lStack_88);
    lVar4 = lVar6;
    (**(code **)(lStack_80 + 0x30))(lVar6,1,lVar15);
    lVar3 = lStack_b0;
    if ((int)lVar4 == 1) {
      (**(code **)(lVar12 + 8))(lVar13,lVar14);
      (**(code **)(*(long *)(lStack_b8 + -8) + 8))(lVar6);
    }
    else {
      pcVar8 = *(code **)(lStack_80 + 0x20);
      (*pcVar8)(lStack_b0,lVar6,lVar15);
      lVar7 = lStack_90;
      (**(code **)(lStack_a8 + 0x10))(lStack_90,unaff_x20 + *(int *)(param_2 + 0x38),lStack_a0);
      lVar6 = lStack_98;
      lVar11 = lVar7;
      (**(code **)(lStack_98 + 0x30))(lVar7,1);
      lVar4 = lStack_c8;
      if ((int)lVar11 != 1) {
        pcVar9 = *(code **)(lVar6 + 0x20);
        (*pcVar9)(lStack_c8,lVar7,lVar10);
        lVar6 = 0;
        func_0x000107c61514(0,lVar14,lVar15,lVar10,0,0);
        iVar1 = *(int *)(lVar6 + 0x30);
        lStack_80 = (long)*(int *)(lVar6 + 0x40);
        (*pcStack_d0)(param_1,lVar13,lVar14);
        (*pcVar8)(param_1 + iVar1,lVar3,lVar15);
        (*pcVar9)(param_1 + lStack_80,lVar4,lVar10);
        pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
        uVar5 = 0;
        goto LAB_1006234f8;
      }
      (**(code **)(lStack_80 + 8))(lVar3,lVar15);
      (**(code **)(lVar12 + 8))(lVar13,lVar14);
      (**(code **)(*(long *)(lStack_c0 + -8) + 8))(lVar7);
    }
  }
  lVar6 = 0;
  func_0x000107c61514(0,lVar14,lVar15,lVar10,0,0);
  pcVar8 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  uVar5 = 1;
LAB_1006234f8:
  (*pcVar8)(param_1,uVar5,1,lVar6);
  return;
}



/* Entry: 1006235bc; end: 1006235d3;  */

void FUN_1006235bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 1006235d4; end: 100623647;  */

void FUN_1006235d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b4ec8;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001006235c4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010062385c(&uStack_30);
  return;
}



/* Entry: 100623648; end: 10062368b; -[SCNGrpcUnifiedGrpcService .cxx_construct] */

undefined8 * FUN_100623648(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001006235c4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10062368c; end: 1006237e3;  */

void FUN_10062368c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar5 = *(long *)(lVar3 + -8);
  lVar4 = param_1;
  (**(code **)(lVar5 + 0x30))(param_1,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1,lVar3);
  }
  lVar4 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(lVar4 + -8);
  param_1 = param_1 + *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  uVar2 = param_1 + (ulong)*(byte *)(lVar3 + 0x50) + 1 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar7 = uVar2;
  (**(code **)(lVar3 + 0x30))(uVar2,1,lVar4);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar3 + 8))(uVar2,lVar4);
  }
  lVar5 = *(long *)(param_2 + 0x20);
  lVar6 = *(long *)(lVar5 + -8);
  lVar4 = uVar2 + *(long *)(lVar3 + 0x40);
  if (*(int *)(lVar3 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar2 = lVar4 + (ulong)*(byte *)(lVar6 + 0x50) + 1 &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  uVar7 = uVar2;
  (**(code **)(lVar6 + 0x30))(uVar2,1,lVar5);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar6 + 8))(uVar2,lVar5);
  }
  lVar3 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar4 = uVar2 + *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar2 = lVar4 + uVar7 + 1;
  uVar1 = uVar2 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x30))(uVar1,1,lVar3);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006237e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(uVar2 & (uVar7 ^ 0xffffffffffffffff),lVar3);
  return;
}



/* Entry: 1006237e4; end: 10062387f; -[SCNGrpcUnifiedGrpcService initWithCpp:] */

undefined1 * FUN_1006237e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127060e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x0001006235c4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010062385c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100623880; end: 1006238bf;  */

void FUN_100623880(void)

{
  return;
}



/* Entry: 1006238c0; end: 100623b17; -[SCGroupsDataUpdater loadGroupsIntoMemoryWithCompletion:completionQueue:] */

void FUN_1006238c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_78,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1006dbf74;
  puStack_98 = &UNK_110853200;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c61174(param_4);
  uStack_90 = param_4;
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_b0;
  uStack_88 = param_3;
  func_0x000107c61184();
  puVar2 = PTR_PTR_1126ba388;
  func_0x000107c610f4();
  func_0x000107c6111c(auStack_b8,auStack_78);
  func_0x000107c61174(ppuVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c48b58();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5dc64(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61120(auStack_b8);
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_90);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100623b18; end: 100623b8b; -[UNISCFideliusFideliusRecryptService initWithUnifiedGrpcService:] */

undefined1 * FUN_100623b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126eb088;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100623b8c; end: 100623bf7; -[SCNGrpcParamsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100623ba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100623bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100623bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100623bc0) */
/* WARNING: Removing unreachable block (ram,0x000100623ba8) */
/* WARNING: Removing unreachable block (ram,0x000100623bd8) */

void FUN_100623b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 100623bf8; end: 100623d27;  */

void FUN_100623bf8(int param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_2);
  if (param_1 == 0) {
    puVar3 = PTR_PTR_1126ae748;
    func_0x000107c3edf4(PTR_PTR_1126ae748);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c57f3c();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c52a1c();
    func_0x000107c61180();
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c47b5c();
    puVar4 = PTR_PTR_1126ae748;
    func_0x000107c3edf4(PTR_PTR_1126ae748);
    func_0x000107c61180();
    puVar1 = puVar4;
    func_0x000107c57f3c();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c52a1c();
    func_0x000107c61180();
    puVar5 = puVar2;
    func_0x000107c3d704();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100623d28; end: 100623e7f; -[SCArroyoListConversationsCallback initWithSucccessCallback:failureCallback:] */

undefined1 *
FUN_100623d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fac38;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100623e80; end: 100623e87; -[SCNativeMessagingSessionManager getNativeConversationManager] */

void FUN_100623e80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_getConversationManager_1125cea18);
  return;
}



/* Entry: 100623e88; end: 100623ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100623e88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_1138154a8;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x000100623ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100623ed4; end: 100623f4f; -[SCNMessagingSession getConversationManager] */

void FUN_100623ed4(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10060696c();
  FUN_1006069f0();
  FUN_100624040(auStack_30);
  func_0x000107c61180();
  func_0x0001005f2618();
  func_0x0001006241b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100623f50; end: 100623f8f;  */

void FUN_100623f50(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001006069f8();
  if (*(long *)(unaff_x19 + 8) == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    FUN_100606a48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
  return;
}



/* Entry: 100623f90; end: 100623fc7;  */

void FUN_100623f90(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  param_1[1] = *(undefined8 *)(param_2 + 0xe8);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004a0330(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 100623fc8; end: 10062403f;  */

void FUN_100623fc8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5c1d8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000100623fb8();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_10062406c);
  func_0x000107c61180();
  func_0x0001006241e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100624040; end: 10062406b;  */

void FUN_100624040(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100623fc8();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10062406c; end: 1006240df;  */

void FUN_10062406c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126da950;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000100623fb8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001006241b8(&uStack_30);
  return;
}



/* Entry: 1006240e0; end: 1006240f7; +[SCNGrpcCallOptionsBuilder builder] */

void FUN_1006240e0(void)

{
  func_0x000107c610f4();
  func_0x000107c45450();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006240f8; end: 100624137; -[SCNMessagingConversationManager .cxx_construct] */

undefined8 * FUN_1006240f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000100623fb8();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 100624138; end: 10062413f;  */

void FUN_100624138(void)

{
  return;
}



/* Entry: 100624140; end: 1006241db; -[SCNMessagingConversationManager initWithCpp:] */

undefined1 * FUN_100624140(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd280;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x000100623fb8();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001006241b8(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006241dc; end: 100624203;  */

void FUN_1006241dc(void)

{
  return;
}



/* Entry: 100624204; end: 100624287; -[SCNMessagingConversationManager listLocalConversations:] */

void FUN_100624204(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x0001006241f4();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_100624288();
  FUN_100624294();
  FUN_100624478(*(undefined8 *)(*plVar1 + 0x160));
  FUN_1006248d8(auStack_40);
  func_0x000100624928();
  return;
}



/* Entry: 100624288; end: 100624293;  */

void FUN_100624288(void)

{
  return;
}



/* Entry: 100624294; end: 10062434b;  */

void FUN_100624294(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_110a5e0e8;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10062434c);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10062444c(&uStack_50);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10062434c; end: 10062444b;  */

void FUN_10062434c(undefined8 *param_1,long *param_2)

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
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_110a5e128;
  puVar4[3] = &PTR_DAT_110a5e1a8;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
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
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_110a5e178;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10062444c(&uStack_50);
  return;
}



/* Entry: 10062444c; end: 100624477;  */

long FUN_10062444c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100624478; end: 10062449f;  */

void FUN_100624478(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100624480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1006244a0; end: 1006245df;  */

void FUN_1006244a0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x23;
  undefined *in_stack_00000078;
  code *in_stack_000000f0;
  undefined **in_stack_000000f8;
  undefined8 in_stack_00000150;
  
  func_0x000100624484();
  FUN_1006245e0();
  func_0x0001006245f8();
  func_0x000100624604();
  FUN_100624640();
  if (extraout_x8 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  func_0x000100624650();
  in_stack_00000078 = &UNK_10f4b0ff6;
  func_0x00010062465c(&stack0x00000048);
  FUN_1004b4e98();
  FUN_1006246d0();
  (*extraout_x8_00)();
  func_0x0001006246e8();
  FUN_100624740();
  FUN_100607368();
  func_0x00010062474c();
  func_0x000100624754();
  func_0x000100624764();
  func_0x000100624774();
  if (unaff_x23 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001006247a0();
  in_stack_000000f0 = FUN_1006b3cb0;
  in_stack_000000f8 = &PTR_FUN_110a74730;
  FUN_10055895c();
  func_0x0001006247dc();
  if (unaff_x23 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001006247f4();
  func_0x000100624834();
  FUN_100624864();
  FUN_100624880(&stack0x00000080);
  func_0x000100607a28();
  func_0x000100624904();
  FUN_1006248ac(&stack0x00000020);
  func_0x0001004a0084(in_stack_00000150);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_100624864();
    FUN_100624880(&stack0x00000080);
    func_0x000100607a28();
    func_0x000100624904();
    FUN_1006248ac(&stack0x00000020);
    func_0x000107c33930();
    return;
  }
  return;
}



/* Entry: 1006245e0; end: 10062460b;  */

void FUN_1006245e0(void)

{
  return;
}



/* Entry: 10062460c; end: 10062463f;  */

void FUN_10062460c(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  
  func_0x000100606f90();
  if (param_3 == 0) {
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  else {
    FUN_100606fd0();
    *(long *)(unaff_x19 + 8) = param_1;
    if (param_1 != 0) {
      return;
    }
  }
  func_0x00010527822c();
  return;
}



/* Entry: 100624640; end: 100624663;  */

void FUN_100624640(void)

{
  return;
}



/* Entry: 100624664; end: 1006246cf; -[SCNGrpcCallOptionsBuilder initPrivate] */

undefined1 * FUN_100624664(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701aa8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1006246d0; end: 1006246fb;  */

void FUN_1006246d0(void)

{
  return;
}



/* Entry: 1006246fc; end: 10062473f; -[SCNGrpcCallOptionsBuilder setRpcTimeoutInMs:] */

long FUN_1006246fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d964();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 100624740; end: 1006247eb;  */

void FUN_100624740(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  
  func_0x000100607184(0x1da,param_2,&stack0x00000048);
  FUN_1006071e0();
  FUN_1005e3578();
  func_0x000100607304();
  func_0x000100607310(*(undefined8 *)(extraout_x8 + 0x10));
  FUN_1005fe1e0();
  return;
}



/* Entry: 1006247ec; end: 100624843; -[SCNGrpcCallOptionsBuilder setAuth:] */

void FUN_1006247ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 100624844; end: 100624863;  */

void FUN_100624844(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100624880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100624864; end: 10062487f;  */

void FUN_100624864(void)

{
  long unaff_x23;
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x000100624870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(unaff_x29 + -0xb8))(unaff_x23 + 8);
  return;
}



/* Entry: 100624880; end: 1006248a3;  */

long FUN_100624880(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000100624874();
  FUN_1006248a4();
  func_0x000100558874();
  FUN_1006248d8();
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006248a4; end: 1006248ab;  */

long FUN_1006248a4(void)

{
  long unaff_x19;
  long lStack_28;
  
  lStack_28 = unaff_x19 + 0x38;
  FUN_10015b854(&lStack_28);
  return unaff_x19 + 0x38;
}



/* Entry: 1006248ac; end: 1006248cb;  */

long FUN_1006248ac(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000100558874();
  FUN_1006248d8();
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006248cc; end: 1006248d7;  */

undefined8 FUN_1006248cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1006248d8; end: 1006248fb;  */

void FUN_1006248d8(long param_1)

{
  FUN_1006248cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006248fc; end: 10062493f;  */

undefined8 FUN_1006248fc(long param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return in_stack_00000008;
}



/* Entry: 100624940; end: 100624a23; -[UNISCFideliusFideliusRecryptService pollRecryptWithRequest:callOptionsBuilder:handler:] */

/* WARNING: Possible PIC construction at 0x0001006249b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006249d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100624a00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006249d8) */
/* WARNING: Removing unreachable block (ram,0x0001006249b8) */
/* WARNING: Removing unreachable block (ram,0x000100624a04) */

void FUN_100624940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126ae988;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  puVar2 = PTR_PTR_1126c0760;
  func_0x000107c61158(PTR_PTR_1126c0760);
  func_0x000107c46c68(puVar1,param_2,param_5,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100624a24; end: 100624a77; -[SCNMessagingConversationManager .cxx_destruct] */

void FUN_100624a24(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5c1d8;
    FUN_1004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001006241b8((long *)(param_1 + 0x18));
  FUN_1004a5588(param_1 + 8);
  return;
}



/* Entry: 100624a78; end: 100624eab;  */

void FUN_100624a78(void)

{
  long unaff_x20;
  
  *(long *)(unaff_x20 + 0x188) = *(long *)(unaff_x20 + 0x188) + 1;
  return;
}



/* Entry: 100624eac; end: 100624f13; +[SCFideliusPollRecryptResponse descriptor] */

void FUN_100624eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c17e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a7e490,
                        &PTR____CFConstantStringClassReference_110e121d8,&PTR_DAT_11310ea18,
                        &PTR_DAT_11310ea70,1,0x10,0x1c);
    puRam00000001136c17e8 = puVar1;
  }
  return;
}



/* Entry: 100624f14; end: 100624f9b; -[SCNGrpcUnaryEventHandlerImpl initWithHandler:responseClass:] */

undefined1 *
FUN_100624f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112701a90;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100624f9c; end: 100624fd7;  */

long * FUN_100624f9c(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)param_1[3];
  if (pbVar1 != (byte *)param_1[4]) {
    bVar2 = *pbVar1;
    param_1[3] = (long)(pbVar1 + 1);
    return (long *)(ulong)bVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000100624fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return param_1;
}



/* Entry: 100624fd8; end: 10062501b;  */

void FUN_100624fd8(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10062501c; end: 100625037;  */

void FUN_10062501c(void)

{
  return;
}



/* Entry: 100625038; end: 100625097;  */

void FUN_100625038(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x40;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x40);
  }
  *puVar1 = &PTR_DAT_110cfb300;
  puVar1[1] = param_1;
  puVar1[2] = &DAT_11383d918;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  return;
}



/* Entry: 100625098; end: 10062509f;  */

void FUN_100625098(void)

{
  return;
}


