/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa706f0; end: 10aa7070f;  */

void FUN_10aa706f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c3d4e8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa70710; end: 10aa707c7;  */

undefined8 * FUN_10aa70710(long param_1)

{
  func_0x00010aa4dcac(param_1 + 0x1a0);
  func_0x00010aa5a3f4(param_1 + 400);
  func_0x00010726f2e4(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110c3ec18;
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110c3ecb8;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0xe8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  if (*(long *)(param_1 + 0x90) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)(param_1 + 0x87) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x30);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aa707c8; end: 10aa70863;  */

void FUN_10aa707c8(undefined8 param_1)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000040;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x133;
  uStack_48 = 0xffffffff;
  FUN_10aa70864(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f68c0ba;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10aa92404();
  FUN_10aa925e4(param_1);
  return;
}



/* Entry: 10aa70864; end: 10aa7093b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa708fc) */

undefined1  [16] FUN_10aa70864(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d176,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa92308(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa7093c; end: 10aa70a63;  */

undefined8 *
FUN_10aa7093c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  param_1[2] = &PTR_DAT_110c3ecb8;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[7] = &PTR_DAT_110c3ed10;
  param_1[8] = param_3;
  param_1[9] = param_4;
  param_1[10] = param_2;
  func_0x000107c2b054(param_1 + 0xb,&UNK_10f68c0c1);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x32aaaba7;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  lVar6 = param_1[10];
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(lVar6 + 0x858);
    plVar7 = *(long **)(lVar6 + 0x860);
    if (plVar7 == (long *)0x0) {
      param_1[0xe] = uVar5;
      param_1[0xf] = 0;
    }
    else {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar2 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = param_1[0xf];
      param_1[0xe] = uVar5;
      param_1[0xf] = plVar7;
      if (lVar6 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return param_1;
}



/* Entry: 10aa70a64; end: 10aa70bf7;  */

void FUN_10aa70a64(long param_1,long *param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0xa0))(&uStack_38,param_2,&PTR_DAT_110c3d6a8);
  if (*(char *)(param_1 + 0xf7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  *(undefined8 *)(param_1 + 0xe8) = uStack_30;
  *(undefined8 *)(param_1 + 0xe0) = uStack_38;
  *(undefined8 *)(param_1 + 0xf0) = uStack_28;
  return;
}



/* Entry: 10aa70bf8; end: 10aa70c73;  */

undefined1  [16] FUN_10aa70bf8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x14;
  auVar1._0_8_ = &UNK_10f663546;
  return auVar1;
}



/* Entry: 10aa70c74; end: 10aa71197;  */

void FUN_10aa70c74(ulong param_1)

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
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f663546,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c42bf0;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0xfd000000fd;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c42bf0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa71178;
    FUN_10a054dac(param_1,&UNK_10f68c0c2,FUN_10aa926a0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa71178;
    FUN_10a054dac(param_1,&UNK_10f6523da,FUN_10aa92978,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa71178;
    FUN_10a054dac(param_1,&UNK_10f68c0e5,FUN_10aa92c3c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa71178;
    FUN_10a054dac(param_1,&UNK_10f68c0f5,FUN_10aa92db4,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa71178;
    FUN_10a054dac(param_1,&UNK_10f68c0fe,FUN_10aa93040,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa71178;
    FUN_10a054dac(param_1,&UNK_10f633067,FUN_10aa930f8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa71178;
    FUN_10a054dac(param_1,&UNK_10f68c10a,FUN_10aa932d8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"duration",FUN_10aa9338c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f409d63,FUN_10aa934e4,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    puStack_68 = *(undefined **)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f663546,0x14);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f68c116;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68c0c1;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_68 = &UNK_10f68c0c1;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa71178;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10aa935a0,0,*(long *)(param_1 + 0x18) + -8);
    }
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f68c125;
    puStack_78 = &UNK_10f68c0c1;
    uStack_70 = 0;
    uStack_60 = 0;
    puStack_68 = (undefined *)0x0;
    uStack_58 = 0x16a;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_10a2ad5cc(param_1,&ppuStack_a0,&PTR_DAT_110c3d6c8);
    func_0x00010a004064(param_1);
    return;
  }
LAB_10aa71178:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa7117c);
  (*pcVar6)();
}



/* Entry: 10aa71198; end: 10aa7129f;  */

float FUN_10aa71198(ulong param_1,long param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  if (*(long *)(param_2 + 0x28) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar2 = *(float *)(*(long *)(param_2 + 0x28) + 0x20);
    param_1 = (ulong)(uint)fVar2;
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    fVar2 = *(float *)(*(long *)(param_2 + 0x38) + 0x20);
    param_1 = (ulong)(uint)fVar2;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  if (*(long *)(param_2 + 0x48) != 0) {
    fVar2 = *(float *)(*(long *)(param_2 + 0x48) + 0x20);
    param_1 = (ulong)(uint)fVar2;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    fVar2 = *(float *)(*(long *)(param_2 + 0x68) + 0x20);
    param_1 = (ulong)(uint)fVar2;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    fVar2 = *(float *)(*(long *)(param_2 + 0x58) + 0x20);
    param_1 = (ulong)(uint)fVar2;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  for (plVar1 = *(long **)(param_2 + 0x88); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    fVar2 = *(float *)(plVar1[6] + 0x20);
    param_1 = (ulong)(uint)fVar2;
    if (fVar3 <= fVar2) {
      fVar3 = fVar2;
    }
  }
  for (plVar1 = *(long **)(param_2 + 0xb0); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[6] + 0x48))();
    if (fVar3 <= (float)param_1) {
      fVar3 = (float)param_1;
    }
  }
  for (plVar1 = *(long **)(param_2 + 0xd8); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[6] + 0x48))();
    if (fVar3 <= (float)param_1) {
      fVar3 = (float)param_1;
    }
  }
  return fVar3;
}



/* Entry: 10aa712a0; end: 10aa7143f;  */

void FUN_10aa712a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  undefined8 uStack_88;
  char cStack_71;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110c405c8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_70 = plVar4 + 3;
  *plStack_70 = (long)&PTR_DAT_110c3e068;
  plStack_68 = plVar4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_4,param_4[1]);
  }
  else {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    lStack_50 = param_4[2];
  }
  FUN_10aaa58c0(param_2,auStack_a0,&plStack_70);
  FUN_10aa80948(param_3,auStack_a0);
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if (plStack_90 != (long *)0x0) {
    plVar4 = plStack_90 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  param_1[1] = plStack_68;
  *param_1 = plStack_70;
  if (plStack_68 != (long *)0x0) {
    plVar4 = plStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  plVar4 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa71440; end: 10aa7152b;  */

void FUN_10aa71440(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar10 = puVar4;
  for (puVar11 = puVar4; (puVar11 != puVar8 && (puVar10 = puVar11, puVar11[1] != param_2));
      puVar11 = puVar11 + 6) {
    puVar10 = puVar8;
  }
  if (puVar8 != puVar10) {
    if ((ulong)((long)puVar8 - (long)puVar4) <= (ulong)((long)puVar10 - (long)puVar4)) {
      puVar5 = &UNK_10f68d56a;
      FUN_10a00946c();
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        func_0x000107c3192c(&uStack_90,*puVar8,puVar8[1]);
      }
      else {
        uStack_88 = puVar8[1];
        uStack_90 = *puVar8;
        lStack_80 = puVar8[2];
      }
      FUN_10a0d09b4(&puStack_b0,&uStack_90);
      puVar5 = puVar5 + 0xe8;
      puVar6 = puVar5;
      FUN_10aa93720(puVar5,&puStack_b0);
      if (lStack_a0 < 0) {
        __ZdlPv(puStack_b0);
      }
      if (puVar6 == (undefined *)0x0) {
        plVar7 = (long *)0x108;
        __Znwm();
        plVar12 = plVar7 + 1;
        *plVar12 = 0;
        *plVar7 = (long)&PTR_FUN_110ba1ca8;
        plVar7[3] = (long)&PTR_DAT_110c3df10;
        plVar7[2] = 0;
        *(undefined1 *)(plVar7 + 4) = 0;
        plVar7[6] = 0;
        plVar7[7] = 0;
        plVar7[5] = (long)&PTR_DAT_110c3df68;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[0xb] = 0;
        plVar7[10] = 0;
        plVar7[0xd] = 0;
        plVar7[0xc] = 0;
        plVar7[0xf] = 0;
        plVar7[0xe] = 0;
        plVar7[0x11] = 0;
        plVar7[0x10] = 0;
        plVar7[0x13] = 0;
        plVar7[0x12] = 0;
        plVar7[0x15] = 0;
        plVar7[0x14] = 0;
        *(undefined4 *)(plVar7 + 0x16) = 0x3f800000;
        plVar7[0x18] = 0;
        plVar7[0x17] = 0;
        plVar7[0x1a] = 0;
        plVar7[0x19] = 0;
        *(undefined4 *)(plVar7 + 0x1b) = 0x3f800000;
        plVar7[0x1d] = 0;
        plVar7[0x1c] = 0;
        plVar7[0x1f] = 0;
        plVar7[0x1e] = 0;
        *(undefined4 *)(plVar7 + 0x20) = 0x3f800000;
        puVar11 = (undefined8 *)0x40;
        __Znwm();
        lStack_a0 = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        puStack_b0 = puVar11;
        puStack_a8 = puVar5;
        FUN_10a0d09b4(puVar11 + 2,&uStack_90);
        puVar11[6] = plVar7 + 3;
        puVar11[7] = plVar7;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = *plVar12 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lStack_a0 = CONCAT71(lStack_a0._1_7_,1);
        puVar11[1] = puVar11[5];
        FUN_10aa937c0(puVar5);
        puVar4 = puStack_b0;
        if ((((ulong)puVar11 & 1) == 0) && (puStack_b0 != (undefined8 *)0x0)) {
          if ((char)lStack_a0 == '\x01') {
            func_0x00010a0dd534(puStack_b0 + 2);
          }
          __ZdlPv(puVar4);
        }
        do {
          lVar9 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (lStack_80 < 0) {
        __ZdlPv(uStack_90);
      }
      return;
    }
    puVar4 = (undefined8 *)((long)puVar4 + ((long)puVar10 - (long)puVar4));
    if (puVar8 == puVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa71520);
      (*pcVar3)();
    }
    puVar4 = puVar4 + 6;
    FUN_10aaa5824();
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    while (puVar11 != puVar4) {
      puVar11 = puVar11 + -6;
      func_0x00010a436760(puVar11);
    }
    *(undefined8 **)(param_1 + 0x10) = puVar4;
    if (*(undefined8 **)(param_1 + 8) == puVar4) {
      uVar13 = 0;
      uVar14 = 0x7f7fffff;
    }
    else {
      uVar13 = *(undefined4 *)(puVar4 + -6);
      uVar14 = *(undefined4 *)*(undefined8 **)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 0x20) = uVar13;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar14;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}



/* Entry: 10aa7152c; end: 10aa71753;  */

void FUN_10aa7152c(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_2,param_2[1]);
  }
  else {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    lStack_50 = param_2[2];
  }
  FUN_10a0d09b4(&puStack_80,&uStack_60);
  param_1 = param_1 + 0xe8;
  lVar6 = param_1;
  FUN_10aa93720(param_1,&puStack_80);
  if (lStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if (lVar6 == 0) {
    plVar4 = (long *)0x108;
    __Znwm();
    plVar7 = plVar4 + 1;
    *plVar7 = 0;
    *plVar4 = (long)&PTR_FUN_110ba1ca8;
    plVar4[3] = (long)&PTR_DAT_110c3df10;
    plVar4[2] = 0;
    *(undefined1 *)(plVar4 + 4) = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[5] = (long)&PTR_DAT_110c3df68;
    plVar4[9] = 0;
    plVar4[8] = 0;
    plVar4[0xb] = 0;
    plVar4[10] = 0;
    plVar4[0xd] = 0;
    plVar4[0xc] = 0;
    plVar4[0xf] = 0;
    plVar4[0xe] = 0;
    plVar4[0x11] = 0;
    plVar4[0x10] = 0;
    plVar4[0x13] = 0;
    plVar4[0x12] = 0;
    plVar4[0x15] = 0;
    plVar4[0x14] = 0;
    *(undefined4 *)(plVar4 + 0x16) = 0x3f800000;
    plVar4[0x18] = 0;
    plVar4[0x17] = 0;
    plVar4[0x1a] = 0;
    plVar4[0x19] = 0;
    *(undefined4 *)(plVar4 + 0x1b) = 0x3f800000;
    plVar4[0x1d] = 0;
    plVar4[0x1c] = 0;
    plVar4[0x1f] = 0;
    plVar4[0x1e] = 0;
    *(undefined4 *)(plVar4 + 0x20) = 0x3f800000;
    puVar5 = (undefined8 *)0x40;
    __Znwm();
    lStack_70 = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puStack_80 = puVar5;
    lStack_78 = param_1;
    FUN_10a0d09b4(puVar5 + 2,&uStack_60);
    puVar5[6] = plVar4 + 3;
    puVar5[7] = plVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lStack_70 = CONCAT71(lStack_70._1_7_,1);
    puVar5[1] = puVar5[5];
    FUN_10aa937c0(param_1);
    puVar3 = puStack_80;
    if ((((ulong)puVar5 & 1) == 0) && (puStack_80 != (undefined8 *)0x0)) {
      if ((char)lStack_70 == '\x01') {
        func_0x00010a0dd534(puStack_80 + 2);
      }
      __ZdlPv(puVar3);
    }
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 10aa71754; end: 10aa7182f;  */

void FUN_10aa71754(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  FUN_10a0d09b4(auStack_50);
  lVar2 = param_1 + 0xe8;
  FUN_10aa93720(lVar2,auStack_50);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (lVar2 == 0) {
    FUN_10aa93bcc(param_1 + 0xe8,param_2,param_3);
  }
  else if ((bRam000000011330a9e8 & 1) != 0) {
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    func_0x00010ae06f08(0,1,&UNK_10f68c133,&UNK_10f68c2d1,0x4a,&UNK_10f68c363,in_x6,in_x7,plVar1);
  }
  return;
}



/* Entry: 10aa71830; end: 10aa719b3;  */

void FUN_10aa71830(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  FUN_10a0d09b4(auStack_40);
  plVar2 = (long *)(param_1 + 0xe8);
  FUN_10aa93720(plVar2,auStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  uVar5 = *(ulong *)(param_1 + 0xf0);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0xe8) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(param_1 + 0xf8)) {
LAB_10aa718ec:
    if (lVar3 == 0) {
LAB_10aa71920:
      *(undefined8 *)(*(long *)(param_1 + 0xe8) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10aa71928;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_10aa71920;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_10aa718ec;
LAB_10aa71928:
    if (lVar3 == 0) goto LAB_10aa71964;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*(long *)(param_1 + 0xe8) + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_10aa71964:
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + -1;
  func_0x00010a0dd534(plVar2 + 2);
  __ZdlPv(plVar2);
  return;
}



/* Entry: 10aa719b4; end: 10aa71a9f;  */

void FUN_10aa719b4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  FUN_10a0d09b4(auStack_50);
  lVar5 = param_2 + 0xe8;
  FUN_10aa93720(lVar5,auStack_50);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  if (lVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a0d09b4(auStack_50,param_3);
    param_2 = param_2 + 0xe8;
    FUN_10aa93720(param_2,auStack_50);
    if (param_2 == 0) {
      FUN_109ffdddc(&UNK_10f68d549);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa71a80);
      (*pcVar4)();
    }
    lVar5 = *(long *)(param_2 + 0x38);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    param_1[1] = *(undefined8 *)(param_2 + 0x38);
    *param_1 = uVar6;
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
    if (cStack_39 < '\0') {
      __ZdlPv(auStack_50[0]);
    }
  }
  return;
}



/* Entry: 10aa71aa0; end: 10aa71b1f;  */

undefined8 * FUN_10aa71aa0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  long *plStack_70;
  undefined1 uStack_61;
  
  lVar6 = param_2 + 0xe8;
  FUN_10aa93720();
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(param_2 + 0xe8);
    FUN_10aa93720(puVar4,param_3);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f68d549;
      FUN_109ffdddc();
      puVar5 = puVar4;
      uVar7 = param_3;
      func_0x00010a0fda30();
      FUN_10aa7093c(puVar4,param_3,puVar5,uVar7);
      *puVar4 = &PTR_DAT_110c3d6e8;
      puVar4[2] = &PTR_DAT_110c3d788;
      puVar4[0x1c] = 0x41f0000000000000;
      puVar4[0x1e] = 0;
      puVar4[0x1d] = 0;
      puVar4[7] = &PTR_DAT_110c3d7e0;
      puVar4[0x20] = 0;
      puVar4[0x1f] = 0;
      *(undefined4 *)(puVar4 + 0x21) = 0x3f800000;
      puVar4[0x22] = 0;
      puVar4[0x23] = 0;
      FUN_10aa93d58(auStack_78,&uStack_61);
      FUN_10aa71c24(puVar4 + 0x22,auStack_78);
      if (plStack_70 != (long *)0x0) {
        plVar1 = plStack_70 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_70);
        }
      }
      return puVar4;
    }
    lVar6 = puVar4[7];
    uVar7 = puVar4[6];
    param_1[1] = puVar4[7];
    *param_1 = uVar7;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return puVar4;
}



/* Entry: 10aa71b20; end: 10aa71c23;  */

undefined8 * FUN_10aa71b20(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  puVar4 = param_1;
  uVar5 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar5);
  *param_1 = &PTR_DAT_110c3d6e8;
  param_1[2] = &PTR_DAT_110c3d788;
  param_1[0x1c] = 0x41f0000000000000;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[7] = &PTR_DAT_110c3d7e0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_10aa93d58(auStack_48,&uStack_31);
  FUN_10aa71c24(param_1 + 0x22,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return param_1;
}



/* Entry: 10aa71c24; end: 10aa71cfb;  */

undefined8 * FUN_10aa71c24(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa71cfc; end: 10aa71de7;  */

undefined8 * FUN_10aa71cfc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_31;
  
  puVar4 = param_1;
  FUN_10aa7093c();
  *puVar4 = &PTR_DAT_110c3d6e8;
  puVar4[2] = &PTR_DAT_110c3d788;
  puVar4[0x1c] = 0x41f0000000000000;
  puVar4[0x1e] = 0;
  puVar4[0x1d] = 0;
  puVar4[7] = &PTR_DAT_110c3d7e0;
  puVar4[0x20] = 0;
  puVar4[0x1f] = 0;
  *(undefined4 *)(puVar4 + 0x21) = 0x3f800000;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  FUN_10aa93d58(auStack_48,&uStack_31);
  FUN_10aa71c24(param_1 + 0x22,auStack_48);
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return param_1;
}



/* Entry: 10aa71de8; end: 10aa723fb;  */

