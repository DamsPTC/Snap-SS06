/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a66a0e4; end: 10a66a1af;  */

void FUN_10a66a0e4(float param_1,long param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  
  func_0x00010a3c7a18();
  (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c04780);
  *(float *)(param_2 + 0x1f0) = param_1;
  (**(code **)(*param_3 + 0x40))(param_3,&PTR_DAT_110c047a0);
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  fVar2 = 1.0;
  if (fVar1 <= 1.0) {
    fVar2 = fVar1;
  }
  *(float *)(param_2 + 500) = fVar2;
  return;
}



/* Entry: 10a66a1b0; end: 10a66a41b;  */

void FUN_10a66a1b0(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  FUN_10a57a9a0(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110c07af0;
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
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a66a314;
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
LAB_10a66a314:
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
  param_1[1] = (long)plVar7;
  *param_1 = lVar10;
  *(undefined8 *)(lVar10 + 0x1f0) = uVar8;
  return;
}



/* Entry: 10a66a41c; end: 10a66a4d3;  */

undefined1  [16] FUN_10a66a41c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10;
  auVar1._0_8_ = &UNK_10f66b65f;
  return auVar1;
}



/* Entry: 10a66a4d4; end: 10a66a823;  */

void FUN_10a66a4d4(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
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
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f66b65f,0x10);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c07c30;
  pppuVar2 = (undefined8 ***)&UNK_10f66a659;
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
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c07c30;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a66a804;
    FUN_10a054dac(param_1,&UNK_10f66b2d8,FUN_10a683778,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a66a804;
    FUN_10a054dac(param_1,&UNK_10f66b2e7,FUN_10a6838a8,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a66a804;
    FUN_10a054dac(param_1,&UNK_10f657c20,FUN_10a6839e0,1,*(undefined8 *)(param_1 + 0x40));
  }
  ppuVar7 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  uVar8 = 100;
  if (*ppuVar7 != (undefined *)0x0) {
    FUN_10a3c8488();
    uVar8 = 100;
    if (*(int *)(ppuVar7 + 3) < 0x143) {
      uVar8 = 0x19;
    }
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,uVar8,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f657b43,FUN_10a683778,FUN_10a6838a8);
  }
  uVar6 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar6 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f66b2f6,FUN_10a683aa0,FUN_10a683b5c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar9 = *(ulong *)(lVar3 + -0x48);
    uVar10 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar10 >> 0x20);
    uVar8 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_80._4_4_;
    uVar6 = param_1;
    uStack_88 = uVar10;
    uStack_80 = uVar9;
    FUN_10a0051e8(param_1,uVar10 & 0xffffffff,uVar8,uStack_50 & 0xffffffff,uVar9 & 0xffffffff,uVar4)
    ;
    if ((uVar6 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f66b65f,0x10);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a66a804:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a66a808);
  (*pcVar5)();
}



/* Entry: 10a66a824; end: 10a66a923;  */

long * FUN_10a66a824(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  plVar1 = param_1;
  FUN_10a3c575c(param_1,param_2 + 1);
  lVar3 = *param_2;
  *plVar1 = lVar3;
  plVar1[2] = (long)&PTR_DAT_110c04938;
  plVar1[7] = (long)&PTR_DAT_110c04990;
  plVar1[0xd] = (long)&PTR_DAT_110c049b0;
  plVar1[0x16] = (long)&PTR_DAT_110c04a20;
  *(long *)((long)plVar1 + *(long *)(lVar3 + -0x18)) = param_2[3];
  plVar1[0x17] = (long)&PTR_DAT_110c04a50;
  *(undefined1 *)(plVar1 + 0x3e) = 0;
  *(undefined1 *)(plVar1 + 0x41) = 0;
  *(undefined1 *)((long)plVar1 + 0x20c) = 1;
  plVar1[0x42] = 0;
  *(undefined1 *)(plVar1 + 0x43) = 1;
  plVar1[0x45] = 0;
  plVar1[0x44] = 0;
  *(undefined1 *)(plVar1 + 0x46) = param_5;
  puVar2 = (undefined8 *)0x58;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_DAT_110bf7fc8;
  puVar2[8] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[5] = 0;
  *(undefined8 *)((long)puVar2 + 0x4d) = 0;
  *(undefined8 *)((long)puVar2 + 0x45) = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  param_1[0x47] = (long)(puVar2 + 3);
  param_1[0x48] = (long)puVar2;
  FUN_10a5cf1fc(param_1 + 0x47);
  return param_1;
}



/* Entry: 10a66a924; end: 10a66a99b;  */

void FUN_10a66a924(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plStack_28;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110c04938;
  param_1[7] = (long)&PTR_DAT_110c04990;
  param_1[0xd] = (long)&PTR_DAT_110c049b0;
  param_1[0x16] = (long)&PTR_DAT_110c04a20;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[0x17] = (long)&PTR_DAT_110c04a50;
  func_0x00010a004e5c(param_1 + 0x47);
  func_0x00010a3f7034(param_1 + 0x44);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_DAT_110bcfec8;
  param_1[7] = (long)&PTR_DAT_110bcff20;
  param_1[0xd] = (long)&PTR_DAT_110bcff40;
  param_1[0x16] = (long)&PTR_DAT_110bcffb0;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[0x17] = (long)&PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = (long)&PTR_DAT_110bd14c8;
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
  plStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&plStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a66a99c; end: 10a66aa0f;  */

void FUN_10a66a99c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c047d8;
  param_1[2] = &PTR_DAT_110c04938;
  param_1[7] = &PTR_DAT_110c04990;
  param_1[0xd] = &PTR_DAT_110c049b0;
  param_1[0x16] = &PTR_DAT_110c04a20;
  param_1[0x49] = &PTR_DAT_110c04ab0;
  param_1[0x17] = &PTR_DAT_110c04a50;
  func_0x00010a004e5c(param_1 + 0x47);
  func_0x00010a3f7034(param_1 + 0x44);
  *param_1 = &PTR_FUN_110c067b8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x49] = &PTR_DAT_110c068e8;
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



/* Entry: 10a66aa10; end: 10a66aacb;  */

void FUN_10a66aa10(undefined8 param_1)

{
  FUN_10a66a924(param_1,&PTR_PTR_110c04ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66aacc; end: 10a66ac17;  */

void FUN_10a66aacc(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a66a924((long)param_1 + lVar1,&PTR_PTR_110c04ae8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a66ac18; end: 10a66ac1f;  */

undefined4 FUN_10a66ac18(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x178);
  if ((*(byte *)(lVar1 + 0x2a) >> 5 & 1) != 0) {
    func_0x00010a3e9278(lVar1);
  }
  return *(undefined4 *)(lVar1 + 0xf0);
}



/* Entry: 10a66ac20; end: 10a66ad03;  */

void FUN_10a66ac20(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (((0xb0 < *(int *)(*(long *)(param_1[0x2e] + 0xa20) + 0x18)) &&
      (*(char *)((long)param_1 + 0x20c) == '\x01')) &&
     (lVar2 = *(long *)(param_1[0x2d] + 0x188), lVar2 != 0)) {
    for (lVar3 = *(long *)(lVar2 + 0x158); lVar3 != lVar2 + 0x150; lVar3 = *(long *)(lVar3 + 8)) {
      if (*(long *)(lVar3 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0xbd1555114443a935);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x128))();
          (**(code **)(*param_1 + 0x130))(param_1,plVar1);
          break;
        }
      }
    }
  }
  if ((*(ushort *)(param_1 + 0x30) & 0x17) != 0) {
    return;
  }
  if ((param_1[0x2d] != 0) && ((*(ushort *)(param_1[0x2d] + 0x118) >> 9 & 1) != 0)) {
    if (((*(uint *)(param_1 + 0x3d) ^ 0xffffffff) & 2) != 0 ||
        (*(uint *)((long)param_1 + 0x1ec) & 2) != 2) {
      *(uint *)(param_1 + 0x3d) = *(uint *)(param_1 + 0x3d) | 2;
      *(uint *)((long)param_1 + 0x1ec) = *(uint *)((long)param_1 + 0x1ec) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_1[0x2e] + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a66ad04; end: 10a66ad53;  */

void FUN_10a66ad04(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + -0x68);
  if (((0xb0 < *(int *)(*(long *)(*(long *)(param_1 + 0x108) + 0xa20) + 0x18)) &&
      (*(char *)(param_1 + 0x1a4) == '\x01')) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x100) + 0x188), lVar3 != 0)) {
    for (lVar4 = *(long *)(lVar3 + 0x158); lVar4 != lVar3 + 0x150; lVar4 = *(long *)(lVar4 + 8)) {
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 0xb0);
        (**(code **)(*plVar1 + 0x18))(plVar1,0xbd1555114443a935);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x128))();
          (**(code **)(*plVar2 + 0x130))(plVar2,plVar1);
          break;
        }
      }
    }
  }
  if ((*(ushort *)(param_1 + 0x118) & 0x17) != 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x100) != 0) &&
     ((*(ushort *)(*(long *)(param_1 + 0x100) + 0x118) >> 9 & 1) != 0)) {
    if (((*(uint *)(param_1 + 0x180) ^ 0xffffffff) & 2) != 0 ||
        (*(uint *)(param_1 + 0x184) & 2) != 2) {
      *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) | 2;
      *(uint *)(param_1 + 0x184) = *(uint *)(param_1 + 0x184) | 2;
                    /* WARNING: Could not recover jumptable at 0x00010a3c7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0xd0))(plVar2,*(long *)(param_1 + 0x108) + 0x4f8);
      return;
    }
  }
  return;
}



/* Entry: 10a66ad54; end: 10a66ae07;  */

long FUN_10a66ad54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x220) == 0) {
    plVar4 = (long *)0x50;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_DAT_110bd3090;
    plVar4[4] = 0;
    plVar4[5] = 0;
    *(undefined2 *)(plVar4 + 6) = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar4[7] = 0;
    plStack_30 = plVar4 + 3;
    *plStack_30 = (long)&PTR_FUN_110c458a0;
    plStack_28 = plVar4;
    FUN_10a3cfaa4(param_1 + 0x220,&plStack_30);
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
  }
  return param_1 + 0x220;
}



/* Entry: 10a66ae08; end: 10a66aef7;  */

undefined4 FUN_10a66ae08(long param_1)

{
  return *(undefined4 *)(param_1 + 0x210);
}



/* Entry: 10a66aef8; end: 10a66af9b;  */

