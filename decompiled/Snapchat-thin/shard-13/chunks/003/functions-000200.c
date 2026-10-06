/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a38d494; end: 10a38da8f;  */

void FUN_10a38d494(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652bac,0x17);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcd368;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcd368;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bc3458;
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
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a38da70;
    FUN_10a054dac(param_1,&UNK_10f651ebd,FUN_10a3aef40,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651ec4,FUN_10a3af060,FUN_10a3af120);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644824,FUN_10a3af264,FUN_10a3af320);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651ece,FUN_10a3b03e8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651edd,FUN_10a3b053c,FUN_10a3b05f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651ee9,FUN_10a3b06f0,FUN_10a3b07ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651efb,FUN_10a3b0908,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651f0b,FUN_10a3b09c4,FUN_10a3b0a80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651f1f,FUN_10a3b0b38,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651f34,FUN_10a3b0bf4,FUN_10a3b0cb0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651f4c,FUN_10a3b0d68,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651f62,FUN_10a3b0e24,FUN_10a3b0ee0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f651f78,FUN_10a3b0f98,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651f8c,FUN_10a3b1054,FUN_10a3b1110);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651f9b,FUN_10a3b11c8,FUN_10a3b1280);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f46b3b3,FUN_10a3b1464,FUN_10a3b151c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f651fa7,FUN_10a3b15d4,FUN_10a3b168c);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652bac,0x17);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a38da70:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a38da74);
  (*pcVar6)();
}



/* Entry: 10a38da90; end: 10a38db0b;  */

undefined8 * FUN_10a38da90(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110bcfa30;
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
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1;
  FUN_10a5cf1fc(param_1 + 1);
  param_1[3] = 0;
  return param_1;
}



/* Entry: 10a38db0c; end: 10a38dc7f;  */

void FUN_10a38db0c(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  long *plStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long *plStack_30;
  undefined1 uStack_21;
  
  if (*(long *)(param_1 + 0x5e8) == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x170);
    FUN_10a3b17b4(&lStack_38,&uStack_21,&uStack_40);
    FUN_10a38f1dc(param_1 + 0x5e8,&lStack_38);
    if (plStack_30 != (long *)0x0) {
      plVar1 = plStack_30 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
      }
    }
    uStack_40 = *(undefined8 *)(param_1 + 0x170);
    lStack_38 = *(long *)(param_1 + 0x5e8);
    if (lStack_38 == 0) {
      lStack_38 = 0;
      plStack_30 = (long *)0x0;
    }
    else {
      plStack_30 = *(long **)(param_1 + 0x5f0);
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
    }
    FUN_10a38f240(auStack_50,&uStack_40,&lStack_38);
    FUN_10a426824(param_1,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar5 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
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



/* Entry: 10a38dc80; end: 10a38dcc3;  */

long * FUN_10a38dc80(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  *param_1 = lVar1;
  *(undefined8 *)((long)param_1 + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_2 + 0x10);
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  return param_1;
}



/* Entry: 10a38dcc4; end: 10a38df67;  */

undefined8 * FUN_10a38dcc4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  param_1[0xc2] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0xc5) = 0x100;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  puVar1 = param_1;
  FUN_10a4213cc(param_1,&PTR_PTR_110bc9678,param_2,param_3,0x13);
  *puVar1 = &PTR_DAT_110bcc928;
  puVar1[2] = &PTR_DAT_110bbddd0;
  puVar1[7] = &PTR_FUN_110bbde28;
  puVar1[0xd] = &PTR_FUN_110bbde48;
  puVar1[0xc2] = &PTR_FUN_110bccb88;
  puVar1[0x16] = &PTR_FUN_110bbdeb8;
  puVar1[0x17] = &PTR_DAT_110bbdee8;
  FUN_10a0040d0(puVar1 + 0x9e,&PTR_PTR_110bc96b8);
  param_1[0x9e] = &PTR_DAT_110bcd1e8;
  param_1[0xc2] = &PTR_FUN_110bcd268;
  param_1[0xa3] = &PTR____cxa_pure_virtual_110bcfb60;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0xa4] = puVar1 + 3;
  param_1[0xa5] = puVar1;
  FUN_10a5cf1fc(param_1 + 0xa4);
  FUN_10a38da90(param_1 + 0xa6);
  *param_1 = &PTR_FUN_110bc91a0;
  param_1[2] = &PTR_DAT_110bc9408;
  param_1[7] = &PTR_DAT_110bc9460;
  param_1[0xd] = &PTR_DAT_110bc9480;
  param_1[0xc2] = &PTR_DAT_110bc9630;
  param_1[0x16] = &PTR_DAT_110bc94f0;
  param_1[0x17] = &PTR_DAT_110bc9520;
  param_1[0x9e] = &PTR_DAT_110bc9558;
  param_1[0xa3] = &PTR_DAT_110bc95a8;
  param_1[0xa6] = &PTR_DAT_110bc95d8;
  *(undefined4 *)(param_1 + 0xaa) = 0x1e;
  *(undefined8 *)((long)param_1 + 0x55c) = 0x3f666666;
  *(undefined8 *)((long)param_1 + 0x554) = 0x3f6666663f666666;
  *(undefined8 *)((long)param_1 + 0x564) = 0x3dcccccd3f666666;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb6] = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 3;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  FUN_10a38db0c(param_1);
  return param_1;
}



/* Entry: 10a38df68; end: 10a38e04b;  */

void FUN_10a38df68(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  FUN_10a3a743c(param_1 + 0xa4);
  FUN_10a0617bc(param_1 + 0xbf);
  FUN_10a3b175c(param_1 + 0xbd);
  func_0x00010a0536d4(param_1 + 0xba);
  if (param_1[0xb9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5b7) < '\0') {
    __ZdlPv(param_1[0xb4]);
  }
  plVar1 = (long *)param_1[0xb3];
  param_1[0xb3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a05248c(param_1 + 0xb0);
  func_0x00010a05248c(param_1 + 0xae);
  param_1[0xa6] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xa9] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xa9] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xa7);
  param_1[0xa3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 0xa4);
  param_1[0x9e] = &PTR_DAT_110bcd2b8;
  param_1[0xc2] = &PTR_FUN_110bcd330;
  func_0x00010a004e5c(param_1 + 0xa1);
  func_0x00010a004e04(param_1 + 0x9f);
  *param_1 = &PTR_FUN_110bccbd8;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xc2] = &PTR_DAT_110bcce38;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar1 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bc9680);
  return;
}



/* Entry: 10a38e04c; end: 10a38e09f;  */

void FUN_10a38e04c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  FUN_10a3a743c(param_1 + 0xa4);
  FUN_10a0617bc(param_1 + 0xbf);
  FUN_10a3b175c(param_1 + 0xbd);
  func_0x00010a0536d4(param_1 + 0xba);
  if (param_1[0xb9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5b7) < '\0') {
    __ZdlPv(param_1[0xb4]);
  }
  plVar1 = (long *)param_1[0xb3];
  param_1[0xb3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010a05248c(param_1 + 0xb0);
  func_0x00010a05248c(param_1 + 0xae);
  param_1[0xa6] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xa9] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xa9] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xa7);
  param_1[0xa3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 0xa4);
  param_1[0x9e] = &PTR_DAT_110bcd2b8;
  param_1[0xc2] = &PTR_FUN_110bcd330;
  func_0x00010a004e5c(param_1 + 0xa1);
  func_0x00010a004e04(param_1 + 0x9f);
  *param_1 = &PTR_FUN_110bccbd8;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xc2] = &PTR_DAT_110bcce38;
  param_1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9c);
  func_0x00010a004e5c(param_1 + 0x9a);
  param_1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7e);
  puStack_28 = param_1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar1 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x60,0);
  FUN_10a4477fc(param_1 + 0x5e);
  func_0x00010a4477a4(param_1 + 0x5c);
  func_0x00010a4476d0(param_1 + 0x57);
  FUN_10a44763c(param_1 + 0x54);
  if (param_1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4c);
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1,&PTR_PTR_110bc9680);
  return;
}



/* Entry: 10a38e0a0; end: 10a38e173;  */

void FUN_10a38e0a0(void)

{
  FUN_10a38df68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a38e174; end: 10a38e1a3;  */

void FUN_10a38e174(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a38df68((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a38e1a4; end: 10a38e36f;  */

undefined1 ** FUN_10a38e1a4(undefined1 **param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined4 auStack_60 [2];
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a421994();
  FUN_10a5ae998(param_1[0xa4],&PTR_DAT_110bcfb40,param_1[0x2e],param_1 + 0xa3);
  FUN_10a5ae998(param_1[0xa7],&PTR_DAT_110bcfa10,param_1[0x2e],param_1 + 0xa6);
  puVar6 = param_1[0x2e];
  plVar2 = (long *)((long)(param_1 + 0x9e) + *(long *)(param_1[0x9e] + -0x18));
  if ((*(byte *)(plVar2 + 3) & 1) == 0) {
    *(undefined1 *)(plVar2 + 3) = 1;
    plVar2[2] = (long)puVar6;
    if (puVar6 != (undefined1 *)0x0) {
      plVar2[1] = *(long *)(*(long *)(puVar6 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar2 + 0x18))();
  }
  FUN_10a5ae998(param_1[0xa1],&PTR_DAT_110b99f08,puVar6,param_1 + 0x9e);
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_FUN_110bc3560;
  plVar2 = (long *)param_1[0xb3];
  param_1[0xb3] = (undefined1 *)puVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  ppuVar3 = param_1;
  FUN_10a38e370();
  if ((int)ppuVar3 != 0) {
    auStack_60[0] = 5;
    if (*(char *)((long)param_1 + 0x5b7) < '\0') {
      func_0x000107c3192c(&ppuStack_58,param_1[0xb4],param_1[0xb5]);
    }
    else {
      puStack_50 = param_1[0xb5];
      ppuStack_58 = (undefined1 **)param_1[0xb4];
      puStack_48 = param_1[0xb6];
    }
    uStack_40 = 2;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    FUN_10a2e1520(&uStack_80,auStack_60,&lStack_38,1);
    ppuVar3 = &puStack_68;
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010a2e17b4();
    if ((long)puStack_48 < 0) {
      ppuVar3 = ppuStack_58;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (((ulong)ppuVar3[0xb2] & 1) != 0) {
    return (undefined1 **)0x1;
  }
  if (*(char *)((long)ppuVar3 + 0x5b7) < '\0') {
    if (ppuVar3[0xb5] == (undefined1 *)0x25) {
      puVar6 = ppuVar3[0xb4];
      puVar4 = &UNK_10f651ff3;
      uVar5 = 0x25;
    }
    else {
      if (ppuVar3[0xb5] != (undefined1 *)0x21) goto LAB_10a38e390;
      puVar6 = ppuVar3[0xb4];
      puVar4 = &UNK_10f651fd1;
      uVar5 = 0x21;
    }
    _memcmp(puVar6,puVar4,uVar5);
    ppuVar3 = (undefined1 **)(ulong)((int)puVar6 == 0);
  }
  else {
LAB_10a38e390:
    ppuVar3 = (undefined1 **)0x0;
  }
  return ppuVar3;
}



/* Entry: 10a38e370; end: 10a38e3e3;  */

bool FUN_10a38e370(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x590) & 1) != 0) {
    return true;
  }
  if (*(char *)(param_1 + 0x5b7) < '\0') {
    if (*(long *)(param_1 + 0x5a8) == 0x25) {
      uVar2 = *(undefined8 *)(param_1 + 0x5a0);
      puVar3 = &UNK_10f651ff3;
      uVar4 = 0x25;
    }
    else {
      if (*(long *)(param_1 + 0x5a8) != 0x21) goto LAB_10a38e390;
      uVar2 = *(undefined8 *)(param_1 + 0x5a0);
      puVar3 = &UNK_10f651fd1;
      uVar4 = 0x21;
    }
    _memcmp(uVar2,puVar3,uVar4);
    bVar1 = (int)uVar2 == 0;
  }
  else {
LAB_10a38e390:
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10a38e3e4; end: 10a38e50b;  */

void FUN_10a38e3e4(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a42238c();
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x520));
  FUN_10a5ae930(*(undefined8 *)(param_1 + 0x538));
  plVar3 = *(long **)(param_1 + 0x508);
  if (*(char *)((long)plVar3 + 0x3c) == '\x01') {
    FUN_10a3cf620(plVar3[6],(int)plVar3[7],plVar3);
    *(undefined4 *)(plVar3 + 7) = 0;
  }
  else {
    if (*(char *)((long)plVar3 + 0x3c) != '\x02') {
      return;
    }
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
  }
  *(undefined1 *)((long)plVar3 + 0x3c) = 0;
  return;
}



/* Entry: 10a38e50c; end: 10a38e837;  */

void FUN_10a38e50c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined1 *unaff_x22;
  long *plVar10;
  ulong unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar8 = param_1;
    FUN_10a38e370();
    if (((((int)plVar8 != 0) && ((int)param_1[0xc1] == 0)) &&
        ((param_1[0xb9] == 0 || (*(long *)(param_1[0xb9] + 8) == -1)))) &&
       ((char)param_1[0xbc] == '\x01')) {
      *(undefined4 *)(param_1 + 0xc1) = 1;
      unaff_x21 = *(undefined8 *)(param_1[0x2e] + 0x888);
      (**(code **)(*param_1 + 0x50))((undefined1 *)((long)register0x00000008 + -0x98),param_1);
      unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x98);
      unaff_x20 = *(long **)((long)register0x00000008 + -0x90);
      if (unaff_x20 == (long *)0x0) {
        uVar3 = *(uint *)(param_1 + 0xb7);
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0x10a3b2378;
        *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_FUN_110bcef48;
        *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(code **)((long)register0x00000008 + -0xd8) = FUN_10a3b2490;
        *(undefined ***)((long)register0x00000008 + -0xd0) = &PTR_FUN_110bcef60;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      }
      else {
        plVar8 = unaff_x20 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar10 = *(long **)((long)register0x00000008 + -0x90);
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
        unaff_x26 = unaff_x20 + 2;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar5) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          lVar9 = *plVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
        uVar3 = *(uint *)(param_1 + 0xb7);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar5) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined8 *)((long)register0x00000008 + -0x98) = 0x10a3b2378;
        *(undefined ***)((long)register0x00000008 + -0x90) = &PTR_FUN_110bcef48;
        *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x25;
        *(long **)((long)register0x00000008 + -0x80) = unaff_x20;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar5) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar5) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(code **)((long)register0x00000008 + -0xd8) = FUN_10a3b2490;
        *(undefined ***)((long)register0x00000008 + -0xd0) = &PTR_FUN_110bcef60;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x25;
        *(long **)((long)register0x00000008 + -0xc0) = unaff_x20;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar5) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0xd0);
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x90);
      unaff_x23 = (ulong)uVar3;
      func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0xf0),&UNK_10f651d0b);
      FUN_10a76e51c(unaff_x21,param_1 + 0xb4,unaff_x23,
                    (undefined1 *)((long)register0x00000008 + -0x98),
                    (undefined1 *)((long)register0x00000008 + -0xd8),
                    (undefined1 *)((long)register0x00000008 + -0xf0));
      if (*(char *)((long)register0x00000008 + -0xd9) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf0));
      }
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd0))(unaff_x24);
      if (unaff_x20 == (long *)0x0) {
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))(unaff_x22);
      }
      else {
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))(unaff_x22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      }
      FUN_10a38ee84();
      plVar8 = param_1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0xd9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xf0));
    }
    (*(code *)**(undefined8 **)((long)register0x00000008 + -0xd0))(unaff_x24);
    if (unaff_x20 == (long *)0x0) {
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))(unaff_x22);
    }
    else {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      (*(code *)**(undefined8 **)((long)register0x00000008 + -0x90))(unaff_x22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
    }
    plVar10 = plVar8;
    __Unwind_Resume();
    unaff_x19 = plVar10 + -0xd;
    *(long **)((long)register0x00000008 + -0x110) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x108) = plVar8;
    *(undefined1 **)((long)register0x00000008 + -0x100) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0xf8) = FUN_10a38e838;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x100);
    *(undefined1 *)(plVar10 + 0x36) = 3;
    FUN_10a66ac20();
    FUN_10a38db0c(unaff_x19);
    if (1 < *(int *)(*(long *)(plVar10[0x21] + 0x100) + 0x2a8) - 7U) {
      return;
    }
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    puVar7 = *ppuVar6;
    *(undefined **)((long)register0x00000008 + -0x120) = &UNK_10f63b699;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0x28;
    if (puVar7 == (undefined *)0x0) {
      param_1 = (long *)((long)register0x00000008 + -0x120);
      unaff_x30 = FUN_10a38e50c;
      FUN_10a0edfc4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    }
    else {
      plVar8 = (long *)(puVar7 + 0x10);
      if ((*plVar8 != 0) &&
         (*(long **)((long)register0x00000008 + -0x130) = plVar8, lRam00000001137eb020 != -1)) {
        *(undefined1 **)((long)register0x00000008 + -0x120) =
             (undefined1 *)((long)register0x00000008 + -0x130);
        *(undefined1 **)((long)register0x00000008 + -0x128) =
             (undefined1 *)((long)register0x00000008 + -0x120);
        __ZNSt3__111__call_onceERVmPvPFvS2_E
                  (0x1137eb020,(undefined1 *)((long)register0x00000008 + -0x128),FUN_10a3a7498);
      }
      if ((bRam00000001137eb018 & 1) == 0) {
        return;
      }
      *(undefined1 *)(plVar10 + 0xaf) = 1;
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x100);
      unaff_x30 = *(code **)((long)register0x00000008 + -0xf8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0x110);
      puVar2 = (undefined8 *)((long)register0x00000008 + -0x108);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
      param_1 = unaff_x19;
      unaff_x19 = (long *)*puVar2;
    }
  }
  return;
}



/* Entry: 10a38e838; end: 10a38e83f;  */

void FUN_10a38e838(long *param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long *plVar11;
  undefined1 *unaff_x22;
  ulong unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  undefined1 *puVar12;
  undefined1 *unaff_x29;
  code *pcVar13;
  code *unaff_x30;
  
  while( true ) {
    plVar10 = param_1 + -0xd;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 *)(param_1 + 0x36) = 3;
    FUN_10a66ac20();
    FUN_10a38db0c(plVar10);
    if (1 < *(int *)(*(long *)(param_1[0x21] + 0x100) + 0x2a8) - 7U) {
      return;
    }
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    puVar7 = *ppuVar6;
    *(undefined **)((long)register0x00000008 + -0x30) = &UNK_10f63b699;
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0x28;
    if (puVar7 == (undefined *)0x0) {
      plVar8 = (long *)((long)register0x00000008 + -0x30);
      pcVar13 = FUN_10a38e50c;
      FUN_10a0edfc4();
    }
    else {
      plVar8 = (long *)(puVar7 + 0x10);
      if ((*plVar8 != 0) &&
         (*(long **)((long)register0x00000008 + -0x40) = plVar8, lRam00000001137eb020 != -1)) {
        *(undefined1 **)((long)register0x00000008 + -0x30) =
             (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined1 **)((long)register0x00000008 + -0x38) =
             (undefined1 *)((long)register0x00000008 + -0x30);
        __ZNSt3__111__call_onceERVmPvPFvS2_E
                  (0x1137eb020,(undefined1 *)((long)register0x00000008 + -0x38),FUN_10a3a7498);
      }
      if ((bRam00000001137eb018 & 1) == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xaf) = 1;
      puVar12 = *(undefined1 **)((long)register0x00000008 + -0x10);
      pcVar13 = *(code **)((long)register0x00000008 + -8);
      unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
      puVar5 = (undefined1 *)register0x00000008;
      plVar8 = plVar10;
      plVar10 = *(long **)((long)register0x00000008 + -0x18);
    }
    register0x00000008 = (BADSPACEBASE *)(puVar5 + -0xf0);
    *(long **)(puVar5 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
    *(undefined1 **)(puVar5 + -0x40) = unaff_x24;
    *(ulong *)(puVar5 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar5 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar5 + -0x28) = unaff_x21;
    *(long **)(puVar5 + -0x20) = unaff_x20;
    *(long **)(puVar5 + -0x18) = plVar10;
    *(undefined1 **)(puVar5 + -0x10) = puVar12;
    *(code **)(puVar5 + -8) = pcVar13;
    unaff_x29 = puVar5 + -0x10;
    *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = plVar8;
    FUN_10a38e370();
    if (((((int)unaff_x19 != 0) && ((int)plVar8[0xc1] == 0)) &&
        ((plVar8[0xb9] == 0 || (*(long *)(plVar8[0xb9] + 8) == -1)))) &&
       ((char)plVar8[0xbc] == '\x01')) {
      *(undefined4 *)(plVar8 + 0xc1) = 1;
      unaff_x21 = *(undefined8 *)(plVar8[0x2e] + 0x888);
      (**(code **)(*plVar8 + 0x50))(puVar5 + -0x98,plVar8);
      unaff_x25 = *(undefined8 *)(puVar5 + -0x98);
      unaff_x20 = *(long **)(puVar5 + -0x90);
      if (unaff_x20 == (long *)0x0) {
        uVar2 = *(uint *)(plVar8 + 0xb7);
        *(undefined8 *)(puVar5 + -0x98) = 0x10a3b2378;
        *(undefined ***)(puVar5 + -0x90) = &PTR_FUN_110bcef48;
        *(undefined8 *)(puVar5 + -0x88) = unaff_x25;
        *(undefined8 *)(puVar5 + -0x80) = 0;
        *(code **)(puVar5 + -0xd8) = FUN_10a3b2490;
        *(undefined ***)(puVar5 + -0xd0) = &PTR_FUN_110bcef60;
        *(undefined8 *)(puVar5 + -200) = unaff_x25;
        *(undefined8 *)(puVar5 + -0xc0) = 0;
      }
      else {
        plVar10 = unaff_x20 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar11 = *(long **)(puVar5 + -0x90);
        if (plVar11 != (long *)0x0) {
          plVar1 = plVar11 + 1;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        unaff_x26 = unaff_x20 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar4) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar9 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*unaff_x20 + 0x10))(unaff_x20);
          __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        }
        uVar2 = *(uint *)(plVar8 + 0xb7);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar4) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(undefined8 *)(puVar5 + -0x98) = 0x10a3b2378;
        *(undefined ***)(puVar5 + -0x90) = &PTR_FUN_110bcef48;
        *(undefined8 *)(puVar5 + -0x88) = unaff_x25;
        *(long **)(puVar5 + -0x80) = unaff_x20;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar4) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar4) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(code **)(puVar5 + -0xd8) = FUN_10a3b2490;
        *(undefined ***)(puVar5 + -0xd0) = &PTR_FUN_110bcef60;
        *(undefined8 *)(puVar5 + -200) = unaff_x25;
        *(long **)(puVar5 + -0xc0) = unaff_x20;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar4) {
            *unaff_x26 = *unaff_x26 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      unaff_x24 = puVar5 + -0xd0;
      unaff_x22 = puVar5 + -0x90;
      unaff_x23 = (ulong)uVar2;
      func_0x000107c2b054(puVar5 + -0xf0,&UNK_10f651d0b);
      FUN_10a76e51c(unaff_x21,plVar8 + 0xb4,unaff_x23,puVar5 + -0x98,puVar5 + -0xd8,puVar5 + -0xf0);
      if ((char)puVar5[-0xd9] < '\0') {
        __ZdlPv(*(undefined8 *)(puVar5 + -0xf0));
      }
      (*(code *)**(undefined8 **)(puVar5 + -0xd0))(unaff_x24);
      if (unaff_x20 == (long *)0x0) {
        (*(code *)**(undefined8 **)(puVar5 + -0x90))(unaff_x22);
      }
      else {
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        (*(code *)**(undefined8 **)(puVar5 + -0x90))(unaff_x22);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      }
      FUN_10a38ee84();
      unaff_x19 = plVar8;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x58)) break;
    ___stack_chk_fail();
    if ((char)puVar5[-0xd9] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar5 + -0xf0));
    }
    (*(code *)**(undefined8 **)(puVar5 + -0xd0))(unaff_x24);
    if (unaff_x20 == (long *)0x0) {
      (*(code *)**(undefined8 **)(puVar5 + -0x90))(unaff_x22);
    }
    else {
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      (*(code *)**(undefined8 **)(puVar5 + -0x90))(unaff_x22);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
      __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
    }
    unaff_x30 = FUN_10a38e838;
    param_1 = unaff_x19;
    __Unwind_Resume();
  }
  return;
}



/* Entry: 10a38e840; end: 10a38e87f;  */

void FUN_10a38e840(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  *(undefined1 *)(param_1 + 0x5e0) = 1;
  lVar6 = param_1;
  FUN_10a38ea68();
  FUN_10a38e880(param_1,lVar6);
  FUN_10a38e50c(param_1);
  plVar4 = *(long **)(param_1 + 0x5c8);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x5c0);
      if (lVar6 != 0) {
        lVar5 = param_1;
        FUN_10a38e370();
        if ((int)lVar5 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = (*(ushort *)(param_1 + 0x180) & 0x17) == 0;
        }
        func_0x00010a3e4590(lVar6,bVar3);
      }
      plVar1 = plVar4 + 1;
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



/* Entry: 10a38e880; end: 10a38ea67;  */

void FUN_10a38e880(long param_1,long param_2)

{
  undefined8 auStack_40 [2];
  char cStack_29;
  
  func_0x00010a332748(param_2 + 0x219,0);
  func_0x00010a332700(param_2 + 0x21a,0);
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bcea48);
  FUN_10a0d9bd4(param_2,auStack_40,param_1 + 0x564);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bcea60);
  FUN_10a0d9bd4(param_2,auStack_40,param_1 + 0x558);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bcea78);
  FUN_10a0d9bd4(param_2,auStack_40,param_1 + 0x55c);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bcea90);
  FUN_10a0d9bd4(param_2,auStack_40,param_1 + 0x554);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bceaa8);
  FUN_10a0d9bd4(param_2,auStack_40,param_1 + 0x568);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bceac0);
  FUN_10a3368d0(param_2,auStack_40,param_1 + 0x570,&UNK_10e4ac8a8,0xd);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bcead8);
  FUN_10a3368d0(param_2,auStack_40,param_1 + 0x580,&UNK_10e4ac8a8,0xd);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  FUN_10a38fd0c(param_1,param_2);
  return;
}