void FUN_10aa71de8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x28;
  long *plStack_c0;
  long *plStack_b8;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(param_2 + 0x50);
  lVar12 = param_2;
  func_0x00010a0fda30();
  if (lVar11 == 0) {
    plVar10 = (long *)0x138;
    __Znwm();
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)&PTR_FUN_110ba1c58;
    plVar9 = plVar10 + 3;
    FUN_10aa71cfc(plVar9,0,lVar12,param_3);
    plStack_78 = plVar9;
    plStack_70 = plVar10;
    FUN_10a0dd610(&plStack_78,plVar10 + 8,plVar9);
    FUN_10a0dd2bc(&plStack_c0,&plStack_78);
    if (plStack_70 == (long *)0x0) goto LAB_10aa72064;
    plVar9 = plStack_70 + 1;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_70;
    } while (cVar2 != '\0');
  }
  else {
    lVar12 = *(long *)(lVar11 + 0x858);
    plVar9 = *(long **)(lVar11 + 0x860);
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar5 = 0x120;
    lStack_a8 = lVar12;
    plStack_a0 = plVar9;
    __Znwm(0x120);
    FUN_10aa71cfc();
    lStack_98 = lVar12;
    plStack_90 = plVar9;
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar10 = plVar9 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    lStack_88 = lVar12;
    plStack_80 = plVar9;
    FUN_10a0dd570(&plStack_78,uVar5,&lStack_88);
    FUN_10a0dd2bc(&plStack_c0,&plStack_78);
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar10 = plStack_70 + 1;
      do {
        lVar12 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_80 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar9 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar10 = plStack_90 + 1;
      do {
        lVar12 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if ((lStack_a8 != 0) && (plStack_c0 != (long *)0x0)) {
      plStack_78 = plStack_c0;
      plStack_70 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        plVar9 = plStack_b8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_a8,&plStack_78);
      plVar9 = plStack_70;
      if (plStack_70 != (long *)0x0) {
        plVar10 = plStack_70 + 1;
        do {
          lVar12 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_70 + 0x10))(plStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    if (plStack_a0 == (long *)0x0) goto LAB_10aa72064;
    plVar9 = plStack_a0 + 1;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar10 = plStack_a0;
    } while (cVar2 != '\0');
  }
  if (lVar12 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
  }
LAB_10aa72064:
  plVar9 = *(long **)(param_2 + 0xf8);
  plVar10 = plStack_c0;
  do {
    plStack_c0 = plVar10;
    if (plVar9 == (long *)0x0) {
      lVar11 = *(long *)(param_2 + 0x118);
      lVar12 = *(long *)(param_2 + 0x110);
      if (*(long *)(param_2 + 0x118) != 0) {
        plVar9 = (long *)(*(long *)(param_2 + 0x118) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = (long *)plVar10[0x23];
      plVar10[0x23] = lVar11;
      plVar10[0x22] = lVar12;
      if (plVar9 != (long *)0x0) {
        plVar10 = plVar9 + 1;
        do {
          lVar12 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      param_1[1] = plStack_b8;
      *param_1 = plStack_c0;
      return;
    }
    plVar1 = plVar10 + 0x1d;
    uVar14 = plVar9[5];
    uVar13 = plVar10[0x1e];
    if (uVar13 != 0) {
      uVar7 = uVar13 - 1;
      if ((uVar13 & uVar7) == 0) {
        unaff_x28 = uVar7 & uVar14;
      }
      else {
        unaff_x28 = uVar14;
        if (uVar13 <= uVar14) {
          uVar8 = 0;
          if (uVar13 != 0) {
            uVar8 = uVar14 / uVar13;
          }
          unaff_x28 = uVar14 - uVar8 * uVar13;
        }
      }
      plVar6 = *(long **)(*plVar1 + unaff_x28 * 8);
      if (plVar6 != (long *)0x0) {
        do {
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_10aa72104;
            uVar8 = plVar6[1];
            if (uVar8 != uVar14) break;
            if (plVar6[5] == uVar14) goto LAB_10aa72260;
          }
          if ((uVar13 & uVar7) == 0) {
            uVar8 = uVar8 & uVar7;
          }
          else if (uVar13 <= uVar8) {
            uVar4 = 0;
            if (uVar13 != 0) {
              uVar4 = uVar8 / uVar13;
            }
            uVar8 = uVar8 - uVar4 * uVar13;
          }
        } while (uVar8 == unaff_x28);
      }
    }
LAB_10aa72104:
    plVar6 = (long *)0x40;
    __Znwm();
    uStack_68 = 0;
    *plVar6 = 0;
    plVar6[1] = uVar14;
    plStack_78 = plVar6;
    plStack_70 = plVar1;
    if (*(char *)((long)plVar9 + 0x27) < '\0') {
      func_0x000107c3192c(plVar6 + 2,plVar9[2],plVar9[3]);
    }
    else {
      lVar11 = plVar9[3];
      lVar12 = plVar9[2];
      plVar6[4] = plVar9[4];
      plVar6[3] = lVar11;
      plVar6[2] = lVar12;
    }
    lVar12 = plVar9[5];
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[5] = lVar12;
    uStack_68 = CONCAT71(uStack_68._1_7_,1);
    if ((uVar13 == 0) || (*(float *)(plVar10 + 0x21) * (float)uVar13 < (float)(plVar10[0x20] + 1)))
    {
      uVar7 = 1;
      if (2 < uVar13) {
        uVar7 = (ulong)((uVar13 & uVar13 - 1) != 0);
      }
      uVar7 = uVar7 | uVar13 << 1;
      uVar13 = (ulong)((float)(plVar10[0x20] + 1) / *(float *)(plVar10 + 0x21));
      if (uVar7 <= uVar13) {
        uVar7 = uVar13;
      }
      FUN_10aa939b4(plVar1,uVar7);
      uVar13 = plVar10[0x1e];
      if ((uVar13 & uVar13 - 1) == 0) {
        unaff_x28 = uVar13 - 1 & uVar14;
      }
      else {
        unaff_x28 = uVar14;
        if (uVar13 <= uVar14) {
          uVar7 = 0;
          if (uVar13 != 0) {
            uVar7 = uVar14 / uVar13;
          }
          unaff_x28 = uVar14 - uVar7 * uVar13;
        }
      }
    }
    lVar12 = *plVar1;
    plVar6 = *(long **)(lVar12 + unaff_x28 * 8);
    if (plVar6 == (long *)0x0) {
      plVar6 = plVar10 + 0x1f;
      *plStack_78 = *plVar6;
      *plVar6 = (long)plStack_78;
      *(long **)(lVar12 + unaff_x28 * 8) = plVar6;
      if (*plStack_78 != 0) {
        uVar14 = *(ulong *)(*plStack_78 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar14 = uVar14 & uVar13 - 1;
        }
        else if (uVar13 <= uVar14) {
          uVar7 = 0;
          if (uVar13 != 0) {
            uVar7 = uVar14 / uVar13;
          }
          uVar14 = uVar14 - uVar7 * uVar13;
        }
        *(long **)(*plVar1 + uVar14 * 8) = plStack_78;
      }
    }
    else {
      *plStack_78 = *plVar6;
      *plVar6 = (long)plStack_78;
    }
    plVar10[0x20] = plVar10[0x20] + 1;
    plVar6 = plStack_78;
LAB_10aa72260:
    lVar11 = plVar9[7];
    lVar12 = plVar9[6];
    if (plVar9[7] != 0) {
      plVar10 = (long *)(plVar9[7] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = *plVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)plVar6[7];
    plVar6[7] = lVar11;
    plVar6[6] = lVar12;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
      do {
        lVar12 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    plVar9 = (long *)*plVar9;
    plVar10 = plStack_c0;
  } while( true );
}



/* Entry: 10aa723fc; end: 10aa72737;  */

void FUN_10aa723fc(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined8 auStack_90 [2];
  char cStack_79;
  undefined8 *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar8 = (long *)(param_1 + 0xe8);
  FUN_10aa93d04(plVar8);
  func_0x00010aa70acc(param_1,param_2);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3d7f0);
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar4 != 0) {
    iVar10 = 0;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar10);
      (**(code **)(*param_2 + 0xa0))(auStack_90,param_2,&PTR_s_property_110c3d810);
      puVar5 = (undefined8 *)0x108;
      __Znwm();
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_110ba1ca8;
      puVar5[3] = &PTR_DAT_110c3df10;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[5] = &PTR_DAT_110c3df68;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      *(undefined4 *)(puVar5 + 0x16) = 0x3f800000;
      puVar5[0x18] = 0;
      puVar5[0x17] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x19] = 0;
      *(undefined4 *)(puVar5 + 0x1b) = 0x3f800000;
      puVar5[0x1d] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x1f] = 0;
      puVar5[0x1e] = 0;
      *(undefined4 *)(puVar5 + 0x20) = 0x3f800000;
      puVar6 = (undefined8 *)0x40;
      __Znwm();
      uStack_68 = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puStack_78 = puVar6;
      plStack_70 = plVar8;
      FUN_10a0d09b4(puVar6 + 2,auStack_90);
      puVar6[6] = puVar5 + 3;
      puVar6[7] = puVar5;
      uStack_68 = CONCAT71(uStack_68._1_7_,1);
      puVar6[1] = puVar6[5];
      plVar7 = plVar8;
      FUN_10aa937c0();
      puVar5 = puStack_78;
      if ((((ulong)puVar6 & 1) == 0) && (puStack_78 != (undefined8 *)0x0)) {
        if ((char)uStack_68 == '\x01') {
          func_0x00010a0dd534(puStack_78 + 2);
        }
        __ZdlPv(puVar5);
      }
      plVar7 = (long *)plVar7[7];
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3fb58);
      (**(code **)(*param_2 + 0x220))(param_2);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar9 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      if (cStack_79 < '\0') {
        __ZdlPv(auStack_90[0]);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != (int)plVar4);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  FUN_10aa93d58(&puStack_78,auStack_90);
  FUN_10aa71c24(param_1 + 0x110,&puStack_78);
  plVar8 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar4 = plStack_70 + 1;
    do {
      lVar9 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  plVar8 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3d830);
  if (((ulong)plVar8 & 1) != 0) {
    lVar9 = 0;
    if (*(long *)(param_1 + 0x110) != 0) {
      lVar9 = *(long *)(param_1 + 0x110) + 0x68;
    }
    (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110c3d830,lVar9);
  }
  return;
}



/* Entry: 10aa72738; end: 10aa7281f;  */

void FUN_10aa72738(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3d7f0);
  for (plVar2 = *(long **)(param_1 + 0xf8); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_s_property_110c3d810,plVar2 + 2);
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3fb58,plVar2[6]);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x110) != 0) {
    lVar1 = *(long *)(param_1 + 0x110) + 0x68;
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa7281c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c3d830,lVar1);
  return;
}



/* Entry: 10aa72820; end: 10aa72903;  */

undefined1  [16] FUN_10aa72820(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f65112b;
  return auVar1;
}



/* Entry: 10aa72904; end: 10aa72def;  */

void FUN_10aa72904(ulong param_1)

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
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65112b,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c41a10;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xea;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c41a10;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f040;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c376,FUN_10aa93e60,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c384,FUN_10aa9407c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c390,FUN_10aa94260,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c39c,FUN_10aa94558,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c3ac,FUN_10aa94654,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c3bb,FUN_10aa94770,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c3c8,FUN_10aa948e8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c3d5,FUN_10aa949f8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa72dd0;
    FUN_10a054dac(param_1,&UNK_10f68c3e2,FUN_10aa94ba4,2,*(undefined8 *)(param_1 + 0x40));
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65112b,0x19);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f654fd6;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68c0c1;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10aa72dd0;
      FUN_10a054dac(param_1,&DAT_10f68efec,FUN_10aa94d30,1,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10aa72dd0:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa72dd4);
  (*pcVar6)();
}



/* Entry: 10aa72df0; end: 10aa72eff;  */

