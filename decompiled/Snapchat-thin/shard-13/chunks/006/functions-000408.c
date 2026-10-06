/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a944104; end: 10a9441d7;  */

long FUN_10a944104(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x20);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if ((*(char *)(param_1 + 0x18) == '\x01') &&
     (plVar4 = *(long **)(param_1 + 0x10), plVar4 != (long *)0x0)) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return param_1;
}



/* Entry: 10a9441d8; end: 10a9442b7;  */

undefined1  [16] FUN_10a9441d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x20;
  auVar1._0_8_ = &UNK_10f685132;
  return auVar1;
}



/* Entry: 10a9442b8; end: 10a9446b3;  */

void FUN_10a9442b8(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f685132,0x20);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c30700;
  pppuVar2 = (undefined8 ***)&UNK_10f683c80;
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
  uStack_50 = 0x140;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x140,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c30700;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a944694;
    FUN_10a054dac(param_1,&DAT_10f683d8e,FUN_10a954db4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a944694;
    FUN_10a054dac(param_1,&UNK_10f683d9d,FUN_10a9551ec,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a944694;
    FUN_10a054dac(param_1,&UNK_10f683f4b,FUN_10a955494,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a944694;
    FUN_10a054dac(param_1,&UNK_10f683f5d,FUN_10a955554,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a944694;
    FUN_10a054dac(param_1,&DAT_10f5497cc,FUN_10a95560c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a944694;
    FUN_10a054dac(param_1,&DAT_10f646a38,FUN_10a9557c8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f683d6d,FUN_10a9558f0,FUN_10a9559a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f56e9c3,FUN_10a955b10,FUN_10a955bcc);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f685132,0x20);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a944694:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a944698);
  (*pcVar6)();
}



/* Entry: 10a9446b4; end: 10a944743;  */

void FUN_10a9446b4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c31498;
  param_1[2] = &PTR_DAT_110c315b8;
  param_1[7] = &PTR_DAT_110c31610;
  param_1[0xd] = &PTR_DAT_110c31630;
  param_1[0x4b] = &PTR_DAT_110c31748;
  param_1[0x16] = &PTR_DAT_110c316a0;
  param_1[0x17] = &PTR_DAT_110c316d0;
  param_1[0x3e] = &PTR_FUN_110c31700;
  func_0x00010a004e5c(param_1 + 0x49);
  FUN_10a581bb8(param_1 + 0x46);
  func_0x00010a581ca4(param_1 + 0x43);
  func_0x00010a581cfc(param_1 + 0x41);
  func_0x00010a05248c(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c30598;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4b] = &PTR_DAT_110c306c8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a944744; end: 10a94477f;  */

void FUN_10a944744(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c31498;
  param_1[2] = &PTR_DAT_110c315b8;
  param_1[7] = &PTR_DAT_110c31610;
  param_1[0xd] = &PTR_DAT_110c31630;
  param_1[0x4b] = &PTR_DAT_110c31748;
  param_1[0x16] = &PTR_DAT_110c316a0;
  param_1[0x17] = &PTR_DAT_110c316d0;
  param_1[0x3e] = &PTR_FUN_110c31700;
  func_0x00010a004e5c(param_1 + 0x49);
  FUN_10a581bb8(param_1 + 0x46);
  func_0x00010a581ca4(param_1 + 0x43);
  func_0x00010a581cfc(param_1 + 0x41);
  func_0x00010a05248c(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c30598;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4b] = &PTR_DAT_110c306c8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a944780; end: 10a94480b;  */

void FUN_10a944780(void)

{
  FUN_10a9446b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94480c; end: 10a94483b;  */

void FUN_10a94480c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a9446b4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a94483c; end: 10a94487f;  */

void FUN_10a94483c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar5 = *(long *)(param_1 + 0x248);
  uVar4 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar5 + 0x20) == 0) {
    *(undefined8 *)(lVar5 + 0x30) = uVar4;
    lStack_28 = *(long *)(lVar5 + 0x18);
    uStack_30 = *(undefined8 *)(lVar5 + 0x10);
    if (*(long *)(lVar5 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar5 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar4,&uStack_30,&PTR_DAT_110bf8080,param_1 + 0x1f0);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar4 != 0) {
      *(int *)(lVar5 + 0x38) = (int)uVar4;
      *(undefined1 *)(lVar5 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a944880; end: 10a9448db;  */

void FUN_10a944880(long param_1,long *param_2)

{
  FUN_10a3c7928();
  FUN_10a02e188(param_2,&PTR_DAT_110c2fd90,param_1 + 0x1f8,&UNK_10f633e9d,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010a9448d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x22c),param_2,&PTR_DAT_110c2fdb0);
  return;
}



/* Entry: 10a9448dc; end: 10a9449c3;  */

void FUN_10a9448dc(long param_1,code *param_2)

{
  undefined **ppuVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  code **ppcVar5;
  char cVar6;
  code **ppcVar7;
  bool bVar8;
  bool bVar9;
  code **ppcVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  long *extraout_x8;
  undefined *puVar15;
  long lVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  code *pcVar19;
  code *pcVar20;
  undefined **ppuVar21;
  undefined4 uVar22;
  float fVar23;
  code **ppcStack_160;
  undefined **ppuStack_158;
  code *pcStack_150;
  undefined ***pppuStack_148;
  undefined1 **ppuStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined **ppuStack_118;
  code *pcStack_110;
  undefined **ppuStack_108;
  code *pcStack_100;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  pcStack_78 = FUN_10a955cdc;
  ppuStack_70 = &PTR_DAT_110c30d68;
  ppcVar10 = &pcStack_78;
  lStack_68 = param_1;
  FUN_10a02d928(param_2,&PTR_DAT_110c2fd90,ppcVar10,0);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  ppuVar13 = &PTR_DAT_110c2fdb0;
  uVar22 = 0x3f800000;
  (**(code **)(*(long *)param_2 + 0x48))(param_2,&PTR_DAT_110c2fdb0);
  *(undefined4 *)(param_1 + 0x22c) = uVar22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_88 = FUN_10a9449c4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  if (ppcVar10 == (code **)0x0) {
    pcVar19 = param_2;
    ppuVar18 = ppuVar13;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_108 = *(undefined ***)(param_2 + 0x48);
    pcStack_110 = *(code **)(param_2 + 0x40);
    ppcVar10 = ppcVar10 + 0x11;
    func_0x00010a35bf90(ppcVar10,&pcStack_110);
    ppcVar5 = (code **)((ulong)&pcStack_110 | 8);
    ppcVar7 = &pcStack_110;
    if (ppcVar10 != (code **)0x0) {
      ppcVar5 = ppcVar10 + 5;
      ppcVar7 = ppcVar10 + 4;
    }
    ppuVar18 = (undefined **)*ppcVar5;
    pcVar19 = *ppcVar7;
  }
  pcVar20 = *(code **)(param_2 + 0x170);
  FUN_10a3dd220(pcVar20);
  FUN_10a581a20(pcVar20,pcVar19,ppuVar18);
  ppuVar18 = (undefined **)0x28;
  pcStack_130 = pcVar20;
  __Znwm();
  ppuVar21 = ppuVar18 + 1;
  *ppuVar21 = (undefined *)0x0;
  *ppuVar18 = (undefined *)&PTR_DAT_110c30d90;
  ppuVar18[2] = (undefined *)0x0;
  ppuVar18[3] = pcVar20;
  ppuVar18[4] = FUN_10a3df8cc;
  ppuStack_128 = ppuVar18;
  if (pcVar20 != (code *)0x0) {
    if (*(long *)(pcVar20 + 0x30) == 0) {
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
        if (bVar8) {
          *ppuVar21 = *ppuVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar1 = ppuVar18 + 2;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar8) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(code **)(pcVar20 + 0x28) = pcVar20;
      *(undefined ***)(pcVar20 + 0x30) = ppuVar18;
    }
    else {
      if (*(long *)(*(long *)(pcVar20 + 0x30) + 8) != -1) goto LAB_10a944b38;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
        if (bVar8) {
          *ppuVar21 = *ppuVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar1 = ppuVar18 + 2;
      do {
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar8) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      *(code **)(pcVar20 + 0x28) = pcVar20;
      *(undefined ***)(pcVar20 + 0x30) = ppuVar18;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      puVar15 = *ppuVar21;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar21,0x10);
      if (bVar8) {
        *ppuVar21 = puVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuVar18 + 0x10))(ppuVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
    }
  }
LAB_10a944b38:
  pcVar19 = pcStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (pcStack_130 + 0x150,param_2 + 0x150);
  uVar3 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar4 = *(ushort *)(pcVar19 + 0x180) & 0xfffc;
  *(ushort *)(pcVar19 + 0x180) = uVar4 | *(ushort *)(pcVar19 + 0x180) & 1 | uVar3;
  *(ushort *)(pcVar19 + 0x180) = uVar4 | uVar3 | *(ushort *)(param_2 + 0x180) & 1;
  pcStack_110 = pcVar19;
  ppuStack_108 = ppuStack_128;
  if (ppuStack_128 != (undefined **)0x0) {
    ppuVar18 = ppuStack_128 + 1;
    do {
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar8) {
        *ppuVar18 = *ppuVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(ppuVar13,&pcStack_110);
  ppuVar13 = ppuStack_108;
  if (ppuStack_108 != (undefined **)0x0) {
    ppuVar18 = ppuStack_108 + 1;
    do {
      puVar15 = *ppuVar18;
      cVar6 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
      if (bVar8) {
        *ppuVar18 = puVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (puVar15 == (undefined *)0x0) {
      (**(code **)(*ppuStack_108 + 0x10))(ppuStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
    }
  }
  pcStack_100 = pcStack_130 + 0x1f8;
  pcStack_110 = (code *)0x10a955dd8;
  ppuStack_108 = &PTR_FUN_110c30dd0;
  if (*(long *)(param_2 + 0x1f8) == 0) {
    uStack_120 = 0;
    FUN_10a2e9e64(&pcStack_110,&uStack_120);
  }
  else {
    FUN_10a2e9f70(&uStack_120);
    FUN_10a2e9ee4(&pcStack_110,&uStack_120);
    ppuVar13 = ppuStack_118;
    if (ppuStack_118 != (undefined **)0x0) {
      ppuVar18 = ppuStack_118 + 1;
      do {
        puVar15 = *ppuVar18;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar8) {
          *ppuVar18 = puVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (puVar15 == (undefined *)0x0) {
        (**(code **)(*ppuStack_118 + 0x10))(ppuStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_118);
      }
    }
  }
  pppuVar11 = &ppuStack_108;
  (*(code *)*ppuStack_108)();
  fVar23 = *(float *)(param_2 + 0x22c);
  bVar8 = false;
  bVar9 = true;
  if (0.0 < fVar23) {
    bVar8 = false;
    bVar9 = true;
    if (!NAN(fVar23)) {
      bVar8 = fVar23 == 1.0;
      bVar9 = 1.0 <= fVar23;
    }
  }
  if (!bVar9 || bVar8) {
    extraout_x8[1] = (long)ppuStack_128;
    *extraout_x8 = (long)pcStack_130;
    *(float *)(pcStack_130 + 0x22c) = fVar23;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a05248c(&uStack_120);
    (*(code *)*ppuStack_108)(&ppuStack_108);
    FUN_10a955d80(&pcStack_130);
    pppuVar12 = pppuVar11;
    __Unwind_Resume();
    uStack_138 = 0x10a944d64;
    pcStack_150 = param_2;
    pppuStack_148 = pppuVar11;
    ppuStack_140 = &puStack_90;
    func_0x00010a944ddc(pppuVar12 + 0x41);
    ppcStack_160 = (code **)0x0;
    ppuStack_158 = (undefined **)0x0;
    func_0x00010a944e38(pppuVar12 + 0x43,&ppcStack_160);
    ppuVar18 = ppuStack_158;
    if (ppuStack_158 != (undefined **)0x0) {
      plVar2 = (long *)(ppuStack_158 + 1);
      do {
        lVar16 = *plVar2;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar8) {
          *plVar2 = lVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar16 == 0) {
        (**(code **)((long)*ppuStack_158 + 0x10))(ppuStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
    if (pppuVar12[0x48] != (undefined **)0x0) {
      pppuVar11 = (undefined ***)pppuVar12[0x47];
      puVar14 = (undefined8 *)pppuVar12[0x46][1];
      ppuVar18 = *pppuVar11;
      ppuVar18[1] = (undefined *)puVar14;
      *puVar14 = ppuVar18;
      ppcStack_160 = &pcStack_110;
      ppuStack_158 = ppuVar13;
      pppuVar12[0x48] = (undefined **)0x0;
      while (pppuVar11 != pppuVar12 + 0x46) {
        pppuVar17 = (undefined ***)pppuVar11[1];
        FUN_10a581c24(pppuVar11 + 2);
        __ZdlPv(pppuVar11);
        pppuVar11 = pppuVar17;
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a944d3c);
  (*pcVar19)();
}



/* Entry: 10a9449c4; end: 10a944d63;  */

void FUN_10a9449c4(long *param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  float fVar19;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined ***pppuStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    puVar17 = param_2;
    uVar16 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_88 = *(undefined ***)(param_2 + 0x48);
    puStack_90 = *(undefined **)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&puStack_90);
    puVar12 = (undefined8 *)((ulong)&puStack_90 | 8);
    ppuVar9 = &puStack_90;
    if (param_4 != 0) {
      puVar12 = (undefined8 *)(param_4 + 0x28);
      ppuVar9 = (undefined **)(param_4 + 0x20);
    }
    uVar16 = *puVar12;
    puVar17 = *ppuVar9;
  }
  puVar18 = *(undefined **)(param_2 + 0x170);
  FUN_10a3dd220(puVar18);
  FUN_10a581a20(puVar18,puVar17,uVar16);
  ppuVar9 = (undefined **)0x28;
  puStack_b0 = puVar18;
  __Znwm();
  ppuVar13 = ppuVar9 + 1;
  *ppuVar13 = (undefined *)0x0;
  *ppuVar9 = (undefined *)&PTR_DAT_110c30d90;
  ppuVar9[2] = (undefined *)0x0;
  ppuVar9[3] = puVar18;
  ppuVar9[4] = FUN_10a3df8cc;
  ppuStack_a8 = ppuVar9;
  if (puVar18 != (undefined *)0x0) {
    if (*(long *)(puVar18 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar7) {
          *ppuVar13 = *ppuVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar1 = ppuVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar7) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined **)(puVar18 + 0x28) = puVar18;
      *(undefined ***)(puVar18 + 0x30) = ppuVar9;
    }
    else {
      if (*(long *)(*(long *)(puVar18 + 0x30) + 8) != -1) goto LAB_10a944b38;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar7) {
          *ppuVar13 = *ppuVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar1 = ppuVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar7) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(undefined **)(puVar18 + 0x28) = puVar18;
      *(undefined ***)(puVar18 + 0x30) = ppuVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      puVar17 = *ppuVar13;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar7) {
        *ppuVar13 = puVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuVar9 + 0x10))(ppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
LAB_10a944b38:
  puVar17 = puStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_b0 + 0x150,param_2 + 0x150);
  uVar3 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar4 = *(ushort *)(puVar17 + 0x180) & 0xfffc;
  *(ushort *)(puVar17 + 0x180) = uVar4 | *(ushort *)(puVar17 + 0x180) & 1 | uVar3;
  *(ushort *)(puVar17 + 0x180) = uVar4 | uVar3 | *(ushort *)(param_2 + 0x180) & 1;
  puStack_90 = puVar17;
  ppuStack_88 = ppuStack_a8;
  if (ppuStack_a8 != (undefined **)0x0) {
    ppuVar9 = ppuStack_a8 + 1;
    do {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar7) {
        *ppuVar9 = *ppuVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&puStack_90);
  ppuVar9 = ppuStack_88;
  if (ppuStack_88 != (undefined **)0x0) {
    ppuVar13 = ppuStack_88 + 1;
    do {
      puVar17 = *ppuVar13;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
      if (bVar7) {
        *ppuVar13 = puVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar17 == (undefined *)0x0) {
      (**(code **)(*ppuStack_88 + 0x10))(ppuStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
    }
  }
  puStack_80 = puStack_b0 + 0x1f8;
  puStack_90 = (undefined *)0x10a955dd8;
  ppuStack_88 = &PTR_FUN_110c30dd0;
  if (*(long *)(param_2 + 0x1f8) == 0) {
    uStack_a0 = 0;
    FUN_10a2e9e64(&puStack_90,&uStack_a0);
  }
  else {
    FUN_10a2e9f70(&uStack_a0);
    FUN_10a2e9ee4(&puStack_90,&uStack_a0);
    ppuVar9 = ppuStack_98;
    if (ppuStack_98 != (undefined **)0x0) {
      ppuVar13 = ppuStack_98 + 1;
      do {
        puVar17 = *ppuVar13;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar13,0x10);
        if (bVar7) {
          *ppuVar13 = puVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (puVar17 == (undefined *)0x0) {
        (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_98);
      }
    }
  }
  pppuVar10 = &ppuStack_88;
  (*(code *)*ppuStack_88)();
  fVar19 = *(float *)(param_2 + 0x22c);
  bVar7 = false;
  bVar8 = true;
  if (0.0 < fVar19) {
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar19)) {
      bVar7 = fVar19 == 1.0;
      bVar8 = 1.0 <= fVar19;
    }
  }
  if (!bVar8 || bVar7) {
    param_1[1] = (long)ppuStack_a8;
    *param_1 = (long)puStack_b0;
    *(float *)(puStack_b0 + 0x22c) = fVar19;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010a05248c(&uStack_a0);
    (*(code *)*ppuStack_88)(&ppuStack_88);
    FUN_10a955d80(&puStack_b0);
    pppuVar11 = pppuVar10;
    __Unwind_Resume();
    uStack_b8 = 0x10a944d64;
    puStack_d0 = param_2;
    pppuStack_c8 = pppuVar10;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x00010a944ddc(pppuVar11 + 0x41);
    ppuStack_e0 = (undefined **)0x0;
    ppuStack_d8 = (undefined **)0x0;
    func_0x00010a944e38(pppuVar11 + 0x43,&ppuStack_e0);
    ppuVar13 = ppuStack_d8;
    if (ppuStack_d8 != (undefined **)0x0) {
      plVar2 = (long *)(ppuStack_d8 + 1);
      do {
        lVar14 = *plVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)((long)*ppuStack_d8 + 0x10))(ppuStack_d8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    if (pppuVar11[0x48] != (undefined **)0x0) {
      pppuVar10 = (undefined ***)pppuVar11[0x47];
      puVar12 = (undefined8 *)pppuVar11[0x46][1];
      ppuVar13 = *pppuVar10;
      ppuVar13[1] = (undefined *)puVar12;
      *puVar12 = ppuVar13;
      ppuStack_e0 = &puStack_90;
      ppuStack_d8 = ppuVar9;
      pppuVar11[0x48] = (undefined **)0x0;
      while (pppuVar10 != pppuVar11 + 0x46) {
        pppuVar15 = (undefined ***)pppuVar10[1];
        FUN_10a581c24(pppuVar10 + 2);
        __ZdlPv(pppuVar10);
        pppuVar10 = pppuVar15;
      }
    }
    return;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a944d3c);
  (*pcVar6)();
}



/* Entry: 10a944d64; end: 10a944ef7;  */

/* WARNING: Removing unreachable block (ram,0x00010a944d98) */
/* WARNING: Removing unreachable block (ram,0x00010a944d9c) */
/* WARNING: Removing unreachable block (ram,0x00010a944da4) */
/* WARNING: Removing unreachable block (ram,0x00010a944dac) */
/* WARNING: Removing unreachable block (ram,0x00010a944db0) */

void FUN_10a944d64(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  func_0x00010a944ddc(param_1 + 0x208);
  func_0x00010a944e38(param_1 + 0x218,&stack0xffffffffffffffd0);
  if (*(long *)(param_1 + 0x240) != 0) {
    plVar1 = *(long **)(param_1 + 0x238);
    plVar2 = *(long **)(*(long *)(param_1 + 0x230) + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    *(undefined8 *)(param_1 + 0x240) = 0;
    while (plVar1 != (long *)(param_1 + 0x230)) {
      plVar2 = (long *)plVar1[1];
      FUN_10a581c24(plVar1 + 2);
      __ZdlPv(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}



/* Entry: 10a944ef8; end: 10a9452fb;  */

void FUN_10a944ef8(float param_1,long param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  bool bVar12;
  undefined1 auStack_f0 [8];
  long *plStack_e8;
  long lStack_e0;
  long *plStack_d8;
  char cStack_c9;
  undefined8 uStack_c8;
  char cStack_b1;
  long *plStack_a0;
  long *plStack_98;
  byte abStack_90 [8];
  undefined8 auStack_88 [2];
  char cStack_71;
  long lStack_70;
  long *plStack_68;
  
  lVar1 = param_2 + 0x230;
  lVar11 = *(long *)(param_2 + 0x238);
  if (lVar11 != lVar1) {
    bVar12 = false;
    uVar8 = *(undefined8 *)(param_2 + 0x170);
    lVar9 = (long)(param_1 * 1000.0) * 1000000;
    do {
      if ((*(byte *)(lVar11 + 0x58) & 1) == 0) {
        plVar10 = (long *)(lVar11 + 0x50);
        if ((((*plVar10 == 0) || (plVar6 = plVar10, FUN_109d1a400(plVar10,lVar9), (int)plVar6 != 0))
            && (lVar5 = *(long *)(lVar11 + 0x40), lVar5 != 0)) &&
           ((*(char *)(lVar5 + 0x10) != '\0' || (FUN_109d1a400(lVar5,lVar9), (int)lVar5 != 0)))) {
          lStack_70 = 0;
          plStack_68 = (long *)0x0;
          if (*plVar10 == 0) {
            FUN_10a945318(&lStack_e0,lVar11 + 0x10,uVar8);
            plVar10 = plStack_68;
            plStack_68 = plStack_d8;
            lStack_70 = lStack_e0;
            lStack_e0 = 0;
            plStack_d8 = (long *)0x0;
            if (plVar10 != (long *)0x0) {
              plVar6 = plVar10 + 1;
              do {
                lVar5 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar5 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
            plVar10 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar6 = plStack_d8 + 1;
              do {
                lVar5 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar5 == 0) {
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
            if (lStack_70 != 0) goto LAB_10a945198;
LAB_10a9450d4:
            puVar7 = *(undefined8 **)(lVar11 + 0x20);
            if ((puVar7 == (undefined8 *)0x0) || (*(char *)(puVar7 + 8) != '\x02')) {
              if ((puVar7 != (undefined8 *)0x0) && (*(char *)(puVar7 + 8) == '\x01')) {
                (*(code *)*puVar7)();
              }
            }
            else {
              FUN_10a05e614();
            }
          }
          else {
            FUN_10a94553c(abStack_90,plVar10);
            bVar4 = abStack_90[0];
            if (abStack_90[0] == 1) {
              FUN_10a0ff18c(&lStack_e0,auStack_88,2);
              FUN_10a945318(auStack_f0,lVar11 + 0x10,uVar8);
              plVar6 = (long *)0x410;
              __Znwm();
              plVar6[1] = 0;
              plVar6[2] = 0;
              plVar10 = plVar6 + 3;
              *plVar6 = (long)&PTR_FUN_110bc8920;
              FUN_10ac8b384(plVar10,uVar8,&lStack_e0,auStack_f0,1);
              plStack_a0 = plVar10;
              plStack_98 = plVar6;
              FUN_10a37bcec(&plStack_a0,plVar6 + 0xb,plVar10);
              plVar10 = plStack_e8;
              if (plStack_e8 != (long *)0x0) {
                plVar6 = plStack_e8 + 1;
                do {
                  lVar5 = *plVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar3) {
                    *plVar6 = lVar5 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar5 == 0) {
                  (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                }
              }
              if (cStack_b1 < '\0') {
                __ZdlPv(uStack_c8);
              }
              if (cStack_c9 < '\0') {
                __ZdlPv(lStack_e0);
              }
              *(undefined1 *)(plStack_a0 + 0x51) = 1;
              FUN_10a945638(&lStack_70,&plStack_a0);
              plVar10 = plStack_98;
              if (plStack_98 != (long *)0x0) {
                plVar6 = plStack_98 + 1;
                do {
                  lVar5 = *plVar6;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                  if (bVar3) {
                    *plVar6 = lVar5 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar5 == 0) {
                  (**(code **)(*plStack_98 + 0x10))(plStack_98);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
                }
              }
            }
            if (cStack_71 < '\0') {
              __ZdlPv(auStack_88[0]);
              if ((bVar4 & 1) != 0) goto LAB_10a945198;
              goto LAB_10a9450d4;
            }
            if ((bVar4 & 1) == 0) goto LAB_10a9450d4;
LAB_10a945198:
            FUN_10a5d11a8(&lStack_e0,uVar8,&lStack_70);
            FUN_10a00bca8(*(undefined8 *)(lVar11 + 0x10),&lStack_e0);
            plVar10 = plStack_d8;
            if (plStack_d8 != (long *)0x0) {
              plVar6 = plStack_d8 + 1;
              do {
                lVar5 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar5 == 0) {
                (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
              }
            }
          }
          plVar10 = plStack_68;
          *(undefined1 *)(lVar11 + 0x58) = 1;
          if (plStack_68 != (long *)0x0) {
            plVar6 = plStack_68 + 1;
            do {
              lVar5 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar5 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
            }
          }
        }
        else {
          bVar12 = true;
        }
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 != lVar1);
    if (bVar12) {
      return;
    }
  }
  FUN_10a581bb8(lVar1);
  return;
}



/* Entry: 10a9452fc; end: 10a945317;  */

/* WARNING: Removing unreachable block (ram,0x00010a944d98) */
/* WARNING: Removing unreachable block (ram,0x00010a944d9c) */
/* WARNING: Removing unreachable block (ram,0x00010a944da4) */
/* WARNING: Removing unreachable block (ram,0x00010a944dac) */
/* WARNING: Removing unreachable block (ram,0x00010a944db0) */

void FUN_10a9452fc(long param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined *puVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_110 [8];
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  char cStack_e9;
  undefined8 uStack_e8;
  char cStack_d1;
  long *plStack_c0;
  long *plStack_b8;
  byte abStack_b0 [8];
  undefined8 auStack_a8 [2];
  char cStack_91;
  long lStack_90;
  long *plStack_88;
  
  fVar14 = 3.0;
  FUN_10a944ef8(0x40400000);
  lVar9 = *(long *)(param_1 + 0x1d0);
  while( true ) {
    if (lVar9 == param_1 + 0x1c8) {
      func_0x00010a944ddc(param_1 + 0x1a0);
      func_0x00010a944e38(param_1 + 0x1b0,&stack0xffffffffffffffd0);
      if (*(long *)(param_1 + 0x1d8) != 0) {
        plVar11 = *(long **)(param_1 + 0x1d0);
        plVar7 = *(long **)(*(long *)(param_1 + 0x1c8) + 8);
        lVar9 = *plVar11;
        *(long **)(lVar9 + 8) = plVar7;
        *plVar7 = lVar9;
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        while (plVar11 != (long *)(param_1 + 0x1c8)) {
          plVar7 = (long *)plVar11[1];
          FUN_10a581c24(plVar11 + 2);
          __ZdlPv(plVar11);
          plVar11 = plVar7;
        }
      }
      return;
    }
    if ((*(byte *)(lVar9 + 0x58) & 1) == 0) break;
    lVar9 = *(long *)(lVar9 + 8);
  }
  FUN_10a944d64(param_1 + -0x68);
  puVar5 = &UNK_10f683f73;
  FUN_10a00946c();
  puVar1 = puVar5 + 0x230;
  puVar12 = *(undefined **)(puVar5 + 0x238);
  if (puVar12 != puVar1) {
    bVar13 = false;
    uVar10 = *(undefined8 *)(puVar5 + 0x170);
    lVar9 = (long)(fVar14 * 1000.0) * 1000000;
    do {
      if ((puVar12[0x58] & 1) == 0) {
        plVar11 = (long *)(puVar12 + 0x50);
        if ((((*plVar11 == 0) || (plVar7 = plVar11, FUN_109d1a400(plVar11,lVar9), (int)plVar7 != 0))
            && (lVar6 = *(long *)(puVar12 + 0x40), lVar6 != 0)) &&
           ((*(char *)(lVar6 + 0x10) != '\0' || (FUN_109d1a400(lVar6,lVar9), (int)lVar6 != 0)))) {
          lStack_90 = 0;
          plStack_88 = (long *)0x0;
          if (*plVar11 == 0) {
            FUN_10a945318(&lStack_100,puVar12 + 0x10,uVar10);
            plVar11 = plStack_88;
            plStack_88 = plStack_f8;
            lStack_90 = lStack_100;
            lStack_100 = 0;
            plStack_f8 = (long *)0x0;
            if (plVar11 != (long *)0x0) {
              plVar7 = plVar11 + 1;
              do {
                lVar6 = *plVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar3) {
                  *plVar7 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            plVar11 = plStack_f8;
            if (plStack_f8 != (long *)0x0) {
              plVar7 = plStack_f8 + 1;
              do {
                lVar6 = *plVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar3) {
                  *plVar7 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
            if (lStack_90 == 0) goto LAB_10a9450d4;
LAB_10a945198:
            FUN_10a5d11a8(&lStack_100,uVar10,&lStack_90);
            FUN_10a00bca8(*(undefined8 *)(puVar12 + 0x10),&lStack_100);
            plVar11 = plStack_f8;
            if (plStack_f8 != (long *)0x0) {
              plVar7 = plStack_f8 + 1;
              do {
                lVar6 = *plVar7;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar3) {
                  *plVar7 = lVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar6 == 0) {
                (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
              }
            }
          }
          else {
            FUN_10a94553c(abStack_b0,plVar11);
            bVar4 = abStack_b0[0];
            if (abStack_b0[0] == 1) {
              FUN_10a0ff18c(&lStack_100,auStack_a8,2);
              FUN_10a945318(auStack_110,puVar12 + 0x10,uVar10);
              plVar7 = (long *)0x410;
              __Znwm();
              plVar7[1] = 0;
              plVar7[2] = 0;
              plVar11 = plVar7 + 3;
              *plVar7 = (long)&PTR_FUN_110bc8920;
              FUN_10ac8b384(plVar11,uVar10,&lStack_100,auStack_110,1);
              plStack_c0 = plVar11;
              plStack_b8 = plVar7;
              FUN_10a37bcec(&plStack_c0,plVar7 + 0xb,plVar11);
              plVar11 = plStack_108;
              if (plStack_108 != (long *)0x0) {
                plVar7 = plStack_108 + 1;
                do {
                  lVar6 = *plVar7;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = lVar6 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar6 == 0) {
                  (**(code **)(*plStack_108 + 0x10))(plStack_108);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
              if (cStack_d1 < '\0') {
                __ZdlPv(uStack_e8);
              }
              if (cStack_e9 < '\0') {
                __ZdlPv(lStack_100);
              }
              *(undefined1 *)(plStack_c0 + 0x51) = 1;
              FUN_10a945638(&lStack_90,&plStack_c0);
              plVar11 = plStack_b8;
              if (plStack_b8 != (long *)0x0) {
                plVar7 = plStack_b8 + 1;
                do {
                  lVar6 = *plVar7;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = lVar6 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar6 == 0) {
                  (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
                }
              }
            }
            if (cStack_91 < '\0') {
              __ZdlPv(auStack_a8[0]);
              if ((bVar4 & 1) == 0) goto LAB_10a9450d4;
              goto LAB_10a945198;
            }
            if ((bVar4 & 1) != 0) goto LAB_10a945198;
LAB_10a9450d4:
            puVar8 = *(undefined8 **)(puVar12 + 0x20);
            if ((puVar8 == (undefined8 *)0x0) || (*(char *)(puVar8 + 8) != '\x02')) {
              if ((puVar8 != (undefined8 *)0x0) && (*(char *)(puVar8 + 8) == '\x01')) {
                (*(code *)*puVar8)();
              }
            }
            else {
              FUN_10a05e614();
            }
          }
          plVar11 = plStack_88;
          puVar12[0x58] = 1;
          if (plStack_88 != (long *)0x0) {
            plVar7 = plStack_88 + 1;
            do {
              lVar6 = *plVar7;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar3) {
                *plVar7 = lVar6 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar6 == 0) {
              (**(code **)(*plStack_88 + 0x10))(plStack_88);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
        }
        else {
          bVar13 = true;
        }
      }
      puVar12 = *(undefined **)(puVar12 + 8);
    } while (puVar12 != puVar1);
    if (bVar13) {
      return;
    }
  }
  FUN_10a581bb8(puVar1);
  return;
}



/* Entry: 10a945318; end: 10a94553b;  */

/* WARNING: Removing unreachable block (ram,0x00010a9454f4) */

void FUN_10a945318(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined8 uStack_80;
  char cStack_69;
  long lStack_60;
  long lStack_58;
  byte bStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar5 = *(long **)(param_2 + 0x30);
  if (plVar5 != (long *)0x0 && (char)plVar5[2] == '\x01') {
    lVar4 = plVar5[1];
    lVar6 = *plVar5;
    param_1[1] = plVar5[1];
    *param_1 = lVar6;
    if (lVar4 == 0) {
      return;
    }
    plVar5 = (long *)(lVar4 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    return;
  }
  func_0x0001092af8bc(plVar5);
  lVar4 = *plVar5;
  if ((*(byte *)(lVar4 + 0xb8) & 1) != 0) {
    bStack_50 = *(byte *)(lVar4 + 0x98);
    if (*(char *)(lVar4 + 0xb7) < '\0') {
      func_0x000107c3192c(&uStack_48,*(undefined8 *)(lVar4 + 0xa0),*(undefined8 *)(lVar4 + 0xa8));
      if (bStack_50 != 1) goto LAB_10a9454e8;
    }
    else {
      uStack_40 = *(undefined8 *)(lVar4 + 0xa8);
      uStack_48 = *(undefined8 *)(lVar4 + 0xa0);
      uStack_38 = *(undefined8 *)(lVar4 + 0xb0);
      if ((bStack_50 & 1) == 0) {
LAB_10a9454e8:
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
    }
    FUN_10a0ff18c(auStack_98,&uStack_48,2);
    FUN_10ac5fb74(&lStack_60,param_3,auStack_98,0);
    if (cStack_69 < '\0') {
      __ZdlPv(uStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(auStack_98[0]);
    }
    lVar6 = lStack_58;
    lVar4 = lStack_60;
    *(undefined1 *)(lStack_60 + 0x288) = 1;
    if (lStack_58 != 0) {
      plVar5 = (long *)(lStack_58 + 8);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar5 = *(long **)(param_2 + 0x30);
    if ((ulong)*(byte *)(plVar5 + 2) < 3) {
      (*(code *)(&PTR_DAT_110c30df0)[*(byte *)(plVar5 + 2)])(plVar5);
      *plVar5 = lVar4;
      plVar5[1] = lVar6;
      *(undefined1 *)(plVar5 + 2) = 1;
      param_1[1] = lStack_58;
      *param_1 = lStack_60;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a945474);
  (*pcVar3)();
}



/* Entry: 10a94553c; end: 10a945637;  */

long * FUN_10a94553c(undefined1 *param_1,long *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined7 uStack_58;
  undefined1 uStack_51;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001092af8bc();
  lVar11 = *param_2;
  if ((*(byte *)(lVar11 + 0xb8) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a945634);
    (*pcVar8)();
  }
  uVar4 = *(undefined1 *)(lVar11 + 0x98);
  uVar3 = *(undefined8 *)(lVar11 + 0xa0);
  uStack_58 = (undefined7)*(undefined8 *)(lVar11 + 0xa8);
  uVar12 = *(undefined8 *)(lVar11 + 0xaf);
  uStack_51 = (undefined1)uVar12;
  uVar5 = *(undefined1 *)(lVar11 + 0xb7);
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  *(undefined8 *)(lVar11 + 0xb0) = 0;
  *(undefined8 *)(lVar11 + 0xa0) = 0;
  plVar9 = (long *)*param_2;
  *param_2 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar13 = *puVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar7) {
        *puVar1 = uVar13 - 4;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar13 - 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  *param_1 = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(ulong *)(param_1 + 0x10) = CONCAT17(uStack_51,uStack_58);
  *(undefined8 *)(param_1 + 0x17) = uVar12;
  param_1[0x1f] = uVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return plVar9;
  }
  ___stack_chk_fail();
  lVar11 = param_3[1];
  lVar10 = *param_3;
  if (param_3[1] != 0) {
    plVar14 = (long *)(param_3[1] + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar14 = (long *)plVar9[1];
  plVar9[1] = lVar11;
  *plVar9 = lVar10;
  if (plVar14 != (long *)0x0) {
    plVar2 = plVar14 + 1;
    do {
      lVar10 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  return plVar9;
}



/* Entry: 10a945638; end: 10a9456b3;  */

undefined8 * FUN_10a945638(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a9456b4; end: 10a945deb;  */

void FUN_10a9456b4(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long *plStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  long *plStack_e0;
  int iStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  
  if ((*(long *)(param_1 + 0x208) != 0) &&
     (*(uint *)(param_1 + 0x228) < *(uint *)(*(long *)(*(long *)(param_1 + 0x170) + 0x850) + 0x30)))
  {
    lVar10 = *(long *)(param_1 + 0x1f8);
    plStack_b8 = *(long **)(param_1 + 0x200);
    if (plStack_b8 != (long *)0x0) {
      plVar13 = plStack_b8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar1 = (ulong *)(param_1 + 0x208);
    lStack_c0 = lVar10;
    if (lVar10 == 0) {
      func_0x00010a944ddc(puVar1);
      FUN_10a00946c(&UNK_10f6840cf);
      goto LAB_10a945d20;
    }
    plVar12 = *(long **)(lVar10 + 0x268);
    puVar9 = (undefined8 *)0x1;
    plVar13 = plVar12;
    FUN_10a088744();
    iStack_d8 = (int)plVar13;
    if (puVar9 == (undefined8 *)0x0) {
      uStack_d0 = 0;
      plStack_c8 = (long *)0x0;
    }
    else {
      plStack_c8 = (long *)puVar9[1];
      uStack_d0 = *puVar9;
      if (puVar9[1] != 0) {
        plVar13 = (long *)(puVar9[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    if (iStack_d8 == 2) {
      if (*(long *)(param_1 + 0x218) == 0) {
        uVar11 = (ulong)*(byte *)(*(long *)(param_1 + 0x170) + 0x29);
        if (5 < uVar11) {
LAB_10a945d20:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a945d24);
          (*pcVar6)();
        }
        plVar14 = *(long **)(*(long *)(param_1 + 0x170) + uVar11 * 8 + 0x30);
        plVar13 = *(long **)(lVar10 + 0x268);
        if (plVar13 == (long *)0x0) {
          fVar16 = *(float *)(param_1 + 0x22c);
          fVar17 = 0.0;
          fVar15 = fVar16 * 0.0;
        }
        else {
          (**(code **)(*plVar13 + 0xb0))();
          plVar7 = *(long **)(lVar10 + 0x268);
          fVar16 = *(float *)(param_1 + 0x22c);
          fVar15 = fVar16 * (float)((ulong)plVar13 & 0xffffffff);
          if (plVar7 == (long *)0x0) {
            fVar17 = 0.0;
          }
          else {
            (**(code **)(*plVar7 + 0xb8))();
            fVar16 = *(float *)(param_1 + 0x22c);
            fVar17 = (float)((ulong)plVar7 & 0xffffffff);
          }
        }
        (**(code **)(*plVar12 + 0x90))(&puStack_110,plVar12);
        (**(code **)(*plVar14 + 0x30))
                  (&uStack_e8,plVar14,&uStack_d0,(int)fVar15,(int)(fVar16 * fVar17),&puStack_110,0);
        plVar13 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar7 = plStack_e0 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = *plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_109d1a80c();
        puVar9 = (undefined8 *)plVar14[9];
        uStack_b0 = uStack_e8;
        plStack_a8 = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar14 = (long *)puVar9[2];
        plStack_108 = (long *)0x0;
        puStack_100 = (undefined8 *)0x0;
        if (plVar14 == (long *)0x0) {
          uStack_b0 = 0;
          plStack_a8 = (long *)0x0;
          puVar8 = (undefined8 *)0xe8;
          __Znwm();
          puVar8[2] = 0;
          puVar8[1] = 0x200000006;
          *(undefined2 *)(puVar8 + 3) = 4;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
          puVar8[0xd] = 0;
          puVar8[0xc] = 0;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = puVar8 + 3;
          puVar8[0x12] = 0;
          *(undefined1 *)(puVar8 + 0x13) = 0;
          *(undefined1 *)(puVar8 + 0x17) = 0;
          *puVar8 = &PTR_DAT_110c30b60;
          puStack_110 = puVar8 + 0x18;
          *puStack_110 = uStack_e8;
          puVar8[0x19] = plVar13;
          *(undefined1 *)(puVar8 + 0x1b) = 1;
          puVar8[0x1c] = 0;
          pcStack_f8 = FUN_10a94f1f0;
          plStack_108 = puVar8;
          puStack_100 = puVar8;
        }
        else {
          pcStack_a0 = (code *)0x0;
          (**(code **)(*plVar14 + 0x28))(plVar14,0,&pcStack_a0);
          if (pcStack_a0 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_a0);
            goto LAB_10a945d20;
          }
          uStack_b0 = 0;
          plStack_a8 = (long *)0x0;
          puVar8 = (undefined8 *)0xf0;
          __Znwm();
          puVar8[2] = 0;
          puVar8[1] = 0x200000006;
          *(undefined2 *)(puVar8 + 3) = 4;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
          puVar8[0xd] = 0;
          puVar8[0xc] = 0;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = puVar8 + 3;
          puVar8[0x12] = 0;
          *(undefined1 *)(puVar8 + 0x13) = 0;
          *(undefined1 *)(puVar8 + 0x17) = 0;
          *puVar8 = &PTR_FUN_110c30b28;
          puVar8[0x18] = uStack_e8;
          puVar8[0x19] = plVar13;
          *(undefined1 *)(puVar8 + 0x1b) = 1;
          puVar8[0x1c] = 0;
          puVar8[0x1d] = plVar14;
          if (plStack_108 != (long *)0x0) {
            puVar2 = (ulong *)(plStack_108 + 1);
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plStack_108 + 8))();
              }
            }
          }
          plStack_108 = puVar8;
          if (puStack_100 != (undefined8 *)0x0) {
            func_0x0001092b4274(&puStack_100);
          }
          pcStack_f8 = FUN_10a94f1c0;
          puStack_110 = puVar8 + 0x18;
          puStack_100 = puVar8;
          __ZNSt13exception_ptrD1Ev(&pcStack_a0);
        }
        puVar8 = puStack_110;
        if (puStack_110[4] != 0) {
          func_0x0001092b4274();
        }
        puVar8[4] = puStack_100;
        puStack_100 = (undefined8 *)0x0;
        pcStack_a0 = pcStack_f8;
        puStack_98 = puStack_110;
        puStack_90 = puVar9;
        (**(code **)*puVar9)(puVar9,&pcStack_a0);
        plVar14 = plStack_108;
        plStack_108 = (long *)0x0;
        if ((puStack_100 != (undefined8 *)0x0) &&
           (func_0x0001092b4274(&puStack_100), plStack_108 != (long *)0x0)) {
          puVar2 = (ulong *)(plStack_108 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plStack_108 + 8))();
            }
          }
        }
        plVar7 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar3 = plStack_a8 + 1;
          do {
            lVar10 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        plVar7 = (long *)0x30;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_DAT_110c30e18;
        plStack_120 = plVar7 + 3;
        *plStack_120 = (long)plVar14;
        *(undefined1 *)(plVar7 + 5) = 0;
        plStack_118 = plVar7;
        func_0x00010a944e38(param_1 + 0x218,&plStack_120);
        plVar14 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar7 = plStack_118 + 1;
          do {
            lVar10 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 1;
          do {
            lVar10 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        if (plStack_e0 != (long *)0x0) {
          plVar13 = plStack_e0 + 1;
          do {
            lVar10 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
          }
        }
      }
      plVar13 = (long *)*puVar1;
      (**(code **)(*plVar12 + 0x90))(&puStack_110,plVar12);
      (**(code **)(*plVar13 + 0x10))(plVar13,&uStack_d0,&puStack_110);
      if (((ulong)plVar13 & 1) == 0) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f683fbf,&UNK_10f684107,0xf8,&UNK_10f684191);
        }
        func_0x00010a944ddc(puVar1);
      }
    }
    else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f683fbf,&UNK_10f684107,0xe4,&UNK_10f684154);
    }
    plVar13 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar12 = plStack_c8 + 1;
      do {
        lVar10 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar12 = plStack_b8 + 1;
      do {
        lVar10 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  return;
}



/* Entry: 10a945dec; end: 10a945df3;  */

void FUN_10a945dec(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  long *plStack_120;
  long *plStack_118;
  undefined8 *puStack_110;
  long *plStack_108;
  undefined8 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  long *plStack_e0;
  int iStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (*(uint *)(param_1 + 0x38) < *(uint *)(*(long *)(*(long *)(param_1 + -0x80) + 0x850) + 0x30)))
  {
    lVar10 = *(long *)(param_1 + 8);
    plStack_b8 = *(long **)(param_1 + 0x10);
    if (plStack_b8 != (long *)0x0) {
      plVar13 = plStack_b8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = *plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar1 = (ulong *)(param_1 + 0x18);
    lStack_c0 = lVar10;
    if (lVar10 == 0) {
      func_0x00010a944ddc(puVar1);
      FUN_10a00946c(&UNK_10f6840cf);
      goto LAB_10a945d20;
    }
    plVar12 = *(long **)(lVar10 + 0x268);
    puVar9 = (undefined8 *)0x1;
    plVar13 = plVar12;
    FUN_10a088744();
    iStack_d8 = (int)plVar13;
    if (puVar9 == (undefined8 *)0x0) {
      uStack_d0 = 0;
      plStack_c8 = (long *)0x0;
    }
    else {
      plStack_c8 = (long *)puVar9[1];
      uStack_d0 = *puVar9;
      if (puVar9[1] != 0) {
        plVar13 = (long *)(puVar9[1] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
    }
    if (iStack_d8 == 2) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar11 = (ulong)*(byte *)(*(long *)(param_1 + -0x80) + 0x29);
        if (5 < uVar11) {
LAB_10a945d20:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a945d24);
          (*pcVar6)();
        }
        plVar14 = *(long **)(*(long *)(param_1 + -0x80) + uVar11 * 8 + 0x30);
        plVar13 = *(long **)(lVar10 + 0x268);
        if (plVar13 == (long *)0x0) {
          fVar16 = *(float *)(param_1 + 0x3c);
          fVar17 = 0.0;
          fVar15 = fVar16 * 0.0;
        }
        else {
          (**(code **)(*plVar13 + 0xb0))();
          plVar7 = *(long **)(lVar10 + 0x268);
          fVar16 = *(float *)(param_1 + 0x3c);
          fVar15 = fVar16 * (float)((ulong)plVar13 & 0xffffffff);
          if (plVar7 == (long *)0x0) {
            fVar17 = 0.0;
          }
          else {
            (**(code **)(*plVar7 + 0xb8))();
            fVar16 = *(float *)(param_1 + 0x3c);
            fVar17 = (float)((ulong)plVar7 & 0xffffffff);
          }
        }
        (**(code **)(*plVar12 + 0x90))(&puStack_110,plVar12);
        (**(code **)(*plVar14 + 0x30))
                  (&uStack_e8,plVar14,&uStack_d0,(int)fVar15,(int)(fVar16 * fVar17),&puStack_110,0);
        plVar13 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar7 = plStack_e0 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = *plVar7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_109d1a80c();
        puVar9 = (undefined8 *)plVar14[9];
        uStack_b0 = uStack_e8;
        plStack_a8 = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = *plVar14 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar14 = (long *)puVar9[2];
        plStack_108 = (long *)0x0;
        puStack_100 = (undefined8 *)0x0;
        if (plVar14 == (long *)0x0) {
          uStack_b0 = 0;
          plStack_a8 = (long *)0x0;
          puVar8 = (undefined8 *)0xe8;
          __Znwm();
          puVar8[2] = 0;
          puVar8[1] = 0x200000006;
          *(undefined2 *)(puVar8 + 3) = 4;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
          puVar8[0xd] = 0;
          puVar8[0xc] = 0;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = puVar8 + 3;
          puVar8[0x12] = 0;
          *(undefined1 *)(puVar8 + 0x13) = 0;
          *(undefined1 *)(puVar8 + 0x17) = 0;
          *puVar8 = &PTR_DAT_110c30b60;
          puStack_110 = puVar8 + 0x18;
          *puStack_110 = uStack_e8;
          puVar8[0x19] = plVar13;
          *(undefined1 *)(puVar8 + 0x1b) = 1;
          puVar8[0x1c] = 0;
          pcStack_f8 = FUN_10a94f1f0;
          plStack_108 = puVar8;
          puStack_100 = puVar8;
        }
        else {
          pcStack_a0 = (code *)0x0;
          (**(code **)(*plVar14 + 0x28))(plVar14,0,&pcStack_a0);
          if (pcStack_a0 != (code *)0x0) {
            func_0x0001092af97c(&pcStack_a0);
            goto LAB_10a945d20;
          }
          uStack_b0 = 0;
          plStack_a8 = (long *)0x0;
          puVar8 = (undefined8 *)0xf0;
          __Znwm();
          puVar8[2] = 0;
          puVar8[1] = 0x200000006;
          *(undefined2 *)(puVar8 + 3) = 4;
          puVar8[5] = 0;
          puVar8[4] = 0;
          puVar8[7] = 0;
          puVar8[6] = 0;
          puVar8[9] = 0;
          puVar8[8] = 0;
          puVar8[0xb] = 0;
          puVar8[10] = 0;
          puVar8[0xd] = 0;
          puVar8[0xc] = 0;
          puVar8[0xf] = 0;
          puVar8[0xe] = 0;
          puVar8[0x10] = 0;
          puVar8[0x11] = puVar8 + 3;
          puVar8[0x12] = 0;
          *(undefined1 *)(puVar8 + 0x13) = 0;
          *(undefined1 *)(puVar8 + 0x17) = 0;
          *puVar8 = &PTR_FUN_110c30b28;
          puVar8[0x18] = uStack_e8;
          puVar8[0x19] = plVar13;
          *(undefined1 *)(puVar8 + 0x1b) = 1;
          puVar8[0x1c] = 0;
          puVar8[0x1d] = plVar14;
          if (plStack_108 != (long *)0x0) {
            puVar2 = (ulong *)(plStack_108 + 1);
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar5) {
                  *puVar2 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plStack_108 + 8))();
              }
            }
          }
          plStack_108 = puVar8;
          if (puStack_100 != (undefined8 *)0x0) {
            func_0x0001092b4274(&puStack_100);
          }
          pcStack_f8 = FUN_10a94f1c0;
          puStack_110 = puVar8 + 0x18;
          puStack_100 = puVar8;
          __ZNSt13exception_ptrD1Ev(&pcStack_a0);
        }
        puVar8 = puStack_110;
        if (puStack_110[4] != 0) {
          func_0x0001092b4274();
        }
        puVar8[4] = puStack_100;
        puStack_100 = (undefined8 *)0x0;
        pcStack_a0 = pcStack_f8;
        puStack_98 = puStack_110;
        puStack_90 = puVar9;
        (**(code **)*puVar9)(puVar9,&pcStack_a0);
        plVar14 = plStack_108;
        plStack_108 = (long *)0x0;
        if ((puStack_100 != (undefined8 *)0x0) &&
           (func_0x0001092b4274(&puStack_100), plStack_108 != (long *)0x0)) {
          puVar2 = (ulong *)(plStack_108 + 1);
          do {
            uVar11 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plStack_108 + 8))();
            }
          }
        }
        plVar7 = plStack_a8;
        if (plStack_a8 != (long *)0x0) {
          plVar3 = plStack_a8 + 1;
          do {
            lVar10 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        plVar7 = (long *)0x30;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_DAT_110c30e18;
        plStack_120 = plVar7 + 3;
        *plStack_120 = (long)plVar14;
        *(undefined1 *)(plVar7 + 5) = 0;
        plStack_118 = plVar7;
        func_0x00010a944e38(param_1 + 0x28,&plStack_120);
        plVar14 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar7 = plStack_118 + 1;
          do {
            lVar10 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        if (plVar13 != (long *)0x0) {
          plVar14 = plVar13 + 1;
          do {
            lVar10 = *plVar14;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar5) {
              *plVar14 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        if (plStack_e0 != (long *)0x0) {
          plVar13 = plStack_e0 + 1;
          do {
            lVar10 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar10 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
          }
        }
      }
      plVar13 = (long *)*puVar1;
      (**(code **)(*plVar12 + 0x90))(&puStack_110,plVar12);
      (**(code **)(*plVar13 + 0x10))(plVar13,&uStack_d0,&puStack_110);
      if (((ulong)plVar13 & 1) == 0) {
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f683fbf,&UNK_10f684107,0xf8,&UNK_10f684191);
        }
        func_0x00010a944ddc(puVar1);
      }
    }
    else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f683fbf,&UNK_10f684107,0xe4,&UNK_10f684154);
    }
    plVar13 = plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar12 = plStack_c8 + 1;
      do {
        lVar10 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    plVar13 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar12 = plStack_b8 + 1;
      do {
        lVar10 = *plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *plVar12 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
  }
  return;
}



/* Entry: 10a945df4; end: 10a9460f7;  */

void FUN_10a945df4(long param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  code **ppcVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  code **ppcVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    ppcVar11 = (code **)*param_3;
    if (ppcVar11 != (code **)0x0 && *(char *)(ppcVar11 + 8) == '\x02') {
LAB_10a9460cc:
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar8 = ppcVar11;
      FUN_10a688b40();
      if (ppcVar8 == (code **)0x0) {
        pppuVar9 = (undefined ***)0x0;
        if (param_2 != 0) {
          pcStack_50 = ppcVar11[1];
          pcStack_58 = *ppcVar11;
          if (ppcVar11[1] != (code *)0x0) {
            pcVar1 = ppcVar11[1] + 8;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar5) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar8 = &pcStack_68;
          plStack_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar9 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar8 = (code *)CONCAT44((int)((ulong)*ppcVar8 >> 0x20) + 1,(int)*ppcVar8 + 1);
        pppuVar9 = (undefined ***)*ppcVar11;
        FUN_10a05e740();
        iVar6 = *(int *)((long)ppcVar8 + 4) + -1;
        *(int *)((long)ppcVar8 + 4) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)ppcVar8 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_60)(ppcVar8 + 1);
      func_0x00010a004dac(&plStack_78);
      pppuVar10 = pppuVar9;
      __Unwind_Resume();
      pcStack_88 = FUN_10a05e740;
      pppuStack_a0 = pppuVar9;
      ppcStack_98 = ppcVar8;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_b0,pppuVar10 + 1,*pppuVar10);
      func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar10);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      (**(code **)(**pppuVar10 + 0x30))(&puStack_b0);
      FUN_10a05e824(*pppuVar10,&puStack_b0,&puStack_a8);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      if (puStack_a8 != (undefined8 *)0x0) {
        (**(code **)*puStack_a8)();
      }
      return;
    }
    if (ppcVar11 != (code **)0x0 && *(char *)(ppcVar11 + 8) == '\x01') {
LAB_10a9460a0:
                    /* WARNING: Could not recover jumptable at 0x00010a9460b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar11)();
      return;
    }
  }
  else if (*(long *)(param_1 + 0x218) == 0) {
    ppcVar11 = (code **)*param_3;
    if (ppcVar11 != (code **)0x0 && *(char *)(ppcVar11 + 8) == '\x02') goto LAB_10a9460cc;
    if ((ppcVar11 != (code **)0x0) && (*(char *)(ppcVar11 + 8) == '\x01')) goto LAB_10a9460a0;
  }
  else {
    uStack_3f = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    pcStack_58 = (code *)0x0;
    ppuStack_60 = (undefined **)0x0;
    uStack_48 = 0;
    uStack_47 = 0;
    pcStack_50 = (code *)0x0;
    plStack_78 = (long *)0x0;
    uStack_80 = 0;
    pcStack_68 = (code *)0x0;
    uStack_70 = 0;
    FUN_10a9460f8(&uStack_80);
    func_0x00010a2e268c(&uStack_70,param_3);
    pcVar1 = pcStack_58;
    ppuStack_60 = *(undefined ***)(param_1 + 0x208);
    pcVar12 = *(code **)(param_1 + 0x210);
    if (pcVar12 != (code *)0x0) {
      plVar7 = (long *)((long)pcVar12 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (pcStack_58 != (code *)0x0) {
      plVar7 = (long *)((long)pcStack_58 + 8);
      do {
        lVar13 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        lVar13 = *(long *)pcStack_58;
        pcStack_58 = pcVar12;
        (**(code **)(lVar13 + 0x10))(pcVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar1);
        pcVar12 = pcStack_58;
      }
    }
    pcStack_58 = pcVar12;
    func_0x00010a946174(&pcStack_50,*(undefined8 *)(param_1 + 0x218),
                        *(undefined8 *)(param_1 + 0x220));
    (**(code **)(**(long **)(param_1 + 0x208) + 0x30))(&pcStack_88);
    plVar7 = (long *)CONCAT71(uStack_3f,uStack_40);
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar14 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    uStack_40 = SUB81(pcStack_88,0);
    uStack_3f = (undefined7)((ulong)pcStack_88 >> 8);
    func_0x00010a9461e8(param_1 + 0x230,&uStack_80);
    func_0x00010a944ddc(param_1 + 0x208);
    plVar7 = (long *)CONCAT71(uStack_3f,uStack_40);
    if (plVar7 != (long *)0x0) {
      puVar2 = (ulong *)(plVar7 + 1);
      do {
        uVar14 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar14 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar14 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
    }
    plVar7 = (long *)CONCAT71(uStack_47,uStack_48);
    if (plVar7 != (long *)0x0) {
      plVar3 = plVar7 + 1;
      do {
        lVar13 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    pcVar1 = pcStack_58;
    if (pcStack_58 != (code *)0x0) {
      plVar7 = (long *)((long)pcStack_58 + 8);
      do {
        lVar13 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*(long *)pcStack_58 + 0x10))(pcStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar1);
      }
    }
    pcVar1 = pcStack_68;
    if (pcStack_68 != (code *)0x0) {
      pcVar12 = pcStack_68 + 8;
      do {
        lVar13 = *(long *)pcVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
        if (bVar5) {
          *(long *)pcVar12 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*(long *)pcStack_68 + 0x10))(pcStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar1);
      }
    }
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar13 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  return;
}



/* Entry: 10a9460f8; end: 10a9462df;  */

undefined8 * FUN_10a9460f8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a9462e0; end: 10a9464e7;  */

void FUN_10a9462e0(long param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong *puVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  code **ppcVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  code **ppcVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined ***pppuStack_a0;
  code **ppcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  code *pcStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  
  if (*(long *)(param_1 + 0x218) == 0) {
    ppcVar12 = (code **)*param_3;
    if (ppcVar12 != (code **)0x0 && *(char *)(ppcVar12 + 8) == '\x02') {
      lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      ppcVar9 = ppcVar12;
      FUN_10a688b40();
      if (ppcVar9 == (code **)0x0) {
        pppuVar10 = (undefined ***)0x0;
        if (param_2 != 0) {
          pcStack_50 = ppcVar12[1];
          pcStack_58 = *ppcVar12;
          if (ppcVar12[1] != (code *)0x0) {
            pcVar1 = ppcVar12[1] + 8;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar6) {
                *(long *)pcVar1 = *(long *)pcVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pcStack_68 = FUN_10a05e8a0;
          ppuStack_60 = &PTR_DAT_110b9fa70;
          ppcVar9 = &pcStack_68;
          plStack_78 = (long *)0x0;
          uStack_70 = 0;
          FUN_10a4634ec(param_2,&pcStack_68);
          pppuVar10 = &ppuStack_60;
          (*(code *)*ppuStack_60)();
        }
      }
      else {
        *ppcVar9 = (code *)CONCAT44((int)((ulong)*ppcVar9 >> 0x20) + 1,(int)*ppcVar9 + 1);
        pppuVar10 = (undefined ***)*ppcVar12;
        FUN_10a05e740();
        iVar7 = *(int *)((long)ppcVar9 + 4) + -1;
        *(int *)((long)ppcVar9 + 4) = iVar7;
        if (iVar7 == 0) {
          *(undefined4 *)ppcVar9 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
        return;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_60)(ppcVar9 + 1);
      func_0x00010a004dac(&plStack_78);
      pppuVar11 = pppuVar10;
      __Unwind_Resume();
      pcStack_88 = FUN_10a05e740;
      pppuStack_a0 = pppuVar10;
      ppcStack_98 = ppcVar9;
      puStack_90 = &stack0xfffffffffffffff0;
      func_0x000109884c0c(&puStack_b0,pppuVar11 + 1,*pppuVar11);
      func_0x000109884820(&puStack_a8,&puStack_b0,*pppuVar11);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      (**(code **)(**pppuVar11 + 0x30))(&puStack_b0);
      FUN_10a05e824(*pppuVar11,&puStack_b0,&puStack_a8);
      if (puStack_b0 != (undefined8 *)0x0) {
        (**(code **)*puStack_b0)();
      }
      if (puStack_a8 != (undefined8 *)0x0) {
        (**(code **)*puStack_a8)();
      }
      return;
    }
    if (ppcVar12 != (code **)0x0 && *(char *)(ppcVar12 + 8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010a9464d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**ppcVar12)();
      return;
    }
  }
  else {
    uStack_3f = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    pcStack_58 = (code *)0x0;
    ppuStack_60 = (undefined **)0x0;
    uStack_48 = 0;
    uStack_47 = 0;
    pcStack_50 = (code *)0x0;
    plStack_78 = (long *)0x0;
    uStack_80 = 0;
    pcStack_68 = (code *)0x0;
    uStack_70 = 0;
    FUN_10a9460f8(&uStack_80);
    func_0x00010a2e268c(&uStack_70,param_3);
    func_0x00010a946174(&pcStack_50,*(undefined8 *)(param_1 + 0x218),
                        *(undefined8 *)(param_1 + 0x220));
    func_0x00010a9461e8(param_1 + 0x230,&uStack_80);
    plVar8 = (long *)CONCAT71(uStack_3f,uStack_40);
    if (plVar8 != (long *)0x0) {
      puVar2 = (ulong *)(plVar8 + 1);
      do {
        uVar13 = *puVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar6) {
          *puVar2 = uVar13 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar6) {
            *puVar2 = uVar13 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)CONCAT71(uStack_47,uStack_48);
    if (plVar8 != (long *)0x0) {
      plVar3 = plVar8 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    pcVar1 = pcStack_58;
    if (pcStack_58 != (code *)0x0) {
      plVar8 = (long *)((long)pcStack_58 + 8);
      do {
        lVar14 = *plVar8;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_58 + 0x10))(pcStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar1);
      }
    }
    pcVar1 = pcStack_68;
    if (pcStack_68 != (code *)0x0) {
      pcVar4 = pcStack_68 + 8;
      do {
        lVar14 = *(long *)pcVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
        if (bVar6) {
          *(long *)pcVar4 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)pcStack_68 + 0x10))(pcStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar1);
      }
    }
    plVar8 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar3 = plStack_78 + 1;
      do {
        lVar14 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  return;
}



/* Entry: 10a9464e8; end: 10a94650b;  */

undefined8 **** FUN_10a9464e8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char *pcVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *extraout_x8;
  long lVar9;
  long *plVar10;
  undefined8 ***pppuVar11;
  undefined8 uVar12;
  undefined8 ***apppuStack_a8 [2];
  char cStack_91;
  undefined8 ***pppuStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined1 uStack_41;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    uVar12 = param_2[1];
    pppuVar11 = (undefined8 ***)*param_2;
    if (param_2[1] != 0) {
      plVar10 = (long *)(param_2[1] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar10 = *(long **)(param_1 + 0x200);
    *(undefined8 *)(param_1 + 0x200) = uVar12;
    *(undefined8 ****)(param_1 + 0x1f8) = pppuVar11;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 1;
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
        (**(code **)(*plVar10 + 0x10))(plVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    return (undefined8 ****)(param_1 + 0x1f8);
  }
  puVar6 = &UNK_10f68429c;
  FUN_10a00946c();
  FUN_10a3c829c(&pppuStack_60);
  pcVar2 = "false";
  if (*(long *)(puVar6 + 0x208) != 0) {
    pcVar2 = "true";
  }
  func_0x000107c2b054(&pppuStack_78,pcVar2);
  uVar3 = uStack_58;
  if (-1 < (char)bStack_49) {
    uVar3 = (ulong)bStack_49;
  }
  FUN_10a003c90(apppuStack_a8,uVar3 + 2,&uStack_41);
  ppppuVar7 = (undefined8 ****)apppuStack_a8[0];
  if (-1 < cStack_91) {
    ppppuVar7 = apppuStack_a8;
  }
  if (uVar3 != 0) {
    ppppuVar8 = (undefined8 ****)pppuStack_60;
    if (-1 < (char)bStack_49) {
      ppppuVar8 = &pppuStack_60;
    }
    _memmove(ppppuVar7,ppppuVar8,uVar3);
  }
  *(undefined2 *)((long)ppppuVar7 + uVar3) = 0x202c;
  *(undefined1 *)((undefined2 *)((long)ppppuVar7 + uVar3) + 1) = 0;
  ppppuVar7 = apppuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar7,&UNK_10f6842cc,0xd);
  ppuStack_88 = ppppuVar7[1];
  pppuStack_90 = *ppppuVar7;
  ppuStack_80 = ppppuVar7[2];
  ppppuVar7[1] = (undefined8 ***)0x0;
  ppppuVar7[2] = (undefined8 ***)0x0;
  *ppppuVar7 = (undefined8 ***)0x0;
  ppppuVar7 = (undefined8 ****)pppuStack_78;
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
    ppppuVar7 = &pppuStack_78;
  }
  ppppuVar8 = &pppuStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar8,ppppuVar7,uStack_70);
  pppuVar11 = *ppppuVar8;
  extraout_x8[1] = ppppuVar8[1];
  *extraout_x8 = pppuVar11;
  extraout_x8[2] = ppppuVar8[2];
  ppppuVar8[1] = (undefined8 ***)0x0;
  ppppuVar8[2] = (undefined8 ***)0x0;
  *ppppuVar8 = (undefined8 ***)0x0;
  if ((long)ppuStack_80 < 0) {
    ppppuVar8 = (undefined8 ****)pppuStack_90;
    __ZdlPv(pppuStack_90);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(apppuStack_a8[0]);
    ppppuVar8 = (undefined8 ****)apppuStack_a8[0];
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(pppuStack_78);
    ppppuVar8 = (undefined8 ****)pppuStack_78;
  }
  if ((char)bStack_49 < '\0') {
    __ZdlPv(pppuStack_60);
    ppppuVar8 = (undefined8 ****)pppuStack_60;
  }
  return ppppuVar8;
}



/* Entry: 10a94650c; end: 10a9466df;  */

void FUN_10a94650c(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 **appuStack_98 [2];
  char cStack_81;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined1 uStack_31;
  
  FUN_10a3c829c(&ppuStack_50);
  pcVar1 = "false";
  if (*(long *)(param_2 + 0x208) != 0) {
    pcVar1 = "true";
  }
  func_0x000107c2b054(&ppuStack_68,pcVar1);
  uVar2 = uStack_48;
  if (-1 < (char)bStack_39) {
    uVar2 = (ulong)bStack_39;
  }
  FUN_10a003c90(appuStack_98,uVar2 + 2,&uStack_31);
  pppuVar4 = (undefined8 ***)appuStack_98[0];
  if (-1 < cStack_81) {
    pppuVar4 = appuStack_98;
  }
  if (uVar2 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_50;
    if (-1 < (char)bStack_39) {
      pppuVar3 = &ppuStack_50;
    }
    _memmove(pppuVar4,pppuVar3,uVar2);
  }
  *(undefined2 *)((long)pppuVar4 + uVar2) = 0x202c;
  *(undefined1 *)((undefined2 *)((long)pppuVar4 + uVar2) + 1) = 0;
  pppuVar4 = appuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,&UNK_10f6842cc,0xd);
  puStack_78 = pppuVar4[1];
  puStack_80 = *pppuVar4;
  puStack_70 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  pppuVar4 = (undefined8 ***)ppuStack_68;
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
    pppuVar4 = &ppuStack_68;
  }
  ppuVar5 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,pppuVar4,uStack_60);
  puVar6 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = puVar6;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(appuStack_98[0]);
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(ppuStack_68);
  }
  if ((char)bStack_39 < '\0') {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 10a9466e0; end: 10a9466e7;  */

void FUN_10a9466e0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 **appuStack_98 [2];
  char cStack_81;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined1 uStack_31;
  
  FUN_10a3c829c(&ppuStack_50);
  pcVar1 = "false";
  if (*(long *)(param_2 + 0x1f8) != 0) {
    pcVar1 = "true";
  }
  func_0x000107c2b054(&ppuStack_68,pcVar1);
  uVar2 = uStack_48;
  if (-1 < (char)bStack_39) {
    uVar2 = (ulong)bStack_39;
  }
  FUN_10a003c90(appuStack_98,uVar2 + 2,&uStack_31);
  pppuVar4 = (undefined8 ***)appuStack_98[0];
  if (-1 < cStack_81) {
    pppuVar4 = appuStack_98;
  }
  if (uVar2 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_50;
    if (-1 < (char)bStack_39) {
      pppuVar3 = &ppuStack_50;
    }
    _memmove(pppuVar4,pppuVar3,uVar2);
  }
  *(undefined2 *)((long)pppuVar4 + uVar2) = 0x202c;
  *(undefined1 *)((undefined2 *)((long)pppuVar4 + uVar2) + 1) = 0;
  pppuVar4 = appuStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar4,&UNK_10f6842cc,0xd);
  puStack_78 = pppuVar4[1];
  puStack_80 = *pppuVar4;
  puStack_70 = pppuVar4[2];
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[2] = (undefined8 **)0x0;
  *pppuVar4 = (undefined8 **)0x0;
  pppuVar4 = (undefined8 ***)ppuStack_68;
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
    pppuVar4 = &ppuStack_68;
  }
  ppuVar5 = &puStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,pppuVar4,uStack_60);
  puVar6 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = puVar6;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  if ((long)puStack_70 < 0) {
    __ZdlPv(puStack_80);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(appuStack_98[0]);
  }
  if ((char)bStack_51 < '\0') {
    __ZdlPv(ppuStack_68);
  }
  if ((char)bStack_39 < '\0') {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 10a9466e8; end: 10a946837;  */

undefined8 * FUN_10a9466e8(undefined8 *param_1)

{
  (**(code **)param_1[8])();
  *param_1 = &PTR_DAT_110c30750;
  param_1[0x1d] = &PTR_FUN_110c307c8;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  return param_1;
}



/* Entry: 10a946838; end: 10a946897;  */

void FUN_10a946838(long param_1,long param_2)

{
  undefined1 uStack_29;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
      *(undefined1 *)(param_2 + 0x48) = 1;
    }
    param_2 = param_2 + 0x20;
    lStack_28 = param_1 + 0x7c;
    FUN_10aae6e98(param_2,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
    FUN_10a22c4c8(param_2 + 0x18,param_1 + 0x80,param_1 + 0x80);
    return;
  }
  return;
}



/* Entry: 10a946898; end: 10a946a6f;  */

void FUN_10a946898(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lStack_50;
  long *plStack_48;
  ulong uStack_40;
  byte bStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar11 = *(long *)(param_2 + 0x58);
  if (*(char *)(param_1 + 0x78) != '\x01' || lVar11 == 0) {
    return;
  }
  if (*(long *)(lVar11 + 8) == *(long *)(param_1 + 0xe0)) {
    return;
  }
  FUN_10aad301c(&lStack_50,lVar11,param_1 + 0x7c);
  if (bStack_38 == 1 && lStack_50 != 0) {
    uVar5 = *(undefined8 *)(lVar11 + 8);
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
    uVar7 = *(ulong *)(param_1 + 0x30);
    uVar8 = uVar7 >> 0x20;
    if (0 < (int)(uint)uStack_40) {
      uVar9 = (uint)(uStack_40 >> 0x20);
      if (0 < (int)uVar9) {
        uVar10 = (uint)(uVar7 >> 0x20);
        uVar6 = (uint)uVar7;
        if ((long)(int)uVar10 * (long)(int)((uint)uStack_40 & 0x7fffffff) <
            (long)((long)(int)uVar6 * (uStack_40 >> 0x20))) {
          uVar9 = (uint)(long)(((double)(int)uVar6 * (double)uVar9) /
                              (double)(uStack_40 & 0xffffffff));
          if ((int)uVar9 <= (int)uVar10) {
            uVar9 = uVar10;
          }
          uVar8 = (ulong)uVar9;
        }
        else {
          uVar9 = (uint)(long)(((double)(uStack_40 & 0xffffffff) * (double)(int)uVar10) /
                              (double)uVar9);
          if ((int)uVar9 <= (int)uVar6) {
            uVar9 = uVar6;
          }
          uVar7 = (ulong)uVar9;
        }
      }
    }
    if ((*(int *)(param_1 + 0x84) != (int)uVar7) || (*(int *)(param_1 + 0x88) != (int)uVar8)) {
      *(ulong *)(param_1 + 0x84) = uVar7 & 0xffffffff | uVar8 << 0x20;
      goto LAB_10a946a18;
    }
    lStack_30 = lStack_50;
    plStack_28 = plStack_48;
    lStack_50 = 0;
    plStack_48 = (long *)0x0;
    (**(code **)(param_1 + 0x38))(&lStack_30,uVar5,(undefined8 *)(param_1 + 0x38));
    plVar4 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar11 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    bStack_38 = bStack_38 & 1;
  }
  if (bStack_38 == 0) {
    return;
  }
LAB_10a946a18:
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar11 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a946a70; end: 10a946abb;  */

/* WARNING: Removing unreachable block (ram,0x00010a946a9c) */

void FUN_10a946a70(long *param_1)

{
  long lVar1;
  
  for (lVar1 = param_1[1]; lVar1 != *param_1; lVar1 = lVar1 + -0x20) {
  }
  param_1[1] = *param_1;
  return;
}



/* Entry: 10a946abc; end: 10a946b97;  */

long FUN_10a946abc(long param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    puVar2 = (ulong *)(plVar5 + 1);
    do {
      uVar7 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar7 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar7 & 0x1fffffffc) == 4) {
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar7 - 1 == 0) {
        (**(code **)(*plVar5 + 8))();
      }
    }
  }
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a946b98; end: 10a946c5b;  */

long * FUN_10a946b98(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar5 = param_1;
  }
  else {
    lVar8 = (long)puVar2 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a94fa30();
      func_0x00010a94fa00(param_1 + 4);
      if (*(char *)((long)param_1 + 0x1f) < '\0') {
        __ZdlPv(param_1[1]);
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_10a94fa44();
    lVar3 = *param_1;
    puVar2 = (undefined8 *)((long)plVar4 + lVar8);
    lVar8 = (long)puVar2 - (param_1[1] - lVar3);
    puVar9 = puVar2 + 1;
    *puVar2 = *param_2;
    _memcpy(lVar8,lVar3);
    plVar5 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar4 + uVar7);
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar5;
}



/* Entry: 10a946c5c; end: 10a946c93;  */

long FUN_10a946c5c(long param_1)

{
  func_0x00010a94fa00(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a946c94; end: 10a946d37;  */

undefined8 FUN_10a946c94(void)

{
  return 0x100;
}



/* Entry: 10a946d38; end: 10a946dfb;  */

void FUN_10a946d38(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  puStack_90 = (undefined1 *)0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,1);
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_60 = 0x17c00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a946dfc(param_1,&puStack_98);
  puStack_a0 = &UNK_10f683db2;
  puStack_98 = &UNK_10f68441f;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  FUN_10a956c2c();
  func_0x00010a95922c(param_1);
  return;
}



/* Entry: 10a946dfc; end: 10a946ed3;  */

/* WARNING: Removing unreachable block (ram,0x00010a946e94) */

undefined1  [16] FUN_10a946dfc(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6851aa,0x1f);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a956b30(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a946ed4; end: 10a946f73;  */

undefined8 * FUN_10a946ed4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c2fed0;
  puVar1[2] = &PTR_DAT_110c2ff70;
  puVar1[7] = &PTR_DAT_110c2ffc8;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x1c] = puVar1 + 3;
  param_1[0x1d] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x1c);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  return param_1;
}



/* Entry: 10a946f74; end: 10a946fbf;  */

undefined8 * FUN_10a946f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2fed0;
  param_1[2] = &PTR_DAT_110c2ff70;
  param_1[7] = &PTR_DAT_110c2ffc8;
  func_0x00010a9592e8(param_1 + 0x1e);
  func_0x00010a004e5c(param_1 + 0x1c);
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



/* Entry: 10a946fc0; end: 10a946fd3;  */

undefined8 * FUN_10a946fc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c2fed0;
  param_1[2] = &PTR_DAT_110c2ff70;
  param_1[7] = &PTR_DAT_110c2ffc8;
  func_0x00010a9592e8(param_1 + 0x1e);
  func_0x00010a004e5c(param_1 + 0x1c);
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



/* Entry: 10a946fd4; end: 10a947017;  */

void FUN_10a946fd4(void)

{
  FUN_10a946f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a947018; end: 10a94702f;  */

void FUN_10a947018(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 0xe0);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110c30818);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a947030; end: 10a948463;  */

void FUN_10a947030(long *param_1,long param_2)

{
  undefined **ppuVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined8 uVar24;
  char acStack_520 [8];
  undefined8 uStack_518;
  char cStack_501;
  undefined1 auStack_500 [8];
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_450;
  long *plStack_448;
  code *pcStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined8 uStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  code *pcStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  code *pcStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  code *pcStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **appuStack_2f0 [6];
  undefined8 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  code *pcStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  code *pcStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  code *pcStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **appuStack_1b0 [6];
  undefined8 uStack_180;
  undefined8 *apuStack_178 [7];
  code *pcStack_140;
  undefined8 *apuStack_138 [7];
  code *pcStack_100;
  undefined8 *apuStack_f8 [7];
  code *pcStack_c0;
  undefined8 *apuStack_b8 [8];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_2 + 0xf0) == 0) ||
     (*(char *)(*(long *)(*(long *)(param_2 + 0xf0) + 200) + 0x1e0) == '\0')) {
    ppuVar23 = *(undefined ***)(param_2 + 0x50);
    FUN_10a948ffc(acStack_520);
    ppuVar12 = (undefined **)0x150;
    __Znwm();
    *ppuVar12 = (undefined *)&PTR_DAT_110b17898;
    ppuVar12[2] = (undefined *)0x0;
    ppuVar12[1] = (undefined *)0x0;
    ppuVar12[4] = (undefined *)0x0;
    ppuVar12[3] = (undefined *)0x0;
    FUN_10a03c0d0(ppuVar12 + 5);
    FUN_10a03e114(ppuVar12 + 9);
    *ppuVar12 = (undefined *)&PTR_FUN_110c30040;
    ppuVar12[5] = (undefined *)&PTR_DAT_110c300a8;
    ppuVar12[9] = (undefined *)&PTR_DAT_110c300d0;
    puVar13 = (undefined8 *)0x98;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_FUN_110b9a070;
    puVar13[0xd] = 0;
    puVar13[0xc] = 0;
    puVar13[0xf] = 0;
    puVar13[0xe] = 0;
    puVar13[0x11] = 0;
    puVar13[0x10] = 0;
    puVar13[0x12] = 0;
    puVar13[3] = &PTR_FUN_110b9a0c0;
    puVar13[9] = 0;
    puVar13[8] = 0;
    puVar13[0xb] = 0;
    puVar13[10] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    *(undefined4 *)(puVar13 + 10) = 0x3f800000;
    puVar13[0xb] = FUN_10a004c4c;
    puVar13[0xc] = &PTR_DAT_110ae9180;
    ppuVar12[0xd] = (undefined *)(puVar13 + 3);
    ppuVar12[0xe] = (undefined *)puVar13;
    puVar13 = (undefined8 *)0x98;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_FUN_110c310a0;
    puVar13[0xd] = 0;
    puVar13[0xc] = 0;
    puVar13[0xf] = 0;
    puVar13[0xe] = 0;
    puVar13[0x11] = 0;
    puVar13[0x10] = 0;
    puVar13[3] = &PTR_FUN_110c310f0;
    puVar13[0x12] = 0;
    puVar13[9] = 0;
    puVar13[8] = 0;
    puVar13[0xb] = 0;
    puVar13[10] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    *(undefined4 *)(puVar13 + 10) = 0x3f800000;
    puVar13[0xb] = FUN_10a95cb20;
    puVar13[0xc] = &PTR_DAT_110ae9180;
    ppuVar12[0xf] = (undefined *)(puVar13 + 3);
    ppuVar12[0x10] = (undefined *)puVar13;
    puVar13 = (undefined8 *)0x98;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_FUN_110b9a070;
    puVar13[0xd] = 0;
    puVar13[0xc] = 0;
    puVar13[0xf] = 0;
    puVar13[0xe] = 0;
    puVar13[0x11] = 0;
    puVar13[0x10] = 0;
    puVar13[0x12] = 0;
    puVar13[3] = &PTR_FUN_110b9a0c0;
    puVar13[9] = 0;
    puVar13[8] = 0;
    puVar13[0xb] = 0;
    puVar13[10] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    *(undefined4 *)(puVar13 + 10) = 0x3f800000;
    puVar13[0xb] = FUN_10a004c4c;
    puVar13[0xc] = &PTR_DAT_110ae9180;
    ppuVar12[0x11] = (undefined *)(puVar13 + 3);
    ppuVar12[0x12] = (undefined *)puVar13;
    puVar13 = (undefined8 *)0x98;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_FUN_110c31148;
    puVar13[0xd] = 0;
    puVar13[0xc] = 0;
    puVar13[0xf] = 0;
    puVar13[0xe] = 0;
    puVar13[0x11] = 0;
    puVar13[0x10] = 0;
    puVar13[3] = &PTR_FUN_110c31198;
    puVar13[0x12] = 0;
    puVar13[9] = 0;
    puVar13[8] = 0;
    puVar13[0xb] = 0;
    puVar13[10] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    *(undefined4 *)(puVar13 + 10) = 0x3f800000;
    puVar13[0xb] = FUN_10a95ce84;
    puVar13[0xc] = &PTR_DAT_110ae9180;
    ppuVar12[0x13] = (undefined *)(puVar13 + 3);
    ppuVar12[0x14] = (undefined *)puVar13;
    puVar13 = (undefined8 *)0x98;
    __Znwm();
    puVar13[1] = 0;
    puVar13[2] = 0;
    *puVar13 = &PTR_FUN_110c31148;
    puVar13[0xd] = 0;
    puVar13[0xc] = 0;
    puVar13[0xf] = 0;
    puVar13[0xe] = 0;
    puVar13[0x11] = 0;
    puVar13[0x10] = 0;
    puVar13[3] = &PTR_FUN_110c31198;
    puVar13[0x12] = 0;
    puVar13[9] = 0;
    puVar13[8] = 0;
    puVar13[0xb] = 0;
    puVar13[10] = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    *(undefined4 *)(puVar13 + 10) = 0x3f800000;
    puVar13[0xb] = FUN_10a95ce84;
    puVar13[0xc] = &PTR_DAT_110ae9180;
    ppuVar12[0x18] = (undefined *)0x0;
    ppuVar12[0x17] = (undefined *)0x0;
    ppuVar12[0x15] = (undefined *)(puVar13 + 3);
    ppuVar12[0x16] = (undefined *)puVar13;
    ppuVar12[0x1c] = (undefined *)0x0;
    ppuVar12[0x1b] = (undefined *)0x0;
    ppuVar17 = ppuVar12 + 0x1d;
    ppuVar12[0x1e] = (undefined *)0x0;
    *ppuVar17 = (undefined *)0x0;
    *(undefined8 *)((long)ppuVar12 + 0xfc) = 0;
    *(undefined8 *)((long)ppuVar12 + 0xf4) = 0;
    ppuVar12[0x1a] = (undefined *)0x0;
    ppuVar12[0x19] = (undefined *)0x0;
    ppuVar12[0x27] = (undefined *)0x0;
    ppuVar12[0x24] = (undefined *)0x0;
    ppuVar12[0x23] = (undefined *)0x0;
    ppuVar12[0x26] = (undefined *)0x0;
    ppuVar12[0x25] = (undefined *)0x0;
    ppuVar12[0x22] = (undefined *)0x0;
    ppuVar12[0x21] = (undefined *)0x0;
    ppuVar12[0x28] = (undefined *)0xffffffff;
    ppuVar12[0x29] = (undefined *)0x0;
    FUN_10a5ae998(ppuVar12[6],&PTR_DAT_110b9f988,ppuVar23,ppuVar12 + 5);
    FUN_10a5ae998(ppuVar12[10],&PTR_DAT_110b9fab0,ppuVar23,ppuVar12 + 9);
    pcStack_440 = FUN_10a95d0c4;
    ppuStack_438 = &PTR_FUN_110c311e0;
    uStack_400 = 0x10a95d1d4;
    ppuStack_3f8 = &PTR_DAT_110c311f8;
    pcStack_3c0 = FUN_10a95d1fc;
    ppuStack_3b8 = &PTR_FUN_110c31210;
    pcStack_380 = FUN_10a95d92c;
    ppuStack_378 = &PTR_FUN_110c31228;
    pcStack_340 = FUN_10a95da58;
    ppuStack_338 = &PTR_FUN_110c31240;
    puVar13 = (undefined8 *)0x298;
    ppuStack_430 = ppuVar12;
    ppuStack_3f0 = ppuVar12;
    ppuStack_3b0 = ppuVar12;
    ppuStack_370 = ppuVar12;
    ppuStack_330 = ppuVar12;
    __Znwm();
    ppuStack_300 = (undefined **)FUN_10a95d0c4;
    ppuStack_2f8 = &PTR_FUN_110c311e0;
    uStack_2c0 = 0x10a95d1d4;
    ppuStack_2b8 = &PTR_DAT_110c311f8;
    pcStack_280 = FUN_10a95d1fc;
    ppuStack_278 = &PTR_FUN_110c31210;
    pcStack_240 = FUN_10a95d92c;
    ppuStack_238 = &PTR_FUN_110c31228;
    pcStack_200 = FUN_10a95da58;
    ppuStack_1f8 = &PTR_FUN_110c31240;
    auStack_500[0] = 1;
    appuStack_2f0[0] = ppuVar12;
    ppuStack_2b0 = ppuVar12;
    ppuStack_270 = ppuVar12;
    ppuStack_230 = ppuVar12;
    ppuStack_1f0 = ppuVar12;
    func_0x000107c2b054(&uStack_4f8,&UNK_10f68485f);
    func_0x000107c2b054(&uStack_4e0,"v2");
    func_0x000107c2b054(&uStack_4c8,&UNK_10f684870);
    func_0x000107c2b054(&uStack_4b0,&UNK_10f684895);
    uStack_498 = 500;
    uStack_488 = 0x1e00000002;
    uStack_490 = 0x20000000120;
    uStack_478 = 0x200000004;
    uStack_480 = 0x100000000;
    ppuStack_1c0 = ppuStack_300;
    (*(code *)ppuStack_2f8[2])(&ppuStack_1b8,&ppuStack_2f8);
    uStack_180 = uStack_2c0;
    (*(code *)ppuStack_2b8[2])(apuStack_178,&ppuStack_2b8);
    pcStack_140 = pcStack_280;
    (*(code *)ppuStack_278[2])(apuStack_138,&ppuStack_278);
    pcStack_100 = pcStack_240;
    (*(code *)ppuStack_238[2])(apuStack_f8,&ppuStack_238);
    pcStack_c0 = pcStack_200;
    (*(code *)ppuStack_1f8[2])(apuStack_b8,&ppuStack_1f8);
    *puVar13 = &PTR_FUN_110c300f8;
    puVar13[1] = ppuVar23;
    *(undefined1 *)(puVar13 + 2) = auStack_500[0];
    puVar13[4] = uStack_4f0;
    puVar13[3] = uStack_4f8;
    puVar13[5] = lStack_4e8;
    uStack_4f0 = 0;
    uStack_4f8 = 0;
    lStack_4e8 = 0;
    puVar13[7] = uStack_4d8;
    puVar13[6] = uStack_4e0;
    puVar13[8] = lStack_4d0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    lStack_4d0 = 0;
    puVar13[10] = uStack_4c0;
    puVar13[9] = uStack_4c8;
    puVar13[0xb] = lStack_4b8;
    lStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4c8 = 0;
    puVar13[0xe] = lStack_4a0;
    puVar13[0xd] = uStack_4a8;
    puVar13[0xc] = uStack_4b0;
    lStack_4a0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    puVar13[0x13] = uStack_478;
    puVar13[0x12] = uStack_480;
    puVar13[0x11] = uStack_488;
    puVar13[0x10] = uStack_490;
    puVar13[0xf] = uStack_498;
    puVar13[0x14] = ppuStack_1c0;
    (*(code *)ppuStack_1b8[2])(puVar13 + 0x15,&ppuStack_1b8);
    puVar13[0x1c] = uStack_180;
    (*(code *)apuStack_178[0][2])(puVar13 + 0x1d,apuStack_178);
    puVar13[0x24] = pcStack_140;
    (*(code *)apuStack_138[0][2])(puVar13 + 0x25,apuStack_138);
    puVar13[0x2c] = pcStack_100;
    (*(code *)apuStack_f8[0][2])(puVar13 + 0x2d,apuStack_f8);
    puVar13[0x34] = pcStack_c0;
    (*(code *)apuStack_b8[0][2])(puVar13 + 0x35,apuStack_b8);
    *(undefined1 *)(puVar13 + 0x3c) = 0;
    *(undefined1 *)(puVar13 + 0x3d) = 0;
    *(undefined1 *)(puVar13 + 0x41) = 0;
    puVar13[0x42] = 0;
    puVar13[0x44] = 0;
    puVar13[0x43] = 0;
    uVar19 = 0;
    uVar24 = 0;
    if (ppuVar23 != (undefined **)0x0) {
      plVar14 = (long *)0x168;
      __Znwm();
      plVar14[1] = 0;
      plVar14[2] = 0;
      *plVar14 = (long)&PTR_FUN_110b9f278;
      plVar16 = plVar14 + 3;
      FUN_10a343ec8(plVar16,ppuVar23,puVar13 + 9,1);
      plStack_450 = plVar16;
      plStack_448 = plVar14;
      FUN_10a081db8(&plStack_450,plVar14 + 8,plVar16);
      FUN_10a081b54(&uStack_470,&plStack_450);
      plVar16 = plStack_448;
      uVar19 = uStack_470;
      uVar24 = uStack_468;
      if (plStack_448 != (long *)0x0) {
        plVar14 = plStack_448 + 1;
        do {
          lVar21 = *plVar14;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar21 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plStack_448 + 0x10))(plStack_448);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          uVar19 = uStack_470;
          uVar24 = uStack_468;
        }
      }
    }
    uStack_470 = 0;
    uStack_468 = 0;
    puVar13[0x46] = uVar24;
    puVar13[0x45] = uVar19;
    *(undefined1 *)(puVar13 + 0x4d) = 0;
    puVar13[0x48] = 0;
    puVar13[0x47] = 0;
    puVar13[0x4a] = 0;
    puVar13[0x49] = 0;
    *(undefined8 *)((long)puVar13 + 0x259) = 0;
    *(undefined8 *)((long)puVar13 + 0x251) = 0;
    puVar13[0x4e] = 0;
    puVar13[0x50] = 0;
    puVar13[0x4f] = 0;
    puVar15 = (undefined8 *)0x78;
    __Znwm();
    puVar15[1] = 0;
    puVar15[2] = 0;
    *puVar15 = &PTR_DAT_110c312e8;
    puVar15[3] = 0x32aaaba7;
    puVar15[0xb] = 0;
    puVar15[0xc] = 0;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[7] = 0;
    puVar15[6] = 0;
    puVar15[9] = 0;
    puVar15[8] = 0;
    *(undefined8 *)((long)puVar15 + 0x51) = 0;
    *(undefined8 *)((long)puVar15 + 0x49) = 0;
    puVar13[0x51] = puVar15 + 3;
    puVar13[0x52] = puVar15;
    (*(code *)*apuStack_b8[0])(apuStack_b8);
    (*(code *)*apuStack_f8[0])(apuStack_f8);
    (*(code *)*apuStack_138[0])(apuStack_138);
    (*(code *)*apuStack_178[0])(apuStack_178);
    (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
    if (lStack_4a0 < 0) {
      __ZdlPv(uStack_4b0);
    }
    if (lStack_4b8 < 0) {
      __ZdlPv(uStack_4c8);
    }
    if (lStack_4d0 < 0) {
      __ZdlPv(uStack_4e0);
    }
    if (lStack_4e8 < 0) {
      __ZdlPv(uStack_4f8);
    }
    (*(code *)*ppuStack_1f8)(&ppuStack_1f8);
    (*(code *)*ppuStack_238)(&ppuStack_238);
    (*(code *)*ppuStack_278)(&ppuStack_278);
    (*(code *)*ppuStack_2b8)(&ppuStack_2b8);
    (*(code *)*ppuStack_2f8)(&ppuStack_2f8);
    plVar16 = (long *)ppuVar12[0x19];
    ppuVar12[0x19] = (undefined *)puVar13;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    (*(code *)*ppuStack_338)(&ppuStack_338);
    (*(code *)*ppuStack_378)(&ppuStack_378);
    (*(code *)*ppuStack_3b8)(&ppuStack_3b8);
    (*(code *)*ppuStack_3f8)(&ppuStack_3f8);
    (*(code *)*ppuStack_438)(&ppuStack_438);
    puVar22 = ppuVar12[0x19];
    puVar13 = (undefined8 *)0x30;
    __Znwm();
    uVar5 = *(undefined4 *)(puVar22 + 0x9c);
    uVar6 = *(uint *)(puVar22 + 0x94);
    *puVar13 = *(undefined8 *)(puVar22 + 0x80);
    *(undefined4 *)(puVar13 + 1) = uVar5;
    if ((int)uVar6 < 2) {
      uVar6 = 1;
    }
    puVar13[2] = (ulong)uVar6;
    puVar13[3] = 0;
    puVar13[4] = 0;
    puVar13[5] = 0;
    func_0x00010a95cf7c(ppuVar12 + 0x1f);
    plVar14 = (long *)0x108;
    __Znwm();
    lVar21 = *(long *)(puVar22 + 0x80);
    ppuStack_1c0 = (undefined **)FUN_10a95e120;
    ppuStack_1b8 = &PTR_FUN_110c31258;
    plVar14[0x1e] = 0;
    plVar14[0x1f] = 0;
    plVar14[0x1d] = (long)&PTR_FUN_110c383b8;
    *(undefined2 *)(plVar14 + 0x20) = 0x100;
    appuStack_1b0[0] = ppuVar12;
    FUN_10a0040d0();
    *plVar14 = (long)&PTR_FUN_110c2fde8;
    plVar14[0x1d] = (long)&PTR_DAT_110c2fe68;
    plVar14[5] = (long)ppuVar23;
    plVar14[6] = lVar21;
    plVar14[7] = (long)ppuStack_1c0;
    (*(code *)ppuStack_1b8[2])(plVar14 + 8,&ppuStack_1b8);
    *(undefined1 *)(plVar14 + 0xf) = 0;
    *(undefined8 *)((long)plVar14 + 0x7c) = 0x37fffffff;
    *(long *)((long)plVar14 + 0x84) = lVar21;
    *(undefined1 *)((long)plVar14 + 0x8c) = 0;
    *(undefined1 *)((long)plVar14 + 0xa4) = 0;
    *(undefined1 *)(plVar14 + 0x15) = 0;
    *(undefined1 *)((long)plVar14 + 0xc4) = 0;
    *(undefined1 *)(plVar14 + 0x19) = 0;
    *(undefined1 *)((long)plVar14 + 0xdc) = 0;
    plVar14[0x1c] = -1;
    plVar16 = (long *)((long)plVar14 + *(long *)(*plVar14 + -0x18));
    if ((*(byte *)(plVar16 + 3) & 1) == 0) {
      *(undefined1 *)(plVar16 + 3) = 1;
      plVar16[2] = (long)ppuVar23;
      if (ppuVar23 != (undefined **)0x0) {
        plVar16[1] = *(long *)(ppuVar23[0x10a] + 0x2c);
      }
      (**(code **)(*plVar16 + 0x18))();
    }
    FUN_10a5ae998(plVar14[3],&PTR_DAT_110b99f08,ppuVar23,plVar14);
    (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
    func_0x00010a95cf14(ppuVar12 + 0x1e,plVar14);
    plVar16 = (long *)0x98;
    __Znwm();
    iVar3 = *(int *)(puVar22 + 0x88);
    uVar4 = *(uint *)(puVar22 + 0x8c);
    uVar6 = *(uint *)(puVar22 + 0x90);
    iVar7 = *(int *)(puVar22 + 0x98);
    *plVar16 = (long)ppuVar23;
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(plVar16 + 1) = iVar3;
    if ((int)uVar4 < 2) {
      uVar4 = 1;
    }
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar10 = (uint)(iVar3 * 1000) / uVar4;
    }
    plVar16[2] = (ulong)uVar10;
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    *(uint *)(plVar16 + 3) = uVar6;
    uVar10 = 0;
    if (uVar4 != 0) {
      uVar10 = (uVar6 * 1000) / uVar4;
    }
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    plVar16[4] = (ulong)uVar10;
    plVar16[5] = (ulong)(iVar7 + 1);
    ppuStack_1c0 = ppuVar23;
    FUN_10a81451c(plVar16 + 6,&pcStack_440,&ppuStack_1c0);
    plVar16[9] = 0;
    plVar16[8] = 0;
    *(undefined1 *)(plVar16 + 0xf) = 0;
    *(undefined1 *)(plVar16 + 0x10) = 0;
    plVar16[0xb] = 0;
    plVar16[10] = 0;
    plVar16[0xd] = 0;
    plVar16[0xc] = 0;
    *(undefined2 *)(plVar16 + 0xe) = 0;
    plVar16[0x11] = 0;
    plVar16[0x12] = 0;
    (**(code **)(*(long *)plVar16[6] + 0x98))((long *)plVar16[6],&UNK_10e482b00);
    ppuStack_300 = (undefined **)0x0;
    FUN_10a95d080(ppuVar12 + 0x29,plVar16);
    FUN_10a95d080(&ppuStack_300,0);
    FUN_10a0db928(&ppuStack_1c0,ppuVar23,ppuVar12[0x29] + 0x30);
    FUN_10a015bec(ppuVar12 + 0x17,&ppuStack_1c0);
    ppuVar23 = ppuStack_1b8;
    if (ppuStack_1b8 != (undefined **)0x0) {
      ppuVar1 = ppuStack_1b8 + 1;
      do {
        puVar22 = *ppuVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = puVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar22 == (undefined *)0x0) {
        (**(code **)(*ppuStack_1b8 + 0x10))(ppuStack_1b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar23);
      }
    }
    FUN_10a948464(&ppuStack_1c0);
    plVar16 = (long *)ppuVar12[0x1a];
    if (plVar16 != (long *)0x0) {
      puVar2 = (ulong *)(plVar16 + 1);
      do {
        uVar20 = *puVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar20 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        do {
          uVar20 = *puVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar20 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*plVar16 + 8))();
        }
      }
    }
    ppuVar12[0x1a] = (undefined *)ppuStack_1c0;
    ppuStack_1c0 = (undefined **)0x0;
    if (ppuVar12[0x1b] != (undefined *)0x0) {
      func_0x0001092b4274(ppuVar12 + 0x1b);
    }
    ppuVar12[0x1b] = (undefined *)ppuStack_1b8;
    ppuStack_1b8 = (undefined **)0x0;
    FUN_109d1a6fc(&ppuStack_300);
    plVar16 = (long *)ppuVar12[0x1c];
    if (plVar16 != (long *)0x0) {
      puVar2 = (ulong *)(plVar16 + 1);
      do {
        uVar20 = *puVar2;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar9) {
          *puVar2 = uVar20 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        do {
          uVar20 = *puVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar20 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*plVar16 + 8))();
        }
      }
    }
    ppuVar12[0x1c] = (undefined *)ppuStack_300;
    if (ppuVar12[0x1d] != (undefined *)0x0) {
      func_0x0001092b4274(ppuVar17);
    }
    *ppuVar17 = (undefined *)ppuStack_2f8;
    if (ppuStack_1b8 != (undefined **)0x0) {
      func_0x0001092b4274(&ppuStack_1b8);
    }
    if (ppuStack_1c0 != (undefined **)0x0) {
      ppuVar17 = ppuStack_1c0 + 1;
      do {
        puVar22 = *ppuVar17;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
        if (bVar9) {
          *ppuVar17 = puVar22 + -4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (((ulong)puVar22 & 0x1fffffffc) == 4) {
        do {
          puVar22 = *ppuVar17;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar9) {
            *ppuVar17 = puVar22 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (puVar22 + -1 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1c0 + 8))();
        }
      }
    }
    ppuVar17 = (undefined **)0x20;
    ppuStack_1c0 = ppuVar12;
    __Znwm();
    ppuVar23 = ppuVar17 + 1;
    *ppuVar23 = (undefined *)0x0;
    *ppuVar17 = (undefined *)&PTR_FUN_110c31028;
    ppuVar17[2] = (undefined *)0x0;
    ppuVar17[3] = (undefined *)ppuVar12;
    ppuStack_1b8 = ppuVar17;
    if (ppuVar12[4] == (undefined *)0x0) {
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
        if (bVar9) {
          *ppuVar23 = *ppuVar23 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      ppuVar1 = ppuVar17 + 2;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      ppuVar12[3] = (undefined *)ppuVar12;
      ppuVar12[4] = (undefined *)ppuVar17;
LAB_10a947dc8:
      do {
        puVar22 = *ppuVar23;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
        if (bVar9) {
          *ppuVar23 = puVar22 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (puVar22 == (undefined *)0x0) {
        (**(code **)(*ppuVar17 + 0x10))(ppuVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
      }
    }
    else if (*(long *)(ppuVar12[4] + 8) == -1) {
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar23,0x10);
        if (bVar9) {
          *ppuVar23 = *ppuVar23 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      ppuVar1 = ppuVar17 + 2;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar9) {
          *ppuVar1 = *ppuVar1 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      ppuVar12[3] = (undefined *)ppuVar12;
      ppuVar12[4] = (undefined *)ppuVar17;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_10a947dc8;
    }
    puVar22 = ppuStack_1c0[0x19];
    if (puVar22[0x1e0] == '\0') {
      if (acStack_520[0] == '\x01') {
        puVar22 = &UNK_10f684922;
        goto LAB_10a9480cc;
      }
      FUN_10a94b384(puVar22 + 0x1e8,acStack_520);
      puVar22[0x1e0] = 1;
      plVar16 = *(long **)(puVar22 + 0x238);
      if (plVar16 != (long *)0x0) {
        puVar2 = (ulong *)(plVar16 + 1);
        do {
          uVar20 = *puVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar20 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar20 & 0x1fffffffc) == 4) {
          do {
            uVar20 = *puVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *puVar2 = uVar20 - 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (uVar20 - 1 == 0) {
            (**(code **)(*plVar16 + 8))();
          }
        }
      }
      *(undefined8 *)(puVar22 + 0x238) = 0;
      plVar16 = *(long **)(puVar22 + 0x240);
      if (plVar16 != (long *)0x0) {
        puVar2 = (ulong *)(plVar16 + 1);
        do {
          uVar20 = *puVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar9) {
            *puVar2 = uVar20 - 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((uVar20 & 0x1fffffffc) == 4) {
          do {
            uVar20 = *puVar2;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *puVar2 = uVar20 - 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (uVar20 - 1 == 0) {
            (**(code **)(*plVar16 + 8))();
          }
        }
      }
      *(undefined8 *)(puVar22 + 0x240) = 0;
      if ((char)puVar22[0x25f] < '\0') {
        **(undefined1 **)(puVar22 + 0x248) = 0;
        *(undefined8 *)(puVar22 + 0x250) = 0;
      }
      else {
        puVar22[0x248] = 0;
        puVar22[0x25f] = 0;
      }
      if (puVar22[0x268] == '\x01') {
        puVar22[0x268] = 0;
      }
      if ((puVar22[0x10] & 1) == 0) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f684963,&UNK_10f6849be,0x87,&UNK_10f684a1a);
        }
        puVar18 = &DAT_10f6852eb;
        uVar19 = 8;
LAB_10a947fc0:
        FUN_10a94b3f8(puVar22,puVar18,uVar19);
      }
      else {
        if (*(long *)(puVar22 + 8) == 0) {
LAB_10a947f80:
          if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
            func_0x00010ae06f08(1,2,&UNK_10f684963,&UNK_10f6849be,0x90,&UNK_10f684a5f);
          }
          puVar18 = &DAT_10f6852f4;
          uVar19 = 0xb;
          goto LAB_10a947fc0;
        }
        plVar16 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(puVar22 + 8) + 0x940) + 0x28) +
                                      0x100) + 0x1c8);
        (**(code **)(*plVar16 + 0x60))();
        if ((plVar16[1] == 0) || (*(long *)(plVar16[1] + 8) == -1)) goto LAB_10a947f80;
        FUN_10a94b580(puVar22);
      }
      if (cStack_501 < '\0') {
        __ZdlPv(uStack_518);
      }
      ppuVar17 = ppuStack_1b8;
      ppuVar12 = ppuStack_1c0;
      ppuStack_1c0 = (undefined **)0x0;
      ppuStack_1b8 = (undefined **)0x0;
      plVar16 = *(long **)(param_2 + 0xf8);
      *(undefined ***)(param_2 + 0xf8) = ppuVar17;
      *(undefined ***)(param_2 + 0xf0) = ppuVar12;
      if (plVar16 != (long *)0x0) {
        plVar14 = plVar16 + 1;
        do {
          lVar21 = *plVar14;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar21 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (lVar21 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      ppuVar12 = ppuStack_1b8;
      if (ppuStack_1b8 != (undefined **)0x0) {
        ppuVar17 = ppuStack_1b8 + 1;
        do {
          puVar22 = *ppuVar17;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(ppuVar17,0x10);
          if (bVar9) {
            *ppuVar17 = puVar22 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (puVar22 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b8 + 0x10))(ppuStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar12);
        }
      }
      lVar21 = *(long *)(*(long *)(param_2 + 0xf0) + 0xd0);
      *param_1 = lVar21;
      if (lVar21 != 0) {
        plVar16 = (long *)(lVar21 + 8);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar9) {
            *plVar16 = *plVar16 + 4;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      goto LAB_10a94807c;
    }
  }
  else {
    FUN_10a948464(&pcStack_440);
    FUN_10a386830(&ppuStack_300,&UNK_10f6851ca,0x16);
    __ZNSt13runtime_errorC2ERKS_(&ppuStack_1c0,&ppuStack_300);
    _memcpy(appuStack_1b0,appuStack_2f0,0x110);
    ppuStack_1c0 = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_500,&ppuStack_1c0);
    __ZNSt13runtime_errorD2Ev(&ppuStack_1c0);
    ppuVar12 = ppuStack_438;
    func_0x000109d1b350(ppuStack_438,auStack_500);
    __ZNSt13exception_ptrD1Ev(auStack_500);
    __ZNSt13runtime_errorD2Ev(&ppuStack_300);
    *param_1 = (long)pcStack_440;
    if (pcStack_440 != (code *)0x0) {
      pcVar11 = pcStack_440 + 8;
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar9) {
          *(long *)pcVar11 = *(long *)pcVar11 + 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
        ppuVar12 = ppuStack_438;
      } while (cVar8 != '\0');
    }
    if (ppuVar12 != (undefined **)0x0) {
      func_0x0001092b4274(&ppuStack_438,ppuVar12);
    }
    if (pcStack_440 != (code *)0x0) {
      pcVar11 = pcStack_440 + 8;
      do {
        uVar20 = *(ulong *)pcVar11;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
        if (bVar9) {
          *(ulong *)pcVar11 = uVar20 - 4;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        do {
          uVar20 = *(ulong *)pcVar11;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(pcVar11,0x10);
          if (bVar9) {
            *(ulong *)pcVar11 = uVar20 - 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*(long *)pcStack_440 + 8))();
        }
      }
    }
LAB_10a94807c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  puVar22 = &UNK_10f6848a5;
LAB_10a9480cc:
  FUN_10a00946c(puVar22);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10a9480d4);
  (*pcVar11)();
}



/* Entry: 10a948464; end: 10a9484d3;  */

void FUN_10a948464(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c30f70;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a9484d4; end: 10a948583;  */

undefined1  [16] FUN_10a9484d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f6851e1;
  return auVar1;
}



/* Entry: 10a948584; end: 10a94860f;  */

void FUN_10a948584(undefined8 param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  
  FUN_10a003e74(param_1,&UNK_10f68442b,0x13);
  uStack_60 = 0xffffffff00000001;
  uStack_68 = 0;
  uStack_58 = 1;
  puStack_50 = &UNK_10f683c80;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = 0xffffffff0000017c;
  FUN_10a948610(param_1,&uStack_68);
  FUN_10a95943c();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a948610; end: 10a9486e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a9486a8) */

undefined1  [16] FUN_10a948610(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6850fc,7);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a959340(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9486e8; end: 10a9487f3;  */

void FUN_10a9486e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f68442b,0x13);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,1);
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_60 = 0x17c00000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  uVar1 = param_1;
  FUN_10a9487f4(param_1,&puStack_98);
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a9595f4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f68443f;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f683c80;
  uStack_38 = 0;
  FUN_10a9597c4(uVar1,&puStack_98);
  FUN_10a959fb8(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a9487f4; end: 10a9488cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a94888c) */

undefined1  [16] FUN_10a9487f4(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f6851e1,0xd);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a9594f8(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a9488cc; end: 10a948957;  */

void FUN_10a9488cc(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 8) + (uVar4 >> 7) * 8) + (uVar4 & 0x7f) * 0x20);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
      uVar4 = *(ulong *)(param_1 + 0x20);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    *(ulong *)(param_1 + 0x20) = uVar4 + 1;
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    if (0xff < uVar4 + 1) {
      __ZdlPv(**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x80;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a948958);
  (*pcVar2)();
}



/* Entry: 10a948958; end: 10a948a67;  */

void FUN_10a948958(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  puVar6 = puVar2;
  if (*(undefined8 **)(param_1 + 0x50) != puVar2) {
    uVar7 = *(ulong *)(param_1 + 0x60);
    puVar8 = puVar2 + (uVar7 >> 7);
    puVar4 = (undefined8 *)*puVar8;
    puVar9 = puVar4 + (uVar7 & 0x7f) * 4;
    uVar7 = *(long *)(param_1 + 0x68) + uVar7;
    puVar1 = (undefined8 *)(puVar2[uVar7 >> 7] + (uVar7 & 0x7f) * 0x20);
    puVar6 = *(undefined8 **)(param_1 + 0x50);
    if (puVar9 != puVar1) {
      do {
        if (*(char *)((long)puVar9 + 0x17) < '\0') {
          __ZdlPv(*puVar9);
          puVar4 = (undefined8 *)*puVar8;
        }
        puVar9 = puVar9 + 4;
        if ((long)puVar9 - (long)puVar4 == 0x1000) {
          puVar8 = puVar8 + 1;
          puVar4 = (undefined8 *)*puVar8;
          puVar9 = puVar4;
        }
      } while (puVar9 != puVar1);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      puVar6 = *(undefined8 **)(param_1 + 0x50);
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar5 = (long)puVar6 - (long)puVar2;
  while (uVar7 = lVar5 >> 3, 2 < uVar7) {
    __ZdlPv(*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x48) + 8);
    *(undefined8 **)(param_1 + 0x48) = puVar2;
    lVar5 = *(long *)(param_1 + 0x50) - (long)puVar2;
  }
  if (uVar7 == 1) {
    uVar3 = 0x40;
  }
  else {
    if (uVar7 != 2) {
      return;
    }
    uVar3 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  return;
}



/* Entry: 10a948a68; end: 10a948adb;  */

undefined1  [16] FUN_10a948a68(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = &DAT_10f68525a;
  return auVar1;
}



/* Entry: 10a948adc; end: 10a948ffb;  */

void FUN_10a948adc(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f68442b,0x13);
  func_0x000109887da8(appuStack_c8,&DAT_10f68525a,7);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c30870;
  pppuVar2 = (undefined8 ***)&UNK_10f683c80;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0x1ffffffff;
  uStack_88 = 0x100000019;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_54 = 0x17c;
  uStack_50 = 0xffffffff;
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,1);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c30870;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a948fdc;
    FUN_10a054dac(param_1,"start",FUN_10a95a208,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a948fdc;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10a95a350,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a948fdc;
    FUN_10a054dac(param_1,&UNK_10f684685,FUN_10a95a43c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a948fdc;
    FUN_10a054dac(param_1,"close",FUN_10a95a504,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"status",FUN_10a95a618,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&DAT_10f684698,FUN_10a95a740,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c30fe8,FUN_10a95a7f8);
    FUN_10a0605c4(param_1,&DAT_10f6846a0,FUN_10a95b600,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&DAT_10f6846a8,FUN_10a95b734,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c31000,FUN_10a95b7ec);
    FUN_10a0605c4(param_1,&UNK_10f6846b1,FUN_10a95c518,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110c31000,FUN_10a95b7ec);
    FUN_10a0605c4(param_1,&UNK_10f6846bd,FUN_10a95c670,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f6846ca,FUN_10a95c728,0);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f68525a,7);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10a948fdc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a948fe0);
  (*pcVar6)();
}



/* Entry: 10a948ffc; end: 10a949113;  */

void FUN_10a948ffc(undefined1 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  ___dynamic_cast(param_2,&PTR_DAT_110c30830,&PTR_DAT_110c30848,0);
  if (param_2 == 0) {
    FUN_10a00946c(&UNK_10f6852a6);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x18);
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
      plVar1 = plVar2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (lVar6 != 0) {
      *param_1 = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (param_1 + 8,lVar6 + 0xe0);
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
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
          (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar2);
          return;
        }
      }
      return;
    }
  }
  FUN_10a00946c(&UNK_10f685262);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a9490f0);
  (*pcVar5)();
}



/* Entry: 10a949114; end: 10a949183;  */

long FUN_10a949114(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x108))(param_1 + 0x108);
  (*(code *)**(undefined8 **)(param_1 + 200))();
  (*(code *)**(undefined8 **)(param_1 + 0x88))();
  (*(code *)**(undefined8 **)(param_1 + 0x48))();
  (*(code *)**(undefined8 **)(param_1 + 8))();
  return param_1;
}



/* Entry: 10a949184; end: 10a94934f;  */

undefined8 * FUN_10a949184(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_110c30040;
  param_1[5] = &PTR_DAT_110c300a8;
  param_1[9] = &PTR_DAT_110c300d0;
  FUN_10a94aff8(param_1[0x19]);
  FUN_10a95d080(param_1 + 0x29,0);
  FUN_10a95cfb8(param_1 + 0x22);
  func_0x00010a95cf7c(param_1 + 0x1f,0);
  func_0x00010a95cf14(param_1 + 0x1e,0);
  if (param_1[0x1d] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)param_1[0x1c];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)param_1[0x1a];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x00010a05248c(param_1 + 0x17);
  FUN_10a95cbb0(param_1 + 0x15);
  FUN_10a95cbb0(param_1 + 0x13);
  FUN_10a004cfc(param_1 + 0x11);
  FUN_10a95c84c(param_1 + 0xf);
  FUN_10a004cfc(param_1 + 0xd);
  param_1[9] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xc] = 0;
  }
  func_0x00010a004e5c(param_1 + 10);
  param_1[5] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[8] = 0;
  }
  func_0x00010a004e5c(param_1 + 6);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a949350; end: 10a949363;  */

undefined8 * FUN_10a949350(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_110c30040;
  param_1[5] = &PTR_DAT_110c300a8;
  param_1[9] = &PTR_DAT_110c300d0;
  FUN_10a94aff8(param_1[0x19]);
  FUN_10a95d080(param_1 + 0x29,0);
  FUN_10a95cfb8(param_1 + 0x22);
  func_0x00010a95cf7c(param_1 + 0x1f,0);
  func_0x00010a95cf14(param_1 + 0x1e,0);
  if (param_1[0x1d] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)param_1[0x1c];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (param_1[0x1b] != 0) {
    func_0x0001092b4274();
  }
  plVar4 = (long *)param_1[0x1a];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  func_0x00010a05248c(param_1 + 0x17);
  FUN_10a95cbb0(param_1 + 0x15);
  FUN_10a95cbb0(param_1 + 0x13);
  FUN_10a004cfc(param_1 + 0x11);
  FUN_10a95c84c(param_1 + 0xf);
  FUN_10a004cfc(param_1 + 0xd);
  param_1[9] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xc] = 0;
  }
  func_0x00010a004e5c(param_1 + 10);
  param_1[5] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[8] = 0;
  }
  func_0x00010a004e5c(param_1 + 6);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a949364; end: 10a9493a7;  */

void FUN_10a949364(void)

{
  FUN_10a949184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a9493a8; end: 10a94a67f;  */

/* WARNING: Removing unreachable block (ram,0x00010a94a140) */
/* WARNING: Removing unreachable block (ram,0x00010a94a120) */
/* WARNING: Removing unreachable block (ram,0x00010a949e64) */
/* WARNING: Removing unreachable block (ram,0x00010a94a130) */
/* WARNING: Removing unreachable block (ram,0x00010a94a150) */
/* WARNING: Removing unreachable block (ram,0x00010a9495c8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a9493a8(long param_1,long *******param_2)

{
  long *plVar1;
  long lVar2;
  long *******ppppppplVar3;
  long ****pppplVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  undefined2 *puVar13;
  ulong uVar14;
  code *pcVar15;
  bool bVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 uVar21;
  long ******pppppplVar22;
  undefined8 uVar23;
  long *****ppppplVar24;
  long ***ppplVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long *******ppppppplVar30;
  long *******ppppppplVar31;
  long ******pppppplVar32;
  long *******ppppppplVar33;
  long *******unaff_x22;
  long lVar34;
  long *plVar35;
  long ****pppplVar36;
  undefined8 *puVar37;
  long *****unaff_x27;
  long *****unaff_x28;
  undefined8 *puVar38;
  long *****ppppplVar39;
  long lStack_290;
  undefined8 *puStack_288;
  long *plStack_280;
  long lStack_278;
  float fStack_270;
  long *plStack_268;
  long *****ppppplStack_260;
  long *****ppppplStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  long *plStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 *puStack_200;
  long *****ppppplStack_1f0;
  long *****ppppplStack_1e8;
  long lStack_1e0;
  int iStack_1d4;
  long lStack_1d0;
  long *******ppppppplStack_1c8;
  undefined8 uStack_1c0;
  long *******ppppppplStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined4 uStack_1ad;
  char cStack_1a9;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  char cStack_189;
  long *******ppppppplStack_188;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined7 uStack_178;
  byte bStack_171;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_150;
  char cStack_139;
  undefined8 uStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  byte bStack_119;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  ulong uStack_100;
  uint uStack_f8;
  undefined2 uStack_f0;
  undefined5 uStack_ee;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  byte bStack_d9;
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  long *****ppppplStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar5 = *(int *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  uStack_1c0 = (long *******)CONCAT44(uStack_1c0._4_4_,iVar5);
  if (iVar5 != -1) {
    param_2 = (long *******)&uStack_1c0;
    FUN_10a94a680(*(undefined8 *)(param_1 + 0x98),param_2);
  }
  ppppppplVar31 = *(long ********)(param_1 + 200);
  lStack_1e0 = param_1;
  if ((ppppppplVar31[0x48] == (long ******)0x0) || (((uint)ppppppplVar31[0x48][2] >> 1 & 1) == 0)) {
LAB_10a9496ec:
    uStack_a0._0_7_ = 0;
    uStack_a0._7_1_ = 0;
    uStack_98 = 0;
    uStack_91 = 0;
    ppppplStack_90 = (long *****)0x0;
    pppppplVar32 = ppppppplVar31[0x51];
    __ZNSt3__15mutex4lockEv(pppppplVar32);
    pppppplVar22 = ppppppplVar31[0x51];
    unaff_x27 = pppppplVar22[9];
    uStack_a0._0_7_ = SUB87(unaff_x27,0);
    uStack_a0._7_1_ = (undefined1)((ulong)unaff_x27 >> 0x38);
    ppppplStack_1e8 = pppppplVar22[0xb];
    ppppplStack_1f0 = pppppplVar22[10];
    pppppplVar22[9] = (long *****)0x0;
    pppppplVar22[10] = (long *****)0x0;
    uStack_98 = SUB87(ppppplStack_1f0,0);
    uStack_91 = (undefined1)((ulong)ppppplStack_1f0 >> 0x38);
    pppppplVar22[0xb] = (long *****)0x0;
    ppppplStack_90 = ppppplStack_1e8;
    __ZNSt3__15mutex6unlockEv(pppppplVar32);
    unaff_x28 = ppppplStack_1f0;
    if (unaff_x27 != ppppplStack_1f0) {
      unaff_x22 = (long *******)&uStack_1c0;
      do {
        bVar8 = *(byte *)unaff_x27;
        if (bVar8 < 2) {
          if (bVar8 == 0) {
            if (*(char *)(ppppppplVar31 + 0x3c) == '\x02') {
              *(undefined1 *)(ppppppplVar31 + 0x3c) = 3;
              (*(code *)ppppppplVar31[0x1c])(ppppppplVar31 + 0x1c);
            }
          }
          else if (bVar8 == 1) {
            bVar8 = *(byte *)(unaff_x27 + 1);
            if (bVar8 == 6) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f684963,&UNK_10f684c44,0x13b,&UNK_10f684cc6);
              }
              cStack_1a9 = '\x12';
              uStack_1b0 = 0x4553;
              ppppppplStack_1b8 = (long *******)0x4e4f505345525f44;
              uStack_1c0 = (long *******)0x454d524f464c414d;
              uStack_1ae = 0;
              uStack_110._0_7_ = 0;
              uStack_110._7_1_ = 0;
              uStack_108 = 0;
              uStack_101 = 0;
              uStack_100 = 0;
              param_2 = (long *******)&uStack_1c0;
              func_0x00010a94ba80(ppppppplVar31,param_2,&uStack_110);
LAB_10a949944:
              if ((long)uStack_100 < 0) {
                __ZdlPv(CONCAT17(uStack_110._7_1_,(undefined7)uStack_110));
              }
              if (cStack_1a9 < '\0') {
                __ZdlPv(uStack_1c0);
              }
            }
            else {
              if (bVar8 == 5) {
                cStack_1a9 = '\x11';
                uStack_1b0 = 0x44;
                ppppppplStack_1b8 = (long *******)0x454c4941465f4e4f;
                uStack_1c0 = (long *******)0x49544152454e4547;
                uStack_110._0_7_ = 0;
                uStack_110._7_1_ = 0;
                uStack_108 = 0;
                uStack_101 = 0;
                uStack_100 = 0;
                param_2 = (long *******)&uStack_1c0;
                func_0x00010a94ba80(ppppppplVar31,param_2,&uStack_110);
                goto LAB_10a949944;
              }
              if (((bVar8 == 3) && (*(char *)(ppppppplVar31 + 0x3c) != '\0')) &&
                 (*(char *)(ppppppplVar31 + 0x3c) != '\x06')) {
                FUN_10a94aff8(ppppppplVar31);
                if (*(char *)(ppppppplVar31 + 0x41) == '\x01') {
                  if (*(char *)((long)ppppppplVar31 + 0x207) < '\0') {
                    __ZdlPv(ppppppplVar31[0x3e]);
                  }
                  *(undefined1 *)(ppppppplVar31 + 0x41) = 0;
                }
                *(undefined1 *)(ppppppplVar31 + 0x3c) = 0;
                (*(code *)ppppppplVar31[0x2c])(ppppppplVar31 + 0x2c);
              }
            }
            if (*(byte *)(ppppppplVar31 + 0x3c) - 3 < 2) {
              pppplVar36 = unaff_x27[5];
              pppplVar4 = unaff_x27[6];
              while ((pppplVar36 != pppplVar4 && (*(byte *)(ppppppplVar31 + 0x3c) - 3 < 2))) {
                pppppplVar22 = ppppppplVar31[0x34];
                ppplVar25 = pppplVar36[2];
                ppppppplStack_1b8 = (long *******)pppplVar36[1];
                uStack_1c0 = (long *******)*pppplVar36;
                uStack_1b0 = SUB82(ppplVar25,0);
                uStack_1ae = (undefined1)((ulong)ppplVar25 >> 0x10);
                uStack_1ad = (undefined4)((ulong)ppplVar25 >> 0x18);
                cStack_1a9 = (char)((ulong)ppplVar25 >> 0x38);
                pppplVar36[1] = (long ***)0x0;
                pppplVar36[2] = (long ***)0x0;
                *pppplVar36 = (long ***)0x0;
                uStack_1a8 = (uint)pppplVar36[3];
                uStack_1a4 = (int)((ulong)pppplVar36[3] >> 0x20);
                param_2 = ppppppplVar31 + 0x34;
                (*(code *)pppppplVar22)(&uStack_1c0,param_2);
                if (cStack_1a9 < '\0') {
                  __ZdlPv(uStack_1c0);
                }
                pppplVar36 = pppplVar36 + 4;
              }
            }
          }
        }
        else {
          if (bVar8 == 2) {
            lVar2 = 0xf;
            puVar20 = &DAT_10f685323;
            if (1 < *(byte *)(ppppppplVar31 + 0x3c) - 3) {
              lVar2 = 0xd;
              puVar20 = &DAT_10f685338;
            }
            cStack_1a9 = (char)lVar2;
            _memcpy(&uStack_1c0,puVar20,lVar2);
            *(undefined1 *)((long)unaff_x22 + lVar2) = 0;
            param_2 = (long *******)&uStack_1c0;
            func_0x00010a94ba80(ppppppplVar31,param_2,unaff_x27 + 8);
          }
          else {
            if (bVar8 != 3) goto LAB_10a9499d8;
            lVar2 = 0xf;
            puVar20 = &DAT_10f685323;
            if (1 < *(byte *)(ppppppplVar31 + 0x3c) - 3) {
              lVar2 = 0xd;
              puVar20 = &DAT_10f685338;
            }
            cStack_1a9 = (char)lVar2;
            _memcpy(&uStack_1c0,puVar20,lVar2);
            *(undefined1 *)((long)unaff_x22 + lVar2) = 0;
            param_2 = (long *******)&uStack_1c0;
            func_0x00010a94ba80(ppppppplVar31,param_2,unaff_x27 + 8);
          }
          if (cStack_1a9 < '\0') {
            __ZdlPv(uStack_1c0);
          }
        }
LAB_10a9499d8:
        unaff_x27 = unaff_x27 + 0xb;
      } while (unaff_x27 != unaff_x28);
    }
    ppuVar17 = (undefined **)&uStack_a0;
    func_0x00010a94bb20();
    param_1 = lStack_1e0;
  }
  else {
    ppppppplVar33 = ppppppplVar31 + 0x48;
    uStack_1c0 = (long *******)CONCAT71(uStack_1c0._1_7_,2);
    uStack_1b0 = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    cStack_1a9 = '\0';
    ppppppplStack_1b8 = (long *******)0x0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_190 = 0;
    cStack_189 = '\0';
    uStack_198 = 0;
    uStack_191 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    ppppppplStack_188 = (long *******)0x0;
    uStack_178 = 0;
    bStack_171 = 0;
    if (((uint)(*ppppppplVar33)[2] >> 5 & 1) == 0) {
      func_0x0001092af8bc(ppppppplVar33);
      pppppplVar22 = *ppppppplVar33;
      if (((ulong)pppppplVar22[0x1d] & 1) == 0) goto LAB_10a94a33c;
      bVar8 = *(byte *)(pppppplVar22 + 0x13);
      unaff_x28 = (long *****)(ulong)bVar8;
      ppppppplVar30 = (long *******)pppppplVar22[0x14];
      uStack_110._0_7_ = SUB87(pppppplVar22[0x15],0);
      uStack_110._7_1_ = (undefined1)*(undefined8 *)((long)pppppplVar22 + 0xaf);
      uStack_108 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar22 + 0xaf) >> 8);
      bVar9 = *(byte *)((long)pppppplVar22 + 0xb7);
      unaff_x27 = (long *****)(ulong)bVar9;
      pppppplVar22[0x14] = (long *****)0x0;
      pppppplVar22[0x15] = (long *****)0x0;
      ppppplVar24 = pppppplVar22[0x17];
      uStack_a0._0_7_ = SUB87(pppppplVar22[0x18],0);
      uStack_a0._7_1_ = (undefined1)*(undefined8 *)((long)pppppplVar22 + 199);
      uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar22 + 199) >> 8);
      cVar10 = *(char *)((long)pppppplVar22 + 0xcf);
      pppppplVar22[0x16] = (long *****)0x0;
      pppppplVar22[0x17] = (long *****)0x0;
      pppppplVar22[0x18] = (long *****)0x0;
      pppppplVar22[0x19] = (long *****)0x0;
      ppppppplVar3 = (long *******)pppppplVar22[0x1a];
      uStack_b8 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar22 + 0xdf) >> 8);
      uStack_c0._0_7_ = SUB87(pppppplVar22[0x1b],0);
      uStack_c0._7_1_ = (undefined1)((ulong)pppppplVar22[0x1b] >> 0x38);
      bVar11 = *(byte *)((long)pppppplVar22 + 0xe7);
      unaff_x22 = (long *******)(ulong)bVar11;
      pppppplVar22[0x1a] = (long *****)0x0;
      pppppplVar22[0x1b] = (long *****)0x0;
      pppppplVar22[0x1c] = (long *****)0x0;
      ppuVar17 = (undefined **)*ppppppplVar33;
      *ppppppplVar33 = (long ******)0x0;
      if ((long *******)ppuVar17 != (long *******)0x0) {
        ppppppplVar33 = (long *******)(ppuVar17 + 1);
        do {
          pppppplVar22 = *ppppppplVar33;
          cVar12 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
          if (bVar16) {
            *ppppppplVar33 = (long ******)((long)pppppplVar22 + -4);
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (((ulong)pppppplVar22 & 0x1fffffffc) == 4) {
          do {
            pppppplVar22 = *ppppppplVar33;
            cVar12 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar33,0x10);
            if (bVar16) {
              *ppppppplVar33 = (long ******)((long)pppppplVar22 + -1);
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if ((long ******)((long)pppppplVar22 + -1) == (long ******)0x0) {
            (*(code *)*(long ******)((long)*ppuVar17 + 8))();
          }
        }
      }
      uStack_d8._0_4_ = (undefined4)(undefined7)uStack_110;
      uStack_d8._4_3_ = (undefined3)((uint7)(undefined7)uStack_110 >> 0x20);
      uStack_d8._4_4_ = CONCAT13(uStack_110._7_1_,uStack_d8._4_3_);
      uStack_d0 = uStack_108;
      uStack_f0 = (undefined2)(undefined7)uStack_a0;
      uStack_ee = (undefined5)((uint7)(undefined7)uStack_a0 >> 0x10);
      uStack_e9 = uStack_a0._7_1_;
      uStack_e8 = uStack_98;
      uStack_130._0_1_ = (undefined1)(undefined7)uStack_c0;
      uStack_130._1_6_ = (undefined6)((uint7)(undefined7)uStack_c0 >> 8);
      uStack_130._7_1_ = uStack_c0._7_1_;
      uStack_128 = uStack_b8;
      uStack_1c0 = (long *******)CONCAT71(uStack_1c0._1_7_,bVar8);
      if (uStack_1a4 < 0) {
        __ZdlPv();
        ppuVar17 = (undefined **)ppppppplStack_1b8;
      }
      uStack_1b0 = (undefined2)(undefined4)uStack_d8;
      uStack_1ae = (undefined1)((uint)(undefined4)uStack_d8 >> 0x10);
      uStack_1ad = (undefined4)(CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8) >> 0x18);
      cStack_1a9 = uStack_d8._7_1_;
      uStack_1a8 = (uint)uStack_d0;
      uStack_1a4 = CONCAT13(bVar9,(int3)((uint7)uStack_d0 >> 0x20));
      ppppppplStack_1b8 = ppppppplVar30;
      if (cStack_189 < '\0') {
        ppuVar17 = (undefined **)CONCAT44(uStack_19c,uStack_1a0);
        __ZdlPv();
      }
      param_1 = lStack_1e0;
      uStack_198 = CONCAT52(uStack_ee,uStack_f0);
      uStack_1a0 = SUB84(ppppplVar24,0);
      uStack_19c = (undefined4)((ulong)ppppplVar24 >> 0x20);
      uStack_191 = uStack_e9;
      uStack_190 = uStack_e8;
      cStack_189 = cVar10;
      if ((char)bStack_171 < '\0') {
        __ZdlPv();
        ppuVar17 = (undefined **)ppppppplStack_188;
      }
      uStack_180 = (undefined4)CONCAT61(uStack_130._1_6_,(undefined1)uStack_130);
      uStack_17c = (undefined2)((uint6)uStack_130._1_6_ >> 0x18);
      uStack_17a = (undefined1)((uint6)uStack_130._1_6_ >> 0x28);
      uStack_179 = uStack_130._7_1_;
      uStack_178 = uStack_128;
      ppppppplStack_188 = ppppppplVar3;
      bStack_171 = bVar11;
    }
    else {
      uStack_178 = 0;
      uStack_179 = 0;
      uStack_17a = 0;
      cStack_189 = '\0';
      uStack_190 = 0;
      uStack_191 = 0;
      uStack_198 = 0;
      uStack_19c = 0;
      uStack_1a0 = 0;
      uStack_1a4 = 0;
      uStack_1a8 = 0;
      cStack_1a9 = '\0';
      uStack_1ad = 0;
      uStack_1ae = 0;
      uStack_1b0 = 0;
      ppppppplStack_1b8 = (long *******)0x0;
      ppppppplStack_188 = (long *******)0x5f4b524f5754454e;
      uStack_180 = 0x4f525245;
      uStack_17c = 0x52;
      bStack_171 = 0xd;
      ppuVar17 = (undefined **)*ppppppplVar33;
      if ((long *******)ppuVar17 != (long *******)0x0) {
        ppppppplVar30 = (long *******)(ppuVar17 + 1);
        do {
          pppppplVar22 = *ppppppplVar30;
          cVar10 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
          if (bVar16) {
            *ppppppplVar30 = (long ******)((long)pppppplVar22 + -4);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (((ulong)pppppplVar22 & 0x1fffffffc) == 4) {
          do {
            pppppplVar22 = *ppppppplVar30;
            cVar10 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
            if (bVar16) {
              *ppppppplVar30 = (long ******)((long)pppppplVar22 + -1);
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if ((long ******)((long)pppppplVar22 + -1) == (long ******)0x0) {
            (*(code *)*(long ******)((long)*ppuVar17 + 8))();
          }
        }
      }
      *ppppppplVar33 = (long ******)0x0;
    }
    bVar8 = *(byte *)(ppppppplVar31 + 0x3c);
    if (bVar8 - 1 < 2) {
      if (*(char *)((long)ppppppplVar31 + 0x287) < '\0') {
        if (ppppppplVar31[0x4f] == (long ******)0x0) goto LAB_10a949674;
        goto LAB_10a9496ac;
      }
      if (*(char *)((long)ppppppplVar31 + 0x287) != '\0') goto LAB_10a9496ac;
LAB_10a949674:
      if ((char)uStack_1c0 == '\x02') {
        uStack_110._0_7_ = 0;
        uStack_110._7_1_ = 0;
        uStack_108 = 0;
        uStack_101 = 0;
        uStack_100 = 0;
        param_2 = (long *******)&ppppppplStack_188;
        ppuVar17 = (undefined **)ppppppplVar31;
        func_0x00010a94ba80(ppppppplVar31,param_2,&uStack_110);
        if ((long)uStack_100 < 0) {
          ppuVar17 = (undefined **)CONCAT17(uStack_110._7_1_,(undefined7)uStack_110);
          __ZdlPv();
        }
        goto LAB_10a9496ac;
      }
      uVar28 = CONCAT17(cStack_1a9,CONCAT43(uStack_1ad,CONCAT12(uStack_1ae,uStack_1b0)));
      if (-1 < uStack_1a4) {
        uVar28 = (ulong)uStack_1a4._3_1_;
      }
      if (uVar28 != 0) {
        ppuVar17 = (undefined **)(ppppppplVar31 + 0x49);
        param_2 = (long *******)&ppppppplStack_1b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppuVar17,param_2);
        bVar8 = *(byte *)(ppppppplVar31 + 0x3c);
      }
      bVar16 = bVar8 == 1;
      if (bVar16) {
        ppuVar17 = (undefined **)(ppppppplVar31 + 0x14);
        *(undefined1 *)(ppppppplVar31 + 0x3c) = 2;
        (*(code *)*ppuVar17)();
        if (*(char *)(ppppppplVar31 + 0x3c) == '\x02') goto LAB_10a94a2e0;
        bVar16 = true;
      }
      else {
LAB_10a94a2e0:
        if ((char)uStack_1c0 == '\0') {
          if (*(char *)(ppppppplVar31 + 0x4d) == '\x01') {
            *(undefined1 *)(ppppppplVar31 + 0x4d) = 0;
          }
          param_2 = (long *******)&uStack_1c0;
          ppuVar17 = (undefined **)ppppppplVar31;
          FUN_10a94bc10(ppppppplVar31,param_2);
        }
        else {
          __ZNSt3__16chrono12steady_clock3nowEv();
          if (((ulong)ppppppplVar31[0x4d] & 1) == 0) {
            *(undefined1 *)(ppppppplVar31 + 0x4d) = 1;
          }
          ppppppplVar31[0x4c] = (long ******)(ppuVar17 + (long)ppppppplVar31[0xf] * 0x1e848);
        }
      }
    }
    else {
LAB_10a9496ac:
      bVar16 = false;
    }
    if ((char)bStack_171 < '\0') {
      ppuVar17 = (undefined **)ppppppplStack_188;
      __ZdlPv();
    }
    if (cStack_189 < '\0') {
      ppuVar17 = (undefined **)CONCAT44(uStack_19c,uStack_1a0);
      __ZdlPv();
    }
    if (uStack_1a4 < 0) {
      ppuVar17 = (undefined **)ppppppplStack_1b8;
      __ZdlPv();
    }
    if (!bVar16) goto LAB_10a9496ec;
  }
  puVar37 = &uStack_c0;
  if (*(char *)(ppppppplVar31 + 0x4d) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((ulong)ppppppplVar31[0x4d] & 1) == 0) goto LAB_10a94a33c;
    if (((long)ppppppplVar31[0x4c] <= (long)ppuVar17) &&
       (*(undefined1 *)(ppppppplVar31 + 0x4d) = 0, *(byte *)(ppppppplVar31 + 0x3c) - 1 < 2)) {
      pppppplVar22 = (long ******)(long)*(char *)((long)ppppppplVar31 + 0x287);
      if ((long)pppppplVar22 < 0) {
        pppppplVar22 = ppppppplVar31[0x4f];
      }
      if (pppppplVar22 == (long ******)0x0) {
        ppuVar17 = (undefined **)ppppppplVar31;
        FUN_10a94b580();
      }
    }
  }
  ppppppplVar33 = (long *******)ppppppplVar31[0x42];
  ppppppplVar30 = (long *******)ppppppplVar31[0x43];
  if (ppppppplVar33 != ppppppplVar30) {
    pppppplVar22 = ppppppplVar31[0x44];
    uStack_1b0 = SUB82(pppppplVar22,0);
    uStack_1ae = (undefined1)((ulong)pppppplVar22 >> 0x10);
    uStack_1ad = (undefined4)((ulong)pppppplVar22 >> 0x18);
    cStack_1a9 = (char)((ulong)pppppplVar22 >> 0x38);
    ppppppplVar31[0x42] = (long ******)0x0;
    ppppppplVar31[0x43] = (long ******)0x0;
    ppppppplVar31[0x44] = (long ******)0x0;
    uStack_1c0 = ppppppplVar33;
    ppppppplStack_1b8 = ppppppplVar30;
    do {
      (*(code *)*ppppppplVar33)(ppppppplVar33);
      ppppppplVar33 = ppppppplVar33 + 8;
    } while (ppppppplVar33 != ppppppplVar30);
    uStack_110._0_7_ = SUB87(&uStack_1c0,0);
    uStack_110._7_1_ = (undefined1)((ulong)&uStack_1c0 >> 0x38);
    ppuVar17 = (undefined **)&uStack_110;
    FUN_10a47332c();
  }
  uStack_130._0_1_ = 0;
  uStack_130._1_6_ = 0;
  uStack_130._7_1_ = 0;
  uStack_128 = 0;
  uStack_121 = 0;
  uStack_120 = 0;
  bStack_119 = 0;
  plVar35 = *(long **)(param_1 + 0x148);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((char)bStack_119 < '\0') {
    *(undefined1 *)CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130)) = 0;
    uStack_128 = 0;
    uStack_121 = 0;
  }
  else {
    uStack_130._0_1_ = 0;
    bStack_119 = 0;
  }
  if ((*(byte *)(plVar35 + 0xe) & 1) == 0) {
    if (plVar35[0xd] != 0) {
      if ((char)plVar35[0x10] == '\x01') {
        iVar5 = (int)plVar35[0x11] + 1;
        *(int *)(plVar35 + 0x11) = iVar5;
        if (iVar5 < (int)plVar35[3]) {
          ppppppplVar31 = (long *******)plVar35[0xf];
LAB_10a949b64:
          if ((long)ppuVar17 - (long)ppppppplVar31 < plVar35[4] * 1000000) goto LAB_10a94a204;
        }
      }
      else {
        *(undefined1 *)(plVar35 + 0x10) = 1;
        plVar35[0xf] = (long)ppuVar17;
        ppppppplVar31 = (long *******)ppuVar17;
        if ((int)plVar35[0x11] < (int)plVar35[3]) goto LAB_10a949b64;
      }
      *(undefined1 *)(plVar35 + 0xe) = 1;
      goto LAB_10a949b88;
    }
LAB_10a94a204:
    if ((char)bStack_119 < '\0') {
      if (CONCAT17(uStack_121,uStack_128) == 0) goto LAB_10a94a234;
      param_2 = (long *******)
                CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
    }
    else {
      if (bStack_119 == 0) goto LAB_10a94a244;
      param_2 = (long *******)&uStack_130;
    }
    FUN_10a94a9a0(*(undefined8 *)(param_1 + 200),param_2);
    ppuVar17 = *(undefined ***)(param_1 + 0x148);
    FUN_10a948958();
  }
  else {
    iVar5 = *(int *)((long)plVar35 + 0x8c) + 1;
    *(int *)((long)plVar35 + 0x8c) = iVar5;
    if (((iVar5 < (int)plVar35[1]) && ((long)ppuVar17 - plVar35[0x12] < plVar35[2] * 1000000)) ||
       (plVar35[0xd] == 0)) goto LAB_10a94a204;
LAB_10a949b88:
    *(undefined4 *)((long)plVar35 + 0x8c) = 0;
    plVar35[0x12] = (long)ppuVar17;
    puVar18 = (undefined8 *)
              (*(long *)(plVar35[9] + ((ulong)plVar35[0xc] >> 7) * 8) +
              (plVar35[0xc] & 0x7fU) * 0x20);
    uStack_100 = puVar18[2];
    uStack_108 = (undefined7)puVar18[1];
    uStack_101 = (undefined1)((ulong)puVar18[1] >> 0x38);
    uStack_110._0_7_ = (undefined7)*puVar18;
    uStack_110._7_1_ = (undefined1)((ulong)*puVar18 >> 0x38);
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = 0;
    uStack_f8 = *(uint *)(puVar18 + 3);
    FUN_10a9488cc(plVar35 + 8);
    uVar14 = uStack_100;
    uVar26 = uStack_100 >> 0x38;
    puVar18 = (undefined8 *)CONCAT17(uStack_110._7_1_,(undefined7)uStack_110);
    uVar28 = CONCAT17(uStack_101,uStack_108);
    uStack_c0._0_7_ = 0;
    uStack_c0._7_1_ = 0;
    uStack_b8 = 0;
    uStack_b1 = 0;
    puVar38 = (undefined8 *)0x38;
    __Znwm();
    puVar38[2] = 0;
    puVar38[1] = 0;
    puVar38[4] = 0;
    puVar38[3] = 0;
    *puVar38 = &PTR_FUN_110ba5138;
    if (-1 < (long)uVar14) {
      uVar28 = uVar26;
      puVar18 = &uStack_110;
    }
    puVar38[5] = puVar18;
    puVar38[6] = uVar28;
    uStack_d8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    uStack_a0._0_7_ = SUB87(puVar38,0);
    uStack_a0._7_1_ = (undefined1)((ulong)puVar38 >> 0x38);
    uStack_f0 = 0;
    FUN_10a1b11d8(&uStack_1c0,&uStack_a0,&uStack_f0);
    if ((long *)CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0) + 8))();
    }
    lVar2 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
    uStack_d8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    if (lVar2 != 0) {
      func_0x00010a1cbbe4(&uStack_d8);
    }
    FUN_10a1b17a8(&uStack_a0,&uStack_1c0);
    if ((byte)ppppplStack_90 == 0) {
      ppppppplVar33 = (long *******)CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0);
      ppppppplVar31 = (long *******)CONCAT17(uStack_91,uStack_98);
      if (ppppppplVar31 != (long *******)0x0) {
        ppppppplVar30 = ppppppplVar31 + 1;
        do {
          cVar10 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
          if (bVar16) {
            *ppppppplVar30 = (long ******)((long)*ppppppplVar30 + 1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        goto LAB_10a949c98;
      }
      uVar28 = 0;
      uStack_c0._0_7_ = (undefined7)uStack_a0;
      uStack_c0._7_1_ = uStack_a0._7_1_;
      uStack_b8 = 0;
      uStack_b1 = 0;
    }
    else {
      ppppppplVar33 = (long *******)0x0;
      ppppppplVar31 = (long *******)0x0;
LAB_10a949c98:
      uVar28 = (ulong)ppppplStack_90 & 0xff;
      uStack_c0._0_7_ = SUB87(ppppppplVar33,0);
      uStack_c0._7_1_ = (undefined1)((ulong)ppppppplVar33 >> 0x38);
      uStack_b8 = SUB87(ppppppplVar31,0);
      uStack_b1 = (undefined1)((ulong)ppppppplVar31 >> 0x38);
      if (3 < (byte)ppppplStack_90) goto LAB_10a94a33c;
    }
    (*(code *)(&PTR_FUN_110ba20c8)[uVar28])(&uStack_a0);
    if (cStack_139 < '\0') {
      __ZdlPv(uStack_150);
    }
    if (lStack_168 != 0) {
      lStack_160 = lStack_168;
      __ZdlPv();
    }
    plVar27 = plStack_170;
    plStack_170 = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      (**(code **)(*plVar27 + 0x20))();
    }
    func_0x000104c4f944(&uStack_198);
    if (2 < (ulong)(byte)uStack_1a0) {
LAB_10a94a33c:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10a94a340);
      (*pcVar15)();
    }
    (*(code *)(&PTR_FUN_110ba20e8)[(byte)uStack_1a0])(&uStack_1a4);
    if (ppppppplVar33 == (long *******)0x0) {
      param_2 = (long *******)&UNK_10f68520f;
      ppuVar17 = (undefined **)&uStack_130;
      func_0x000107c2c4d8(ppuVar17,&UNK_10f68520f,0x22);
LAB_10a949e6c:
      lStack_1d0 = 0;
      ppppppplStack_1c8 = (long *******)0x0;
    }
    else {
      if (*(int *)((long)ppppppplVar33 + 0x24) != 3) {
        __ZNSt3__19to_stringEi(&uStack_a0);
        puVar18 = &uStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar18,0,&UNK_10f685232,0x27);
        ppppppplStack_1b8 = (long *******)puVar18[1];
        uStack_1c0 = (long *******)*puVar18;
        uVar23 = puVar18[2];
        uStack_1b0 = (undefined2)uVar23;
        uStack_1ae = (undefined1)((ulong)uVar23 >> 0x10);
        uStack_1ad = (undefined4)((ulong)uVar23 >> 0x18);
        cStack_1a9 = (char)((ulong)uVar23 >> 0x38);
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        param_2 = (long *******)&DAT_10f684600;
        ppuVar17 = (undefined **)&uStack_1c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar17,&DAT_10f684600,1);
        pppppplVar22 = (long ******)*ppuVar17;
        uStack_d8._0_4_ = SUB84(ppuVar17[1],0);
        uStack_d8._4_3_ = (undefined3)((ulong)ppuVar17[1] >> 0x20);
        uStack_d8._7_1_ = (char)*(undefined8 *)((long)ppuVar17 + 0xf);
        uStack_d0 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar17 + 0xf) >> 8);
        bVar8 = *(byte *)((long)ppuVar17 + 0x17);
        ppppppplVar33 = (long *******)(ulong)bVar8;
        ppuVar17[1] = (undefined *)0x0;
        ppuVar17[2] = (undefined *)0x0;
        *ppuVar17 = (undefined *)0x0;
        if ((char)bStack_119 < '\0') {
          ppuVar17 = (undefined **)
                     CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
          __ZdlPv();
        }
        uStack_130._0_1_ = SUB81(pppppplVar22,0);
        uStack_130._1_6_ = (undefined6)((ulong)pppppplVar22 >> 8);
        uStack_130._7_1_ = (undefined1)((ulong)pppppplVar22 >> 0x38);
        uStack_128 = (undefined7)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
        uStack_121 = uStack_d8._7_1_;
        uStack_120 = uStack_d0;
        bStack_119 = bVar8;
        if (cStack_1a9 < '\0') {
          ppuVar17 = (undefined **)uStack_1c0;
          __ZdlPv();
        }
        goto LAB_10a949e6c;
      }
      FUN_10a1b498c(&uStack_1c0,3,1);
      uStack_d8._0_4_ = 0;
      uStack_a0._0_7_ = SUB87(ppppppplVar33[2],0);
      uStack_a0._7_1_ = (undefined1)((ulong)ppppppplVar33[2] >> 0x38);
      ppuVar17 = (undefined **)uStack_1c0;
      param_2 = ppppppplVar33;
      (*(code *)**uStack_1c0)(&lStack_1d0,uStack_1c0,ppppppplVar33,&uStack_d8,&uStack_a0);
      ppppppplVar31 = ppppppplStack_1b8;
      if (ppppppplStack_1b8 != (long *******)0x0) {
        ppppppplVar30 = ppppppplStack_1b8 + 1;
        do {
          pppppplVar22 = *ppppppplVar30;
          cVar10 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
          if (bVar16) {
            *ppppppplVar30 = (long ******)((long)pppppplVar22 + -1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (pppppplVar22 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_1b8)[2])(ppppppplStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar17 = (undefined **)ppppppplVar31;
        }
      }
      ppppppplVar31 = (long *******)CONCAT17(uStack_b1,uStack_b8);
    }
    if (ppppppplVar31 != (long *******)0x0) {
      ppppppplVar30 = ppppppplVar31 + 1;
      do {
        pppppplVar22 = *ppppppplVar30;
        cVar10 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar30,0x10);
        if (bVar16) {
          *ppppppplVar30 = (long ******)((long)pppppplVar22 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppppplVar22 == (long ******)0x0) {
        (*(code *)(*ppppppplVar31)[2])(ppppppplVar31);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar17 = (undefined **)ppppppplVar31;
      }
    }
    lVar2 = lStack_1d0;
    if (lStack_1d0 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        uVar23 = 0x7d;
        puVar20 = &UNK_10f684538;
        if ((char)bStack_119 < '\0') {
LAB_10a94a178:
          puStack_200 = (undefined1 *)
                        CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130))
          ;
        }
        else {
LAB_10a94a000:
          puStack_200 = (undefined1 *)&uStack_130;
        }
        ppuVar17 = (undefined **)0x0;
        param_2 = (long *******)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f684446,puVar20,uVar23,&UNK_10f6845ae);
      }
LAB_10a94a19c:
      ppppppplVar30 = (long *******)0xffffffff;
    }
    else {
      ppuVar17 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      if ((long ******)*ppuVar17 != (long ******)0x0) {
        uVar6 = *(uint *)(lVar2 + 0x10);
        uVar28 = (ulong)uVar6;
        if (*(long *)(lVar2 + 0x18) != uVar28 * 4) {
          __ZNSt3__19to_stringEm(&uStack_d8);
          puVar18 = &uStack_d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar18,0,&UNK_10f6845cf,0x27);
          uStack_b0 = puVar18[2];
          uStack_b8 = (undefined7)puVar18[1];
          uStack_b1 = (undefined1)((ulong)puVar18[1] >> 0x38);
          uStack_c0._0_7_ = (undefined7)*puVar18;
          uStack_c0._7_1_ = (undefined1)((ulong)*puVar18 >> 0x38);
          puVar18[1] = 0;
          puVar18[2] = 0;
          *puVar18 = 0;
          puVar18 = &uStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar18,&UNK_10f6845f7,8);
          ppppplStack_90 = (long *****)puVar18[2];
          uStack_98 = (undefined7)puVar18[1];
          uStack_91 = (undefined1)((ulong)puVar18[1] >> 0x38);
          uStack_a0._0_7_ = (undefined7)*puVar18;
          uStack_a0._7_1_ = (undefined1)((ulong)*puVar18 >> 0x38);
          puVar18[1] = 0;
          puVar18[2] = 0;
          *puVar18 = 0;
          __ZNSt3__19to_stringEj(&uStack_f0,uVar28);
          uVar28 = CONCAT17(uStack_e1,uStack_e8);
          puVar13 = (undefined2 *)CONCAT17(uStack_e9,CONCAT52(uStack_ee,uStack_f0));
          if (-1 < (char)bStack_d9) {
            uVar28 = (ulong)bStack_d9;
            puVar13 = &uStack_f0;
          }
          puVar18 = &uStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar18,puVar13,uVar28);
          ppppppplStack_1b8 = (long *******)puVar18[1];
          uStack_1c0 = (long *******)*puVar18;
          uVar23 = puVar18[2];
          uStack_1b0 = (undefined2)uVar23;
          uStack_1ae = (undefined1)((ulong)uVar23 >> 0x10);
          uStack_1ad = (undefined4)((ulong)uVar23 >> 0x18);
          cStack_1a9 = (char)((ulong)uVar23 >> 0x38);
          puVar18[1] = 0;
          puVar18[2] = 0;
          *puVar18 = 0;
          param_2 = (long *******)&DAT_10f684600;
          ppuVar17 = (undefined **)&uStack_1c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppuVar17,&DAT_10f684600,1);
          pppppplVar22 = (long ******)*ppuVar17;
          uStack_88 = SUB87(ppuVar17[1],0);
          uStack_81 = (undefined1)*(undefined8 *)((long)ppuVar17 + 0xf);
          uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar17 + 0xf) >> 8);
          bVar8 = *(byte *)((long)ppuVar17 + 0x17);
          ppuVar17[1] = (undefined *)0x0;
          ppuVar17[2] = (undefined *)0x0;
          *ppuVar17 = (undefined *)0x0;
          if ((char)bStack_119 < '\0') {
            ppuVar17 = (undefined **)
                       CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
            __ZdlPv();
          }
          uStack_130._0_1_ = SUB81(pppppplVar22,0);
          uStack_130._1_6_ = (undefined6)((ulong)pppppplVar22 >> 8);
          uStack_130._7_1_ = (undefined1)((ulong)pppppplVar22 >> 0x38);
          uStack_128 = uStack_88;
          uStack_121 = uStack_81;
          uStack_120 = uStack_80;
          bStack_119 = bVar8;
          if (cStack_1a9 < '\0') {
            ppuVar17 = (undefined **)uStack_1c0;
            __ZdlPv();
          }
          if ((bRam000000011330a9e8 & 1) != 0) {
            uVar23 = 0x93;
            puVar20 = &UNK_10f684602;
            if (-1 < (char)bStack_119) goto LAB_10a94a000;
            goto LAB_10a94a178;
          }
          goto LAB_10a94a19c;
        }
        uVar7 = *(uint *)(lVar2 + 0x14);
        ppppppplVar33 = (long *******)(ulong)uVar7;
        unaff_x22 = *(long ********)(plVar35[6] + 0x288);
        if (((unaff_x22 == (long *******)0x0) ||
            (ppppppplVar31 = unaff_x22, (*(code *)(*unaff_x22)[5])(), (uint)ppppppplVar31 != uVar6))
           || (ppppppplVar31 = unaff_x22, (*(code *)(*unaff_x22)[6])(), (uint)ppppppplVar31 != uVar7
              )) {
          lVar34 = plVar35[6];
          lVar19 = *plVar35;
          FUN_10a2421c8();
          uStack_1a4 = 0;
          uStack_1a0 = 1;
          uStack_1c0 = (long *******)CONCAT44(uVar7,uVar6);
          uStack_1b0 = 0;
          uStack_1ae = 0;
          uStack_1ad = 0x100;
          cStack_1a9 = '\0';
          ppppppplStack_1b8 = (long *******)0x400000001;
          uStack_1a8 = uStack_1a8 & 0xffffff00;
          FUN_10a048f04(&uStack_a0,*(undefined8 *)(lVar19 + 0x1e0),&uStack_1c0);
          *(undefined1 *)(CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0) + 0x19) = 1;
          FUN_10a1db4cc(lVar34,&uStack_a0);
          plVar27 = (long *)CONCAT17(uStack_91,uStack_98);
          if (plVar27 != (long *)0x0) {
            plVar1 = plVar27 + 1;
            do {
              lVar19 = *plVar1;
              cVar10 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar16) {
                *plVar1 = lVar19 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
            }
          }
          unaff_x22 = *(long ********)(plVar35[6] + 0x288);
        }
        puStack_200 = (undefined1 *)0x0;
        param_2 = (long *******)0x0;
        ppuVar17 = (undefined **)unaff_x22;
        (*(code *)(*unaff_x22)[0x14])
                  (unaff_x22,0,0,0,uVar28,ppppppplVar33,1,*(undefined8 *)(lVar2 + 0x28));
      }
      ppppppplVar30 = (long *******)(ulong)uStack_f8;
    }
    ppppppplVar31 = ppppppplStack_1c8;
    if (ppppppplStack_1c8 != (long *******)0x0) {
      ppppppplVar3 = ppppppplStack_1c8 + 1;
      do {
        pppppplVar22 = *ppppppplVar3;
        cVar10 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar3,0x10);
        if (bVar16) {
          *ppppppplVar3 = (long ******)((long)pppppplVar22 + -1);
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (pppppplVar22 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_1c8)[2])(ppppppplStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar17 = (undefined **)ppppppplVar31;
      }
    }
    if ((long)uStack_100 < 0) {
      ppuVar17 = (undefined **)CONCAT17(uStack_110._7_1_,(undefined7)uStack_110);
      __ZdlPv();
    }
    iStack_1d4 = (int)ppppppplVar30;
    if (iStack_1d4 == -1) goto LAB_10a94a204;
    ppuVar17 = *(undefined ***)(param_1 + 0xa8);
    param_2 = (long *******)&iStack_1d4;
    FUN_10a94a680(ppuVar17,param_2);
  }
LAB_10a94a234:
  if ((char)bStack_119 < '\0') {
    ppuVar17 = (undefined **)
               CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
    __ZdlPv();
  }
LAB_10a94a244:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((long)uStack_100 < 0) {
    __ZdlPv(CONCAT17(uStack_110._7_1_,(undefined7)uStack_110));
  }
  func_0x00010a94bbc0(&uStack_1c0);
  ppppppplVar31 = (long *******)ppuVar17;
  __Unwind_Resume();
  pcStack_208 = FUN_10a94a680;
  puStack_288 = (undefined8 *)0x0;
  lStack_290 = 0;
  lStack_278 = 0;
  plStack_280 = (long *)0x0;
  fStack_270 = *(float *)(ppppppplVar31 + 7);
  ppppplStack_260 = unaff_x28;
  ppppplStack_258 = unaff_x27;
  puStack_250 = puVar37;
  puStack_248 = &uStack_1c0;
  lStack_240 = param_1;
  plStack_238 = plVar35;
  ppppppplStack_230 = unaff_x22;
  ppppppplStack_228 = ppppppplVar33;
  ppppppplStack_220 = (long *******)ppuVar17;
  ppppppplStack_218 = ppppppplVar30;
  puStack_210 = &stack0xfffffffffffffff0;
  FUN_10a95bde0(&lStack_290,ppppppplVar31[4]);
  pppppplVar22 = ppppppplVar31[5];
  plVar35 = plStack_280;
  if (pppppplVar22 != (long ******)0x0) {
    do {
      puVar18 = puStack_288;
      ppppplVar24 = pppppplVar22[2];
      uVar28 = ((ulong)(uint)((int)ppppplVar24 << 3) + 8 ^ (ulong)ppppplVar24 >> 0x20) *
               -0x622015f714c7d297;
      uVar28 = ((ulong)ppppplVar24 >> 0x20 ^ uVar28 >> 0x2f ^ uVar28) * -0x622015f714c7d297;
      puVar38 = (undefined8 *)((uVar28 ^ uVar28 >> 0x2f) * -0x622015f714c7d297);
      if (puStack_288 != (undefined8 *)0x0) {
        uVar28 = (long)puStack_288 - 1;
        if (((ulong)puStack_288 & uVar28) == 0) {
          puVar37 = (undefined8 *)((ulong)puVar38 & uVar28);
        }
        else {
          puVar37 = puVar38;
          if (puStack_288 <= puVar38) {
            uVar26 = 0;
            if (puStack_288 != (undefined8 *)0x0) {
              uVar26 = (ulong)puVar38 / (ulong)puStack_288;
            }
            puVar37 = (undefined8 *)((long)puVar38 - uVar26 * (long)puStack_288);
          }
        }
        plVar35 = *(long **)(lStack_290 + (long)puVar37 * 8);
        if (plVar35 != (long *)0x0) {
          do {
            while( true ) {
              plVar35 = (long *)*plVar35;
              if (plVar35 == (long *)0x0) goto LAB_10a94a79c;
              puVar29 = (undefined8 *)plVar35[1];
              if (puVar29 != puVar38) break;
              if ((long *****)plVar35[2] == ppppplVar24) goto LAB_10a94a8fc;
            }
            if (((ulong)puStack_288 & uVar28) == 0) {
              puVar29 = (undefined8 *)((ulong)puVar29 & uVar28);
            }
            else if (puStack_288 <= puVar29) {
              uVar26 = 0;
              if (puStack_288 != (undefined8 *)0x0) {
                uVar26 = (ulong)puVar29 / (ulong)puStack_288;
              }
              puVar29 = (undefined8 *)((long)puVar29 - uVar26 * (long)puStack_288);
            }
          } while (puVar29 == puVar37);
        }
      }
LAB_10a94a79c:
      plVar35 = (long *)0x68;
      __Znwm();
      *plVar35 = 0;
      plVar35[1] = (long)puVar38;
      ppppplVar24 = pppppplVar22[3];
      ppppplVar39 = pppppplVar22[2];
      plVar35[3] = (long)pppppplVar22[3];
      plVar35[2] = (long)ppppplVar39;
      if (ppppplVar24 != (long *****)0x0) {
        ppppplVar24 = ppppplVar24 + 1;
        do {
          cVar10 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppplVar24,0x10);
          if (bVar16) {
            *ppppplVar24 = (long ****)((long)*ppppplVar24 + 1);
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      plStack_268 = plVar35 + 4;
      *(undefined1 *)(plVar35 + 0xc) = 3;
      if (*(char *)(pppppplVar22 + 0xc) == '\0') {
        uVar21 = 0;
      }
      else {
        FUN_10a005398(&plStack_268,pppppplVar22 + 4);
        uVar21 = *(undefined1 *)(pppppplVar22 + 0xc);
      }
      *(undefined1 *)(plVar35 + 0xc) = uVar21;
      if ((puVar18 == (undefined8 *)0x0) || (fStack_270 * (float)puVar18 < (float)(lStack_278 + 1)))
      {
        uVar28 = 1;
        if ((undefined8 *)0x2 < puVar18) {
          uVar28 = (ulong)(((ulong)puVar18 & (long)puVar18 - 1U) != 0);
        }
        uVar28 = uVar28 | (long)puVar18 << 1;
        uVar26 = (ulong)((float)(lStack_278 + 1) / fStack_270);
        if (uVar28 <= uVar26) {
          uVar28 = uVar26;
        }
        FUN_10a95bde0(&lStack_290,uVar28);
        puVar18 = puStack_288;
        if (((ulong)puStack_288 & (long)puStack_288 - 1U) == 0) {
          puVar37 = (undefined8 *)((long)puStack_288 - 1U & (ulong)puVar38);
        }
        else {
          puVar37 = puVar38;
          if (puStack_288 <= puVar38) {
            uVar28 = 0;
            if (puStack_288 != (undefined8 *)0x0) {
              uVar28 = (ulong)puVar38 / (ulong)puStack_288;
            }
            puVar37 = (undefined8 *)((long)puVar38 - uVar28 * (long)puStack_288);
          }
        }
      }
      plVar27 = *(long **)(lStack_290 + (long)puVar37 * 8);
      if (plVar27 == (long *)0x0) {
        *plVar35 = (long)plStack_280;
        *(long ***)(lStack_290 + (long)puVar37 * 8) = &plStack_280;
        plStack_280 = plVar35;
        if (*plVar35 != 0) {
          puVar38 = *(undefined8 **)(*plVar35 + 8);
          if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
            puVar38 = (undefined8 *)((ulong)puVar38 & (long)puVar18 - 1U);
          }
          else if (puVar18 <= puVar38) {
            uVar28 = 0;
            if (puVar18 != (undefined8 *)0x0) {
              uVar28 = (ulong)puVar38 / (ulong)puVar18;
            }
            puVar38 = (undefined8 *)((long)puVar38 - uVar28 * (long)puVar18);
          }
          *(long **)(lStack_290 + (long)puVar38 * 8) = plVar35;
        }
      }
      else {
        *plVar35 = *plVar27;
        *plVar27 = (long)plVar35;
      }
      lStack_278 = lStack_278 + 1;
LAB_10a94a8fc:
      pppppplVar22 = (long ******)*pppppplVar22;
      plVar35 = plStack_280;
    } while (pppppplVar22 != (long ******)0x0);
  }
  for (; plVar35 != (long *)0x0; plVar35 = (long *)*plVar35) {
    ppppppplVar33 = ppppppplVar31 + 3;
    FUN_10a95c328(ppppppplVar33,plVar35[2]);
    if (ppppppplVar33 != (long *******)0x0) {
      FUN_10a07ead0(plVar35 + 4,param_2);
    }
  }
  FUN_10a95ce94(&lStack_290);
  return;
}



/* Entry: 10a94a680; end: 10a94a99f;  */

void FUN_10a94a680(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong unaff_x26;
  long lVar14;
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  long lStack_78;
  float fStack_70;
  long *plStack_68;
  
  uStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  plStack_80 = (long *)0x0;
  fStack_70 = *(float *)(param_1 + 0x38);
  FUN_10a95bde0(&lStack_90,*(undefined8 *)(param_1 + 0x20));
  plVar13 = *(long **)(param_1 + 0x28);
  plVar11 = plStack_80;
  if (plVar13 != (long *)0x0) {
    do {
      uVar8 = uStack_88;
      uVar5 = plVar13[2];
      uVar10 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (uVar5 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      if (uStack_88 != 0) {
        uVar7 = uStack_88 - 1;
        if ((uStack_88 & uVar7) == 0) {
          unaff_x26 = uVar10 & uVar7;
        }
        else {
          unaff_x26 = uVar10;
          if (uStack_88 <= uVar10) {
            uVar12 = 0;
            if (uStack_88 != 0) {
              uVar12 = uVar10 / uStack_88;
            }
            unaff_x26 = uVar10 - uVar12 * uStack_88;
          }
        }
        plVar11 = *(long **)(lStack_90 + unaff_x26 * 8);
        if (plVar11 != (long *)0x0) {
          do {
            while( true ) {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) goto LAB_10a94a79c;
              uVar12 = plVar11[1];
              if (uVar12 != uVar10) break;
              if (plVar11[2] == uVar5) goto LAB_10a94a8fc;
            }
            if ((uStack_88 & uVar7) == 0) {
              uVar12 = uVar12 & uVar7;
            }
            else if (uStack_88 <= uVar12) {
              uVar3 = 0;
              if (uStack_88 != 0) {
                uVar3 = uVar12 / uStack_88;
              }
              uVar12 = uVar12 - uVar3 * uStack_88;
            }
          } while (uVar12 == unaff_x26);
        }
      }
LAB_10a94a79c:
      plVar11 = (long *)0x68;
      __Znwm();
      *plVar11 = 0;
      plVar11[1] = uVar10;
      lVar6 = plVar13[3];
      lVar14 = plVar13[2];
      plVar11[3] = plVar13[3];
      plVar11[2] = lVar14;
      if (lVar6 != 0) {
        plVar9 = (long *)(lVar6 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_68 = plVar11 + 4;
      *(undefined1 *)(plVar11 + 0xc) = 3;
      if ((char)plVar13[0xc] == '\0') {
        uVar4 = 0;
      }
      else {
        FUN_10a005398(&plStack_68,plVar13 + 4);
        uVar4 = (undefined1)plVar13[0xc];
      }
      *(undefined1 *)(plVar11 + 0xc) = uVar4;
      if ((uVar8 == 0) || (fStack_70 * (float)uVar8 < (float)(lStack_78 + 1))) {
        uVar5 = 1;
        if (2 < uVar8) {
          uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
        }
        uVar5 = uVar5 | uVar8 << 1;
        uVar8 = (ulong)((float)(lStack_78 + 1) / fStack_70);
        if (uVar5 <= uVar8) {
          uVar5 = uVar8;
        }
        FUN_10a95bde0(&lStack_90,uVar5);
        uVar8 = uStack_88;
        if ((uStack_88 & uStack_88 - 1) == 0) {
          unaff_x26 = uStack_88 - 1 & uVar10;
        }
        else {
          unaff_x26 = uVar10;
          if (uStack_88 <= uVar10) {
            uVar5 = 0;
            if (uStack_88 != 0) {
              uVar5 = uVar10 / uStack_88;
            }
            unaff_x26 = uVar10 - uVar5 * uStack_88;
          }
        }
      }
      plVar9 = *(long **)(lStack_90 + unaff_x26 * 8);
      if (plVar9 == (long *)0x0) {
        *plVar11 = (long)plStack_80;
        *(long ***)(lStack_90 + unaff_x26 * 8) = &plStack_80;
        plStack_80 = plVar11;
        if (*plVar11 != 0) {
          uVar5 = *(ulong *)(*plVar11 + 8);
          if ((uVar8 & uVar8 - 1) == 0) {
            uVar5 = uVar5 & uVar8 - 1;
          }
          else if (uVar8 <= uVar5) {
            uVar10 = 0;
            if (uVar8 != 0) {
              uVar10 = uVar5 / uVar8;
            }
            uVar5 = uVar5 - uVar10 * uVar8;
          }
          *(long **)(lStack_90 + uVar5 * 8) = plVar11;
        }
      }
      else {
        *plVar11 = *plVar9;
        *plVar9 = (long)plVar11;
      }
      lStack_78 = lStack_78 + 1;
LAB_10a94a8fc:
      plVar13 = (long *)*plVar13;
      plVar11 = plStack_80;
    } while (plVar13 != (long *)0x0);
  }
  for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
    lVar6 = param_1 + 0x18;
    FUN_10a95c328(lVar6,plVar11[2]);
    if (lVar6 != 0) {
      FUN_10a07ead0(plVar11 + 4,param_2);
    }
  }
  FUN_10a95ce94(&lStack_90);
  return;
}



/* Entry: 10a94a9a0; end: 10a94aacb;  */

void FUN_10a94a9a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  char cStack_49;
  
  cStack_49 = '\x12';
  uStack_50 = 0x4553;
  uStack_58 = 0x4e4f505345525f44;
  uStack_60 = 0x454d524f464c414d;
  uStack_4e = 0;
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a94aa98);
    (*pcVar2)();
  }
  if (param_3 < 0x17) {
    uStack_68 = CONCAT17((char)param_3,(undefined7)uStack_68);
    pppuVar3 = &ppuStack_78;
    if (param_3 == 0) goto LAB_10a94aa44;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar3 = pppuVar1;
    __Znwm();
    uStack_68 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_78 = pppuVar3;
    uStack_70 = param_3;
  }
  _memmove(pppuVar3,param_2,param_3);
LAB_10a94aa44:
  *(undefined1 *)((long)pppuVar3 + param_3) = 0;
  FUN_10a94ba80(param_1,&uStack_60,&ppuStack_78);
  if ((long)uStack_68 < 0) {
    __ZdlPv(ppuStack_78);
  }
  if (cStack_49 < '\0') {
    __ZdlPv(uStack_60);
  }
  return;
}



/* Entry: 10a94aacc; end: 10a94aad3;  */

/* WARNING: Removing unreachable block (ram,0x00010a94a140) */
/* WARNING: Removing unreachable block (ram,0x00010a94a120) */
/* WARNING: Removing unreachable block (ram,0x00010a949e64) */
/* WARNING: Removing unreachable block (ram,0x00010a94a130) */
/* WARNING: Removing unreachable block (ram,0x00010a94a150) */
/* WARNING: Removing unreachable block (ram,0x00010a9495c8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a94aacc(long param_1,long *******param_2)

{
  long *plVar1;
  long *******ppppppplVar2;
  long ****pppplVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  undefined2 *puVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  bool bVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined1 uVar22;
  long ******pppppplVar23;
  undefined8 uVar24;
  long *****ppppplVar25;
  long ***ppplVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *******ppppppplVar31;
  long *******ppppppplVar32;
  long ******pppppplVar33;
  long *******ppppppplVar34;
  long lVar35;
  long *******unaff_x22;
  long *plVar36;
  long ****pppplVar37;
  undefined8 *puVar38;
  long *****unaff_x27;
  undefined8 *puVar39;
  long *****unaff_x28;
  long *****ppppplVar40;
  long lStack_290;
  undefined8 *puStack_288;
  long *plStack_280;
  long lStack_278;
  float fStack_270;
  long *plStack_268;
  long *****ppppplStack_260;
  long *****ppppplStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  long *plStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 *puStack_200;
  long *****ppppplStack_1f0;
  long *****ppppplStack_1e8;
  long lStack_1e0;
  int iStack_1d4;
  long lStack_1d0;
  long *******ppppppplStack_1c8;
  undefined8 uStack_1c0;
  long *******ppppppplStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined4 uStack_1ad;
  char cStack_1a9;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  char cStack_189;
  long *******ppppppplStack_188;
  undefined4 uStack_180;
  undefined2 uStack_17c;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined7 uStack_178;
  byte bStack_171;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_150;
  char cStack_139;
  undefined8 uStack_130;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  byte bStack_119;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  ulong uStack_100;
  uint uStack_f8;
  undefined2 uStack_f0;
  undefined5 uStack_ee;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  byte bStack_d9;
  undefined8 uStack_d8;
  undefined7 uStack_d0;
  undefined8 uStack_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  long *****ppppplStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_78;
  
  lVar20 = param_1 + -0x28;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = *(int *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  uStack_1c0 = (long *******)CONCAT44(uStack_1c0._4_4_,iVar4);
  if (iVar4 != -1) {
    param_2 = (long *******)&uStack_1c0;
    FUN_10a94a680(*(undefined8 *)(param_1 + 0x70),param_2);
  }
  ppppppplVar32 = *(long ********)(param_1 + 0xa0);
  lStack_1e0 = lVar20;
  if ((ppppppplVar32[0x48] == (long ******)0x0) || (((uint)ppppppplVar32[0x48][2] >> 1 & 1) == 0)) {
LAB_10a9496ec:
    uStack_a0._0_7_ = 0;
    uStack_a0._7_1_ = 0;
    uStack_98 = 0;
    uStack_91 = 0;
    ppppplStack_90 = (long *****)0x0;
    pppppplVar33 = ppppppplVar32[0x51];
    __ZNSt3__15mutex4lockEv(pppppplVar33);
    pppppplVar23 = ppppppplVar32[0x51];
    unaff_x27 = pppppplVar23[9];
    uStack_a0._0_7_ = SUB87(unaff_x27,0);
    uStack_a0._7_1_ = (undefined1)((ulong)unaff_x27 >> 0x38);
    ppppplStack_1e8 = pppppplVar23[0xb];
    ppppplStack_1f0 = pppppplVar23[10];
    pppppplVar23[9] = (long *****)0x0;
    pppppplVar23[10] = (long *****)0x0;
    uStack_98 = SUB87(ppppplStack_1f0,0);
    uStack_91 = (undefined1)((ulong)ppppplStack_1f0 >> 0x38);
    pppppplVar23[0xb] = (long *****)0x0;
    ppppplStack_90 = ppppplStack_1e8;
    __ZNSt3__15mutex6unlockEv(pppppplVar33);
    unaff_x28 = ppppplStack_1f0;
    if (unaff_x27 != ppppplStack_1f0) {
      unaff_x22 = (long *******)&uStack_1c0;
      do {
        bVar7 = *(byte *)unaff_x27;
        if (bVar7 < 2) {
          if (bVar7 == 0) {
            if (*(char *)(ppppppplVar32 + 0x3c) == '\x02') {
              *(undefined1 *)(ppppppplVar32 + 0x3c) = 3;
              (*(code *)ppppppplVar32[0x1c])(ppppppplVar32 + 0x1c);
            }
          }
          else if (bVar7 == 1) {
            bVar7 = *(byte *)(unaff_x27 + 1);
            if (bVar7 == 6) {
              if ((bRam000000011330a9e8 & 1) != 0) {
                func_0x00010ae06f08(0,1,&UNK_10f684963,&UNK_10f684c44,0x13b,&UNK_10f684cc6);
              }
              cStack_1a9 = '\x12';
              uStack_1b0 = 0x4553;
              ppppppplStack_1b8 = (long *******)0x4e4f505345525f44;
              uStack_1c0 = (long *******)0x454d524f464c414d;
              uStack_1ae = 0;
              uStack_110._0_7_ = 0;
              uStack_110._7_1_ = 0;
              uStack_108 = 0;
              uStack_101 = 0;
              uStack_100 = 0;
              param_2 = (long *******)&uStack_1c0;
              func_0x00010a94ba80(ppppppplVar32,param_2,&uStack_110);
LAB_10a949944:
              if ((long)uStack_100 < 0) {
                __ZdlPv(CONCAT17(uStack_110._7_1_,(undefined7)uStack_110));
              }
              if (cStack_1a9 < '\0') {
                __ZdlPv(uStack_1c0);
              }
            }
            else {
              if (bVar7 == 5) {
                cStack_1a9 = '\x11';
                uStack_1b0 = 0x44;
                ppppppplStack_1b8 = (long *******)0x454c4941465f4e4f;
                uStack_1c0 = (long *******)0x49544152454e4547;
                uStack_110._0_7_ = 0;
                uStack_110._7_1_ = 0;
                uStack_108 = 0;
                uStack_101 = 0;
                uStack_100 = 0;
                param_2 = (long *******)&uStack_1c0;
                func_0x00010a94ba80(ppppppplVar32,param_2,&uStack_110);
                goto LAB_10a949944;
              }
              if (((bVar7 == 3) && (*(char *)(ppppppplVar32 + 0x3c) != '\0')) &&
                 (*(char *)(ppppppplVar32 + 0x3c) != '\x06')) {
                FUN_10a94aff8(ppppppplVar32);
                if (*(char *)(ppppppplVar32 + 0x41) == '\x01') {
                  if (*(char *)((long)ppppppplVar32 + 0x207) < '\0') {
                    __ZdlPv(ppppppplVar32[0x3e]);
                  }
                  *(undefined1 *)(ppppppplVar32 + 0x41) = 0;
                }
                *(undefined1 *)(ppppppplVar32 + 0x3c) = 0;
                (*(code *)ppppppplVar32[0x2c])(ppppppplVar32 + 0x2c);
              }
            }
            if (*(byte *)(ppppppplVar32 + 0x3c) - 3 < 2) {
              pppplVar37 = unaff_x27[5];
              pppplVar3 = unaff_x27[6];
              while ((pppplVar37 != pppplVar3 && (*(byte *)(ppppppplVar32 + 0x3c) - 3 < 2))) {
                pppppplVar23 = ppppppplVar32[0x34];
                ppplVar26 = pppplVar37[2];
                ppppppplStack_1b8 = (long *******)pppplVar37[1];
                uStack_1c0 = (long *******)*pppplVar37;
                uStack_1b0 = SUB82(ppplVar26,0);
                uStack_1ae = (undefined1)((ulong)ppplVar26 >> 0x10);
                uStack_1ad = (undefined4)((ulong)ppplVar26 >> 0x18);
                cStack_1a9 = (char)((ulong)ppplVar26 >> 0x38);
                pppplVar37[1] = (long ***)0x0;
                pppplVar37[2] = (long ***)0x0;
                *pppplVar37 = (long ***)0x0;
                uStack_1a8 = (uint)pppplVar37[3];
                uStack_1a4 = (int)((ulong)pppplVar37[3] >> 0x20);
                param_2 = ppppppplVar32 + 0x34;
                (*(code *)pppppplVar23)(&uStack_1c0,param_2);
                if (cStack_1a9 < '\0') {
                  __ZdlPv(uStack_1c0);
                }
                pppplVar37 = pppplVar37 + 4;
              }
            }
          }
        }
        else {
          if (bVar7 == 2) {
            lVar20 = 0xf;
            puVar21 = &DAT_10f685323;
            if (1 < *(byte *)(ppppppplVar32 + 0x3c) - 3) {
              lVar20 = 0xd;
              puVar21 = &DAT_10f685338;
            }
            cStack_1a9 = (char)lVar20;
            _memcpy(&uStack_1c0,puVar21,lVar20);
            *(undefined1 *)((long)unaff_x22 + lVar20) = 0;
            param_2 = (long *******)&uStack_1c0;
            func_0x00010a94ba80(ppppppplVar32,param_2,unaff_x27 + 8);
          }
          else {
            if (bVar7 != 3) goto LAB_10a9499d8;
            lVar20 = 0xf;
            puVar21 = &DAT_10f685323;
            if (1 < *(byte *)(ppppppplVar32 + 0x3c) - 3) {
              lVar20 = 0xd;
              puVar21 = &DAT_10f685338;
            }
            cStack_1a9 = (char)lVar20;
            _memcpy(&uStack_1c0,puVar21,lVar20);
            *(undefined1 *)((long)unaff_x22 + lVar20) = 0;
            param_2 = (long *******)&uStack_1c0;
            func_0x00010a94ba80(ppppppplVar32,param_2,unaff_x27 + 8);
          }
          if (cStack_1a9 < '\0') {
            __ZdlPv(uStack_1c0);
          }
        }
LAB_10a9499d8:
        unaff_x27 = unaff_x27 + 0xb;
      } while (unaff_x27 != unaff_x28);
    }
    ppuVar17 = (undefined **)&uStack_a0;
    func_0x00010a94bb20();
    lVar20 = lStack_1e0;
  }
  else {
    ppppppplVar34 = ppppppplVar32 + 0x48;
    uStack_1c0 = (long *******)CONCAT71(uStack_1c0._1_7_,2);
    uStack_1b0 = 0;
    uStack_1ae = 0;
    uStack_1ad = 0;
    cStack_1a9 = '\0';
    ppppppplStack_1b8 = (long *******)0x0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_190 = 0;
    cStack_189 = '\0';
    uStack_198 = 0;
    uStack_191 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_17a = 0;
    uStack_179 = 0;
    ppppppplStack_188 = (long *******)0x0;
    uStack_178 = 0;
    bStack_171 = 0;
    if (((uint)(*ppppppplVar34)[2] >> 5 & 1) == 0) {
      func_0x0001092af8bc(ppppppplVar34);
      pppppplVar23 = *ppppppplVar34;
      if (((ulong)pppppplVar23[0x1d] & 1) == 0) goto LAB_10a94a33c;
      bVar7 = *(byte *)(pppppplVar23 + 0x13);
      unaff_x28 = (long *****)(ulong)bVar7;
      ppppppplVar31 = (long *******)pppppplVar23[0x14];
      uStack_110._0_7_ = SUB87(pppppplVar23[0x15],0);
      uStack_110._7_1_ = (undefined1)*(undefined8 *)((long)pppppplVar23 + 0xaf);
      uStack_108 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar23 + 0xaf) >> 8);
      bVar8 = *(byte *)((long)pppppplVar23 + 0xb7);
      unaff_x27 = (long *****)(ulong)bVar8;
      pppppplVar23[0x14] = (long *****)0x0;
      pppppplVar23[0x15] = (long *****)0x0;
      ppppplVar25 = pppppplVar23[0x17];
      uStack_a0._0_7_ = SUB87(pppppplVar23[0x18],0);
      uStack_a0._7_1_ = (undefined1)*(undefined8 *)((long)pppppplVar23 + 199);
      uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar23 + 199) >> 8);
      cVar9 = *(char *)((long)pppppplVar23 + 0xcf);
      pppppplVar23[0x16] = (long *****)0x0;
      pppppplVar23[0x17] = (long *****)0x0;
      pppppplVar23[0x18] = (long *****)0x0;
      pppppplVar23[0x19] = (long *****)0x0;
      ppppppplVar2 = (long *******)pppppplVar23[0x1a];
      uStack_b8 = (undefined7)((ulong)*(undefined8 *)((long)pppppplVar23 + 0xdf) >> 8);
      uStack_c0._0_7_ = SUB87(pppppplVar23[0x1b],0);
      uStack_c0._7_1_ = (undefined1)((ulong)pppppplVar23[0x1b] >> 0x38);
      bVar10 = *(byte *)((long)pppppplVar23 + 0xe7);
      unaff_x22 = (long *******)(ulong)bVar10;
      pppppplVar23[0x1a] = (long *****)0x0;
      pppppplVar23[0x1b] = (long *****)0x0;
      pppppplVar23[0x1c] = (long *****)0x0;
      ppuVar17 = (undefined **)*ppppppplVar34;
      *ppppppplVar34 = (long ******)0x0;
      if ((long *******)ppuVar17 != (long *******)0x0) {
        ppppppplVar34 = (long *******)(ppuVar17 + 1);
        do {
          pppppplVar23 = *ppppppplVar34;
          cVar11 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar34,0x10);
          if (bVar16) {
            *ppppppplVar34 = (long ******)((long)pppppplVar23 + -4);
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (((ulong)pppppplVar23 & 0x1fffffffc) == 4) {
          do {
            pppppplVar23 = *ppppppplVar34;
            cVar11 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar34,0x10);
            if (bVar16) {
              *ppppppplVar34 = (long ******)((long)pppppplVar23 + -1);
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if ((long ******)((long)pppppplVar23 + -1) == (long ******)0x0) {
            (*(code *)*(long ******)((long)*ppuVar17 + 8))();
          }
        }
      }
      uStack_d8._0_4_ = (undefined4)(undefined7)uStack_110;
      uStack_d8._4_3_ = (undefined3)((uint7)(undefined7)uStack_110 >> 0x20);
      uStack_d8._4_4_ = CONCAT13(uStack_110._7_1_,uStack_d8._4_3_);
      uStack_d0 = uStack_108;
      uStack_f0 = (undefined2)(undefined7)uStack_a0;
      uStack_ee = (undefined5)((uint7)(undefined7)uStack_a0 >> 0x10);
      uStack_e9 = uStack_a0._7_1_;
      uStack_e8 = uStack_98;
      uStack_130._0_1_ = (undefined1)(undefined7)uStack_c0;
      uStack_130._1_6_ = (undefined6)((uint7)(undefined7)uStack_c0 >> 8);
      uStack_130._7_1_ = uStack_c0._7_1_;
      uStack_128 = uStack_b8;
      uStack_1c0 = (long *******)CONCAT71(uStack_1c0._1_7_,bVar7);
      if (uStack_1a4 < 0) {
        __ZdlPv();
        ppuVar17 = (undefined **)ppppppplStack_1b8;
      }
      uStack_1b0 = (undefined2)(undefined4)uStack_d8;
      uStack_1ae = (undefined1)((uint)(undefined4)uStack_d8 >> 0x10);
      uStack_1ad = (undefined4)(CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8) >> 0x18);
      cStack_1a9 = uStack_d8._7_1_;
      uStack_1a8 = (uint)uStack_d0;
      uStack_1a4 = CONCAT13(bVar8,(int3)((uint7)uStack_d0 >> 0x20));
      ppppppplStack_1b8 = ppppppplVar31;
      if (cStack_189 < '\0') {
        ppuVar17 = (undefined **)CONCAT44(uStack_19c,uStack_1a0);
        __ZdlPv();
      }
      lVar20 = lStack_1e0;
      uStack_198 = CONCAT52(uStack_ee,uStack_f0);
      uStack_1a0 = SUB84(ppppplVar25,0);
      uStack_19c = (undefined4)((ulong)ppppplVar25 >> 0x20);
      uStack_191 = uStack_e9;
      uStack_190 = uStack_e8;
      cStack_189 = cVar9;
      if ((char)bStack_171 < '\0') {
        __ZdlPv();
        ppuVar17 = (undefined **)ppppppplStack_188;
      }
      uStack_180 = (undefined4)CONCAT61(uStack_130._1_6_,(undefined1)uStack_130);
      uStack_17c = (undefined2)((uint6)uStack_130._1_6_ >> 0x18);
      uStack_17a = (undefined1)((uint6)uStack_130._1_6_ >> 0x28);
      uStack_179 = uStack_130._7_1_;
      uStack_178 = uStack_128;
      ppppppplStack_188 = ppppppplVar2;
      bStack_171 = bVar10;
    }
    else {
      uStack_178 = 0;
      uStack_179 = 0;
      uStack_17a = 0;
      cStack_189 = '\0';
      uStack_190 = 0;
      uStack_191 = 0;
      uStack_198 = 0;
      uStack_19c = 0;
      uStack_1a0 = 0;
      uStack_1a4 = 0;
      uStack_1a8 = 0;
      cStack_1a9 = '\0';
      uStack_1ad = 0;
      uStack_1ae = 0;
      uStack_1b0 = 0;
      ppppppplStack_1b8 = (long *******)0x0;
      ppppppplStack_188 = (long *******)0x5f4b524f5754454e;
      uStack_180 = 0x4f525245;
      uStack_17c = 0x52;
      bStack_171 = 0xd;
      ppuVar17 = (undefined **)*ppppppplVar34;
      if ((long *******)ppuVar17 != (long *******)0x0) {
        ppppppplVar31 = (long *******)(ppuVar17 + 1);
        do {
          pppppplVar23 = *ppppppplVar31;
          cVar9 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar31,0x10);
          if (bVar16) {
            *ppppppplVar31 = (long ******)((long)pppppplVar23 + -4);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (((ulong)pppppplVar23 & 0x1fffffffc) == 4) {
          do {
            pppppplVar23 = *ppppppplVar31;
            cVar9 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar31,0x10);
            if (bVar16) {
              *ppppppplVar31 = (long ******)((long)pppppplVar23 + -1);
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if ((long ******)((long)pppppplVar23 + -1) == (long ******)0x0) {
            (*(code *)*(long ******)((long)*ppuVar17 + 8))();
          }
        }
      }
      *ppppppplVar34 = (long ******)0x0;
    }
    bVar7 = *(byte *)(ppppppplVar32 + 0x3c);
    if (bVar7 - 1 < 2) {
      if (*(char *)((long)ppppppplVar32 + 0x287) < '\0') {
        if (ppppppplVar32[0x4f] == (long ******)0x0) goto LAB_10a949674;
        goto LAB_10a9496ac;
      }
      if (*(char *)((long)ppppppplVar32 + 0x287) != '\0') goto LAB_10a9496ac;
LAB_10a949674:
      if ((char)uStack_1c0 == '\x02') {
        uStack_110._0_7_ = 0;
        uStack_110._7_1_ = 0;
        uStack_108 = 0;
        uStack_101 = 0;
        uStack_100 = 0;
        param_2 = (long *******)&ppppppplStack_188;
        ppuVar17 = (undefined **)ppppppplVar32;
        func_0x00010a94ba80(ppppppplVar32,param_2,&uStack_110);
        if ((long)uStack_100 < 0) {
          ppuVar17 = (undefined **)CONCAT17(uStack_110._7_1_,(undefined7)uStack_110);
          __ZdlPv();
        }
        goto LAB_10a9496ac;
      }
      uVar29 = CONCAT17(cStack_1a9,CONCAT43(uStack_1ad,CONCAT12(uStack_1ae,uStack_1b0)));
      if (-1 < uStack_1a4) {
        uVar29 = (ulong)uStack_1a4._3_1_;
      }
      if (uVar29 != 0) {
        ppuVar17 = (undefined **)(ppppppplVar32 + 0x49);
        param_2 = (long *******)&ppppppplStack_1b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppuVar17,param_2);
        bVar7 = *(byte *)(ppppppplVar32 + 0x3c);
      }
      bVar16 = bVar7 == 1;
      if (bVar16) {
        ppuVar17 = (undefined **)(ppppppplVar32 + 0x14);
        *(undefined1 *)(ppppppplVar32 + 0x3c) = 2;
        (*(code *)*ppuVar17)();
        if (*(char *)(ppppppplVar32 + 0x3c) == '\x02') goto LAB_10a94a2e0;
        bVar16 = true;
      }
      else {
LAB_10a94a2e0:
        if ((char)uStack_1c0 == '\0') {
          if (*(char *)(ppppppplVar32 + 0x4d) == '\x01') {
            *(undefined1 *)(ppppppplVar32 + 0x4d) = 0;
          }
          param_2 = (long *******)&uStack_1c0;
          ppuVar17 = (undefined **)ppppppplVar32;
          FUN_10a94bc10(ppppppplVar32,param_2);
        }
        else {
          __ZNSt3__16chrono12steady_clock3nowEv();
          if (((ulong)ppppppplVar32[0x4d] & 1) == 0) {
            *(undefined1 *)(ppppppplVar32 + 0x4d) = 1;
          }
          ppppppplVar32[0x4c] = (long ******)(ppuVar17 + (long)ppppppplVar32[0xf] * 0x1e848);
        }
      }
    }
    else {
LAB_10a9496ac:
      bVar16 = false;
    }
    if ((char)bStack_171 < '\0') {
      ppuVar17 = (undefined **)ppppppplStack_188;
      __ZdlPv();
    }
    if (cStack_189 < '\0') {
      ppuVar17 = (undefined **)CONCAT44(uStack_19c,uStack_1a0);
      __ZdlPv();
    }
    if (uStack_1a4 < 0) {
      ppuVar17 = (undefined **)ppppppplStack_1b8;
      __ZdlPv();
    }
    if (!bVar16) goto LAB_10a9496ec;
  }
  puVar38 = &uStack_c0;
  if (*(char *)(ppppppplVar32 + 0x4d) == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    if (((ulong)ppppppplVar32[0x4d] & 1) == 0) goto LAB_10a94a33c;
    if (((long)ppppppplVar32[0x4c] <= (long)ppuVar17) &&
       (*(undefined1 *)(ppppppplVar32 + 0x4d) = 0, *(byte *)(ppppppplVar32 + 0x3c) - 1 < 2)) {
      pppppplVar23 = (long ******)(long)*(char *)((long)ppppppplVar32 + 0x287);
      if ((long)pppppplVar23 < 0) {
        pppppplVar23 = ppppppplVar32[0x4f];
      }
      if (pppppplVar23 == (long ******)0x0) {
        ppuVar17 = (undefined **)ppppppplVar32;
        FUN_10a94b580();
      }
    }
  }
  ppppppplVar34 = (long *******)ppppppplVar32[0x42];
  ppppppplVar31 = (long *******)ppppppplVar32[0x43];
  if (ppppppplVar34 != ppppppplVar31) {
    pppppplVar23 = ppppppplVar32[0x44];
    uStack_1b0 = SUB82(pppppplVar23,0);
    uStack_1ae = (undefined1)((ulong)pppppplVar23 >> 0x10);
    uStack_1ad = (undefined4)((ulong)pppppplVar23 >> 0x18);
    cStack_1a9 = (char)((ulong)pppppplVar23 >> 0x38);
    ppppppplVar32[0x42] = (long ******)0x0;
    ppppppplVar32[0x43] = (long ******)0x0;
    ppppppplVar32[0x44] = (long ******)0x0;
    uStack_1c0 = ppppppplVar34;
    ppppppplStack_1b8 = ppppppplVar31;
    do {
      (*(code *)*ppppppplVar34)(ppppppplVar34);
      ppppppplVar34 = ppppppplVar34 + 8;
    } while (ppppppplVar34 != ppppppplVar31);
    uStack_110._0_7_ = SUB87(&uStack_1c0,0);
    uStack_110._7_1_ = (undefined1)((ulong)&uStack_1c0 >> 0x38);
    ppuVar17 = (undefined **)&uStack_110;
    FUN_10a47332c();
  }
  uStack_130._0_1_ = 0;
  uStack_130._1_6_ = 0;
  uStack_130._7_1_ = 0;
  uStack_128 = 0;
  uStack_121 = 0;
  uStack_120 = 0;
  bStack_119 = 0;
  plVar36 = *(long **)(lVar20 + 0x148);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if ((char)bStack_119 < '\0') {
    *(undefined1 *)CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130)) = 0;
    uStack_128 = 0;
    uStack_121 = 0;
  }
  else {
    uStack_130._0_1_ = 0;
    bStack_119 = 0;
  }
  if ((*(byte *)(plVar36 + 0xe) & 1) == 0) {
    if (plVar36[0xd] != 0) {
      if ((char)plVar36[0x10] == '\x01') {
        iVar4 = (int)plVar36[0x11] + 1;
        *(int *)(plVar36 + 0x11) = iVar4;
        if (iVar4 < (int)plVar36[3]) {
          ppppppplVar32 = (long *******)plVar36[0xf];
LAB_10a949b64:
          if ((long)ppuVar17 - (long)ppppppplVar32 < plVar36[4] * 1000000) goto LAB_10a94a204;
        }
      }
      else {
        *(undefined1 *)(plVar36 + 0x10) = 1;
        plVar36[0xf] = (long)ppuVar17;
        ppppppplVar32 = (long *******)ppuVar17;
        if ((int)plVar36[0x11] < (int)plVar36[3]) goto LAB_10a949b64;
      }
      *(undefined1 *)(plVar36 + 0xe) = 1;
      goto LAB_10a949b88;
    }
LAB_10a94a204:
    if ((char)bStack_119 < '\0') {
      if (CONCAT17(uStack_121,uStack_128) == 0) goto LAB_10a94a234;
      param_2 = (long *******)
                CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
    }
    else {
      if (bStack_119 == 0) goto LAB_10a94a244;
      param_2 = (long *******)&uStack_130;
    }
    FUN_10a94a9a0(*(undefined8 *)(lVar20 + 200),param_2);
    ppuVar17 = *(undefined ***)(lVar20 + 0x148);
    FUN_10a948958();
  }
  else {
    iVar4 = *(int *)((long)plVar36 + 0x8c) + 1;
    *(int *)((long)plVar36 + 0x8c) = iVar4;
    if (((iVar4 < (int)plVar36[1]) && ((long)ppuVar17 - plVar36[0x12] < plVar36[2] * 1000000)) ||
       (plVar36[0xd] == 0)) goto LAB_10a94a204;
LAB_10a949b88:
    *(undefined4 *)((long)plVar36 + 0x8c) = 0;
    plVar36[0x12] = (long)ppuVar17;
    puVar18 = (undefined8 *)
              (*(long *)(plVar36[9] + ((ulong)plVar36[0xc] >> 7) * 8) +
              (plVar36[0xc] & 0x7fU) * 0x20);
    uStack_100 = puVar18[2];
    uStack_108 = (undefined7)puVar18[1];
    uStack_101 = (undefined1)((ulong)puVar18[1] >> 0x38);
    uStack_110._0_7_ = (undefined7)*puVar18;
    uStack_110._7_1_ = (undefined1)((ulong)*puVar18 >> 0x38);
    puVar18[1] = 0;
    puVar18[2] = 0;
    *puVar18 = 0;
    uStack_f8 = *(uint *)(puVar18 + 3);
    FUN_10a9488cc(plVar36 + 8);
    uVar14 = uStack_100;
    uVar27 = uStack_100 >> 0x38;
    puVar18 = (undefined8 *)CONCAT17(uStack_110._7_1_,(undefined7)uStack_110);
    uVar29 = CONCAT17(uStack_101,uStack_108);
    uStack_c0._0_7_ = 0;
    uStack_c0._7_1_ = 0;
    uStack_b8 = 0;
    uStack_b1 = 0;
    puVar39 = (undefined8 *)0x38;
    __Znwm();
    puVar39[2] = 0;
    puVar39[1] = 0;
    puVar39[4] = 0;
    puVar39[3] = 0;
    *puVar39 = &PTR_FUN_110ba5138;
    if (-1 < (long)uVar14) {
      uVar29 = uVar27;
      puVar18 = &uStack_110;
    }
    puVar39[5] = puVar18;
    puVar39[6] = uVar29;
    uStack_d8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    uStack_a0._0_7_ = SUB87(puVar39,0);
    uStack_a0._7_1_ = (undefined1)((ulong)puVar39 >> 0x38);
    uStack_f0 = 0;
    FUN_10a1b11d8(&uStack_1c0,&uStack_a0,&uStack_f0);
    if ((long *)CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0) + 8))();
    }
    lVar13 = CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
    uStack_d8._0_4_ = 0;
    uStack_d8._4_4_ = 0;
    if (lVar13 != 0) {
      func_0x00010a1cbbe4(&uStack_d8);
    }
    FUN_10a1b17a8(&uStack_a0,&uStack_1c0);
    if ((byte)ppppplStack_90 == 0) {
      ppppppplVar34 = (long *******)CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0);
      ppppppplVar32 = (long *******)CONCAT17(uStack_91,uStack_98);
      if (ppppppplVar32 != (long *******)0x0) {
        ppppppplVar31 = ppppppplVar32 + 1;
        do {
          cVar9 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar31,0x10);
          if (bVar16) {
            *ppppppplVar31 = (long ******)((long)*ppppppplVar31 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        goto LAB_10a949c98;
      }
      uVar29 = 0;
      uStack_c0._0_7_ = (undefined7)uStack_a0;
      uStack_c0._7_1_ = uStack_a0._7_1_;
      uStack_b8 = 0;
      uStack_b1 = 0;
    }
    else {
      ppppppplVar34 = (long *******)0x0;
      ppppppplVar32 = (long *******)0x0;
LAB_10a949c98:
      uVar29 = (ulong)ppppplStack_90 & 0xff;
      uStack_c0._0_7_ = SUB87(ppppppplVar34,0);
      uStack_c0._7_1_ = (undefined1)((ulong)ppppppplVar34 >> 0x38);
      uStack_b8 = SUB87(ppppppplVar32,0);
      uStack_b1 = (undefined1)((ulong)ppppppplVar32 >> 0x38);
      if (3 < (byte)ppppplStack_90) goto LAB_10a94a33c;
    }
    (*(code *)(&PTR_FUN_110ba20c8)[uVar29])(&uStack_a0);
    if (cStack_139 < '\0') {
      __ZdlPv(uStack_150);
    }
    if (lStack_168 != 0) {
      lStack_160 = lStack_168;
      __ZdlPv();
    }
    plVar28 = plStack_170;
    plStack_170 = (long *)0x0;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))();
    }
    func_0x000104c4f944(&uStack_198);
    if (2 < (ulong)(byte)uStack_1a0) {
LAB_10a94a33c:
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10a94a340);
      (*pcVar15)();
    }
    (*(code *)(&PTR_FUN_110ba20e8)[(byte)uStack_1a0])(&uStack_1a4);
    if (ppppppplVar34 == (long *******)0x0) {
      param_2 = (long *******)&UNK_10f68520f;
      ppuVar17 = (undefined **)&uStack_130;
      func_0x000107c2c4d8(ppuVar17,&UNK_10f68520f,0x22);
LAB_10a949e6c:
      lStack_1d0 = 0;
      ppppppplStack_1c8 = (long *******)0x0;
    }
    else {
      if (*(int *)((long)ppppppplVar34 + 0x24) != 3) {
        __ZNSt3__19to_stringEi(&uStack_a0);
        puVar18 = &uStack_a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar18,0,&UNK_10f685232,0x27);
        ppppppplStack_1b8 = (long *******)puVar18[1];
        uStack_1c0 = (long *******)*puVar18;
        uVar24 = puVar18[2];
        uStack_1b0 = (undefined2)uVar24;
        uStack_1ae = (undefined1)((ulong)uVar24 >> 0x10);
        uStack_1ad = (undefined4)((ulong)uVar24 >> 0x18);
        cStack_1a9 = (char)((ulong)uVar24 >> 0x38);
        puVar18[1] = 0;
        puVar18[2] = 0;
        *puVar18 = 0;
        param_2 = (long *******)&DAT_10f684600;
        ppuVar17 = (undefined **)&uStack_1c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (ppuVar17,&DAT_10f684600,1);
        pppppplVar23 = (long ******)*ppuVar17;
        uStack_d8._0_4_ = SUB84(ppuVar17[1],0);
        uStack_d8._4_3_ = (undefined3)((ulong)ppuVar17[1] >> 0x20);
        uStack_d8._7_1_ = (char)*(undefined8 *)((long)ppuVar17 + 0xf);
        uStack_d0 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar17 + 0xf) >> 8);
        bVar7 = *(byte *)((long)ppuVar17 + 0x17);
        ppppppplVar34 = (long *******)(ulong)bVar7;
        ppuVar17[1] = (undefined *)0x0;
        ppuVar17[2] = (undefined *)0x0;
        *ppuVar17 = (undefined *)0x0;
        if ((char)bStack_119 < '\0') {
          ppuVar17 = (undefined **)
                     CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
          __ZdlPv();
        }
        uStack_130._0_1_ = SUB81(pppppplVar23,0);
        uStack_130._1_6_ = (undefined6)((ulong)pppppplVar23 >> 8);
        uStack_130._7_1_ = (undefined1)((ulong)pppppplVar23 >> 0x38);
        uStack_128 = (undefined7)CONCAT44(uStack_d8._4_4_,(undefined4)uStack_d8);
        uStack_121 = uStack_d8._7_1_;
        uStack_120 = uStack_d0;
        bStack_119 = bVar7;
        if (cStack_1a9 < '\0') {
          ppuVar17 = (undefined **)uStack_1c0;
          __ZdlPv();
        }
        goto LAB_10a949e6c;
      }
      FUN_10a1b498c(&uStack_1c0,3,1);
      uStack_d8._0_4_ = 0;
      uStack_a0._0_7_ = SUB87(ppppppplVar34[2],0);
      uStack_a0._7_1_ = (undefined1)((ulong)ppppppplVar34[2] >> 0x38);
      ppuVar17 = (undefined **)uStack_1c0;
      param_2 = ppppppplVar34;
      (*(code *)**uStack_1c0)(&lStack_1d0,uStack_1c0,ppppppplVar34,&uStack_d8,&uStack_a0);
      ppppppplVar32 = ppppppplStack_1b8;
      if (ppppppplStack_1b8 != (long *******)0x0) {
        ppppppplVar31 = ppppppplStack_1b8 + 1;
        do {
          pppppplVar23 = *ppppppplVar31;
          cVar9 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar31,0x10);
          if (bVar16) {
            *ppppppplVar31 = (long ******)((long)pppppplVar23 + -1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (pppppplVar23 == (long ******)0x0) {
          (*(code *)(*ppppppplStack_1b8)[2])(ppppppplStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppuVar17 = (undefined **)ppppppplVar32;
        }
      }
      ppppppplVar32 = (long *******)CONCAT17(uStack_b1,uStack_b8);
    }
    if (ppppppplVar32 != (long *******)0x0) {
      ppppppplVar31 = ppppppplVar32 + 1;
      do {
        pppppplVar23 = *ppppppplVar31;
        cVar9 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar31,0x10);
        if (bVar16) {
          *ppppppplVar31 = (long ******)((long)pppppplVar23 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppplVar23 == (long ******)0x0) {
        (*(code *)(*ppppppplVar32)[2])(ppppppplVar32);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar17 = (undefined **)ppppppplVar32;
      }
    }
    lVar13 = lStack_1d0;
    if (lStack_1d0 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        uVar24 = 0x7d;
        puVar21 = &UNK_10f684538;
        if ((char)bStack_119 < '\0') {
LAB_10a94a178:
          puStack_200 = (undefined1 *)
                        CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130))
          ;
        }
        else {
LAB_10a94a000:
          puStack_200 = (undefined1 *)&uStack_130;
        }
        ppuVar17 = (undefined **)0x0;
        param_2 = (long *******)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f684446,puVar21,uVar24,&UNK_10f6845ae);
      }
LAB_10a94a19c:
      ppppppplVar31 = (long *******)0xffffffff;
    }
    else {
      ppuVar17 = &PTR___tlv_bootstrap_11340de10;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      if ((long ******)*ppuVar17 != (long ******)0x0) {
        uVar5 = *(uint *)(lVar13 + 0x10);
        uVar29 = (ulong)uVar5;
        if (*(long *)(lVar13 + 0x18) != uVar29 * 4) {
          __ZNSt3__19to_stringEm(&uStack_d8);
          puVar18 = &uStack_d8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                    (puVar18,0,&UNK_10f6845cf,0x27);
          uStack_b0 = puVar18[2];
          uStack_b8 = (undefined7)puVar18[1];
          uStack_b1 = (undefined1)((ulong)puVar18[1] >> 0x38);
          uStack_c0._0_7_ = (undefined7)*puVar18;
          uStack_c0._7_1_ = (undefined1)((ulong)*puVar18 >> 0x38);
          puVar18[1] = 0;
          puVar18[2] = 0;
          *puVar18 = 0;
          puVar18 = &uStack_c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar18,&UNK_10f6845f7,8);
          ppppplStack_90 = (long *****)puVar18[2];
          uStack_98 = (undefined7)puVar18[1];
          uStack_91 = (undefined1)((ulong)puVar18[1] >> 0x38);
          uStack_a0._0_7_ = (undefined7)*puVar18;
          uStack_a0._7_1_ = (undefined1)((ulong)*puVar18 >> 0x38);
          puVar18[1] = 0;
          puVar18[2] = 0;
          *puVar18 = 0;
          __ZNSt3__19to_stringEj(&uStack_f0,uVar29);
          uVar29 = CONCAT17(uStack_e1,uStack_e8);
          puVar12 = (undefined2 *)CONCAT17(uStack_e9,CONCAT52(uStack_ee,uStack_f0));
          if (-1 < (char)bStack_d9) {
            uVar29 = (ulong)bStack_d9;
            puVar12 = &uStack_f0;
          }
          puVar18 = &uStack_a0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (puVar18,puVar12,uVar29);
          ppppppplStack_1b8 = (long *******)puVar18[1];
          uStack_1c0 = (long *******)*puVar18;
          uVar24 = puVar18[2];
          uStack_1b0 = (undefined2)uVar24;
          uStack_1ae = (undefined1)((ulong)uVar24 >> 0x10);
          uStack_1ad = (undefined4)((ulong)uVar24 >> 0x18);
          cStack_1a9 = (char)((ulong)uVar24 >> 0x38);
          puVar18[1] = 0;
          puVar18[2] = 0;
          *puVar18 = 0;
          param_2 = (long *******)&DAT_10f684600;
          ppuVar17 = (undefined **)&uStack_1c0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppuVar17,&DAT_10f684600,1);
          pppppplVar23 = (long ******)*ppuVar17;
          uStack_88 = SUB87(ppuVar17[1],0);
          uStack_81 = (undefined1)*(undefined8 *)((long)ppuVar17 + 0xf);
          uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar17 + 0xf) >> 8);
          bVar7 = *(byte *)((long)ppuVar17 + 0x17);
          ppuVar17[1] = (undefined *)0x0;
          ppuVar17[2] = (undefined *)0x0;
          *ppuVar17 = (undefined *)0x0;
          if ((char)bStack_119 < '\0') {
            ppuVar17 = (undefined **)
                       CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
            __ZdlPv();
          }
          uStack_130._0_1_ = SUB81(pppppplVar23,0);
          uStack_130._1_6_ = (undefined6)((ulong)pppppplVar23 >> 8);
          uStack_130._7_1_ = (undefined1)((ulong)pppppplVar23 >> 0x38);
          uStack_128 = uStack_88;
          uStack_121 = uStack_81;
          uStack_120 = uStack_80;
          bStack_119 = bVar7;
          if (cStack_1a9 < '\0') {
            ppuVar17 = (undefined **)uStack_1c0;
            __ZdlPv();
          }
          if ((bRam000000011330a9e8 & 1) != 0) {
            uVar24 = 0x93;
            puVar21 = &UNK_10f684602;
            if (-1 < (char)bStack_119) goto LAB_10a94a000;
            goto LAB_10a94a178;
          }
          goto LAB_10a94a19c;
        }
        uVar6 = *(uint *)(lVar13 + 0x14);
        ppppppplVar34 = (long *******)(ulong)uVar6;
        unaff_x22 = *(long ********)(plVar36[6] + 0x288);
        if (((unaff_x22 == (long *******)0x0) ||
            (ppppppplVar32 = unaff_x22, (*(code *)(*unaff_x22)[5])(), (uint)ppppppplVar32 != uVar5))
           || (ppppppplVar32 = unaff_x22, (*(code *)(*unaff_x22)[6])(), (uint)ppppppplVar32 != uVar6
              )) {
          lVar35 = plVar36[6];
          lVar19 = *plVar36;
          FUN_10a2421c8();
          uStack_1a4 = 0;
          uStack_1a0 = 1;
          uStack_1c0 = (long *******)CONCAT44(uVar6,uVar5);
          uStack_1b0 = 0;
          uStack_1ae = 0;
          uStack_1ad = 0x100;
          cStack_1a9 = '\0';
          ppppppplStack_1b8 = (long *******)0x400000001;
          uStack_1a8 = uStack_1a8 & 0xffffff00;
          FUN_10a048f04(&uStack_a0,*(undefined8 *)(lVar19 + 0x1e0),&uStack_1c0);
          *(undefined1 *)(CONCAT17(uStack_a0._7_1_,(undefined7)uStack_a0) + 0x19) = 1;
          FUN_10a1db4cc(lVar35,&uStack_a0);
          plVar28 = (long *)CONCAT17(uStack_91,uStack_98);
          if (plVar28 != (long *)0x0) {
            plVar1 = plVar28 + 1;
            do {
              lVar19 = *plVar1;
              cVar9 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar16) {
                *plVar1 = lVar19 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar19 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
            }
          }
          unaff_x22 = *(long ********)(plVar36[6] + 0x288);
        }
        puStack_200 = (undefined1 *)0x0;
        param_2 = (long *******)0x0;
        ppuVar17 = (undefined **)unaff_x22;
        (*(code *)(*unaff_x22)[0x14])
                  (unaff_x22,0,0,0,uVar29,ppppppplVar34,1,*(undefined8 *)(lVar13 + 0x28));
      }
      ppppppplVar31 = (long *******)(ulong)uStack_f8;
    }
    ppppppplVar32 = ppppppplStack_1c8;
    if (ppppppplStack_1c8 != (long *******)0x0) {
      ppppppplVar2 = ppppppplStack_1c8 + 1;
      do {
        pppppplVar23 = *ppppppplVar2;
        cVar9 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(ppppppplVar2,0x10);
        if (bVar16) {
          *ppppppplVar2 = (long ******)((long)pppppplVar23 + -1);
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (pppppplVar23 == (long ******)0x0) {
        (*(code *)(*ppppppplStack_1c8)[2])(ppppppplStack_1c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppuVar17 = (undefined **)ppppppplVar32;
      }
    }
    if ((long)uStack_100 < 0) {
      ppuVar17 = (undefined **)CONCAT17(uStack_110._7_1_,(undefined7)uStack_110);
      __ZdlPv();
    }
    iStack_1d4 = (int)ppppppplVar31;
    if (iStack_1d4 == -1) goto LAB_10a94a204;
    ppuVar17 = *(undefined ***)(lVar20 + 0xa8);
    param_2 = (long *******)&iStack_1d4;
    FUN_10a94a680(ppuVar17,param_2);
  }
LAB_10a94a234:
  if ((char)bStack_119 < '\0') {
    ppuVar17 = (undefined **)
               CONCAT17(uStack_130._7_1_,CONCAT61(uStack_130._1_6_,(undefined1)uStack_130));
    __ZdlPv();
  }
LAB_10a94a244:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if ((long)uStack_100 < 0) {
    __ZdlPv(CONCAT17(uStack_110._7_1_,(undefined7)uStack_110));
  }
  func_0x00010a94bbc0(&uStack_1c0);
  ppppppplVar32 = (long *******)ppuVar17;
  __Unwind_Resume();
  pcStack_208 = FUN_10a94a680;
  puStack_288 = (undefined8 *)0x0;
  lStack_290 = 0;
  lStack_278 = 0;
  plStack_280 = (long *)0x0;
  fStack_270 = *(float *)(ppppppplVar32 + 7);
  ppppplStack_260 = unaff_x28;
  ppppplStack_258 = unaff_x27;
  puStack_250 = puVar38;
  puStack_248 = &uStack_1c0;
  lStack_240 = lVar20;
  plStack_238 = plVar36;
  ppppppplStack_230 = unaff_x22;
  ppppppplStack_228 = ppppppplVar34;
  ppppppplStack_220 = (long *******)ppuVar17;
  ppppppplStack_218 = ppppppplVar31;
  puStack_210 = &stack0xfffffffffffffff0;
  FUN_10a95bde0(&lStack_290,ppppppplVar32[4]);
  pppppplVar23 = ppppppplVar32[5];
  plVar36 = plStack_280;
  if (pppppplVar23 != (long ******)0x0) {
    do {
      puVar18 = puStack_288;
      ppppplVar25 = pppppplVar23[2];
      uVar29 = ((ulong)(uint)((int)ppppplVar25 << 3) + 8 ^ (ulong)ppppplVar25 >> 0x20) *
               -0x622015f714c7d297;
      uVar29 = ((ulong)ppppplVar25 >> 0x20 ^ uVar29 >> 0x2f ^ uVar29) * -0x622015f714c7d297;
      puVar39 = (undefined8 *)((uVar29 ^ uVar29 >> 0x2f) * -0x622015f714c7d297);
      if (puStack_288 != (undefined8 *)0x0) {
        uVar29 = (long)puStack_288 - 1;
        if (((ulong)puStack_288 & uVar29) == 0) {
          puVar38 = (undefined8 *)((ulong)puVar39 & uVar29);
        }
        else {
          puVar38 = puVar39;
          if (puStack_288 <= puVar39) {
            uVar27 = 0;
            if (puStack_288 != (undefined8 *)0x0) {
              uVar27 = (ulong)puVar39 / (ulong)puStack_288;
            }
            puVar38 = (undefined8 *)((long)puVar39 - uVar27 * (long)puStack_288);
          }
        }
        plVar36 = *(long **)(lStack_290 + (long)puVar38 * 8);
        if (plVar36 != (long *)0x0) {
          do {
            while( true ) {
              plVar36 = (long *)*plVar36;
              if (plVar36 == (long *)0x0) goto LAB_10a94a79c;
              puVar30 = (undefined8 *)plVar36[1];
              if (puVar30 != puVar39) break;
              if ((long *****)plVar36[2] == ppppplVar25) goto LAB_10a94a8fc;
            }
            if (((ulong)puStack_288 & uVar29) == 0) {
              puVar30 = (undefined8 *)((ulong)puVar30 & uVar29);
            }
            else if (puStack_288 <= puVar30) {
              uVar27 = 0;
              if (puStack_288 != (undefined8 *)0x0) {
                uVar27 = (ulong)puVar30 / (ulong)puStack_288;
              }
              puVar30 = (undefined8 *)((long)puVar30 - uVar27 * (long)puStack_288);
            }
          } while (puVar30 == puVar38);
        }
      }
LAB_10a94a79c:
      plVar36 = (long *)0x68;
      __Znwm();
      *plVar36 = 0;
      plVar36[1] = (long)puVar39;
      ppppplVar25 = pppppplVar23[3];
      ppppplVar40 = pppppplVar23[2];
      plVar36[3] = (long)pppppplVar23[3];
      plVar36[2] = (long)ppppplVar40;
      if (ppppplVar25 != (long *****)0x0) {
        ppppplVar25 = ppppplVar25 + 1;
        do {
          cVar9 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(ppppplVar25,0x10);
          if (bVar16) {
            *ppppplVar25 = (long ****)((long)*ppppplVar25 + 1);
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      plStack_268 = plVar36 + 4;
      *(undefined1 *)(plVar36 + 0xc) = 3;
      if (*(char *)(pppppplVar23 + 0xc) == '\0') {
        uVar22 = 0;
      }
      else {
        FUN_10a005398(&plStack_268,pppppplVar23 + 4);
        uVar22 = *(undefined1 *)(pppppplVar23 + 0xc);
      }
      *(undefined1 *)(plVar36 + 0xc) = uVar22;
      if ((puVar18 == (undefined8 *)0x0) || (fStack_270 * (float)puVar18 < (float)(lStack_278 + 1)))
      {
        uVar29 = 1;
        if ((undefined8 *)0x2 < puVar18) {
          uVar29 = (ulong)(((ulong)puVar18 & (long)puVar18 - 1U) != 0);
        }
        uVar29 = uVar29 | (long)puVar18 << 1;
        uVar27 = (ulong)((float)(lStack_278 + 1) / fStack_270);
        if (uVar29 <= uVar27) {
          uVar29 = uVar27;
        }
        FUN_10a95bde0(&lStack_290,uVar29);
        puVar18 = puStack_288;
        if (((ulong)puStack_288 & (long)puStack_288 - 1U) == 0) {
          puVar38 = (undefined8 *)((long)puStack_288 - 1U & (ulong)puVar39);
        }
        else {
          puVar38 = puVar39;
          if (puStack_288 <= puVar39) {
            uVar29 = 0;
            if (puStack_288 != (undefined8 *)0x0) {
              uVar29 = (ulong)puVar39 / (ulong)puStack_288;
            }
            puVar38 = (undefined8 *)((long)puVar39 - uVar29 * (long)puStack_288);
          }
        }
      }
      plVar28 = *(long **)(lStack_290 + (long)puVar38 * 8);
      if (plVar28 == (long *)0x0) {
        *plVar36 = (long)plStack_280;
        *(long ***)(lStack_290 + (long)puVar38 * 8) = &plStack_280;
        plStack_280 = plVar36;
        if (*plVar36 != 0) {
          puVar39 = *(undefined8 **)(*plVar36 + 8);
          if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
            puVar39 = (undefined8 *)((ulong)puVar39 & (long)puVar18 - 1U);
          }
          else if (puVar18 <= puVar39) {
            uVar29 = 0;
            if (puVar18 != (undefined8 *)0x0) {
              uVar29 = (ulong)puVar39 / (ulong)puVar18;
            }
            puVar39 = (undefined8 *)((long)puVar39 - uVar29 * (long)puVar18);
          }
          *(long **)(lStack_290 + (long)puVar39 * 8) = plVar36;
        }
      }
      else {
        *plVar36 = *plVar28;
        *plVar28 = (long)plVar36;
      }
      lStack_278 = lStack_278 + 1;
LAB_10a94a8fc:
      pppppplVar23 = (long ******)*pppppplVar23;
      plVar36 = plStack_280;
    } while (pppppplVar23 != (long ******)0x0);
  }
  for (; plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
    ppppppplVar34 = ppppppplVar32 + 3;
    FUN_10a95c328(ppppppplVar34,plVar36[2]);
    if (ppppppplVar34 != (long *******)0x0) {
      FUN_10a07ead0(plVar36 + 4,param_2);
    }
  }
  FUN_10a95ce94(&lStack_290);
  return;
}



/* Entry: 10a94aad4; end: 10a94ab83;  */

void FUN_10a94aad4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_10a94aff8(*(undefined8 *)(param_1 + 200));
  lVar4 = *(long *)(param_1 + 0xf8);
  *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x78) = 0;
  FUN_10a946a70(lVar4 + 0x18);
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x148) + 0x71) = 1;
  FUN_10a948958();
  puVar1 = *(undefined8 **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x138) = 0;
  lVar4 = *(long *)(param_1 + 0x120) - (long)puVar1;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x118) + 8);
    *(undefined8 **)(param_1 + 0x118) = puVar1;
    lVar4 = *(long *)(param_1 + 0x120) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10a94ab70;
    uVar3 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x130) = uVar3;
LAB_10a94ab70:
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  return;
}



/* Entry: 10a94ab84; end: 10a94ab8b;  */

void FUN_10a94ab84(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_10a94aff8(*(undefined8 *)(param_1 + 0x80));
  lVar4 = *(long *)(param_1 + 0xb0);
  *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x78) = 0;
  FUN_10a946a70(lVar4 + 0x18);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x100) + 0x71) = 1;
  FUN_10a948958();
  puVar1 = *(undefined8 **)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  lVar4 = *(long *)(param_1 + 0xd8) - (long)puVar1;
  while (uVar2 = lVar4 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 8);
    *(undefined8 **)(param_1 + 0xd0) = puVar1;
    lVar4 = *(long *)(param_1 + 0xd8) - (long)puVar1;
  }
  if (uVar2 == 1) {
    uVar3 = 0x80;
  }
  else {
    if (uVar2 != 2) goto LAB_10a94ab70;
    uVar3 = 0x100;
  }
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
LAB_10a94ab70:
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  return;
}