/* Entry: 10a38ea68; end: 10a38ecff;  */

long FUN_10a38ea68(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long **)(param_1 + 0x2a8) == *(long **)(param_1 + 0x2a0)) ||
     (**(long **)(param_1 + 0x2a0) == 0)) {
    FUN_10a38fbbc(auStack_80,*(undefined8 *)(param_1 + 0x170));
    func_0x00010a015c50((long *)(param_1 + 0x5f8),auStack_80);
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    lVar6 = *(long *)(param_1 + 0x5f8);
    *(undefined1 *)(lVar6 + 8) = 1;
    func_0x000107c2b054(&uStack_98,&UNK_10f652019);
    if (*(char *)(lVar6 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar6 + 0x58));
    }
    *(undefined8 *)(lVar6 + 0x60) = uStack_90;
    *(ulong *)(lVar6 + 0x58) = CONCAT71(uStack_97,uStack_98);
    *(ulong *)(lVar6 + 0x68) = CONCAT17(uStack_81,uStack_88);
    uStack_81 = 0;
    uStack_98 = 0;
    uStack_a8 = *(undefined8 *)(param_1 + 0x5f8);
    plStack_a0 = *(long **)(param_1 + 0x600);
    if (plStack_a0 != (long *)0x0) {
      plVar5 = plStack_a0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a2d54dc(param_1,&uStack_a8);
    plVar5 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
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
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    func_0x00010a04a780(param_1 + 0x5f8);
  }
  lVar6 = *(long *)(param_1 + 0x5f8);
  if (*(long **)(lVar6 + 0x230) == *(long **)(lVar6 + 0x228)) {
    func_0x000107c2b054(auStack_c0,&UNK_10f652032);
    FUN_10ab45dcc(auStack_80,lVar6,auStack_c0,1);
    if (cStack_a9 < '\0') {
      __ZdlPv(auStack_c0[0]);
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x5f8) + 0x228);
    if (*(long **)(*(long *)(param_1 + 0x5f8) + 0x230) == plVar5) goto LAB_10a38ec98;
    lVar7 = *plVar5;
    lVar6 = *(long *)(lVar7 + 600);
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0xd;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    FUN_10a38e880(param_1,lVar7);
    FUN_10a044790(&plStack_78);
    (*(code *)*apuStack_70[0])(apuStack_70);
  }
  else {
    lVar7 = **(long **)(lVar6 + 0x228);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar7;
  }
  ___stack_chk_fail();
LAB_10a38ec98:
  FUN_10a00946c(&UNK_10f6921f0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a38eca8);
  (*pcVar4)();
}



/* Entry: 10a38ed00; end: 10a38edcf;  */

void FUN_10a38ed00(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x5c8);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x5c0);
      if (lVar6 != 0) {
        lVar5 = param_1;
        FUN_10a38e370();
        if ((int)lVar5 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = (*(ushort *)(param_1 + 0x180) & 0x17) == 0;
        }
        func_0x00010a3e4590(lVar6,bVar3);
      }
      plVar1 = plVar4 + 1;
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



/* Entry: 10a38edd0; end: 10a38edd7;  */

void FUN_10a38edd0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1 + -0x68;
  *(undefined1 *)(param_1 + 0x578) = 1;
  lVar6 = lVar5;
  FUN_10a38ea68();
  FUN_10a38e880(lVar5,lVar6);
  FUN_10a38e50c(lVar5);
  plVar4 = *(long **)(param_1 + 0x560);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x558);
      if (lVar6 != 0) {
        FUN_10a38e370();
        if ((int)lVar5 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = (*(ushort *)(param_1 + 0x118) & 0x17) == 0;
        }
        func_0x00010a3e4590(lVar6,bVar3);
      }
      plVar1 = plVar4 + 1;
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



/* Entry: 10a38edd8; end: 10a38ee7f;  */

void FUN_10a38edd8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a3c73cc(param_1,2);
  plVar4 = *(long **)(param_1 + 0x5c8);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x5c0);
      if (lVar6 != 0) {
        lVar5 = param_1;
        FUN_10a38e370();
        if ((int)lVar5 == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = (*(ushort *)(param_1 + 0x180) & 0x17) == 0;
        }
        func_0x00010a3e4590(lVar6,bVar3);
      }
      plVar1 = plVar4 + 1;
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



/* Entry: 10a38ee80; end: 10a38ee83;  */

void FUN_10a38ee80(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *puStack_60;
  long *plStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  lVar10 = *(long *)(param_1 + 0x5d0);
  if (lVar10 == 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x5d8);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010a053620(param_1 + 0x5d0);
  lVar8 = lVar10;
  ___dynamic_cast(lVar10,&PTR_DAT_110c42c58,&PTR_DAT_110bc7ea0,0);
  ___dynamic_cast(lVar10,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0);
  puStack_50 = &UNK_10f652054;
  plStack_48 = (long *)0x35;
  if (lVar8 == 0 && lVar10 == 0) {
LAB_10a38f18c:
    FUN_10a0edfc4(&puStack_50);
LAB_10a38f1a0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a38f1a4);
    (*pcVar5)();
  }
  if (lVar8 != 0) {
    if (*(long *)(param_1 + 0x5c8) != 0) {
      puStack_50 = &UNK_10f65208a;
      plStack_48 = (long *)0x23;
      if (*(long *)(*(long *)(param_1 + 0x5c8) + 8) != -1) goto LAB_10a38f18c;
    }
    FUN_10a34a3a8(&puStack_50,lVar8,0,1);
    if ((puStack_50 == (undefined *)0x0) ||
       (puVar6 = puStack_50, ___dynamic_cast(puStack_50,&PTR_DAT_110bf32c0,&PTR_DAT_110bd3290,0),
       puVar6 == (undefined *)0x0)) {
      ppuVar7 = &puStack_60;
    }
    else {
      plStack_58 = plStack_48;
      ppuVar7 = &puStack_50;
      puStack_60 = puVar6;
    }
    *ppuVar7 = (undefined *)0x0;
    ppuVar7[1] = (undefined *)0x0;
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    puVar6 = puStack_60;
    puStack_50 = &UNK_10f6520ae;
    plStack_48 = (long *)0x2a;
    if (puStack_60 == (undefined *)0x0) {
      FUN_10a0edfc4(&puStack_50);
      goto LAB_10a38f1a0;
    }
    plVar1 = plStack_58;
    if ((*(ushort *)(puStack_60 + 0x118) >> 3 & 1) == 0) {
      FUN_10a0c3500(puStack_60,*(undefined8 *)(param_1 + 0x168));
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined **)(param_1 + 0x5c0) = puVar6;
      lVar8 = *(long *)(param_1 + 0x5c8);
      *(long **)(param_1 + 0x5c8) = plStack_58;
      if (lVar8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a38ed00(param_1);
    }
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if (lVar10 == 0) goto LAB_10a38f140;
  if (*(long *)(param_1 + 0x5c8) != 0) {
    puStack_50 = &UNK_10f65208a;
    plStack_48 = (long *)0x23;
    if (*(long *)(*(long *)(param_1 + 0x5c8) + 8) != -1) goto LAB_10a38f18c;
  }
  FUN_10a329d10(&puStack_50,lVar10,*(undefined8 *)(param_1 + 0x168),0,1);
  if ((*(ushort *)(puStack_50 + 0x118) >> 3 & 1) == 0) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined **)(param_1 + 0x5c0) = puStack_50;
    lVar10 = *(long *)(param_1 + 0x5c8);
    *(long **)(param_1 + 0x5c8) = plStack_48;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a38ed00(param_1);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
LAB_10a38f140:
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a38ee84; end: 10a38f1d3;  */

void FUN_10a38ee84(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *puStack_60;
  long *plStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  lVar10 = *(long *)(param_1 + 0x5d0);
  if (lVar10 == 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x5d8);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010a053620(param_1 + 0x5d0);
  lVar8 = lVar10;
  ___dynamic_cast(lVar10,&PTR_DAT_110c42c58,&PTR_DAT_110bc7ea0,0);
  ___dynamic_cast(lVar10,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0);
  puStack_50 = &UNK_10f652054;
  plStack_48 = (long *)0x35;
  if (lVar8 == 0 && lVar10 == 0) {
LAB_10a38f18c:
    FUN_10a0edfc4(&puStack_50);
LAB_10a38f1a0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a38f1a4);
    (*pcVar5)();
  }
  if (lVar8 != 0) {
    if (*(long *)(param_1 + 0x5c8) != 0) {
      puStack_50 = &UNK_10f65208a;
      plStack_48 = (long *)0x23;
      if (*(long *)(*(long *)(param_1 + 0x5c8) + 8) != -1) goto LAB_10a38f18c;
    }
    FUN_10a34a3a8(&puStack_50,lVar8,0,1);
    if ((puStack_50 == (undefined *)0x0) ||
       (puVar6 = puStack_50, ___dynamic_cast(puStack_50,&PTR_DAT_110bf32c0,&PTR_DAT_110bd3290,0),
       puVar6 == (undefined *)0x0)) {
      ppuVar7 = &puStack_60;
    }
    else {
      plStack_58 = plStack_48;
      ppuVar7 = &puStack_50;
      puStack_60 = puVar6;
    }
    *ppuVar7 = (undefined *)0x0;
    ppuVar7[1] = (undefined *)0x0;
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    puVar6 = puStack_60;
    puStack_50 = &UNK_10f6520ae;
    plStack_48 = (long *)0x2a;
    if (puStack_60 == (undefined *)0x0) {
      FUN_10a0edfc4(&puStack_50);
      goto LAB_10a38f1a0;
    }
    plVar1 = plStack_58;
    if ((*(ushort *)(puStack_60 + 0x118) >> 3 & 1) == 0) {
      FUN_10a0c3500(puStack_60,*(undefined8 *)(param_1 + 0x168));
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined **)(param_1 + 0x5c0) = puVar6;
      lVar8 = *(long *)(param_1 + 0x5c8);
      *(long **)(param_1 + 0x5c8) = plStack_58;
      if (lVar8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a38ed00(param_1);
    }
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if (lVar10 == 0) goto LAB_10a38f140;
  if (*(long *)(param_1 + 0x5c8) != 0) {
    puStack_50 = &UNK_10f65208a;
    plStack_48 = (long *)0x23;
    if (*(long *)(*(long *)(param_1 + 0x5c8) + 8) != -1) goto LAB_10a38f18c;
  }
  FUN_10a329d10(&puStack_50,lVar10,*(undefined8 *)(param_1 + 0x168),0,1);
  if ((*(ushort *)(puStack_50 + 0x118) >> 3 & 1) == 0) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined **)(param_1 + 0x5c0) = puStack_50;
    lVar10 = *(long *)(param_1 + 0x5c8);
    *(long **)(param_1 + 0x5c8) = plStack_48;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a38ed00(param_1);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
LAB_10a38f140:
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a38f1d4; end: 10a38f1db;  */

void FUN_10a38f1d4(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined *puStack_60;
  long *plStack_58;
  undefined *puStack_50;
  long *plStack_48;
  
  lVar10 = *(long *)(param_1 + 0x568);
  if (lVar10 == 0) {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x570);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010a053620(param_1 + 0x568);
  lVar8 = lVar10;
  ___dynamic_cast(lVar10,&PTR_DAT_110c42c58,&PTR_DAT_110bc7ea0,0);
  ___dynamic_cast(lVar10,&PTR_DAT_110c42c58,&PTR_DAT_110bc7b48,0);
  puStack_50 = &UNK_10f652054;
  plStack_48 = (long *)0x35;
  if (lVar8 == 0 && lVar10 == 0) {
LAB_10a38f18c:
    FUN_10a0edfc4(&puStack_50);
LAB_10a38f1a0:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a38f1a4);
    (*pcVar5)();
  }
  if (lVar8 != 0) {
    if (*(long *)(param_1 + 0x560) != 0) {
      puStack_50 = &UNK_10f65208a;
      plStack_48 = (long *)0x23;
      if (*(long *)(*(long *)(param_1 + 0x560) + 8) != -1) goto LAB_10a38f18c;
    }
    FUN_10a34a3a8(&puStack_50,lVar8,0,1);
    if ((puStack_50 == (undefined *)0x0) ||
       (puVar6 = puStack_50, ___dynamic_cast(puStack_50,&PTR_DAT_110bf32c0,&PTR_DAT_110bd3290,0),
       puVar6 == (undefined *)0x0)) {
      ppuVar7 = &puStack_60;
    }
    else {
      plStack_58 = plStack_48;
      ppuVar7 = &puStack_50;
      puStack_60 = puVar6;
    }
    *ppuVar7 = (undefined *)0x0;
    ppuVar7[1] = (undefined *)0x0;
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar2 = plStack_48 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    puVar6 = puStack_60;
    puStack_50 = &UNK_10f6520ae;
    plStack_48 = (long *)0x2a;
    if (puStack_60 == (undefined *)0x0) {
      FUN_10a0edfc4(&puStack_50);
      goto LAB_10a38f1a0;
    }
    plVar1 = plStack_58;
    if ((*(ushort *)(puStack_60 + 0x118) >> 3 & 1) == 0) {
      FUN_10a0c3500(puStack_60,*(undefined8 *)(param_1 + 0x100));
      plVar1 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar2 = plStack_58 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = *plVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      *(undefined **)(param_1 + 0x558) = puVar6;
      lVar8 = *(long *)(param_1 + 0x560);
      *(long **)(param_1 + 0x560) = plStack_58;
      if (lVar8 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      FUN_10a38ed00(param_1 + -0x68);
    }
    if (plVar1 != (long *)0x0) {
      plVar2 = plVar1 + 1;
      do {
        lVar8 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
  }
  if (lVar10 == 0) goto LAB_10a38f140;
  if (*(long *)(param_1 + 0x560) != 0) {
    puStack_50 = &UNK_10f65208a;
    plStack_48 = (long *)0x23;
    if (*(long *)(*(long *)(param_1 + 0x560) + 8) != -1) goto LAB_10a38f18c;
  }
  FUN_10a329d10(&puStack_50,lVar10,*(undefined8 *)(param_1 + 0x100),0,1);
  if ((*(ushort *)(puStack_50 + 0x118) >> 3 & 1) == 0) {
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *(undefined **)(param_1 + 0x558) = puStack_50;
    lVar10 = *(long *)(param_1 + 0x560);
    *(long **)(param_1 + 0x560) = plStack_48;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a38ed00(param_1 + -0x68);
  }
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar2 = plStack_48 + 1;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
LAB_10a38f140:
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar10 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a38f1dc; end: 10a38f23f;  */

undefined8 * FUN_10a38f1dc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a38f240; end: 10a38f2d3;  */

void FUN_10a38f240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_39;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  FUN_10a3b1950(auStack_38,&uStack_21,&uStack_39,param_2,param_3);
  FUN_10a0cf858(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return;
}



/* Entry: 10a38f2d4; end: 10a38f3cb;  */

/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10a38f2d4(long param_1,long *******param_2)

{
  ulong uVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined **ppuVar10;
  long **pplVar11;
  long **pplVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long ******pppppplVar17;
  undefined *puVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  long *****ppppplVar22;
  undefined4 uVar23;
  long ******pppppplStack_1c0;
  long ******pppppplStack_1b8;
  long *******ppppppplStack_1b0;
  code **ppcStack_1a8;
  long **pplStack_1a0;
  long *******ppppppplStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  long *******ppppppplStack_150;
  long lStack_148;
  long *******ppppppplStack_140;
  ulong uStack_138;
  byte bStack_129;
  code *pcStack_128;
  undefined **ppuStack_120;
  long **pplStack_118;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long **pplStack_d8;
  long lStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long ***ppplStack_40;
  long **pplStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  
  uVar23 = 0xf651fb0;
  uStack_48 = 0x20;
  puStack_50 = &DAT_10f651fb0;
  FUN_10a3ca004();
  ppuVar10 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  plStack_30 = (long *)&UNK_10f63b699;
  ppuStack_28 = (undefined **)0x28;
  if (*ppuVar10 != (undefined *)0x0) {
    lStack_58 = *(long *)(*ppuVar10 + 0x10);
    if (lStack_58 != 0) {
      plStack_30 = &lStack_58;
      ppuStack_28 = &puStack_50;
      if (lRam00000001137eb010 != -1) {
        pplStack_38 = &plStack_30;
        ppplStack_40 = &pplStack_38;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137eb010,&ppplStack_40,FUN_10a3b1a18);
      }
      if ((bRam0000000113301f50 & 1) == 0) {
        lVar21 = *(long *)(*(long *)(param_1 + 0x170) + 0x100);
        if (lVar21 == 0) {
          uVar20 = 1;
        }
        else {
          uVar20 = (uint)(*(char *)(lVar21 + 0x290) != '\x03');
        }
        goto LAB_10a38f3b0;
      }
    }
    uVar20 = (uint)bRam0000000113301f50;
LAB_10a38f3b0:
    return (long *******)(ulong)(uVar20 & 1);
  }
  pplVar11 = &plStack_30;
  FUN_10a0edfc4();
  pcStack_68 = FUN_10a38f3cc;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_10a38db0c();
  pplVar12 = pplVar11;
  FUN_10a38f2d4();
  uVar9 = 0;
  if ((int)pplVar12 != 0) {
    ppppppplVar13 = param_2;
    (*(code *)(*param_2)[0xb])(param_2,&PTR_DAT_110bc96f0,0);
    uVar9 = SUB81(ppppppplVar13,0);
  }
  *(undefined1 *)(pplVar11 + 0xb2) = uVar9;
  FUN_10a2d5304(pplVar11,param_2);
  ppppppplVar13 = param_2;
  (*(code *)(*param_2)[6])(param_2,&PTR_DAT_110bc9710);
  *(int *)(pplVar11 + 0xaa) = (int)ppppppplVar13;
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc9730);
  *(undefined4 *)((long)pplVar11 + 0x55c) = uVar23;
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc9750);
  *(undefined4 *)((long)pplVar11 + 0x564) = uVar23;
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc9770);
  *(undefined4 *)(pplVar11 + 0xab) = uVar23;
  (*(code *)(*param_2)[8])(param_2,&PTR_DAT_110bc9790);
  *(undefined4 *)((long)pplVar11 + 0x554) = uVar23;
  uVar23 = 0x3dcccccd;
  (*(code *)(*param_2)[9])(param_2,&PTR_DAT_110bc97b0);
  *(undefined4 *)(pplVar11 + 0xad) = uVar23;
  ppppppplVar13 = (long *******)0x20;
  __Znwm();
  uStack_168 = 0x544c55414645445f;
  uStack_170 = 0x45524f43534e454c;
  ppppppplVar13[1] = (long ******)0x544c55414645445f;
  *ppppppplVar13 = (long ******)0x45524f43534e454c;
  uStack_178 = 0x54455353415f4843;
  uStack_180 = 0x554f5445525f544c;
  *(undefined8 *)((long)ppppppplVar13 + 0x16) = 0x54455353415f4843;
  *(undefined8 *)((long)ppppppplVar13 + 0xe) = 0x554f5445525f544c;
  *(undefined1 *)((long)ppppppplVar13 + 0x1e) = 0;
  (*(code *)(*param_2)[0x15])(&ppppppplStack_140,param_2,&PTR_DAT_110bc97d0,ppppppplVar13,0x1e);
  __ZdlPv(ppppppplVar13);
  uVar1 = uStack_138;
  if (-1 < (char)bStack_129) {
    uVar1 = (ulong)bStack_129;
  }
  if (uVar1 == 0xb) {
    ppppppplVar15 = ppppppplStack_140;
    if (-1 < (char)bStack_129) {
      ppppppplVar15 = (long *******)&ppppppplStack_140;
    }
    if (*ppppppplVar15 != (long ******)0x3734333231313831 ||
        *(long *)((long)ppppppplVar15 + 3) != 0x3833323734333231) goto LAB_10a38f5b8;
LAB_10a38f5fc:
    puVar14 = (undefined8 *)0x20;
    __Znwm();
    lStack_148 = -0x7fffffffffffffe0;
    ppppppplStack_150 = (long *******)0x1e;
    puVar14[1] = uStack_168;
    *puVar14 = uStack_170;
    *(undefined8 *)((long)puVar14 + 0x16) = uStack_178;
    *(undefined8 *)((long)puVar14 + 0xe) = uStack_180;
    *(undefined1 *)((long)puVar14 + 0x1e) = 0;
    puStack_158 = puVar14;
    FUN_10a38f874(pplVar11,&puStack_158);
    if (lStack_148 < 0) {
      __ZdlPv(puStack_158);
    }
    uVar23 = 3;
  }
  else {
LAB_10a38f5b8:
    if ((int)pplVar12 != 1) goto LAB_10a38f5fc;
    pplVar12 = pplVar11;
    FUN_10a38f2d4();
    if ((int)pplVar12 == 0) goto LAB_10a38f714;
    if (((ulong)pplVar11[0xb2] & 1) == 0) {
      if (((char)bStack_129 < '\0') && (uStack_138 == 0x21)) {
        puVar18 = &UNK_10f651fd1;
        uVar19 = 0x21;
LAB_10a38f664:
        ppppppplVar15 = ppppppplStack_140;
        _memcmp(ppppppplStack_140,puVar18,uVar19);
        if ((int)ppppppplVar15 == 0) goto LAB_10a38f680;
      }
      else if (((char)bStack_129 < '\0') && (uStack_138 == 0x25)) {
        puVar18 = &UNK_10f651ff3;
        uVar19 = 0x25;
        goto LAB_10a38f664;
      }
      FUN_10a38f874(pplVar11,&ppppppplStack_140);
      uVar19 = 1;
    }
    else {
LAB_10a38f680:
      iVar4 = *(int *)(pplVar11[0x2e][0x144] + 0x18);
      puVar14 = (undefined8 *)0x28;
      __Znwm();
      ppppppplVar13 = (long *******)0x25;
      if (iVar4 < 0x172) {
        ppppppplVar13 = (long *******)0x21;
      }
      lStack_148 = -0x7fffffffffffffd8;
      puStack_158 = puVar14;
      ppppppplStack_150 = ppppppplVar13;
      _memcpy();
      *(undefined1 *)((long)puVar14 + (long)ppppppplVar13) = 0;
      FUN_10a38f874(pplVar11,&puStack_158);
      if (lStack_148 < 0) {
        __ZdlPv(puStack_158);
      }
      uVar19 = 3;
    }
    ppppppplVar15 = param_2;
    (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110bc97f0,uVar19);
    uVar23 = SUB84(ppppppplVar15,0);
  }
  *(undefined4 *)(pplVar11 + 0xb7) = uVar23;