undefined8 * FUN_10aa72df0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c428c0;
  param_1[2] = &PTR_DAT_110c42968;
  param_1[7] = &PTR_DAT_110c429c0;
  FUN_10aa91c84(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa72f00; end: 10aa72f5f;  */

void FUN_10aa72f00(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c428c0;
  *param_1 = &PTR_DAT_110c42968;
  param_1[5] = &PTR_DAT_110c429c0;
  FUN_10aa91c84(param_1 + 0x1a);
  func_0x00010aa71c88(param_1 + -2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa72f60; end: 10aa7332f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa730c0) */

void FUN_10aa72f60(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x110;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c3ffd0;
    plVar6 = plVar3 + 3;
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar6,0,plVar4,param_2);
    plVar3[3] = (long)&PTR_FUN_110c428c0;
    plVar3[5] = (long)&PTR_DAT_110c42968;
    plVar3[10] = (long)&PTR_DAT_110c429c0;
    plVar3[0x20] = 0;
    plVar3[0x21] = 0;
    plVar3[0x1f] = 0;
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10aa95030(&plStack_50,plVar3 + 8,plVar6);
    FUN_10aa94ecc(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0xf8;
    lVar5 = param_2;
    __Znwm();
    plVar4 = plVar3;
    func_0x00010a0fda30();
    FUN_10aa7093c(plVar3,param_2,plVar4,lVar5);
    *plVar3 = (long)&PTR_FUN_110c428c0;
    plVar3[2] = (long)&PTR_DAT_110c42968;
    plVar3[7] = (long)&PTR_DAT_110c429c0;
    plVar3[0x1d] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1c] = 0;
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c3ff70;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10aa95030(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aa94ecc(param_1,&plStack_50);
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar4 = (long *)*param_1, plVar4 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar4;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar4 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          lVar7 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        lVar7 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa73330; end: 10aa73537;  */

void FUN_10aa73330(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_71;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  FUN_10aa72f60(&uStack_60,*(undefined8 *)(param_2 + 0x50));
  lVar2 = *(long *)(param_2 + 0xe8);
  for (lVar8 = *(long *)(param_2 + 0xe0); lVar8 != lVar2; lVar8 = lVar8 + 0x28) {
    func_0x00010aa91d28(&uStack_88,lVar8);
    func_0x00010a493ed0(&plStack_a0,&uStack_41);
    (**(code **)(*plStack_a0 + 0x18))(plStack_a0,lStack_70 + 8);
    uVar6 = uStack_60;
    if ((char)bStack_71 < '\0') {
      func_0x000107c3192c(&uStack_c0,uStack_88,uStack_80);
    }
    else {
      uStack_b8 = uStack_80;
      uStack_c0 = uStack_88;
      lStack_b0 = (ulong)bStack_71 << 0x38;
    }
    plVar5 = plStack_98;
    plStack_c8 = plStack_98;
    plStack_d0 = plStack_a0;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa73538(uVar6,&uStack_c0,&plStack_d0);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    plVar5 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((char)bStack_71 < '\0') {
      __ZdlPv(uStack_88);
    }
  }
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  return;
}



/* Entry: 10aa73538; end: 10aa735cb;  */

void FUN_10aa73538(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_48 [2];
  char cStack_31;
  long *plStack_28;
  
  func_0x00010aa91d98(auStack_48);
  FUN_10aa73a34(param_1 + 0xe0,auStack_48);
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
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10aa735cc; end: 10aa73603;  */

undefined8 * FUN_10aa735cc(undefined8 *param_1)

{
  FUN_10a493e78(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10aa73604; end: 10aa73a33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10aa73604(long param_1,long *param_2)

{
  long ****pppplVar1;
  char cVar2;
  bool bVar3;
  long ****pppplVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long ***ppplVar9;
  ulong uVar10;
  ulong uVar11;
  long **pplVar12;
  long ***ppplVar13;
  long ***ppplVar14;
  ulong uVar15;
  long lVar16;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long lStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  undefined8 uStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long lStack_68;
  long ****pppplStack_60;
  
  func_0x00010aa70acc();
  ppplStack_a0 = (long ***)0x0;
  ppplStack_98 = (long ***)0x0;
  uStack_90 = 0;
  ppplStack_b8 = (long ***)0x0;
  ppplStack_b0 = (long ***)0x0;
  lStack_a8 = 0;
  (**(code **)(*param_2 + 0x68))(&pppplStack_80,param_2,&PTR_DAT_110c3fb78,&ppplStack_a0);
  func_0x000107c3193c(&ppplStack_a0);
  ppplStack_98 = ppplStack_78;
  ppplStack_a0 = (long ***)pppplStack_80;
  uStack_90 = ppplStack_70;
  ppplStack_78 = (long ***)0x0;
  ppplStack_70 = (long ***)0x0;
  pppplStack_80 = (long ****)0x0;
  pppplStack_88 = (long ****)&pppplStack_80;
  FUN_10a0426d8(&pppplStack_88);
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3d850);
  if ((int)plVar6 != 0) {
    ppuVar8 = &PTR_DAT_110c3d850;
    (**(code **)(*param_2 + 0x210))(param_2);
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x208))();
    ppplVar14 = ppplStack_b0;
    uVar15 = (ulong)plVar6 & 0xffffffff;
    lVar16 = (long)ppplStack_b0 - (long)ppplStack_b8;
    uVar10 = lVar16 >> 4;
    if (uVar10 < uVar15) {
      uVar10 = uVar15 - uVar10;
      if ((ulong)(lStack_a8 - (long)ppplStack_b0 >> 4) < uVar10) {
        uVar11 = lStack_a8 - (long)ppplStack_b8 >> 3;
        if (uVar11 <= uVar15) {
          uVar11 = uVar15;
        }
        if (0x7fffffffffffffef < (ulong)(lStack_a8 - (long)ppplStack_b8)) {
          uVar11 = 0xfffffffffffffff;
        }
        pppplStack_60 = &ppplStack_b8;
        FUN_10aa91e7c();
        lVar16 = uVar11 + lVar16;
        _bzero(lVar16,uVar10 * 0x10);
        ppplVar14 = (long ***)(lVar16 - ((long)ppplStack_b0 - (long)ppplStack_b8));
        _memcpy(ppplVar14);
        ppplStack_70 = ppplStack_b8;
        lStack_68 = lStack_a8;
        pppplStack_80 = (long ****)ppplStack_b8;
        ppplStack_78 = ppplStack_b8;
        ppplStack_b8 = ppplVar14;
        ppplStack_b0 = (long ***)(lVar16 + uVar10 * 0x10);
        lStack_a8 = uVar11 + (long)ppuVar8 * 0x10;
        func_0x00010aa91eb0(&pppplStack_80);
        ppplVar14 = ppplStack_b0;
      }
      else {
        _bzero(ppplStack_b0,uVar10 * 0x10);
        ppplVar14 = ppplVar14 + uVar10 * 2;
      }
    }
    else if (uVar15 < uVar10) {
      ppplVar14 = ppplStack_b8 + uVar15 * 2;
      ppplVar13 = ppplStack_b0;
      while (ppplVar13 != ppplVar14) {
        ppplVar13 = ppplVar13 + -2;
        func_0x00010a493e78(ppplVar13);
      }
    }
    ppplStack_b0 = ppplVar14;
    if ((int)plVar6 != 0) {
      uVar10 = 0;
      do {
        ppplVar14 = ppplStack_b8;
        if ((ulong)((long)ppplStack_b0 - (long)ppplStack_b8 >> 4) <= uVar10) goto LAB_10aa739e4;
        (**(code **)(*param_2 + 0x218))(param_2,uVar10);
        plVar6 = param_2;
        (**(code **)(*param_2 + 0x208))();
        if ((int)plVar6 != 0) {
          func_0x00010a493ed0(&pppplStack_80,&pppplStack_88);
          FUN_10a468bcc(ppplVar14 + uVar10 * 2,&pppplStack_80);
          ppplVar13 = ppplStack_78;
          if (ppplStack_78 != (long ***)0x0) {
            ppplVar9 = ppplStack_78 + 1;
            do {
              pplVar12 = *ppplVar9;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppplVar9,0x10);
              if (bVar3) {
                *ppplVar9 = (long **)((long)pplVar12 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (pplVar12 == (long **)0x0) {
              (*(code *)(*ppplStack_78)[2])(ppplStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppplVar13);
            }
          }
          pplVar12 = ppplVar14[uVar10 * 2] + 0xb;
          (*(code *)(*pplVar12)[2])(pplVar12,param_2);
        }
        (**(code **)(*param_2 + 0x220))(param_2);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar15);
    }
    (**(code **)(*param_2 + 0x220))(param_2);
  }
  if (((long)ppplStack_98 - (long)ppplStack_a0 >> 3) * -0x5555555555555555 -
      ((long)ppplStack_b0 - (long)ppplStack_b8 >> 4) != 0) {
    uVar7 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a009538();
    ___cxa_throw(uVar7,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10aa739e4:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa739e8);
    (*pcVar5)();
  }
  if (ppplStack_98 != ppplStack_a0) {
    uVar10 = 0;
    ppplVar14 = ppplStack_98;
    ppplVar13 = ppplStack_a0;
    do {
      if ((ulong)((long)ppplStack_b0 - (long)ppplStack_b8 >> 4) <= uVar10) break;
      ppplVar9 = ppplVar13 + uVar10 * 3;
      if (*(char *)((long)ppplVar9 + 0x17) < '\0') {
        if (ppplVar9[1] != (long **)0x0) goto LAB_10aa73904;
      }
      else if (*(char *)((long)ppplVar9 + 0x17) != '\0') {
LAB_10aa73904:
        func_0x00010aa91d98(&pppplStack_80,ppplVar9,ppplStack_b8 + uVar10 * 2);
        FUN_10aa73a34(param_1 + 0xe0,&pppplStack_80);
        pppplVar4 = pppplStack_60;
        if (pppplStack_60 != (long ****)0x0) {
          pppplVar1 = pppplStack_60 + 1;
          do {
            ppplVar14 = *pppplVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(pppplVar1,0x10);
            if (bVar3) {
              *pppplVar1 = (long ***)((long)ppplVar14 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppplVar14 == (long ***)0x0) {
            (*(code *)(*pppplVar4)[2])(pppplVar4);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar4);
          }
        }
        ppplVar14 = ppplStack_98;
        ppplVar13 = ppplStack_a0;
        if ((long)ppplStack_70 < 0) {
          __ZdlPv(pppplStack_80);
          ppplVar14 = ppplStack_98;
          ppplVar13 = ppplStack_a0;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(((long)ppplVar14 - (long)ppplVar13 >> 3) * -0x5555555555555555));
  }
  func_0x00010aa91e0c(&ppplStack_b8);
  pppplStack_80 = &ppplStack_a0;
  FUN_10a0426d8(&pppplStack_80);
  return;
}



/* Entry: 10aa73a34; end: 10aa73bc3;  */

long ** FUN_10aa73a34(ulong *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long **pplVar4;
  long **pplVar5;
  long *plVar6;
  long **pplVar7;
  long **pplVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long **pplStack_b8;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  ulong *puStack_48;
  
  pplVar5 = (long **)*param_1;
  pplVar7 = (long **)param_1[1];
  pplVar4 = pplVar5;
  pplVar8 = pplVar7;
  FUN_10aa73ffc(pplVar5,pplVar7,param_2);
  if (pplVar7 != pplVar4) {
    plVar6 = *(long **)(param_2 + 0x20);
    plVar13 = *(long **)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    plVar12 = pplVar4[4];
    pplVar4[4] = plVar6;
    pplVar4[3] = plVar13;
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
      do {
        lVar9 = *plVar13;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar2) {
          *plVar13 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    return pplVar4 + 3;
  }
  if (pplVar7 < (long **)param_1[2]) {
    pplVar5 = pplVar7;
    func_0x00010aa91d28(pplVar7,param_2);
    pplVar7 = pplVar7 + 5;
    param_1[1] = (ulong)pplVar7;
  }
  else {
    uVar10 = ((long)pplVar7 - (long)pplVar5 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar10) {
      FUN_10aa95210();
LAB_10aa73ba0:
      func_0x000109ffded8();
      FUN_10aa95224(&plStack_68);
      __Unwind_Resume();
      func_0x00010aa70b70();
      alStack_f0[0] = 0;
      alStack_f0[1] = 0;
      alStack_f0[2] = 0;
      lVar9 = ((long)pplVar4[0x1d] - (long)pplVar4[0x1c] >> 3) * -0x3333333333333333;
      func_0x000107c31930(alStack_f0);
      plStack_108 = (long *)0x0;
      plStack_100 = (long *)0x0;
      plStack_f8 = (long *)0x0;
      plVar12 = pplVar4[0x1c];
      plVar13 = pplVar4[0x1d];
      if ((long)plVar13 - (long)plVar12 != 0) {
        plVar12 = (long *)(((long)plVar13 - (long)plVar12 >> 3) * -0x3333333333333333);
        if ((ulong)plVar12 >> 0x3c != 0) {
          FUN_10aa91e68();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa73d74);
          (*pcVar3)();
        }
        pplStack_b8 = &plStack_108;
        FUN_10aa91e7c();
        plVar13 = (long *)((long)plVar12 - ((long)plStack_100 - (long)plStack_108));
        _memcpy(plVar13);
        plStack_c8 = plStack_108;
        plStack_c0 = plStack_f8;
        plStack_d8 = plStack_108;
        plStack_d0 = plStack_108;
        plStack_108 = plVar13;
        plStack_100 = plVar12;
        plStack_f8 = plVar12 + lVar9 * 2;
        func_0x00010aa91eb0(&plStack_d8);
        plVar12 = pplVar4[0x1c];
        plVar13 = pplVar4[0x1d];
      }
      for (; plVar12 != plVar13; plVar12 = plVar12 + 5) {
        FUN_10a0b4ec0(alStack_f0,plVar12);
        FUN_10aa73da8(&plStack_108,plVar12 + 3);
      }
      (*(code *)(*pplVar8)[0x27])(pplVar8,&PTR_DAT_110c3fb78,alStack_f0);
      (*(code *)(*pplVar8)[3])(pplVar8,&PTR_DAT_110c3d850);
      plVar13 = plStack_100;
      for (plVar12 = plStack_108; plVar12 != plVar13; plVar12 = plVar12 + 2) {
        (*(code *)(*pplVar8)[2])(pplVar8);
        if (*plVar12 != 0) {
          plVar6 = (long *)(*plVar12 + 0x58);
          (**(code **)(*plVar6 + 0x18))(plVar6,pplVar8);
        }
        (*(code *)(*pplVar8)[4])(pplVar8);
      }
      (*(code *)(*pplVar8)[4])(pplVar8);
      func_0x00010aa91e0c(&plStack_108);
      plStack_d8 = alStack_f0;
      pplVar7 = &plStack_d8;
      FUN_10a0426d8(pplVar7);
      return pplVar7;
    }
    lVar9 = (long)param_1[2] - (long)pplVar5 >> 3;
    uVar11 = lVar9 * -0x6666666666666666;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar11 = 0x666666666666666;
    }
    puStack_48 = param_1;
    if (uVar11 == 0) {
      plVar12 = (long *)0x0;
    }
    else {
      if (0x666666666666666 < uVar11) goto LAB_10aa73ba0;
      plVar12 = (long *)(uVar11 * 0x28);
      __Znwm();
    }
    lVar9 = (long)plVar12 + ((long)pplVar7 - (long)pplVar5);
    plStack_68 = plVar12;
    plStack_60 = (long *)lVar9;
    plStack_58 = (long *)lVar9;
    plStack_50 = plVar12 + uVar11 * 5;
    func_0x00010aa91d28(lVar9,param_2);
    pplVar7 = (long **)(lVar9 + 0x28);
    plVar13 = (long *)*param_1;
    uVar10 = lVar9 - (param_1[1] - (long)plVar13);
    _memcpy(uVar10,plVar13);
    *param_1 = uVar10;
    param_1[1] = (ulong)pplVar7;
    plStack_50 = (long *)param_1[2];
    param_1[2] = (ulong)(plVar12 + uVar11 * 5);
    pplVar5 = &plStack_68;
    plStack_68 = plVar13;
    plStack_60 = plVar13;
    plStack_58 = plVar13;
    FUN_10aa95224(pplVar5);
  }
  param_1[1] = (ulong)pplVar7;
  return pplVar5;
}



/* Entry: 10aa73bc4; end: 10aa73da7;  */

void FUN_10aa73bc4(long param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long alStack_80 [3];
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long **pplStack_48;
  
  func_0x00010aa70b70();
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  lVar4 = (*(long *)(param_1 + 0xe8) - *(long *)(param_1 + 0xe0) >> 3) * -0x3333333333333333;
  func_0x000107c31930(alStack_80);
  plStack_98 = (long *)0x0;
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0xe0);
  lVar7 = *(long *)(param_1 + 0xe8);
  if (lVar7 - lVar5 != 0) {
    plVar2 = (long *)((lVar7 - lVar5 >> 3) * -0x3333333333333333);
    if ((ulong)plVar2 >> 0x3c != 0) {
      FUN_10aa91e68();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa73d74);
      (*pcVar1)();
    }
    pplStack_48 = &plStack_98;
    FUN_10aa91e7c();
    plVar6 = (long *)((long)plVar2 - ((long)plStack_90 - (long)plStack_98));
    _memcpy(plVar6);
    plStack_58 = plStack_98;
    plStack_50 = plStack_88;
    plStack_68 = plStack_98;
    plStack_60 = plStack_98;
    plStack_98 = plVar6;
    plStack_90 = plVar2;
    plStack_88 = plVar2 + lVar4 * 2;
    func_0x00010aa91eb0(&plStack_68);
    lVar5 = *(long *)(param_1 + 0xe0);
    lVar7 = *(long *)(param_1 + 0xe8);
  }
  for (; lVar5 != lVar7; lVar5 = lVar5 + 0x28) {
    FUN_10a0b4ec0(alStack_80,lVar5);
    FUN_10aa73da8(&plStack_98,lVar5 + 0x18);
  }
  (**(code **)(*param_2 + 0x138))(param_2,&PTR_DAT_110c3fb78,alStack_80);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3d850);
  plVar6 = plStack_90;
  for (plVar2 = plStack_98; plVar2 != plVar6; plVar2 = plVar2 + 2) {
    (**(code **)(*param_2 + 0x10))(param_2);
    if (*plVar2 != 0) {
      plVar3 = (long *)(*plVar2 + 0x58);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  func_0x00010aa91e0c(&plStack_98);
  plStack_68 = alStack_80;
  FUN_10a0426d8(&plStack_68);
  return;
}



/* Entry: 10aa73da8; end: 10aa73ebb;  */

void FUN_10aa73da8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 *extraout_x8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar9 = param_2[1];
    uVar14 = *param_2;
    puVar13[1] = param_2[1];
    *puVar13 = uVar14;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar13 = puVar13 + 2;
  }
  else {
    lVar9 = (long)puVar13 - *param_1;
    uVar2 = (lVar9 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      FUN_10aa91e68();
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      lVar5 = param_1[0x1d];
      for (lVar9 = param_1[0x1c]; lVar9 != lVar5; lVar9 = lVar9 + 0x28) {
        func_0x00010aa91d28(auStack_c8,lVar9);
        FUN_10aa73da8(extraout_x8,auStack_b0);
        plVar1 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar3 = plStack_a8 + 1;
          do {
            lVar11 = *plVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *plVar3 = lVar11 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        if (cStack_b1 < '\0') {
          __ZdlPv(auStack_c8[0]);
        }
      }
      return;
    }
    uVar10 = param_1[2] - *param_1;
    uVar12 = (long)uVar10 >> 3;
    if (uVar12 <= uVar2) {
      uVar12 = uVar2;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar12 = 0xfffffffffffffff;
    }
    puVar8 = param_2;
    plStack_38 = param_1;
    FUN_10aa91e7c();
    puVar4 = (undefined8 *)(uVar12 + lVar9);
    lVar9 = param_2[1];
    uVar14 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar14;
    if (lVar9 != 0) {
      plVar1 = (long *)(lVar9 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar13 = puVar4 + 2;
    lVar9 = (long)puVar4 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    lStack_58 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)puVar13;
    lStack_40 = param_1[2];
    param_1[2] = uVar12 + (long)puVar8 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010aa91eb0(&lStack_58);
  }
  param_1[1] = (long)puVar13;
  return;
}



/* Entry: 10aa73ebc; end: 10aa73f97;  */

void FUN_10aa73ebc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = *(long *)(param_2 + 0xe8);
  for (lVar2 = *(long *)(param_2 + 0xe0); lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
    func_0x00010aa91d28(auStack_68,lVar2);
    FUN_10aa73da8(param_1,auStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  return;
}



/* Entry: 10aa73f98; end: 10aa73ffb;  */

void FUN_10aa73f98(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_2 + 0xe0);
  lVar5 = *(long *)(param_2 + 0xe8);
  FUN_10aa73ffc(lVar4,lVar5,param_3);
  if (lVar5 == lVar4) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
    param_1[1] = *(undefined8 *)(lVar4 + 0x20);
    *param_1 = uVar6;
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
  }
  return;
}



/* Entry: 10aa73ffc; end: 10aa7408f;  */

undefined8 * FUN_10aa73ffc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    do {
      bVar3 = *(byte *)((long)param_1 + 0x17);
      uVar2 = param_1[1];
      if (-1 < (char)bVar3) {
        uVar2 = (ulong)bVar3;
      }
      if (uVar2 == uVar4) {
        puVar5 = (undefined8 *)*param_1;
        if (-1 < (char)bVar3) {
          puVar5 = param_1;
        }
        _memcmp(puVar5,puVar1,uVar4);
        if ((int)puVar5 == 0) {
          return param_1;
        }
      }
      param_1 = param_1 + 5;
      puVar5 = param_2;
    } while (param_1 != param_2);
  }
  return puVar5;
}



/* Entry: 10aa74090; end: 10aa7413f;  */

undefined4 FUN_10aa74090(undefined4 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  lVar2 = *(long *)(param_2 + 0xe0);
  if (lVar2 == *(long *)(param_2 + 0xe8)) {
    uStack_48._4_4_ = 0;
  }
  else {
    iVar3 = 0;
    do {
      uVar4 = param_1;
      (**(code **)**(undefined8 **)(lVar2 + 0x18))();
      if (iVar3 == 1) {
        puVar1 = &uStack_48;
      }
      else {
        if (iVar3 == 2) break;
        puVar1 = (undefined8 *)((long)&uStack_48 + 4);
      }
      *(undefined4 *)puVar1 = uVar4;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != *(long *)(param_2 + 0xe8));
  }
  return uStack_48._4_4_;
}



/* Entry: 10aa74140; end: 10aa741ef;  */

void FUN_10aa74140(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010741b144(param_1,(*(long *)(param_2 + 0xe8) - *(long *)(param_2 + 0xe0) >> 3) *
                              -0x3333333333333333);
  puVar1 = *(undefined8 **)(param_2 + 0xe8);
  for (puVar2 = *(undefined8 **)(param_2 + 0xe0); puVar2 != puVar1; puVar2 = puVar2 + 5) {
    lStack_38 = (long)*(char *)((long)puVar2 + 0x17);
    puStack_40 = puVar2;
    if (lStack_38 < 0) {
      lStack_38 = puVar2[1];
      puStack_40 = (undefined8 *)*puVar2;
    }
    FUN_10a4164cc(param_1,&puStack_40);
  }
  return;
}



/* Entry: 10aa741f0; end: 10aa74323;  */

undefined1  [16] FUN_10aa741f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f68d1a4;
  return auVar1;
}



/* Entry: 10aa74324; end: 10aa74377;  */

void FUN_10aa74324(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000002;
  uStack_48 = 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = 0x13c00000124;
  FUN_10aa74378(param_1,&uStack_58);
  FUN_10aa9536c();
  return;
}



/* Entry: 10aa74378; end: 10aa7444f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa74410) */

undefined1  [16] FUN_10aa74378(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d1a4,0x1a);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa95270(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa74450; end: 10aa7455b;  */

void FUN_10aa74450(undefined8 param_1)

{
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10aa7455c(param_1,&puStack_98);
  puStack_a8 = &UNK_10f68c0db;
  puStack_a0 = &UNK_10f68c44b;
  puStack_98 = &UNK_10f68c442;
  uStack_88 = 2;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  ppuStack_90 = &puStack_a8;
  FUN_10aa95524();
  puStack_a8 = &UNK_10f68c0ce;
  puStack_98 = &UNK_10f68c455;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  ppuStack_90 = &puStack_a8;
  func_0x00010aa957cc(param_1,&puStack_98,0);
  FUN_10aa95a20(param_1);
  return;
}



/* Entry: 10aa7455c; end: 10aa74633;  */

/* WARNING: Removing unreachable block (ram,0x00010aa745f4) */

undefined1  [16] FUN_10aa7455c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f68d1bf,0x19);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10aa95428(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10aa74634; end: 10aa74773;  */

undefined8 * FUN_10aa74634(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined8 auStack_58 [2];
  char cStack_41;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110c3d8d8;
  param_1[2] = &PTR_DAT_110c3d980;
  param_1[7] = &PTR_DAT_110c3d9d8;
  param_1[0x1d] = &PTR_FUN_110c3f130;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 0x1c) =
       CONCAT13(in_register_00005003,
                CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  func_0x000107c2b054(auStack_58,&DAT_10f54a432);
  FUN_10aa74774(param_1,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  func_0x000107c2b054(auStack_58,&DAT_10f68c461);
  FUN_10aa74774(param_1,auStack_58);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 10aa74774; end: 10aa748e3;  */

void FUN_10aa74774(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_88 [16];
  long *plStack_78;
  undefined8 uStack_70;
  char cStack_59;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar4 = (long *)0x30;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c40020;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plStack_58 = plVar4 + 3;
  *plStack_58 = (long)&PTR_DAT_110c3d880;
  plStack_50 = plVar4;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_48,*param_3,param_3[1]);
  }
  else {
    uStack_40 = param_3[1];
    uStack_48 = *param_3;
    lStack_38 = param_3[2];
  }
  FUN_10aa95e98(param_1,auStack_88,&plStack_58);
  FUN_10aa74b88(param_2 + 0xe8,auStack_88);
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  if (plStack_78 != (long *)0x0) {
    plVar4 = plStack_78 + 1;
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  plVar4 = plStack_50;
  if (plStack_50 != (long *)0x0) {
    plVar1 = plStack_50 + 1;
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
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10aa748e4; end: 10aa748e7;  */

undefined8 * FUN_10aa748e4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR____cxa_pure_virtual_110c3fba8;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  func_0x00010aa95adc(param_1 + 7);
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    lVar2 = param_1[2];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        func_0x00010aa91efc(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = param_1[1];
    }
    param_1[2] = lVar3;
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10aa748e8; end: 10aa74b87;  */

void FUN_10aa748e8(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  long *plStack_a8;
  undefined8 uStack_a0;
  char cStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_71;
  
  func_0x00010aa70acc();
  lVar6 = *(long *)(param_2 + 0xf0);
  lVar7 = *(long *)(param_2 + 0xf8);
  while (lVar7 != lVar6) {
    lVar7 = lVar7 + -0x30;
    func_0x00010aa91efc(lVar7);
  }
  *(long *)(param_2 + 0xf8) = lVar6;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined4 *)(param_2 + 0x110) = 0x7f7fffff;
  *(undefined4 *)(param_2 + 0x148) = 0;
  (**(code **)(*param_3 + 0x210))(param_3,&PTR_DAT_110c3d9e8);
  plVar4 = param_3;
  (**(code **)(*param_3 + 0x208))();
  if ((int)plVar4 != 0) {
    iVar8 = 0;
    do {
      (**(code **)(*param_3 + 0x218))(param_3,iVar8);
      (**(code **)(*param_3 + 0xa0))(&uStack_88,param_3,&PTR_s_event_110c3fbc8);
      (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c3da08);
      plVar5 = (long *)0x30;
      __Znwm();
      plVar5[1] = 0;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_110c40020;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plStack_e0 = plVar5 + 3;
      *plStack_e0 = (long)&PTR_DAT_110c3d880;
      plStack_d8 = plVar5;
      if ((char)bStack_71 < '\0') {
        func_0x000107c3192c(&uStack_d0,uStack_88,uStack_80);
      }
      else {
        uStack_c8 = uStack_80;
        uStack_d0 = uStack_88;
        lStack_c0 = (ulong)bStack_71 << 0x38;
      }
      FUN_10aa95e98(param_1,auStack_b8,&plStack_e0);
      FUN_10aa74b88(param_2 + 0xe8,auStack_b8);
      if (cStack_89 < '\0') {
        __ZdlPv(uStack_a0);
      }
      plVar5 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar1 = plStack_a8 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      if (lStack_c0 < 0) {
        __ZdlPv(uStack_d0);
      }
      plVar5 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          lVar6 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      (**(code **)(*param_3 + 0x220))(param_3);
      if ((char)bStack_71 < '\0') {
        __ZdlPv(uStack_88);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != (int)plVar4);
  }
  (**(code **)(*param_3 + 0x220))(param_3);
  return;
}



/* Entry: 10aa74b88; end: 10aa74f33;  */

/* WARNING: Removing unreachable block (ram,0x00010aa74c9c) */

float * FUN_10aa74b88(float *param_1,float *param_2)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  float fVar15;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  float *pfStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  float *pfStack_68;
  
  pfVar2 = (float *)&uStack_b0;
  pfVar13 = param_1 + 2;
  pfVar6 = *(float **)pfVar13;
  pfVar4 = *(float **)(param_1 + 4);
  lVar8 = (long)pfVar4 - (long)pfVar6 >> 4;
  pfVar3 = pfVar4;
  if ((long)pfVar4 - (long)pfVar6 != 0) {
    uVar5 = lVar8 * -0x5555555555555555;
    pfVar10 = pfVar6;
    do {
      uVar9 = uVar5 >> 1;
      pfVar3 = pfVar10 + uVar9 * 0xc + 0xc;
      uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
      if (*param_2 <= pfVar10[uVar9 * 0xc]) {
        pfVar3 = pfVar10;
        uVar5 = uVar9;
      }
      pfVar10 = pfVar3;
    } while (uVar5 != 0);
  }
  if (pfVar4 < *(float **)(param_1 + 6)) {
    if ((long)pfVar3 - (long)pfVar4 == 0) {
      pfVar2 = pfVar4;
      FUN_10aa95b34(pfVar4,param_2);
      *(float **)(param_1 + 4) = pfVar4 + 0xc;
    }
    else {
      pfVar6 = pfVar4;
      if (pfVar4 + -0xc < pfVar4) {
        pfVar6 = pfVar4 + 0xc;
        *pfVar4 = pfVar4[-0xc];
        *(undefined8 *)(pfVar4 + 4) = *(undefined8 *)(pfVar4 + -8);
        *(undefined8 *)(pfVar4 + 2) = *(undefined8 *)(pfVar4 + -10);
        pfVar4[-10] = 0.0;
        pfVar4[-9] = 0.0;
        pfVar4[-8] = 0.0;
        pfVar4[-7] = 0.0;
        *(undefined8 *)(pfVar4 + 10) = *(undefined8 *)(pfVar4 + -2);
        *(undefined8 *)(pfVar4 + 8) = *(undefined8 *)(pfVar4 + -4);
        *(undefined8 *)(pfVar4 + 6) = *(undefined8 *)(pfVar4 + -6);
        pfVar4[-4] = 0.0;
        pfVar4[-3] = 0.0;
        pfVar4[-2] = 0.0;
        pfVar4[-1] = 0.0;
        pfVar4[-6] = 0.0;
        pfVar4[-5] = 0.0;
      }
      *(float **)(param_1 + 4) = pfVar6;
      if (pfVar4 != pfVar3 + 0xc) {
        lVar8 = 0;
        do {
          *(undefined4 *)((long)pfVar4 + lVar8 + -0x30) =
               *(undefined4 *)((long)pfVar4 + lVar8 + -0x60);
          FUN_10aa95bc4((undefined1 *)((long)pfVar4 + lVar8 + -0x28),
                        (undefined1 *)((long)pfVar4 + lVar8 + -0x58));
          lVar11 = lVar8 + -0x30;
          *(undefined8 *)((long)pfVar4 + lVar8 + -8) = *(undefined8 *)((long)pfVar4 + lVar8 + -0x38)
          ;
          *(undefined8 *)((long)pfVar4 + lVar8 + -0x10) =
               *(undefined8 *)((long)pfVar4 + lVar8 + -0x40);
          *(undefined8 *)((long)pfVar4 + lVar8 + -0x18) =
               *(undefined8 *)((long)pfVar4 + lVar8 + -0x48);
          *(undefined1 *)((long)pfVar4 + lVar8 + -0x31) = 0;
          *(undefined1 *)((long)pfVar4 + lVar8 + -0x48) = 0;
          lVar8 = lVar11;
        } while (((long)pfVar3 - (long)pfVar4) + 0x30 != lVar11);
        pfVar6 = *(float **)(param_1 + 4);
      }
      if (pfVar6 < pfVar3) goto LAB_10aa74f0c;
      lVar8 = 0x30;
      if (pfVar6 <= param_2 || param_2 < pfVar3) {
        lVar8 = 0;
      }
      param_2 = (float *)((long)param_2 + lVar8);
      pfVar2 = pfVar3 + 6;
      *pfVar3 = *param_2;
      func_0x00010aa95c28(pfVar3 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pfVar2,param_2 + 6);
    }
  }
  else {
    uVar5 = lVar8 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar5) {
      pfVar3 = param_1;
      FUN_10aa95c9c();
      *(float **)(param_1 + 4) = pfVar4;
      __Unwind_Resume();
      if (*(char *)((long)pfVar3 + 0x2f) < '\0') {
        __ZdlPv(*(undefined8 *)(pfVar3 + 6));
      }
      func_0x00010aa95adc(pfVar3 + 2);
      return pfVar3;
    }
    uVar14 = (long)pfVar3 - (long)pfVar6;
    lVar8 = (long)*(float **)(param_1 + 6) - (long)pfVar6 >> 4;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
      uVar9 = uVar5;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    pfVar4 = param_2;
    pfStack_90 = pfVar13;
    if (uVar9 == 0) {
      uVar9 = 0;
      uVar5 = 0;
    }
    else {
      FUN_10aa95cb0();
      uVar5 = (long)pfVar4 * 0x30;
    }
    lVar8 = uVar9 + uVar14;
    lVar11 = uVar9 + uVar5;
    lVar12 = lVar8;
    uStack_b0 = uVar9;
    uStack_a8 = lVar8;
    uStack_a0 = lVar8;
    lStack_98 = lVar11;
    if (uVar14 == uVar5) {
      if ((long)uVar14 < 1) {
        uVar5 = 1;
        if (pfVar3 != pfVar6) {
          uVar5 = (-uVar14 >> 4) * -0x5555555555555556;
        }
        uVar14 = uVar5;
        pfStack_68 = pfVar13;
        FUN_10aa95cb0();
        lVar12 = uVar14 + (uVar5 >> 2) * 0x30;
        lStack_98 = uVar14 + (long)pfVar4 * 0x30;
        uStack_b0 = uVar14;
        uStack_a8 = lVar12;
        uStack_a0 = lVar12;
        uStack_88 = uVar9;
        lStack_80 = lVar8;
        lStack_78 = lVar8;
        lStack_70 = lVar11;
        func_0x00010aa95e0c(&uStack_88);
        lVar8 = lVar12;
      }
      else {
        lVar12 = lVar8 + ((uVar14 >> 4) * -0x5555555555555555 + 1 >> 1) * -0x30;
        FUN_10aa95cf4(lVar8,lVar8,lVar12);
        uStack_a8 = lVar12;
        uStack_a0 = lVar8;
      }
    }
    FUN_10aa95b34(lVar8,param_2);
    FUN_10aa95d90(pfVar3,*(undefined8 *)(param_1 + 4),lVar8 + 0x30);
    lVar11 = *(long *)(param_1 + 4);
    *(float **)(param_1 + 4) = pfVar3;
    lVar12 = lVar12 + (*(long *)(param_1 + 2) - (long)pfVar3);
    FUN_10aa95d90(*(long *)(param_1 + 2),pfVar3,lVar12);
    uStack_b0 = *(ulong *)(param_1 + 2);
    *(long *)(param_1 + 2) = lVar12;
    *(long *)(param_1 + 4) = lVar8 + 0x30 + (lVar11 - (long)pfVar3);
    uVar7 = *(undefined8 *)(param_1 + 6);
    *(long *)(param_1 + 6) = lStack_98;
    uStack_a8 = uStack_b0;
    uStack_a0 = uStack_b0;
    lStack_98 = uVar7;
    func_0x00010aa95e0c(&uStack_b0);
  }
  if (*(float **)(param_1 + 2) != *(float **)(param_1 + 4)) {
    param_1[8] = (*(float **)(param_1 + 4))[-0xc];
    fVar15 = **(float **)(param_1 + 2);
    param_1[9] = 0.0;
    param_1[10] = fVar15;
    param_1[0x18] = 0.0;
    return pfVar2;
  }
LAB_10aa74f0c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa74f10);
  (*pcVar1)();
}



/* Entry: 10aa74f34; end: 10aa74f9b;  */

long FUN_10aa74f34(long param_1)

{
  if (*(char *)(param_1 + 0x2f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x00010aa95adc(param_1 + 8);
  return param_1;
}



/* Entry: 10aa74f9c; end: 10aa7505f;  */

void FUN_10aa74f9c(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3d9e8);
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  for (puVar2 = *(undefined4 **)(param_1 + 0xf0); puVar2 != puVar1; puVar2 = puVar2 + 0xc) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_s_event_110c3fbc8,puVar2 + 6);
    (**(code **)(*param_2 + 0x60))(*puVar2,param_2,&PTR_DAT_110c3da08);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010aa7505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa75060; end: 10aa753f3;  */

void FUN_10aa75060(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  lVar8 = *(long *)(param_2 + 0x50);
  if (lVar8 == 0) {
    uVar10 = *(undefined4 *)(param_2 + 0xe0);
    plVar5 = (long *)0x168;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110c400d0;
    plVar6 = plVar5 + 3;
    FUN_10aa74634(uVar10,plVar6,0);
    plStack_60 = plVar6;
    plStack_58 = plVar5;
    FUN_10aa96160(&plStack_60,plVar5 + 8,plVar6);
    FUN_10aa95f24(&plStack_a0,&plStack_60);
    if (plStack_58 == (long *)0x0) goto LAB_10aa752d8;
    plVar6 = plStack_58 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_58;
    } while (cVar2 != '\0');
  }
  else {
    lVar9 = *(long *)(lVar8 + 0x858);
    plVar6 = *(long **)(lVar8 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar10 = *(undefined4 *)(param_2 + 0xe0);
    uVar4 = 0x150;
    lStack_90 = lVar9;
    plStack_88 = plVar6;
    __Znwm(0x150);
    FUN_10aa74634(uVar10);
    lStack_70 = 0;
    FUN_10aa96088(&lStack_70);
    lStack_80 = lVar9;
    plStack_78 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    lStack_70 = lVar9;
    plStack_68 = plVar6;
    FUN_10aa960c8(&plStack_60,uVar4,&lStack_70);
    FUN_10aa95f24(&plStack_a0,&plStack_60);
    plVar6 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_68 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lStack_90 != 0) && (plStack_a0 != (long *)0x0)) {
      plStack_60 = plStack_a0;
      plStack_58 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar6 = plStack_98 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10aa88c30(lStack_90,&plStack_60);
      plVar6 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar5 = plStack_58 + 1;
        do {
          lVar8 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
    }
    if (plStack_88 == (long *)0x0) goto LAB_10aa752d8;
    plVar6 = plStack_88 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar5 = plStack_88;
    } while (cVar2 != '\0');
  }
  if (lVar8 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_10aa752d8:
  puVar1 = *(undefined4 **)(param_2 + 0xf8);
  for (puVar7 = *(undefined4 **)(param_2 + 0xf0); puVar7 != puVar1; puVar7 = puVar7 + 0xc) {
    FUN_10aa753f4(auStack_b0,*puVar7,plStack_a0,puVar7 + 6);
    plVar6 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar5 = plStack_a8 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  param_1[1] = plStack_98;
  *param_1 = plStack_a0;
  return;
}



/* Entry: 10aa753f4; end: 10aa755f7;  */

void FUN_10aa753f4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  undefined8 uStack_88;
  char cStack_71;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  plVar5 = (long *)0x30;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c40020;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plStack_70 = plVar5 + 3;
  *plStack_70 = (long)&PTR_DAT_110c3d880;
  plStack_68 = plVar5;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_4,param_4[1]);
  }
  else {
    uStack_58 = param_4[1];
    uStack_60 = *param_4;
    lStack_50 = param_4[2];
  }
  if (((float)param_2 < *(float *)(param_3 + 0xe0)) && ((bRam000000011330a9e8 & 1) != 0)) {
    puVar2 = (undefined8 *)*param_4;
    if (-1 < *(char *)((long)param_4 + 0x17)) {
      puVar2 = param_4;
    }
    func_0x00010ae06f08(0,1,&UNK_10f68c465,&UNK_10f68c4a4,0x50,&UNK_10f68c540,in_x6,in_x7,puVar2,
                        (double)(float)param_2,(double)*(float *)(param_3 + 0xe0));
  }
  FUN_10aa95e98(param_2,auStack_a0,&plStack_70);
  FUN_10aa74b88(param_3 + 0xe8,auStack_a0);
  if (cStack_71 < '\0') {
    __ZdlPv(uStack_88);
  }
  if (plStack_90 != (long *)0x0) {
    plVar5 = plStack_90 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  param_1[1] = plStack_68;
  *param_1 = plStack_70;
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  plVar5 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10aa755f8; end: 10aa755ff;  */

undefined4 FUN_10aa755f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}



/* Entry: 10aa75600; end: 10aa756d7;  */

undefined1  [16] FUN_10aa75600(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  
  lVar6 = *(long *)(param_3 + 8);
  lVar2 = *(long *)(param_3 + 0x10) - lVar6;
  if (lVar2 != 0) {
    uVar5 = param_3;
    FUN_10aa756d8(param_2);
    FUN_10aa756d8(param_1);
    if (((int)uVar5 != (int)param_3) || (uVar5 >> 0x20 != param_3 >> 0x20)) {
      uVar7 = (lVar2 >> 4) * -0x5555555555555555;
      iVar9 = (int)(uVar5 >> 0x20);
      iVar8 = (int)(param_3 >> 0x20);
      iVar1 = iVar8;
      if ((float)param_1 <= (float)param_2) {
        iVar1 = iVar9;
        iVar9 = iVar8;
      }
      if (uVar7 < (ulong)(long)iVar9) {
LAB_10aa756b0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa756b4);
        (*pcVar3)();
      }
      iVar1 = iVar1 - iVar9;
      uVar7 = uVar7 - (long)iVar9;
      if ((iVar1 != -1) && (bVar4 = uVar7 < (ulong)(long)iVar1, uVar7 = (long)iVar1, bVar4))
      goto LAB_10aa756b0;
      lVar6 = lVar6 + (long)iVar9 * 0x30;
      goto LAB_10aa756c0;
    }
  }
  uVar7 = 0;
  lVar6 = 0;
LAB_10aa756c0:
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = lVar6;
  return auVar10;
}



/* Entry: 10aa756d8; end: 10aa7573b;  */

undefined * FUN_10aa756d8(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *extraout_x8;
  float *pfVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  ulong uVar11;
  
  if (param_1 < 0.0) {
    FUN_10a00946c(&UNK_10f68d587);
LAB_10aa75730:
    puVar4 = &UNK_10f68d5a4;
    FUN_10a00946c(&UNK_10f68d5a4);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    return puVar4;
  }
  lVar6 = *(long *)(param_2 + 0x10) - *(long *)(param_2 + 8);
  if ((ulong)((lVar6 >> 4) * -0x5555555555555555) < 2) goto LAB_10aa75730;
  if (lVar6 == 0x60) {
    return (undefined *)0x100000000;
  }
  iVar5 = *(int *)(param_2 + 0x60);
  if (iVar5 == 0) {
    fVar15 = (float)(ulong)((*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) *
                           -0x5555555555555555);
    _logf();
    iVar5 = (int)fVar15;
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    *(int *)(param_2 + 0x60) = iVar5;
  }
  uVar9 = *(uint *)(param_2 + 0x24);
  uVar10 = (ulong)uVar9;
  if (*(float *)(param_2 + 0x28) <= param_1) {
    uVar10 = (long)(int)uVar9 + 1;
    pfVar7 = *(float **)(param_2 + 8);
    lVar6 = *(long *)(param_2 + 0x10);
    uVar8 = (lVar6 - (long)pfVar7 >> 4) * -0x5555555555555555;
    uVar2 = (int)uVar8 - 1;
    uVar13 = (ulong)uVar2;
    uVar9 = (int)uVar10 + iVar5;
    if ((int)uVar2 <= (int)uVar9) {
      uVar9 = uVar2;
    }
    uVar11 = uVar10;
    if ((int)uVar10 < (int)uVar9) {
      pfVar12 = pfVar7 + uVar10 * 0xc;
      lVar14 = 0;
      if (uVar10 <= uVar8) {
        lVar14 = uVar8 - uVar10;
      }
      do {
        if (lVar14 == 0) goto LAB_10aa965ac;
        uVar11 = uVar10;
        if (param_1 < *pfVar12) break;
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar1;
        uVar11 = (ulong)uVar9;
        pfVar12 = pfVar12 + 0xc;
        lVar14 = lVar14 + -1;
      } while (uVar9 != uVar1);
    }
    uVar9 = (uint)uVar11;
    if (uVar9 != uVar2) {
      if (uVar8 < (ulong)(long)(int)uVar9 || uVar8 - (long)(int)uVar9 == 0) goto LAB_10aa965ac;
      uVar13 = uVar11;
      if (pfVar7[(long)(int)uVar9 * 0xc] <= param_1) goto LAB_10aa964f0;
    }
  }
  else {
    uVar2 = uVar9 - iVar5 & ((int)(uVar9 - iVar5) >> 0x1f ^ 0xffffffffU);
    uVar13 = uVar10;
    if ((int)uVar2 < (int)uVar9) {
      uVar8 = (*(long *)(param_2 + 0x10) - *(long *)(param_2 + 8) >> 4) * -0x5555555555555555;
      pfVar7 = (float *)(*(long *)(param_2 + 8) + (ulong)uVar9 * 0x30);
      do {
        if (uVar8 < uVar10 || uVar8 - uVar10 == 0) goto LAB_10aa965ac;
        uVar13 = uVar10;
      } while ((param_1 <= *pfVar7) &&
              (uVar10 = uVar10 - 1, uVar13 = (ulong)uVar2, pfVar7 = pfVar7 + -0xc,
              (long)(ulong)uVar2 < (long)uVar10));
    }
    iVar5 = (int)uVar13;
    if (iVar5 == 0) {
      pfVar7 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
    }
    else {
      pfVar7 = *(float **)(param_2 + 8);
      lVar6 = *(long *)(param_2 + 0x10);
      uVar10 = (lVar6 - (long)pfVar7 >> 4) * -0x5555555555555555;
      if (uVar10 < (ulong)(long)iVar5 || uVar10 - (long)iVar5 == 0) goto LAB_10aa965ac;
      if (param_1 <= pfVar7[(long)iVar5 * 0xc]) {
LAB_10aa964f0:
        *(float *)(param_2 + 0x30) = param_1;
        lVar14 = (lVar6 + -0x30) - (long)pfVar7;
        pfVar12 = pfVar7;
        if (lVar14 != 0) {
          uVar10 = (lVar14 >> 4) * -0x5555555555555555;
          do {
            uVar8 = uVar10 >> 1;
            uVar13 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
            uVar10 = uVar8;
            if (pfVar12[uVar8 * 0xc] <= param_1) {
              uVar10 = uVar13;
              pfVar12 = pfVar12 + uVar8 * 0xc + 0xc;
            }
          } while (uVar10 != 0);
        }
        uVar13 = (ulong)(uint)((int)((ulong)((long)pfVar12 - (long)pfVar7) >> 4) * -0x55555555);
        goto LAB_10aa96564;
      }
    }
    uVar13 = (ulong)(iVar5 + 1);
  }
LAB_10aa96564:
  uVar9 = (int)uVar13 - 1;
  uVar10 = (lVar6 - (long)pfVar7 >> 4) * -0x5555555555555555;
  if ((ulong)(long)(int)uVar9 <= uVar10 && uVar10 - (long)(int)uVar9 != 0) {
    fVar15 = pfVar7[(long)(int)uVar9 * 0xc];
    *(uint *)(param_2 + 0x24) = uVar9;
    *(float *)(param_2 + 0x28) = fVar15;
    return (undefined *)((ulong)uVar9 | uVar13 << 0x20);
  }
LAB_10aa965ac:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa965b0);
  (*pcVar3)();
}