/* Entry: 10a94ab8c; end: 10a94ac37;  */

void FUN_10a94ab8c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  char acStack_40 [8];
  undefined8 uStack_38;
  char cStack_21;
  
  lVar3 = *(long *)(param_1 + 200);
  FUN_10a948ffc(acStack_40);
  if (*(byte *)(lVar3 + 0x1e0) - 3 < 2) {
    if ((*(char *)(lVar3 + 0x208) == '\x01') && (acStack_40[0] == *(char *)(lVar3 + 0x1e8))) {
      FUN_10a94b384(lVar3 + 0x1e8,acStack_40);
      if (cStack_21 < '\0') {
        __ZdlPv(uStack_38);
      }
      return;
    }
    puVar2 = &UNK_10f684b85;
  }
  else {
    puVar2 = &UNK_10f684b37;
  }
  FUN_10a00946c(puVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a94ac1c);
  (*pcVar1)();
}



/* Entry: 10a94ac38; end: 10a94adab;  */

undefined *** FUN_10a94ac38(undefined8 *param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  code **unaff_x22;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2[0x19];
  pppuVar3 = param_2;
  if (7 < *(byte *)(ppuVar4 + 0x3c) || (1 << (ulong)(*(byte *)(ppuVar4 + 0x3c) & 0x1f) & 0xc1U) == 0
     ) {
    puVar6 = (undefined8 *)ppuVar4[0x42];
    if ((undefined8 *)ppuVar4[0x43] != puVar6) {
      puVar5 = (undefined8 *)((long)ppuVar4[0x43] + -0x38);
      do {
        puVar7 = puVar5 + -1;
        (**(code **)*puVar5)(puVar5);
        puVar5 = puVar5 + -8;
      } while (puVar7 != puVar6);
    }
    ppuVar4[0x43] = (undefined *)puVar6;
    if (*(char *)(ppuVar4 + 0x41) == '\x01') {
      if (*(char *)((long)ppuVar4 + 0x207) < '\0') {
        __ZdlPv(ppuVar4[0x3e]);
      }
      *(undefined1 *)(ppuVar4 + 0x41) = 0;
    }
    if (*(char *)(ppuVar4 + 0x4d) == '\x01') {
      *(undefined1 *)(ppuVar4 + 0x4d) = 0;
    }
    *(undefined1 *)(ppuVar4 + 0x3c) = 6;
    FUN_10a94aff8(ppuVar4);
    unaff_x22 = &pcStack_88;
    pcStack_88 = FUN_10a95f74c;
    ppuStack_80 = &PTR_DAT_110c31328;
    ppuStack_78 = ppuVar4;
    FUN_10a463538(ppuVar4 + 0x42,&pcStack_88);
    pppuVar3 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
  }
  ppuVar4 = param_2[0x1c];
  *param_1 = ppuVar4;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar4 = ppuVar4 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar2) {
        *ppuVar4 = *ppuVar4 + 4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar3;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(unaff_x22 + 1);
  __Unwind_Resume();
  if (*(char *)((long)pppuVar3 + 0x67) < '\0') {
    __ZdlPv(pppuVar3[10]);
  }
  if (*(char *)((long)pppuVar3 + 0x4f) < '\0') {
    __ZdlPv(pppuVar3[7]);
  }
  if (*(char *)((long)pppuVar3 + 0x37) < '\0') {
    __ZdlPv(pppuVar3[4]);
  }
  if (*(char *)((long)pppuVar3 + 0x1f) < '\0') {
    __ZdlPv(pppuVar3[1]);
  }
  return pppuVar3;
}



