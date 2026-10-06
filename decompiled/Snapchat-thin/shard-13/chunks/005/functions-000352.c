/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a772954; end: 10a772ddb;  */

void FUN_10a772954(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6771fe,0xb);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c18ee0;
  pppuVar2 = (undefined8 ***)&UNK_10f674def;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x124;
  uStack_50 = 0x13c;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c18ee0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,&DAT_10f3111e1,FUN_10a7abb48,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10a7abe2c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,&UNK_10f6750ed,FUN_10a7abf20,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10a7abff4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,"resume",FUN_10a7ac0c8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,&UNK_10f6750f8,FUN_10a7ac19c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,&UNK_10f6750ff,FUN_10a7ac270,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a772dbc;
    FUN_10a054dac(param_1,&UNK_10f675107,FUN_10a7ac330,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6584f4,FUN_10a7ac3f0,FUN_10a7ac4c4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f675111,FUN_10a7ac62c,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uVar10 = *(ulong *)(lVar3 + -0x18);
    uStack_58 = (undefined4)*(undefined8 *)(lVar3 + -0x20);
    uStack_54 = (undefined4)((ulong)*(undefined8 *)(lVar3 + -0x20) >> 0x20);
    uStack_50 = (undefined4)uVar10;
    uStack_4c = (undefined4)(uVar10 >> 0x20);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uVar10 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6771fe,0xb);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a772dbc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a772dc0);
  (*pcVar6)();
}



/* Entry: 10a772ddc; end: 10a772e63;  */

undefined8 * FUN_10a772ddc(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_110c17610;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  FUN_10ad1e05c(param_1 + 9);
  return param_1;
}



/* Entry: 10a772e64; end: 10a772ebf;  */

undefined8 * FUN_10a772e64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c17610;
  param_1[9] = &PTR_FUN_110c6e7c0;
  func_0x00010a7a2c40(param_1 + 10);
  FUN_10a7ac764(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a772ec0; end: 10a772ec3;  */

undefined8 * FUN_10a772ec0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c17610;
  param_1[9] = &PTR_FUN_110c6e7c0;
  func_0x00010a7a2c40(param_1 + 10);
  FUN_10a7ac764(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a772ec4; end: 10a772ed7;  */

void FUN_10a772ec4(void)

{
  FUN_10a772e64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a772ed8; end: 10a772f83;  */

long * FUN_10a772ed8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a772f84(&plStack_30);
  if (plStack_30 == (long *)0x0) {
    plStack_30 = (long *)0xffffffffffffffff;
  }
  else {
    (**(code **)(*plStack_30 + 0x10))(plStack_30,*param_2 + 0x30,param_3);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return plStack_30;
}



/* Entry: 10a772f84; end: 10a772fd7;  */

void FUN_10a772f84(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0x18) + 0x1c8);
  (**(code **)(*plVar1 + 0x40))();
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      *param_1 = *plVar1;
    }
  }
  return;
}



/* Entry: 10a772fd8; end: 10a773073;  */

void FUN_10a772fd8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a772f84(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    (**(code **)(*plStack_30 + 0x18))(plStack_30,param_2);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10a773074; end: 10a77311b;  */

undefined8 FUN_10a773074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a772f84(&plStack_40);
  if (plStack_40 == (long *)0x0) {
    param_1 = 0;
  }
  else {
    (**(code **)(*plStack_40 + 0x20))(plStack_40,param_3);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a77311c; end: 10a7731c3;  */

undefined8 FUN_10a77311c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a772f84(&plStack_40);
  if (plStack_40 == (long *)0x0) {
    param_1 = 0;
  }
  else {
    (**(code **)(*plStack_40 + 0x30))(plStack_40,param_3);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a7731c4; end: 10a773273;  */

long * FUN_10a7731c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a772f84(&plStack_40);
  if (plStack_40 == (long *)0x0) {
    plStack_40 = (long *)0x0;
  }
  else {
    (**(code **)(*plStack_40 + 0x38))(param_1,plStack_40,param_3);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return plStack_40;
}



/* Entry: 10a773274; end: 10a773323;  */

void FUN_10a773274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a772f84(&plStack_40);
  if (plStack_40 != (long *)0x0) {
    (**(code **)(*plStack_40 + 0x60))(param_1,plStack_40,param_3);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 10a773324; end: 10a7733cb;  */

undefined8 FUN_10a773324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_40;
  long *plStack_38;
  
  FUN_10a772f84(&plStack_40);
  if (plStack_40 == (long *)0x0) {
    param_1 = 0;
  }
  else {
    (**(code **)(*plStack_40 + 0x68))(plStack_40,param_3);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return param_1;
}



/* Entry: 10a7733cc; end: 10a77347f;  */

long * FUN_10a7733cc(undefined8 param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a772f84(&plStack_30);
  if (plStack_30 == (long *)0x0) {
    plStack_30 = (long *)0x0;
  }
  else {
    (**(code **)(*plStack_30 + 0x40))
              (plStack_30,param_2,(int)(short)((short)param_3 - (ushort)(0 < param_3)));
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return plStack_30;
}



/* Entry: 10a773480; end: 10a77351f;  */

long * FUN_10a773480(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a772f84(&plStack_30);
  if (plStack_30 == (long *)0x0) {
    plStack_30 = (long *)0x0;
  }
  else {
    (**(code **)(*plStack_30 + 0x58))(plStack_30,param_2);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return plStack_30;
}



/* Entry: 10a773520; end: 10a7735bf;  */

long * FUN_10a773520(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a772f84(&plStack_30);
  if (plStack_30 == (long *)0x0) {
    plStack_30 = (long *)0x0;
  }
  else {
    (**(code **)(*plStack_30 + 0x28))(plStack_30,param_2);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return plStack_30;
}



/* Entry: 10a7735c0; end: 10a77365f;  */

long * FUN_10a7735c0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a772f84(&plStack_30);
  if (plStack_30 == (long *)0x0) {
    plStack_30 = (long *)0x0;
  }
  else {
    (**(code **)(*plStack_30 + 0x48))(plStack_30,param_2);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return plStack_30;
}



/* Entry: 10a773660; end: 10a7736ff;  */

long * FUN_10a773660(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plStack_30;
  long *plStack_28;
  
  FUN_10a772f84(&plStack_30);
  if (plStack_30 == (long *)0x0) {
    plStack_30 = (long *)0x0;
  }
  else {
    (**(code **)(*plStack_30 + 0x50))(plStack_30,param_2);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return plStack_30;
}



/* Entry: 10a773700; end: 10a773773;  */

void FUN_10a773700(long param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  if ((*(long *)(param_1 + 0x38) != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
    func_0x00010ae06f08(1,2,&UNK_10f67511e,&UNK_10f675159,0x7e,&UNK_10f6751cf);
  }
  FUN_10a7ac804(param_1 + 0x20,&uStack_28,&uStack_28);
  return;
}



/* Entry: 10a773774; end: 10a7738f7;  */

undefined8 *
FUN_10a773774(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,long param_4,int param_5,
             uint param_6,uint param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  uint *puVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110c18ff0;
  *(int *)(param_1 + 1) = (int)param_4;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = param_8;
  *(undefined8 *)((long)param_1 + 0x14) = 0x100000000;
  *(undefined4 *)((long)param_1 + 0x1c) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  puVar7 = (uint *)((long)param_1 + 0x24);
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  puVar7[0] = 0;
  puVar7[1] = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  uStack_60 = *param_2;
  uStack_68 = 0;
  FUN_10a7a2c98(param_1 + 0xd,&uStack_68,&lStack_58,1);
  param_1[0x11] = *param_2;
  param_1[0x10] = *param_2;
  *(bool *)((long)param_1 + 0x21) = param_5 == 3;
  iVar5 = 0;
  if (param_5 == 3) {
    *puVar7 = param_7;
  }
  else if (((0x26 < (int)param_4 - 0x30U) && (param_5 != 1)) && (param_6 != 0)) {
    if (param_6 <= param_7) {
      param_7 = param_6;
    }
    iVar5 = 1 << (ulong)(param_7 & 0x1f);
  }
  *(int *)((long)param_1 + 0x14) = iVar5;
  FUN_10a0962c8();
  param_1[3] = param_4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  FUN_10a7a2e48(param_1 + 7);
  func_0x00010a0523dc(param_1 + 5);
  __Unwind_Resume();
  plVar6 = *(long **)(param_4 + 0x28);
  if (plVar6 == (long *)0x0) {
    puVar4 = *(undefined8 **)(param_4 + 0x80);
  }
  else {
    plVar3 = plVar6;
    (**(code **)(*plVar6 + 0x28))();
    uVar1 = (uint)plVar3;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    (**(code **)(*plVar6 + 0x30))();
    uVar2 = (uint)plVar6;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    puVar4 = (undefined8 *)CONCAT44(uVar2,uVar1);
  }
  return puVar4;
}



/* Entry: 10a7738f8; end: 10a773953;  */

undefined8 FUN_10a7738f8(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 == (long *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x80);
  }
  else {
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x28))();
    uVar1 = (uint)plVar3;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    (**(code **)(*plVar5 + 0x30))();
    uVar2 = (uint)plVar5;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar4 = CONCAT44(uVar2,uVar1);
  }
  return uVar4;
}



/* Entry: 10a773954; end: 10a773b1b;  */

void FUN_10a773954(long param_1,uint *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  
  lVar10 = *(long *)(param_1 + 0x68);
  if (*(long *)(param_1 + 0x70) != lVar10) {
    lVar14 = 0;
    uVar11 = 0;
    do {
      puVar1 = (ulong *)(lVar10 + lVar14);
      uVar4 = (uint)puVar1[1];
      uVar5 = *(uint *)((long)puVar1 + 0xc);
      uVar3 = (uint)*puVar1;
      uVar6 = *(uint *)((long)puVar1 + 4);
      if ((int)uVar3 <= (int)uVar4 && (int)uVar6 <= (int)uVar5) {
        uVar2 = *param_2;
        if ((int)*param_2 <= (int)uVar3) {
          uVar2 = uVar3;
        }
        uVar3 = param_2[1];
        if ((int)param_2[1] <= (int)uVar6) {
          uVar3 = uVar6;
        }
        if ((int)param_2[2] <= (int)uVar4) {
          uVar4 = param_2[2];
        }
        if ((int)param_2[3] <= (int)uVar5) {
          uVar5 = param_2[3];
        }
        if ((int)uVar2 < (int)uVar4 && (int)uVar3 < (int)uVar5) {
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          FUN_10a773b1c(param_1,uVar11);
          iVar12 = (int)uVar8;
          iVar13 = (int)uVar7;
          iVar9 = (int)(uVar8 >> 0x20);
          if ((iVar13 < iVar12) && ((int)uVar5 < iVar9)) {
            FUN_10a773b6c(param_1,uVar7 & 0xffffffff | (ulong)uVar5 << 0x20,uVar8,1);
          }
          iVar15 = (int)(uVar7 >> 0x20);
          if ((iVar13 < iVar12) && (iVar15 < (int)uVar3)) {
            FUN_10a773b6c(param_1,uVar7,uVar8 & 0xffffffff | (ulong)uVar3 << 0x20,1);
          }
          if ((iVar13 < (int)uVar2) && (iVar15 < iVar9)) {
            FUN_10a773b6c(param_1,uVar7,uVar8 & 0xffffffff00000000 | (ulong)uVar2,1);
          }
          if (((int)uVar4 < iVar12) && (iVar15 < iVar9)) {
            FUN_10a773b6c(param_1,uVar7 & 0xffffffff00000000 | (ulong)uVar4,uVar8,1);
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar10 = *(long *)(param_1 + 0x68);
      lVar14 = lVar14 + 0x10;
    } while (uVar11 < (ulong)(*(long *)(param_1 + 0x70) - lVar10 >> 4));
  }
  *(float *)(param_1 + 0x90) =
       *(float *)(param_1 + 0x90) +
       (float)(int)((param_2[3] - param_2[1]) * (param_2[2] - *param_2)) /
       (float)(*(int *)(param_1 + 0x84) * *(int *)(param_1 + 0x80));
  return;
}



/* Entry: 10a773b1c; end: 10a773b6b;  */

void FUN_10a773b1c(long param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iStack_14;
  
  iStack_14 = param_2;
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4)) {
    piVar1 = (int *)(*(long *)(param_1 + 0x68) + (long)param_2 * 0x10);
    piVar1[2] = *piVar1 + -1;
    func_0x000108a5413c(param_1 + 0x38,&iStack_14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a773b6c);
  (*pcVar2)();
}



/* Entry: 10a773b6c; end: 10a773cbb;  */

void FUN_10a773b6c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_2;
  uStack_58 = param_3;
  if (param_4 != 0) {
    lVar9 = *(long *)(param_1 + 0x68);
    lVar8 = *(long *)(param_1 + 0x70);
    if (lVar8 != lVar9) {
      lVar11 = 0;
      uVar10 = 0;
      do {
        piVar1 = (int *)(lVar9 + lVar11);
        iVar2 = piVar1[2];
        iVar4 = piVar1[3];
        iVar3 = *piVar1;
        iVar5 = piVar1[1];
        if (iVar3 <= iVar2 && iVar5 <= iVar4) {
          iVar12 = (int)((ulong)param_2 >> 0x20);
          iVar13 = (int)((ulong)param_3 >> 0x20);
          if (((iVar3 <= (int)param_2 && iVar5 <= iVar12) && (int)param_3 <= iVar2) &&
              iVar13 <= iVar4) {
            return;
          }
          if ((((int)param_2 <= iVar3 && iVar12 <= iVar5) && iVar2 <= (int)param_3) &&
              iVar4 <= iVar13) {
            FUN_10a773b1c(param_1,uVar10);
            lVar9 = *(long *)(param_1 + 0x68);
            lVar8 = *(long *)(param_1 + 0x70);
          }
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while (uVar10 < (ulong)(lVar8 - lVar9 >> 4));
    }
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    FUN_10a774be0(param_1 + 0x68,&uStack_60);
    return;
  }
  uVar10 = (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)) - 1;
  uVar10 = (ulong)*(int *)(*(long *)(*(long *)(param_1 + 0x40) + (uVar10 >> 10) * 8) +
                          (uVar10 & 0x3ff) * 4);
  if (uVar10 < (ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 4)) {
    puVar6 = (undefined8 *)(*(long *)(param_1 + 0x68) + uVar10 * 0x10);
    puVar6[1] = uStack_58;
    *puVar6 = uStack_60;
    if (*(long *)(param_1 + 0x60) != 0) {
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + -1;
      lVar8 = *(long *)(param_1 + 0x48);
      lVar9 = 0;
      if (lVar8 != *(long *)(param_1 + 0x40)) {
        lVar9 = (lVar8 - *(long *)(param_1 + 0x40)) * 0x80 + -1;
      }
      if (0x7ff < (ulong)(lVar9 - (*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0x58)))) {
        __ZdlPv(*(undefined8 *)(lVar8 + -8));
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -8;
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a773cbc);
  (*pcVar7)();
}



/* Entry: 10a773cbc; end: 10a77468b;  */

void FUN_10a773cbc(undefined8 param_1,uint *param_2,long *param_3,long *****param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  long *****ppppplVar19;
  uint uVar20;
  long ****pppplVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  long *plVar31;
  long *****ppppplVar32;
  uint uVar33;
  uint uVar34;
  long *****unaff_x19;
  long *plVar35;
  long *plVar36;
  ulong uVar37;
  long *****ppppplVar38;
  long ****pppplVar39;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  float fStack_80;
  long ****pppplStack_78;
  long ****pppplStack_70;
  long ****pppplStack_68;
  
  pppplStack_78 = (long ****)0x0;
  pppplStack_70 = (long ****)0x0;
  pppplStack_68 = (long ****)0x0;
  plStack_98 = (long *)0x0;
  lStack_a0 = 0;
  lStack_88 = 0;
  plStack_90 = (long *)0x0;
  fStack_80 = 1.0;
  pppplVar39 = *param_4;
  pppplVar21 = param_4[1];
  if (pppplVar21 != pppplVar39) {
    uVar37 = 0;
LAB_10a773d24:
    pppplVar4 = pppplVar39 + uVar37 * 2;
    if ((*(int *)pppplVar4 <= *(int *)(pppplVar4 + 1) &&
         *(int *)((long)pppplVar4 + 4) <= *(int *)((long)pppplVar4 + 0xc)) &&
       (plVar35 = (long *)param_3[2], plVar35 != (long *)0x0)) {
      uVar18 = 0;
LAB_10a773d48:
      plVar14 = plStack_98;
      if (uVar37 < (ulong)((long)param_4[1] - (long)*param_4 >> 4)) {
        pppplVar39 = *param_4 + uVar37 * 2;
        iVar9 = *(int *)((long)pppplVar39 + 4);
        iVar10 = *(int *)((long)plVar35 + 0x1c);
        if ((iVar9 == iVar10) ||
           (*(int *)((long)pppplVar39 + 0xc) == *(int *)((long)plVar35 + 0x14))) {
          iVar25 = *(int *)pppplVar39;
          iVar27 = (int)plVar35[3];
          if (iVar25 < iVar27) {
            bVar1 = (int)plVar35[2] < *(int *)(pppplVar39 + 1);
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
          iVar25 = *(int *)pppplVar39;
          iVar27 = (int)plVar35[3];
        }
        if (iVar25 == iVar27) {
          if (iVar9 < iVar10) goto LAB_10a773dc8;
LAB_10a773df0:
          bVar2 = false;
        }
        else {
          if (iVar10 <= iVar9 || *(int *)(pppplVar39 + 1) != (int)plVar35[2]) goto LAB_10a773df0;
LAB_10a773dc8:
          bVar2 = *(int *)((long)plVar35 + 0x14) < *(int *)((long)pppplVar39 + 0xc);
        }
        if (bVar1 || bVar2) {
          plVar13 = (long *)param_3[1];
          uVar15 = (long)plVar13 - 1;
          uVar29 = 0;
          do {
            uVar18 = (uint)plVar35[2];
            uVar20 = (uint)plVar35[3];
            uVar24 = (uint)pppplVar39[1];
            uVar23 = (uint)*pppplVar39;
            uVar26 = (uint)((ulong)plVar35[2] >> 0x20);
            uVar28 = (uint)((ulong)plVar35[3] >> 0x20);
            uVar33 = (uint)((ulong)*pppplVar39 >> 0x20);
            uVar34 = (uint)((ulong)pppplVar39[1] >> 0x20);
            uVar8 = uVar33;
            uVar6 = uVar26;
            uVar7 = uVar24;
            uVar11 = uVar20;
            if (uVar29 == 0) {
              uVar8 = uVar34;
              uVar6 = uVar28;
              uVar7 = uVar23;
              uVar11 = uVar18;
              uVar34 = uVar33;
              uVar28 = uVar26;
              uVar23 = uVar24;
              uVar18 = uVar20;
            }
            if ((int)uVar18 <= (int)uVar23) {
              uVar18 = uVar23;
            }
            if ((int)uVar28 <= (int)uVar34) {
              uVar28 = uVar34;
            }
            if ((int)uVar11 <= (int)uVar7) {
              uVar7 = uVar11;
            }
            if ((int)uVar6 <= (int)uVar8) {
              uVar8 = uVar6;
            }
            uVar6 = uVar7;
            uVar11 = uVar8;
            if (uVar29 == 0) {
              uVar6 = uVar18;
              uVar18 = uVar7;
              uVar11 = uVar28;
            }
            unaff_x19 = (long *****)(ulong)uVar6;
            if (uVar29 == 0) {
              uVar28 = uVar8;
            }
            if (((int)uVar18 < (int)uVar6) && ((int)uVar11 < (int)uVar28)) {
              uVar30 = (long)(int)uVar18 + 0x9e3779b9;
              uVar30 = (long)(int)uVar11 + 0x9e3779b9 + uVar30 * 0x40 + (uVar30 >> 2) ^ uVar30;
              uVar3 = (long)(int)uVar6 + 0x9e3779b9;
              plVar36 = (long *)(uVar30 * 0x40 + 0x9e3779b9 + (uVar30 >> 2) +
                                 ((long)(int)uVar28 + 0x9e3779b9 + uVar3 * 0x40 + (uVar3 >> 2) ^
                                 uVar3) ^ uVar30);
              if (plVar13 != (long *)0x0) {
                if (((ulong)plVar13 & uVar15) == 0) {
                  plVar31 = (long *)((long)plVar13 + 0x3fffffffffffU & (ulong)plVar36);
                }
                else {
                  plVar31 = plVar36;
                  if (plVar13 <= plVar36) {
                    uVar30 = 0;
                    if (plVar13 != (long *)0x0) {
                      uVar30 = (ulong)plVar36 / (ulong)plVar13;
                    }
                    plVar31 = (long *)((long)plVar36 - uVar30 * (long)plVar13);
                  }
                }
                plVar16 = *(long **)(*param_3 + (long)plVar31 * 8);
                if (plVar16 != (long *)0x0) {
                  do {
                    while( true ) {
                      plVar16 = (long *)*plVar16;
                      if (plVar16 == (long *)0x0) goto LAB_10a773f74;
                      plVar17 = (long *)plVar16[1];
                      if (plVar17 == plVar36) break;
                      if (((ulong)plVar13 & uVar15) == 0) {
                        plVar17 = (long *)((ulong)plVar17 & uVar15);
                      }
                      else if (plVar13 <= plVar17) {
                        uVar30 = 0;
                        if (plVar13 != (long *)0x0) {
                          uVar30 = (ulong)plVar17 / (ulong)plVar13;
                        }
                        plVar17 = (long *)((long)plVar17 - uVar30 * (long)plVar13);
                      }
                      if (plVar17 != plVar31) goto LAB_10a773f74;
                    }
                  } while ((*(uint *)(plVar16 + 2) != uVar18 ||
                            *(uint *)((long)plVar16 + 0x14) != uVar11) ||
                          (*(uint *)(plVar16 + 3) != uVar6 ||
                           *(uint *)((long)plVar16 + 0x1c) != uVar28));
                  goto LAB_10a773f68;
                }
              }
LAB_10a773f74:
              uVar29 = uVar18;
              if ((int)uVar18 <= (int)*param_2) {
                uVar29 = *param_2;
              }
              uVar7 = uVar11;
              if ((int)uVar11 <= (int)param_2[1]) {
                uVar7 = param_2[1];
              }
              uVar8 = param_2[2];
              if ((int)uVar6 <= (int)param_2[2]) {
                uVar8 = uVar6;
              }
              uVar34 = param_2[3];
              if ((int)uVar28 <= (int)param_2[3]) {
                uVar34 = uVar28;
              }
              if ((int)uVar8 <= (int)uVar29 || (int)uVar34 <= (int)uVar7) goto LAB_10a77417c;
              plVar13 = param_3;
              if (plStack_98 == (long *)0x0) goto LAB_10a774050;
              uVar15 = (long)plStack_98 - 1;
              if (((ulong)plStack_98 & uVar15) == 0) {
                plVar13 = (long *)((long)plStack_98 + 0x3fffffffffffU & (ulong)plVar36);
              }
              else {
                plVar13 = plVar36;
                if (plStack_98 <= plVar36) {
                  uVar30 = 0;
                  if (plStack_98 != (long *)0x0) {
                    uVar30 = (ulong)plVar36 / (ulong)plStack_98;
                  }
                  plVar13 = (long *)((long)plVar36 - uVar30 * (long)plStack_98);
                }
              }
              plVar31 = *(long **)(lStack_a0 + (long)plVar13 * 8);
              if (plVar31 != (long *)0x0) goto LAB_10a773ff0;
              goto LAB_10a774050;
            }
LAB_10a773f68:
            uVar18 = 1;
            bVar1 = uVar29 == 0;
            uVar29 = uVar18;
          } while (bVar1);
        }
        goto LAB_10a774180;
      }
      goto LAB_10a77463c;
    }
    goto LAB_10a774280;
  }
  goto LAB_10a774370;
  while( true ) {
    if (((ulong)plStack_98 & uVar15) == 0) {
      plVar16 = (long *)((ulong)plVar16 & uVar15);
    }
    else if (plStack_98 <= plVar16) {
      uVar30 = 0;
      if (plStack_98 != (long *)0x0) {
        uVar30 = (ulong)plVar16 / (ulong)plStack_98;
      }
      plVar16 = (long *)((long)plVar16 - uVar30 * (long)plStack_98);
    }
    if (plVar16 != plVar13) break;
LAB_10a773ff0:
    plVar31 = (long *)*plVar31;
    if (plVar31 == (long *)0x0) break;
    plVar16 = (long *)plVar31[1];
    if (plVar16 == plVar36) {
      if ((*(uint *)(plVar31 + 2) == uVar18 && *(uint *)((long)plVar31 + 0x14) == uVar11) &&
         (*(uint *)(plVar31 + 3) == uVar6 && *(uint *)((long)plVar31 + 0x1c) == uVar28)) {
        uVar18 = 1;
        goto LAB_10a774180;
      }
      goto LAB_10a773ff0;
    }
  }
LAB_10a774050:
  plVar31 = (long *)0x20;
  __Znwm();
  *plVar31 = 0;
  plVar31[1] = (long)plVar36;
  plVar31[2] = CONCAT44(uVar11,uVar18);
  plVar31[3] = CONCAT44(uVar28,uVar6);
  if ((plVar14 == (long *)0x0) || (fStack_80 * (float)plVar14 < (float)(lStack_88 + 1))) {
    uVar15 = 1;
    if ((long *)0x2 < plVar14) {
      uVar15 = (ulong)(((ulong)plVar14 & (long)plVar14 - 1U) != 0);
    }
    uVar15 = uVar15 | (long)plVar14 << 1;
    uVar30 = (ulong)((float)(lStack_88 + 1) / fStack_80);
    if (uVar15 <= uVar30) {
      uVar15 = uVar30;
    }
    FUN_10a7acf10(&lStack_a0,uVar15);
    plVar14 = plStack_98;
    if (((ulong)plStack_98 & (long)plStack_98 - 1U) == 0) {
      plVar13 = (long *)((long)plStack_98 + 0x3fffffffffffU & (ulong)plVar36);
    }
    else {
      plVar13 = plVar36;
      if (plStack_98 <= plVar36) {
        uVar15 = 0;
        if (plStack_98 != (long *)0x0) {
          uVar15 = (ulong)plVar36 / (ulong)plStack_98;
        }
        plVar13 = (long *)((long)plVar36 - uVar15 * (long)plStack_98);
      }
    }
  }
  plVar36 = *(long **)(lStack_a0 + (long)plVar13 * 8);
  if (plVar36 == (long *)0x0) {
    *plVar31 = (long)plStack_90;
    plStack_90 = plVar31;
    *(long ***)(lStack_a0 + (long)plVar13 * 8) = &plStack_90;
    if (*plVar31 == 0) goto LAB_10a774170;
    plVar13 = *(long **)(*plVar31 + 8);
    if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
      plVar13 = (long *)((ulong)plVar13 & (long)plVar14 - 1U);
    }
    else if (plVar14 <= plVar13) {
      uVar15 = 0;
      if (plVar14 != (long *)0x0) {
        uVar15 = (ulong)plVar13 / (ulong)plVar14;
      }
      plVar13 = (long *)((long)plVar13 - uVar15 * (long)plVar14);
    }
    plVar36 = (long *)(lStack_a0 + (long)plVar13 * 8);
  }
  else {
    *plVar31 = *plVar36;
  }
  *plVar36 = (long)plVar31;
LAB_10a774170:
  lStack_88 = lStack_88 + 1;
LAB_10a77417c:
  uVar18 = 1;
LAB_10a774180:
  plVar35 = (long *)*plVar35;
  if (plVar35 == (long *)0x0) goto LAB_10a774198;
  goto LAB_10a773d48;
LAB_10a774198:
  pppplVar39 = *param_4;
  pppplVar21 = param_4[1];
  if ((param_5 & uVar18) != 0) {
    if ((ulong)((long)pppplVar21 - (long)pppplVar39 >> 4) <= uVar37) {
LAB_10a77463c:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10a774640);
      (*pcVar12)();
    }
    unaff_x19 = (long *****)(pppplVar39 + uVar37 * 2);
    if (*(int *)unaff_x19 <= *(int *)(unaff_x19 + 1) &&
        *(int *)((long)unaff_x19 + 4) <= *(int *)((long)unaff_x19 + 0xc)) {
      if (pppplStack_70 < pppplStack_68) {
        pppplVar39 = *unaff_x19;
        pppplStack_70[1] = (long ***)unaff_x19[1];
        *pppplStack_70 = (long ***)pppplVar39;
        unaff_x19 = (long *****)(pppplStack_70 + 2);
        pppplStack_70 = (long ****)unaff_x19;
      }
      else {
        lVar22 = (long)pppplStack_70 - (long)pppplStack_78;
        uVar15 = (lVar22 >> 4) + 1;
        if (uVar15 >> 0x3c != 0) {
          FUN_10a7a2e00();
          goto LAB_10a77463c;
        }
        uVar30 = (long)pppplStack_68 - (long)pppplStack_78 >> 3;
        if (uVar30 <= uVar15) {
          uVar30 = uVar15;
        }
        if (0x7fffffffffffffef < (ulong)((long)pppplStack_68 - (long)pppplStack_78)) {
          uVar30 = 0xfffffffffffffff;
        }
        ppppplVar38 = &pppplStack_78;
        FUN_10a7a2e14();
        puVar5 = (undefined8 *)((long)ppppplVar38 + lVar22);
        pppplVar39 = *unaff_x19;
        puVar5[1] = unaff_x19[1];
        *puVar5 = pppplVar39;
        unaff_x19 = (long *****)(puVar5 + 2);
        ppppplVar19 = (long *****)((long)puVar5 - ((long)pppplStack_70 - (long)pppplStack_78));
        _memcpy(ppppplVar19);
        bVar1 = (long *****)pppplStack_78 != (long *****)0x0;
        pppplStack_78 = (long ****)ppppplVar19;
        pppplStack_70 = (long ****)unaff_x19;
        pppplStack_68 = (long ****)(ppppplVar38 + uVar30 * 2);
        if (bVar1) {
          __ZdlPv();
          pppplStack_70 = (long ****)unaff_x19;
        }
      }
    }
    FUN_10a773b1c(param_1,uVar37);
    pppplVar39 = *param_4;
    pppplVar21 = param_4[1];
  }
LAB_10a774280:
  uVar37 = uVar37 + 1;
  plVar35 = plStack_90;
  if ((ulong)((long)pppplVar21 - (long)pppplVar39 >> 4) <= uVar37) goto LAB_10a774294;
  goto LAB_10a773d24;
LAB_10a774294:
  if (plVar35 != (long *)0x0) {
    plVar13 = (long *)param_3[2];
    plVar14 = plStack_90;
    while (plStack_90 = plVar14, plVar13 != (long *)0x0) {
      while( true ) {
        if (((int)plVar13[2] <= (int)plVar35[2] &&
             *(int *)((long)plVar13 + 0x14) <= *(int *)((long)plVar35 + 0x14)) &&
           ((int)plVar35[3] <= (int)plVar13[3] &&
            *(int *)((long)plVar35 + 0x1c) <= *(int *)((long)plVar13 + 0x1c))) {
          plVar14 = &lStack_a0;
          func_0x00010a7ad128(plVar14,plVar35);
          plVar35 = plVar14;
          goto LAB_10a774294;
        }
        if (((int)plVar35[2] <= (int)plVar13[2] &&
             *(int *)((long)plVar35 + 0x14) <= *(int *)((long)plVar13 + 0x14)) &&
           ((int)plVar13[3] <= (int)plVar35[3] &&
            *(int *)((long)plVar13 + 0x1c) <= *(int *)((long)plVar35 + 0x1c))) break;
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_10a774308;
      }
      plVar13 = param_3;
      func_0x00010a7ad128();
      plVar14 = plStack_90;
    }
LAB_10a774308:
    while (plVar14 != (long *)0x0) {
      if (((plVar35 == plVar14) ||
          ((int)plVar14[2] < (int)plVar35[2] ||
           *(int *)((long)plVar14 + 0x14) < *(int *)((long)plVar35 + 0x14))) ||
         ((int)plVar35[3] < (int)plVar14[3] ||
          *(int *)((long)plVar35 + 0x1c) < *(int *)((long)plVar14 + 0x1c))) {
        plVar14 = (long *)*plVar14;
      }
      else {
        plVar14 = &lStack_a0;
        func_0x00010a7ad128();
      }
    }
    plVar35 = (long *)*plVar35;
    goto LAB_10a774294;
  }
LAB_10a774370:
  if (lStack_88 != 0) {
    if (plStack_90 != (long *)0x0) {
      plVar35 = param_3 + 2;
      ppppplVar38 = (long *****)param_3[1];
      plVar14 = plStack_90;
      do {
        ppppplVar19 = (long *****)(plVar14 + 2);
        FUN_10a7acec0();
        if (ppppplVar38 != (long *****)0x0) {
          uVar37 = (long)ppppplVar38 - 1;
          if (((ulong)ppppplVar38 & uVar37) == 0) {
            unaff_x19 = (long *****)(uVar37 & (ulong)ppppplVar19);
          }
          else {
            unaff_x19 = ppppplVar19;
            if (ppppplVar38 <= ppppplVar19) {
              uVar15 = 0;
              if (ppppplVar38 != (long *****)0x0) {
                uVar15 = (ulong)ppppplVar19 / (ulong)ppppplVar38;
              }
              unaff_x19 = (long *****)((long)ppppplVar19 - uVar15 * (long)ppppplVar38);
            }
          }
          plVar13 = *(long **)(*param_3 + (long)unaff_x19 * 8);
          if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
            do {
              ppppplVar32 = (long *****)plVar13[1];
              if (ppppplVar32 == ppppplVar19) {
                if (((int)plVar13[2] == (int)plVar14[2] &&
                     *(int *)((long)plVar13 + 0x14) == *(int *)((long)plVar14 + 0x14)) &&
                   ((int)plVar13[3] == (int)plVar14[3] &&
                    *(int *)((long)plVar13 + 0x1c) == *(int *)((long)plVar14 + 0x1c)))
                goto LAB_10a77456c;
              }
              else {
                if (((ulong)ppppplVar38 & uVar37) == 0) {
                  ppppplVar32 = (long *****)((ulong)ppppplVar32 & uVar37);
                }
                else if (ppppplVar38 <= ppppplVar32) {
                  uVar15 = 0;
                  if (ppppplVar38 != (long *****)0x0) {
                    uVar15 = (ulong)ppppplVar32 / (ulong)ppppplVar38;
                  }
                  ppppplVar32 = (long *****)((long)ppppplVar32 - uVar15 * (long)ppppplVar38);
                }
                if (ppppplVar32 != unaff_x19) break;
              }
              plVar13 = (long *)*plVar13;
            } while (plVar13 != (long *)0x0);
          }
        }
        plVar13 = (long *)0x20;
        __Znwm();
        *plVar13 = 0;
        plVar13[1] = (long)ppppplVar19;
        lVar22 = plVar14[2];
        plVar13[3] = plVar14[3];
        plVar13[2] = lVar22;
        if ((ppppplVar38 == (long *****)0x0) ||
           (*(float *)(param_3 + 4) * (float)ppppplVar38 < (float)(param_3[3] + 1))) {
          uVar37 = 1;
          if ((long *****)0x2 < ppppplVar38) {
            uVar37 = (ulong)(((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) != 0);
          }
          uVar37 = uVar37 | (long)ppppplVar38 << 1;
          uVar15 = (ulong)((float)(param_3[3] + 1) / *(float *)(param_3 + 4));
          if (uVar37 <= uVar15) {
            uVar37 = uVar15;
          }
          FUN_10a7acf10(param_3,uVar37);
          ppppplVar38 = (long *****)param_3[1];
          if (((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) == 0) {
            unaff_x19 = (long *****)((long)ppppplVar38 - 1U & (ulong)ppppplVar19);
          }
          else {
            unaff_x19 = ppppplVar19;
            if (ppppplVar38 <= ppppplVar19) {
              uVar37 = 0;
              if (ppppplVar38 != (long *****)0x0) {
                uVar37 = (ulong)ppppplVar19 / (ulong)ppppplVar38;
              }
              unaff_x19 = (long *****)((long)ppppplVar19 - uVar37 * (long)ppppplVar38);
            }
          }
        }
        lVar22 = *param_3;
        plVar36 = *(long **)(lVar22 + (long)unaff_x19 * 8);
        if (plVar36 == (long *)0x0) {
          *plVar13 = *plVar35;
          *plVar35 = (long)plVar13;
          *(long **)(lVar22 + (long)unaff_x19 * 8) = plVar35;
          if (*plVar13 != 0) {
            ppppplVar19 = *(long ******)(*plVar13 + 8);
            if (((ulong)ppppplVar38 & (long)ppppplVar38 - 1U) == 0) {
              ppppplVar19 = (long *****)((ulong)ppppplVar19 & (long)ppppplVar38 - 1U);
            }
            else if (ppppplVar38 <= ppppplVar19) {
              uVar37 = 0;
              if (ppppplVar38 != (long *****)0x0) {
                uVar37 = (ulong)ppppplVar19 / (ulong)ppppplVar38;
              }
              ppppplVar19 = (long *****)((long)ppppplVar19 - uVar37 * (long)ppppplVar38);
            }
            plVar36 = (long *)(*param_3 + (long)ppppplVar19 * 8);
            goto LAB_10a774558;
          }
        }
        else {
          *plVar13 = *plVar36;
LAB_10a774558:
          *plVar36 = (long)plVar13;
        }
        param_3[3] = param_3[3] + 1;
LAB_10a77456c:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    ppppplVar38 = &pppplStack_78;
    if (param_5 == 0) {
      ppppplVar38 = param_4;
    }
    FUN_10a773cbc(param_1,param_2,param_3,ppppplVar38,0);
    pppplVar39 = pppplStack_70;
    ppppplVar38 = (long *****)pppplStack_78;
    if (param_5 != 0) {
      for (; ppppplVar38 != (long *****)pppplVar39; ppppplVar38 = ppppplVar38 + 2) {
        plVar35 = (long *)param_3[2];
        if (plVar35 != (long *)0x0) {
          do {
            if (((int)plVar35[2] <= *(int *)ppppplVar38 &&
                 *(int *)((long)plVar35 + 0x14) <= *(int *)((long)ppppplVar38 + 4)) &&
               (*(int *)(ppppplVar38 + 1) <= (int)plVar35[3] &&
                *(int *)((long)ppppplVar38 + 0xc) <= *(int *)((long)plVar35 + 0x1c)))
            goto LAB_10a7745f8;
            plVar35 = (long *)*plVar35;
          } while (plVar35 != (long *)0x0);
        }
        FUN_10a773b6c(param_1,*ppppplVar38,ppppplVar38[1],0);
LAB_10a7745f8:
      }
    }
  }
  func_0x00010a7ad0e0(&lStack_a0);
  if ((long *****)pppplStack_78 != (long *****)0x0) {
    pppplStack_70 = pppplStack_78;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a77468c; end: 10a774bdf;  */

void FUN_10a77468c(undefined8 *param_1,long param_2,uint *param_3,byte param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  long *plVar27;
  long lVar28;
  int iVar29;
  int iVar31;
  byte bVar32;
  long lVar33;
  undefined8 uVar34;
  long lVar35;
  int iVar36;
  int *piVar37;
  undefined8 uStack_b0;
  int iStack_a8;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  int iVar30;
  
  plVar27 = (long *)0x68;
  __Znwm();
  plVar27[1] = 0;
  plVar27[2] = 0;
  *plVar27 = (long)&PTR_FUN_110c183d0;
  plStack_80 = plVar27 + 3;
  plVar27[4] = 0;
  *plStack_80 = 0;
  plVar27[6] = 0;
  plVar27[5] = 0;
  plVar27[8] = 0;
  plVar27[7] = 0;
  plVar27[10] = 0;
  plVar27[9] = 0;
  plVar27[0xc] = 0;
  plVar27[0xb] = 0;
  piVar37 = *(int **)(param_2 + 0x68);
  piVar16 = *(int **)(param_2 + 0x70);
  plStack_78 = plVar27;
  if (piVar37 == piVar16) {
    bVar32 = 0;
    param_1[1] = 0xffffffff;
    *param_1 = 0;
    param_1[2] = plStack_80;
    param_1[3] = plVar27;
  }
  else {
    bVar32 = 0;
    iVar36 = 0;
    iStack_a8 = 0;
    uStack_b0 = 0xffffffff;
    do {
      iVar7 = *piVar37;
      iVar11 = piVar37[1];
      uVar8 = *param_3;
      uVar12 = param_3[1];
      iVar9 = *(int *)(param_2 + 0xc);
      iVar13 = *(int *)(param_2 + 0x10);
      iVar10 = *(int *)(param_2 + 0x14);
      iVar14 = *(int *)(param_2 + 0x18);
      iVar17 = *(int *)(param_2 + 0x1c);
      uVar34 = *(undefined8 *)(param_2 + 0x18);
      plVar27 = (long *)0x68;
      __Znwm();
      iVar10 = iVar13 + iVar9 + iVar10;
      iVar9 = 0;
      iVar31 = (int)((ulong)uVar34 >> 0x20);
      if (iVar31 != 0) {
        iVar9 = (iVar10 + iVar11) / iVar31;
      }
      iVar18 = (int)((float)iVar10 / (float)iVar17) * iVar31;
      iVar17 = 0;
      if (iVar10 + iVar11 != iVar9 * iVar31) {
        iVar17 = iVar18;
      }
      iVar17 = iVar17 + iVar9 * iVar31;
      iVar9 = iVar17 + uVar12;
      iVar11 = 0;
      if (iVar31 != 0) {
        iVar11 = iVar9 / iVar31;
      }
      iVar3 = 0;
      if (iVar9 != iVar11 * iVar31) {
        iVar3 = iVar18;
      }
      iVar3 = iVar11 * iVar31 + iVar3;
      iVar11 = 0;
      iVar31 = (int)uVar34;
      if (iVar31 != 0) {
        iVar11 = (iVar10 + iVar7) / iVar31;
      }
      iVar18 = (int)((float)iVar10 / (float)iVar14) * iVar31;
      iVar14 = 0;
      if (iVar10 + iVar7 != iVar11 * iVar31) {
        iVar14 = iVar18;
      }
      iVar14 = iVar14 + iVar11 * iVar31;
      iVar7 = iVar14 + uVar8;
      iVar11 = 0;
      if (iVar31 != 0) {
        iVar11 = iVar7 / iVar31;
      }
      iVar4 = 0;
      if (iVar7 != iVar11 * iVar31) {
        iVar4 = iVar18;
      }
      iVar4 = iVar11 * iVar31 + iVar4;
      iVar20 = iVar17 - iVar10;
      lVar33 = CONCAT44(iVar20,iVar14 - iVar10);
      iVar21 = iVar14 - iVar13;
      lVar28 = CONCAT44(iVar17 - iVar13,iVar21);
      lVar35 = CONCAT44(iVar17,iVar14);
      plVar27[1] = 0;
      plVar27[2] = 0;
      *plVar27 = (long)&PTR_FUN_110c183d0;
      plStack_90 = plVar27 + 3;
      *plStack_90 = lVar35;
      plVar27[4] = CONCAT44(iVar9,iVar7);
      plVar27[5] = lVar28;
      plVar27[6] = CONCAT44(iVar9 + iVar13,iVar7 + iVar13);
      plVar27[7] = lVar33;
      plVar27[8] = CONCAT44(iVar3 + iVar10,iVar4 + iVar10);
      plVar27[9] = 0;
      plVar27[10] = 0;
      plVar27[0xb] = lVar35;
      plVar27[0xc] = CONCAT44(iVar3,iVar4);
      iVar11 = piVar37[2];
      iVar18 = piVar37[3];
      iVar31 = *piVar37;
      iVar15 = piVar37[1];
      iVar22 = iVar11 - iVar31;
      iVar23 = iVar18 - iVar15;
      iVar24 = (iVar4 + iVar10) - (iVar14 - iVar10);
      iVar10 = (iVar3 + iVar10) - iVar20;
      bVar5 = 0;
      if (iVar10 <= iVar22) {
        bVar5 = param_4;
      }
      bVar6 = 0;
      if (iVar24 <= iVar23) {
        bVar6 = bVar5;
      }
      iVar29 = (int)uStack_b0;
      iVar30 = (int)((ulong)uStack_b0 >> 0x20);
      plStack_88 = plVar27;
      plVar27 = plStack_78;
      if (((bVar6 & 1) != 0) || (iVar24 <= iVar22 && iVar10 <= iVar23)) {
        if ((iVar29 < iStack_a8 || iVar30 < iVar36) == (iVar11 < iVar31 || iVar18 < iVar15)) {
          iVar11 = iVar23 * iVar22;
          iVar29 = (iVar30 - iVar36) * (iVar29 - iStack_a8);
          bVar25 = SBORROW4(iVar11,iVar29);
          bVar26 = iVar11 - iVar29 < 0;
          if (iVar11 == iVar29) {
            bVar25 = SBORROW4(iVar31,iStack_a8);
            bVar26 = iVar31 - iStack_a8 < 0;
            if (iVar31 == iStack_a8) {
              bVar25 = SBORROW4(iVar15,iVar36);
              bVar26 = iVar15 - iVar36 < 0;
              if (iVar15 == iVar36) {
                bVar25 = SBORROW4(iVar18,iVar30);
                bVar26 = iVar18 - iVar30 < 0;
              }
            }
          }
          if (bVar26 != bVar25) goto LAB_10a774964;
        }
        else if (iVar11 >= iVar31 && iVar18 >= iVar15) {
LAB_10a774964:
          bVar32 = bVar6;
          if (iVar24 <= iVar22 && iVar10 <= iVar23) {
            iStack_a8 = *piVar37;
            iVar36 = piVar37[1];
            uStack_b0 = *(undefined8 *)(piVar37 + 2);
            func_0x00010a3509f0(&plStack_80,&plStack_90);
            plVar27 = plStack_78;
          }
          else {
            plVar27 = (long *)0x68;
            __Znwm();
            plVar2 = plStack_78;
            plVar27[1] = 0;
            plVar27[2] = 0;
            *plVar27 = (long)&PTR_FUN_110c183d0;
            plVar27[4] = lVar35 + ((ulong)uVar8 << 0x20) & 0xffffffff00000000 |
                         (ulong)(iVar14 + uVar12);
            plVar27[5] = lVar28;
            plVar27[6] = lVar28 + ((ulong)(uint)((iVar7 + iVar13) - iVar21) << 0x20) &
                         0xffffffff00000000 |
                         (ulong)(uint)((iVar21 - (iVar17 - iVar13)) + iVar9 + iVar13);
            plVar27[7] = lVar33;
            plVar27[8] = CONCAT44(iVar20 + iVar24,(iVar3 + iVar14) - iVar20);
            plVar27[9] = 0;
            plVar27[10] = 0;
            plVar27[0xb] = lVar35;
            plVar27[0xc] = lVar35 + ((ulong)(uint)(iVar4 - iVar14) << 0x20) & 0xffffffff00000000 |
                           (ulong)(uint)((iVar14 - iVar17) + iVar3);
            plStack_80 = plVar27 + 3;
            *plStack_80 = lVar35;
            uStack_b0 = CONCAT44(iVar15 + iVar22,(iVar18 + iVar31) - iVar15);
            iStack_a8 = iVar31;
            iVar36 = iVar15;
            if (plStack_78 != (long *)0x0) {
              plVar1 = plStack_78 + 1;
              do {
                lVar28 = *plVar1;
                cVar19 = '\x01';
                bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar26) {
                  *plVar1 = lVar28 + -1;
                  cVar19 = ExclusiveMonitorsStatus();
                }
              } while (cVar19 != '\0');
              if (lVar28 == 0) {
                lVar28 = *plStack_78;
                plStack_78 = plVar27;
                (**(code **)(lVar28 + 0x10))(plVar2);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
                plVar27 = plStack_78;
              }
            }
          }
        }
      }
      else if ((iVar29 <= iStack_a8) || (iVar30 <= iVar36)) {
        func_0x00010a3509f0(&plStack_80,&plStack_90);
        plVar27 = plStack_78;
      }
      plStack_78 = plVar27;
      plVar27 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar2 = plStack_88 + 1;
        do {
          lVar28 = *plVar2;
          cVar19 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar26) {
            *plVar2 = lVar28 + -1;
            cVar19 = ExclusiveMonitorsStatus();
          }
        } while (cVar19 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
        }
      }
      piVar37 = piVar37 + 4;
    } while (piVar37 != piVar16);
    *param_1 = CONCAT44(iVar36,iStack_a8);
    param_1[1] = uStack_b0;
    param_1[3] = plStack_78;
    param_1[2] = plStack_80;
    if (plStack_78 == (long *)0x0) {
      *(byte *)(param_1 + 4) = bVar32 & 1;
      return;
    }
  }
  plVar2 = plStack_78;
  plVar27 = plStack_78 + 1;
  do {
    cVar19 = '\x01';
    bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar26) {
      *plVar27 = *plVar27 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  *(byte *)(param_1 + 4) = bVar32 & 1;
  if (plStack_78 != (long *)0x0) {
    plVar27 = plStack_78 + 1;
    do {
      lVar28 = *plVar27;
      cVar19 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar26) {
        *plVar27 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  return;
}



/* Entry: 10a774be0; end: 10a774ca7;  */

/* WARNING: Possible PIC construction at 0x00010a775248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7752b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a77524c) */
/* WARNING: Removing unreachable block (ram,0x00010a775254) */
/* WARNING: Removing unreachable block (ram,0x00010a775258) */
/* WARNING: Removing unreachable block (ram,0x00010a775260) */
/* WARNING: Removing unreachable block (ram,0x00010a775268) */
/* WARNING: Removing unreachable block (ram,0x00010a7752bc) */
/* WARNING: Removing unreachable block (ram,0x00010a7752c4) */
/* WARNING: Removing unreachable block (ram,0x00010a7752c8) */
/* WARNING: Removing unreachable block (ram,0x00010a7752d0) */
/* WARNING: Removing unreachable block (ram,0x00010a7752d8) */
/* WARNING: Removing unreachable block (ram,0x00010a7752dc) */
/* WARNING: Removing unreachable block (ram,0x00010a7752f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7752fc) */
/* WARNING: Removing unreachable block (ram,0x00010a775300) */
/* WARNING: Removing unreachable block (ram,0x00010a775308) */
/* WARNING: Removing unreachable block (ram,0x00010a775310) */
/* WARNING: Removing unreachable block (ram,0x00010a775314) */
/* WARNING: Removing unreachable block (ram,0x00010a77532c) */
/* WARNING: Removing unreachable block (ram,0x00010a775334) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a774be0(long *******param_1,long *******param_2,long *******param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  char cVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  long ******pppppplVar11;
  long *******ppppppplVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long ******pppppplVar20;
  long *extraout_x8;
  ulong uVar21;
  uint uVar22;
  long ******pppppplVar23;
  ulong uVar24;
  ulong uVar25;
  long *******ppppppplVar26;
  long ******pppppplVar27;
  long lVar28;
  long *******ppppppplVar29;
  long ******pppppplVar30;
  long ******pppppplVar31;
  long lVar32;
  long ******unaff_x22;
  long ******unaff_x23;
  uint uVar33;
  long *******unaff_x24;
  long *******ppppppplVar34;
  undefined **unaff_x25;
  ulong *puVar35;
  ulong *puVar36;
  long ******unaff_x26;
  uint uVar37;
  long *******unaff_x27;
  long ******unaff_x28;
  undefined8 *******pppppppuVar38;
  undefined8 uVar39;
  long *****ppppplVar40;
  undefined4 uVar41;
  undefined1 auStack_1e0 [8];
  long ******pppppplStack_1d8;
  long ******pppppplStack_1d0;
  long ******pppppplStack_1c8;
  long ******pppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long ******pppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  undefined8 *******pppppppuStack_190;
  code *pcStack_188;
  undefined1 auStack_180 [8];
  long *******ppppppplStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  undefined1 uStack_148;
  undefined8 uStack_138;
  int iStack_130;
  int iStack_12c;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  undefined1 uStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long ******pppppplStack_100;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long ******pppppplStack_c8;
  long lStack_b8;
  undefined8 ******ppppppuStack_40;
  code *pcStack_38;
  
  pppppplVar23 = param_1[1];
  if (pppppplVar23 < param_1[2]) {
    pppppplVar11 = *param_2;
    pppppplVar23[1] = (long *****)param_2[1];
    *pppppplVar23 = (long *****)pppppplVar11;
    pppppplVar23 = pppppplVar23 + 2;
LAB_10a774c90:
    param_1[1] = pppppplVar23;
    return;
  }
  lVar32 = (long)pppppplVar23 - (long)*param_1;
  uVar19 = (lVar32 >> 4) + 1;
  if (uVar19 >> 0x3c == 0) {
    uVar18 = (long)param_1[2] - (long)*param_1;
    uVar25 = (long)uVar18 >> 3;
    if (uVar25 <= uVar19) {
      uVar25 = uVar19;
    }
    if (0x7fffffffffffffef < uVar18) {
      uVar25 = 0xfffffffffffffff;
    }
    ppppppplVar26 = param_1;
    FUN_10a7a2e14();
    plVar14 = (long *)((long)ppppppplVar26 + lVar32);
    pppppplVar23 = *param_2;
    plVar14[1] = (long)param_2[1];
    *plVar14 = (long)pppppplVar23;
    pppppplVar23 = (long ******)(plVar14 + 2);
    pppppplVar31 = (long ******)((long)plVar14 - ((long)param_1[1] - (long)*param_1));
    _memcpy(pppppplVar31);
    pppppplVar11 = *param_1;
    *param_1 = pppppplVar31;
    param_1[1] = pppppplVar23;
    param_1[2] = (long ******)(ppppppplVar26 + uVar25 * 2);
    if (pppppplVar11 != (long ******)0x0) {
      __ZdlPv();
    }
    goto LAB_10a774c90;
  }
  FUN_10a7a2e00();
  puVar9 = auStack_180;
  pcStack_38 = FUN_10a774ca8;
  pppppppuVar38 = &ppppppuStack_40;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar23 = *param_3;
  ppppppplVar26 = param_1;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((long)param_3[1] - (long)pppppplVar23 == 8) {
    if (pppppplVar23 == param_3[1]) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a77555c);
      (*pcVar8)();
    }
    FUN_10a77468c(&uStack_170,param_2,pppppplVar23,0);
    param_3 = (long *******)&ppppppplStack_f0;
    if (((int)uStack_170 < (int)uStack_168 && uStack_168._4_4_ != uStack_170._4_4_) &&
        ((int)uStack_168 <= (int)uStack_170 || uStack_170._4_4_ <= uStack_168._4_4_)) {
      ppppppplStack_f0 = (long *******)CONCAT71(ppppppplStack_f0._1_7_,1);
      ppppppplStack_e0 = uStack_168;
      ppppppplStack_e8 = uStack_170;
      ppppppplStack_d0 = ppppppplStack_158;
      ppppppplStack_d8 = ppppppplStack_160;
      if (ppppppplStack_158 != (long *******)0x0) {
        ppppppplVar12 = ppppppplStack_158 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar12,0x10);
          if (bVar10) {
            *ppppppplVar12 = (long ******)((long)*ppppppplVar12 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppppplStack_c8 = (long ******)CONCAT71(pppppplStack_c8._1_7_,ppppppplStack_150._0_1_);
    }
    else {
      unaff_x22 = (long ******)&uStack_170;
      if ((*(int *)(ppppppplStack_160 + 5) - *(int *)(ppppppplStack_160 + 4) < 0x800) &&
         (*(int *)((long)ppppppplStack_160 + 0x2c) - *(int *)((long)ppppppplStack_160 + 0x24) <
          0x800)) {
        ppppppplStack_f0 = (long *******)CONCAT71(ppppppplStack_f0._1_7_,2);
        ppppppplStack_e8 = (long *******)0x0;
        ppppppplStack_e0 = (long *******)0x0;
        ppppppplVar12 = (long *******)0x68;
        __Znwm();
      }
      else {
        ppppppplStack_f0 = (long *******)CONCAT71(ppppppplStack_f0._1_7_,3);
        ppppppplStack_e8 = (long *******)0x0;
        ppppppplStack_e0 = (long *******)0x0;
        ppppppplVar12 = (long *******)0x68;
        __Znwm();
      }
      ppppppplVar12[1] = (long ******)0x0;
      ppppppplVar12[2] = (long ******)0x0;
      *ppppppplVar12 = (long ******)&PTR_FUN_110c183d0;
      ppppppplVar12[6] = (long ******)0x0;
      ppppppplVar12[5] = (long ******)0x0;
      ppppppplVar12[8] = (long ******)0x0;
      ppppppplVar12[7] = (long ******)0x0;
      ppppppplVar12[10] = (long ******)0x0;
      ppppppplVar12[9] = (long ******)0x0;
      ppppppplVar12[0xc] = (long ******)0x0;
      ppppppplVar12[0xb] = (long ******)0x0;
      ppppppplStack_d8 = ppppppplVar12 + 3;
      ppppppplVar12[4] = (long ******)0x0;
      *ppppppplStack_d8 = (long ******)0x0;
      pppppplStack_c8 = (long ******)((ulong)pppppplStack_c8 & 0xffffffffffffff00);
      ppppppplStack_d0 = ppppppplVar12;
    }
    ppppppplVar12 = ppppppplStack_158;
    if (ppppppplStack_158 != (long *******)0x0) {
      ppppppplVar29 = ppppppplStack_158 + 1;
      do {
        pppppplVar11 = *ppppppplVar29;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar29,0x10);
        if (bVar10) {
          *ppppppplVar29 = (long ******)((long)pppppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar11 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_158)[2])(ppppppplStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar12);
      }
    }
    *param_1 = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    param_2 = (long *******)0x30;
    __Znwm();
    ppppppplVar29 = ppppppplStack_d0;
    *param_1 = (long ******)param_2;
    param_1[1] = (long ******)param_2;
    ppppppplVar12 = param_2 + 6;
    param_1[2] = (long ******)ppppppplVar12;
    *(undefined1 *)param_2 = ppppppplStack_f0._0_1_;
    param_2[2] = (long ******)ppppppplStack_e0;
    param_2[1] = (long ******)ppppppplStack_e8;
    param_2[4] = (long ******)ppppppplStack_d0;
    param_2[3] = (long ******)ppppppplStack_d8;
    if (ppppppplStack_d0 == (long *******)0x0) {
      *(undefined1 *)(param_2 + 5) = pppppplStack_c8._0_1_;
      param_1[1] = (long ******)ppppppplVar12;
    }
    else {
      ppppppplVar34 = ppppppplStack_d0 + 1;
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar34,0x10);
        if (bVar10) {
          *ppppppplVar34 = (long ******)((long)*ppppppplVar34 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined1 *)(param_2 + 5) = pppppplStack_c8._0_1_;
      param_1[1] = (long ******)ppppppplVar12;
      do {
        pppppplVar11 = *ppppppplVar34;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar34,0x10);
        if (bVar10) {
          *ppppppplVar34 = (long ******)((long)pppppplVar11 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar11 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_d0)[2])(ppppppplStack_d0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = ppppppplVar29;
      }
    }
  }
  else {
    unaff_x27 = param_2 + 0xd;
    pppppplVar11 = *unaff_x27;
    ppppppplStack_110 = (long *******)0x0;
    ppppppplStack_108 = (long *******)0x0;
    pppppplStack_100 = (long ******)0x0;
    unaff_x23 = (long ******)((long)param_2[0xe] - (long)pppppplVar11);
    if (unaff_x23 != (long ******)0x0) {
      FUN_10a7a2dc8(&ppppppplStack_110,(long)unaff_x23 >> 4);
      unaff_x24 = ppppppplStack_108;
      _memmove(ppppppplStack_108,pppppplVar11,unaff_x23);
      ppppppplStack_108 = (long *******)((long)unaff_x24 + (long)unaff_x23);
      pppppplVar23 = pppppplVar11;
    }
    ppppppplStack_d8 = (long *******)0x0;
    ppppppplStack_e0 = (long *******)0x0;
    pppppplStack_c8 = (long ******)0x0;
    ppppppplStack_d0 = (long *******)0x0;
    ppppppplStack_e8 = (long *******)0x0;
    ppppppplStack_f0 = (long *******)0x0;
    pppppplVar11 = param_2[8];
    if (param_2[9] != pppppplVar11) {
      pppppplVar31 = param_2[0xb];
      uVar25 = (ulong)pppppplVar31 >> 7 & 0x1fffffffffffff8;
      unaff_x23 = (long ******)((long)pppppplVar11 + uVar25);
      unaff_x24 = (long *******)((long)*unaff_x23 + ((ulong)pppppplVar31 & 0x3ff) * 4);
      uVar18 = (ulong)((long)param_2[0xc] + (long)pppppplVar31) >> 7 & 0x1fffffffffffff8;
      uVar19 = (long)param_2[0xc] + (long)pppppplVar31 & 0x3ff;
      if (((long *******)(*(long *)((long)pppppplVar11 + uVar18) + uVar19 * 4) != unaff_x24) &&
         (unaff_x25 = (undefined **)
                      ((uVar19 | (uVar18 - uVar25) * 0x80) - ((ulong)pppppplVar31 & 0x3ff)),
         unaff_x25 != (undefined **)0x0)) {
        ppppppplVar26 = (long *******)((long)unaff_x25 + 1U >> 10);
        if (((long)unaff_x25 + 1U & 0x3ff) != 0) {
          ppppppplVar26 = (long *******)((long)ppppppplVar26 + 1);
        }
        if (unaff_x25 == (undefined **)0xffffffffffffffff) {
          pppppplVar23 = (long ******)0x0;
          ppppppplVar26 = (long *******)0x0;
        }
        else {
          ppppppplStack_150 = (long *******)&ppppppplStack_f0;
          ppppppplVar12 = ppppppplVar26;
          func_0x00010a7ad260();
          ppppppplStack_158 = ppppppplVar12 + (long)pppppplVar23;
          lVar32 = -(long)ppppppplVar26;
          uStack_170 = ppppppplVar12;
          uStack_168 = ppppppplVar12;
          ppppppplStack_160 = ppppppplVar12;
          do {
            ppppppplVar26 = (long *******)0x1000;
            __Znwm();
            uStack_138 = ppppppplVar26;
            func_0x000108a55830(&uStack_170,&uStack_138);
            bVar10 = lVar32 != -1;
            lVar32 = lVar32 + 1;
          } while (bVar10);
          lVar32 = -7 - (long)ppppppplStack_e0;
          ppppppplVar26 = ppppppplStack_e0;
          while (ppppppplVar7 = ppppppplStack_d8, ppppppplVar6 = ppppppplStack_e0,
                ppppppplVar34 = ppppppplStack_f0, ppppppplVar29 = uStack_168,
                ppppppplVar12 = uStack_170, ppppppplVar26 != ppppppplStack_e8) {
            ppppppplVar26 = ppppppplVar26 + -1;
            lVar32 = lVar32 + 8;
            func_0x000108a558c4(&uStack_170,ppppppplVar26);
          }
          uStack_170 = ppppppplStack_f0;
          uStack_168 = ppppppplStack_e8;
          ppppppplStack_e8 = ppppppplVar29;
          ppppppplStack_f0 = ppppppplVar12;
          ppppppplStack_d8 = ppppppplStack_158;
          ppppppplStack_e0 = ppppppplStack_160;
          ppppppplStack_158 = ppppppplVar7;
          ppppppplStack_160 = ppppppplVar6;
          if (ppppppplVar26 != ppppppplVar6) {
            ppppppplStack_160 =
                 (long *******)
                 ((long)ppppppplVar6 + (-((long)ppppppplVar6 + lVar32) & 0xfffffffffffffff8U));
          }
          if (ppppppplVar34 != (long *******)0x0) {
            __ZdlPv();
          }
          ppppppplVar26 =
               ppppppplStack_e8 + ((ulong)((long)pppppplStack_c8 + (long)ppppppplStack_d0) >> 10);
          if (ppppppplStack_e0 == ppppppplStack_e8) {
            pppppplVar23 = (long ******)0x0;
          }
          else {
            pppppplVar23 = (long ******)
                           ((long)*ppppppplVar26 +
                           ((long)pppppplStack_c8 + (long)ppppppplStack_d0 & 0x3ffU) * 4);
          }
        }
        pppppplVar11 = *ppppppplVar26;
        uVar19 = (long)unaff_x25 + ((long)pppppplVar23 - (long)pppppplVar11 >> 2);
        if ((long)uVar19 < 1) {
          uVar25 = 0x3ff - uVar19;
          uVar19 = (ulong)~(uint)uVar25;
          lVar32 = (uVar25 >> 10) * -8;
        }
        else {
          lVar32 = (uVar19 >> 10) * 8;
        }
        ppppppplVar12 = (long *******)((long)ppppppplVar26 + lVar32);
        pppppplVar31 = (long ******)((long)*ppppppplVar12 + (uVar19 & 0x3ff) * 4);
        while (pppppplVar23 != pppppplVar31) {
          pppppplVar27 = pppppplVar31;
          if (ppppppplVar26 != ppppppplVar12) {
            pppppplVar27 = pppppplVar11 + 0x200;
          }
          pppppplVar11 = pppppplVar23;
          if (pppppplVar23 != pppppplVar27) {
            ppppppplVar29 = (long *******)*unaff_x23;
            pppppplVar20 = pppppplVar23;
            do {
              ppppppplVar34 = (long *******)((long)unaff_x24 + 4);
              pppppplVar30 = (long ******)((long)pppppplVar20 + 4);
              *(undefined4 *)pppppplVar20 = *(undefined4 *)unaff_x24;
              unaff_x24 = ppppppplVar34;
              if ((long)ppppppplVar34 - (long)ppppppplVar29 == 0x1000) {
                unaff_x23 = unaff_x23 + 1;
                ppppppplVar29 = (long *******)*unaff_x23;
                unaff_x24 = ppppppplVar29;
              }
              pppppplVar11 = pppppplVar27;
              pppppplVar20 = pppppplVar30;
            } while (pppppplVar30 != pppppplVar27);
          }
          pppppplStack_c8 =
               (long ******)((long)pppppplStack_c8 + ((long)pppppplVar11 - (long)pppppplVar23 >> 2))
          ;
          if (ppppppplVar26 == ppppppplVar12) break;
          ppppppplVar26 = ppppppplVar26 + 1;
          pppppplVar11 = *ppppppplVar26;
          pppppplVar23 = pppppplVar11;
        }
      }
    }
    uVar41 = *(undefined4 *)(param_2 + 0x12);
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    *param_1 = (long ******)0x0;
    pppppplVar23 = (long ******)((long)param_3[1] - (long)*param_3 >> 3);
    ppppppplStack_178 = unaff_x27;
    FUN_10a775628(param_1);
    ppppppplVar26 = ppppppplStack_178;
    unaff_x22 = *param_3;
    unaff_x26 = param_3[1];
    if (unaff_x22 != unaff_x26) {
      unaff_x24 = (long *******)&uStack_170;
      unaff_x25 = &PTR_FUN_110c183d0;
      FUN_10a77468c(&uStack_138,param_2,unaff_x22,0);
      unaff_x27 = (long *******)
                  (ulong)(iStack_130 <= (int)uStack_138 || iStack_12c <= uStack_138._4_4_);
      if (((int)uStack_138 < iStack_130 && iStack_12c != uStack_138._4_4_) &&
          (iStack_130 <= (int)uStack_138 || uStack_138._4_4_ <= iStack_12c)) {
        FUN_10a773954(param_2,ppppppplStack_128 + 4);
        uStack_170 = (long *******)CONCAT71(uStack_170._1_7_,1);
        ppppppplStack_160 = (long *******)CONCAT44(iStack_12c,iStack_130);
        uStack_168 = uStack_138;
        ppppppplStack_158 = ppppppplStack_128;
        ppppppplStack_150 = ppppppplStack_120;
        if (ppppppplStack_120 != (long *******)0x0) {
          ppppppplStack_120 = ppppppplStack_120 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplStack_120,0x10);
            if (bVar10) {
              *ppppppplStack_120 = (long ******)((long)*ppppppplStack_120 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_148 = uStack_118;
        pppppplVar23 = (long ******)&uStack_170;
        uVar39 = 0x10a7752bc;
        ppppppplVar26 = param_1;
      }
      else {
        uVar16 = 2;
        if (0x7ff < *(int *)((long)ppppppplStack_128 + 0x2c) -
                    *(int *)((long)ppppppplStack_128 + 0x24) ||
            0x7ff < *(int *)(ppppppplStack_128 + 5) - *(int *)(ppppppplStack_128 + 4)) {
          uVar16 = 3;
        }
        unaff_x28 = *param_1;
        pppppplVar23 = param_1[1];
        while (pppppplVar23 != unaff_x28) {
          FUN_10a350abc(pppppplVar23 + -3);
          pppppplVar23 = pppppplVar23 + -6;
          unaff_x23 = pppppplVar23;
        }
        param_1[1] = unaff_x28;
        uStack_170._1_7_ = (undefined7)((ulong)uStack_170 >> 8);
        uStack_170 = (long *******)CONCAT71(uStack_170._1_7_,(char)uVar16);
        uStack_168 = (long *******)0x0;
        ppppppplStack_160 = (long *******)0x0;
        ppppppplVar26 = (long *******)0x68;
        __Znwm();
        ppppppplVar26[1] = (long ******)0x0;
        ppppppplVar26[2] = (long ******)0x0;
        *ppppppplVar26 = (long ******)&PTR_FUN_110c183d0;
        ppppppplVar26[6] = (long ******)0x0;
        ppppppplVar26[5] = (long ******)0x0;
        ppppppplVar26[8] = (long ******)0x0;
        ppppppplVar26[7] = (long ******)0x0;
        ppppppplVar26[10] = (long ******)0x0;
        ppppppplVar26[9] = (long ******)0x0;
        ppppppplVar26[0xc] = (long ******)0x0;
        ppppppplVar26[0xb] = (long ******)0x0;
        ppppppplVar26[4] = (long ******)0x0;
        ppppppplVar26[3] = (long ******)0x0;
        ppppppplStack_158 = ppppppplVar26 + 3;
        ppppppplStack_150 = ppppppplVar26;
        uStack_148 = 0;
        pppppplVar23 = (long ******)&uStack_170;
        uVar39 = 0x10a77524c;
        puVar9 = auStack_180;
        ppppppplVar26 = param_1;
        ppppppplStack_128 = (long *******)(ulong)uVar16;
      }
      goto SUB_10a7756e4;
    }
    if (*ppppppplStack_178 != (long ******)0x0) {
      param_2[0xe] = *ppppppplStack_178;
      __ZdlPv();
      *ppppppplVar26 = (long ******)0x0;
      ppppppplVar26[1] = (long ******)0x0;
      ppppppplVar26[2] = (long ******)0x0;
    }
    param_2[0xe] = (long ******)ppppppplStack_108;
    param_2[0xd] = (long ******)ppppppplStack_110;
    param_2[0xf] = pppppplStack_100;
    ppppppplStack_108 = (long *******)0x0;
    pppppplStack_100 = (long ******)0x0;
    ppppppplStack_110 = (long *******)0x0;
    pppppplVar11 = param_2[8];
    pppppplVar31 = param_2[9];
    param_2[0xc] = (long ******)0x0;
    lVar32 = (long)pppppplVar31 - (long)pppppplVar11;
    while (uVar19 = lVar32 >> 3, 2 < uVar19) {
      __ZdlPv(*pppppplVar11);
      pppppplVar31 = param_2[9];
      pppppplVar11 = param_2[8] + 1;
      param_2[8] = pppppplVar11;
      lVar32 = (long)pppppplVar31 - (long)pppppplVar11;
    }
    if (uVar19 == 1) {
      pppppplVar27 = (long ******)0x200;
LAB_10a7753c8:
      param_2[0xb] = pppppplVar27;
    }
    else if (uVar19 == 2) {
      pppppplVar27 = (long ******)0x400;
      goto LAB_10a7753c8;
    }
    if (param_2[0xc] == (long ******)0x0) {
      while (pppppplVar31 != pppppplVar11) {
        __ZdlPv(pppppplVar31[-1]);
        pppppplVar11 = param_2[8];
        pppppplVar31 = param_2[9] + -1;
        param_2[9] = pppppplVar31;
      }
      param_2[0xb] = (long ******)0x0;
    }
    else {
      if ((long ******)0x3ff < param_2[0xb]) {
        __ZdlPv(*pppppplVar11);
        param_2[8] = param_2[8] + 1;
        param_2[0xb] = param_2[0xb] + -0x80;
      }
      pppppplVar23 = (long ******)0x0;
      func_0x00010a7ad294(param_2 + 7);
    }
    FUN_10a7ad2fc(param_2 + 7);
    pppppplVar11 = param_2[9];
    if (pppppplVar11 != param_2[8]) {
      param_2[9] = (long ******)
                   ((long)pppppplVar11 +
                   ((long)param_2[8] + (7 - (long)pppppplVar11) & 0xfffffffffffffff8U));
    }
    FUN_10a7ad2fc(param_2 + 7);
    param_2[8] = (long ******)ppppppplStack_e8;
    param_2[7] = (long ******)ppppppplStack_f0;
    param_2[10] = (long ******)ppppppplStack_d8;
    param_2[9] = (long ******)ppppppplStack_e0;
    ppppppplStack_e8 = (long *******)0x0;
    ppppppplStack_f0 = (long *******)0x0;
    ppppppplStack_d8 = (long *******)0x0;
    ppppppplStack_e0 = (long *******)0x0;
    param_2[0xc] = pppppplStack_c8;
    param_2[0xb] = (long ******)ppppppplStack_d0;
    ppppppplStack_d0 = (long *******)0x0;
    pppppplStack_c8 = (long ******)0x0;
    *(undefined4 *)(param_2 + 0x12) = uVar41;
    FUN_10a7a2e48(&ppppppplStack_f0);
    param_2 = ppppppplStack_110;
    if (ppppppplStack_110 != (long *******)0x0) {
      ppppppplStack_108 = ppppppplStack_110;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  if (ppppppplStack_e0 != ppppppplStack_e8) {
    ppppppplStack_e0 =
         (long *******)
         ((long)ppppppplStack_e0 +
         ((long)ppppppplStack_e8 + (7 - (long)ppppppplStack_e0) & 0xfffffffffffffff8U));
  }
  if (ppppppplStack_f0 != (long *******)0x0) {
    __ZdlPv();
  }
  if (ppppppplStack_110 != (long *******)0x0) {
    ppppppplStack_108 = ppppppplStack_110;
    __ZdlPv();
  }
  param_1 = param_2;
  __Unwind_Resume();
  pcStack_188 = FUN_10a775628;
  pppppplVar11 = *param_1;
  if (pppppplVar23 <=
      (long ******)(((long)param_1[2] - (long)pppppplVar11 >> 4) * -0x5555555555555555)) {
    return;
  }
  pppppplStack_1b0 = unaff_x22;
  ppppppplStack_1a8 = param_3;
  ppppppplStack_1a0 = param_2;
  ppppppplStack_198 = ppppppplVar26;
  pppppppuStack_190 = pppppppuVar38;
  if (pppppplVar23 < (long ******)0x555555555555556) {
    pppppplVar31 = param_1[1];
    pppppplVar27 = pppppplVar23;
    ppppppplStack_1b8 = param_1;
    FUN_10a7a2ef4();
    pppppplVar11 = (long ******)((long)pppppplVar23 + ((long)pppppplVar31 - (long)pppppplVar11));
    pppppplVar31 = (long ******)((long)pppppplVar11 + ((long)*param_1 - (long)param_1[1]));
    FUN_10a7a2fa4(*param_1,param_1[1],pppppplVar31);
    pppppplStack_1d8 = *param_1;
    *param_1 = pppppplVar31;
    param_1[1] = pppppplVar11;
    pppppplStack_1c0 = param_1[2];
    param_1[2] = pppppplVar23 + (long)pppppplVar27 * 6;
    pppppplStack_1d0 = pppppplStack_1d8;
    pppppplStack_1c8 = pppppplStack_1d8;
    func_0x00010a7a3018(&pppppplStack_1d8);
    return;
  }
  uVar39 = 0x10a7756e4;
  FUN_10a7a2ee0();
  puVar9 = auStack_1e0;
  ppppppplStack_128 = param_3;
  pppppppuVar38 = &pppppppuStack_190;
SUB_10a7756e4:
  *(long *******)(puVar9 + -0x30) = unaff_x22;
  *(long ********)(puVar9 + -0x28) = ppppppplStack_128;
  *(long ********)(puVar9 + -0x20) = param_2;
  *(long ********)(puVar9 + -0x18) = ppppppplVar26;
  *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar38;
  *(undefined8 *)(puVar9 + -8) = uVar39;
  pppppplVar11 = param_1[1];
  if (pppppplVar11 < param_1[2]) {
    *(undefined1 *)pppppplVar11 = *(undefined1 *)pppppplVar23;
    ppppplVar40 = pppppplVar23[1];
    pppppplVar11[2] = pppppplVar23[2];
    pppppplVar11[1] = ppppplVar40;
    ppppplVar40 = pppppplVar23[3];
    pppppplVar11[4] = pppppplVar23[4];
    pppppplVar11[3] = ppppplVar40;
    pppppplVar23[3] = (long *****)0x0;
    pppppplVar23[4] = (long *****)0x0;
    *(undefined1 *)(pppppplVar11 + 5) = *(undefined1 *)(pppppplVar23 + 5);
    pppppplVar11 = pppppplVar11 + 6;
  }
  else {
    lVar32 = (long)pppppplVar11 - (long)*param_1;
    uVar19 = (lVar32 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar19) {
      pppppplVar11 = pppppplVar23;
      FUN_10a7a2ee0();
      *(long *******)(puVar9 + -0xc0) = unaff_x28;
      *(long ********)(puVar9 + -0xb8) = unaff_x27;
      *(long *******)(puVar9 + -0xb0) = unaff_x26;
      *(undefined ***)(puVar9 + -0xa8) = unaff_x25;
      *(long ********)(puVar9 + -0xa0) = unaff_x24;
      *(long *******)(puVar9 + -0x98) = unaff_x23;
      *(long *******)(puVar9 + -0x90) = unaff_x22;
      *(long *)(puVar9 + -0x88) = lVar32;
      *(long *******)(puVar9 + -0x80) = pppppplVar23;
      *(long ********)(puVar9 + -0x78) = param_1;
      *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x10;
      *(code **)(puVar9 + -0x68) = FUN_10a775818;
      if ((*(uint *)((long)pppppplVar11 + 4) | *(uint *)pppppplVar11) < 2) {
        uVar16 = 1;
      }
      else {
        iVar17 = -1;
        uVar22 = *(uint *)pppppplVar11;
        uVar16 = *(uint *)((long)pppppplVar11 + 4);
        do {
          uVar33 = uVar16;
          uVar4 = uVar22 >> 1;
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          uVar16 = uVar33 >> 1;
          if (uVar16 < 2) {
            uVar16 = 1;
          }
          iVar17 = iVar17 + -1;
          bVar10 = 3 < uVar22;
          uVar22 = uVar4;
        } while ((bVar10) || (3 < uVar33));
        if (iVar17 == 0) {
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          puVar15 = (undefined8 *)0x10;
          __Znwm();
          extraout_x8[1] = (long)(puVar15 + 2);
          extraout_x8[2] = (long)(puVar15 + 2);
          *puVar15 = 0;
          puVar15[1] = 0;
          *extraout_x8 = (long)puVar15;
          return;
        }
        uVar16 = -iVar17;
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      FUN_10a775ab4(extraout_x8,uVar16 + 1);
      uVar4 = *(uint *)pppppplVar11;
      uVar33 = *(uint *)((long)pppppplVar11 + 4);
      uVar22 = (int)uVar33 / 2;
      lVar32 = CONCAT44(uVar33 + uVar22,uVar4);
      plVar14 = (long *)extraout_x8[1];
      if (plVar14 < (long *)extraout_x8[2]) {
        *plVar14 = (ulong)uVar22 << 0x20;
        plVar14[1] = lVar32;
        puVar35 = (ulong *)(plVar14 + 2);
      }
      else {
        lVar28 = (long)plVar14 - *extraout_x8;
        uVar19 = (lVar28 >> 4) + 1;
        if (uVar19 >> 0x3c != 0) {
          FUN_10a7a2e00();
LAB_10a775a88:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a775a8c);
          (*pcVar8)();
        }
        uVar18 = extraout_x8[2] - *extraout_x8;
        uVar25 = (long)uVar18 >> 3;
        if (uVar25 <= uVar19) {
          uVar25 = uVar19;
        }
        if (0x7fffffffffffffef < uVar18) {
          uVar25 = 0xfffffffffffffff;
        }
        plVar13 = extraout_x8;
        FUN_10a7a2e14();
        plVar14 = (long *)((long)plVar13 + lVar28);
        *plVar14 = (ulong)uVar22 << 0x20;
        plVar14[1] = lVar32;
        puVar35 = (ulong *)(plVar14 + 2);
        lVar28 = (long)plVar14 - (extraout_x8[1] - *extraout_x8);
        _memcpy(lVar28);
        lVar32 = *extraout_x8;
        *extraout_x8 = lVar28;
        extraout_x8[1] = (long)puVar35;
        extraout_x8[2] = (long)(plVar13 + uVar25 * 2);
        if (lVar32 != 0) {
          __ZdlPv();
        }
      }
      uVar19 = 0;
      extraout_x8[1] = (long)puVar35;
      uVar37 = 1;
      do {
        uVar4 = (int)uVar4 / 2;
        if ((int)uVar4 < 2) {
          uVar4 = 1;
        }
        uVar33 = (int)uVar33 / 2;
        if ((int)uVar33 < 2) {
          uVar33 = 1;
        }
        uVar25 = uVar19 | (ulong)(uVar22 - uVar33) << 0x20;
        uVar2 = uVar4 + (int)uVar19;
        uVar19 = (ulong)uVar2;
        uVar18 = CONCAT44(uVar22,uVar2);
        if (puVar35 < (ulong *)extraout_x8[2]) {
          puVar36 = puVar35 + 2;
          *puVar35 = uVar25;
          puVar35[1] = uVar18;
        }
        else {
          lVar32 = (long)puVar35 - *extraout_x8;
          uVar1 = (lVar32 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a7a2e00();
            goto LAB_10a775a88;
          }
          uVar21 = extraout_x8[2] - *extraout_x8;
          uVar24 = (long)uVar21 >> 3;
          if (uVar24 <= uVar1) {
            uVar24 = uVar1;
          }
          if (0x7fffffffffffffef < uVar21) {
            uVar24 = 0xfffffffffffffff;
          }
          plVar14 = extraout_x8;
          FUN_10a7a2e14();
          puVar35 = (ulong *)((long)plVar14 + lVar32);
          *(long **)(puVar9 + -200) = plVar14 + uVar24 * 2;
          *puVar35 = uVar25;
          puVar35[1] = uVar18;
          puVar36 = puVar35 + 2;
          lVar28 = (long)puVar35 - (extraout_x8[1] - *extraout_x8);
          _memcpy(lVar28);
          lVar32 = *extraout_x8;
          *extraout_x8 = lVar28;
          extraout_x8[1] = (long)puVar36;
          extraout_x8[2] = *(long *)(puVar9 + -200);
          if (lVar32 != 0) {
            __ZdlPv();
          }
        }
        extraout_x8[1] = (long)puVar36;
        uVar37 = uVar37 + 1;
        puVar35 = puVar36;
        if (uVar16 < uVar37) {
          return;
        }
      } while( true );
    }
    lVar28 = (long)param_1[2] - (long)*param_1 >> 4;
    uVar25 = lVar28 * 0x5555555555555556;
    if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
      uVar25 = uVar19;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar28 * -0x5555555555555555)) {
      uVar25 = 0x555555555555555;
    }
    *(long ********)(puVar9 + -0x38) = param_1;
    pppppplVar27 = pppppplVar23;
    FUN_10a7a2ef4();
    puVar3 = (undefined1 *)(uVar25 + lVar32);
    *puVar3 = *(undefined1 *)pppppplVar23;
    ppppplVar40 = pppppplVar23[1];
    *(long ******)(puVar3 + 0x10) = pppppplVar23[2];
    *(long ******)(puVar3 + 8) = ppppplVar40;
    ppppplVar40 = pppppplVar23[3];
    *(long ******)(puVar3 + 0x20) = pppppplVar23[4];
    *(long ******)(puVar3 + 0x18) = ppppplVar40;
    pppppplVar23[3] = (long *****)0x0;
    pppppplVar23[4] = (long *****)0x0;
    puVar3[0x28] = *(undefined1 *)(pppppplVar23 + 5);
    pppppplVar11 = (long ******)(puVar3 + 0x30);
    pppppplVar23 = *param_1;
    pppppplVar31 = param_1[1];
    FUN_10a7a2fa4(pppppplVar23,pppppplVar31,puVar3 + ((long)pppppplVar23 - (long)pppppplVar31));
    pppppplVar20 = *param_1;
    *param_1 = (long ******)(puVar3 + ((long)pppppplVar23 - (long)pppppplVar31));
    param_1[1] = pppppplVar11;
    pppppplVar23 = param_1[2];
    param_1[2] = (long ******)(uVar25 + (long)pppppplVar27 * 0x30);
    *(long *******)(puVar9 + -0x48) = pppppplVar20;
    *(long *******)(puVar9 + -0x40) = pppppplVar23;
    *(long *******)(puVar9 + -0x58) = pppppplVar20;
    *(long *******)(puVar9 + -0x50) = pppppplVar20;
    func_0x00010a7a3018(puVar9 + -0x58);
  }
  param_1[1] = pppppplVar11;
  return;
}



/* Entry: 10a774ca8; end: 10a775627;  */

/* WARNING: Possible PIC construction at 0x00010a775248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a7752b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a77524c) */
/* WARNING: Removing unreachable block (ram,0x00010a775254) */
/* WARNING: Removing unreachable block (ram,0x00010a775258) */
/* WARNING: Removing unreachable block (ram,0x00010a775260) */
/* WARNING: Removing unreachable block (ram,0x00010a775268) */
/* WARNING: Removing unreachable block (ram,0x00010a7752bc) */
/* WARNING: Removing unreachable block (ram,0x00010a7752c4) */
/* WARNING: Removing unreachable block (ram,0x00010a7752c8) */
/* WARNING: Removing unreachable block (ram,0x00010a7752d0) */
/* WARNING: Removing unreachable block (ram,0x00010a7752d8) */
/* WARNING: Removing unreachable block (ram,0x00010a7752dc) */
/* WARNING: Removing unreachable block (ram,0x00010a7752f4) */
/* WARNING: Removing unreachable block (ram,0x00010a7752fc) */
/* WARNING: Removing unreachable block (ram,0x00010a775300) */
/* WARNING: Removing unreachable block (ram,0x00010a775308) */
/* WARNING: Removing unreachable block (ram,0x00010a775310) */
/* WARNING: Removing unreachable block (ram,0x00010a775314) */
/* WARNING: Removing unreachable block (ram,0x00010a77532c) */
/* WARNING: Removing unreachable block (ram,0x00010a775334) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a774ca8(long *******param_1,long *******param_2,long *******param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  char cVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  code *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  long *******ppppppplVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  long ******pppppplVar18;
  long *extraout_x8;
  ulong uVar19;
  uint uVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  long ******pppppplVar23;
  ulong uVar24;
  long *******ppppppplVar25;
  long ******pppppplVar26;
  long lVar27;
  ulong uVar28;
  long *******ppppppplVar29;
  long ******pppppplVar30;
  long lVar31;
  long ******unaff_x22;
  long ******unaff_x23;
  uint uVar32;
  long *******unaff_x24;
  long *******ppppppplVar33;
  undefined **unaff_x25;
  ulong *puVar34;
  ulong *puVar35;
  long ******unaff_x26;
  uint uVar36;
  long *******unaff_x27;
  long ******unaff_x28;
  ulong uVar37;
  undefined8 *******pppppppuVar38;
  undefined8 uVar39;
  long *****ppppplVar40;
  undefined4 uVar41;
  undefined1 auStack_1b0 [8];
  long ******pppppplStack_1a8;
  long ******pppppplStack_1a0;
  long ******pppppplStack_198;
  long ******pppppplStack_190;
  long *******ppppppplStack_188;
  long ******pppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  undefined8 *******pppppppuStack_160;
  code *pcStack_158;
  undefined1 auStack_150 [8];
  long *******ppppppplStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  undefined1 uStack_118;
  undefined8 uStack_108;
  int iStack_100;
  int iStack_fc;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  undefined1 uStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long ******pppppplStack_d0;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long ******pppppplStack_98;
  long lStack_88;
  
  puVar9 = auStack_150;
  pppppppuVar38 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar23 = *param_3;
  ppppppplVar25 = param_1;
  if ((long)param_3[1] - (long)pppppplVar23 == 8) {
    if (pppppplVar23 == param_3[1]) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a77555c);
      (*pcVar8)();
    }
    FUN_10a77468c(&uStack_140,param_2,pppppplVar23,0);
    param_3 = (long *******)&ppppppplStack_c0;
    if (((int)uStack_140 < (int)uStack_138 && uStack_138._4_4_ != uStack_140._4_4_) &&
        ((int)uStack_138 <= (int)uStack_140 || uStack_140._4_4_ <= uStack_138._4_4_)) {
      ppppppplStack_c0 = (long *******)CONCAT71(ppppppplStack_c0._1_7_,1);
      ppppppplStack_b0 = uStack_138;
      ppppppplStack_b8 = uStack_140;
      ppppppplStack_a0 = ppppppplStack_128;
      ppppppplStack_a8 = ppppppplStack_130;
      if (ppppppplStack_128 != (long *******)0x0) {
        ppppppplVar11 = ppppppplStack_128 + 1;
        do {
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
          if (bVar10) {
            *ppppppplVar11 = (long ******)((long)*ppppppplVar11 + 1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      pppppplStack_98 = (long ******)CONCAT71(pppppplStack_98._1_7_,ppppppplStack_120._0_1_);
    }
    else {
      unaff_x22 = (long ******)&uStack_140;
      if ((*(int *)(ppppppplStack_130 + 5) - *(int *)(ppppppplStack_130 + 4) < 0x800) &&
         (*(int *)((long)ppppppplStack_130 + 0x2c) - *(int *)((long)ppppppplStack_130 + 0x24) <
          0x800)) {
        ppppppplStack_c0 = (long *******)CONCAT71(ppppppplStack_c0._1_7_,2);
        ppppppplStack_b8 = (long *******)0x0;
        ppppppplStack_b0 = (long *******)0x0;
        ppppppplVar11 = (long *******)0x68;
        __Znwm();
      }
      else {
        ppppppplStack_c0 = (long *******)CONCAT71(ppppppplStack_c0._1_7_,3);
        ppppppplStack_b8 = (long *******)0x0;
        ppppppplStack_b0 = (long *******)0x0;
        ppppppplVar11 = (long *******)0x68;
        __Znwm();
      }
      ppppppplVar11[1] = (long ******)0x0;
      ppppppplVar11[2] = (long ******)0x0;
      *ppppppplVar11 = (long ******)&PTR_FUN_110c183d0;
      ppppppplVar11[6] = (long ******)0x0;
      ppppppplVar11[5] = (long ******)0x0;
      ppppppplVar11[8] = (long ******)0x0;
      ppppppplVar11[7] = (long ******)0x0;
      ppppppplVar11[10] = (long ******)0x0;
      ppppppplVar11[9] = (long ******)0x0;
      ppppppplVar11[0xc] = (long ******)0x0;
      ppppppplVar11[0xb] = (long ******)0x0;
      ppppppplStack_a8 = ppppppplVar11 + 3;
      ppppppplVar11[4] = (long ******)0x0;
      *ppppppplStack_a8 = (long ******)0x0;
      pppppplStack_98 = (long ******)((ulong)pppppplStack_98 & 0xffffffffffffff00);
      ppppppplStack_a0 = ppppppplVar11;
    }
    ppppppplVar11 = ppppppplStack_128;
    if (ppppppplStack_128 != (long *******)0x0) {
      ppppppplVar29 = ppppppplStack_128 + 1;
      do {
        pppppplVar21 = *ppppppplVar29;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar29,0x10);
        if (bVar10) {
          *ppppppplVar29 = (long ******)((long)pppppplVar21 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar21 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_128)[2])(ppppppplStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppplVar11);
      }
    }
    *param_1 = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    param_2 = (long *******)0x30;
    __Znwm();
    ppppppplVar29 = ppppppplStack_a0;
    *param_1 = (long ******)param_2;
    param_1[1] = (long ******)param_2;
    ppppppplVar11 = param_2 + 6;
    param_1[2] = (long ******)ppppppplVar11;
    *(undefined1 *)param_2 = ppppppplStack_c0._0_1_;
    param_2[2] = (long ******)ppppppplStack_b0;
    param_2[1] = (long ******)ppppppplStack_b8;
    param_2[4] = (long ******)ppppppplStack_a0;
    param_2[3] = (long ******)ppppppplStack_a8;
    if (ppppppplStack_a0 == (long *******)0x0) {
      *(undefined1 *)(param_2 + 5) = pppppplStack_98._0_1_;
      param_1[1] = (long ******)ppppppplVar11;
    }
    else {
      ppppppplVar33 = ppppppplStack_a0 + 1;
      do {
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
        if (bVar10) {
          *ppppppplVar33 = (long ******)((long)*ppppppplVar33 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined1 *)(param_2 + 5) = pppppplStack_98._0_1_;
      param_1[1] = (long ******)ppppppplVar11;
      do {
        pppppplVar21 = *ppppppplVar33;
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
        if (bVar10) {
          *ppppppplVar33 = (long ******)((long)pppppplVar21 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pppppplVar21 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_a0)[2])(ppppppplStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        param_2 = ppppppplVar29;
      }
    }
  }
  else {
    unaff_x27 = param_2 + 0xd;
    pppppplVar21 = *unaff_x27;
    ppppppplStack_e0 = (long *******)0x0;
    ppppppplStack_d8 = (long *******)0x0;
    pppppplStack_d0 = (long ******)0x0;
    unaff_x23 = (long ******)((long)param_2[0xe] - (long)pppppplVar21);
    if (unaff_x23 != (long ******)0x0) {
      FUN_10a7a2dc8(&ppppppplStack_e0,(long)unaff_x23 >> 4);
      unaff_x24 = ppppppplStack_d8;
      _memmove(ppppppplStack_d8,pppppplVar21,unaff_x23);
      ppppppplStack_d8 = (long *******)((long)unaff_x24 + (long)unaff_x23);
      pppppplVar23 = pppppplVar21;
    }
    ppppppplStack_a8 = (long *******)0x0;
    ppppppplStack_b0 = (long *******)0x0;
    pppppplStack_98 = (long ******)0x0;
    ppppppplStack_a0 = (long *******)0x0;
    ppppppplStack_b8 = (long *******)0x0;
    ppppppplStack_c0 = (long *******)0x0;
    pppppplVar21 = param_2[8];
    if (param_2[9] != pppppplVar21) {
      pppppplVar22 = param_2[0xb];
      uVar28 = (ulong)pppppplVar22 >> 7 & 0x1fffffffffffff8;
      unaff_x23 = (long ******)((long)pppppplVar21 + uVar28);
      unaff_x24 = (long *******)((long)*unaff_x23 + ((ulong)pppppplVar22 & 0x3ff) * 4);
      uVar37 = (ulong)((long)param_2[0xc] + (long)pppppplVar22) >> 7 & 0x1fffffffffffff8;
      uVar17 = (long)param_2[0xc] + (long)pppppplVar22 & 0x3ff;
      if (((long *******)(*(long *)((long)pppppplVar21 + uVar37) + uVar17 * 4) != unaff_x24) &&
         (unaff_x25 = (undefined **)
                      ((uVar17 | (uVar37 - uVar28) * 0x80) - ((ulong)pppppplVar22 & 0x3ff)),
         unaff_x25 != (undefined **)0x0)) {
        ppppppplVar25 = (long *******)((long)unaff_x25 + 1U >> 10);
        if (((long)unaff_x25 + 1U & 0x3ff) != 0) {
          ppppppplVar25 = (long *******)((long)ppppppplVar25 + 1);
        }
        if (unaff_x25 == (undefined **)0xffffffffffffffff) {
          pppppplVar23 = (long ******)0x0;
          ppppppplVar25 = (long *******)0x0;
        }
        else {
          ppppppplStack_120 = (long *******)&ppppppplStack_c0;
          ppppppplVar11 = ppppppplVar25;
          func_0x00010a7ad260();
          ppppppplStack_128 = ppppppplVar11 + (long)pppppplVar23;
          lVar31 = -(long)ppppppplVar25;
          uStack_140 = ppppppplVar11;
          uStack_138 = ppppppplVar11;
          ppppppplStack_130 = ppppppplVar11;
          do {
            ppppppplVar25 = (long *******)0x1000;
            __Znwm();
            uStack_108 = ppppppplVar25;
            func_0x000108a55830(&uStack_140,&uStack_108);
            bVar10 = lVar31 != -1;
            lVar31 = lVar31 + 1;
          } while (bVar10);
          lVar31 = -7 - (long)ppppppplStack_b0;
          ppppppplVar25 = ppppppplStack_b0;
          while (ppppppplVar7 = ppppppplStack_a8, ppppppplVar6 = ppppppplStack_b0,
                ppppppplVar33 = ppppppplStack_c0, ppppppplVar29 = uStack_138,
                ppppppplVar11 = uStack_140, ppppppplVar25 != ppppppplStack_b8) {
            ppppppplVar25 = ppppppplVar25 + -1;
            lVar31 = lVar31 + 8;
            func_0x000108a558c4(&uStack_140,ppppppplVar25);
          }
          uStack_140 = ppppppplStack_c0;
          uStack_138 = ppppppplStack_b8;
          ppppppplStack_b8 = ppppppplVar29;
          ppppppplStack_c0 = ppppppplVar11;
          ppppppplStack_a8 = ppppppplStack_128;
          ppppppplStack_b0 = ppppppplStack_130;
          ppppppplStack_128 = ppppppplVar7;
          ppppppplStack_130 = ppppppplVar6;
          if (ppppppplVar25 != ppppppplVar6) {
            ppppppplStack_130 =
                 (long *******)
                 ((long)ppppppplVar6 + (-((long)ppppppplVar6 + lVar31) & 0xfffffffffffffff8U));
          }
          if (ppppppplVar33 != (long *******)0x0) {
            __ZdlPv();
          }
          ppppppplVar25 =
               ppppppplStack_b8 + ((ulong)((long)pppppplStack_98 + (long)ppppppplStack_a0) >> 10);
          if (ppppppplStack_b0 == ppppppplStack_b8) {
            pppppplVar23 = (long ******)0x0;
          }
          else {
            pppppplVar23 = (long ******)
                           ((long)*ppppppplVar25 +
                           ((long)pppppplStack_98 + (long)ppppppplStack_a0 & 0x3ffU) * 4);
          }
        }
        pppppplVar21 = *ppppppplVar25;
        uVar17 = (long)unaff_x25 + ((long)pppppplVar23 - (long)pppppplVar21 >> 2);
        if ((long)uVar17 < 1) {
          uVar28 = 0x3ff - uVar17;
          uVar17 = (ulong)~(uint)uVar28;
          lVar31 = (uVar28 >> 10) * -8;
        }
        else {
          lVar31 = (uVar17 >> 10) * 8;
        }
        ppppppplVar11 = (long *******)((long)ppppppplVar25 + lVar31);
        pppppplVar22 = (long ******)((long)*ppppppplVar11 + (uVar17 & 0x3ff) * 4);
        while (pppppplVar23 != pppppplVar22) {
          pppppplVar26 = pppppplVar22;
          if (ppppppplVar25 != ppppppplVar11) {
            pppppplVar26 = pppppplVar21 + 0x200;
          }
          pppppplVar21 = pppppplVar23;
          if (pppppplVar23 != pppppplVar26) {
            ppppppplVar29 = (long *******)*unaff_x23;
            pppppplVar18 = pppppplVar23;
            do {
              ppppppplVar33 = (long *******)((long)unaff_x24 + 4);
              pppppplVar30 = (long ******)((long)pppppplVar18 + 4);
              *(undefined4 *)pppppplVar18 = *(undefined4 *)unaff_x24;
              unaff_x24 = ppppppplVar33;
              if ((long)ppppppplVar33 - (long)ppppppplVar29 == 0x1000) {
                unaff_x23 = unaff_x23 + 1;
                ppppppplVar29 = (long *******)*unaff_x23;
                unaff_x24 = ppppppplVar29;
              }
              pppppplVar21 = pppppplVar26;
              pppppplVar18 = pppppplVar30;
            } while (pppppplVar30 != pppppplVar26);
          }
          pppppplStack_98 =
               (long ******)((long)pppppplStack_98 + ((long)pppppplVar21 - (long)pppppplVar23 >> 2))
          ;
          if (ppppppplVar25 == ppppppplVar11) break;
          ppppppplVar25 = ppppppplVar25 + 1;
          pppppplVar21 = *ppppppplVar25;
          pppppplVar23 = pppppplVar21;
        }
      }
    }
    uVar41 = *(undefined4 *)(param_2 + 0x12);
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    *param_1 = (long ******)0x0;
    pppppplVar23 = (long ******)((long)param_3[1] - (long)*param_3 >> 3);
    ppppppplStack_148 = unaff_x27;
    FUN_10a775628(param_1);
    ppppppplVar25 = ppppppplStack_148;
    unaff_x22 = *param_3;
    unaff_x26 = param_3[1];
    if (unaff_x22 != unaff_x26) {
      unaff_x24 = (long *******)&uStack_140;
      unaff_x25 = &PTR_FUN_110c183d0;
      FUN_10a77468c(&uStack_108,param_2,unaff_x22,0);
      unaff_x27 = (long *******)
                  (ulong)(iStack_100 <= (int)uStack_108 || iStack_fc <= uStack_108._4_4_);
      if (((int)uStack_108 < iStack_100 && iStack_fc != uStack_108._4_4_) &&
          (iStack_100 <= (int)uStack_108 || uStack_108._4_4_ <= iStack_fc)) {
        FUN_10a773954(param_2,ppppppplStack_f8 + 4);
        uStack_140 = (long *******)CONCAT71(uStack_140._1_7_,1);
        ppppppplStack_130 = (long *******)CONCAT44(iStack_fc,iStack_100);
        uStack_138 = uStack_108;
        ppppppplStack_128 = ppppppplStack_f8;
        ppppppplStack_120 = ppppppplStack_f0;
        if (ppppppplStack_f0 != (long *******)0x0) {
          ppppppplStack_f0 = ppppppplStack_f0 + 1;
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppppplStack_f0,0x10);
            if (bVar10) {
              *ppppppplStack_f0 = (long ******)((long)*ppppppplStack_f0 + 1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uStack_118 = uStack_e8;
        pppppplVar23 = (long ******)&uStack_140;
        uVar39 = 0x10a7752bc;
        ppppppplVar25 = param_1;
      }
      else {
        uVar15 = 2;
        if (0x7ff < *(int *)((long)ppppppplStack_f8 + 0x2c) -
                    *(int *)((long)ppppppplStack_f8 + 0x24) ||
            0x7ff < *(int *)(ppppppplStack_f8 + 5) - *(int *)(ppppppplStack_f8 + 4)) {
          uVar15 = 3;
        }
        unaff_x28 = *param_1;
        pppppplVar23 = param_1[1];
        while (pppppplVar23 != unaff_x28) {
          FUN_10a350abc(pppppplVar23 + -3);
          pppppplVar23 = pppppplVar23 + -6;
          unaff_x23 = pppppplVar23;
        }
        param_1[1] = unaff_x28;
        uStack_140._1_7_ = (undefined7)((ulong)uStack_140 >> 8);
        uStack_140 = (long *******)CONCAT71(uStack_140._1_7_,(char)uVar15);
        uStack_138 = (long *******)0x0;
        ppppppplStack_130 = (long *******)0x0;
        ppppppplVar25 = (long *******)0x68;
        __Znwm();
        ppppppplVar25[1] = (long ******)0x0;
        ppppppplVar25[2] = (long ******)0x0;
        *ppppppplVar25 = (long ******)&PTR_FUN_110c183d0;
        ppppppplVar25[6] = (long ******)0x0;
        ppppppplVar25[5] = (long ******)0x0;
        ppppppplVar25[8] = (long ******)0x0;
        ppppppplVar25[7] = (long ******)0x0;
        ppppppplVar25[10] = (long ******)0x0;
        ppppppplVar25[9] = (long ******)0x0;
        ppppppplVar25[0xc] = (long ******)0x0;
        ppppppplVar25[0xb] = (long ******)0x0;
        ppppppplVar25[4] = (long ******)0x0;
        ppppppplVar25[3] = (long ******)0x0;
        ppppppplStack_128 = ppppppplVar25 + 3;
        ppppppplStack_120 = ppppppplVar25;
        uStack_118 = 0;
        pppppplVar23 = (long ******)&uStack_140;
        uVar39 = 0x10a77524c;
        puVar9 = auStack_150;
        ppppppplVar25 = param_1;
        ppppppplStack_f8 = (long *******)(ulong)uVar15;
      }
      goto SUB_10a7756e4;
    }
    if (*ppppppplStack_148 != (long ******)0x0) {
      param_2[0xe] = *ppppppplStack_148;
      __ZdlPv();
      *ppppppplVar25 = (long ******)0x0;
      ppppppplVar25[1] = (long ******)0x0;
      ppppppplVar25[2] = (long ******)0x0;
    }
    param_2[0xe] = (long ******)ppppppplStack_d8;
    param_2[0xd] = (long ******)ppppppplStack_e0;
    param_2[0xf] = pppppplStack_d0;
    ppppppplStack_d8 = (long *******)0x0;
    pppppplStack_d0 = (long ******)0x0;
    ppppppplStack_e0 = (long *******)0x0;
    pppppplVar21 = param_2[8];
    pppppplVar22 = param_2[9];
    param_2[0xc] = (long ******)0x0;
    lVar31 = (long)pppppplVar22 - (long)pppppplVar21;
    while (uVar17 = lVar31 >> 3, 2 < uVar17) {
      __ZdlPv(*pppppplVar21);
      pppppplVar22 = param_2[9];
      pppppplVar21 = param_2[8] + 1;
      param_2[8] = pppppplVar21;
      lVar31 = (long)pppppplVar22 - (long)pppppplVar21;
    }
    if (uVar17 == 1) {
      pppppplVar26 = (long ******)0x200;
LAB_10a7753c8:
      param_2[0xb] = pppppplVar26;
    }
    else if (uVar17 == 2) {
      pppppplVar26 = (long ******)0x400;
      goto LAB_10a7753c8;
    }
    if (param_2[0xc] == (long ******)0x0) {
      while (pppppplVar22 != pppppplVar21) {
        __ZdlPv(pppppplVar22[-1]);
        pppppplVar21 = param_2[8];
        pppppplVar22 = param_2[9] + -1;
        param_2[9] = pppppplVar22;
      }
      param_2[0xb] = (long ******)0x0;
    }
    else {
      if ((long ******)0x3ff < param_2[0xb]) {
        __ZdlPv(*pppppplVar21);
        param_2[8] = param_2[8] + 1;
        param_2[0xb] = param_2[0xb] + -0x80;
      }
      pppppplVar23 = (long ******)0x0;
      func_0x00010a7ad294(param_2 + 7);
    }
    FUN_10a7ad2fc(param_2 + 7);
    pppppplVar21 = param_2[9];
    if (pppppplVar21 != param_2[8]) {
      param_2[9] = (long ******)
                   ((long)pppppplVar21 +
                   ((long)param_2[8] + (7 - (long)pppppplVar21) & 0xfffffffffffffff8U));
    }
    FUN_10a7ad2fc(param_2 + 7);
    param_2[8] = (long ******)ppppppplStack_b8;
    param_2[7] = (long ******)ppppppplStack_c0;
    param_2[10] = (long ******)ppppppplStack_a8;
    param_2[9] = (long ******)ppppppplStack_b0;
    ppppppplStack_b8 = (long *******)0x0;
    ppppppplStack_c0 = (long *******)0x0;
    ppppppplStack_a8 = (long *******)0x0;
    ppppppplStack_b0 = (long *******)0x0;
    param_2[0xc] = pppppplStack_98;
    param_2[0xb] = (long ******)ppppppplStack_a0;
    ppppppplStack_a0 = (long *******)0x0;
    pppppplStack_98 = (long ******)0x0;
    *(undefined4 *)(param_2 + 0x12) = uVar41;
    FUN_10a7a2e48(&ppppppplStack_c0);
    param_2 = ppppppplStack_e0;
    if (ppppppplStack_e0 != (long *******)0x0) {
      ppppppplStack_d8 = ppppppplStack_e0;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (ppppppplStack_b0 != ppppppplStack_b8) {
    ppppppplStack_b0 =
         (long *******)
         ((long)ppppppplStack_b0 +
         ((long)ppppppplStack_b8 + (7 - (long)ppppppplStack_b0) & 0xfffffffffffffff8U));
  }
  if (ppppppplStack_c0 != (long *******)0x0) {
    __ZdlPv();
  }
  if (ppppppplStack_e0 != (long *******)0x0) {
    ppppppplStack_d8 = ppppppplStack_e0;
    __ZdlPv();
  }
  param_1 = param_2;
  __Unwind_Resume();
  pcStack_158 = FUN_10a775628;
  pppppplVar21 = *param_1;
  if (pppppplVar23 <=
      (long ******)(((long)param_1[2] - (long)pppppplVar21 >> 4) * -0x5555555555555555)) {
    return;
  }
  pppppplStack_180 = unaff_x22;
  ppppppplStack_178 = param_3;
  ppppppplStack_170 = param_2;
  ppppppplStack_168 = ppppppplVar25;
  pppppppuStack_160 = pppppppuVar38;
  if (pppppplVar23 < (long ******)0x555555555555556) {
    pppppplVar22 = param_1[1];
    pppppplVar26 = pppppplVar23;
    ppppppplStack_188 = param_1;
    FUN_10a7a2ef4();
    pppppplVar21 = (long ******)((long)pppppplVar23 + ((long)pppppplVar22 - (long)pppppplVar21));
    pppppplVar22 = (long ******)((long)pppppplVar21 + ((long)*param_1 - (long)param_1[1]));
    FUN_10a7a2fa4(*param_1,param_1[1],pppppplVar22);
    pppppplStack_1a8 = *param_1;
    *param_1 = pppppplVar22;
    param_1[1] = pppppplVar21;
    pppppplStack_190 = param_1[2];
    param_1[2] = pppppplVar23 + (long)pppppplVar26 * 6;
    pppppplStack_1a0 = pppppplStack_1a8;
    pppppplStack_198 = pppppplStack_1a8;
    func_0x00010a7a3018(&pppppplStack_1a8);
    return;
  }
  uVar39 = 0x10a7756e4;
  FUN_10a7a2ee0();
  puVar9 = auStack_1b0;
  ppppppplStack_f8 = param_3;
  pppppppuVar38 = &pppppppuStack_160;
SUB_10a7756e4:
  *(long *******)(puVar9 + -0x30) = unaff_x22;
  *(long ********)(puVar9 + -0x28) = ppppppplStack_f8;
  *(long ********)(puVar9 + -0x20) = param_2;
  *(long ********)(puVar9 + -0x18) = ppppppplVar25;
  *(undefined8 ********)(puVar9 + -0x10) = pppppppuVar38;
  *(undefined8 *)(puVar9 + -8) = uVar39;
  pppppplVar21 = param_1[1];
  if (pppppplVar21 < param_1[2]) {
    *(undefined1 *)pppppplVar21 = *(undefined1 *)pppppplVar23;
    ppppplVar40 = pppppplVar23[1];
    pppppplVar21[2] = pppppplVar23[2];
    pppppplVar21[1] = ppppplVar40;
    ppppplVar40 = pppppplVar23[3];
    pppppplVar21[4] = pppppplVar23[4];
    pppppplVar21[3] = ppppplVar40;
    pppppplVar23[3] = (long *****)0x0;
    pppppplVar23[4] = (long *****)0x0;
    *(undefined1 *)(pppppplVar21 + 5) = *(undefined1 *)(pppppplVar23 + 5);
    pppppplVar21 = pppppplVar21 + 6;
  }
  else {
    lVar31 = (long)pppppplVar21 - (long)*param_1;
    uVar17 = (lVar31 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar17) {
      pppppplVar21 = pppppplVar23;
      FUN_10a7a2ee0();
      *(long *******)(puVar9 + -0xc0) = unaff_x28;
      *(long ********)(puVar9 + -0xb8) = unaff_x27;
      *(long *******)(puVar9 + -0xb0) = unaff_x26;
      *(undefined ***)(puVar9 + -0xa8) = unaff_x25;
      *(long ********)(puVar9 + -0xa0) = unaff_x24;
      *(long *******)(puVar9 + -0x98) = unaff_x23;
      *(long *******)(puVar9 + -0x90) = unaff_x22;
      *(long *)(puVar9 + -0x88) = lVar31;
      *(long *******)(puVar9 + -0x80) = pppppplVar23;
      *(long ********)(puVar9 + -0x78) = param_1;
      *(undefined1 **)(puVar9 + -0x70) = puVar9 + -0x10;
      *(code **)(puVar9 + -0x68) = FUN_10a775818;
      if ((*(uint *)((long)pppppplVar21 + 4) | *(uint *)pppppplVar21) < 2) {
        uVar15 = 1;
      }
      else {
        iVar16 = -1;
        uVar20 = *(uint *)pppppplVar21;
        uVar15 = *(uint *)((long)pppppplVar21 + 4);
        do {
          uVar32 = uVar15;
          uVar4 = uVar20 >> 1;
          if (uVar4 < 2) {
            uVar4 = 1;
          }
          uVar15 = uVar32 >> 1;
          if (uVar15 < 2) {
            uVar15 = 1;
          }
          iVar16 = iVar16 + -1;
          bVar10 = 3 < uVar20;
          uVar20 = uVar4;
        } while ((bVar10) || (3 < uVar32));
        if (iVar16 == 0) {
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          puVar14 = (undefined8 *)0x10;
          __Znwm();
          extraout_x8[1] = (long)(puVar14 + 2);
          extraout_x8[2] = (long)(puVar14 + 2);
          *puVar14 = 0;
          puVar14[1] = 0;
          *extraout_x8 = (long)puVar14;
          return;
        }
        uVar15 = -iVar16;
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      FUN_10a775ab4(extraout_x8,uVar15 + 1);
      uVar4 = *(uint *)pppppplVar21;
      uVar32 = *(uint *)((long)pppppplVar21 + 4);
      uVar20 = (int)uVar32 / 2;
      lVar31 = CONCAT44(uVar32 + uVar20,uVar4);
      plVar13 = (long *)extraout_x8[1];
      if (plVar13 < (long *)extraout_x8[2]) {
        *plVar13 = (ulong)uVar20 << 0x20;
        plVar13[1] = lVar31;
        puVar34 = (ulong *)(plVar13 + 2);
      }
      else {
        lVar27 = (long)plVar13 - *extraout_x8;
        uVar17 = (lVar27 >> 4) + 1;
        if (uVar17 >> 0x3c != 0) {
          FUN_10a7a2e00();
LAB_10a775a88:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a775a8c);
          (*pcVar8)();
        }
        uVar37 = extraout_x8[2] - *extraout_x8;
        uVar28 = (long)uVar37 >> 3;
        if (uVar28 <= uVar17) {
          uVar28 = uVar17;
        }
        if (0x7fffffffffffffef < uVar37) {
          uVar28 = 0xfffffffffffffff;
        }
        plVar12 = extraout_x8;
        FUN_10a7a2e14();
        plVar13 = (long *)((long)plVar12 + lVar27);
        *plVar13 = (ulong)uVar20 << 0x20;
        plVar13[1] = lVar31;
        puVar34 = (ulong *)(plVar13 + 2);
        lVar27 = (long)plVar13 - (extraout_x8[1] - *extraout_x8);
        _memcpy(lVar27);
        lVar31 = *extraout_x8;
        *extraout_x8 = lVar27;
        extraout_x8[1] = (long)puVar34;
        extraout_x8[2] = (long)(plVar12 + uVar28 * 2);
        if (lVar31 != 0) {
          __ZdlPv();
        }
      }
      uVar17 = 0;
      extraout_x8[1] = (long)puVar34;
      uVar36 = 1;
      do {
        uVar4 = (int)uVar4 / 2;
        if ((int)uVar4 < 2) {
          uVar4 = 1;
        }
        uVar32 = (int)uVar32 / 2;
        if ((int)uVar32 < 2) {
          uVar32 = 1;
        }
        uVar28 = uVar17 | (ulong)(uVar20 - uVar32) << 0x20;
        uVar2 = uVar4 + (int)uVar17;
        uVar17 = (ulong)uVar2;
        uVar37 = CONCAT44(uVar20,uVar2);
        if (puVar34 < (ulong *)extraout_x8[2]) {
          puVar35 = puVar34 + 2;
          *puVar34 = uVar28;
          puVar34[1] = uVar37;
        }
        else {
          lVar31 = (long)puVar34 - *extraout_x8;
          uVar1 = (lVar31 >> 4) + 1;
          if (uVar1 >> 0x3c != 0) {
            FUN_10a7a2e00();
            goto LAB_10a775a88;
          }
          uVar19 = extraout_x8[2] - *extraout_x8;
          uVar24 = (long)uVar19 >> 3;
          if (uVar24 <= uVar1) {
            uVar24 = uVar1;
          }
          if (0x7fffffffffffffef < uVar19) {
            uVar24 = 0xfffffffffffffff;
          }
          plVar13 = extraout_x8;
          FUN_10a7a2e14();
          puVar34 = (ulong *)((long)plVar13 + lVar31);
          *(long **)(puVar9 + -200) = plVar13 + uVar24 * 2;
          *puVar34 = uVar28;
          puVar34[1] = uVar37;
          puVar35 = puVar34 + 2;
          lVar27 = (long)puVar34 - (extraout_x8[1] - *extraout_x8);
          _memcpy(lVar27);
          lVar31 = *extraout_x8;
          *extraout_x8 = lVar27;
          extraout_x8[1] = (long)puVar35;
          extraout_x8[2] = *(long *)(puVar9 + -200);
          if (lVar31 != 0) {
            __ZdlPv();
          }
        }
        extraout_x8[1] = (long)puVar35;
        uVar36 = uVar36 + 1;
        puVar34 = puVar35;
        if (uVar15 < uVar36) {
          return;
        }
      } while( true );
    }
    lVar27 = (long)param_1[2] - (long)*param_1 >> 4;
    uVar28 = lVar27 * 0x5555555555555556;
    if (uVar28 < uVar17 || uVar28 - uVar17 == 0) {
      uVar28 = uVar17;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar27 * -0x5555555555555555)) {
      uVar28 = 0x555555555555555;
    }
    *(long ********)(puVar9 + -0x38) = param_1;
    pppppplVar26 = pppppplVar23;
    FUN_10a7a2ef4();
    puVar3 = (undefined1 *)(uVar28 + lVar31);
    *puVar3 = *(undefined1 *)pppppplVar23;
    ppppplVar40 = pppppplVar23[1];
    *(long ******)(puVar3 + 0x10) = pppppplVar23[2];
    *(long ******)(puVar3 + 8) = ppppplVar40;
    ppppplVar40 = pppppplVar23[3];
    *(long ******)(puVar3 + 0x20) = pppppplVar23[4];
    *(long ******)(puVar3 + 0x18) = ppppplVar40;
    pppppplVar23[3] = (long *****)0x0;
    pppppplVar23[4] = (long *****)0x0;
    puVar3[0x28] = *(undefined1 *)(pppppplVar23 + 5);
    pppppplVar21 = (long ******)(puVar3 + 0x30);
    pppppplVar23 = *param_1;
    pppppplVar22 = param_1[1];
    FUN_10a7a2fa4(pppppplVar23,pppppplVar22,puVar3 + ((long)pppppplVar23 - (long)pppppplVar22));
    pppppplVar18 = *param_1;
    *param_1 = (long ******)(puVar3 + ((long)pppppplVar23 - (long)pppppplVar22));
    param_1[1] = pppppplVar21;
    pppppplVar23 = param_1[2];
    param_1[2] = (long ******)(uVar28 + (long)pppppplVar26 * 0x30);
    *(long *******)(puVar9 + -0x48) = pppppplVar18;
    *(long *******)(puVar9 + -0x40) = pppppplVar23;
    *(long *******)(puVar9 + -0x58) = pppppplVar18;
    *(long *******)(puVar9 + -0x50) = pppppplVar18;
    func_0x00010a7a3018(puVar9 + -0x58);
  }
  param_1[1] = pppppplVar21;
  return;
}



/* Entry: 10a775628; end: 10a775817;  */

void FUN_10a775628(long *param_1,uint *param_2)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *extraout_x8;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  ulong *puVar22;
  ulong *puVar23;
  uint uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar12 = *param_1;
  if (param_2 <= (uint *)((param_1[2] - lVar12 >> 4) * -0x5555555555555555)) {
    return;
  }
  if (param_2 < (uint *)0x555555555555556) {
    lVar16 = param_1[1];
    puVar10 = param_2;
    plStack_38 = param_1;
    FUN_10a7a2ef4();
    lVar12 = (long)param_2 + (lVar16 - lVar12);
    lVar16 = lVar12 + (*param_1 - param_1[1]);
    FUN_10a7a2fa4(*param_1,param_1[1],lVar16);
    lStack_58 = *param_1;
    *param_1 = lVar16;
    param_1[1] = lVar12;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)puVar10 * 0xc);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a7a3018(&lStack_58);
    return;
  }
  FUN_10a7a2ee0();
  puVar20 = (undefined1 *)param_1[1];
  if (puVar20 < (undefined1 *)param_1[2]) {
    *puVar20 = (char)*param_2;
    uVar26 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar20 + 0x10) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar20 + 8) = uVar26;
    uVar26 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar20 + 0x20) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar20 + 0x18) = uVar26;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    puVar20[0x28] = (char)param_2[10];
    puVar20 = puVar20 + 0x30;
  }
  else {
    lVar12 = (long)puVar20 - *param_1;
    uVar13 = (lVar12 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar13) {
      FUN_10a7a2ee0();
      if ((param_2[1] | *param_2) < 2) {
        uVar19 = 1;
      }
      else {
        iVar11 = -1;
        uVar15 = *param_2;
        uVar19 = param_2[1];
        do {
          uVar21 = uVar19;
          uVar5 = uVar15 >> 1;
          if (uVar5 < 2) {
            uVar5 = 1;
          }
          uVar19 = uVar21 >> 1;
          if (uVar19 < 2) {
            uVar19 = 1;
          }
          iVar11 = iVar11 + -1;
          bVar1 = 3 < uVar15;
          uVar15 = uVar5;
        } while ((bVar1) || (3 < uVar21));
        if (iVar11 == 0) {
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          puVar9 = (undefined8 *)0x10;
          __Znwm();
          extraout_x8[1] = (long)(puVar9 + 2);
          extraout_x8[2] = (long)(puVar9 + 2);
          *puVar9 = 0;
          puVar9[1] = 0;
          *extraout_x8 = (long)puVar9;
          return;
        }
        uVar19 = -iVar11;
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      FUN_10a775ab4(extraout_x8,uVar19 + 1);
      uVar5 = *param_2;
      uVar21 = param_2[1];
      uVar15 = (int)uVar21 / 2;
      lVar12 = CONCAT44(uVar21 + uVar15,uVar5);
      plVar8 = (long *)extraout_x8[1];
      if (plVar8 < (long *)extraout_x8[2]) {
        *plVar8 = (ulong)uVar15 << 0x20;
        plVar8[1] = lVar12;
        puVar22 = (ulong *)(plVar8 + 2);
      }
      else {
        lVar16 = (long)plVar8 - *extraout_x8;
        uVar13 = (lVar16 >> 4) + 1;
        if (uVar13 >> 0x3c != 0) {
          FUN_10a7a2e00();
LAB_10a775a88:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a775a8c);
          (*pcVar6)();
        }
        uVar25 = extraout_x8[2] - *extraout_x8;
        uVar18 = (long)uVar25 >> 3;
        if (uVar18 <= uVar13) {
          uVar18 = uVar13;
        }
        if (0x7fffffffffffffef < uVar25) {
          uVar18 = 0xfffffffffffffff;
        }
        plVar7 = extraout_x8;
        FUN_10a7a2e14();
        plVar8 = (long *)((long)plVar7 + lVar16);
        *plVar8 = (ulong)uVar15 << 0x20;
        plVar8[1] = lVar12;
        puVar22 = (ulong *)(plVar8 + 2);
        lVar16 = (long)plVar8 - (extraout_x8[1] - *extraout_x8);
        _memcpy(lVar16);
        lVar12 = *extraout_x8;
        *extraout_x8 = lVar16;
        extraout_x8[1] = (long)puVar22;
        extraout_x8[2] = (long)(plVar7 + uVar18 * 2);
        if (lVar12 != 0) {
          __ZdlPv();
        }
      }
      uVar13 = 0;
      extraout_x8[1] = (long)puVar22;
      uVar24 = 1;
      do {
        uVar5 = (int)uVar5 / 2;
        if ((int)uVar5 < 2) {
          uVar5 = 1;
        }
        uVar21 = (int)uVar21 / 2;
        if ((int)uVar21 < 2) {
          uVar21 = 1;
        }
        uVar18 = uVar13 | (ulong)(uVar15 - uVar21) << 0x20;
        uVar3 = uVar5 + (int)uVar13;
        uVar13 = (ulong)uVar3;
        uVar25 = CONCAT44(uVar15,uVar3);
        if (puVar22 < (ulong *)extraout_x8[2]) {
          puVar23 = puVar22 + 2;
          *puVar22 = uVar18;
          puVar22[1] = uVar25;
        }
        else {
          lVar12 = (long)puVar22 - *extraout_x8;
          uVar2 = (lVar12 >> 4) + 1;
          if (uVar2 >> 0x3c != 0) {
            FUN_10a7a2e00();
            goto LAB_10a775a88;
          }
          uVar14 = extraout_x8[2] - *extraout_x8;
          uVar17 = (long)uVar14 >> 3;
          if (uVar17 <= uVar2) {
            uVar17 = uVar2;
          }
          if (0x7fffffffffffffef < uVar14) {
            uVar17 = 0xfffffffffffffff;
          }
          plVar8 = extraout_x8;
          FUN_10a7a2e14();
          puVar22 = (ulong *)((long)plVar8 + lVar12);
          *puVar22 = uVar18;
          puVar22[1] = uVar25;
          puVar23 = puVar22 + 2;
          lVar16 = (long)puVar22 - (extraout_x8[1] - *extraout_x8);
          _memcpy(lVar16);
          lVar12 = *extraout_x8;
          *extraout_x8 = lVar16;
          extraout_x8[1] = (long)puVar23;
          extraout_x8[2] = (long)(plVar8 + uVar17 * 2);
          if (lVar12 != 0) {
            __ZdlPv();
          }
        }
        extraout_x8[1] = (long)puVar23;
        uVar24 = uVar24 + 1;
        puVar22 = puVar23;
        if (uVar19 < uVar24) {
          return;
        }
      } while( true );
    }
    lVar16 = param_1[2] - *param_1 >> 4;
    uVar18 = lVar16 * 0x5555555555555556;
    if (uVar18 < uVar13 || uVar18 - uVar13 == 0) {
      uVar18 = uVar13;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar16 * -0x5555555555555555)) {
      uVar18 = 0x555555555555555;
    }
    puVar10 = param_2;
    plStack_98 = param_1;
    FUN_10a7a2ef4();
    puVar4 = (undefined1 *)(uVar18 + lVar12);
    *puVar4 = (char)*param_2;
    uVar26 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar4 + 8) = uVar26;
    uVar26 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar4 + 0x18) = uVar26;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    puVar4[0x28] = (char)param_2[10];
    puVar20 = puVar4 + 0x30;
    lVar12 = *param_1;
    lVar16 = param_1[1];
    FUN_10a7a2fa4(lVar12,lVar16,puVar4 + (lVar12 - lVar16));
    lStack_b8 = *param_1;
    *param_1 = (long)(puVar4 + (lVar12 - lVar16));
    param_1[1] = (long)puVar20;
    lStack_a0 = param_1[2];
    param_1[2] = uVar18 + (long)puVar10 * 0x30;
    lStack_b0 = lStack_b8;
    lStack_a8 = lStack_b8;
    func_0x00010a7a3018(&lStack_b8);
  }
  param_1[1] = (long)puVar20;
  return;
}



/* Entry: 10a775818; end: 10a775ab3;  */

void FUN_10a775818(long *param_1,undefined8 param_2,uint *param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  
  if ((param_3[1] | *param_3) < 2) {
    uVar15 = 1;
  }
  else {
    iVar9 = -1;
    uVar11 = *param_3;
    uVar15 = param_3[1];
    do {
      uVar16 = uVar15;
      uVar4 = uVar11 >> 1;
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      uVar15 = uVar16 >> 1;
      if (uVar15 < 2) {
        uVar15 = 1;
      }
      iVar9 = iVar9 + -1;
      bVar1 = 3 < uVar11;
      uVar11 = uVar4;
    } while ((bVar1) || (3 < uVar16));
    if (iVar9 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar8 = (undefined8 *)0x10;
      __Znwm();
      param_1[1] = (long)(puVar8 + 2);
      param_1[2] = (long)(puVar8 + 2);
      *puVar8 = 0;
      puVar8[1] = 0;
      *param_1 = (long)puVar8;
      return;
    }
    uVar15 = -iVar9;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10a775ab4(param_1,uVar15 + 1);
  uVar4 = *param_3;
  uVar16 = param_3[1];
  uVar11 = (int)uVar16 / 2;
  lVar17 = CONCAT44(uVar16 + uVar11,uVar4);
  plVar7 = (long *)param_1[1];
  if (plVar7 < (long *)param_1[2]) {
    *plVar7 = (ulong)uVar11 << 0x20;
    plVar7[1] = lVar17;
    puVar18 = (ulong *)(plVar7 + 2);
  }
  else {
    lVar14 = (long)plVar7 - *param_1;
    uVar20 = (lVar14 >> 4) + 1;
    if (uVar20 >> 0x3c != 0) {
      FUN_10a7a2e00();
LAB_10a775a88:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a775a8c);
      (*pcVar5)();
    }
    uVar22 = param_1[2] - *param_1;
    uVar13 = (long)uVar22 >> 3;
    if (uVar13 <= uVar20) {
      uVar13 = uVar20;
    }
    if (0x7fffffffffffffef < uVar22) {
      uVar13 = 0xfffffffffffffff;
    }
    plVar6 = param_1;
    FUN_10a7a2e14();
    plVar7 = (long *)((long)plVar6 + lVar14);
    *plVar7 = (ulong)uVar11 << 0x20;
    plVar7[1] = lVar17;
    puVar18 = (ulong *)(plVar7 + 2);
    lVar14 = (long)plVar7 - (param_1[1] - *param_1);
    _memcpy(lVar14);
    lVar17 = *param_1;
    *param_1 = lVar14;
    param_1[1] = (long)puVar18;
    param_1[2] = (long)(plVar6 + uVar13 * 2);
    if (lVar17 != 0) {
      __ZdlPv();
    }
  }
  uVar20 = 0;
  param_1[1] = (long)puVar18;
  uVar21 = 1;
  do {
    uVar4 = (int)uVar4 / 2;
    if ((int)uVar4 < 2) {
      uVar4 = 1;
    }
    uVar16 = (int)uVar16 / 2;
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    uVar13 = uVar20 | (ulong)(uVar11 - uVar16) << 0x20;
    uVar3 = uVar4 + (int)uVar20;
    uVar20 = (ulong)uVar3;
    uVar22 = CONCAT44(uVar11,uVar3);
    if (puVar18 < (ulong *)param_1[2]) {
      puVar19 = puVar18 + 2;
      *puVar18 = uVar13;
      puVar18[1] = uVar22;
    }
    else {
      lVar17 = (long)puVar18 - *param_1;
      uVar2 = (lVar17 >> 4) + 1;
      if (uVar2 >> 0x3c != 0) {
        FUN_10a7a2e00();
        goto LAB_10a775a88;
      }
      uVar10 = param_1[2] - *param_1;
      uVar12 = (long)uVar10 >> 3;
      if (uVar12 <= uVar2) {
        uVar12 = uVar2;
      }
      if (0x7fffffffffffffef < uVar10) {
        uVar12 = 0xfffffffffffffff;
      }
      plVar7 = param_1;
      FUN_10a7a2e14();
      puVar18 = (ulong *)((long)plVar7 + lVar17);
      *puVar18 = uVar13;
      puVar18[1] = uVar22;
      puVar19 = puVar18 + 2;
      lVar14 = (long)puVar18 - (param_1[1] - *param_1);
      _memcpy(lVar14);
      lVar17 = *param_1;
      *param_1 = lVar14;
      param_1[1] = (long)puVar19;
      param_1[2] = (long)(plVar7 + uVar12 * 2);
      if (lVar17 != 0) {
        __ZdlPv();
      }
    }
    param_1[1] = (long)puVar19;
    uVar21 = uVar21 + 1;
    puVar18 = puVar19;
    if (uVar15 < uVar21) {
      return;
    }
  } while( true );
}



/* Entry: 10a775ab4; end: 10a775b3f;  */

long * FUN_10a775ab4(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (param_2 <= (ulong)(param_1[2] - lVar6 >> 4)) {
    return param_1;
  }
  if (param_2 >> 0x3c == 0) {
    lVar7 = param_1[1];
    plVar5 = param_1;
    FUN_10a7a2e14();
    lVar6 = (long)plVar5 + (lVar7 - lVar6);
    lVar7 = lVar6 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    plVar4 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = lVar6;
    param_1[2] = (long)(plVar5 + param_2 * 2);
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return plVar4;
  }
  FUN_10a7a2e00();
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (param_1[2] != param_2) {
      return (long *)0x1;
    }
    plVar5 = (long *)param_1[1];
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      if (*param_1 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = (long *)(ulong)(*(long *)(*param_1 + 0xb0) != param_1[3]);
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 != 0) {
        return plVar4;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return plVar4;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a775b40; end: 10a775beb;  */

bool FUN_10a775b40(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    if (param_1[2] != param_2) {
      return true;
    }
    plVar5 = (long *)param_1[1];
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      if (*param_1 == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = *(long *)(*param_1 + 0xb0) != param_1[3];
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 != 0) {
        return bVar4;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return bVar4;
    }
  }
  return false;
}



/* Entry: 10a775bec; end: 10a776553;  */

/* WARNING: Removing unreachable block (ram,0x00010a7761e8) */
/* WARNING: Removing unreachable block (ram,0x00010a775f5c) */
/* WARNING: Removing unreachable block (ram,0x00010a7761f8) */
/* WARNING: Removing unreachable block (ram,0x00010a775f6c) */
/* WARNING: Removing unreachable block (ram,0x00010a776238) */
/* WARNING: Type propagation algorithm not settling */

byte FUN_10a775bec(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined7 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  code *pcVar8;
  bool bVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined7 *puVar15;
  undefined8 *****pppppuVar16;
  undefined8 ****ppppuVar17;
  long lVar18;
  byte bVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  uint *puVar23;
  undefined8 ******ppppppuVar24;
  ulong uVar25;
  byte *pbStack_1e0;
  undefined8 **ppuStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  byte bStack_1c1;
  undefined8 *******pppppppuStack_1c0;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  char cStack_1a9;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *******pppppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 *******pppppppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 *******pppppppuStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 *******pppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 uStack_110;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 *****pppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_198 = param_3;
  uStack_190 = param_4;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    bVar19 = 0;
    goto LAB_10a77636c;
  }
  plVar10 = (long *)param_1[1];
  if ((plVar10 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_1a0 = plVar10, plVar10 == (long *)0x0)) {
    bVar19 = 1;
    goto LAB_10a77636c;
  }
  lVar21 = *param_1;
  bVar19 = 1;
  lStack_1a8 = lVar21;
  if (lVar21 != 0) {
    pppppppuStack_1c0 = (undefined8 *******)0x0;
    uStack_1b8 = 0;
    uStack_1b1 = 0;
    uStack_1b0 = 0;
    cStack_1a9 = '\0';
    bStack_1c1 = 1;
    pbStack_1e0 = &bStack_1c1;
    ppuStack_1d8 = &puStack_198;
    pppppppuStack_1d0 = &pppppppuStack_1c0;
    FUN_10a776c90();
    FUN_10a776554(&pbStack_1e0,0x113835528,*(undefined4 *)(lVar21 + 0x18));
    plVar10 = *(long **)(lVar21 + 0xa0);
    while (plVar10 != (long *)(lVar21 + 0xa8)) {
      FUN_10a776554(&pbStack_1e0,plVar10 + 5,(int)plVar10[0xc]);
      plVar7 = (long *)plVar10[1];
      plVar20 = plVar10;
      if ((long *)plVar10[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar20[2];
          bVar9 = (long *)*plVar10 != plVar20;
          plVar20 = plVar10;
        } while (bVar9);
      }
      else {
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
    }
    lVar18 = *(long *)(lVar21 + 0x20);
    lVar2 = *(long *)(lVar21 + 0x28);
    puVar11 = puStack_198;
    bVar19 = bStack_1c1;
    if (lVar18 == lVar2) {
      param_1[2] = param_2;
      lVar21 = *(long *)(lVar21 + 0xb0);
LAB_10a7762b4:
      param_1[3] = lVar21;
      if ((bStack_1c1 & 1) == 0) goto LAB_10a7762bc;
LAB_10a776320:
      bVar19 = 1;
    }
    else {
      while (puStack_198 = puVar11, bVar19 != 0) {
        FUN_10a776d28(puVar11,uStack_190,lVar18 + 0x20);
        if (puVar11 == (undefined8 *)0x0) {
          if (lVar18 + 0x60 == lVar2) {
            param_1[2] = param_2;
            param_1[3] = *(long *)(lStack_1a8 + 0xb0);
            goto LAB_10a776320;
          }
          bVar19 = 1;
        }
        else {
          uVar3 = *(uint *)(lVar18 + 0x58);
          if (uVar3 == 0) {
LAB_10a775da0:
            bStack_1c1 = 1;
          }
          else {
            if (puVar11[4] != 0) {
              puVar23 = (uint *)(puVar11[3] + 0x14);
              lVar21 = puVar11[4] << 5;
              do {
                if (((char)puVar23[2] == '\x01') && (*puVar23 != 0 && *puVar23 != uVar3)) {
                  uVar25 = puVar11[1];
                  if (0x7ffffffffffffff7 < uVar25) goto LAB_10a7763ac;
                  uVar22 = *puVar11;
                  if (uVar25 < 0x17) {
                    uStack_148 = CONCAT17((char)uVar25,(undefined7)uStack_148);
                    pppppppuVar13 = &pppppppuStack_158;
                    if (uVar25 != 0) goto LAB_10a775fcc;
                  }
                  else {
                    pppppppuVar14 = (undefined8 *******)0x19;
                    if ((uVar25 | 7) != 0x17) {
                      pppppppuVar14 = (undefined8 *******)((uVar25 | 7) + 1);
                    }
                    pppppppuVar13 = pppppppuVar14;
                    __Znwm();
                    uStack_148 = (ulong)pppppppuVar14 | 0x8000000000000000;
                    pppppppuStack_158 = pppppppuVar13;
                    uStack_150 = uVar25;
LAB_10a775fcc:
                    _memmove(pppppppuVar13,uVar22,uVar25);
                  }
                  *(undefined1 *)((long)pppppppuVar13 + uVar25) = 0;
                  pppppppuVar14 = &pppppppuStack_158;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppppuVar14,&DAT_10f62a9de,1);
                  ppppppuStack_138 = pppppppuVar14[1];
                  pppppppuStack_140 = (undefined8 *******)*pppppppuVar14;
                  ppppppuStack_130 = pppppppuVar14[2];
                  pppppppuVar14[1] = (undefined8 ******)0x0;
                  pppppppuVar14[2] = (undefined8 ******)0x0;
                  *pppppppuVar14 = (undefined8 ******)0x0;
                  uVar25 = *(ulong *)(puVar23 + -3);
                  if (0x7ffffffffffffff7 < uVar25) {
                    func_0x000109ffde50();
                    goto LAB_10a7763b8;
                  }
                  uVar22 = *(undefined8 *)(puVar23 + -5);
                  if (uVar25 < 0x17) {
                    uStack_90 = CONCAT17((char)uVar25,(undefined7)uStack_90);
                    puVar15 = &uStack_a0;
                    if (uVar25 != 0) goto LAB_10a776064;
                  }
                  else {
                    puVar1 = (undefined7 *)0x19;
                    if ((uVar25 | 7) != 0x17) {
                      puVar1 = (undefined7 *)((uVar25 | 7) + 1);
                    }
                    puVar15 = puVar1;
                    __Znwm();
                    uStack_90 = (ulong)puVar1 | 0x8000000000000000;
                    uStack_98 = (undefined7)uVar25;
                    uStack_91 = (undefined1)(uVar25 >> 0x38);
                    uStack_a0 = SUB87(puVar15,0);
                    uStack_99 = (undefined1)((ulong)puVar15 >> 0x38);
LAB_10a776064:
                    _memmove(puVar15,uVar22,uVar25);
                  }
                  *(undefined1 *)((long)puVar15 + uVar25) = 0;
                  uVar25 = CONCAT17(uStack_91,uStack_98);
                  puVar1 = (undefined7 *)CONCAT17(uStack_99,uStack_a0);
                  if (-1 < (long)uStack_90) {
                    uVar25 = uStack_90 >> 0x38;
                    puVar1 = &uStack_a0;
                  }
                  pppppppuVar14 = &pppppppuStack_140;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppppuVar14,puVar1,uVar25);
                  ppppppuStack_118 = pppppppuVar14[1];
                  pppppppuStack_120 = (undefined8 *******)*pppppppuVar14;
                  uStack_110 = pppppppuVar14[2];
                  pppppppuVar14[1] = (undefined8 ******)0x0;
                  pppppppuVar14[2] = (undefined8 ******)0x0;
                  *pppppppuVar14 = (undefined8 ******)0x0;
                  pppppppuVar14 = &pppppppuStack_120;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppppuVar14,&UNK_10f67720a,0x1b);
                  ppppppuStack_f8 = pppppppuVar14[1];
                  ppppppuStack_100 = *pppppppuVar14;
                  ppppppuStack_f0 = pppppppuVar14[2];
                  pppppppuVar14[1] = (undefined8 ******)0x0;
                  pppppppuVar14[2] = (undefined8 ******)0x0;
                  *pppppppuVar14 = (undefined8 ******)0x0;
                  __ZNSt3__19to_stringEj(&pppppppuStack_170,*puVar23);
                  uVar25 = uStack_168;
                  pppppppuVar14 = pppppppuStack_170;
                  if (-1 < (char)bStack_159) {
                    uVar25 = (ulong)bStack_159;
                    pppppppuVar14 = &pppppppuStack_170;
                  }
                  ppppppuVar24 = &ppppppuStack_100;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppppppuVar24,pppppppuVar14,uVar25);
                  pppppuStack_d8 = ppppppuVar24[1];
                  pppppuStack_e0 = *ppppppuVar24;
                  pppppuStack_d0 = ppppppuVar24[2];
                  ppppppuVar24[1] = (undefined8 *****)0x0;
                  ppppppuVar24[2] = (undefined8 *****)0x0;
                  *ppppppuVar24 = (undefined8 *****)0x0;
                  pppppuVar16 = &pppppuStack_e0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (pppppuVar16,&UNK_10f677226,0xc);
                  ppppuStack_b8 = pppppuVar16[1];
                  ppppuStack_c0 = *pppppuVar16;
                  ppppuStack_b0 = pppppuVar16[2];
                  pppppuVar16[1] = (undefined8 ****)0x0;
                  pppppuVar16[2] = (undefined8 ****)0x0;
                  *pppppuVar16 = (undefined8 ****)0x0;
                  __ZNSt3__19to_stringEj(&pppppppuStack_188,uVar3);
                  uVar25 = uStack_180;
                  pppppppuVar14 = pppppppuStack_188;
                  if (-1 < (char)bStack_171) {
                    uVar25 = (ulong)bStack_171;
                    pppppppuVar14 = &pppppppuStack_188;
                  }
                  ppppuVar17 = &ppppuStack_c0;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                            (ppppuVar17,pppppppuVar14,uVar25);
                  pppppppuVar14 = (undefined8 *******)*ppppuVar17;
                  uStack_88 = SUB87(ppppuVar17[1],0);
                  uStack_81 = (undefined1)*(undefined8 *)((long)ppppuVar17 + 0xf);
                  uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar17 + 0xf) >> 8);
                  cVar5 = *(char *)((long)ppppuVar17 + 0x17);
                  ppppuVar17[1] = (undefined8 ***)0x0;
                  ppppuVar17[2] = (undefined8 ***)0x0;
                  *ppppuVar17 = (undefined8 ***)0x0;
                  if (cStack_1a9 < '\0') {
                    __ZdlPv(pppppppuStack_1c0);
                  }
                  uStack_1b8 = uStack_88;
                  uStack_1b1 = uStack_81;
                  uStack_1b0 = uStack_80;
                  pppppppuStack_1c0 = pppppppuVar14;
                  cStack_1a9 = cVar5;
                  if ((char)bStack_171 < '\0') {
                    __ZdlPv(pppppppuStack_188);
                  }
                  if ((char)bStack_159 < '\0') {
                    __ZdlPv(pppppppuStack_170);
                  }
                  if ((long)ppppppuStack_f0 < 0) {
                    __ZdlPv(ppppppuStack_100);
                  }
                  if ((long)uStack_110 < 0) {
                    __ZdlPv(pppppppuStack_120);
                  }
                  pppppppuVar14 = pppppppuStack_158;
                  ppppppuVar24 = (undefined8 ******)uStack_148;
                  if ((long)ppppppuStack_130 < 0) {
                    __ZdlPv(pppppppuStack_140);
                    pppppppuVar14 = pppppppuStack_158;
                    ppppppuVar24 = (undefined8 ******)uStack_148;
                  }
                  goto joined_r0x00010a776254;
                }
                puVar23 = puVar23 + 8;
                lVar21 = lVar21 + -0x20;
              } while (lVar21 != 0);
            }
            uVar4 = *(uint *)(puVar11 + 2);
            if (uVar4 == 0) goto LAB_10a775da0;
            uVar6 = 0;
            if (uVar3 != 0) {
              uVar6 = uVar4 / uVar3;
            }
            if (uVar4 == uVar6 * uVar3) goto LAB_10a775da0;
            ppppppuVar24 = (undefined8 ******)puVar11[1];
            if ((undefined8 ******)0x7ffffffffffffff7 < ppppppuVar24) goto LAB_10a7763ac;
            uVar22 = *puVar11;
            if (ppppppuVar24 < (undefined8 ******)0x17) {
              uStack_110 = (undefined8 ******)CONCAT17((char)ppppppuVar24,(undefined7)uStack_110);
              pppppppuVar13 = &pppppppuStack_120;
              if (ppppppuVar24 != (undefined8 ******)0x0) goto LAB_10a775e14;
            }
            else {
              pppppppuVar14 = (undefined8 *******)0x19;
              if (((ulong)ppppppuVar24 | 7) != 0x17) {
                pppppppuVar14 = (undefined8 *******)(((ulong)ppppppuVar24 | 7) + 1);
              }
              pppppppuVar13 = pppppppuVar14;
              __Znwm();
              uStack_110 = (undefined8 ******)((ulong)pppppppuVar14 | 0x8000000000000000);
              pppppppuStack_120 = pppppppuVar13;
              ppppppuStack_118 = ppppppuVar24;
LAB_10a775e14:
              _memmove(pppppppuVar13,uVar22,ppppppuVar24);
            }
            *(undefined1 *)((long)pppppppuVar13 + (long)ppppppuVar24) = 0;
            pppppppuVar14 = &pppppppuStack_120;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar14,&UNK_10f677233,0x11);
            ppppppuStack_f8 = pppppppuVar14[1];
            ppppppuStack_100 = *pppppppuVar14;
            ppppppuStack_f0 = pppppppuVar14[2];
            pppppppuVar14[1] = (undefined8 ******)0x0;
            pppppppuVar14[2] = (undefined8 ******)0x0;
            *pppppppuVar14 = (undefined8 ******)0x0;
            __ZNSt3__19to_stringEj(&pppppppuStack_140,*(undefined4 *)(puVar11 + 2));
            ppppppuVar24 = ppppppuStack_138;
            pppppppuVar14 = pppppppuStack_140;
            if (-1 < (long)ppppppuStack_130) {
              ppppppuVar24 = (undefined8 ******)((ulong)ppppppuStack_130 >> 0x38);
              pppppppuVar14 = &pppppppuStack_140;
            }
            ppppppuVar12 = &ppppppuStack_100;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppppuVar12,pppppppuVar14,ppppppuVar24);
            pppppuStack_d8 = ppppppuVar12[1];
            pppppuStack_e0 = *ppppppuVar12;
            pppppuStack_d0 = ppppppuVar12[2];
            ppppppuVar12[1] = (undefined8 *****)0x0;
            ppppppuVar12[2] = (undefined8 *****)0x0;
            *ppppppuVar12 = (undefined8 *****)0x0;
            pppppuVar16 = &pppppuStack_e0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar16,&UNK_10f677245,0x31);
            ppppuStack_b8 = pppppuVar16[1];
            ppppuStack_c0 = *pppppuVar16;
            ppppuStack_b0 = pppppuVar16[2];
            pppppuVar16[1] = (undefined8 ****)0x0;
            pppppuVar16[2] = (undefined8 ****)0x0;
            *pppppuVar16 = (undefined8 ****)0x0;
            __ZNSt3__19to_stringEj(&pppppppuStack_158,uVar3);
            uVar25 = uStack_150;
            pppppppuVar14 = pppppppuStack_158;
            if (-1 < (long)uStack_148) {
              uVar25 = uStack_148 >> 0x38;
              pppppppuVar14 = &pppppppuStack_158;
            }
            ppppuVar17 = &ppppuStack_c0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppuVar17,pppppppuVar14,uVar25);
            pppppppuVar14 = (undefined8 *******)*ppppuVar17;
            uStack_a0 = SUB87(ppppuVar17[1],0);
            uStack_99 = (undefined1)*(undefined8 *)((long)ppppuVar17 + 0xf);
            uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)ppppuVar17 + 0xf) >> 8);
            cVar5 = *(char *)((long)ppppuVar17 + 0x17);
            ppppuVar17[1] = (undefined8 ***)0x0;
            ppppuVar17[2] = (undefined8 ***)0x0;
            *ppppuVar17 = (undefined8 ***)0x0;
            if (cStack_1a9 < '\0') {
              __ZdlPv(pppppppuStack_1c0);
            }
            uStack_1b8 = uStack_a0;
            uStack_1b1 = uStack_99;
            uStack_1b0 = uStack_98;
            pppppppuStack_1c0 = pppppppuVar14;
            cStack_1a9 = cVar5;
            if ((long)uStack_148 < 0) {
              __ZdlPv(pppppppuStack_158);
            }
            if ((long)ppppppuStack_130 < 0) {
              __ZdlPv(pppppppuStack_140);
            }
            pppppppuVar14 = pppppppuStack_120;
            ppppppuVar24 = uStack_110;
            if ((long)ppppppuStack_f0 < 0) {
              __ZdlPv(ppppppuStack_100);
              pppppppuVar14 = pppppppuStack_120;
              ppppppuVar24 = uStack_110;
            }
joined_r0x00010a776254:
            if ((long)ppppppuVar24 < 0) {
              __ZdlPv(pppppppuVar14);
            }
            bStack_1c1 = 0;
          }
          bVar19 = bStack_1c1;
          if (lVar18 + 0x60 == lVar2) {
            param_1[2] = param_2;
            lVar21 = *(long *)(lStack_1a8 + 0xb0);
            goto LAB_10a7762b4;
          }
        }
        lVar18 = lVar18 + 0x60;
        lVar21 = lStack_1a8;
        puVar11 = puStack_198;
      }
      param_1[2] = param_2;
      param_1[3] = *(long *)(lVar21 + 0xb0);
LAB_10a7762bc:
      *(undefined1 *)(param_1 + 4) = 1;
      pppppppuVar14 = pppppppuStack_1c0;
      if (-1 < cStack_1a9) {
        pppppppuVar14 = &pppppppuStack_1c0;
      }
      func_0x00010ae06f08(0,1,&UNK_10f67524e,&UNK_10f675295,0x76,&UNK_10f67530f,param_7,param_8,
                          pppppppuVar14);
      bVar19 = bStack_1c1;
    }
    if (cStack_1a9 < '\0') {
      __ZdlPv(pppppppuStack_1c0);
    }
    if (plStack_1a0 == (long *)0x0) goto LAB_10a77636c;
  }
  plVar7 = plStack_1a0;
  plVar10 = plStack_1a0 + 1;
  do {
    lVar21 = *plVar10;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar9) {
      *plVar10 = lVar21 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar21 == 0) {
    (**(code **)(*plStack_1a0 + 0x10))(plStack_1a0);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a77636c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return bVar19 & 1;
  }
  ___stack_chk_fail();
LAB_10a7763ac:
  func_0x000109ffde50();
LAB_10a7763b8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a7763bc);
  (*pcVar8)();
}



/* Entry: 10a776554; end: 10a776c8f;  */

/* WARNING: Removing unreachable block (ram,0x00010a7768ac) */
/* WARNING: Removing unreachable block (ram,0x00010a776a8c) */
/* WARNING: Removing unreachable block (ram,0x00010a7768fc) */

void FUN_10a776554(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined7 *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined7 *puVar8;
  undefined8 ***pppuVar9;
  undefined8 **ppuVar10;
  undefined8 ****ppppuVar11;
  undefined1 uVar12;
  long lVar13;
  uint uVar14;
  undefined8 ****ppppuVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 ****ppppuStack_188;
  ulong uStack_180;
  byte bStack_171;
  undefined8 ****ppppuStack_170;
  ulong uStack_168;
  byte bStack_159;
  undefined8 ****ppppuStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ***pppuStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ****ppppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 uStack_110;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)*param_1 == '\x01') {
    puVar5 = *(undefined8 **)param_1[1];
    FUN_10a776d28(puVar5,((long *)param_1[1])[1],param_2);
    if (puVar5 != (undefined8 *)0x0) {
      puVar19 = (undefined8 *)param_1[2];
      uVar14 = (uint)param_3;
      if (puVar5[4] != 0) {
        puVar18 = (uint *)(puVar5[3] + 0x14);
        lVar13 = puVar5[4] << 5;
        do {
          if (((char)puVar18[2] == '\x01') && ((*puVar18 != 0 && uVar14 != 0) && *puVar18 != uVar14)
             ) {
            uVar16 = puVar5[1];
            if (0x7ffffffffffffff7 < uVar16) goto LAB_10a776b1c;
            uVar17 = *puVar5;
            if (uVar16 < 0x17) {
              uStack_148 = CONCAT17((char)uVar16,(undefined7)uStack_148);
              pppppuVar6 = &ppppuStack_158;
              if (uVar16 != 0) goto LAB_10a7766a4;
            }
            else {
              pppppuVar7 = (undefined8 *****)0x19;
              if ((uVar16 | 7) != 0x17) {
                pppppuVar7 = (undefined8 *****)((uVar16 | 7) + 1);
              }
              pppppuVar6 = pppppuVar7;
              __Znwm();
              uStack_148 = (ulong)pppppuVar7 | 0x8000000000000000;
              ppppuStack_158 = pppppuVar6;
              uStack_150 = uVar16;
LAB_10a7766a4:
              _memmove(pppppuVar6,uVar17,uVar16);
            }
            *(undefined1 *)((long)pppppuVar6 + uVar16) = 0;
            pppppuVar7 = &ppppuStack_158;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar7,&DAT_10f62a9de,1);
            pppuStack_138 = pppppuVar7[1];
            ppppuStack_140 = *pppppuVar7;
            pppuStack_130 = pppppuVar7[2];
            pppppuVar7[1] = (undefined8 ****)0x0;
            pppppuVar7[2] = (undefined8 ****)0x0;
            *pppppuVar7 = (undefined8 ****)0x0;
            uVar16 = *(ulong *)(puVar18 + -3);
            if (0x7ffffffffffffff7 < uVar16) goto LAB_10a776b20;
            uVar17 = *(undefined8 *)(puVar18 + -5);
            if (uVar16 < 0x17) {
              uStack_90 = CONCAT17((char)uVar16,(undefined7)uStack_90);
              puVar8 = &uStack_a0;
              if (uVar16 != 0) goto LAB_10a776734;
            }
            else {
              puVar1 = (undefined7 *)0x19;
              if ((uVar16 | 7) != 0x17) {
                puVar1 = (undefined7 *)((uVar16 | 7) + 1);
              }
              puVar8 = puVar1;
              __Znwm();
              uStack_90 = (ulong)puVar1 | 0x8000000000000000;
              uStack_98 = (undefined7)uVar16;
              uStack_91 = (undefined1)(uVar16 >> 0x38);
              uStack_a0 = SUB87(puVar8,0);
              uStack_99 = (undefined1)((ulong)puVar8 >> 0x38);
LAB_10a776734:
              _memmove(puVar8,uVar17,uVar16);
            }
            *(undefined1 *)((long)puVar8 + uVar16) = 0;
            uVar16 = CONCAT17(uStack_91,uStack_98);
            puVar1 = (undefined7 *)CONCAT17(uStack_99,uStack_a0);
            if (-1 < (long)uStack_90) {
              uVar16 = uStack_90 >> 0x38;
              puVar1 = &uStack_a0;
            }
            pppppuVar7 = &ppppuStack_140;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar7,puVar1,uVar16);
            pppuStack_118 = pppppuVar7[1];
            ppppuStack_120 = *pppppuVar7;
            uStack_110 = pppppuVar7[2];
            pppppuVar7[1] = (undefined8 ****)0x0;
            pppppuVar7[2] = (undefined8 ****)0x0;
            *pppppuVar7 = (undefined8 ****)0x0;
            pppppuVar7 = &ppppuStack_120;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar7,&UNK_10f67720a,0x1b);
            pppuStack_f8 = pppppuVar7[1];
            pppuStack_100 = *pppppuVar7;
            pppuStack_f0 = pppppuVar7[2];
            pppppuVar7[1] = (undefined8 ****)0x0;
            pppppuVar7[2] = (undefined8 ****)0x0;
            *pppppuVar7 = (undefined8 ****)0x0;
            __ZNSt3__19to_stringEj(&ppppuStack_170,*puVar18);
            pppppuVar7 = (undefined8 *****)ppppuStack_170;
            if (-1 < (char)bStack_159) {
              uStack_168 = (ulong)bStack_159;
              pppppuVar7 = &ppppuStack_170;
            }
            ppppuVar15 = &pppuStack_100;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppppuVar15,pppppuVar7,uStack_168);
            ppuStack_d8 = ppppuVar15[1];
            ppuStack_e0 = *ppppuVar15;
            ppuStack_d0 = ppppuVar15[2];
            ppppuVar15[1] = (undefined8 ***)0x0;
            ppppuVar15[2] = (undefined8 ***)0x0;
            *ppppuVar15 = (undefined8 ***)0x0;
            pppuVar9 = &ppuStack_e0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppuVar9,&UNK_10f677226,0xc);
            puStack_b8 = pppuVar9[1];
            puStack_c0 = *pppuVar9;
            puStack_b0 = pppuVar9[2];
            pppuVar9[1] = (undefined8 **)0x0;
            pppuVar9[2] = (undefined8 **)0x0;
            *pppuVar9 = (undefined8 **)0x0;
            __ZNSt3__19to_stringEj(&ppppuStack_188,param_3);
            pppppuVar7 = (undefined8 *****)ppppuStack_188;
            if (-1 < (char)bStack_171) {
              uStack_180 = (ulong)bStack_171;
              pppppuVar7 = &ppppuStack_188;
            }
            ppuVar10 = &puStack_c0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (ppuVar10,pppppuVar7,uStack_180);
            puVar5 = *ppuVar10;
            uStack_88 = SUB87(ppuVar10[1],0);
            uStack_81 = (undefined1)*(undefined8 *)((long)ppuVar10 + 0xf);
            uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar10 + 0xf) >> 8);
            uVar12 = *(undefined1 *)((long)ppuVar10 + 0x17);
            ppuVar10[1] = (undefined8 *)0x0;
            ppuVar10[2] = (undefined8 *)0x0;
            *ppuVar10 = (undefined8 *)0x0;
            if (*(char *)((long)puVar19 + 0x17) < '\0') {
              __ZdlPv(*puVar19);
            }
            *puVar19 = puVar5;
            puVar19[1] = CONCAT17(uStack_81,uStack_88);
            *(ulong *)((long)puVar19 + 0xf) = CONCAT71(uStack_80,uStack_81);
            *(undefined1 *)((long)puVar19 + 0x17) = uVar12;
            if ((char)bStack_171 < '\0') {
              __ZdlPv(ppppuStack_188);
            }
            if ((long)ppuStack_d0 < 0) {
              __ZdlPv(ppuStack_e0);
            }
            if ((char)bStack_159 < '\0') {
              __ZdlPv(ppppuStack_170);
            }
            if ((long)pppuStack_f0 < 0) {
              __ZdlPv(pppuStack_100);
            }
            if ((long)uStack_110 < 0) {
              __ZdlPv(ppppuStack_120);
            }
            if ((long)pppuStack_130 < 0) {
              __ZdlPv(ppppuStack_140);
            }
            pppppuVar7 = (undefined8 *****)ppppuStack_158;
            if (-1 < (long)uStack_148) goto LAB_10a776ad4;
            goto LAB_10a776ad0;
          }
          puVar18 = puVar18 + 8;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      if ((uVar14 == 0) || (uVar2 = *(uint *)(puVar5 + 2), uVar2 == 0)) {
LAB_10a776644:
        uVar12 = 1;
      }
      else {
        uVar3 = 0;
        if (uVar14 != 0) {
          uVar3 = uVar2 / uVar14;
        }
        if (uVar2 == uVar3 * uVar14) goto LAB_10a776644;
        ppppuVar15 = (undefined8 ****)puVar5[1];
        if ((undefined8 ****)0x7ffffffffffffff7 < ppppuVar15) goto LAB_10a776b1c;
        uVar17 = *puVar5;
        if (ppppuVar15 < (undefined8 ****)0x17) {
          uStack_110 = (undefined8 ****)CONCAT17((char)ppppuVar15,(undefined7)uStack_110);
          pppppuVar6 = &ppppuStack_120;
          if (ppppuVar15 != (undefined8 ****)0x0) goto LAB_10a77694c;
        }
        else {
          pppppuVar7 = (undefined8 *****)0x19;
          if (((ulong)ppppuVar15 | 7) != 0x17) {
            pppppuVar7 = (undefined8 *****)(((ulong)ppppuVar15 | 7) + 1);
          }
          pppppuVar6 = pppppuVar7;
          __Znwm();
          uStack_110 = (undefined8 ****)((ulong)pppppuVar7 | 0x8000000000000000);
          ppppuStack_120 = pppppuVar6;
          pppuStack_118 = ppppuVar15;
LAB_10a77694c:
          _memmove(pppppuVar6,uVar17,ppppuVar15);
        }
        *(undefined1 *)((long)pppppuVar6 + (long)ppppuVar15) = 0;
        pppppuVar7 = &ppppuStack_120;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppuVar7,&UNK_10f677233,0x11);
        pppuStack_f8 = pppppuVar7[1];
        pppuStack_100 = *pppppuVar7;
        pppuStack_f0 = pppppuVar7[2];
        pppppuVar7[1] = (undefined8 ****)0x0;
        pppppuVar7[2] = (undefined8 ****)0x0;
        *pppppuVar7 = (undefined8 ****)0x0;
        __ZNSt3__19to_stringEj(&ppppuStack_140,*(undefined4 *)(puVar5 + 2));
        ppppuVar15 = (undefined8 ****)pppuStack_138;
        pppppuVar7 = (undefined8 *****)ppppuStack_140;
        if (-1 < (long)pppuStack_130) {
          ppppuVar15 = (undefined8 ****)((ulong)pppuStack_130 >> 0x38);
          pppppuVar7 = &ppppuStack_140;
        }
        ppppuVar11 = &pppuStack_100;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppppuVar11,pppppuVar7,ppppuVar15);
        ppuStack_d8 = ppppuVar11[1];
        ppuStack_e0 = *ppppuVar11;
        ppuStack_d0 = ppppuVar11[2];
        ppppuVar11[1] = (undefined8 ***)0x0;
        ppppuVar11[2] = (undefined8 ***)0x0;
        *ppppuVar11 = (undefined8 ***)0x0;
        pppuVar9 = &ppuStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar9,&UNK_10f677245,0x31);
        puStack_b8 = pppuVar9[1];
        puStack_c0 = *pppuVar9;
        puStack_b0 = pppuVar9[2];
        pppuVar9[1] = (undefined8 **)0x0;
        pppuVar9[2] = (undefined8 **)0x0;
        *pppuVar9 = (undefined8 **)0x0;
        __ZNSt3__19to_stringEj(&ppppuStack_158,param_3);
        uVar16 = uStack_150;
        pppppuVar7 = (undefined8 *****)ppppuStack_158;
        if (-1 < (long)uStack_148) {
          uVar16 = uStack_148 >> 0x38;
          pppppuVar7 = &ppppuStack_158;
        }
        ppuVar10 = &puStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar10,pppppuVar7,uVar16);
        puVar5 = *ppuVar10;
        uStack_a0 = SUB87(ppuVar10[1],0);
        uStack_99 = (undefined1)*(undefined8 *)((long)ppuVar10 + 0xf);
        uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar10 + 0xf) >> 8);
        uVar12 = *(undefined1 *)((long)ppuVar10 + 0x17);
        ppuVar10[1] = (undefined8 *)0x0;
        ppuVar10[2] = (undefined8 *)0x0;
        *ppuVar10 = (undefined8 *)0x0;
        if (*(char *)((long)puVar19 + 0x17) < '\0') {
          __ZdlPv(*puVar19);
        }
        *puVar19 = puVar5;
        puVar19[1] = CONCAT17(uStack_99,uStack_a0);
        *(ulong *)((long)puVar19 + 0xf) = CONCAT71(uStack_98,uStack_99);
        *(undefined1 *)((long)puVar19 + 0x17) = uVar12;
        if ((long)uStack_148 < 0) {
          __ZdlPv(ppppuStack_158);
        }
        if ((long)ppuStack_d0 < 0) {
          __ZdlPv(ppuStack_e0);
        }
        if ((long)pppuStack_130 < 0) {
          __ZdlPv(ppppuStack_140);
        }
        if ((long)pppuStack_f0 < 0) {
          __ZdlPv(pppuStack_100);
        }
        pppppuVar7 = (undefined8 *****)ppppuStack_120;
        if ((long)uStack_110 < 0) {
LAB_10a776ad0:
          __ZdlPv(pppppuVar7);
        }
LAB_10a776ad4:
        uVar12 = 0;
      }
      *(undefined1 *)*param_1 = uVar12;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_10a776b1c:
  func_0x000109ffde50();
LAB_10a776b20:
  func_0x000109ffde50();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a776b28);
  (*pcVar4)();
}



/* Entry: 10a776c90; end: 10a776d27;  */

undefined8 FUN_10a776c90(void)

{
  int iVar1;
  
  if ((bRam0000000113835548 & 1) == 0) {
    iVar1 = 0x13835548;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b07c(0x113835528,&UNK_10f6753d6);
      ___cxa_atexit(FUN_10a32edf4,0x113835528,0x100000000);
      ___cxa_guard_release(0x113835548);
    }
  }
  return 0x113835528;
}



/* Entry: 10a776d28; end: 10a776db3;  */

undefined8 * FUN_10a776d28(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = param_1 + param_2 * 5;
  param_2 = param_2 * 0x28;
  puVar5 = param_1;
  if (param_2 != 0) {
    uVar3 = param_3[1];
    puVar2 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar2 = param_3;
    }
    do {
      if (param_1[1] == uVar3) {
        uVar4 = *param_1;
        _memcmp(uVar4,puVar2,uVar3);
        puVar5 = param_1;
        if ((int)uVar4 == 0) break;
      }
      param_1 = param_1 + 5;
      param_2 = param_2 + -0x28;
      puVar5 = puVar1;
    } while (param_2 != 0);
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != puVar5) {
    puVar2 = puVar5;
  }
  return puVar2;
}



/* Entry: 10a776db4; end: 10a7771c7;  */

uint FUN_10a776db4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 ***pppuVar4;
  int iVar5;
  undefined8 **ppuVar6;
  undefined8 ***pppuVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  if ((bRam00000001137eb950 & 1) == 0) {
    iVar5 = 0x137eb950;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x000107c2b07c(0x1137ebb60,&DAT_10f67535f);
      func_0x000107c2b07c(0x1137ebb80,&DAT_10f67536e);
      func_0x000107c2b07c(0x1137ebba0,&DAT_10f67537e);
      func_0x000107c2b07c(0x1137ebbc0,&DAT_10f675393);
      ___cxa_atexit(FUN_10a7ca5e8,0,0x100000000);
      ___cxa_guard_release(0x1137eb950);
    }
  }
  lVar9 = 0;
  do {
    if (param_1[3] == *(long *)(lVar9 + 0x1137ebb78)) goto LAB_10a77707c;
    lVar9 = lVar9 + 0x20;
  } while (lVar9 != 0x80);
  uStack_38 = param_1[1];
  puStack_40 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uStack_38 = (ulong)*(byte *)((long)param_1 + 0x17);
    puStack_40 = param_1;
  }
  ppuVar6 = &puStack_40;
  FUN_10a159054(ppuVar6,&DAT_10f67728f,9);
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar6 = &puStack_40;
    FUN_10a159054(ppuVar6,&DAT_10f677277,10);
    if (((ulong)ppuVar6 & 1) == 0) {
      ppuVar6 = &puStack_40;
      FUN_10a159054(ppuVar6,&DAT_10f677282,0xc);
      if (((ulong)ppuVar6 & 1) == 0) {
        ppuVar6 = &puStack_40;
        FUN_10a159054(ppuVar6,&DAT_10f677299,0xd);
        if (((ulong)ppuVar6 & 1) == 0) {
          ppuVar6 = &puStack_40;
          FUN_10a159054(ppuVar6,&DAT_10f6772a7,5);
          if (((ulong)ppuVar6 & 1) == 0) {
            ppuVar6 = &puStack_40;
            FUN_10a159054(ppuVar6,&UNK_10f675465,10);
            if (((ulong)ppuVar6 & 1) == 0) {
              lVar9 = param_2;
              FUN_10a33225c(param_2,param_1);
              if (lVar9 == 0) {
                plVar11 = *(long **)(param_2 + 0x188);
                if (plVar11 != (long *)0x0) {
                  plVar10 = plVar11;
                  (**(code **)(*plVar11 + 0x98))();
                  func_0x0001098998d4(&ppuStack_78,&PTR_DAT_110c17668);
                  uStack_50 = uStack_68;
                  uStack_58 = uStack_70;
                  ppuStack_60 = ppuStack_78;
                  uStack_70 = 0;
                  uStack_68 = 0;
                  ppuStack_78 = (undefined8 ***)0x0;
                  uStack_48 = 0;
                  func_0x000107c2b080(&ppuStack_60);
                  FUN_10a203c54(plVar10,&ppuStack_60);
                  if ((long)uStack_50 < 0) {
                    __ZdlPv(ppuStack_60);
                  }
                  if ((long)uStack_68 < 0) {
                    __ZdlPv(ppuStack_78);
                  }
                  (**(code **)(*plVar11 + 0x98))(plVar11);
                  if (plVar10 != (long *)0x0) {
                    if (*(char *)((long)param_1 + 0x17) < '\0') {
                      func_0x000107c3192c(&uStack_90,*param_1,param_1[1]);
                    }
                    else {
                      uStack_88 = param_1[1];
                      uStack_90 = *param_1;
                      lStack_80 = param_1[2];
                    }
                    FUN_109feb280(&ppuStack_78,&UNK_10f6753a1,&uStack_90);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (&ppuStack_78,0x3d);
                    uStack_58 = uStack_70;
                    ppuStack_60 = ppuStack_78;
                    uStack_50 = uStack_68;
                    uStack_70 = 0;
                    uStack_68 = 0;
                    ppuStack_78 = (undefined8 **)0x0;
                    if (lStack_80 < 0) {
                      __ZdlPv(uStack_90);
                    }
                    plVar10 = plVar10 + 8;
                    do {
                      plVar10 = (long *)*plVar10;
                      if (plVar10 == (long *)0x0) break;
                      uVar1 = uStack_58;
                      pppuVar4 = (undefined8 ***)ppuStack_60;
                      if (-1 < (long)uStack_50) {
                        uVar1 = uStack_50 >> 0x38;
                        pppuVar4 = &ppuStack_60;
                      }
                      uStack_70 = (ulong)*(char *)((long)plVar10 + 0x27);
                      if ((long)uStack_70 < 0) {
                        ppuStack_78 = (undefined8 **)plVar10[2];
                        uStack_70 = plVar10[3];
                      }
                      else {
                        ppuStack_78 = (undefined8 **)(plVar10 + 2);
                      }
                      pppuVar7 = &ppuStack_78;
                      FUN_10a04236c(pppuVar7,pppuVar4,uVar1);
                    } while ((int)pppuVar7 == 0);
                    if ((long)uStack_50 < 0) {
                      __ZdlPv(ppuStack_60);
                    }
                    if (plVar10 != (long *)0x0) goto LAB_10a77707c;
                  }
                }
              }
              else {
                uVar2 = *(ushort *)(lVar9 + 0x20);
                uVar3 = *(ushort *)(param_1 + 4);
                if ((uVar2 == uVar3) || ((uVar2 == 8 && (uVar3 == 9)))) goto LAB_10a77707c;
                uVar8 = 0;
                if ((6 < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x4eU) == 0)) goto LAB_10a777080;
                if (uVar3 < 7) {
                  uVar8 = 0x4e >> (ulong)(uVar3 & 0x1f);
                  goto LAB_10a777080;
                }
              }
              uVar8 = 0;
              goto LAB_10a777080;
            }
          }
        }
      }
    }
  }
LAB_10a77707c:
  uVar8 = 1;
LAB_10a777080:
  return uVar8 & 1;
}



/* Entry: 10a7771c8; end: 10a777ca7;  */

long *****
FUN_10a7771c8(undefined8 param_1,long *****param_2,float param_3,undefined4 param_4,
             long *****param_5,long *param_6,long *param_7,long *****param_8)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  code *pcVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  long ****pppplVar15;
  long lVar16;
  long ****pppplVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long ****pppplVar24;
  ushort *unaff_x19;
  long *plVar25;
  undefined8 unaff_x21;
  long lVar26;
  undefined **unaff_x24;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long ***ppplStack_2a8;
  long ***ppplStack_2a0;
  long ***ppplStack_298;
  long ***ppplStack_290;
  long ****pppplStack_288;
  undefined **ppuStack_280;
  long *plStack_278;
  long ****pppplStack_270;
  undefined8 uStack_268;
  long ****pppplStack_260;
  ushort *puStack_258;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  long ***ppplStack_238;
  long ***ppplStack_230;
  long ***ppplStack_228;
  long ***ppplStack_220;
  long ****pppplStack_218;
  long ****pppplStack_210;
  undefined8 uStack_208;
  long ****pppplStack_200;
  ushort *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  long ****pppplStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1c8;
  long ****pppplStack_1c0;
  long ****pppplStack_1b8;
  long ****pppplStack_1b0;
  long ****pppplStack_1a8;
  long ****pppplStack_1a0;
  long ****pppplStack_198;
  long ****pppplStack_190;
  ulong uStack_188;
  long ****pppplStack_178;
  long ****pppplStack_170;
  long ***ppplStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long ***ppplStack_148;
  undefined4 uStack_140;
  uint auStack_13c [7];
  byte bStack_120;
  byte bStack_fc;
  long ***appplStack_f8 [8];
  byte bStack_b8;
  byte bStack_b4;
  long ****pppplStack_b0;
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  byte bStack_99;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = (long ****)0x0;
  param_5[1] = (long ****)0x0;
  param_5[2] = (long ****)0x0;
  ppppplVar10 = (long *****)((param_6[1] - *param_6 >> 4) * -0x5555555555555555);
  pppplStack_1c0 = (long ****)param_5;
  pppplStack_1b8 = (long ****)param_8;
  FUN_10a777ca8();
  ppppplVar9 = (long *****)*param_6;
  pppplStack_1a8 = (long ****)param_6[1];
  if (ppppplVar9 == (long *****)pppplStack_1a8) {
LAB_10a777bd8:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return param_5;
    }
    ___stack_chk_fail();
    if ((long)pppplStack_190 < 0) {
      __ZdlPv(pppplStack_1a0);
    }
    FUN_10a7a31fc(pppplStack_1c0);
    ppppplVar8 = param_5;
    __Unwind_Resume();
    pcStack_1e8 = FUN_10a777ca8;
    ppuStack_250 = &puStack_1f0;
    pppplVar15 = *ppppplVar8;
    if ((long *****)(((long)ppppplVar8[2] - (long)pppplVar15 >> 3) * 0x4ec4ec4ec4ec4ec5) <
        ppppplVar10) {
      pppplStack_210 = (long ****)ppppplVar9;
      uStack_208 = unaff_x21;
      pppplStack_200 = (long ****)param_5;
      puStack_1f8 = unaff_x19;
      puStack_1f0 = &stack0xfffffffffffffff0;
      if ((long *****)0x276276276276276 < ppppplVar10) {
        FUN_10a7a3068();
        pcStack_248 = FUN_10a777d70;
        pppplVar15 = ppppplVar8[1];
        ppuStack_280 = unaff_x24;
        plStack_278 = param_6;
        pppplStack_270 = (long ****)ppppplVar9;
        uStack_268 = unaff_x21;
        pppplStack_260 = (long ****)param_5;
        puStack_258 = unaff_x19;
        if (pppplVar15 < ppppplVar8[2]) {
          pppplVar24 = ppppplVar10[1];
          pppplVar17 = *ppppplVar10;
          pppplVar15[2] = (long ***)ppppplVar10[2];
          pppplVar15[1] = (long ***)pppplVar24;
          *pppplVar15 = (long ***)pppplVar17;
          ppppplVar10[1] = (long ****)0x0;
          ppppplVar10[2] = (long ****)0x0;
          *ppppplVar10 = (long ****)0x0;
          pppplVar15[3] = (long ***)ppppplVar10[3];
          *(undefined2 *)(pppplVar15 + 4) = *(undefined2 *)(ppppplVar10 + 4);
          ppppplVar9 = (long *****)((long)pppplVar15 + 0x24);
          func_0x00010a3518a0(ppppplVar9,(uint *)((long)ppppplVar10 + 0x24));
          pppplVar15 = pppplVar15 + 0xd;
        }
        else {
          lVar26 = (long)pppplVar15 - (long)*ppppplVar8;
          uVar22 = (lVar26 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
          if (0x276276276276276 < uVar22) {
            FUN_10a7a3068();
            if (*(char *)((long)ppppplVar10 + 0x17) < '\0') {
              func_0x000107c3192c(ppppplVar8,*ppppplVar10,ppppplVar10[1]);
            }
            else {
              pppplVar17 = ppppplVar10[1];
              pppplVar15 = *ppppplVar10;
              ppppplVar8[2] = ppppplVar10[2];
              ppppplVar8[1] = pppplVar17;
              *ppppplVar8 = pppplVar15;
            }
            ppppplVar8[3] = ppppplVar10[3];
            return ppppplVar8;
          }
          lVar18 = (long)ppppplVar8[2] - (long)*ppppplVar8 >> 3;
          uVar20 = lVar18 * -0x6276276276276276;
          if (uVar20 < uVar22 || uVar20 - uVar22 == 0) {
            uVar20 = uVar22;
          }
          if (0x13b13b13b13b13a < (ulong)(lVar18 * 0x4ec4ec4ec4ec4ec5)) {
            uVar20 = 0x276276276276276;
          }
          ppppplVar9 = ppppplVar10;
          pppplStack_288 = (long ****)ppppplVar8;
          FUN_10a7a307c();
          plVar25 = (long *)(uVar20 + lVar26);
          pppplVar15 = ppppplVar10[2];
          pppplVar17 = *ppppplVar10;
          plVar25[1] = (long)ppppplVar10[1];
          *plVar25 = (long)pppplVar17;
          plVar25[2] = (long)pppplVar15;
          ppppplVar10[1] = (long ****)0x0;
          ppppplVar10[2] = (long ****)0x0;
          *ppppplVar10 = (long ****)0x0;
          plVar25[3] = (long)ppppplVar10[3];
          *(undefined2 *)(plVar25 + 4) = *(undefined2 *)(ppppplVar10 + 4);
          func_0x00010a3518a0((long)plVar25 + 0x24,(uint *)((long)ppppplVar10 + 0x24));
          pppplVar15 = (long ****)(plVar25 + 0xd);
          pppplVar17 = (long ****)((long)plVar25 + ((long)*ppppplVar8 - (long)ppppplVar8[1]));
          FUN_10a7a30c4(*ppppplVar8,ppppplVar8[1],pppplVar17);
          ppplStack_2a8 = (long ***)*ppppplVar8;
          *ppppplVar8 = pppplVar17;
          ppppplVar8[1] = pppplVar15;
          ppplStack_290 = (long ***)ppppplVar8[2];
          ppppplVar8[2] = (long ****)(uVar20 + (long)ppppplVar9 * 0x68);
          ppppplVar9 = (long *****)&ppplStack_2a8;
          ppplStack_2a0 = ppplStack_2a8;
          ppplStack_298 = ppplStack_2a8;
          func_0x00010a7a31b0(ppppplVar9);
        }
        ppppplVar8[1] = pppplVar15;
        return ppppplVar9;
      }
      pppplVar17 = ppppplVar8[1];
      ppppplVar9 = ppppplVar10;
      pppplStack_218 = (long ****)ppppplVar8;
      FUN_10a7a307c();
      pppplVar15 = (long ****)((long)ppppplVar10 + ((long)pppplVar17 - (long)pppplVar15));
      pppplVar17 = (long ****)((long)pppplVar15 + ((long)*ppppplVar8 - (long)ppppplVar8[1]));
      FUN_10a7a30c4(*ppppplVar8,ppppplVar8[1],pppplVar17);
      ppplStack_238 = (long ***)*ppppplVar8;
      *ppppplVar8 = pppplVar17;
      ppppplVar8[1] = pppplVar15;
      ppplStack_220 = (long ***)ppppplVar8[2];
      ppppplVar8[2] = (long ****)(ppppplVar10 + (long)ppppplVar9 * 0xd);
      ppppplVar8 = (long *****)&ppplStack_238;
      ppplStack_230 = ppplStack_238;
      ppplStack_228 = ppplStack_238;
      func_0x00010a7a31b0(ppppplVar8);
    }
    return ppppplVar8;
  }
  pppplStack_1b0 = (long ****)auStack_13c;
  uVar29 = NEON_fmov(0x3f800000,4);
  uStack_1d8 = 0;
  pppplStack_1e0 = (long ****)0x3f800000;
  unaff_x21 = 8;
  plStack_1c8 = param_7;
LAB_10a77726c:
  ppppplVar10 = (long *****)(long)*(char *)((long)ppppplVar9 + 0x17);
  if ((long)ppppplVar10 < 0) {
    ppppplVar8 = (long *****)*ppppplVar9;
    ppppplVar10 = (long *****)ppppplVar9[1];
    if (ppppplVar10 != (long *****)0x0) goto LAB_10a777288;
LAB_10a7776cc:
    appplStack_f8[0]._0_4_ = (uint)appplStack_f8[0] & 0xffffff00;
    bStack_b4 = 0;
  }
  else {
    ppppplVar8 = ppppplVar9;
    if (ppppplVar10 == (long *****)0x0) goto LAB_10a7776cc;
LAB_10a777288:
    uVar2 = *(ushort *)(ppppplVar9 + 4);
    param_6 = (long *)(ulong)uVar2;
    lVar26 = *param_7;
    if (lVar26 == 0) goto LAB_10a7773c4;
    if ((long *****)0x7ffffffffffffff7 < ppppplVar10) {
LAB_10a777c14:
      func_0x000109ffde50();
      goto LAB_10a777c90;
    }
    if (ppppplVar10 < (long *****)0x17) {
      bStack_99 = (byte)ppppplVar10;
      ppppplVar5 = &pppplStack_b0;
    }
    else {
      ppppplVar6 = (long *****)0x19;
      if (((ulong)ppppplVar10 | 7) != 0x17) {
        ppppplVar6 = (long *****)(((ulong)ppppplVar10 | 7) + 1);
      }
      ppppplVar5 = ppppplVar6;
      __Znwm();
      bStack_99 = (byte)((ulong)ppppplVar6 >> 0x38) | 0x80;
      uStack_a8 = SUB84(ppppplVar10,0);
      uStack_a4 = (undefined2)((ulong)ppppplVar10 >> 0x20);
      uStack_a2 = (undefined2)((ulong)ppppplVar10 >> 0x30);
      uStack_a0 = SUB84(ppppplVar6,0);
      uStack_9c = (undefined2)((ulong)ppppplVar6 >> 0x20);
      uStack_9a = (undefined1)((ulong)ppppplVar6 >> 0x30);
      param_7 = plStack_1c8;
      pppplStack_b0 = (long ****)ppppplVar5;
    }
    _memmove(ppppplVar5,ppppplVar8,ppppplVar10);
    *(undefined1 *)((long)ppppplVar5 + (long)ppppplVar10) = 0;
    uStack_158 = (long *****)CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
    uStack_160 = (long *****)pppplStack_b0;
    uStack_150 = (long *****)CONCAT17(bStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0)));
    ppplStack_148 = (long ***)0x0;
    func_0x000107c2b080(&uStack_160);
    plVar13 = (long *)(*(long *)(lVar26 + 0x1b8) + 8);
    plVar21 = (long *)*plVar13;
    plVar25 = plVar13;
    if (plVar21 == (long *)0x0) {
      unaff_x19 = (ushort *)0x0;
    }
    else {
      do {
        lVar26 = 8;
        if (ppplStack_148 <= (long ****)plVar21[7]) {
          lVar26 = 0;
          plVar25 = plVar21;
        }
        plVar21 = *(long **)((long)plVar21 + lVar26);
      } while (plVar21 != (long *)0x0);
      if ((plVar25 == plVar13) || (ppplStack_148 < (long ****)plVar25[7])) {
        unaff_x19 = (ushort *)0x0;
      }
      else {
        unaff_x19 = (ushort *)plVar25[8];
      }
    }
    if ((long)uStack_150 < 0) {
      __ZdlPv(uStack_160);
      if (unaff_x19 == (ushort *)0x0) goto LAB_10a7773c4;
LAB_10a777380:
      if (unaff_x19[0x10] == uVar2) {
        bStack_b8 = 0x10;
        uStack_160 = (long *****)appplStack_f8;
        if ((char)unaff_x19[0x32] == '\0') {
          bStack_b8 = 0;
          appplStack_f8[0]._0_4_ = *(uint *)(unaff_x19 + 0x12);
        }
        else {
          FUN_10a3652d8(&uStack_160);
          bStack_b8 = (byte)unaff_x19[0x32];
        }
        bStack_b4 = 1;
      }
      else {
        if ((uVar2 != 9) || (unaff_x19[0x10] != 8)) goto LAB_10a7776cc;
        param_2 = *(long ******)(unaff_x19 + 0x12);
        uStack_158 = (long *****)(ulong)*(uint *)(unaff_x19 + 0x16);
        bStack_120 = 5;
        bStack_b8 = 0x10;
        pppplStack_b0 = appplStack_f8;
        uStack_160 = param_2;
        FUN_10a351904(&pppplStack_b0,&uStack_160,5);
        bStack_b8 = bStack_120;
        bStack_b4 = 1;
        if (0x10 < (ulong)bStack_120) goto LAB_10a777c90;
        (*(code *)(&PTR_FUN_110ba1f88)[bStack_120])(&uStack_160);
      }
    }
    else {
      if (unaff_x19 != (ushort *)0x0) goto LAB_10a777380;
LAB_10a7773c4:
      ppppplVar6 = &pppplStack_1a0;
      pppplStack_1a0 = (long ****)ppppplVar8;
      pppplStack_198 = (long ****)ppppplVar10;
      FUN_10a159054(ppppplVar6,&UNK_10f675465,10);
      pppplVar15 = pppplStack_1a0;
      if (((uVar2 != 6) || ((int)ppppplVar6 == 0)) ||
         (plVar25 = (long *)param_7[1], plVar25 == (long *)0x0)) {
LAB_10a777644:
        appplStack_f8[0]._0_4_ = (uint)appplStack_f8[0] & 0xffffff00;
        bStack_b4 = 0;
LAB_10a77764c:
        unaff_x19 = (ushort *)&UNK_110c18278;
        lVar26 = 0x78;
        pppplStack_178 = (long ****)ppppplVar8;
        pppplStack_170 = (long ****)ppppplVar10;
        do {
          plVar25 = *(long **)(unaff_x19 + -8);
          lVar18 = *(long *)(unaff_x19 + -4);
          ppppplVar10 = &pppplStack_178;
          FUN_10a159054(ppppplVar10,plVar25,lVar18);
          pppplVar15 = pppplStack_178;
          if (((ulong)ppppplVar10 & 1) != 0) {
            if (*unaff_x19 == uVar2) {
              ppppplVar10 = (long *****)pppplStack_170;
              if ((long *****)((long)pppplStack_170 - lVar18) <= pppplStack_170) {
                ppppplVar10 = (long *****)((long)pppplStack_170 - lVar18);
              }
              if (ppppplVar10 != (long *****)0x0) {
                if ((long *****)0x7ffffffffffffff7 < ppppplVar10) goto LAB_10a777c14;
                if (ppppplVar10 < (long *****)0x17) {
                  uStack_150 = (long *****)CONCAT17((char)ppppplVar10,(undefined7)uStack_150);
                  ppppplVar6 = (long *****)&uStack_160;
                }
                else {
                  ppppplVar8 = (long *****)0x19;
                  if (((ulong)ppppplVar10 | 7) != 0x17) {
                    ppppplVar8 = (long *****)(((ulong)ppppplVar10 | 7) + 1);
                  }
                  ppppplVar6 = ppppplVar8;
                  __Znwm();
                  uStack_150 = (long *****)((ulong)ppppplVar8 | 0x8000000000000000);
                  uStack_160 = ppppplVar6;
                  uStack_158 = ppppplVar10;
                }
                _memmove(ppppplVar6,pppplVar15,ppppplVar10);
                *(undefined1 *)((long)ppppplVar6 + (long)ppppplVar10) = 0;
                pppplStack_198 = (long ****)uStack_158;
                pppplStack_1a0 = (long ****)uStack_160;
                pppplStack_190 = (long ****)uStack_150;
                uStack_188 = 0;
                ppppplVar10 = uStack_160;
                func_0x000107c2b080(&pppplStack_1a0);
                uVar27 = SUB84(ppppplVar10,0);
                lVar26 = plStack_1c8[3] << 5;
                if (lVar26 == 0) goto LAB_10a777868;
                puVar19 = (ulong *)(plStack_1c8[2] + 0x18);
                goto LAB_10a777854;
              }
            }
            break;
          }
          unaff_x19 = unaff_x19 + 0xc;
          lVar26 = lVar26 + -0x18;
        } while (lVar26 != 0);
        goto LAB_10a7776cc;
      }
      ppppplVar6 = (long *****)pppplStack_198;
      if ((long *****)((long)pppplStack_198 + -10) <= pppplStack_198) {
        ppppplVar6 = (long *****)((long)pppplStack_198 + -10);
      }
      if (ppppplVar6 == (long *****)0x0) goto LAB_10a777644;
      if ((long *****)0x7ffffffffffffff7 < ppppplVar6) goto LAB_10a777c14;
      if (ppppplVar6 < (long *****)0x17) {
        bStack_99 = (byte)ppppplVar6;
        ppppplVar7 = &pppplStack_b0;
      }
      else {
        ppppplVar5 = (long *****)0x19;
        if (((ulong)ppppplVar6 | 7) != 0x17) {
          ppppplVar5 = (long *****)(((ulong)ppppplVar6 | 7) + 1);
        }
        ppppplVar7 = ppppplVar5;
        __Znwm();
        bStack_99 = (byte)((ulong)ppppplVar5 >> 0x38) | 0x80;
        uStack_a8 = SUB84(ppppplVar6,0);
        uStack_a4 = (undefined2)((ulong)ppppplVar6 >> 0x20);
        uStack_a2 = (undefined2)((ulong)ppppplVar6 >> 0x30);
        uStack_a0 = SUB84(ppppplVar5,0);
        uStack_9c = (undefined2)((ulong)ppppplVar5 >> 0x20);
        uStack_9a = (undefined1)((ulong)ppppplVar5 >> 0x30);
        pppplStack_b0 = (long ****)ppppplVar7;
      }
      _memmove(ppppplVar7,pppplVar15,ppppplVar6);
      *(undefined1 *)((long)ppppplVar7 + (long)ppppplVar6) = 0;
      uStack_158 = (long *****)CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
      uStack_160 = (long *****)pppplStack_b0;
      uStack_150 = (long *****)CONCAT17(bStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0)))
      ;
      ppplStack_148 = (long ***)0x0;
      func_0x000107c2b080(&uStack_160);
      param_7 = plStack_1c8;
      pppplVar15 = (long ****)plVar25[1];
      if (pppplVar15 == (long ****)0x0) {
        unaff_x19 = (ushort *)0x0;
      }
      else {
        uVar22 = (long)pppplVar15 - 1;
        if (((ulong)pppplVar15 & uVar22) == 0) {
          pppplVar17 = (long ****)(uVar22 & (ulong)ppplStack_148);
        }
        else {
          pppplVar17 = (long ****)ppplStack_148;
          if (pppplVar15 <= ppplStack_148) {
            uVar20 = 0;
            if (pppplVar15 != (long ****)0x0) {
              uVar20 = (ulong)ppplStack_148 / (ulong)pppplVar15;
            }
            pppplVar17 = (long ****)((long)ppplStack_148 - uVar20 * (long)pppplVar15);
          }
        }
        puVar23 = *(undefined8 **)(*plVar25 + (long)pppplVar17 * 8);
        if (puVar23 == (undefined8 *)0x0) {
LAB_10a7775c8:
          unaff_x19 = (ushort *)0x0;
        }
        else {
          for (unaff_x19 = (ushort *)*puVar23; unaff_x19 != (ushort *)0x0;
              unaff_x19 = *(ushort **)unaff_x19) {
            pppplVar24 = *(long *****)(unaff_x19 + 4);
            if ((long ****)ppplStack_148 == pppplVar24) {
              if (*(long *****)(unaff_x19 + 0x14) == (long ****)ppplStack_148) break;
            }
            else {
              if (((ulong)pppplVar15 & uVar22) == 0) {
                pppplVar24 = (long ****)((ulong)pppplVar24 & uVar22);
              }
              else if (pppplVar15 <= pppplVar24) {
                uVar20 = 0;
                if (pppplVar15 != (long ****)0x0) {
                  uVar20 = (ulong)pppplVar24 / (ulong)pppplVar15;
                }
                pppplVar24 = (long ****)((long)pppplVar24 - uVar20 * (long)pppplVar15);
              }
              if (pppplVar24 != pppplVar17) goto LAB_10a7775c8;
            }
          }
        }
      }
      if ((long)uStack_150 < 0) {
        __ZdlPv(uStack_160);
      }
      if (unaff_x19 == (ushort *)0x0) goto LAB_10a777644;
      uStack_160._4_4_ = (undefined4)((ulong)uStack_160 >> 0x20);
      uStack_160 = (long *****)CONCAT44(uStack_160._4_4_,*(undefined4 *)(unaff_x19 + 0x18));
      bStack_120 = 9;
      bStack_b8 = 0x10;
      pppplStack_b0 = appplStack_f8;
      FUN_10a351904(&pppplStack_b0,&uStack_160,9);
      bStack_b8 = bStack_120;
      bStack_b4 = 1;
      if (0x10 < (ulong)bStack_120) goto LAB_10a777c90;
      (*(code *)(&PTR_FUN_110ba1f88)[bStack_120])(&uStack_160);
      if ((bStack_b4 & 1) == 0) goto LAB_10a77764c;
    }
  }
  goto LAB_10a7776d4;
  while (lVar26 = lVar26 + -0x20, puVar19 = puVar19 + 4, lVar26 != 0) {
LAB_10a777854:
    if (*puVar19 == uStack_188) goto LAB_10a777918;
  }
LAB_10a777868:
  lVar26 = *plStack_1c8;
  if (lVar26 == 0) {
LAB_10a777918:
    appplStack_f8[0]._0_4_ = (uint)appplStack_f8[0] & 0xffffff00;
    bStack_b4 = 0;
    param_7 = plStack_1c8;
  }
  else {
    lVar16 = *(long *)(lVar26 + 0x1f0);
    if (lVar16 == 0) {
LAB_10a7778b0:
      plVar13 = (long *)0x0;
LAB_10a7778b4:
      plVar21 = (long *)0x0;
      bVar3 = true;
    }
    else {
      lVar14 = lVar26 + 0x1f0;
      do {
        lVar1 = 8;
        if (uStack_188 <= *(ulong *)(lVar16 + 0x38)) {
          lVar1 = 0;
          lVar14 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + lVar1);
      } while (lVar16 != 0);
      if ((lVar14 == lVar26 + 0x1f0) || (uStack_188 < *(ulong *)(lVar14 + 0x38)))
      goto LAB_10a7778b0;
      plVar13 = *(long **)(lVar14 + 0x40);
      if (plVar13 == (long *)0x0) goto LAB_10a7778b4;
      plVar21 = plVar13;
      (**(code **)(*plVar13 + 0x10))();
      bVar3 = false;
    }
    if (lVar18 < 10) {
      if (lVar18 == 5) {
        if ((int)*plVar25 != 0x7a69735f || *(char *)((long)plVar25 + 4) != 'e') {
LAB_10a777a20:
          if (bVar3) {
            uVar12 = 0;
          }
          else {
            (**(code **)(*plVar13 + 0x20))();
            uVar12 = *(uint *)(plVar13 + 1) | *(int *)((long)plVar13 + 0xc) << 3;
          }
          uStack_160 = (long *****)CONCAT44(uStack_160._4_4_,uVar12);
          bStack_120 = 9;
          pppplStack_b0 = appplStack_f8;
          ppppplVar10 = &pppplStack_b0;
          uVar11 = 9;
          param_7 = plStack_1c8;
          goto LAB_10a777b9c;
        }
        if (plVar21 == (long *)0x0) {
          uStack_160 = (long *****)0x0;
          uStack_158 = (long *****)0x0;
          param_7 = plStack_1c8;
        }
        else {
          plVar25 = plVar21;
          (**(code **)(*plVar21 + 0xb0))();
          param_7 = plStack_1c8;
          (**(code **)(*plVar21 + 0xb8))();
          uStack_160 = (long *****)NEON_scvtf((ulong)plVar25 & 0xffffffff | (long)plVar21 << 0x20,4)
          ;
          param_3 = (float)uVar29 / SUB84(uStack_160,0);
          param_2 = (long *****)
                    (CONCAT44(-(uint)(0 < (int)plVar21),-(uint)(0 < (int)plVar25)) &
                    CONCAT44((float)((ulong)uVar29 >> 0x20) / (float)((ulong)uStack_160 >> 0x20),
                             param_3));
          uStack_158 = param_2;
        }
      }
      else {
        if ((lVar18 != 9) || (*plVar25 != 0x614d6e694d76755f || (char)plVar25[1] != 'x'))
        goto LAB_10a777a20;
        if (plVar21 == (long *)0x0) {
          param_2 = (long *****)0xbf800000;
          uVar27 = 0xbf800000;
          param_3 = -1.0;
          param_4 = 0xbf800000;
        }
        else {
          (**(code **)(*plVar21 + 0xd8))(plVar21);
        }
        uStack_160 = (long *****)CONCAT44((int)param_2,uVar27);
        uStack_158 = (long *****)CONCAT44(param_4,param_3);
        param_7 = plStack_1c8;
      }
      pppplStack_b0 = appplStack_f8;
      ppppplVar10 = &pppplStack_b0;
LAB_10a777b94:
      bStack_120 = 5;
      uVar11 = 5;
    }
    else {
      if (lVar18 == 0xc) {
        if (*plVar25 != 0x43726564726f625f || (int)plVar25[1] != 0x726f6c6f) goto LAB_10a777a20;
        if (bVar3) {
          pppplStack_b0 = (long ****)0x0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          uStack_a2 = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          uStack_9a = 0;
          bStack_99 = 0;
        }
        else {
          (**(code **)(*plVar13 + 0x20))();
          pppplStack_b0 = (long ****)plVar13[1];
          uStack_a8 = (undefined4)plVar13[2];
          uStack_a4 = (undefined2)((ulong)plVar13[2] >> 0x20);
          uVar28 = *(undefined8 *)((long)plVar13 + 0x1e);
          uVar11 = *(undefined8 *)((long)plVar13 + 0x16);
          uStack_9a = (undefined1)uVar28;
          bStack_99 = (byte)((ulong)uVar28 >> 8);
          uStack_98 = (undefined4)((ulong)uVar28 >> 0x10);
          uStack_94 = (undefined2)((ulong)uVar28 >> 0x30);
          uStack_a2 = (undefined2)uVar11;
          uStack_a0 = (undefined4)((ulong)uVar11 >> 0x10);
          uStack_9c = (undefined2)((ulong)uVar11 >> 0x30);
        }
        uStack_158 = (long *****)
                     CONCAT44(uStack_98,CONCAT13(bStack_99,CONCAT12(uStack_9a,uStack_9c)));
        uStack_160 = (long *****)CONCAT44(uStack_a0,CONCAT22(uStack_a2,uStack_a4));
        ppplStack_168 = (long ***)appplStack_f8;
        ppppplVar10 = (long *****)&ppplStack_168;
        param_7 = plStack_1c8;
        goto LAB_10a777b94;
      }
      if ((lVar18 != 10) || (*plVar25 != 0x6f66736e6172745f || (short)plVar25[1] != 0x6d72))
      goto LAB_10a777a20;
      if (plVar21 == (long *)0x0) {
        uStack_a8 = (undefined4)uStack_1d8;
        uStack_a4 = (undefined2)((ulong)uStack_1d8 >> 0x20);
        uStack_a2 = (undefined2)((ulong)uStack_1d8 >> 0x30);
        pppplStack_b0 = pppplStack_1e0;
        uStack_a0 = SUB84(pppplStack_1e0,0);
        uStack_9c = (undefined2)((ulong)pppplStack_1e0 >> 0x20);
        uStack_9a = (undefined1)((ulong)pppplStack_1e0 >> 0x30);
        bStack_99 = (byte)((ulong)pppplStack_1e0 >> 0x38);
        uStack_90 = 0x3f800000;
        uStack_98 = uStack_a8;
        uStack_94 = uStack_a4;
        uStack_92 = uStack_a2;
      }
      else {
        (**(code **)(*plVar21 + 0x90))(&pppplStack_b0,plVar21);
      }
      uStack_158 = (long *****)CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
      ppplStack_148 = (long ***)CONCAT26(uStack_92,CONCAT24(uStack_94,uStack_98));
      param_2 = (long *****)CONCAT17(bStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,uStack_a0)));
      uStack_160 = (long *****)pppplStack_b0;
      uStack_140 = uStack_90;
      bStack_120 = 7;
      ppplStack_168 = (long ***)appplStack_f8;
      ppppplVar10 = (long *****)&ppplStack_168;
      uVar11 = 7;
      param_7 = plStack_1c8;
      uStack_150 = param_2;
    }
LAB_10a777b9c:
    bStack_b8 = 0x10;
    FUN_10a351904(ppppplVar10,&uStack_160,uVar11);
    bStack_b8 = bStack_120;
    bStack_b4 = 1;
    if (0x10 < (ulong)bStack_120) goto LAB_10a777c90;
    (*(code *)(&PTR_FUN_110ba1f88)[bStack_120])(&uStack_160);
  }
  if ((long)pppplStack_190 < 0) {
    __ZdlPv(pppplStack_1a0);
  }
LAB_10a7776d4:
  unaff_x24 = &PTR_FUN_110ba1f88;
  if ((bStack_b4 & 1) == 0) {
    param_5 = (long *****)pppplStack_1b8;
    ppppplVar10 = ppppplVar9;
    FUN_10a36f2a4();
  }
  else {
    if (*(char *)((long)ppppplVar9 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_160,*ppppplVar9,ppppplVar9[1]);
      ppplStack_148 = (long ***)ppppplVar9[3];
      uStack_140 = CONCAT22(uStack_140._2_2_,*(undefined2 *)(ppppplVar9 + 4));
      if ((bStack_b4 & 1) == 0) goto LAB_10a777c90;
    }
    else {
      uStack_158 = (long *****)ppppplVar9[1];
      uStack_160 = (long *****)*ppppplVar9;
      uStack_150 = (long *****)ppppplVar9[2];
      ppplStack_148 = (long ***)ppppplVar9[3];
      uStack_140 = CONCAT22(uStack_140._2_2_,*(undefined2 *)(ppppplVar9 + 4));
    }
    bStack_fc = 0x10;
    pppplStack_b0 = pppplStack_1b0;
    if (bStack_b8 == 0) {
      bStack_fc = 0;
      auStack_13c[0] = (uint)appplStack_f8[0];
    }
    else {
      FUN_10a3652d8(&pppplStack_b0,appplStack_f8);
      bStack_fc = bStack_b8;
    }
    ppppplVar10 = (long *****)&uStack_160;
    FUN_10a777d70(pppplStack_1c0);
    if (0x10 < (ulong)bStack_fc) goto LAB_10a777c90;
    param_5 = (long *****)pppplStack_1b0;
    (*(code *)(&PTR_FUN_110ba1f88)[bStack_fc])();
    if ((long)uStack_150 < 0) {
      param_5 = uStack_160;
      __ZdlPv();
    }
  }
  if (bStack_b4 == 1) {
    if (0x10 < (ulong)bStack_b8) {
LAB_10a777c90:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a777c94);
      (*pcVar4)();
    }
    param_5 = (long *****)appplStack_f8;
    (*(code *)(&PTR_FUN_110ba1f88)[bStack_b8])();
  }
  ppppplVar9 = ppppplVar9 + 6;
  if (ppppplVar9 == (long *****)pppplStack_1a8) goto LAB_10a777bd8;
  goto LAB_10a77726c;
}



/* Entry: 10a777ca8; end: 10a777d6f;  */

long * FUN_10a777ca8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar4 = *param_1;
  if ((long *)((param_1[2] - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_2) {
    if ((long *)0x276276276276276 < param_2) {
      FUN_10a7a3068();
      plVar2 = (long *)param_1[1];
      if (plVar2 < (long *)param_1[2]) {
        lVar5 = param_2[1];
        lVar4 = *param_2;
        plVar2[2] = param_2[2];
        plVar2[1] = lVar5;
        *plVar2 = lVar4;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        plVar2[3] = param_2[3];
        *(short *)(plVar2 + 4) = (short)param_2[4];
        plVar1 = (long *)((long)plVar2 + 0x24);
        func_0x00010a3518a0(plVar1,(long)param_2 + 0x24);
        plVar2 = plVar2 + 0xd;
      }
      else {
        lVar4 = (long)plVar2 - *param_1;
        uVar7 = (lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar7) {
          FUN_10a7a3068();
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            func_0x000107c3192c(param_1,*param_2,param_2[1]);
          }
          else {
            lVar5 = param_2[1];
            lVar4 = *param_2;
            param_1[2] = param_2[2];
            param_1[1] = lVar5;
            *param_1 = lVar4;
          }
          param_1[3] = param_2[3];
          return param_1;
        }
        lVar5 = param_1[2] - *param_1 >> 3;
        uVar6 = lVar5 * -0x6276276276276276;
        if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
          uVar6 = uVar7;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5)) {
          uVar6 = 0x276276276276276;
        }
        plVar3 = param_2;
        plStack_a8 = param_1;
        FUN_10a7a307c();
        plVar1 = (long *)(uVar6 + lVar4);
        lVar4 = param_2[2];
        lVar5 = *param_2;
        plVar1[1] = param_2[1];
        *plVar1 = lVar5;
        plVar1[2] = lVar4;
        param_2[1] = 0;
        param_2[2] = 0;
        *param_2 = 0;
        plVar1[3] = param_2[3];
        *(short *)(plVar1 + 4) = (short)param_2[4];
        func_0x00010a3518a0((long)plVar1 + 0x24,(long)param_2 + 0x24);
        plVar2 = plVar1 + 0xd;
        lVar4 = (long)plVar1 + (*param_1 - param_1[1]);
        FUN_10a7a30c4(*param_1,param_1[1],lVar4);
        lStack_c8 = *param_1;
        *param_1 = lVar4;
        param_1[1] = (long)plVar2;
        lStack_b0 = param_1[2];
        param_1[2] = uVar6 + (long)plVar3 * 0x68;
        plVar1 = &lStack_c8;
        lStack_c0 = lStack_c8;
        lStack_b8 = lStack_c8;
        func_0x00010a7a31b0(plVar1);
      }
      param_1[1] = (long)plVar2;
      return plVar1;
    }
    lVar5 = param_1[1];
    plVar2 = param_2;
    plStack_38 = param_1;
    FUN_10a7a307c();
    lVar4 = (long)param_2 + (lVar5 - lVar4);
    lVar5 = lVar4 + (*param_1 - param_1[1]);
    FUN_10a7a30c4(*param_1,param_1[1],lVar5);
    lStack_58 = *param_1;
    *param_1 = lVar5;
    param_1[1] = lVar4;
    lStack_40 = param_1[2];
    param_1[2] = (long)(param_2 + (long)plVar2 * 0xd);
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a7a31b0(param_1);
  }
  return param_1;
}



/* Entry: 10a777d70; end: 10a777ee3;  */

long * FUN_10a777d70(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 < (long *)param_1[2]) {
    lVar3 = param_2[1];
    lVar6 = *param_2;
    plVar7[2] = param_2[2];
    plVar7[1] = lVar3;
    *plVar7 = lVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plVar7[3] = param_2[3];
    *(short *)(plVar7 + 4) = (short)param_2[4];
    plVar1 = (long *)((long)plVar7 + 0x24);
    func_0x00010a3518a0(plVar1,(long)param_2 + 0x24);
    plVar7 = plVar7 + 0xd;
  }
  else {
    lVar6 = (long)plVar7 - *param_1;
    uVar5 = (lVar6 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x276276276276276 < uVar5) {
      FUN_10a7a3068();
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        func_0x000107c3192c(param_1,*param_2,param_2[1]);
      }
      else {
        lVar3 = param_2[1];
        lVar6 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = lVar3;
        *param_1 = lVar6;
      }
      param_1[3] = param_2[3];
      return param_1;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar3 * -0x6276276276276276;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = uVar5;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar3 * 0x4ec4ec4ec4ec4ec5)) {
      uVar4 = 0x276276276276276;
    }
    plVar2 = param_2;
    plStack_48 = param_1;
    FUN_10a7a307c();
    plVar1 = (long *)(uVar4 + lVar6);
    lVar6 = param_2[2];
    lVar3 = *param_2;
    plVar1[1] = param_2[1];
    *plVar1 = lVar3;
    plVar1[2] = lVar6;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    plVar1[3] = param_2[3];
    *(short *)(plVar1 + 4) = (short)param_2[4];
    func_0x00010a3518a0((long)plVar1 + 0x24,(long)param_2 + 0x24);
    plVar7 = plVar1 + 0xd;
    lVar6 = (long)plVar1 + (*param_1 - param_1[1]);
    FUN_10a7a30c4(*param_1,param_1[1],lVar6);
    lStack_68 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar7;
    lStack_50 = param_1[2];
    param_1[2] = uVar4 + (long)plVar2 * 0x68;
    plVar1 = &lStack_68;
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x00010a7a31b0(plVar1);
  }
  param_1[1] = (long)plVar7;
  return plVar1;
}



/* Entry: 10a777ee4; end: 10a778077;  */

undefined8 * FUN_10a777ee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 10a778078; end: 10a778123;  */

undefined * FUN_10a778078(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if ((bRam00000001138354f8 & 1) == 0) {
    iVar2 = 0x138354f8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c2b07c(0x1138354d8,&UNK_10f6753b2);
      ___cxa_atexit(FUN_10a32edf4,0x1138354d8,0x100000000);
      ___cxa_guard_release(0x1138354f8);
    }
  }
  puVar1 = (undefined *)0x1138354d8;
  if (param_1 != 1) {
    puVar1 = &UNK_10e4d9788;
  }
  return puVar1;
}



/* Entry: 10a778124; end: 10a7781bb;  */

undefined8 FUN_10a778124(void)

{
  int iVar1;
  
  if ((bRam0000000113835520 & 1) == 0) {
    iVar1 = 0x13835520;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2b07c(0x113835500,&UNK_10f6753c6);
      ___cxa_atexit(FUN_10a32edf4,0x113835500,0x100000000);
      ___cxa_guard_release(0x113835520);
    }
  }
  return 0x113835500;
}



/* Entry: 10a7781bc; end: 10a77837f;  */

bool FUN_10a7781bc(int param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_2 + param_3 * 0x18;
  lVar2 = param_2;
  func_0x00010a7a3264(param_2,lVar3,&UNK_10f6753ed,0x1b);
  if ((param_1 - 0x2bU < 0x39) && (lVar2 != lVar3)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010a7a3264(param_2,lVar3,&UNK_10f675426,0x1c);
    func_0x00010a7a3264(param_2,lVar3,&UNK_10f675409,0x1c);
    bVar1 = param_1 - 0x406U < 0x46 && param_2 != lVar3;
    if (param_1 - 0x407U < 0x45 && lVar2 != lVar3) {
      bVar1 = true;
    }
  }
  return bVar1;
}



/* Entry: 10a778380; end: 10a7785ef;  */

uint FUN_10a778380(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((char)param_1[0x97] != '\0') {
    return 0;
  }
  lVar3 = 0x240ea0ea4778e8cd;
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xf8))();
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(plVar2 + 0x74) & 1) != 0) {
      return 0;
    }
    if ((*(byte *)(plVar2 + 0x82) & 1) != 0) {
      return 0;
    }
    if ((*(byte *)(plVar2 + 0x8c) & 1) != 0) {
      return 0;
    }
    if ((*(byte *)((long)plVar2 + 0x3a1) & 1) != 0) {
      return 0;
    }
    if ((*(byte *)((long)plVar2 + 0x411) & 1) != 0) {
      return 0;
    }
    if ((*(byte *)((long)plVar2 + 0x461) & 1) != 0) {
      return 0;
    }
  }
  lVar4 = param_1[0x55];
  lVar5 = param_1[0x54];
  if (lVar4 != lVar5) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar6 = *(long *)(lVar5 + lVar7);
      if (((lVar6 != 0) && (*(long **)(lVar6 + 0x228) != *(long **)(lVar6 + 0x230))) &&
         (lVar6 = **(long **)(lVar6 + 0x228), lVar6 != 0)) {
        if (1 < *(uint *)(lVar6 + 0x250)) {
          return 0;
        }
        plVar2 = *(long **)(lVar6 + 0x188);
        if ((plVar2 != (long *)0x0) && ((**(code **)(*plVar2 + 0x90))(), ((ulong)plVar2 & 3) != 0))
        {
          return 0;
        }
        if ((*(byte *)(lVar6 + 0x279) >> 1 & 1) != 0) {
          return 0;
        }
        lVar4 = param_1[0x55];
        lVar5 = param_1[0x54];
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar8 < (ulong)(lVar4 - lVar5 >> 4));
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x38))();
  if ((lVar3 != 0xf) ||
     (*plVar2 != 0x6e656e6f706d6f43 || *(long *)((long)plVar2 + 7) != 0x6567616d492e746e)) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x38))();
    if ((lVar3 != 0xe) ||
       (*plVar2 != 0x6e656e6f706d6f43 || *(long *)((long)plVar2 + 6) != 0x747865542e746e65)) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x38))();
      if (lVar3 != 0x1a) {
        return 0;
      }
      if ((param_2 >> 2 & 1) == 0) {
        return 0;
      }
      if (((*plVar2 != 0x6e656e6f706d6f43 || plVar2[1] != 0x7265646e65522e74) ||
          plVar2[2] != 0x757369566873654d) || (short)plVar2[3] != 0x6c61) {
        return 0;
      }
      goto LAB_10a778588;
    }
    param_2 = param_2 >> 1;
  }
  if ((param_2 & 1) == 0) {
    return 0;
  }
LAB_10a778588:
  if ((*(long *)(param_1[0x2e] + 0x100) != 0) &&
     (*(char *)(*(long *)(param_1[0x2e] + 0x100) + 0x290) == '\x03')) {
    return 0;
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x1c8))();
  if ((int)plVar2 != 0) {
    lVar3 = *(long *)(param_1[0x2e] + 0xc50);
    if (*(char *)(lVar3 + 0x181) == '\x01') {
      uVar1 = (uint)*(byte *)(lVar3 + 0x180);
    }
    else {
      lVar4 = *(long *)(lVar3 + 0x188);
      if (lVar4 != 0) {
        func_0x00010a778274();
      }
      uVar1 = (uint)lVar4;
      *(ushort *)(lVar3 + 0x180) = (ushort)lVar4 | 0x100;
    }
    return uVar1 & 1;
  }
  return 1;
}



/* Entry: 10a7785f0; end: 10a778637;  */

uint FUN_10a7785f0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x181) == '\x01') {
    uVar1 = (uint)*(byte *)(param_1 + 0x180);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x188);
    if (lVar2 != 0) {
      func_0x00010a778274();
    }
    uVar1 = (uint)lVar2;
    *(ushort *)(param_1 + 0x180) = (ushort)lVar2 | 0x100;
  }
  return uVar1 & 1;
}



/* Entry: 10a778638; end: 10a77873b;  */

uint FUN_10a778638(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = param_2;
  func_0x00010a777f8c();
  if (((int)plVar2 == 1) && ((**(code **)(*param_2 + 0x1d8))(), ((ulong)param_2 & 1) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((param_3 != (long *)0x0) && (0x178 < *(int *)(*(long *)(param_1 + 0xa20) + 0x18))) {
      (**(code **)(*param_3 + 0x90))(param_3);
      uVar1 = (uint)param_3 >> 5 & 1;
    }
  }
  return uVar1;
}



/* Entry: 10a77873c; end: 10a77877b;  */

long * FUN_10a77873c(long *param_1)

{
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a77877c; end: 10a77883f;  */

void FUN_10a77877c(undefined1 *param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if (param_3 == 0) {
    *param_1 = 1;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x20);
    lVar6 = *(long *)(param_2 + 0x28) - lVar4;
    if (lVar6 != 0) {
      uVar9 = 0;
      uVar8 = lVar6 >> 3;
      uVar11 = 0xffffffff;
      uVar7 = uVar8;
      puVar10 = (uint *)(lVar4 + 4);
      do {
        uVar5 = *puVar10;
        uVar2 = uVar9;
        if (uVar5 < param_3 || uVar11 <= uVar5) {
          uVar2 = uVar7;
          uVar5 = uVar11;
        }
        uVar11 = uVar5;
        uVar9 = uVar9 + 1;
        uVar7 = uVar2;
        puVar10 = puVar10 + 2;
      } while (uVar8 != uVar9);
      if (uVar2 < uVar8) {
        *param_1 = 1;
        puVar1 = (undefined4 *)(lVar4 + uVar2 * 8);
        uVar11 = puVar1[1];
        *(undefined4 *)(param_1 + 4) = *puVar1;
        param_1[8] = 1;
        *(ulong *)(param_1 + 0x10) = uVar2;
        param_1[0x18] = uVar11 == param_3;
        return;
      }
    }
    iVar3 = *(int *)(param_2 + 0x1c);
    if (param_3 <= (uint)(*(int *)(param_2 + 0x18) - iVar3)) {
      *param_1 = 1;
      *(int *)(param_1 + 4) = iVar3;
      return;
    }
  }
  return;
}



/* Entry: 10a778840; end: 10a7788f3;  */

void FUN_10a778840(long param_1,int param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  
  if (param_2 != 0) {
    if (*(char *)(param_3 + 8) == '\x01') {
      if (*(char *)(param_3 + 0x18) == '\x01') {
        lVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_3 + 0x10) * 8;
        if (*(long *)(param_1 + 0x28) == lVar1) {
LAB_10a7788f0:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7788f4);
          (*pcVar4)();
        }
        lVar3 = *(long *)(param_1 + 0x28) - (lVar1 + 8);
        if (lVar3 != 0) {
          _memmove(lVar1,lVar1 + 8,lVar3);
        }
        *(long *)(param_1 + 0x28) = lVar1 + lVar3;
      }
      else {
        if ((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) <=
            *(ulong *)(param_3 + 0x10)) goto LAB_10a7788f0;
        piVar2 = (int *)(*(long *)(param_1 + 0x20) + *(ulong *)(param_3 + 0x10) * 8);
        *piVar2 = *piVar2 + param_2;
        piVar2[1] = piVar2[1] - param_2;
      }
    }
    else {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
    }
  }
  return;
}



/* Entry: 10a7788f4; end: 10a778bcf;  */

undefined1  [16] FUN_10a7788f4(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  long unaff_x21;
  ulong uVar15;
  ulong *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char acStack_c0 [4];
  undefined4 uStack_bc;
  char acStack_a0 [4];
  uint uStack_9c;
  ulong *puStack_80;
  
  puVar6 = param_1;
  if ((int)param_3 != 0) {
    puVar5 = (ulong *)param_1[4];
    puVar9 = (ulong *)param_1[5];
    uVar8 = (long)puVar9 - (long)puVar5 >> 3;
    puVar16 = puVar5;
    puVar11 = puVar9;
    uVar15 = uVar8;
    uVar12 = (long)puVar9 - (long)puVar5;
    while (puVar13 = puVar16, uVar12 != 0) {
      uVar14 = uVar15 >> 1;
      puVar1 = puVar13 + uVar14;
      uVar15 = uVar15 + (uVar15 >> 1 ^ 0xffffffffffffffff);
      puVar16 = puVar1 + 1;
      puVar11 = puVar1 + 1;
      uVar12 = uVar15;
      if ((uint)param_2 <= (uint)*puVar1) {
        puVar16 = puVar13;
        puVar11 = puVar13;
        uVar15 = uVar14;
        uVar12 = uVar14;
      }
    }
    uVar15 = (ulong)param_2 & 0xffffffff | param_3 << 0x20;
    if (puVar9 < (ulong *)param_1[6]) {
      puVar16 = puVar11;
      if (puVar11 == puVar9) {
        *puVar9 = uVar15;
        param_1[5] = (ulong)(puVar9 + 1);
      }
      else {
        puVar5 = puVar11 + 1;
        puVar13 = puVar9;
        if (puVar9 + -1 < puVar9) {
          *puVar9 = puVar9[-1];
          puVar13 = puVar9 + 1;
        }
        param_1[5] = (ulong)puVar13;
        if (puVar9 != puVar5) {
          param_2 = puVar11;
          _memmove(puVar5,puVar11);
          puVar6 = puVar5;
        }
        *puVar11 = uVar15;
      }
    }
    else {
      uVar8 = uVar8 + 1;
      if (uVar8 >> 0x3d != 0) {
        FUN_10a7a32d8();
        if (unaff_x21 != 0) {
          __ZdlPv();
        }
        __Unwind_Resume();
        puStack_80 = puVar5;
        FUN_10a77877c(acStack_a0,param_1,param_2);
        if ((acStack_a0[0] == '\x01') &&
           (FUN_10a77877c(acStack_c0,param_1 + 8,param_3), acStack_c0[0] == '\x01')) {
          FUN_10a778840(param_1,param_2,acStack_a0);
          FUN_10a778840(param_1 + 8,param_3,acStack_c0);
          uVar3 = 0;
          if ((uint)param_1[0x10] != 0) {
            uVar3 = uStack_9c / (uint)param_1[0x10];
          }
          uVar8 = (ulong)uStack_9c << 0x20 | 1;
          uVar7 = CONCAT44(uVar3,uStack_bc);
        }
        else {
          uVar8 = 0;
          uVar7 = 0;
        }
        auVar18._8_8_ = uVar7;
        auVar18._0_8_ = uVar8;
        return auVar18;
      }
      uVar14 = (long)puVar11 - (long)puVar5;
      uVar10 = (long)param_1[6] - (long)puVar5;
      uVar12 = (long)uVar10 >> 2;
      if (uVar12 <= uVar8) {
        uVar12 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        uVar12 = 0x1fffffffffffffff;
      }
      if (uVar12 == 0) {
        uVar12 = 0;
        uVar8 = 0;
      }
      else {
        FUN_10a7a32ec();
        uVar8 = (long)param_2 << 3;
      }
      puVar16 = (ulong *)(uVar12 + uVar14);
      uVar10 = uVar12 + uVar8;
      if (uVar14 == uVar8) {
        if ((long)uVar14 < 1) {
          uVar14 = (long)uVar14 >> 2;
          if (puVar11 == puVar5) {
            uVar14 = 1;
          }
          uVar10 = uVar14;
          FUN_10a7a32ec();
          puVar16 = (ulong *)(uVar10 + (uVar14 >> 2) * 8);
          uVar10 = uVar10 + (long)param_2 * 8;
          if (uVar12 != 0) {
            __ZdlPv(uVar12);
          }
        }
        else {
          puVar16 = (ulong *)((long)puVar16 - ((uVar14 >> 1) + 4 & 0xfffffffffffffff8));
        }
      }
      *puVar16 = uVar15;
      _memcpy(puVar16 + 1,puVar11,param_1[5] - (long)puVar11);
      param_2 = (ulong *)param_1[4];
      uVar8 = param_1[5];
      param_1[5] = (ulong)puVar11;
      uVar15 = (long)puVar16 - ((long)puVar11 - (long)param_2);
      _memcpy(uVar15);
      puVar6 = (ulong *)param_1[4];
      param_1[4] = uVar15;
      param_1[5] = (long)(puVar16 + 1) + (uVar8 - (long)puVar11);
      param_1[6] = uVar10;
      if (puVar6 != (ulong *)0x0) {
        __ZdlPv();
      }
    }
    puVar5 = puVar16 + 1;
    puVar9 = (ulong *)param_1[5];
    if ((puVar9 != puVar5) && (*(uint *)((long)puVar16 + 4) + (uint)*puVar16 == (uint)puVar16[1])) {
      *(uint *)((long)puVar16 + 4) = *(uint *)((long)puVar16 + 0xc) + *(uint *)((long)puVar16 + 4);
      param_2 = puVar16 + 2;
      lVar2 = (long)puVar9 - (long)param_2;
      if (lVar2 != 0) {
        puVar6 = puVar5;
        _memmove(puVar5,param_2,lVar2);
      }
      puVar9 = (ulong *)((long)puVar5 + lVar2);
      param_1[5] = (ulong)puVar9;
    }
    puVar11 = (ulong *)param_1[4];
    puVar5 = puVar16;
    if ((puVar11 != puVar16) &&
       (puVar5 = puVar11, *(uint *)((long)puVar16 + -4) + (uint)puVar16[-1] == (uint)*puVar16)) {
      *(uint *)((long)puVar16 + -4) = *(uint *)((long)puVar16 + 4) + *(uint *)((long)puVar16 + -4);
      if (puVar9 == puVar16) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a778bb4);
        (*pcVar4)();
      }
      param_2 = puVar16 + 1;
      lVar2 = (long)puVar9 - (long)param_2;
      if (lVar2 != 0) {
        puVar6 = puVar16;
        _memmove(puVar16,param_2,lVar2);
        puVar11 = (ulong *)param_1[4];
      }
      puVar9 = (ulong *)((long)puVar16 + lVar2);
      param_1[5] = (ulong)puVar9;
      puVar5 = puVar11;
    }
    if (puVar5 != puVar9) {
      uVar3 = (uint)puVar9[-1];
      if (*(uint *)((long)puVar9 + -4) + uVar3 == *(uint *)((long)param_1 + 0x1c)) {
        *(uint *)((long)param_1 + 0x1c) = uVar3;
        param_1[5] = (ulong)(puVar9 + -1);
      }
    }
  }
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = puVar6;
  return auVar17;
}



/* Entry: 10a778bd0; end: 10a778c83;  */

undefined1  [16] FUN_10a778bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  char acStack_70 [4];
  undefined4 uStack_6c;
  char acStack_50 [4];
  uint uStack_4c;
  
  FUN_10a77877c(acStack_50,param_1,param_2);
  if (acStack_50[0] == '\x01') {
    FUN_10a77877c(acStack_70,param_1 + 0x40,param_3);
    if (acStack_70[0] == '\x01') {
      FUN_10a778840(param_1,param_2,acStack_50);
      FUN_10a778840(param_1 + 0x40,param_3,acStack_70);
      uVar1 = 0;
      if (*(uint *)(param_1 + 0x80) != 0) {
        uVar1 = uStack_4c / *(uint *)(param_1 + 0x80);
      }
      uVar2 = (ulong)uStack_4c << 0x20 | 1;
      uVar3 = CONCAT44(uVar1,uStack_6c);
      goto LAB_10a778c70;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_10a778c70:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 10a778c84; end: 10a778d93;  */

void FUN_10a778c84(float param_1,int *param_2,int *param_3)

{
  long *plVar1;
  undefined2 uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  short sStack_e0;
  undefined2 uStack_de;
  uint uStack_dc;
  int iStack_d8;
  int aiStack_6c [16];
  byte bStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((float)(int)param_1 == param_1) {
    if ((int)param_3 == 2) {
      if ((-2.1474836e+09 <= param_1) && (param_1 <= 2.1474836e+09)) {
        aiStack_6c[0] = (int)param_1;
        bStack_2c = 1;
        param_3 = aiStack_6c;
        func_0x00010a3518a0();
        *(undefined1 *)(param_2 + 0x11) = 1;
LAB_10a778d68:
        if (0x10 < (ulong)bStack_2c) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a778d90);
          (*pcVar4)();
        }
        param_2 = aiStack_6c;
        (*(code *)(&PTR_FUN_110ba1f88)[bStack_2c])();
        goto LAB_10a778cb8;
      }
    }
    else if (((param_1 <= 4.2949673e+09) && (0.0 <= param_1)) && ((int)param_3 == 6)) {
      aiStack_6c[0] = (int)param_1;
      bStack_2c = 9;
      param_3 = aiStack_6c;
      func_0x00010a3518a0();
      *(undefined1 *)(param_2 + 0x11) = 1;
      goto LAB_10a778d68;
    }
  }
  *(undefined1 *)param_2 = 0;
  *(undefined1 *)(param_2 + 0x11) = 0;
LAB_10a778cb8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((long)param_2 + 0x15) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  if (cRam00000001137eba3f < '\0') {
    func_0x000107c3192c(&plStack_100,plRam00000001137eba28,plRam00000001137eba30);
  }
  else {
    plStack_f8 = plRam00000001137eba30;
    plStack_100 = plRam00000001137eba28;
    plStack_f0 = (long *)CONCAT17(cRam00000001137eba3f,uRam00000001137eba38);
  }
  plStack_e8 = plRam00000001137eba40;
  sStack_e0 = 0xb;
  uStack_dc = 0;
  iStack_d8 = 0x40;
  FUN_10a77ea68(param_2,&plStack_100);
  if ((long)plStack_f0 < 0) {
    __ZdlPv(plStack_100);
  }
  if (param_3 == (int *)0x0) {
    uVar11 = 0x40;
  }
  else {
    plStack_118 = (long *)0x0;
    plStack_110 = (long *)0x0;
    plStack_108 = (long *)0x0;
    plVar15 = *(undefined8 **)(param_3 + 0x6e) + 1;
    plVar20 = (long *)**(undefined8 **)(param_3 + 0x6e);
    if (plVar20 == plVar15) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)0x0;
      do {
        plVar19 = plStack_118;
        if ((plVar20[8] != 0) &&
           ((long *)plVar20[7] != plRam00000001137eba40 &&
            (long *)plVar20[7] != plRam00000001137eba80)) {
          uVar2 = *(undefined2 *)(plVar20[8] + 0x20);
          if (plVar12 < plStack_108) {
            if (*(char *)((long)plVar20 + 0x37) < '\0') {
              func_0x000107c3192c(plVar12,plVar20[4],plVar20[5]);
            }
            else {
              lVar13 = plVar20[5];
              lVar7 = plVar20[4];
              plVar12[2] = plVar20[6];
              plVar12[1] = lVar13;
              *plVar12 = lVar7;
            }
            plVar12[3] = plVar20[7];
            *(undefined2 *)(plVar12 + 4) = uVar2;
            plVar12 = plVar12 + 5;
            plStack_110 = plVar12;
          }
          else {
            lVar7 = (long)plVar12 - (long)plStack_118;
            uVar18 = (lVar7 >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar18) {
              FUN_10a7a3fcc();
LAB_10a779284:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a779288);
              (*pcVar4)();
            }
            lVar13 = (long)plStack_108 - (long)plStack_118 >> 3;
            uVar14 = lVar13 * -0x6666666666666666;
            if (uVar14 < uVar18 || uVar14 - uVar18 == 0) {
              uVar14 = uVar18;
            }
            if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
              uVar14 = 0x666666666666666;
            }
            sStack_e0 = (short)&plStack_118;
            uStack_de = (undefined2)((ulong)&plStack_118 >> 0x10);
            uStack_dc = (uint)((ulong)&plStack_118 >> 0x20);
            if (uVar14 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              if (0x666666666666666 < uVar14) {
                func_0x000109ffded8();
                goto LAB_10a779284;
              }
              plVar6 = (long *)(uVar14 * 0x28);
              __Znwm();
            }
            plVar1 = (long *)((long)plVar6 + lVar7);
            plVar17 = plVar6 + uVar14 * 5;
            plStack_100 = plVar6;
            plStack_f8 = plVar1;
            plStack_f0 = plVar1;
            plStack_e8 = plVar17;
            if (*(char *)((long)plVar20 + 0x37) < '\0') {
              func_0x000107c3192c(plVar1,plVar20[4],plVar20[5]);
              lVar7 = (long)plStack_110 - (long)plStack_118;
              plVar12 = plStack_110;
              plVar19 = plStack_118;
            }
            else {
              lVar21 = plVar20[5];
              lVar13 = plVar20[4];
              plVar1[2] = plVar20[6];
              plVar1[1] = lVar21;
              *plVar1 = lVar13;
            }
            plVar1[3] = plVar20[7];
            *(undefined2 *)(plVar1 + 4) = uVar2;
            plVar6 = plVar19;
            plVar10 = (long *)((long)plVar1 - lVar7);
            if (plVar19 != plVar12) {
              do {
                lVar21 = plVar6[1];
                lVar13 = *plVar6;
                plVar10[2] = plVar6[2];
                plVar10[1] = lVar21;
                *plVar10 = lVar13;
                plVar6[1] = 0;
                plVar6[2] = 0;
                *plVar6 = 0;
                plVar10[3] = plVar6[3];
                *(short *)(plVar10 + 4) = (short)plVar6[4];
                plVar6 = plVar6 + 5;
                plVar10 = plVar10 + 5;
              } while (plVar6 != plVar12);
              do {
                if (*(char *)((long)plVar19 + 0x17) < '\0') {
                  __ZdlPv(*plVar19);
                }
                plVar19 = plVar19 + 5;
                plVar6 = plStack_118;
              } while (plVar19 != plVar12);
            }
            plVar12 = plVar1 + 5;
            plStack_e8 = plStack_108;
            plStack_118 = (long *)((long)plVar1 - lVar7);
            plStack_110 = plVar12;
            plStack_108 = plVar17;
            plStack_100 = plVar6;
            plStack_f8 = plVar6;
            plStack_f0 = plVar6;
            FUN_10a7a3fe0(&plStack_100);
            plStack_110 = plVar12;
          }
        }
        plVar19 = (long *)plVar20[1];
        plVar6 = plVar20;
        if ((long *)plVar20[1] == (long *)0x0) {
          do {
            plVar20 = (long *)plVar6[2];
            bVar5 = (long *)*plVar20 != plVar6;
            plVar6 = plVar20;
          } while (bVar5);
        }
        else {
          do {
            plVar20 = plVar19;
            plVar19 = (long *)*plVar20;
          } while ((long *)*plVar20 != (long *)0x0);
        }
      } while (plVar20 != plVar15);
    }
    plVar20 = plStack_118;
    puVar3 = PTR___ZSt7nothrow_1103469d8;
    uVar14 = ((long)plVar12 - (long)plStack_118 >> 3) * -0x3333333333333333;
    uVar18 = uVar14;
    if ((long)plVar12 - (long)plStack_118 < 1) {
      lVar7 = 0;
      uVar18 = 0;
    }
    else {
      do {
        lVar7 = uVar18 * 0x28;
        __ZnwmRKSt9nothrow_t(lVar7,puVar3);
        if (lVar7 != 0) goto LAB_10a7790fc;
        uVar9 = uVar18 >> 1;
        bVar5 = 1 < uVar18;
        uVar18 = uVar9;
      } while (bVar5);
      lVar7 = 0;
    }
LAB_10a7790fc:
    FUN_10a7ade20(plVar20,plVar12,uVar14,lVar7,uVar18);
    if (lVar7 != 0) {
      __ZdlPv(lVar7);
    }
    plVar20 = plStack_110;
    if (plStack_118 == plStack_110) {
      uVar11 = 0x40;
    }
    else {
      iVar16 = 0x40;
      plVar15 = plStack_118;
      do {
        lVar7 = plVar15[4];
        lVar13 = (long)(short)lVar7;
        FUN_10a77ebb8();
        if (*(char *)((long)plVar15 + 0x17) < '\0') {
          func_0x000107c3192c(&plStack_100,*plVar15,plVar15[1]);
        }
        else {
          plStack_f8 = (long *)plVar15[1];
          plStack_100 = (long *)*plVar15;
          plStack_f0 = (long *)plVar15[2];
        }
        iVar8 = (int)((ulong)lVar13 >> 0x20);
        plStack_e8 = (long *)plVar15[3];
        uVar11 = (iVar16 + iVar8) - 1U & -iVar8;
        sStack_e0 = (short)lVar7;
        uStack_dc = uVar11;
        iStack_d8 = (int)lVar13;
        FUN_10a77ea68(param_2,&plStack_100);
        if ((long)plStack_f0 < 0) {
          __ZdlPv(plStack_100);
        }
        iVar16 = uVar11 + (int)lVar13;
        plVar15 = plVar15 + 5;
      } while (plVar15 != plVar20);
      uVar11 = iVar16 + 3U & 0xfffffffc;
    }
    FUN_10a7a4040(&plStack_118);
  }
  if (cRam00000001137eba7f < '\0') {
    func_0x000107c3192c(&plStack_100,plRam00000001137eba68,plRam00000001137eba70);
  }
  else {
    plStack_f8 = plRam00000001137eba70;
    plStack_100 = plRam00000001137eba68;
    plStack_f0 = (long *)CONCAT17(cRam00000001137eba7f,uRam00000001137eba78);
  }
  plStack_e8 = plRam00000001137eba80;
  sStack_e0 = 6;
  iStack_d8 = 4;
  uStack_dc = uVar11;
  FUN_10a77ea68(param_2,&plStack_100);
  if ((long)plStack_f0 < 0) {
    __ZdlPv(plStack_100);
  }
  param_2[6] = uVar11 + 0x13 & 0xfffffff0;
  *(undefined1 *)(param_2 + 7) = 1;
  return;
}



/* Entry: 10a778d94; end: 10a779317;  */

void FUN_10a778d94(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined2 uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  short sStack_70;
  undefined2 uStack_6e;
  uint uStack_6c;
  int iStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  param_1[2] = 0;
  if (cRam00000001137eba3f < '\0') {
    func_0x000107c3192c(&plStack_90,plRam00000001137eba28,plRam00000001137eba30);
  }
  else {
    plStack_88 = plRam00000001137eba30;
    plStack_90 = plRam00000001137eba28;
    plStack_80 = (long *)CONCAT17(cRam00000001137eba3f,uRam00000001137eba38);
  }
  plStack_78 = plRam00000001137eba40;
  sStack_70 = 0xb;
  uStack_6c = 0;
  iStack_68 = 0x40;
  FUN_10a77ea68(param_1,&plStack_90);
  if ((long)plStack_80 < 0) {
    __ZdlPv(plStack_90);
  }
  if (param_2 == 0) {
    uVar11 = 0x40;
  }
  else {
    plStack_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_98 = (long *)0x0;
    plVar15 = *(undefined8 **)(param_2 + 0x1b8) + 1;
    plVar20 = (long *)**(undefined8 **)(param_2 + 0x1b8);
    if (plVar20 == plVar15) {
      plVar12 = (long *)0x0;
    }
    else {
      plVar12 = (long *)0x0;
      do {
        plVar19 = plStack_a8;
        if ((plVar20[8] != 0) &&
           ((long *)plVar20[7] != plRam00000001137eba40 &&
            (long *)plVar20[7] != plRam00000001137eba80)) {
          uVar2 = *(undefined2 *)(plVar20[8] + 0x20);
          if (plVar12 < plStack_98) {
            if (*(char *)((long)plVar20 + 0x37) < '\0') {
              func_0x000107c3192c(plVar12,plVar20[4],plVar20[5]);
            }
            else {
              lVar13 = plVar20[5];
              lVar7 = plVar20[4];
              plVar12[2] = plVar20[6];
              plVar12[1] = lVar13;
              *plVar12 = lVar7;
            }
            plVar12[3] = plVar20[7];
            *(undefined2 *)(plVar12 + 4) = uVar2;
            plVar12 = plVar12 + 5;
            plStack_a0 = plVar12;
          }
          else {
            lVar7 = (long)plVar12 - (long)plStack_a8;
            uVar18 = (lVar7 >> 3) * -0x3333333333333333 + 1;
            if (0x666666666666666 < uVar18) {
              FUN_10a7a3fcc();
LAB_10a779284:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10a779288);
              (*pcVar4)();
            }
            lVar13 = (long)plStack_98 - (long)plStack_a8 >> 3;
            uVar14 = lVar13 * -0x6666666666666666;
            if (uVar14 < uVar18 || uVar14 - uVar18 == 0) {
              uVar14 = uVar18;
            }
            if (0x333333333333332 < (ulong)(lVar13 * -0x3333333333333333)) {
              uVar14 = 0x666666666666666;
            }
            sStack_70 = (short)&plStack_a8;
            uStack_6e = (undefined2)((ulong)&plStack_a8 >> 0x10);
            uStack_6c = (uint)((ulong)&plStack_a8 >> 0x20);
            if (uVar14 == 0) {
              plVar6 = (long *)0x0;
            }
            else {
              if (0x666666666666666 < uVar14) {
                func_0x000109ffded8();
                goto LAB_10a779284;
              }
              plVar6 = (long *)(uVar14 * 0x28);
              __Znwm();
            }
            plVar1 = (long *)((long)plVar6 + lVar7);
            plVar17 = plVar6 + uVar14 * 5;
            plStack_90 = plVar6;
            plStack_88 = plVar1;
            plStack_80 = plVar1;
            plStack_78 = plVar17;
            if (*(char *)((long)plVar20 + 0x37) < '\0') {
              func_0x000107c3192c(plVar1,plVar20[4],plVar20[5]);
              lVar7 = (long)plStack_a0 - (long)plStack_a8;
              plVar12 = plStack_a0;
              plVar19 = plStack_a8;
            }
            else {
              lVar21 = plVar20[5];
              lVar13 = plVar20[4];
              plVar1[2] = plVar20[6];
              plVar1[1] = lVar21;
              *plVar1 = lVar13;
            }
            plVar1[3] = plVar20[7];
            *(undefined2 *)(plVar1 + 4) = uVar2;
            plVar6 = plVar19;
            plVar10 = (long *)((long)plVar1 - lVar7);
            if (plVar19 != plVar12) {
              do {
                lVar21 = plVar6[1];
                lVar13 = *plVar6;
                plVar10[2] = plVar6[2];
                plVar10[1] = lVar21;
                *plVar10 = lVar13;
                plVar6[1] = 0;
                plVar6[2] = 0;
                *plVar6 = 0;
                plVar10[3] = plVar6[3];
                *(short *)(plVar10 + 4) = (short)plVar6[4];
                plVar6 = plVar6 + 5;
                plVar10 = plVar10 + 5;
              } while (plVar6 != plVar12);
              do {
                if (*(char *)((long)plVar19 + 0x17) < '\0') {
                  __ZdlPv(*plVar19);
                }
                plVar19 = plVar19 + 5;
                plVar6 = plStack_a8;
              } while (plVar19 != plVar12);
            }
            plVar12 = plVar1 + 5;
            plStack_78 = plStack_98;
            plStack_a8 = (long *)((long)plVar1 - lVar7);
            plStack_a0 = plVar12;
            plStack_98 = plVar17;
            plStack_90 = plVar6;
            plStack_88 = plVar6;
            plStack_80 = plVar6;
            FUN_10a7a3fe0(&plStack_90);
            plStack_a0 = plVar12;
          }
        }
        plVar19 = (long *)plVar20[1];
        plVar6 = plVar20;
        if ((long *)plVar20[1] == (long *)0x0) {
          do {
            plVar20 = (long *)plVar6[2];
            bVar5 = (long *)*plVar20 != plVar6;
            plVar6 = plVar20;
          } while (bVar5);
        }
        else {
          do {
            plVar20 = plVar19;
            plVar19 = (long *)*plVar20;
          } while ((long *)*plVar20 != (long *)0x0);
        }
      } while (plVar20 != plVar15);
    }
    plVar20 = plStack_a8;
    puVar3 = PTR___ZSt7nothrow_1103469d8;
    uVar14 = ((long)plVar12 - (long)plStack_a8 >> 3) * -0x3333333333333333;
    uVar18 = uVar14;
    if ((long)plVar12 - (long)plStack_a8 < 1) {
      lVar7 = 0;
      uVar18 = 0;
    }
    else {
      do {
        lVar7 = uVar18 * 0x28;
        __ZnwmRKSt9nothrow_t(lVar7,puVar3);
        if (lVar7 != 0) goto LAB_10a7790fc;
        uVar9 = uVar18 >> 1;
        bVar5 = 1 < uVar18;
        uVar18 = uVar9;
      } while (bVar5);
      lVar7 = 0;
    }
LAB_10a7790fc:
    FUN_10a7ade20(plVar20,plVar12,uVar14,lVar7,uVar18);
    if (lVar7 != 0) {
      __ZdlPv(lVar7);
    }
    plVar20 = plStack_a0;
    if (plStack_a8 == plStack_a0) {
      uVar11 = 0x40;
    }
    else {
      iVar16 = 0x40;
      plVar15 = plStack_a8;
      do {
        lVar7 = plVar15[4];
        lVar13 = (long)(short)lVar7;
        FUN_10a77ebb8();
        if (*(char *)((long)plVar15 + 0x17) < '\0') {
          func_0x000107c3192c(&plStack_90,*plVar15,plVar15[1]);
        }
        else {
          plStack_88 = (long *)plVar15[1];
          plStack_90 = (long *)*plVar15;
          plStack_80 = (long *)plVar15[2];
        }
        iVar8 = (int)((ulong)lVar13 >> 0x20);
        plStack_78 = (long *)plVar15[3];
        uVar11 = (iVar16 + iVar8) - 1U & -iVar8;
        sStack_70 = (short)lVar7;
        uStack_6c = uVar11;
        iStack_68 = (int)lVar13;
        FUN_10a77ea68(param_1,&plStack_90);
        if ((long)plStack_80 < 0) {
          __ZdlPv(plStack_90);
        }
        iVar16 = uVar11 + (int)lVar13;
        plVar15 = plVar15 + 5;
      } while (plVar15 != plVar20);
      uVar11 = iVar16 + 3U & 0xfffffffc;
    }
    FUN_10a7a4040(&plStack_a8);
  }
  if (cRam00000001137eba7f < '\0') {
    func_0x000107c3192c(&plStack_90,plRam00000001137eba68,plRam00000001137eba70);
  }
  else {
    plStack_88 = plRam00000001137eba70;
    plStack_90 = plRam00000001137eba68;
    plStack_80 = (long *)CONCAT17(cRam00000001137eba7f,uRam00000001137eba78);
  }
  plStack_78 = plRam00000001137eba80;
  sStack_70 = 6;
  iStack_68 = 4;
  uStack_6c = uVar11;
  FUN_10a77ea68(param_1,&plStack_90);
  if ((long)plStack_80 < 0) {
    __ZdlPv(plStack_90);
  }
  *(uint *)(param_1 + 3) = uVar11 + 0x13 & 0xfffffff0;
  *(undefined1 *)((long)param_1 + 0x1c) = 1;
  return;
}



/* Entry: 10a779318; end: 10a7795cb;  */

void FUN_10a779318(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c179f8;
  plVar4 = (long *)param_1[0x24];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    if (param_1[0x23] != 0) {
      func_0x00010a1bde90(param_1[0x23] + 0xd0,param_1);
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a3ebff0(param_1 + 0x43);
  FUN_10a3ebff0(param_1 + 0x46);
  if (((*(char *)((long)param_1 + 0x261) == '\x01') &&
      (plVar4 = (long *)param_1[0x15], plVar4 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
    if (param_1[0x14] != 0) {
      FUN_10a7795cc(param_1[0x14],*(undefined4 *)(param_1 + 0x1b));
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (((*(char *)((long)param_1 + 0x263) == '\x01') &&
      (plVar4 = (long *)param_1[0x17], plVar4 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
    if (param_1[0x16] != 0) {
      FUN_10a7795cc(param_1[0x16],*(undefined4 *)((long)param_1 + 0xdc));
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (((*(char *)((long)param_1 + 0x265) == '\x01') &&
      (plVar4 = (long *)param_1[0x19], plVar4 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
    if (param_1[0x18] != 0) {
      FUN_10a7795cc(param_1[0x18],*(undefined4 *)(param_1 + 0x1b));
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x47] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = param_1 + 0x40;
  FUN_10a7a3320(&puStack_28);
  FUN_10a7a31fc(param_1 + 0x3d);
  if (*(char *)((long)param_1 + 0x1df) < '\0') {
    __ZdlPv(param_1[0x39]);
  }
  puStack_28 = param_1 + 0x35;
  func_0x00010a1f4614(&puStack_28);
  puStack_28 = param_1 + 0x31;
  func_0x00010a1f4614(&puStack_28);
  puStack_28 = param_1 + 0x2d;
  func_0x00010a1f4614(&puStack_28);
  puStack_28 = param_1 + 0x29;
  func_0x00010a1f4614(&puStack_28);
  if (param_1[0x28] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a190e10(param_1 + 0x25);
  if (param_1[0x24] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010787ad88(param_1 + 0x1d);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x15] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x13] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c182f0;
  FUN_10a1c0934(param_1);
  return;
}



/* Entry: 10a7795cc; end: 10a779667;  */

void FUN_10a7795cc(uint *param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  uint uStack_24;
  
  if (param_2 < param_1[0x14]) {
    lVar1 = *(long *)(param_1 + 0xe);
    uStack_24 = param_2;
    if ((ulong)(*(long *)(param_1 + 0x10) - lVar1) <= (ulong)param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a779664);
      (*pcVar2)();
    }
    if ((*(char *)(lVar1 + (ulong)param_2) != '\0') &&
       ((ulong)(*(long *)(param_1 + 10) - *(long *)(param_1 + 8) >> 2) < (ulong)param_1[1])) {
      *(undefined1 *)(lVar1 + (ulong)param_2) = 0;
      FUN_10a0e6678(param_1 + 8,&uStack_24);
      func_0x0001077f9f4c(param_1 + 0x16,&uStack_24);
      if (*param_1 != 0) {
        _bzero(*(long *)(param_1 + 2) + (ulong)uStack_24 * (ulong)*param_1);
      }
    }
  }
  return;
}



/* Entry: 10a779668; end: 10a77966b;  */

void FUN_10a779668(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c179f8;
  plVar4 = (long *)param_1[0x24];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    if (param_1[0x23] != 0) {
      func_0x00010a1bde90(param_1[0x23] + 0xd0,param_1);
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  FUN_10a3ebff0(param_1 + 0x43);
  FUN_10a3ebff0(param_1 + 0x46);
  if (((*(char *)((long)param_1 + 0x261) == '\x01') &&
      (plVar4 = (long *)param_1[0x15], plVar4 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
    if (param_1[0x14] != 0) {
      FUN_10a7795cc(param_1[0x14],*(undefined4 *)(param_1 + 0x1b));
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (((*(char *)((long)param_1 + 0x263) == '\x01') &&
      (plVar4 = (long *)param_1[0x17], plVar4 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
    if (param_1[0x16] != 0) {
      FUN_10a7795cc(param_1[0x16],*(undefined4 *)((long)param_1 + 0xdc));
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (((*(char *)((long)param_1 + 0x265) == '\x01') &&
      (plVar4 = (long *)param_1[0x19], plVar4 != (long *)0x0)) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0)) {
    if (param_1[0x18] != 0) {
      FUN_10a7795cc(param_1[0x18],*(undefined4 *)(param_1 + 0x1b));
    }
    plVar1 = plVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x47] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puStack_28 = param_1 + 0x40;
  FUN_10a7a3320(&puStack_28);
  FUN_10a7a31fc(param_1 + 0x3d);
  if (*(char *)((long)param_1 + 0x1df) < '\0') {
    __ZdlPv(param_1[0x39]);
  }
  puStack_28 = param_1 + 0x35;
  func_0x00010a1f4614(&puStack_28);
  puStack_28 = param_1 + 0x31;
  func_0x00010a1f4614(&puStack_28);
  puStack_28 = param_1 + 0x2d;
  func_0x00010a1f4614(&puStack_28);
  puStack_28 = param_1 + 0x29;
  func_0x00010a1f4614(&puStack_28);
  if (param_1[0x28] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a190e10(param_1 + 0x25);
  if (param_1[0x24] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010787ad88(param_1 + 0x1d);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x15] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x13] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c182f0;
  FUN_10a1c0934(param_1);
  return;
}



/* Entry: 10a77966c; end: 10a77967f;  */

void FUN_10a77966c(void)

{
  FUN_10a779318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a779680; end: 10a77972b;  */

void FUN_10a779680(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  if ((*(byte *)(param_1 + 0x266) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x266) = 1;
    uStack_30 = 0;
    plStack_28 = (long *)0x0;
    plVar4 = *(long **)(param_1 + 0x120);
    if (plVar4 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_28 = plVar4;
      if (plVar4 != (long *)0x0) {
        uStack_30 = *(undefined8 *)(param_1 + 0x118);
      }
    }
    func_0x00010a4afbe4(param_1 + 0x128,&uStack_30);
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    FUN_10a3ebff0(param_1 + 0x218);
    FUN_10a3ebff0(param_1 + 0x230);
  }
  return;
}



/* Entry: 10a77972c; end: 10a77975f;  */

/* WARNING: Removing unreachable block (ram,0x00010a77ac50) */
/* WARNING: Removing unreachable block (ram,0x00010a779ee4) */
/* WARNING: Removing unreachable block (ram,0x00010a77a480) */

void FUN_10a77972c(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  long *unaff_x20;
  uint *****unaff_x21;
  uint ****ppppuVar24;
  long *plVar25;
  ulong *puVar26;
  long *plVar27;
  uint *****pppppuVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack_2e8;
  undefined8 ****ppppuStack_2e0;
  uint ****ppppuStack_2d8;
  byte bStack_2c9;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  uint ****ppppuStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  uint ****ppppuStack_280;
  uint ****ppppuStack_278;
  long lStack_270;
  long lStack_268;
  uint ****ppppuStack_260;
  uint ****ppppuStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  long lStack_230;
  uint ****ppppuStack_228;
  long *plStack_220;
  long *plStack_218;
  uint ****ppppuStack_210;
  long *plStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint **ppuStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint *puStack_1c0;
  long *plStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  uint ****ppppuStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  char cStack_189;
  uint **ppuStack_188;
  undefined4 uStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  byte bStack_13c;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  uint ****ppppuStack_120;
  uint ****ppppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  byte bStack_e0;
  byte bStack_dc;
  uint ****ppppuStack_d0;
  uint ****ppppuStack_c8;
  uint ****ppppuStack_c0;
  long lStack_b8;
  byte bStack_90;
  long lStack_88;
  
  if (param_1[0x22] != 0) {
    FUN_10a1bf2a0(param_1[0x22] + 0xd0,param_1);
  }
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)param_1[0x15];
  if (plVar10 == (long *)0x0) goto LAB_10a77af4c;
  __ZNSt3__119__shared_weak_count4lockEv();
  plStack_1b8 = plVar10;
  if (plVar10 == (long *)0x0) goto LAB_10a77af4c;
  puStack_1c0 = (uint *)param_1[0x14];
  if (puStack_1c0 == (uint *)0x0) goto LAB_10a77af1c;
  if (param_1[0x22] == 0) goto LAB_10a77af1c;
  if (param_1[0x24] == 0) goto LAB_10a77af1c;
  if (*(long *)(param_1[0x24] + 8) == -1) goto LAB_10a77af1c;
  uVar23 = *puStack_1c0;
  unaff_x20 = (long *)(ulong)uVar23;
  uVar21 = (ulong)(uVar23 * (int)param_1[0x1b]);
  uVar15 = uVar21 + (long)unaff_x20;
  uVar14 = *(long *)(puStack_1c0 + 4) - *(long *)(puStack_1c0 + 2);
  unaff_x21 = (uint *****)0x0;
  if (uVar15 <= uVar14) {
    unaff_x21 = (uint *****)(*(long *)(puStack_1c0 + 2) + uVar21);
  }
  if (uVar23 == 0) goto LAB_10a77af1c;
  if (uVar14 < uVar15) goto LAB_10a77af1c;
  _bzero(unaff_x21,unaff_x20);
  uStack_1f4 = 0;
  fStack_1f0 = 0.0;
  fStack_1fc = 0.0;
  fStack_1f8 = 0.0;
  fStack_200 = 1.0;
  fStack_1ec = 1.0;
  ppuStack_1e8 = (uint **)0x0;
  uStack_1e0 = (uint ***)0x0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  fStack_1d8 = 1.0;
  uStack_1c4 = 0x3f800000;
  plVar10 = (long *)param_1[0x28];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_198 = SUB87(plVar10,0);
    uStack_191 = (undefined1)((ulong)plVar10 >> 0x38);
    if (plVar10 != (long *)0x0) {
      ppppuStack_1a0 = (uint ****)param_1[0x27];
      if ((uint *****)ppppuStack_1a0 != (uint *****)0x0) {
        ppppuVar24 = (uint ****)ppppuStack_1a0[0x28];
        if ((*(byte *)((long)ppppuVar24 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(ppppuVar24);
        }
        ppuStack_1e8 = (uint **)ppppuVar24[0x1b];
        fStack_1f8 = SUB84(ppppuVar24[0x19],0);
        uStack_1f4 = (undefined4)((ulong)ppppuVar24[0x19] >> 0x20);
        fStack_200 = SUB84(ppppuVar24[0x18],0);
        fStack_1fc = (float)((ulong)ppppuVar24[0x18] >> 0x20);
        fStack_1f0 = SUB84(ppppuVar24[0x1a],0);
        fStack_1ec = (float)((ulong)ppppuVar24[0x1a] >> 0x20);
        uStack_1e0 = ppppuVar24[0x1c];
        fStack_1d8 = SUB84(ppppuVar24[0x1d],0);
        uStack_1d4 = (undefined4)((ulong)ppppuVar24[0x1d] >> 0x20);
        uStack_1c8 = SUB84(ppppuVar24[0x1f],0);
        uStack_1c4 = (undefined4)((ulong)ppppuVar24[0x1f] >> 0x20);
        uStack_1d0 = SUB84(ppppuVar24[0x1e],0);
        uStack_1cc = (undefined4)((ulong)ppppuVar24[0x1e] >> 0x20);
      }
      plVar25 = plVar10 + 1;
      do {
        lVar20 = *plVar25;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar8) {
          *plVar25 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  pppppuVar11 = (uint *****)param_1[0x4a];
  if ((pppppuVar11 != (uint *****)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_118 = (uint ****)pppppuVar11,
     pppppuVar11 != (uint *****)0x0)) {
    ppppuStack_120 = (uint ****)param_1[0x49];
    if (((uint *****)ppppuStack_120 != (uint *****)0x0) &&
       (ppppuVar24 = (uint ****)ppppuStack_120[0x60], ppppuVar24 != (uint ****)0x0)) {
      if ((*(byte *)((long)ppppuVar24 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(ppppuVar24);
      }
      func_0x000109519fd0(&ppppuStack_1a0,&fStack_200,ppppuVar24 + 0x18);
      fStack_1f8 = (float)uStack_198;
      uStack_1f4 = (undefined4)(CONCAT17(uStack_191,uStack_198) >> 0x20);
      fStack_200 = SUB84(ppppuStack_1a0,0);
      fStack_1fc = (float)((ulong)ppppuStack_1a0 >> 0x20);
      ppuStack_1e8 = ppuStack_188;
      fStack_1f0 = (float)uStack_190;
      fStack_1ec = (float)(CONCAT17(cStack_189,uStack_190) >> 0x20);
      uStack_1e0 = (uint ***)CONCAT44(fStack_17c,CONCAT22(uStack_180._2_2_,(ushort)uStack_180));
      fStack_1d8 = fStack_178;
      uStack_1d4 = uStack_174;
      uStack_1c8 = uStack_168;
      uStack_1c4 = uStack_164;
      uStack_1d0 = uStack_170;
      uStack_1cc = uStack_16c;
    }
    pppppuVar28 = pppppuVar11 + 1;
    do {
      ppppuVar24 = *pppppuVar28;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar28,0x10);
      if (bVar8) {
        *pppppuVar28 = (uint ****)((long)ppppuVar24 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar24 == (uint ****)0x0) {
      (*(code *)(*pppppuVar11)[2])(pppppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
    }
  }
  if ((bRam00000001137eb960 & 1) == 0) goto LAB_10a77af8c;
  do {
    if ((bRam00000001137eb968 & 1) == 0) {
      iVar13 = 0x137eb968;
      ___cxa_guard_acquire();
      if (iVar13 != 0) {
        func_0x000107c2b07c(0x1137eb9c8,&DAT_10f67536e);
        ___cxa_atexit(FUN_10a32edf4,0x1137eb9c8,0x100000000);
        ___cxa_guard_release(0x1137eb968);
      }
    }
    if ((bRam00000001137eb970 & 1) == 0) {
      iVar13 = 0x137eb970;
      ___cxa_guard_acquire();
      if (iVar13 != 0) {
        func_0x000107c2b07c(0x1137eb9e8,&DAT_10f67537e);
        ___cxa_atexit(FUN_10a32edf4,0x1137eb9e8,0x100000000);
        ___cxa_guard_release(0x1137eb970);
      }
    }
    if ((bRam00000001137eb978 & 1) == 0) {
      iVar13 = 0x137eb978;
      ___cxa_guard_acquire();
      if (iVar13 != 0) {
        func_0x000107c2b07c(0x1137eba08,&DAT_10f675393);
        ___cxa_atexit(FUN_10a32edf4,0x1137eba08,0x100000000);
        ___cxa_guard_release(0x1137eb978);
      }
    }
    plVar10 = (long *)param_1[0x4a];
    if (plVar10 == (long *)0x0) {
LAB_10a7799c4:
      iStack_2e8 = 0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_198 = SUB87(plVar10,0);
      uStack_191 = (undefined1)((ulong)plVar10 >> 0x38);
      if (plVar10 == (long *)0x0) goto LAB_10a7799c4;
      pppppuVar11 = (uint *****)param_1[0x49];
      ppppuStack_1a0 = (uint ****)pppppuVar11;
      if (pppppuVar11 == (uint *****)0x0) {
        iStack_2e8 = 0;
      }
      else {
        func_0x00010a777f8c();
        iStack_2e8 = (int)pppppuVar11;
      }
      plVar25 = plVar10 + 1;
      do {
        lVar20 = *plVar25;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar8) {
          *plVar25 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar20 = param_1[0x29];
    lVar18 = param_1[0x2a];
    if (lVar20 != lVar18) {
      plVar10 = (long *)(*(long *)(param_1[0x22] + 0x1b8) + 8);
      do {
        uVar15 = *(ulong *)(lVar20 + 0x18);
        uVar23 = (uint)unaff_x20;
        if (uVar15 == uRam00000001137eb9c0) {
          fStack_178 = fStack_1d8;
          uStack_174 = uStack_1d4;
          uStack_168 = uStack_1c8;
          uStack_164 = uStack_1c4;
          uStack_170 = uStack_1d0;
          uStack_16c = uStack_1cc;
          ppppuStack_1a0 = (uint ****)CONCAT44(fStack_1fc,fStack_200);
          uStack_198 = (undefined7)CONCAT44(uStack_1f4,fStack_1f8);
          uStack_191 = (undefined1)((uint)uStack_1f4 >> 0x18);
          ppuStack_188 = ppuStack_1e8;
          uStack_190 = (undefined7)CONCAT44(fStack_1ec,fStack_1f0);
          cStack_189 = (char)((uint)fStack_1ec >> 0x18);
          uVar15 = 8;
          uStack_160 = CONCAT31(uStack_160._1_3_,8);
          uVar14 = (ulong)*(uint *)(lVar20 + 0x24);
          fStack_17c = uStack_1e0._4_4_;
          uStack_180 = (float)uStack_1e0;
          if (*(uint *)(lVar20 + 0x24) <= uVar23) {
            uVar15 = (ulong)*(uint *)(lVar20 + 0x28);
            if ((long)unaff_x20 - uVar14 < uVar15) {
              uVar15 = 8;
            }
            else {
LAB_10a779bb8:
              FUN_10a7a33dc((long)unaff_x21 + uVar14,uVar15,(long)*(short *)(lVar20 + 0x20),
                            &ppppuStack_1a0);
              uVar15 = (ulong)(byte)uStack_160;
              if (0x10 < (byte)uStack_160) goto LAB_10a77b3e0;
            }
          }
LAB_10a779bd4:
          pcVar16 = (code *)(&PTR_FUN_110ba1f88)[uVar15];
LAB_10a779bd8:
          (*pcVar16)(&ppppuStack_1a0);
        }
        else {
          if (uVar15 == uRam00000001137eb9e0) {
            fVar30 = -(uStack_1e0._4_4_ * ppuStack_1e8._0_4_) + fStack_1d8 * fStack_1ec;
            fVar32 = -(fStack_1ec * fStack_1f8) + ppuStack_1e8._0_4_ * fStack_1fc;
            fVar31 = 1.0 / (-(fStack_1f0 *
                             (-(uStack_1e0._4_4_ * fStack_1f8) + fStack_1d8 * fStack_1fc)) +
                            fVar30 * fStack_200 + fVar32 * (float)uStack_1e0);
            uStack_180 = (-(fStack_1f0 * fStack_1fc) + fStack_1ec * fStack_200) * fVar31;
            ppppuStack_1a0 =
                 (uint ****)
                 CONCAT44((-(fStack_1f0 * fStack_1d8) - -((float)uStack_1e0 * ppuStack_1e8._0_4_)) *
                          fVar31,fVar30 * fVar31);
            fVar30 = (-(fStack_1fc * fStack_1d8) - -(uStack_1e0._4_4_ * fStack_1f8)) * fVar31;
            fVar29 = (-(fStack_200 * uStack_1e0._4_4_) - -((float)uStack_1e0 * fStack_1fc)) * fVar31
            ;
            ppuStack_188 = (uint **)CONCAT44((-(fStack_200 * ppuStack_1e8._0_4_) -
                                             -(fStack_1f0 * fStack_1f8)) * fVar31,fVar32 * fVar31);
            uStack_198 = (undefined7)
                         CONCAT44(fVar30,(-((float)uStack_1e0 * fStack_1ec) +
                                         uStack_1e0._4_4_ * fStack_1f0) * fVar31);
            uStack_191 = (undefined1)((uint)fVar30 >> 0x18);
            uStack_190 = (undefined7)
                         CONCAT44(fVar29,(-((float)uStack_1e0 * fStack_1f8) +
                                         fStack_1d8 * fStack_200) * fVar31);
            cStack_189 = (char)((uint)fVar29 >> 0x18);
            uVar15 = 7;
            uStack_160 = CONCAT31(uStack_160._1_3_,7);
            uVar14 = (ulong)*(uint *)(lVar20 + 0x24);
            if (*(uint *)(lVar20 + 0x24) <= uVar23) {
              uVar15 = (ulong)*(uint *)(lVar20 + 0x28);
              if (uVar15 <= (long)unaff_x20 - uVar14) goto LAB_10a779bb8;
              uVar15 = 7;
            }
            goto LAB_10a779bd4;
          }
          if (uVar15 == uRam00000001137eba00) {
            iVar13 = *(int *)((long)param_1 + 0xdc);
LAB_10a779b88:
            ppppuStack_1a0 = (uint ****)CONCAT44(ppppuStack_1a0._4_4_,iVar13);
            uVar15 = 9;
            uStack_160 = CONCAT31(uStack_160._1_3_,9);
            uVar14 = (ulong)*(uint *)(lVar20 + 0x24);
            if (*(uint *)(lVar20 + 0x24) <= uVar23) {
              uVar15 = (ulong)*(uint *)(lVar20 + 0x28);
              if (uVar15 <= (long)unaff_x20 - uVar14) goto LAB_10a779bb8;
              uVar15 = 9;
            }
            goto LAB_10a779bd4;
          }
          iVar13 = iStack_2e8;
          if (uVar15 == uRam00000001137eba20) goto LAB_10a779b88;
          ppppuStack_1a0 = (uint ****)((ulong)ppppuStack_1a0 & 0xffffffffffffff00);
          uStack_15c = uStack_15c & 0xffffff00;
          plVar22 = (long *)*plVar10;
          plVar25 = plVar10;
          if (plVar22 != (long *)0x0) {
            do {
              lVar17 = 8;
              if (uVar15 <= (ulong)plVar22[7]) {
                lVar17 = 0;
                plVar25 = plVar22;
              }
              plVar22 = *(long **)((long)plVar22 + lVar17);
            } while (plVar22 != (long *)0x0);
            if (((plVar25 != plVar10) && ((ulong)plVar25[7] <= uVar15)) &&
               (lVar17 = plVar25[8], lVar17 != 0)) {
              uVar4 = *(ushort *)(lVar17 + 0x20);
              uVar3 = *(ushort *)(lVar20 + 0x20);
              if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                 (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7) &&
                  (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                func_0x00010a77bef4(&ppppuStack_120,lVar17 + 0x24,(int)(short)uVar4,
                                    (int)(short)uVar3);
                FUN_10a77c0b8(&ppppuStack_1a0,&ppppuStack_120);
                if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
              }
            }
          }
          FUN_10a77c0e8(&ppppuStack_120,param_1,lVar20);
          if (bStack_dc == 1) {
            func_0x00010a7a3610(&ppppuStack_1a0,&ppppuStack_120);
            if ((bStack_dc & 1) != 0) {
              if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
              (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
            }
          }
          if ((char)uStack_15c == '\x01') {
            uVar2 = *(uint *)(lVar20 + 0x24);
            if ((uVar2 <= uVar23) &&
               ((ulong)*(uint *)(lVar20 + 0x28) <= (long)unaff_x20 - (ulong)uVar2)) {
              FUN_10a7a33dc((long)unaff_x21 + (ulong)uVar2,(ulong)*(uint *)(lVar20 + 0x28),
                            (long)*(short *)(lVar20 + 0x20),&ppppuStack_1a0);
              if ((char)uStack_15c != '\x01') goto LAB_10a779be0;
            }
            if ((ulong)(byte)uStack_160 < 0x11) {
              pcVar16 = (code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160];
              goto LAB_10a779bd8;
            }
            goto LAB_10a77b3e0;
          }
        }
LAB_10a779be0:
        lVar20 = lVar20 + 0x30;
      } while (lVar20 != lVar18);
    }
    ppppuStack_1a0 = (uint ****)CONCAT44(ppppuStack_1a0._4_4_,(int)param_1[0x1b]);
    func_0x000107426fd8(puStack_1c0 + 0x16,&ppppuStack_1a0,&ppppuStack_1a0);
    plVar10 = (long *)param_1[0x17];
    if (plVar10 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_290 = plVar10;
      if (plVar10 != (long *)0x0) {
        unaff_x21 = (uint *****)param_1[0x16];
        ppppuStack_298 = (uint ****)unaff_x21;
        if (unaff_x21 != (uint *****)0x0) {
          plVar10 = (long *)param_1[0x4a];
          if (plVar10 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_2a8 = plVar10;
            if (plVar10 != (long *)0x0) {
              plVar25 = (long *)param_1[0x49];
              plStack_2b0 = plVar25;
              if (plVar25 != (long *)0x0) {
                uVar23 = *(uint *)unaff_x21;
                uVar14 = (ulong)(uVar23 * *(int *)((long)param_1 + 0xdc));
                uVar15 = uVar14 + (long)(ulong)uVar23;
                pppppuVar11 = unaff_x21 + 1;
                uVar21 = (long)unaff_x21[2] - (long)*pppppuVar11;
                unaff_x21 = (uint *****)0x0;
                if (uVar15 <= uVar21) {
                  unaff_x21 = (uint *****)(ulong)uVar23;
                }
                ppppuStack_2e0 = (undefined8 *****)0x0;
                if (uVar15 <= uVar21) {
                  ppppuStack_2e0 = (undefined8 *****)((long)*pppppuVar11 + uVar14);
                }
                ppppuStack_2d8 = (uint ****)unaff_x21;
                if (unaff_x21 != (uint *****)0x0) {
                  _bzero(ppppuStack_2e0,unaff_x21);
                  if ((*(char *)((long)param_1 + 0xe4) == '\x01') && (1 < *(uint *)(param_1 + 0x1c))
                     ) {
                    ppppuStack_118 = (uint ****)0x0;
                    ppppuStack_120 = (uint ****)0x0;
                    uStack_108 = 0;
                    lStack_110 = 0;
                    uStack_100 = 0x3f800000;
                    pppppuVar28 = (uint *****)param_1[0x3e];
                    for (pppppuVar11 = (uint *****)param_1[0x3d]; pppppuVar11 != pppppuVar28;
                        pppppuVar11 = pppppuVar11 + 0xd) {
                      ppppuStack_258 = (uint ****)(long)*(char *)((long)pppppuVar11 + 0x17);
                      ppppuStack_260 = (uint ****)pppppuVar11;
                      if ((long)ppppuStack_258 < 0) {
                        ppppuStack_258 = pppppuVar11[1];
                        ppppuStack_260 = *pppppuVar11;
                      }
                      if (*(short *)(pppppuVar11 + 4) == 6) {
                        pppppuVar12 = &ppppuStack_260;
                        FUN_10a159054(pppppuVar12,&UNK_10f675465,10);
                        if (((int)pppppuVar12 != 0) && (*(char *)((long)pppppuVar11 + 100) == '\t'))
                        {
                          ppppuStack_278 = ppppuStack_258;
                          if ((uint *****)((long)ppppuStack_258 + -10) <= ppppuStack_258) {
                            ppppuStack_278 = (uint ****)((long)ppppuStack_258 + -10);
                          }
                          ppppuStack_280 = ppppuStack_260;
                          if ((uint *****)ppppuStack_278 != (uint *****)0x0) {
                            func_0x0001098998d4(&ppppuStack_d0,&ppppuStack_280);
                            ppppuVar24 = ppppuStack_c0;
                            uStack_198 = SUB87(ppppuStack_c8,0);
                            uStack_191 = (undefined1)((ulong)ppppuStack_c8 >> 0x38);
                            ppppuStack_1a0 = ppppuStack_d0;
                            ppppuStack_c8 = (uint ****)0x0;
                            ppppuStack_c0 = (uint ****)0x0;
                            ppppuStack_d0 = (uint ****)0x0;
                            uStack_190 = SUB87(ppppuVar24,0);
                            cStack_189 = (char)((ulong)ppppuVar24 >> 0x38);
                            ppuStack_188 = (uint **)0x0;
                            func_0x000107c2b080(&ppppuStack_1a0);
                            FUN_10a7ad610(&ppppuStack_120,ppuStack_188,&ppppuStack_1a0,
                                          (uint *)((long)pppppuVar11 + 0x24));
                            if (cStack_189 < '\0') {
                              __ZdlPv(ppppuStack_1a0);
                            }
                          }
                        }
                      }
                    }
                    (**(code **)(*plVar25 + 0x1f0))(&ppppuStack_260,plVar25);
                    ppppuStack_d0 = (uint ****)param_1[0x22];
                    ppppuStack_c8 = (uint ****)&ppppuStack_120;
                    lStack_b8 = (long)ppppuStack_258 - (long)ppppuStack_260 >> 5;
                    ppppuStack_c0 = ppppuStack_260;
                    ppppuStack_280 = (uint ****)0x0;
                    ppppuStack_278 = (uint ****)0x0;
                    lStack_270 = 0;
                    FUN_10a7771c8(&uStack_138,param_1 + 0x31,&ppppuStack_d0,&ppppuStack_280);
                    lVar18 = CONCAT17(uStack_129,uStack_130);
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    for (lVar20 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                        ppppuStack_2e0 = pppppuVar6, lVar20 != lVar18; lVar20 = lVar20 + 0x68) {
                      lVar17 = param_1[0x31];
                      if (lVar17 != param_1[0x32]) {
                        do {
                          if (*(long *)(lVar17 + 0x18) == *(long *)(lVar20 + 0x18)) {
                            uVar4 = *(ushort *)(lVar20 + 0x20);
                            uVar3 = *(ushort *)(lVar17 + 0x20);
                            if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                               (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar17 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar17 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_1a0,lVar20 + 0x24,(int)(short)uVar4,
                                                    (int)(short)uVar3);
                                FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar11,(ulong)uVar23,
                                              (int)(short)uVar3,&ppppuStack_1a0);
                                if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                              }
                            }
                            break;
                          }
                          lVar17 = lVar17 + 0x30;
                        } while (lVar17 != param_1[0x32]);
                      }
                      pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    }
                    FUN_10a7a31fc(&uStack_138);
                    ppppuStack_1a0 = (uint ****)&ppppuStack_280;
                    FUN_10a044868(&ppppuStack_1a0);
                    ppppuStack_1a0 = (uint ****)&ppppuStack_260;
                    FUN_10a044868(&ppppuStack_1a0);
                    FUN_10a7ad5ac(&ppppuStack_120);
                  }
                  else {
                    lVar20 = param_1[0x22];
                    (**(code **)(*plVar25 + 0x1e8))(&ppppuStack_1a0,plVar25);
                    (**(code **)(*plVar25 + 0x1f0))(&ppppuStack_d0,plVar25);
                    FUN_10a77c4d0(&ppppuStack_120,lVar20,&ppppuStack_1a0,&ppppuStack_d0,
                                  iStack_2e8 != 1);
                    ppppuStack_260 = (uint ****)&ppppuStack_d0;
                    FUN_10a044868(&ppppuStack_260);
                    ppppuStack_d0 = (uint ****)&ppppuStack_1a0;
                    FUN_10a66db40(&ppppuStack_d0);
                    ppppuVar24 = ppppuStack_118;
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    for (pppppuVar11 = (uint *****)ppppuStack_120; ppppuStack_2e0 = pppppuVar6,
                        pppppuVar11 != (uint *****)ppppuVar24; pppppuVar11 = pppppuVar11 + 0xd) {
                      lVar20 = param_1[0x31];
                      if (lVar20 != param_1[0x32]) {
                        do {
                          if (*(uint *****)(lVar20 + 0x18) == pppppuVar11[3]) {
                            uVar4 = *(ushort *)(pppppuVar11 + 4);
                            uVar3 = *(ushort *)(lVar20 + 0x20);
                            if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                               (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar28 = (uint *****)(ulong)*(uint *)(lVar20 + 0x24);
                              if ((pppppuVar28 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar20 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar28))) {
                                func_0x00010a77bef4(&ppppuStack_1a0,
                                                    (uint *)((long)pppppuVar11 + 0x24),
                                                    (int)(short)uVar4,(int)(short)uVar3);
                                FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar28,(ulong)uVar23,
                                              (int)(short)uVar3,&ppppuStack_1a0);
                                if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                              }
                            }
                            break;
                          }
                          lVar20 = lVar20 + 0x30;
                        } while (lVar20 != param_1[0x32]);
                      }
                      pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    }
                    FUN_10a7a31fc(&ppppuStack_120);
                  }
                  lVar18 = param_1[0x3e];
                  pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                  for (lVar20 = param_1[0x3d]; ppppuStack_2e0 = pppppuVar6, lVar20 != lVar18;
                      lVar20 = lVar20 + 0x68) {
                    lVar17 = param_1[0x31];
                    if (lVar17 != param_1[0x32]) {
                      do {
                        if (*(long *)(lVar17 + 0x18) == *(long *)(lVar20 + 0x18)) {
                          uVar4 = *(ushort *)(lVar20 + 0x20);
                          uVar3 = *(ushort *)(lVar17 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar17 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar23 = *(uint *)(lVar17 + 0x28),
                               (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,lVar20 + 0x24,(int)(short)uVar4,
                                                  (int)(short)uVar3);
                              FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar11,(ulong)uVar23,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar17 = lVar17 + 0x30;
                      } while (lVar17 != param_1[0x32]);
                    }
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                  }
                  ppppuStack_1a0 = (uint ****)(ulong)*(uint *)(param_1 + 0x4b);
                  plVar25 = plStack_2b0 + 0x57;
                  FUN_10a5e7d1c(plVar25,&ppppuStack_1a0);
                  if (((plVar25 != (long *)0x0) && ((char)plVar25[0xe] == '\x01')) &&
                     (plVar25 = (long *)plVar25[0xb], plVar25 != (long *)0x0)) {
                    do {
                      plVar22 = (long *)plVar25[6];
                      if ((plVar22 != (long *)plVar25[7]) &&
                         (puVar26 = (ulong *)*plVar22, puVar26 != (ulong *)0x0)) {
                        ppppuStack_280 = (uint ****)0x0;
                        ppppuStack_278 = (uint ****)0x0;
                        pppppuVar11 = (uint *****)puVar26[1];
                        if (pppppuVar11 != (uint *****)0x0) {
                          __ZNSt3__119__shared_weak_count4lockEv();
                          if (pppppuVar11 != (uint *****)0x0) {
                            ppppuStack_280 = (uint ****)*puVar26;
                          }
                          ppppuStack_278 = (uint ****)pppppuVar11;
                          if ((uint *****)ppppuStack_280 != (uint *****)0x0) {
                            pppppuVar11 = (uint *****)ppppuStack_280;
                            FUN_10a7738f8();
                            bVar8 = true;
                            bVar9 = false;
                            if (0 < (int)pppppuVar11) {
                              iVar13 = (int)((ulong)pppppuVar11 >> 0x20);
                              bVar9 = SBORROW4(iVar13,1);
                              bVar8 = iVar13 + -1 < 0;
                            }
                            ppppuStack_210 = (uint ****)pppppuVar11;
                            if (bVar8 == bVar9) {
                              if (*(char *)((long)plVar25 + 0x27) < '\0') {
                                func_0x000107c3192c(&ppppuStack_d0,plVar25[2],plVar25[3]);
                              }
                              else {
                                ppppuStack_c8 = (uint ****)plVar25[3];
                                ppppuStack_d0 = (uint ****)plVar25[2];
                                ppppuStack_c0 = (uint ****)plVar25[4];
                              }
                              func_0x0001098998d4(&ppppuStack_260,&PTR_DAT_110c17658);
                              pppppuVar11 = (uint *****)ppppuStack_258;
                              pppppuVar28 = (uint *****)ppppuStack_260;
                              if (-1 < (long)uStack_250) {
                                pppppuVar11 = (uint *****)(uStack_250 >> 0x38);
                                pppppuVar28 = &ppppuStack_260;
                              }
                              pppppuVar12 = &ppppuStack_d0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (pppppuVar12,pppppuVar28,pppppuVar11);
                              ppppuStack_1a0 = *pppppuVar12;
                              uStack_138._0_7_ = SUB87(pppppuVar12[1],0);
                              uStack_138._7_1_ =
                                   (undefined1)*(undefined8 *)((long)pppppuVar12 + 0xf);
                              uStack_130 = (undefined7)
                                           ((ulong)*(undefined8 *)((long)pppppuVar12 + 0xf) >> 8);
                              cStack_189 = *(char *)((long)pppppuVar12 + 0x17);
                              pppppuVar12[1] = (uint ****)0x0;
                              pppppuVar12[2] = (uint ****)0x0;
                              *pppppuVar12 = (uint ****)0x0;
                              uStack_190 = uStack_130;
                              uStack_198 = (undefined7)uStack_138;
                              uStack_191 = uStack_138._7_1_;
                              uStack_138._0_7_ = 0;
                              uStack_138._7_1_ = 0;
                              uStack_130 = 0;
                              ppuStack_188 = (uint **)0x0;
                              func_0x000107c2b080(&ppppuStack_1a0);
                              uStack_180._0_2_ = 10;
                              FUN_10a77d1ac(&ppppuStack_120,param_1[0x22],plVar25 + 2,
                                            *(undefined8 *)(*plVar22 + 0x18),&ppppuStack_210);
                              uStack_174 = SUB84(ppppuStack_118,0);
                              uStack_170 = (undefined4)((ulong)ppppuStack_118 >> 0x20);
                              fStack_17c = SUB84(ppppuStack_120,0);
                              fStack_178 = (float)((ulong)ppppuStack_120 >> 0x20);
                              uStack_164 = (undefined4)uStack_108;
                              uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                              uStack_16c = (undefined4)lStack_110;
                              uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                              uStack_15c = uStack_100;
                              bStack_13c = 7;
                              FUN_10a77c39c(param_1[0x31],param_1[0x32],&ppppuStack_2e0,
                                            &ppppuStack_1a0);
                              func_0x00010a777f38(&ppppuStack_1a0);
                              if ((long)uStack_250 < 0) {
                                __ZdlPv(ppppuStack_260);
                              }
                            }
                          }
                        }
                        func_0x00010a1f74b8(&ppppuStack_280);
                      }
                      plVar25 = (long *)*plVar25;
                    } while (plVar25 != (long *)0x0);
                  }
                  ppppuVar7 = ppppuStack_2e0;
                  puVar26 = (ulong *)param_1[0x31];
                  puVar1 = (ulong *)param_1[0x32];
                  if (puVar26 != puVar1) {
                    do {
                      FUN_10a77c0e8(&ppppuStack_120,param_1,puVar26);
                      if (bStack_dc == 1) {
                        if (*(char *)((long)puVar26 + 0x17) < '\0') {
                          func_0x000107c3192c(&ppppuStack_1a0,*puVar26,puVar26[1]);
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_180._0_2_ = (ushort)puVar26[4];
                          if ((bStack_dc & 1) == 0) goto LAB_10a77b3e0;
                        }
                        else {
                          ppppuStack_1a0 = (uint ****)*puVar26;
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_198 = (undefined7)puVar26[1];
                          uStack_191 = (undefined1)(puVar26[1] >> 0x38);
                          uStack_190 = (undefined7)puVar26[2];
                          cStack_189 = (char)(puVar26[2] >> 0x38);
                          uStack_180._0_2_ = (ushort)puVar26[4];
                        }
                        bStack_13c = 0x10;
                        ppppuStack_d0 = (uint ****)&fStack_17c;
                        if (bStack_e0 == 0) {
                          uVar15 = 0;
                          fStack_17c = ppppuStack_120._0_4_;
                        }
                        else {
                          FUN_10a3652d8(&ppppuStack_d0,&ppppuStack_120);
                          uVar15 = (ulong)bStack_e0;
                        }
                        bStack_13c = (byte)uVar15;
                        for (lVar20 = param_1[0x31]; lVar20 != param_1[0x32]; lVar20 = lVar20 + 0x30
                            ) {
                          if (*(uint ****)(lVar20 + 0x18) == (uint ***)ppuStack_188) {
                            uVar4 = *(ushort *)(lVar20 + 0x20);
                            if ((((ushort)uStack_180 == uVar4) ||
                                ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                               ((((ushort)uStack_180 < 7 &&
                                 (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar20 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar20 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_d0,&fStack_17c,
                                                    (int)(short)(ushort)uStack_180,(int)(short)uVar4
                                                   );
                                FUN_10a7a33dc((long)ppppuVar7 + (long)pppppuVar11,(ulong)uVar23,
                                              (int)(short)uVar4,&ppppuStack_d0);
                                if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&ppppuStack_d0);
                                uVar15 = (ulong)bStack_13c;
                              }
                            }
                            break;
                          }
                        }
                        if (0x10 < (uint)uVar15) goto LAB_10a77b3e0;
                        (*(code *)(&PTR_FUN_110ba1f88)[uVar15])(&fStack_17c);
                        if (cStack_189 < '\0') {
                          __ZdlPv(ppppuStack_1a0);
                        }
                        if ((bStack_dc & 1) != 0) {
                          if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                          (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
                        }
                      }
                      puVar26 = puVar26 + 6;
                    } while (puVar26 != puVar1);
                  }
                  ppppuStack_1a0 =
                       (uint ****)
                       CONCAT44(ppppuStack_1a0._4_4_,*(undefined4 *)((long)param_1 + 0xdc));
                  func_0x000107426fd8(ppppuStack_298 + 0xb,&ppppuStack_1a0,&ppppuStack_1a0);
                }
              }
              plVar25 = plVar10 + 1;
              do {
                lVar20 = *plVar25;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *plVar25 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
          }
          unaff_x20 = plStack_290;
          if (plStack_290 == (long *)0x0) goto LAB_10a77a708;
        }
        unaff_x20 = plStack_290;
        plVar10 = plStack_290 + 1;
        do {
          lVar20 = *plVar10;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_290 + 0x10))(plStack_290);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
LAB_10a77a708:
    plVar10 = (long *)param_1[0x19];
    if (plVar10 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_208 = plVar10;
      if (plVar10 != (long *)0x0) {
        unaff_x21 = (uint *****)param_1[0x18];
        ppppuStack_210 = (uint ****)unaff_x21;
        if (unaff_x21 != (uint *****)0x0) {
          plVar10 = (long *)param_1[0x4a];
          if (plVar10 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_218 = plVar10;
            if (plVar10 != (long *)0x0) {
              plVar25 = (long *)param_1[0x49];
              plStack_220 = plVar25;
              if (plVar25 != (long *)0x0) {
                uVar23 = *(uint *)unaff_x21;
                uVar14 = (ulong)(uVar23 * (int)param_1[0x1b]);
                uVar15 = uVar14 + (long)(ulong)uVar23;
                pppppuVar11 = unaff_x21 + 1;
                uVar21 = (long)unaff_x21[2] - (long)*pppppuVar11;
                unaff_x21 = (uint *****)0x0;
                if (uVar15 <= uVar21) {
                  unaff_x21 = (uint *****)(ulong)uVar23;
                }
                lStack_230 = 0;
                if (uVar15 <= uVar21) {
                  lStack_230 = (long)*pppppuVar11 + uVar14;
                }
                ppppuStack_228 = (uint ****)unaff_x21;
                if (unaff_x21 != (uint *****)0x0) {
                  _bzero(lStack_230,unaff_x21);
                  ppppuStack_258 = (uint ****)0x0;
                  ppppuStack_260 = (uint ****)0x0;
                  uStack_248 = 0;
                  uStack_250 = 0;
                  uStack_240 = 0x3f800000;
                  pppppuVar28 = (uint *****)param_1[0x3e];
                  for (pppppuVar11 = (uint *****)param_1[0x3d]; pppppuVar11 != pppppuVar28;
                      pppppuVar11 = pppppuVar11 + 0xd) {
                    ppppuStack_c8 = (uint ****)(long)*(char *)((long)pppppuVar11 + 0x17);
                    ppppuStack_d0 = (uint ****)pppppuVar11;
                    if ((long)ppppuStack_c8 < 0) {
                      ppppuStack_c8 = pppppuVar11[1];
                      ppppuStack_d0 = *pppppuVar11;
                    }
                    if (*(short *)(pppppuVar11 + 4) == 6) {
                      pppppuVar12 = &ppppuStack_d0;
                      FUN_10a159054(pppppuVar12,&UNK_10f675465,10);
                      if (((int)pppppuVar12 != 0) && (*(char *)((long)pppppuVar11 + 100) == '\t')) {
                        ppppuStack_278 = ppppuStack_c8;
                        if ((uint *****)((long)ppppuStack_c8 + -10) <= ppppuStack_c8) {
                          ppppuStack_278 = (uint ****)((long)ppppuStack_c8 + -10);
                        }
                        ppppuStack_280 = ppppuStack_d0;
                        if ((uint *****)ppppuStack_278 != (uint *****)0x0) {
                          func_0x0001098998d4(&ppppuStack_120,&ppppuStack_280);
                          lVar20 = lStack_110;
                          uStack_198 = SUB87(ppppuStack_118,0);
                          uStack_191 = (undefined1)((ulong)ppppuStack_118 >> 0x38);
                          ppppuStack_1a0 = ppppuStack_120;
                          ppppuStack_118 = (uint ****)0x0;
                          lStack_110 = 0;
                          ppppuStack_120 = (uint ****)0x0;
                          uStack_190 = (undefined7)lVar20;
                          cStack_189 = (char)((ulong)lVar20 >> 0x38);
                          ppuStack_188 = (uint **)0x0;
                          func_0x000107c2b080(&ppppuStack_1a0);
                          FUN_10a7ad610(&ppppuStack_260,ppuStack_188,&ppppuStack_1a0,
                                        (uint *)((long)pppppuVar11 + 0x24));
                          if (cStack_189 < '\0') {
                            __ZdlPv(ppppuStack_1a0);
                          }
                          if (lStack_110 < 0) {
                            __ZdlPv(ppppuStack_120);
                          }
                        }
                      }
                    }
                  }
                  (**(code **)(*plVar25 + 0x1f0))(&uStack_138,plVar25);
                  ppppuStack_280 = (uint ****)param_1[0x22];
                  ppppuStack_278 = (uint ****)&ppppuStack_260;
                  lStack_270 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                  lStack_268 = CONCAT17(uStack_129,uStack_130) - lStack_270 >> 5;
                  ppppuStack_298 = (uint ****)0x0;
                  plStack_290 = (long *)0x0;
                  uStack_288 = 0;
                  FUN_10a7771c8(&plStack_2b0,param_1 + 0x35,&ppppuStack_280,&ppppuStack_298);
                  plVar22 = plStack_2a8;
                  lVar20 = lStack_230;
                  for (plVar25 = plStack_2b0; plVar25 != plVar22; plVar25 = plVar25 + 0xd) {
                    lVar18 = param_1[0x35];
                    lStack_230 = lVar20;
                    if (lVar18 != param_1[0x36]) {
                      do {
                        if (*(long *)(lVar18 + 0x18) == plVar25[3]) {
                          uVar4 = *(ushort *)(plVar25 + 4);
                          uVar3 = *(ushort *)(lVar18 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar18 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar23 = *(uint *)(lVar18 + 0x28),
                               (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,(long)plVar25 + 0x24,
                                                  (int)(short)uVar4,(int)(short)uVar3);
                              FUN_10a7a33dc(lVar20 + (long)pppppuVar11,(ulong)uVar23,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar18 = lVar18 + 0x30;
                      } while (lVar18 != param_1[0x36]);
                    }
                    lVar20 = lStack_230;
                  }
                  lVar17 = param_1[0x3e];
                  for (lVar18 = param_1[0x3d]; lStack_230 = lVar20, lVar18 != lVar17;
                      lVar18 = lVar18 + 0x68) {
                    lVar19 = param_1[0x35];
                    if (lVar19 != param_1[0x36]) {
                      do {
                        if (*(long *)(lVar19 + 0x18) == *(long *)(lVar18 + 0x18)) {
                          uVar4 = *(ushort *)(lVar18 + 0x20);
                          uVar3 = *(ushort *)(lVar19 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar19 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar23 = *(uint *)(lVar19 + 0x28),
                               (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,lVar18 + 0x24,(int)(short)uVar4,
                                                  (int)(short)uVar3);
                              FUN_10a7a33dc(lVar20 + (long)pppppuVar11,(ulong)uVar23,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar19 = lVar19 + 0x30;
                      } while (lVar19 != param_1[0x36]);
                    }
                    lVar20 = lStack_230;
                  }
                  ppppuStack_1a0 = (uint ****)(ulong)*(uint *)(param_1 + 0x4b);
                  plVar25 = plStack_220 + 0x57;
                  FUN_10a5e7d1c(plVar25,&ppppuStack_1a0);
                  if (((plVar25 != (long *)0x0) && ((char)plVar25[0xe] == '\x01')) &&
                     (plVar25 = (long *)plVar25[0xb], plVar25 != (long *)0x0)) {
                    do {
                      plVar22 = (long *)plVar25[6];
                      if ((plVar22 != (long *)plVar25[7]) &&
                         (plVar27 = (long *)*plVar22, plVar27 != (long *)0x0)) {
                        lStack_2c0 = 0;
                        lStack_2b8 = 0;
                        lVar20 = plVar27[1];
                        if (lVar20 != 0) {
                          __ZNSt3__119__shared_weak_count4lockEv();
                          if (lVar20 != 0) {
                            lStack_2c0 = *plVar27;
                          }
                          lStack_2b8 = lVar20;
                          if (lStack_2c0 != 0) {
                            lVar20 = lStack_2c0;
                            FUN_10a7738f8();
                            bVar8 = true;
                            bVar9 = false;
                            if (0 < (int)lVar20) {
                              iVar13 = (int)((ulong)lVar20 >> 0x20);
                              bVar9 = SBORROW4(iVar13,1);
                              bVar8 = iVar13 + -1 < 0;
                            }
                            lStack_2c8 = lVar20;
                            if (bVar8 == bVar9) {
                              if (*(char *)((long)plVar25 + 0x27) < '\0') {
                                func_0x000107c3192c(&ppppuStack_d0,plVar25[2],plVar25[3]);
                              }
                              else {
                                ppppuStack_c8 = (uint ****)plVar25[3];
                                ppppuStack_d0 = (uint ****)plVar25[2];
                                ppppuStack_c0 = (uint ****)plVar25[4];
                              }
                              func_0x0001098998d4(&ppppuStack_2e0,&PTR_DAT_110c17658);
                              pppppuVar11 = (uint *****)ppppuStack_2d8;
                              pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                              if (-1 < (char)bStack_2c9) {
                                pppppuVar11 = (uint *****)(ulong)bStack_2c9;
                                pppppuVar6 = &ppppuStack_2e0;
                              }
                              pppppuVar28 = &ppppuStack_d0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (pppppuVar28,pppppuVar6,pppppuVar11);
                              ppppuStack_1a0 = *pppppuVar28;
                              uStack_1b0 = SUB87(pppppuVar28[1],0);
                              uStack_1a9 = (undefined1)*(undefined8 *)((long)pppppuVar28 + 0xf);
                              uStack_1a8 = (undefined7)
                                           ((ulong)*(undefined8 *)((long)pppppuVar28 + 0xf) >> 8);
                              cStack_189 = *(char *)((long)pppppuVar28 + 0x17);
                              pppppuVar28[1] = (uint ****)0x0;
                              pppppuVar28[2] = (uint ****)0x0;
                              *pppppuVar28 = (uint ****)0x0;
                              uStack_190 = uStack_1a8;
                              uStack_198 = uStack_1b0;
                              uStack_191 = uStack_1a9;
                              uStack_1b0 = 0;
                              uStack_1a9 = 0;
                              uStack_1a8 = 0;
                              ppuStack_188 = (uint **)0x0;
                              func_0x000107c2b080(&ppppuStack_1a0);
                              uStack_180._0_2_ = 10;
                              FUN_10a77d1ac(&ppppuStack_120,param_1[0x22],plVar25 + 2,
                                            *(undefined8 *)(*plVar22 + 0x18),&lStack_2c8);
                              uStack_174 = SUB84(ppppuStack_118,0);
                              uStack_170 = (undefined4)((ulong)ppppuStack_118 >> 0x20);
                              fStack_17c = SUB84(ppppuStack_120,0);
                              fStack_178 = (float)((ulong)ppppuStack_120 >> 0x20);
                              uStack_164 = (undefined4)uStack_108;
                              uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                              uStack_16c = (undefined4)lStack_110;
                              uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                              uStack_15c = uStack_100;
                              bStack_13c = 7;
                              func_0x00010a77d228(param_1[0x35],param_1[0x36],&lStack_230,
                                                  &ppppuStack_1a0);
                              func_0x00010a777f38(&ppppuStack_1a0);
                              if ((char)bStack_2c9 < '\0') {
                                __ZdlPv(ppppuStack_2e0);
                              }
                            }
                          }
                        }
                        func_0x00010a1f74b8(&lStack_2c0);
                      }
                      plVar25 = (long *)*plVar25;
                    } while (plVar25 != (long *)0x0);
                  }
                  lVar20 = lStack_230;
                  puVar26 = (ulong *)param_1[0x35];
                  puVar1 = (ulong *)param_1[0x36];
                  if (puVar26 != puVar1) {
                    do {
                      FUN_10a77c0e8(&ppppuStack_120,param_1,puVar26);
                      if (bStack_dc == 1) {
                        if (*(char *)((long)puVar26 + 0x17) < '\0') {
                          func_0x000107c3192c(&ppppuStack_1a0,*puVar26,puVar26[1]);
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_180._0_2_ = (ushort)puVar26[4];
                          if ((bStack_dc & 1) == 0) {
LAB_10a77b3e0:
                    /* WARNING: Does not return */
                            pcVar16 = (code *)SoftwareBreakpoint(1,0x10a77b3e4);
                            (*pcVar16)();
                          }
                        }
                        else {
                          ppppuStack_1a0 = (uint ****)*puVar26;
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_198 = (undefined7)puVar26[1];
                          uStack_191 = (undefined1)(puVar26[1] >> 0x38);
                          uStack_190 = (undefined7)puVar26[2];
                          cStack_189 = (char)(puVar26[2] >> 0x38);
                          uStack_180._0_2_ = (ushort)puVar26[4];
                        }
                        bStack_13c = 0x10;
                        ppppuStack_d0 = (uint ****)&fStack_17c;
                        if (bStack_e0 == 0) {
                          uVar15 = 0;
                          fStack_17c = ppppuStack_120._0_4_;
                        }
                        else {
                          FUN_10a3652d8(&ppppuStack_d0,&ppppuStack_120);
                          uVar15 = (ulong)bStack_e0;
                        }
                        bStack_13c = (byte)uVar15;
                        for (lVar18 = param_1[0x35]; lVar18 != param_1[0x36]; lVar18 = lVar18 + 0x30
                            ) {
                          if (*(uint ****)(lVar18 + 0x18) == (uint ***)ppuStack_188) {
                            uVar4 = *(ushort *)(lVar18 + 0x20);
                            if ((((ushort)uStack_180 == uVar4) ||
                                ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                               ((((ushort)uStack_180 < 7 &&
                                 (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar18 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar18 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_d0,&fStack_17c,
                                                    (int)(short)(ushort)uStack_180,(int)(short)uVar4
                                                   );
                                FUN_10a7a33dc(lVar20 + (long)pppppuVar11,(ulong)uVar23,
                                              (int)(short)uVar4,&ppppuStack_d0);
                                if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&ppppuStack_d0);
                                uVar15 = (ulong)bStack_13c;
                              }
                            }
                            break;
                          }
                        }
                        if (0x10 < (uint)uVar15) goto LAB_10a77b3e0;
                        (*(code *)(&PTR_FUN_110ba1f88)[uVar15])(&fStack_17c);
                        if (cStack_189 < '\0') {
                          __ZdlPv(ppppuStack_1a0);
                        }
                        if ((bStack_dc & 1) != 0) {
                          if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                          (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
                        }
                      }
                      puVar26 = puVar26 + 6;
                    } while (puVar26 != puVar1);
                  }
                  ppppuStack_120 = (uint ****)CONCAT44(ppppuStack_120._4_4_,(int)param_1[0x1b]);
                  func_0x000107426fd8(ppppuStack_210 + 0xb,&ppppuStack_120,&ppppuStack_120);
                  FUN_10a7a31fc(&plStack_2b0);
                  ppppuStack_1a0 = (uint ****)&ppppuStack_298;
                  FUN_10a044868(&ppppuStack_1a0);
                  ppppuStack_1a0 = (uint ****)&uStack_138;
                  FUN_10a044868(&ppppuStack_1a0);
                  FUN_10a7ad5ac(&ppppuStack_260);
                }
              }
              plVar25 = plVar10 + 1;
              do {
                lVar20 = *plVar25;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *plVar25 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                param_1 = plVar10;
              }
            }
          }
          unaff_x20 = plStack_208;
          if (plStack_208 == (long *)0x0) goto LAB_10a77af14;
        }
        unaff_x20 = plStack_208;
        plVar10 = plStack_208 + 1;
        do {
          lVar20 = *plVar10;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
LAB_10a77af14:
    if (plStack_1b8 != (long *)0x0) {
LAB_10a77af1c:
      plVar25 = plStack_1b8;
      plVar10 = plStack_1b8 + 1;
      do {
        lVar20 = *plVar10;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
LAB_10a77af4c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
LAB_10a77af8c:
    iVar13 = 0x137eb960;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      func_0x000107c2b07c(0x1137eb9a8,&DAT_10f67535f);
      ___cxa_atexit(FUN_10a32edf4,0x1137eb9a8,0x100000000);
      ___cxa_guard_release(0x1137eb960);
    }
  } while( true );
}



/* Entry: 10a779760; end: 10a77b3e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a77ac50) */
/* WARNING: Removing unreachable block (ram,0x00010a779ee4) */
/* WARNING: Removing unreachable block (ram,0x00010a77a480) */

void FUN_10a779760(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  bool bVar8;
  bool bVar9;
  long *plVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  long *unaff_x20;
  uint *****unaff_x21;
  uint ****ppppuVar24;
  long *plVar25;
  ulong *puVar26;
  long *plVar27;
  uint *****pppppuVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int iStack_2e8;
  undefined8 ****ppppuStack_2e0;
  uint ****ppppuStack_2d8;
  byte bStack_2c9;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  uint ****ppppuStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  uint ****ppppuStack_280;
  uint ****ppppuStack_278;
  long lStack_270;
  long lStack_268;
  uint ****ppppuStack_260;
  uint ****ppppuStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  long lStack_230;
  uint ****ppppuStack_228;
  long *plStack_220;
  long *plStack_218;
  uint ****ppppuStack_210;
  long *plStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint **ppuStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint *puStack_1c0;
  long *plStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  uint ****ppppuStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  char cStack_189;
  uint **ppuStack_188;
  undefined4 uStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  byte bStack_13c;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  uint ****ppppuStack_120;
  uint ****ppppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  byte bStack_e0;
  byte bStack_dc;
  uint ****ppppuStack_d0;
  uint ****ppppuStack_c8;
  uint ****ppppuStack_c0;
  long lStack_b8;
  byte bStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)param_1[0x15];
  if (plVar10 == (long *)0x0) goto LAB_10a77af4c;
  __ZNSt3__119__shared_weak_count4lockEv();
  plStack_1b8 = plVar10;
  if (plVar10 == (long *)0x0) goto LAB_10a77af4c;
  puStack_1c0 = (uint *)param_1[0x14];
  if (puStack_1c0 == (uint *)0x0) goto LAB_10a77af1c;
  if (param_1[0x22] == 0) goto LAB_10a77af1c;
  if (param_1[0x24] == 0) goto LAB_10a77af1c;
  if (*(long *)(param_1[0x24] + 8) == -1) goto LAB_10a77af1c;
  uVar23 = *puStack_1c0;
  unaff_x20 = (long *)(ulong)uVar23;
  uVar21 = (ulong)(uVar23 * (int)param_1[0x1b]);
  uVar15 = uVar21 + (long)unaff_x20;
  uVar14 = *(long *)(puStack_1c0 + 4) - *(long *)(puStack_1c0 + 2);
  unaff_x21 = (uint *****)0x0;
  if (uVar15 <= uVar14) {
    unaff_x21 = (uint *****)(*(long *)(puStack_1c0 + 2) + uVar21);
  }
  if (uVar23 == 0) goto LAB_10a77af1c;
  if (uVar14 < uVar15) goto LAB_10a77af1c;
  _bzero(unaff_x21,unaff_x20);
  uStack_1f4 = 0;
  fStack_1f0 = 0.0;
  fStack_1fc = 0.0;
  fStack_1f8 = 0.0;
  fStack_200 = 1.0;
  fStack_1ec = 1.0;
  ppuStack_1e8 = (uint **)0x0;
  uStack_1e0 = (uint ***)0x0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1d4 = 0;
  uStack_1d0 = 0;
  fStack_1d8 = 1.0;
  uStack_1c4 = 0x3f800000;
  plVar10 = (long *)param_1[0x28];
  if (plVar10 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    uStack_198 = SUB87(plVar10,0);
    uStack_191 = (undefined1)((ulong)plVar10 >> 0x38);
    if (plVar10 != (long *)0x0) {
      ppppuStack_1a0 = (uint ****)param_1[0x27];
      if ((uint *****)ppppuStack_1a0 != (uint *****)0x0) {
        ppppuVar24 = (uint ****)ppppuStack_1a0[0x28];
        if ((*(byte *)((long)ppppuVar24 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(ppppuVar24);
        }
        ppuStack_1e8 = (uint **)ppppuVar24[0x1b];
        fStack_1f8 = SUB84(ppppuVar24[0x19],0);
        uStack_1f4 = (undefined4)((ulong)ppppuVar24[0x19] >> 0x20);
        fStack_200 = SUB84(ppppuVar24[0x18],0);
        fStack_1fc = (float)((ulong)ppppuVar24[0x18] >> 0x20);
        fStack_1f0 = SUB84(ppppuVar24[0x1a],0);
        fStack_1ec = (float)((ulong)ppppuVar24[0x1a] >> 0x20);
        uStack_1e0 = ppppuVar24[0x1c];
        fStack_1d8 = SUB84(ppppuVar24[0x1d],0);
        uStack_1d4 = (undefined4)((ulong)ppppuVar24[0x1d] >> 0x20);
        uStack_1c8 = SUB84(ppppuVar24[0x1f],0);
        uStack_1c4 = (undefined4)((ulong)ppppuVar24[0x1f] >> 0x20);
        uStack_1d0 = SUB84(ppppuVar24[0x1e],0);
        uStack_1cc = (undefined4)((ulong)ppppuVar24[0x1e] >> 0x20);
      }
      plVar25 = plVar10 + 1;
      do {
        lVar20 = *plVar25;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar8) {
          *plVar25 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
  }
  pppppuVar11 = (uint *****)param_1[0x4a];
  if ((pppppuVar11 != (uint *****)0x0) &&
     (__ZNSt3__119__shared_weak_count4lockEv(), ppppuStack_118 = (uint ****)pppppuVar11,
     pppppuVar11 != (uint *****)0x0)) {
    ppppuStack_120 = (uint ****)param_1[0x49];
    if (((uint *****)ppppuStack_120 != (uint *****)0x0) &&
       (ppppuVar24 = (uint ****)ppppuStack_120[0x60], ppppuVar24 != (uint ****)0x0)) {
      if ((*(byte *)((long)ppppuVar24 + 0x2a) & 0x24) != 0) {
        FUN_10a3e8fd4(ppppuVar24);
      }
      func_0x000109519fd0(&ppppuStack_1a0,&fStack_200,ppppuVar24 + 0x18);
      fStack_1f8 = (float)uStack_198;
      uStack_1f4 = (undefined4)(CONCAT17(uStack_191,uStack_198) >> 0x20);
      fStack_200 = SUB84(ppppuStack_1a0,0);
      fStack_1fc = (float)((ulong)ppppuStack_1a0 >> 0x20);
      ppuStack_1e8 = ppuStack_188;
      fStack_1f0 = (float)uStack_190;
      fStack_1ec = (float)(CONCAT17(cStack_189,uStack_190) >> 0x20);
      uStack_1e0 = (uint ***)CONCAT44(fStack_17c,CONCAT22(uStack_180._2_2_,(ushort)uStack_180));
      fStack_1d8 = fStack_178;
      uStack_1d4 = uStack_174;
      uStack_1c8 = uStack_168;
      uStack_1c4 = uStack_164;
      uStack_1d0 = uStack_170;
      uStack_1cc = uStack_16c;
    }
    pppppuVar28 = pppppuVar11 + 1;
    do {
      ppppuVar24 = *pppppuVar28;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppuVar28,0x10);
      if (bVar8) {
        *pppppuVar28 = (uint ****)((long)ppppuVar24 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppuVar24 == (uint ****)0x0) {
      (*(code *)(*pppppuVar11)[2])(pppppuVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar11);
    }
  }
  if ((bRam00000001137eb960 & 1) == 0) goto LAB_10a77af8c;
  do {
    if ((bRam00000001137eb968 & 1) == 0) {
      iVar13 = 0x137eb968;
      ___cxa_guard_acquire();
      if (iVar13 != 0) {
        func_0x000107c2b07c(0x1137eb9c8,&DAT_10f67536e);
        ___cxa_atexit(FUN_10a32edf4,0x1137eb9c8,0x100000000);
        ___cxa_guard_release(0x1137eb968);
      }
    }
    if ((bRam00000001137eb970 & 1) == 0) {
      iVar13 = 0x137eb970;
      ___cxa_guard_acquire();
      if (iVar13 != 0) {
        func_0x000107c2b07c(0x1137eb9e8,&DAT_10f67537e);
        ___cxa_atexit(FUN_10a32edf4,0x1137eb9e8,0x100000000);
        ___cxa_guard_release(0x1137eb970);
      }
    }
    if ((bRam00000001137eb978 & 1) == 0) {
      iVar13 = 0x137eb978;
      ___cxa_guard_acquire();
      if (iVar13 != 0) {
        func_0x000107c2b07c(0x1137eba08,&DAT_10f675393);
        ___cxa_atexit(FUN_10a32edf4,0x1137eba08,0x100000000);
        ___cxa_guard_release(0x1137eb978);
      }
    }
    plVar10 = (long *)param_1[0x4a];
    if (plVar10 == (long *)0x0) {
LAB_10a7799c4:
      iStack_2e8 = 0;
    }
    else {
      __ZNSt3__119__shared_weak_count4lockEv();
      uStack_198 = SUB87(plVar10,0);
      uStack_191 = (undefined1)((ulong)plVar10 >> 0x38);
      if (plVar10 == (long *)0x0) goto LAB_10a7799c4;
      pppppuVar11 = (uint *****)param_1[0x49];
      ppppuStack_1a0 = (uint ****)pppppuVar11;
      if (pppppuVar11 == (uint *****)0x0) {
        iStack_2e8 = 0;
      }
      else {
        func_0x00010a777f8c();
        iStack_2e8 = (int)pppppuVar11;
      }
      plVar25 = plVar10 + 1;
      do {
        lVar20 = *plVar25;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar8) {
          *plVar25 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    lVar20 = param_1[0x29];
    lVar18 = param_1[0x2a];
    if (lVar20 != lVar18) {
      plVar10 = (long *)(*(long *)(param_1[0x22] + 0x1b8) + 8);
      do {
        uVar15 = *(ulong *)(lVar20 + 0x18);
        uVar23 = (uint)unaff_x20;
        if (uVar15 == uRam00000001137eb9c0) {
          fStack_178 = fStack_1d8;
          uStack_174 = uStack_1d4;
          uStack_168 = uStack_1c8;
          uStack_164 = uStack_1c4;
          uStack_170 = uStack_1d0;
          uStack_16c = uStack_1cc;
          ppppuStack_1a0 = (uint ****)CONCAT44(fStack_1fc,fStack_200);
          uStack_198 = (undefined7)CONCAT44(uStack_1f4,fStack_1f8);
          uStack_191 = (undefined1)((uint)uStack_1f4 >> 0x18);
          ppuStack_188 = ppuStack_1e8;
          uStack_190 = (undefined7)CONCAT44(fStack_1ec,fStack_1f0);
          cStack_189 = (char)((uint)fStack_1ec >> 0x18);
          uVar15 = 8;
          uStack_160 = CONCAT31(uStack_160._1_3_,8);
          uVar14 = (ulong)*(uint *)(lVar20 + 0x24);
          fStack_17c = uStack_1e0._4_4_;
          uStack_180 = (float)uStack_1e0;
          if (*(uint *)(lVar20 + 0x24) <= uVar23) {
            uVar15 = (ulong)*(uint *)(lVar20 + 0x28);
            if ((long)unaff_x20 - uVar14 < uVar15) {
              uVar15 = 8;
            }
            else {
LAB_10a779bb8:
              FUN_10a7a33dc((long)unaff_x21 + uVar14,uVar15,(long)*(short *)(lVar20 + 0x20),
                            &ppppuStack_1a0);
              uVar15 = (ulong)(byte)uStack_160;
              if (0x10 < (byte)uStack_160) goto LAB_10a77b3e0;
            }
          }
LAB_10a779bd4:
          pcVar16 = (code *)(&PTR_FUN_110ba1f88)[uVar15];
LAB_10a779bd8:
          (*pcVar16)(&ppppuStack_1a0);
        }
        else {
          if (uVar15 == uRam00000001137eb9e0) {
            fVar30 = -(uStack_1e0._4_4_ * ppuStack_1e8._0_4_) + fStack_1d8 * fStack_1ec;
            fVar32 = -(fStack_1ec * fStack_1f8) + ppuStack_1e8._0_4_ * fStack_1fc;
            fVar31 = 1.0 / (-(fStack_1f0 *
                             (-(uStack_1e0._4_4_ * fStack_1f8) + fStack_1d8 * fStack_1fc)) +
                            fVar30 * fStack_200 + fVar32 * (float)uStack_1e0);
            uStack_180 = (-(fStack_1f0 * fStack_1fc) + fStack_1ec * fStack_200) * fVar31;
            ppppuStack_1a0 =
                 (uint ****)
                 CONCAT44((-(fStack_1f0 * fStack_1d8) - -((float)uStack_1e0 * ppuStack_1e8._0_4_)) *
                          fVar31,fVar30 * fVar31);
            fVar30 = (-(fStack_1fc * fStack_1d8) - -(uStack_1e0._4_4_ * fStack_1f8)) * fVar31;
            fVar29 = (-(fStack_200 * uStack_1e0._4_4_) - -((float)uStack_1e0 * fStack_1fc)) * fVar31
            ;
            ppuStack_188 = (uint **)CONCAT44((-(fStack_200 * ppuStack_1e8._0_4_) -
                                             -(fStack_1f0 * fStack_1f8)) * fVar31,fVar32 * fVar31);
            uStack_198 = (undefined7)
                         CONCAT44(fVar30,(-((float)uStack_1e0 * fStack_1ec) +
                                         uStack_1e0._4_4_ * fStack_1f0) * fVar31);
            uStack_191 = (undefined1)((uint)fVar30 >> 0x18);
            uStack_190 = (undefined7)
                         CONCAT44(fVar29,(-((float)uStack_1e0 * fStack_1f8) +
                                         fStack_1d8 * fStack_200) * fVar31);
            cStack_189 = (char)((uint)fVar29 >> 0x18);
            uVar15 = 7;
            uStack_160 = CONCAT31(uStack_160._1_3_,7);
            uVar14 = (ulong)*(uint *)(lVar20 + 0x24);
            if (*(uint *)(lVar20 + 0x24) <= uVar23) {
              uVar15 = (ulong)*(uint *)(lVar20 + 0x28);
              if (uVar15 <= (long)unaff_x20 - uVar14) goto LAB_10a779bb8;
              uVar15 = 7;
            }
            goto LAB_10a779bd4;
          }
          if (uVar15 == uRam00000001137eba00) {
            iVar13 = *(int *)((long)param_1 + 0xdc);
LAB_10a779b88:
            ppppuStack_1a0 = (uint ****)CONCAT44(ppppuStack_1a0._4_4_,iVar13);
            uVar15 = 9;
            uStack_160 = CONCAT31(uStack_160._1_3_,9);
            uVar14 = (ulong)*(uint *)(lVar20 + 0x24);
            if (*(uint *)(lVar20 + 0x24) <= uVar23) {
              uVar15 = (ulong)*(uint *)(lVar20 + 0x28);
              if (uVar15 <= (long)unaff_x20 - uVar14) goto LAB_10a779bb8;
              uVar15 = 9;
            }
            goto LAB_10a779bd4;
          }
          iVar13 = iStack_2e8;
          if (uVar15 == uRam00000001137eba20) goto LAB_10a779b88;
          ppppuStack_1a0 = (uint ****)((ulong)ppppuStack_1a0 & 0xffffffffffffff00);
          uStack_15c = uStack_15c & 0xffffff00;
          plVar22 = (long *)*plVar10;
          plVar25 = plVar10;
          if (plVar22 != (long *)0x0) {
            do {
              lVar17 = 8;
              if (uVar15 <= (ulong)plVar22[7]) {
                lVar17 = 0;
                plVar25 = plVar22;
              }
              plVar22 = *(long **)((long)plVar22 + lVar17);
            } while (plVar22 != (long *)0x0);
            if (((plVar25 != plVar10) && ((ulong)plVar25[7] <= uVar15)) &&
               (lVar17 = plVar25[8], lVar17 != 0)) {
              uVar4 = *(ushort *)(lVar17 + 0x20);
              uVar3 = *(ushort *)(lVar20 + 0x20);
              if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                 (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7) &&
                  (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                func_0x00010a77bef4(&ppppuStack_120,lVar17 + 0x24,(int)(short)uVar4,
                                    (int)(short)uVar3);
                FUN_10a77c0b8(&ppppuStack_1a0,&ppppuStack_120);
                if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
              }
            }
          }
          FUN_10a77c0e8(&ppppuStack_120,param_1,lVar20);
          if (bStack_dc == 1) {
            func_0x00010a7a3610(&ppppuStack_1a0,&ppppuStack_120);
            if ((bStack_dc & 1) != 0) {
              if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
              (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
            }
          }
          if ((char)uStack_15c == '\x01') {
            uVar2 = *(uint *)(lVar20 + 0x24);
            if ((uVar2 <= uVar23) &&
               ((ulong)*(uint *)(lVar20 + 0x28) <= (long)unaff_x20 - (ulong)uVar2)) {
              FUN_10a7a33dc((long)unaff_x21 + (ulong)uVar2,(ulong)*(uint *)(lVar20 + 0x28),
                            (long)*(short *)(lVar20 + 0x20),&ppppuStack_1a0);
              if ((char)uStack_15c != '\x01') goto LAB_10a779be0;
            }
            if ((ulong)(byte)uStack_160 < 0x11) {
              pcVar16 = (code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160];
              goto LAB_10a779bd8;
            }
            goto LAB_10a77b3e0;
          }
        }
LAB_10a779be0:
        lVar20 = lVar20 + 0x30;
      } while (lVar20 != lVar18);
    }
    ppppuStack_1a0 = (uint ****)CONCAT44(ppppuStack_1a0._4_4_,(int)param_1[0x1b]);
    func_0x000107426fd8(puStack_1c0 + 0x16,&ppppuStack_1a0,&ppppuStack_1a0);
    plVar10 = (long *)param_1[0x17];
    if (plVar10 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_290 = plVar10;
      if (plVar10 != (long *)0x0) {
        unaff_x21 = (uint *****)param_1[0x16];
        ppppuStack_298 = (uint ****)unaff_x21;
        if (unaff_x21 != (uint *****)0x0) {
          plVar10 = (long *)param_1[0x4a];
          if (plVar10 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_2a8 = plVar10;
            if (plVar10 != (long *)0x0) {
              plVar25 = (long *)param_1[0x49];
              plStack_2b0 = plVar25;
              if (plVar25 != (long *)0x0) {
                uVar23 = *(uint *)unaff_x21;
                uVar14 = (ulong)(uVar23 * *(int *)((long)param_1 + 0xdc));
                uVar15 = uVar14 + (long)(ulong)uVar23;
                pppppuVar11 = unaff_x21 + 1;
                uVar21 = (long)unaff_x21[2] - (long)*pppppuVar11;
                unaff_x21 = (uint *****)0x0;
                if (uVar15 <= uVar21) {
                  unaff_x21 = (uint *****)(ulong)uVar23;
                }
                ppppuStack_2e0 = (undefined8 *****)0x0;
                if (uVar15 <= uVar21) {
                  ppppuStack_2e0 = (undefined8 *****)((long)*pppppuVar11 + uVar14);
                }
                ppppuStack_2d8 = (uint ****)unaff_x21;
                if (unaff_x21 != (uint *****)0x0) {
                  _bzero(ppppuStack_2e0,unaff_x21);
                  if ((*(char *)((long)param_1 + 0xe4) == '\x01') && (1 < *(uint *)(param_1 + 0x1c))
                     ) {
                    ppppuStack_118 = (uint ****)0x0;
                    ppppuStack_120 = (uint ****)0x0;
                    uStack_108 = 0;
                    lStack_110 = 0;
                    uStack_100 = 0x3f800000;
                    pppppuVar28 = (uint *****)param_1[0x3e];
                    for (pppppuVar11 = (uint *****)param_1[0x3d]; pppppuVar11 != pppppuVar28;
                        pppppuVar11 = pppppuVar11 + 0xd) {
                      ppppuStack_258 = (uint ****)(long)*(char *)((long)pppppuVar11 + 0x17);
                      ppppuStack_260 = (uint ****)pppppuVar11;
                      if ((long)ppppuStack_258 < 0) {
                        ppppuStack_258 = pppppuVar11[1];
                        ppppuStack_260 = *pppppuVar11;
                      }
                      if (*(short *)(pppppuVar11 + 4) == 6) {
                        pppppuVar12 = &ppppuStack_260;
                        FUN_10a159054(pppppuVar12,&UNK_10f675465,10);
                        if (((int)pppppuVar12 != 0) && (*(char *)((long)pppppuVar11 + 100) == '\t'))
                        {
                          ppppuStack_278 = ppppuStack_258;
                          if ((uint *****)((long)ppppuStack_258 + -10) <= ppppuStack_258) {
                            ppppuStack_278 = (uint ****)((long)ppppuStack_258 + -10);
                          }
                          ppppuStack_280 = ppppuStack_260;
                          if ((uint *****)ppppuStack_278 != (uint *****)0x0) {
                            func_0x0001098998d4(&ppppuStack_d0,&ppppuStack_280);
                            ppppuVar24 = ppppuStack_c0;
                            uStack_198 = SUB87(ppppuStack_c8,0);
                            uStack_191 = (undefined1)((ulong)ppppuStack_c8 >> 0x38);
                            ppppuStack_1a0 = ppppuStack_d0;
                            ppppuStack_c8 = (uint ****)0x0;
                            ppppuStack_c0 = (uint ****)0x0;
                            ppppuStack_d0 = (uint ****)0x0;
                            uStack_190 = SUB87(ppppuVar24,0);
                            cStack_189 = (char)((ulong)ppppuVar24 >> 0x38);
                            ppuStack_188 = (uint **)0x0;
                            func_0x000107c2b080(&ppppuStack_1a0);
                            FUN_10a7ad610(&ppppuStack_120,ppuStack_188,&ppppuStack_1a0,
                                          (uint *)((long)pppppuVar11 + 0x24));
                            if (cStack_189 < '\0') {
                              __ZdlPv(ppppuStack_1a0);
                            }
                          }
                        }
                      }
                    }
                    (**(code **)(*plVar25 + 0x1f0))(&ppppuStack_260,plVar25);
                    ppppuStack_d0 = (uint ****)param_1[0x22];
                    ppppuStack_c8 = (uint ****)&ppppuStack_120;
                    lStack_b8 = (long)ppppuStack_258 - (long)ppppuStack_260 >> 5;
                    ppppuStack_c0 = ppppuStack_260;
                    ppppuStack_280 = (uint ****)0x0;
                    ppppuStack_278 = (uint ****)0x0;
                    lStack_270 = 0;
                    FUN_10a7771c8(&uStack_138,param_1 + 0x31,&ppppuStack_d0,&ppppuStack_280);
                    lVar18 = CONCAT17(uStack_129,uStack_130);
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    for (lVar20 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                        ppppuStack_2e0 = pppppuVar6, lVar20 != lVar18; lVar20 = lVar20 + 0x68) {
                      lVar17 = param_1[0x31];
                      if (lVar17 != param_1[0x32]) {
                        do {
                          if (*(long *)(lVar17 + 0x18) == *(long *)(lVar20 + 0x18)) {
                            uVar4 = *(ushort *)(lVar20 + 0x20);
                            uVar3 = *(ushort *)(lVar17 + 0x20);
                            if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                               (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar17 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar17 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_1a0,lVar20 + 0x24,(int)(short)uVar4,
                                                    (int)(short)uVar3);
                                FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar11,(ulong)uVar23,
                                              (int)(short)uVar3,&ppppuStack_1a0);
                                if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                              }
                            }
                            break;
                          }
                          lVar17 = lVar17 + 0x30;
                        } while (lVar17 != param_1[0x32]);
                      }
                      pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    }
                    FUN_10a7a31fc(&uStack_138);
                    ppppuStack_1a0 = (uint ****)&ppppuStack_280;
                    FUN_10a044868(&ppppuStack_1a0);
                    ppppuStack_1a0 = (uint ****)&ppppuStack_260;
                    FUN_10a044868(&ppppuStack_1a0);
                    FUN_10a7ad5ac(&ppppuStack_120);
                  }
                  else {
                    lVar20 = param_1[0x22];
                    (**(code **)(*plVar25 + 0x1e8))(&ppppuStack_1a0,plVar25);
                    (**(code **)(*plVar25 + 0x1f0))(&ppppuStack_d0,plVar25);
                    FUN_10a77c4d0(&ppppuStack_120,lVar20,&ppppuStack_1a0,&ppppuStack_d0,
                                  iStack_2e8 != 1);
                    ppppuStack_260 = (uint ****)&ppppuStack_d0;
                    FUN_10a044868(&ppppuStack_260);
                    ppppuStack_d0 = (uint ****)&ppppuStack_1a0;
                    FUN_10a66db40(&ppppuStack_d0);
                    ppppuVar24 = ppppuStack_118;
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    for (pppppuVar11 = (uint *****)ppppuStack_120; ppppuStack_2e0 = pppppuVar6,
                        pppppuVar11 != (uint *****)ppppuVar24; pppppuVar11 = pppppuVar11 + 0xd) {
                      lVar20 = param_1[0x31];
                      if (lVar20 != param_1[0x32]) {
                        do {
                          if (*(uint *****)(lVar20 + 0x18) == pppppuVar11[3]) {
                            uVar4 = *(ushort *)(pppppuVar11 + 4);
                            uVar3 = *(ushort *)(lVar20 + 0x20);
                            if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                               (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar28 = (uint *****)(ulong)*(uint *)(lVar20 + 0x24);
                              if ((pppppuVar28 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar20 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar28))) {
                                func_0x00010a77bef4(&ppppuStack_1a0,
                                                    (uint *)((long)pppppuVar11 + 0x24),
                                                    (int)(short)uVar4,(int)(short)uVar3);
                                FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar28,(ulong)uVar23,
                                              (int)(short)uVar3,&ppppuStack_1a0);
                                if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                              }
                            }
                            break;
                          }
                          lVar20 = lVar20 + 0x30;
                        } while (lVar20 != param_1[0x32]);
                      }
                      pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                    }
                    FUN_10a7a31fc(&ppppuStack_120);
                  }
                  lVar18 = param_1[0x3e];
                  pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                  for (lVar20 = param_1[0x3d]; ppppuStack_2e0 = pppppuVar6, lVar20 != lVar18;
                      lVar20 = lVar20 + 0x68) {
                    lVar17 = param_1[0x31];
                    if (lVar17 != param_1[0x32]) {
                      do {
                        if (*(long *)(lVar17 + 0x18) == *(long *)(lVar20 + 0x18)) {
                          uVar4 = *(ushort *)(lVar20 + 0x20);
                          uVar3 = *(ushort *)(lVar17 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar17 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar23 = *(uint *)(lVar17 + 0x28),
                               (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,lVar20 + 0x24,(int)(short)uVar4,
                                                  (int)(short)uVar3);
                              FUN_10a7a33dc((long)pppppuVar6 + (long)pppppuVar11,(ulong)uVar23,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar17 = lVar17 + 0x30;
                      } while (lVar17 != param_1[0x32]);
                    }
                    pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                  }
                  ppppuStack_1a0 = (uint ****)(ulong)*(uint *)(param_1 + 0x4b);
                  plVar25 = plStack_2b0 + 0x57;
                  FUN_10a5e7d1c(plVar25,&ppppuStack_1a0);
                  if (((plVar25 != (long *)0x0) && ((char)plVar25[0xe] == '\x01')) &&
                     (plVar25 = (long *)plVar25[0xb], plVar25 != (long *)0x0)) {
                    do {
                      plVar22 = (long *)plVar25[6];
                      if ((plVar22 != (long *)plVar25[7]) &&
                         (puVar26 = (ulong *)*plVar22, puVar26 != (ulong *)0x0)) {
                        ppppuStack_280 = (uint ****)0x0;
                        ppppuStack_278 = (uint ****)0x0;
                        pppppuVar11 = (uint *****)puVar26[1];
                        if (pppppuVar11 != (uint *****)0x0) {
                          __ZNSt3__119__shared_weak_count4lockEv();
                          if (pppppuVar11 != (uint *****)0x0) {
                            ppppuStack_280 = (uint ****)*puVar26;
                          }
                          ppppuStack_278 = (uint ****)pppppuVar11;
                          if ((uint *****)ppppuStack_280 != (uint *****)0x0) {
                            pppppuVar11 = (uint *****)ppppuStack_280;
                            FUN_10a7738f8();
                            bVar8 = true;
                            bVar9 = false;
                            if (0 < (int)pppppuVar11) {
                              iVar13 = (int)((ulong)pppppuVar11 >> 0x20);
                              bVar9 = SBORROW4(iVar13,1);
                              bVar8 = iVar13 + -1 < 0;
                            }
                            ppppuStack_210 = (uint ****)pppppuVar11;
                            if (bVar8 == bVar9) {
                              if (*(char *)((long)plVar25 + 0x27) < '\0') {
                                func_0x000107c3192c(&ppppuStack_d0,plVar25[2],plVar25[3]);
                              }
                              else {
                                ppppuStack_c8 = (uint ****)plVar25[3];
                                ppppuStack_d0 = (uint ****)plVar25[2];
                                ppppuStack_c0 = (uint ****)plVar25[4];
                              }
                              func_0x0001098998d4(&ppppuStack_260,&PTR_DAT_110c17658);
                              pppppuVar11 = (uint *****)ppppuStack_258;
                              pppppuVar28 = (uint *****)ppppuStack_260;
                              if (-1 < (long)uStack_250) {
                                pppppuVar11 = (uint *****)(uStack_250 >> 0x38);
                                pppppuVar28 = &ppppuStack_260;
                              }
                              pppppuVar12 = &ppppuStack_d0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (pppppuVar12,pppppuVar28,pppppuVar11);
                              ppppuStack_1a0 = *pppppuVar12;
                              uStack_138._0_7_ = SUB87(pppppuVar12[1],0);
                              uStack_138._7_1_ =
                                   (undefined1)*(undefined8 *)((long)pppppuVar12 + 0xf);
                              uStack_130 = (undefined7)
                                           ((ulong)*(undefined8 *)((long)pppppuVar12 + 0xf) >> 8);
                              cStack_189 = *(char *)((long)pppppuVar12 + 0x17);
                              pppppuVar12[1] = (uint ****)0x0;
                              pppppuVar12[2] = (uint ****)0x0;
                              *pppppuVar12 = (uint ****)0x0;
                              uStack_190 = uStack_130;
                              uStack_198 = (undefined7)uStack_138;
                              uStack_191 = uStack_138._7_1_;
                              uStack_138._0_7_ = 0;
                              uStack_138._7_1_ = 0;
                              uStack_130 = 0;
                              ppuStack_188 = (uint **)0x0;
                              func_0x000107c2b080(&ppppuStack_1a0);
                              uStack_180._0_2_ = 10;
                              FUN_10a77d1ac(&ppppuStack_120,param_1[0x22],plVar25 + 2,
                                            *(undefined8 *)(*plVar22 + 0x18),&ppppuStack_210);
                              uStack_174 = SUB84(ppppuStack_118,0);
                              uStack_170 = (undefined4)((ulong)ppppuStack_118 >> 0x20);
                              fStack_17c = SUB84(ppppuStack_120,0);
                              fStack_178 = (float)((ulong)ppppuStack_120 >> 0x20);
                              uStack_164 = (undefined4)uStack_108;
                              uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                              uStack_16c = (undefined4)lStack_110;
                              uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                              uStack_15c = uStack_100;
                              bStack_13c = 7;
                              FUN_10a77c39c(param_1[0x31],param_1[0x32],&ppppuStack_2e0,
                                            &ppppuStack_1a0);
                              func_0x00010a777f38(&ppppuStack_1a0);
                              if ((long)uStack_250 < 0) {
                                __ZdlPv(ppppuStack_260);
                              }
                            }
                          }
                        }
                        func_0x00010a1f74b8(&ppppuStack_280);
                      }
                      plVar25 = (long *)*plVar25;
                    } while (plVar25 != (long *)0x0);
                  }
                  ppppuVar7 = ppppuStack_2e0;
                  puVar26 = (ulong *)param_1[0x31];
                  puVar1 = (ulong *)param_1[0x32];
                  if (puVar26 != puVar1) {
                    do {
                      FUN_10a77c0e8(&ppppuStack_120,param_1,puVar26);
                      if (bStack_dc == 1) {
                        if (*(char *)((long)puVar26 + 0x17) < '\0') {
                          func_0x000107c3192c(&ppppuStack_1a0,*puVar26,puVar26[1]);
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_180._0_2_ = (ushort)puVar26[4];
                          if ((bStack_dc & 1) == 0) goto LAB_10a77b3e0;
                        }
                        else {
                          ppppuStack_1a0 = (uint ****)*puVar26;
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_198 = (undefined7)puVar26[1];
                          uStack_191 = (undefined1)(puVar26[1] >> 0x38);
                          uStack_190 = (undefined7)puVar26[2];
                          cStack_189 = (char)(puVar26[2] >> 0x38);
                          uStack_180._0_2_ = (ushort)puVar26[4];
                        }
                        bStack_13c = 0x10;
                        ppppuStack_d0 = (uint ****)&fStack_17c;
                        if (bStack_e0 == 0) {
                          uVar15 = 0;
                          fStack_17c = ppppuStack_120._0_4_;
                        }
                        else {
                          FUN_10a3652d8(&ppppuStack_d0,&ppppuStack_120);
                          uVar15 = (ulong)bStack_e0;
                        }
                        bStack_13c = (byte)uVar15;
                        for (lVar20 = param_1[0x31]; lVar20 != param_1[0x32]; lVar20 = lVar20 + 0x30
                            ) {
                          if (*(uint ****)(lVar20 + 0x18) == (uint ***)ppuStack_188) {
                            uVar4 = *(ushort *)(lVar20 + 0x20);
                            if ((((ushort)uStack_180 == uVar4) ||
                                ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                               ((((ushort)uStack_180 < 7 &&
                                 (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar20 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar20 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_d0,&fStack_17c,
                                                    (int)(short)(ushort)uStack_180,(int)(short)uVar4
                                                   );
                                FUN_10a7a33dc((long)ppppuVar7 + (long)pppppuVar11,(ulong)uVar23,
                                              (int)(short)uVar4,&ppppuStack_d0);
                                if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&ppppuStack_d0);
                                uVar15 = (ulong)bStack_13c;
                              }
                            }
                            break;
                          }
                        }
                        if (0x10 < (uint)uVar15) goto LAB_10a77b3e0;
                        (*(code *)(&PTR_FUN_110ba1f88)[uVar15])(&fStack_17c);
                        if (cStack_189 < '\0') {
                          __ZdlPv(ppppuStack_1a0);
                        }
                        if ((bStack_dc & 1) != 0) {
                          if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                          (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
                        }
                      }
                      puVar26 = puVar26 + 6;
                    } while (puVar26 != puVar1);
                  }
                  ppppuStack_1a0 =
                       (uint ****)
                       CONCAT44(ppppuStack_1a0._4_4_,*(undefined4 *)((long)param_1 + 0xdc));
                  func_0x000107426fd8(ppppuStack_298 + 0xb,&ppppuStack_1a0,&ppppuStack_1a0);
                }
              }
              plVar25 = plVar10 + 1;
              do {
                lVar20 = *plVar25;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *plVar25 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
          }
          unaff_x20 = plStack_290;
          if (plStack_290 == (long *)0x0) goto LAB_10a77a708;
        }
        unaff_x20 = plStack_290;
        plVar10 = plStack_290 + 1;
        do {
          lVar20 = *plVar10;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_290 + 0x10))(plStack_290);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
LAB_10a77a708:
    plVar10 = (long *)param_1[0x19];
    if (plVar10 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_208 = plVar10;
      if (plVar10 != (long *)0x0) {
        unaff_x21 = (uint *****)param_1[0x18];
        ppppuStack_210 = (uint ****)unaff_x21;
        if (unaff_x21 != (uint *****)0x0) {
          plVar10 = (long *)param_1[0x4a];
          if (plVar10 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_218 = plVar10;
            if (plVar10 != (long *)0x0) {
              plVar25 = (long *)param_1[0x49];
              plStack_220 = plVar25;
              if (plVar25 != (long *)0x0) {
                uVar23 = *(uint *)unaff_x21;
                uVar14 = (ulong)(uVar23 * (int)param_1[0x1b]);
                uVar15 = uVar14 + (long)(ulong)uVar23;
                pppppuVar11 = unaff_x21 + 1;
                uVar21 = (long)unaff_x21[2] - (long)*pppppuVar11;
                unaff_x21 = (uint *****)0x0;
                if (uVar15 <= uVar21) {
                  unaff_x21 = (uint *****)(ulong)uVar23;
                }
                lStack_230 = 0;
                if (uVar15 <= uVar21) {
                  lStack_230 = (long)*pppppuVar11 + uVar14;
                }
                ppppuStack_228 = (uint ****)unaff_x21;
                if (unaff_x21 != (uint *****)0x0) {
                  _bzero(lStack_230,unaff_x21);
                  ppppuStack_258 = (uint ****)0x0;
                  ppppuStack_260 = (uint ****)0x0;
                  uStack_248 = 0;
                  uStack_250 = 0;
                  uStack_240 = 0x3f800000;
                  pppppuVar28 = (uint *****)param_1[0x3e];
                  for (pppppuVar11 = (uint *****)param_1[0x3d]; pppppuVar11 != pppppuVar28;
                      pppppuVar11 = pppppuVar11 + 0xd) {
                    ppppuStack_c8 = (uint ****)(long)*(char *)((long)pppppuVar11 + 0x17);
                    ppppuStack_d0 = (uint ****)pppppuVar11;
                    if ((long)ppppuStack_c8 < 0) {
                      ppppuStack_c8 = pppppuVar11[1];
                      ppppuStack_d0 = *pppppuVar11;
                    }
                    if (*(short *)(pppppuVar11 + 4) == 6) {
                      pppppuVar12 = &ppppuStack_d0;
                      FUN_10a159054(pppppuVar12,&UNK_10f675465,10);
                      if (((int)pppppuVar12 != 0) && (*(char *)((long)pppppuVar11 + 100) == '\t')) {
                        ppppuStack_278 = ppppuStack_c8;
                        if ((uint *****)((long)ppppuStack_c8 + -10) <= ppppuStack_c8) {
                          ppppuStack_278 = (uint ****)((long)ppppuStack_c8 + -10);
                        }
                        ppppuStack_280 = ppppuStack_d0;
                        if ((uint *****)ppppuStack_278 != (uint *****)0x0) {
                          func_0x0001098998d4(&ppppuStack_120,&ppppuStack_280);
                          lVar20 = lStack_110;
                          uStack_198 = SUB87(ppppuStack_118,0);
                          uStack_191 = (undefined1)((ulong)ppppuStack_118 >> 0x38);
                          ppppuStack_1a0 = ppppuStack_120;
                          ppppuStack_118 = (uint ****)0x0;
                          lStack_110 = 0;
                          ppppuStack_120 = (uint ****)0x0;
                          uStack_190 = (undefined7)lVar20;
                          cStack_189 = (char)((ulong)lVar20 >> 0x38);
                          ppuStack_188 = (uint **)0x0;
                          func_0x000107c2b080(&ppppuStack_1a0);
                          FUN_10a7ad610(&ppppuStack_260,ppuStack_188,&ppppuStack_1a0,
                                        (uint *)((long)pppppuVar11 + 0x24));
                          if (cStack_189 < '\0') {
                            __ZdlPv(ppppuStack_1a0);
                          }
                          if (lStack_110 < 0) {
                            __ZdlPv(ppppuStack_120);
                          }
                        }
                      }
                    }
                  }
                  (**(code **)(*plVar25 + 0x1f0))(&uStack_138,plVar25);
                  ppppuStack_280 = (uint ****)param_1[0x22];
                  ppppuStack_278 = (uint ****)&ppppuStack_260;
                  lStack_270 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                  lStack_268 = CONCAT17(uStack_129,uStack_130) - lStack_270 >> 5;
                  ppppuStack_298 = (uint ****)0x0;
                  plStack_290 = (long *)0x0;
                  uStack_288 = 0;
                  FUN_10a7771c8(&plStack_2b0,param_1 + 0x35,&ppppuStack_280,&ppppuStack_298);
                  plVar22 = plStack_2a8;
                  lVar20 = lStack_230;
                  for (plVar25 = plStack_2b0; plVar25 != plVar22; plVar25 = plVar25 + 0xd) {
                    lVar18 = param_1[0x35];
                    lStack_230 = lVar20;
                    if (lVar18 != param_1[0x36]) {
                      do {
                        if (*(long *)(lVar18 + 0x18) == plVar25[3]) {
                          uVar4 = *(ushort *)(plVar25 + 4);
                          uVar3 = *(ushort *)(lVar18 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar18 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar23 = *(uint *)(lVar18 + 0x28),
                               (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,(long)plVar25 + 0x24,
                                                  (int)(short)uVar4,(int)(short)uVar3);
                              FUN_10a7a33dc(lVar20 + (long)pppppuVar11,(ulong)uVar23,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar18 = lVar18 + 0x30;
                      } while (lVar18 != param_1[0x36]);
                    }
                    lVar20 = lStack_230;
                  }
                  lVar17 = param_1[0x3e];
                  for (lVar18 = param_1[0x3d]; lStack_230 = lVar20, lVar18 != lVar17;
                      lVar18 = lVar18 + 0x68) {
                    lVar19 = param_1[0x35];
                    if (lVar19 != param_1[0x36]) {
                      do {
                        if (*(long *)(lVar19 + 0x18) == *(long *)(lVar18 + 0x18)) {
                          uVar4 = *(ushort *)(lVar18 + 0x20);
                          uVar3 = *(ushort *)(lVar19 + 0x20);
                          if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                             (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7
                              ) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                            pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar19 + 0x24);
                            if ((pppppuVar11 <= unaff_x21) &&
                               (uVar23 = *(uint *)(lVar19 + 0x28),
                               (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                              func_0x00010a77bef4(&ppppuStack_1a0,lVar18 + 0x24,(int)(short)uVar4,
                                                  (int)(short)uVar3);
                              FUN_10a7a33dc(lVar20 + (long)pppppuVar11,(ulong)uVar23,
                                            (int)(short)uVar3,&ppppuStack_1a0);
                              if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])(&ppppuStack_1a0);
                            }
                          }
                          break;
                        }
                        lVar19 = lVar19 + 0x30;
                      } while (lVar19 != param_1[0x36]);
                    }
                    lVar20 = lStack_230;
                  }
                  ppppuStack_1a0 = (uint ****)(ulong)*(uint *)(param_1 + 0x4b);
                  plVar25 = plStack_220 + 0x57;
                  FUN_10a5e7d1c(plVar25,&ppppuStack_1a0);
                  if (((plVar25 != (long *)0x0) && ((char)plVar25[0xe] == '\x01')) &&
                     (plVar25 = (long *)plVar25[0xb], plVar25 != (long *)0x0)) {
                    do {
                      plVar22 = (long *)plVar25[6];
                      if ((plVar22 != (long *)plVar25[7]) &&
                         (plVar27 = (long *)*plVar22, plVar27 != (long *)0x0)) {
                        lStack_2c0 = 0;
                        lStack_2b8 = 0;
                        lVar20 = plVar27[1];
                        if (lVar20 != 0) {
                          __ZNSt3__119__shared_weak_count4lockEv();
                          if (lVar20 != 0) {
                            lStack_2c0 = *plVar27;
                          }
                          lStack_2b8 = lVar20;
                          if (lStack_2c0 != 0) {
                            lVar20 = lStack_2c0;
                            FUN_10a7738f8();
                            bVar8 = true;
                            bVar9 = false;
                            if (0 < (int)lVar20) {
                              iVar13 = (int)((ulong)lVar20 >> 0x20);
                              bVar9 = SBORROW4(iVar13,1);
                              bVar8 = iVar13 + -1 < 0;
                            }
                            lStack_2c8 = lVar20;
                            if (bVar8 == bVar9) {
                              if (*(char *)((long)plVar25 + 0x27) < '\0') {
                                func_0x000107c3192c(&ppppuStack_d0,plVar25[2],plVar25[3]);
                              }
                              else {
                                ppppuStack_c8 = (uint ****)plVar25[3];
                                ppppuStack_d0 = (uint ****)plVar25[2];
                                ppppuStack_c0 = (uint ****)plVar25[4];
                              }
                              func_0x0001098998d4(&ppppuStack_2e0,&PTR_DAT_110c17658);
                              pppppuVar11 = (uint *****)ppppuStack_2d8;
                              pppppuVar6 = (undefined8 *****)ppppuStack_2e0;
                              if (-1 < (char)bStack_2c9) {
                                pppppuVar11 = (uint *****)(ulong)bStack_2c9;
                                pppppuVar6 = &ppppuStack_2e0;
                              }
                              pppppuVar28 = &ppppuStack_d0;
                              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                        (pppppuVar28,pppppuVar6,pppppuVar11);
                              ppppuStack_1a0 = *pppppuVar28;
                              uStack_1b0 = SUB87(pppppuVar28[1],0);
                              uStack_1a9 = (undefined1)*(undefined8 *)((long)pppppuVar28 + 0xf);
                              uStack_1a8 = (undefined7)
                                           ((ulong)*(undefined8 *)((long)pppppuVar28 + 0xf) >> 8);
                              cStack_189 = *(char *)((long)pppppuVar28 + 0x17);
                              pppppuVar28[1] = (uint ****)0x0;
                              pppppuVar28[2] = (uint ****)0x0;
                              *pppppuVar28 = (uint ****)0x0;
                              uStack_190 = uStack_1a8;
                              uStack_198 = uStack_1b0;
                              uStack_191 = uStack_1a9;
                              uStack_1b0 = 0;
                              uStack_1a9 = 0;
                              uStack_1a8 = 0;
                              ppuStack_188 = (uint **)0x0;
                              func_0x000107c2b080(&ppppuStack_1a0);
                              uStack_180._0_2_ = 10;
                              FUN_10a77d1ac(&ppppuStack_120,param_1[0x22],plVar25 + 2,
                                            *(undefined8 *)(*plVar22 + 0x18),&lStack_2c8);
                              uStack_174 = SUB84(ppppuStack_118,0);
                              uStack_170 = (undefined4)((ulong)ppppuStack_118 >> 0x20);
                              fStack_17c = SUB84(ppppuStack_120,0);
                              fStack_178 = (float)((ulong)ppppuStack_120 >> 0x20);
                              uStack_164 = (undefined4)uStack_108;
                              uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                              uStack_16c = (undefined4)lStack_110;
                              uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                              uStack_15c = uStack_100;
                              bStack_13c = 7;
                              func_0x00010a77d228(param_1[0x35],param_1[0x36],&lStack_230,
                                                  &ppppuStack_1a0);
                              func_0x00010a777f38(&ppppuStack_1a0);
                              if ((char)bStack_2c9 < '\0') {
                                __ZdlPv(ppppuStack_2e0);
                              }
                            }
                          }
                        }
                        func_0x00010a1f74b8(&lStack_2c0);
                      }
                      plVar25 = (long *)*plVar25;
                    } while (plVar25 != (long *)0x0);
                  }
                  lVar20 = lStack_230;
                  puVar26 = (ulong *)param_1[0x35];
                  puVar1 = (ulong *)param_1[0x36];
                  if (puVar26 != puVar1) {
                    do {
                      FUN_10a77c0e8(&ppppuStack_120,param_1,puVar26);
                      if (bStack_dc == 1) {
                        if (*(char *)((long)puVar26 + 0x17) < '\0') {
                          func_0x000107c3192c(&ppppuStack_1a0,*puVar26,puVar26[1]);
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_180._0_2_ = (ushort)puVar26[4];
                          if ((bStack_dc & 1) == 0) {
LAB_10a77b3e0:
                    /* WARNING: Does not return */
                            pcVar16 = (code *)SoftwareBreakpoint(1,0x10a77b3e4);
                            (*pcVar16)();
                          }
                        }
                        else {
                          ppppuStack_1a0 = (uint ****)*puVar26;
                          ppuStack_188 = (uint **)puVar26[3];
                          uStack_198 = (undefined7)puVar26[1];
                          uStack_191 = (undefined1)(puVar26[1] >> 0x38);
                          uStack_190 = (undefined7)puVar26[2];
                          cStack_189 = (char)(puVar26[2] >> 0x38);
                          uStack_180._0_2_ = (ushort)puVar26[4];
                        }
                        bStack_13c = 0x10;
                        ppppuStack_d0 = (uint ****)&fStack_17c;
                        if (bStack_e0 == 0) {
                          uVar15 = 0;
                          fStack_17c = ppppuStack_120._0_4_;
                        }
                        else {
                          FUN_10a3652d8(&ppppuStack_d0,&ppppuStack_120);
                          uVar15 = (ulong)bStack_e0;
                        }
                        bStack_13c = (byte)uVar15;
                        for (lVar18 = param_1[0x35]; lVar18 != param_1[0x36]; lVar18 = lVar18 + 0x30
                            ) {
                          if (*(uint ****)(lVar18 + 0x18) == (uint ***)ppuStack_188) {
                            uVar4 = *(ushort *)(lVar18 + 0x20);
                            if ((((ushort)uStack_180 == uVar4) ||
                                ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                               ((((ushort)uStack_180 < 7 &&
                                 (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                              pppppuVar11 = (uint *****)(ulong)*(uint *)(lVar18 + 0x24);
                              if ((pppppuVar11 <= unaff_x21) &&
                                 (uVar23 = *(uint *)(lVar18 + 0x28),
                                 (ulong)uVar23 <= (ulong)((long)unaff_x21 - (long)pppppuVar11))) {
                                func_0x00010a77bef4(&ppppuStack_d0,&fStack_17c,
                                                    (int)(short)(ushort)uStack_180,(int)(short)uVar4
                                                   );
                                FUN_10a7a33dc(lVar20 + (long)pppppuVar11,(ulong)uVar23,
                                              (int)(short)uVar4,&ppppuStack_d0);
                                if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&ppppuStack_d0);
                                uVar15 = (ulong)bStack_13c;
                              }
                            }
                            break;
                          }
                        }
                        if (0x10 < (uint)uVar15) goto LAB_10a77b3e0;
                        (*(code *)(&PTR_FUN_110ba1f88)[uVar15])(&fStack_17c);
                        if (cStack_189 < '\0') {
                          __ZdlPv(ppppuStack_1a0);
                        }
                        if ((bStack_dc & 1) != 0) {
                          if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                          (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&ppppuStack_120);
                        }
                      }
                      puVar26 = puVar26 + 6;
                    } while (puVar26 != puVar1);
                  }
                  ppppuStack_120 = (uint ****)CONCAT44(ppppuStack_120._4_4_,(int)param_1[0x1b]);
                  func_0x000107426fd8(ppppuStack_210 + 0xb,&ppppuStack_120,&ppppuStack_120);
                  FUN_10a7a31fc(&plStack_2b0);
                  ppppuStack_1a0 = (uint ****)&ppppuStack_298;
                  FUN_10a044868(&ppppuStack_1a0);
                  ppppuStack_1a0 = (uint ****)&uStack_138;
                  FUN_10a044868(&ppppuStack_1a0);
                  FUN_10a7ad5ac(&ppppuStack_260);
                }
              }
              plVar25 = plVar10 + 1;
              do {
                lVar20 = *plVar25;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                if (bVar8) {
                  *plVar25 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                param_1 = plVar10;
              }
            }
          }
          unaff_x20 = plStack_208;
          if (plStack_208 == (long *)0x0) goto LAB_10a77af14;
        }
        unaff_x20 = plStack_208;
        plVar10 = plStack_208 + 1;
        do {
          lVar20 = *plVar10;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar8) {
            *plVar10 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
      }
    }
LAB_10a77af14:
    if (plStack_1b8 != (long *)0x0) {
LAB_10a77af1c:
      plVar25 = plStack_1b8;
      plVar10 = plStack_1b8 + 1;
      do {
        lVar20 = *plVar10;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar25);
      }
    }
LAB_10a77af4c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
LAB_10a77af8c:
    iVar13 = 0x137eb960;
    ___cxa_guard_acquire();
    if (iVar13 != 0) {
      func_0x000107c2b07c(0x1137eb9a8,&DAT_10f67535f);
      ___cxa_atexit(FUN_10a32edf4,0x1137eb9a8,0x100000000);
      ___cxa_guard_release(0x1137eb960);
    }
  } while( true );
}



/* Entry: 10a77b3e4; end: 10a77b5f3;  */

void FUN_10a77b3e4(long param_1)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long *plVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined ***unaff_x20;
  code **unaff_x21;
  long lStack_f0;
  long lStack_e8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_88;
  undefined ***pppuStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = *(undefined ****)(param_1 + 0x140);
  if (pppuVar5 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuStack_80 = pppuVar5;
    if (pppuVar5 != (undefined ***)0x0) {
      lStack_88 = *(long *)(param_1 + 0x138);
      if (lStack_88 != 0) {
        unaff_x21 = &pcStack_78;
        pcStack_78 = FUN_10a7ad564;
        ppuStack_70 = &PTR_DAT_110c185a0;
        puVar8 = (undefined8 *)(*(long *)(lStack_88 + 0x140) + 0x38);
        plVar6 = (long *)*puVar8;
        lStack_68 = param_1;
        (**(code **)(*plVar6 + 0x30))(auStack_a0,plVar6,puVar8,&pcStack_78,0);
        FUN_10a42cd4c(param_1 + 0x218,auStack_a0);
        if (lStack_98 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        (*(code *)*ppuStack_70)(&ppuStack_70);
      }
      pppuVar7 = pppuVar5 + 1;
      do {
        ppuVar9 = *pppuVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar4) {
          *pppuVar7 = (undefined **)((long)ppuVar9 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      unaff_x20 = pppuVar5;
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuVar5)[2])(pppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar5);
      }
    }
  }
  pppuVar7 = *(undefined ****)(param_1 + 0x250);
  pppuVar5 = pppuVar7;
  pppuStack_c0 = unaff_x20;
  if (pppuVar7 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuVar5 = pppuVar7;
    pppuStack_80 = pppuVar7;
    if (pppuVar7 != (undefined ***)0x0) {
      lStack_88 = *(long *)(param_1 + 0x248);
      if ((lStack_88 != 0) && (*(long *)(lStack_88 + 0x300) != 0)) {
        unaff_x21 = &pcStack_78;
        pcStack_78 = (code *)0x10a7ad588;
        ppuStack_70 = &PTR_DAT_110c185b8;
        puVar8 = (undefined8 *)(*(long *)(lStack_88 + 0x300) + 0x38);
        plVar6 = (long *)*puVar8;
        lStack_68 = param_1;
        (**(code **)(*plVar6 + 0x30))(auStack_a0,plVar6,puVar8,&pcStack_78,0);
        FUN_10a42cd4c(param_1 + 0x230,auStack_a0);
        if (lStack_98 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        pppuVar5 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
      }
      pppuVar1 = pppuVar7 + 1;
      do {
        ppuVar9 = *pppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar4) {
          *pppuVar1 = (undefined **)((long)ppuVar9 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppuStack_c0 = pppuVar7;
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuVar7)[2])(pppuVar7);
        pppuVar5 = pppuVar7;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(unaff_x21 + 1);
  FUN_10a2f0180(&lStack_88);
  pppuVar7 = pppuVar5;
  __Unwind_Resume();
  pcStack_a8 = FUN_10a77b5f4;
  ppuVar9 = pppuVar7[0x4a];
  if (ppuVar9 != (undefined **)0x0) {
    pppuStack_b8 = pppuVar5;
    puStack_b0 = &stack0xfffffffffffffff0;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar9 != (undefined **)0x0) {
      ppuStack_d8 = pppuVar7[0x49];
      ppuStack_d0 = ppuVar9;
      if ((ppuStack_d8 != (undefined **)0x0) && (pppuVar7[0x40] != pppuVar7[0x41])) {
        (**(code **)(*ppuStack_d8 + 0x1e8))(&lStack_f0);
        FUN_10a77b6f0(pppuVar7,lStack_f0,(lStack_e8 - lStack_f0 >> 4) * 0x6db6db6db6db6db7);
        puStack_c8 = (undefined1 *)&lStack_f0;
        FUN_10a66db40(&puStack_c8);
      }
      ppuVar2 = ppuVar9 + 1;
      do {
        puVar10 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
      }
    }
  }
  return;
}



/* Entry: 10a77b5f4; end: 10a77b6ef;  */

void FUN_10a77b5f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  long *plStack_38;
  long *plStack_30;
  undefined1 *puStack_28;
  
  plVar4 = *(long **)(param_1 + 0x250);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      plStack_38 = *(long **)(param_1 + 0x248);
      plStack_30 = plVar4;
      if ((plStack_38 != (long *)0x0) && (*(long *)(param_1 + 0x200) != *(long *)(param_1 + 0x208)))
      {
        (**(code **)(*plStack_38 + 0x1e8))(&lStack_50);
        FUN_10a77b6f0(param_1,lStack_50,(lStack_48 - lStack_50 >> 4) * 0x6db6db6db6db6db7);
        puStack_28 = (undefined1 *)&lStack_50;
        FUN_10a66db40(&puStack_28);
      }
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a77b6f0; end: 10a77b893;  */

void FUN_10a77b6f0(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar7 = *(long *)(param_1 + 0x200);
  lVar8 = *(long *)(param_1 + 0x208);
  if (lVar7 != lVar8) {
    do {
      plVar3 = *(long **)(lVar7 + 0x40);
      if (plVar3 != (long *)0x0 && param_3 != 0) {
        puVar5 = (ulong *)(param_2 + 0x68);
        lVar6 = param_3 * 0x70;
        do {
          if ((puVar5[-10] == *(ulong *)(lVar7 + 0x18)) && (puVar5[-6] == *(ulong *)(lVar7 + 0x38)))
          {
            if ((*puVar5 == (ulong)*(uint *)(lVar7 + 0x54)) && (*(uint *)(lVar7 + 0x54) != 0)) {
              if (*puVar5 + (ulong)*(uint *)(lVar7 + 0x50) <= (ulong)(plVar3[1] - *plVar3)) {
                _memcpy(*plVar3 + (ulong)*(uint *)(lVar7 + 0x50),puVar5[-1]);
                plVar3 = *(long **)(param_1 + 0x250);
                if ((plVar3 != (long *)0x0) &&
                   (__ZNSt3__119__shared_weak_count4lockEv(), plStack_58 = plVar3,
                   plVar3 != (long *)0x0)) {
                  lStack_60 = *(long *)(param_1 + 0x248);
                  if (lStack_60 != 0) {
                    uStack_68 = (ulong)*(uint *)(param_1 + 600);
                    lVar6 = lStack_60 + 0x2b8;
                    FUN_10a5e7d1c(lVar6,&uStack_68);
                    if ((((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x18), lVar6 != 0)) &&
                        (*(long **)(lVar6 + 0x228) != *(long **)(lVar6 + 0x230))) &&
                       (lVar6 = **(long **)(lVar6 + 0x228), lVar6 != 0)) {
                      plVar4 = *(long **)(lVar7 + 0x40);
                      FUN_10a77b894(lVar6,lVar7 + 0x20,*(undefined4 *)((long)plVar4 + 0x1c),*plVar4,
                                    plVar4[1] - *plVar4);
                    }
                  }
                  plVar4 = plVar3 + 1;
                  do {
                    lVar6 = *plVar4;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                    if (bVar2) {
                      *plVar4 = lVar6 + -1;
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (lVar6 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
                  }
                }
              }
            }
            break;
          }
          puVar5 = puVar5 + 0xe;
          lVar6 = lVar6 + -0x70;
        } while (lVar6 != 0);
      }
      lVar7 = lVar7 + 0x58;
    } while (lVar7 != lVar8);
  }
  return;
}



/* Entry: 10a77b894; end: 10a77bcef;  */

void FUN_10a77b894(undefined8 param_1,long param_2,int param_3,long param_4,ulong param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 ***pppuVar4;
  ulong uVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 **ppuStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 **ppuStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 **ppuStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_61;
  
  if ((bRam00000001137eb958 & 1) == 0) {
    iVar6 = 0x137eb958;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x000107c2b07c(0x1137eb988,&DAT_10f66b492);
      ___cxa_atexit(FUN_10a32edf4,0x1137eb988,0x100000000);
      ___cxa_guard_release(0x1137eb958);
    }
  }
  if (((param_3 == 0x30) && (*(long *)(param_2 + 0x18) == lRam00000001137eb9a0)) && (0x2f < param_5)
     ) {
    uVar8 = 0;
    puVar9 = (undefined4 *)(param_4 + 0x20);
    do {
      uStack_78 = *(undefined8 *)(puVar9 + -6);
      uStack_80 = *(undefined8 *)(puVar9 + -8);
      uStack_88 = *(undefined8 *)(puVar9 + -2);
      uStack_90 = *(undefined8 *)(puVar9 + -4);
      uStack_94 = *puVar9;
      __ZNSt3__19to_stringEm(&ppuStack_c8,uVar8);
      pppuVar7 = &ppuStack_c8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (pppuVar7,0,&UNK_10f675443,0xc);
      puStack_e8 = pppuVar7[1];
      ppuStack_f0 = *pppuVar7;
      puStack_e0 = pppuVar7[2];
      pppuVar7[1] = (undefined8 **)0x0;
      pppuVar7[2] = (undefined8 **)0x0;
      *pppuVar7 = (undefined8 **)0x0;
      pppuVar7 = &ppuStack_f0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppuStack_f0,&DAT_10f62a9ea,1);
      uStack_a8 = (ulong)pppuVar7[1];
      ppuStack_b0 = *pppuVar7;
      uStack_a0 = (ulong)pppuVar7[2];
      pppuVar7[1] = (undefined8 **)0x0;
      pppuVar7[2] = (undefined8 **)0x0;
      *pppuVar7 = (undefined8 **)0x0;
      if ((long)puStack_e0 < 0) {
        __ZdlPv(ppuStack_f0);
      }
      if (lStack_b8 < 0) {
        __ZdlPv(ppuStack_c8);
      }
      uVar5 = uStack_a0;
      uVar3 = uStack_a8;
      if (-1 < (long)uStack_a0) {
        uVar3 = uStack_a0 >> 0x38;
      }
      FUN_10a003c90(&ppuStack_c8,uVar3 + 6,&uStack_61);
      pppuVar7 = (undefined8 ***)ppuStack_c8;
      if (-1 < lStack_b8) {
        pppuVar7 = &ppuStack_c8;
      }
      if (uVar3 != 0) {
        pppuVar4 = (undefined8 ***)ppuStack_b0;
        if (-1 < (long)uVar5) {
          pppuVar4 = &ppuStack_b0;
        }
        _memmove(pppuVar7,pppuVar4,uVar3);
      }
      puVar1 = (undefined4 *)((long)pppuVar7 + uVar3);
      *(undefined2 *)(puVar1 + 1) = 0x726f;
      *puVar1 = 0x6c6f632e;
      *(undefined1 *)((long)puVar1 + 6) = 0;
      puStack_e0 = (undefined8 *)lStack_b8;
      puStack_e8 = (undefined8 *)uStack_c0;
      ppuStack_f0 = ppuStack_c8;
      uStack_c0 = 0;
      lStack_b8 = 0;
      ppuStack_c8 = (undefined8 ***)0x0;
      uStack_d8 = 0;
      func_0x000107c2b080(&ppuStack_f0);
      FUN_10a0d9a1c(param_1,&ppuStack_f0,&uStack_80);
      if ((long)puStack_e0 < 0) {
        __ZdlPv(ppuStack_f0);
      }
      if (lStack_b8 < 0) {
        __ZdlPv(ppuStack_c8);
      }
      FUN_10a003c90(&ppuStack_c8,uVar3 + 10,&uStack_61);
      pppuVar7 = (undefined8 ***)ppuStack_c8;
      if (-1 < lStack_b8) {
        pppuVar7 = &ppuStack_c8;
      }
      if (uVar3 != 0) {
        pppuVar4 = (undefined8 ***)ppuStack_b0;
        if (-1 < (long)uVar5) {
          pppuVar4 = &ppuStack_b0;
        }
        _memmove(pppuVar7,pppuVar4,uVar3);
      }
      puVar2 = (undefined8 *)((long)pppuVar7 + uVar3);
      *puVar2 = 0x6954726f6c6f632e;
      *(undefined2 *)(puVar2 + 1) = 0x746e;
      *(undefined1 *)((long)puVar2 + 10) = 0;
      puStack_e0 = (undefined8 *)lStack_b8;
      puStack_e8 = (undefined8 *)uStack_c0;
      ppuStack_f0 = ppuStack_c8;
      ppuStack_c8 = (undefined8 ***)0x0;
      uStack_c0 = 0;
      lStack_b8 = 0;
      uStack_d8 = 0;
      func_0x000107c2b080(&ppuStack_f0);
      FUN_10a0d9a1c(param_1,&ppuStack_f0,&uStack_90);
      if ((long)puStack_e0 < 0) {
        __ZdlPv(ppuStack_f0);
      }
      if (lStack_b8 < 0) {
        __ZdlPv(ppuStack_c8);
      }
      FUN_10a003c90(&ppuStack_c8,uVar3 + 9,&uStack_61);
      pppuVar7 = (undefined8 ***)ppuStack_c8;
      if (-1 < lStack_b8) {
        pppuVar7 = &ppuStack_c8;
      }
      if (uVar3 != 0) {
        pppuVar4 = (undefined8 ***)ppuStack_b0;
        if (-1 < (long)uVar5) {
          pppuVar4 = &ppuStack_b0;
        }
        _memmove(pppuVar7,pppuVar4,uVar3);
      }
      *(undefined8 *)((long)pppuVar7 + uVar3) = 0x6c6163536e75722e;
      *(undefined2 *)((undefined8 *)((long)pppuVar7 + uVar3) + 1) = 0x65;
      puStack_e0 = (undefined8 *)lStack_b8;
      puStack_e8 = (undefined8 *)uStack_c0;
      ppuStack_f0 = ppuStack_c8;
      uStack_c0 = 0;
      lStack_b8 = 0;
      ppuStack_c8 = (undefined8 ***)0x0;
      uStack_d8 = 0;
      func_0x000107c2b080(&ppuStack_f0);
      FUN_10a0d9bd4(param_1,&ppuStack_f0,&uStack_94);
      if ((long)puStack_e0 < 0) {
        __ZdlPv(ppuStack_f0);
      }
      if (lStack_b8 < 0) {
        __ZdlPv(ppuStack_c8);
      }
      if ((long)uVar5 < 0) {
        __ZdlPv(ppuStack_b0);
      }
      puVar9 = puVar9 + 0xc;
      uVar8 = uVar8 + 1;
    } while (param_5 / 0x30 != uVar8);
  }
  return;
}



/* Entry: 10a77bcf0; end: 10a77be3f;  */

/* WARNING: Removing unreachable block (ram,0x00010a77ac50) */
/* WARNING: Removing unreachable block (ram,0x00010a779ee4) */
/* WARNING: Removing unreachable block (ram,0x00010a77a480) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a77bcf0(long *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  bool bVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  undefined1 *puVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  long *unaff_x20;
  uint *******unaff_x21;
  uint ******ppppppuVar25;
  long *plVar26;
  ulong *puVar27;
  long *plVar28;
  uint *******pppppppuVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int iStack_2e8;
  undefined8 *******pppppppuStack_2e0;
  uint *******pppppppuStack_2d8;
  byte bStack_2c9;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  uint *******pppppppuStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  uint *******pppppppuStack_280;
  uint *******pppppppuStack_278;
  long lStack_270;
  long lStack_268;
  uint *******pppppppuStack_260;
  uint *******pppppppuStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  long lStack_230;
  uint *******pppppppuStack_228;
  long *plStack_220;
  long *plStack_218;
  uint *******pppppppuStack_210;
  long *plStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint *****pppppuStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint *puStack_1c0;
  long *plStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  uint *******pppppppuStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  char cStack_189;
  uint *****pppppuStack_188;
  undefined4 uStack_180;
  float fStack_17c;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  byte bStack_13c;
  undefined8 uStack_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  uint *******pppppppuStack_120;
  uint *******pppppppuStack_118;
  long lStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  byte bStack_e0;
  byte bStack_dc;
  uint *******pppppppuStack_d0;
  uint *******pppppppuStack_c8;
  uint *******pppppppuStack_c0;
  long lStack_b8;
  byte bStack_90;
  long lStack_88;
  
  if (((*(byte *)((long)param_1 + 0x266) & 1) == 0) && (param_2[9] != 0)) {
    lVar19 = param_2[9] << 3;
    lVar21 = lVar19;
    puVar20 = param_2;
    do {
      puVar20 = puVar20 + 1;
      if ((undefined **)*puVar20 == &PTR_DAT_110c19330) {
        lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plVar12 = (long *)param_1[0x15];
        if (plVar12 == (long *)0x0) goto LAB_10a77af4c;
        __ZNSt3__119__shared_weak_count4lockEv();
        plStack_1b8 = plVar12;
        if (plVar12 == (long *)0x0) goto LAB_10a77af4c;
        puStack_1c0 = (uint *)param_1[0x14];
        if (puStack_1c0 == (uint *)0x0) goto LAB_10a77af1c;
        if (param_1[0x22] == 0) goto LAB_10a77af1c;
        if (param_1[0x24] == 0) goto LAB_10a77af1c;
        if (*(long *)(param_1[0x24] + 8) == -1) goto LAB_10a77af1c;
        uVar24 = *puStack_1c0;
        unaff_x20 = (long *)(ulong)uVar24;
        uVar22 = (ulong)(uVar24 * (int)param_1[0x1b]);
        uVar15 = uVar22 + (long)unaff_x20;
        uVar14 = *(long *)(puStack_1c0 + 4) - *(long *)(puStack_1c0 + 2);
        unaff_x21 = (uint *******)0x0;
        if (uVar15 <= uVar14) {
          unaff_x21 = (uint *******)(*(long *)(puStack_1c0 + 2) + uVar22);
        }
        if (uVar24 == 0) goto LAB_10a77af1c;
        if (uVar14 < uVar15) goto LAB_10a77af1c;
        _bzero(unaff_x21,unaff_x20);
        uStack_1f4 = 0;
        fStack_1f0 = 0.0;
        fStack_1fc = 0.0;
        fStack_1f8 = 0.0;
        fStack_200 = 1.0;
        fStack_1ec = 1.0;
        pppppuStack_1e8 = (uint *****)0x0;
        uStack_1e0 = (uint *****)0x0;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1d4 = 0;
        uStack_1d0 = 0;
        fStack_1d8 = 1.0;
        uStack_1c4 = 0x3f800000;
        plVar12 = (long *)param_1[0x28];
        if (plVar12 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          uStack_198 = SUB87(plVar12,0);
          uStack_191 = (undefined1)((ulong)plVar12 >> 0x38);
          if (plVar12 != (long *)0x0) {
            pppppppuStack_1a0 = (uint *******)param_1[0x27];
            if (pppppppuStack_1a0 != (uint *******)0x0) {
              ppppppuVar25 = pppppppuStack_1a0[0x28];
              if ((*(byte *)((long)ppppppuVar25 + 0x2a) & 0x24) != 0) {
                FUN_10a3e8fd4(ppppppuVar25);
              }
              pppppuStack_1e8 = ppppppuVar25[0x1b];
              fStack_1f8 = SUB84(ppppppuVar25[0x19],0);
              uStack_1f4 = (undefined4)((ulong)ppppppuVar25[0x19] >> 0x20);
              fStack_200 = SUB84(ppppppuVar25[0x18],0);
              fStack_1fc = (float)((ulong)ppppppuVar25[0x18] >> 0x20);
              fStack_1f0 = SUB84(ppppppuVar25[0x1a],0);
              fStack_1ec = (float)((ulong)ppppppuVar25[0x1a] >> 0x20);
              uStack_1e0 = ppppppuVar25[0x1c];
              fStack_1d8 = SUB84(ppppppuVar25[0x1d],0);
              uStack_1d4 = (undefined4)((ulong)ppppppuVar25[0x1d] >> 0x20);
              uStack_1c8 = SUB84(ppppppuVar25[0x1f],0);
              uStack_1c4 = (undefined4)((ulong)ppppppuVar25[0x1f] >> 0x20);
              uStack_1d0 = SUB84(ppppppuVar25[0x1e],0);
              uStack_1cc = (undefined4)((ulong)ppppppuVar25[0x1e] >> 0x20);
            }
            plVar26 = plVar12 + 1;
            do {
              lVar21 = *plVar26;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar7) {
                *plVar26 = lVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
        }
        pppppppuVar9 = (uint *******)param_1[0x4a];
        if ((pppppppuVar9 != (uint *******)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuStack_118 = pppppppuVar9,
           pppppppuVar9 != (uint *******)0x0)) {
          pppppppuStack_120 = (uint *******)param_1[0x49];
          if ((pppppppuStack_120 != (uint *******)0x0) &&
             (ppppppuVar25 = pppppppuStack_120[0x60], ppppppuVar25 != (uint ******)0x0)) {
            if ((*(byte *)((long)ppppppuVar25 + 0x2a) & 0x24) != 0) {
              FUN_10a3e8fd4(ppppppuVar25);
            }
            func_0x000109519fd0(&pppppppuStack_1a0,&fStack_200,ppppppuVar25 + 0x18);
            fStack_1f8 = (float)uStack_198;
            uStack_1f4 = (undefined4)(CONCAT17(uStack_191,uStack_198) >> 0x20);
            fStack_200 = SUB84(pppppppuStack_1a0,0);
            fStack_1fc = (float)((ulong)pppppppuStack_1a0 >> 0x20);
            pppppuStack_1e8 = pppppuStack_188;
            fStack_1f0 = (float)uStack_190;
            fStack_1ec = (float)(CONCAT17(cStack_189,uStack_190) >> 0x20);
            uStack_1e0 = (uint *****)
                         CONCAT44(fStack_17c,CONCAT22(uStack_180._2_2_,(ushort)uStack_180));
            fStack_1d8 = fStack_178;
            uStack_1d4 = uStack_174;
            uStack_1c8 = uStack_168;
            uStack_1c4 = uStack_164;
            uStack_1d0 = uStack_170;
            uStack_1cc = uStack_16c;
          }
          pppppppuVar10 = pppppppuVar9 + 1;
          do {
            ppppppuVar25 = *pppppppuVar10;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar10,0x10);
            if (bVar7) {
              *pppppppuVar10 = (uint ******)((long)ppppppuVar25 + -1);
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (ppppppuVar25 == (uint ******)0x0) {
            (*(code *)(*pppppppuVar9)[2])(pppppppuVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar9);
          }
        }
        if ((bRam00000001137eb960 & 1) == 0) goto LAB_10a77af8c;
        do {
          if ((bRam00000001137eb968 & 1) == 0) {
            iVar13 = 0x137eb968;
            ___cxa_guard_acquire();
            if (iVar13 != 0) {
              func_0x000107c2b07c(0x1137eb9c8,&DAT_10f67536e);
              ___cxa_atexit(FUN_10a32edf4,0x1137eb9c8,0x100000000);
              ___cxa_guard_release(0x1137eb968);
            }
          }
          if ((bRam00000001137eb970 & 1) == 0) {
            iVar13 = 0x137eb970;
            ___cxa_guard_acquire();
            if (iVar13 != 0) {
              func_0x000107c2b07c(0x1137eb9e8,&DAT_10f67537e);
              ___cxa_atexit(FUN_10a32edf4,0x1137eb9e8,0x100000000);
              ___cxa_guard_release(0x1137eb970);
            }
          }
          if ((bRam00000001137eb978 & 1) == 0) {
            iVar13 = 0x137eb978;
            ___cxa_guard_acquire();
            if (iVar13 != 0) {
              func_0x000107c2b07c(0x1137eba08,&DAT_10f675393);
              ___cxa_atexit(FUN_10a32edf4,0x1137eba08,0x100000000);
              ___cxa_guard_release(0x1137eb978);
            }
          }
          plVar12 = (long *)param_1[0x4a];
          if (plVar12 == (long *)0x0) {
LAB_10a7799c4:
            iStack_2e8 = 0;
          }
          else {
            __ZNSt3__119__shared_weak_count4lockEv();
            uStack_198 = SUB87(plVar12,0);
            uStack_191 = (undefined1)((ulong)plVar12 >> 0x38);
            if (plVar12 == (long *)0x0) goto LAB_10a7799c4;
            pppppppuVar9 = (uint *******)param_1[0x49];
            pppppppuStack_1a0 = pppppppuVar9;
            if (pppppppuVar9 == (uint *******)0x0) {
              iStack_2e8 = 0;
            }
            else {
              func_0x00010a777f8c();
              iStack_2e8 = (int)pppppppuVar9;
            }
            plVar26 = plVar12 + 1;
            do {
              lVar21 = *plVar26;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar7) {
                *plVar26 = lVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          lVar21 = param_1[0x29];
          lVar19 = param_1[0x2a];
          if (lVar21 != lVar19) {
            plVar12 = (long *)(*(long *)(param_1[0x22] + 0x1b8) + 8);
            do {
              uVar15 = *(ulong *)(lVar21 + 0x18);
              uVar24 = (uint)unaff_x20;
              if (uVar15 == uRam00000001137eb9c0) {
                fStack_178 = fStack_1d8;
                uStack_174 = uStack_1d4;
                uStack_168 = uStack_1c8;
                uStack_164 = uStack_1c4;
                uStack_170 = uStack_1d0;
                uStack_16c = uStack_1cc;
                pppppppuStack_1a0 = (uint *******)CONCAT44(fStack_1fc,fStack_200);
                uStack_198 = (undefined7)CONCAT44(uStack_1f4,fStack_1f8);
                uStack_191 = (undefined1)((uint)uStack_1f4 >> 0x18);
                pppppuStack_188 = pppppuStack_1e8;
                uStack_190 = (undefined7)CONCAT44(fStack_1ec,fStack_1f0);
                cStack_189 = (char)((uint)fStack_1ec >> 0x18);
                uVar15 = 8;
                uStack_160 = CONCAT31(uStack_160._1_3_,8);
                uVar14 = (ulong)*(uint *)(lVar21 + 0x24);
                fStack_17c = uStack_1e0._4_4_;
                uStack_180 = (float)uStack_1e0;
                if (*(uint *)(lVar21 + 0x24) <= uVar24) {
                  uVar15 = (ulong)*(uint *)(lVar21 + 0x28);
                  if ((long)unaff_x20 - uVar14 < uVar15) {
                    uVar15 = 8;
                  }
                  else {
LAB_10a779bb8:
                    FUN_10a7a33dc((long)unaff_x21 + uVar14,uVar15,(long)*(short *)(lVar21 + 0x20),
                                  &pppppppuStack_1a0);
                    uVar15 = (ulong)(byte)uStack_160;
                    if (0x10 < (byte)uStack_160) goto LAB_10a77b3e0;
                  }
                }
LAB_10a779bd4:
                pcVar16 = (code *)(&PTR_FUN_110ba1f88)[uVar15];
LAB_10a779bd8:
                (*pcVar16)(&pppppppuStack_1a0);
              }
              else {
                if (uVar15 == uRam00000001137eb9e0) {
                  fVar31 = -(uStack_1e0._4_4_ * pppppuStack_1e8._0_4_) + fStack_1d8 * fStack_1ec;
                  fVar33 = -(fStack_1ec * fStack_1f8) + pppppuStack_1e8._0_4_ * fStack_1fc;
                  fVar32 = 1.0 / (-(fStack_1f0 *
                                   (-(uStack_1e0._4_4_ * fStack_1f8) + fStack_1d8 * fStack_1fc)) +
                                  fVar31 * fStack_200 + fVar33 * (float)uStack_1e0);
                  uStack_180 = (-(fStack_1f0 * fStack_1fc) + fStack_1ec * fStack_200) * fVar32;
                  pppppppuStack_1a0 =
                       (uint *******)
                       CONCAT44((-(fStack_1f0 * fStack_1d8) -
                                -((float)uStack_1e0 * pppppuStack_1e8._0_4_)) * fVar32,
                                fVar31 * fVar32);
                  fVar31 = (-(fStack_1fc * fStack_1d8) - -(uStack_1e0._4_4_ * fStack_1f8)) * fVar32;
                  fVar30 = (-(fStack_200 * uStack_1e0._4_4_) - -((float)uStack_1e0 * fStack_1fc)) *
                           fVar32;
                  pppppuStack_188 =
                       (uint *****)
                       CONCAT44((-(fStack_200 * pppppuStack_1e8._0_4_) - -(fStack_1f0 * fStack_1f8))
                                * fVar32,fVar33 * fVar32);
                  uStack_198 = (undefined7)
                               CONCAT44(fVar31,(-((float)uStack_1e0 * fStack_1ec) +
                                               uStack_1e0._4_4_ * fStack_1f0) * fVar32);
                  uStack_191 = (undefined1)((uint)fVar31 >> 0x18);
                  uStack_190 = (undefined7)
                               CONCAT44(fVar30,(-((float)uStack_1e0 * fStack_1f8) +
                                               fStack_1d8 * fStack_200) * fVar32);
                  cStack_189 = (char)((uint)fVar30 >> 0x18);
                  uVar15 = 7;
                  uStack_160 = CONCAT31(uStack_160._1_3_,7);
                  uVar14 = (ulong)*(uint *)(lVar21 + 0x24);
                  if (*(uint *)(lVar21 + 0x24) <= uVar24) {
                    uVar15 = (ulong)*(uint *)(lVar21 + 0x28);
                    if (uVar15 <= (long)unaff_x20 - uVar14) goto LAB_10a779bb8;
                    uVar15 = 7;
                  }
                  goto LAB_10a779bd4;
                }
                if (uVar15 == uRam00000001137eba00) {
                  iVar13 = *(int *)((long)param_1 + 0xdc);
LAB_10a779b88:
                  pppppppuStack_1a0 = (uint *******)CONCAT44(pppppppuStack_1a0._4_4_,iVar13);
                  uVar15 = 9;
                  uStack_160 = CONCAT31(uStack_160._1_3_,9);
                  uVar14 = (ulong)*(uint *)(lVar21 + 0x24);
                  if (*(uint *)(lVar21 + 0x24) <= uVar24) {
                    uVar15 = (ulong)*(uint *)(lVar21 + 0x28);
                    if (uVar15 <= (long)unaff_x20 - uVar14) goto LAB_10a779bb8;
                    uVar15 = 9;
                  }
                  goto LAB_10a779bd4;
                }
                iVar13 = iStack_2e8;
                if (uVar15 == uRam00000001137eba20) goto LAB_10a779b88;
                pppppppuStack_1a0 = (uint *******)((ulong)pppppppuStack_1a0 & 0xffffffffffffff00);
                uStack_15c = uStack_15c & 0xffffff00;
                plVar23 = (long *)*plVar12;
                plVar26 = plVar12;
                if (plVar23 != (long *)0x0) {
                  do {
                    lVar17 = 8;
                    if (uVar15 <= (ulong)plVar23[7]) {
                      lVar17 = 0;
                      plVar26 = plVar23;
                    }
                    plVar23 = *(long **)((long)plVar23 + lVar17);
                  } while (plVar23 != (long *)0x0);
                  if (((plVar26 != plVar12) && ((ulong)plVar26[7] <= uVar15)) &&
                     (lVar17 = plVar26[8], lVar17 != 0)) {
                    uVar4 = *(ushort *)(lVar17 + 0x20);
                    uVar3 = *(ushort *)(lVar21 + 0x20);
                    if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                       (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) && uVar3 < 7) &&
                        (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                      func_0x00010a77bef4(&pppppppuStack_120,lVar17 + 0x24,(int)(short)uVar4,
                                          (int)(short)uVar3);
                      FUN_10a77c0b8(&pppppppuStack_1a0,&pppppppuStack_120);
                      if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                      (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&pppppppuStack_120);
                    }
                  }
                }
                FUN_10a77c0e8(&pppppppuStack_120,param_1,lVar21);
                if (bStack_dc == 1) {
                  func_0x00010a7a3610(&pppppppuStack_1a0,&pppppppuStack_120);
                  if ((bStack_dc & 1) != 0) {
                    if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                    (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&pppppppuStack_120);
                  }
                }
                if ((char)uStack_15c == '\x01') {
                  uVar2 = *(uint *)(lVar21 + 0x24);
                  if ((uVar2 <= uVar24) &&
                     ((ulong)*(uint *)(lVar21 + 0x28) <= (long)unaff_x20 - (ulong)uVar2)) {
                    FUN_10a7a33dc((long)unaff_x21 + (ulong)uVar2,(ulong)*(uint *)(lVar21 + 0x28),
                                  (long)*(short *)(lVar21 + 0x20),&pppppppuStack_1a0);
                    if ((char)uStack_15c != '\x01') goto LAB_10a779be0;
                  }
                  if ((ulong)(byte)uStack_160 < 0x11) {
                    pcVar16 = (code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160];
                    goto LAB_10a779bd8;
                  }
                  goto LAB_10a77b3e0;
                }
              }
LAB_10a779be0:
              lVar21 = lVar21 + 0x30;
            } while (lVar21 != lVar19);
          }
          pppppppuStack_1a0 = (uint *******)CONCAT44(pppppppuStack_1a0._4_4_,(int)param_1[0x1b]);
          func_0x000107426fd8(puStack_1c0 + 0x16,&pppppppuStack_1a0,&pppppppuStack_1a0);
          plVar12 = (long *)param_1[0x17];
          if (plVar12 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_290 = plVar12;
            if (plVar12 != (long *)0x0) {
              unaff_x21 = (uint *******)param_1[0x16];
              pppppppuStack_298 = unaff_x21;
              if (unaff_x21 != (uint *******)0x0) {
                plVar12 = (long *)param_1[0x4a];
                if (plVar12 != (long *)0x0) {
                  __ZNSt3__119__shared_weak_count4lockEv();
                  plStack_2a8 = plVar12;
                  if (plVar12 != (long *)0x0) {
                    plVar26 = (long *)param_1[0x49];
                    plStack_2b0 = plVar26;
                    if (plVar26 != (long *)0x0) {
                      uVar24 = *(uint *)unaff_x21;
                      uVar14 = (ulong)(uVar24 * *(int *)((long)param_1 + 0xdc));
                      uVar15 = uVar14 + (long)(ulong)uVar24;
                      pppppppuVar9 = unaff_x21 + 1;
                      uVar22 = (long)unaff_x21[2] - (long)*pppppppuVar9;
                      unaff_x21 = (uint *******)0x0;
                      if (uVar15 <= uVar22) {
                        unaff_x21 = (uint *******)(ulong)uVar24;
                      }
                      pppppppuStack_2e0 = (undefined8 *******)0x0;
                      if (uVar15 <= uVar22) {
                        pppppppuStack_2e0 = (undefined8 *******)((long)*pppppppuVar9 + uVar14);
                      }
                      pppppppuStack_2d8 = unaff_x21;
                      if (unaff_x21 != (uint *******)0x0) {
                        _bzero(pppppppuStack_2e0,unaff_x21);
                        if ((*(char *)((long)param_1 + 0xe4) == '\x01') &&
                           (1 < *(uint *)(param_1 + 0x1c))) {
                          pppppppuStack_118 = (uint *******)0x0;
                          pppppppuStack_120 = (uint *******)0x0;
                          uStack_108 = 0;
                          lStack_110 = 0;
                          uStack_100 = 0x3f800000;
                          pppppppuVar10 = (uint *******)param_1[0x3e];
                          for (pppppppuVar9 = (uint *******)param_1[0x3d];
                              pppppppuVar9 != pppppppuVar10; pppppppuVar9 = pppppppuVar9 + 0xd) {
                            pppppppuStack_258 =
                                 (uint *******)(long)*(char *)((long)pppppppuVar9 + 0x17);
                            pppppppuStack_260 = pppppppuVar9;
                            if ((long)pppppppuStack_258 < 0) {
                              pppppppuStack_258 = (uint *******)pppppppuVar9[1];
                              pppppppuStack_260 = (uint *******)*pppppppuVar9;
                            }
                            if (*(short *)(pppppppuVar9 + 4) == 6) {
                              pppppppuVar29 = (uint *******)&pppppppuStack_260;
                              FUN_10a159054(pppppppuVar29,&UNK_10f675465,10);
                              if (((int)pppppppuVar29 != 0) &&
                                 (*(char *)((long)pppppppuVar9 + 100) == '\t')) {
                                pppppppuStack_278 = pppppppuStack_258;
                                if ((uint *******)((long)pppppppuStack_258 + -10) <=
                                    pppppppuStack_258) {
                                  pppppppuStack_278 = (uint *******)((long)pppppppuStack_258 + -10);
                                }
                                pppppppuStack_280 = pppppppuStack_260;
                                if (pppppppuStack_278 != (uint *******)0x0) {
                                  func_0x0001098998d4(&pppppppuStack_d0,&pppppppuStack_280);
                                  pppppppuVar29 = pppppppuStack_c0;
                                  uStack_198 = SUB87(pppppppuStack_c8,0);
                                  uStack_191 = (undefined1)((ulong)pppppppuStack_c8 >> 0x38);
                                  pppppppuStack_1a0 = pppppppuStack_d0;
                                  pppppppuStack_c8 = (uint *******)0x0;
                                  pppppppuStack_c0 = (uint *******)0x0;
                                  pppppppuStack_d0 = (uint *******)0x0;
                                  uStack_190 = SUB87(pppppppuVar29,0);
                                  cStack_189 = (char)((ulong)pppppppuVar29 >> 0x38);
                                  pppppuStack_188 = (uint *****)0x0;
                                  func_0x000107c2b080(&pppppppuStack_1a0);
                                  FUN_10a7ad610(&pppppppuStack_120,pppppuStack_188,
                                                &pppppppuStack_1a0,
                                                (uint *)((long)pppppppuVar9 + 0x24));
                                  if (cStack_189 < '\0') {
                                    __ZdlPv(pppppppuStack_1a0);
                                  }
                                }
                              }
                            }
                          }
                          (**(code **)(*plVar26 + 0x1f0))(&pppppppuStack_260,plVar26);
                          pppppppuStack_d0 = (uint *******)param_1[0x22];
                          pppppppuStack_c8 = (uint *******)&pppppppuStack_120;
                          lStack_b8 = (long)pppppppuStack_258 - (long)pppppppuStack_260 >> 5;
                          pppppppuStack_c0 = pppppppuStack_260;
                          pppppppuStack_280 = (uint *******)0x0;
                          pppppppuStack_278 = (uint *******)0x0;
                          lStack_270 = 0;
                          FUN_10a7771c8(&uStack_138,param_1 + 0x31,&pppppppuStack_d0,
                                        &pppppppuStack_280);
                          lVar19 = CONCAT17(uStack_129,uStack_130);
                          pppppppuVar6 = pppppppuStack_2e0;
                          for (lVar21 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                              pppppppuStack_2e0 = pppppppuVar6, lVar21 != lVar19;
                              lVar21 = lVar21 + 0x68) {
                            lVar17 = param_1[0x31];
                            if (lVar17 != param_1[0x32]) {
                              do {
                                if (*(long *)(lVar17 + 0x18) == *(long *)(lVar21 + 0x18)) {
                                  uVar4 = *(ushort *)(lVar21 + 0x20);
                                  uVar3 = *(ushort *)(lVar17 + 0x20);
                                  if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                                     (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                      uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                                    pppppppuVar9 = (uint *******)(ulong)*(uint *)(lVar17 + 0x24);
                                    if ((pppppppuVar9 <= unaff_x21) &&
                                       (uVar24 = *(uint *)(lVar17 + 0x28),
                                       (ulong)uVar24 <=
                                       (ulong)((long)unaff_x21 - (long)pppppppuVar9))) {
                                      func_0x00010a77bef4(&pppppppuStack_1a0,lVar21 + 0x24,
                                                          (int)(short)uVar4,(int)(short)uVar3);
                                      FUN_10a7a33dc((long)pppppppuVar6 + (long)pppppppuVar9,
                                                    (ulong)uVar24,(int)(short)uVar3,
                                                    &pppppppuStack_1a0);
                                      if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                      (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])
                                                (&pppppppuStack_1a0);
                                    }
                                  }
                                  break;
                                }
                                lVar17 = lVar17 + 0x30;
                              } while (lVar17 != param_1[0x32]);
                            }
                            pppppppuVar6 = pppppppuStack_2e0;
                          }
                          FUN_10a7a31fc(&uStack_138);
                          pppppppuStack_1a0 = (uint *******)&pppppppuStack_280;
                          FUN_10a044868(&pppppppuStack_1a0);
                          pppppppuStack_1a0 = (uint *******)&pppppppuStack_260;
                          FUN_10a044868(&pppppppuStack_1a0);
                          FUN_10a7ad5ac(&pppppppuStack_120);
                        }
                        else {
                          lVar21 = param_1[0x22];
                          (**(code **)(*plVar26 + 0x1e8))(&pppppppuStack_1a0,plVar26);
                          (**(code **)(*plVar26 + 0x1f0))(&pppppppuStack_d0,plVar26);
                          FUN_10a77c4d0(&pppppppuStack_120,lVar21,&pppppppuStack_1a0,
                                        &pppppppuStack_d0,iStack_2e8 != 1);
                          pppppppuStack_260 = (uint *******)&pppppppuStack_d0;
                          FUN_10a044868(&pppppppuStack_260);
                          pppppppuStack_d0 = (uint *******)&pppppppuStack_1a0;
                          FUN_10a66db40(&pppppppuStack_d0);
                          pppppppuVar10 = pppppppuStack_118;
                          pppppppuVar6 = pppppppuStack_2e0;
                          for (pppppppuVar9 = pppppppuStack_120; pppppppuStack_2e0 = pppppppuVar6,
                              pppppppuVar9 != pppppppuVar10; pppppppuVar9 = pppppppuVar9 + 0xd) {
                            lVar21 = param_1[0x31];
                            if (lVar21 != param_1[0x32]) {
                              do {
                                if (*(uint *******)(lVar21 + 0x18) == pppppppuVar9[3]) {
                                  uVar4 = *(ushort *)(pppppppuVar9 + 4);
                                  uVar3 = *(ushort *)(lVar21 + 0x20);
                                  if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                                     (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                      uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                                    pppppppuVar29 = (uint *******)(ulong)*(uint *)(lVar21 + 0x24);
                                    if ((pppppppuVar29 <= unaff_x21) &&
                                       (uVar24 = *(uint *)(lVar21 + 0x28),
                                       (ulong)uVar24 <=
                                       (ulong)((long)unaff_x21 - (long)pppppppuVar29))) {
                                      func_0x00010a77bef4(&pppppppuStack_1a0,
                                                          (uint *)((long)pppppppuVar9 + 0x24),
                                                          (int)(short)uVar4,(int)(short)uVar3);
                                      FUN_10a7a33dc((long)pppppppuVar6 + (long)pppppppuVar29,
                                                    (ulong)uVar24,(int)(short)uVar3,
                                                    &pppppppuStack_1a0);
                                      if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                      (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])
                                                (&pppppppuStack_1a0);
                                    }
                                  }
                                  break;
                                }
                                lVar21 = lVar21 + 0x30;
                              } while (lVar21 != param_1[0x32]);
                            }
                            pppppppuVar6 = pppppppuStack_2e0;
                          }
                          FUN_10a7a31fc(&pppppppuStack_120);
                        }
                        lVar19 = param_1[0x3e];
                        pppppppuVar6 = pppppppuStack_2e0;
                        for (lVar21 = param_1[0x3d]; pppppppuStack_2e0 = pppppppuVar6,
                            lVar21 != lVar19; lVar21 = lVar21 + 0x68) {
                          lVar17 = param_1[0x31];
                          if (lVar17 != param_1[0x32]) {
                            do {
                              if (*(long *)(lVar17 + 0x18) == *(long *)(lVar21 + 0x18)) {
                                uVar4 = *(ushort *)(lVar21 + 0x20);
                                uVar3 = *(ushort *)(lVar17 + 0x20);
                                if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                                   (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                    uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                                  pppppppuVar9 = (uint *******)(ulong)*(uint *)(lVar17 + 0x24);
                                  if ((pppppppuVar9 <= unaff_x21) &&
                                     (uVar24 = *(uint *)(lVar17 + 0x28),
                                     (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppppuVar9))
                                     ) {
                                    func_0x00010a77bef4(&pppppppuStack_1a0,lVar21 + 0x24,
                                                        (int)(short)uVar4,(int)(short)uVar3);
                                    FUN_10a7a33dc((long)pppppppuVar6 + (long)pppppppuVar9,
                                                  (ulong)uVar24,(int)(short)uVar3,&pppppppuStack_1a0
                                                 );
                                    if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                    (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])
                                              (&pppppppuStack_1a0);
                                  }
                                }
                                break;
                              }
                              lVar17 = lVar17 + 0x30;
                            } while (lVar17 != param_1[0x32]);
                          }
                          pppppppuVar6 = pppppppuStack_2e0;
                        }
                        pppppppuStack_1a0 = (uint *******)(ulong)*(uint *)(param_1 + 0x4b);
                        plVar26 = plStack_2b0 + 0x57;
                        FUN_10a5e7d1c(plVar26,&pppppppuStack_1a0);
                        if (((plVar26 != (long *)0x0) && ((char)plVar26[0xe] == '\x01')) &&
                           (plVar26 = (long *)plVar26[0xb], plVar26 != (long *)0x0)) {
                          do {
                            plVar23 = (long *)plVar26[6];
                            if ((plVar23 != (long *)plVar26[7]) &&
                               (puVar27 = (ulong *)*plVar23, puVar27 != (ulong *)0x0)) {
                              pppppppuStack_280 = (uint *******)0x0;
                              pppppppuStack_278 = (uint *******)0x0;
                              pppppppuVar9 = (uint *******)puVar27[1];
                              if (pppppppuVar9 != (uint *******)0x0) {
                                __ZNSt3__119__shared_weak_count4lockEv();
                                if (pppppppuVar9 != (uint *******)0x0) {
                                  pppppppuStack_280 = (uint *******)*puVar27;
                                }
                                pppppppuStack_278 = pppppppuVar9;
                                if (pppppppuStack_280 != (uint *******)0x0) {
                                  pppppppuVar9 = pppppppuStack_280;
                                  FUN_10a7738f8();
                                  bVar7 = true;
                                  bVar8 = false;
                                  if (0 < (int)pppppppuVar9) {
                                    iVar13 = (int)((ulong)pppppppuVar9 >> 0x20);
                                    bVar8 = SBORROW4(iVar13,1);
                                    bVar7 = iVar13 + -1 < 0;
                                  }
                                  pppppppuStack_210 = pppppppuVar9;
                                  if (bVar7 == bVar8) {
                                    if (*(char *)((long)plVar26 + 0x27) < '\0') {
                                      func_0x000107c3192c(&pppppppuStack_d0,plVar26[2],plVar26[3]);
                                    }
                                    else {
                                      pppppppuStack_c8 = (uint *******)plVar26[3];
                                      pppppppuStack_d0 = (uint *******)plVar26[2];
                                      pppppppuStack_c0 = (uint *******)plVar26[4];
                                    }
                                    func_0x0001098998d4(&pppppppuStack_260,&PTR_DAT_110c17658);
                                    pppppppuVar9 = pppppppuStack_258;
                                    pppppppuVar10 = pppppppuStack_260;
                                    if (-1 < (long)uStack_250) {
                                      pppppppuVar9 = (uint *******)(uStack_250 >> 0x38);
                                      pppppppuVar10 = (uint *******)&pppppppuStack_260;
                                    }
                                    pppppppuVar29 = (uint *******)&pppppppuStack_d0;
                                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                              (pppppppuVar29,pppppppuVar10,pppppppuVar9);
                                    pppppppuStack_1a0 = (uint *******)*pppppppuVar29;
                                    uStack_138._0_7_ = SUB87(pppppppuVar29[1],0);
                                    uStack_138._7_1_ =
                                         (undefined1)*(undefined8 *)((long)pppppppuVar29 + 0xf);
                                    uStack_130 = (undefined7)
                                                 ((ulong)*(undefined8 *)((long)pppppppuVar29 + 0xf)
                                                 >> 8);
                                    cStack_189 = *(char *)((long)pppppppuVar29 + 0x17);
                                    pppppppuVar29[1] = (uint ******)0x0;
                                    pppppppuVar29[2] = (uint ******)0x0;
                                    *pppppppuVar29 = (uint ******)0x0;
                                    uStack_190 = uStack_130;
                                    uStack_198 = (undefined7)uStack_138;
                                    uStack_191 = uStack_138._7_1_;
                                    uStack_138._0_7_ = 0;
                                    uStack_138._7_1_ = 0;
                                    uStack_130 = 0;
                                    pppppuStack_188 = (uint *****)0x0;
                                    func_0x000107c2b080(&pppppppuStack_1a0);
                                    uStack_180._0_2_ = 10;
                                    FUN_10a77d1ac(&pppppppuStack_120,param_1[0x22],plVar26 + 2,
                                                  *(undefined8 *)(*plVar23 + 0x18),
                                                  &pppppppuStack_210);
                                    uStack_174 = SUB84(pppppppuStack_118,0);
                                    uStack_170 = (undefined4)((ulong)pppppppuStack_118 >> 0x20);
                                    fStack_17c = SUB84(pppppppuStack_120,0);
                                    fStack_178 = (float)((ulong)pppppppuStack_120 >> 0x20);
                                    uStack_164 = (undefined4)uStack_108;
                                    uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                                    uStack_16c = (undefined4)lStack_110;
                                    uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                                    uStack_15c = uStack_100;
                                    bStack_13c = 7;
                                    FUN_10a77c39c(param_1[0x31],param_1[0x32],&pppppppuStack_2e0,
                                                  &pppppppuStack_1a0);
                                    func_0x00010a777f38(&pppppppuStack_1a0);
                                    if ((long)uStack_250 < 0) {
                                      __ZdlPv(pppppppuStack_260);
                                    }
                                  }
                                }
                              }
                              func_0x00010a1f74b8(&pppppppuStack_280);
                            }
                            plVar26 = (long *)*plVar26;
                          } while (plVar26 != (long *)0x0);
                        }
                        pppppppuVar6 = pppppppuStack_2e0;
                        puVar27 = (ulong *)param_1[0x31];
                        puVar1 = (ulong *)param_1[0x32];
                        if (puVar27 != puVar1) {
                          do {
                            FUN_10a77c0e8(&pppppppuStack_120,param_1,puVar27);
                            if (bStack_dc == 1) {
                              if (*(char *)((long)puVar27 + 0x17) < '\0') {
                                func_0x000107c3192c(&pppppppuStack_1a0,*puVar27,puVar27[1]);
                                pppppuStack_188 = (uint *****)puVar27[3];
                                uStack_180._0_2_ = (ushort)puVar27[4];
                                if ((bStack_dc & 1) == 0) goto LAB_10a77b3e0;
                              }
                              else {
                                pppppppuStack_1a0 = (uint *******)*puVar27;
                                pppppuStack_188 = (uint *****)puVar27[3];
                                uStack_198 = (undefined7)puVar27[1];
                                uStack_191 = (undefined1)(puVar27[1] >> 0x38);
                                uStack_190 = (undefined7)puVar27[2];
                                cStack_189 = (char)(puVar27[2] >> 0x38);
                                uStack_180._0_2_ = (ushort)puVar27[4];
                              }
                              bStack_13c = 0x10;
                              pppppppuStack_d0 = (uint *******)&fStack_17c;
                              if (bStack_e0 == 0) {
                                uVar15 = 0;
                                fStack_17c = pppppppuStack_120._0_4_;
                              }
                              else {
                                FUN_10a3652d8(&pppppppuStack_d0,&pppppppuStack_120);
                                uVar15 = (ulong)bStack_e0;
                              }
                              bStack_13c = (byte)uVar15;
                              for (lVar21 = param_1[0x31]; lVar21 != param_1[0x32];
                                  lVar21 = lVar21 + 0x30) {
                                if (*(uint ******)(lVar21 + 0x18) == pppppuStack_188) {
                                  uVar4 = *(ushort *)(lVar21 + 0x20);
                                  if ((((ushort)uStack_180 == uVar4) ||
                                      ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                                     ((((ushort)uStack_180 < 7 &&
                                       (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                      uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                                    pppppppuVar9 = (uint *******)(ulong)*(uint *)(lVar21 + 0x24);
                                    if ((pppppppuVar9 <= unaff_x21) &&
                                       (uVar24 = *(uint *)(lVar21 + 0x28),
                                       (ulong)uVar24 <=
                                       (ulong)((long)unaff_x21 - (long)pppppppuVar9))) {
                                      func_0x00010a77bef4(&pppppppuStack_d0,&fStack_17c,
                                                          (int)(short)(ushort)uStack_180,
                                                          (int)(short)uVar4);
                                      FUN_10a7a33dc((long)pppppppuVar6 + (long)pppppppuVar9,
                                                    (ulong)uVar24,(int)(short)uVar4,
                                                    &pppppppuStack_d0);
                                      if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                      (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&pppppppuStack_d0);
                                      uVar15 = (ulong)bStack_13c;
                                    }
                                  }
                                  break;
                                }
                              }
                              if (0x10 < (uint)uVar15) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[uVar15])(&fStack_17c);
                              if (cStack_189 < '\0') {
                                __ZdlPv(pppppppuStack_1a0);
                              }
                              if ((bStack_dc & 1) != 0) {
                                if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&pppppppuStack_120);
                              }
                            }
                            puVar27 = puVar27 + 6;
                          } while (puVar27 != puVar1);
                        }
                        pppppppuStack_1a0 =
                             (uint *******)
                             CONCAT44(pppppppuStack_1a0._4_4_,*(undefined4 *)((long)param_1 + 0xdc))
                        ;
                        func_0x000107426fd8(pppppppuStack_298 + 0xb,&pppppppuStack_1a0,
                                            &pppppppuStack_1a0);
                      }
                    }
                    plVar26 = plVar12 + 1;
                    do {
                      lVar21 = *plVar26;
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                      if (bVar7) {
                        *plVar26 = lVar21 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar21 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                    }
                  }
                }
                unaff_x20 = plStack_290;
                if (plStack_290 == (long *)0x0) goto LAB_10a77a708;
              }
              unaff_x20 = plStack_290;
              plVar12 = plStack_290 + 1;
              do {
                lVar21 = *plVar12;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar7) {
                  *plVar12 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plStack_290 + 0x10))(plStack_290);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
              }
            }
          }
LAB_10a77a708:
          plVar12 = (long *)param_1[0x19];
          if (plVar12 != (long *)0x0) {
            __ZNSt3__119__shared_weak_count4lockEv();
            plStack_208 = plVar12;
            if (plVar12 != (long *)0x0) {
              unaff_x21 = (uint *******)param_1[0x18];
              pppppppuStack_210 = unaff_x21;
              if (unaff_x21 != (uint *******)0x0) {
                plVar12 = (long *)param_1[0x4a];
                if (plVar12 != (long *)0x0) {
                  __ZNSt3__119__shared_weak_count4lockEv();
                  plStack_218 = plVar12;
                  if (plVar12 != (long *)0x0) {
                    plVar26 = (long *)param_1[0x49];
                    plStack_220 = plVar26;
                    if (plVar26 != (long *)0x0) {
                      uVar24 = *(uint *)unaff_x21;
                      uVar14 = (ulong)(uVar24 * (int)param_1[0x1b]);
                      uVar15 = uVar14 + (long)(ulong)uVar24;
                      pppppppuVar9 = unaff_x21 + 1;
                      uVar22 = (long)unaff_x21[2] - (long)*pppppppuVar9;
                      unaff_x21 = (uint *******)0x0;
                      if (uVar15 <= uVar22) {
                        unaff_x21 = (uint *******)(ulong)uVar24;
                      }
                      lStack_230 = 0;
                      if (uVar15 <= uVar22) {
                        lStack_230 = (long)*pppppppuVar9 + uVar14;
                      }
                      pppppppuStack_228 = unaff_x21;
                      if (unaff_x21 != (uint *******)0x0) {
                        _bzero(lStack_230,unaff_x21);
                        pppppppuStack_258 = (uint *******)0x0;
                        pppppppuStack_260 = (uint *******)0x0;
                        uStack_248 = 0;
                        uStack_250 = 0;
                        uStack_240 = 0x3f800000;
                        pppppppuVar10 = (uint *******)param_1[0x3e];
                        for (pppppppuVar9 = (uint *******)param_1[0x3d];
                            pppppppuVar9 != pppppppuVar10; pppppppuVar9 = pppppppuVar9 + 0xd) {
                          pppppppuStack_c8 =
                               (uint *******)(long)*(char *)((long)pppppppuVar9 + 0x17);
                          pppppppuStack_d0 = pppppppuVar9;
                          if ((long)pppppppuStack_c8 < 0) {
                            pppppppuStack_c8 = (uint *******)pppppppuVar9[1];
                            pppppppuStack_d0 = (uint *******)*pppppppuVar9;
                          }
                          if (*(short *)(pppppppuVar9 + 4) == 6) {
                            pppppppuVar29 = (uint *******)&pppppppuStack_d0;
                            FUN_10a159054(pppppppuVar29,&UNK_10f675465,10);
                            if (((int)pppppppuVar29 != 0) &&
                               (*(char *)((long)pppppppuVar9 + 100) == '\t')) {
                              pppppppuStack_278 = pppppppuStack_c8;
                              if ((uint *******)((long)pppppppuStack_c8 + -10) <= pppppppuStack_c8)
                              {
                                pppppppuStack_278 = (uint *******)((long)pppppppuStack_c8 + -10);
                              }
                              pppppppuStack_280 = pppppppuStack_d0;
                              if (pppppppuStack_278 != (uint *******)0x0) {
                                func_0x0001098998d4(&pppppppuStack_120,&pppppppuStack_280);
                                lVar21 = lStack_110;
                                uStack_198 = SUB87(pppppppuStack_118,0);
                                uStack_191 = (undefined1)((ulong)pppppppuStack_118 >> 0x38);
                                pppppppuStack_1a0 = pppppppuStack_120;
                                pppppppuStack_118 = (uint *******)0x0;
                                lStack_110 = 0;
                                pppppppuStack_120 = (uint *******)0x0;
                                uStack_190 = (undefined7)lVar21;
                                cStack_189 = (char)((ulong)lVar21 >> 0x38);
                                pppppuStack_188 = (uint *****)0x0;
                                func_0x000107c2b080(&pppppppuStack_1a0);
                                FUN_10a7ad610(&pppppppuStack_260,pppppuStack_188,&pppppppuStack_1a0,
                                              (uint *)((long)pppppppuVar9 + 0x24));
                                if (cStack_189 < '\0') {
                                  __ZdlPv(pppppppuStack_1a0);
                                }
                                if (lStack_110 < 0) {
                                  __ZdlPv(pppppppuStack_120);
                                }
                              }
                            }
                          }
                        }
                        (**(code **)(*plVar26 + 0x1f0))(&uStack_138,plVar26);
                        pppppppuStack_280 = (uint *******)param_1[0x22];
                        pppppppuStack_278 = (uint *******)&pppppppuStack_260;
                        lStack_270 = CONCAT17(uStack_138._7_1_,(undefined7)uStack_138);
                        lStack_268 = CONCAT17(uStack_129,uStack_130) - lStack_270 >> 5;
                        pppppppuStack_298 = (uint *******)0x0;
                        plStack_290 = (long *)0x0;
                        uStack_288 = 0;
                        FUN_10a7771c8(&plStack_2b0,param_1 + 0x35,&pppppppuStack_280,
                                      &pppppppuStack_298);
                        plVar23 = plStack_2a8;
                        lVar21 = lStack_230;
                        for (plVar26 = plStack_2b0; plVar26 != plVar23; plVar26 = plVar26 + 0xd) {
                          lVar19 = param_1[0x35];
                          lStack_230 = lVar21;
                          if (lVar19 != param_1[0x36]) {
                            do {
                              if (*(long *)(lVar19 + 0x18) == plVar26[3]) {
                                uVar4 = *(ushort *)(plVar26 + 4);
                                uVar3 = *(ushort *)(lVar19 + 0x20);
                                if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                                   (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                    uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                                  pppppppuVar9 = (uint *******)(ulong)*(uint *)(lVar19 + 0x24);
                                  if ((pppppppuVar9 <= unaff_x21) &&
                                     (uVar24 = *(uint *)(lVar19 + 0x28),
                                     (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppppuVar9))
                                     ) {
                                    func_0x00010a77bef4(&pppppppuStack_1a0,(long)plVar26 + 0x24,
                                                        (int)(short)uVar4,(int)(short)uVar3);
                                    FUN_10a7a33dc(lVar21 + (long)pppppppuVar9,(ulong)uVar24,
                                                  (int)(short)uVar3,&pppppppuStack_1a0);
                                    if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                    (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])
                                              (&pppppppuStack_1a0);
                                  }
                                }
                                break;
                              }
                              lVar19 = lVar19 + 0x30;
                            } while (lVar19 != param_1[0x36]);
                          }
                          lVar21 = lStack_230;
                        }
                        lVar17 = param_1[0x3e];
                        for (lVar19 = param_1[0x3d]; lStack_230 = lVar21, lVar19 != lVar17;
                            lVar19 = lVar19 + 0x68) {
                          lVar18 = param_1[0x35];
                          if (lVar18 != param_1[0x36]) {
                            do {
                              if (*(long *)(lVar18 + 0x18) == *(long *)(lVar19 + 0x18)) {
                                uVar4 = *(ushort *)(lVar19 + 0x20);
                                uVar3 = *(ushort *)(lVar18 + 0x20);
                                if (((uVar4 == uVar3) || (uVar4 == 8 && uVar3 == 9)) ||
                                   (((uVar4 < 7 && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0) &&
                                    uVar3 < 7) && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) {
                                  pppppppuVar9 = (uint *******)(ulong)*(uint *)(lVar18 + 0x24);
                                  if ((pppppppuVar9 <= unaff_x21) &&
                                     (uVar24 = *(uint *)(lVar18 + 0x28),
                                     (ulong)uVar24 <= (ulong)((long)unaff_x21 - (long)pppppppuVar9))
                                     ) {
                                    func_0x00010a77bef4(&pppppppuStack_1a0,lVar19 + 0x24,
                                                        (int)(short)uVar4,(int)(short)uVar3);
                                    FUN_10a7a33dc(lVar21 + (long)pppppppuVar9,(ulong)uVar24,
                                                  (int)(short)uVar3,&pppppppuStack_1a0);
                                    if (0x10 < (ulong)(byte)uStack_160) goto LAB_10a77b3e0;
                                    (*(code *)(&PTR_FUN_110ba1f88)[(byte)uStack_160])
                                              (&pppppppuStack_1a0);
                                  }
                                }
                                break;
                              }
                              lVar18 = lVar18 + 0x30;
                            } while (lVar18 != param_1[0x36]);
                          }
                          lVar21 = lStack_230;
                        }
                        pppppppuStack_1a0 = (uint *******)(ulong)*(uint *)(param_1 + 0x4b);
                        plVar26 = plStack_220 + 0x57;
                        FUN_10a5e7d1c(plVar26,&pppppppuStack_1a0);
                        if (((plVar26 != (long *)0x0) && ((char)plVar26[0xe] == '\x01')) &&
                           (plVar26 = (long *)plVar26[0xb], plVar26 != (long *)0x0)) {
                          do {
                            plVar23 = (long *)plVar26[6];
                            if ((plVar23 != (long *)plVar26[7]) &&
                               (plVar28 = (long *)*plVar23, plVar28 != (long *)0x0)) {
                              lStack_2c0 = 0;
                              lStack_2b8 = 0;
                              lVar21 = plVar28[1];
                              if (lVar21 != 0) {
                                __ZNSt3__119__shared_weak_count4lockEv();
                                if (lVar21 != 0) {
                                  lStack_2c0 = *plVar28;
                                }
                                lStack_2b8 = lVar21;
                                if (lStack_2c0 != 0) {
                                  lVar21 = lStack_2c0;
                                  FUN_10a7738f8();
                                  bVar7 = true;
                                  bVar8 = false;
                                  if (0 < (int)lVar21) {
                                    iVar13 = (int)((ulong)lVar21 >> 0x20);
                                    bVar8 = SBORROW4(iVar13,1);
                                    bVar7 = iVar13 + -1 < 0;
                                  }
                                  lStack_2c8 = lVar21;
                                  if (bVar7 == bVar8) {
                                    if (*(char *)((long)plVar26 + 0x27) < '\0') {
                                      func_0x000107c3192c(&pppppppuStack_d0,plVar26[2],plVar26[3]);
                                    }
                                    else {
                                      pppppppuStack_c8 = (uint *******)plVar26[3];
                                      pppppppuStack_d0 = (uint *******)plVar26[2];
                                      pppppppuStack_c0 = (uint *******)plVar26[4];
                                    }
                                    func_0x0001098998d4(&pppppppuStack_2e0,&PTR_DAT_110c17658);
                                    pppppppuVar9 = pppppppuStack_2d8;
                                    pppppppuVar6 = pppppppuStack_2e0;
                                    if (-1 < (char)bStack_2c9) {
                                      pppppppuVar9 = (uint *******)(ulong)bStack_2c9;
                                      pppppppuVar6 = &pppppppuStack_2e0;
                                    }
                                    pppppppuVar10 = (uint *******)&pppppppuStack_d0;
                                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                              (pppppppuVar10,pppppppuVar6,pppppppuVar9);
                                    pppppppuStack_1a0 = (uint *******)*pppppppuVar10;
                                    uStack_1b0 = SUB87(pppppppuVar10[1],0);
                                    uStack_1a9 = (undefined1)
                                                 *(undefined8 *)((long)pppppppuVar10 + 0xf);
                                    uStack_1a8 = (undefined7)
                                                 ((ulong)*(undefined8 *)((long)pppppppuVar10 + 0xf)
                                                 >> 8);
                                    cStack_189 = *(char *)((long)pppppppuVar10 + 0x17);
                                    pppppppuVar10[1] = (uint ******)0x0;
                                    pppppppuVar10[2] = (uint ******)0x0;
                                    *pppppppuVar10 = (uint ******)0x0;
                                    uStack_190 = uStack_1a8;
                                    uStack_198 = uStack_1b0;
                                    uStack_191 = uStack_1a9;
                                    uStack_1b0 = 0;
                                    uStack_1a9 = 0;
                                    uStack_1a8 = 0;
                                    pppppuStack_188 = (uint *****)0x0;
                                    func_0x000107c2b080(&pppppppuStack_1a0);
                                    uStack_180._0_2_ = 10;
                                    FUN_10a77d1ac(&pppppppuStack_120,param_1[0x22],plVar26 + 2,
                                                  *(undefined8 *)(*plVar23 + 0x18),&lStack_2c8);
                                    uStack_174 = SUB84(pppppppuStack_118,0);
                                    uStack_170 = (undefined4)((ulong)pppppppuStack_118 >> 0x20);
                                    fStack_17c = SUB84(pppppppuStack_120,0);
                                    fStack_178 = (float)((ulong)pppppppuStack_120 >> 0x20);
                                    uStack_164 = (undefined4)uStack_108;
                                    uStack_160 = (undefined4)((ulong)uStack_108 >> 0x20);
                                    uStack_16c = (undefined4)lStack_110;
                                    uStack_168 = (undefined4)((ulong)lStack_110 >> 0x20);
                                    uStack_15c = uStack_100;
                                    bStack_13c = 7;
                                    func_0x00010a77d228(param_1[0x35],param_1[0x36],&lStack_230,
                                                        &pppppppuStack_1a0);
                                    func_0x00010a777f38(&pppppppuStack_1a0);
                                    if ((char)bStack_2c9 < '\0') {
                                      __ZdlPv(pppppppuStack_2e0);
                                    }
                                  }
                                }
                              }
                              func_0x00010a1f74b8(&lStack_2c0);
                            }
                            plVar26 = (long *)*plVar26;
                          } while (plVar26 != (long *)0x0);
                        }
                        lVar21 = lStack_230;
                        puVar27 = (ulong *)param_1[0x35];
                        puVar1 = (ulong *)param_1[0x36];
                        if (puVar27 != puVar1) {
                          do {
                            FUN_10a77c0e8(&pppppppuStack_120,param_1,puVar27);
                            if (bStack_dc == 1) {
                              if (*(char *)((long)puVar27 + 0x17) < '\0') {
                                func_0x000107c3192c(&pppppppuStack_1a0,*puVar27,puVar27[1]);
                                pppppuStack_188 = (uint *****)puVar27[3];
                                uStack_180._0_2_ = (ushort)puVar27[4];
                                if ((bStack_dc & 1) == 0) {
LAB_10a77b3e0:
                    /* WARNING: Does not return */
                                  pcVar16 = (code *)SoftwareBreakpoint(1,0x10a77b3e4);
                                  (*pcVar16)();
                                }
                              }
                              else {
                                pppppppuStack_1a0 = (uint *******)*puVar27;
                                pppppuStack_188 = (uint *****)puVar27[3];
                                uStack_198 = (undefined7)puVar27[1];
                                uStack_191 = (undefined1)(puVar27[1] >> 0x38);
                                uStack_190 = (undefined7)puVar27[2];
                                cStack_189 = (char)(puVar27[2] >> 0x38);
                                uStack_180._0_2_ = (ushort)puVar27[4];
                              }
                              bStack_13c = 0x10;
                              pppppppuStack_d0 = (uint *******)&fStack_17c;
                              if (bStack_e0 == 0) {
                                uVar15 = 0;
                                fStack_17c = pppppppuStack_120._0_4_;
                              }
                              else {
                                FUN_10a3652d8(&pppppppuStack_d0,&pppppppuStack_120);
                                uVar15 = (ulong)bStack_e0;
                              }
                              bStack_13c = (byte)uVar15;
                              for (lVar19 = param_1[0x35]; lVar19 != param_1[0x36];
                                  lVar19 = lVar19 + 0x30) {
                                if (*(uint ******)(lVar19 + 0x18) == pppppuStack_188) {
                                  uVar4 = *(ushort *)(lVar19 + 0x20);
                                  if ((((ushort)uStack_180 == uVar4) ||
                                      ((ushort)uStack_180 == 8 && uVar4 == 9)) ||
                                     ((((ushort)uStack_180 < 7 &&
                                       (1 << (ulong)((ushort)uStack_180 & 0x1f) & 0x4eU) != 0) &&
                                      uVar4 < 7) && (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
                                    pppppppuVar9 = (uint *******)(ulong)*(uint *)(lVar19 + 0x24);
                                    if ((pppppppuVar9 <= unaff_x21) &&
                                       (uVar24 = *(uint *)(lVar19 + 0x28),
                                       (ulong)uVar24 <=
                                       (ulong)((long)unaff_x21 - (long)pppppppuVar9))) {
                                      func_0x00010a77bef4(&pppppppuStack_d0,&fStack_17c,
                                                          (int)(short)(ushort)uStack_180,
                                                          (int)(short)uVar4);
                                      FUN_10a7a33dc(lVar21 + (long)pppppppuVar9,(ulong)uVar24,
                                                    (int)(short)uVar4,&pppppppuStack_d0);
                                      if (0x10 < (ulong)bStack_90) goto LAB_10a77b3e0;
                                      (*(code *)(&PTR_FUN_110ba1f88)[bStack_90])(&pppppppuStack_d0);
                                      uVar15 = (ulong)bStack_13c;
                                    }
                                  }
                                  break;
                                }
                              }
                              if (0x10 < (uint)uVar15) goto LAB_10a77b3e0;
                              (*(code *)(&PTR_FUN_110ba1f88)[uVar15])(&fStack_17c);
                              if (cStack_189 < '\0') {
                                __ZdlPv(pppppppuStack_1a0);
                              }
                              if ((bStack_dc & 1) != 0) {
                                if (0x10 < (ulong)bStack_e0) goto LAB_10a77b3e0;
                                (*(code *)(&PTR_FUN_110ba1f88)[bStack_e0])(&pppppppuStack_120);
                              }
                            }
                            puVar27 = puVar27 + 6;
                          } while (puVar27 != puVar1);
                        }
                        pppppppuStack_120 =
                             (uint *******)CONCAT44(pppppppuStack_120._4_4_,(int)param_1[0x1b]);
                        func_0x000107426fd8(pppppppuStack_210 + 0xb,&pppppppuStack_120,
                                            &pppppppuStack_120);
                        FUN_10a7a31fc(&plStack_2b0);
                        pppppppuStack_1a0 = (uint *******)&pppppppuStack_298;
                        FUN_10a044868(&pppppppuStack_1a0);
                        pppppppuStack_1a0 = (uint *******)&uStack_138;
                        FUN_10a044868(&pppppppuStack_1a0);
                        FUN_10a7ad5ac(&pppppppuStack_260);
                      }
                    }
                    plVar26 = plVar12 + 1;
                    do {
                      lVar21 = *plVar26;
                      cVar5 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                      if (bVar7) {
                        *plVar26 = lVar21 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar21 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                      param_1 = plVar12;
                    }
                  }
                }
                unaff_x20 = plStack_208;
                if (plStack_208 == (long *)0x0) goto LAB_10a77af14;
              }
              unaff_x20 = plStack_208;
              plVar12 = plStack_208 + 1;
              do {
                lVar21 = *plVar12;
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar7) {
                  *plVar12 = lVar21 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar21 == 0) {
                (**(code **)(*plStack_208 + 0x10))(plStack_208);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
              }
            }
          }
LAB_10a77af14:
          if (plStack_1b8 != (long *)0x0) {
LAB_10a77af1c:
            plVar26 = plStack_1b8;
            plVar12 = plStack_1b8 + 1;
            do {
              lVar21 = *plVar12;
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *plVar12 = lVar21 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar21 == 0) {
              (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
            }
          }
LAB_10a77af4c:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
            return;
          }
          ___stack_chk_fail();
LAB_10a77af8c:
          iVar13 = 0x137eb960;
          ___cxa_guard_acquire();
          if (iVar13 != 0) {
            func_0x000107c2b07c(0x1137eb9a8,&DAT_10f67535f);
            ___cxa_atexit(FUN_10a32edf4,0x1137eb9a8,0x100000000);
            ___cxa_guard_release(0x1137eb960);
          }
        } while( true );
      }
      lVar21 = lVar21 + -8;
    } while (lVar21 != 0);
    do {
      param_2 = param_2 + 1;
      if ((undefined **)*param_2 == &PTR_DAT_110ba2010) {
        FUN_10a778d94(&stack0xffffffffffffffa8,param_1[0x22]);
        puVar11 = &stack0xffffffffffffffa8;
        FUN_10a77be40(puVar11,param_1 + 0x2d);
        func_0x00010a1f4614(&stack0xffffffffffffffc8);
        if (((ulong)puVar11 & 1) != 0) {
          FUN_10a779760(param_1);
          return;
        }
        plVar12 = (long *)param_1[0x4a];
        if (plVar12 == (long *)0x0) {
          return;
        }
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar12 == (long *)0x0) {
          return;
        }
        if (param_1[0x49] != 0) {
          FUN_10a421d8c();
        }
        plVar26 = plVar12 + 1;
        do {
          lVar21 = *plVar26;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar7) {
            *plVar26 = lVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar21 != 0) {
          return;
        }
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        return;
      }
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
  return;
}



/* Entry: 10a77be40; end: 10a77c0b7;  */

undefined8 FUN_10a77be40(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(char *)((long)param_1 + 0x1c) == *(char *)((long)param_2 + 0x1c)) &&
     ((int)param_1[3] == (int)param_2[3])) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    lVar2 = *param_2;
    if (lVar3 - lVar1 == param_2[1] - lVar2) {
      if (lVar1 != lVar3) {
        lVar4 = 0;
        do {
          if (*(long *)(lVar1 + lVar4 + 0x18) != *(long *)(lVar2 + lVar4 + 0x18)) {
            return 0;
          }
          if (*(short *)(lVar1 + lVar4 + 0x20) != *(short *)(lVar2 + lVar4 + 0x20)) {
            return 0;
          }
          if (*(int *)(lVar1 + lVar4 + 0x24) != *(int *)(lVar2 + lVar4 + 0x24)) {
            return 0;
          }
          if (*(int *)(lVar1 + lVar4 + 0x28) != *(int *)(lVar2 + lVar4 + 0x28)) {
            return 0;
          }
          lVar4 = lVar4 + 0x30;
        } while (lVar1 + lVar4 != lVar3);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 10a77c0b8; end: 10a77c0e7;  */

void FUN_10a77c0b8(long param_1)

{
  if (*(char *)(param_1 + 0x44) == '\x01') {
    FUN_10a7a35b4();
  }
  else {
    func_0x00010a3518a0();
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}



/* Entry: 10a77c0e8; end: 10a77c39b;  */

void FUN_10a77c0e8(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  long lStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  byte bStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = *(long *)(param_2 + 0x110);
  lVar9 = 0x10;
  do {
    if (param_3[3] == *(long *)((long)&PTR_DAT_110c18310 + lVar9)) goto LAB_10a77c2ec;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x70);
  uStack_78 = param_3[1];
  puStack_80 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uStack_78 = (ulong)*(byte *)((long)param_3 + 0x17);
    puStack_80 = param_3;
  }
  ppuVar7 = &puStack_80;
  FUN_10a159054(ppuVar7,&UNK_10f675465,10);
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar7 = &puStack_80;
    FUN_10a7a3690(ppuVar7,&lStack_90,&DAT_10f67728f,9);
    if (((ulong)ppuVar7 & 1) != 0) goto LAB_10a77c2ec;
    ppuVar7 = &puStack_80;
    FUN_10a7a3690(ppuVar7,&lStack_90,&DAT_10f677277,10);
    if (((ulong)ppuVar7 & 1) != 0) goto LAB_10a77c2ec;
    ppuVar7 = &puStack_80;
    FUN_10a7a3690(ppuVar7,&lStack_90,&DAT_10f677282,0xc);
    if (((ulong)ppuVar7 & 1) != 0) goto LAB_10a77c2ec;
    ppuVar7 = &puStack_80;
    FUN_10a7a3690(ppuVar7,&lStack_90,&DAT_10f677299,0xd);
    if (((ulong)ppuVar7 & 1) != 0) goto LAB_10a77c2ec;
    ppuVar7 = &puStack_80;
    FUN_10a7a3690(ppuVar7,&lStack_90,&DAT_10f6772a7,5);
    if (((((ulong)ppuVar7 & 1) != 0) ||
        (plVar8 = *(long **)(param_2 + 0x250), plVar8 == (long *)0x0)) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_88 = plVar8, plVar8 == (long *)0x0))
    goto LAB_10a77c2ec;
    lStack_90 = *(long *)(param_2 + 0x248);
    if (((lStack_90 == 0) || (lVar9 = *(long *)(lStack_90 + 0x2f0), lVar9 == 0)) ||
       (FUN_10acadb94(lVar9,*(undefined4 *)(param_2 + 600),*(undefined4 *)(param_2 + 0x25c),param_3)
       , lVar9 == 0)) {
LAB_10a77c33c:
      *param_1 = 0;
      param_1[0x44] = 0;
    }
    else {
      uVar2 = *(ushort *)(lVar9 + 0x20);
      uVar3 = *(ushort *)(param_3 + 4);
      if ((uVar2 == uVar3) || ((uVar2 == 8 && (uVar3 == 9)))) {
LAB_10a77c2a0:
        func_0x00010a77bef4(&puStack_80,lVar9 + 0x24,(int)(short)uVar2,(int)(short)uVar3);
        func_0x00010a3518a0(param_1,&puStack_80);
        param_1[0x44] = 1;
        if (0x10 < (ulong)bStack_40) goto LAB_10a77c37c;
        (*(code *)(&PTR_FUN_110ba1f88)[bStack_40])(&puStack_80);
      }
      else {
        uVar10 = (uint)uVar2;
        if ((6 < uVar10) || ((1 << (ulong)(uVar10 & 0x1f) & 0x4eU) == 0)) goto LAB_10a77c33c;
        if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0)) goto LAB_10a77c2a0;
        if (uVar10 != 3) goto LAB_10a77c33c;
        FUN_10a778c84(*(undefined4 *)(lVar9 + 0x24),param_1,(int)(short)uVar3);
      }
    }
    plVar1 = plVar8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  else {
LAB_10a77c2ec:
    *param_1 = 0;
    param_1[0x44] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
LAB_10a77c37c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a77c380);
  (*pcVar6)();
}



/* Entry: 10a77c39c; end: 10a77c4cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a77ce50) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a77c39c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long *param_6,long *param_7,long *param_8,int param_9)

{
  undefined8 *puVar1;
  undefined8 *******pppppppuVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined8 ******ppppppuVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 ******ppppppuVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  long *plVar26;
  undefined8 *******pppppppuVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined8 ******ppppppuStack_230;
  undefined8 ******ppppppuStack_228;
  undefined8 uStack_220;
  undefined8 *******pppppppuStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined4 uStack_1f0;
  undefined8 *******pppppppuStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1b1;
  undefined8 *******pppppppuStack_1b0;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  char cStack_199;
  long lStack_198;
  undefined2 uStack_190;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  long lStack_17c;
  undefined8 uStack_174;
  undefined4 uStack_16c;
  byte bStack_14c;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  ulong uStack_130;
  long lStack_128;
  long alStack_7c [8];
  byte bStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 != param_6) {
    do {
      if (param_5[3] == param_8[3]) {
        uVar3 = *(ushort *)(param_8 + 4);
        uVar4 = *(ushort *)(param_5 + 4);
        if (((uVar3 == uVar4) || (uVar3 == 8 && uVar4 == 9)) ||
           (((uVar3 < 7 && (1 << (ulong)(uVar3 & 0x1f) & 0x4eU) != 0) && uVar4 < 7) &&
            (1 << (ulong)(uVar4 & 0x1f) & 0x4eU) != 0)) {
          uVar23 = (ulong)*(uint *)((long)param_5 + 0x24);
          if ((uVar23 <= (ulong)param_7[1]) &&
             (plVar15 = (long *)(ulong)*(uint *)(param_5 + 5),
             plVar15 <= (long *)(param_7[1] - uVar23))) {
            lVar25 = *param_7;
            param_7 = (long *)(ulong)(uint)(int)(short)uVar4;
            func_0x00010a77bef4(alStack_7c,(long)param_8 + 0x24,(int)(short)uVar3,param_7);
            param_8 = alStack_7c;
            FUN_10a7a33dc(lVar25 + uVar23);
            if (0x10 < (ulong)bStack_3c) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a77c4cc);
              (*pcVar9)();
            }
            param_5 = alStack_7c;
            (*(code *)(&PTR_FUN_110ba1f88)[bStack_3c])();
            param_6 = plVar15;
          }
        }
        break;
      }
      param_5 = param_5 + 6;
    } while (param_5 != param_6);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  if (param_6 != (long *)0x0) {
    ppppppuStack_230 = (undefined8 ******)0x0;
    ppppppuStack_228 = (undefined8 ******)0x0;
    uStack_220 = 0;
    plVar16 = (long *)param_6[0x3d];
    plVar15 = param_6 + 0x3e;
    while (plVar16 != plVar15) {
      if (*(char *)((long)plVar16 + 0x37) < '\0') {
        func_0x000107c3192c(&pppppppuStack_1e0,plVar16[4],plVar16[5]);
      }
      else {
        lStack_1d8 = plVar16[5];
        pppppppuStack_1e0 = (undefined8 *******)plVar16[4];
        lStack_1d0 = plVar16[6];
      }
      pppppppuVar27 = &pppppppuStack_1e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar27,&DAT_10f2db161,4);
      pppppppuStack_1b0 = (undefined8 *******)*pppppppuVar27;
      uStack_1a0 = SUB87(pppppppuVar27[2],0);
      cStack_199 = (char)((ulong)pppppppuVar27[2] >> 0x38);
      uStack_1a8 = SUB87(pppppppuVar27[1],0);
      uStack_1a1 = (undefined1)((ulong)pppppppuVar27[1] >> 0x38);
      pppppppuVar27[1] = (undefined8 ******)0x0;
      pppppppuVar27[2] = (undefined8 ******)0x0;
      *pppppppuVar27 = (undefined8 ******)0x0;
      FUN_10a059fa0(&ppppppuStack_230,&pppppppuStack_1b0);
      if (cStack_199 < '\0') {
        __ZdlPv(pppppppuStack_1b0);
      }
      if (lStack_1d0 < 0) {
        __ZdlPv(pppppppuStack_1e0);
      }
      plVar22 = (long *)plVar16[1];
      plVar20 = plVar16;
      if ((long *)plVar16[1] == (long *)0x0) {
        do {
          plVar16 = (long *)plVar20[2];
          bVar10 = (long *)*plVar16 != plVar20;
          plVar20 = plVar16;
        } while (bVar10);
      }
      else {
        do {
          plVar16 = plVar22;
          plVar22 = (long *)*plVar16;
        } while ((long *)*plVar16 != (long *)0x0);
      }
    }
    plVar22 = (undefined8 *)param_6[0x37] + 1;
    plVar16 = *(long **)param_6[0x37];
    if (plVar16 != plVar22) {
      do {
        ppppppuVar8 = ppppppuStack_228;
        ppppppuVar11 = ppppppuStack_230;
        if (*(char *)((long)plVar16 + 0x37) < '\0') {
          func_0x000107c3192c(&pppppppuStack_1b0,plVar16[4],plVar16[5]);
        }
        else {
          pppppppuStack_1b0 = (undefined8 *******)plVar16[4];
          uStack_1a8 = (undefined7)plVar16[5];
          uStack_1a1 = (undefined1)((ulong)plVar16[5] >> 0x38);
          uStack_1a0 = (undefined7)plVar16[6];
          cStack_199 = (char)((ulong)plVar16[6] >> 0x38);
        }
        FUN_10a7a42ec(ppppppuVar11,ppppppuVar8,&pppppppuStack_1b0,&pppppppuStack_1e0);
        ppppppuVar8 = ppppppuStack_228;
        if (cStack_199 < '\0') {
          __ZdlPv(pppppppuStack_1b0);
        }
        lVar25 = plVar16[8];
        if (((lVar25 != 0) && (lVar12 = plVar16[7], lVar12 != lRam00000001137eba40)) &&
           ((lVar12 != lRam00000001137eba80 && (ppppppuVar11 == ppppppuVar8)))) {
          if (*(char *)((long)plVar16 + 0x37) < '\0') {
            func_0x000107c3192c(&pppppppuStack_1b0,plVar16[4],plVar16[5]);
            lVar12 = plVar16[7];
            lVar25 = plVar16[8];
          }
          else {
            pppppppuStack_1b0 = (undefined8 *******)plVar16[4];
            uStack_1a8 = (undefined7)plVar16[5];
            uStack_1a1 = (undefined1)((ulong)plVar16[5] >> 0x38);
            uStack_1a0 = (undefined7)plVar16[6];
            cStack_199 = (char)((ulong)plVar16[6] >> 0x38);
          }
          uStack_190 = *(undefined2 *)(lVar25 + 0x20);
          bStack_14c = 0x10;
          pppppppuStack_1e0 = (undefined8 *******)&uStack_18c;
          lStack_198 = lVar12;
          if (*(char *)(lVar25 + 100) == '\0') {
            bStack_14c = 0;
            uStack_18c = (undefined8 *******)
                         CONCAT44(uStack_18c._4_4_,*(undefined4 *)(lVar25 + 0x24));
          }
          else {
            FUN_10a3652d8(&pppppppuStack_1e0);
            bStack_14c = *(byte *)(lVar25 + 100);
          }
          FUN_10a777d70(param_5,&pppppppuStack_1b0);
          if (0x10 < (ulong)bStack_14c) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_14c])(&uStack_18c);
          if (cStack_199 < '\0') {
            __ZdlPv(pppppppuStack_1b0);
          }
        }
        plVar20 = (long *)plVar16[1];
        plVar26 = plVar16;
        if ((long *)plVar16[1] == (long *)0x0) {
          do {
            plVar16 = (long *)plVar26[2];
            bVar10 = (long *)*plVar16 != plVar26;
            plVar26 = plVar16;
          } while (bVar10);
        }
        else {
          do {
            plVar16 = plVar20;
            plVar20 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
      } while (plVar16 != plVar22);
    }
    plVar16 = (long *)param_6[0x3d];
    if (plVar16 != plVar15) {
      pppppppuVar27 = (undefined8 *******)0x3f800000;
      do {
        uVar28 = SUB84(pppppppuVar27,0);
        lVar25 = *param_8;
        if (lVar25 != param_8[1]) {
          do {
            if (*(long *)(lVar25 + 0x18) == plVar16[7]) goto LAB_10a77ce58;
            lVar25 = lVar25 + 0x20;
          } while (lVar25 != param_8[1]);
        }
        plVar22 = (long *)plVar16[8];
        uVar31 = 0xbf800000;
        if (plVar22 == (long *)0x0) {
          plVar20 = (long *)0x0;
LAB_10a77c83c:
          bVar10 = true;
          uVar28 = 0xbf800000;
          uVar29 = 0xbf800000;
          uVar30 = 0xbf800000;
        }
        else {
          plVar20 = plVar22;
          (**(code **)(*plVar22 + 0x10))();
          if (plVar20 == (long *)0x0) goto LAB_10a77c83c;
          uVar31 = uVar28;
          (**(code **)(*plVar20 + 0xd8))(plVar20);
          uVar30 = (undefined4)param_4;
          uVar29 = (undefined4)param_3;
          uVar28 = (undefined4)param_2;
          bVar10 = false;
        }
        if (*(char *)((long)plVar16 + 0x37) < '\0') {
          func_0x000107c3192c(&uStack_140,plVar16[4],plVar16[5]);
        }
        else {
          uStack_138 = (undefined7)plVar16[5];
          uStack_131 = (undefined1)((ulong)plVar16[5] >> 0x38);
          uStack_140 = (undefined7)plVar16[4];
          uStack_139 = (undefined1)((ulong)plVar16[4] >> 0x38);
          uStack_130 = plVar16[6];
        }
        uVar23 = CONCAT17(uStack_131,uStack_138);
        if (-1 < (long)uStack_130) {
          uVar23 = uStack_130 >> 0x38;
        }
        FUN_10a003c90(&pppppppuStack_1e0,uVar23 + 9,&pppppppuStack_218);
        pppppppuVar2 = pppppppuStack_1e0;
        if (-1 < lStack_1d0) {
          pppppppuVar2 = &pppppppuStack_1e0;
        }
        if (uVar23 != 0) {
          _memmove(pppppppuVar2,&uStack_140,uVar23);
        }
        *(undefined8 *)((long)pppppppuVar2 + uVar23) = 0x614d6e694d76755f;
        pppppppuVar27 = pppppppuStack_1e0;
        *(undefined2 *)((undefined8 *)((long)pppppppuVar2 + uVar23) + 1) = 0x78;
        lVar25 = lStack_1d0;
        uStack_1a8 = (undefined7)lStack_1d8;
        uStack_1a1 = (undefined1)((ulong)lStack_1d8 >> 0x38);
        pppppppuStack_1b0 = pppppppuStack_1e0;
        lStack_1d8 = 0;
        lStack_1d0 = 0;
        pppppppuStack_1e0 = (undefined8 *******)0x0;
        uStack_1a0 = (undefined7)lVar25;
        cStack_199 = (char)((ulong)lVar25 >> 0x38);
        lStack_198 = 0;
        func_0x000107c2b080(&pppppppuStack_1b0);
        uStack_190 = 9;
        uStack_18c = (undefined8 *******)CONCAT44(uVar28,uVar31);
        uStack_184 = CONCAT44(uVar30,uVar29);
        bStack_14c = 5;
        FUN_10a777d70(param_5,&pppppppuStack_1b0);
        if (0x10 < (ulong)bStack_14c) goto LAB_10a77d080;
        (*(code *)(&PTR_FUN_110ba1f88)[bStack_14c])(&uStack_18c);
        if (cStack_199 < '\0') {
          __ZdlPv(pppppppuStack_1b0);
        }
        if (lStack_1d0 < 0) {
          __ZdlPv(pppppppuStack_1e0);
        }
        if (param_9 != 0) {
          if (bVar10) {
            lStack_1d8 = 0;
            pppppppuStack_1e0 = (undefined8 *******)0x3f800000;
            uStack_1c8 = 0;
            lStack_1d0 = 0x3f800000;
            uStack_1c0 = 0x3f800000;
          }
          else {
            (**(code **)(*plVar20 + 0x90))(&pppppppuStack_1e0,plVar20);
          }
          if (plVar22 == (long *)0x0) {
            uVar24 = 0;
            uVar17 = 0;
            lStack_200 = 0;
            lStack_1f8 = 0;
            uStack_1f0 = 0;
          }
          else {
            (**(code **)(*plVar22 + 0x20))();
            uVar24 = *(uint *)(plVar22 + 1);
            lStack_1f8 = plVar22[3];
            lStack_200 = plVar22[2];
            uStack_1f0 = (undefined4)plVar22[4];
            uVar17 = *(int *)((long)plVar22 + 0xc) << 3;
          }
          uVar23 = CONCAT17(uStack_131,uStack_138);
          if (-1 < (long)uStack_130) {
            uVar23 = uStack_130 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_218,uVar23 + 10,&uStack_1b1);
          pppppppuVar27 = pppppppuStack_218;
          if (-1 < lStack_208) {
            pppppppuVar27 = &pppppppuStack_218;
          }
          if (uVar23 != 0) {
            _memmove(pppppppuVar27,&uStack_140,uVar23);
          }
          puVar1 = (undefined8 *)((long)pppppppuVar27 + uVar23);
          *puVar1 = 0x6f66736e6172745f;
          *(undefined2 *)(puVar1 + 1) = 0x6d72;
          *(undefined1 *)((long)puVar1 + 10) = 0;
          lVar25 = lStack_208;
          uStack_1a8 = (undefined7)uStack_210;
          uStack_1a1 = (undefined1)((ulong)uStack_210 >> 0x38);
          pppppppuStack_1b0 = pppppppuStack_218;
          pppppppuStack_218 = (undefined8 *******)0x0;
          uStack_210 = 0;
          lStack_208 = 0;
          uStack_1a0 = (undefined7)lVar25;
          cStack_199 = (char)((ulong)lVar25 >> 0x38);
          lStack_198 = 0;
          func_0x000107c2b080(&pppppppuStack_1b0);
          uStack_190 = 10;
          uStack_184 = lStack_1d8;
          uStack_18c = pppppppuStack_1e0;
          uStack_174 = uStack_1c8;
          lStack_17c = lStack_1d0;
          uStack_16c = uStack_1c0;
          bStack_14c = 7;
          FUN_10a777d70(param_5,&pppppppuStack_1b0);
          if (0x10 < (ulong)bStack_14c) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_14c])(&uStack_18c);
          if (cStack_199 < '\0') {
            __ZdlPv(pppppppuStack_1b0);
          }
          if (lStack_208 < 0) {
            __ZdlPv(pppppppuStack_218);
          }
          uVar23 = CONCAT17(uStack_131,uStack_138);
          if (-1 < (long)uStack_130) {
            uVar23 = uStack_130 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_218,uVar23 + 0xc,&uStack_1b1);
          pppppppuVar27 = pppppppuStack_218;
          if (-1 < lStack_208) {
            pppppppuVar27 = &pppppppuStack_218;
          }
          if (uVar23 != 0) {
            _memmove(pppppppuVar27,&uStack_140,uVar23);
          }
          puVar1 = (undefined8 *)((long)pppppppuVar27 + uVar23);
          *puVar1 = 0x43726564726f625f;
          *(undefined4 *)(puVar1 + 1) = 0x726f6c6f;
          *(undefined1 *)((long)puVar1 + 0xc) = 0;
          lVar25 = lStack_208;
          uStack_1a8 = (undefined7)uStack_210;
          uStack_1a1 = (undefined1)((ulong)uStack_210 >> 0x38);
          pppppppuStack_1b0 = pppppppuStack_218;
          pppppppuStack_218 = (undefined8 *******)0x0;
          uStack_210 = 0;
          lStack_208 = 0;
          uStack_1a0 = (undefined7)lVar25;
          cStack_199 = (char)((ulong)lVar25 >> 0x38);
          lStack_198 = 0;
          func_0x000107c2b080(&pppppppuStack_1b0);
          uStack_190 = 9;
          uStack_184 = ((long *)((ulong)&lStack_200 | 4))[1];
          uStack_18c = *(undefined8 ********)((ulong)&lStack_200 | 4);
          bStack_14c = 5;
          FUN_10a777d70(param_5,&pppppppuStack_1b0);
          if (0x10 < (ulong)bStack_14c) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_14c])(&uStack_18c);
          if (cStack_199 < '\0') {
            __ZdlPv(pppppppuStack_1b0);
          }
          if (lStack_208 < 0) {
            __ZdlPv(pppppppuStack_218);
          }
          uVar23 = CONCAT17(uStack_131,uStack_138);
          if (-1 < (long)uStack_130) {
            uVar23 = uStack_130 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_218,uVar23 + 0xd,&uStack_1b1);
          pppppppuVar27 = pppppppuStack_218;
          if (-1 < lStack_208) {
            pppppppuVar27 = &pppppppuStack_218;
          }
          if (uVar23 != 0) {
            _memmove(pppppppuVar27,&uStack_140,uVar23);
          }
          puVar1 = (undefined8 *)((long)pppppppuVar27 + uVar23);
          *puVar1 = 0x72656c706d61735f;
          *(undefined8 *)((long)puVar1 + 5) = 0x657461745372656c;
          *(undefined1 *)((long)puVar1 + 0xd) = 0;
          lVar25 = lStack_208;
          uStack_1a8 = (undefined7)uStack_210;
          uStack_1a1 = (undefined1)((ulong)uStack_210 >> 0x38);
          pppppppuStack_1b0 = pppppppuStack_218;
          uStack_210 = 0;
          lStack_208 = 0;
          pppppppuStack_218 = (undefined8 *******)0x0;
          uStack_1a0 = (undefined7)lVar25;
          cStack_199 = (char)((ulong)lVar25 >> 0x38);
          lStack_198 = 0;
          func_0x000107c2b080(&pppppppuStack_1b0);
          uStack_190 = 6;
          uStack_18c = (undefined8 *******)CONCAT44(uStack_18c._4_4_,uVar17 | uVar24);
          bStack_14c = 9;
          FUN_10a777d70(param_5,&pppppppuStack_1b0);
          if (0x10 < (ulong)bStack_14c) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_14c])(&uStack_18c);
          if (cStack_199 < '\0') {
            __ZdlPv(pppppppuStack_1b0);
          }
          if (lStack_208 < 0) {
            __ZdlPv(pppppppuStack_218);
            if (!bVar10) goto LAB_10a77cd0c;
LAB_10a77ccf4:
            iVar19 = 0;
            iVar21 = 0;
          }
          else {
            if (bVar10) goto LAB_10a77ccf4;
LAB_10a77cd0c:
            plVar22 = plVar20;
            (**(code **)(*plVar20 + 0xb0))();
            iVar21 = (int)plVar22;
            (**(code **)(*plVar20 + 0xb8))();
            iVar19 = (int)plVar20;
          }
          uVar23 = CONCAT17(uStack_131,uStack_138);
          if (-1 < (long)uStack_130) {
            uVar23 = uStack_130 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_218,uVar23 + 5,&uStack_1b1);
          pppppppuVar27 = pppppppuStack_218;
          if (-1 < lStack_208) {
            pppppppuVar27 = &pppppppuStack_218;
          }
          if (uVar23 != 0) {
            _memmove(pppppppuVar27,&uStack_140,uVar23);
          }
          *(undefined4 *)((long)pppppppuVar27 + uVar23) = 0x7a69735f;
          *(undefined2 *)((undefined4 *)((long)pppppppuVar27 + uVar23) + 1) = 0x65;
          lVar25 = lStack_208;
          uStack_1a8 = (undefined7)uStack_210;
          uStack_1a1 = (undefined1)((ulong)uStack_210 >> 0x38);
          pppppppuStack_1b0 = pppppppuStack_218;
          uStack_210 = 0;
          lStack_208 = 0;
          pppppppuStack_218 = (undefined8 *******)0x0;
          uStack_1a0 = (undefined7)lVar25;
          cStack_199 = (char)((ulong)lVar25 >> 0x38);
          lStack_198 = 0;
          func_0x000107c2b080(&pppppppuStack_1b0);
          uStack_190 = 9;
          fVar5 = 1.0 / (float)iVar21;
          if (iVar21 < 1) {
            fVar5 = 0.0;
          }
          pppppppuVar27 = (undefined8 *******)(ulong)(uint)fVar5;
          uStack_18c = (undefined8 *******)CONCAT44((float)iVar19,(float)iVar21);
          fVar6 = 1.0 / (float)iVar19;
          if (iVar19 < 1) {
            fVar6 = 0.0;
          }
          param_2 = (ulong)(uint)fVar6;
          uStack_184 = CONCAT44(fVar6,fVar5);
          bStack_14c = 5;
          FUN_10a777d70(param_5,&pppppppuStack_1b0);
          if (0x10 < (ulong)bStack_14c) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_14c])(&uStack_18c);
          if (cStack_199 < '\0') {
            __ZdlPv(pppppppuStack_1b0);
          }
          if (lStack_208 < 0) {
            __ZdlPv(pppppppuStack_218);
          }
        }
LAB_10a77ce58:
        plVar22 = (long *)plVar16[1];
        plVar20 = plVar16;
        if ((long *)plVar16[1] == (long *)0x0) {
          do {
            plVar16 = (long *)plVar20[2];
            bVar10 = (long *)*plVar16 != plVar20;
            plVar20 = plVar16;
          } while (bVar10);
        }
        else {
          do {
            plVar16 = plVar22;
            plVar22 = (long *)*plVar16;
          } while ((long *)*plVar16 != (long *)0x0);
        }
      } while (plVar16 != plVar15);
    }
    pppppppuStack_1b0 = &ppppppuStack_230;
    FUN_10a0426d8(&pppppppuStack_1b0);
  }
  plVar15 = (long *)param_7[1];
  puVar7 = PTR___ZSt7nothrow_1103469d8;
  for (param_7 = (long *)*param_7; PTR___ZSt7nothrow_1103469d8 = puVar7, param_7 != plVar15;
      param_7 = param_7 + 0xe) {
    if (*(char *)((long)param_7 + 0x17) < '\0') {
      func_0x000107c3192c(&pppppppuStack_1e0,*param_7,param_7[1]);
    }
    else {
      lStack_1d8 = param_7[1];
      pppppppuStack_1e0 = (undefined8 *******)*param_7;
      lStack_1d0 = param_7[2];
    }
    pppppppuVar27 = &pppppppuStack_1e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar27,&UNK_10f675465,10);
    pppppppuStack_1b0 = (undefined8 *******)*pppppppuVar27;
    uStack_140 = SUB87(pppppppuVar27[1],0);
    uStack_139 = (undefined1)*(undefined8 *)((long)pppppppuVar27 + 0xf);
    uStack_138 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar27 + 0xf) >> 8);
    cStack_199 = *(char *)((long)pppppppuVar27 + 0x17);
    pppppppuVar27[1] = (undefined8 ******)0x0;
    pppppppuVar27[2] = (undefined8 ******)0x0;
    *pppppppuVar27 = (undefined8 ******)0x0;
    uStack_1a0 = uStack_138;
    uStack_1a8 = uStack_140;
    uStack_1a1 = uStack_139;
    lStack_198 = 0;
    func_0x000107c2b080(&pppppppuStack_1b0);
    uStack_190 = 6;
    uStack_18c = (undefined8 *******)((ulong)uStack_18c & 0xffffffff00000000);
    bStack_14c = 9;
    FUN_10a777d70(param_5,&pppppppuStack_1b0);
    if (0x10 < (ulong)bStack_14c) {
LAB_10a77d080:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a77d084);
      (*pcVar9)();
    }
    (*(code *)(&PTR_FUN_110ba1f88)[bStack_14c])(&uStack_18c);
    if (cStack_199 < '\0') {
      __ZdlPv(pppppppuStack_1b0);
    }
    if (lStack_1d0 < 0) {
      __ZdlPv(pppppppuStack_1e0);
    }
    puVar7 = PTR___ZSt7nothrow_1103469d8;
  }
  lVar25 = *param_5;
  lVar12 = param_5[1];
  lVar13 = lVar12 - lVar25;
  uVar18 = (lVar13 >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar23 = uVar18;
  if (lVar13 < 1) {
    lVar13 = 0;
    uVar23 = 0;
  }
  else {
    do {
      lVar13 = uVar23 * 0x68;
      __ZnwmRKSt9nothrow_t(lVar13,puVar7);
      if (lVar13 != 0) goto LAB_10a77d018;
      uVar14 = uVar23 >> 1;
      bVar10 = 1 < uVar23;
      uVar23 = uVar14;
    } while (bVar10);
    lVar13 = 0;
  }
LAB_10a77d018:
  FUN_10a7afdd4(lVar25,lVar12,uVar18,lVar13,uVar23);
  if (lVar13 != 0) {
    __ZdlPv(lVar13);
    lVar25 = lVar13;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pppppppuStack_1b0 = &ppppppuStack_230;
  FUN_10a0426d8(&pppppppuStack_1b0);
  do {
    do {
      FUN_10a7a31fc(param_5);
      __Unwind_Resume(lVar25);
    } while (-1 < lStack_1d0);
    __ZdlPv(pppppppuStack_1e0);
  } while( true );
}



/* Entry: 10a77c4d0; end: 10a77d1ab;  */

/* WARNING: Removing unreachable block (ram,0x00010a77ce50) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a77c4d0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,long param_6,undefined8 *param_7,long *param_8,int param_9)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *******pppppppuVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined8 ******ppppppuVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 ******ppppppuVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long *plVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long *plVar24;
  undefined8 *******pppppppuVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 ******ppppppuStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *******pppppppuStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined4 uStack_170;
  undefined8 *******pppppppuStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 uStack_131;
  undefined8 *******pppppppuStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  char cStack_119;
  long lStack_118;
  undefined2 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  long lStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  byte bStack_cc;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  ulong uStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  if (param_6 != 0) {
    ppppppuStack_1b0 = (undefined8 ******)0x0;
    ppppppuStack_1a8 = (undefined8 ******)0x0;
    uStack_1a0 = 0;
    plVar14 = *(long **)(param_6 + 0x1e8);
    plVar1 = (long *)(param_6 + 0x1f0);
    while (plVar14 != plVar1) {
      if (*(char *)((long)plVar14 + 0x37) < '\0') {
        func_0x000107c3192c(&pppppppuStack_160,plVar14[4],plVar14[5]);
      }
      else {
        lStack_158 = plVar14[5];
        pppppppuStack_160 = (undefined8 *******)plVar14[4];
        lStack_150 = plVar14[6];
      }
      pppppppuVar25 = &pppppppuStack_160;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar25,&DAT_10f2db161,4);
      pppppppuStack_130 = (undefined8 *******)*pppppppuVar25;
      uStack_120 = SUB87(pppppppuVar25[2],0);
      cStack_119 = (char)((ulong)pppppppuVar25[2] >> 0x38);
      uStack_128 = SUB87(pppppppuVar25[1],0);
      uStack_121 = (undefined1)((ulong)pppppppuVar25[1] >> 0x38);
      pppppppuVar25[1] = (undefined8 ******)0x0;
      pppppppuVar25[2] = (undefined8 ******)0x0;
      *pppppppuVar25 = (undefined8 ******)0x0;
      FUN_10a059fa0(&ppppppuStack_1b0,&pppppppuStack_130);
      if (cStack_119 < '\0') {
        __ZdlPv(pppppppuStack_130);
      }
      if (lStack_150 < 0) {
        __ZdlPv(pppppppuStack_160);
      }
      plVar20 = (long *)plVar14[1];
      plVar18 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar18[2];
          bVar9 = (long *)*plVar14 != plVar18;
          plVar18 = plVar14;
        } while (bVar9);
      }
      else {
        do {
          plVar14 = plVar20;
          plVar20 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    }
    plVar20 = *(undefined8 **)(param_6 + 0x1b8) + 1;
    plVar14 = (long *)**(undefined8 **)(param_6 + 0x1b8);
    if (plVar14 != plVar20) {
      do {
        ppppppuVar7 = ppppppuStack_1a8;
        ppppppuVar10 = ppppppuStack_1b0;
        if (*(char *)((long)plVar14 + 0x37) < '\0') {
          func_0x000107c3192c(&pppppppuStack_130,plVar14[4],plVar14[5]);
        }
        else {
          pppppppuStack_130 = (undefined8 *******)plVar14[4];
          uStack_128 = (undefined7)plVar14[5];
          uStack_121 = (undefined1)((ulong)plVar14[5] >> 0x38);
          uStack_120 = (undefined7)plVar14[6];
          cStack_119 = (char)((ulong)plVar14[6] >> 0x38);
        }
        FUN_10a7a42ec(ppppppuVar10,ppppppuVar7,&pppppppuStack_130,&pppppppuStack_160);
        ppppppuVar7 = ppppppuStack_1a8;
        if (cStack_119 < '\0') {
          __ZdlPv(pppppppuStack_130);
        }
        lVar23 = plVar14[8];
        if ((((lVar23 != 0) && (lVar11 = plVar14[7], lVar11 != lRam00000001137eba40)) &&
            (lVar11 != lRam00000001137eba80)) && (ppppppuVar10 == ppppppuVar7)) {
          if (*(char *)((long)plVar14 + 0x37) < '\0') {
            func_0x000107c3192c(&pppppppuStack_130,plVar14[4],plVar14[5]);
            lVar11 = plVar14[7];
            lVar23 = plVar14[8];
          }
          else {
            pppppppuStack_130 = (undefined8 *******)plVar14[4];
            uStack_128 = (undefined7)plVar14[5];
            uStack_121 = (undefined1)((ulong)plVar14[5] >> 0x38);
            uStack_120 = (undefined7)plVar14[6];
            cStack_119 = (char)((ulong)plVar14[6] >> 0x38);
          }
          uStack_110 = *(undefined2 *)(lVar23 + 0x20);
          bStack_cc = 0x10;
          pppppppuStack_160 = (undefined8 *******)&uStack_10c;
          lStack_118 = lVar11;
          if (*(char *)(lVar23 + 100) == '\0') {
            bStack_cc = 0;
            uStack_10c = (undefined8 *******)
                         CONCAT44(uStack_10c._4_4_,*(undefined4 *)(lVar23 + 0x24));
          }
          else {
            FUN_10a3652d8(&pppppppuStack_160);
            bStack_cc = *(byte *)(lVar23 + 100);
          }
          FUN_10a777d70(param_5,&pppppppuStack_130);
          if (0x10 < (ulong)bStack_cc) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_cc])(&uStack_10c);
          if (cStack_119 < '\0') {
            __ZdlPv(pppppppuStack_130);
          }
        }
        plVar18 = (long *)plVar14[1];
        plVar24 = plVar14;
        if ((long *)plVar14[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar24[2];
            bVar9 = (long *)*plVar14 != plVar24;
            plVar24 = plVar14;
          } while (bVar9);
        }
        else {
          do {
            plVar14 = plVar18;
            plVar18 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      } while (plVar14 != plVar20);
    }
    plVar14 = *(long **)(param_6 + 0x1e8);
    if (plVar14 != plVar1) {
      pppppppuVar25 = (undefined8 *******)0x3f800000;
      do {
        uVar26 = SUB84(pppppppuVar25,0);
        lVar23 = *param_8;
        if (lVar23 != param_8[1]) {
          do {
            if (*(long *)(lVar23 + 0x18) == plVar14[7]) goto LAB_10a77ce58;
            lVar23 = lVar23 + 0x20;
          } while (lVar23 != param_8[1]);
        }
        plVar20 = (long *)plVar14[8];
        uVar29 = 0xbf800000;
        if (plVar20 == (long *)0x0) {
          plVar18 = (long *)0x0;
LAB_10a77c83c:
          bVar9 = true;
          uVar26 = 0xbf800000;
          uVar27 = 0xbf800000;
          uVar28 = 0xbf800000;
        }
        else {
          plVar18 = plVar20;
          (**(code **)(*plVar20 + 0x10))();
          if (plVar18 == (long *)0x0) goto LAB_10a77c83c;
          uVar29 = uVar26;
          (**(code **)(*plVar18 + 0xd8))(plVar18);
          uVar28 = (undefined4)param_4;
          uVar27 = (undefined4)param_3;
          uVar26 = (undefined4)param_2;
          bVar9 = false;
        }
        if (*(char *)((long)plVar14 + 0x37) < '\0') {
          func_0x000107c3192c(&uStack_c0,plVar14[4],plVar14[5]);
        }
        else {
          uStack_b8 = (undefined7)plVar14[5];
          uStack_b1 = (undefined1)((ulong)plVar14[5] >> 0x38);
          uStack_c0 = (undefined7)plVar14[4];
          uStack_b9 = (undefined1)((ulong)plVar14[4] >> 0x38);
          uStack_b0 = plVar14[6];
        }
        uVar21 = CONCAT17(uStack_b1,uStack_b8);
        if (-1 < (long)uStack_b0) {
          uVar21 = uStack_b0 >> 0x38;
        }
        FUN_10a003c90(&pppppppuStack_160,uVar21 + 9,&pppppppuStack_198);
        pppppppuVar3 = pppppppuStack_160;
        if (-1 < lStack_150) {
          pppppppuVar3 = &pppppppuStack_160;
        }
        if (uVar21 != 0) {
          _memmove(pppppppuVar3,&uStack_c0,uVar21);
        }
        *(undefined8 *)((long)pppppppuVar3 + uVar21) = 0x614d6e694d76755f;
        pppppppuVar25 = pppppppuStack_160;
        *(undefined2 *)((undefined8 *)((long)pppppppuVar3 + uVar21) + 1) = 0x78;
        lVar23 = lStack_150;
        uStack_128 = (undefined7)lStack_158;
        uStack_121 = (undefined1)((ulong)lStack_158 >> 0x38);
        pppppppuStack_130 = pppppppuStack_160;
        lStack_158 = 0;
        lStack_150 = 0;
        pppppppuStack_160 = (undefined8 *******)0x0;
        uStack_120 = (undefined7)lVar23;
        cStack_119 = (char)((ulong)lVar23 >> 0x38);
        lStack_118 = 0;
        func_0x000107c2b080(&pppppppuStack_130);
        uStack_110 = 9;
        uStack_10c = (undefined8 *******)CONCAT44(uVar26,uVar29);
        uStack_104 = CONCAT44(uVar28,uVar27);
        bStack_cc = 5;
        FUN_10a777d70(param_5,&pppppppuStack_130);
        if (0x10 < (ulong)bStack_cc) goto LAB_10a77d080;
        (*(code *)(&PTR_FUN_110ba1f88)[bStack_cc])(&uStack_10c);
        if (cStack_119 < '\0') {
          __ZdlPv(pppppppuStack_130);
        }
        if (lStack_150 < 0) {
          __ZdlPv(pppppppuStack_160);
        }
        if (param_9 != 0) {
          if (bVar9) {
            lStack_158 = 0;
            pppppppuStack_160 = (undefined8 *******)0x3f800000;
            uStack_148 = 0;
            lStack_150 = 0x3f800000;
            uStack_140 = 0x3f800000;
          }
          else {
            (**(code **)(*plVar18 + 0x90))(&pppppppuStack_160,plVar18);
          }
          if (plVar20 == (long *)0x0) {
            uVar22 = 0;
            uVar15 = 0;
            lStack_180 = 0;
            lStack_178 = 0;
            uStack_170 = 0;
          }
          else {
            (**(code **)(*plVar20 + 0x20))();
            uVar22 = *(uint *)(plVar20 + 1);
            lStack_178 = plVar20[3];
            lStack_180 = plVar20[2];
            uStack_170 = (undefined4)plVar20[4];
            uVar15 = *(int *)((long)plVar20 + 0xc) << 3;
          }
          uVar21 = CONCAT17(uStack_b1,uStack_b8);
          if (-1 < (long)uStack_b0) {
            uVar21 = uStack_b0 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_198,uVar21 + 10,&uStack_131);
          pppppppuVar25 = pppppppuStack_198;
          if (-1 < lStack_188) {
            pppppppuVar25 = &pppppppuStack_198;
          }
          if (uVar21 != 0) {
            _memmove(pppppppuVar25,&uStack_c0,uVar21);
          }
          puVar2 = (undefined8 *)((long)pppppppuVar25 + uVar21);
          *puVar2 = 0x6f66736e6172745f;
          *(undefined2 *)(puVar2 + 1) = 0x6d72;
          *(undefined1 *)((long)puVar2 + 10) = 0;
          lVar23 = lStack_188;
          uStack_128 = (undefined7)uStack_190;
          uStack_121 = (undefined1)((ulong)uStack_190 >> 0x38);
          pppppppuStack_130 = pppppppuStack_198;
          pppppppuStack_198 = (undefined8 *******)0x0;
          uStack_190 = 0;
          lStack_188 = 0;
          uStack_120 = (undefined7)lVar23;
          cStack_119 = (char)((ulong)lVar23 >> 0x38);
          lStack_118 = 0;
          func_0x000107c2b080(&pppppppuStack_130);
          uStack_110 = 10;
          uStack_104 = lStack_158;
          uStack_10c = pppppppuStack_160;
          uStack_f4 = uStack_148;
          lStack_fc = lStack_150;
          uStack_ec = uStack_140;
          bStack_cc = 7;
          FUN_10a777d70(param_5,&pppppppuStack_130);
          if (0x10 < (ulong)bStack_cc) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_cc])(&uStack_10c);
          if (cStack_119 < '\0') {
            __ZdlPv(pppppppuStack_130);
          }
          if (lStack_188 < 0) {
            __ZdlPv(pppppppuStack_198);
          }
          uVar21 = CONCAT17(uStack_b1,uStack_b8);
          if (-1 < (long)uStack_b0) {
            uVar21 = uStack_b0 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_198,uVar21 + 0xc,&uStack_131);
          pppppppuVar25 = pppppppuStack_198;
          if (-1 < lStack_188) {
            pppppppuVar25 = &pppppppuStack_198;
          }
          if (uVar21 != 0) {
            _memmove(pppppppuVar25,&uStack_c0,uVar21);
          }
          puVar2 = (undefined8 *)((long)pppppppuVar25 + uVar21);
          *puVar2 = 0x43726564726f625f;
          *(undefined4 *)(puVar2 + 1) = 0x726f6c6f;
          *(undefined1 *)((long)puVar2 + 0xc) = 0;
          lVar23 = lStack_188;
          uStack_128 = (undefined7)uStack_190;
          uStack_121 = (undefined1)((ulong)uStack_190 >> 0x38);
          pppppppuStack_130 = pppppppuStack_198;
          pppppppuStack_198 = (undefined8 *******)0x0;
          uStack_190 = 0;
          lStack_188 = 0;
          uStack_120 = (undefined7)lVar23;
          cStack_119 = (char)((ulong)lVar23 >> 0x38);
          lStack_118 = 0;
          func_0x000107c2b080(&pppppppuStack_130);
          uStack_110 = 9;
          uStack_104 = ((long *)((ulong)&lStack_180 | 4))[1];
          uStack_10c = *(undefined8 ********)((ulong)&lStack_180 | 4);
          bStack_cc = 5;
          FUN_10a777d70(param_5,&pppppppuStack_130);
          if (0x10 < (ulong)bStack_cc) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_cc])(&uStack_10c);
          if (cStack_119 < '\0') {
            __ZdlPv(pppppppuStack_130);
          }
          if (lStack_188 < 0) {
            __ZdlPv(pppppppuStack_198);
          }
          uVar21 = CONCAT17(uStack_b1,uStack_b8);
          if (-1 < (long)uStack_b0) {
            uVar21 = uStack_b0 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_198,uVar21 + 0xd,&uStack_131);
          pppppppuVar25 = pppppppuStack_198;
          if (-1 < lStack_188) {
            pppppppuVar25 = &pppppppuStack_198;
          }
          if (uVar21 != 0) {
            _memmove(pppppppuVar25,&uStack_c0,uVar21);
          }
          puVar2 = (undefined8 *)((long)pppppppuVar25 + uVar21);
          *puVar2 = 0x72656c706d61735f;
          *(undefined8 *)((long)puVar2 + 5) = 0x657461745372656c;
          *(undefined1 *)((long)puVar2 + 0xd) = 0;
          lVar23 = lStack_188;
          uStack_128 = (undefined7)uStack_190;
          uStack_121 = (undefined1)((ulong)uStack_190 >> 0x38);
          pppppppuStack_130 = pppppppuStack_198;
          uStack_190 = 0;
          lStack_188 = 0;
          pppppppuStack_198 = (undefined8 *******)0x0;
          uStack_120 = (undefined7)lVar23;
          cStack_119 = (char)((ulong)lVar23 >> 0x38);
          lStack_118 = 0;
          func_0x000107c2b080(&pppppppuStack_130);
          uStack_110 = 6;
          uStack_10c = (undefined8 *******)CONCAT44(uStack_10c._4_4_,uVar15 | uVar22);
          bStack_cc = 9;
          FUN_10a777d70(param_5,&pppppppuStack_130);
          if (0x10 < (ulong)bStack_cc) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_cc])(&uStack_10c);
          if (cStack_119 < '\0') {
            __ZdlPv(pppppppuStack_130);
          }
          if (lStack_188 < 0) {
            __ZdlPv(pppppppuStack_198);
            if (!bVar9) goto LAB_10a77cd0c;
LAB_10a77ccf4:
            iVar17 = 0;
            iVar19 = 0;
          }
          else {
            if (bVar9) goto LAB_10a77ccf4;
LAB_10a77cd0c:
            plVar20 = plVar18;
            (**(code **)(*plVar18 + 0xb0))();
            iVar19 = (int)plVar20;
            (**(code **)(*plVar18 + 0xb8))();
            iVar17 = (int)plVar18;
          }
          uVar21 = CONCAT17(uStack_b1,uStack_b8);
          if (-1 < (long)uStack_b0) {
            uVar21 = uStack_b0 >> 0x38;
          }
          FUN_10a003c90(&pppppppuStack_198,uVar21 + 5,&uStack_131);
          pppppppuVar25 = pppppppuStack_198;
          if (-1 < lStack_188) {
            pppppppuVar25 = &pppppppuStack_198;
          }
          if (uVar21 != 0) {
            _memmove(pppppppuVar25,&uStack_c0,uVar21);
          }
          *(undefined4 *)((long)pppppppuVar25 + uVar21) = 0x7a69735f;
          *(undefined2 *)((undefined4 *)((long)pppppppuVar25 + uVar21) + 1) = 0x65;
          lVar23 = lStack_188;
          uStack_128 = (undefined7)uStack_190;
          uStack_121 = (undefined1)((ulong)uStack_190 >> 0x38);
          pppppppuStack_130 = pppppppuStack_198;
          uStack_190 = 0;
          lStack_188 = 0;
          pppppppuStack_198 = (undefined8 *******)0x0;
          uStack_120 = (undefined7)lVar23;
          cStack_119 = (char)((ulong)lVar23 >> 0x38);
          lStack_118 = 0;
          func_0x000107c2b080(&pppppppuStack_130);
          uStack_110 = 9;
          fVar4 = 1.0 / (float)iVar19;
          if (iVar19 < 1) {
            fVar4 = 0.0;
          }
          pppppppuVar25 = (undefined8 *******)(ulong)(uint)fVar4;
          uStack_10c = (undefined8 *******)CONCAT44((float)iVar17,(float)iVar19);
          fVar5 = 1.0 / (float)iVar17;
          if (iVar17 < 1) {
            fVar5 = 0.0;
          }
          param_2 = (ulong)(uint)fVar5;
          uStack_104 = CONCAT44(fVar5,fVar4);
          bStack_cc = 5;
          FUN_10a777d70(param_5,&pppppppuStack_130);
          if (0x10 < (ulong)bStack_cc) goto LAB_10a77d080;
          (*(code *)(&PTR_FUN_110ba1f88)[bStack_cc])(&uStack_10c);
          if (cStack_119 < '\0') {
            __ZdlPv(pppppppuStack_130);
          }
          if (lStack_188 < 0) {
            __ZdlPv(pppppppuStack_198);
          }
        }
LAB_10a77ce58:
        plVar20 = (long *)plVar14[1];
        plVar18 = plVar14;
        if ((long *)plVar14[1] == (long *)0x0) {
          do {
            plVar14 = (long *)plVar18[2];
            bVar9 = (long *)*plVar14 != plVar18;
            plVar18 = plVar14;
          } while (bVar9);
        }
        else {
          do {
            plVar14 = plVar20;
            plVar20 = (long *)*plVar14;
          } while ((long *)*plVar14 != (long *)0x0);
        }
      } while (plVar14 != plVar1);
    }
    pppppppuStack_130 = &ppppppuStack_1b0;
    FUN_10a0426d8(&pppppppuStack_130);
  }
  plVar14 = (long *)param_7[1];
  puVar6 = PTR___ZSt7nothrow_1103469d8;
  for (plVar1 = (long *)*param_7; PTR___ZSt7nothrow_1103469d8 = puVar6, plVar1 != plVar14;
      plVar1 = plVar1 + 0xe) {
    if (*(char *)((long)plVar1 + 0x17) < '\0') {
      func_0x000107c3192c(&pppppppuStack_160,*plVar1,plVar1[1]);
    }
    else {
      lStack_158 = plVar1[1];
      pppppppuStack_160 = (undefined8 *******)*plVar1;
      lStack_150 = plVar1[2];
    }
    pppppppuVar25 = &pppppppuStack_160;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppppuVar25,&UNK_10f675465,10);
    pppppppuStack_130 = (undefined8 *******)*pppppppuVar25;
    uStack_c0 = SUB87(pppppppuVar25[1],0);
    uStack_b9 = (undefined1)*(undefined8 *)((long)pppppppuVar25 + 0xf);
    uStack_b8 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar25 + 0xf) >> 8);
    cStack_119 = *(char *)((long)pppppppuVar25 + 0x17);
    pppppppuVar25[1] = (undefined8 ******)0x0;
    pppppppuVar25[2] = (undefined8 ******)0x0;
    *pppppppuVar25 = (undefined8 ******)0x0;
    uStack_120 = uStack_b8;
    uStack_128 = uStack_c0;
    uStack_121 = uStack_b9;
    lStack_118 = 0;
    func_0x000107c2b080(&pppppppuStack_130);
    uStack_110 = 6;
    uStack_10c = (undefined8 *******)((ulong)uStack_10c & 0xffffffff00000000);
    bStack_cc = 9;
    FUN_10a777d70(param_5,&pppppppuStack_130);
    if (0x10 < (ulong)bStack_cc) {
LAB_10a77d080:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a77d084);
      (*pcVar8)();
    }
    (*(code *)(&PTR_FUN_110ba1f88)[bStack_cc])(&uStack_10c);
    if (cStack_119 < '\0') {
      __ZdlPv(pppppppuStack_130);
    }
    if (lStack_150 < 0) {
      __ZdlPv(pppppppuStack_160);
    }
    puVar6 = PTR___ZSt7nothrow_1103469d8;
  }
  lVar23 = *param_5;
  lVar11 = param_5[1];
  lVar12 = lVar11 - lVar23;
  uVar16 = (lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
  uVar21 = uVar16;
  if (lVar12 < 1) {
    lVar12 = 0;
    uVar21 = 0;
  }
  else {
    do {
      lVar12 = uVar21 * 0x68;
      __ZnwmRKSt9nothrow_t(lVar12,puVar6);
      if (lVar12 != 0) goto LAB_10a77d018;
      uVar13 = uVar21 >> 1;
      bVar9 = 1 < uVar21;
      uVar21 = uVar13;
    } while (bVar9);
    lVar12 = 0;
  }
LAB_10a77d018:
  FUN_10a7afdd4(lVar23,lVar11,uVar16,lVar12,uVar21);
  if (lVar12 != 0) {
    __ZdlPv(lVar12);
    lVar23 = lVar12;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  pppppppuStack_130 = &ppppppuStack_1b0;
  FUN_10a0426d8(&pppppppuStack_130);
  do {
    do {
      FUN_10a7a31fc(param_5);
      __Unwind_Resume(lVar23);
    } while (-1 < lStack_150);
    __ZdlPv(pppppppuStack_160);
  } while( true );
}



/* Entry: 10a77d1ac; end: 10a77d35b;  */

void FUN_10a77d1ac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  
  FUN_10a3323f4(param_2,param_3);
  if ((param_2 != 0) && (plVar1 = *(long **)(param_2 + 0x268), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010a77d200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa0))(param_1,plVar1,param_4,param_5);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  param_1[3] = 0;
  param_1[2] = 0x3f800000;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  return;
}



/* Entry: 10a77d35c; end: 10a77d60f;  */

void FUN_10a77d35c(float *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  
  plVar3 = (long *)param_2[1];
  uVar24 = 0;
  fVar27 = 0.0;
  fVar12 = 1.0;
  if (plVar3 == (long *)0x0) {
    fVar26 = 0.0;
    fVar9 = 1.0;
    fVar8 = 0.0;
    fVar11 = 0.0;
    uVar20 = 0x3f800000;
    fVar7 = fVar12;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    uVar24 = 0;
    fVar26 = 0.0;
    fVar9 = 1.0;
    fVar8 = 0.0;
    fVar11 = 0.0;
    uVar20 = 0x3f800000;
    fVar27 = 0.0;
    fVar7 = 1.0;
    if (plVar3 != (long *)0x0) {
      if (*param_2 == 0) {
        uVar20 = NEON_fmov(0x3f800000,4);
        uVar24 = 0;
        uVar28 = 0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar8 = 0.0;
      }
      else {
        uVar20 = *(undefined8 *)param_2[3];
        uVar21 = ((undefined8 *)param_2[3])[1];
        plVar6 = *(long **)(*param_2 + 0x28);
        plVar4 = plVar6;
        (**(code **)(*plVar6 + 0x28))();
        (**(code **)(*plVar6 + 0x30))();
        uVar20 = NEON_scvtf(uVar20,4);
        uVar21 = NEON_scvtf(uVar21,4);
        uVar14 = NEON_umax(CONCAT44((int)plVar6,(int)plVar4),0x100000001,4);
        uVar14 = NEON_scvtf(uVar14,4);
        fVar7 = (float)uVar20 / (float)uVar14;
        fVar11 = (float)((ulong)uVar14 >> 0x20);
        fVar8 = (float)((ulong)uVar20 >> 0x20) / fVar11;
        fVar9 = (float)uVar21 / (float)uVar14;
        fVar11 = (float)((ulong)uVar21 >> 0x20) / fVar11;
        fVar12 = fVar8 * 0.0;
        if ((int)param_2[2] == 1) {
          uVar20 = NEON_ext(CONCAT44(fVar8,fVar7),CONCAT44(fVar11,fVar9),4,1);
          fVar26 = (fVar9 - (float)uVar20 * 4.371139e-08) + 0.0;
          fVar27 = fVar8 + (float)((ulong)uVar20 >> 0x20) * 4.371139e-08 + 0.0;
          fVar12 = fVar9 * 0.0 + fVar12 + 1.0;
          fVar9 = fVar9 - fVar7;
          fVar11 = fVar11 - fVar8;
          uVar20 = NEON_rev64(CONCAT44(fVar11 * -4.371139e-08,fVar9 * -4.371139e-08),4);
          uVar24 = NEON_rev64(CONCAT44(fVar11 * 0.0,fVar9 * -0.0),4);
          uVar28 = (ulong)(uint)fVar11;
          fVar8 = -fVar9;
        }
        else {
          fVar26 = fVar7 + fVar12 + 0.0;
          fVar27 = fVar8 + fVar7 * 0.0 + 0.0;
          fVar12 = fVar7 * 0.0 + fVar12 + 1.0;
          uVar20 = CONCAT44(fVar11 - fVar8,fVar9 - fVar7);
          fVar8 = (fVar11 - fVar8) * 0.0;
          uVar24 = CONCAT44(fVar8,(fVar9 - fVar7) * 0.0);
          uVar28 = uVar24;
        }
      }
      fVar11 = (float)uVar28;
      plVar4 = plVar3 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      fVar9 = (float)((ulong)uVar20 >> 0x20);
      fVar7 = fVar12;
      if (lVar5 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  fVar12 = *(float *)(param_2 + 5);
  fVar10 = *(float *)((long)param_2 + 0x2c);
  fVar13 = *(float *)(param_2 + 6);
  fVar15 = *(float *)((long)param_2 + 0x34);
  fVar16 = *(float *)(param_2 + 7);
  fVar17 = *(float *)((long)param_2 + 0x3c);
  fVar18 = *(float *)(param_2 + 8);
  fVar19 = *(float *)((long)param_2 + 0x44);
  fVar22 = *(float *)(param_2 + 9);
  fVar29 = (float)uVar20;
  *param_1 = fVar8 * fVar10 + fVar12 * fVar29 + fVar13 * fVar26;
  param_1[1] = fVar9 * fVar10 + fVar12 * fVar11 + fVar13 * fVar27;
  fVar25 = (float)(uVar24 >> 0x20);
  fVar23 = (float)uVar24;
  param_1[2] = fVar10 * fVar25 + fVar12 * fVar23 + fVar13 * fVar7;
  param_1[3] = fVar8 * fVar16 + fVar15 * fVar29 + fVar17 * fVar26;
  param_1[4] = fVar9 * fVar16 + fVar15 * fVar11 + fVar17 * fVar27;
  param_1[5] = fVar16 * fVar25 + fVar15 * fVar23 + fVar17 * fVar7;
  param_1[6] = fVar8 * fVar19 + fVar18 * fVar29 + fVar22 * fVar26;
  param_1[7] = fVar9 * fVar19 + fVar18 * fVar11 + fVar22 * fVar27;
  param_1[8] = fVar19 * fVar25 + fVar18 * fVar23 + fVar22 * fVar7;
  return;
}



/* Entry: 10a77d610; end: 10a77d6ab;  */

undefined8 *
FUN_10a77d610(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_4;
  param_1[6] = 0;
  param_1[5] = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[8] = 0;
  param_1[7] = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  FUN_10a350958(param_1,param_3);
  return param_1;
}



/* Entry: 10a77d6ac; end: 10a77d6df;  */

long FUN_10a77d6ac(long param_1)

{
  FUN_10a350abc(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a77d6e0; end: 10a77d7bb;  */

void FUN_10a77d6e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_2[1];
  if ((plVar4 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 != (long *)0x0))
  {
    plVar6 = (long *)*param_2;
    plStack_40 = plVar6;
    plStack_38 = plVar4;
    if (plVar6 == (long *)0x0) {
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 != 0) goto LAB_10a77d790;
    }
    else {
      uStack_48 = 0;
      (**(code **)(*plVar6 + 0x48))(param_1,plVar6,param_2[3],&uStack_48);
      plVar1 = plVar4 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 != 0) {
        return;
      }
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (plVar6 != (long *)0x0) {
      return;
    }
  }
LAB_10a77d790:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a77d7bc; end: 10a77da5f;  */

void FUN_10a77d7bc(long *param_1,long *param_2,ulong param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iStack_54;
  
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  plVar6 = (long *)*param_2;
  while (plVar6 != param_2 + 1) {
    lVar5 = *param_5;
    if (lVar5 != param_5[1]) {
      do {
        if (*(long *)(lVar5 + 0x18) == plVar6[7]) {
          FUN_10a36f2a4(param_1 + 6,plVar6 + 4);
          break;
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != param_5[1]);
    }
    plVar4 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar2 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_10a77da60(param_1,param_2[2]);
  plVar6 = (long *)*param_2;
  do {
    if (plVar6 == param_2 + 1) {
      return;
    }
    plVar4 = (long *)plVar6[8];
    (**(code **)(*plVar4 + 0x50))();
    iVar3 = (int)plVar4;
    plVar4 = (long *)param_1[1];
    iStack_54 = iVar3;
    if (plVar4 < (long *)param_1[2]) {
      if (*(char *)((long)plVar6 + 0x37) < '\0') {
        func_0x000107c3192c(plVar4,plVar6[4],plVar6[5]);
      }
      else {
        lVar8 = plVar6[5];
        lVar5 = plVar6[4];
        plVar4[2] = plVar6[6];
        plVar4[1] = lVar8;
        *plVar4 = lVar5;
      }
      lVar5 = plVar6[7];
      plVar4[3] = lVar5;
      *(int *)(plVar4 + 4) = iVar3;
      plVar4 = plVar4 + 5;
    }
    else {
      plVar4 = param_1;
      FUN_10a7a39b4(param_1,plVar6 + 4,&iStack_54);
      lVar5 = plVar6[7];
    }
    param_1[1] = (long)plVar4;
    uVar1 = param_1[9] + 0x9e3779b9;
    uVar1 = (lVar5 + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) + 0x9e3779b9;
    param_1[9] = (long)iVar3 + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
    if ((param_3 & 1) != 0) {
      for (lVar8 = *param_4; lVar8 != param_4[1]; lVar8 = lVar8 + 0x20) {
        if (*(long *)(lVar8 + 0x18) == lVar5) goto LAB_10a77d9e0;
      }
      uVar1 = param_1[4];
      if (uVar1 < (ulong)param_1[5]) {
        FUN_10a7a3b3c(param_1 + 3,plVar6 + 4,plVar6[8] + 0x20);
        plVar4 = (long *)(uVar1 + 0x30);
      }
      else {
        plVar4 = param_1 + 3;
        FUN_10a7a3bb4(plVar4,plVar6 + 4,plVar6[8] + 0x20);
      }
      param_1[4] = (long)plVar4;
      uVar1 = param_1[10] + 0x9e3779b9;
      uVar1 = (plVar6[7] + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1) + 0x9e3779b9;
      param_1[10] = *(long *)(plVar6[8] + 0x28) + 0x9e3779b9 + uVar1 * 0x40 + (uVar1 >> 2) ^ uVar1;
    }
LAB_10a77d9e0:
    plVar4 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar2 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a77da60; end: 10a77db1f;  */

long * FUN_10a77da60(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plStack_88;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((ulong)((param_1[2] - lVar2 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10a7a37e0();
      plStack_88 = param_1 + 6;
      FUN_10a044868(&plStack_88);
      func_0x00010a7a3ed4(param_1 + 3);
      FUN_10a7a3f50(param_1);
      return param_1;
    }
    lVar3 = param_1[1];
    uVar1 = param_2;
    plStack_38 = param_1;
    FUN_10a7a37f4();
    lVar2 = param_2 + (lVar3 - lVar2);
    lVar3 = lVar2 + (*param_1 - param_1[1]);
    func_0x00010a7a3838(param_1,*param_1,param_1[1],lVar3);
    lStack_58 = *param_1;
    *param_1 = lVar3;
    param_1[1] = lVar2;
    lStack_40 = param_1[2];
    param_1[2] = param_2 + uVar1 * 0x28;
    param_1 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a7a3954(param_1);
  }
  return param_1;
}



/* Entry: 10a77db20; end: 10a77db67;  */

long FUN_10a77db20(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x30;
  FUN_10a044868(&lStack_28);
  func_0x00010a7a3ed4(param_1 + 0x18);
  FUN_10a7a3f50(param_1);
  return param_1;
}



/* Entry: 10a77db68; end: 10a77df23;  */

bool FUN_10a77db68(long *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((param_3 & 1) == 0) {
    if ((param_1[9] == param_2[9]) && (param_1[10] == param_2[10])) {
      lVar2 = *param_1;
      lVar8 = param_1[1];
      if (lVar8 - lVar2 == param_2[1] - *param_2) {
        if (lVar2 != lVar8) {
          piVar4 = (int *)(*param_2 + 0x20);
          do {
            if (*(long *)(lVar2 + 0x18) != *(long *)(piVar4 + -2) ||
                *(int *)(lVar2 + 0x20) != *piVar4) {
              return false;
            }
            lVar2 = lVar2 + 0x28;
            piVar4 = piVar4 + 10;
          } while (lVar2 != lVar8);
        }
        lVar2 = param_1[3];
        lVar8 = param_1[4];
        if (lVar8 - lVar2 == param_2[4] - param_2[3]) {
          if (lVar2 != lVar8) {
            plVar3 = (long *)(param_2[3] + 0x28);
            do {
              if (*(long *)(lVar2 + 0x18) != plVar3[-2]) {
                return false;
              }
              if (*(long *)(lVar2 + 0x20) != plVar3[-1]) {
                return false;
              }
              if (*(long *)(lVar2 + 0x28) != *plVar3) {
                return false;
              }
              lVar2 = lVar2 + 0x30;
              plVar3 = plVar3 + 6;
            } while (lVar2 != lVar8);
          }
          lVar2 = param_1[6];
          lVar8 = param_1[7];
          if (lVar8 - lVar2 == param_2[7] - param_2[6]) {
            if (lVar2 == lVar8) {
              return true;
            }
            plVar3 = (long *)(param_2[6] + 0x18);
            do {
              lVar5 = lVar2 + 0x20;
              bVar1 = *(long *)(lVar2 + 0x18) == *plVar3;
              plVar3 = plVar3 + 4;
              lVar2 = lVar5;
            } while (bVar1 && lVar5 != lVar8);
            return bVar1;
          }
        }
      }
    }
    return false;
  }
  lVar2 = *param_1;
  lVar8 = param_1[1];
  if (lVar2 != lVar8) {
    lVar5 = lVar2;
    do {
      if (*param_2 != param_2[1]) {
        lVar6 = *param_2;
        do {
          if ((*(long *)(lVar5 + 0x18) == *(long *)(lVar6 + 0x18)) &&
             (*(int *)(lVar5 + 0x20) != *(int *)(lVar6 + 0x20))) {
            return false;
          }
          lVar6 = lVar6 + 0x28;
        } while (lVar6 != param_2[1]);
      }
      lVar5 = lVar5 + 0x28;
    } while (lVar5 != lVar8);
  }
  lVar5 = param_1[3];
  lVar6 = param_1[4];
  if (lVar5 != lVar6) {
    lVar7 = lVar5;
    do {
      if (param_2[3] != param_2[4]) {
        lVar9 = param_2[3];
        do {
          if (*(long *)(lVar7 + 0x18) == *(long *)(lVar9 + 0x18)) {
            if (*(long *)(lVar7 + 0x20) != *(long *)(lVar9 + 0x20)) {
              return false;
            }
            if (*(long *)(lVar7 + 0x28) != *(long *)(lVar9 + 0x28)) {
              return false;
            }
          }
          lVar9 = lVar9 + 0x30;
        } while (lVar9 != param_2[4]);
      }
      lVar7 = lVar7 + 0x30;
    } while (lVar7 != lVar6);
  }
  if (lVar2 != lVar8) {
    do {
      if (lVar5 != lVar6) {
        lVar7 = lVar5;
        do {
          if (*(long *)(lVar7 + 0x18) == *(long *)(lVar2 + 0x18)) goto LAB_10a77dc88;
          lVar7 = lVar7 + 0x30;
        } while (lVar7 != lVar6);
      }
      if (param_2[6] != param_2[7]) {
        lVar7 = param_2[6];
        do {
          if (*(long *)(lVar7 + 0x18) == *(long *)(lVar2 + 0x18)) {
            return false;
          }
          lVar7 = lVar7 + 0x20;
        } while (lVar7 != param_2[7]);
      }
LAB_10a77dc88:
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != lVar8);
  }
  lVar2 = *param_2;
  if (lVar2 != param_2[1]) {
    do {
      if (param_2[3] != param_2[4]) {
        lVar8 = param_2[3];
        do {
          if (*(long *)(lVar8 + 0x18) == *(long *)(lVar2 + 0x18)) goto LAB_10a77dcf8;
          lVar8 = lVar8 + 0x30;
        } while (lVar8 != param_2[4]);
      }
      if (param_1[6] != param_1[7]) {
        lVar8 = param_1[6];
        do {
          if (*(long *)(lVar8 + 0x18) == *(long *)(lVar2 + 0x18)) {
            return false;
          }
          lVar8 = lVar8 + 0x20;
        } while (lVar8 != param_1[7]);
      }
LAB_10a77dcf8:
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != param_2[1]);
  }
  return true;
}



/* Entry: 10a77df24; end: 10a77e8a7;  */

ulong * FUN_10a77df24(ulong *param_1,long *param_2,undefined4 param_3,long param_4,
                     undefined8 param_5,undefined1 **param_6,ulong param_7,undefined8 param_8,
                     undefined8 param_9)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  float fVar27;
  long lVar29;
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  ulong uStack_68;
  ulong uStack_60;
  undefined1 **ppuStack_58;
  uint *puVar21;
  
  uVar26 = 0x9e3779b9;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  (**(code **)(*param_2 + 0xa0))();
  uVar18 = *param_1 + 0x9e3779b9;
  *param_1 = (long)param_2 + (uVar18 >> 2) + uVar18 * 0x40 + 0x9e3779b9 ^ uVar18;
  uVar18 = ((ulong)*(byte *)(param_4 + 0x21a) + 0x2853a3c667 ^ 0x9e3779b9) + 0x9e3779b9;
  uVar18 = (((ulong)*(byte *)(param_4 + 0x219) | uVar18 * 0x40) + (uVar18 >> 2) + 0x9e3779b9 ^
           uVar18) + 0x9e3779b9;
  uVar18 = ((ulong)*(byte *)(param_4 + 0x278) + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18)
           + 0x9e3779b9;
  uVar18 = (((ulong)*(byte *)(param_4 + 0x218) | uVar18 * 0x40) + (uVar18 >> 2) + 0x9e3779b9 ^
           uVar18) + 0x9e3779b9;
  uVar18 = ((ulong)*(byte *)(param_4 + 0x21c) + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18)
           + 0x9e3779b9;
  uVar18 = ((ulong)*(byte *)(param_4 + 0x21d) + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18)
           + 0x9e3779b9;
  uVar20 = uVar26;
  if (*(float *)(param_4 + 0x224) != 0.0) {
    uVar20 = (ulong)(uint)*(float *)(param_4 + 0x224) + 0x9e3779b9;
  }
  uVar18 = (uVar20 + uVar18 * 0x40 + (uVar18 >> 2) ^ uVar18) + 0x9e3779b9;
  uVar18 = ((ulong)*(byte *)(param_4 + 0x244) + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18)
           + 0x9e3779b9;
  uVar18 = (ulong)*(byte *)(param_4 + 0x245) + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18;
  plVar16 = (long *)**(long **)(param_4 + 0x1b8);
  do {
    if (plVar16 == *(long **)(param_4 + 0x1b8) + 1) {
      uVar20 = param_1[1] + 0x9e3779b9;
      param_1[1] = uVar18 + 0x9e3779b9 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      plVar16 = *(long **)(param_4 + 0x200);
      lVar19 = 0x9e3779b9;
      if (plVar16 != (long *)(param_4 + 0x208)) {
        uVar18 = 0;
        do {
          if (*param_6 != param_6[1]) {
            pcVar25 = *param_6;
            do {
              bVar6 = pcVar25[0x17];
              uVar20 = *(ulong *)(pcVar25 + 8);
              if (-1 < (char)bVar6) {
                uVar20 = (ulong)bVar6;
              }
              if (uVar20 != 0) {
                uVar26 = (ulong)*(char *)((long)plVar16 + 0x37);
                plVar17 = plVar16 + 4;
                if ((long)uVar26 < 0) {
                  uVar26 = plVar16[5];
                  plVar17 = (long *)plVar16[4];
                }
                pcVar3 = *(char **)pcVar25;
                if (-1 < (char)bVar6) {
                  pcVar3 = pcVar25;
                }
                uVar23 = uVar26;
                if (uVar20 <= uVar26) {
                  uVar23 = uVar20;
                }
                if (uVar26 != 0) {
                  plVar1 = (long *)((long)plVar17 + uVar23);
                  plVar13 = plVar17;
                  plVar14 = plVar17;
                  plVar12 = plVar1;
                  do {
                    while (plVar14 = (long *)((long)plVar14 + 1), pcVar15 = pcVar3, uVar26 = uVar20,
                          (char)*plVar13 == *pcVar3) {
                      do {
                        pcVar15 = pcVar15 + 1;
                        plVar11 = plVar13;
                        if (uVar26 - 1 == 0) break;
                        if (plVar14 == plVar1) goto LAB_10a77e778;
                        lVar19 = *plVar14;
                        plVar11 = plVar12;
                        plVar14 = (long *)((long)plVar14 + 1);
                        uVar26 = uVar26 - 1;
                      } while ((char)lVar19 == *pcVar15);
                      plVar13 = (long *)((long)plVar13 + 1);
                      plVar12 = plVar11;
                      plVar14 = plVar13;
                      if (plVar13 == plVar1) goto LAB_10a77e778;
                    }
                    plVar13 = (long *)((long)plVar13 + 1);
                  } while (plVar13 != plVar1);
LAB_10a77e778:
                  if ((plVar12 != plVar1) && (plVar12 == plVar17)) goto LAB_10a77e7ac;
                }
              }
              pcVar25 = pcVar25 + 0x18;
            } while (pcVar25 != param_6[1]);
          }
          uVar18 = uVar18 + 0x9e3779b9;
          uVar18 = uVar18 * 0x40 + 0x9e3779b9 + (uVar18 >> 2) + plVar16[7] ^ uVar18;
LAB_10a77e7ac:
          plVar17 = plVar16;
          plVar13 = (long *)plVar16[1];
          if ((long *)plVar16[1] == (long *)0x0) {
            do {
              plVar16 = (long *)plVar17[2];
              bVar10 = (long *)*plVar16 != plVar17;
              plVar17 = plVar16;
            } while (bVar10);
          }
          else {
            do {
              plVar16 = plVar13;
              plVar13 = (long *)*plVar16;
            } while ((long *)*plVar16 != (long *)0x0);
          }
        } while (plVar16 != (long *)(param_4 + 0x208));
        lVar19 = uVar18 + 0x9e3779b9;
      }
      uVar18 = param_1[2] + 0x9e3779b9;
      param_1[2] = lVar19 + uVar18 * 0x40 + (uVar18 >> 2) ^ uVar18;
      puStack_c8 = (undefined1 *)0x0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      FUN_10a77d7bc(auStack_b0,param_5,param_8,param_9,&puStack_c8);
      ppuStack_58 = &puStack_c8;
      FUN_10a044868(&ppuStack_58);
      param_1[4] = uStack_68;
      if ((int)param_8 != 0) {
        param_1[5] = uStack_60;
      }
      puStack_c8 = auStack_80;
      FUN_10a044868(&puStack_c8);
      func_0x00010a7a3ed4(auStack_98);
      FUN_10a7a3f50(auStack_b0);
      return param_1;
    }
    lVar19 = plVar16[8];
    uVar18 = uVar18 + 0x9e3779b9;
    uVar18 = uVar18 * 0x40 + 0x9e3779b9 + (uVar18 >> 2) + (ulong)*(byte *)(lVar19 + 100) ^ uVar18;
    if ((param_7 & 1) != 0) goto LAB_10a77e638;
    uVar20 = uVar26;
    switch((ulong)*(byte *)(lVar19 + 100)) {
    case 0:
      if (*(float *)(lVar19 + 0x24) != 0.0) {
        uVar20 = (ulong)(uint)*(float *)(lVar19 + 0x24) + 0x9e3779b9;
      }
      goto code_r0x00010a77e1bc;
    case 1:
      uVar20 = (ulong)*(int *)(lVar19 + 0x24);
      break;
    case 2:
      if (*(char *)(lVar19 + 0x24) != '\0') {
        uVar20 = 0x9e3779ba;
      }
code_r0x00010a77e1bc:
      lVar19 = (uVar18 + 0x9e3779b9 >> 2) + (uVar18 + 0x9e3779b9) * 0x40;
      goto code_r0x00010a77e630;
    case 3:
      uVar23 = *(ulong *)(lVar19 + 0x24);
      if ((uVar23 & 0x7fffffff) != 0) {
        uVar20 = (uVar23 & 0xffffffff) + 0x9e3779b9;
      }
      uVar24 = uVar26;
      if ((uVar23 & 0x7fffffff00000000) != 0) {
        uVar24 = (uVar23 >> 0x20) + 0x9e3779b9;
      }
      uVar20 = uVar24 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      break;
    case 4:
      if (*(float *)(lVar19 + 0x24) != 0.0) {
        uVar20 = (ulong)(uint)*(float *)(lVar19 + 0x24) + 0x9e3779b9;
      }
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x28) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x28) + 0x9e3779b9;
      }
      uVar20 = uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x2c) + 0x9e3779b9;
      bVar10 = *(float *)(lVar19 + 0x2c) == 0.0;
      goto code_r0x00010a77e388;
    case 5:
      fVar27 = *(float *)(lVar19 + 0x30);
      if (*(float *)(lVar19 + 0x24) != 0.0) {
        uVar20 = (ulong)(uint)*(float *)(lVar19 + 0x24) + 0x9e3779b9;
      }
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x28) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x28) + 0x9e3779b9;
      }
      uVar20 = uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x2c) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x2c) + 0x9e3779b9;
      }
      uVar20 = uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      uVar24 = (ulong)(uint)fVar27 + 0x9e3779b9;
      bVar10 = false;
      if (!NAN(fVar27)) {
        bVar10 = fVar27 == 0.0;
      }
code_r0x00010a77e388:
      uVar23 = uVar26;
      if (!bVar10) {
        uVar23 = uVar24;
      }
code_r0x00010a77e618:
      uVar20 = uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      break;
    case 6:
      auVar8 = *(undefined1 (*) [16])(lVar19 + 0x24);
      auVar30 = NEON_ext(auVar8,auVar8,8,1);
      auVar32._0_8_ = (auVar30._0_8_ & 0xffffffff) + 0x9e3779b9;
      auVar32._8_8_ = (ulong)(uint)auVar8._0_4_ + 0x9e3779b9;
      auVar7._8_4_ = 0x9e3779b9;
      auVar7._0_8_ = 0x9e3779b9;
      auVar7._12_4_ = 0;
      auVar9._8_8_ = (long)(int)-(uint)(auVar8._0_4_ == 0.0);
      auVar9._0_8_ = (long)(int)-(uint)(auVar30._0_4_ == 0.0);
      auVar32 = auVar32 ^ (auVar32 ^ auVar7) & auVar9;
      auVar31._0_8_ = (long)(int)-(uint)(auVar30._4_4_ == 0.0);
      auVar31._8_8_ = (long)(int)-(uint)(auVar8._4_4_ == 0.0);
      auVar30._0_8_ = (ulong)(uint)auVar30._4_4_ + 0x9e3779b9;
      auVar30._8_8_ = (ulong)(uint)auVar8._4_4_ + 0x9e3779b9;
      auVar8._8_4_ = 0x9e3779b9;
      auVar8._0_8_ = 0x9e3779b9;
      auVar8._12_4_ = 0;
      auVar30 = auVar30 ^ (auVar30 ^ auVar8) & auVar31;
      lVar19 = auVar30._0_8_ + auVar32._0_8_ * 0x40 + (auVar32._0_8_ >> 2);
      lVar29 = auVar30._8_8_ + auVar32._8_8_ * 0x40 + (auVar32._8_8_ >> 2);
      auVar28._0_8_ =
           CONCAT26(0,CONCAT15((char)((ulong)lVar19 >> 0x28),
                               CONCAT14((byte)((ulong)lVar19 >> 0x20) ^ auVar32[4],
                                        CONCAT13((byte)((ulong)lVar19 >> 0x18) ^ auVar32[3],
                                                 CONCAT12((byte)((ulong)lVar19 >> 0x10) ^ auVar32[2]
                                                          ,CONCAT11((byte)((ulong)lVar19 >> 8) ^
                                                                    auVar32[1],
                                                                    (byte)lVar19 ^ auVar32[0]))))));
      auVar28[8] = (byte)lVar29 ^ auVar32[8];
      auVar28[9] = (byte)((ulong)lVar29 >> 8) ^ auVar32[9];
      auVar28[10] = (byte)((ulong)lVar29 >> 0x10) ^ auVar32[10];
      auVar28[0xb] = (byte)((ulong)lVar29 >> 0x18) ^ auVar32[0xb];
      auVar28[0xc] = (byte)((ulong)lVar29 >> 0x20) ^ auVar32[0xc];
      auVar28[0xd] = (byte)((ulong)lVar29 >> 0x28) ^ auVar32[0xd];
      auVar28[0xe] = (byte)((ulong)lVar29 >> 0x30) ^ auVar32[0xe];
      auVar28[0xf] = (byte)((ulong)lVar29 >> 0x38) ^ auVar32[0xf];
      uVar20 = auVar28._8_8_ + 0x9e3779b9;
      uVar23 = auVar28._0_8_ + 0x9e3779b9;
      goto code_r0x00010a77e618;
    case 7:
      if (*(float *)(lVar19 + 0x24) != 0.0) {
        uVar20 = (ulong)(uint)*(float *)(lVar19 + 0x24) + 0x9e3779b9;
      }
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x28) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x28) + 0x9e3779b9;
      }
      uVar20 = uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x2c) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x2c) + 0x9e3779b9;
      }
      uVar20 = (uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20) + 0x9e3779b9;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x30) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x30) + 0x9e3779b9;
      }
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x34) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x34) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x38) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x38) + 0x9e3779b9;
      }
      uVar20 = uVar20 * 0x40 + 0x9e3779b9 + (uVar20 >> 2) +
               (uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23) ^ uVar20;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x3c) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x3c) + 0x9e3779b9;
      }
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x40) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x40) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x44) + 0x9e3779b9;
      bVar10 = *(float *)(lVar19 + 0x44) == 0.0;
      goto code_r0x00010a77e604;
    case 8:
      fVar27 = *(float *)(lVar19 + 0x60);
      if (*(float *)(lVar19 + 0x24) != 0.0) {
        uVar20 = (ulong)(uint)*(float *)(lVar19 + 0x24) + 0x9e3779b9;
      }
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x28) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x28) + 0x9e3779b9;
      }
      uVar20 = uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x2c) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x2c) + 0x9e3779b9;
      }
      uVar20 = uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x30) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x30) + 0x9e3779b9;
      }
      uVar20 = (uVar23 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20) + 0x9e3779b9;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x34) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x34) + 0x9e3779b9;
      }
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x38) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x38) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x3c) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x3c) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x40) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x40) + 0x9e3779b9;
      }
      uVar20 = uVar20 * 0x40 + 0x9e3779b9 + (uVar20 >> 2) +
               (uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23) ^ uVar20;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x44) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x44) + 0x9e3779b9;
      }
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x48) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x48) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x4c) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x4c) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x50) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x50) + 0x9e3779b9;
      }
      uVar20 = uVar20 * 0x40 + 0x9e3779b9 + (uVar20 >> 2) +
               (uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23) ^ uVar20;
      uVar23 = uVar26;
      if (*(float *)(lVar19 + 0x54) != 0.0) {
        uVar23 = (ulong)(uint)*(float *)(lVar19 + 0x54) + 0x9e3779b9;
      }
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x58) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x58) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = uVar26;
      if (*(float *)(lVar19 + 0x5c) != 0.0) {
        uVar24 = (ulong)(uint)*(float *)(lVar19 + 0x5c) + 0x9e3779b9;
      }
      uVar23 = uVar24 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = (ulong)(uint)fVar27 + 0x9e3779b9;
      bVar10 = false;
      if (!NAN(fVar27)) {
        bVar10 = fVar27 == 0.0;
      }
code_r0x00010a77e604:
      uVar2 = uVar26;
      if (!bVar10) {
        uVar2 = uVar24;
      }
      uVar23 = (uVar2 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23) + 0x9e3779b9;
      goto code_r0x00010a77e618;
    case 9:
      uVar20 = (ulong)*(uint *)(lVar19 + 0x24);
      break;
    case 10:
      uVar20 = (long)(int)*(long *)(lVar19 + 0x24) + 0x9e3779b9;
      lVar19 = *(long *)(lVar19 + 0x24) >> 0x20;
      goto code_r0x00010a77e41c;
    case 0xb:
      iVar4 = *(int *)(lVar19 + 0x28);
      iVar5 = *(int *)(lVar19 + 0x2c);
      uVar20 = (long)*(int *)(lVar19 + 0x24) + 0x9e3779b9;
      goto code_r0x00010a77e190;
    case 0xc:
      iVar4 = *(int *)(lVar19 + 0x2c);
      iVar5 = *(int *)(lVar19 + 0x30);
      uVar20 = (long)*(int *)(lVar19 + 0x24) + 0x9e3779b9;
      uVar20 = (long)*(int *)(lVar19 + 0x28) + 0x9e3779b9 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
code_r0x00010a77e190:
      lVar19 = (long)iVar5;
      uVar20 = (long)iVar4 + 0x9e3779b9 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
code_r0x00010a77e41c:
      uVar20 = lVar19 + 0x9e3779b9 + uVar20 * 0x40 + (uVar20 >> 2) ^ uVar20;
      uVar23 = (uVar18 + 0x9e3779b9) * 0x40;
      uVar24 = uVar18 + 0x9e3779b9 >> 2;
code_r0x00010a77e434:
      lVar19 = uVar23 + 0x9e3779b9 + uVar24;
      goto code_r0x00010a77e630;
    case 0xd:
      uVar20 = *(ulong *)(lVar19 + 0x24) >> 0x20;
      uVar23 = (*(ulong *)(lVar19 + 0x24) & 0xffffffff) + 0x9e3779b9;
      goto code_r0x00010a77e39c;
    case 0xe:
      puVar22 = (uint *)(lVar19 + 0x28);
      puVar21 = (uint *)(lVar19 + 0x2c);
      uVar23 = (ulong)*(uint *)(lVar19 + 0x24) + 0x9e3779b9;
      goto code_r0x00010a77e1e8;
    case 0xf:
      puVar22 = (uint *)(lVar19 + 0x2c);
      puVar21 = (uint *)(lVar19 + 0x30);
      uVar23 = (ulong)*(uint *)(lVar19 + 0x24) + 0x9e3779b9;
      uVar23 = (ulong)*(uint *)(lVar19 + 0x28) + 0x9e3779b9 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23
      ;
code_r0x00010a77e1e8:
      uVar20 = (ulong)*puVar21;
      uVar23 = uVar23 * 0x40 + 0x9e3779b9 + (uVar23 >> 2) + (ulong)*puVar22 ^ uVar23;
code_r0x00010a77e39c:
      uVar23 = uVar20 + 0x9e3779b9 + uVar23 * 0x40 + (uVar23 >> 2) ^ uVar23;
      uVar24 = (uVar18 + 0x9e3779b9) * 0x40;
      uVar20 = uVar18 + 0x9e3779b9 >> 2;
      goto code_r0x00010a77e434;
    default:
      plVar16 = (long *)&UNK_10f6347d3;
      FUN_10a05bab8();
      ppuStack_58 = param_6;
      FUN_10a044868(&ppuStack_58);
      __Unwind_Resume();
      uVar18 = (*plVar16 + 0x2853a3c667U ^ 0x9e3779b9) + 0x9e3779b9;
      uVar18 = (plVar16[1] + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18) + 0x9e3779b9;
      uVar18 = (plVar16[2] + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18) + 0x9e3779b9;
      return (ulong *)((ulong)*(uint *)(plVar16 + 3) + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^
                      uVar18);
    }
    lVar19 = (uVar18 + 0x9e3779b9) * 0x40 + 0x9e3779b9 + (uVar18 + 0x9e3779b9 >> 2);
code_r0x00010a77e630:
    uVar18 = lVar19 + uVar20 ^ uVar18 + 0x9e3779b9;
LAB_10a77e638:
    plVar17 = plVar16;
    plVar13 = (long *)plVar16[1];
    if ((long *)plVar16[1] == (long *)0x0) {
      do {
        plVar16 = (long *)plVar17[2];
        bVar10 = (long *)*plVar16 != plVar17;
        plVar17 = plVar16;
      } while (bVar10);
    }
    else {
      do {
        plVar16 = plVar13;
        plVar13 = (long *)*plVar16;
      } while ((long *)*plVar16 != (long *)0x0);
    }
  } while( true );
}



/* Entry: 10a77e8a8; end: 10a77e983;  */

ulong FUN_10a77e8a8(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (*param_1 + 0x2853a3c667U ^ 0x9e3779b9) + 0x9e3779b9;
  uVar1 = (param_1[1] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  uVar1 = (param_1[2] + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1) + 0x9e3779b9;
  return (ulong)*(uint *)(param_1 + 3) + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b9 ^ uVar1;
}



/* Entry: 10a77e984; end: 10a77ea67;  */

void FUN_10a77e984(uint *param_1,uint param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  uint uStack_24;
  
  if (param_2 < param_1[0x14]) {
    uStack_24 = param_2;
    if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)) <= (ulong)param_2) {
LAB_10a77ea60:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a77ea64);
      (*pcVar2)();
    }
    if (param_3 <= param_1[0x14] && *(char *)(*(long *)(param_1 + 0xe) + (ulong)param_2) != '\0') {
      if (*param_1 != 0) {
        _bzero(*(long *)(param_1 + 2) + (ulong)*param_1 * (ulong)param_2);
      }
      func_0x0001077f9f4c(param_1 + 0x16,&uStack_24);
      if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 0xe)) <= (ulong)uStack_24)
      goto LAB_10a77ea60;
      *(undefined1 *)(*(long *)(param_1 + 0xe) + (ulong)uStack_24) = 0;
      if ((uStack_24 == param_3) && (param_1[0x14] == param_3 + 1)) {
        param_1[0x14] = param_3;
      }
      else {
        lVar1 = *(long *)(param_1 + 8);
        if ((ulong)(*(long *)(param_1 + 10) - lVar1) < (ulong)(*(long *)(param_1 + 0xc) - lVar1)) {
          FUN_10a0e6678(param_1 + 8,&uStack_24);
        }
      }
    }
  }
  return;
}



/* Entry: 10a77ea68; end: 10a77ebb7;  */

long * FUN_10a77ea68(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar12 = param_2[1];
    uVar7 = *param_2;
    puVar11[2] = param_2[2];
    puVar11[1] = uVar12;
    *puVar11 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar11[3] = param_2[3];
    uVar7 = param_2[4];
    *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(param_2 + 5);
    puVar11[4] = uVar7;
    puVar11 = puVar11 + 6;
    plVar4 = param_1;
  }
  else {
    lVar10 = (long)puVar11 - *param_1;
    uVar6 = (lVar10 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar6) {
      FUN_10a7a40b0();
      uVar3 = (int)param_1 - 1;
      if ((uVar3 < 0x26) && ((0x3e402007e7U >> ((ulong)uVar3 & 0x3f) & 1) != 0)) {
        lVar10 = ((ulong)uVar3 & 0xffff) * 8;
        uVar6 = *(ulong *)(&UNK_10e4db040 + lVar10);
        uVar9 = *(ulong *)(&UNK_10e4db170 + lVar10);
      }
      else {
        FUN_10a0f7058();
        uVar6 = (ulong)param_1 & 0xffffffff;
        uVar9 = 0x1000000000;
      }
      return (long *)(uVar9 | uVar6);
    }
    lVar8 = param_1[2] - *param_1 >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      uVar9 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    puVar5 = param_2;
    plStack_38 = param_1;
    FUN_10a7a40c4();
    puVar1 = (undefined8 *)(uVar9 + lVar10);
    uVar12 = param_2[1];
    uVar7 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar12;
    *puVar1 = uVar7;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    puVar1[3] = param_2[3];
    uVar2 = *(undefined4 *)(param_2 + 5);
    puVar1[4] = param_2[4];
    *(undefined4 *)(puVar1 + 5) = uVar2;
    puVar11 = puVar1 + 6;
    lVar10 = (long)puVar1 + (*param_1 - param_1[1]);
    func_0x00010a7a4108(param_1,*param_1,param_1[1],lVar10);
    lStack_58 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    lStack_40 = param_1[2];
    param_1[2] = uVar9 + (long)puVar5 * 0x30;
    plVar4 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    FUN_10a7a422c(plVar4);
  }
  param_1[1] = (long)puVar11;
  return plVar4;
}



/* Entry: 10a77ebb8; end: 10a77ec17;  */

ulong FUN_10a77ebb8(ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (int)param_1 - 1;
  if ((uVar1 < 0x26) && ((0x3e402007e7U >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    lVar2 = ((ulong)uVar1 & 0xffff) * 8;
    param_1 = *(ulong *)(&UNK_10e4db040 + lVar2);
    uVar3 = *(ulong *)(&UNK_10e4db170 + lVar2);
  }
  else {
    FUN_10a0f7058();
    param_1 = param_1 & 0xffffffff;
    uVar3 = 0x1000000000;
  }
  return uVar3 | param_1;
}



/* Entry: 10a77ec18; end: 10a77ed37;  */

ulong FUN_10a77ec18(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar1 = *param_1;
  uVar4 = 0x9e3779b9;
  if (lVar1 != param_1[1]) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 0x9e3779b9;
      uVar4 = (uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) + *(long *)(lVar1 + 0x18) ^ uVar4) +
              0x9e3779b9;
      uVar4 = ((ulong)*(uint *)(lVar1 + 0x40) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4) +
              0x9e3779b9;
      uVar4 = (ulong)*(uint *)(lVar1 + 0x38) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
      for (lVar5 = *(long *)(lVar1 + 0x20); lVar5 != *(long *)(lVar1 + 0x28); lVar5 = lVar5 + 0x30)
      {
        uVar4 = uVar4 + 0x9e3779b9;
        uVar4 = (uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) + *(long *)(lVar5 + 0x18) ^ uVar4) +
                0x9e3779b9;
        uVar4 = ((long)*(short *)(lVar5 + 0x20) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4)
                + 0x9e3779b9;
        uVar4 = ((ulong)*(uint *)(lVar5 + 0x24) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4)
                + 0x9e3779b9;
        uVar4 = (ulong)*(uint *)(lVar5 + 0x28) + 0x9e3779b9 + uVar4 * 0x40 + (uVar4 >> 2) ^ uVar4;
      }
      lVar1 = lVar1 + 0x48;
    } while (lVar1 != param_1[1]);
    uVar4 = uVar4 + 0x9e3779b9;
  }
  plVar2 = (long *)param_1[5];
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar3 = plVar2[2] ^ uVar3;
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) + uVar3 ^ uVar4;
}



/* Entry: 10a77ed38; end: 10a77f9db;  */

/* WARNING: Removing unreachable block (ram,0x00010a77f438) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a77ed38(undefined8 *param_1,long *param_2,long *******param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  byte bVar8;
  long *******ppppppplVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long ******pppppplVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  long *******ppppppplVar25;
  ulong uVar26;
  long *plVar27;
  long *******ppppppplVar28;
  long ******pppppplVar29;
  long *plVar30;
  long *******ppppppplVar31;
  long *plVar32;
  uint uVar33;
  long *plVar34;
  undefined8 *puVar35;
  long *******ppppppplVar36;
  long ******pppppplVar37;
  uint uVar38;
  uint uVar39;
  long *******ppppppplVar40;
  long *******ppppppplStack_1d0;
  long ******pppppplStack_1b8;
  long *******ppppppplStack_180;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long lStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long lStack_130;
  uint uStack_128;
  undefined1 uStack_124;
  uint uStack_120;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  uint uStack_f8;
  uint uStack_f4;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long lStack_d8;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  undefined8 uStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  undefined8 uStack_a0;
  long *******ppppppplStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  if (param_3 != (long *******)0x0) {
    plVar27 = param_2 + (long)param_3 * 5;
    lVar17 = (long)param_3 * 0x28;
    plVar22 = param_2;
    do {
      ppppppplVar31 = (long *******)plVar22[1];
      if ((long *******)0x7ffffffffffffff7 < ppppppplVar31) {
        func_0x000109ffde50();
        goto LAB_10a77f910;
      }
      ppppppplVar28 = (long *******)*plVar22;
      if (ppppppplVar31 < (long *******)0x17) {
        uStack_a0 = (long *******)CONCAT17((char)ppppppplVar31,(undefined7)uStack_a0);
        ppppppplVar36 = (long *******)&ppppppplStack_b0;
        if (ppppppplVar31 != (long *******)0x0) goto LAB_10a77ee00;
      }
      else {
        ppppppplVar14 = (long *******)0x19;
        if (((ulong)ppppppplVar31 | 7) != 0x17) {
          ppppppplVar14 = (long *******)(((ulong)ppppppplVar31 | 7) + 1);
        }
        ppppppplVar36 = ppppppplVar14;
        __Znwm();
        uStack_a0 = (long *******)((ulong)ppppppplVar14 | 0x8000000000000000);
        ppppppplStack_b0 = ppppppplVar36;
        ppppppplStack_a8 = ppppppplVar31;
LAB_10a77ee00:
        _memmove(ppppppplVar36,ppppppplVar28,ppppppplVar31);
        param_3 = ppppppplVar28;
      }
      *(undefined1 *)((long)ppppppplVar36 + (long)ppppppplVar31) = 0;
      ppppppplStack_e8 = ppppppplStack_a8;
      ppppppplStack_f0 = ppppppplStack_b0;
      ppppppplStack_e0 = uStack_a0;
      lStack_d8 = 0;
      func_0x000107c2b080(&ppppppplStack_f0);
      plVar34 = param_2;
      if (param_2 == plVar27) {
LAB_10a77ee90:
        if (plVar34 == plVar27) goto LAB_10a77f2a0;
        if (plVar34[4] == 0) {
          ppppppplVar31 = (long *******)0x0;
LAB_10a77f470:
          ppppppplStack_108 = (long *******)0x0;
          ppppppplStack_110 = (long *******)0x0;
          uStack_f8 = 0;
          uStack_f4 = 0;
          uStack_100 = 0;
          uStack_fb = 0;
        }
        else {
          ppppppplStack_1d0 = (long *******)0x0;
          pppppplStack_1b8 = (long ******)0x0;
          ppppppplVar28 = (long *******)0x0;
          ppppppplStack_180 = (long *******)0x0;
          puVar35 = (undefined8 *)plVar34[3];
          puVar3 = puVar35 + plVar34[4] * 4;
          bVar8 = 1;
          ppppppplVar14 = (long *******)0x0;
          uVar38 = 0;
          do {
            ppppppplVar31 = ppppppplVar14;
            uVar39 = uVar38;
            if (*(char *)((long)puVar35 + 0x1c) == '\x01') {
              uVar33 = *(uint *)((long)puVar35 + 0x14);
              uVar39 = uVar33;
              if ((uVar38 != 0) && (uVar39 = uVar38, uVar33 != 0 && uVar33 != uVar38))
              goto LAB_10a77f7b0;
            }
            else {
              sVar7 = *(short *)((long)puVar35 + 0x1e);
              if (sVar7 == 0) goto LAB_10a77f7b0;
              ppppppplVar36 = (long *******)*puVar35;
              pppppplVar29 = (long ******)puVar35[1];
              if (pppppplVar29 == (long ******)0x0) {
                bVar8 = 0;
                pppppplVar37 = (long ******)0x0;
                ppppppplVar40 = (long *******)0x0;
              }
              else {
                param_3 = (long *******)0x2e;
                ppppppplVar25 = ppppppplVar36;
                _memchr(ppppppplVar36,0x2e,pppppplVar29);
                ppppppplVar9 = ppppppplStack_1d0;
                pppppplVar13 = pppppplStack_1b8;
                if ((ppppppplVar25 == (long *******)0x0) ||
                   (pppppplVar18 = (long ******)((long)ppppppplVar25 - (long)ppppppplVar36),
                   pppppplVar18 == (long ******)0xffffffffffffffff)) {
                  bVar8 = 0;
                  pppppplVar37 = (long ******)0x0;
                  ppppppplVar40 = (long *******)0x0;
                }
                else {
                  pppppplVar37 = pppppplVar29;
                  if (pppppplVar18 <= pppppplVar29) {
                    pppppplVar37 = pppppplVar18;
                  }
                  ppppppplVar40 = ppppppplVar36;
                  if (ppppppplVar36 == ppppppplVar25) {
                    bVar8 = 0;
                    pppppplVar37 = (long ******)0x0;
                  }
                  else {
                    if (*(char *)((long)ppppppplVar36 + ((long)pppppplVar37 - 1U)) == ']') {
                      lVar16 = -(long)pppppplVar37;
                      pppppplVar13 = pppppplVar37;
                      do {
                        if (pppppplVar13 == (long ******)0x0) goto LAB_10a77efb8;
                        lVar12 = (long)pppppplVar13 - 1;
                        lVar16 = lVar16 + 1;
                        pppppplVar13 = (long ******)((long)pppppplVar13 - 1);
                      } while (*(char *)((long)ppppppplVar36 + lVar12) != '[');
                      pppppplVar13 = pppppplVar37;
                      if ((long ******)-lVar16 <= pppppplVar37) {
                        pppppplVar13 = (long ******)-lVar16;
                      }
                      if (lVar16 != 1) {
                        pppppplVar37 = pppppplVar13;
                      }
                    }
LAB_10a77efb8:
                    if (pppppplVar37 == (long ******)0x0) {
LAB_10a77efec:
                      bVar8 = 0;
                      ppppppplVar9 = ppppppplStack_1d0;
                      pppppplVar13 = pppppplStack_1b8;
                    }
                    else {
                      ppppppplVar9 = ppppppplVar36;
                      pppppplVar13 = pppppplVar37;
                      if (pppppplStack_1b8 != (long ******)0x0) {
                        if (pppppplVar37 != pppppplStack_1b8) goto LAB_10a77efec;
                        ppppppplVar25 = ppppppplVar36;
                        param_3 = ppppppplStack_1d0;
                        _memcmp();
                        if ((int)ppppppplVar25 != 0) {
                          bVar8 = 0;
                          pppppplVar37 = pppppplStack_1b8;
                          ppppppplVar9 = ppppppplStack_1d0;
                          pppppplVar13 = pppppplStack_1b8;
                        }
                      }
                    }
                  }
                }
                pppppplStack_1b8 = pppppplVar13;
                ppppppplStack_1d0 = ppppppplVar9;
                lVar16 = (long)ppppppplVar36 + 1;
                lVar19 = (long)ppppppplVar36 + -1;
                lVar12 = lVar19 + (long)ppppppplVar36 * -2;
                pppppplVar13 = (long ******)0x0;
                do {
                  pppppplVar18 = pppppplVar13;
                  ppppppplVar25 = ppppppplVar36;
                  if (pppppplVar29 == pppppplVar18) goto joined_r0x00010a77f064;
                  pcVar2 = (char *)(lVar19 + (long)pppppplVar29);
                  pppppplVar13 = (long ******)((long)pppppplVar18 + 1);
                  lVar16 = lVar16 + -1;
                  lVar12 = lVar12 + 1;
                  lVar19 = lVar19 + -1;
                } while (*pcVar2 != '.');
                if ((long ******)((long)pppppplVar29 + 1U) != pppppplVar13) {
                  if (pppppplVar29 <= (long ******)((long)pppppplVar29 - (long)pppppplVar13)) {
                    FUN_109ffdddc(&UNK_10f2fca6e);
                    goto LAB_10a77f910;
                  }
                  ppppppplVar36 = (long *******)((long)pppppplVar29 - lVar12);
                  ppppppplVar25 = (long *******)(lVar16 + (long)pppppplVar29);
                  pppppplVar29 = pppppplVar18;
                }
joined_r0x00010a77f064:
                if ((pppppplVar29 != (long ******)0x0) &&
                   (*(char *)((long)ppppppplVar25 + ((long)pppppplVar29 - 1U)) == ']')) {
                  pppppplVar13 = (long ******)0x0;
                  lVar16 = (long)ppppppplVar36 - (long)ppppppplVar25;
                  do {
                    ppppppplVar25 = (long *******)((long)ppppppplVar25 + -1);
                    if (pppppplVar29 == pppppplVar13) goto LAB_10a77f0bc;
                    lVar16 = lVar16 + 1;
                    pppppplVar13 = (long ******)((long)pppppplVar13 + 1);
                  } while (*(char *)((long)ppppppplVar25 + (long)pppppplVar29) != '[');
                  pppppplVar13 = pppppplVar29;
                  if ((long ******)((long)pppppplVar29 - lVar16) <= pppppplVar29) {
                    pppppplVar13 = (long ******)((long)pppppplVar29 - lVar16);
                  }
                  if ((long)pppppplVar29 + 1U != lVar16) {
                    pppppplVar29 = pppppplVar13;
                  }
                }
              }
LAB_10a77f0bc:
              ppppppplVar25 = ppppppplVar14;
              if (ppppppplVar14 == ppppppplVar28) {
LAB_10a77f11c:
                if (ppppppplVar25 != ppppppplVar28) {
                  uVar33 = *(uint *)(puVar35 + 2);
                  uVar38 = *(uint *)((long)ppppppplVar25 + 0x24);
                  if (uVar38 < uVar33 || uVar38 == uVar33) {
                    if (uVar38 < uVar33) {
                      uVar38 = *(uint *)(ppppppplVar25 + 5);
                      if (uVar33 <= *(uint *)(ppppppplVar25 + 5)) {
                        uVar38 = uVar33;
                      }
                      *(uint *)(ppppppplVar25 + 5) = uVar38;
                    }
                  }
                  else {
                    if (*(uint *)(ppppppplVar25 + 5) <= uVar38) {
                      uVar38 = *(uint *)(ppppppplVar25 + 5);
                    }
                    *(uint *)((long)ppppppplVar25 + 0x24) = uVar33;
                    *(uint *)(ppppppplVar25 + 5) = uVar38;
                  }
                  goto LAB_10a77f274;
                }
              }
              else {
                do {
                  if (ppppppplVar25[1] == pppppplVar37) {
                    pppppplVar13 = *ppppppplVar25;
                    param_3 = ppppppplVar40;
                    _memcmp(pppppplVar13,ppppppplVar40,pppppplVar37);
                    if (((int)pppppplVar13 == 0) && (ppppppplVar25[3] == pppppplVar29)) {
                      pppppplVar13 = ppppppplVar25[2];
                      param_3 = ppppppplVar36;
                      _memcmp(pppppplVar13,ppppppplVar36,pppppplVar29);
                      if ((int)pppppplVar13 == 0) goto LAB_10a77f11c;
                    }
                  }
                  ppppppplVar25 = ppppppplVar25 + 6;
                } while (ppppppplVar25 != ppppppplVar28);
              }
              uVar5 = *(undefined4 *)(puVar35 + 2);
              uVar6 = *(undefined4 *)((long)puVar35 + 0x14);
              if (ppppppplVar28 < ppppppplStack_180) {
                *ppppppplVar28 = (long ******)ppppppplVar40;
                ppppppplVar28[1] = pppppplVar37;
                ppppppplVar28[2] = (long ******)ppppppplVar36;
                ppppppplVar28[3] = pppppplVar29;
                *(short *)(ppppppplVar28 + 4) = sVar7;
                *(undefined4 *)((long)ppppppplVar28 + 0x24) = uVar5;
                *(undefined4 *)(ppppppplVar28 + 5) = 0xffffffff;
                *(undefined4 *)((long)ppppppplVar28 + 0x2c) = uVar6;
                ppppppplVar28 = ppppppplVar28 + 6;
              }
              else {
                lVar16 = (long)ppppppplVar28 - (long)ppppppplVar14;
                uVar23 = (lVar16 >> 4) * -0x5555555555555555 + 1;
                if (0x555555555555555 < uVar23) {
                  FUN_10a7a428c();
                  goto LAB_10a77f910;
                }
                lVar12 = (long)ppppppplStack_180 - (long)ppppppplVar14 >> 4;
                uVar26 = lVar12 * 0x5555555555555556;
                if (uVar26 < uVar23 || uVar26 - uVar23 == 0) {
                  uVar26 = uVar23;
                }
                if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
                  uVar26 = 0x555555555555555;
                }
                if (0x555555555555555 < uVar26) {
                  func_0x000109ffded8();
                  goto LAB_10a77f910;
                }
                lVar12 = uVar26 * 0x30;
                __Znwm();
                plVar32 = (long *)(lVar12 + lVar16);
                ppppppplStack_180 = (long *******)(lVar12 + uVar26 * 0x30);
                *plVar32 = (long)ppppppplVar40;
                plVar32[1] = (long)pppppplVar37;
                plVar32[2] = (long)ppppppplVar36;
                plVar32[3] = (long)pppppplVar29;
                *(short *)(plVar32 + 4) = sVar7;
                *(undefined4 *)((long)plVar32 + 0x24) = uVar5;
                *(undefined4 *)(plVar32 + 5) = 0xffffffff;
                *(undefined4 *)((long)plVar32 + 0x2c) = uVar6;
                ppppppplVar28 = (long *******)(plVar32 + 6);
                uVar23 = SUB168(SEXT816(lVar16) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                ppppppplVar31 =
                     (long *******)(plVar32 + ((uVar23 >> 3) - ((long)uVar23 >> 0x3f)) * 6);
                param_3 = ppppppplVar14;
                _memcpy(ppppppplVar31,ppppppplVar14,lVar16);
                if (ppppppplVar14 != (long *******)0x0) {
                  __ZdlPv(ppppppplVar14);
                }
              }
            }
LAB_10a77f274:
            puVar35 = puVar35 + 4;
            ppppppplVar14 = ppppppplVar31;
            uVar38 = uVar39;
          } while (puVar35 != puVar3);
          if (ppppppplVar31 == ppppppplVar28) goto LAB_10a77f470;
          if (uVar39 == 0) {
            ppppppplVar36 = ppppppplVar31;
            do {
              uVar38 = uVar39;
              if (((*(int *)(ppppppplVar36 + 5) != -1) &&
                  (uVar38 = *(int *)(ppppppplVar36 + 5) - *(int *)((long)ppppppplVar36 + 0x24),
                  uVar39 != 0)) && (uVar39 != uVar38)) goto LAB_10a77f7b0;
              uVar39 = uVar38;
              ppppppplVar36 = ppppppplVar36 + 6;
            } while (ppppppplVar36 != ppppppplVar28);
            if ((uVar39 != 0) ||
               (uVar39 = *(uint *)(plVar34 + 2), (bool)(bVar8 & *(uint *)(plVar34 + 2) != 0)))
            goto LAB_10a77f2c8;
LAB_10a77f7b0:
            ppppppplStack_108 = (long *******)0x0;
            ppppppplStack_110 = (long *******)0x0;
            uStack_f8 = 0;
            uStack_f4 = 0;
            uStack_100 = 0;
            uStack_fb = 0;
            ppppppplVar31 = ppppppplVar14;
          }
          else {
LAB_10a77f2c8:
            ppppppplVar14 =
                 (long *******)
                 (((long)ppppppplVar28 - (long)ppppppplVar31 >> 4) * -0x5555555555555555);
            ppppppplStack_80 = (long *******)0x0;
            ppppppplStack_78 = (long *******)0x0;
            ppppppplStack_70 = (long *******)0x0;
            if ((long *******)0x555555555555555 < ppppppplVar14) {
              FUN_10a7a40b0();
              goto LAB_10a77f910;
            }
            uStack_90 = (long *******)&ppppppplStack_80;
            FUN_10a7a40c4();
            ppppppplVar36 =
                 (long *******)
                 ((long)ppppppplVar14 + ((long)ppppppplStack_80 - (long)ppppppplStack_78));
            ppppppplVar40 = ppppppplStack_80;
            func_0x00010a7a4108(&ppppppplStack_80,ppppppplStack_80,ppppppplStack_78,ppppppplVar36);
            uStack_a0 = ppppppplStack_80;
            ppppppplStack_98 = ppppppplStack_70;
            ppppppplStack_b0 = ppppppplStack_80;
            ppppppplStack_a8 = ppppppplStack_80;
            ppppppplStack_80 = ppppppplVar36;
            ppppppplStack_78 = ppppppplVar14;
            ppppppplStack_70 = ppppppplVar14 + (long)param_3 * 6;
            FUN_10a7a422c(&ppppppplStack_b0);
            uVar38 = 0;
            ppppppplVar14 = ppppppplVar31;
            do {
              uVar11 = (uint)*(short *)(ppppppplVar14 + 4);
              FUN_10a77ebb8();
              uVar33 = *(uint *)((long)ppppppplVar14 + 0x2c);
              if (uVar33 == 0) {
                uVar33 = uVar11;
                if (uVar11 == 0) goto LAB_10a77f458;
              }
              else if (uVar33 <= uVar11) {
                uVar33 = uVar11;
              }
              uVar11 = *(uint *)((long)ppppppplVar14 + 0x24);
              if (uVar39 < uVar11 || uVar39 - uVar11 < uVar33) goto LAB_10a77f458;
              if (uVar38 <= uVar11 + uVar33) {
                uVar38 = uVar11 + uVar33;
              }
              ppppppplVar36 = (long *******)ppppppplVar14[3];
              if ((long *******)0x7ffffffffffffff7 < ppppppplVar36) {
                func_0x000109ffde50();
                goto LAB_10a77f910;
              }
              pppppplVar29 = ppppppplVar14[2];
              if (ppppppplVar36 < (long *******)0x17) {
                uStack_b8 = (long *******)CONCAT17((char)ppppppplVar36,(undefined7)uStack_b8);
                ppppppplVar25 = (long *******)&ppppppplStack_c8;
                if (ppppppplVar36 != (long *******)0x0) goto LAB_10a77f3e8;
              }
              else {
                ppppppplVar40 = (long *******)0x19;
                if (((ulong)ppppppplVar36 | 7) != 0x17) {
                  ppppppplVar40 = (long *******)(((ulong)ppppppplVar36 | 7) + 1);
                }
                ppppppplVar25 = ppppppplVar40;
                __Znwm();
                uStack_b8 = (long *******)((ulong)ppppppplVar40 | 0x8000000000000000);
                ppppppplStack_c8 = ppppppplVar25;
                ppppppplStack_c0 = ppppppplVar36;
LAB_10a77f3e8:
                _memmove(ppppppplVar25,pppppplVar29,ppppppplVar36);
              }
              *(undefined1 *)((long)ppppppplVar25 + (long)ppppppplVar36) = 0;
              ppppppplStack_a8 = ppppppplStack_c0;
              ppppppplStack_b0 = ppppppplStack_c8;
              uStack_a0 = uStack_b8;
              ppppppplStack_98 = (long *******)0x0;
              func_0x000107c2b080(&ppppppplStack_b0);
              uStack_90 = (long *******)CONCAT62(uStack_90._2_6_,*(undefined2 *)(ppppppplVar14 + 4))
              ;
              uStack_90 = (long *******)
                          CONCAT44(*(undefined4 *)((long)ppppppplVar14 + 0x24),(undefined4)uStack_90
                                  );
              ppppppplVar40 = (long *******)&ppppppplStack_b0;
              uStack_88 = uVar33;
              FUN_10a77ea68(&ppppppplStack_80);
              param_3 = ppppppplStack_78;
              ppppppplVar36 = ppppppplStack_80;
              ppppppplVar14 = ppppppplVar14 + 6;
            } while (ppppppplVar14 != ppppppplVar28);
            if (uVar39 - uVar38 < 0x10) {
              uVar26 = ((long)ppppppplStack_78 - (long)ppppppplStack_80 >> 4) * -0x5555555555555555;
              uVar23 = uVar26;
              if ((long)ppppppplStack_78 - (long)ppppppplStack_80 < 1) {
                lVar16 = 0;
                uVar23 = 0;
              }
              else {
                do {
                  lVar16 = uVar23 * 0x30;
                  __ZnwmRKSt9nothrow_t(lVar16,PTR___ZSt7nothrow_1103469d8);
                  if (lVar16 != 0) goto LAB_10a77f834;
                  uVar21 = uVar23 >> 1;
                  bVar1 = 1 < uVar23;
                  uVar23 = uVar21;
                } while (bVar1);
                lVar16 = 0;
              }
LAB_10a77f834:
              FUN_10a7aed14(ppppppplVar36,param_3,uVar26,lVar16,uVar23);
              if (lVar16 != 0) {
                __ZdlPv(lVar16);
              }
              ppppppplStack_110 = (long *******)0x0;
              ppppppplStack_108 = (long *******)0x0;
              uStack_f8 = 0;
              uStack_f4._0_1_ = 0;
              uStack_100 = 0;
              uStack_fb = 0;
              FUN_10a7a42a0(&ppppppplStack_110);
              ppppppplStack_108 = ppppppplStack_78;
              ppppppplStack_110 = ppppppplStack_80;
              uStack_100 = SUB85(ppppppplStack_70,0);
              uStack_fb = (undefined3)((ulong)ppppppplStack_70 >> 0x28);
              ppppppplStack_78 = (long *******)0x0;
              ppppppplStack_70 = (long *******)0x0;
              ppppppplStack_80 = (long *******)0x0;
              uStack_f4 = CONCAT31(uStack_f4._1_3_,1);
              uStack_f8 = uVar39;
            }
            else {
LAB_10a77f458:
              param_3 = ppppppplVar40;
              ppppppplStack_108 = (long *******)0x0;
              ppppppplStack_110 = (long *******)0x0;
              uStack_f8 = 0;
              uStack_f4 = 0;
              uStack_100 = 0;
              uStack_fb = 0;
            }
            ppppppplStack_b0 = (long *******)&ppppppplStack_80;
            func_0x00010a1f4614(&ppppppplStack_b0);
          }
        }
        if (ppppppplVar31 != (long *******)0x0) {
          __ZdlPv(ppppppplVar31);
        }
      }
      else {
        lVar16 = lVar17;
        ppppppplVar28 = ppppppplStack_e8;
        ppppppplVar31 = ppppppplStack_f0;
        if (-1 < (long)ppppppplStack_e0) {
          ppppppplVar28 = (long *******)((ulong)ppppppplStack_e0 >> 0x38);
          ppppppplVar31 = (long *******)&ppppppplStack_f0;
        }
        do {
          if ((long *******)plVar34[1] == ppppppplVar28) {
            lVar12 = *plVar34;
            param_3 = ppppppplVar31;
            _memcmp(lVar12,ppppppplVar31,ppppppplVar28);
            if ((int)lVar12 == 0) goto LAB_10a77ee90;
          }
          lVar16 = lVar16 + -0x28;
          plVar34 = plVar34 + 5;
        } while (lVar16 != 0);
LAB_10a77f2a0:
        ppppppplStack_108 = (long *******)0x0;
        ppppppplStack_110 = (long *******)0x0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_100 = 0;
        uStack_fb = 0;
      }
      uVar38 = uStack_f8;
      if ((uStack_f4 & 1) != 0) {
        if ((long)ppppppplStack_e0 < 0) {
          param_3 = ppppppplStack_f0;
          func_0x000107c3192c(&ppppppplStack_160,ppppppplStack_f0,ppppppplStack_e8);
        }
        else {
          ppppppplStack_158 = ppppppplStack_e8;
          ppppppplStack_160 = ppppppplStack_f0;
          ppppppplStack_150 = ppppppplStack_e0;
        }
        lVar12 = lStack_d8;
        ppppppplVar28 = ppppppplStack_108;
        ppppppplVar31 = ppppppplStack_110;
        lStack_148 = lStack_d8;
        ppppppplStack_140 = ppppppplStack_110;
        lVar16 = CONCAT35(uStack_fb,uStack_100);
        ppppppplStack_138 = ppppppplStack_108;
        ppppppplStack_108 = (long *******)0x0;
        uStack_100 = 0;
        uStack_fb = 0;
        ppppppplStack_110 = (long *******)0x0;
        uStack_128 = uStack_f8;
        uStack_124 = (undefined1)uStack_f4;
        if (uVar38 == 0) {
          uVar39 = 0;
        }
        else {
          uVar39 = 0;
          if (uVar38 != 0) {
            uVar39 = *(uint *)(plVar22 + 2) / uVar38;
          }
        }
        plVar34 = (long *)param_1[1];
        uStack_120 = uVar39;
        if (plVar34 < (long *)param_1[2]) {
          plVar34[2] = (long)ppppppplStack_150;
          plVar34[1] = (long)ppppppplStack_158;
          *plVar34 = (long)ppppppplStack_160;
          ppppppplStack_158 = (long *******)0x0;
          ppppppplStack_150 = (long *******)0x0;
          ppppppplStack_160 = (long *******)0x0;
          plVar34[3] = lStack_d8;
          plVar34[4] = 0;
          plVar34[5] = 0;
          plVar34[6] = 0;
          plVar34[5] = (long)ppppppplVar28;
          plVar34[4] = (long)ppppppplVar31;
          plVar34[6] = lVar16;
          ppppppplStack_140 = (long *******)0x0;
          ppppppplStack_138 = (long *******)0x0;
          lStack_130 = 0;
          *(undefined1 *)((long)plVar34 + 0x3c) = (undefined1)uStack_f4;
          *(uint *)(plVar34 + 7) = uStack_f8;
          *(uint *)(plVar34 + 8) = uVar39;
          plVar4 = plVar34;
        }
        else {
          plVar32 = (long *)*param_1;
          uVar23 = ((long)plVar34 - (long)plVar32 >> 3) * -0x71c71c71c71c71c7 + 1;
          lStack_130 = lVar16;
          if (0x38e38e38e38e38e < uVar23) {
            FUN_10a7a42d8();
LAB_10a77f910:
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10a77f914);
            (*pcVar10)();
          }
          lVar19 = (long)param_1[2] - (long)plVar32 >> 3;
          uVar26 = lVar19 * 0x1c71c71c71c71c72;
          if (uVar26 < uVar23 || uVar26 - uVar23 == 0) {
            uVar26 = uVar23;
          }
          if (0x1c71c71c71c71c6 < (ulong)(lVar19 * -0x71c71c71c71c71c7)) {
            uVar26 = 0x38e38e38e38e38e;
          }
          if (0x38e38e38e38e38e < uVar26) {
            func_0x000109ffded8();
            goto LAB_10a77f910;
          }
          plVar15 = (long *)(uVar26 * 0x48);
          __Znwm();
          ppppppplVar14 = ppppppplStack_150;
          plVar4 = (long *)((long)plVar15 + ((long)plVar34 - (long)plVar32));
          plVar4[1] = (long)ppppppplStack_158;
          *plVar4 = (long)ppppppplStack_160;
          ppppppplStack_158 = (long *******)0x0;
          ppppppplStack_150 = (long *******)0x0;
          ppppppplStack_160 = (long *******)0x0;
          plVar4[2] = (long)ppppppplVar14;
          plVar4[3] = lVar12;
          plVar4[4] = (long)ppppppplVar31;
          plVar4[5] = (long)ppppppplVar28;
          plVar4[6] = lVar16;
          ppppppplStack_138 = (long *******)0x0;
          lStack_130 = 0;
          ppppppplStack_140 = (long *******)0x0;
          *(uint *)(plVar4 + 7) = uStack_f8;
          *(undefined1 *)((long)plVar4 + 0x3c) = (undefined1)uStack_f4;
          *(uint *)(plVar4 + 8) = uVar39;
          plVar20 = plVar32;
          plVar24 = plVar15;
          if (plVar32 != plVar34) {
            do {
              lVar12 = plVar20[1];
              lVar16 = *plVar20;
              plVar24[2] = plVar20[2];
              plVar24[1] = lVar12;
              *plVar24 = lVar16;
              plVar20[1] = 0;
              plVar20[2] = 0;
              *plVar20 = 0;
              plVar24[3] = plVar20[3];
              plVar24[5] = 0;
              plVar24[6] = 0;
              lVar16 = plVar20[4];
              plVar24[5] = plVar20[5];
              plVar24[4] = lVar16;
              plVar24[6] = plVar20[6];
              plVar20[4] = 0;
              plVar20[5] = 0;
              plVar20[6] = 0;
              lVar16 = plVar20[7];
              *(undefined1 *)((long)plVar24 + 0x3c) = *(undefined1 *)((long)plVar20 + 0x3c);
              *(int *)(plVar24 + 7) = (int)lVar16;
              *(int *)(plVar24 + 8) = (int)plVar20[8];
              plVar20 = plVar20 + 9;
              plVar24 = plVar24 + 9;
              plVar30 = plVar32;
            } while (plVar20 != plVar34);
            do {
              func_0x00010a1f45d0(plVar30);
              plVar30 = plVar30 + 9;
            } while (plVar30 != plVar34);
          }
          *param_1 = plVar15;
          param_1[2] = plVar15 + uVar26 * 9;
          if (plVar32 != (long *)0x0) {
            __ZdlPv(plVar32);
          }
        }
        param_1[1] = plVar4 + 9;
        ppppppplStack_b0 = (long *******)&ppppppplStack_140;
        func_0x00010a1f4614(&ppppppplStack_b0);
        if ((long)ppppppplStack_150 < 0) {
          __ZdlPv(ppppppplStack_160);
        }
      }
      ppppppplStack_b0 = (long *******)&ppppppplStack_110;
      func_0x00010a1f4614(&ppppppplStack_b0);
      if ((long)ppppppplStack_e0 < 0) {
        __ZdlPv(ppppppplStack_f0);
      }
      plVar22 = plVar22 + 5;
    } while (plVar22 != plVar27);
  }
  return;
}



/* Entry: 10a77f9dc; end: 10a77fa23;  */

undefined8 * FUN_10a77f9dc(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  puStack_28 = param_1 + 4;
  func_0x00010a1f4614(&puStack_28);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a77fa24; end: 10a77fc17;  */

undefined8 * FUN_10a77fa24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  
  puVar1 = param_1;
  FUN_10a03c0d0();
  *puVar1 = &PTR_FUN_110c17a28;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0x3f800000;
  puVar1[0xe] = 1;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0x3f800000;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0x3f800000;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  *(undefined4 *)(puVar1 + 0x1d) = 0x3f800000;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x25) = 0x3f800000;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = puVar1 + 0x29;
  puVar1[0x2a] = puVar1 + 0x29;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = &UNK_10e52b660;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2d] = 0;
  *(undefined2 *)(puVar1 + 0x30) = 0;
  puVar1[0x31] = param_2;
  pbVar2 = (byte *)0x113836510;
  FUN_10ad0621c();
  *(byte *)(param_1 + 0x32) = *pbVar2 >> 6 & 1;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f675470,&UNK_10f6754b9,0x71,&UNK_10f675516);
  }
  FUN_10a5ae998(param_1[1],&PTR_DAT_110b9f988,param_2,param_1);
  return param_1;
}



/* Entry: 10a77fc18; end: 10a77fccb;  */

undefined8 * FUN_10a77fc18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c17a28;
  FUN_10a7a441c(param_1 + 0x26,param_1[0x26]);
  if (param_1[0x2e] != 0) {
    __ZdlPv(param_1[0x2c] + -8);
  }
  func_0x00010a7a437c(param_1 + 0x29);
  FUN_10a7a43ec(param_1 + 0x26);
  func_0x00010a7b1754(param_1 + 0x21);
  func_0x00010a3630e4(param_1 + 0x1e);
  func_0x00010a7b1698(param_1 + 0x19);
  func_0x00010a7b15d0(param_1 + 0x14);
  func_0x00010a7b1570(param_1 + 0xf);
  func_0x00010a7b1504(param_1 + 9);
  func_0x00010a7b143c(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a77fccc; end: 10a77fccf;  */

undefined8 * FUN_10a77fccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c17a28;
  FUN_10a7a441c(param_1 + 0x26,param_1[0x26]);
  if (param_1[0x2e] != 0) {
    __ZdlPv(param_1[0x2c] + -8);
  }
  func_0x00010a7a437c(param_1 + 0x29);
  FUN_10a7a43ec(param_1 + 0x26);
  func_0x00010a7b1754(param_1 + 0x21);
  func_0x00010a3630e4(param_1 + 0x1e);
  func_0x00010a7b1698(param_1 + 0x19);
  func_0x00010a7b15d0(param_1 + 0x14);
  func_0x00010a7b1570(param_1 + 0xf);
  func_0x00010a7b1504(param_1 + 9);
  func_0x00010a7b143c(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  return param_1;
}



/* Entry: 10a77fcd0; end: 10a77fce3;  */

void FUN_10a77fcd0(void)

{
  FUN_10a77fc18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a77fce4; end: 10a780003;  */

void FUN_10a77fce4(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  long lVar15;
  long lStack_70;
  long *plStack_68;
  
  FUN_10a7a441c(param_1 + 0x130,*(undefined8 *)(param_1 + 0x130));
  uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x188) + 0x850) + 0x2c);
  if (0x1d < uVar3) {
    lVar10 = param_1 + 0x148;
    lVar11 = *(long *)(param_1 + 0x150);
    if (lVar11 != lVar10) {
      do {
        if (uVar3 - *(int *)(lVar11 + 0x2c) < 0x1e) {
          lVar12 = *(long *)(lVar11 + 8);
          bVar14 = true;
        }
        else {
          lStack_70 = 0;
          plStack_68 = (long *)0x0;
          plVar9 = *(long **)(lVar11 + 0x18);
          lVar12 = lVar10;
          if (((plVar9 == (long *)0x0) ||
              (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar9, plVar9 == (long *)0x0)
              ) || (lVar15 = *(long *)(lVar11 + 0x10), lStack_70 = lVar15, lVar15 == 0)) {
            plVar9 = plStack_68;
            FUN_10a7a4474(param_1 + 0x160,*(undefined8 *)(lVar11 + 0x20));
            func_0x00010a7a44b0(lVar10,lVar11);
            bVar14 = true;
            if (plVar9 == (long *)0x0) goto LAB_10a77fedc;
          }
          else {
            uVar8 = param_1;
            FUN_10a780004(param_1,&lStack_70);
            uVar7 = (uint)uVar8;
            uVar6 = uVar7 >> 8 & 0xff;
            uVar2 = uVar6;
            if (uVar6 <= (uVar7 & 0xff)) {
              uVar2 = uVar7 & 0xff;
            }
            if (uVar2 == 5) {
              bVar1 = *(char *)(lVar11 + 0x28) + 1;
              *(byte *)(lVar11 + 0x28) = bVar1;
              if (bVar1 < 5) {
                bVar14 = false;
                *(uint *)(lVar11 + 0x2c) = uVar3;
                lVar12 = *(long *)(lVar11 + 8);
                goto LAB_10a77feac;
              }
              if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                plVar13 = (long *)(*(long *)(lVar15 + 0x168) + 0x168);
                if (*(char *)(*(long *)(lVar15 + 0x168) + 0x17f) < '\0') {
                  plVar13 = (long *)*plVar13;
                }
                func_0x00010ae06f08(1,2,&UNK_10f675470,&UNK_10f675537,0xbf,&UNK_10f67558c,in_x6,
                                    in_x7,plVar13,uVar6,uVar8 & 0xff,bVar1);
              }
              if ((uVar7 - 3 & 0xff) < 3) {
                FUN_10a78859c(lVar15);
              }
            }
            else if ((uVar7 - 3 & 0xff) < 3) {
              FUN_10a78859c(lVar15);
            }
            FUN_10a7a4474(param_1 + 0x160,*(undefined8 *)(lVar11 + 0x20));
            func_0x00010a7a44b0(lVar10,lVar11);
            bVar14 = false;
          }
LAB_10a77feac:
          plVar13 = plVar9 + 1;
          do {
            lVar11 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
          }
        }
LAB_10a77fedc:
      } while ((lVar12 != lVar10) && (lVar11 = lVar12, bVar14));
    }
    lVar10 = *(long *)(param_1 + 0x88);
    while (lVar11 = lVar10, lVar10 != 0) {
      while ((plVar9 = *(long **)(lVar11 + 0x20), plVar9 != (long *)0x0 &&
             (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar9, plVar9 != (long *)0x0))
            ) {
        lVar10 = *(long *)(lVar11 + 0x18);
        lStack_70 = lVar10;
        if ((lVar10 != 0) && (*(char *)(lVar10 + 0x28) == '\x01')) {
          if (*(long *)(lVar10 + 8) != 0) {
            if ((*(char **)(lVar10 + 0x18) == (char *)0x0) || (**(char **)(lVar10 + 0x18) != '\x01')
               ) goto LAB_10a77ff60;
            for (plVar13 = *(long **)(*(long *)(lVar10 + 8) + 0x20); plVar13 != (long *)0x0;
                plVar13 = (long *)*plVar13) {
              (**(code **)(*(long *)plVar13[6] + 0x70))();
            }
          }
          *(undefined1 *)(lVar10 + 0x28) = 0;
        }
LAB_10a77ff60:
        lVar10 = param_1 + 0x78;
        func_0x00010a7b5604(lVar10,lVar11);
        plVar13 = plVar9 + 1;
        do {
          lVar11 = *plVar13;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar14) {
            *plVar13 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
        lVar11 = lVar10;
        if (lVar10 == 0) {
          return;
        }
      }
      lVar10 = param_1 + 0x78;
      func_0x00010a7b5604(lVar10,lVar11);
    }
  }
  return;
}



/* Entry: 10a78859c; end: 10a78871b;  */

void FUN_10a78859c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uStack_70;
  
  lVar2 = *(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0);
  if (lVar2 != 0) {
    uVar10 = 0;
    do {
      if ((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0) >> 4) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7886fc);
        (*pcVar4)();
      }
      lVar11 = *(long *)(*(long *)(param_1 + 0x2a0) + uVar10 * 0x10);
      if ((lVar11 != 0) &&
         (lVar3 = *(long *)(lVar11 + 0x230) - *(long *)(lVar11 + 0x228), lVar3 != 0)) {
        uVar12 = 0;
        do {
          if ((ulong)(*(long *)(lVar11 + 0x230) - *(long *)(lVar11 + 0x228) >> 4) <= uVar12) {
            puVar7 = &UNK_10f6921f0;
            FUN_10a00946c();
            func_0x00010a7b1c58(uStack_70);
            __Unwind_Resume();
            if (param_2[2] != 0) {
              FUN_10a779680();
              puVar8 = (undefined8 *)(puVar7 + 0x130);
              puVar1 = *(undefined8 **)(puVar7 + 0x138);
              if (puVar1 < *(undefined8 **)(puVar7 + 0x140)) {
                uVar15 = *param_2;
                puVar1[1] = param_2[1];
                *puVar1 = uVar15;
                *param_2 = 0;
                param_2[1] = 0;
                uVar15 = param_2[2];
                puVar1[3] = param_2[3];
                puVar1[2] = uVar15;
                param_2[2] = 0;
                param_2[3] = 0;
                puVar8 = puVar1 + 4;
              }
              else {
                FUN_10a7a4508();
              }
              *(undefined8 **)(puVar7 + 0x138) = puVar8;
              return;
            }
            return;
          }
          lVar9 = *(long *)(*(long *)(lVar11 + 0x228) + uVar12 * 0x10);
          if (lVar9 != 0) {
            uStack_70 = 0;
            plVar13 = *(long **)(lVar9 + 0x1e8);
            while (plVar13 != (long *)(lVar9 + 0x1f0)) {
              plVar6 = (long *)plVar13[8];
              if ((plVar6 == (long *)0x0) ||
                 ((**(code **)(*plVar6 + 0x18))(), plVar6 == (long *)0x0)) {
                func_0x00010a7b1c58(0);
                return;
              }
              FUN_10a1ed58c();
              plVar6 = (long *)plVar13[1];
              plVar14 = plVar13;
              if ((long *)plVar13[1] == (long *)0x0) {
                do {
                  plVar13 = (long *)plVar14[2];
                  bVar5 = (long *)*plVar13 != plVar14;
                  plVar14 = plVar13;
                } while (bVar5);
              }
              else {
                do {
                  plVar13 = plVar6;
                  plVar6 = (long *)*plVar13;
                } while ((long *)*plVar13 != (long *)0x0);
              }
            }
            func_0x00010a7b1c58(0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != lVar3 >> 4);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != lVar2 >> 4);
  }
  return;
}



/* Entry: 10a78871c; end: 10a7887af;  */

void FUN_10a78871c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_2[2] != 0) {
    FUN_10a779680();
    puVar2 = (undefined8 *)(param_1 + 0x130);
    puVar1 = *(undefined8 **)(param_1 + 0x138);
    if (puVar1 < *(undefined8 **)(param_1 + 0x140)) {
      uVar3 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar3;
      *param_2 = 0;
      param_2[1] = 0;
      uVar3 = param_2[2];
      puVar1[3] = param_2[3];
      puVar1[2] = uVar3;
      param_2[2] = 0;
      param_2[3] = 0;
      puVar2 = puVar1 + 4;
    }
    else {
      FUN_10a7a4508();
    }
    *(undefined8 **)(param_1 + 0x138) = puVar2;
    return;
  }
  return;
}



/* Entry: 10a7887b0; end: 10a788a7b;  */

void FUN_10a7887b0(long param_1,ulong *param_2,int param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint6 uVar16;
  ulong uVar17;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  undefined8 uVar18;
  byte bVar25;
  
  plVar8 = (long *)param_2[1];
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if ((plVar8 != (long *)0x0) && (uVar15 = *param_2, uVar15 != 0)) {
      puVar9 = (undefined4 *)0x113835028;
      FUN_10a1c6264();
      uVar12 = uVar15;
      FUN_10a778380(uVar15,*puVar9);
      if ((uVar12 & 1) == 0) {
        if (param_3 != 0) {
          FUN_10a78859c(uVar15);
        }
      }
      else {
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x188) + 0x850) + 0x2c);
        lVar14 = param_1 + 0x160;
        uVar12 = uVar15;
        FUN_10a788a7c();
        if (lVar14 == 0) {
          uVar17 = param_2[1];
          uVar12 = *param_2;
          if (param_2[1] != 0) {
            plVar11 = (long *)(param_2[1] + 0x10);
            do {
              cVar19 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = *plVar11 + 1;
                cVar19 = ExclusiveMonitorsStatus();
              }
            } while (cVar19 != '\0');
          }
          plVar11 = (long *)0x30;
          __Znwm();
          lVar14 = 0;
          plVar11[3] = uVar17;
          plVar11[2] = uVar12;
          plVar11[4] = uVar15;
          *(undefined1 *)(plVar11 + 5) = 0;
          *(undefined4 *)((long)plVar11 + 0x2c) = uVar2;
          lVar10 = *(long *)(param_1 + 0x148);
          *plVar11 = lVar10;
          plVar11[1] = param_1 + 0x148;
          *(long **)(lVar10 + 8) = plVar11;
          *(long **)(param_1 + 0x148) = plVar11;
          uVar17 = *(ulong *)(param_1 + 0x160);
          *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + 1;
          Hint_Prefetch(uVar17,0,2,0);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (long)&PTR_LOOP_110c8acd8 + uVar15;
          uVar12 = (SUB168(auVar5 * ZEXT816(0x9ddfea08eb382d69),8) ^
                   ((long)&PTR_LOOP_110c8acd8 + uVar15) * -0x622015f714c7d297) + uVar15;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar12;
          uVar12 = SUB168(auVar6 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar12 * -0x622015f714c7d297;
          bVar7 = (byte)uVar12;
          uVar16 = CONCAT15(bVar7,CONCAT14(bVar7,CONCAT13(bVar7,CONCAT12(bVar7,CONCAT11(bVar7,bVar7)
                                                                        )))) & 0x7f7f7f7f7f7f;
          uVar12 = uVar17 >> 0xc ^ uVar12 >> 7;
          while( true ) {
            uVar12 = uVar12 & *(ulong *)(param_1 + 0x170);
            uVar18 = *(undefined8 *)(uVar17 + uVar12);
            cVar19 = (char)((ulong)uVar18 >> 8);
            cVar20 = (char)((ulong)uVar18 >> 0x10);
            cVar21 = (char)((ulong)uVar18 >> 0x18);
            cVar22 = (char)((ulong)uVar18 >> 0x20);
            cVar23 = (char)((ulong)uVar18 >> 0x28);
            bVar24 = (byte)((ulong)uVar18 >> 0x30);
            bVar25 = (byte)((ulong)uVar18 >> 0x38);
            uVar13 = CONCAT17(-(bVar25 == (bVar7 & 0x7f)),
                              CONCAT16(-(bVar24 == (bVar7 & 0x7f)),
                                       CONCAT15(-(cVar23 == (char)(uVar16 >> 0x28)),
                                                CONCAT14(-(cVar22 == (char)(uVar16 >> 0x20)),
                                                         CONCAT13(-(cVar21 == (char)(uVar16 >> 0x18)
                                                                   ),CONCAT12(-(cVar20 ==
                                                                               (char)(uVar16 >> 0x10
                                                                                     )),
                                                                              CONCAT11(-(cVar19 ==
                                                                                        (char)(
                                                  uVar16 >> 8)),-((char)uVar18 == (char)uVar16))))))
                                      )) & 0x8080808080808080;
            if (uVar13 != 0) {
              do {
                uVar3 = (uVar13 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                        (uVar13 >> 7 & 0xff00ff00ff00ff) << 8;
                uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
                if (*(ulong *)(*(long *)(param_1 + 0x168) +
                              (uVar12 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) &
                              *(ulong *)(param_1 + 0x170)) * 0x10) == uVar15) goto LAB_10a7888b0;
                uVar13 = uVar13 - 1 & uVar13;
              } while (uVar13 != 0);
            }
            if (CONCAT17(-(bVar25 == 0x80),
                         CONCAT16(-(bVar24 == 0x80),
                                  CONCAT15(-(cVar23 == -0x80),
                                           CONCAT14(-(cVar22 == -0x80),
                                                    CONCAT13(-(cVar21 == -0x80),
                                                             CONCAT12(-(cVar20 == -0x80),
                                                                      CONCAT11(-(cVar19 == -0x80),
                                                                               -((char)uVar18 ==
                                                                                -0x80)))))))) != 0)
            break;
            lVar14 = lVar14 + 8;
            uVar12 = lVar14 + uVar12;
          }
          lVar14 = param_1 + 0x160;
          func_0x00010a7b179c();
          puVar1 = (ulong *)(*(long *)(param_1 + 0x168) + lVar14 * 0x10);
          *puVar1 = uVar15;
          puVar1[1] = (ulong)plVar11;
        }
        else {
          lVar14 = *(long *)(uVar12 + 8);
          uVar12 = param_2[1];
          uVar15 = *param_2;
          if (param_2[1] != 0) {
            plVar11 = (long *)(param_2[1] + 0x10);
            do {
              cVar19 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = *plVar11 + 1;
                cVar19 = ExclusiveMonitorsStatus();
              }
            } while (cVar19 != '\0');
          }
          lVar10 = *(long *)(lVar14 + 0x18);
          *(ulong *)(lVar14 + 0x18) = uVar12;
          *(ulong *)(lVar14 + 0x10) = uVar15;
          if (lVar10 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(undefined1 *)(lVar14 + 0x28) = 0;
          *(undefined4 *)(lVar14 + 0x2c) = uVar2;
        }
      }
      goto LAB_10a7888b0;
    }
  }
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    func_0x00010ae06f08(1,8,&UNK_10f675470,&UNK_10f6755fd,0xe1,&UNK_10f675695);
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
LAB_10a7888b0:
  plVar11 = plVar8 + 1;
  do {
    lVar14 = *plVar11;
    cVar19 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar14 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar14 != 0) {
    return;
  }
  (**(code **)(*plVar8 + 0x10))(plVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
  return;
}



/* Entry: 10a788a7c; end: 10a788b47;  */

undefined1  [16] FUN_10a788a7c(ulong *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar10;
  byte bVar17;
  undefined1 auVar18 [16];
  
  lVar4 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)&PTR_LOOP_110c8acd8 + param_2;
  uVar8 = (SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
          ((long)&PTR_LOOP_110c8acd8 + param_2) * -0x622015f714c7d297) + param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar8;
  uVar5 = *param_1;
  Hint_Prefetch(uVar5,0,2,0);
  uVar7 = SUB168(auVar2 * ZEXT816(0x9ddfea08eb382d69),8) ^ uVar8 * -0x622015f714c7d297;
  uVar8 = uVar5 >> 0xc ^ uVar7 >> 7;
  bVar6 = (byte)uVar7 & 0x7f;
  while( true ) {
    uVar8 = uVar8 & param_1[2];
    uVar10 = *(undefined8 *)(uVar5 + uVar8);
    bVar11 = (byte)((ulong)uVar10 >> 8);
    bVar12 = (byte)((ulong)uVar10 >> 0x10);
    bVar13 = (byte)((ulong)uVar10 >> 0x18);
    bVar14 = (byte)((ulong)uVar10 >> 0x20);
    bVar15 = (byte)((ulong)uVar10 >> 0x28);
    bVar16 = (byte)((ulong)uVar10 >> 0x30);
    bVar17 = (byte)((ulong)uVar10 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar17 == bVar6),
                          CONCAT16(-(bVar16 == bVar6),
                                   CONCAT15(-(bVar15 == bVar6),
                                            CONCAT14(-(bVar14 == bVar6),
                                                     CONCAT13(-(bVar13 == bVar6),
                                                              CONCAT12(-(bVar12 == bVar6),
                                                                       CONCAT11(-(bVar11 == bVar6),
                                                                                -((byte)uVar10 ==
                                                                                 bVar6)))))))) &
                 0x8080808080808080; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      uVar9 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar8 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_1[2];
      if (*(ulong *)(param_1[1] + uVar9 * 0x10) == param_2) {
        auVar18._8_8_ = param_1[1] + uVar9 * 0x10;
        auVar18._0_8_ = uVar5 + uVar9;
        return auVar18;
      }
    }
    if (CONCAT17(-(bVar17 == 0x80),
                 CONCAT16(-(bVar16 == 0x80),
                          CONCAT15(-(bVar15 == 0x80),
                                   CONCAT14(-(bVar14 == 0x80),
                                            CONCAT13(-(bVar13 == 0x80),
                                                     CONCAT12(-(bVar12 == 0x80),
                                                              CONCAT11(-(bVar11 == 0x80),
                                                                       -((byte)uVar10 == 0x80)))))))
                ) != 0) break;
    lVar4 = lVar4 + 8;
    uVar8 = lVar4 + uVar8;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  return auVar3 << 0x40;
}



/* Entry: 10a788b48; end: 10a788de7;  */

void FUN_10a788b48(long *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_88 [16];
  long lStack_78;
  
  lVar8 = *param_1;
  plVar3 = *(long **)(*param_2 + 0x40);
  (**(code **)(*plVar3 + 0x10))();
  plVar4 = *(long **)(lVar8 + 0x40);
  (**(code **)(*plVar4 + 0x68))();
  if ((int)plVar4 == 3) {
    FUN_10a1ed9f4();
  }
  else {
    plVar4 = (long *)plVar3[0x13];
    while (plVar7 = plVar4, plVar7 != (long *)0x0) {
      plVar3 = plVar7;
      plVar4 = (long *)plVar7[0x13];
    }
    plVar4 = plVar3;
    (**(code **)(*plVar3 + 0xb0))();
    (**(code **)(*plVar3 + 0xb8))();
    plVar3 = (long *)((ulong)plVar4 & 0xffffffff | (long)plVar3 << 0x20);
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != param_1 + 1) {
    param_2 = param_2 + 1;
    do {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
LAB_10a788c48:
        plVar5 = param_2;
      }
      else {
        plVar5 = param_2;
        do {
          lVar8 = 8;
          if ((ulong)plVar4[7] <= (ulong)plVar7[7]) {
            lVar8 = 0;
            plVar5 = plVar7;
          }
          plVar7 = *(long **)((long)plVar7 + lVar8);
        } while (plVar7 != (long *)0x0);
        if ((plVar5 == param_2) || ((ulong)plVar4[7] < (ulong)plVar5[7])) goto LAB_10a788c48;
      }
      plVar7 = (long *)plVar5[8];
      (**(code **)(*plVar7 + 0x10))();
      if (plVar7 == (long *)0x0) {
        return;
      }
      plVar5 = (long *)plVar4[8];
      (**(code **)(*plVar5 + 0x68))();
      if ((int)plVar5 == 3) {
        plVar5 = plVar7;
        FUN_10a1ed9f4();
      }
      else {
        plVar6 = (long *)plVar7[0x13];
        plVar5 = plVar7;
        while (plVar1 = plVar6, plVar1 != (long *)0x0) {
          plVar5 = plVar1;
          plVar6 = (long *)plVar1[0x13];
        }
        plVar6 = plVar5;
        (**(code **)(*plVar5 + 0xb0))();
        (**(code **)(*plVar5 + 0xb8))();
        plVar5 = (long *)((ulong)plVar6 & 0xffffffff | (long)plVar5 << 0x20);
      }
      if ((ulong)plVar5 >> 0x20 == 0 && (int)plVar5 == 0) {
        return;
      }
      if ((param_3 & 1) == 0) {
        plVar6 = (long *)plVar4[8];
        (**(code **)(*plVar6 + 0x68))();
        if ((int)plVar6 == 3) goto LAB_10a788cfc;
      }
      else {
LAB_10a788cfc:
        if ((int)plVar5 != (int)plVar3 || ((ulong)plVar5 ^ (ulong)plVar3) >> 0x20 != 0) {
          return;
        }
      }
      plVar5 = plVar7;
      FUN_10a1ed730();
      if ((((ulong)plVar5 & 1) == 0) && (plVar5 = plVar7, FUN_10a1ed914(), ((ulong)plVar5 & 1) == 0)
         ) {
        FUN_10a20e8c4(auStack_88,plVar7 + 0x48);
        plVar7 = (long *)lStack_78;
        while( true ) {
          if (plVar7 == (long *)0x0) {
            func_0x00010a042c64(auStack_88);
            return;
          }
          lVar8 = plVar7[2];
          if ((((lVar8 != 0) && (*(long *)(lVar8 + 8) != 0)) &&
              (*(long *)(*(long *)(lVar8 + 8) + 8) != -1)) && (*(long *)(lVar8 + 0x18) != 0)) break;
          plVar7 = (long *)*plVar7;
        }
        func_0x00010a042c64(auStack_88);
      }
      plVar7 = (long *)plVar4[1];
      plVar5 = plVar4;
      if ((long *)plVar4[1] == (long *)0x0) {
        do {
          plVar4 = (long *)plVar5[2];
          bVar2 = (long *)*plVar4 != plVar5;
          plVar5 = plVar4;
        } while (bVar2);
      }
      else {
        do {
          plVar4 = plVar7;
          plVar7 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    } while (plVar4 != param_1 + 1);
  }
  return;
}



/* Entry: 10a788de8; end: 10a788f8b;  */

void FUN_10a788de8(undefined8 *param_1,long *param_2)

{
  long *****ppppplVar1;
  long *****ppppplVar2;
  long *plVar3;
  long *plVar4;
  long *****ppppplVar5;
  long lVar6;
  long ****pppplStack_70;
  long ****pppplStack_68;
  char cStack_59;
  long ****pppplStack_50;
  long ****pppplStack_48;
  undefined8 uStack_40;
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b074(&pppplStack_70,&PTR_DAT_110c527f8);
  if (cStack_59 < '\0') {
    func_0x000107c3192c(&pppplStack_50,pppplStack_70,pppplStack_68);
  }
  else {
    pppplStack_48 = pppplStack_68;
    pppplStack_50 = pppplStack_70;
    cStack_39 = cStack_59;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ppppplVar5 = &pppplStack_50;
  plVar4 = &lStack_38;
  lVar6 = 1;
  FUN_10a102f04(param_1);
  if (cStack_39 < '\0') {
    __ZdlPv(pppplStack_50);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(pppplStack_70);
  }
  (**(code **)(*param_2 + 0x1e8))(&pppplStack_70,param_2);
  if (pppplStack_70 != pppplStack_68) {
    ppppplVar1 = (long *****)(pppplStack_70 + 8);
    do {
      if (*(char *)((long)ppppplVar1 + 0x17) < '\0') {
        if (ppppplVar1[1] != (long ****)0x0) goto LAB_10a788ec8;
      }
      else if (*(char *)((long)ppppplVar1 + 0x17) != '\0') {
LAB_10a788ec8:
        ppppplVar5 = ppppplVar1;
        FUN_10a0b4ec0(param_1);
      }
      ppppplVar2 = ppppplVar1 + 6;
      ppppplVar1 = ppppplVar1 + 0xe;
    } while (ppppplVar2 != (long *****)pppplStack_68);
  }
  ppppplVar1 = &pppplStack_50;
  pppplStack_50 = (long ****)&pppplStack_70;
  FUN_10a66db40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_59 < '\0') {
    __ZdlPv(pppplStack_70);
  }
  __Unwind_Resume();
  ppppplVar2 = ppppplVar1;
  FUN_10a08fd8c();
  if ((int)ppppplVar2 == 0) {
    plVar3 = plVar4;
    func_0x00010a777f8c();
    if (((int)plVar3 == 1) && ((**(code **)(*plVar4 + 0x1d8))(), (int)plVar4 != 0)) {
      FUN_10a789104();
    }
    else {
      ppppplVar5 = (long *****)(lVar6 + 0x188);
    }
    if (*ppppplVar5 != (long ****)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a78901c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(**ppppplVar5)[0x15])(ppppplVar1);
      return;
    }
  }
  *ppppplVar1 = (long ****)0x0;
  ppppplVar1[1] = (long ****)0x0;
  return;
}



/* Entry: 10a788f8c; end: 10a78901f;  */

void FUN_10a788f8c(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_1;
  FUN_10a08fd8c();
  if ((int)puVar1 == 0) {
    plVar2 = param_3;
    func_0x00010a777f8c();
    if (((int)plVar2 == 1) && ((**(code **)(*param_3 + 0x1d8))(), (int)param_3 != 0)) {
      FUN_10a789104();
    }
    else {
      param_2 = (long *)(param_4 + 0x188);
    }
    if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a78901c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)*param_2 + 0xa8))(param_1);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