void FUN_10a66aef8(undefined8 param_1)

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
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_88 = (undefined *)0x0;
  uStack_80 = 0xffffffff00000001;
  uStack_78 = CONCAT44(uStack_78._4_4_,0xffffffff);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = 0x13c;
  uStack_48 = 0xffffffff;
  FUN_10a66af9c(param_1,&puStack_88);
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_88 = &DAT_10f66b30a;
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
  puStack_30 = &UNK_10f66a659;
  uStack_28 = 0;
  FUN_10a683d18();
  FUN_10a684064(param_1);
  return;
}



/* Entry: 10a66af9c; end: 10a66b073;  */

/* WARNING: Removing unreachable block (ram,0x00010a66b034) */

undefined1  [16] FUN_10a66af9c(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66b688,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a683c1c(param_1,&puStack_90,0x19);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a66b074; end: 10a66b10f;  */

void FUN_10a66b074(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1[0x4c] = &PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x4f) = 0x100;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  FUN_10a3c575c(param_1,&PTR_PTR_110c04e48,param_2,param_3);
  *param_1 = &PTR_FUN_110c04b80;
  param_1[2] = &PTR_DAT_110c04c90;
  param_1[7] = &PTR_DAT_110c04ce8;
  param_1[0xd] = &PTR_DAT_110c04d08;
  param_1[0x4c] = &PTR_DAT_110c04e08;
  param_1[0x16] = &PTR_DAT_110c04d78;
  param_1[0x17] = &PTR_DAT_110c04da8;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  uVar1 = NEON_fmov(0xbf800000,4);
  param_1[0x4a] = uVar1;
  *(undefined4 *)(param_1 + 0x4b) = 0xbf800000;
  return;
}



/* Entry: 10a66b110; end: 10a66b1fb;  */

void FUN_10a66b110(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c04b80;
  param_1[2] = &PTR_DAT_110c04c90;
  param_1[7] = &PTR_DAT_110c04ce8;
  param_1[0xd] = &PTR_DAT_110c04d08;
  param_1[0x4c] = &PTR_DAT_110c04e08;
  param_1[0x16] = &PTR_DAT_110c04d78;
  param_1[0x17] = &PTR_DAT_110c04da8;
  lVar4 = param_1[0x43];
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a02d8cc(param_1 + 0x48);
  plVar5 = (long *)param_1[0x47];
  param_1[0x47] = 0;
  param_1[0x46] = 0;
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
  func_0x00010a05248c(param_1 + 0x48);
  func_0x00010a216360(param_1 + 0x46);
  if (param_1[0x45] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a35e87c(param_1 + 0x3e);
  *param_1 = &PTR_FUN_110c06938;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4c] = &PTR_DAT_110c06a68;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0x15];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar4 = param_1[0x12];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0x13];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0x11];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0xf];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a66b1fc; end: 10a66b237;  */

void FUN_10a66b1fc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c04b80;
  param_1[2] = &PTR_DAT_110c04c90;
  param_1[7] = &PTR_DAT_110c04ce8;
  param_1[0xd] = &PTR_DAT_110c04d08;
  param_1[0x4c] = &PTR_DAT_110c04e08;
  param_1[0x16] = &PTR_DAT_110c04d78;
  param_1[0x17] = &PTR_DAT_110c04da8;
  lVar4 = param_1[0x43];
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a02d8cc(param_1 + 0x48);
  plVar5 = (long *)param_1[0x47];
  param_1[0x47] = 0;
  param_1[0x46] = 0;
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
  func_0x00010a05248c(param_1 + 0x48);
  func_0x00010a216360(param_1 + 0x46);
  if (param_1[0x45] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  func_0x00010a35e87c(param_1 + 0x3e);
  *param_1 = &PTR_FUN_110c06938;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x4c] = &PTR_DAT_110c06a68;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar4 = param_1[0x14];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0x15];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar4 = param_1[0x12];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0x13];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0x11];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    plVar5 = (long *)param_1[0xf];
    *plVar5 = lVar4;
    *(long **)(lVar4 + 8) = plVar5;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a66b238; end: 10a66b2c3;  */

void FUN_10a66b238(void)