/* Entry: 10a94adac; end: 10a94ae83;  */

long FUN_10a94adac(long param_1)

{
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a94ae84; end: 10a94aff7;  */

/* WARNING: Removing unreachable block (ram,0x00010a94afa8) */

undefined8 * FUN_10a94ae84(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c300f8;
  FUN_10a94aff8();
  FUN_10a95f6f4(param_1 + 0x51);
  if (*(char *)((long)param_1 + 0x287) < '\0') {
    __ZdlPv(param_1[0x4e]);
  }
  if (*(char *)((long)param_1 + 0x25f) < '\0') {
    __ZdlPv(param_1[0x49]);
  }
  plVar4 = (long *)param_1[0x48];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  FUN_10a946abc(param_1 + 0x45);
  puStack_28 = param_1 + 0x42;
  FUN_10a47332c(&puStack_28);
  if ((*(char *)(param_1 + 0x41) == '\x01') && (*(char *)((long)param_1 + 0x207) < '\0')) {
    __ZdlPv(param_1[0x3e]);
  }
  (**(code **)param_1[0x35])(param_1 + 0x35);
  (**(code **)param_1[0x2d])(param_1 + 0x2d);
  (**(code **)param_1[0x25])(param_1 + 0x25);
  (**(code **)param_1[0x1d])();
  (**(code **)param_1[0x15])(param_1 + 0x15);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 10a94aff8; end: 10a94b36b;  */

/* WARNING: Removing unreachable block (ram,0x00010a94b1d0) */
/* WARNING: Removing unreachable block (ram,0x00010a94b1c0) */
/* WARNING: Removing unreachable block (ram,0x00010a94afa8) */

long * FUN_10a94aff8(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 auStack_160 [40];
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [80];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = *(long **)(param_1 + 0x288);
  plVar7 = plVar10;
  __ZNSt3__15mutex4lockEv();
  lVar12 = *(long *)(param_1 + 0x288);
  if (*(char *)(lVar12 + 0x40) == '\x01') {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(plVar10);
      return plVar10;
    }
    goto FUN_10a94ae84;
  }
  *(undefined1 *)(lVar12 + 0x40) = 1;
  lVar3 = *(long *)(lVar12 + 0x48);
  lVar11 = *(long *)(lVar12 + 0x50);
  if (lVar11 != lVar3) {
    do {
      lVar11 = lVar11 + -0x58;
      FUN_10a94fc4c(lVar11);
    } while (lVar11 != lVar3);
    *(long *)(lVar12 + 0x50) = lVar3;
  }
  plVar7 = plVar10;
  __ZNSt3__15mutex6unlockEv();
  if (*(char *)(param_1 + 0x287) < '\0') {
    if (*(long *)(param_1 + 0x278) != 0) goto LAB_10a94b0c0;
  }
  else if (*(char *)(param_1 + 0x287) != '\0') {
LAB_10a94b0c0:
    puVar6 = (undefined8 *)0x30;
    __Znwm();
    lStack_128 = -0x7fffffffffffffd0;
    uStack_130 = 0x29;
    puVar6[1] = 0x6e6172742d6f6564;
    *puVar6 = 0x69762f2f3a707061;
    puVar6[3] = 0x65636e61632f6e6f;
    puVar6[2] = 0x6974616d726f6673;
    *(undefined8 *)((long)puVar6 + 0x21) = 0x747365757165725f;
    *(undefined8 *)((long)puVar6 + 0x19) = 0x6c65636e61632f6e;
    *(undefined1 *)((long)puVar6 + 0x29) = 0;
    puStack_138 = puVar6;
    FUN_10a3bf120(auStack_98);
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    lStack_168 = -0x7fffffffffffffe0;
    uStack_170 = 0x1a;
    puVar6[1] = 0x63736275735f7465;
    *puVar6 = 0x6b636f736265773a;
    *(undefined8 *)((long)puVar6 + 0x12) = 0x64695f6e6f697470;
    *(undefined8 *)((long)puVar6 + 10) = 0x697263736275735f;
    *(undefined1 *)((long)puVar6 + 0x1a) = 0;
    puStack_178 = puVar6;
    FUN_10a94fbd0(auStack_c8,&puStack_178,param_1 + 0x270);
    func_0x000104bd4884(auStack_160,auStack_c8,1);
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    pcStack_108 = FUN_10a282dc4;
    ppuStack_100 = &PTR_DAT_110ae9180;
    FUN_10a960458(&uStack_120,&puStack_138,auStack_98,6,auStack_160,
                  *(long *)(*(long *)(param_1 + 8) + 0x100) + 0x208,&pcStack_108);
    (*(code *)*ppuStack_100)(&ppuStack_100);
    func_0x000104c4f944(auStack_160);
    if (lStack_168 < 0) {
      __ZdlPv(puStack_178);
    }
    FUN_10a042634(auStack_98);
    if (lStack_128 < 0) {
      __ZdlPv(puStack_138);
    }
    plVar10 = plStack_118;
    plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x940);
    plStack_188 = plStack_118;
    uStack_190 = uStack_120;
    uStack_120 = 0;
    plStack_118 = (long *)0x0;
    FUN_10a25f3f4(plVar7,&uStack_190);
    if (plVar10 != (long *)0x0) {
      plVar8 = plVar10 + 1;
      do {
        lVar12 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        plVar7 = plVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
    plVar8 = plStack_118;
    if (*(char *)(param_1 + 0x287) < '\0') {
      **(undefined1 **)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x270) = 0;
      *(undefined1 *)(param_1 + 0x287) = 0;
    }
    if (plStack_118 != (long *)0x0) {
      plVar2 = plStack_118 + 1;
      do {
        lVar12 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_118 + 0x10))(plStack_118);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar7 = plVar8;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar7;
  }
FUN_10a94ae84:
  ___stack_chk_fail();
  FUN_10a05bd88(&uStack_190);
  FUN_10a05bd88(&uStack_120);
  plVar8 = plVar7;
  __Unwind_Resume();
  pcStack_198 = FUN_10a94b36c;
  *plVar8 = (long)&PTR_FUN_110c300f8;
  plStack_1b0 = plVar10;
  plStack_1a8 = plVar7;
  puStack_1a0 = &stack0xfffffffffffffff0;
  FUN_10a94aff8();
  FUN_10a95f6f4(plVar8 + 0x51);
  if (*(char *)((long)plVar8 + 0x287) < '\0') {
    __ZdlPv(plVar8[0x4e]);
  }
  if (*(char *)((long)plVar8 + 0x25f) < '\0') {
    __ZdlPv(plVar8[0x49]);
  }
  plVar10 = (long *)plVar8[0x48];
  if (plVar10 != (long *)0x0) {
    puVar1 = (ulong *)(plVar10 + 1);
    do {
      uVar9 = *puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar9 - 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar9 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar10 + 8))();
      }
    }
  }
  FUN_10a946abc(plVar8 + 0x45);
  plStack_1b8 = plVar8 + 0x42;
  FUN_10a47332c(&plStack_1b8);
  if (((char)plVar8[0x41] == '\x01') && (*(char *)((long)plVar8 + 0x207) < '\0')) {
    __ZdlPv(plVar8[0x3e]);
  }
  (**(code **)plVar8[0x35])(plVar8 + 0x35);
  (**(code **)plVar8[0x2d])(plVar8 + 0x2d);
  (**(code **)plVar8[0x25])(plVar8 + 0x25);
  (**(code **)plVar8[0x1d])();
  (**(code **)plVar8[0x15])(plVar8 + 0x15);
  if (*(char *)((long)plVar8 + 0x5f) < '\0') {
    __ZdlPv(plVar8[9]);
  }
  if (*(char *)((long)plVar8 + 0x47) < '\0') {
    __ZdlPv(plVar8[6]);
  }
  if (*(char *)((long)plVar8 + 0x2f) < '\0') {
    __ZdlPv(plVar8[3]);
  }
  return plVar8;
}