LAB_10a38f714:
  pcStack_e8 = FUN_10a3b1b18;
  ppuStack_e0 = &PTR_FUN_110bcef18;
  pplStack_d8 = pplVar11;
  FUN_10a02d928(param_2,&PTR_DAT_110bc9810,&pcStack_e8,0);
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  pcStack_128 = FUN_10a3b1bd4;
  ppuStack_120 = &PTR_FUN_110bcef30;
  pplStack_118 = pplVar11;
  FUN_10a02d928(param_2,&PTR_DAT_110bc9830,&pcStack_128,0);
  (*(code *)*ppuStack_120)(&ppuStack_120);
  ppuVar10 = &PTR_DAT_110bc9850;
  (*(code *)(*param_2)[0x3e])(param_2,&PTR_DAT_110bc9850,pplVar11[0xbd]);
  if ((char)bStack_129 < '\0') {
    param_2 = ppppppplStack_140;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return param_2;
  }
  ___stack_chk_fail();
  if ((char)bStack_129 < '\0') {
    __ZdlPv(ppppppplStack_140);
    ppppppplVar13 = ppppppplStack_140;
  }
  ppppppplVar16 = param_2;
  __Unwind_Resume();
  pcStack_188 = FUN_10a38f874;
  ppppppplVar15 = ppppppplVar16 + 0xb4;
  bVar5 = *(byte *)((long)ppuVar10 + 0x17);
  pppppplVar17 = (long ******)ppuVar10[1];
  if (-1 < (char)bVar5) {
    pppppplVar17 = (long ******)(ulong)bVar5;
  }
  bVar6 = *(byte *)((long)ppppppplVar16 + 0x5b7);
  pppppplVar2 = ppppppplVar16[0xb5];
  if (-1 < (char)bVar6) {
    pppppplVar2 = (long ******)(ulong)bVar6;
  }
  ppppppplStack_1b0 = ppppppplVar13;
  ppcStack_1a8 = &pcStack_128;
  pplStack_1a0 = pplVar11;
  ppppppplStack_198 = param_2;
  ppuStack_190 = &puStack_70;
  if (pppppplVar17 == pppppplVar2) {
    ppppppplVar13 = (long *******)*ppuVar10;
    if (-1 < (char)bVar5) {
      ppppppplVar13 = (long *******)ppuVar10;
    }
    ppppppplVar3 = (long *******)*ppppppplVar15;
    if (-1 < (char)bVar6) {
      ppppppplVar3 = ppppppplVar15;
    }
    _memcmp(ppppppplVar13,ppppppplVar3);
    if ((int)ppppppplVar13 == 0) {
      return ppppppplVar13;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppppppplVar15,ppuVar10);
  *(undefined4 *)(ppppppplVar16 + 0xc1) = 0;
  pppppplStack_1c0 = (long ******)0x0;
  pppppplStack_1b8 = (long ******)0x0;
  FUN_10a2c8f88(ppppppplVar16 + 0xba,&pppppplStack_1c0);
  pppppplVar17 = pppppplStack_1b8;
  if (pppppplStack_1b8 != (long ******)0x0) {
    pppppplVar2 = pppppplStack_1b8 + 1;
    do {
      ppppplVar22 = *pppppplVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(pppppplVar2,0x10);
      if (bVar8) {
        *pppppplVar2 = (long *****)((long)ppppplVar22 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (ppppplVar22 == (long *****)0x0) {
      (*(code *)(*pppppplStack_1b8)[2])(pppppplStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar17);
    }
  }
  pppppplVar17 = ppppppplVar16[0xb9];
  if ((pppppplVar17 != (long ******)0x0) && (pppppplVar17[1] != (long *****)0xffffffffffffffff)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppppplStack_1b8 = pppppplVar17;
    if (pppppplVar17 != (long ******)0x0) {
      pppppplStack_1c0 = ppppppplVar16[0xb8];
      if (pppppplStack_1c0 != (long ******)0x0) {
        FUN_10a3e00f4();
      }
      pppppplVar2 = pppppplVar17 + 1;
      do {
        ppppplVar22 = *pppppplVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pppppplVar2,0x10);
        if (bVar8) {
          *pppppplVar2 = (long *****)((long)ppppplVar22 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (ppppplVar22 == (long *****)0x0) {
        (*(code *)(*pppppplVar17)[2])(pppppplVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar17);
      }
    }
    pppppplVar17 = ppppppplVar16[0xb9];
    ppppppplVar16[0xb9] = (long ******)0x0;
    ppppppplVar16[0xb8] = (long ******)0x0;
    if (pppppplVar17 != (long ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  FUN_10a38e50c(ppppppplVar16);
  return ppppppplVar16;
}



/* Entry: 10a38f3cc; end: 10a38f873;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a38f3cc(undefined4 param_1,long param_2,long *******param_3)

{
  ulong uVar1;
  long ******pppppplVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  long lVar10;
  long *******ppppppplVar11;
  undefined8 *puVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  undefined **ppuVar15;
  long ******pppppplVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 uVar19;
  long *****ppppplVar20;
  long ******pppppplStack_160;
  long ******pppppplStack_158;
  long *******ppppppplStack_150;
  code **ppcStack_148;
  long lStack_140;
  long *******ppppppplStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_f8;
  long *******ppppppplStack_f0;
  long lStack_e8;
  long *******ppppppplStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a38db0c();
  lVar10 = param_2;
  FUN_10a38f2d4();
  uVar8 = 0;
  if ((int)lVar10 != 0) {
    ppppppplVar11 = param_3;
    (*(code *)(*param_3)[0xb])(param_3,&PTR_DAT_110bc96f0,0);
    uVar8 = SUB81(ppppppplVar11,0);
  }
  *(undefined1 *)(param_2 + 0x590) = uVar8;
  FUN_10a2d5304(param_2,param_3);
  ppppppplVar11 = param_3;
  (*(code *)(*param_3)[6])(param_3,&PTR_DAT_110bc9710);
  *(int *)(param_2 + 0x550) = (int)ppppppplVar11;
  (*(code *)(*param_3)[8])(param_3,&PTR_DAT_110bc9730);
  *(undefined4 *)(param_2 + 0x55c) = param_1;
  (*(code *)(*param_3)[8])(param_3,&PTR_DAT_110bc9750);
  *(undefined4 *)(param_2 + 0x564) = param_1;
  (*(code *)(*param_3)[8])(param_3,&PTR_DAT_110bc9770);
  *(undefined4 *)(param_2 + 0x558) = param_1;
  (*(code *)(*param_3)[8])(param_3,&PTR_DAT_110bc9790);
  *(undefined4 *)(param_2 + 0x554) = param_1;
  uVar9 = 0x3dcccccd;
  (*(code *)(*param_3)[9])(param_3,&PTR_DAT_110bc97b0);
  *(undefined4 *)(param_2 + 0x568) = uVar9;
  ppppppplVar11 = (long *******)0x20;
  __Znwm();
  uStack_108 = 0x544c55414645445f;
  uStack_110 = 0x45524f43534e454c;
  ppppppplVar11[1] = (long ******)0x544c55414645445f;
  *ppppppplVar11 = (long ******)0x45524f43534e454c;
  uStack_118 = 0x54455353415f4843;
  uStack_120 = 0x554f5445525f544c;
  *(undefined8 *)((long)ppppppplVar11 + 0x16) = 0x54455353415f4843;
  *(undefined8 *)((long)ppppppplVar11 + 0xe) = 0x554f5445525f544c;
  *(undefined1 *)((long)ppppppplVar11 + 0x1e) = 0;
  (*(code *)(*param_3)[0x15])(&ppppppplStack_e0,param_3,&PTR_DAT_110bc97d0,ppppppplVar11,0x1e);
  __ZdlPv(ppppppplVar11);
  uVar1 = uStack_d8;
  if (-1 < (char)bStack_c9) {
    uVar1 = (ulong)bStack_c9;
  }
  if (uVar1 == 0xb) {
    ppppppplVar13 = ppppppplStack_e0;
    if (-1 < (char)bStack_c9) {
      ppppppplVar13 = (long *******)&ppppppplStack_e0;
    }
    if (*ppppppplVar13 != (long ******)0x3734333231313831 ||
        *(long *)((long)ppppppplVar13 + 3) != 0x3833323734333231) goto LAB_10a38f5b8;
LAB_10a38f5fc:
    puVar12 = (undefined8 *)0x20;
    __Znwm();
    lStack_e8 = -0x7fffffffffffffe0;
    ppppppplStack_f0 = (long *******)0x1e;
    puVar12[1] = uStack_108;
    *puVar12 = uStack_110;
    *(undefined8 *)((long)puVar12 + 0x16) = uStack_118;
    *(undefined8 *)((long)puVar12 + 0xe) = uStack_120;
    *(undefined1 *)((long)puVar12 + 0x1e) = 0;
    puStack_f8 = puVar12;
    FUN_10a38f874(param_2,&puStack_f8);
    if (lStack_e8 < 0) {
      __ZdlPv(puStack_f8);
    }
    uVar9 = 3;
  }
  else {
LAB_10a38f5b8:
    if ((int)lVar10 != 1) goto LAB_10a38f5fc;
    lVar10 = param_2;
    FUN_10a38f2d4();
    if ((int)lVar10 == 0) goto LAB_10a38f714;
    if ((*(byte *)(param_2 + 0x590) & 1) == 0) {
      if (((char)bStack_c9 < '\0') && (uStack_d8 == 0x21)) {
        puVar17 = &UNK_10f651fd1;
        uVar19 = 0x21;
LAB_10a38f664:
        ppppppplVar13 = ppppppplStack_e0;
        _memcmp(ppppppplStack_e0,puVar17,uVar19);
        if ((int)ppppppplVar13 == 0) goto LAB_10a38f680;
      }
      else if (((char)bStack_c9 < '\0') && (uStack_d8 == 0x25)) {
        puVar17 = &UNK_10f651ff3;
        uVar19 = 0x25;
        goto LAB_10a38f664;
      }
      FUN_10a38f874(param_2,&ppppppplStack_e0);
      uVar19 = 1;
    }
    else {
LAB_10a38f680:
      iVar3 = *(int *)(*(long *)(*(long *)(param_2 + 0x170) + 0xa20) + 0x18);
      puVar12 = (undefined8 *)0x28;
      __Znwm();
      ppppppplVar11 = (long *******)0x25;
      if (iVar3 < 0x172) {
        ppppppplVar11 = (long *******)0x21;
      }
      lStack_e8 = -0x7fffffffffffffd8;
      puStack_f8 = puVar12;
      ppppppplStack_f0 = ppppppplVar11;
      _memcpy();
      *(undefined1 *)((long)puVar12 + (long)ppppppplVar11) = 0;
      FUN_10a38f874(param_2,&puStack_f8);
      if (lStack_e8 < 0) {
        __ZdlPv(puStack_f8);
      }
      uVar19 = 3;
    }
    ppppppplVar13 = param_3;
    (*(code *)(*param_3)[7])(param_3,&PTR_DAT_110bc97f0,uVar19);
    uVar9 = SUB84(ppppppplVar13,0);
  }
  *(undefined4 *)(param_2 + 0x5b8) = uVar9;
LAB_10a38f714:
  pcStack_88 = FUN_10a3b1b18;
  ppuStack_80 = &PTR_FUN_110bcef18;
  lStack_78 = param_2;
  FUN_10a02d928(param_3,&PTR_DAT_110bc9810,&pcStack_88,0);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  pcStack_c8 = FUN_10a3b1bd4;
  ppuStack_c0 = &PTR_FUN_110bcef30;
  lStack_b8 = param_2;
  FUN_10a02d928(param_3,&PTR_DAT_110bc9830,&pcStack_c8,0);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  ppuVar18 = &PTR_DAT_110bc9850;
  (*(code *)(*param_3)[0x3e])(param_3,&PTR_DAT_110bc9850,*(undefined8 *)(param_2 + 0x5e8));
  if ((char)bStack_c9 < '\0') {
    param_3 = ppppppplStack_e0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(ppppppplStack_e0);
    ppppppplVar11 = ppppppplStack_e0;
  }
  ppppppplVar14 = param_3;
  __Unwind_Resume();
  pcStack_128 = FUN_10a38f874;
  ppppppplVar13 = ppppppplVar14 + 0xb4;
  bVar4 = *(byte *)((long)ppuVar18 + 0x17);
  pppppplVar16 = (long ******)ppuVar18[1];
  if (-1 < (char)bVar4) {
    pppppplVar16 = (long ******)(ulong)bVar4;
  }
  bVar5 = *(byte *)((long)ppppppplVar14 + 0x5b7);
  pppppplVar2 = ppppppplVar14[0xb5];
  if (-1 < (char)bVar5) {
    pppppplVar2 = (long ******)(ulong)bVar5;
  }
  ppppppplStack_150 = ppppppplVar11;
  ppcStack_148 = &pcStack_c8;
  lStack_140 = param_2;
  ppppppplStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  if (pppppplVar16 == pppppplVar2) {
    ppuVar15 = (undefined **)*ppuVar18;
    if (-1 < (char)bVar4) {
      ppuVar15 = ppuVar18;
    }
    ppppppplVar11 = (long *******)*ppppppplVar13;
    if (-1 < (char)bVar5) {
      ppppppplVar11 = ppppppplVar13;
    }
    _memcmp(ppuVar15,ppppppplVar11);
    if ((int)ppuVar15 == 0) {
      return;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(ppppppplVar13,ppuVar18);
  *(undefined4 *)(ppppppplVar14 + 0xc1) = 0;
  pppppplStack_160 = (long ******)0x0;
  pppppplStack_158 = (long ******)0x0;
  FUN_10a2c8f88(ppppppplVar14 + 0xba,&pppppplStack_160);
  pppppplVar16 = pppppplStack_158;
  if (pppppplStack_158 != (long ******)0x0) {
    pppppplVar2 = pppppplStack_158 + 1;
    do {
      ppppplVar20 = *pppppplVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppplVar2,0x10);
      if (bVar7) {
        *pppppplVar2 = (long *****)((long)ppppplVar20 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (ppppplVar20 == (long *****)0x0) {
      (*(code *)(*pppppplStack_158)[2])(pppppplStack_158);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
    }
  }
  pppppplVar16 = ppppppplVar14[0xb9];
  if ((pppppplVar16 != (long ******)0x0) && (pppppplVar16[1] != (long *****)0xffffffffffffffff)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppppplStack_158 = pppppplVar16;
    if (pppppplVar16 != (long ******)0x0) {
      pppppplStack_160 = ppppppplVar14[0xb8];
      if (pppppplStack_160 != (long ******)0x0) {
        FUN_10a3e00f4();
      }
      pppppplVar2 = pppppplVar16 + 1;
      do {
        ppppplVar20 = *pppppplVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppplVar2,0x10);
        if (bVar7) {
          *pppppplVar2 = (long *****)((long)ppppplVar20 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (ppppplVar20 == (long *****)0x0) {
        (*(code *)(*pppppplVar16)[2])(pppppplVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar16);
      }
    }
    pppppplVar16 = ppppppplVar14[0xb9];
    ppppppplVar14[0xb9] = (long ******)0x0;
    ppppppplVar14[0xb8] = (long ******)0x0;
    if (pppppplVar16 != (long ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  FUN_10a38e50c(ppppppplVar14);
  return;
}



/* Entry: 10a38f874; end: 10a38f9e3;  */

void FUN_10a38f874(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lStack_40;
  long *plStack_38;
  
  plVar9 = (long *)(param_1 + 0x5a0);
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)(param_1 + 0x5b7);
  uVar2 = *(ulong *)(param_1 + 0x5a8);
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar8 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar8 = param_2;
    }
    plVar3 = (long *)*plVar9;
    if (-1 < (char)bVar5) {
      plVar3 = plVar9;
    }
    _memcmp(plVar8,plVar3);
    if ((int)plVar8 == 0) {
      return;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar9,param_2);
  *(undefined4 *)(param_1 + 0x608) = 0;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_10a2c8f88(param_1 + 0x5d0,&lStack_40);
  plVar9 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar8 = plStack_38 + 1;
    do {
      lVar10 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = *(long **)(param_1 + 0x5c8);
  if ((plVar9 != (long *)0x0) && (plVar9[1] != -1)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar9;
    if (plVar9 != (long *)0x0) {
      lStack_40 = *(long *)(param_1 + 0x5c0);
      if (lStack_40 != 0) {
        FUN_10a3e00f4();
      }
      plVar8 = plVar9 + 1;
      do {
        lVar10 = *plVar8;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar7) {
          *plVar8 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    lVar10 = *(long *)(param_1 + 0x5c8);
    *(undefined8 *)(param_1 + 0x5c8) = 0;
    *(undefined8 *)(param_1 + 0x5c0) = 0;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  FUN_10a38e50c(param_1);
  return;
}



/* Entry: 10a38f9e4; end: 10a38fbbb;  */

void FUN_10a38f9e4(long param_1,long *param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x2a8) != *(long *)(param_1 + 0x2a0)) {
    lVar1 = param_1;
    FUN_10a38ea68();
    lVar1 = *(long *)(lVar1 + 0x188);
    if (((lVar1 != 0) &&
        (___dynamic_cast(lVar1,&PTR_DAT_110bb3230,&PTR_DAT_110c67800,0), lVar1 != 0)) &&
       (*(int *)(lVar1 + 0x128) == 1)) {
      FUN_10a422a34(param_1,param_2);
      goto LAB_10a38fa60;
    }
  }
  FUN_10a2d5884(param_1,param_2);
LAB_10a38fa60:
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc9710,*(undefined4 *)(param_1 + 0x550));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x55c),param_2,&PTR_DAT_110bc9730);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x564),param_2,&PTR_DAT_110bc9750);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x558),param_2,&PTR_DAT_110bc9770);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x554),param_2,&PTR_DAT_110bc9790);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x568),param_2,&PTR_DAT_110bc97b0);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bc96f0,*(undefined1 *)(param_1 + 0x590));
  FUN_10a00d760(param_2,&PTR_DAT_110bc97d0,param_1 + 0x5a0);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110bc97f0,*(undefined4 *)(param_1 + 0x5b8));
  FUN_10a02e188(param_2,&PTR_DAT_110bc9810,param_1 + 0x570,&UNK_10f633e9d,0xd);
  FUN_10a02e188(param_2,&PTR_DAT_110bc9830,param_1 + 0x580,&UNK_10f633e9d,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010a38fbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bc9850,*(undefined8 *)(param_1 + 0x5e8));
  return;
}



/* Entry: 10a38fbbc; end: 10a38fd0b;  */

void FUN_10a38fbbc(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 auStack_108 [2];
  char cStack_f1;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 **ppuStack_78;
  undefined1 auStack_70 [8];
  undefined8 *apuStack_68 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_88 = param_2;
  if (param_2 == 0) {
    uStack_a0 = 0;
    FUN_10a3b1e74(&uStack_80,&uStack_a0);
    param_1[1] = ppuStack_78;
    *param_1 = uStack_80;
    if (ppuStack_78 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar3) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a044790(auStack_70);
    ppuVar5 = apuStack_68;
    (*(code *)*apuStack_68[0])();
    if (ppuStack_78 == (undefined8 **)0x0) goto LAB_10a38fcc4;
    ppuVar1 = ppuStack_78 + 1;
    do {
      puVar8 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    puStack_98 = *(undefined8 **)(param_2 + 0x858);
    ppuStack_90 = *(undefined8 ***)(param_2 + 0x860);
    if (ppuStack_90 != (undefined8 **)0x0) {
      ppuVar5 = ppuStack_90 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar3) {
          *ppuVar5 = (undefined8 *)((long)*ppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar5 = &puStack_98;
    param_3 = &lStack_88;
    FUN_10a3b1c90(param_1);
    if (ppuStack_90 == (undefined8 **)0x0) goto LAB_10a38fcc4;
    ppuVar1 = ppuStack_90 + 1;
    do {
      puVar8 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar8 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_90;
    } while (cVar2 != '\0');
  }
  if (puVar8 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar6)[2])(ppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar5 = ppuVar6;
  }
LAB_10a38fcc4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    puStack_e8 = &uStack_e0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    *(byte *)((long)param_3 + 0x279) = *(byte *)((long)param_3 + 0x279) & 0xfd;
    uVar7 = *(uint *)(ppuVar5 + 0xaa);
    if ((uVar7 >> 1 & 1) != 0) {
      func_0x000107c2b074(auStack_108,&PTR_DAT_110bceb30);
      FUN_10a20e230(&puStack_e8,auStack_108,auStack_108);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      *(byte *)((long)param_3 + 0x279) = *(byte *)((long)param_3 + 0x279) | 2;
      uVar7 = *(uint *)(ppuVar5 + 0xaa);
    }
    if ((uVar7 >> 2 & 1) != 0) {
      func_0x000107c2b074(auStack_108,&PTR_DAT_110bceb48);
      FUN_10a20e230(&puStack_e8,auStack_108,auStack_108);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      uVar7 = *(uint *)(ppuVar5 + 0xaa);
    }
    if ((uVar7 >> 3 & 1) != 0) {
      func_0x000107c2b074(auStack_108,&PTR_DAT_110bceb60);
      FUN_10a20e230(&puStack_e8,auStack_108,auStack_108);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
      *(byte *)((long)param_3 + 0x279) = *(byte *)((long)param_3 + 0x279) | 2;
      uVar7 = *(uint *)(ppuVar5 + 0xaa);
    }
    if ((uVar7 >> 4 & 1) != 0) {
      func_0x000107c2b074(auStack_108,&PTR_DAT_110bceb78);
      FUN_10a20e230(&puStack_e8,auStack_108,auStack_108);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
    }
    iVar4 = (int)ppuVar5 + 0x580;
    FUN_10a3903a8();
    if (iVar4 != 0) {
      func_0x000107c2b074(auStack_108,&PTR_DAT_110bceb90);
      FUN_10a20e230(&puStack_e8,auStack_108,auStack_108);
      if (cStack_f1 < '\0') {
        __ZdlPv(auStack_108[0]);
      }
    }
    FUN_10a0ee900(auStack_108,&UNK_10f65203f,0x14);
    func_0x00010a0e35d4(&puStack_e8,auStack_108);
    if (cStack_f1 < '\0') {
      __ZdlPv(auStack_108[0]);
    }
    FUN_10a0e3500(&plStack_120,&puStack_e8);
    FUN_10a0da1b8(param_3 + 0x40,param_3[0x41]);
    param_3[0x40] = (long)plStack_120;
    param_3[0x41] = lStack_118;
    param_3[0x42] = lStack_110;
    if (lStack_110 == 0) {
      param_3[0x40] = (long)(param_3 + 0x41);
    }
    else {
      plStack_120 = &lStack_118;
      *(long **)(lStack_118 + 0x10) = param_3 + 0x41;
      lStack_118 = 0;
      lStack_110 = 0;
    }
    FUN_10a0da1b8(&plStack_120,lStack_118);
    FUN_10a0da1b8(&puStack_e8,uStack_e0);
    return;
  }
  return;
}



/* Entry: 10a38fd0c; end: 10a38ff8b;  */

void FUN_10a38fd0c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  *(byte *)(param_2 + 0x279) = *(byte *)(param_2 + 0x279) & 0xfd;
  uVar2 = *(uint *)(param_1 + 0x550);
  if ((uVar2 >> 1 & 1) != 0) {
    func_0x000107c2b074(auStack_68,&PTR_DAT_110bceb30);
    FUN_10a20e230(&puStack_48,auStack_68,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    *(byte *)(param_2 + 0x279) = *(byte *)(param_2 + 0x279) | 2;
    uVar2 = *(uint *)(param_1 + 0x550);
  }
  if ((uVar2 >> 2 & 1) != 0) {
    func_0x000107c2b074(auStack_68,&PTR_DAT_110bceb48);
    FUN_10a20e230(&puStack_48,auStack_68,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    uVar2 = *(uint *)(param_1 + 0x550);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    func_0x000107c2b074(auStack_68,&PTR_DAT_110bceb60);
    FUN_10a20e230(&puStack_48,auStack_68,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
    *(byte *)(param_2 + 0x279) = *(byte *)(param_2 + 0x279) | 2;
    uVar2 = *(uint *)(param_1 + 0x550);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    func_0x000107c2b074(auStack_68,&PTR_DAT_110bceb78);
    FUN_10a20e230(&puStack_48,auStack_68,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  iVar1 = (int)param_1 + 0x580;
  FUN_10a3903a8();
  if (iVar1 != 0) {
    func_0x000107c2b074(auStack_68,&PTR_DAT_110bceb90);
    FUN_10a20e230(&puStack_48,auStack_68,auStack_68);
    if (cStack_51 < '\0') {
      __ZdlPv(auStack_68[0]);
    }
  }
  FUN_10a0ee900(auStack_68,&UNK_10f65203f,0x14);
  func_0x00010a0e35d4(&puStack_48,auStack_68);
  if (cStack_51 < '\0') {
    __ZdlPv(auStack_68[0]);
  }
  FUN_10a0e3500(&plStack_80,&puStack_48);
  FUN_10a0da1b8((long *)(param_2 + 0x200),*(undefined8 *)(param_2 + 0x208));
  *(long **)(param_2 + 0x200) = plStack_80;
  *(long *)(param_2 + 0x208) = lStack_78;
  *(long *)(param_2 + 0x210) = lStack_70;
  if (lStack_70 == 0) {
    *(long *)(param_2 + 0x200) = param_2 + 0x208;
  }
  else {
    plStack_80 = &lStack_78;
    *(long *)(lStack_78 + 0x10) = param_2 + 0x208;
    lStack_78 = 0;
    lStack_70 = 0;
  }
  FUN_10a0da1b8(&plStack_80,lStack_78);
  FUN_10a0da1b8(&puStack_48,uStack_40);
  return;
}



/* Entry: 10a38ff8c; end: 10a38ffa3;  */

int * FUN_10a38ff8c(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_1c0 [14];
  undefined4 uStack_188;
  undefined4 uStack_180;
  undefined1 uStack_17c;
  undefined1 uStack_178;
  undefined4 uStack_174;
  undefined1 uStack_170;
  undefined1 uStack_16c;
  int aiStack_168 [22];
  char cStack_110;
  long lStack_108;
  int aiStack_e0 [14];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined1 uStack_8c;
  int aiStack_88 [22];
  char cStack_30;
  long lStack_28;
  
  piVar1 = aiStack_e0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_e0[0] = 0;
  uStack_a8 = 0;
  uStack_a0 = 1;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0xffffffff;
  uStack_90 = 0;
  uStack_8c = 0;
  piVar3 = (int *)(*(long *)(param_1 + 0x5e8) + 0xe8);
  FUN_10ab17db4(aiStack_88,aiStack_e0,piVar3,(long)*(short *)(*(long *)(param_1 + 0x5e8) + 0x10a));
  if (cStack_30 == '\x01') {
    piVar3 = aiStack_88;
    FUN_10a4c3ba4(param_2 + 0x58);
    if (cStack_30 == '\x01') {
      FUN_10a22d0f8(aiStack_88);
    }
  }
  FUN_10a22d0f8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return piVar1;
  }
  ___stack_chk_fail();
  if (cStack_30 == '\x01') {
    FUN_10a22d0f8(aiStack_88);
  }
  FUN_10a22d0f8(aiStack_e0);
  __Unwind_Resume();
  piVar2 = aiStack_1c0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = piVar3;
  if ((uint)*(ushort *)(piVar1 + 0x42) != (int)*(short *)((long)piVar1 + 0x10a)) {
    aiStack_1c0[0] = 0;
    uStack_188 = 0;
    uStack_180 = 1;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0xffffffff;
    uStack_170 = 0;
    uStack_16c = 0;
    piVar4 = piVar1 + 0x3a;
    FUN_10ab17db4(aiStack_168,aiStack_1c0);
    if (cStack_110 == '\x01') {
      piVar4 = aiStack_168;
      FUN_10a4c3ba4(piVar3);
      if (cStack_110 == '\x01') {
        FUN_10a22d0f8(aiStack_168);
      }
    }
    FUN_10a22d0f8();
    piVar1 = piVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return piVar1;
  }
  ___stack_chk_fail();
  if (cStack_110 == '\x01') {
    FUN_10a22d0f8(aiStack_168);
  }
  FUN_10a22d0f8(aiStack_1c0);
  __Unwind_Resume();
  piVar3 = piVar1 + 0x3a;
  func_0x00010ab17e00(piVar3,(long)*(short *)((long)piVar1 + 0x10a));
  if (piVar4 != (int *)0x0) {
    piVar1 = *(int **)(piVar4 + 10);
    piVar4 = *(int **)(piVar4 + 0xc);
    if (piVar1 == piVar4) {
LAB_10ac64884:
      piVar3 = (int *)0x0;
      if (piVar1 != piVar4) {
        piVar3 = piVar1;
      }
      if (piVar3 != (int *)0x0) {
        return piVar3 + 2;
      }
    }
    else {
      do {
        if ((*piVar1 == (int)piVar3) && (piVar1[1] == (int)((ulong)piVar3 >> 0x20)))
        goto LAB_10ac64884;
        piVar1 = piVar1 + 0x88;
      } while (piVar1 != piVar4);
    }
  }
  return (int *)0x0;
}



/* Entry: 10a38ffa4; end: 10a3900b3;  */

bool FUN_10a38ffa4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x5e8);
  FUN_10ac6482c(lVar1,*(undefined8 *)(param_2 + 0x68));
  lVar2 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010a390044();
    if ((int)lVar2 == 0) {
      *(undefined1 *)(param_1 + 0x5e1) = 0;
    }
    else {
      *(bool *)(param_1 + 0x5e1) = lVar1 != 0;
      if (lVar1 != 0) {
        FUN_10a3900b4(param_1,lVar1);
      }
    }
  }
  if (0x13e < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) {
    FUN_10a3e4548(*(undefined8 *)(param_1 + 0x168),lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a3900b4; end: 10a39018f;  */

void FUN_10a3900b4(float param_1,float param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  FUN_10ac648a8(*(undefined8 *)(param_3 + 0x5e8),param_4,0);
  if ((*(byte *)(param_3 + 0x550) >> 4 & 1) != 0) {
    fVar6 = *(float *)(param_3 + 0x55c);
    uVar7 = *(undefined8 *)(param_4 + 0x180);
    FUN_10a14cdf8(param_4);
    lVar1 = *(long *)(param_4 + 0x10);
    uVar3 = *(long *)(param_4 + 0x18) - lVar1 >> 3;
    if ((uVar3 < 0x40) || (uVar3 < 0x44)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a390190);
      (*pcVar2)();
    }
    uVar7 = NEON_scvtf(uVar7,4);
    fVar4 = ((float)*(undefined8 *)(lVar1 + 0x1f8) - (float)*(undefined8 *)(lVar1 + 0x218)) /
            (param_1 * (float)uVar7);
    fVar5 = ((float)((ulong)*(undefined8 *)(lVar1 + 0x1f8) >> 0x20) -
            (float)((ulong)*(undefined8 *)(lVar1 + 0x218) >> 0x20)) /
            (param_2 * (float)((ulong)uVar7 >> 0x20));
    fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5);
    fVar5 = 0.0;
    if ((0.12 <= fVar4) && (fVar5 = 1.0, fVar4 <= 0.19)) {
      fVar5 = (fVar4 + -0.12) / 0.07;
    }
    *(float *)(param_3 + 0x560) = fVar6 * fVar5;
  }
  return;
}



/* Entry: 10a390190; end: 10a390197;  */

bool FUN_10a390190(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1[0x1f];
  FUN_10ac6482c(lVar1,*(undefined8 *)(param_2 + 0x68));
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x30))();
  FUN_10ab6e450();
  if (plVar2 != (long *)0x0) {
    plVar2 = param_1 + -0x9e;
    func_0x00010a390044();
    if ((int)plVar2 == 0) {
      *(undefined1 *)((long)param_1 + 0xf1) = 0;
    }
    else {
      *(bool *)((long)param_1 + 0xf1) = lVar1 != 0;
      if (lVar1 != 0) {
        FUN_10a3900b4(param_1 + -0x9e,lVar1);
      }
    }
  }
  if (0x13e < *(int *)(*(long *)(param_1[-0x70] + 0xa20) + 0x18)) {
    FUN_10a3e4548(param_1[-0x71],lVar1 != 0);
  }
  return lVar1 != 0;
}