{
  FUN_10a66b110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66b2c4; end: 10a66b3bb;  */

void FUN_10a66b2c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a66b110((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a66b3bc; end: 10a66b47b;  */

void FUN_10a66b3bc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if ((*(long *)(param_1 + 0x1f0) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x218), plVar4 != (long *)0x0)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x210);
      if (lVar6 != 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
        FUN_10a66b7f0();
        if (lVar5 != 0) {
          FUN_10abae0b8(lVar5 + 0x100,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48),
                        param_1 + 0x1f0);
        }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a66b47c; end: 10a66b4bb;  */

void FUN_10a66b47c(long param_1,long *param_2)

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
  puStack_30 = &UNK_10f651145;
  uStack_28 = 0x14;
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
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c04e60,&uStack_40,&puStack_30);
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



/* Entry: 10a66b4bc; end: 10a66b57b;  */

void FUN_10a66b4bc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  code **ppcVar4;
  char cVar5;
  bool bVar6;
  undefined ***pppuVar7;
  code **ppcVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 *extraout_x8;
  long lVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  pcStack_78 = FUN_10a684120;
  ppuStack_70 = &PTR_DAT_110c07b30;
  ppuVar10 = &PTR_DAT_110c04e60;
  ppcVar8 = &pcStack_78;
  uStack_68 = param_1;
  FUN_10a339634(param_2,&PTR_DAT_110c04e60,ppcVar8,0);
  pppuVar7 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(&ppuStack_70);
  __Unwind_Resume();
  if (ppcVar8 == (code **)0x0) {
    pppuVar13 = pppuVar7;
    ppuVar12 = ppuVar10;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_c8 = pppuVar7[9];
    ppuStack_d0 = pppuVar7[8];
    ppcVar8 = ppcVar8 + 0x11;
    func_0x00010a35bf90(ppcVar8,&ppuStack_d0);
    ppcVar4 = (code **)((ulong)&ppuStack_d0 | 8);
    pppuVar13 = &ppuStack_d0;
    if (ppcVar8 != (code **)0x0) {
      ppcVar4 = ppcVar8 + 5;
      pppuVar13 = (undefined ***)(ppcVar8 + 4);
    }
    ppuVar12 = (undefined **)*ppcVar4;
    pppuVar13 = (undefined ***)*pppuVar13;
  }
  ppuVar14 = pppuVar7[0x2e];
  FUN_10a3dd220(ppuVar14);
  FUN_10a578ce4(ppuVar14,pppuVar13,ppuVar12);
  plVar9 = (long *)0x28;
  __Znwm();
  plVar15 = plVar9 + 1;
  *plVar15 = 0;
  *plVar9 = (long)&PTR_DAT_110c07b58;
  plVar9[2] = 0;
  plVar9[3] = (long)ppuVar14;
  plVar9[4] = (long)FUN_10a3df8cc;
  if (ppuVar14 != (undefined **)0x0) {
    if (ppuVar14[6] == (undefined *)0x0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar14[5] = (undefined *)ppuVar14;
      ppuVar14[6] = (undefined *)plVar9;
    }
    else {
      if (*(long *)(ppuVar14[6] + 8) != -1) goto LAB_10a66b6e0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = *plVar15 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar9 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      ppuVar14[5] = (undefined *)ppuVar14;
      ppuVar14[6] = (undefined *)plVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar11 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
LAB_10a66b6e0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (ppuVar14 + 0x2a,pppuVar7 + 0x2a);
  uVar2 = (*(ushort *)(pppuVar7 + 0x30) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(ppuVar14 + 0x30) & 0xfffc;
  *(ushort *)(ppuVar14 + 0x30) = uVar3 | *(ushort *)(ppuVar14 + 0x30) & 1 | uVar2;
  *(ushort *)(ppuVar14 + 0x30) = uVar3 | uVar2 | *(ushort *)(pppuVar7 + 0x30) & 1;
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = *plVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  ppuStack_d0 = ppuVar14;
  ppuStack_c8 = (undefined **)plVar9;
  FUN_10a3c7ce8(ppuVar10,&ppuStack_d0);
  ppuVar10 = ppuStack_c8;
  if (ppuStack_c8 != (undefined **)0x0) {
    plVar15 = (long *)(ppuStack_c8 + 1);
    do {
      lVar11 = *plVar15;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *plVar15 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)((long)*ppuStack_c8 + 0x10))(ppuStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar10);
    }
  }
  func_0x00010a66b2f4(ppuVar14,pppuVar7 + 0x3e);
  *extraout_x8 = ppuVar14;
  extraout_x8[1] = plVar9;
  return;
}



/* Entry: 10a66b57c; end: 10a66b7ef;  */

void FUN_10a66b57c(long *param_1,long param_2,undefined8 param_3,long param_4)

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
  FUN_10a578ce4(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_DAT_110c07b58;
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
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a66b6e0;
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
LAB_10a66b6e0:
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
  func_0x00010a66b2f4(lVar10,param_2 + 0x1f0);
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a66b7f0; end: 10a66b847;  */

void FUN_10a66b7f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *****pppppuVar5;
  char cVar6;
  bool bVar7;
  undefined8 ****ppppuVar8;
  code *pcVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  long lStack_90;
  long *plStack_88;
  undefined8 ****ppppuStack_80;
  long *plStack_78;
  byte bStack_69;
  undefined1 uStack_61;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar11 = &puStack_20;
  puStack_20 = &UNK_10f653c20;
  uStack_18 = 0x21;
  if (param_1 == (long *)0x0) {
    FUN_10a0edfc4();
    lVar10 = *(long *)((long)ppuVar11 + 0x168);
    uVar15 = *(undefined8 *)(lVar10 + 0x120);
    uVar4 = *(ulong *)((long)ppuVar11 + 0x158);
    if (-1 < (char)*(byte *)((long)ppuVar11 + 0x167)) {
      uVar4 = (ulong)*(byte *)((long)ppuVar11 + 0x167);
    }
    puVar14 = (undefined1 *)(uVar4 + 0x15);
    FUN_10a003c90(&ppppuStack_80,puVar14,&lStack_90);
    pppppuVar5 = (undefined8 *****)ppppuStack_80;
    if (-1 < (char)bStack_69) {
      pppppuVar5 = &ppppuStack_80;
    }
    if (uVar4 != 0) {
      puVar14 = *(undefined1 **)((long)ppuVar11 + 0x150);
      if (-1 < *(char *)((long)ppuVar11 + 0x167)) {
        puVar14 = (undefined1 *)((long)ppuVar11 + 0x150);
      }
      _memmove(pppppuVar5,puVar14,uVar4);
    }
    puVar3 = (undefined8 *)((long)pppppuVar5 + uVar4);
    puVar3[1] = 0x4f6172656d614372;
    *puVar3 = 0x657a696c65786f56;
    *(undefined8 *)((long)puVar3 + 0xd) = 0x7463656a624f6172;
    *(undefined1 *)((long)puVar3 + 0x15) = 0;
    uVar12 = uVar15;
    FUN_10a3dd220(uVar15);
    func_0x00010a0fda30();
    FUN_10a3dd268(uVar15,uVar12,puVar14,&ppppuStack_80);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(ppppuStack_80);
    }
    FUN_10a0c3500(uVar15,lVar10);
    func_0x00010a0d77bc(&ppppuStack_80,uVar15);
    plVar16 = plStack_78;
    ppppuVar8 = ppppuStack_80;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lVar10 = *(long *)((long)ppuVar11 + 0x228);
    *(long **)((long)ppuVar11 + 0x228) = plStack_78;
    *(undefined8 *****)((long)ppuVar11 + 0x220) = ppppuVar8;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar16 = plStack_78;
    }
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
      do {
        lVar10 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
      }
    }
    func_0x000107c2b054(&ppppuStack_80,&UNK_10f66a659);
    FUN_10a0d6648(&lStack_90,uVar15,&ppppuStack_80);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(ppppuStack_80);
    }
    plVar16 = plStack_88;
    lVar10 = lStack_90;
    if (plStack_88 != (long *)0x0) {
      plVar1 = plStack_88 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    *(long *)((long)ppuVar11 + 0x210) = lStack_90;
    lVar13 = *(long *)((long)ppuVar11 + 0x218);
    *(long **)((long)ppuVar11 + 0x218) = plVar16;
    if (lVar13 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      lVar10 = lStack_90;
    }
    uVar4 = *(ulong *)((long)ppuVar11 + 0x158);
    if (-1 < (char)*(byte *)((long)ppuVar11 + 0x167)) {
      uVar4 = (ulong)*(byte *)((long)ppuVar11 + 0x167);
    }
    FUN_10a003c90(&ppppuStack_80,uVar4 + 0xf,&uStack_a0);
    pppppuVar5 = (undefined8 *****)ppppuStack_80;
    if (-1 < (char)bStack_69) {
      pppppuVar5 = &ppppuStack_80;
    }
    if (uVar4 != 0) {
      puVar14 = *(undefined1 **)((long)ppuVar11 + 0x150);
      if (-1 < *(char *)((long)ppuVar11 + 0x167)) {
        puVar14 = (undefined1 *)((long)ppuVar11 + 0x150);
      }
      _memmove(pppppuVar5,puVar14,uVar4);
    }
    puVar3 = (undefined8 *)((long)pppppuVar5 + uVar4);
    *puVar3 = 0x657a696c65786f56;
    *(undefined8 *)((long)puVar3 + 7) = 0x6172656d61437265;
    *(undefined1 *)((long)puVar3 + 0xf) = 0;
    pppppuVar5 = (undefined8 *****)ppppuStack_80;
    if (-1 < (char)bStack_69) {
      pppppuVar5 = &ppppuStack_80;
      plStack_78 = (long *)(ulong)bStack_69;
    }
    func_0x000107c2c4d8(lVar10 + 0x150,pppppuVar5,plStack_78);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(ppppuStack_80);
    }
    *(ushort *)(lStack_90 + 0x180) = *(ushort *)(lStack_90 + 0x180) | 0x100;
    *(undefined1 *)(lStack_90 + 0x288) = 1;
    *(undefined1 *)(lStack_90 + 0x2f0) = 1;
    *(undefined4 *)(lStack_90 + 0x2a0) = 0;
    if (*(float *)(lStack_90 + 0x26c) != 1.0) {
      *(undefined1 *)(lStack_90 + 0x2f0) = 1;
    }
    *(undefined4 *)(lStack_90 + 0x26c) = 0x3f800000;
    if (*(float *)(lStack_90 + 0x260) != 1e-05) {
      *(undefined1 *)(lStack_90 + 0x2f0) = 1;
    }
    *(undefined4 *)(lStack_90 + 0x260) = 0x3727c5ac;
    if (*(float *)(lStack_90 + 0x264) != 1e+07) {
      *(undefined1 *)(lStack_90 + 0x2f0) = 1;
    }
    *(undefined4 *)(lStack_90 + 0x264) = 0x4b189680;
    if (*(float *)(lStack_90 + 0x270) != 1e+07) {
      *(undefined1 *)(lStack_90 + 0x2f0) = 1;
    }
    *(undefined4 *)(lStack_90 + 0x270) = 0x4b189680;
    ppppuStack_80 = (undefined8 ****)&UNK_10f63946e;
    plStack_78 = (long *)0x4f;
    if (*(long **)(lStack_90 + 0x230) == *(long **)(lStack_90 + 0x238)) {
      FUN_10a0edfc4(&ppppuStack_80);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a66bd38);
      (*pcVar9)();
    }
    lVar10 = **(long **)(lStack_90 + 0x230);
    *(undefined8 *)(lVar10 + 0x6c) = 0x3f80000000000000;
    *(undefined8 *)(lVar10 + 100) = 0;
    *(undefined4 *)(lStack_90 + 500) = 0x80000000;
    *(undefined1 *)(lStack_90 + 8) = 1;
    uVar15 = *(undefined8 *)((long)ppuVar11 + 0x200);
    *(undefined8 *)(lStack_90 + 0x298) = *(undefined8 *)((long)ppuVar11 + 0x208);
    *(undefined8 *)(lStack_90 + 0x290) = uVar15;
    *(undefined1 *)(lStack_90 + 0x2b8) = 1;
    uStack_91 = 1;
    uStack_a0 = *(undefined8 *)((long)ppuVar11 + 0x170);
    uStack_a4 = 0;
    FUN_10a2e8ff8(&ppppuStack_80,&uStack_61,&uStack_a0,&uStack_a4,&uStack_91);
    plVar16 = (long *)((long)ppuVar11 + 0x230);
    FUN_10a2c7d5c(plVar16,&ppppuStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    lVar10 = *plVar16;
    *(byte *)(lVar10 + 0x2b8) = *(byte *)(lVar10 + 0x2b8) & 0xfe;
    *(undefined1 *)(lVar10 + 0x2fc) = 1;
    *(undefined1 *)(lVar10 + 0x304) = 0;
    *(undefined1 *)(lVar10 + 8) = 1;
    *(undefined1 *)(lVar10 + 800) = 2;
    *(undefined8 *)(lVar10 + 0x32c) = 0x3f800000;
    *(undefined8 *)(lVar10 + 0x324) = 0x3f8000003f800000;
    lVar10 = *plVar16;
    *(undefined1 *)(lVar10 + 0x334) = 1;
    *(undefined4 *)(lVar10 + 0x338) = 0x3f800000;
    ppppuStack_80 = (undefined8 ****)0x1000000010;
    FUN_10a1ddfe4(lVar10,&ppppuStack_80);
    FUN_10a2c7dc0(&ppppuStack_80,*(undefined8 *)((long)ppuVar11 + 0x170),plVar16);
    plVar16 = (long *)((long)ppuVar11 + 0x240);
    FUN_10a015bec(plVar16,&ppppuStack_80);
    plVar1 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
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
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    *(undefined1 *)(*plVar16 + 8) = 1;
    FUN_10a2c7f18(lStack_90,plVar16);
    if (plStack_88 != (long *)0x0) {
      plVar16 = plStack_88 + 1;
      do {
        lVar10 = *plVar16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *plVar16 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
      }
    }
    return;
  }
  FUN_10a244d68();
  if (param_1 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0xd0))();
  if ((ulong)(param_1[2] - param_1[1] >> 3) < 7) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a32eaa8);
    (*pcVar9)();
  }
  lVar10 = *(long *)(param_1[1] + 0x30);
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____dynamic_cast_110346c00)(lVar10,&PTR_DAT_110baa1c8,&PTR_DAT_110c54588,0);
  return;
}



/* Entry: 10a66b848; end: 10a66bd93;  */