/* Entry: 10a94b36c; end: 10a94b36f;  */

/* WARNING: Removing unreachable block (ram,0x00010a94afa8) */

undefined8 * FUN_10a94b36c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c300f8;
  FUN_10a94aff8();
  FUN_10a95f6f4(param_1 + 0x51);
  if (*(char *)((long)param_1 + 0x287) < '\0') {
    __ZdlPv(param_1[0x4e]);
  }
  if (*(char *)((long)param_1 + 0x25f) < '\0') {
    __ZdlPv(param_1[0x49]);
  }
  plVar4 = (long *)param_1[0x48];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  FUN_10a946abc(param_1 + 0x45);
  puStack_28 = param_1 + 0x42;
  FUN_10a47332c(&puStack_28);
  if ((*(char *)(param_1 + 0x41) == '\x01') && (*(char *)((long)param_1 + 0x207) < '\0')) {
    __ZdlPv(param_1[0x3e]);
  }
  (**(code **)param_1[0x35])(param_1 + 0x35);
  (**(code **)param_1[0x2d])(param_1 + 0x2d);
  (**(code **)param_1[0x25])(param_1 + 0x25);
  (**(code **)param_1[0x1d])();
  (**(code **)param_1[0x15])(param_1 + 0x15);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  return param_1;
}



