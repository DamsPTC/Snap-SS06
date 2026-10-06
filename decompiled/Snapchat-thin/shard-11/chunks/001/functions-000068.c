/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080fab60; end: 1080fab83;  */

void FUN_1080fab60(void)

{
  return;
}



/* Entry: 1080fab84; end: 1080fabb3;  */

void FUN_1080fab84(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fb978();
  func_0x000108128518();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fabb4; end: 1080fabd7;  */

void FUN_1080fabb4(void)

{
  return;
}



/* Entry: 1080fabd8; end: 1080fac1b;  */

void FUN_1080fabd8(void)

{
  undefined8 uStack_28;
  
  func_0x0001080fb838();
  func_0x0001080fb89c();
  if (uStack_28 == 0) {
    func_0x0001080fb7dc();
  }
  else {
    func_0x0001080fb8f8();
    func_0x0001080f9e20();
  }
  func_0x0001080fb8c4();
  func_0x0001080fb8a8();
  return;
}



/* Entry: 1080fac1c; end: 1080fac3f;  */

void FUN_1080fac1c(void)

{
  return;
}



/* Entry: 1080fac40; end: 1080fac6f;  */

void FUN_1080fac40(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  FUN_1080f9ef0();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fac70; end: 1080fac93;  */

void FUN_1080fac70(void)

{
  return;
}



/* Entry: 1080fac94; end: 1080faceb;  */

void FUN_1080fac94(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int extraout_w10;
  long *unaff_x19;
  long lStack_38;
  
  func_0x0001080fb96c();
  if (unaff_x19 != (long *)0x0) {
    do {
      func_0x0001080fb918();
    } while (extraout_w10 != 0);
  }
  func_0x0001080fb72c();
  if (lStack_38 == 0) {
    func_0x0001080fb8cc();
  }
  else {
    func_0x0001080fb908();
    FUN_1080f9f1c();
  }
  func_0x0001080fb940();
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  plVar1 = unaff_x19 + 1;
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
    if (unaff_x19 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080facec; end: 1080fad0f;  */

void FUN_1080facec(void)

{
  return;
}



/* Entry: 1080fad10; end: 1080fad3f;  */

void FUN_1080fad10(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fb978();
  func_0x0001081285a8();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fad40; end: 1080fad63;  */

void FUN_1080fad40(void)

{
  return;
}



/* Entry: 1080fad64; end: 1080fada7;  */

void FUN_1080fad64(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = *param_2;
  func_0x0001080fb72c();
  if (lStack_38 != 0) {
    FUN_1081286c0(lStack_38,uVar1);
  }
  func_0x0001080fb7dc();
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fada8; end: 1080fadcb;  */

void FUN_1080fada8(void)

{
  return;
}



/* Entry: 1080fadcc; end: 1080fadff;  */

void FUN_1080fadcc(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  FUN_1081286c0(lStack_28,1);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fae00; end: 1080fae23;  */

void FUN_1080fae00(void)

{
  return;
}



/* Entry: 1080fae24; end: 1080fae67;  */

void FUN_1080fae24(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lStack_38;
  
  uVar1 = *param_2;
  func_0x0001080fb72c();
  if (lStack_38 != 0) {
    func_0x0001081286d8(lStack_38,uVar1);
  }
  func_0x0001080fb7dc();
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fae68; end: 1080fae8b;  */

void FUN_1080fae68(void)

{
  return;
}



/* Entry: 1080fae8c; end: 1080faebb;  */

void FUN_1080fae8c(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fb978();
  func_0x0001081286d8();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080faebc; end: 1080faedf;  */

void FUN_1080faebc(void)

{
  return;
}



/* Entry: 1080faee0; end: 1080faf23;  */

void FUN_1080faee0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lStack_38;
  
  uVar1 = *param_2;
  func_0x0001080fb72c();
  if (lStack_38 != 0) {
    func_0x0001081286f0(uVar1,lStack_38);
  }
  func_0x0001080fb7dc();
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080faf24; end: 1080faf47;  */

void FUN_1080faf24(void)

{
  return;
}



/* Entry: 1080faf48; end: 1080faf7b;  */

void FUN_1080faf48(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001081286f0(0,lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080faf7c; end: 1080faf9f;  */

void FUN_1080faf7c(void)

{
  return;
}



/* Entry: 1080fafa0; end: 1080fafe3;  */

void FUN_1080fafa0(undefined8 param_1,double *param_2)

{
  double dVar1;
  long lStack_38;
  
  dVar1 = *param_2;
  func_0x0001080fb72c();
  if (lStack_38 != 0) {
    func_0x000108128788((float)dVar1,lStack_38);
  }
  func_0x0001080fb7dc();
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fafe4; end: 1080fb007;  */

void FUN_1080fafe4(void)

{
  return;
}



/* Entry: 1080fb008; end: 1080fb03b;  */

void FUN_1080fb008(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x000108128788(0,lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fb03c; end: 1080fb05f;  */

void FUN_1080fb03c(void)

{
  return;
}



/* Entry: 1080fb060; end: 1080fb0a3;  */

void FUN_1080fb060(undefined8 param_1,double *param_2)

{
  double dVar1;
  long lStack_38;
  
  dVar1 = *param_2;
  func_0x0001080fb72c();
  if (lStack_38 != 0) {
    func_0x00010812872c((float)dVar1,lStack_38);
  }
  func_0x0001080fb7dc();
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fb0a4; end: 1080fb0c7;  */

void FUN_1080fb0a4(void)

{
  return;
}



/* Entry: 1080fb0c8; end: 1080fb0fb;  */

void FUN_1080fb0c8(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x00010812872c(0x3f800000,lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fb0fc; end: 1080fb11f;  */

void FUN_1080fb0fc(void)

{
  return;
}



/* Entry: 1080fb120; end: 1080fb163;  */

void FUN_1080fb120(undefined8 param_1,double *param_2)

{
  double dVar1;
  long lStack_38;
  
  dVar1 = *param_2;
  func_0x0001080fb72c();
  if (lStack_38 != 0) {
    func_0x000108128744((float)dVar1,lStack_38);
  }
  func_0x0001080fb7dc();
  if (lStack_38 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fb164; end: 1080fb187;  */

void FUN_1080fb164(void)

{
  return;
}



/* Entry: 1080fb188; end: 1080fb1b7;  */

void FUN_1080fb188(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x00010812876c(lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fb1b8; end: 1080fb1db;  */

void FUN_1080fb1b8(void)

{
  return;
}



/* Entry: 1080fb1dc; end: 1080fb23f;  */

void FUN_1080fb1dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001080fb838();
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  FUN_1080fa7d0(&lStack_38,*param_1);
  if (lStack_38 == 0) {
    func_0x0001080fb7dc();
  }
  else {
    FUN_1080f9f94(uVar1,lStack_38,auStack_48);
  }
  func_0x0001080fb8c4();
  func_0x0001080fb8a8();
  return;
}



/* Entry: 1080fb240; end: 1080fb263;  */

void FUN_1080fb240(void)

{
  return;
}



/* Entry: 1080fb264; end: 1080fb293;  */

void FUN_1080fb264(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x00010812866c(lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fb294; end: 1080fb2b7;  */

void FUN_1080fb294(void)

{
  return;
}



/* Entry: 1080fb2b8; end: 1080fb2fb;  */

void FUN_1080fb2b8(void)

{
  undefined8 uStack_28;
  
  func_0x0001080fb838();
  func_0x0001080fb89c();
  if (uStack_28 == 0) {
    func_0x0001080fb7dc();
  }
  else {
    func_0x0001080fb8f8();
    FUN_1080fa094();
  }
  func_0x0001080fb8c4();
  func_0x0001080fb8a8();
  return;
}



/* Entry: 1080fb2fc; end: 1080fb31f;  */

void FUN_1080fb2fc(void)

{
  return;
}



/* Entry: 1080fb320; end: 1080fb34f;  */

void FUN_1080fb320(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  if (lStack_28 == 0) {
    return;
  }
  FUN_1081284c0(lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fb350; end: 1080fb373;  */

void FUN_1080fb350(void)

{
  return;
}



/* Entry: 1080fb374; end: 1080fb39b;  */

void FUN_1080fb374(void)

{
  long lStack_28;
  
  func_0x0001080fb72c();
  func_0x0001080fb7dc();
  if (lStack_28 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fb39c; end: 1080fb3bf;  */

void FUN_1080fb39c(void)

{
  return;
}



/* Entry: 1080fb3c0; end: 1080fb3db;  */

void FUN_1080fb3c0(void)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  func_0x0001080fb72c();
  if (lStack_18 != 0) {
    puVar1 = (undefined8 *)(lStack_18 + 8);
    lStack_18 = *(undefined8 *)(lStack_18 + 0x10);
    uStack_20 = *puVar1;
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080fb3dc; end: 1080fb3ff;  */

void FUN_1080fb3dc(void)

{
  return;
}



/* Entry: 1080fb400; end: 1080fb443;  */

void FUN_1080fb400(undefined8 *param_1)

{
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00010b9a8f04(auStack_38);
  FUN_1080fa7d0(&uStack_28,*param_1);
  func_0x0001080fb8cc();
  func_0x0001078ce460(uStack_28);
  func_0x0001080fb8a8();
  return;
}



/* Entry: 1080fb444; end: 1080fb467;  */

void FUN_1080fb444(void)

{
  return;
}



/* Entry: 1080fb468; end: 1080fb483;  */

void FUN_1080fb468(void)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  func_0x0001080fb72c();
  if (lStack_18 != 0) {
    puVar1 = (undefined8 *)(lStack_18 + 8);
    lStack_18 = *(undefined8 *)(lStack_18 + 0x10);
    uStack_20 = *puVar1;
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080fb484; end: 1080fb4a7;  */

void FUN_1080fb484(void)

{
  return;
}



/* Entry: 1080fb4a8; end: 1080fb4f7;  */

void FUN_1080fb4a8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 uStack_28;
  
  func_0x0001080fb96c();
  if (unaff_x19 != (long *)0x0) {
    plVar1 = unaff_x19 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001080fb72c();
  func_0x0001080fb8cc();
  func_0x0001078ce460(uStack_28);
  if (unaff_x19 != (long *)0x0) {
    plVar1 = unaff_x19 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x000104bdb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080fb4f8; end: 1080fb51b;  */

void FUN_1080fb4f8(void)

{
  return;
}



/* Entry: 1080fb51c; end: 1080fb537;  */

void FUN_1080fb51c(void)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  long lStack_18;
  
  func_0x0001080fb72c();
  if (lStack_18 != 0) {
    puVar1 = (undefined8 *)(lStack_18 + 8);
    lStack_18 = *(undefined8 *)(lStack_18 + 0x10);
    uStack_20 = *puVar1;
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1080fb538; end: 1080fb5bb;  */

void FUN_1080fb538(void)

{
  return;
}



/* Entry: 1080fb5bc; end: 1080fb5eb;  */

undefined1 * FUN_1080fb5bc(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((param_1 != (undefined1 *)0x0) &&
     (puVar2 = param_1, func_0x00010b9a5818(), ((ulong)puVar2 & 1) == 0)) {
    func_0x00010b9a5890();
    if (puVar2 != (undefined1 *)0x0) {
      puVar1 = &uStack_40;
      pcStack_28 = FUN_1080fb5ec;
      uStack_38 = *(undefined8 *)(puVar2 + 0x10);
      uStack_40 = *(undefined8 *)(puVar2 + 8);
      puStack_30 = &stack0xfffffffffffffff0;
      func_0x0001003a90c4(&uStack_40);
      return (undefined1 *)puVar1;
    }
    return (undefined1 *)0x0;
  }
  return param_1;
}



/* Entry: 1080fb5ec; end: 1080fb5fb;  */

void FUN_1080fb5ec(long param_1)

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



/* Entry: 1080fb5fc; end: 1080fb60f;  */

void FUN_1080fb5fc(void)

{
  FUN_1080fb6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fb610; end: 1080fb61f;  */

void FUN_1080fb610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080fb618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080fb620; end: 1080fb6bb;  */

void FUN_1080fb620(void)

{
  func_0x0001080fb960();
  return;
}



/* Entry: 1080fb6bc; end: 1080fb983;  */

void FUN_1080fb6bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a22868;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080fb984; end: 1080fb9ff;  */

undefined8 * FUN_1080fb984(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_28;
  
  lStack_28 = *param_3;
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1080fd008(param_1,param_2,&UNK_10f47b002,&UNK_10f47b013,&lStack_28,0);
  func_0x0001080ed580(lStack_28);
  *param_1 = &PTR_FUN_110a228f8;
  return param_1;
}



/* Entry: 1080fba00; end: 1080fba03;  */

undefined8 * FUN_1080fba00(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a22c48;
  func_0x0001080fd160(param_1 + 5);
  func_0x000107475310(param_1 + 2);
  return param_1;
}



/* Entry: 1080fba04; end: 1080fba17;  */

void FUN_1080fba04(void)

{
  func_0x0001080fd064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fba18; end: 1080fc0ef;  */

void FUN_1080fba18(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0x320;
  __Znwm();
  plVar5 = puVar4 + 1;
  *plVar5 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a22978;
  puVar1 = puVar4 + 3;
  FUN_1080fd188(puVar1,param_2 + 0x10);
  if ((puVar4[5] == 0) || (*(long *)(puVar4[5] + 8) == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_50 = puVar1;
    puStack_48 = puVar4;
    func_0x0001003a8180(puVar4 + 4,&puStack_50);
    func_0x0001003a824c(&puStack_50);
  }
  (**(code **)(puVar4[3] + 0x20))(puVar1);
  if (puVar4[5] != 0) {
    plVar5 = (long *)(puVar4[5] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = (long)puVar1;
  func_0x0001080fc128(puVar1);
  return;
}



/* Entry: 1080fc0f0; end: 1080fc0f3;  */

void FUN_1080fc0f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a22978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1080fc0f4; end: 1080fc107;  */

void FUN_1080fc0f4(void)

{
  func_0x0001080fc118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080fc108; end: 1080fc133;  */

void FUN_1080fc108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001080fc110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1080fc134; end: 1080fc233;  */

void FUN_1080fc134(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lStack_40;
  char cStack_38;
  byte bStack_37;
  long lStack_30;
  long lStack_28;
  
  func_0x0001080fcf34();
  func_0x0001080fcf80();
  if (lStack_30 != 0) {
    lStack_28 = 0;
    if (((cStack_38 == '\n') && ((bStack_37 & 1) != 0)) && (lStack_28 = lStack_40, lStack_40 != 0))
    {
      plVar1 = (long *)(lStack_40 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001080fd298(lStack_30,&lStack_28);
    func_0x000104bdb3b0(lStack_28);
  }
  func_0x0001080fced0();
  func_0x0001080fc128();
  func_0x00010b9a8d98(&lStack_40);
  return;
}



/* Entry: 1080fc234; end: 1080fc257;  */

void FUN_1080fc234(void)

{
  return;
}



/* Entry: 1080fc258; end: 1080fc2ab;  */

void FUN_1080fc258(undefined8 *param_1)

{
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001080fc1d4(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    uStack_28 = 0;
    func_0x0001080fd298(lStack_30,&uStack_28);
    func_0x000104bdb3b0(uStack_28);
  }
  func_0x0001080fc128(lStack_30);
  return;
}



/* Entry: 1080fc2ac; end: 1080fc2cf;  */

void FUN_1080fc2ac(void)

{
  return;
}



/* Entry: 1080fc2d0; end: 1080fc317;  */

void FUN_1080fc2d0(long param_1,double *param_2)

{
  double dVar1;
  long lStack_48;
  
  func_0x0001080fcf74();
  dVar1 = *param_2;
  func_0x0001080fce1c();
  if (lStack_48 != 0) {
    func_0x0001080fcfb8((float)dVar1);
    func_0x0001080fce68();
    FUN_1080fcbbc();
  }
  func_0x0001080fced0();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fc318; end: 1080fc33b;  */

void FUN_1080fc318(void)

{
  return;
}



/* Entry: 1080fc33c; end: 1080fc37b;  */

void FUN_1080fc33c(undefined8 param_1,undefined8 param_2)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fcfb8();
  func_0x0001080fce94(0x3f800000,param_2,lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fc37c; end: 1080fc39f;  */

void FUN_1080fc37c(void)

{
  return;
}



/* Entry: 1080fc3a0; end: 1080fc3e3;  */

void FUN_1080fc3a0(long param_1)

{
  long lStack_38;
  
  func_0x0001080fcf74();
  func_0x0001080fce1c();
  if (lStack_38 != 0) {
    func_0x0001080fcfa4();
    func_0x0001080fce68();
    func_0x0001080fbfdc();
  }
  func_0x0001080fced0();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fc3e4; end: 1080fc407;  */

void FUN_1080fc3e4(void)

{
  return;
}



/* Entry: 1080fc408; end: 1080fc443;  */

void FUN_1080fc408(void)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fcfa4();
  func_0x0001080fcea0();
  func_0x0001080fbfdc();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fc444; end: 1080fc467;  */

void FUN_1080fc444(void)

{
  return;
}



/* Entry: 1080fc468; end: 1080fc4ab;  */

void FUN_1080fc468(long param_1)

{
  long lStack_38;
  
  func_0x0001080fcf74();
  func_0x0001080fce1c();
  if (lStack_38 != 0) {
    func_0x0001080fcff4();
    func_0x0001080fce68();
    func_0x0001080fbfdc();
  }
  func_0x0001080fced0();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fc4ac; end: 1080fc4cf;  */

void FUN_1080fc4ac(void)

{
  return;
}



/* Entry: 1080fc4d0; end: 1080fc50b;  */

void FUN_1080fc4d0(void)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fcff4();
  func_0x0001080fcea0();
  func_0x0001080fbfdc();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fc50c; end: 1080fc52f;  */

void FUN_1080fc50c(void)

{
  return;
}



/* Entry: 1080fc530; end: 1080fc703;  */

void FUN_1080fc530(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *unaff_x19;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  long lStack_a0;
  char cStack_98;
  long lStack_90;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar10 = (undefined4)((ulong)param_1 >> 0x20);
  fVar9 = (float)param_1;
  func_0x0001080fcf34();
  func_0x0001080fcf80();
  lVar5 = lStack_90;
  if (lStack_90 == 0) {
    *unaff_x19 = 1;
  }
  else {
    if ((cStack_98 == '\t' && lStack_a0 != 0) && (*(long *)(lStack_a0 + 0x10) == 4)) {
      if (*(char *)(lStack_a0 + 0x20) == '\t') {
        lVar8 = *(long *)(lStack_a0 + 0x18);
      }
      else {
        lVar8 = 0;
      }
      if (*(char *)(lStack_a0 + 0x30) == '\t') {
        lVar7 = *(long *)(lStack_a0 + 0x28);
      }
      else {
        lVar7 = 0;
      }
      lVar2 = lStack_a0 + 0x38;
      func_0x00010b9a9518(lVar2);
      uVar3 = lStack_a0 + 0x48;
      func_0x00010b9a9608();
      if ((lVar8 != 0) && (lVar7 != 0)) {
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_68 = 0;
        FUN_1080f2af4(&uStack_68,*(undefined8 *)(lVar8 + 0x10));
        lVar1 = lVar8 + 0x18;
        for (lVar8 = *(long *)(lVar8 + 0x10) << 4; lVar8 != 0; lVar8 = lVar8 + -0x10) {
          uVar6 = (uint)lVar1;
          func_0x00010b9a9588();
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar6 >> 8 | uVar6 << 0x18);
          func_0x0001080f2b60(&uStack_68,&uStack_80);
          lVar1 = lVar1 + 0x10;
        }
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        func_0x0001073b504c(&uStack_80,*(undefined8 *)(lVar7 + 0x10));
        lVar8 = lVar7 + 0x18;
        for (lVar7 = *(long *)(lVar7 + 0x10) << 4; lVar7 != 0; lVar7 = lVar7 + -0x10) {
          func_0x00010b9a92f0(lVar8);
          fVar9 = (float)(double)CONCAT44(uVar10,fVar9);
          uVar10 = 0;
          fStack_84 = fVar9;
          func_0x0001074c4f8c(&uStack_80,&fStack_84);
          lVar8 = lVar8 + 0x10;
        }
        if ((uVar3 & 1) == 0) {
          func_0x000108126e00(lVar5,&uStack_80,&uStack_68,lVar2);
        }
        else {
          func_0x000108126e84();
        }
        *unaff_x19 = 1;
        FUN_1080f3394(&uStack_80);
        FUN_1080f33d8(&uStack_68);
        lVar5 = lStack_90;
        goto LAB_1080fc5b8;
      }
      puVar4 = &UNK_10f47b07c;
    }
    else {
      puVar4 = &UNK_10f47b057;
    }
    func_0x00010b99f5f8(&uStack_68,puVar4);
    *unaff_x19 = 2;
    unaff_x19[1] = uStack_68;
  }
LAB_1080fc5b8:
  func_0x0001080fc128(lVar5);
  func_0x00010b9a8d98(&lStack_a0);
  return;
}



/* Entry: 1080fc704; end: 1080fc727;  */

void FUN_1080fc704(void)

{
  return;
}



/* Entry: 1080fc728; end: 1080fc757;  */

void FUN_1080fc728(void)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  FUN_108126f00(lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fc758; end: 1080fc77b;  */

void FUN_1080fc758(void)

{
  return;
}



/* Entry: 1080fc77c; end: 1080fc857;  */

void FUN_1080fc77c(undefined8 *param_1,ulong param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_48;
  undefined8 auStack_40 [2];
  
  lVar5 = *param_3;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001080fce1c();
  if (lStack_48 != 0) {
    func_0x0001080fce40("butt");
    if ((param_2 & 1) == 0) {
      func_0x0001080fce40("round");
      if ((param_2 & 1) == 0) {
        func_0x0001080fce40("square");
        if ((param_2 & 1) == 0) {
          func_0x00010b99f5f8(auStack_40,&UNK_10f47b032);
          *param_1 = 2;
          param_1[1] = auStack_40[0];
          goto LAB_1080fc820;
        }
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
    FUN_108126bec(lStack_48,uVar4);
  }
  *param_1 = 1;
LAB_1080fc820:
  func_0x0001080fc128(lStack_48);
  func_0x0001003a8cb8(lVar5);
  return;
}



/* Entry: 1080fc858; end: 1080fc87b;  */

void FUN_1080fc858(void)

{
  return;
}



/* Entry: 1080fc87c; end: 1080fc8a7;  */

void FUN_1080fc87c(void)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fcf98();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fc8a8; end: 1080fc8cb;  */

void FUN_1080fc8a8(void)

{
  return;
}



/* Entry: 1080fc8cc; end: 1080fc9a7;  */

void FUN_1080fc8cc(undefined8 *param_1,ulong param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_48;
  undefined8 auStack_40 [2];
  
  lVar5 = *param_3;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001080fce1c();
  if (lStack_48 != 0) {
    func_0x0001080fce40("bevel");
    if ((param_2 & 1) == 0) {
      func_0x0001080fce40("miter");
      if ((param_2 & 1) == 0) {
        func_0x0001080fce40("round");
        if ((param_2 & 1) == 0) {
          func_0x00010b99f5f8(auStack_40,&UNK_10f47b044);
          *param_1 = 2;
          param_1[1] = auStack_40[0];
          goto LAB_1080fc970;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 2;
    }
    func_0x000108126c08(lStack_48,uVar4);
  }
  *param_1 = 1;
LAB_1080fc970:
  func_0x0001080fc128(lStack_48);
  func_0x0001003a8cb8(lVar5);
  return;
}



/* Entry: 1080fc9a8; end: 1080fc9cb;  */

void FUN_1080fc9a8(void)

{
  return;
}



/* Entry: 1080fc9cc; end: 1080fc9f7;  */

void FUN_1080fc9cc(void)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fcf98();
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fc9f8; end: 1080fca1b;  */

void FUN_1080fc9f8(void)

{
  return;
}



/* Entry: 1080fca1c; end: 1080fca63;  */

void FUN_1080fca1c(long param_1,double *param_2)

{
  double dVar1;
  long lStack_48;
  
  func_0x0001080fcf74();
  dVar1 = *param_2;
  func_0x0001080fce1c();
  if (lStack_48 != 0) {
    func_0x0001080fcfe0((float)dVar1);
    func_0x0001080fce68();
    FUN_1080fcbbc();
  }
  func_0x0001080fced0();
  if (param_1 != 0) {
    func_0x0001003a90c4(&stack0xffffffffffffffe0);
    return;
  }
  return;
}



/* Entry: 1080fca64; end: 1080fca87;  */

void FUN_1080fca64(void)

{
  return;
}



/* Entry: 1080fca88; end: 1080fcac7;  */

void FUN_1080fca88(undefined8 param_1,undefined8 param_2)

{
  long lStack_28;
  
  func_0x0001080fce1c();
  if (lStack_28 == 0) {
    return;
  }
  func_0x0001080fcfe0();
  func_0x0001080fce94(0,param_2,lStack_28);
  func_0x0001003a90c4(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 1080fcac8; end: 1080fcaeb;  */

void FUN_1080fcac8(void)

{
  return;
}