/* Entry: 10a390198; end: 10a39021b;  */

void FUN_10a390198(undefined4 param_1,long param_2)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_2 + 0x554) = param_1;
  if ((*(byte *)(param_2 + 0x550) >> 1 & 1) != 0) {
    uStack_24 = param_1;
    FUN_10a38ea68();
    func_0x000107c2b074(auStack_48,&PTR_DAT_110bcea90);
    FUN_10a0d9bd4(param_2,auStack_48,&uStack_24);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  return;
}



/* Entry: 10a39021c; end: 10a39029f;  */

void FUN_10a39021c(undefined4 param_1,long param_2)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_2 + 0x55c) = param_1;
  if ((*(byte *)(param_2 + 0x550) >> 4 & 1) != 0) {
    uStack_24 = param_1;
    FUN_10a38ea68();
    func_0x000107c2b074(auStack_48,&PTR_DAT_110bcea78);
    FUN_10a0d9bd4(param_2,auStack_48,&uStack_24);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  return;
}



/* Entry: 10a3902a0; end: 10a390323;  */

void FUN_10a3902a0(undefined4 param_1,long param_2)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_2 + 0x564) = param_1;
  if ((*(byte *)(param_2 + 0x550) >> 2 & 1) != 0) {
    uStack_24 = param_1;
    FUN_10a38ea68();
    func_0x000107c2b074(auStack_48,&PTR_DAT_110bcea48);
    FUN_10a0d9bd4(param_2,auStack_48,&uStack_24);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  return;
}



/* Entry: 10a390324; end: 10a3903a7;  */

void FUN_10a390324(undefined4 param_1,long param_2)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined4 uStack_24;
  
  *(undefined4 *)(param_2 + 0x558) = param_1;
  if ((*(byte *)(param_2 + 0x550) >> 3 & 1) != 0) {
    uStack_24 = param_1;
    FUN_10a38ea68();
    func_0x000107c2b074(auStack_48,&PTR_DAT_110bcea60);
    FUN_10a0d9bd4(param_2,auStack_48,&uStack_24);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
  return;
}



/* Entry: 10a3903a8; end: 10a390417;  */

bool FUN_10a3903a8(long *param_1)

{
  bool bVar1;
  long *plVar2;
  
  if (*param_1 != 0) {
    plVar2 = *(long **)(*param_1 + 0x268);
    bVar1 = false;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xb0))();
      if ((int)plVar2 == 0x200) {
        plVar2 = *(long **)(*param_1 + 0x268);
        bVar1 = false;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0xb8))();
          bVar1 = (int)plVar2 == 0x200;
        }
      }
      else {
        bVar1 = false;
      }
    }
    return bVar1;
  }
  return false;
}



/* Entry: 10a390418; end: 10a3904a7;  */

void FUN_10a390418(long param_1)

{
  long lVar1;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  FUN_10a015bec(param_1 + 0x570);
  lVar1 = param_1;
  FUN_10a38ea68(param_1);
  func_0x000107c2b074(auStack_40,&PTR_DAT_110bceac0);
  FUN_10a3368d0(lVar1,auStack_40,param_1 + 0x570,&UNK_10e4ac8a8,0xd);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return;
}



/* Entry: 10a3904a8; end: 10a3905a7;  */

void FUN_10a3904a8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  
  FUN_10a015bec(param_1 + 0x580);
  iVar1 = (int)param_1 + 0x580;
  FUN_10a3903a8();
  lVar2 = param_1;
  FUN_10a38ea68(param_1);
  if (iVar1 == 0) {
    func_0x000107c2b074(auStack_50,&PTR_DAT_110bceb90);
    FUN_10a048040(lVar2 + 0x200,auStack_50);
  }
  else {
    func_0x000107c2b074(auStack_50,&PTR_DAT_110bceb90);
    FUN_10a047898(lVar2 + 0x200,auStack_50,auStack_50);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  lVar2 = param_1;
  FUN_10a38ea68(param_1);
  func_0x000107c2b074(auStack_50,&PTR_DAT_110bcead8);
  FUN_10a3368d0(lVar2,auStack_50,param_1 + 0x580,&UNK_10e4ac8a8,0xd);
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 10a3905a8; end: 10a390687;  */

void FUN_10a3905a8(undefined4 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined4 uStack_34;
  
  *(undefined4 *)(param_2 + 0x568) = param_1;
  if ((*(byte *)(param_2 + 0x550) >> 1 & 1) != 0) {
    lVar1 = param_2;
    uStack_34 = param_1;
    FUN_10a38ea68();
    func_0x000107c2b074(auStack_58,&PTR_DAT_110bceaa8);
    FUN_10a336830(lVar1,auStack_58);
    if (cStack_41 < '\0') {
      __ZdlPv(auStack_58[0]);
    }
    lVar2 = param_2;
    FUN_10a38ea68(param_2);
    if ((int)lVar1 == 0) {
      FUN_10a38fd0c(param_2,lVar2);
    }
    else {
      func_0x000107c2b074(auStack_58,&PTR_DAT_110bceaa8);
      FUN_10a0d9bd4(lVar2,auStack_58,&uStack_34);
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
    }
  }
  return;
}



/* Entry: 10a390688; end: 10a390bbf;  */

void FUN_10a390688(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    plVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_58 = (long *)param_2[9];
    lStack_60 = param_2[8];
    lVar12 = param_4 + 0x88;
    func_0x00010a35bf90(lVar12,&lStack_60);
    puVar4 = (undefined8 *)((ulong)&lStack_60 | 8);
    plVar11 = &lStack_60;
    if (lVar12 != 0) {
      puVar4 = (undefined8 *)(lVar12 + 0x28);
      plVar11 = (long *)(lVar12 + 0x20);
    }
    uVar10 = *puVar4;
    plVar11 = (long *)*plVar11;
  }
  lVar12 = param_2[0x2e];
  FUN_10a3dd220(lVar12);
  FUN_10a3b25a8(lVar12,plVar11,uVar10);
  plVar11 = (long *)0x28;
  lStack_70 = lVar12;
  __Znwm();
  plVar13 = plVar11 + 1;
  *plVar13 = 0;
  *plVar11 = (long)&PTR_FUN_110bcef88;
  plVar11[2] = 0;
  plVar11[3] = lVar12;
  plVar11[4] = (long)FUN_10a3df8cc;
  plStack_68 = plVar11;
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar11;
    }
    else {
      if (*(long *)(*(long *)(lVar12 + 0x30) + 8) != -1) goto LAB_10a3907f4;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = *plVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar12 + 0x28) = lVar12;
      *(long **)(lVar12 + 0x30) = plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar12 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a3907f4:
  lVar12 = lStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_70 + 0x150,param_2 + 0x2a);
  uVar2 = (*(ushort *)(param_2 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar12 + 0x180) & 0xfffc;
  *(ushort *)(lVar12 + 0x180) = uVar3 | *(ushort *)(lVar12 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar12 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x30) & 1;
  lStack_60 = lVar12;
  plStack_58 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar11 = plStack_68 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_60);
  plVar11 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar13 = plStack_58 + 1;
    do {
      lVar12 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  lVar12 = lStack_70;
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x128))();
  *(undefined1 *)(lVar12 + 0x20c) = 0;
  *(int *)(lVar12 + 0x210) = (int)plVar11;
  FUN_10a2d597c(param_2,lVar12,param_4);
  FUN_10a38db0c(lVar12);
  *(int *)(lVar12 + 0x550) = (int)param_2[0xaa];
  lVar8 = lVar12;
  FUN_10a38ea68(lVar12);
  FUN_10a38fd0c(lVar12,lVar8);
  FUN_10a390198(*(undefined4 *)((long)param_2 + 0x554),lVar12);
  FUN_10a39021c(*(undefined4 *)((long)param_2 + 0x55c),lVar12);
  FUN_10a3902a0(*(undefined4 *)((long)param_2 + 0x564),lVar12);
  FUN_10a390324((int)param_2[0xab],lVar12);
  FUN_10a3905a8((int)param_2[0xad],lVar12);
  plStack_78 = (long *)param_2[0xb1];
  lStack_80 = param_2[0xb0];
  if (param_2[0xb1] != 0) {
    plVar11 = (long *)(param_2[0xb1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a3904a8(lVar12,&lStack_80);
  plVar11 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar13 = plStack_78 + 1;
    do {
      lVar12 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  plStack_88 = (long *)param_2[0xaf];
  lStack_90 = param_2[0xae];
  if (param_2[0xaf] != 0) {
    plVar11 = (long *)(param_2[0xaf] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_10a390418(lStack_70,&lStack_90);
  plVar11 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar13 = plStack_88 + 1;
    do {
      lVar12 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  lVar7 = lStack_70;
  lVar9 = *(long *)(lStack_70 + 0x5e8);
  lVar8 = param_2[0xbd];
  *(byte *)(lVar9 + 0x100) = *(byte *)(lVar9 + 0x100) & 0xfe | *(byte *)(lVar8 + 0x100) & 1;
  *(undefined2 *)(lVar9 + 0x10a) = *(undefined2 *)(lVar8 + 0x10a);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  lVar12 = *(long *)(lVar8 + *(long *)(&UNK_10e4b1750 + (ulong)*(uint *)(lVar8 + 0x104) * 8));
  lVar8 = ((long *)(lVar8 + *(long *)(&UNK_10e4b1750 + (ulong)*(uint *)(lVar8 + 0x104) * 8)))[1];
  FUN_10a0ca588(&uStack_b0,lVar12,lVar8,lVar8 - lVar12 >> 2);
  *(undefined4 *)(lVar9 + 0x104) = 1;
  if (*(long *)(lVar9 + 0x128) != 0) {
    *(long *)(lVar9 + 0x130) = *(long *)(lVar9 + 0x128);
    __ZdlPv();
    *(undefined8 *)(lVar9 + 0x128) = 0;
    *(undefined8 *)(lVar9 + 0x130) = 0;
    *(undefined8 *)(lVar9 + 0x138) = 0;
  }
  *(undefined8 *)(lVar9 + 0x130) = uStack_a8;
  *(undefined8 *)(lVar9 + 0x128) = uStack_b0;
  *(undefined8 *)(lVar9 + 0x138) = uStack_a0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(lVar7 + 0x5e8) + 0x170,param_2[0xbd] + 0x170);
  lVar9 = *(long *)(lVar7 + 0x5e8);
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  lVar12 = *(long *)(param_2[0xbd] + 0x140);
  lVar8 = *(long *)(param_2[0xbd] + 0x148);
  FUN_10a0ca588(&uStack_d0,lVar12,lVar8,lVar8 - lVar12 >> 2);
  if (*(long *)(lVar9 + 0x140) != 0) {
    *(long *)(lVar9 + 0x148) = *(long *)(lVar9 + 0x140);
    __ZdlPv();
    *(undefined8 *)(lVar9 + 0x140) = 0;
    *(undefined8 *)(lVar9 + 0x148) = 0;
    *(undefined8 *)(lVar9 + 0x150) = 0;
  }
  *(undefined8 *)(lVar9 + 0x148) = uStack_c8;
  *(undefined8 *)(lVar9 + 0x140) = uStack_d0;
  *(undefined8 *)(lVar9 + 0x150) = uStack_c0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(lVar7 + 0x5e8) + 0x188,param_2[0xbd] + 0x188);
  lVar12 = *(long *)(lVar7 + 0x5c8);
  *(undefined8 *)(lVar7 + 0x5c8) = 0;
  *(undefined8 *)(lVar7 + 0x5c0) = 0;
  if (lVar12 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a38f874(lVar7,param_2 + 0xb4);
  *(int *)(lVar7 + 0x5b8) = (int)param_2[0xb7];
  *(char *)(lVar7 + 0x590) = (char)param_2[0xb2];
  FUN_10a38e50c(lVar7);
  FUN_10a38ed00(lVar7);
  *param_1 = lVar7;
  param_1[1] = (long)plStack_68;
  return;
}



/* Entry: 10a390bc0; end: 10a3911af;  */

/* WARNING: Removing unreachable block (ram,0x00010a390f50) */
/* WARNING: Removing unreachable block (ram,0x00010a390f20) */
/* WARNING: Removing unreachable block (ram,0x00010a390ef0) */
/* WARNING: Removing unreachable block (ram,0x00010a390f00) */
/* WARNING: Removing unreachable block (ram,0x00010a390f30) */
/* WARNING: Removing unreachable block (ram,0x00010a390f60) */

void FUN_10a390bc0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puStack_220;
  ulong uStack_218;
  byte bStack_209;
  undefined8 **ppuStack_208;
  ulong uStack_200;
  byte bStack_1f1;
  undefined8 **ppuStack_1f0;
  ulong uStack_1e8;
  byte bStack_1d9;
  undefined8 **ppuStack_1d8;
  ulong uStack_1d0;
  byte bStack_1c1;
  undefined8 **ppuStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined8 **appuStack_1a8 [2];
  char cStack_191;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_1a8,uVar1 + 0x15,&ppuStack_1c0);
  pppuVar2 = (undefined8 ***)appuStack_1a8[0];
  if (-1 < cStack_191) {
    pppuVar2 = appuStack_1a8;
  }
  if (uVar1 != 0) {
    pppuVar6 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar6 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar6,uVar1);
  }
  puVar8 = (undefined8 *)((long)pppuVar2 + uVar1);
  puVar8[1] = 0x736e65746e496e69;
  *puVar8 = 0x6b5374666f73202c;
  *(undefined8 *)((long)puVar8 + 0xd) = 0x203a797469736e65;
  *(undefined1 *)((long)puVar8 + 0x15) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_1c0,*(undefined4 *)(param_2 + 0x554));
  pppuVar2 = (undefined8 ***)ppuStack_1c0;
  if (-1 < (char)bStack_1a9) {
    uStack_1b8 = (ulong)bStack_1a9;
    pppuVar2 = &ppuStack_1c0;
  }
  pppuVar6 = appuStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,pppuVar2,uStack_1b8);
  puStack_188 = pppuVar6[1];
  puStack_190 = *pppuVar6;
  puStack_180 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  ppuVar7 = &puStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,&UNK_10f6520ef,0x17);
  uStack_168 = ppuVar7[1];
  uStack_170 = *ppuVar7;
  lStack_160 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_1d8,*(undefined4 *)(param_2 + 0x558));
  pppuVar2 = (undefined8 ***)ppuStack_1d8;
  if (-1 < (char)bStack_1c1) {
    uStack_1d0 = (ulong)bStack_1c1;
    pppuVar2 = &ppuStack_1d8;
  }
  puVar8 = &uStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar2,uStack_1d0);
  uStack_148 = puVar8[1];
  uStack_150 = *puVar8;
  lStack_140 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f652107,0x19);
  uStack_128 = puVar8[1];
  uStack_130 = *puVar8;
  lStack_120 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_1f0,*(undefined4 *)(param_2 + 0x564));
  pppuVar2 = (undefined8 ***)ppuStack_1f0;
  if (-1 < (char)bStack_1d9) {
    uStack_1e8 = (ulong)bStack_1d9;
    pppuVar2 = &ppuStack_1f0;
  }
  puVar8 = &uStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar2,uStack_1e8);
  uStack_108 = puVar8[1];
  uStack_110 = *puVar8;
  uStack_100 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f652121,0x1b);
  uStack_e8 = puVar8[1];
  uStack_f0 = *puVar8;
  uStack_e0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_208,*(undefined4 *)(param_2 + 0x55c));
  pppuVar2 = (undefined8 ***)ppuStack_208;
  if (-1 < (char)bStack_1f1) {
    uStack_200 = (ulong)bStack_1f1;
    pppuVar2 = &ppuStack_208;
  }
  puVar8 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar2,uStack_200);
  uStack_c8 = puVar8[1];
  uStack_d0 = *puVar8;
  uStack_c0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f65213d,0x12);
  uStack_a8 = puVar8[1];
  uStack_b0 = *puVar8;
  uStack_a0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&puStack_220,*(undefined4 *)(param_2 + 0x554));
  ppuVar4 = (undefined1 **)puStack_220;
  if (-1 < (char)bStack_209) {
    uStack_218 = (ulong)bStack_209;
    ppuVar4 = &puStack_220;
  }
  puVar8 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppuVar4,uStack_218);
  uStack_88 = puVar8[1];
  uStack_90 = *puVar8;
  uStack_80 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f652150,0x15);
  uStack_68 = puVar8[1];
  uStack_70 = *puVar8;
  uStack_60 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  bVar5 = *(char *)(param_2 + 0x590) == '\0';
  pcVar3 = "true";
  if (bVar5) {
    pcVar3 = "false";
  }
  uVar9 = 4;
  if (bVar5) {
    uVar9 = 5;
  }
  puVar8 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,pcVar3,uVar9);
  uVar9 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar9;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((char)bStack_209 < '\0') {
    __ZdlPv(puStack_220);
  }
  if ((char)bStack_1f1 < '\0') {
    __ZdlPv(ppuStack_208);
  }
  if ((char)bStack_1d9 < '\0') {
    __ZdlPv(ppuStack_1f0);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if ((char)bStack_1c1 < '\0') {
    __ZdlPv(ppuStack_1d8);
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if ((long)puStack_180 < 0) {
    __ZdlPv(puStack_190);
  }
  if ((char)bStack_1a9 < '\0') {
    __ZdlPv(ppuStack_1c0);
  }
  if (cStack_191 < '\0') {
    __ZdlPv(appuStack_1a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a3911b0; end: 10a3911b7;  */

/* WARNING: Removing unreachable block (ram,0x00010a390f50) */
/* WARNING: Removing unreachable block (ram,0x00010a390f20) */
/* WARNING: Removing unreachable block (ram,0x00010a390ef0) */
/* WARNING: Removing unreachable block (ram,0x00010a390f00) */
/* WARNING: Removing unreachable block (ram,0x00010a390f30) */
/* WARNING: Removing unreachable block (ram,0x00010a390f60) */

void FUN_10a3911b0(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  char *pcVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puStack_220;
  ulong uStack_218;
  byte bStack_209;
  undefined8 **ppuStack_208;
  ulong uStack_200;
  byte bStack_1f1;
  undefined8 **ppuStack_1f0;
  ulong uStack_1e8;
  byte bStack_1d9;
  undefined8 **ppuStack_1d8;
  ulong uStack_1d0;
  byte bStack_1c1;
  undefined8 **ppuStack_1c0;
  ulong uStack_1b8;
  byte bStack_1a9;
  undefined8 **appuStack_1a8 [2];
  char cStack_191;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10a3c829c(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_1a8,uVar1 + 0x15,&ppuStack_1c0);
  pppuVar2 = (undefined8 ***)appuStack_1a8[0];
  if (-1 < cStack_191) {
    pppuVar2 = appuStack_1a8;
  }
  if (uVar1 != 0) {
    pppuVar6 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar6 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar6,uVar1);
  }
  puVar8 = (undefined8 *)((long)pppuVar2 + uVar1);
  puVar8[1] = 0x736e65746e496e69;
  *puVar8 = 0x6b5374666f73202c;
  *(undefined8 *)((long)puVar8 + 0xd) = 0x203a797469736e65;
  *(undefined1 *)((long)puVar8 + 0x15) = 0;
  __ZNSt3__19to_stringEf(&ppuStack_1c0,*(undefined4 *)(param_2 + 0x544));
  pppuVar2 = (undefined8 ***)ppuStack_1c0;
  if (-1 < (char)bStack_1a9) {
    uStack_1b8 = (ulong)bStack_1a9;
    pppuVar2 = &ppuStack_1c0;
  }
  pppuVar6 = appuStack_1a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar6,pppuVar2,uStack_1b8);
  puStack_188 = pppuVar6[1];
  puStack_190 = *pppuVar6;
  puStack_180 = pppuVar6[2];
  pppuVar6[1] = (undefined8 **)0x0;
  pppuVar6[2] = (undefined8 **)0x0;
  *pppuVar6 = (undefined8 **)0x0;
  ppuVar7 = &puStack_190;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar7,&UNK_10f6520ef,0x17);
  uStack_168 = ppuVar7[1];
  uStack_170 = *ppuVar7;
  lStack_160 = (long)ppuVar7[2];
  ppuVar7[1] = (undefined8 *)0x0;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = (undefined8 *)0x0;
  __ZNSt3__19to_stringEf(&ppuStack_1d8,*(undefined4 *)(param_2 + 0x548));
  pppuVar2 = (undefined8 ***)ppuStack_1d8;
  if (-1 < (char)bStack_1c1) {
    uStack_1d0 = (ulong)bStack_1c1;
    pppuVar2 = &ppuStack_1d8;
  }
  puVar8 = &uStack_170;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar2,uStack_1d0);
  uStack_148 = puVar8[1];
  uStack_150 = *puVar8;
  lStack_140 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_150;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f652107,0x19);
  uStack_128 = puVar8[1];
  uStack_130 = *puVar8;
  lStack_120 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_1f0,*(undefined4 *)(param_2 + 0x554));
  pppuVar2 = (undefined8 ***)ppuStack_1f0;
  if (-1 < (char)bStack_1d9) {
    uStack_1e8 = (ulong)bStack_1d9;
    pppuVar2 = &ppuStack_1f0;
  }
  puVar8 = &uStack_130;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar2,uStack_1e8);
  uStack_108 = puVar8[1];
  uStack_110 = *puVar8;
  uStack_100 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_110;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f652121,0x1b);
  uStack_e8 = puVar8[1];
  uStack_f0 = *puVar8;
  uStack_e0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&ppuStack_208,*(undefined4 *)(param_2 + 0x54c));
  pppuVar2 = (undefined8 ***)ppuStack_208;
  if (-1 < (char)bStack_1f1) {
    uStack_200 = (ulong)bStack_1f1;
    pppuVar2 = &ppuStack_208;
  }
  puVar8 = &uStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppuVar2,uStack_200);
  uStack_c8 = puVar8[1];
  uStack_d0 = *puVar8;
  uStack_c0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f65213d,0x12);
  uStack_a8 = puVar8[1];
  uStack_b0 = *puVar8;
  uStack_a0 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  __ZNSt3__19to_stringEf(&puStack_220,*(undefined4 *)(param_2 + 0x544));
  ppuVar4 = (undefined1 **)puStack_220;
  if (-1 < (char)bStack_209) {
    uStack_218 = (ulong)bStack_209;
    ppuVar4 = &puStack_220;
  }
  puVar8 = &uStack_b0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,ppuVar4,uStack_218);
  uStack_88 = puVar8[1];
  uStack_90 = *puVar8;
  uStack_80 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  puVar8 = &uStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,&UNK_10f652150,0x15);
  uStack_68 = puVar8[1];
  uStack_70 = *puVar8;
  uStack_60 = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  bVar5 = *(char *)(param_2 + 0x580) == '\0';
  pcVar3 = "true";
  if (bVar5) {
    pcVar3 = "false";
  }
  uVar9 = 4;
  if (bVar5) {
    uVar9 = 5;
  }
  puVar8 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar8,pcVar3,uVar9);
  uVar9 = *puVar8;
  param_1[1] = puVar8[1];
  *param_1 = uVar9;
  param_1[2] = puVar8[2];
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((char)bStack_209 < '\0') {
    __ZdlPv(puStack_220);
  }
  if ((char)bStack_1f1 < '\0') {
    __ZdlPv(ppuStack_208);
  }
  if ((char)bStack_1d9 < '\0') {
    __ZdlPv(ppuStack_1f0);
  }
  if (lStack_120 < 0) {
    __ZdlPv(uStack_130);
  }
  if (lStack_140 < 0) {
    __ZdlPv(uStack_150);
  }
  if ((char)bStack_1c1 < '\0') {
    __ZdlPv(ppuStack_1d8);
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if ((long)puStack_180 < 0) {
    __ZdlPv(puStack_190);
  }
  if ((char)bStack_1a9 < '\0') {
    __ZdlPv(ppuStack_1c0);
  }
  if (cStack_191 < '\0') {
    __ZdlPv(appuStack_1a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10a3911b8; end: 10a391203;  */

long FUN_10a3911b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lVar6 = param_1;
  if ((((*(ushort *)(param_1 + 0x180) & 0x17) != 0) || (func_0x00010a390044(), (int)lVar6 == 0)) ||
     ((*(byte *)(param_1 + 0x550) >> 4 & 1) == 0)) {
    return lVar6;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long **)(param_1 + 0x2a8) == *(long **)(param_1 + 0x2a0)) ||
     (**(long **)(param_1 + 0x2a0) == 0)) {
    FUN_10a38fbbc(auStack_80,*(undefined8 *)(param_1 + 0x170));
    func_0x00010a015c50((long *)(param_1 + 0x5f8),auStack_80);
    if (plStack_78 != (long *)0x0) {
      plVar5 = plStack_78 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    lVar6 = *(long *)(param_1 + 0x5f8);
    *(undefined1 *)(lVar6 + 8) = 1;
    func_0x000107c2b054(&uStack_98,&UNK_10f652019);
    if (*(char *)(lVar6 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar6 + 0x58));
    }
    *(undefined8 *)(lVar6 + 0x60) = uStack_90;
    *(ulong *)(lVar6 + 0x58) = CONCAT71(uStack_97,uStack_98);
    *(ulong *)(lVar6 + 0x68) = CONCAT17(uStack_81,uStack_88);
    uStack_81 = 0;
    uStack_98 = 0;
    uStack_a8 = *(undefined8 *)(param_1 + 0x5f8);
    plStack_a0 = *(long **)(param_1 + 0x600);
    if (plStack_a0 != (long *)0x0) {
      plVar5 = plStack_a0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a2d54dc(param_1,&uStack_a8);
    plVar5 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
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
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    func_0x00010a04a780(param_1 + 0x5f8);
  }
  lVar6 = *(long *)(param_1 + 0x5f8);
  if (*(long **)(lVar6 + 0x230) == *(long **)(lVar6 + 0x228)) {
    func_0x000107c2b054(auStack_c0,&UNK_10f652032);
    FUN_10ab45dcc(auStack_80,lVar6,auStack_c0,1);
    if (cStack_a9 < '\0') {
      __ZdlPv(auStack_c0[0]);
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x5f8) + 0x228);
    if (*(long **)(*(long *)(param_1 + 0x5f8) + 0x230) == plVar5) goto LAB_10a38ec98;
    lVar7 = *plVar5;
    lVar6 = *(long *)(lVar7 + 600);
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0xd;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    FUN_10a38e880(param_1,lVar7);
    FUN_10a044790(&plStack_78);
    (*(code *)*apuStack_70[0])(apuStack_70);
  }
  else {
    lVar7 = **(long **)(lVar6 + 0x228);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar7;
  }
  ___stack_chk_fail();
LAB_10a38ec98:
  FUN_10a00946c(&UNK_10f6921f0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a38eca8);
  (*pcVar4)();
}