/* Entry: 10a94b370; end: 10a94b383;  */

void FUN_10a94b370(void)

{
  FUN_10a94ae84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94b384; end: 10a94b3f7;  */

undefined1 * FUN_10a94b384(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (param_1[0x20] == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8);
  }
  else {
    if ((char)param_2[0x1f] < '\0') {
      func_0x000107c3192c(param_1 + 8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
    param_1[0x20] = 1;
  }
  return param_1;
}



/* Entry: 10a94b3f8; end: 10a94b57f;  */

void FUN_10a94b3f8(undefined ***param_1,long *param_2,ulong param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined1 uVar10;
  undefined ***pppuVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar15;
  undefined8 ****unaff_x22;
  undefined **ppuVar16;
  undefined8 ****unaff_x23;
  undefined8 ****unaff_x24;
  long *plStack_188;
  long *plStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 uStack_150;
  undefined ***pppuStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  byte bStack_118;
  long lStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_c0 = param_1;
  if (param_3 < 0x7ffffffffffffff8) {
    unaff_x24 = &pppuStack_b8;
    if (param_3 < 0x17) {
      uStack_a8 = CONCAT17((char)param_3,(undefined7)uStack_a8);
      unaff_x22 = unaff_x24;
      if (param_3 != 0) goto LAB_10a94b484;
    }
    else {
      unaff_x23 = (undefined8 ****)0x19;
      if ((param_3 | 7) != 0x17) {
        unaff_x23 = (undefined8 ****)((param_3 | 7) + 1);
      }
      unaff_x22 = unaff_x23;
      __Znwm();
      uStack_a8 = (ulong)unaff_x23 | 0x8000000000000000;
      pppuStack_b8 = unaff_x22;
      uStack_b0 = param_3;
LAB_10a94b484:
      _memmove(unaff_x22,param_2,param_3);
    }
    *(undefined1 *)((long)unaff_x22 + param_3) = 0;
    uStack_90 = uStack_90 & 0xffffffffffffff;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    uStack_88 = 0x10a95f77c;
    ppuStack_80 = &PTR_FUN_110c31340;
    puVar5 = (undefined8 *)0x38;
    __Znwm();
    unaff_x20 = &uStack_88;
    *puVar5 = pppuStack_c0;
    puVar5[2] = uStack_b0;
    puVar5[1] = pppuStack_b8;
    puVar5[3] = uStack_a8;
    pppuStack_b8 = (undefined8 ****)0x0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    puVar5[5] = uStack_98;
    puVar5[4] = uStack_a0;
    puVar5[6] = uStack_90;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    puStack_78 = puVar5;
    FUN_10a463538(param_1 + 0x42,&uStack_88);
    param_1 = &ppuStack_80;
    (*(code *)*ppuStack_80)();
    unaff_x21 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  else {
    func_0x000109ffde50();
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(unaff_x20 + 1);
  FUN_10a94bb80(&pppuStack_c0);
  pppuVar6 = param_1;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a94b580;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_100 = unaff_x24;
  pppuStack_f8 = unaff_x23;
  pppuStack_f0 = unaff_x22;
  plStack_e8 = unaff_x21;
  puStack_e0 = unaff_x20;
  pppuStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((pppuVar6[0x47] != (undefined **)0x0) && (((uint)pppuVar6[0x47][2] >> 1 & 1) == 0)) {
    ppuVar16 = pppuVar6[0x47];
    if (ppuVar16 != (undefined **)0x0) {
      ppuVar9 = ppuVar16 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar3) {
          *ppuVar9 = *ppuVar9 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    goto LAB_10a94b95c;
  }
  func_0x000109382360(auStack_140,0,0,0,1);
  ppuVar16 = pppuVar6[0x4a];
  if (-1 < (char)*(byte *)((long)pppuVar6 + 0x25f)) {
    ppuVar16 = (undefined **)(ulong)*(byte *)((long)pppuVar6 + 0x25f);
  }
  if (ppuVar16 != (undefined **)0x0) {
    pppuStack_148 = (undefined ***)0x0;
    uStack_150 = 3;
    pppuVar11 = pppuVar6 + 0x49;
    func_0x00010938229c();
    uStack_120 = CONCAT17(9,(undefined7)uStack_120);
    ppuStack_130 = (undefined **)0x695f6d6165727473;
    ppuStack_128 = (undefined **)CONCAT62(ppuStack_128._2_6_,100);
    puVar7 = auStack_140;
    pppuStack_148 = pppuVar11;
    func_0x0001095b7584(puVar7,&ppuStack_130);
    uVar10 = *puVar7;
    *puVar7 = uStack_150;
    pppuVar11 = *(undefined ****)(puVar7 + 8);
    uStack_150 = uVar10;
    *(undefined ****)(puVar7 + 8) = pppuStack_148;
    pppuStack_148 = pppuVar11;
    if (uStack_120 < 0) {
      __ZdlPv(ppuStack_130);
      uVar10 = uStack_150;
    }
    func_0x000109380ffc(&pppuStack_148,uVar10);
  }
  plVar8 = (long *)0xb8;
  __Znwm();
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9f2c8;
  plVar15 = plVar8 + 0x10;
  plVar8[0x11] = 0;
  *plVar15 = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  plVar8[0x13] = 0;
  plVar8[0x12] = 0;
  plVar12 = plVar8 + 6;
  plVar8[7] = 0;
  *plVar12 = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plStack_160 = plVar8 + 3;
  *plStack_160 = (long)&PTR_FUN_110c35450;
  plVar8[7] = 0;
  plVar8[8] = 0;
  *plVar12 = 0;
  *(undefined1 *)(plVar8 + 9) = 0;
  plVar8[0xe] = 0;
  *(undefined4 *)(plVar8 + 0xf) = 0x3f800000;
  plVar8[0x11] = 0;
  plVar8[0x12] = 0;
  *plVar15 = 0;
  *(undefined1 *)(plVar8 + 0x13) = 0;
  plVar8[0x14] = 0;
  plVar8[0x15] = 0;
  plVar8[0x16] = 0;
  plStack_158 = plVar8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar12,pppuVar6 + 0xc);
  FUN_10a0c32e4(&ppuStack_178,auStack_140,0xffffffff,0x20,0,0);
  ppuStack_128 = ppuStack_170;
  ppuStack_130 = ppuStack_178;
  uStack_120 = lStack_168;
  ppuStack_170 = (undefined **)0x0;
  lStack_168 = 0;
  ppuStack_178 = (undefined **)0x0;
  bStack_118 = 0;
  FUN_10a269f70(plVar15,&ppuStack_130);
  if (3 < (ulong)bStack_118) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a94b9dc);
    (*pcVar4)();
  }
  (*(code *)(&PTR_FUN_110bbab80)[bStack_118])(&ppuStack_130);
  if (lStack_168 < 0) {
    __ZdlPv(ppuStack_178);
  }
  ppuVar16 = (undefined **)0xf0;
  __Znwm();
  ppuVar9 = ppuVar16 + 1;
  ppuVar16[2] = (undefined *)0x0;
  *ppuVar9 = (undefined *)0x200000006;
  *(undefined2 *)(ppuVar16 + 3) = 4;
  ppuVar16[5] = (undefined *)0x0;
  ppuVar16[4] = (undefined *)0x0;
  ppuVar16[7] = (undefined *)0x0;
  ppuVar16[6] = (undefined *)0x0;
  ppuVar16[9] = (undefined *)0x0;
  ppuVar16[8] = (undefined *)0x0;
  ppuVar16[0xb] = (undefined *)0x0;
  ppuVar16[10] = (undefined *)0x0;
  ppuVar16[0xd] = (undefined *)0x0;
  ppuVar16[0xc] = (undefined *)0x0;
  ppuVar16[0xf] = (undefined *)0x0;
  ppuVar16[0xe] = (undefined *)0x0;
  ppuVar16[0x10] = (undefined *)0x0;
  ppuVar16[0x11] = (undefined *)(ppuVar16 + 3);
  ppuVar16[0x12] = (undefined *)0x0;
  *ppuVar16 = (undefined *)&PTR_FUN_110c30ec8;
  *(undefined1 *)(ppuVar16 + 0x13) = 0;
  *(undefined1 *)(ppuVar16 + 0x1d) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
    if (bVar3) {
      *ppuVar9 = *ppuVar9 + 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  unaff_x21 = (long *)0x60;
  ppuStack_178 = ppuVar16;
  ppuStack_170 = ppuVar16;
  __Znwm();
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = (long)&PTR_FUN_110b9f318;
  plStack_188 = unaff_x21 + 3;
  *plStack_188 = (long)FUN_10a9560cc;
  unaff_x21[4] = (long)&PTR_FUN_110c30ef0;
  unaff_x21[5] = (long)ppuVar16;
  *(undefined1 *)(unaff_x21 + 0xb) = 1;
  plStack_180 = unaff_x21;
  FUN_10a342ec0(pppuVar6[0x45],&plStack_160,&plStack_188);
  func_0x0001092b4524(pppuVar6 + 0x47,&ppuStack_178);
  ppuVar16 = ppuStack_178;
  if (ppuStack_178 == (undefined **)0x0) {
LAB_10a94b88c:
    plVar8 = unaff_x21 + 1;
    do {
      lVar13 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
    }
  }
  else {
    ppuVar9 = ppuStack_178 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar3) {
        *ppuVar9 = *ppuVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    unaff_x21 = plStack_180;
    if (plStack_180 != (long *)0x0) goto LAB_10a94b88c;
  }
  if (ppuStack_170 != (undefined **)0x0) {
    func_0x0001092b4274(&ppuStack_170);
  }
  if (ppuStack_178 != (undefined **)0x0) {
    ppuVar9 = ppuStack_178 + 1;
    do {
      puVar14 = *ppuVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar3) {
        *ppuVar9 = puVar14 + -4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((ulong)puVar14 & 0x1fffffffc) == 4) {
      do {
        puVar14 = *ppuVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar3) {
          *ppuVar9 = puVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar14 + -1 == (undefined *)0x0) {
        (**(code **)(*ppuStack_178 + 8))();
      }
    }
  }
  plVar8 = plStack_158;
  if (plStack_158 != (long *)0x0) {
    plVar12 = plStack_158 + 1;
    do {
      lVar13 = *plVar12;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *plVar12 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_158 + 0x10))(plStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  func_0x000109380ffc(auStack_138,auStack_140[0]);
LAB_10a94b95c:
  ppuVar9 = pppuVar6[0x48];
  if (ppuVar9 != (undefined **)0x0) {
    ppuVar1 = ppuVar9 + 1;
    do {
      puVar14 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = puVar14 + -4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((ulong)puVar14 & 0x1fffffffc) == 4) {
      do {
        puVar14 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = puVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar14 + -1 == (undefined *)0x0) {
        (**(code **)(*ppuVar9 + 8))();
      }
    }
  }
  pppuVar6[0x48] = ppuVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    if (uStack_120 < 0) {
      __ZdlPv(ppuStack_130);
    }
    func_0x000109380ffc(unaff_x21 + 1,uStack_150);
    func_0x000109380ffc(auStack_138,auStack_140[0]);
    do {
      __Unwind_Resume(ppuVar9);
    } while( true );
  }
  return;
}



/* Entry: 10a94b580; end: 10a94ba7f;  */

void FUN_10a94b580(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x21;
  long *plVar10;
  long *plVar11;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  byte bStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long *)(param_1 + 0x238) != 0) &&
     (((uint)*(undefined8 *)(*(long *)(param_1 + 0x238) + 0x10) >> 1 & 1) == 0)) {
    plVar11 = *(long **)(param_1 + 0x238);
    if (plVar11 != (long *)0x0) {
      plVar6 = plVar11 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    goto LAB_10a94b95c;
  }
  func_0x000109382360(auStack_80,0,0,0,1);
  uVar9 = *(ulong *)(param_1 + 0x250);
  if (-1 < (char)*(byte *)(param_1 + 0x25f)) {
    uVar9 = (ulong)*(byte *)(param_1 + 0x25f);
  }
  if (uVar9 != 0) {
    lStack_88 = 0;
    uStack_90 = 3;
    lVar8 = param_1 + 0x248;
    func_0x00010938229c();
    uStack_60 = CONCAT17(9,(undefined7)uStack_60);
    plStack_70 = (long *)0x695f6d6165727473;
    plStack_68 = (long *)CONCAT62(plStack_68._2_6_,100);
    puVar5 = auStack_80;
    lStack_88 = lVar8;
    func_0x0001095b7584(puVar5,&plStack_70);
    uVar7 = *puVar5;
    *puVar5 = uStack_90;
    lVar8 = *(long *)(puVar5 + 8);
    uStack_90 = uVar7;
    *(long *)(puVar5 + 8) = lStack_88;
    lStack_88 = lVar8;
    if (uStack_60 < 0) {
      __ZdlPv(plStack_70);
      uVar7 = uStack_90;
    }
    func_0x000109380ffc(&lStack_88,uVar7);
  }
  plVar11 = (long *)0xb8;
  __Znwm();
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110b9f2c8;
  plVar10 = plVar11 + 0x10;
  plVar11[0x11] = 0;
  *plVar10 = 0;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xc] = 0;
  plVar11[0xf] = 0;
  plVar11[0xe] = 0;
  plVar11[0x13] = 0;
  plVar11[0x12] = 0;
  plVar6 = plVar11 + 6;
  plVar11[7] = 0;
  *plVar6 = 0;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plStack_a0 = plVar11 + 3;
  *plStack_a0 = (long)&PTR_FUN_110c35450;
  plVar11[7] = 0;
  plVar11[8] = 0;
  *plVar6 = 0;
  *(undefined1 *)(plVar11 + 9) = 0;
  plVar11[0xe] = 0;
  *(undefined4 *)(plVar11 + 0xf) = 0x3f800000;
  plVar11[0x11] = 0;
  plVar11[0x12] = 0;
  *plVar10 = 0;
  *(undefined1 *)(plVar11 + 0x13) = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plStack_98 = plVar11;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar6,param_1 + 0x60);
  FUN_10a0c32e4(&plStack_b8,auStack_80,0xffffffff,0x20,0,0);
  plStack_68 = plStack_b0;
  plStack_70 = plStack_b8;
  uStack_60 = lStack_a8;
  plStack_b0 = (long *)0x0;
  lStack_a8 = 0;
  plStack_b8 = (long *)0x0;
  bStack_58 = 0;
  FUN_10a269f70(plVar10,&plStack_70);
  if (3 < (ulong)bStack_58) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a94b9dc);
    (*pcVar4)();
  }
  (*(code *)(&PTR_FUN_110bbab80)[bStack_58])(&plStack_70);
  if (lStack_a8 < 0) {
    __ZdlPv(plStack_b8);
  }
  plVar11 = (long *)0xf0;
  __Znwm();
  plVar6 = plVar11 + 1;
  plVar11[2] = 0;
  *plVar6 = 0x200000006;
  *(undefined2 *)(plVar11 + 3) = 4;
  plVar11[5] = 0;
  plVar11[4] = 0;
  plVar11[7] = 0;
  plVar11[6] = 0;
  plVar11[9] = 0;
  plVar11[8] = 0;
  plVar11[0xb] = 0;
  plVar11[10] = 0;
  plVar11[0xd] = 0;
  plVar11[0xc] = 0;
  plVar11[0xf] = 0;
  plVar11[0xe] = 0;
  plVar11[0x10] = 0;
  plVar11[0x11] = (long)(plVar11 + 3);
  plVar11[0x12] = 0;
  *plVar11 = (long)&PTR_FUN_110c30ec8;
  *(undefined1 *)(plVar11 + 0x13) = 0;
  *(undefined1 *)(plVar11 + 0x1d) = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  unaff_x21 = (long *)0x60;
  plStack_b8 = plVar11;
  plStack_b0 = plVar11;
  __Znwm();
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *unaff_x21 = (long)&PTR_FUN_110b9f318;
  plStack_c8 = unaff_x21 + 3;
  *plStack_c8 = (long)FUN_10a9560cc;
  unaff_x21[4] = (long)&PTR_FUN_110c30ef0;
  unaff_x21[5] = (long)plVar11;
  *(undefined1 *)(unaff_x21 + 0xb) = 1;
  plStack_c0 = unaff_x21;
  FUN_10a342ec0(*(undefined8 *)(param_1 + 0x228),&plStack_a0,&plStack_c8);
  func_0x0001092b4524((undefined8 *)(param_1 + 0x238),&plStack_b8);
  plVar11 = plStack_b8;
  if (plStack_b8 == (long *)0x0) {
LAB_10a94b88c:
    plVar6 = unaff_x21 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
    }
  }
  else {
    plVar6 = plStack_b8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    unaff_x21 = plStack_c0;
    if (plStack_c0 != (long *)0x0) goto LAB_10a94b88c;
  }
  if (plStack_b0 != (long *)0x0) {
    func_0x0001092b4274(&plStack_b0);
  }
  if (plStack_b8 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_b8 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plStack_b8 + 8))();
      }
    }
  }
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar10 = plStack_98 + 1;
    do {
      lVar8 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  func_0x000109380ffc(auStack_78,auStack_80[0]);
LAB_10a94b95c:
  plVar6 = *(long **)(param_1 + 0x240);
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar9 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar9 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar9 & 0x1fffffffc) == 4) {
      do {
        uVar9 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar9 - 1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
  }
  *(long **)(param_1 + 0x240) = plVar11;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (uStack_60 < 0) {
      __ZdlPv(plStack_70);
    }
    func_0x000109380ffc(unaff_x21 + 1,uStack_90);
    func_0x000109380ffc(auStack_78,auStack_80[0]);
    do {
      __Unwind_Resume(plVar6);
    } while( true );
  }
  return;
}