void FUN_10a66b848(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *****pppppuVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 uStack_71;
  long lStack_70;
  long *plStack_68;
  undefined8 ****ppppuStack_60;
  long *plStack_58;
  byte bStack_49;
  undefined1 uStack_41;
  
  lVar13 = *(long *)(param_1 + 0x168);
  uVar12 = *(undefined8 *)(lVar13 + 0x120);
  uVar5 = *(ulong *)(param_1 + 0x158);
  if (-1 < (char)*(byte *)(param_1 + 0x167)) {
    uVar5 = (ulong)*(byte *)(param_1 + 0x167);
  }
  lVar11 = uVar5 + 0x15;
  FUN_10a003c90(&ppppuStack_60,lVar11,&lStack_70);
  pppppuVar6 = (undefined8 *****)ppppuStack_60;
  if (-1 < (char)bStack_49) {
    pppppuVar6 = &ppppuStack_60;
  }
  if (uVar5 != 0) {
    lVar11 = *(long *)(param_1 + 0x150);
    if (-1 < *(char *)(param_1 + 0x167)) {
      lVar11 = param_1 + 0x150;
    }
    _memmove(pppppuVar6,lVar11,uVar5);
  }
  puVar4 = (undefined8 *)((long)pppppuVar6 + uVar5);
  puVar4[1] = 0x4f6172656d614372;
  *puVar4 = 0x657a696c65786f56;
  *(undefined8 *)((long)puVar4 + 0xd) = 0x7463656a624f6172;
  *(undefined1 *)((long)puVar4 + 0x15) = 0;
  uVar10 = uVar12;
  FUN_10a3dd220(uVar12);
  func_0x00010a0fda30();
  FUN_10a3dd268(uVar12,uVar10,lVar11,&ppppuStack_60);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppuStack_60);
  }
  FUN_10a0c3500(uVar12,lVar13);
  func_0x00010a0d77bc(&ppppuStack_60,uVar12);
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  lVar13 = *(long *)(param_1 + 0x228);
  *(long **)(param_1 + 0x228) = plStack_58;
  *(undefined8 *****)(param_1 + 0x220) = ppppuStack_60;
  if (lVar13 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar13 = *plVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  func_0x000107c2b054(&ppppuStack_60,&UNK_10f66a659);
  FUN_10a0d6648(&lStack_70,uVar12,&ppppuStack_60);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppuStack_60);
  }
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 2;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = *plVar2 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *(long *)(param_1 + 0x210) = lStack_70;
  lVar13 = *(long *)(param_1 + 0x218);
  *(long **)(param_1 + 0x218) = plStack_68;
  if (lVar13 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar13 = lStack_70;
  uVar5 = *(ulong *)(param_1 + 0x158);
  if (-1 < (char)*(byte *)(param_1 + 0x167)) {
    uVar5 = (ulong)*(byte *)(param_1 + 0x167);
  }
  FUN_10a003c90(&ppppuStack_60,uVar5 + 0xf,&uStack_80);
  pppppuVar6 = (undefined8 *****)ppppuStack_60;
  if (-1 < (char)bStack_49) {
    pppppuVar6 = &ppppuStack_60;
  }
  if (uVar5 != 0) {
    lVar11 = *(long *)(param_1 + 0x150);
    if (-1 < *(char *)(param_1 + 0x167)) {
      lVar11 = param_1 + 0x150;
    }
    _memmove(pppppuVar6,lVar11,uVar5);
  }
  puVar4 = (undefined8 *)((long)pppppuVar6 + uVar5);
  *puVar4 = 0x657a696c65786f56;
  *(undefined8 *)((long)puVar4 + 7) = 0x6172656d61437265;
  *(undefined1 *)((long)puVar4 + 0xf) = 0;
  pppppuVar6 = (undefined8 *****)ppppuStack_60;
  if (-1 < (char)bStack_49) {
    pppppuVar6 = &ppppuStack_60;
    plStack_58 = (long *)(ulong)bStack_49;
  }
  func_0x000107c2c4d8(lVar13 + 0x150,pppppuVar6,plStack_58);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(ppppuStack_60);
  }
  *(ushort *)(lStack_70 + 0x180) = *(ushort *)(lStack_70 + 0x180) | 0x100;
  *(undefined1 *)(lStack_70 + 0x288) = 1;
  *(undefined1 *)(lStack_70 + 0x2f0) = 1;
  *(undefined4 *)(lStack_70 + 0x2a0) = 0;
  if (*(float *)(lStack_70 + 0x26c) != 1.0) {
    *(undefined1 *)(lStack_70 + 0x2f0) = 1;
  }
  *(undefined4 *)(lStack_70 + 0x26c) = 0x3f800000;
  if (*(float *)(lStack_70 + 0x260) != 1e-05) {
    *(undefined1 *)(lStack_70 + 0x2f0) = 1;
  }
  *(undefined4 *)(lStack_70 + 0x260) = 0x3727c5ac;
  if (*(float *)(lStack_70 + 0x264) != 1e+07) {
    *(undefined1 *)(lStack_70 + 0x2f0) = 1;
  }
  *(undefined4 *)(lStack_70 + 0x264) = 0x4b189680;
  if (*(float *)(lStack_70 + 0x270) != 1e+07) {
    *(undefined1 *)(lStack_70 + 0x2f0) = 1;
  }
  *(undefined4 *)(lStack_70 + 0x270) = 0x4b189680;
  ppppuStack_60 = (undefined8 ****)&UNK_10f63946e;
  plStack_58 = (long *)0x4f;
  if (*(long **)(lStack_70 + 0x230) == *(long **)(lStack_70 + 0x238)) {
    FUN_10a0edfc4(&ppppuStack_60);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a66bd38);
    (*pcVar9)();
  }
  lVar13 = **(long **)(lStack_70 + 0x230);
  *(undefined8 *)(lVar13 + 0x6c) = 0x3f80000000000000;
  *(undefined8 *)(lVar13 + 100) = 0;
  *(undefined4 *)(lStack_70 + 500) = 0x80000000;
  *(undefined1 *)(lStack_70 + 8) = 1;
  uVar12 = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(lStack_70 + 0x298) = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(lStack_70 + 0x290) = uVar12;
  *(undefined1 *)(lStack_70 + 0x2b8) = 1;
  uStack_71 = 1;
  uStack_80 = *(undefined8 *)(param_1 + 0x170);
  uStack_84 = 0;
  FUN_10a2e8ff8(&ppppuStack_60,&uStack_41,&uStack_80,&uStack_84,&uStack_71);
  plVar2 = (long *)(param_1 + 0x230);
  FUN_10a2c7d5c(plVar2,&ppppuStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar3 = plStack_58 + 1;
    do {
      lVar13 = *plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar13 = *plVar2;
  *(byte *)(lVar13 + 0x2b8) = *(byte *)(lVar13 + 0x2b8) & 0xfe;
  *(undefined1 *)(lVar13 + 0x2fc) = 1;
  *(undefined1 *)(lVar13 + 0x304) = 0;
  *(undefined1 *)(lVar13 + 8) = 1;
  *(undefined1 *)(lVar13 + 800) = 2;
  *(undefined8 *)(lVar13 + 0x32c) = 0x3f800000;
  *(undefined8 *)(lVar13 + 0x324) = 0x3f8000003f800000;
  lVar13 = *plVar2;
  *(undefined1 *)(lVar13 + 0x334) = 1;
  *(undefined4 *)(lVar13 + 0x338) = 0x3f800000;
  ppppuStack_60 = (undefined8 ****)0x1000000010;
  FUN_10a1ddfe4(lVar13,&ppppuStack_60);
  FUN_10a2c7dc0(&ppppuStack_60,*(undefined8 *)(param_1 + 0x170),plVar2);
  plVar2 = (long *)(param_1 + 0x240);
  FUN_10a015bec(plVar2,&ppppuStack_60);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar3 = plStack_58 + 1;
    do {
      lVar13 = *plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *plVar3 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *(undefined1 *)(*plVar2 + 8) = 1;
  FUN_10a2c7f18(lStack_70,plVar2);
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar13 = *plVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar8) {
        *plVar2 = lVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a66bd94; end: 10a66bddf;  */

void FUN_10a66bd94(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  FUN_10a66b848();
  if ((*(long *)(param_1 + 0x1f0) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x218), plVar4 != (long *)0x0)) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      lVar6 = *(long *)(param_1 + 0x210);
      if (lVar6 != 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
        FUN_10a66b7f0();
        if (lVar5 != 0) {
          FUN_10abae0b8(lVar5 + 0x100,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48),
                        param_1 + 0x1f0);
        }
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a66bde0; end: 10a66bf53;  */

void FUN_10a66bde0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plStack_48 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x218);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_48 = plVar4;
    if (plVar4 != (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x210);
      if (lVar7 != 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x170) + 0x100) + 0x260);
        FUN_10a66b7f0();
        if (lVar5 != 0) {
          plStack_38 = *(long **)(lVar7 + 0x48);
          lStack_40 = *(long *)(lVar7 + 0x40);
          FUN_10abdc650(lVar5 + 0x100,&lStack_40);
        }
      }
    }
  }
  plVar4 = (long *)(param_1 + 0x220);
  plVar6 = *(long **)(param_1 + 0x228);
  if (plVar6 == (long *)0x0) {
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_40 = *plVar4;
      if ((lStack_40 != 0) && ((*(ushort *)(lStack_40 + 0x118) >> 3 & 1) == 0)) {
        FUN_10a3e00f4();
      }
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    lVar7 = *(long *)(param_1 + 0x228);
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  lVar7 = *(long *)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  if (lVar7 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_48);
      return;
    }
  }
  return;
}



/* Entry: 10a66bf54; end: 10a66bfdb;  */

void FUN_10a66bf54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  plStack_48 = (long *)0x0;
  plVar4 = *(long **)(param_1 + 0x1b0);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_48 = plVar4;
    if (plVar4 != (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x1a8);
      if (lVar7 != 0) {
        lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x108) + 0x100) + 0x260);
        FUN_10a66b7f0();
        if (lVar5 != 0) {
          plStack_38 = *(long **)(lVar7 + 0x48);
          lStack_40 = *(long *)(lVar7 + 0x40);
          FUN_10abdc650(lVar5 + 0x100,&lStack_40);
        }
      }
    }
  }
  plVar4 = (long *)(param_1 + 0x1b8);
  plVar6 = *(long **)(param_1 + 0x1c0);
  if (plVar6 == (long *)0x0) {
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar6;
    if (plVar6 != (long *)0x0) {
      lStack_40 = *plVar4;
      if ((lStack_40 != 0) && ((*(ushort *)(lStack_40 + 0x118) >> 3 & 1) == 0)) {
        FUN_10a3e00f4();
      }
      plVar1 = plVar6 + 1;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    lVar7 = *(long *)(param_1 + 0x1c0);
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    if (lVar7 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  lVar7 = *(long *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (lVar7 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (plStack_48 != (long *)0x0) {
    plVar4 = plStack_48 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_48);
      return;
    }
  }
  return;
}



/* Entry: 10a66bfdc; end: 10a66bfef;  */

void FUN_10a66bfdc(void)

{
  func_0x00010a66dd8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66bff0; end: 10a66bfff;  */

long FUN_10a66bff0(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a66c000; end: 10a66c0a3;  */

void FUN_10a66c000(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  code **ppcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long *plStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  byte bStack_40;
  long lStack_38;
  
  FUN_10a3c73cc(param_1,2);
  if (*(char *)(param_1 + 0x4f8) != '\x01') {
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3c7c48(*(undefined8 *)(param_1 + 0x568));
  plVar4 = (long *)(param_1 + 0x4f0);
  FUN_10a9dc58c();
  plVar5 = (long *)plVar4[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  lVar8 = *plVar4;
  plVar4 = plVar5 + 1;
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  pcStack_80 = FUN_10aa074fc;
  ppuStack_78 = &PTR_DAT_110c37ec8;
  bStack_40 = 1;
  plStack_70 = (long *)(param_1 + 0x4f0);
  FUN_10a626530(auStack_90,*(undefined8 *)(lVar8 + 0x228),&pcStack_80);
  FUN_10a76c5c8(param_1 + 0x570,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if ((ulong)bStack_40 < 4) {
    ppcVar6 = &pcStack_80;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(ppcVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((ulong)bStack_40 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(&pcStack_80);
      __Unwind_Resume(ppcVar6);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9dc2b0);
  (*pcVar3)();
}



/* Entry: 10a66c0a4; end: 10a66c0bb;  */

undefined8 FUN_10a66c0a4(void)

{
  return 1;
}



/* Entry: 10a66c0bc; end: 10a66c0d3;  */

void FUN_10a66c0bc(long param_1)

{
  func_0x00010a66dd8c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c0d4; end: 10a66c0db;  */

void FUN_10a66c0d4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a677dd4(param_1 + 0xed);
  func_0x00010a1f7460(param_1 + 0xea);
  FUN_10a677a9c(param_1 + 0xe5);
  FUN_10a677940(param_1 + 0xe3);
  FUN_10a6777e0(param_1 + 0xe1);
  FUN_10a6776cc(param_1 + 0xdf);
  FUN_10a677d6c(param_1 + 0xd3);
  if (*(char *)((long)param_1 + 0x68f) < '\0') {
    __ZdlPv(param_1[0xcf]);
  }
  FUN_10a677c48(param_1 + 0xca);
  if (*(char *)((long)param_1 + 0x64f) < '\0') {
    __ZdlPv(param_1[199]);
  }
  FUN_10a66d0e4(param_1 + 0xb8);
  if (param_1[0xb5] != 0) {
    param_1[0xb6] = param_1[0xb5];
    __ZdlPv();
  }
  func_0x000109240b0c(param_1 + 0xb0);
  param_1[0xa9] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xac] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xac] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xaa);
  func_0x00010a650094(param_1 + 0x97);
  param_1[-7] = &PTR_FUN_110c05328;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0xef] = &PTR_DAT_110c05588;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110c034f8);
  return;
}



/* Entry: 10a66c0dc; end: 10a66c0f3;  */

void FUN_10a66c0dc(long param_1)

{
  func_0x00010a66dd8c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c0f4; end: 10a66c0fb;  */

void FUN_10a66c0f4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a677dd4(param_1 + 0xe7);
  func_0x00010a1f7460(param_1 + 0xe4);
  FUN_10a677a9c(param_1 + 0xdf);
  FUN_10a677940(param_1 + 0xdd);
  FUN_10a6777e0(param_1 + 0xdb);
  FUN_10a6776cc(param_1 + 0xd9);
  FUN_10a677d6c(param_1 + 0xcd);
  if (*(char *)((long)param_1 + 0x65f) < '\0') {
    __ZdlPv(param_1[0xc9]);
  }
  FUN_10a677c48(param_1 + 0xc4);
  if (*(char *)((long)param_1 + 0x61f) < '\0') {
    __ZdlPv(param_1[0xc1]);
  }
  FUN_10a66d0e4(param_1 + 0xb2);
  if (param_1[0xaf] != 0) {
    param_1[0xb0] = param_1[0xaf];
    __ZdlPv();
  }
  func_0x000109240b0c(param_1 + 0xaa);
  param_1[0xa3] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xa6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xa6] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xa4);
  func_0x00010a650094(param_1 + 0x91);
  param_1[-0xd] = &PTR_FUN_110c05328;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0xe9] = &PTR_DAT_110c05588;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110c034f8);
  return;
}