/* Entry: 10aa7573c; end: 10aa757c3;  */

void FUN_10aa7573c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10aa757c4; end: 10aa75bab;  */

void FUN_10aa757c4(ulong param_1)

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
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6583cb,0x14);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c41a78;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c41a78;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c3f040;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa75b8c;
    FUN_10a054dac(param_1,&UNK_10f68c5a0,FUN_10aa965b0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa75b8c;
    FUN_10a054dac(param_1,&UNK_10f68c5b3,FUN_10aa96750,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa75b8c;
    FUN_10a054dac(param_1,&UNK_10f68c5cc,FUN_10aa968cc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa75b8c;
    FUN_10a054dac(param_1,&UNK_10f68c5e3,FUN_10aa96a2c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f20c,FUN_10aa96b18,FUN_10aa96bc8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c46ae,FUN_10aa97384,FUN_10aa974ec);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scale",FUN_10aa97aac,FUN_10aa97b5c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2ff52c,FUN_10aa97c14,FUN_10aa97d7c);
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
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6583cb,0x14);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa75b8c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa75b90);
  (*pcVar6)();
}



/* Entry: 10aa75bac; end: 10aa75cbb;  */

void FUN_10aa75bac(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68c5fa;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68c0c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10aa75cbc(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68c612;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68c0c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10aa75d14(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68c61a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f68c0c1;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 2;
  FUN_10aa75d14(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10aa75cbc; end: 10aa75d13;  */

ulong FUN_10aa75cbc(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10aa75d14; end: 10aa75e77;  */

ulong FUN_10aa75d14(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010aa983dc(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10aa75e78; end: 10aa75ecf;  */

ulong FUN_10aa75e78(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10aa75ed0; end: 10aa75f27;  */

ulong FUN_10aa75ed0(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010aa98450(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10aa75f28; end: 10aa75fab;  */

void FUN_10aa75f28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_DAT_110c3da38;
  param_1[2] = &PTR_DAT_110c3dae0;
  param_1[7] = &PTR_DAT_110c3db38;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 1;
  param_1[0x29] = param_1 + 0x2a;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = param_1 + 0x2d;
  return;
}



/* Entry: 10aa75fac; end: 10aa76463;  */

void FUN_10aa75fac(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_80;
  long *plStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3db48);
  plVar6 = *(long **)(param_1 + 0x160);
  while (plVar6 != (long *)(param_1 + 0x168)) {
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_10a00d760(param_2,&PTR_DAT_110c3fbe8,plVar6 + 4);
    plStack_78 = (long *)plVar6[8];
    lStack_80 = plVar6[7];
    puStack_70 = &UNK_10f6583cb;
    uStack_68 = 0x14;
    if (plVar6[8] != 0) {
      plVar1 = (long *)(plVar6[8] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c3fc08,&lStack_80,&puStack_70);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar4 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar1 = (long *)plVar6[1];
    plVar5 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar5[2];
        bVar3 = (long *)*plVar6 != plVar5;
        plVar5 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_10aa76464(param_2,&PTR_DAT_110c3fc28,*(long *)(param_1 + 0xe0),
                  *(undefined8 *)(param_1 + 0xe8));
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  if (lVar4 != 0) {
    plStack_78 = *(long **)(param_1 + 0xf8);
    puStack_70 = &UNK_10f68c6a5;
    uStack_68 = 0x12;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_80 = lVar4;
    (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c3fc48,&lStack_80,&puStack_70);
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    FUN_10aa76464(param_2,&PTR_DAT_110c3fc68,*(long *)(param_1 + 0x100),
                  *(undefined8 *)(param_1 + 0x108));
  }
  lVar4 = *(long *)(param_1 + 0x110);
  if (lVar4 != 0) {
    plStack_78 = *(long **)(param_1 + 0x118);
    puStack_70 = &UNK_10f68c6b8;
    uStack_68 = 0x13;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_80 = lVar4;
    (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c3db68,&lStack_80,&puStack_70);
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x120);
  if (lVar4 != 0) {
    plStack_78 = *(long **)(param_1 + 0x128);
    puStack_70 = &UNK_10f68c6cc;
    uStack_68 = 0x11;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_80 = lVar4;
    (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c3db88,&lStack_80,&puStack_70);
    plVar6 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3dba8);
  plVar6 = *(long **)(param_1 + 0x148);
  while (plVar6 != (long *)(param_1 + 0x150)) {
    if (plVar6[7] != 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110c3dbc8,plVar6 + 4);
      FUN_10aa76510(param_2,&PTR_DAT_110c3fc08,plVar6[7],plVar6[8],&UNK_10f68c6de,0x13);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    plVar1 = (long *)plVar6[1];
    plVar5 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar5[2];
        bVar3 = (long *)*plVar6 != plVar5;
        plVar5 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  FUN_10aa76510(param_2,&PTR_DAT_110c3dbe8,*(undefined8 *)(param_1 + 0x130),
                *(undefined8 *)(param_1 + 0x138),&UNK_10f68c6de,0x13);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dc08,*(undefined4 *)(param_1 + 0x140));
                    /* WARNING: Could not recover jumptable at 0x00010aa76440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c3dc28,*(undefined4 *)(param_1 + 0x144));
  return;
}



/* Entry: 10aa76464; end: 10aa7650f;  */

void FUN_10aa76464(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f68c692;
  uStack_28 = 0x12;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_40 = param_3;
  plStack_38 = param_4;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aa76510; end: 10aa765af;  */

void FUN_10aa76510(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_40 = param_3;
  plStack_38 = param_4;
  uStack_30 = param_5;
  uStack_28 = param_6;
  (**(code **)(*param_1 + 0x108))(param_1,param_2,&uStack_40,&uStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10aa765b0; end: 10aa7704b;  */

/* WARNING: Removing unreachable block (ram,0x00010aa76d3c) */
/* WARNING: Removing unreachable block (ram,0x00010aa76cc4) */
/* WARNING: Removing unreachable block (ram,0x00010aa76ac0) */
/* WARNING: Removing unreachable block (ram,0x00010aa767d8) */
/* WARNING: Removing unreachable block (ram,0x00010aa76970) */
/* WARNING: Removing unreachable block (ram,0x00010aa76bf0) */
/* WARNING: Removing unreachable block (ram,0x00010aa76d1c) */
/* WARNING: Removing unreachable block (ram,0x00010aa76e58) */

void FUN_10aa765b0(code **param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined **ppuVar7;
  code **ppcVar8;
  long *extraout_x8;
  long lVar9;
  int iVar10;
  code ***pppcVar11;
  long *plVar12;
  undefined **ppuVar13;
  long *plVar14;
  undefined **ppuVar15;
  code **ppcVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  code ***unaff_x26;
  undefined8 *puStack_670;
  long *plStack_668;
  undefined8 *puStack_660;
  long *plStack_658;
  undefined8 uStack_650;
  long *plStack_648;
  undefined8 uStack_640;
  long *plStack_638;
  undefined8 *puStack_630;
  long *plStack_628;
  undefined8 uStack_620;
  long *plStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  undefined8 *puStack_600;
  long *plStack_5f8;
  undefined8 *puStack_5f0;
  long *plStack_5e8;
  undefined8 *puStack_5e0;
  long *plStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  undefined1 uStack_5b9;
  undefined8 **ppuStack_5b8;
  code ***pppcStack_5b0;
  code **ppcStack_5a8;
  undefined **ppuStack_5a0;
  code **ppcStack_598;
  code **ppcStack_590;
  undefined8 *puStack_588;
  undefined8 **ppuStack_580;
  undefined8 **ppuStack_578;
  undefined1 ***pppuStack_570;
  code *pcStack_568;
  undefined8 auStack_558 [2];
  char cStack_541;
  code *pcStack_540;
  undefined8 *apuStack_538 [7];
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  long lStack_4f0;
  code *pcStack_4e8;
  undefined **ppuStack_4e0;
  undefined8 *puStack_4d8;
  long lStack_4a8;
  undefined **ppuStack_4a0;
  code **ppcStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  long *plStack_480;
  undefined8 **ppuStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined8 auStack_458 [2];
  char cStack_441;
  undefined8 uStack_440;
  undefined8 *apuStack_438 [7];
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  code *pcStack_3e8;
  undefined **ppuStack_3e0;
  undefined8 *puStack_3d8;
  long lStack_3a8;
  undefined **ppuStack_3a0;
  code **ppcStack_398;
  code ***pppcStack_390;
  undefined8 *puStack_388;
  long *plStack_380;
  long *plStack_378;
  undefined1 *puStack_370;
  code *pcStack_368;
  code **ppcStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined7 uStack_328;
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  code **ppcStack_2f8;
  code *pcStack_2c8;
  undefined **ppuStack_2c0;
  code **ppcStack_2b8;
  code *pcStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  code **ppcStack_278;
  undefined8 uStack_248;
  undefined **ppuStack_240;
  code **ppcStack_238;
  undefined8 uStack_208;
  undefined **ppuStack_200;
  code **ppcStack_1f8;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  code **ppcStack_1b8;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  code **ppcStack_178;
  code **ppcStack_148;
  undefined **ppuStack_140;
  code **ppcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  code **ppcStack_108;
  undefined **ppuStack_100;
  code **ppcStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  FUN_10a0dca44(param_1 + 0x2c,param_1[0x2d]);
  param_1[0x2d] = (code *)0x0;
  param_1[0x2e] = (code *)0x0;
  param_1[0x2c] = (code *)(param_1 + 0x2d);
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3db48);
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar12 != 0) {
    iVar10 = 0;
    unaff_x26 = &ppcStack_148;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar10);
      (**(code **)(*param_2 + 0xa0))(&uStack_338,param_2,&PTR_DAT_110c3fbe8);
      ppcStack_358 = param_1;
      if (cStack_321 < '\0') {
        func_0x000107c3192c(&uStack_350,uStack_338,lStack_330);
      }
      else {
        lStack_348 = lStack_330;
        uStack_350 = uStack_338;
        lStack_340 = CONCAT17(cStack_321,uStack_328);
      }
      lStack_e0 = lStack_340;
      lStack_e8 = lStack_348;
      uStack_f0 = uStack_350;
      ppcVar16 = ppcStack_358;
      ppcStack_148 = (code **)FUN_10aa98948;
      ppuStack_140 = &PTR_FUN_110c40128;
      uStack_350 = 0;
      lStack_348 = 0;
      lStack_340 = 0;
      ppcStack_108 = (code **)FUN_10aa98948;
      ppuStack_100 = &PTR_FUN_110c40128;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_120 = 0;
      uStack_b8 = CONCAT17(5,(undefined7)uStack_b8);
      uStack_c8 = CONCAT26(uStack_c8._6_2_,0x6b63617274);
      pcStack_b0 = FUN_10aa98708;
      ppuStack_a8 = &PTR_FUN_110c40110;
      puVar4 = (undefined8 *)0x58;
      ppcStack_138 = ppcStack_358;
      ppcStack_f8 = ppcStack_358;
      __Znwm();
      *puVar4 = FUN_10aa98948;
      puVar4[1] = &PTR_FUN_110c40128;
      puVar4[2] = ppcVar16;
      puVar4[4] = lStack_e8;
      puVar4[3] = uStack_f0;
      puVar4[5] = lStack_e0;
      uStack_f0 = 0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      puVar4[9] = uStack_c0;
      puVar4[8] = uStack_c8;
      puVar4[10] = uStack_b8;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puStack_a0 = puVar4;
      func_0x000107c2b054(auStack_320,&UNK_10f68c0c1);
      (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c3fc08,&pcStack_b0,0,auStack_320);
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
      }
      (*(code *)*ppuStack_a8)(&ppuStack_a8);
      (*(code *)*ppuStack_100)(&ppuStack_100);
      (*(code *)*ppuStack_140)(&ppuStack_140);
      if (lStack_340 < 0) {
        __ZdlPv(uStack_350);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      if (cStack_321 < '\0') {
        __ZdlPv(uStack_338);
      }
      iVar10 = iVar10 + 1;
    } while ((int)plVar12 != iVar10);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  uStack_188 = 0x10aa98c6c;
  ppuStack_180 = &PTR_DAT_110c40158;
  ppcStack_178 = param_1;
  FUN_10aa7704c(param_2,&PTR_DAT_110c3fc28,&uStack_188);
  (*(code *)*ppuStack_180)(&ppuStack_180);
  uStack_1c8 = 0x10aa98edc;
  ppuStack_1c0 = &PTR_DAT_110c40188;
  pppcVar11 = &ppcStack_108;
  ppcStack_108 = (code **)0x10aa98edc;
  ppuStack_100 = &PTR_DAT_110c40188;
  uStack_b8 = CONCAT17(3,(undefined7)uStack_b8);
  uStack_c8 = CONCAT44(uStack_c8._4_4_,0x746f72);
  pcStack_b0 = FUN_10aa98c9c;
  ppuStack_a8 = &PTR_FUN_110c40170;
  puVar4 = (undefined8 *)0x58;
  ppcStack_1b8 = param_1;
  ppcStack_f8 = param_1;
  __Znwm();
  ppuVar13 = &pcStack_b0;
  *puVar4 = 0x10aa98edc;
  puVar4[1] = &PTR_DAT_110c40188;
  puVar4[2] = param_1;
  puVar4[9] = uStack_c0;
  puVar4[8] = uStack_c8;
  puVar4[10] = uStack_b8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_a0 = puVar4;
  func_0x000107c2b054(&ppcStack_358,&UNK_10f68c0c1);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c3fc48,&pcStack_b0,0,&ppcStack_358);
  if (lStack_348 < 0) {
    __ZdlPv(ppcStack_358);
  }
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  (*(code *)*ppuStack_1c0)(&ppuStack_1c0);
  uStack_208 = 0x10aa98f0c;
  ppuStack_200 = &PTR_DAT_110c401a0;
  ppcStack_1f8 = param_1;
  FUN_10aa7704c(param_2,&PTR_DAT_110c3fc68,&uStack_208);
  (*(code *)*ppuStack_200)(&ppuStack_200);
  ppuVar15 = &PTR_DAT_110c401d0;
  uStack_248 = 0x10aa9917c;
  ppuStack_240 = &PTR_DAT_110c401d0;
  ppcStack_108 = (code **)0x10aa9917c;
  ppuStack_100 = &PTR_DAT_110c401d0;
  uStack_b8 = CONCAT17(9,(undefined7)uStack_b8);
  uStack_c8 = 0x6e6576456d696e61;
  uStack_c0 = CONCAT62(uStack_c0._2_6_,0x74);
  pcStack_b0 = FUN_10aa98f3c;
  ppuStack_a8 = &PTR_FUN_110c401b8;
  puVar4 = (undefined8 *)0x58;
  ppcStack_238 = param_1;
  ppcStack_f8 = param_1;
  __Znwm();
  *puVar4 = 0x10aa9917c;
  puVar4[1] = &PTR_DAT_110c401d0;
  puVar4[2] = param_1;
  puVar4[9] = uStack_c0;
  puVar4[8] = uStack_c8;
  puVar4[10] = uStack_b8;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_a0 = puVar4;
  func_0x000107c2b054(&ppcStack_358,&UNK_10f68c0c1);
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c3db68,&pcStack_b0,0,&ppcStack_358);
  if (lStack_348 < 0) {
    __ZdlPv(ppcStack_358);
  }
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  (*(code *)*ppuStack_240)(&ppuStack_240);
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c3db88);
  if ((int)plVar12 != 0) {
    ppuVar15 = &PTR_DAT_110c40200;
    uStack_288 = 0x10aa993ec;
    ppuStack_280 = &PTR_DAT_110c40200;
    ppcStack_108 = (code **)0x10aa993ec;
    ppuStack_100 = &PTR_DAT_110c40200;
    uStack_b8 = CONCAT17(10,(undefined7)uStack_b8);
    uStack_c8 = 0x696c696269736976;
    uStack_c0 = CONCAT53(uStack_c0._3_5_,0x7974);
    pcStack_b0 = FUN_10aa991ac;
    ppuStack_a8 = &PTR_FUN_110c401e8;
    puVar4 = (undefined8 *)0x58;
    ppcStack_278 = param_1;
    ppcStack_f8 = param_1;
    __Znwm();
    *puVar4 = 0x10aa993ec;
    puVar4[1] = &PTR_DAT_110c40200;
    puVar4[2] = param_1;
    puVar4[9] = uStack_c0;
    puVar4[8] = uStack_c8;
    puVar4[10] = uStack_b8;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    puStack_a0 = puVar4;
    func_0x000107c2b054(&ppcStack_358,&UNK_10f68c0c1);
    (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110c3db88,&pcStack_b0,0,&ppcStack_358);
    if (lStack_348 < 0) {
      __ZdlPv(ppcStack_358);
    }
    (*(code *)*ppuStack_a8)(&ppuStack_a8);
    (*(code *)*ppuStack_100)(&ppuStack_100);
    (*(code *)*ppuStack_280)(&ppuStack_280);
  }
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c3dba8);
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x208))();
  ppcVar16 = param_1;
  if ((uint)plVar12 != 0) {
    pppcVar11 = (code ***)0x0;
    unaff_x26 = &ppcStack_108;
    ppcVar16 = &pcStack_2c8;
    ppuVar13 = &PTR_DAT_110c3dbc8;
    ppuVar15 = &PTR_DAT_110c3fc08;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,pppcVar11);
      (**(code **)(*param_2 + 0xa0))(&pcStack_b0,param_2,&PTR_DAT_110c3dbc8);
      pcStack_2c8 = FUN_10aa9989c;
      ppuStack_2c0 = &PTR_FUN_110c40230;
      ppuStack_2a8 = ppuStack_a8;
      pcStack_2b0 = pcStack_b0;
      puStack_2a0 = puStack_a0;
      ppuStack_100 = (undefined **)0x0;
      ppcStack_f8 = (code **)0x0;
      uStack_f0 = 0;
      ppcStack_2b8 = param_1;
      ppcStack_108 = param_1;
      FUN_10aa77204(param_2,&PTR_DAT_110c3fc08,&pcStack_2c8);
      (*(code *)*ppuStack_2c0)(&ppuStack_2c0);
      (**(code **)(*param_2 + 0x220))(param_2);
      uVar1 = (int)pppcVar11 + 1;
      pppcVar11 = (code ***)(ulong)uVar1;
    } while ((uint)plVar12 != uVar1);
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  uStack_308 = 0x10aa99930;
  ppuStack_300 = &PTR_DAT_110c40248;
  ppcStack_2f8 = param_1;
  FUN_10aa77204(param_2,&PTR_DAT_110c3dbe8,&uStack_308);
  (*(code *)*ppuStack_300)(&ppuStack_300);
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c3dc08,*(undefined4 *)(param_1 + 0x28));
  *(int *)(param_1 + 0x28) = (int)plVar12;
  puVar4 = (undefined8 *)(ulong)*(uint *)((long)param_1 + 0x144);
  ppuVar7 = &PTR_DAT_110c3dc28;
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x38))();
  *(int *)((long)param_1 + 0x144) = (int)plVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_348 < 0) {
    __ZdlPv(ppcStack_358);
  }
  (*(code *)*ppuStack_a8)(ppuVar13 + 1);
  (*(code *)*ppuStack_100)(pppcVar11 + 1);
  (*(code *)*ppuStack_280)(&ppuStack_300);
  plVar14 = plVar12;
  __Unwind_Resume();
  pcStack_368 = FUN_10aa7704c;
  lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_440 = *puVar4;
  ppuStack_3a0 = ppuVar15;
  ppcStack_398 = (code **)ppuVar13;
  pppcStack_390 = pppcVar11;
  puStack_388 = &uStack_308;
  plStack_380 = param_2;
  plStack_378 = plVar12;
  puStack_370 = &stack0xfffffffffffffff0;
  (**(code **)(puVar4[1] + 0x10))(apuStack_438,puVar4 + 1);
  FUN_109ffe064(&uStack_400,*ppuVar7,ppuVar7[1]);
  pcStack_3e8 = FUN_10aa98a2c;
  ppuStack_3e0 = &PTR_FUN_110c40140;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_440;
  (*(code *)apuStack_438[0][2])(puVar4 + 1,apuStack_438);
  puVar4[9] = uStack_3f8;
  puVar4[8] = uStack_400;
  puVar4[10] = lStack_3f0;
  uStack_3f8 = 0;
  lStack_3f0 = 0;
  uStack_400 = 0;
  puStack_3d8 = puVar4;
  func_0x000107c2b054(auStack_458,&UNK_10f68c0c1);
  ppcVar8 = &pcStack_3e8;
  (**(code **)(*plVar14 + 0x250))(plVar14,ppuVar7,ppcVar8,0,auStack_458);
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  (*(code *)*ppuStack_3e0)(&ppuStack_3e0);
  if (lStack_3f0 < 0) {
    __ZdlPv(uStack_400);
  }
  ppuVar17 = apuStack_438;
  (*(code *)*apuStack_438[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_441 < '\0') {
    __ZdlPv(auStack_458[0]);
  }
  (*(code *)*ppuStack_3e0)(&ppuStack_3e0);
  if (lStack_3f0 < 0) {
    __ZdlPv(uStack_400);
  }
  (*(code *)*apuStack_438[0])(apuStack_438);
  ppuVar5 = ppuVar17;
  __Unwind_Resume();
  pcStack_468 = FUN_10aa77204;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_540 = *ppcVar8;
  ppuStack_4a0 = ppuVar15;
  ppcStack_498 = &pcStack_3e8;
  puStack_490 = &uStack_440;
  puStack_488 = puVar4;
  plStack_480 = plVar14;
  ppuStack_478 = ppuVar17;
  ppuStack_470 = &puStack_370;
  (**(code **)(ppcVar8[1] + 0x10))(apuStack_538,ppcVar8 + 1);
  FUN_109ffe064(&uStack_500,*ppuVar7,ppuVar7[1]);
  pcStack_4e8 = FUN_10aa9965c;
  ppuStack_4e0 = &PTR_FUN_110c40218;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = pcStack_540;
  (*(code *)apuStack_538[0][2])(puVar4 + 1,apuStack_538);
  puVar4[9] = uStack_4f8;
  puVar4[8] = uStack_500;
  puVar4[10] = lStack_4f0;
  uStack_4f8 = 0;
  lStack_4f0 = 0;
  uStack_500 = 0;
  puStack_4d8 = puVar4;
  func_0x000107c2b054(auStack_558,&UNK_10f68c0c1);
  ppcVar8 = &pcStack_4e8;
  (*(code *)(*ppuVar5)[0x4a])(ppuVar5,ppuVar7,ppcVar8,0,auStack_558);
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  (*(code *)*ppuStack_4e0)(&ppuStack_4e0);
  if (lStack_4f0 < 0) {
    __ZdlPv(uStack_500);
  }
  ppuVar17 = apuStack_538;
  (*(code *)*apuStack_538[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_541 < '\0') {
    __ZdlPv(auStack_558[0]);
  }
  (*(code *)*ppuStack_4e0)(&ppuStack_4e0);
  if (lStack_4f0 < 0) {
    __ZdlPv(uStack_500);
  }
  (*(code *)*apuStack_538[0])(apuStack_538);
  ppuVar6 = ppuVar17;
  __Unwind_Resume();
  pcStack_568 = FUN_10aa773bc;
  pppcStack_5b0 = unaff_x26;
  ppcStack_5a8 = ppcVar16;
  ppuStack_5a0 = ppuVar15;
  ppcStack_598 = &pcStack_4e8;
  ppcStack_590 = &pcStack_540;
  puStack_588 = puVar4;
  ppuStack_580 = ppuVar5;
  ppuStack_578 = ppuVar17;
  pppuStack_570 = &ppuStack_470;
  FUN_10a0a2a90(&lStack_5d0,ppuVar6[10]);
  ppuVar17 = (undefined8 **)ppuVar6[0x2c];
  puVar4 = puStack_600;
  while (ppuVar17 != ppuVar6 + 0x2d) {
    plStack_5f8 = ppuVar17[8];
    puStack_600 = ppuVar17[7];
    if (ppuVar17[8] != (undefined8 *)0x0) {
      plVar12 = ppuVar17[8] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a5726c4(&puStack_5f0,ppcVar8,&puStack_600);
    plStack_5d8 = plStack_5e8;
    puStack_5e0 = puStack_5f0;
    if (plStack_5e8 != (long *)0x0) {
      plVar12 = plStack_5e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_5b8 = ppuVar17 + 4;
    lVar9 = lStack_5d0 + 0x160;
    FUN_10aa984c4(lVar9,ppuStack_5b8,&UNK_10dd5b8f9,&ppuStack_5b8,&uStack_5b9);
    plVar12 = plStack_5d8;
    puVar4 = puStack_5e0;
    puStack_5e0 = (undefined8 *)0x0;
    plStack_5d8 = (long *)0x0;
    plVar14 = *(long **)(lVar9 + 0x40);
    *(long **)(lVar9 + 0x40) = plVar12;
    *(undefined8 **)(lVar9 + 0x38) = puVar4;
    if (plVar14 != (long *)0x0) {
      plVar12 = plVar14 + 1;
      do {
        lVar9 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar12 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      plVar14 = plStack_5d8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = plStack_5e8;
    if (plStack_5e8 != (long *)0x0) {
      plVar14 = plStack_5e8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5e8 + 0x10))(plStack_5e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    plVar12 = plStack_5f8;
    if (plStack_5f8 != (long *)0x0) {
      plVar14 = plStack_5f8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    ppuVar5 = (undefined8 **)ppuVar17[1];
    ppuVar18 = ppuVar17;
    puVar4 = puStack_600;
    if ((undefined8 **)ppuVar17[1] == (undefined8 **)0x0) {
      do {
        ppuVar17 = (undefined8 **)ppuVar18[2];
        bVar3 = (undefined8 **)*ppuVar17 != ppuVar18;
        ppuVar18 = ppuVar17;
      } while (bVar3);
    }
    else {
      do {
        ppuVar17 = ppuVar5;
        ppuVar5 = (undefined8 **)*ppuVar17;
      } while ((undefined8 **)*ppuVar17 != (undefined8 **)0x0);
    }
  }
  puStack_600 = ppuVar6[0x1c];
  if (puStack_600 != (undefined8 *)0x0) {
    plStack_5f8 = ppuVar6[0x1d];
    if (plStack_5f8 != (long *)0x0) {
      plVar12 = plStack_5f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a5726c4(&puStack_610,ppcVar8,&puStack_600);
    plStack_5d8 = plStack_608;
    puStack_5e0 = puStack_610;
    if (plStack_608 != (long *)0x0) {
      plVar12 = plStack_608 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10aa77e14(lStack_5d0 + 0xe0,&puStack_5e0);
    plVar12 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      plVar14 = plStack_5d8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_608 != (long *)0x0) {
      plVar12 = plStack_608 + 1;
      do {
        lVar9 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_608 + 0x10))(plStack_608);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_608);
      }
    }
    plVar12 = plStack_5f8;
    puVar4 = puStack_600;
    if (plStack_5f8 != (long *)0x0) {
      plVar14 = plStack_5f8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        puVar4 = puStack_600;
      }
    }
  }
  puStack_600 = puVar4;
  puVar4 = ppuVar6[0x1e];
  if (puVar4 != (undefined8 *)0x0) {
    plStack_5d8 = ppuVar6[0x1f];
    if (plStack_5d8 != (long *)0x0) {
      plVar12 = plStack_5d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_5e0 = puVar4;
    FUN_10a5726c4(&uStack_620,ppcVar8,&puStack_5e0);
    if (plStack_618 != (long *)0x0) {
      plVar12 = plStack_618 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar12 = *(long **)(lStack_5d0 + 0xf8);
    *(long **)(lStack_5d0 + 0xf8) = plStack_618;
    *(undefined8 *)(lStack_5d0 + 0xf0) = uStack_620;
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_618 != (long *)0x0) {
      plVar12 = plStack_618 + 1;
      do {
        lVar9 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_618 + 0x10))(plStack_618);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_618);
      }
    }
    plVar12 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      plVar14 = plStack_5d8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  puVar4 = ppuVar6[0x20];
  if (puVar4 != (undefined8 *)0x0) {
    plStack_5f8 = ppuVar6[0x21];
    if (plStack_5f8 != (long *)0x0) {
      plVar12 = plStack_5f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_600 = puVar4;
    FUN_10a5726c4(&puStack_630,ppcVar8,&puStack_600);
    plStack_5d8 = plStack_628;
    puStack_5e0 = puStack_630;
    if (plStack_628 != (long *)0x0) {
      plVar12 = plStack_628 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10aa77e14(lStack_5d0 + 0x100,&puStack_5e0);
    plVar12 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      plVar14 = plStack_5d8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_628 != (long *)0x0) {
      plVar12 = plStack_628 + 1;
      do {
        lVar9 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_628 + 0x10))(plStack_628);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_628);
      }
    }
    plVar12 = plStack_5f8;
    if (plStack_5f8 != (long *)0x0) {
      plVar14 = plStack_5f8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  puVar4 = ppuVar6[0x22];
  if (puVar4 != (undefined8 *)0x0) {
    plStack_5d8 = ppuVar6[0x23];
    if (plStack_5d8 != (long *)0x0) {
      plVar12 = plStack_5d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_5e0 = puVar4;
    FUN_10a5726c4(&uStack_640,ppcVar8,&puStack_5e0);
    if (plStack_638 != (long *)0x0) {
      plVar12 = plStack_638 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar12 = *(long **)(lStack_5d0 + 0x118);
    *(long **)(lStack_5d0 + 0x118) = plStack_638;
    *(undefined8 *)(lStack_5d0 + 0x110) = uStack_640;
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_638 != (long *)0x0) {
      plVar12 = plStack_638 + 1;
      do {
        lVar9 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_638 + 0x10))(plStack_638);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_638);
      }
    }
    plVar12 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      plVar14 = plStack_5d8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  puVar4 = ppuVar6[0x24];
  if (puVar4 != (undefined8 *)0x0) {
    plStack_5d8 = ppuVar6[0x25];
    if (plStack_5d8 != (long *)0x0) {
      plVar12 = plStack_5d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puStack_5e0 = puVar4;
    FUN_10a5726c4(&uStack_650,ppcVar8,&puStack_5e0);
    if (plStack_648 != (long *)0x0) {
      plVar12 = plStack_648 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar12 = *(long **)(lStack_5d0 + 0x128);
    *(long **)(lStack_5d0 + 0x128) = plStack_648;
    *(undefined8 *)(lStack_5d0 + 0x120) = uStack_650;
    if (plVar12 != (long *)0x0) {
      plVar14 = plVar12 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_648 != (long *)0x0) {
      plVar12 = plStack_648 + 1;
      do {
        lVar9 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_648 + 0x10))(plStack_648);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_648);
      }
    }
    plVar12 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      plVar14 = plStack_5d8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  ppuVar17 = (undefined8 **)ppuVar6[0x29];
  while (ppuVar17 != ppuVar6 + 0x2a) {
    puStack_600 = ppuVar17[7];
    if (puStack_600 != (undefined8 *)0x0) {
      plStack_5f8 = ppuVar17[8];
      if (plStack_5f8 != (long *)0x0) {
        plVar12 = plStack_5f8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a5726c4(&puStack_660,ppcVar8,&puStack_600);
      plStack_5d8 = plStack_658;
      puStack_5e0 = puStack_660;
      if (plStack_658 != (long *)0x0) {
        plVar12 = plStack_658 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = *plVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      ppuStack_5b8 = ppuVar17 + 4;
      lVar9 = lStack_5d0 + 0x148;
      FUN_10aa99418(lVar9,ppuStack_5b8,&UNK_10dd5b8f9,&ppuStack_5b8,&uStack_5b9);
      func_0x00010aa77e78(lVar9 + 0x38,&puStack_5e0);
      plVar12 = plStack_5d8;
      if (plStack_5d8 != (long *)0x0) {
        plVar14 = plStack_5d8 + 1;
        do {
          lVar9 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_658;
      if (plStack_658 != (long *)0x0) {
        plVar14 = plStack_658 + 1;
        do {
          lVar9 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_658 + 0x10))(plStack_658);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar12 = plStack_5f8;
      if (plStack_5f8 != (long *)0x0) {
        plVar14 = plStack_5f8 + 1;
        do {
          lVar9 = *plVar14;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar3) {
            *plVar14 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
    }
    ppuVar5 = (undefined8 **)ppuVar17[1];
    ppuVar18 = ppuVar17;
    if ((undefined8 **)ppuVar17[1] == (undefined8 **)0x0) {
      do {
        ppuVar17 = (undefined8 **)ppuVar18[2];
        bVar3 = (undefined8 **)*ppuVar17 != ppuVar18;
        ppuVar18 = ppuVar17;
      } while (bVar3);
    }
    else {
      do {
        ppuVar17 = ppuVar5;
        ppuVar5 = (undefined8 **)*ppuVar17;
      } while ((undefined8 **)*ppuVar17 != (undefined8 **)0x0);
    }
  }
  puStack_600 = ppuVar6[0x26];
  if (puStack_600 != (undefined8 *)0x0) {
    plStack_5f8 = ppuVar6[0x27];
    if (plStack_5f8 != (long *)0x0) {
      plVar12 = plStack_5f8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a5726c4(&puStack_670,ppcVar8,&puStack_600);
    plStack_5d8 = plStack_668;
    puStack_5e0 = puStack_670;
    if (plStack_668 != (long *)0x0) {
      plVar12 = plStack_668 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = *plVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010aa77e78(lStack_5d0 + 0x130,&puStack_5e0);
    plVar12 = plStack_5d8;
    if (plStack_5d8 != (long *)0x0) {
      plVar14 = plStack_5d8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5d8 + 0x10))(plStack_5d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (plStack_668 != (long *)0x0) {
      plVar12 = plStack_668 + 1;
      do {
        lVar9 = *plVar12;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_668 + 0x10))(plStack_668);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_668);
      }
    }
    plVar12 = plStack_5f8;
    if (plStack_5f8 != (long *)0x0) {
      plVar14 = plStack_5f8 + 1;
      do {
        lVar9 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_5f8 + 0x10))(plStack_5f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
  }
  puVar4 = ppuVar6[0x28];
  extraout_x8[1] = lStack_5c8;
  *extraout_x8 = lStack_5d0;
  *(undefined8 **)(lStack_5d0 + 0x140) = puVar4;
  return;
}



/* Entry: 10aa7704c; end: 10aa77203;  */

void FUN_10aa7704c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 **ppuVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  code **ppcVar6;
  long *extraout_x8;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 *puStack_310;
  long *plStack_308;
  undefined8 *puStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  long *plStack_2b8;
  undefined8 *puStack_2b0;
  long *plStack_2a8;
  undefined8 *puStack_2a0;
  long *plStack_298;
  undefined8 *puStack_290;
  long *plStack_288;
  undefined8 *puStack_280;
  long *plStack_278;
  long lStack_270;
  long lStack_268;
  undefined1 uStack_259;
  undefined8 **ppuStack_258;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  code *pcStack_1e0;
  undefined8 *apuStack_1d8 [7];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined8 *puStack_178;
  long lStack_148;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 *apuStack_d8 [7];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_d8,param_3 + 1);
  FUN_109ffe064(&uStack_a0,*param_2,param_2[1]);
  pcStack_88 = FUN_10aa98a2c;
  ppuStack_80 = &PTR_FUN_110c40140;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_e0;
  (*(code *)apuStack_d8[0][2])(puVar4 + 1,apuStack_d8);
  puVar4[9] = uStack_98;
  puVar4[8] = uStack_a0;
  puVar4[10] = lStack_90;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  puStack_78 = puVar4;
  func_0x000107c2b054(auStack_f8,&UNK_10f68c0c1);
  ppcVar6 = &pcStack_88;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,ppcVar6,0,auStack_f8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  ppuVar5 = apuStack_d8;
  (*(code *)*apuStack_d8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  (*(code *)*apuStack_d8[0])(apuStack_d8);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_1e0 = *ppcVar6;
  (**(code **)(ppcVar6[1] + 0x10))(apuStack_1d8,ppcVar6 + 1);
  FUN_109ffe064(&uStack_1a0,*param_2,param_2[1]);
  pcStack_188 = FUN_10aa9965c;
  ppuStack_180 = &PTR_FUN_110c40218;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = pcStack_1e0;
  (*(code *)apuStack_1d8[0][2])(puVar4 + 1,apuStack_1d8);
  puVar4[9] = uStack_198;
  puVar4[8] = uStack_1a0;
  puVar4[10] = lStack_190;
  uStack_198 = 0;
  lStack_190 = 0;
  uStack_1a0 = 0;
  puStack_178 = puVar4;
  func_0x000107c2b054(auStack_1f8,&UNK_10f68c0c1);
  ppcVar6 = &pcStack_188;
  (*(code *)(*ppuVar5)[0x4a])(ppuVar5,param_2,ppcVar6,0,auStack_1f8);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  (*(code *)*ppuStack_180)(&ppuStack_180);
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  ppuVar5 = apuStack_1d8;
  (*(code *)*apuStack_1d8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
    (*(code *)*ppuStack_180)(&ppuStack_180);
    if (lStack_190 < 0) {
      __ZdlPv(uStack_1a0);
    }
    (*(code *)*apuStack_1d8[0])(apuStack_1d8);
    __Unwind_Resume();
    FUN_10a0a2a90(&lStack_270,ppuVar5[10]);
    ppuVar10 = (undefined8 **)ppuVar5[0x2c];
    puVar4 = puStack_2a0;
    while (ppuVar10 != ppuVar5 + 0x2d) {
      plStack_298 = ppuVar10[8];
      puStack_2a0 = ppuVar10[7];
      if (ppuVar10[8] != (undefined8 *)0x0) {
        plVar8 = ppuVar10[8] + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&puStack_290,ppcVar6,&puStack_2a0);
      plStack_278 = plStack_288;
      puStack_280 = puStack_290;
      if (plStack_288 != (long *)0x0) {
        plVar8 = plStack_288 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_258 = ppuVar10 + 4;
      lVar7 = lStack_270 + 0x160;
      FUN_10aa984c4(lVar7,ppuStack_258,&UNK_10dd5b8f9,&ppuStack_258,&uStack_259);
      plVar8 = plStack_278;
      puVar4 = puStack_280;
      puStack_280 = (undefined8 *)0x0;
      plStack_278 = (long *)0x0;
      plVar9 = *(long **)(lVar7 + 0x40);
      *(long **)(lVar7 + 0x40) = plVar8;
      *(undefined8 **)(lVar7 + 0x38) = puVar4;
      if (plVar9 != (long *)0x0) {
        plVar8 = plVar9 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar9 = plStack_278 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_288;
      if (plStack_288 != (long *)0x0) {
        plVar9 = plStack_288 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_288 + 0x10))(plStack_288);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar9 = plStack_298 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      ppuVar2 = (undefined8 **)ppuVar10[1];
      ppuVar11 = ppuVar10;
      puVar4 = puStack_2a0;
      if ((undefined8 **)ppuVar10[1] == (undefined8 **)0x0) {
        do {
          ppuVar10 = (undefined8 **)ppuVar11[2];
          bVar3 = (undefined8 **)*ppuVar10 != ppuVar11;
          ppuVar11 = ppuVar10;
        } while (bVar3);
      }
      else {
        do {
          ppuVar10 = ppuVar2;
          ppuVar2 = (undefined8 **)*ppuVar10;
        } while ((undefined8 **)*ppuVar10 != (undefined8 **)0x0);
      }
    }
    puStack_2a0 = ppuVar5[0x1c];
    if (puStack_2a0 != (undefined8 *)0x0) {
      plStack_298 = ppuVar5[0x1d];
      if (plStack_298 != (long *)0x0) {
        plVar8 = plStack_298 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&puStack_2b0,ppcVar6,&puStack_2a0);
      plStack_278 = plStack_2a8;
      puStack_280 = puStack_2b0;
      if (plStack_2a8 != (long *)0x0) {
        plVar8 = plStack_2a8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa77e14(lStack_270 + 0xe0,&puStack_280);
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar9 = plStack_278 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_2a8 != (long *)0x0) {
        plVar8 = plStack_2a8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_2a8 + 0x10))(plStack_2a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2a8);
        }
      }
      plVar8 = plStack_298;
      puVar4 = puStack_2a0;
      if (plStack_298 != (long *)0x0) {
        plVar9 = plStack_298 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          puVar4 = puStack_2a0;
        }
      }
    }
    puStack_2a0 = puVar4;
    puVar4 = ppuVar5[0x1e];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_278 = ppuVar5[0x1f];
      if (plStack_278 != (long *)0x0) {
        plVar8 = plStack_278 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_280 = puVar4;
      FUN_10a5726c4(&uStack_2c0,ppcVar6,&puStack_280);
      if (plStack_2b8 != (long *)0x0) {
        plVar8 = plStack_2b8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8 = *(long **)(lStack_270 + 0xf8);
      *(long **)(lStack_270 + 0xf8) = plStack_2b8;
      *(undefined8 *)(lStack_270 + 0xf0) = uStack_2c0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_2b8 != (long *)0x0) {
        plVar8 = plStack_2b8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2b8);
        }
      }
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar9 = plStack_278 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x20];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_298 = ppuVar5[0x21];
      if (plStack_298 != (long *)0x0) {
        plVar8 = plStack_298 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_2a0 = puVar4;
      FUN_10a5726c4(&puStack_2d0,ppcVar6,&puStack_2a0);
      plStack_278 = plStack_2c8;
      puStack_280 = puStack_2d0;
      if (plStack_2c8 != (long *)0x0) {
        plVar8 = plStack_2c8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa77e14(lStack_270 + 0x100,&puStack_280);
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar9 = plStack_278 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_2c8 != (long *)0x0) {
        plVar8 = plStack_2c8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2c8);
        }
      }
      plVar8 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar9 = plStack_298 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x22];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_278 = ppuVar5[0x23];
      if (plStack_278 != (long *)0x0) {
        plVar8 = plStack_278 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_280 = puVar4;
      FUN_10a5726c4(&uStack_2e0,ppcVar6,&puStack_280);
      if (plStack_2d8 != (long *)0x0) {
        plVar8 = plStack_2d8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8 = *(long **)(lStack_270 + 0x118);
      *(long **)(lStack_270 + 0x118) = plStack_2d8;
      *(undefined8 *)(lStack_270 + 0x110) = uStack_2e0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_2d8 != (long *)0x0) {
        plVar8 = plStack_2d8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_2d8 + 0x10))(plStack_2d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2d8);
        }
      }
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar9 = plStack_278 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x24];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_278 = ppuVar5[0x25];
      if (plStack_278 != (long *)0x0) {
        plVar8 = plStack_278 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_280 = puVar4;
      FUN_10a5726c4(&uStack_2f0,ppcVar6,&puStack_280);
      if (plStack_2e8 != (long *)0x0) {
        plVar8 = plStack_2e8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8 = *(long **)(lStack_270 + 0x128);
      *(long **)(lStack_270 + 0x128) = plStack_2e8;
      *(undefined8 *)(lStack_270 + 0x120) = uStack_2f0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_2e8 != (long *)0x0) {
        plVar8 = plStack_2e8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_2e8);
        }
      }
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar9 = plStack_278 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    ppuVar10 = (undefined8 **)ppuVar5[0x29];
    while (ppuVar10 != ppuVar5 + 0x2a) {
      puStack_2a0 = ppuVar10[7];
      if (puStack_2a0 != (undefined8 *)0x0) {
        plStack_298 = ppuVar10[8];
        if (plStack_298 != (long *)0x0) {
          plVar8 = plStack_298 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_10a5726c4(&puStack_300,ppcVar6,&puStack_2a0);
        plStack_278 = plStack_2f8;
        puStack_280 = puStack_300;
        if (plStack_2f8 != (long *)0x0) {
          plVar8 = plStack_2f8 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppuStack_258 = ppuVar10 + 4;
        lVar7 = lStack_270 + 0x148;
        FUN_10aa99418(lVar7,ppuStack_258,&UNK_10dd5b8f9,&ppuStack_258,&uStack_259);
        func_0x00010aa77e78(lVar7 + 0x38,&puStack_280);
        plVar8 = plStack_278;
        if (plStack_278 != (long *)0x0) {
          plVar9 = plStack_278 + 1;
          do {
            lVar7 = *plVar9;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_278 + 0x10))(plStack_278);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_2f8;
        if (plStack_2f8 != (long *)0x0) {
          plVar9 = plStack_2f8 + 1;
          do {
            lVar7 = *plVar9;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_2f8 + 0x10))(plStack_2f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_298;
        if (plStack_298 != (long *)0x0) {
          plVar9 = plStack_298 + 1;
          do {
            lVar7 = *plVar9;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_298 + 0x10))(plStack_298);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      ppuVar2 = (undefined8 **)ppuVar10[1];
      ppuVar11 = ppuVar10;
      if ((undefined8 **)ppuVar10[1] == (undefined8 **)0x0) {
        do {
          ppuVar10 = (undefined8 **)ppuVar11[2];
          bVar3 = (undefined8 **)*ppuVar10 != ppuVar11;
          ppuVar11 = ppuVar10;
        } while (bVar3);
      }
      else {
        do {
          ppuVar10 = ppuVar2;
          ppuVar2 = (undefined8 **)*ppuVar10;
        } while ((undefined8 **)*ppuVar10 != (undefined8 **)0x0);
      }
    }
    puStack_2a0 = ppuVar5[0x26];
    if (puStack_2a0 != (undefined8 *)0x0) {
      plStack_298 = ppuVar5[0x27];
      if (plStack_298 != (long *)0x0) {
        plVar8 = plStack_298 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&puStack_310,ppcVar6,&puStack_2a0);
      plStack_278 = plStack_308;
      puStack_280 = puStack_310;
      if (plStack_308 != (long *)0x0) {
        plVar8 = plStack_308 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010aa77e78(lStack_270 + 0x130,&puStack_280);
      plVar8 = plStack_278;
      if (plStack_278 != (long *)0x0) {
        plVar9 = plStack_278 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_278 + 0x10))(plStack_278);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_308 != (long *)0x0) {
        plVar8 = plStack_308 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_308 + 0x10))(plStack_308);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_308);
        }
      }
      plVar8 = plStack_298;
      if (plStack_298 != (long *)0x0) {
        plVar9 = plStack_298 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_298 + 0x10))(plStack_298);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x28];
    extraout_x8[1] = lStack_268;
    *extraout_x8 = lStack_270;
    *(undefined8 **)(lStack_270 + 0x140) = puVar4;
    return;
  }
  return;
}