/* Entry: 10a94ba80; end: 10a94bb7f;  */

void FUN_10a94ba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(char *)(param_1 + 0x1e0) == '\0' || *(char *)(param_1 + 0x1e0) == '\x06') {
    return;
  }
  if (*(char *)(param_1 + 0x268) == '\x01') {
    *(undefined1 *)(param_1 + 0x268) = 0;
  }
  FUN_10a94aff8(param_1);
  *(undefined1 *)(param_1 + 0x1e0) = 7;
  (**(code **)(param_1 + 0x120))(param_2,param_3,param_1 + 0x120);
  if (*(char *)(param_1 + 0x208) == '\x01') {
    if (*(char *)(param_1 + 0x207) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x1f0));
    }
    *(undefined1 *)(param_1 + 0x208) = 0;
  }
  *(undefined1 *)(param_1 + 0x1e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010a94bb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x160))(param_1 + 0x160);
  return;
}



/* Entry: 10a94bb80; end: 10a94bc0f;  */

long FUN_10a94bb80(long param_1)

{
  if (*(char *)(param_1 + 0x37) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 10a94bc10; end: 10a94c5e3;  */

/* WARNING: Removing unreachable block (ram,0x00010a94beb0) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10a94bc10(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *******pppppppuVar6;
  long **pplVar7;
  long lVar8;
  ulong uVar9;
  long **pplVar10;
  long *plVar11;
  long **pplVar12;
  long **pplVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 *******pppppppuStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  long *plStack_260;
  long **pplStack_258;
  long *plStack_250;
  long lStack_248;
  float fStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined7 uStack_218;
  undefined4 uStack_211;
  uint uStack_20d;
  char cStack_209;
  long lStack_208;
  float fStack_200;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1a8;
  long *plStack_198;
  long **pplStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined1 auStack_138 [48];
  undefined1 auStack_108 [48];
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)0x78;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_DAT_110c312e8;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  *(undefined8 *)((long)puVar5 + 0x51) = 0;
  *(undefined8 *)((long)puVar5 + 0x49) = 0;
  plVar11 = *(long **)(param_1 + 0x290);
  *(undefined8 **)(param_1 + 0x290) = puVar5;
  puVar5[3] = 0x32aaaba7;
  *(undefined8 **)(param_1 + 0x288) = puVar5 + 3;
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  puVar5 = (undefined8 *)0x48;
  __Znwm();
  *(undefined4 *)(puVar5 + 8) = 0x73746c75;
  puVar5[1] = 0x7574656e69662e74;
  *puVar5 = 0x61686370616e732f;
  puVar5[3] = 0x6e69462e65636976;
  puVar5[2] = 0x7265735f676e696e;
  puVar5[5] = 0x532f656369767265;
  puVar5[4] = 0x53676e696e757465;
  puVar5[7] = 0x7365526574617265;
  puVar5[6] = 0x6e65476d61657274;
  *(undefined1 *)((long)puVar5 + 0x44) = 0;
  plStack_198 = (long *)0x656d5f637072673a;
  pplStack_190 = (long **)CONCAT35(pplStack_190._5_3_,0x646f6874);
  uStack_188 = CONCAT17(0xc,(undefined7)uStack_188);
  uStack_170 = 0x8000000000000048;
  uStack_178 = 0x44;
  uStack_1e0 = CONCAT17(0x14,(undefined7)uStack_1e0);
  uStack_1e8 = 0x61657274732d7374;
  plStack_1f0 = (long *)0x662d70616e732d78;
  uStack_1e0 = CONCAT35(uStack_1e0._5_3_,0x64692d6d);
  puStack_180 = puVar5;
  FUN_10a94fb54(auStack_168,&plStack_1f0,param_2 + 8);
  uStack_98 = (undefined8 *)CONCAT17(0xf,(undefined7)uStack_98);
  uStack_a8 = 0x2d70616e732d78;
  uStack_a1 = 0x70;
  uStack_a0 = 0x656d616e2d646f;
  uStack_99 = 0;
  FUN_10a94fb54(auStack_138,&uStack_a8,param_2 + 0x20);
  cStack_209 = '\x13';
  uStack_218 = 0x65646f6d2d7374;
  uStack_211 = 0x64692d6c;
  plStack_220 = (long *)0x662d70616e732d78;
  uStack_20d = uStack_20d & 0xffffff00;
  FUN_10a94fbd0(auStack_108,&plStack_220,param_1 + 0x18);
  puVar5 = (undefined8 *)0x20;
  __Znwm();
  lStack_228 = -0x7fffffffffffffe0;
  uStack_230 = 0x18;
  puVar5[1] = 0x6c65646f6d2d7374;
  *puVar5 = 0x662d70616e732d78;
  puVar5[2] = 0x6e6f69737265762d;
  *(undefined1 *)(puVar5 + 3) = 0;
  puStack_238 = puVar5;
  FUN_10a94fbd0(auStack_d8,&puStack_238,param_1 + 0x30);
  pplVar13 = &plStack_198;
  func_0x000104bd4884(&plStack_260,&plStack_198,5);
  lVar8 = 0;
  do {
    if ((&cStack_a9)[lVar8] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar8));
    }
    if ((&cStack_c1)[lVar8] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_d8 + lVar8));
    }
    lVar8 = lVar8 + -0x30;
  } while (lVar8 != -0xf0);
  if (lStack_228 < 0) {
    __ZdlPv(puStack_238);
  }
  if (cStack_209 < '\0') {
    __ZdlPv(plStack_220);
  }
  if (uStack_1e0 < 0) {
    __ZdlPv(plStack_1f0);
  }
  if (*(char *)(param_1 + 0x208) == '\x01') {
    plVar11 = (long *)0x28;
    __Znwm();
    uStack_1e0 = -0x7fffffffffffffd8;
    uStack_1e8 = 0x23;
    *(undefined4 *)((long)plVar11 + 0x1f) = 0x64692d74;
    plVar11[1] = 0x61657274732d7374;
    *plVar11 = 0x662d70616e732d78;
    plVar11[3] = 0x74706d6f72702d6c;
    plVar11[2] = 0x616974696e692d6d;
    *(undefined1 *)((long)plVar11 + 0x23) = 0;
    pplVar10 = &plStack_260;
    plStack_1f0 = plVar11;
    func_0x000107c2b05c(pplVar10,&plStack_1f0);
    pplVar12 = pplStack_258;
    if (pplStack_258 != (long **)0x0) {
      uVar14 = (long)pplStack_258 - 1;
      if (((ulong)pplStack_258 & uVar14) == 0) {
        pplVar13 = (long **)(uVar14 & (ulong)pplVar10);
      }
      else {
        pplVar13 = pplVar10;
        if (pplStack_258 <= pplVar10) {
          uVar9 = 0;
          if (pplStack_258 != (long **)0x0) {
            uVar9 = (ulong)pplVar10 / (ulong)pplStack_258;
          }
          pplVar13 = (long **)((long)pplVar10 - uVar9 * (long)pplStack_258);
        }
      }
      if ((long *)plStack_260[(long)pplVar13] != (long *)0x0) {
        for (plVar11 = *(long **)plStack_260[(long)pplVar13]; plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          pplVar7 = (long **)plVar11[1];
          if (pplVar7 == pplVar10) {
            pplVar7 = &plStack_260;
            func_0x000107c2b068(pplVar7,plVar11 + 2,&plStack_1f0);
            if (((ulong)pplVar7 & 1) != 0) goto LAB_10a94c0f4;
          }
          else {
            if (((ulong)pplVar12 & uVar14) == 0) {
              pplVar7 = (long **)((ulong)pplVar7 & uVar14);
            }
            else if (pplVar12 <= pplVar7) {
              uVar9 = 0;
              if (pplVar12 != (long **)0x0) {
                uVar9 = (ulong)pplVar7 / (ulong)pplVar12;
              }
              pplVar7 = (long **)((long)pplVar7 - uVar9 * (long)pplVar12);
            }
            if (pplVar7 != pplVar13) break;
          }
        }
      }
    }
    plVar11 = (long *)0x40;
    __Znwm();
    pplStack_190 = &plStack_260;
    uStack_188 = 0;
    *plVar11 = 0;
    plVar11[1] = (long)pplVar10;
    plStack_198 = plVar11;
    FUN_10a94fbd0(plVar11 + 2,&plStack_1f0,param_1 + 0x1f0);
    uStack_188 = CONCAT71(uStack_188._1_7_,1);
    if ((pplVar12 == (long **)0x0) || (fStack_240 * (float)pplVar12 < (float)(lStack_248 + 1))) {
      uVar14 = 1;
      if ((long **)0x2 < pplVar12) {
        uVar14 = (ulong)(((ulong)pplVar12 & (long)pplVar12 - 1U) != 0);
      }
      uVar14 = uVar14 | (long)pplVar12 << 1;
      uVar9 = (ulong)((float)(lStack_248 + 1) / fStack_240);
      if (uVar14 <= uVar9) {
        uVar14 = uVar9;
      }
      func_0x000104c4f9b8(&plStack_260,uVar14);
      pplVar12 = pplStack_258;
      if (((ulong)pplStack_258 & (long)pplStack_258 - 1U) == 0) {
        pplVar13 = (long **)((long)pplStack_258 - 1U & (ulong)pplVar10);
      }
      else {
        pplVar13 = pplVar10;
        if (pplStack_258 <= pplVar10) {
          uVar14 = 0;
          if (pplStack_258 != (long **)0x0) {
            uVar14 = (ulong)pplVar10 / (ulong)pplStack_258;
          }
          pplVar13 = (long **)((long)pplVar10 - uVar14 * (long)pplStack_258);
        }
      }
    }
    plVar11 = (long *)plStack_260[(long)pplVar13];
    if (plVar11 == (long *)0x0) {
      *plStack_198 = (long)plStack_250;
      plStack_250 = plStack_198;
      plStack_260[(long)pplVar13] = (long)&plStack_250;
      if (*plStack_198 != 0) {
        pplVar13 = *(long ***)(*plStack_198 + 8);
        if (((ulong)pplVar12 & (long)pplVar12 - 1U) == 0) {
          pplVar13 = (long **)((ulong)pplVar13 & (long)pplVar12 - 1U);
        }
        else if (pplVar12 <= pplVar13) {
          uVar14 = 0;
          if (pplVar12 != (long **)0x0) {
            uVar14 = (ulong)pplVar13 / (ulong)pplVar12;
          }
          pplVar13 = (long **)((long)pplVar13 - uVar14 * (long)pplVar12);
        }
        plStack_260[(long)pplVar13] = (long)plStack_198;
      }
    }
    else {
      *plStack_198 = *plVar11;
      *plVar11 = (long)plStack_198;
    }
    lStack_248 = lStack_248 + 1;
LAB_10a94c0f4:
    if (uStack_1e0 < 0) {
      __ZdlPv(plStack_1f0);
    }
  }
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x940);
  plStack_278 = *(long **)(param_1 + 0x290);
  uStack_280 = *(undefined8 *)(param_1 + 0x288);
  if (*(long *)(param_1 + 0x290) != 0) {
    plVar11 = (long *)(*(long *)(param_1 + 0x290) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = *plVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pppppppuVar6 = (undefined8 *******)0x28;
  __Znwm();
  uStack_288 = 0x8000000000000028;
  uStack_290 = 0x21;
  *(undefined2 *)(pppppppuVar6 + 4) = 0x6d;
  pppppppuVar6[1] = (undefined8 ******)0x6e6172742d6f6564;
  *pppppppuVar6 = (undefined8 ******)0x69762f2f3a707061;
  pppppppuVar6[3] = (undefined8 ******)0x61657274732f6e6f;
  pppppppuVar6[2] = (undefined8 ******)0x6974616d726f6673;
  pppppppuStack_298 = pppppppuVar6;
  FUN_10a3bf120(&plStack_1f0);
  lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x100);
  FUN_10a95f7f4(&puStack_238,*(undefined8 *)(lVar8 + 0x30),&uStack_280);
  plVar11 = (long *)0x138;
  __Znwm();
  plStack_198 = plStack_1f0;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = (long)&PTR_FUN_110b9f3b0;
  uVar14 = uStack_290;
  pppppppuVar6 = pppppppuStack_298;
  if (-1 < (long)uStack_288) {
    uVar14 = uStack_288 >> 0x38;
    pppppppuVar6 = &pppppppuStack_298;
  }
  plStack_1f0 = (long *)0x0;
  pplStack_190 = (long **)uStack_1e8;
  (**(code **)(uStack_1e0 + 0x10))(&uStack_188,&uStack_1e0);
  pplVar13 = pplStack_258;
  plStack_220 = plStack_260;
  uStack_150 = uStack_1a8;
  plStack_260 = (long *)0x0;
  pplStack_258 = (long **)0x0;
  uStack_218 = SUB87(pplVar13,0);
  uStack_211._0_1_ = (undefined1)((ulong)pplVar13 >> 0x38);
  uStack_211._1_3_ = SUB83(plStack_250,0);
  uStack_20d = (uint)((ulong)plStack_250 >> 0x18);
  cStack_209 = (char)((ulong)plStack_250 >> 0x38);
  lStack_208 = lStack_248;
  fStack_200 = fStack_240;
  if (lStack_248 != 0) {
    pplVar10 = (long **)plStack_250[1];
    if (((ulong)pplVar13 & (long)pplVar13 - 1U) == 0) {
      pplVar10 = (long **)((ulong)pplVar10 & (long)pplVar13 - 1U);
    }
    else if (pplVar13 <= pplVar10) {
      uVar9 = 0;
      if (pplVar13 != (long **)0x0) {
        uVar9 = (ulong)pplVar10 / (ulong)pplVar13;
      }
      pplVar10 = (long **)((long)pplVar10 - uVar9 * (long)pplVar13);
    }
    plStack_220[(long)pplVar10] = (long)&uStack_211 + 1;
    plStack_250 = (long *)0x0;
    lStack_248 = 0;
  }
  uVar9 = *(ulong *)(lVar15 + 0x210);
  lVar4 = *(long *)(lVar15 + 0x208);
  if (-1 < (char)*(byte *)(lVar15 + 0x21f)) {
    uVar9 = (ulong)*(byte *)(lVar15 + 0x21f);
    lVar4 = lVar15 + 0x208;
  }
  uStack_a8 = 0x10a95f98c;
  uStack_a1 = 0;
  uStack_a0 = 0x110c31358;
  uStack_99 = 0;
  uStack_98 = puStack_238;
  lStack_88 = lStack_228;
  uStack_90 = uStack_230;
  uStack_230 = 0;
  lStack_228 = 0;
  FUN_10a05c494(plVar11 + 3,pppppppuVar6,uVar14,&UNK_10f647b49,4,&plStack_198,6,&plStack_220,lVar4,
                uVar9,&uStack_a8);
  (**(code **)CONCAT17(uStack_99,uStack_a0))(&uStack_a0);
  func_0x000104c4f944(&plStack_220);
  FUN_10a042634(&plStack_198);
  plStack_270 = plVar11 + 3;
  plStack_268 = plVar11;
  FUN_10a95f90c(&puStack_238);
  FUN_10a042634(&plStack_1f0);
  if ((long)uStack_288 < 0) {
    __ZdlPv(pppppppuStack_298);
  }
  plVar11 = plStack_278;
  if (plStack_278 != (long *)0x0) {
    plVar1 = plStack_278 + 1;
    do {
      lVar15 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar15 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_278 + 0x10))(plStack_278);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  pplVar13 = &plStack_270;
  FUN_10a25fdd8(&plStack_198,lVar8,pplVar13);
  if (*(char *)(param_1 + 0x287) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x270));
  }
  *(long ***)(param_1 + 0x278) = pplStack_190;
  *(undefined8 *)(param_1 + 0x270) = plStack_198;
  *(undefined8 *)(param_1 + 0x280) = uStack_188;
  if (*(char *)(param_1 + 0x287) < '\0') {
    if (*(long *)(param_1 + 0x278) != 0) goto LAB_10a94c3d8;
  }
  else if (*(char *)(param_1 + 0x287) != '\0') goto LAB_10a94c3d8;
  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
    func_0x00010ae06f08(1,2,&UNK_10f684963,&UNK_10f684d0c,0x1d3,&UNK_10f684a5f);
  }
  pplVar13 = (long **)&DAT_10f6852f4;
  FUN_10a94b3f8(param_1,&DAT_10f6852f4,0xb);
LAB_10a94c3d8:
  plVar11 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar1 = plStack_268 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  pplVar10 = &plStack_260;
  func_0x000104c4f944(pplVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar16._8_8_ = pplVar13;
    auVar16._0_8_ = pplVar10;
    return auVar16;
  }
  ___stack_chk_fail();
  func_0x00010a054cb4(&plStack_198,0);
  if (uStack_1e0 < 0) {
    __ZdlPv(plStack_1f0);
  }
  func_0x000104c4f944(&plStack_260);
  __Unwind_Resume(pplVar10);
  auVar17._8_8_ = 0xe;
  auVar17._0_8_ = &UNK_10f685425;
  return auVar17;
}



/* Entry: 10a94c5e4; end: 10a94c667;  */

undefined1  [16] FUN_10a94c5e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe;
  auVar1._0_8_ = &UNK_10f685425;
  return auVar1;
}



/* Entry: 10a94c668; end: 10a94c783;  */

void FUN_10a94c668(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f68442b,0x13);
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,1);
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0;
  uStack_5c = 0x17c;
  uStack_58 = 0xffffffff;
  uVar1 = param_1;
  FUN_10a94c784(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e32;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a960734();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e37;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a960960(uVar1,&puStack_98);
  FUN_10a960a64(uVar1);
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a94c784; end: 10a94c85b;  */

/* WARNING: Removing unreachable block (ram,0x00010a94c81c) */

undefined1  [16] FUN_10a94c784(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f685425,0xe);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a960638(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a94c85c; end: 10a94cafb;  */

void FUN_10a94c85c(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a003e74(param_1,&UNK_10f68442b,0x13);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f2fdaa0;
  uStack_78 = 0x1ffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  puStack_60 = &UNK_10f683c80;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_98);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_80 & 0xffffffff,uStack_80._4_4_,uStack_48,uStack_78 & 0xffffffff,
                uStack_78._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_98);
  }
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e4a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc(param_1,&puStack_98,0);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f32307f;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e5a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e64;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f684e6a;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e74;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e81;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f303071;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000019;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  puStack_60 = (undefined *)0x0;
  uStack_50 = 0;
  uStack_4c = 0x17c;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a94cafc();
  FUN_10a003ff4();
  func_0x00010a004064(param_1);
  return;
}