/* Entry: 10a66c0fc; end: 10a66c113;  */

void FUN_10a66c0fc(long param_1)

{
  func_0x00010a66dd8c(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c114; end: 10a66c1bf;  */

void FUN_10a66c114(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  code **ppcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long *plStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  byte bStack_40;
  long lStack_38;
  
  FUN_10a3c73cc(param_1 + -0x68,2);
  if (*(char *)(param_1 + 0x490) != '\x01') {
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3c7c48(*(undefined8 *)(param_1 + 0x500));
  plVar4 = (long *)(param_1 + 0x488);
  FUN_10a9dc58c();
  plVar5 = (long *)plVar4[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  lVar8 = *plVar4;
  plVar4 = plVar5 + 1;
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  pcStack_80 = FUN_10aa074fc;
  ppuStack_78 = &PTR_DAT_110c37ec8;
  bStack_40 = 1;
  plStack_70 = (long *)(param_1 + 0x488);
  FUN_10a626530(auStack_90,*(undefined8 *)(lVar8 + 0x228),&pcStack_80);
  FUN_10a76c5c8(param_1 + 0x508,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if ((ulong)bStack_40 < 4) {
    ppcVar6 = &pcStack_80;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(ppcVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((ulong)bStack_40 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(&pcStack_80);
      __Unwind_Resume(ppcVar6);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9dc2b0);
  (*pcVar3)();
}



/* Entry: 10a66c1c0; end: 10a66c1c7;  */

void FUN_10a66c1c0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a677dd4(param_1 + 0xde);
  func_0x00010a1f7460(param_1 + 0xdb);
  FUN_10a677a9c(param_1 + 0xd6);
  FUN_10a677940(param_1 + 0xd4);
  FUN_10a6777e0(param_1 + 0xd2);
  FUN_10a6776cc(param_1 + 0xd0);
  FUN_10a677d6c(param_1 + 0xc4);
  if (*(char *)((long)param_1 + 0x617) < '\0') {
    __ZdlPv(param_1[0xc0]);
  }
  FUN_10a677c48(param_1 + 0xbb);
  if (*(char *)((long)param_1 + 0x5d7) < '\0') {
    __ZdlPv(param_1[0xb8]);
  }
  FUN_10a66d0e4(param_1 + 0xa9);
  if (param_1[0xa6] != 0) {
    param_1[0xa7] = param_1[0xa6];
    __ZdlPv();
  }
  func_0x000109240b0c(param_1 + 0xa1);
  param_1[0x9a] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0x9d] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9d] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9b);
  func_0x00010a650094(param_1 + 0x88);
  param_1[-0x16] = &PTR_FUN_110c05328;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0xe0] = &PTR_DAT_110c05588;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110c034f8);
  return;
}



/* Entry: 10a66c1c8; end: 10a66c1df;  */

void FUN_10a66c1c8(long param_1)

{
  func_0x00010a66dd8c(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c1e0; end: 10a66c1e7;  */

void FUN_10a66c1e0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a677dd4(param_1 + 0xdd);
  func_0x00010a1f7460(param_1 + 0xda);
  FUN_10a677a9c(param_1 + 0xd5);
  FUN_10a677940(param_1 + 0xd3);
  FUN_10a6777e0(param_1 + 0xd1);
  FUN_10a6776cc(param_1 + 0xcf);
  FUN_10a677d6c(param_1 + 0xc3);
  if (*(char *)((long)param_1 + 0x60f) < '\0') {
    __ZdlPv(param_1[0xbf]);
  }
  FUN_10a677c48(param_1 + 0xba);
  if (*(char *)((long)param_1 + 0x5cf) < '\0') {
    __ZdlPv(param_1[0xb7]);
  }
  FUN_10a66d0e4(param_1 + 0xa8);
  if (param_1[0xa5] != 0) {
    param_1[0xa6] = param_1[0xa5];
    __ZdlPv();
  }
  func_0x000109240b0c(param_1 + 0xa0);
  param_1[0x99] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0x9c] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9c] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a650094(param_1 + 0x87);
  param_1[-0x17] = &PTR_FUN_110c05328;
  param_1[-0x15] = &PTR_DAT_110bd5880;
  param_1[-0x10] = &PTR_DAT_110bd58d8;
  param_1[-10] = &PTR_DAT_110bd58f8;
  param_1[-1] = &PTR_DAT_110bd5968;
  param_1[0xdf] = &PTR_DAT_110c05588;
  *param_1 = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x85);
  func_0x00010a004e5c(param_1 + 0x83);
  param_1[0x5b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x67);
  puStack_28 = param_1 + 0x61;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x55);
  FUN_10a44a358(param_1 + 0x4e);
  plVar2 = (long *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x49,0);
  FUN_10a4477fc(param_1 + 0x47);
  func_0x00010a4477a4(param_1 + 0x45);
  func_0x00010a4476d0(param_1 + 0x40);
  FUN_10a44763c(param_1 + 0x3d);
  if (param_1[0x3c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x38] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x17,&PTR_PTR_110c034f8);
  return;
}



/* Entry: 10a66c1e8; end: 10a66c1ff;  */

void FUN_10a66c1e8(long param_1)

{
  func_0x00010a66dd8c(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c200; end: 10a66c413;  */

undefined8 * FUN_10a66c200(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcStack_5d0;
  undefined **ppuStack_5c8;
  long lStack_5c0;
  byte bStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined2 uStack_568;
  undefined1 uStack_566;
  undefined1 uStack_520;
  undefined1 uStack_4d8;
  undefined1 uStack_490;
  undefined1 uStack_448;
  undefined1 uStack_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3b0;
  undefined1 uStack_3a8;
  undefined1 uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_310;
  undefined1 uStack_308;
  undefined1 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_520 = 0;
  uStack_4d8 = 0;
  uStack_490 = 0;
  uStack_448 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_40 = 0;
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = NEON_fmov(0xbf800000,4);
  uStack_568 = 0;
  uStack_566 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&uStack_588,*(long *)(param_1 + 0x78) + 0x670);
  uStack_566 = *(undefined1 *)(param_1 + 9);
  pcStack_5d0 = FUN_10a684218;
  ppuStack_5c8 = &PTR_FUN_110c07b98;
  bStack_590 = 1;
  lStack_5c0 = param_1;
  FUN_10a249478(&uStack_588,&pcStack_5d0);
  if ((ulong)bStack_590 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_590])(&pcStack_5d0);
    pcStack_5d0 = (code *)0x10a6846ac;
    ppuStack_5c8 = &PTR_DAT_110c07bb8;
    bStack_590 = 1;
    lStack_5c0 = param_1;
    func_0x00010a2495f4(&uStack_588,&pcStack_5d0);
    if ((ulong)bStack_590 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_590])(&pcStack_5d0);
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x170) + 0xa60);
      FUN_10a249f08(uVar2,&uStack_588,param_1 + 0x30);
      if ((int)uVar2 != 0) {
        FUN_10a07e58c(*(undefined8 *)(param_1 + 0x48));
      }
      puVar3 = &uStack_588;
      FUN_10a26a458();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return puVar3;
      }
      ___stack_chk_fail();
      if ((ulong)bStack_590 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_590])(&pcStack_5d0);
        FUN_10a26a458(&uStack_588);
        __Unwind_Resume();
        return *(undefined8 **)(puVar3[0xf] + 0x168);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a66c3fc);
  (*pcVar1)();
}



/* Entry: 10a66c414; end: 10a66c427;  */

undefined8 FUN_10a66c414(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x168);
}



/* Entry: 10a66c428; end: 10a66c43f;  */

void FUN_10a66c428(long param_1)