/* Entry: 10aa77204; end: 10aa773bb;  */

void FUN_10aa77204(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 **ppuVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  code **ppcVar6;
  long *extraout_x8;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 *puStack_210;
  long *plStack_208;
  undefined8 *puStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  undefined8 *puStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  long *plStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 uStack_159;
  undefined8 **ppuStack_158;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 uStack_e0;
  undefined8 *apuStack_d8 [7];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e0 = *param_3;
  (**(code **)(param_3[1] + 0x10))(apuStack_d8,param_3 + 1);
  FUN_109ffe064(&uStack_a0,*param_2,param_2[1]);
  pcStack_88 = FUN_10aa9965c;
  ppuStack_80 = &PTR_FUN_110c40218;
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  *puVar4 = uStack_e0;
  (*(code *)apuStack_d8[0][2])(puVar4 + 1,apuStack_d8);
  puVar4[9] = uStack_98;
  puVar4[8] = uStack_a0;
  puVar4[10] = lStack_90;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a0 = 0;
  puStack_78 = puVar4;
  func_0x000107c2b054(auStack_f8,&UNK_10f68c0c1);
  ppcVar6 = &pcStack_88;
  (**(code **)(*param_1 + 0x250))(param_1,param_2,ppcVar6,0,auStack_f8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  (*(code *)*ppuStack_80)(&ppuStack_80);
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  ppuVar5 = apuStack_d8;
  (*(code *)*apuStack_d8[0])();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    (*(code *)*ppuStack_80)(&ppuStack_80);
    if (lStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
    (*(code *)*apuStack_d8[0])(apuStack_d8);
    __Unwind_Resume();
    FUN_10a0a2a90(&lStack_170,ppuVar5[10]);
    ppuVar10 = (undefined8 **)ppuVar5[0x2c];
    puVar4 = puStack_1a0;
    while (ppuVar10 != ppuVar5 + 0x2d) {
      plStack_198 = ppuVar10[8];
      puStack_1a0 = ppuVar10[7];
      if (ppuVar10[8] != (undefined8 *)0x0) {
        plVar8 = ppuVar10[8] + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&puStack_190,ppcVar6,&puStack_1a0);
      plStack_178 = plStack_188;
      puStack_180 = puStack_190;
      if (plStack_188 != (long *)0x0) {
        plVar8 = plStack_188 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      ppuStack_158 = ppuVar10 + 4;
      lVar7 = lStack_170 + 0x160;
      FUN_10aa984c4(lVar7,ppuStack_158,&UNK_10dd5b8f9,&ppuStack_158,&uStack_159);
      plVar8 = plStack_178;
      puVar4 = puStack_180;
      puStack_180 = (undefined8 *)0x0;
      plStack_178 = (long *)0x0;
      plVar9 = *(long **)(lVar7 + 0x40);
      *(long **)(lVar7 + 0x40) = plVar8;
      *(undefined8 **)(lVar7 + 0x38) = puVar4;
      if (plVar9 != (long *)0x0) {
        plVar8 = plVar9 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar8 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar9 = plStack_178 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar9 = plStack_188 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar9 = plStack_198 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      ppuVar2 = (undefined8 **)ppuVar10[1];
      ppuVar11 = ppuVar10;
      puVar4 = puStack_1a0;
      if ((undefined8 **)ppuVar10[1] == (undefined8 **)0x0) {
        do {
          ppuVar10 = (undefined8 **)ppuVar11[2];
          bVar3 = (undefined8 **)*ppuVar10 != ppuVar11;
          ppuVar11 = ppuVar10;
        } while (bVar3);
      }
      else {
        do {
          ppuVar10 = ppuVar2;
          ppuVar2 = (undefined8 **)*ppuVar10;
        } while ((undefined8 **)*ppuVar10 != (undefined8 **)0x0);
      }
    }
    puStack_1a0 = ppuVar5[0x1c];
    if (puStack_1a0 != (undefined8 *)0x0) {
      plStack_198 = ppuVar5[0x1d];
      if (plStack_198 != (long *)0x0) {
        plVar8 = plStack_198 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&puStack_1b0,ppcVar6,&puStack_1a0);
      plStack_178 = plStack_1a8;
      puStack_180 = puStack_1b0;
      if (plStack_1a8 != (long *)0x0) {
        plVar8 = plStack_1a8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa77e14(lStack_170 + 0xe0,&puStack_180);
      plVar8 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar9 = plStack_178 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_1a8 != (long *)0x0) {
        plVar8 = plStack_1a8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1a8);
        }
      }
      plVar8 = plStack_198;
      puVar4 = puStack_1a0;
      if (plStack_198 != (long *)0x0) {
        plVar9 = plStack_198 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          puVar4 = puStack_1a0;
        }
      }
    }
    puStack_1a0 = puVar4;
    puVar4 = ppuVar5[0x1e];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_178 = ppuVar5[0x1f];
      if (plStack_178 != (long *)0x0) {
        plVar8 = plStack_178 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_180 = puVar4;
      FUN_10a5726c4(&uStack_1c0,ppcVar6,&puStack_180);
      if (plStack_1b8 != (long *)0x0) {
        plVar8 = plStack_1b8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8 = *(long **)(lStack_170 + 0xf8);
      *(long **)(lStack_170 + 0xf8) = plStack_1b8;
      *(undefined8 *)(lStack_170 + 0xf0) = uStack_1c0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_1b8 != (long *)0x0) {
        plVar8 = plStack_1b8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1b8);
        }
      }
      plVar8 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar9 = plStack_178 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x20];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_198 = ppuVar5[0x21];
      if (plStack_198 != (long *)0x0) {
        plVar8 = plStack_198 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_1a0 = puVar4;
      FUN_10a5726c4(&puStack_1d0,ppcVar6,&puStack_1a0);
      plStack_178 = plStack_1c8;
      puStack_180 = puStack_1d0;
      if (plStack_1c8 != (long *)0x0) {
        plVar8 = plStack_1c8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa77e14(lStack_170 + 0x100,&puStack_180);
      plVar8 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar9 = plStack_178 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_1c8 != (long *)0x0) {
        plVar8 = plStack_1c8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_1c8 + 0x10))(plStack_1c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1c8);
        }
      }
      plVar8 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar9 = plStack_198 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x22];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_178 = ppuVar5[0x23];
      if (plStack_178 != (long *)0x0) {
        plVar8 = plStack_178 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_180 = puVar4;
      FUN_10a5726c4(&uStack_1e0,ppcVar6,&puStack_180);
      if (plStack_1d8 != (long *)0x0) {
        plVar8 = plStack_1d8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8 = *(long **)(lStack_170 + 0x118);
      *(long **)(lStack_170 + 0x118) = plStack_1d8;
      *(undefined8 *)(lStack_170 + 0x110) = uStack_1e0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_1d8 != (long *)0x0) {
        plVar8 = plStack_1d8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1d8);
        }
      }
      plVar8 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar9 = plStack_178 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x24];
    if (puVar4 != (undefined8 *)0x0) {
      plStack_178 = ppuVar5[0x25];
      if (plStack_178 != (long *)0x0) {
        plVar8 = plStack_178 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      puStack_180 = puVar4;
      FUN_10a5726c4(&uStack_1f0,ppcVar6,&puStack_180);
      if (plStack_1e8 != (long *)0x0) {
        plVar8 = plStack_1e8 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar8 = *(long **)(lStack_170 + 0x128);
      *(long **)(lStack_170 + 0x128) = plStack_1e8;
      *(undefined8 *)(lStack_170 + 0x120) = uStack_1f0;
      if (plVar8 != (long *)0x0) {
        plVar9 = plVar8 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_1e8 != (long *)0x0) {
        plVar8 = plStack_1e8 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_1e8 + 0x10))(plStack_1e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_1e8);
        }
      }
      plVar8 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar9 = plStack_178 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    ppuVar10 = (undefined8 **)ppuVar5[0x29];
    while (ppuVar10 != ppuVar5 + 0x2a) {
      puStack_1a0 = ppuVar10[7];
      if (puStack_1a0 != (undefined8 *)0x0) {
        plStack_198 = ppuVar10[8];
        if (plStack_198 != (long *)0x0) {
          plVar8 = plStack_198 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        FUN_10a5726c4(&puStack_200,ppcVar6,&puStack_1a0);
        plStack_178 = plStack_1f8;
        puStack_180 = puStack_200;
        if (plStack_1f8 != (long *)0x0) {
          plVar8 = plStack_1f8 + 1;
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar3) {
              *plVar8 = *plVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        ppuStack_158 = ppuVar10 + 4;
        lVar7 = lStack_170 + 0x148;
        FUN_10aa99418(lVar7,ppuStack_158,&UNK_10dd5b8f9,&ppuStack_158,&uStack_159);
        func_0x00010aa77e78(lVar7 + 0x38,&puStack_180);
        plVar8 = plStack_178;
        if (plStack_178 != (long *)0x0) {
          plVar9 = plStack_178 + 1;
          do {
            lVar7 = *plVar9;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_178 + 0x10))(plStack_178);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_1f8;
        if (plStack_1f8 != (long *)0x0) {
          plVar9 = plStack_1f8 + 1;
          do {
            lVar7 = *plVar9;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_1f8 + 0x10))(plStack_1f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_198;
        if (plStack_198 != (long *)0x0) {
          plVar9 = plStack_198 + 1;
          do {
            lVar7 = *plVar9;
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_198 + 0x10))(plStack_198);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      ppuVar2 = (undefined8 **)ppuVar10[1];
      ppuVar11 = ppuVar10;
      if ((undefined8 **)ppuVar10[1] == (undefined8 **)0x0) {
        do {
          ppuVar10 = (undefined8 **)ppuVar11[2];
          bVar3 = (undefined8 **)*ppuVar10 != ppuVar11;
          ppuVar11 = ppuVar10;
        } while (bVar3);
      }
      else {
        do {
          ppuVar10 = ppuVar2;
          ppuVar2 = (undefined8 **)*ppuVar10;
        } while ((undefined8 **)*ppuVar10 != (undefined8 **)0x0);
      }
    }
    puStack_1a0 = ppuVar5[0x26];
    if (puStack_1a0 != (undefined8 *)0x0) {
      plStack_198 = ppuVar5[0x27];
      if (plStack_198 != (long *)0x0) {
        plVar8 = plStack_198 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10a5726c4(&puStack_210,ppcVar6,&puStack_1a0);
      plStack_178 = plStack_208;
      puStack_180 = puStack_210;
      if (plStack_208 != (long *)0x0) {
        plVar8 = plStack_208 + 1;
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = *plVar8 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x00010aa77e78(lStack_170 + 0x130,&puStack_180);
      plVar8 = plStack_178;
      if (plStack_178 != (long *)0x0) {
        plVar9 = plStack_178 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_178 + 0x10))(plStack_178);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (plStack_208 != (long *)0x0) {
        plVar8 = plStack_208 + 1;
        do {
          lVar7 = *plVar8;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_208 + 0x10))(plStack_208);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_208);
        }
      }
      plVar8 = plStack_198;
      if (plStack_198 != (long *)0x0) {
        plVar9 = plStack_198 + 1;
        do {
          lVar7 = *plVar9;
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_198 + 0x10))(plStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    puVar4 = ppuVar5[0x28];
    extraout_x8[1] = lStack_168;
    *extraout_x8 = lStack_170;
    *(undefined8 **)(lStack_170 + 0x140) = puVar4;
    return;
  }
  return;
}



/* Entry: 10aa773bc; end: 10aa77e13;  */

void FUN_10aa773bc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 uStack_59;
  long *plStack_58;
  
  FUN_10a0a2a90(&lStack_70,*(undefined8 *)(param_2 + 0x50));
  plVar7 = *(long **)(param_2 + 0x160);
  lVar4 = lStack_a0;
  while (plVar7 != (long *)(param_2 + 0x168)) {
    plStack_98 = (long *)plVar7[8];
    lStack_a0 = plVar7[7];
    if (plVar7[8] != 0) {
      plVar1 = (long *)(plVar7[8] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a5726c4(&lStack_90,param_4,&lStack_a0);
    plStack_78 = plStack_88;
    lStack_80 = lStack_90;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plStack_58 = plVar7 + 4;
    lVar4 = lStack_70 + 0x160;
    FUN_10aa984c4(lVar4,plStack_58,&UNK_10dd5b8f9,&plStack_58,&uStack_59);
    plVar1 = plStack_78;
    lVar5 = lStack_80;
    lStack_80 = 0;
    plStack_78 = (long *)0x0;
    plVar6 = *(long **)(lVar4 + 0x40);
    *(long **)(lVar4 + 0x40) = plVar1;
    *(long *)(lVar4 + 0x38) = lVar5;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar4 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar6 = plStack_88 + 1;
      do {
        lVar4 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar6 = plStack_98 + 1;
      do {
        lVar4 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = (long *)plVar7[1];
    plVar6 = plVar7;
    lVar4 = lStack_a0;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar3 = (long *)*plVar7 != plVar6;
        plVar6 = plVar7;
      } while (bVar3);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  lStack_a0 = *(long *)(param_2 + 0xe0);
  if (lStack_a0 != 0) {
    plStack_98 = *(long **)(param_2 + 0xe8);
    if (plStack_98 != (long *)0x0) {
      plVar7 = plStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a5726c4(&lStack_b0,param_4,&lStack_a0);
    plStack_78 = plStack_a8;
    lStack_80 = lStack_b0;
    if (plStack_a8 != (long *)0x0) {
      plVar7 = plStack_a8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10aa77e14(lStack_70 + 0xe0,&lStack_80);
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_a8 != (long *)0x0) {
      plVar7 = plStack_a8 + 1;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
      }
    }
    plVar7 = plStack_98;
    lVar4 = lStack_a0;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        lVar4 = lStack_a0;
      }
    }
  }
  lStack_a0 = lVar4;
  lVar4 = *(long *)(param_2 + 0xf0);
  if (lVar4 != 0) {
    plStack_78 = *(long **)(param_2 + 0xf8);
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_80 = lVar4;
    FUN_10a5726c4(&uStack_c0,param_4,&lStack_80);
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = *(long **)(lStack_70 + 0xf8);
    *(long **)(lStack_70 + 0xf8) = plStack_b8;
    *(undefined8 *)(lStack_70 + 0xf0) = uStack_c0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_b8 != (long *)0x0) {
      plVar7 = plStack_b8 + 1;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
      }
    }
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  lVar4 = *(long *)(param_2 + 0x100);
  if (lVar4 != 0) {
    plStack_98 = *(long **)(param_2 + 0x108);
    if (plStack_98 != (long *)0x0) {
      plVar7 = plStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_a0 = lVar4;
    FUN_10a5726c4(&lStack_d0,param_4,&lStack_a0);
    plStack_78 = plStack_c8;
    lStack_80 = lStack_d0;
    if (plStack_c8 != (long *)0x0) {
      plVar7 = plStack_c8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10aa77e14(lStack_70 + 0x100,&lStack_80);
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_c8 != (long *)0x0) {
      plVar7 = plStack_c8 + 1;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
      }
    }
    plVar7 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  lVar4 = *(long *)(param_2 + 0x110);
  if (lVar4 != 0) {
    plStack_78 = *(long **)(param_2 + 0x118);
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_80 = lVar4;
    FUN_10a5726c4(&uStack_e0,param_4,&lStack_80);
    if (plStack_d8 != (long *)0x0) {
      plVar7 = plStack_d8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = *(long **)(lStack_70 + 0x118);
    *(long **)(lStack_70 + 0x118) = plStack_d8;
    *(undefined8 *)(lStack_70 + 0x110) = uStack_e0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_d8 != (long *)0x0) {
      plVar7 = plStack_d8 + 1;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
      }
    }
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  lVar4 = *(long *)(param_2 + 0x120);
  if (lVar4 != 0) {
    plStack_78 = *(long **)(param_2 + 0x128);
    if (plStack_78 != (long *)0x0) {
      plVar7 = plStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_80 = lVar4;
    FUN_10a5726c4(&uStack_f0,param_4,&lStack_80);
    if (plStack_e8 != (long *)0x0) {
      plVar7 = plStack_e8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = *(long **)(lStack_70 + 0x128);
    *(long **)(lStack_70 + 0x128) = plStack_e8;
    *(undefined8 *)(lStack_70 + 0x120) = uStack_f0;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_e8 != (long *)0x0) {
      plVar7 = plStack_e8 + 1;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e8);
      }
    }
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  plVar7 = *(long **)(param_2 + 0x148);
  while (plVar7 != (long *)(param_2 + 0x150)) {
    lStack_a0 = plVar7[7];
    if (lStack_a0 != 0) {
      plStack_98 = (long *)plVar7[8];
      if (plStack_98 != (long *)0x0) {
        plVar1 = plStack_98 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_10a5726c4(&lStack_100,param_4,&lStack_a0);
      plStack_78 = plStack_f8;
      lStack_80 = lStack_100;
      if (plStack_f8 != (long *)0x0) {
        plVar1 = plStack_f8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_58 = plVar7 + 4;
      lVar4 = lStack_70 + 0x148;
      FUN_10aa99418(lVar4,plStack_58,&UNK_10dd5b8f9,&plStack_58,&uStack_59);
      func_0x00010aa77e78(lVar4 + 0x38,&lStack_80);
      plVar1 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar6 = plStack_78 + 1;
        do {
          lVar4 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      plVar1 = plStack_f8;
      if (plStack_f8 != (long *)0x0) {
        plVar6 = plStack_f8 + 1;
        do {
          lVar4 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
      plVar1 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        plVar6 = plStack_98 + 1;
        do {
          lVar4 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
        }
      }
    }
    plVar1 = (long *)plVar7[1];
    plVar6 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar6[2];
        bVar3 = (long *)*plVar7 != plVar6;
        plVar6 = plVar7;
      } while (bVar3);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  lStack_a0 = *(long *)(param_2 + 0x130);
  if (lStack_a0 != 0) {
    plStack_98 = *(long **)(param_2 + 0x138);
    if (plStack_98 != (long *)0x0) {
      plVar7 = plStack_98 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a5726c4(&lStack_110,param_4,&lStack_a0);
    plStack_78 = plStack_108;
    lStack_80 = lStack_110;
    if (plStack_108 != (long *)0x0) {
      plVar7 = plStack_108 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = *plVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x00010aa77e78(lStack_70 + 0x130,&lStack_80);
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_108 != (long *)0x0) {
      plVar7 = plStack_108 + 1;
      do {
        lVar4 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_108 + 0x10))(plStack_108);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
      }
    }
    plVar7 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      plVar1 = plStack_98 + 1;
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
        (**(code **)(*plStack_98 + 0x10))(plStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x140);
  param_1[1] = lStack_68;
  *param_1 = lStack_70;
  *(undefined8 *)(lStack_70 + 0x140) = uVar8;
  return;
}



/* Entry: 10aa77e14; end: 10aa77edb;  */

undefined8 * FUN_10aa77e14(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa77edc; end: 10aa77f7f;  */

void FUN_10aa77edc(long param_1,undefined8 param_2)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  FUN_10aa77f80(param_1 + 0xe0);
  func_0x000107c2b054(auStack_58,&DAT_10f68c6f2);
  param_1 = param_1 + 0x160;
  puStack_38 = auStack_58;
  FUN_10aa99960(param_1,auStack_58,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  func_0x00010aa77ffc(param_1 + 0x38,param_2);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10aa77f80; end: 10aa7805f;  */

undefined8 * FUN_10aa77f80(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa78060; end: 10aa78103;  */

void FUN_10aa78060(long param_1,undefined8 param_2)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  FUN_10aa78104(param_1 + 0xf0);
  func_0x000107c2b054(auStack_58,&DAT_10f68c6fb);
  param_1 = param_1 + 0x160;
  puStack_38 = auStack_58;
  FUN_10aa99960(param_1,auStack_58,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  func_0x00010aa78180(param_1 + 0x38,param_2);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10aa78104; end: 10aa781e3;  */

undefined8 * FUN_10aa78104(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa781e4; end: 10aa78287;  */

void FUN_10aa781e4(long param_1,undefined8 param_2)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  FUN_10aa77f80(param_1 + 0x100);
  func_0x000107c2b054(auStack_58,&DAT_10f68c704);
  param_1 = param_1 + 0x160;
  puStack_38 = auStack_58;
  FUN_10aa99960(param_1,auStack_58,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  func_0x00010aa77ffc(param_1 + 0x38,param_2);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10aa78288; end: 10aa782fb;  */

undefined8 * FUN_10aa78288(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa782fc; end: 10aa7834b;  */

void FUN_10aa782fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0xe8);
  uVar5 = *(undefined8 *)(param_2 + 0xe0);
  param_1[1] = *(undefined8 *)(param_2 + 0xe8);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10aa7834c; end: 10aa78423;  */

void FUN_10aa7834c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long *plStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  FUN_10aa78424(auStack_40,param_3);
  lVar4 = param_1 + 0x148;
  uStack_28 = param_2;
  FUN_10aa99418(lVar4,param_2,&UNK_10dd5b8f9,&uStack_28,&uStack_29);
  func_0x00010aa784b4(lVar4 + 0x38,auStack_40);
  param_1 = param_1 + 0x160;
  uStack_28 = param_2;
  FUN_10aa984c4(param_1,param_2,&UNK_10dd5b8f9,&uStack_28,&uStack_29);
  func_0x00010aa78530(param_1 + 0x38,auStack_40);
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
  return;
}



/* Entry: 10aa78424; end: 10aa785f7;  */

void FUN_10aa78424(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10aa785f8; end: 10aa786e7;  */

void FUN_10aa785f8(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 auStack_40 [8];
  long *plStack_38;
  undefined1 uStack_29;
  undefined8 *puStack_28;
  
  FUN_10aa786e8(auStack_40,param_2);
  func_0x00010aa78778(param_1 + 0x110,auStack_40);
  func_0x000107c2b054(auStack_58,&UNK_10f68c6b8);
  param_1 = param_1 + 0x160;
  puStack_28 = auStack_58;
  FUN_10aa99960(param_1,auStack_58,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  func_0x00010aa787f4(param_1 + 0x38,auStack_40);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
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
  return;
}



/* Entry: 10aa786e8; end: 10aa78857;  */

void FUN_10aa786e8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
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
  }
  return;
}



/* Entry: 10aa78858; end: 10aa7892b;  */

void FUN_10aa78858(long *param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar4 = *(long *)(param_3 + 0x110);
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x50);
    FUN_10aa789e8(param_3);
    uStack_44 = param_2;
    FUN_10aa7892c(&uStack_40,uVar6,&uStack_44);
    FUN_10aa785f8(param_3,uStack_40);
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
    lVar4 = *(long *)(param_3 + 0x110);
  }
  lVar5 = *(long *)(param_3 + 0x118);
  *param_1 = lVar4;
  param_1[1] = lVar5;
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
  return;
}



/* Entry: 10aa7892c; end: 10aa789e7;  */

void FUN_10aa7892c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  long lStack_28;
  
  lStack_28 = param_1;
  if (param_1 == 0) {
    uStack_40 = 0;
    FUN_10aa99c14(&uStack_40,param_2);
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x858);
    plStack_30 = *(long **)(param_1 + 0x860);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10aa999f8(&uStack_38,&lStack_28);
    plVar1 = plStack_30;
    if (plStack_30 != (long *)0x0) {
      plVar2 = plStack_30 + 1;
      do {
        lVar5 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  return;
}



/* Entry: 10aa789e8; end: 10aa78b13;  */

float FUN_10aa789e8(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  if (*(long **)(param_2 + 0xe0) == (long *)0x0) {
    fVar6 = 0.0;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0xe0) + 0x90))();
    fVar6 = 0.0;
    if (0.0 <= (float)param_1) {
      fVar6 = (float)param_1;
    }
  }
  if (*(long **)(param_2 + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xf0) + 0x90))();
    if (fVar6 <= (float)param_1) {
      fVar6 = (float)param_1;
    }
  }
  if (*(long **)(param_2 + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x100) + 0x90))();
    if (fVar6 <= (float)param_1) {
      fVar6 = (float)param_1;
    }
  }
  if (*(long **)(param_2 + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x120) + 0x90))();
    if (fVar6 <= (float)param_1) {
      fVar6 = (float)param_1;
    }
  }
  fVar5 = (float)param_1;
  plVar3 = *(long **)(param_2 + 0x148);
  while (plVar3 != (long *)(param_2 + 0x150)) {
    if ((long *)plVar3[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar3[7] + 0x90))();
      if (fVar6 <= (float)param_1) {
        fVar6 = (float)param_1;
      }
    }
    fVar5 = (float)param_1;
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  if ((*(long **)(param_2 + 0x130) != (long *)0x0) &&
     ((**(code **)(**(long **)(param_2 + 0x130) + 0x90))(), fVar6 <= fVar5)) {
    fVar6 = fVar5;
  }
  return fVar6;
}



/* Entry: 10aa78b14; end: 10aa78bbf;  */

undefined1  [16] FUN_10aa78b14(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f68d225;
  return auVar1;
}



/* Entry: 10aa78bc0; end: 10aa794b3;  */

void FUN_10aa78bc0(ulong param_1)

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
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68d225,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c41a90;
  pppuVar2 = (undefined8 ***)&UNK_10f68c0c1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x200000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c41a90;
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
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,"start",FUN_10aa99d70,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&UNK_10f6566d9,FUN_10aa99f08,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10aa9a0f0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,"resume",FUN_10aa9a1a4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10aa9a258,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&UNK_10f68c716,FUN_10aa9a314,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&DAT_10f3becc6,FUN_10aa9a43c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,"isFinished",FUN_10aa9a514,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&UNK_10f68c722,FUN_10aa9a5d0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&UNK_10f634b4f,FUN_10aa9a68c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa79494;
    FUN_10a054dac(param_1,&UNK_10f64f5cc,FUN_10aa9a74c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c40260,FUN_10aa9a890);
    FUN_10a0605c4(param_1,&DAT_10f656aae,FUN_10aa9b3e8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68c3f3,FUN_10aa9b51c,FUN_10aa9b5cc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f408ba3,FUN_10aa9b85c,FUN_10aa9b90c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68c732,FUN_10aa9b9c4,FUN_10aa9ba74);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f0d4,FUN_10aa9bb2c,FUN_10aa9bbe8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65675e,FUN_10aa9bd44,FUN_10aa9be00);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"from",FUN_10aa9beb8,FUN_10aa9bf74);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"to",FUN_10aa9c09c,FUN_10aa9c158);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f409d63,FUN_10aa9c27c,FUN_10aa9c338);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68c745,FUN_10aa9c428,FUN_10aa9c4e0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3efeb4,FUN_10aa9c5a8,FUN_10aa9c664);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"disabled",FUN_10aa9c72c,FUN_10aa9c7e4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68e5aa,FUN_10aa9c8a4,FUN_10aa9c960);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68c74e,FUN_10aa9ca60,FUN_10aa9cb1c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68c758,FUN_10aa9cc18,FUN_10aa9ccd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0x133,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68c762,FUN_10aa9cdc0,FUN_10aa9ce7c);
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
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68d225,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa79494:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa79498);
  (*pcVar6)();
}