/* Entry: 10a94cafc; end: 10a94cba3;  */

undefined8 * FUN_10a94cafc(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a94cba4);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a94cba4; end: 10a94cc03;  */

undefined8 * FUN_10a94cba4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c30118;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a94cc04; end: 10a94cc07;  */

undefined8 * FUN_10a94cc04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c30118;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a94cc08; end: 10a94cc1b;  */

void FUN_10a94cc08(void)

{
  FUN_10a94cba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94cc1c; end: 10a94cc6b;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10a94cc1c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x2f)) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x28);
    return;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  uVar1 = *(ulong *)(param_2 + 0x20);
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



/* Entry: 10a94cc6c; end: 10a94cd5b;  */

void FUN_10a94cc6c(long param_1,long param_2)

{
  int iVar1;
  short sVar2;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined1 uStack_24;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    uStack_38 = 0;
    uStack_24 = 0;
    lStack_50 = 0;
    uStack_48 = 0;
    lStack_58 = 0;
    uStack_40 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    FUN_10a051998(param_2 + 0x138,&lStack_58);
    if (lStack_58 != 0) {
      lStack_50 = lStack_58;
      __ZdlPv();
    }
    iVar1 = *(int *)(param_1 + 0x48);
    if ((*(byte *)(param_2 + 0x56e) & 1) == 0) {
      sVar2 = 0x100;
      if (iVar1 < 1) {
        sVar2 = 0;
      }
      if (0 < *(int *)(param_1 + 0x44)) {
        sVar2 = sVar2 + 1;
      }
      *(undefined1 *)(param_2 + 0x56e) = 1;
      *(short *)(param_2 + 0x56c) = sVar2;
    }
    else {
      *(byte *)(param_2 + 0x56c) = *(byte *)(param_2 + 0x56c) | 0 < *(int *)(param_1 + 0x44);
      *(byte *)(param_2 + 0x56d) = *(byte *)(param_2 + 0x56d) | 0 < iVar1;
    }
  }
  return;
}