{
  func_0x00010a66dd8c(param_1 + -0x580);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c440; end: 10a66c44f;  */

void FUN_10a66c440(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_10a677dd4(puVar1 + 0xf4);
  func_0x00010a1f7460(puVar1 + 0xf1);
  FUN_10a677a9c(puVar1 + 0xec);
  FUN_10a677940(puVar1 + 0xea);
  FUN_10a6777e0(puVar1 + 0xe8);
  FUN_10a6776cc(puVar1 + 0xe6);
  FUN_10a677d6c(puVar1 + 0xda);
  if (*(char *)((long)puVar1 + 0x6c7) < '\0') {
    __ZdlPv(puVar1[0xd6]);
  }
  FUN_10a677c48(puVar1 + 0xd1);
  if (*(char *)((long)puVar1 + 0x687) < '\0') {
    __ZdlPv(puVar1[0xce]);
  }
  FUN_10a66d0e4(puVar1 + 0xbf);
  if (puVar1[0xbc] != 0) {
    puVar1[0xbd] = puVar1[0xbc];
    __ZdlPv();
  }
  func_0x000109240b0c(puVar1 + 0xb7);
  puVar1[0xb0] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)puVar1[0xb3] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[0xb3] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0xb1);
  func_0x00010a650094(puVar1 + 0x9e);
  *puVar1 = &PTR_FUN_110c05328;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0xf6] = &PTR_DAT_110c05588;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110c034f8);
  return;
}



/* Entry: 10a66c450; end: 10a66c47f;  */

void FUN_10a66c450(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a66dd8c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a66c480; end: 10a66c483;  */

void FUN_10a66c480(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a66d0e4(param_1 + 0xd0);
  func_0x000109240b0c(param_1 + 0xcb);
  FUN_10a67e590(param_1 + 199);
  func_0x00010a1f7460(param_1 + 0xc4);
  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
    __ZdlPv(param_1[0xbc]);
  }
  FUN_10a67e46c(param_1 + 0xb7);
  if (*(char *)((long)param_1 + 0x5b7) < '\0') {
    __ZdlPv(param_1[0xb4]);
  }
  param_1[0xb0] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xb3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb3] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xb1);
  func_0x00010a65e650(param_1 + 0x9e);
  *param_1 = &PTR_FUN_110c05c48;
  param_1[2] = &PTR_DAT_110bd5880;
  param_1[7] = &PTR_DAT_110bd58d8;
  param_1[0xd] = &PTR_DAT_110bd58f8;
  param_1[0x16] = &PTR_DAT_110bd5968;
  param_1[0xdf] = &PTR_DAT_110c05ea8;
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
  lVar1 = param_1[0x71];
  param_1[0x71] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6c);
  FUN_10a44a358(param_1 + 0x65);
  plVar2 = (long *)param_1[0x62];
  param_1[0x62] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
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
  FUN_10a66a924(param_1,&PTR_PTR_110c03ca8);
  return;
}



/* Entry: 10a66c484; end: 10a66c497;  */

void FUN_10a66c484(void)

{
  func_0x00010a66de5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c498; end: 10a66c49f;  */

long FUN_10a66c498(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a66c4a0; end: 10a66c543;  */

void FUN_10a66c4a0(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  code **ppcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long *plStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  byte bStack_40;
  long lStack_38;
  
  FUN_10a3c73cc(param_1,2);
  if (*(char *)(param_1 + 0x4f8) != '\x01') {
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3c7c48(*(undefined8 *)(param_1 + 0x568));
  plVar4 = (long *)(param_1 + 0x4f0);
  FUN_10a9dc58c();
  plVar5 = (long *)plVar4[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  lVar8 = *plVar4;
  plVar4 = plVar5 + 1;
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  pcStack_80 = FUN_10aa074fc;
  ppuStack_78 = &PTR_DAT_110c37ec8;
  bStack_40 = 1;
  plStack_70 = (long *)(param_1 + 0x4f0);
  FUN_10a626530(auStack_90,*(undefined8 *)(lVar8 + 0x228),&pcStack_80);
  FUN_10a76c5c8(param_1 + 0x570,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if ((ulong)bStack_40 < 4) {
    ppcVar6 = &pcStack_80;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(ppcVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((ulong)bStack_40 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(&pcStack_80);
      __Unwind_Resume(ppcVar6);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9dc2b0);
  (*pcVar3)();
}



/* Entry: 10a66c544; end: 10a66c54b;  */

void FUN_10a66c544(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a66d0e4(param_1 + 0xce);
  func_0x000109240b0c(param_1 + 0xc9);
  FUN_10a67e590(param_1 + 0xc5);
  func_0x00010a1f7460(param_1 + 0xc2);
  if (*(char *)((long)param_1 + 0x5e7) < '\0') {
    __ZdlPv(param_1[0xba]);
  }
  FUN_10a67e46c(param_1 + 0xb5);
  if (*(char *)((long)param_1 + 0x5a7) < '\0') {
    __ZdlPv(param_1[0xb2]);
  }
  param_1[0xae] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xb1] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xb1] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xaf);
  func_0x00010a65e650(param_1 + 0x9c);
  param_1[-2] = &PTR_FUN_110c05c48;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xdd] = &PTR_DAT_110c05ea8;
  param_1[0x15] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a004e5c(param_1 + 0x98);
  param_1[0x70] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x8e;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x8b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x84;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x81;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x7c);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x73;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6f];
  param_1[0x6f] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x61] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x6a);
  FUN_10a44a358(param_1 + 99);
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x5e,0);
  FUN_10a4477fc(param_1 + 0x5c);
  func_0x00010a4477a4(param_1 + 0x5a);
  func_0x00010a4476d0(param_1 + 0x55);
  FUN_10a44763c(param_1 + 0x52);
  if (param_1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x4a);
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110c03ca8);
  return;
}



/* Entry: 10a66c54c; end: 10a66c563;  */

void FUN_10a66c54c(long param_1)

{
  func_0x00010a66de5c(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c564; end: 10a66c56b;  */

void FUN_10a66c564(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a66d0e4(param_1 + 0xc9);
  func_0x000109240b0c(param_1 + 0xc4);
  FUN_10a67e590(param_1 + 0xc0);
  func_0x00010a1f7460(param_1 + 0xbd);
  if (*(char *)((long)param_1 + 0x5bf) < '\0') {
    __ZdlPv(param_1[0xb5]);
  }
  FUN_10a67e46c(param_1 + 0xb0);
  if (*(char *)((long)param_1 + 0x57f) < '\0') {
    __ZdlPv(param_1[0xad]);
  }
  param_1[0xa9] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xac] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xac] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xaa);
  func_0x00010a65e650(param_1 + 0x97);
  param_1[-7] = &PTR_FUN_110c05c48;
  param_1[-5] = &PTR_DAT_110bd5880;
  *param_1 = &PTR_DAT_110bd58d8;
  param_1[6] = &PTR_DAT_110bd58f8;
  param_1[0xf] = &PTR_DAT_110bd5968;
  param_1[0xd8] = &PTR_DAT_110c05ea8;
  param_1[0x10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x95);
  func_0x00010a004e5c(param_1 + 0x93);
  param_1[0x6b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x89;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x7c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x77);
  puStack_28 = param_1 + 0x71;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x6a];
  param_1[0x6a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x5c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x65);
  FUN_10a44a358(param_1 + 0x5e);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x59,0);
  FUN_10a4477fc(param_1 + 0x57);
  func_0x00010a4477a4(param_1 + 0x55);
  func_0x00010a4476d0(param_1 + 0x50);
  FUN_10a44763c(param_1 + 0x4d);
  if (param_1[0x4c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x45);
  if (param_1[0x43] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -7,&PTR_PTR_110c03ca8);
  return;
}



/* Entry: 10a66c56c; end: 10a66c583;  */

void FUN_10a66c56c(long param_1)

{
  func_0x00010a66de5c(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c584; end: 10a66c58b;  */

void FUN_10a66c584(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a66d0e4(param_1 + 0xc3);
  func_0x000109240b0c(param_1 + 0xbe);
  FUN_10a67e590(param_1 + 0xba);
  func_0x00010a1f7460(param_1 + 0xb7);
  if (*(char *)((long)param_1 + 0x58f) < '\0') {
    __ZdlPv(param_1[0xaf]);
  }
  FUN_10a67e46c(param_1 + 0xaa);
  if (*(char *)((long)param_1 + 0x54f) < '\0') {
    __ZdlPv(param_1[0xa7]);
  }
  param_1[0xa3] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0xa6] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0xa6] = 0;
  }
  func_0x00010a004e5c(param_1 + 0xa4);
  func_0x00010a65e650(param_1 + 0x91);
  param_1[-0xd] = &PTR_FUN_110c05c48;
  param_1[-0xb] = &PTR_DAT_110bd5880;
  param_1[-6] = &PTR_DAT_110bd58d8;
  *param_1 = &PTR_DAT_110bd58f8;
  param_1[9] = &PTR_DAT_110bd5968;
  param_1[0xd2] = &PTR_DAT_110c05ea8;
  param_1[10] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x8f);
  func_0x00010a004e5c(param_1 + 0x8d);
  param_1[0x65] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x80;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x71);
  puStack_28 = param_1 + 0x6b;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x68;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[100];
  param_1[100] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x56] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x5f);
  FUN_10a44a358(param_1 + 0x58);
  plVar2 = (long *)param_1[0x55];
  param_1[0x55] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x53,0);
  FUN_10a4477fc(param_1 + 0x51);
  func_0x00010a4477a4(param_1 + 0x4f);
  func_0x00010a4476d0(param_1 + 0x4a);
  FUN_10a44763c(param_1 + 0x47);
  if (param_1[0x46] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x44] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x42] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x3f);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0xd,&PTR_PTR_110c03ca8);
  return;
}



/* Entry: 10a66c58c; end: 10a66c5a3;  */

void FUN_10a66c58c(long param_1)