/* Entry: 10a391204; end: 10a39120b;  */

long FUN_10a391204(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 auStack_c0 [2];
  char cStack_a9;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lVar5 = param_1 + -0x530;
  lVar7 = lVar5;
  if ((((*(ushort *)(param_1 + -0x3b0) & 0x17) != 0) || (func_0x00010a390044(), (int)lVar7 == 0)) ||
     ((*(byte *)(param_1 + 0x20) >> 4 & 1) == 0)) {
    return lVar7;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(long **)(param_1 + -0x288) == *(long **)(param_1 + -0x290)) ||
     (**(long **)(param_1 + -0x290) == 0)) {
    FUN_10a38fbbc(auStack_80,*(undefined8 *)(param_1 + -0x3c0));
    func_0x00010a015c50((long *)(param_1 + 200),auStack_80);
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
      }
    }
    lVar7 = *(long *)(param_1 + 200);
    *(undefined1 *)(lVar7 + 8) = 1;
    func_0x000107c2b054(&uStack_98,&UNK_10f652019);
    if (*(char *)(lVar7 + 0x6f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar7 + 0x58));
    }
    *(undefined8 *)(lVar7 + 0x60) = uStack_90;
    *(ulong *)(lVar7 + 0x58) = CONCAT71(uStack_97,uStack_98);
    *(ulong *)(lVar7 + 0x68) = CONCAT17(uStack_81,uStack_88);
    uStack_81 = 0;
    uStack_98 = 0;
    uStack_a8 = *(undefined8 *)(param_1 + 200);
    plStack_a0 = *(long **)(param_1 + 0xd0);
    if (plStack_a0 != (long *)0x0) {
      plVar6 = plStack_a0 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a2d54dc(lVar5,&uStack_a8);
    plVar6 = plStack_a0;
    if (plStack_a0 != (long *)0x0) {
      plVar1 = plStack_a0 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    func_0x00010a04a780(param_1 + 200);
  }
  lVar7 = *(long *)(param_1 + 200);
  if (*(long **)(lVar7 + 0x230) == *(long **)(lVar7 + 0x228)) {
    func_0x000107c2b054(auStack_c0,&UNK_10f652032);
    FUN_10ab45dcc(auStack_80,lVar7,auStack_c0,1);
    if (cStack_a9 < '\0') {
      __ZdlPv(auStack_c0[0]);
    }
    plVar6 = *(long **)(*(long *)(param_1 + 200) + 0x228);
    if (*(long **)(*(long *)(param_1 + 200) + 0x230) == plVar6) goto LAB_10a38ec98;
    lVar8 = *plVar6;
    lVar7 = *(long *)(lVar8 + 600);
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x28) = 0xd;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x50) = 0;
    *(undefined8 *)(lVar7 + 0x48) = 0;
    FUN_10a38e880(lVar5,lVar8);
    FUN_10a044790(&plStack_78);
    (*(code *)*apuStack_70[0])(apuStack_70);
  }
  else {
    lVar8 = **(long **)(lVar7 + 0x228);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar8;
  }
  ___stack_chk_fail();
LAB_10a38ec98:
  FUN_10a00946c(&UNK_10f6921f0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a38eca8);
  (*pcVar4)();
}



/* Entry: 10a39120c; end: 10a39130f;  */

void FUN_10a39120c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_40 [2];
  char cStack_29;
  
  lVar2 = param_1 + 0x4f0;
  (**(code **)(*(long *)(param_1 + 0x4f0) + 0x30))();
  FUN_10ab6e450();
  if (lVar2 == 0) {
    uVar1 = param_1;
    func_0x00010a390044();
    if ((uVar1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x5e1) = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x5e8);
      FUN_10ac6482c(lVar2,*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x8c0) + 0x18) + 0x68))
      ;
      *(bool *)(param_1 + 0x5e1) = lVar2 != 0;
      if (lVar2 != 0) {
        FUN_10a3900b4(param_1,lVar2);
      }
    }
  }
  if ((*(char *)(param_1 + 0x5e1) == '\x01') && ((*(byte *)(param_1 + 0x550) >> 4 & 1) != 0)) {
    uVar3 = param_2;
    FUN_10a5dfef8(param_2,*(undefined8 *)(param_1 + 0x5f8));
    FUN_10a01eacc(param_2,uVar3);
    func_0x000107c2b074(auStack_40,&PTR_DAT_110bcea78);
    FUN_10a01671c(param_2,auStack_40,param_1 + 0x560);
    if (cStack_29 < '\0') {
      __ZdlPv(auStack_40[0]);
    }
  }
  return;
}



/* Entry: 10a391310; end: 10a3913e7;  */

undefined8 FUN_10a391310(void)

{
  return 2;
}



/* Entry: 10a3913e8; end: 10a3914af;  */

void FUN_10a3913e8(undefined8 param_1)

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
  puStack_90 = (undefined1 *)0xffffffff00000002;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  puStack_70 = &UNK_10f651d0b;
  uStack_68 = 0;
  uStack_60 = 0x12400000000;
  uStack_58 = CONCAT44(uStack_58._4_4_,0x16e);
  FUN_10a3914b0(param_1,&puStack_98);
  puStack_a0 = &UNK_10f651db6;
  puStack_98 = &UNK_10f652166;
  uStack_88 = 1;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  puStack_70 = &UNK_10f651d0b;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  FUN_10a3b2770();
  FUN_10a3b28e4(param_1);
  return;
}



/* Entry: 10a3914b0; end: 10a391587;  */

/* WARNING: Removing unreachable block (ram,0x00010a391548) */

undefined1  [16] FUN_10a3914b0(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f652c92,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3b2674(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a391588; end: 10a39160f;  */

void FUN_10a391588(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x40] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x43) = 0x100;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  FUN_10a3c575c(param_1,&PTR_PTR_110bc9b50,param_2,param_3);
  *param_1 = &PTR_DAT_110bc9888;
  param_1[2] = &PTR_DAT_110bc9998;
  param_1[7] = &PTR_FUN_110bc99f0;
  param_1[0xd] = &PTR_FUN_110bc9a10;
  param_1[0x40] = &PTR_FUN_110bc9b10;
  param_1[0x16] = &PTR_FUN_110bc9a80;
  param_1[0x17] = &PTR_FUN_110bc9ab0;
  param_1[0x3f] = 0x3f80000000000000;
  param_1[0x3e] = 0;
  return;
}



/* Entry: 10a391610; end: 10a39167f;  */

void FUN_10a391610(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x170);
  func_0x000107c2b054(auStack_38,&UNK_10f652172);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a391680; end: 10a391687;  */

void FUN_10a391680(long param_1)

{
  long lVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x108);
  func_0x000107c2b054(auStack_38,&UNK_10f652172);
  if (lVar1 != 0) {
    FUN_10a76c080(*(undefined8 *)(lVar1 + 0x8d8),auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return;
}



/* Entry: 10a391688; end: 10a391807;  */

void FUN_10a391688(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x168) + 0x140);
  fVar6 = (float)*(double *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0x168) + 0x120) + 0x850) + 0x10);
  func_0x00010a0d8ae0(lVar5);
  fVar7 = *(float *)(param_1 + 0x1f8);
  fVar8 = *(float *)(param_1 + 0x1fc);
  pauVar1 = (undefined1 (*) [12])(lVar5 + 0x54);
  fVar25 = (float)*(undefined8 *)(lVar5 + 0x5c);
  fVar26 = (float)((ulong)*(undefined8 *)(lVar5 + 0x5c) >> 0x20);
  fVar23 = (float)*(undefined8 *)*pauVar1;
  fVar24 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  uVar9 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x1f0);
  fVar12 = (float)uVar9;
  fVar13 = (float)((ulong)uVar9 >> 0x20);
  auVar14._4_4_ = fVar7;
  auVar14._0_4_ = fVar7;
  auVar14._8_4_ = fVar7;
  fVar17 = -fVar12;
  fVar18 = -fVar13;
  fVar19 = -fVar7;
  auVar22._4_4_ = fVar18;
  auVar22._0_4_ = fVar17;
  auVar22._8_4_ = -fVar7;
  auVar22._12_4_ = fVar19;
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = -fVar7;
  auVar3._12_4_ = fVar19;
  auVar20 = NEON_ext(auVar22,auVar3,4,1);
  auVar21._4_4_ = fVar26;
  auVar21._0_4_ = fVar26;
  auVar21._8_4_ = fVar26;
  auVar21._12_4_ = fVar26;
  auVar4._12_4_ = fVar26;
  auVar4._0_12_ = *pauVar1;
  auVar22 = NEON_ext(auVar21,auVar4,4,1);
  auVar14._12_4_ = fVar17;
  auVar15 = NEON_ext(auVar14,auVar14,8,1);
  auVar2._12_4_ = fVar7;
  auVar2._0_12_ = *(undefined1 (*) [12])(param_1 + 0x1f0);
  auVar10 = NEON_rev64(auVar2,4);
  fVar12 = auVar22._0_4_ * fVar12 + fVar23 * fVar8 + fVar25 * auVar10._0_4_ + fVar24 * auVar20._4_4_
  ;
  fVar13 = auVar22._4_4_ * fVar13 + fVar24 * fVar8 + SUB124(*pauVar1,0) * fVar7 +
           SUB124(*pauVar1,8) * auVar20._12_4_;
  fVar17 = auVar22._8_4_ * auVar15._0_4_ + fVar25 * fVar8 + SUB124(*pauVar1,4) * auVar10._4_4_ +
           SUB124(*pauVar1,0) * fVar18;
  fVar18 = auVar22._12_4_ * auVar15._4_4_ + fVar26 * fVar8 + SUB124(*pauVar1,4) * fVar18 +
           SUB124(*pauVar1,8) * fVar19;
  fVar7 = fVar23 * fVar12;
  fVar8 = fVar24 * fVar13;
  auVar10._4_4_ = fVar8;
  auVar10._0_4_ = fVar7;
  auVar10._8_4_ = fVar25 * fVar17;
  auVar10._12_4_ = fVar26 * fVar18;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar25 * fVar17;
  auVar15._12_4_ = fVar26 * fVar18;
  auVar10 = NEON_ext(auVar10,auVar15,8,1);
  uVar9 = NEON_rev64(auVar10._0_8_,4);
  fVar8 = fVar7 + (float)uVar9 + fVar8 + (float)((ulong)uVar9 >> 0x20);
  auVar11._0_4_ = -(uint)(fVar8 < 0.0);
  auVar11._4_4_ = auVar11._0_4_;
  auVar11._8_4_ = auVar11._0_4_;
  auVar11._12_4_ = auVar11._0_4_;
  auVar16._0_4_ = -fVar12;
  auVar16._4_4_ = -fVar13;
  auVar16._8_4_ = -fVar17;
  auVar16._12_4_ = -fVar18;
  auVar20._4_4_ = fVar13;
  auVar20._0_4_ = fVar12;
  auVar20._8_4_ = fVar17;
  auVar20._12_4_ = fVar18;
  auVar16 = auVar16 ^ (auVar16 ^ auVar20) & ~auVar11;
  fVar7 = -fVar8;
  if (0.0 <= fVar8) {
    fVar7 = fVar8;
  }
  if (fVar7 <= 0.9999999) {
    _acosf();
    fVar8 = (1.0 - fVar6) * fVar7;
    _sinf();
    fVar6 = fVar7 * fVar6;
    _sinf();
    _sinf();
    fVar12 = (fVar23 * fVar8 + auVar16._0_4_ * fVar6) / fVar7;
    fVar13 = (fVar24 * fVar8 + auVar16._4_4_ * fVar6) / fVar7;
    fVar17 = (fVar25 * fVar8 + auVar16._8_4_ * fVar6) / fVar7;
    fVar7 = (fVar26 * fVar8 + auVar16._12_4_ * fVar6) / fVar7;
  }
  else {
    fVar7 = 1.0 - fVar6;
    fVar12 = auVar16._0_4_ * fVar6 + fVar23 * fVar7;
    fVar13 = auVar16._4_4_ * fVar6 + fVar24 * fVar7;
    fVar17 = auVar16._8_4_ * fVar6 + fVar25 * fVar7;
    fVar7 = auVar16._12_4_ * fVar6 + fVar26 * fVar7;
  }
  uStack_38 = CONCAT44(fVar7,fVar17);
  uStack_40 = CONCAT44(fVar13,fVar12);
  FUN_10a3e82bc(lVar5,&uStack_40);
  return;
}



/* Entry: 10a391808; end: 10a39180f;  */

void FUN_10a391808(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x100) + 0x140);
  fVar6 = (float)*(double *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0x100) + 0x120) + 0x850) + 0x10);
  func_0x00010a0d8ae0(lVar5);
  fVar7 = *(float *)(param_1 + 400);
  fVar8 = *(float *)(param_1 + 0x194);
  pauVar1 = (undefined1 (*) [12])(lVar5 + 0x54);
  fVar25 = (float)*(undefined8 *)(lVar5 + 0x5c);
  fVar26 = (float)((ulong)*(undefined8 *)(lVar5 + 0x5c) >> 0x20);
  fVar23 = (float)*(undefined8 *)*pauVar1;
  fVar24 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  uVar9 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0x188);
  fVar12 = (float)uVar9;
  fVar13 = (float)((ulong)uVar9 >> 0x20);
  auVar14._4_4_ = fVar7;
  auVar14._0_4_ = fVar7;
  auVar14._8_4_ = fVar7;
  fVar17 = -fVar12;
  fVar18 = -fVar13;
  fVar19 = -fVar7;
  auVar22._4_4_ = fVar18;
  auVar22._0_4_ = fVar17;
  auVar22._8_4_ = -fVar7;
  auVar22._12_4_ = fVar19;
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = -fVar7;
  auVar3._12_4_ = fVar19;
  auVar20 = NEON_ext(auVar22,auVar3,4,1);
  auVar21._4_4_ = fVar26;
  auVar21._0_4_ = fVar26;
  auVar21._8_4_ = fVar26;
  auVar21._12_4_ = fVar26;
  auVar4._12_4_ = fVar26;
  auVar4._0_12_ = *pauVar1;
  auVar22 = NEON_ext(auVar21,auVar4,4,1);
  auVar14._12_4_ = fVar17;
  auVar15 = NEON_ext(auVar14,auVar14,8,1);
  auVar2._12_4_ = fVar7;
  auVar2._0_12_ = *(undefined1 (*) [12])(param_1 + 0x188);
  auVar10 = NEON_rev64(auVar2,4);
  fVar12 = auVar22._0_4_ * fVar12 + fVar23 * fVar8 + fVar25 * auVar10._0_4_ + fVar24 * auVar20._4_4_
  ;
  fVar13 = auVar22._4_4_ * fVar13 + fVar24 * fVar8 + SUB124(*pauVar1,0) * fVar7 +
           SUB124(*pauVar1,8) * auVar20._12_4_;
  fVar17 = auVar22._8_4_ * auVar15._0_4_ + fVar25 * fVar8 + SUB124(*pauVar1,4) * auVar10._4_4_ +
           SUB124(*pauVar1,0) * fVar18;
  fVar18 = auVar22._12_4_ * auVar15._4_4_ + fVar26 * fVar8 + SUB124(*pauVar1,4) * fVar18 +
           SUB124(*pauVar1,8) * fVar19;
  fVar7 = fVar23 * fVar12;
  fVar8 = fVar24 * fVar13;
  auVar10._4_4_ = fVar8;
  auVar10._0_4_ = fVar7;
  auVar10._8_4_ = fVar25 * fVar17;
  auVar10._12_4_ = fVar26 * fVar18;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar25 * fVar17;
  auVar15._12_4_ = fVar26 * fVar18;
  auVar10 = NEON_ext(auVar10,auVar15,8,1);
  uVar9 = NEON_rev64(auVar10._0_8_,4);
  fVar8 = fVar7 + (float)uVar9 + fVar8 + (float)((ulong)uVar9 >> 0x20);
  auVar11._0_4_ = -(uint)(fVar8 < 0.0);
  auVar11._4_4_ = auVar11._0_4_;
  auVar11._8_4_ = auVar11._0_4_;
  auVar11._12_4_ = auVar11._0_4_;
  auVar16._0_4_ = -fVar12;
  auVar16._4_4_ = -fVar13;
  auVar16._8_4_ = -fVar17;
  auVar16._12_4_ = -fVar18;
  auVar20._4_4_ = fVar13;
  auVar20._0_4_ = fVar12;
  auVar20._8_4_ = fVar17;
  auVar20._12_4_ = fVar18;
  auVar16 = auVar16 ^ (auVar16 ^ auVar20) & ~auVar11;
  fVar7 = -fVar8;
  if (0.0 <= fVar8) {
    fVar7 = fVar8;
  }
  if (fVar7 <= 0.9999999) {
    _acosf();
    fVar8 = (1.0 - fVar6) * fVar7;
    _sinf();
    fVar6 = fVar7 * fVar6;
    _sinf();
    _sinf();
    fVar12 = (fVar23 * fVar8 + auVar16._0_4_ * fVar6) / fVar7;
    fVar13 = (fVar24 * fVar8 + auVar16._4_4_ * fVar6) / fVar7;
    fVar17 = (fVar25 * fVar8 + auVar16._8_4_ * fVar6) / fVar7;
    fVar7 = (fVar26 * fVar8 + auVar16._12_4_ * fVar6) / fVar7;
  }
  else {
    fVar7 = 1.0 - fVar6;
    fVar12 = auVar16._0_4_ * fVar6 + fVar23 * fVar7;
    fVar13 = auVar16._4_4_ * fVar6 + fVar24 * fVar7;
    fVar17 = auVar16._8_4_ * fVar6 + fVar25 * fVar7;
    fVar7 = auVar16._12_4_ * fVar6 + fVar26 * fVar7;
  }
  uStack_38 = CONCAT44(fVar7,fVar17);
  uStack_40 = CONCAT44(fVar13,fVar12);
  FUN_10a3e82bc(lVar5,&uStack_40);
  return;
}



/* Entry: 10a391810; end: 10a391897;  */

void FUN_10a391810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  func_0x00010a3c7a18();
  (**(code **)(*param_6 + 0x188))(param_6,&PTR_DAT_110bc9b68);
  *(undefined4 *)(param_5 + 0x1f0) = param_1;
  *(undefined4 *)(param_5 + 500) = param_2;
  *(undefined4 *)(param_5 + 0x1f8) = param_3;
  *(undefined4 *)(param_5 + 0x1fc) = param_4;
  return;
}



/* Entry: 10a391898; end: 10a391aff;  */