/* Entry: 10a94cd5c; end: 10a94cfff;  */

void FUN_10a94cd5c(undefined ***param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  int iVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long *unaff_x22;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  long lStack_e8;
  long *plStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long alStack_b8 [3];
  long *plStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined ***pppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined ***pppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_2[0x1a];
  if ((lVar8 != 0) &&
     (unaff_x22 = (long *)param_2[0x2c], unaff_x20 = param_2, unaff_x22 != (long *)0x0)) {
    pppuStack_80 = (undefined ***)0x0;
    if ((char)unaff_x22[0x28] == '\x01') {
      ppuStack_90 = param_1[5];
      ppuVar2 = param_1[6];
      ppuStack_70 = ppuStack_90;
      if (ppuVar2 == (undefined **)0x0) {
        ppuStack_78 = &PTR_DAT_110c313b0;
        ppuStack_68 = (undefined **)0x0;
        ppuStack_98 = &PTR_DAT_110c313b0;
        ppuStack_88 = (undefined **)0x0;
LAB_10a94cea0:
        pppuStack_60 = pppuStack_80;
      }
      else {
        ppuVar1 = ppuVar2 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        ppuStack_78 = &PTR_DAT_110c313b0;
        pppuStack_60 = &ppuStack_78;
        ppuStack_88 = ppuVar2;
        ppuStack_68 = ppuVar2;
        if (&stack0x00000000 != (undefined1 *)0x98) {
          ppuStack_98 = &PTR_DAT_110c313b0;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
            if (bVar4) {
              *ppuVar1 = *ppuVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppuVar2 != (undefined **)0x0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          goto LAB_10a94cea0;
        }
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
        pppuStack_60 = (undefined ***)0x0;
        (*(code *)(*pppuStack_80)[3])(pppuStack_80,0x20);
        (*(code *)(*pppuStack_80)[4])();
        ppuStack_98 = &PTR_DAT_110c313b0;
        pppuStack_80 = (undefined ***)0x0;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar4) {
            *ppuVar1 = *ppuVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        pppuStack_60 = (undefined ***)0x20;
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar2);
      }
      pppuStack_80 = &ppuStack_98;
      if (pppuStack_60 == &ppuStack_78) {
        lVar8 = 0x20;
LAB_10a94cecc:
        (**(code **)((long)*pppuStack_60 + lVar8))();
      }
      else if (pppuStack_60 != (undefined ***)0x0) {
        lVar8 = 0x28;
        goto LAB_10a94cecc;
      }
      unaff_x22 = (long *)param_2[0x2c];
      lVar8 = param_2[0x1a];
    }
    unaff_x20 = alStack_b8;
    FUN_10a0a2364(alStack_b8,&ppuStack_98);
    param_2 = unaff_x22;
    FUN_10acf80a8(param_1 + 0x1e,unaff_x22,lVar8,alStack_b8);
    if (plStack_a0 == unaff_x20) {
      lVar7 = 0x20;
LAB_10a94cf20:
      (**(code **)(*plStack_a0 + lVar7))();
    }
    else if (plStack_a0 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_10a94cf20;
    }
    param_1 = pppuStack_80;
    if (pppuStack_80 == &ppuStack_98) {
      lVar7 = 0x20;
    }
    else {
      if (pppuStack_80 == (undefined ***)0x0) goto LAB_10a94cf58;
      lVar7 = 0x28;
    }
    (**(code **)((long)*pppuStack_80 + lVar7))();
  }
LAB_10a94cf58:
  iVar6 = (int)param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) goto LAB_10a94cff8;
  func_0x000104bd46a0();
  if (plStack_a0 == unaff_x20) {
    lVar7 = 0x20;
LAB_10a94cfc0:
    (**(code **)(*plStack_a0 + lVar7))();
  }
  else if (plStack_a0 != (long *)0x0) {
    lVar7 = 0x28;
    goto LAB_10a94cfc0;
  }
  if (pppuStack_80 == &ppuStack_98) {
    lVar7 = 0x20;
  }
  else {
    if (pppuStack_80 == (undefined ***)0x0) goto LAB_10a94cff8;
    lVar7 = 0x28;
  }
  (**(code **)((long)*pppuStack_80 + lVar7))();
LAB_10a94cff8:
  pppuVar5 = param_1;
  __Unwind_Resume(param_1);
  pcStack_c8 = FUN_10a94d000;
  puStack_158 = (undefined *)0x0;
  uStack_150 = 0x200000001;
  uStack_148 = CONCAT44(uStack_148._4_4_,0xffffffff);
  puStack_140 = &UNK_10f683c80;
  uStack_138 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_130 = &UNK_10f683c80;
  uStack_118 = CONCAT44(uStack_118._4_4_,0xffffffff);
  plStack_f0 = unaff_x22;
  lStack_e8 = lVar8;
  plStack_e0 = unaff_x20;
  pppuStack_d8 = param_1;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_10a94d130();
  uStack_150 = 0;
  uStack_148 = 0;
  puStack_158 = &UNK_10f684e96;
  uStack_138 = 0xffffffff00000002;
  puStack_140 = (undefined *)0x100000064;
  puStack_130 = &UNK_10f683c80;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_108 = 0xffffffff;
  uStack_100 = 0;
  uStack_f8 = 0;
  FUN_10a961160();
  uStack_150 = 0;
  uStack_148 = 0;
  puStack_158 = &UNK_10f6842da;
  uStack_138 = 0xffffffff00000002;
  puStack_140 = (undefined *)0x100000064;
  puStack_130 = &UNK_10f683c80;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_108 = 0xffffffff;
  uStack_100 = 0;
  uStack_f8 = 0;
  func_0x00010a9612d4(pppuVar5,&puStack_158);
  uStack_138 = 0xffffffff00000002;
  puStack_140 = (undefined *)0x100000064;
  uStack_150 = 0;
  uStack_148 = 0;
  puStack_158 = &UNK_10f684e9f;
  puStack_130 = &UNK_10f683c80;
  uStack_128 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_110 = 0x179;
  uStack_108 = 0xffffffff;
  uStack_100 = 0;
  uStack_f8 = 0;
  FUN_10a9613e0(pppuVar5,&puStack_158);
  FUN_10a9614f0(pppuVar5);
  return;
}



/* Entry: 10a94d000; end: 10a94d12f;  */

void FUN_10a94d000(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0x200000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  puStack_70 = &UNK_10f683c80;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a94d130(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e96;
  uStack_78 = 0xffffffff00000002;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a961160();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f6842da;
  uStack_78 = 0xffffffff00000002;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f683c80;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010a9612d4(param_1,&puStack_98);
  uStack_78 = 0xffffffff00000002;
  puStack_80 = (undefined *)0x100000064;
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f684e9f;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0x179;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a9613e0(param_1,&puStack_98);
  FUN_10a9614f0(param_1);
  return;
}



/* Entry: 10a94d130; end: 10a94d207;  */

/* WARNING: Removing unreachable block (ram,0x00010a94d1c8) */

undefined1  [16] FUN_10a94d130(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f685434,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a961064(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a94d208; end: 10a94d3e7;  */

void FUN_10a94d208(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f684eae;
  uStack_88 = 0xffffffff00000002;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  puStack_70 = &UNK_10f683c80;
  uStack_68 = 0;
  uStack_60 = 0x14700000179;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f684ec4;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x14700000179;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a94d3e8(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f663ee8;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x14700000179;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a94d3e8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f684ed0;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x14700000179;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a94d3e8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f684ed5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x14700000179;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a94d3e8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f684edd;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f683c80;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x14700000179;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a94d3e8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a94d3e8; end: 10a94d48f;  */

undefined8 * FUN_10a94d3e8(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a94d490);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10a94d490; end: 10a94d51f;  */

undefined8 FUN_10a94d490(void)

{
  return 0x30000;
}



/* Entry: 10a94d520; end: 10a94d79b;  */

void FUN_10a94d520(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined ***pppuVar10;
  undefined **ppuStack_350;
  undefined1 *puStack_348;
  undefined1 *puStack_340;
  undefined ***pppuStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  undefined *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  code *pcStack_208;
  undefined **appuStack_200 [7];
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 auStack_180 [152];
  undefined1 auStack_e8 [8];
  undefined8 *apuStack_e0 [7];
  undefined1 auStack_a8 [72];
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_2 + 0x35) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a94d734);
    (*pcVar3)();
  }
  plVar9 = (long *)param_2[0x2c];
  FUN_109d1a80c();
  uStack_250 = *param_2;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  puStack_290 = &UNK_1053a6a3c;
  ppuStack_288 = &PTR_DAT_110ae9180;
  pcStack_208 = FUN_10a062c68;
  appuStack_200[0] = &PTR_DAT_110b9f9f8;
  puStack_1c0 = &UNK_1053a6a3c;
  ppuStack_1b8 = &PTR_DAT_110ae9180;
  puStack_248 = &UNK_1053a6a3c;
  ppuStack_240 = &PTR_DAT_110ae9180;
  uStack_2e0 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_308 = 0;
  puStack_318 = &UNK_1053a6a3c;
  ppuStack_310 = &PTR_DAT_110ae9180;
  puStack_2d0 = &UNK_1053a6a3c;
  ppuStack_2c8 = &PTR_DAT_110ae9180;
  plStack_2d8 = plVar9;
  uStack_1c8 = uStack_250;
  (**(code **)(*plVar9 + 0x18))(plVar9);
  uVar5 = 0xb8;
  __Znwm(0xb8);
  FUN_10a3ee05c();
  FUN_10a061dc8(auStack_e8,&pcStack_208);
  FUN_10a062bb4(auStack_180,uVar5,auStack_e8);
  if (lStack_60 != 0) {
    func_0x0001092b4274(&lStack_60);
  }
  func_0x0001092ba41c(auStack_a8);
  (*(code *)*apuStack_e0[0])(apuStack_e0);
  puVar4 = auStack_180;
  FUN_10a062f08(param_1);
  FUN_10a062c88(auStack_180);
  func_0x0001092ba41c(&plStack_2d8);
  (*(code *)*ppuStack_310)(&ppuStack_310);
  func_0x0001092ba41c(&uStack_1c8);
  (*(code *)*appuStack_200[0])(appuStack_200);
  func_0x0001092ba41c(&uStack_250);
  pppuVar6 = &ppuStack_288;
  (*(code *)*ppuStack_288)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a062c88(auStack_180);
  func_0x0001092ba41c(&plStack_2d8);
  (*(code *)*ppuStack_310)(&ppuStack_310);
  func_0x0001092ba41c(&uStack_1c8);
  (*(code *)*appuStack_200[0])(appuStack_200);
  func_0x0001092ba41c(&uStack_250);
  (*(code *)*ppuStack_288)(&ppuStack_288);
  do {
    __Unwind_Resume();
  } while ((int)puVar4 == 0);
  pppuVar7 = pppuVar6;
  func_0x000104bd46a0();
  pcStack_328 = FUN_10a94d79c;
  pppuVar10 = pppuVar7 + 0x1c;
  plVar9 = (long *)((long)pppuVar10 + (long)(*pppuVar10)[-3]);
  ppuStack_350 = &puStack_290;
  puStack_348 = auStack_e8;
  puStack_340 = auStack_e8;
  pppuStack_338 = pppuVar6;
  puStack_330 = &stack0xfffffffffffffff0;
  if ((*(byte *)(plVar9 + 3) & 1) == 0) {
    *(undefined1 *)(plVar9 + 3) = 1;
    plVar9[2] = (long)puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      plVar9[1] = *(long *)(*(long *)(puVar4 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar9 + 0x18))();
  }
  ppuVar8 = pppuVar7[0x1f];
  if (ppuVar8[4] == (undefined *)0x0) {
    ppuVar8[6] = puVar4;
    puStack_348 = ppuVar8[3];
    ppuStack_350 = (undefined **)ppuVar8[2];
    if (ppuVar8[3] != (undefined *)0x0) {
      plVar9 = (long *)(ppuVar8[3] + 0x10);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a3cf744(puVar4,&ppuStack_350,&PTR_DAT_110b99f08,pppuVar10);
    if (puStack_348 != (undefined *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)puVar4 != 0) {
      *(int *)(ppuVar8 + 7) = (int)puVar4;
      *(undefined1 *)((long)ppuVar8 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    pppuStack_338 = (undefined ***)auStack_320;
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,auStack_320);
    return;
  }
  return;
}



/* Entry: 10a94d79c; end: 10a94d817;  */

void FUN_10a94d79c(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)(param_1 + 0xe0);
  plVar1 = (long *)((long)plVar5 + *(long *)(*plVar5 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)(param_1 + 0xf8);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = param_2;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(param_2,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,plVar5);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)param_2 != 0) {
      *(int *)(lVar4 + 0x38) = (int)param_2;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a94d818; end: 10a94d94b;  */

undefined8 * FUN_10a94d818(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x29) = 0x100;
  puVar3 = param_1;
  FUN_10aa7093c();
  plVar1 = puVar3 + 0x1c;
  FUN_10a0040d0(plVar1,&PTR_PTR_110c30368);
  *param_1 = &PTR_FUN_110c30178;
  param_1[2] = &PTR_DAT_110c30230;
  param_1[7] = &PTR_DAT_110c30288;
  param_1[0x1c] = &PTR_DAT_110c302b0;
  param_1[0x26] = &PTR_DAT_110c30328;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = param_2;
  FUN_10a94d520(param_1 + 0x24,param_2);
  plVar2 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = param_2;
    plVar2[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[0x1f],&PTR_DAT_110b99f08,param_2,plVar1);
  return param_1;
}



/* Entry: 10a94d94c; end: 10a94da1f;  */

void FUN_10a94d94c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x120) + 0x38))(&plStack_28);
  FUN_109d1a400(&plStack_28,10000000);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  func_0x00010a061620(param_1 + 0x120);
  if (*(long *)(param_1 + 0x118) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_DAT_110c30940;
  *(undefined ***)(param_1 + 0x130) = &PTR_FUN_110c309b8;
  func_0x00010a004e5c(param_1 + 0xf8);
  func_0x00010a004e04(param_1 + 0xe8);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a94da20; end: 10a94da4b;  */

void FUN_10a94da20(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x120) + 0x38))(&plStack_28);
  FUN_109d1a400(&plStack_28,10000000);
  if (plStack_28 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_28 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plStack_28 + 8))();
      }
    }
  }
  func_0x00010a061620(param_1 + 0x120);
  if (*(long *)(param_1 + 0x118) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_DAT_110c30940;
  *(undefined ***)(param_1 + 0x130) = &PTR_FUN_110c309b8;
  func_0x00010a004e5c(param_1 + 0xf8);
  func_0x00010a004e04(param_1 + 0xe8);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10a94da4c; end: 10a94daa7;  */

void FUN_10a94da4c(void)

{
  FUN_10a94d94c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a94daa8; end: 10a94db47;  */

void FUN_10a94daa8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a94d94c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a94db48; end: 10a94dbcb;  */

void FUN_10a94db48(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  lVar4 = *(long *)(*param_1 + -0x20);
  plVar5 = (long *)((long)param_1 + lVar4 + 0xe0);
  plVar1 = (long *)((long)plVar5 + *(long *)(*plVar5 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_2;
    if (param_2 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  lVar4 = *(long *)((long)param_1 + lVar4 + 0xf8);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(long *)(lVar4 + 0x30) = param_2;
    lVar6 = *(long *)(lVar4 + 0x18);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(param_2,&stack0xffffffffffffffd0,&PTR_DAT_110b99f08,plVar5);
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)param_2 != 0) {
      *(int *)(lVar4 + 0x38) = (int)param_2;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a94dbcc; end: 10a94dc7b;  */

void FUN_10a94dbcc(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x118);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x110) != 0) {
        FUN_10a94cc6c(*(long *)(param_1 + 0x110),param_2);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
        return;
      }
    }
  }
  return;
}