{
  func_0x00010a66de5c(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c5a4; end: 10a66c64f;  */

void FUN_10a66c5a4(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  code **ppcVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long *plStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  long *plStack_70;
  byte bStack_40;
  long lStack_38;
  
  FUN_10a3c73cc(param_1 + -0x68,2);
  if (*(char *)(param_1 + 0x490) != '\x01') {
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a3c7c48(*(undefined8 *)(param_1 + 0x500));
  plVar4 = (long *)(param_1 + 0x488);
  FUN_10a9dc58c();
  plVar5 = (long *)plVar4[1];
  __ZNSt3__119__shared_weak_count4lockEv();
  lVar8 = *plVar4;
  plVar4 = plVar5 + 1;
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
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  pcStack_80 = FUN_10aa074fc;
  ppuStack_78 = &PTR_DAT_110c37ec8;
  bStack_40 = 1;
  plStack_70 = (long *)(param_1 + 0x488);
  FUN_10a626530(auStack_90,*(undefined8 *)(lVar8 + 0x228),&pcStack_80);
  FUN_10a76c5c8(param_1 + 0x508,auStack_90);
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  if ((ulong)bStack_40 < 4) {
    ppcVar6 = &pcStack_80;
    (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(ppcVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if ((ulong)bStack_40 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_40])(&pcStack_80);
      __Unwind_Resume(ppcVar6);
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a9dc2b0);
  (*pcVar3)();
}



/* Entry: 10a66c650; end: 10a66c657;  */

void FUN_10a66c650(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a66d0e4(param_1 + 0xba);
  func_0x000109240b0c(param_1 + 0xb5);
  FUN_10a67e590(param_1 + 0xb1);
  func_0x00010a1f7460(param_1 + 0xae);
  if (*(char *)((long)param_1 + 0x547) < '\0') {
    __ZdlPv(param_1[0xa6]);
  }
  FUN_10a67e46c(param_1 + 0xa1);
  if (*(char *)((long)param_1 + 0x507) < '\0') {
    __ZdlPv(param_1[0x9e]);
  }
  param_1[0x9a] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0x9d] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9d] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9b);
  func_0x00010a65e650(param_1 + 0x88);
  param_1[-0x16] = &PTR_FUN_110c05c48;
  param_1[-0x14] = &PTR_DAT_110bd5880;
  param_1[-0xf] = &PTR_DAT_110bd58d8;
  param_1[-9] = &PTR_DAT_110bd58f8;
  *param_1 = &PTR_DAT_110bd5968;
  param_1[0xc9] = &PTR_DAT_110c05ea8;
  param_1[1] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x86);
  func_0x00010a004e5c(param_1 + 0x84);
  param_1[0x5c] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x7a;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x77;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x70;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6d;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x68);
  puStack_28 = param_1 + 0x62;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5f;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5b];
  param_1[0x5b] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4d] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x56);
  FUN_10a44a358(param_1 + 0x4f);
  plVar2 = (long *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x4a,0);
  FUN_10a4477fc(param_1 + 0x48);
  func_0x00010a4477a4(param_1 + 0x46);
  func_0x00010a4476d0(param_1 + 0x41);
  FUN_10a44763c(param_1 + 0x3e);
  if (param_1[0x3d] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3b] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x39] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x36);
  if (param_1[0x34] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x16,&PTR_PTR_110c03ca8);
  return;
}



/* Entry: 10a66c658; end: 10a66c66f;  */

void FUN_10a66c658(long param_1)