void FUN_10a391898(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a3b29a0(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110bcefd8;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a3919fc;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a3919fc:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(lVar10 + 0x1f8) = *(undefined8 *)(param_2 + 0x1f8);
  *(undefined8 *)(lVar10 + 0x1f0) = uVar8;
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a391b00; end: 10a391b1f;  */

undefined1  [16] FUN_10a391b00(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x23;
  auVar1._0_8_ = &UNK_10f652ca4;
  return auVar1;
}



/* Entry: 10a391b20; end: 10a391b87;  */

bool FUN_10a391b20(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf652ca4;
    _memcmp(&UNK_10f652ca4,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a391b88; end: 10a391bd7;  */

bool FUN_10a391b88(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x23) {
    iVar2 = 0xf652ca4;
    _memcmp(&UNK_10f652ca4,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 9) && (*param_2 == 0x6e656e6f706d6f43 && (char)param_2[1] == 't')) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 0x13) {
      return false;
    }
    bVar1 = (*param_2 == 0x7a696c6169726553 && param_2[1] == 0x68746957656c6261) &&
            *(long *)((long)param_2 + 0xb) == 0x4449556874695765;
  }
  return bVar1;
}



/* Entry: 10a391bd8; end: 10a391cd7;  */

void FUN_10a391bd8(undefined8 param_1)

{
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  puStack_a0 = (undefined1 *)0xffffffff00000002;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_6c = 0x139;
  uStack_68 = 0x13c;
  FUN_10a391cd8(param_1,&puStack_a8);
  puStack_b0 = &UNK_10f651db6;
  puStack_a8 = &UNK_10f65217a;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_a0 = (undefined1 *)&puStack_b0;
  FUN_10a3b2bc0();
  puStack_b0 = &UNK_10f651db6;
  puStack_a8 = &UNK_10f65218b;
  uStack_98 = 1;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x200000019;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_a0 = (undefined1 *)&puStack_b0;
  FUN_10a3b2bc0(param_1,&puStack_a8,0);
  FUN_10a3b2ddc(param_1);
  return;
}



/* Entry: 10a391cd8; end: 10a391daf;  */

/* WARNING: Removing unreachable block (ram,0x00010a391d70) */

undefined1  [16] FUN_10a391cd8(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f652ca4,0x23);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a3b2ac4(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a391db0; end: 10a391f83;  */

void FUN_10a391db0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plVar5 = &lStack_60;
  *(undefined1 *)(param_1 + 0x200) = 0;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x210);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if ((plVar4 != (long *)0x0) && (lStack_40 = *(long *)(param_1 + 0x208), lStack_40 != 0)) {
      FUN_10a3e00f4();
    }
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_10a34a3a8(&lStack_60,*(long *)(param_1 + 0x1f0),0,1);
    if ((lStack_60 == 0) ||
       (___dynamic_cast(lStack_60,&PTR_DAT_110bf32c0,&PTR_DAT_110bd3290,0), lStack_60 == 0)) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_58;
      lStack_50 = lStack_60;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    plVar5 = plStack_48;
    plVar4 = plStack_38;
    if (lStack_50 != 0) {
      FUN_10a0c3500(lStack_50,*(undefined8 *)(param_1 + 0x168));
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(long *)(param_1 + 0x208) = lStack_50;
      lVar6 = *(long *)(param_1 + 0x210);
      *(long **)(param_1 + 0x210) = plStack_48;
      plVar4 = plStack_38;
      if (lVar6 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar4 = plStack_38;
      }
    }
    plStack_38 = plVar4;
    if (plVar5 != (long *)0x0) {
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
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar4 = plStack_38;
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a391f84; end: 10a391fdb;  */

void FUN_10a391f84(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (*(char *)(param_1 + 0x200) != '\x01') {
    return;
  }
  plVar5 = &lStack_60;
  *(undefined1 *)(param_1 + 0x200) = 0;
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x210);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar4;
    if ((plVar4 != (long *)0x0) && (lStack_40 = *(long *)(param_1 + 0x208), lStack_40 != 0)) {
      FUN_10a3e00f4();
    }
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    FUN_10a34a3a8(&lStack_60,*(long *)(param_1 + 0x1f0),0,1);
    if ((lStack_60 == 0) ||
       (___dynamic_cast(lStack_60,&PTR_DAT_110bf32c0,&PTR_DAT_110bd3290,0), lStack_60 == 0)) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_58;
      lStack_50 = lStack_60;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (plStack_58 != (long *)0x0) {
      plVar5 = plStack_58 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    plVar5 = plStack_48;
    plVar4 = plStack_38;
    if (lStack_50 != 0) {
      FUN_10a0c3500(lStack_50,*(undefined8 *)(param_1 + 0x168));
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(long *)(param_1 + 0x208) = lStack_50;
      lVar6 = *(long *)(param_1 + 0x210);
      *(long **)(param_1 + 0x210) = plStack_48;
      plVar4 = plStack_38;
      if (lVar6 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar4 = plStack_38;
      }
    }
    plStack_38 = plVar4;
    if (plVar5 != (long *)0x0) {
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
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar4 = plStack_38;
      }
    }
  }
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a391fdc; end: 10a392077;  */

void FUN_10a391fdc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x210);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x208) != 0) {
        FUN_10a3e00f4();
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



/* Entry: 10a392078; end: 10a39207f;  */

void FUN_10a392078(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x1a8);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x1a0) != 0) {
        FUN_10a3e00f4();
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



/* Entry: 10a392080; end: 10a39214b;  */

void FUN_10a392080(long param_1,long *param_2)

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
  
  FUN_10a3c7928();
  puStack_30 = &UNK_10f652ccf;
  uStack_28 = 0x13;
  plStack_38 = *(long **)(param_1 + 0x1f8);
  uStack_40 = *(undefined8 *)(param_1 + 0x1f0);
  if (*(long *)(param_1 + 0x1f8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x1f8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bceba8,&uStack_40,&puStack_30);
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



/* Entry: 10a39214c; end: 10a392337;  */

void FUN_10a39214c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  ushort uVar3;
  ushort uVar4;
  code **ppcVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  code **ppcVar10;
  long *plVar11;
  undefined8 *extraout_x8;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  code *pcStack_190;
  code **ppcStack_188;
  code **ppcStack_180;
  code **ppcStack_178;
  undefined8 uStack_170;
  undefined ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_148 [2];
  char cStack_131;
  code *pcStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  pcStack_130 = FUN_10a3b30d8;
  ppuStack_128 = &PTR_FUN_110bcf030;
  pcStack_f0 = FUN_10a3b30d8;
  ppuStack_e8 = &PTR_FUN_110bcf030;
  uStack_a0 = CONCAT17(6,(undefined7)uStack_a0);
  uStack_b0 = CONCAT17(uStack_b0._7_1_,0x626166657270);
  pcStack_98 = FUN_10a3b2e98;
  ppuStack_90 = &PTR_FUN_110bcf018;
  puVar8 = (undefined8 *)0x58;
  uStack_120 = param_1;
  uStack_e0 = param_1;
  __Znwm();
  *puVar8 = FUN_10a3b30d8;
  puVar8[1] = &PTR_FUN_110bcf030;
  puVar8[2] = param_1;
  puVar8[9] = uStack_a8;
  puVar8[8] = uStack_b0;
  puVar8[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar8;
  func_0x000107c2b054(auStack_148,&UNK_10f651d0b);
  ppuVar17 = &PTR_DAT_110bceba8;
  ppcVar10 = &pcStack_98;
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bceba8,ppcVar10,0,auStack_148);
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  pppuVar15 = &ppuStack_128;
  (*(code *)*ppuStack_128)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  pppuVar9 = pppuVar15;
  __Unwind_Resume();
  pcStack_190 = FUN_10a3b30d8;
  pcStack_158 = FUN_10a392338;
  ppcStack_188 = &pcStack_98;
  ppcStack_180 = &pcStack_f0;
  ppcStack_178 = &pcStack_130;
  uStack_170 = param_1;
  pppuStack_168 = pppuVar15;
  puStack_160 = &stack0xfffffffffffffff0;
  if (ppcVar10 == (code **)0x0) {
    pppuVar15 = pppuVar9;
    ppuVar14 = ppuVar17;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_198 = pppuVar9[9];
    ppuStack_1a0 = pppuVar9[8];
    ppcVar10 = ppcVar10 + 0x11;
    func_0x00010a35bf90(ppcVar10,&ppuStack_1a0);
    ppcVar5 = (code **)((ulong)&ppuStack_1a0 | 8);
    pppuVar15 = &ppuStack_1a0;
    if (ppcVar10 != (code **)0x0) {
      ppcVar5 = ppcVar10 + 5;
      pppuVar15 = (undefined ***)(ppcVar10 + 4);
    }
    ppuVar14 = (undefined **)*ppcVar5;
    pppuVar15 = (undefined ***)*pppuVar15;
  }
  ppuVar16 = pppuVar9[0x2e];
  FUN_10a3dd220(ppuVar16);
  FUN_10a3b3170(ppuVar16,pppuVar15,ppuVar14);
  plVar11 = (long *)0x28;
  __Znwm();
  plVar13 = plVar11 + 1;
  *plVar13 = 0;
  *plVar11 = (long)&PTR_FUN_110bcf058;
  plVar11[2] = 0;
  plVar11[3] = (long)ppuVar16;
  plVar11[4] = (long)FUN_10a3df8cc;
  if (ppuVar16 != (undefined **)0x0) {
    if (ppuVar16[6] == (undefined *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar16[5] = (undefined *)ppuVar16;
      ppuVar16[6] = (undefined *)plVar11;
    }
    else {
      if (*(long *)(ppuVar16[6] + 8) != -1) goto LAB_10a39249c;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar7) {
          *plVar13 = *plVar13 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar1 = plVar11 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      ppuVar16[5] = (undefined *)ppuVar16;
      ppuVar16[6] = (undefined *)plVar11;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar12 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
LAB_10a39249c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuVar16 + 0x2a,pppuVar9 + 0x2a);
  uVar3 = (*(ushort *)(pppuVar9 + 0x30) >> 1 & 1) << 1;
  uVar4 = *(ushort *)(ppuVar16 + 0x30) & 0xfffc;
  *(ushort *)(ppuVar16 + 0x30) = uVar4 | *(ushort *)(ppuVar16 + 0x30) & 1 | uVar3;
  *(ushort *)(ppuVar16 + 0x30) = uVar4 | uVar3 | *(ushort *)(pppuVar9 + 0x30) & 1;
  if (plVar11 != (long *)0x0) {
    plVar13 = plVar11 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = *plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppuStack_1a0 = ppuVar16;
  ppuStack_198 = (undefined **)plVar11;
  FUN_10a3c7ce8(ppuVar17,&ppuStack_1a0);
  ppuVar17 = ppuStack_198;
  if (ppuStack_198 != (undefined **)0x0) {
    plVar13 = (long *)(ppuStack_198 + 1);
    do {
      lVar12 = *plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *plVar13 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)((long)*ppuStack_198 + 0x10))(ppuStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar17);
    }
  }
  ppuVar14 = pppuVar9[0x3f];
  ppuVar17 = pppuVar9[0x3e];
  if (pppuVar9[0x3f] != (undefined **)0x0) {
    ppuVar2 = pppuVar9[0x3f] + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar7) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar13 = (long *)ppuVar16[0x3f];
  ppuVar16[0x3f] = (undefined *)ppuVar14;
  ppuVar16[0x3e] = (undefined *)ppuVar17;
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 1;
    do {
      lVar12 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  extraout_x8[1] = plVar11;
  *extraout_x8 = ppuVar16;
  *(undefined1 *)(ppuVar16 + 0x40) = 1;
  return;
}



/* Entry: 10a392338; end: 10a392603;  */

void FUN_10a392338(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar9 = *puVar4;
    lVar10 = *plVar7;
  }
  lVar11 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar11);
  FUN_10a3b3170(lVar11,lVar10,uVar9);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar8 = plVar7 + 1;
  *plVar8 = 0;
  *plVar7 = (long)&PTR_FUN_110bcf058;
  plVar7[2] = 0;
  plVar7[3] = lVar11;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar11 + 0x30) + 8) != -1) goto LAB_10a39249c;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar6) {
          *plVar8 = *plVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar11 + 0x28) = lVar11;
      *(long **)(lVar11 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar10 = *plVar8;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a39249c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar11 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar11 + 0x180) & 0xfffc;
  *(ushort *)(lVar11 + 0x180) = uVar3 | *(ushort *)(lVar11 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar11 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar11;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar8 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  uVar12 = *(undefined8 *)(param_2 + 0x1f8);
  uVar9 = *(undefined8 *)(param_2 + 0x1f0);
  if (*(long *)(param_2 + 0x1f8) != 0) {
    plVar8 = (long *)(*(long *)(param_2 + 0x1f8) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar6) {
        *plVar8 = *plVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar8 = *(long **)(lVar11 + 0x1f8);
  *(undefined8 *)(lVar11 + 0x1f8) = uVar12;
  *(undefined8 *)(lVar11 + 0x1f0) = uVar9;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    do {
      lVar10 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  param_1[1] = (long)plVar7;
  *param_1 = lVar11;
  *(undefined1 *)(lVar11 + 0x200) = 1;
  return;
}



/* Entry: 10a392604; end: 10a39266f;  */

undefined1  [16] FUN_10a392604(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 8;
  auVar1._0_8_ = &DAT_10f3acc53;
  return auVar1;
}



/* Entry: 10a392670; end: 10a392acf;  */

void FUN_10a392670(ulong param_1)

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
  
  FUN_10a003e74(param_1,&UNK_10f63f11e,4);
  func_0x000109887da8(appuStack_c8,&DAT_10f3acc53,8);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcf950;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000019;
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
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcf950;
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
    FUN_10a052828(param_1,&DAT_10f2e8c0b,FUN_10a3b3304,FUN_10a3b33c0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f652195,FUN_10a3b3574,FUN_10a3b3630);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6521a1,FUN_10a3b36f0,FUN_10a3b37ac);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"radius",FUN_10a3b386c,FUN_10a3b3928);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f324ae5,FUN_10a3b3a18,FUN_10a3b3ad4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6521b3,FUN_10a3b3bc4,FUN_10a3b3c80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f644173,FUN_10a3b3d70,FUN_10a3b3e2c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f4154b4,FUN_10a3b3f1c,FUN_10a3b3fd8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6521c5,FUN_10a3b40c8,FUN_10a3b4184);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3e7cb5,FUN_10a3b4274,FUN_10a3b4330);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&DAT_10f3acc53,8);
      FUN_10a05431c(param_1);
    }
    func_0x00010a004064(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a392ab4);
  (*pcVar6)();
}



/* Entry: 10a392ad0; end: 10a392cbb;  */

void FUN_10a392ad0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6521d3;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f684ec4;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392cbc(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f58789e;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392cbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6521dd;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392cbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f4085be;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392cbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6521ed;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392cbc();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f6521fc;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392cbc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a392cbc; end: 10a392d63;  */

undefined8 * FUN_10a392cbc(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a392d64);
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



/* Entry: 10a392d64; end: 10a392edf;  */

void FUN_10a392d64(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f652206;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_88);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_70 & 0xffffffff,uStack_70._4_4_,uStack_38,uStack_68 & 0xffffffff,
                uStack_68._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_88);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f684ec4;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392ee0(param_1,&puStack_88,0);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65220f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392ee0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f652216;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392ee0();
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &UNK_10f65221f;
  uStack_68 = 0xffffffffffffffff;
  uStack_70 = 0x100000019;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 0xffffffff;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10a392ee0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a392ee0; end: 10a392f87;  */

undefined8 * FUN_10a392ee0(undefined8 *param_1,undefined8 *param_2,byte param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a392f88);
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



/* Entry: 10a392f88; end: 10a39306b;  */

undefined1  [16] FUN_10a392f88(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1f;
  auVar1._0_8_ = &UNK_10f652ce3;
  return auVar1;
}



/* Entry: 10a39306c; end: 10a3932fb;  */

void FUN_10a39306c(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652ce3,0x1f);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcd870;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcd870;
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
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a3932dc;
    FUN_10a054dac(param_1,&UNK_10f652231,FUN_10a3b4414,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"region",FUN_10a3b454c,FUN_10a3b4608);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f652239,FUN_10a3b476c,FUN_10a3b4824);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652ce3,0x1f);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a3932dc:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a3932e0);
  (*pcVar6)();
}



/* Entry: 10a3932fc; end: 10a3934db;  */

void FUN_10a3932fc(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
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
  pcStack_a8 = "ScreenRegionType";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  puStack_70 = &UNK_10f651d0b;
  uStack_68 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "FullFrame";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3934dc(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Capture";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3934dc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Preview";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3934dc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "SafeRender";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3934dc();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "RoundButton";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f651d0b;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a3934dc();
  FUN_10a003ff4();
  return;
}



/* Entry: 10a3934dc; end: 10a39357f;  */

undefined8 * FUN_10a3934dc(undefined8 *param_1,undefined8 *param_2,int param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a393580);
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



/* Entry: 10a393580; end: 10a3937df;  */

void FUN_10a393580(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a3b48e4(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110bcf0a8;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a3936e4;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a3936e4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  param_1[1] = (long)plVar7;
  *param_1 = lVar10;
  return;
}



/* Entry: 10a3937e0; end: 10a393c17;  */

void FUN_10a3937e0(long param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dStack_c0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x1c8) + 0x70))
            (&lStack_70);
  uVar3 = *(uint *)(param_1 + 0x1f0);
  if (lStack_70 == 0) {
    if ((int)uVar3 < 3) {
      dStack_c0 = (double)NEON_fmov(0xbf800000,4);
      dStack_c0 = -dStack_c0;
      fVar20 = -1.0;
      fVar17 = 1.0;
      goto LAB_10a3938a4;
    }
    dStack_c0 = -48378537152512.0;
    fVar20 = -100.0;
    fVar18 = -99.0;
  }
  else {
    uVar1 = 0;
    if (uVar3 < 5) {
      uVar1 = uVar3;
    }
    lVar14 = lStack_70 + (ulong)uVar1 * 0x14;
    fVar20 = *(float *)(lVar14 + 0xa8);
    dStack_c0 = *(double *)(lVar14 + 0xac);
    fVar17 = *(float *)(lVar14 + 0xb4);
    if (((*(byte *)(lVar14 + 0xb8) & *(byte *)(param_1 + 500) & 1) == 0) ||
       (*(char *)(lStack_70 + 0x7c) != '\x01')) {
LAB_10a3938a4:
      fVar18 = fVar17;
    }
    else {
      fVar18 = *(float *)(lStack_70 + 0x78);
      if (*(float *)(lStack_70 + 0x78) <= SUB84(dStack_c0,0)) {
        fVar18 = SUB84(dStack_c0,0);
      }
      dStack_c0 = (double)CONCAT44((int)((ulong)dStack_c0 >> 0x20),fVar18);
      if (fVar18 <= fVar17) goto LAB_10a3938a4;
    }
    if (uVar3 == 0) goto LAB_10a393ae4;
  }
  lVar14 = *(long *)(param_1 + 0x168);
  do {
    for (lVar15 = *(long *)(lVar14 + 0x158); lVar15 != lVar14 + 0x150;
        lVar15 = *(long *)(lVar15 + 8)) {
      if (*(long *)(lVar15 + 0x10) != 0) {
        plVar9 = (long *)(*(long *)(lVar15 + 0x10) + 0xb0);
        (**(code **)(*plVar9 + 0x18))(plVar9,0x49f6491c8e4b2468);
        if (plVar9 != (long *)0x0) {
          FUN_10a42f018();
          if ((long *)plVar9[1] == (long *)*plVar9) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a393bc8);
            (*pcVar7)();
          }
          lVar15 = *(long *)*plVar9;
          ppuVar2 = *(undefined ***)(lVar15 + 0x28);
          plStack_a0 = *(long **)(lVar15 + 0x30);
          if (plStack_a0 != (long *)0x0) {
            plVar9 = plStack_a0 + 1;
            do {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar8) {
                *plVar9 = *plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar15 = *(long *)(*(long *)(lVar14 + 0x120) + 0xbf8);
          plVar9 = *(long **)(*(long *)(lVar14 + 0x120) + 0xc00);
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + 1;
            do {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar8) {
                *plVar10 = *plVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          bVar8 = false;
          ppuStack_a8 = ppuVar2;
          lStack_60 = lVar15;
          plStack_58 = plVar9;
          if ((lVar15 != 0) && (ppuVar2 != (undefined **)0x0)) {
            plVar10 = *(long **)(lVar15 + 0x268);
            if (plVar10 == (long *)0x0) {
              plVar10 = (long *)0x0;
LAB_10a3939c4:
              uVar16 = 0;
            }
            else {
              (**(code **)(*plVar10 + 0xb0))();
              plVar11 = *(long **)(lVar15 + 0x268);
              if (plVar11 == (long *)0x0) goto LAB_10a3939c4;
              (**(code **)(*plVar11 + 0xb8))();
              uVar16 = (long)plVar11 << 0x20;
            }
            plVar11 = (long *)ppuVar2[0x4d];
            if (plVar11 == (long *)0x0) {
              plVar11 = (long *)0x0;
LAB_10a393a00:
              uVar13 = 0;
            }
            else {
              (**(code **)(*plVar11 + 0xb0))();
              plVar12 = (long *)ppuVar2[0x4d];
              if (plVar12 == (long *)0x0) goto LAB_10a393a00;
              (**(code **)(*plVar12 + 0xb8))();
              uVar13 = (long)plVar12 << 0x20;
            }
            bVar8 = (uVar16 | (ulong)plVar10 & 0xffffffff) == (uVar13 | (ulong)plVar11 & 0xffffffff)
            ;
          }
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + 1;
            do {
              lVar14 = *plVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          plVar9 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            plVar10 = plStack_a0 + 1;
            do {
              lVar14 = *plVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          if (bVar8) {
            fVar17 = *(float *)(lStack_70 + 0xc0);
            fVar19 = *(float *)(lStack_70 + 200);
            if (((*(byte *)(lStack_70 + 0xcc) & *(byte *)(param_1 + 500) & 1) != 0) &&
               (*(char *)(lStack_70 + 0x7c) == '\x01')) {
              fVar6 = *(float *)(lStack_70 + 0x78);
              if (*(float *)(lStack_70 + 0x78) <= fVar17) {
                fVar6 = fVar17;
              }
              fVar17 = fVar6;
              if (fVar19 < fVar17) {
                fVar19 = fVar17;
              }
            }
            fVar17 = 2.0 / (fVar19 - fVar17);
            fVar19 = 2.0 / (*(float *)(lStack_70 + 0xc4) - *(float *)(lStack_70 + 0xbc));
            fVar20 = fVar20 * fVar19;
            dStack_c0 = (double)CONCAT44((float)((ulong)dStack_c0 >> 0x20) * fVar19,
                                         SUB84(dStack_c0,0) * fVar17);
            fVar18 = fVar18 * fVar17;
          }
          goto LAB_10a393ae4;
        }
      }
    }
    lVar14 = *(long *)(lVar14 + 0x188);
  } while (lVar14 != 0);
LAB_10a393ae4:
  lVar14 = *(long *)(*(long *)(param_1 + 0x168) + 0x248);
  if (lVar14 != 0) {
    *(undefined1 *)(lVar14 + 0x219) = 1;
    uStack_88 = 0;
    ppuStack_a8 = &PTR_FUN_110c6a8d8;
    plStack_a0 = (long *)0x0;
    uStack_98 = 0;
    ppuStack_90 = &PTR_FUN_110c6a940;
    uStack_80 = SUB84(dStack_c0,0);
    uStack_7c = (undefined4)((ulong)dStack_c0 >> 0x20);
    fStack_84 = fVar20;
    fStack_78 = fVar18;
    FUN_10a393c18(lVar14,&ppuStack_a8);
    uStack_88 = 0;
    ppuStack_a8 = &PTR_FUN_110c6a8d8;
    plStack_a0 = (long *)0x0;
    uStack_98 = 0;
    ppuStack_90 = &PTR_FUN_110c6a940;
    uStack_7c = 0;
    fStack_78 = 0.0;
    fStack_84 = 0.0;
    uStack_80 = 0;
    func_0x00010a393cf8(lVar14,&ppuStack_a8);
  }
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar14 = *plVar9;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a393c18; end: 10a393dcb;  */

void FUN_10a393c18(float param_1,float param_2,long param_3,long param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_10a394a64();
  if ((*(byte *)(param_3 + 0x219) & 1) == 0) {
    func_0x00010acae698(param_3 + 0x220);
    param_1 = param_1 * 0.5;
    param_2 = param_2 * 0.5;
    bVar1 = ABS(SQRT(param_1 * param_1 + param_2 * param_2)) <= 1e-06;
    uVar6 = NEON_fmov(0x3f800000,4);
    uVar6 = CONCAT44(param_2,param_1) ^
            (CONCAT44(param_2,param_1) ^ uVar6) &
            CONCAT44(-(uint)((int)((uint)bVar1 << 0x1f) < 0),-(uint)((int)((uint)bVar1 << 0x1f) < 0)
                    );
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x24);
    fVar2 = (float)uVar6;
    fVar3 = (float)(uVar6 >> 0x20);
    fVar4 = (float)*(undefined8 *)(param_3 + 0x260);
    fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0x260) >> 0x20);
    uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x24);
    *(ulong *)(*(long *)(param_3 + 0x200) + 0x24) =
         CONCAT44((float)((ulong)uVar8 >> 0x20) -
                  (((float)((ulong)*(undefined8 *)(param_4 + 0x24) >> 0x20) -
                   (float)((ulong)uVar7 >> 0x20)) * fVar3) / fVar5,
                  (float)uVar8 -
                  (((float)*(undefined8 *)(param_4 + 0x24) - (float)uVar7) * fVar2) / fVar4);
    uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x2c);
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x2c);
    *(ulong *)(*(long *)(param_3 + 0x200) + 0x2c) =
         CONCAT44((float)((ulong)uVar7 >> 0x20) -
                  (fVar3 * ((float)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20) -
                           (float)((ulong)uVar8 >> 0x20))) / fVar5,
                  (float)uVar7 -
                  (fVar2 * ((float)*(undefined8 *)(param_4 + 0x2c) - (float)uVar8)) / fVar4);
  }
  *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x24) = *(undefined8 *)(param_4 + 0x24);
  *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x2c) = *(undefined8 *)(param_4 + 0x2c);
  return;
}



/* Entry: 10a393dcc; end: 10a393ddb;  */