/* Entry: 10aa794b4; end: 10aa7960b;  */

void FUN_10aa794b4(undefined8 param_1)

{
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68c76f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x200000064;
  puStack_60 = &UNK_10f68c0c1;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_50 = &UNK_10f68c0c1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010aa795b4(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68c779;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  puStack_60 = &UNK_10f68c0c1;
  puStack_50 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 0;
  FUN_10aa7960c(param_1,&puStack_88,&uStack_8c);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f68c77e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000064;
  puStack_60 = &UNK_10f68c0c1;
  puStack_50 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_8c = 1;
  FUN_10aa7960c(param_1,&puStack_88,&uStack_8c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10aa7960c; end: 10aa7976f;  */

ulong FUN_10aa7960c(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010aa9cf80(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10aa79770; end: 10aa797c7;  */

ulong FUN_10aa79770(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10aa797c8; end: 10aa7981f;  */

ulong FUN_10aa797c8(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010aa9cff4(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10aa79820; end: 10aa79847;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10aa79820(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x67)) {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    param_1[1] = *(undefined8 *)(param_2 + 0x58);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x60);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x50);
  uVar1 = *(ulong *)(param_2 + 0x58);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10aa79848; end: 10aa7988f;  */

void FUN_10aa79848(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x60) = param_2[2];
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10aa79890; end: 10aa798b7;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10aa79890(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x7f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x68);
    param_1[1] = *(undefined8 *)(param_2 + 0x70);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x78);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x68);
  uVar1 = *(ulong *)(param_2 + 0x70);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10aa798b8; end: 10aa798ff;  */

void FUN_10aa798b8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x78) = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  return;
}



/* Entry: 10aa79900; end: 10aa79bcb;  */

undefined8 * FUN_10aa79900(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_DAT_110c3dc58;
  param_1[1] = &PTR_FUN_110c3dcb8;
  param_1[3] = &PTR_FUN_110c3dd00;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar5 = (undefined8 *)0x98;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c40288;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x12] = 0;
  puVar5[3] = &PTR_FUN_110c402d8;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  *(undefined4 *)(puVar5 + 10) = 0x3f800000;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[0xb] = FUN_10aa9d33c;
  puVar5[0xc] = &PTR_DAT_110ae9180;
  param_1[10] = 0;
  param_1[8] = puVar5 + 3;
  param_1[9] = puVar5;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  func_0x000107c2b054(param_1 + 0xd,&UNK_10f68c0c1);
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0x12] = 0x41f00000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 1;
  lVar9 = param_2[1];
  uVar7 = *param_2;
  param_1[0x18] = param_2[1];
  param_1[0x17] = uVar7;
  if (lVar9 == 0) {
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  else {
    plVar6 = (long *)(lVar9 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[0x19] = 0;
    plVar6 = (long *)param_1[0x18];
    *(undefined4 *)(param_1 + 0x1a) = 0;
    if (plVar6 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      if (plVar6 != (long *)0x0) {
        if (param_1[0x17] != 0) {
          lVar9 = *(long *)(param_1[0x17] + 0x170);
          if (lVar9 == 0) {
            puVar8 = &UNK_10f68c7e9;
          }
          else {
            if (*(long *)(lVar9 + 0x850) != 0) {
              uVar7 = 0x68;
              __Znwm(0x68);
              FUN_10acdcc24();
              FUN_10aa9d34c(param_1 + 0x19,uVar7);
              lVar9 = param_1[0x19];
              *(undefined8 **)(lVar9 + 0x18) = param_1;
              *(undefined1 *)(lVar9 + 0x10) = 1;
              *(undefined2 *)(lVar9 + 0x20) = 0;
              plVar1 = plVar6 + 1;
              do {
                lVar9 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
              return param_1;
            }
            puVar8 = &UNK_10f68c7f7;
          }
          FUN_10aa9d388(puVar8);
          goto LAB_10aa79b30;
        }
      }
    }
  }
  FUN_10a00946c(&UNK_10f68c7a2);
LAB_10aa79b30:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa79b34);
  (*pcVar4)();
}



/* Entry: 10aa79bcc; end: 10aa79c8b;  */

void FUN_10aa79bcc(long param_1,long param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  lVar4 = param_1;
  if (param_4 == 0) {
    lVar4 = param_2;
  }
  uVar7 = *(undefined8 *)(lVar4 + 0xc0);
  uVar6 = *(undefined8 *)(lVar4 + 0xb8);
  if (*(long *)(lVar4 + 0xc0) != 0) {
    plVar1 = (long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar4 = *(long *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x50,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  uVar6 = *(undefined8 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x84) = uVar6;
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  fVar5 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0xac) == 0) {
    fVar8 = *(float *)(param_1 + 0x8c);
  }
  else {
    fVar8 = 1.0 / *(float *)(param_1 + 0x90);
    fVar5 = fVar5 * fVar8;
    fVar8 = fVar8 * *(float *)(param_1 + 0x8c);
  }
  lVar4 = *(long *)(param_1 + 200);
  if (0.0 < fVar8 - fVar5) {
    *(float *)(lVar4 + 0x34) = fVar8 - fVar5;
  }
  *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(param_1 + 0x9c);
  FUN_10aa79d14(*(undefined4 *)(param_1 + 0x84),param_1);
  lVar4 = *(long *)(param_1 + 200);
  *(bool *)(lVar4 + 0x23) = *(int *)(param_1 + 0xb0) == 1;
  *(undefined1 *)(lVar4 + 0x24) = *(undefined1 *)(param_1 + 0x98);
  return;
}



/* Entry: 10aa79c8c; end: 10aa79d13;  */

void FUN_10aa79c8c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0xac) == 0) {
    fVar3 = *(float *)(param_1 + 0x8c);
  }
  else {
    fVar3 = 1.0 / *(float *)(param_1 + 0x90);
    fVar2 = fVar2 * fVar3;
    fVar3 = fVar3 * *(float *)(param_1 + 0x8c);
  }
  lVar1 = *(long *)(param_1 + 200);
  if (0.0 < fVar3 - fVar2) {
    *(float *)(lVar1 + 0x34) = fVar3 - fVar2;
  }
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x9c);
  FUN_10aa79d14(*(undefined4 *)(param_1 + 0x84),param_1);
  lVar1 = *(long *)(param_1 + 200);
  *(bool *)(lVar1 + 0x23) = *(int *)(param_1 + 0xb0) == 1;
  *(undefined1 *)(lVar1 + 0x24) = *(undefined1 *)(param_1 + 0x98);
  return;
}



/* Entry: 10aa79d14; end: 10aa79e17;  */

void FUN_10aa79d14(float param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lStack_48;
  long *plStack_40;
  char cStack_31;
  
  func_0x000107c2b054(&lStack_48,&UNK_10f68c810);
  bVar4 = false;
  if ((0.0 <= param_1) && (bVar4 = false, !NAN(param_1))) {
    bVar4 = param_1 < 1000.0;
  }
  if (bVar4) {
    if (cStack_31 < '\0') {
      __ZdlPv(lStack_48);
    }
    plVar5 = *(long **)(param_2 + 0xc0);
    if ((plVar5 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)
       ) {
      lStack_48 = *(long *)(param_2 + 0xb8);
      plStack_40 = plVar5;
      if (lStack_48 != 0) {
        *(float *)(param_2 + 0x84) = param_1;
        FUN_10acdcaf0(param_1 * *(float *)(lStack_48 + 0x1f8),*(undefined8 *)(param_2 + 200));
      }
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    return;
  }
  FUN_10a109200(&lStack_48);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10aa79dec);
  (*pcVar3)();
}