{
  func_0x00010a66de5c(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c670; end: 10a66c677;  */

void FUN_10a66c670(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  FUN_10a66d0e4(param_1 + 0xb9);
  func_0x000109240b0c(param_1 + 0xb4);
  FUN_10a67e590(param_1 + 0xb0);
  func_0x00010a1f7460(param_1 + 0xad);
  if (*(char *)((long)param_1 + 0x53f) < '\0') {
    __ZdlPv(param_1[0xa5]);
  }
  FUN_10a67e46c(param_1 + 0xa0);
  if (*(char *)((long)param_1 + 0x4ff) < '\0') {
    __ZdlPv(param_1[0x9d]);
  }
  param_1[0x99] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)param_1[0x9c] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x9c] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x9a);
  func_0x00010a65e650(param_1 + 0x87);
  param_1[-0x17] = &PTR_FUN_110c05c48;
  param_1[-0x15] = &PTR_DAT_110bd5880;
  param_1[-0x10] = &PTR_DAT_110bd58d8;
  param_1[-10] = &PTR_DAT_110bd58f8;
  param_1[-1] = &PTR_DAT_110bd5968;
  param_1[200] = &PTR_DAT_110c05ea8;
  *param_1 = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(param_1 + 0x85);
  func_0x00010a004e5c(param_1 + 0x83);
  param_1[0x5b] = &PTR_FUN_110b9ec48;
  puStack_28 = param_1 + 0x79;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x76;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6f;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x6c;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(param_1 + 0x67);
  puStack_28 = param_1 + 0x61;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = param_1 + 0x5e;
  func_0x00010a04aad4(&puStack_28);
  lVar1 = param_1[0x5a];
  param_1[0x5a] = 0;
  if (lVar1 != 0) {
    FUN_10a447854();
  }
  param_1[0x4c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x55);
  FUN_10a44a358(param_1 + 0x4e);
  plVar2 = (long *)param_1[0x4b];
  param_1[0x4b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a425f6c(param_1 + 0x49,0);
  FUN_10a4477fc(param_1 + 0x47);
  func_0x00010a4477a4(param_1 + 0x45);
  func_0x00010a4476d0(param_1 + 0x40);
  FUN_10a44763c(param_1 + 0x3d);
  if (param_1[0x3c] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x3a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[0x38] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(param_1 + 0x35);
  if (param_1[0x33] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(param_1 + -0x17,&PTR_PTR_110c03ca8);
  return;
}



/* Entry: 10a66c678; end: 10a66c68f;  */

void FUN_10a66c678(long param_1)

{
  func_0x00010a66de5c(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c690; end: 10a66c8a3;  */

undefined8 * FUN_10a66c690(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcStack_5d0;
  undefined **ppuStack_5c8;
  long lStack_5c0;
  byte bStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined2 uStack_568;
  undefined1 uStack_566;
  undefined1 uStack_520;
  undefined1 uStack_4d8;
  undefined1 uStack_490;
  undefined1 uStack_448;
  undefined1 uStack_400;
  undefined1 uStack_3f8;
  undefined1 uStack_3b0;
  undefined1 uStack_3a8;
  undefined1 uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_310;
  undefined1 uStack_308;
  undefined1 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_270;
  undefined1 uStack_268;
  undefined1 uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_1d0;
  undefined1 uStack_1c8;
  undefined1 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_130;
  undefined1 uStack_128;
  undefined1 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_520 = 0;
  uStack_4d8 = 0;
  uStack_490 = 0;
  uStack_448 = 0;
  uStack_400 = 0;
  uStack_3f8 = 0;
  uStack_3b0 = 0;
  uStack_3a8 = 0;
  uStack_360 = 0;
  uStack_358 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_40 = 0;
  uStack_588 = 0;
  uStack_580 = 0;
  uStack_578 = 0;
  uStack_570 = NEON_fmov(0xbf800000,4);
  uStack_568 = 0;
  uStack_566 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&uStack_588,*(long *)(param_1 + 0x78) + 0x5a0);
  uStack_566 = *(undefined1 *)(param_1 + 9);
  pcStack_5d0 = FUN_10a6846f4;
  ppuStack_5c8 = &PTR_FUN_110c07bd8;
  bStack_590 = 1;
  lStack_5c0 = param_1;
  FUN_10a249478(&uStack_588,&pcStack_5d0);
  if ((ulong)bStack_590 < 4) {
    (*(code *)(&PTR_FUN_110b9a040)[bStack_590])(&pcStack_5d0);
    pcStack_5d0 = (code *)0x10a6847c8;
    ppuStack_5c8 = &PTR_DAT_110c07bf8;
    bStack_590 = 1;
    lStack_5c0 = param_1;
    func_0x00010a2495f4(&uStack_588,&pcStack_5d0);
    if ((ulong)bStack_590 < 4) {
      (*(code *)(&PTR_FUN_110b9a040)[bStack_590])(&pcStack_5d0);
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x170) + 0xa60);
      FUN_10a249f08(uVar2,&uStack_588,param_1 + 0x30);
      if ((int)uVar2 != 0) {
        FUN_10a07e58c(*(undefined8 *)(param_1 + 0x48));
      }
      puVar3 = &uStack_588;
      FUN_10a26a458();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return puVar3;
      }
      ___stack_chk_fail();
      if ((ulong)bStack_590 < 4) {
        (*(code *)(&PTR_FUN_110b9a040)[bStack_590])(&pcStack_5d0);
        FUN_10a26a458(&uStack_588);
        __Unwind_Resume();
        return *(undefined8 **)(puVar3[0xf] + 0x168);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a66c88c);
  (*pcVar1)();
}



/* Entry: 10a66c8a4; end: 10a66c8b7;  */

undefined8 FUN_10a66c8a4(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x168);
}



/* Entry: 10a66c8b8; end: 10a66c8cf;  */

void FUN_10a66c8b8(long param_1)

{
  func_0x00010a66de5c(param_1 + -0x580);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66c8d0; end: 10a66c8df;  */

void FUN_10a66c8d0(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  FUN_10a66d0e4(puVar1 + 0xd0);
  func_0x000109240b0c(puVar1 + 0xcb);
  FUN_10a67e590(puVar1 + 199);
  func_0x00010a1f7460(puVar1 + 0xc4);
  if (*(char *)((long)puVar1 + 0x5f7) < '\0') {
    __ZdlPv(puVar1[0xbc]);
  }
  FUN_10a67e46c(puVar1 + 0xb7);
  if (*(char *)((long)puVar1 + 0x5b7) < '\0') {
    __ZdlPv(puVar1[0xb4]);
  }
  puVar1[0xb0] = &PTR_DAT_110bcfa30;
  if ((undefined8 *)puVar1[0xb3] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[0xb3] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0xb1);
  func_0x00010a65e650(puVar1 + 0x9e);
  *puVar1 = &PTR_FUN_110c05c48;
  puVar1[2] = &PTR_DAT_110bd5880;
  puVar1[7] = &PTR_DAT_110bd58d8;
  puVar1[0xd] = &PTR_DAT_110bd58f8;
  puVar1[0x16] = &PTR_DAT_110bd5968;
  puVar1[0xdf] = &PTR_DAT_110c05ea8;
  puVar1[0x17] = &PTR_DAT_110bd5998;
  func_0x00010a004e5c(puVar1 + 0x9c);
  func_0x00010a004e5c(puVar1 + 0x9a);
  puVar1[0x72] = &PTR_FUN_110b9ec48;
  puStack_28 = puVar1 + 0x90;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x8d;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x86;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x83;
  func_0x00010a04aad4(&puStack_28);
  FUN_10a0617bc(puVar1 + 0x7e);
  puStack_28 = puVar1 + 0x78;
  func_0x00010a04aad4(&puStack_28);
  puStack_28 = puVar1 + 0x75;
  func_0x00010a04aad4(&puStack_28);
  lVar2 = puVar1[0x71];
  puVar1[0x71] = 0;
  if (lVar2 != 0) {
    FUN_10a447854();
  }
  puVar1[99] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(puVar1 + 0x6c);
  FUN_10a44a358(puVar1 + 0x65);
  plVar3 = (long *)puVar1[0x62];
  puVar1[0x62] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_10a425f6c(puVar1 + 0x60,0);
  FUN_10a4477fc(puVar1 + 0x5e);
  func_0x00010a4477a4(puVar1 + 0x5c);
  func_0x00010a4476d0(puVar1 + 0x57);
  FUN_10a44763c(puVar1 + 0x54);
  if (puVar1[0x53] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x51] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (puVar1[0x4f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0e3194(puVar1 + 0x4c);
  if (puVar1[0x4a] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a66a924(puVar1,&PTR_PTR_110c03ca8);
  return;
}



/* Entry: 10a66c8e0; end: 10a66cdb7;  */

void FUN_10a66c8e0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a66de5c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a66cdb8; end: 10a66cdcb;  */

long FUN_10a66cdb8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a66cdcc; end: 10a66cde7;  */

void FUN_10a66cdcc(undefined8 param_1)

{
  FUN_10a3c59d8(param_1,&PTR_PTR_110c04768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66cde8; end: 10a66ce2f;  */

long FUN_10a66cde8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a66ce30; end: 10a66ce4f;  */

void FUN_10a66ce30(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x10,&PTR_PTR_110c04768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66ce50; end: 10a66ce5f;  */

void FUN_10a66ce50(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-7] = &PTR_FUN_110c06638;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x38] = &PTR_DAT_110c06768;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xe];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar1 = param_1[0xb];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xc];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[10];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  puStack_28 = param_1 + 3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a66ce60; end: 10a66ce7f;  */

void FUN_10a66ce60(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x38,&PTR_PTR_110c04768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66ce80; end: 10a66ce8f;  */

void FUN_10a66ce80(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0xd] = &PTR_FUN_110c06638;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x32] = &PTR_DAT_110c06768;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar1 = param_1[7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puStack_28 = param_1 + -3;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a66ce90; end: 10a66ceaf;  */

void FUN_10a66ce90(long param_1)

{
  FUN_10a3c59d8(param_1 + -0x68,&PTR_PTR_110c04768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66ceb0; end: 10a66cebf;  */

void FUN_10a66ceb0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[-0x16] = &PTR_FUN_110c06638;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x29] = &PTR_DAT_110c06768;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar1 = param_1[-2];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar1 = param_1[-4];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar1 = param_1[-6];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar1 = param_1[-8];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  puStack_28 = param_1 + -0xc;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a66cec0; end: 10a66cedf;  */

void FUN_10a66cec0(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb0,&PTR_PTR_110c04768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66cee0; end: 10a66cf23;  */

undefined8 FUN_10a66cee0(void)

{
  return 0xd07927f5ab7790e9;
}



/* Entry: 10a66cf24; end: 10a66cf43;  */

void FUN_10a66cf24(long param_1)

{
  FUN_10a3c59d8(param_1 + -0xb8,&PTR_PTR_110c04768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66cf44; end: 10a66cf5b;  */

void FUN_10a66cf44(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_28;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c06638;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x3f] = &PTR_DAT_110c06768;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar2 = puVar1[0x14];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar2 = puVar1[0x12];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar2 = puVar1[0x10];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar2 = puVar1[0xe];
  if (lVar2 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar2;
    *(long **)(lVar2 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  puStack_28 = puVar1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a66cf5c; end: 10a66cf93;  */

void FUN_10a66cf5c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a3c59d8((long)param_1 + lVar1,&PTR_PTR_110c04768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a66cf94; end: 10a66cf9b;  */

long FUN_10a66cf94(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a66cf9c; end: 10a66cfab;  */

undefined8 * FUN_10a66cf9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  func_0x000105277f8c();
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_3[2] = puVar1 + 3;
  param_3[3] = puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c06ac8;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c06b18;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  param_3[4] = puVar1 + 3;
  param_3[5] = puVar1;
  param_3[0xd] = 0;
  *(undefined1 *)(param_3 + 0xe) = 0;
  param_3[7] = 0;
  param_3[6] = 0;
  param_3[9] = 0;
  param_3[8] = 0;
  param_3[0xb] = 0;
  param_3[10] = 0;
  *(undefined1 *)(param_3 + 0xc) = 0;
  return param_3;
}



/* Entry: 10a66cfac; end: 10a66d06b;  */

undefined8 * FUN_10a66cfac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[2] = puVar1 + 3;
  param_1[3] = puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110c06ac8;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110c06b18;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  param_1[4] = puVar1 + 3;
  param_1[5] = puVar1;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 10a66d06c; end: 10a66d07b;  */

void FUN_10a66d06c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c06ac8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a66d07c; end: 10a66d09b;  */

void FUN_10a66d07c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c06ac8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66d09c; end: 10a66d0b7;  */

long * FUN_10a66d09c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x18);
  func_0x000104c4f97c(plVar1,*(undefined8 *)(param_1 + 0x28));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10a66d0b8; end: 10a66d0d7;  */

void FUN_10a66d0b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c06b18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a66d0d8; end: 10a66d0e3;  */

long FUN_10a66d0d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x0001005d0500(lVar1,*(undefined8 *)(param_1 + 0x28));
  func_0x0001005d0560(lVar1,0);
  return lVar1;
}



/* Entry: 10a66d0e4; end: 10a66d24f;  */

long FUN_10a66d0e4(long param_1)

{
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x00010a1d5920(param_1 + 0x20);
  func_0x00010a1d58c8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10a66d250; end: 10a66d2db;  */

bool FUN_10a66d250(undefined8 param_1,long *param_2,long *param_3)

{
  return *param_2 == *param_3;
}



/* Entry: 10a66d2dc; end: 10a66d5ef;  */

void FUN_10a66d2dc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar3 = (long *)*param_1;
    lVar1 = lVar2;
    FUN_10ab1bd88();
    plVar3 = (long *)*plVar3;
    *plVar3 = lVar2;
    *(undefined4 *)(plVar3 + 1) = 2;
    plVar3[2] = lVar1;
  }
  return;
}



/* Entry: 10a66d5f0; end: 10a66d65f;  */

void FUN_10a66d5f0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a0507f0(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a66d660; end: 10a66d82f;  */

ulong FUN_10a66d660(float *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = 0x9e3779b9;
  uVar6 = uVar5;
  if (*param_1 != 0.0) {
    uVar6 = (ulong)(uint)*param_1 + 0x9e3779b9;
  }
  uVar4 = uVar5;
  if (param_1[1] != 0.0) {
    uVar4 = (ulong)(uint)param_1[1] + 0x9e3779b9;
  }
  uVar1 = uVar5;
  if (param_1[2] != 0.0) {
    uVar1 = (ulong)(uint)param_1[2] + 0x9e3779b9;
  }
  uVar2 = uVar5;
  if (param_1[3] != 0.0) {
    uVar2 = (ulong)(uint)param_1[3] + 0x9e3779b9;
  }
  uVar7 = uVar5;
  if (param_1[4] != 0.0) {
    uVar7 = (ulong)(uint)param_1[4] + 0x9e3779b9;
  }
  uVar3 = uVar5;
  if (param_1[5] != 0.0) {
    uVar3 = (ulong)(uint)param_1[5] + 0x9e3779b9;
  }
  uVar6 = uVar4 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
  uVar6 = uVar1 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
  uVar7 = uVar3 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
  uVar4 = uVar5;
  if (param_1[6] != 0.0) {
    uVar4 = (ulong)(uint)param_1[6] + 0x9e3779b9;
  }
  uVar7 = uVar4 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
  uVar4 = uVar5;
  if (param_1[7] != 0.0) {
    uVar4 = (ulong)(uint)param_1[7] + 0x9e3779b9;
  }
  uVar6 = ((uVar2 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6) + 0x2853a3c667 ^ 0x9e3779b9) + 0x9e3779b9;
  uVar6 = (uVar6 * 0x40 + (uVar6 >> 2) + (uVar4 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7) + 0x9e3779b9
          ^ uVar6) + 0x9e3779b9;
  if (param_1[8] != 0.0) {
    uVar5 = (ulong)(uint)param_1[8] + 0x9e3779b9;
  }
  return uVar5 + uVar6 * 0x40 + (uVar6 >> 2) ^ uVar6;
}



/* Entry: 10a66d830; end: 10a66d843;  */

undefined1  [16] FUN_10a66d830(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010a1f7460();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a66d844; end: 10a66d91f;  */

undefined1  [16] FUN_10a66d844(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010a1f7460();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a66d920; end: 10a66d9b3;  */

void FUN_10a66d920(ulong *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3c != 0) {
      FUN_10a66d9b4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a66d998);
      (*pcVar1)();
    }
    lVar2 = param_2;
    FUN_10a66d9c8();
    *param_1 = param_4;
    param_1[1] = param_4;
    param_1[2] = param_4 + lVar2 * 0x10;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(param_4,param_2,param_3);
    }
    param_1[1] = param_4 + param_3;
  }
  return;
}



/* Entry: 10a66d9b4; end: 10a66d9c7;  */

undefined1  [16] FUN_10a66d9b4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    lVar2 = (long)puVar1 << 4;
    __Znwm(lVar2);
    auVar6._8_8_ = puVar1;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  func_0x000109ffded8();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    puVar3 = (undefined8 *)*param_2;
    func_0x000107c3192c(puVar1,puVar3,param_2[1]);
  }
  else {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar3 = param_2;
  }
  puVar1[3] = param_2[3];
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    puVar3 = (undefined8 *)param_2[4];
    func_0x000107c3192c(puVar1 + 4,puVar3,param_2[5]);
  }
  else {
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    puVar1[6] = param_2[6];
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
  }
  puVar1[7] = param_2[7];
  if (*(char *)((long)param_2 + 0x57) < '\0') {
    puVar3 = (undefined8 *)param_2[8];
    func_0x000107c3192c(puVar1 + 8,puVar3,param_2[9]);
  }
  else {
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    puVar1[10] = param_2[10];
    puVar1[9] = uVar5;
    puVar1[8] = uVar4;
  }
  uVar5 = param_2[0xc];
  uVar4 = param_2[0xb];
  puVar1[0xd] = param_2[0xd];
  puVar1[0xc] = uVar5;
  puVar1[0xb] = uVar4;
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = puVar1;
  return auVar7;
}