void FUN_10a393dcc(long param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dStack_c0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x108) + 0x100) + 0x1c8) + 0x70))
            (&lStack_70);
  uVar3 = *(uint *)(param_1 + 0x188);
  if (lStack_70 == 0) {
    if ((int)uVar3 < 3) {
      dStack_c0 = (double)NEON_fmov(0xbf800000,4);
      dStack_c0 = -dStack_c0;
      fVar20 = -1.0;
      fVar17 = 1.0;
      goto LAB_10a3938a4;
    }
    dStack_c0 = -48378537152512.0;
    fVar20 = -100.0;
    fVar18 = -99.0;
  }
  else {
    uVar1 = 0;
    if (uVar3 < 5) {
      uVar1 = uVar3;
    }
    lVar14 = lStack_70 + (ulong)uVar1 * 0x14;
    fVar20 = *(float *)(lVar14 + 0xa8);
    dStack_c0 = *(double *)(lVar14 + 0xac);
    fVar17 = *(float *)(lVar14 + 0xb4);
    if (((*(byte *)(lVar14 + 0xb8) & *(byte *)(param_1 + 0x18c) & 1) == 0) ||
       (*(char *)(lStack_70 + 0x7c) != '\x01')) {
LAB_10a3938a4:
      fVar18 = fVar17;
    }
    else {
      fVar18 = *(float *)(lStack_70 + 0x78);
      if (*(float *)(lStack_70 + 0x78) <= SUB84(dStack_c0,0)) {
        fVar18 = SUB84(dStack_c0,0);
      }
      dStack_c0 = (double)CONCAT44((int)((ulong)dStack_c0 >> 0x20),fVar18);
      if (fVar18 <= fVar17) goto LAB_10a3938a4;
    }
    if (uVar3 == 0) goto LAB_10a393ae4;
  }
  lVar14 = *(long *)(param_1 + 0x100);
  do {
    for (lVar15 = *(long *)(lVar14 + 0x158); lVar15 != lVar14 + 0x150;
        lVar15 = *(long *)(lVar15 + 8)) {
      if (*(long *)(lVar15 + 0x10) != 0) {
        plVar9 = (long *)(*(long *)(lVar15 + 0x10) + 0xb0);
        (**(code **)(*plVar9 + 0x18))(plVar9,0x49f6491c8e4b2468);
        if (plVar9 != (long *)0x0) {
          FUN_10a42f018();
          if ((long *)plVar9[1] == (long *)*plVar9) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a393bc8);
            (*pcVar7)();
          }
          lVar15 = *(long *)*plVar9;
          ppuVar2 = *(undefined ***)(lVar15 + 0x28);
          plStack_a0 = *(long **)(lVar15 + 0x30);
          if (plStack_a0 != (long *)0x0) {
            plVar9 = plStack_a0 + 1;
            do {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar8) {
                *plVar9 = *plVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          lVar15 = *(long *)(*(long *)(lVar14 + 0x120) + 0xbf8);
          plVar9 = *(long **)(*(long *)(lVar14 + 0x120) + 0xc00);
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + 1;
            do {
              cVar4 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar8) {
                *plVar10 = *plVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          bVar8 = false;
          ppuStack_a8 = ppuVar2;
          lStack_60 = lVar15;
          plStack_58 = plVar9;
          if ((lVar15 != 0) && (ppuVar2 != (undefined **)0x0)) {
            plVar10 = *(long **)(lVar15 + 0x268);
            if (plVar10 == (long *)0x0) {
              plVar10 = (long *)0x0;
LAB_10a3939c4:
              uVar16 = 0;
            }
            else {
              (**(code **)(*plVar10 + 0xb0))();
              plVar11 = *(long **)(lVar15 + 0x268);
              if (plVar11 == (long *)0x0) goto LAB_10a3939c4;
              (**(code **)(*plVar11 + 0xb8))();
              uVar16 = (long)plVar11 << 0x20;
            }
            plVar11 = (long *)ppuVar2[0x4d];
            if (plVar11 == (long *)0x0) {
              plVar11 = (long *)0x0;
LAB_10a393a00:
              uVar13 = 0;
            }
            else {
              (**(code **)(*plVar11 + 0xb0))();
              plVar12 = (long *)ppuVar2[0x4d];
              if (plVar12 == (long *)0x0) goto LAB_10a393a00;
              (**(code **)(*plVar12 + 0xb8))();
              uVar13 = (long)plVar12 << 0x20;
            }
            bVar8 = (uVar16 | (ulong)plVar10 & 0xffffffff) == (uVar13 | (ulong)plVar11 & 0xffffffff)
            ;
          }
          if (plVar9 != (long *)0x0) {
            plVar10 = plVar9 + 1;
            do {
              lVar14 = *plVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          plVar9 = plStack_a0;
          if (plStack_a0 != (long *)0x0) {
            plVar10 = plStack_a0 + 1;
            do {
              lVar14 = *plVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
          if (bVar8) {
            fVar17 = *(float *)(lStack_70 + 0xc0);
            fVar19 = *(float *)(lStack_70 + 200);
            if (((*(byte *)(lStack_70 + 0xcc) & *(byte *)(param_1 + 0x18c) & 1) != 0) &&
               (*(char *)(lStack_70 + 0x7c) == '\x01')) {
              fVar6 = *(float *)(lStack_70 + 0x78);
              if (*(float *)(lStack_70 + 0x78) <= fVar17) {
                fVar6 = fVar17;
              }
              fVar17 = fVar6;
              if (fVar19 < fVar17) {
                fVar19 = fVar17;
              }
            }
            fVar17 = 2.0 / (fVar19 - fVar17);
            fVar19 = 2.0 / (*(float *)(lStack_70 + 0xc4) - *(float *)(lStack_70 + 0xbc));
            fVar20 = fVar20 * fVar19;
            dStack_c0 = (double)CONCAT44((float)((ulong)dStack_c0 >> 0x20) * fVar19,
                                         SUB84(dStack_c0,0) * fVar17);
            fVar18 = fVar18 * fVar17;
          }
          goto LAB_10a393ae4;
        }
      }
    }
    lVar14 = *(long *)(lVar14 + 0x188);
  } while (lVar14 != 0);
LAB_10a393ae4:
  lVar14 = *(long *)(*(long *)(param_1 + 0x100) + 0x248);
  if (lVar14 != 0) {
    *(undefined1 *)(lVar14 + 0x219) = 1;
    uStack_88 = 0;
    ppuStack_a8 = &PTR_FUN_110c6a8d8;
    plStack_a0 = (long *)0x0;
    uStack_98 = 0;
    ppuStack_90 = &PTR_FUN_110c6a940;
    uStack_80 = SUB84(dStack_c0,0);
    uStack_7c = (undefined4)((ulong)dStack_c0 >> 0x20);
    fStack_84 = fVar20;
    fStack_78 = fVar18;
    FUN_10a393c18(lVar14,&ppuStack_a8);
    uStack_88 = 0;
    ppuStack_a8 = &PTR_FUN_110c6a8d8;
    plStack_a0 = (long *)0x0;
    uStack_98 = 0;
    ppuStack_90 = &PTR_FUN_110c6a940;
    uStack_7c = 0;
    fStack_78 = 0.0;
    fStack_84 = 0.0;
    uStack_80 = 0;
    func_0x00010a393cf8(lVar14,&ppuStack_a8);
  }
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar14 = *plVar9;
      cVar4 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar8) {
        *plVar9 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a393ddc; end: 10a393e97;  */

void FUN_10a393ddc(long param_1,long *param_2)

{
  long *plVar1;
  
  func_0x00010a3c7a18();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110bca1d8,0);
  *(int *)(param_1 + 0x1f0) = (int)plVar1;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bca1f8,0);
  *(char *)(param_1 + 500) = (char)param_2;
  return;
}



/* Entry: 10a393e98; end: 10a393f8b;  */

undefined4 FUN_10a393e98(long param_1)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  long lStack_50;
  long *plStack_48;
  
  (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x1c8) + 0x70))
            (&lStack_50);
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x1f0) < 5) {
    uVar2 = *(uint *)(param_1 + 0x1f0);
  }
  uVar6 = *(undefined4 *)(lStack_50 + (ulong)uVar2 * 0x14 + 0xa8);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return uVar6;
}



/* Entry: 10a393f8c; end: 10a394063;  */

undefined1  [16] FUN_10a393f8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f652d14;
  return auVar1;
}



/* Entry: 10a394064; end: 10a39477b;  */

void FUN_10a394064(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f652d14,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bcf938;
  pppuVar2 = (undefined8 ***)&UNK_10f651d0b;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bcf938;
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
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f652298,FUN_10a3b4ac4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f6522ac,FUN_10a3b4c64,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f6522c4,FUN_10a3b4e3c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f6522dd,FUN_10a3b4ef4,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f6522f4,FUN_10a3b5054,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f65230c,FUN_10a3b510c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f652323,FUN_10a3b51f0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f65233b,FUN_10a3b52d0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f65234e,FUN_10a3b53ac,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a39475c;
    FUN_10a054dac(param_1,&UNK_10f652362,FUN_10a3b54a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f652375,FUN_10a3b55b8,FUN_10a3b5670);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f48f1f8,FUN_10a3b58c8,FUN_10a3b5980);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f65237d,FUN_10a3b5a38,FUN_10a3b5af0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"scale",FUN_10a3b5bb0,FUN_10a3b5c8c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f20c,FUN_10a3b5dd4,FUN_10a3b5ed0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2c46ae,FUN_10a3b5f88,FUN_10a3b605c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f3d0f37,FUN_10a3b6128,FUN_10a3b61f4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f350c05,FUN_10a3b63d8,FUN_10a3b64a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f652392,FUN_10a3b6570,FUN_10a3b6640);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"rect",FUN_10a3b6788,FUN_10a3b6858);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f652d14,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a39475c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a394760);
  (*pcVar6)();
}



/* Entry: 10a39477c; end: 10a394787;  */

undefined4 FUN_10a39477c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x210);
}



/* Entry: 10a394788; end: 10a3949a7;  */

undefined8 * FUN_10a394788(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1[0x71] = &PTR_FUN_110c383b8;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *(undefined2 *)(param_1 + 0x74) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bca518);
  *puVar1 = &PTR_DAT_110bca230;
  puVar1[2] = &PTR_FUN_110bca360;
  puVar1[7] = &PTR_DAT_110bca3b8;
  puVar1[0xd] = &PTR_DAT_110bca3d8;
  puVar1[0x71] = &PTR_FUN_110bca4d8;
  puVar1[0x16] = &PTR_DAT_110bca448;
  puVar1[0x17] = &PTR_FUN_110bca478;
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110bcfba8;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[3] = &PTR_FUN_110c6a8d8;
  puVar1[6] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  param_1[0x3e] = puVar1 + 3;
  param_1[0x3f] = puVar1;
  puVar2 = (undefined8 *)0x50;
  __Znwm();
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_110bcfba8;
  puVar2[5] = 0;
  puVar2[4] = 0;
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[3] = &PTR_FUN_110c6a8d8;
  puVar2[6] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0;
  param_1[0x40] = puVar2 + 3;
  param_1[0x41] = puVar2;
  param_1[0x42] = 0;
  *(undefined2 *)(param_1 + 0x43) = 0x100;
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x44] = &PTR_FUN_110c6a8d8;
  param_1[0x47] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0x24c) = 0;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  param_1[0x4c] = 0x3f8000003f800000;
  param_1[0x4b] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x4d] = &PTR_FUN_110c6a8d8;
  param_1[0x50] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0x294) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  param_1[0x55] = 0x3f8000003f800000;
  param_1[0x54] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x56] = &PTR_FUN_110c6a8d8;
  param_1[0x59] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  param_1[0x5d] = &PTR_FUN_110c6a8d8;
  param_1[0x60] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x66] = &PTR_FUN_110c6a8d8;
  param_1[0x69] = &PTR_FUN_110c6a940;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  param_1[0x6e] = 0x3f8000003f800000;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (0xb0 < *(int *)(*(long *)(param_2 + 0xa20) + 0x18)) {
    *(undefined1 *)((long)param_1 + 0x219) = 1;
    *(undefined8 *)((long)puVar1 + 0x44) = 0x3f8000003f800000;
    *(undefined8 *)((long)puVar1 + 0x3c) = 0xbf800000bf800000;
  }
  return param_1;
}



/* Entry: 10a3949a8; end: 10a394a57;  */

void FUN_10a3949a8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((((0xb0 < *(int *)(*(long *)(*(long *)(param_1 + 0x170) + 0xa20) + 0x18)) &&
       (*(char *)(param_1 + 8) == '\x01')) && (*(float *)(param_1 + 0x21c) == 0.0)) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x168) + 0x188), lVar2 != 0)) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
        if (plVar1 != (long *)0x0) {
          *(undefined4 *)(param_1 + 0x21c) = 0xc2200000;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10a394a58; end: 10a394a63;  */

void FUN_10a394a58(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((((0xb0 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18)) &&
       (*(char *)(param_1 + -0x60) == '\x01')) && (*(float *)(param_1 + 0x1b4) == 0.0)) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x100) + 0x188), lVar2 != 0)) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0x49f6491c8e4b2468);
        if (plVar1 != (long *)0x0) {
          *(undefined4 *)(param_1 + 0x1b4) = 0xc2200000;
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10a394a64; end: 10a394dab;  */

void FUN_10a394a64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uVar3 = (uint)&uStack_70;
  puVar1 = (undefined8 *)(param_3 + 0x244);
  FUN_10a3c7c48();
  lVar8 = *(long *)(*(long *)(param_3 + 0x168) + 0x188);
  if (lVar8 == 0) {
LAB_10a394bfc:
    *(undefined8 *)(param_3 + 0x24c) = 0x3f8000003f800000;
    *puVar1 = 0xbf800000bf800000;
  }
  else {
    lVar2 = lVar8 + 0x150;
    lVar9 = *(long *)(lVar8 + 0x158);
    if (lVar9 == lVar2) {
      plVar4 = (long *)0x0;
    }
    else {
      do {
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar4 = (long *)(*(long *)(lVar9 + 0x10) + 0xb0);
          (**(code **)(*plVar4 + 0x18))(plVar4,0x49f6491c8e4b2468);
          if (plVar4 != (long *)0x0) goto LAB_10a394af8;
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar2);
      plVar4 = (long *)0x0;
LAB_10a394af8:
      lVar9 = *(long *)(lVar8 + 0x158);
    }
    fVar12 = (float)param_2;
    fVar10 = (float)param_1;
    lVar8 = *(long *)(lVar8 + 0x248);
    for (; lVar9 != lVar2; lVar9 = *(long *)(lVar9 + 8)) {
      if (*(long *)(lVar9 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0xb0);
        (**(code **)(*plVar5 + 0x18))(plVar5,0x5b791445539073a5);
        fVar12 = (float)param_2;
        fVar10 = (float)param_1;
        if (plVar5 != (long *)0x0) goto joined_r0x00010a394b50;
      }
      fVar12 = (float)param_2;
      fVar10 = (float)param_1;
    }
    plVar5 = (long *)0x0;
joined_r0x00010a394b50:
    if ((plVar4 == (long *)0x0) || ((char)plVar4[0x51] != '\x01')) {
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[0x3f];
        *puVar1 = *(undefined8 *)(lVar8 + 0x24);
        *(undefined8 *)(param_3 + 0x24c) = *(undefined8 *)(lVar8 + 0x2c);
        FUN_10a433134(plVar5);
        *(float *)(param_3 + 600) = fVar10;
        *(float *)(param_3 + 0x25c) = fVar12;
        FUN_10a4331f8(plVar5);
        *(float *)(param_3 + 0x260) = fVar10;
        *(float *)(param_3 + 0x264) = fVar12;
        goto LAB_10a394c18;
      }
      if (lVar8 != 0) {
        FUN_10a394a64(lVar8);
        *puVar1 = *(undefined8 *)(lVar8 + 0x28c);
        *(undefined8 *)(param_3 + 0x24c) = *(undefined8 *)(lVar8 + 0x294);
        uVar6 = *(undefined8 *)(lVar8 + 0x2a0);
        *(undefined8 *)(param_3 + 0x260) = *(undefined8 *)(lVar8 + 0x2a8);
        *(undefined8 *)(param_3 + 600) = uVar6;
        goto LAB_10a394c18;
      }
      goto LAB_10a394bfc;
    }
    FUN_10a396080(plVar4);
    *(float *)(param_3 + 0x24c) = fVar10 * 0.5;
    *(float *)(param_3 + 0x250) = fVar12 * 0.5;
    *(float *)(param_3 + 0x244) = -(fVar10 * 0.5);
    *(float *)(param_3 + 0x248) = -(fVar12 * 0.5);
  }
  *(undefined8 *)(param_3 + 600) = 0;
  uVar6 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_3 + 0x260) = uVar6;
LAB_10a394c18:
  uVar6 = *(undefined8 *)(param_3 + 0x1f0);
  FUN_10acae644(uVar6,param_3 + 0x2b0);
  if ((int)uVar6 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x200);
    FUN_10acae644(uVar6,param_3 + 0x2e8);
    if (((((int)uVar6 != 0) &&
         (ABS(*(float *)(param_3 + 0x210) - *(float *)(param_3 + 800)) < 1e-06)) &&
        (ABS(*(float *)(param_3 + 0x214) - *(float *)(param_3 + 0x324)) < 1e-06)) &&
       (ABS(*(float *)(param_3 + 0x21c) - *(float *)(param_3 + 0x328)) < 1e-06)) {
      lVar8 = param_3 + 0x220;
      FUN_10acae644(lVar8,param_3 + 0x330);
      if ((((int)lVar8 != 0) &&
          (ABS(*(float *)(param_3 + 600) - *(float *)(param_3 + 0x368)) < 1e-06)) &&
         (ABS(*(float *)(param_3 + 0x25c) - *(float *)(param_3 + 0x36c)) < 1e-06)) {
        iVar7 = 0x100;
        if (1e-06 <= ABS(*(float *)(param_3 + 0x264) - *(float *)(param_3 + 0x374))) {
          iVar7 = 0;
        }
        if (ABS(*(float *)(param_3 + 0x260) - *(float *)(param_3 + 0x370)) < 1e-06) {
          iVar7 = iVar7 + 1;
        }
        if (iVar7 == 0x101) {
          uStack_68 = *(undefined4 *)(*(long *)(param_3 + 0x178) + 0x9c);
          uStack_70 = *(undefined8 *)(*(long *)(param_3 + 0x178) + 0x94);
          FUN_10a3960c0(&uStack_70,param_3 + 0x378);
          if ((uVar3 & 0xff0101) == 0x10101) {
            return;
          }
        }
      }
    }
  }
  func_0x00010a395f80(param_3);
  *(undefined8 *)(param_3 + 0x2d4) = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x24);
  *(undefined8 *)(param_3 + 0x2dc) = *(undefined8 *)(*(long *)(param_3 + 0x1f0) + 0x2c);
  *(undefined8 *)(param_3 + 0x30c) = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x24);
  *(undefined8 *)(param_3 + 0x314) = *(undefined8 *)(*(long *)(param_3 + 0x200) + 0x2c);
  *(undefined8 *)(param_3 + 800) = *(undefined8 *)(param_3 + 0x210);
  *(undefined4 *)(param_3 + 0x328) = *(undefined4 *)(param_3 + 0x21c);
  *(undefined8 *)(param_3 + 0x35c) = *(undefined8 *)(param_3 + 0x24c);
  *(undefined8 *)(param_3 + 0x354) = *puVar1;
  *(undefined8 *)(param_3 + 0x368) = *(undefined8 *)(param_3 + 600);
  *(undefined8 *)(param_3 + 0x370) = *(undefined8 *)(param_3 + 0x260);
  uVar11 = *(undefined4 *)(*(long *)(param_3 + 0x178) + 0x9c);
  *(undefined8 *)(param_3 + 0x378) = *(undefined8 *)(*(long *)(param_3 + 0x178) + 0x94);
  *(undefined4 *)(param_3 + 0x380) = uVar11;
  return;
}



/* Entry: 10a394dac; end: 10a394dc7;  */

void FUN_10a394dac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  uVar3 = (uint)&uStack_70;
  puVar1 = (undefined8 *)(param_3 + 0x1dc);
  FUN_10a3c7c48();
  lVar8 = *(long *)(*(long *)(param_3 + 0x100) + 0x188);
  if (lVar8 == 0) {
LAB_10a394bfc:
    *(undefined8 *)(param_3 + 0x1e4) = 0x3f8000003f800000;
    *puVar1 = 0xbf800000bf800000;
  }
  else {
    lVar2 = lVar8 + 0x150;
    lVar9 = *(long *)(lVar8 + 0x158);
    if (lVar9 == lVar2) {
      plVar4 = (long *)0x0;
    }
    else {
      do {
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar4 = (long *)(*(long *)(lVar9 + 0x10) + 0xb0);
          (**(code **)(*plVar4 + 0x18))(plVar4,0x49f6491c8e4b2468);
          if (plVar4 != (long *)0x0) goto LAB_10a394af8;
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar2);
      plVar4 = (long *)0x0;
LAB_10a394af8:
      lVar9 = *(long *)(lVar8 + 0x158);
    }
    fVar12 = (float)param_2;
    fVar10 = (float)param_1;
    lVar8 = *(long *)(lVar8 + 0x248);
    for (; lVar9 != lVar2; lVar9 = *(long *)(lVar9 + 8)) {
      if (*(long *)(lVar9 + 0x10) != 0) {
        plVar5 = (long *)(*(long *)(lVar9 + 0x10) + 0xb0);
        (**(code **)(*plVar5 + 0x18))(plVar5,0x5b791445539073a5);
        fVar12 = (float)param_2;
        fVar10 = (float)param_1;
        if (plVar5 != (long *)0x0) goto joined_r0x00010a394b50;
      }
      fVar12 = (float)param_2;
      fVar10 = (float)param_1;
    }
    plVar5 = (long *)0x0;
joined_r0x00010a394b50:
    if ((plVar4 == (long *)0x0) || ((char)plVar4[0x51] != '\x01')) {
      if (plVar5 != (long *)0x0) {
        lVar8 = plVar5[0x3f];
        *puVar1 = *(undefined8 *)(lVar8 + 0x24);
        *(undefined8 *)(param_3 + 0x1e4) = *(undefined8 *)(lVar8 + 0x2c);
        FUN_10a433134(plVar5);
        *(float *)(param_3 + 0x1f0) = fVar10;
        *(float *)(param_3 + 500) = fVar12;
        FUN_10a4331f8(plVar5);
        *(float *)(param_3 + 0x1f8) = fVar10;
        *(float *)(param_3 + 0x1fc) = fVar12;
        goto LAB_10a394c18;
      }
      if (lVar8 != 0) {
        FUN_10a394a64(lVar8);
        *puVar1 = *(undefined8 *)(lVar8 + 0x28c);
        *(undefined8 *)(param_3 + 0x1e4) = *(undefined8 *)(lVar8 + 0x294);
        uVar6 = *(undefined8 *)(lVar8 + 0x2a0);
        *(undefined8 *)(param_3 + 0x1f8) = *(undefined8 *)(lVar8 + 0x2a8);
        *(undefined8 *)(param_3 + 0x1f0) = uVar6;
        goto LAB_10a394c18;
      }
      goto LAB_10a394bfc;
    }
    FUN_10a396080(plVar4);
    *(float *)(param_3 + 0x1e4) = fVar10 * 0.5;
    *(float *)(param_3 + 0x1e8) = fVar12 * 0.5;
    *(float *)(param_3 + 0x1dc) = -(fVar10 * 0.5);
    *(float *)(param_3 + 0x1e0) = -(fVar12 * 0.5);
  }
  *(undefined8 *)(param_3 + 0x1f0) = 0;
  uVar6 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_3 + 0x1f8) = uVar6;
LAB_10a394c18:
  uVar6 = *(undefined8 *)(param_3 + 0x188);
  FUN_10acae644(uVar6,param_3 + 0x248);
  if ((int)uVar6 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x198);
    FUN_10acae644(uVar6,param_3 + 0x280);
    if (((((int)uVar6 != 0) &&
         (ABS(*(float *)(param_3 + 0x1a8) - *(float *)(param_3 + 0x2b8)) < 1e-06)) &&
        (ABS(*(float *)(param_3 + 0x1ac) - *(float *)(param_3 + 700)) < 1e-06)) &&
       (ABS(*(float *)(param_3 + 0x1b4) - *(float *)(param_3 + 0x2c0)) < 1e-06)) {
      lVar8 = param_3 + 0x1b8;
      FUN_10acae644(lVar8,param_3 + 0x2c8);
      if ((((int)lVar8 != 0) &&
          (ABS(*(float *)(param_3 + 0x1f0) - *(float *)(param_3 + 0x300)) < 1e-06)) &&
         (ABS(*(float *)(param_3 + 500) - *(float *)(param_3 + 0x304)) < 1e-06)) {
        iVar7 = 0x100;
        if (1e-06 <= ABS(*(float *)(param_3 + 0x1fc) - *(float *)(param_3 + 0x30c))) {
          iVar7 = 0;
        }
        if (ABS(*(float *)(param_3 + 0x1f8) - *(float *)(param_3 + 0x308)) < 1e-06) {
          iVar7 = iVar7 + 1;
        }
        if (iVar7 == 0x101) {
          uStack_68 = *(undefined4 *)(*(long *)(param_3 + 0x110) + 0x9c);
          uStack_70 = *(undefined8 *)(*(long *)(param_3 + 0x110) + 0x94);
          FUN_10a3960c0(&uStack_70,param_3 + 0x310);
          if ((uVar3 & 0xff0101) == 0x10101) {
            return;
          }
        }
      }
    }
  }
  func_0x00010a395f80(param_3 + -0x68);
  *(undefined8 *)(param_3 + 0x26c) = *(undefined8 *)(*(long *)(param_3 + 0x188) + 0x24);
  *(undefined8 *)(param_3 + 0x274) = *(undefined8 *)(*(long *)(param_3 + 0x188) + 0x2c);
  *(undefined8 *)(param_3 + 0x2a4) = *(undefined8 *)(*(long *)(param_3 + 0x198) + 0x24);
  *(undefined8 *)(param_3 + 0x2ac) = *(undefined8 *)(*(long *)(param_3 + 0x198) + 0x2c);
  *(undefined8 *)(param_3 + 0x2b8) = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined4 *)(param_3 + 0x2c0) = *(undefined4 *)(param_3 + 0x1b4);
  *(undefined8 *)(param_3 + 0x2f4) = *(undefined8 *)(param_3 + 0x1e4);
  *(undefined8 *)(param_3 + 0x2ec) = *puVar1;
  *(undefined8 *)(param_3 + 0x300) = *(undefined8 *)(param_3 + 0x1f0);
  *(undefined8 *)(param_3 + 0x308) = *(undefined8 *)(param_3 + 0x1f8);
  uVar11 = *(undefined4 *)(*(long *)(param_3 + 0x110) + 0x9c);
  *(undefined8 *)(param_3 + 0x310) = *(undefined8 *)(*(long *)(param_3 + 0x110) + 0x94);
  *(undefined4 *)(param_3 + 0x318) = uVar11;
  return;
}



/* Entry: 10a394dc8; end: 10a3951c7;  */

void FUN_10a394dc8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *unaff_x19;
  long *plVar3;
  undefined *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong unaff_d8;
  undefined4 uVar31;
  ulong unaff_d9;
  float fVar32;
  ulong unaff_d10;
  float fVar33;
  ulong unaff_d11;
  uint uVar34;
  ulong unaff_d12;
  uint uVar35;
  ulong unaff_d13;
  uint uVar36;
  ulong unaff_d14;
  ulong unaff_d15;
  float fVar37;
  
  uVar31 = (undefined4)((ulong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  while( true ) {
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(uint *)((long)param_3 + 0x28c);
    *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
    *(ulong *)((long)register0x00000008 + -0x1a0) = (ulong)uVar4;
    uVar4 = *(uint *)(param_3 + 0x52);
    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1d0) = (ulong)uVar4;
    uVar4 = *(uint *)((long)param_3 + 0x294);
    *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1e0) = (ulong)uVar4;
    fVar5 = *(float *)(param_3 + 0x53);
    uVar6 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1f0) = (ulong)(uint)fVar5;
    unaff_x20 = (undefined *)param_3[0x2f];
    fVar15 = fVar14;
    if ((unaff_x20[0x2a] & 0x24) != 0) {
      FUN_10a3e8fd4(unaff_x20);
      fVar15 = fVar14;
    }
    fVar32 = *(float *)((long)param_3 + 0x214);
    func_0x00010acae698(param_3 + 0x4d);
    unaff_d9 = CONCAT44(uVar6,fVar5);
    unaff_d8 = CONCAT44(uVar31,fVar15);
    fVar33 = *(float *)(param_3 + 0x42);
    uVar4 = *(uint *)(unaff_x20 + 0xf8);
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(ulong *)((long)register0x00000008 + -0x100) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xf4);
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(ulong *)((long)register0x00000008 + -0x130) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
    *(ulong *)((long)register0x00000008 + -0x170) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xe8);
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(ulong *)((long)register0x00000008 + -0x110) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xe4);
    *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
    *(ulong *)((long)register0x00000008 + -0x150) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(ulong *)((long)register0x00000008 + -400) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xd8);
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(ulong *)((long)register0x00000008 + -0x120) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xd4);
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    *(ulong *)((long)register0x00000008 + -0x160) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xd0);
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1b0) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 200);
    *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
    *(ulong *)((long)register0x00000008 + -0x140) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xc4);
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
    *(ulong *)((long)register0x00000008 + -0x180) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xc0);
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1c0) = (ulong)uVar4;
    lVar2 = param_3[0x2d];
    plVar1 = (long *)param_3[0x2e];
    fVar14 = fVar15;
    FUN_10a3df648(plVar1,lVar2,(undefined1 *)((long)register0x00000008 + -200),8);
    unaff_x19 = param_3;
    if (lVar2 != 0) {
      fVar9 = (float)*(undefined8 *)((long)register0x00000008 + -0x1a0);
      fVar14 = *(float *)((long)register0x00000008 + -0x1d0);
      fVar7 = (float)*(undefined8 *)((long)register0x00000008 + -0x1e0);
      fVar8 = (float)*(undefined8 *)((long)register0x00000008 + -0x1f0);
      fVar16 = (fVar9 + fVar7) * 0.5;
      fVar11 = (fVar14 + fVar8) * 0.5;
      auVar29._4_4_ = fVar9;
      auVar29._0_4_ = fVar7;
      auVar29._8_4_ = fVar8;
      auVar29._12_4_ = (int)((ulong)*(undefined8 *)((long)register0x00000008 + -0x1a0) >> 0x20);
      auVar30._4_4_ = fVar8;
      auVar30._0_4_ = fVar7;
      auVar30._8_4_ = 0;
      auVar30._12_4_ = 0x3f800000;
      auVar30 = NEON_ext(auVar30,auVar29,8,1);
      fVar24 = fVar33 * fVar5 * 0.5;
      fVar17 = (fVar9 - fVar16) - fVar24;
      fVar18 = (fVar7 - fVar16) - fVar24;
      fVar19 = (auVar30._8_4_ - fVar16) - fVar24;
      fVar24 = (auVar30._12_4_ - fVar16) - fVar24;
      fVar37 = (float)*(undefined8 *)((long)register0x00000008 + -0x1c0);
      fVar5 = fVar32 * fVar15 * 0.5;
      fVar12 = (fVar14 - fVar11) - fVar5;
      fVar14 = (fVar14 - fVar11) - fVar5;
      fVar15 = (fVar8 - fVar11) - fVar5;
      fVar5 = (fVar8 - fVar11) - fVar5;
      fVar25 = (float)*(undefined8 *)((long)register0x00000008 + -0x1b0);
      fVar11 = (float)*(undefined8 *)((long)register0x00000008 + -400);
      fVar32 = (float)*(undefined8 *)((long)register0x00000008 + -0x170);
      fVar26 = fVar18 * fVar37 + fVar14 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0;
      fVar27 = fVar19 * fVar37 + fVar15 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0;
      fVar28 = fVar24 * fVar37 + fVar5 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0;
      fVar33 = (float)*(undefined8 *)((long)register0x00000008 + -0x180);
      fVar16 = (float)*(undefined8 *)((long)register0x00000008 + -0x160);
      fVar8 = (float)*(undefined8 *)((long)register0x00000008 + -0x150);
      fVar20 = (float)*(undefined8 *)((long)register0x00000008 + -0x130);
      fVar21 = fVar18 * fVar33 + fVar14 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0;
      fVar22 = fVar19 * fVar33 + fVar15 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0;
      fVar23 = fVar24 * fVar33 + fVar5 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0;
      fVar7 = (float)*(undefined8 *)((long)register0x00000008 + -0x140);
      fVar9 = (float)*(undefined8 *)((long)register0x00000008 + -0x120);
      fVar10 = (float)*(undefined8 *)((long)register0x00000008 + -0x110);
      fVar13 = (float)*(undefined8 *)((long)register0x00000008 + -0x100);
      fVar14 = fVar18 * fVar7 + fVar14 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0;
      fVar15 = fVar19 * fVar7 + fVar15 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0;
      fVar5 = fVar24 * fVar7 + fVar5 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0;
      *(float *)((long)register0x00000008 + -0x140) = fVar27;
      *(float *)((long)register0x00000008 + -0x150) = fVar22;
      *(float *)((long)register0x00000008 + -0x160) = fVar15;
      *(float *)((long)register0x00000008 + -0x170) = fVar26;
      *(float *)((long)register0x00000008 + -0x180) = fVar21;
      *(float *)((long)register0x00000008 + -400) = fVar14;
      *(ulong *)((long)register0x00000008 + -0x118) = CONCAT44(fVar23,fVar22);
      *(ulong *)((long)register0x00000008 + -0x120) =
           CONCAT44(fVar21,fVar17 * fVar33 + fVar12 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0);
      *(ulong *)((long)register0x00000008 + -0x108) = CONCAT44(fVar28,fVar27);
      *(ulong *)((long)register0x00000008 + -0x110) =
           CONCAT44(fVar26,fVar17 * fVar37 + fVar12 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0);
      *(float *)((long)register0x00000008 + -0x1a0) = fVar28;
      unaff_d15 = (ulong)(uint)fVar23;
      *(ulong *)((long)register0x00000008 + -0x128) = CONCAT44(fVar5,fVar15);
      *(ulong *)((long)register0x00000008 + -0x130) =
           CONCAT44(fVar14,fVar17 * fVar7 + fVar12 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0);
      unaff_d8 = (ulong)(uint)fVar5;
      unaff_x22 = lVar2 << 3;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0x3f80000000000000;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3f800000;
      unaff_x20 = &UNK_10e482b48;
      plVar3 = plVar1;
      do {
        unaff_x19 = plVar3 + 1;
        unaff_x21 = *plVar3;
        uVar31 = *(undefined4 *)((long)register0x00000008 + -0x140);
        fVar32 = *(float *)((long)register0x00000008 + -0x150);
        *(undefined4 *)((long)register0x00000008 + -0xd4) = uVar31;
        *(float *)((long)register0x00000008 + -0xd0) = fVar32;
        fVar33 = *(float *)((long)register0x00000008 + -0x160);
        *(float *)((long)register0x00000008 + -0xcc) = fVar33;
        uVar34 = *(uint *)((long)register0x00000008 + -0x170);
        unaff_d12 = (ulong)uVar34;
        uVar35 = *(uint *)((long)register0x00000008 + -0x180);
        unaff_d13 = (ulong)uVar35;
        *(uint *)((long)register0x00000008 + -0xe0) = uVar34;
        *(uint *)((long)register0x00000008 + -0xdc) = uVar35;
        uVar36 = *(uint *)((long)register0x00000008 + -400);
        unaff_d14 = (ulong)uVar36;
        *(uint *)((long)register0x00000008 + -0xd8) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        *(undefined4 *)((long)register0x00000008 + -0xd4) = uVar31;
        *(float *)((long)register0x00000008 + -0xd0) = fVar32;
        *(float *)((long)register0x00000008 + -0xcc) = fVar33;
        uVar4 = *(uint *)((long)register0x00000008 + -0x1a0);
        unaff_d9 = (ulong)uVar4;
        *(uint *)((long)register0x00000008 + -0xe0) = uVar4;
        *(float *)((long)register0x00000008 + -0xdc) = fVar23;
        *(float *)((long)register0x00000008 + -0xd8) = fVar5;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        fVar14 = (float)*(undefined8 *)((long)register0x00000008 + -0x110);
        uVar31 = (undefined4)((ulong)*(undefined8 *)((long)register0x00000008 + -0x110) >> 0x20);
        *(float *)((long)register0x00000008 + -0xd4) = fVar14;
        *(int *)((long)register0x00000008 + -0xd0) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x120);
        *(int *)((long)register0x00000008 + -0xcc) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x130);
        *(uint *)((long)register0x00000008 + -0xe0) = uVar34;
        *(uint *)((long)register0x00000008 + -0xdc) = uVar35;
        *(uint *)((long)register0x00000008 + -0xd8) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        *(int *)((long)register0x00000008 + -0xd4) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x110);
        *(int *)((long)register0x00000008 + -0xd0) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x120);
        *(int *)((long)register0x00000008 + -0xcc) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x130);
        *(uint *)((long)register0x00000008 + -0xe0) = uVar4;
        *(float *)((long)register0x00000008 + -0xdc) = fVar23;
        *(float *)((long)register0x00000008 + -0xd8) = fVar5;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        plVar1 = (long *)unaff_x21;
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        unaff_x22 = unaff_x22 + -8;
        plVar3 = unaff_x19;
      } while (unaff_x22 != 0);
    }
    unaff_d11 = (ulong)(uint)fVar33;
    unaff_d10 = (ulong)(uint)fVar32;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x88))
    break;
    unaff_x30 = FUN_10a3951c8;
    ___stack_chk_fail();
    if (*(char *)((long)plVar1 + 0x1b0) != '\x01') {
      return;
    }
    param_3 = (long *)((long)plVar1 + -0x68);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
  }
  return;
}



/* Entry: 10a3951c8; end: 10a3951df;  */

void FUN_10a3951c8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulong unaff_d8;
  undefined4 uVar31;
  ulong unaff_d9;
  float fVar32;
  ulong unaff_d10;
  float fVar33;
  ulong unaff_d11;
  uint uVar34;
  ulong unaff_d12;
  uint uVar35;
  ulong unaff_d13;
  uint uVar36;
  ulong unaff_d14;
  ulong unaff_d15;
  float fVar37;
  
  uVar31 = (undefined4)((ulong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  while( true ) {
    if (*(char *)((long)param_3 + 0x1b0) != '\x01') {
      return;
    }
    plVar1 = (long *)((long)param_3 + -0x68);
    *(ulong *)((long)register0x00000008 + -0x80) = unaff_d15;
    *(ulong *)((long)register0x00000008 + -0x78) = unaff_d14;
    *(ulong *)((long)register0x00000008 + -0x70) = unaff_d13;
    *(ulong *)((long)register0x00000008 + -0x68) = unaff_d12;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(uint *)((long)param_3 + 0x224);
    *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
    *(ulong *)((long)register0x00000008 + -0x1a0) = (ulong)uVar4;
    uVar4 = *(uint *)((long)param_3 + 0x228);
    *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1d0) = (ulong)uVar4;
    uVar4 = *(uint *)((long)param_3 + 0x22c);
    *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1e0) = (ulong)uVar4;
    fVar5 = *(float *)((long)param_3 + 0x230);
    uVar6 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1f0) = (ulong)(uint)fVar5;
    unaff_x20 = *(undefined **)((long)param_3 + 0x110);
    fVar15 = fVar14;
    if ((unaff_x20[0x2a] & 0x24) != 0) {
      FUN_10a3e8fd4(unaff_x20);
      fVar15 = fVar14;
    }
    fVar32 = *(float *)((long)param_3 + 0x1ac);
    func_0x00010acae698((long)param_3 + 0x200);
    unaff_d9 = CONCAT44(uVar6,fVar5);
    unaff_d8 = CONCAT44(uVar31,fVar15);
    fVar33 = *(float *)((long)param_3 + 0x1a8);
    uVar4 = *(uint *)(unaff_x20 + 0xf8);
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(ulong *)((long)register0x00000008 + -0x100) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xf4);
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(ulong *)((long)register0x00000008 + -0x130) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
    *(ulong *)((long)register0x00000008 + -0x170) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xe8);
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(ulong *)((long)register0x00000008 + -0x110) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xe4);
    *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
    *(ulong *)((long)register0x00000008 + -0x150) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
    *(ulong *)((long)register0x00000008 + -400) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xd8);
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(ulong *)((long)register0x00000008 + -0x120) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xd4);
    *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
    *(ulong *)((long)register0x00000008 + -0x160) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xd0);
    *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1b0) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 200);
    *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
    *(ulong *)((long)register0x00000008 + -0x140) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xc4);
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
    *(ulong *)((long)register0x00000008 + -0x180) = (ulong)uVar4;
    uVar4 = *(uint *)(unaff_x20 + 0xc0);
    *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
    *(ulong *)((long)register0x00000008 + -0x1c0) = (ulong)uVar4;
    lVar2 = *(long *)((long)param_3 + 0x100);
    param_3 = *(long **)((long)param_3 + 0x108);
    fVar14 = fVar15;
    FUN_10a3df648(param_3,lVar2,(undefined1 *)((long)register0x00000008 + -200),8);
    if (lVar2 != 0) {
      fVar9 = (float)*(undefined8 *)((long)register0x00000008 + -0x1a0);
      fVar14 = *(float *)((long)register0x00000008 + -0x1d0);
      fVar7 = (float)*(undefined8 *)((long)register0x00000008 + -0x1e0);
      fVar8 = (float)*(undefined8 *)((long)register0x00000008 + -0x1f0);
      fVar16 = (fVar9 + fVar7) * 0.5;
      fVar11 = (fVar14 + fVar8) * 0.5;
      auVar29._4_4_ = fVar9;
      auVar29._0_4_ = fVar7;
      auVar29._8_4_ = fVar8;
      auVar29._12_4_ = (int)((ulong)*(undefined8 *)((long)register0x00000008 + -0x1a0) >> 0x20);
      auVar30._4_4_ = fVar8;
      auVar30._0_4_ = fVar7;
      auVar30._8_4_ = 0;
      auVar30._12_4_ = 0x3f800000;
      auVar30 = NEON_ext(auVar30,auVar29,8,1);
      fVar24 = fVar33 * fVar5 * 0.5;
      fVar17 = (fVar9 - fVar16) - fVar24;
      fVar18 = (fVar7 - fVar16) - fVar24;
      fVar19 = (auVar30._8_4_ - fVar16) - fVar24;
      fVar24 = (auVar30._12_4_ - fVar16) - fVar24;
      fVar37 = (float)*(undefined8 *)((long)register0x00000008 + -0x1c0);
      fVar5 = fVar32 * fVar15 * 0.5;
      fVar12 = (fVar14 - fVar11) - fVar5;
      fVar14 = (fVar14 - fVar11) - fVar5;
      fVar15 = (fVar8 - fVar11) - fVar5;
      fVar5 = (fVar8 - fVar11) - fVar5;
      fVar25 = (float)*(undefined8 *)((long)register0x00000008 + -0x1b0);
      fVar11 = (float)*(undefined8 *)((long)register0x00000008 + -400);
      fVar32 = (float)*(undefined8 *)((long)register0x00000008 + -0x170);
      fVar26 = fVar18 * fVar37 + fVar14 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0;
      fVar27 = fVar19 * fVar37 + fVar15 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0;
      fVar28 = fVar24 * fVar37 + fVar5 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0;
      fVar33 = (float)*(undefined8 *)((long)register0x00000008 + -0x180);
      fVar16 = (float)*(undefined8 *)((long)register0x00000008 + -0x160);
      fVar8 = (float)*(undefined8 *)((long)register0x00000008 + -0x150);
      fVar20 = (float)*(undefined8 *)((long)register0x00000008 + -0x130);
      fVar21 = fVar18 * fVar33 + fVar14 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0;
      fVar22 = fVar19 * fVar33 + fVar15 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0;
      fVar23 = fVar24 * fVar33 + fVar5 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0;
      fVar7 = (float)*(undefined8 *)((long)register0x00000008 + -0x140);
      fVar9 = (float)*(undefined8 *)((long)register0x00000008 + -0x120);
      fVar10 = (float)*(undefined8 *)((long)register0x00000008 + -0x110);
      fVar13 = (float)*(undefined8 *)((long)register0x00000008 + -0x100);
      fVar14 = fVar18 * fVar7 + fVar14 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0;
      fVar15 = fVar19 * fVar7 + fVar15 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0;
      fVar5 = fVar24 * fVar7 + fVar5 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0;
      *(float *)((long)register0x00000008 + -0x140) = fVar27;
      *(float *)((long)register0x00000008 + -0x150) = fVar22;
      *(float *)((long)register0x00000008 + -0x160) = fVar15;
      *(float *)((long)register0x00000008 + -0x170) = fVar26;
      *(float *)((long)register0x00000008 + -0x180) = fVar21;
      *(float *)((long)register0x00000008 + -400) = fVar14;
      *(ulong *)((long)register0x00000008 + -0x118) = CONCAT44(fVar23,fVar22);
      *(ulong *)((long)register0x00000008 + -0x120) =
           CONCAT44(fVar21,fVar17 * fVar33 + fVar12 * fVar16 + fVar8 * 0.0 + fVar20 * 1.0);
      *(ulong *)((long)register0x00000008 + -0x108) = CONCAT44(fVar28,fVar27);
      *(ulong *)((long)register0x00000008 + -0x110) =
           CONCAT44(fVar26,fVar17 * fVar37 + fVar12 * fVar25 + fVar11 * 0.0 + fVar32 * 1.0);
      *(float *)((long)register0x00000008 + -0x1a0) = fVar28;
      unaff_d15 = (ulong)(uint)fVar23;
      *(ulong *)((long)register0x00000008 + -0x128) = CONCAT44(fVar5,fVar15);
      *(ulong *)((long)register0x00000008 + -0x130) =
           CONCAT44(fVar14,fVar17 * fVar7 + fVar12 * fVar9 + fVar10 * 0.0 + fVar13 * 1.0);
      unaff_d8 = (ulong)(uint)fVar5;
      unaff_x22 = lVar2 << 3;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0x3f80000000000000;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3f800000;
      unaff_x20 = &UNK_10e482b48;
      plVar3 = param_3;
      do {
        plVar1 = plVar3 + 1;
        unaff_x21 = *plVar3;
        uVar31 = *(undefined4 *)((long)register0x00000008 + -0x140);
        fVar32 = *(float *)((long)register0x00000008 + -0x150);
        *(undefined4 *)((long)register0x00000008 + -0xd4) = uVar31;
        *(float *)((long)register0x00000008 + -0xd0) = fVar32;
        fVar33 = *(float *)((long)register0x00000008 + -0x160);
        *(float *)((long)register0x00000008 + -0xcc) = fVar33;
        uVar34 = *(uint *)((long)register0x00000008 + -0x170);
        unaff_d12 = (ulong)uVar34;
        uVar35 = *(uint *)((long)register0x00000008 + -0x180);
        unaff_d13 = (ulong)uVar35;
        *(uint *)((long)register0x00000008 + -0xe0) = uVar34;
        *(uint *)((long)register0x00000008 + -0xdc) = uVar35;
        uVar36 = *(uint *)((long)register0x00000008 + -400);
        unaff_d14 = (ulong)uVar36;
        *(uint *)((long)register0x00000008 + -0xd8) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        *(undefined4 *)((long)register0x00000008 + -0xd4) = uVar31;
        *(float *)((long)register0x00000008 + -0xd0) = fVar32;
        *(float *)((long)register0x00000008 + -0xcc) = fVar33;
        uVar4 = *(uint *)((long)register0x00000008 + -0x1a0);
        unaff_d9 = (ulong)uVar4;
        *(uint *)((long)register0x00000008 + -0xe0) = uVar4;
        *(float *)((long)register0x00000008 + -0xdc) = fVar23;
        *(float *)((long)register0x00000008 + -0xd8) = fVar5;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        fVar14 = (float)*(undefined8 *)((long)register0x00000008 + -0x110);
        uVar31 = (undefined4)((ulong)*(undefined8 *)((long)register0x00000008 + -0x110) >> 0x20);
        *(float *)((long)register0x00000008 + -0xd4) = fVar14;
        *(int *)((long)register0x00000008 + -0xd0) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x120);
        *(int *)((long)register0x00000008 + -0xcc) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x130);
        *(uint *)((long)register0x00000008 + -0xe0) = uVar34;
        *(uint *)((long)register0x00000008 + -0xdc) = uVar35;
        *(uint *)((long)register0x00000008 + -0xd8) = uVar36;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        *(int *)((long)register0x00000008 + -0xd4) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x110);
        *(int *)((long)register0x00000008 + -0xd0) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x120);
        *(int *)((long)register0x00000008 + -0xcc) =
             (int)*(undefined8 *)((long)register0x00000008 + -0x130);
        *(uint *)((long)register0x00000008 + -0xe0) = uVar4;
        *(float *)((long)register0x00000008 + -0xdc) = fVar23;
        *(float *)((long)register0x00000008 + -0xd8) = fVar5;
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        param_3 = (long *)unaff_x21;
        FUN_10aaf962c(unaff_x21,&UNK_10e482b48,(undefined1 *)((long)register0x00000008 + -0xd4),
                      (undefined1 *)((long)register0x00000008 + -0xe0),
                      (undefined1 *)((long)register0x00000008 + -0xf0),0);
        unaff_x22 = unaff_x22 + -8;
        plVar3 = plVar1;
      } while (unaff_x22 != 0);
    }
    unaff_d11 = (ulong)(uint)fVar33;
    unaff_d10 = (ulong)(uint)fVar32;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x88))
    break;
    unaff_x30 = FUN_10a3951c8;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
    unaff_x19 = plVar1;
  }
  return;
}



/* Entry: 10a3951e0; end: 10a395237;  */

void FUN_10a3951e0(long param_1)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_10a3e3894(*(undefined8 *)(param_1 + 0x178),&uStack_20);
  return;
}



/* Entry: 10a395238; end: 10a395393;  */

void FUN_10a395238(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10a3c7928();
  lVar1 = 0;
  if (*(long *)(param_1 + 0x1f0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1f0) + 0x18;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bca530,lVar1);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x200) != 0) {
    lVar1 = *(long *)(param_1 + 0x200) + 0x18;
  }
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bca550,lVar1);
  lVar1 = *(long *)(param_1 + 0x178);
  func_0x00010a0d8ae0(lVar1);
  uStack_38 = *(undefined8 *)(lVar1 + 0x5c);
  uStack_40 = *(undefined8 *)(lVar1 + 0x54);
  (**(code **)(*param_2 + 0xd0))(param_2,&PTR_DAT_110bca570,&uStack_40);
  lVar1 = *(long *)(param_1 + 0x178);
  func_0x00010a0d8ae0(lVar1);
  uStack_40 = *(undefined8 *)(lVar1 + 0x48);
  uStack_38 = CONCAT44(uStack_38._4_4_,*(undefined4 *)(lVar1 + 0x50));
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_s_scale_110bcebc8,&uStack_40);
  (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110bcebe8,param_1 + 0x210);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bca590,*(undefined1 *)(param_1 + 0x219));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bca5b0,*(undefined1 *)(param_1 + 0x218));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x21c),param_2,&PTR_DAT_110bca5d0);
  return;
}



/* Entry: 10a395394; end: 10a395653;  */

void FUN_10a395394(float param_1,float param_2,float param_3,long param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  func_0x00010a3c7a18();
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110bca5f0);
  if ((int)plVar1 == 0) {
    lVar2 = 0;
    if (*(long *)(param_4 + 0x1f0) != 0) {
      lVar2 = *(long *)(param_4 + 0x1f0) + 0x18;
    }
    (**(code **)(*param_5 + 0x1f0))(param_5,&PTR_DAT_110bca530,lVar2);
    lVar2 = 0;
    if (*(long *)(param_4 + 0x200) != 0) {
      lVar2 = *(long *)(param_4 + 0x200) + 0x18;
    }
    (**(code **)(*param_5 + 0x1f0))(param_5,&PTR_DAT_110bca550,lVar2);
  }
  else {
    (**(code **)(*param_5 + 0xd8))(param_5,&PTR_DAT_110bca5f0);
    lVar2 = *(long *)(param_4 + 0x1f0);
    *(float *)(lVar2 + 0x24) = param_1;
    *(float *)(lVar2 + 0x28) = param_2;
    (**(code **)(*param_5 + 0xd8))(param_5,&PTR_DAT_110bca610);
    lVar2 = *(long *)(param_4 + 0x1f0);
    *(float *)(lVar2 + 0x2c) = param_1;
    *(float *)(lVar2 + 0x30) = param_2;
    (**(code **)(*param_5 + 0xd8))(param_5,&PTR_DAT_110bca630);
    lVar2 = *(long *)(param_4 + 0x200);
    *(float *)(lVar2 + 0x24) = param_1;
    *(float *)(lVar2 + 0x28) = param_2;
    (**(code **)(*param_5 + 0xd8))(param_5,&PTR_DAT_110bca650);
    lVar2 = *(long *)(param_4 + 0x200);
    *(float *)(lVar2 + 0x2c) = param_1;
    *(float *)(lVar2 + 0x30) = param_2;
  }
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110bca570);
  if ((int)plVar1 == 0) {
    plVar1 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_s_rotate_110bca670);
    if ((int)plVar1 == 0) goto LAB_10a395584;
    (**(code **)(*param_5 + 0xe8))(param_5,&PTR_s_rotate_110bca670);
    fVar3 = param_1 * 0.5;
    fVar7 = param_2 * 0.5;
    param_3 = param_3 * 0.5;
    ___sincosf_stret();
    fVar5 = param_2;
    ___sincosf_stret();
    fVar6 = fVar5;
    ___sincosf_stret();
    param_1 = -(param_2 * fVar7 * param_3) + fVar6 * fVar3 * fVar5;
    param_2 = param_3 * fVar3 * fVar5 + fVar6 * param_2 * fVar7;
  }
  else {
    (**(code **)(*param_5 + 0x188))(param_5,&PTR_DAT_110bca570);
  }
  FUN_10a395654(param_4);
LAB_10a395584:
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_s_scale_110bcebc8);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_5 + 0xe8))(param_5,&PTR_s_scale_110bcebc8);
    func_0x00010a3956a8(param_4);
  }
  (**(code **)(*param_5 + 0xd8))(param_5,&PTR_DAT_110bcebe8);
  *(float *)(param_4 + 0x210) = param_1;
  *(float *)(param_4 + 0x214) = param_2;
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110bca590);
  *(char *)(param_4 + 0x219) = (char)plVar1;
  plVar1 = param_5;
  (**(code **)(*param_5 + 0x50))(param_5,&PTR_DAT_110bca5b0);
  *(char *)(param_4 + 0x218) = (char)plVar1;
  uVar4 = *(undefined4 *)(*(long *)(param_4 + 0x178) + 0x9c);
  (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110bca5d0);
  *(undefined4 *)(param_4 + 0x21c) = uVar4;
  return;
}


