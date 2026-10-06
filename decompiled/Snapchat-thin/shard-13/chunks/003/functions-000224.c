/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a432fd8; end: 10a433133;  */

void FUN_10a432fd8(float param_1,float param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uStack_38;
  
  FUN_10a3c7928();
  (**(code **)(*param_4 + 0x18))(param_4,&PTR_DAT_110bd7158);
  FUN_10acae774(*(undefined8 *)(param_3 + 0x1f8),param_4);
  (**(code **)(*param_4 + 0x20))(param_4);
  uVar1 = *(undefined8 *)(param_3 + 0x1f8);
  func_0x00010acae6ac(uVar1);
  fVar4 = param_2;
  fVar2 = param_1;
  func_0x00010acae698(uVar1);
  uVar1 = CONCAT44((param_2 * -2.0) / fVar4,(param_1 * -2.0) / fVar2);
  uStack_38 = uVar1;
  (**(code **)(*param_4 + 0x78))(param_4,&PTR_DAT_110bd9430,&uStack_38);
  uVar3 = (undefined4)uVar1;
  func_0x00010acae698(*(undefined8 *)(param_3 + 0x1f8));
  uStack_38 = CONCAT44(fVar4,uVar3);
  (**(code **)(*param_4 + 0x78))(param_4,&PTR_DAT_110bd9450,&uStack_38);
  (**(code **)(*param_4 + 0x40))(param_4,&PTR_DAT_110bd7178,*(undefined4 *)(param_3 + 0x214));
  (**(code **)(*param_4 + 0x40))(param_4,&PTR_DAT_110bd7198,*(undefined4 *)(param_3 + 0x218));
  uStack_38 = *(undefined8 *)(param_3 + 0x21c);
  (**(code **)(*param_4 + 0x78))(param_4,&PTR_DAT_110bd71b8,&uStack_38);
  (**(code **)(*param_4 + 0x40))(param_4,&PTR_DAT_110bd71d8,*(undefined4 *)(param_3 + 0x224));
  return;
}



/* Entry: 10a433134; end: 10a43317b;  */

float FUN_10a433134(float param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  func_0x00010acae6ac(uVar1);
  fVar2 = param_1 * -2.0;
  func_0x00010acae698(uVar1);
  return fVar2 / param_1;
}



/* Entry: 10a43317c; end: 10a4331f7;  */

void FUN_10a43317c(float param_1,float param_2,long param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  fVar3 = param_1;
  fVar4 = param_2;
  func_0x00010acae6ac();
  uVar5 = NEON_fmov(0x3f800000,4);
  fVar6 = (float)((ulong)uVar5 >> 0x20);
  fVar7 = (param_1 + (float)uVar5) * 0.5;
  fVar8 = (param_2 + fVar6) * 0.5;
  pauVar1 = (undefined1 (*) [12])(param_3 + 0x24);
  fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 0x2c) >> 0x20);
  fVar9 = (float)*(undefined8 *)*pauVar1;
  fVar10 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar12._12_4_ = fVar11;
  auVar12._0_12_ = *pauVar1;
  auVar2._12_4_ = fVar11;
  auVar2._0_12_ = *pauVar1;
  auVar12 = NEON_ext(auVar12,auVar2,8,1);
  fVar3 = (fVar3 - (((float)uVar5 - fVar7) * fVar9 + fVar7 * auVar12._0_4_)) -
          (fVar9 + auVar12._0_4_) * 0.5;
  fVar4 = (fVar4 - ((fVar6 - fVar8) * fVar10 + fVar8 * auVar12._4_4_)) -
          (fVar10 + auVar12._4_4_) * 0.5;
  *(ulong *)(param_3 + 0x2c) =
       CONCAT44(fVar11 + fVar4,(float)*(undefined8 *)(param_3 + 0x2c) + fVar3);
  *(ulong *)(param_3 + 0x24) = CONCAT44(fVar10 + fVar4,fVar9 + fVar3);
  return;
}



/* Entry: 10a4331f8; end: 10a43328f;  */

float FUN_10a4331f8(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = 1.0;
  if ((*(int *)(param_1 + 0x214) == 1) && (*(int *)(param_1 + 0x224) == 1)) {
    fVar2 = *(float *)(param_1 + 0x21c);
    if ((0.0 < fVar2) && (0.0 < *(float *)(param_1 + 0x220))) {
      func_0x00010acae698(*(undefined8 *)(param_1 + 0x1f8));
      fVar2 = fVar1 / fVar2;
      fVar1 = 1.0;
      if (1e-06 < ABS(fVar2)) {
        fVar1 = fVar2;
      }
    }
    return fVar1;
  }
  return 1.0;
}



/* Entry: 10a433290; end: 10a43346f;  */

void FUN_10a433290(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  long *plStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  lVar6 = *(long *)(param_1 + 0x198);
  do {
    if (lVar6 == param_1 + 400) {
      return;
    }
    lVar4 = *(long *)(lVar6 + 0x10);
    lVar5 = *(long *)(lVar4 + 0x248);
    if (lVar5 != 0) {
      lStack_70 = *(long *)(lVar5 + 0x200);
      plStack_68 = *(long **)(lVar5 + 0x208);
      if (plStack_68 != (long *)0x0) {
        plVar3 = plStack_68 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (lStack_70 != 0) {
        uVar9 = *param_2;
        uVar12 = *(undefined8 *)(lStack_70 + 0x2c);
        uVar10 = *(undefined8 *)(lStack_70 + 0x24);
        plVar3 = (long *)0x50;
        __Znwm();
        plVar7 = plVar3 + 1;
        *plVar7 = 0;
        fVar8 = (float)uVar9;
        fVar11 = (float)((ulong)uVar9 >> 0x20);
        plVar3[2] = 0;
        *plVar3 = (long)&PTR_FUN_110bcfba8;
        plVar3[4] = 0;
        plVar3[5] = 0;
        plStack_80 = plVar3 + 3;
        *plStack_80 = (long)&PTR_FUN_110c6a8d8;
        *(undefined1 *)(plVar3 + 7) = 0;
        plVar3[6] = (long)&PTR_FUN_110c6a940;
        *(ulong *)((long)plVar3 + 0x44) =
             CONCAT44(fVar11 * (float)((ulong)uVar12 >> 0x20),fVar8 * (float)uVar12);
        *(ulong *)((long)plVar3 + 0x3c) =
             CONCAT44(fVar11 * (float)((ulong)uVar10 >> 0x20),fVar8 * (float)uVar10);
        plStack_78 = plVar3;
        FUN_10a39577c(lVar5,&plStack_80);
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      plVar3 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    for (lVar5 = *(long *)(lVar4 + 0x158); lVar5 != lVar4 + 0x150; lVar5 = *(long *)(lVar5 + 8)) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        plVar3 = (long *)(*(long *)(lVar5 + 0x10) + 0xb0);
        (**(code **)(*plVar3 + 0x18))(plVar3,0x5b791445539073a5);
        if (plVar3 != (long *)0x0) goto LAB_10a433420;
      }
    }
    FUN_10a433290(lVar4,param_2);
LAB_10a433420:
    lVar6 = *(long *)(lVar6 + 8);
  } while( true );
}



/* Entry: 10a433470; end: 10a433517;  */

void FUN_10a433470(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x248);
  if (((lVar1 != 0) && ((*(ushort *)(lVar1 + 0x180) & 0x17) == 0)) && (FUN_10a3958f0(), lVar1 != 0))
  {
    lVar3 = *(long *)(lVar1 + 0x168);
    for (lVar1 = *(long *)(lVar3 + 0x158); lVar1 != lVar3 + 0x150; lVar1 = *(long *)(lVar1 + 8)) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        plVar2 = (long *)(*(long *)(lVar1 + 0x10) + 0xb0);
        (**(code **)(*plVar2 + 0x18))(plVar2,0x5b791445539073a5);
        if (plVar2 != (long *)0x0) {
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10a433518; end: 10a4335eb;  */

void FUN_10a433518(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bd4020;
  param_1[2] = &PTR_FUN_110bd4130;
  param_1[7] = &PTR_DAT_110bd4188;
  param_1[0xd] = &PTR_DAT_110bd41a8;
  param_1[0x41] = &PTR_DAT_110bd42a8;
  param_1[0x16] = &PTR_DAT_110bd4218;
  param_1[0x17] = &PTR_FUN_110bd4248;
  func_0x00010a43907c(param_1[0x3f]);
  *param_1 = &PTR_FUN_110bd7210;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x41] = &PTR_DAT_110bd7340;
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



/* Entry: 10a4335ec; end: 10a433623;  */

long FUN_10a4335ec(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a433624; end: 10a433973;  */

void FUN_10a433624(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bd4130;
  param_1[5] = &PTR_DAT_110bd4188;
  param_1[0xb] = &PTR_DAT_110bd41a8;
  param_1[0x3f] = &PTR_DAT_110bd42a8;
  param_1[0x14] = &PTR_DAT_110bd4218;
  param_1[0x15] = &PTR_FUN_110bd4248;
  puVar3 = param_1 + -2;
  *puVar3 = &PTR_FUN_110bd4020;
  func_0x00010a43907c(param_1[0x3d]);
  *puVar3 = &PTR_FUN_110bd7210;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x3f] = &PTR_DAT_110bd7340;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
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
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a433974; end: 10a4339a7;  */

undefined8 FUN_10a433974(void)

{
  return 0x5d3071e8cf0585db;
}



/* Entry: 10a4339a8; end: 10a433b5f;  */

void FUN_10a4339a8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puStack_28;
  
  param_1[-0x15] = &PTR_FUN_110bd4130;
  param_1[-0x10] = &PTR_DAT_110bd4188;
  param_1[-10] = &PTR_DAT_110bd41a8;
  param_1[0x2a] = &PTR_DAT_110bd42a8;
  param_1[-1] = &PTR_DAT_110bd4218;
  *param_1 = &PTR_FUN_110bd4248;
  puVar3 = param_1 + -0x17;
  *puVar3 = &PTR_FUN_110bd4020;
  func_0x00010a43907c(param_1[0x28]);
  *puVar3 = &PTR_FUN_110bd7210;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x2a] = &PTR_DAT_110bd7340;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(puVar3);
  return;
}



/* Entry: 10a433b60; end: 10a433b63;  */

void FUN_10a433b60(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  (**(code **)param_1[0x6a])(param_1 + 0x6a);
  (**(code **)param_1[0x62])(param_1 + 0x62);
  (**(code **)param_1[0x5a])(param_1 + 0x5a);
  if (param_1[0x56] != 0) {
    param_1[0x57] = param_1[0x56];
    __ZdlPv();
  }
  if (param_1[0x52] != 0) {
    FUN_10a435388(param_1 + 0x52);
    __ZdlPv(param_1[0x52]);
  }
  lVar4 = param_1[0x4f];
  if (lVar4 != 0) {
    lVar1 = param_1[0x50];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a43beb0();
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x4f];
    }
    param_1[0x50] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x4c] != 0) {
    func_0x00010a40f544(param_1 + 0x4c);
    __ZdlPv(param_1[0x4c]);
  }
  lVar4 = param_1[0x49];
  if (lVar4 != 0) {
    lVar1 = param_1[0x4a];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435068(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x49];
    }
    param_1[0x4a] = lVar4;
    __ZdlPv(lVar2);
  }
  lVar4 = param_1[0x46];
  if (lVar4 != 0) {
    lVar1 = param_1[0x47];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435028(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x46];
    }
    param_1[0x47] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x43] != 0) {
    func_0x00010a40f4fc(param_1 + 0x43);
    __ZdlPv(param_1[0x43]);
  }
  FUN_10a43926c(param_1[0x41]);
  *param_1 = &PTR_FUN_110bd73a8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x71] = &PTR_DAT_110bd74d8;
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
    plVar3 = (long *)param_1[0x15];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar4 = param_1[0x12];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0x13];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar4 = param_1[0x10];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0x11];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar4 = param_1[0xe];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0xf];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a433b64; end: 10a433b77;  */

void FUN_10a433b64(void)

{
  FUN_10a4390f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433b78; end: 10a433bb7;  */

long FUN_10a433b78(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a433bb8; end: 10a433bcf;  */

void FUN_10a433bb8(long param_1)

{
  FUN_10a4390f8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433bd0; end: 10a433bd7;  */

void FUN_10a433bd0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  (**(code **)param_1[99])(param_1 + 99);
  (**(code **)param_1[0x5b])(param_1 + 0x5b);
  (**(code **)param_1[0x53])(param_1 + 0x53);
  if (param_1[0x4f] != 0) {
    param_1[0x50] = param_1[0x4f];
    __ZdlPv();
  }
  if (param_1[0x4b] != 0) {
    FUN_10a435388(param_1 + 0x4b);
    __ZdlPv(param_1[0x4b]);
  }
  lVar4 = param_1[0x48];
  if (lVar4 != 0) {
    lVar1 = param_1[0x49];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a43beb0();
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x48];
    }
    param_1[0x49] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x45] != 0) {
    func_0x00010a40f544(param_1 + 0x45);
    __ZdlPv(param_1[0x45]);
  }
  lVar4 = param_1[0x42];
  if (lVar4 != 0) {
    lVar1 = param_1[0x43];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435068(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x42];
    }
    param_1[0x43] = lVar4;
    __ZdlPv(lVar2);
  }
  lVar4 = param_1[0x3f];
  if (lVar4 != 0) {
    lVar1 = param_1[0x40];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435028(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x3f];
    }
    param_1[0x40] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x3c] != 0) {
    func_0x00010a40f4fc(param_1 + 0x3c);
    __ZdlPv(param_1[0x3c]);
  }
  FUN_10a43926c(param_1[0x3a]);
  param_1[-7] = &PTR_FUN_110bd73a8;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x6a] = &PTR_DAT_110bd74d8;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar4 = param_1[0xd];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0xe];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar4 = param_1[0xb];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0xc];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar4 = param_1[9];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[10];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[8];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a433bd8; end: 10a433bef;  */

void FUN_10a433bd8(long param_1)

{
  FUN_10a4390f8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433bf0; end: 10a433bf7;  */

void FUN_10a433bf0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  (**(code **)param_1[0x5d])(param_1 + 0x5d);
  (**(code **)param_1[0x55])(param_1 + 0x55);
  (**(code **)param_1[0x4d])(param_1 + 0x4d);
  if (param_1[0x49] != 0) {
    param_1[0x4a] = param_1[0x49];
    __ZdlPv();
  }
  if (param_1[0x45] != 0) {
    FUN_10a435388(param_1 + 0x45);
    __ZdlPv(param_1[0x45]);
  }
  lVar4 = param_1[0x42];
  if (lVar4 != 0) {
    lVar1 = param_1[0x43];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a43beb0();
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x42];
    }
    param_1[0x43] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x3f] != 0) {
    func_0x00010a40f544(param_1 + 0x3f);
    __ZdlPv(param_1[0x3f]);
  }
  lVar4 = param_1[0x3c];
  if (lVar4 != 0) {
    lVar1 = param_1[0x3d];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435068(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x3c];
    }
    param_1[0x3d] = lVar4;
    __ZdlPv(lVar2);
  }
  lVar4 = param_1[0x39];
  if (lVar4 != 0) {
    lVar1 = param_1[0x3a];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435028(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x39];
    }
    param_1[0x3a] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x36] != 0) {
    func_0x00010a40f4fc(param_1 + 0x36);
    __ZdlPv(param_1[0x36]);
  }
  FUN_10a43926c(param_1[0x34]);
  param_1[-0xd] = &PTR_FUN_110bd73a8;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[100] = &PTR_DAT_110bd74d8;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[8];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[6];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar4 = param_1[3];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[4];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[2];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a433bf8; end: 10a433c0f;  */

void FUN_10a433bf8(long param_1)

{
  FUN_10a4390f8(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433c10; end: 10a433c17;  */

void FUN_10a433c10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  (**(code **)param_1[0x54])(param_1 + 0x54);
  (**(code **)param_1[0x4c])(param_1 + 0x4c);
  (**(code **)param_1[0x44])(param_1 + 0x44);
  if (param_1[0x40] != 0) {
    param_1[0x41] = param_1[0x40];
    __ZdlPv();
  }
  if (param_1[0x3c] != 0) {
    FUN_10a435388(param_1 + 0x3c);
    __ZdlPv(param_1[0x3c]);
  }
  lVar4 = param_1[0x39];
  if (lVar4 != 0) {
    lVar1 = param_1[0x3a];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a43beb0();
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x39];
    }
    param_1[0x3a] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x36] != 0) {
    func_0x00010a40f544(param_1 + 0x36);
    __ZdlPv(param_1[0x36]);
  }
  lVar4 = param_1[0x33];
  if (lVar4 != 0) {
    lVar1 = param_1[0x34];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435068(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x33];
    }
    param_1[0x34] = lVar4;
    __ZdlPv(lVar2);
  }
  lVar4 = param_1[0x30];
  if (lVar4 != 0) {
    lVar1 = param_1[0x31];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x28;
        func_0x00010a435028(lVar1);
      } while (lVar1 != lVar4);
      lVar2 = param_1[0x30];
    }
    param_1[0x31] = lVar4;
    __ZdlPv(lVar2);
  }
  if (param_1[0x2d] != 0) {
    func_0x00010a40f4fc(param_1 + 0x2d);
    __ZdlPv(param_1[0x2d]);
  }
  FUN_10a43926c(param_1[0x2b]);
  param_1[-0x16] = &PTR_FUN_110bd73a8;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x5b] = &PTR_DAT_110bd74d8;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar4 = param_1[-2];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[-1];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar4 = param_1[-4];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[-3];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar4 = param_1[-6];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[-5];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar4 = param_1[-8];
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[-7];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a433c18; end: 10a433c2f;  */

void FUN_10a433c18(long param_1)

{
  FUN_10a4390f8(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433c30; end: 10a433c6b;  */

undefined8 FUN_10a433c30(void)

{
  return 0xa0e2ec348992e6d0;
}



/* Entry: 10a433c6c; end: 10a433c83;  */

void FUN_10a433c6c(long param_1)

{
  FUN_10a4390f8(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433c84; end: 10a433c93;  */

void FUN_10a433c84(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  (**(code **)puVar1[0x6a])(puVar1 + 0x6a);
  (**(code **)puVar1[0x62])(puVar1 + 0x62);
  (**(code **)puVar1[0x5a])(puVar1 + 0x5a);
  if (puVar1[0x56] != 0) {
    puVar1[0x57] = puVar1[0x56];
    __ZdlPv();
  }
  if (puVar1[0x52] != 0) {
    FUN_10a435388(puVar1 + 0x52);
    __ZdlPv(puVar1[0x52]);
  }
  lVar5 = puVar1[0x4f];
  if (lVar5 != 0) {
    lVar2 = puVar1[0x50];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10a43beb0();
      } while (lVar2 != lVar5);
      lVar3 = puVar1[0x4f];
    }
    puVar1[0x50] = lVar5;
    __ZdlPv(lVar3);
  }
  if (puVar1[0x4c] != 0) {
    func_0x00010a40f544(puVar1 + 0x4c);
    __ZdlPv(puVar1[0x4c]);
  }
  lVar5 = puVar1[0x49];
  if (lVar5 != 0) {
    lVar2 = puVar1[0x4a];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x28;
        func_0x00010a435068(lVar2);
      } while (lVar2 != lVar5);
      lVar3 = puVar1[0x49];
    }
    puVar1[0x4a] = lVar5;
    __ZdlPv(lVar3);
  }
  lVar5 = puVar1[0x46];
  if (lVar5 != 0) {
    lVar2 = puVar1[0x47];
    lVar3 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x28;
        func_0x00010a435028(lVar2);
      } while (lVar2 != lVar5);
      lVar3 = puVar1[0x46];
    }
    puVar1[0x47] = lVar5;
    __ZdlPv(lVar3);
  }
  if (puVar1[0x43] != 0) {
    func_0x00010a40f4fc(puVar1 + 0x43);
    __ZdlPv(puVar1[0x43]);
  }
  FUN_10a43926c(puVar1[0x41]);
  *puVar1 = &PTR_FUN_110bd73a8;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x71] = &PTR_DAT_110bd74d8;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar5 = puVar1[0x14];
  if (lVar5 != 0) {
    plVar4 = (long *)puVar1[0x15];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar5 = puVar1[0x12];
  if (lVar5 != 0) {
    plVar4 = (long *)puVar1[0x13];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar5 = puVar1[0x10];
  if (lVar5 != 0) {
    plVar4 = (long *)puVar1[0x11];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar5 = puVar1[0xe];
  if (lVar5 != 0) {
    plVar4 = (long *)puVar1[0xf];
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a433c94; end: 10a433d63;  */

void FUN_10a433c94(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a4390f8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a433d64; end: 10a433d67;  */

/* WARNING: Removing unreachable block (ram,0x00010a4393d8) */

void FUN_10a433d64(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)param_1[0x93])(param_1 + 0x93);
  (**(code **)param_1[0x8b])(param_1 + 0x8b);
  (**(code **)param_1[0x83])(param_1 + 0x83);
  (**(code **)param_1[0x7b])(param_1 + 0x7b);
  (**(code **)param_1[0x73])(param_1 + 0x73);
  (**(code **)param_1[0x6b])(param_1 + 0x6b);
  if (param_1[0x67] != 0) {
    param_1[0x68] = param_1[0x67];
    __ZdlPv();
  }
  FUN_10a439460(param_1 + 0x62);
  FUN_10a439460(param_1 + 0x5d);
  func_0x00010a1f9d6c(param_1 + 0x58);
  if (param_1[0x55] != 0) {
    param_1[0x56] = param_1[0x55];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x52);
  if (param_1[0x4f] != 0) {
    param_1[0x50] = param_1[0x4f];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x4c);
  lVar3 = param_1[0x49];
  if (lVar3 != 0) {
    lVar4 = param_1[0x4a];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x49];
    }
    param_1[0x4a] = lVar3;
    __ZdlPv(lVar1);
  }
  lVar3 = param_1[0x46];
  if (lVar3 != 0) {
    lVar4 = param_1[0x47];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x50;
        func_0x00010a43548c(lVar4);
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x46];
    }
    param_1[0x47] = lVar3;
    __ZdlPv(lVar1);
  }
  func_0x00010a004e5c(param_1 + 0x44);
  FUN_10a43fab8(param_1 + 0x42);
  func_0x00010a435430(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bd7540;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x9b] = &PTR_DAT_110bd7670;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar3 = param_1[0x14];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar3 = param_1[0xe];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a433d68; end: 10a433d7b;  */

void FUN_10a433d68(void)

{
  FUN_10a4392e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433d7c; end: 10a433dbb;  */

long FUN_10a433d7c(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a433dbc; end: 10a433dd3;  */

void FUN_10a433dbc(long param_1)

{
  FUN_10a4392e8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433dd4; end: 10a433ddb;  */

/* WARNING: Removing unreachable block (ram,0x00010a4393d8) */

void FUN_10a433dd4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)param_1[0x8c])(param_1 + 0x8c);
  (**(code **)param_1[0x84])(param_1 + 0x84);
  (**(code **)param_1[0x7c])(param_1 + 0x7c);
  (**(code **)param_1[0x74])(param_1 + 0x74);
  (**(code **)param_1[0x6c])(param_1 + 0x6c);
  (**(code **)param_1[100])(param_1 + 100);
  if (param_1[0x60] != 0) {
    param_1[0x61] = param_1[0x60];
    __ZdlPv();
  }
  FUN_10a439460(param_1 + 0x5b);
  FUN_10a439460(param_1 + 0x56);
  func_0x00010a1f9d6c(param_1 + 0x51);
  if (param_1[0x4e] != 0) {
    param_1[0x4f] = param_1[0x4e];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x4b);
  if (param_1[0x48] != 0) {
    param_1[0x49] = param_1[0x48];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x45);
  lVar3 = param_1[0x42];
  if (lVar3 != 0) {
    lVar4 = param_1[0x43];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x42];
    }
    param_1[0x43] = lVar3;
    __ZdlPv(lVar1);
  }
  lVar3 = param_1[0x3f];
  if (lVar3 != 0) {
    lVar4 = param_1[0x40];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x50;
        func_0x00010a43548c(lVar4);
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x3f];
    }
    param_1[0x40] = lVar3;
    __ZdlPv(lVar1);
  }
  func_0x00010a004e5c(param_1 + 0x3d);
  FUN_10a43fab8(param_1 + 0x3b);
  func_0x00010a435430(param_1 + 0x38);
  param_1[-7] = &PTR_FUN_110bd7540;
  param_1[-5] = &PTR_DAT_110bcfec8;
  *param_1 = &PTR_DAT_110bcff20;
  param_1[6] = &PTR_DAT_110bcff40;
  param_1[0xf] = &PTR_DAT_110bcffb0;
  param_1[0x94] = &PTR_DAT_110bd7670;
  param_1[0x10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x2e);
  (**(code **)param_1[0x2f])(param_1 + 0x2f);
  func_0x00010a004e5c(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    __ZdlPv(param_1[0x23]);
  }
  param_1[0x10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x10);
  lVar3 = param_1[0xd];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0xe];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  lVar3 = param_1[0xb];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[0xc];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  lVar3 = param_1[9];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[10];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -7);
  return;
}



/* Entry: 10a433ddc; end: 10a433df3;  */

void FUN_10a433ddc(long param_1)

{
  FUN_10a4392e8(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433df4; end: 10a433dfb;  */

/* WARNING: Removing unreachable block (ram,0x00010a4393d8) */

void FUN_10a433df4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)param_1[0x86])(param_1 + 0x86);
  (**(code **)param_1[0x7e])(param_1 + 0x7e);
  (**(code **)param_1[0x76])(param_1 + 0x76);
  (**(code **)param_1[0x6e])(param_1 + 0x6e);
  (**(code **)param_1[0x66])(param_1 + 0x66);
  (**(code **)param_1[0x5e])(param_1 + 0x5e);
  if (param_1[0x5a] != 0) {
    param_1[0x5b] = param_1[0x5a];
    __ZdlPv();
  }
  FUN_10a439460(param_1 + 0x55);
  FUN_10a439460(param_1 + 0x50);
  func_0x00010a1f9d6c(param_1 + 0x4b);
  if (param_1[0x48] != 0) {
    param_1[0x49] = param_1[0x48];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x45);
  if (param_1[0x42] != 0) {
    param_1[0x43] = param_1[0x42];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x3f);
  lVar3 = param_1[0x3c];
  if (lVar3 != 0) {
    lVar4 = param_1[0x3d];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x3c];
    }
    param_1[0x3d] = lVar3;
    __ZdlPv(lVar1);
  }
  lVar3 = param_1[0x39];
  if (lVar3 != 0) {
    lVar4 = param_1[0x3a];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x50;
        func_0x00010a43548c(lVar4);
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x39];
    }
    param_1[0x3a] = lVar3;
    __ZdlPv(lVar1);
  }
  func_0x00010a004e5c(param_1 + 0x37);
  FUN_10a43fab8(param_1 + 0x35);
  func_0x00010a435430(param_1 + 0x32);
  param_1[-0xd] = &PTR_FUN_110bd7540;
  param_1[-0xb] = &PTR_DAT_110bcfec8;
  param_1[-6] = &PTR_DAT_110bcff20;
  *param_1 = &PTR_DAT_110bcff40;
  param_1[9] = &PTR_DAT_110bcffb0;
  param_1[0x8e] = &PTR_DAT_110bd7670;
  param_1[10] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x28);
  (**(code **)param_1[0x29])(param_1 + 0x29);
  func_0x00010a004e5c(param_1 + 0x26);
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
  param_1[10] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 10);
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[8];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[6];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[4];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[2];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -0xd);
  return;
}



/* Entry: 10a433dfc; end: 10a433e13;  */

void FUN_10a433dfc(long param_1)

{
  FUN_10a4392e8(param_1 + -0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433e14; end: 10a433e1b;  */

/* WARNING: Removing unreachable block (ram,0x00010a4393d8) */

void FUN_10a433e14(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  (**(code **)param_1[0x7d])(param_1 + 0x7d);
  (**(code **)param_1[0x75])(param_1 + 0x75);
  (**(code **)param_1[0x6d])(param_1 + 0x6d);
  (**(code **)param_1[0x65])(param_1 + 0x65);
  (**(code **)param_1[0x5d])(param_1 + 0x5d);
  (**(code **)param_1[0x55])(param_1 + 0x55);
  if (param_1[0x51] != 0) {
    param_1[0x52] = param_1[0x51];
    __ZdlPv();
  }
  FUN_10a439460(param_1 + 0x4c);
  FUN_10a439460(param_1 + 0x47);
  func_0x00010a1f9d6c(param_1 + 0x42);
  if (param_1[0x3f] != 0) {
    param_1[0x40] = param_1[0x3f];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x3c);
  if (param_1[0x39] != 0) {
    param_1[0x3a] = param_1[0x39];
    __ZdlPv();
  }
  func_0x00010a4394a8(param_1 + 0x36);
  lVar3 = param_1[0x33];
  if (lVar3 != 0) {
    lVar4 = param_1[0x34];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x33];
    }
    param_1[0x34] = lVar3;
    __ZdlPv(lVar1);
  }
  lVar3 = param_1[0x30];
  if (lVar3 != 0) {
    lVar4 = param_1[0x31];
    lVar1 = lVar3;
    if (lVar4 != lVar3) {
      do {
        lVar4 = lVar4 + -0x50;
        func_0x00010a43548c(lVar4);
      } while (lVar4 != lVar3);
      lVar1 = param_1[0x30];
    }
    param_1[0x31] = lVar3;
    __ZdlPv(lVar1);
  }
  func_0x00010a004e5c(param_1 + 0x2e);
  FUN_10a43fab8(param_1 + 0x2c);
  func_0x00010a435430(param_1 + 0x29);
  param_1[-0x16] = &PTR_FUN_110bd7540;
  param_1[-0x14] = &PTR_DAT_110bcfec8;
  param_1[-0xf] = &PTR_DAT_110bcff20;
  param_1[-9] = &PTR_DAT_110bcff40;
  *param_1 = &PTR_DAT_110bcffb0;
  param_1[0x85] = &PTR_DAT_110bd7670;
  param_1[1] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1f);
  (**(code **)param_1[0x20])(param_1 + 0x20);
  func_0x00010a004e5c(param_1 + 0x1d);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    __ZdlPv(param_1[0x14]);
  }
  param_1[1] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 1);
  lVar3 = param_1[-2];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[-1];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[-2] = 0;
    param_1[-1] = 0;
  }
  lVar3 = param_1[-4];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[-3];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[-4] = 0;
    param_1[-3] = 0;
  }
  lVar3 = param_1[-6];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[-5];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[-6] = 0;
    param_1[-5] = 0;
  }
  lVar3 = param_1[-8];
  if (lVar3 != 0) {
    plVar2 = (long *)param_1[-7];
    *plVar2 = lVar3;
    *(long **)(lVar3 + 8) = plVar2;
    param_1[-8] = 0;
    param_1[-7] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1 + -0x16);
  return;
}



/* Entry: 10a433e1c; end: 10a433e33;  */

void FUN_10a433e1c(long param_1)

{
  FUN_10a4392e8(param_1 + -0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433e34; end: 10a433e6f;  */

undefined8 FUN_10a433e34(void)

{
  return 0x6ea58d5d8483316c;
}



/* Entry: 10a433e70; end: 10a433e87;  */

void FUN_10a433e70(long param_1)

{
  FUN_10a4392e8(param_1 + -0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a433e88; end: 10a433e97;  */

/* WARNING: Removing unreachable block (ram,0x00010a4393d8) */

void FUN_10a433e88(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  (**(code **)puVar1[0x93])(puVar1 + 0x93);
  (**(code **)puVar1[0x8b])(puVar1 + 0x8b);
  (**(code **)puVar1[0x83])(puVar1 + 0x83);
  (**(code **)puVar1[0x7b])(puVar1 + 0x7b);
  (**(code **)puVar1[0x73])(puVar1 + 0x73);
  (**(code **)puVar1[0x6b])(puVar1 + 0x6b);
  if (puVar1[0x67] != 0) {
    puVar1[0x68] = puVar1[0x67];
    __ZdlPv();
  }
  FUN_10a439460(puVar1 + 0x62);
  FUN_10a439460(puVar1 + 0x5d);
  func_0x00010a1f9d6c(puVar1 + 0x58);
  if (puVar1[0x55] != 0) {
    puVar1[0x56] = puVar1[0x55];
    __ZdlPv();
  }
  func_0x00010a4394a8(puVar1 + 0x52);
  if (puVar1[0x4f] != 0) {
    puVar1[0x50] = puVar1[0x4f];
    __ZdlPv();
  }
  func_0x00010a4394a8(puVar1 + 0x4c);
  lVar4 = puVar1[0x49];
  if (lVar4 != 0) {
    lVar5 = puVar1[0x4a];
    lVar2 = lVar4;
    if (lVar5 != lVar4) {
      do {
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != lVar4);
      lVar2 = puVar1[0x49];
    }
    puVar1[0x4a] = lVar4;
    __ZdlPv(lVar2);
  }
  lVar4 = puVar1[0x46];
  if (lVar4 != 0) {
    lVar5 = puVar1[0x47];
    lVar2 = lVar4;
    if (lVar5 != lVar4) {
      do {
        lVar5 = lVar5 + -0x50;
        func_0x00010a43548c(lVar5);
      } while (lVar5 != lVar4);
      lVar2 = puVar1[0x46];
    }
    puVar1[0x47] = lVar4;
    __ZdlPv(lVar2);
  }
  func_0x00010a004e5c(puVar1 + 0x44);
  FUN_10a43fab8(puVar1 + 0x42);
  func_0x00010a435430(puVar1 + 0x3f);
  *puVar1 = &PTR_FUN_110bd7540;
  puVar1[2] = &PTR_DAT_110bcfec8;
  puVar1[7] = &PTR_DAT_110bcff20;
  puVar1[0xd] = &PTR_DAT_110bcff40;
  puVar1[0x16] = &PTR_DAT_110bcffb0;
  puVar1[0x9b] = &PTR_DAT_110bd7670;
  puVar1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(puVar1 + 0x35);
  (**(code **)puVar1[0x36])(puVar1 + 0x36);
  func_0x00010a004e5c(puVar1 + 0x33);
  if (*(char *)((long)puVar1 + 0x167) < '\0') {
    __ZdlPv(puVar1[0x2a]);
  }
  puVar1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(puVar1 + 0x17);
  lVar4 = puVar1[0x14];
  if (lVar4 != 0) {
    plVar3 = (long *)puVar1[0x15];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
  }
  lVar4 = puVar1[0x12];
  if (lVar4 != 0) {
    plVar3 = (long *)puVar1[0x13];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
  }
  lVar4 = puVar1[0x10];
  if (lVar4 != 0) {
    plVar3 = (long *)puVar1[0x11];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  lVar4 = puVar1[0xe];
  if (lVar4 != 0) {
    plVar3 = (long *)puVar1[0xf];
    *plVar3 = lVar4;
    *(long **)(lVar4 + 8) = plVar3;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(puVar1);
  return;
}



/* Entry: 10a433e98; end: 10a433ec7;  */

void FUN_10a433e98(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a4392e8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a433ec8; end: 10a433f6f;  */

long FUN_10a433ec8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a433f70; end: 10a434157;  */

undefined8 * FUN_10a433f70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bd5bb0;
  param_1[2] = &PTR_DAT_110bd5c10;
  func_0x00010a05248c(param_1 + 9);
  func_0x00010a05248c(param_1 + 7);
  func_0x00010a05248c(param_1 + 5);
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a434158; end: 10a434167;  */

long FUN_10a434158(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a434168; end: 10a4344e3;  */

void FUN_10a434168(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a1932f0(param_1 + 0x9e);
  func_0x00010a193298(param_1 + 0x9c);
  param_1[-2] = &PTR_FUN_110bd8200;
  *param_1 = &PTR_DAT_110bd5880;
  param_1[5] = &PTR_DAT_110bd58d8;
  param_1[0xb] = &PTR_DAT_110bd58f8;
  param_1[0x14] = &PTR_DAT_110bd5968;
  param_1[0xa0] = &PTR_DAT_110bd8460;
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
  FUN_10a66a924(param_1 + -2,&PTR_PTR_110bd6108);
  return;
}



/* Entry: 10a4344e4; end: 10a43451b;  */

long FUN_10a4344e4(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a43451c; end: 10a43476b;  */

void FUN_10a43451c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[0x3c] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x45);
  FUN_10a44a358(param_1 + 0x3e);
  param_1[-2] = &PTR_FUN_110bd8828;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x4a] = &PTR_DAT_110bd8958;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
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
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a43476c; end: 10a43479f;  */

undefined8 FUN_10a43476c(void)

{
  return 0xcc065e1a2996816;
}



/* Entry: 10a4347a0; end: 10a434bb7;  */

void FUN_10a4347a0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  param_1[0x27] = &PTR_DAT_110bd6470;
  func_0x00010a1f9d6c(param_1 + 0x30);
  FUN_10a44a358(param_1 + 0x29);
  param_1[-0x17] = &PTR_FUN_110bd8828;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x35] = &PTR_DAT_110bd8958;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a434bb8; end: 10a434c27;  */

long FUN_10a434bb8(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a434c28; end: 10a434c9b;  */

void FUN_10a434c28(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x45);
  func_0x00010a1f7460(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110bd8dc0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x49] = &PTR_DAT_110bd8ef0;
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



/* Entry: 10a434c9c; end: 10a434cd3;  */

long FUN_10a434c9c(long param_1)

{
  return param_1 + 0xb8;
}



/* Entry: 10a434cd4; end: 10a434ec3;  */

void FUN_10a434cd4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x43);
  func_0x00010a1f7460(param_1 + 0x3d);
  param_1[-2] = &PTR_FUN_110bd8dc0;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x47] = &PTR_DAT_110bd8ef0;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
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
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10a434ec4; end: 10a434ef7;  */

undefined8 FUN_10a434ec4(void)

{
  return 0x5b791445539073a5;
}



/* Entry: 10a434ef8; end: 10a434ff7;  */

void FUN_10a434ef8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x2e);
  func_0x00010a1f7460(param_1 + 0x28);
  param_1[-0x17] = &PTR_FUN_110bd8dc0;
  param_1[-0x15] = &PTR_DAT_110bcfec8;
  param_1[-0x10] = &PTR_DAT_110bcff20;
  param_1[-10] = &PTR_DAT_110bcff40;
  param_1[-1] = &PTR_DAT_110bcffb0;
  param_1[0x32] = &PTR_DAT_110bd8ef0;
  *param_1 = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x1e);
  (**(code **)param_1[0x1f])(param_1 + 0x1f);
  func_0x00010a004e5c(param_1 + 0x1c);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  *param_1 = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1);
  lVar1 = param_1[-3];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-2];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-3] = 0;
    param_1[-2] = 0;
  }
  lVar1 = param_1[-5];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-4];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-5] = 0;
    param_1[-4] = 0;
  }
  lVar1 = param_1[-7];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-6];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-7] = 0;
    param_1[-6] = 0;
  }
  lVar1 = param_1[-9];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[-8];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[-9] = 0;
    param_1[-8] = 0;
  }
  puStack_28 = param_1 + -0xd;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -0x17);
  return;
}



/* Entry: 10a434ff8; end: 10a435027;  */

void FUN_10a434ff8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000105277f8c(param_4);
  func_0x000105277f8c(param_3);
  func_0x000105277f8c();
  if (*(char *)(param_3 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_3 + 0x10));
  }
  if (*(long *)(param_3 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a435028; end: 10a4350a7;  */

void FUN_10a435028(long param_1)

{
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10a4350a8; end: 10a4350bb;  */

undefined1  [16] FUN_10a4350a8(undefined8 param_1,undefined8 param_2)

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
    FUN_10a43beb0();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10a4350bc; end: 10a43513b;  */

undefined1  [16] FUN_10a4350bc(long *param_1,undefined8 param_2)

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
    FUN_10a43beb0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10a43513c; end: 10a435163;  */

undefined8 * FUN_10a43513c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar4 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar4 = param_2;
  puVar4[1] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(puVar4 + 2,*param_4,param_4[1]);
  }
  else {
    uVar6 = param_4[1];
    uVar5 = *param_4;
    puVar4[4] = param_4[2];
    puVar4[3] = uVar6;
    puVar4[2] = uVar5;
  }
  return puVar4;
}



/* Entry: 10a435164; end: 10a4351df;  */

undefined8 * FUN_10a435164(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar5 = param_4[1];
    uVar4 = *param_4;
    param_1[4] = param_4[2];
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  return param_1;
}



/* Entry: 10a4351e0; end: 10a4351f3;  */

long * FUN_10a4351e0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x28;
    func_0x00010a435068();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a4351f4; end: 10a43523f;  */

long * FUN_10a4351f4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    func_0x00010a435068();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a435240; end: 10a435253;  */

long * FUN_10a435240(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
      FUN_10a4352e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4352c8);
      (*pcVar1)();
    }
    puVar5 = (undefined8 *)(param_2 << 3);
    puVar3 = puVar5;
    __Znwm();
    *plVar2 = (long)puVar3;
    plVar2[1] = (long)puVar3;
    plVar2[2] = (long)(puVar3 + param_2);
    puVar4 = puVar3;
    do {
      *puVar4 = param_3;
      puVar5 = puVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (puVar5 != (undefined8 *)0x0);
    plVar2[1] = (long)(puVar3 + param_2);
  }
  return plVar2;
}



/* Entry: 10a435254; end: 10a4352e3;  */

long * FUN_10a435254(long *param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
      FUN_10a4352e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4352c8);
      (*pcVar1)();
    }
    puVar4 = (undefined8 *)(param_2 << 3);
    puVar2 = puVar4;
    __Znwm();
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)(puVar2 + param_2);
    puVar3 = puVar2;
    do {
      *puVar3 = param_3;
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (puVar4 != (undefined8 *)0x0);
    param_1[1] = (long)(puVar2 + param_2);
  }
  return param_1;
}



/* Entry: 10a4352e4; end: 10a4352f7;  */

undefined8 * FUN_10a4352e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  puVar3 = (undefined8 *)(puVar1 + 8);
  puVar5 = (undefined8 *)*puVar3;
  puVar4 = puVar3;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      puVar2 = puVar5 + 4;
      FUN_10a003e3c(puVar2,param_2);
      if (-1 < (char)puVar2) {
        puVar4 = puVar5;
      }
      puVar5 = *(undefined8 **)((long)puVar5 + ((ulong)puVar2 >> 4 & 8));
    } while (puVar5 != (undefined8 *)0x0);
    if ((puVar4 != puVar3) && (FUN_10a003e3c(param_2,puVar4 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return puVar4;
    }
  }
  return puVar3;
}



/* Entry: 10a4352f8; end: 10a435373;  */

long * FUN_10a4352f8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a435374; end: 10a435387;  */

void FUN_10a435374(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  for (lVar2 = *(long *)(puVar1 + 8); lVar2 != param_2; lVar2 = lVar2 + -0x30) {
    func_0x00010a43bf08(lVar2 + -0x10);
    func_0x00010a43beb0(lVar2 + -0x20);
  }
  *(long *)(puVar1 + 8) = param_2;
  return;
}



/* Entry: 10a435388; end: 10a4353df;  */

void FUN_10a435388(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x30) {
    func_0x00010a43bf08(lVar1 + -0x10);
    func_0x00010a43beb0(lVar1 + -0x20);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a4353e0; end: 10a43542f;  */

void FUN_10a4353e0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000105277f8c(param_3);
  func_0x000105277f8c(param_3);
  func_0x000105277f8c(param_2);
  func_0x000105277f8c(param_3);
  func_0x000105277f8c();
  lVar3 = *param_3;
  if (lVar3 != 0) {
    lVar1 = param_3[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a0e3264();
      } while (lVar1 != lVar3);
      lVar2 = *param_3;
    }
    param_3[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a435430; end: 10a43550f;  */

void FUN_10a435430(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10a0e3264();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10a435510; end: 10a435577;  */

void FUN_10a435510(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = FUN_10a435578;
  param_1[1] = &PTR_FUN_110bd8fa8;
  uVar1 = 0x40;
  __Znwm();
  func_0x00010a435c64();
  param_1[2] = uVar1;
  return;
}



/* Entry: 10a435578; end: 10a4355c3;  */

void FUN_10a435578(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 *puStack_20;
  long lStack_18;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = *(undefined4 *)(param_1 + 2);
  lStack_18 = (long)*(char *)((long)puVar1 + 0x17);
  puStack_20 = puVar1;
  if (lStack_18 < 0) {
    puStack_20 = (undefined8 *)*puVar1;
    lStack_18 = puVar1[1];
  }
  FUN_10a4355c4(puVar1[6],&puStack_20,&uStack_40);
  return;
}



/* Entry: 10a4355c4; end: 10a4357a3;  */

void FUN_10a4355c4(undefined ***param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *unaff_x20;
  undefined **ppuVar12;
  undefined8 *puStack_170;
  long *plStack_168;
  int aiStack_160 [2];
  undefined8 *puStack_158;
  undefined4 auStack_150 [2];
  undefined1 auStack_148 [8];
  int aiStack_140 [2];
  long lStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_128;
  undefined1 *puStack_120;
  undefined ***pppuStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined ***pppuStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  puVar10 = param_3;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar6 = param_1;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppuVar6 = (undefined ***)*param_2;
      puVar9 = (undefined8 *)param_2[1];
      ppuStack_88 = (undefined **)param_3[1];
      uStack_90 = *param_3;
      puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,*(undefined4 *)(param_3 + 2));
      puVar10 = &uStack_90;
      (*(code *)*param_1)();
    }
  }
  else {
    pppuVar5 = param_1;
    puVar8 = param_2;
    FUN_10a688b40();
    if (pppuVar5 == (undefined ***)0x0) {
      pppuVar6 = (undefined ***)0x0;
      puVar9 = (undefined8 *)0x0;
      unaff_x20 = puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        ppuVar12 = *param_1;
        param_1 = (undefined ***)param_1[1];
        if (param_1 != (undefined ***)0x0) {
          pppuVar6 = param_1 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
            if (bVar2) {
              *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        uStack_b0 = param_2[1];
        uStack_b8 = *param_2;
        uStack_a0 = param_3[1];
        uStack_a8 = *param_3;
        uStack_98 = *(undefined4 *)(param_3 + 2);
        uStack_90 = 0x10a435a34;
        ppuStack_88 = &PTR_FUN_110bd8f90;
        puVar7 = (undefined8 *)0x38;
        ppuStack_c8 = ppuVar12;
        pppuStack_c0 = param_1;
        __Znwm();
        param_2 = &uStack_90;
        *puVar7 = ppuVar12;
        puVar7[1] = param_1;
        ppuStack_c8 = (undefined **)0x0;
        pppuStack_c0 = (undefined ***)0x0;
        puVar7[3] = uStack_b0;
        puVar7[2] = uStack_b8;
        puVar7[5] = uStack_a0;
        puVar7[4] = uStack_a8;
        *(undefined4 *)(puVar7 + 6) = uStack_98;
        puVar9 = &uStack_90;
        puStack_80 = puVar7;
        FUN_10a4634ec(puVar8);
        pppuVar6 = &ppuStack_88;
        (*(code *)*ppuStack_88)();
      }
    }
    else {
      *pppuVar5 = (undefined **)CONCAT44((int)((ulong)*pppuVar5 >> 0x20) + 1,(int)*pppuVar5 + 1);
      pppuVar6 = (undefined ***)*param_1;
      FUN_10a4357a4();
      iVar3 = *(int *)((long)pppuVar5 + 4) + -1;
      *(int *)((long)pppuVar5 + 4) = iVar3;
      puVar10 = param_3;
      if (iVar3 == 0) {
        *(undefined4 *)pppuVar5 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_88)(param_2 + 1);
  func_0x00010a004dac(&ppuStack_c8);
  pppuVar5 = pppuVar6;
  __Unwind_Resume();
  pcStack_d8 = FUN_10a4357a4;
  pppuStack_100 = param_1;
  puStack_f8 = param_2;
  puStack_f0 = unaff_x20;
  pppuStack_e8 = pppuVar6;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x000109884c0c(&pppuStack_130,pppuVar5 + 1,*pppuVar5);
  func_0x000109884820(&plStack_168,&pppuStack_130,*pppuVar5);
  if (pppuStack_130 != (undefined ***)0x0) {
    (*(code *)**pppuStack_130)();
  }
  (**(code **)(**pppuVar5 + 0x30))(&puStack_170);
  ppuVar12 = *pppuVar5;
  (**(code **)(*ppuVar12 + 0x128))(auStack_148,ppuVar12,*puVar9,puVar9[1]);
  auStack_150[0] = 6;
  if (*(uint *)(puVar10 + 2) != 0xffffffff) {
    pppuStack_130 = &ppuStack_110;
    ppuStack_110 = ppuVar12;
    (*(code *)(&PTR_FUN_110bd8f68)[*(uint *)(puVar10 + 2)])(aiStack_140,&pppuStack_130,puVar10);
    uStack_108 = 2;
    ppuStack_110 = (undefined **)auStack_150;
    (**(code **)(*ppuVar12 + 0x58))(ppuVar12);
    pppuStack_130 = (undefined ***)&plStack_168;
    ppuStack_128 = ppuVar12;
    puStack_120 = (undefined1 *)&puStack_170;
    pppuStack_118 = &ppuStack_110;
    func_0x0001098960c0(aiStack_160);
    if ((3 < aiStack_160[0]) && (puStack_158 != (undefined8 *)0x0)) {
      (**(code **)*puStack_158)();
    }
    lVar11 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_140 + lVar11)) &&
         (*(undefined8 **)((long)&lStack_138 + lVar11) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_138 + lVar11))();
      }
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != -0x20);
    if (puStack_170 != (undefined8 *)0x0) {
      (**(code **)*puStack_170)();
    }
    if ((undefined **)plStack_168 != (undefined **)0x0) {
      (**(code **)*plStack_168)();
    }
    return;
  }
  func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a435940);
  (*pcVar4)();
}



/* Entry: 10a4357a4; end: 10a4359eb;  */

void FUN_10a4357a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_a0;
  long *plStack_98;
  int aiStack_90 [2];
  undefined8 *puStack_88;
  undefined4 auStack_80 [2];
  undefined1 auStack_78 [8];
  int aiStack_70 [2];
  long lStack_68;
  long **pplStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  long **pplStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&pplStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&plStack_98,&pplStack_60,*param_1);
  if (pplStack_60 != (long **)0x0) {
    (*(code *)**pplStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_a0);
  plVar3 = (long *)*param_1;
  (**(code **)(*plVar3 + 0x128))(auStack_78,plVar3,*param_2,param_2[1]);
  auStack_80[0] = 6;
  if (*(uint *)(param_3 + 0x10) != 0xffffffff) {
    pplStack_60 = &plStack_40;
    plStack_40 = plVar3;
    (*(code *)(&PTR_FUN_110bd8f68)[*(uint *)(param_3 + 0x10)])(aiStack_70,&pplStack_60,param_3);
    uStack_38 = 2;
    plStack_40 = (long *)auStack_80;
    (**(code **)(*plVar3 + 0x58))(plVar3);
    pplStack_60 = &plStack_98;
    plStack_58 = plVar3;
    puStack_50 = (undefined1 *)&puStack_a0;
    pplStack_48 = &plStack_40;
    func_0x0001098960c0(aiStack_90);
    if ((3 < aiStack_90[0]) && (puStack_88 != (undefined8 *)0x0)) {
      (**(code **)*puStack_88)();
    }
    lVar2 = 0;
    do {
      if ((3 < *(int *)((long)aiStack_70 + lVar2)) &&
         (*(undefined8 **)((long)&lStack_68 + lVar2) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)((long)&lStack_68 + lVar2))();
      }
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != -0x20);
    if (puStack_a0 != (undefined8 *)0x0) {
      (**(code **)*puStack_a0)();
    }
    if (plStack_98 != (long *)0x0) {
      (**(code **)*plStack_98)();
    }
    return;
  }
  func_0x00010988bd28(&UNK_10f634b57);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a435940);
  (*pcVar1)();
}



/* Entry: 10a4359ec; end: 10a435a43;  */

void FUN_10a4359ec(undefined4 *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_3;
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)fVar1;
  return;
}



/* Entry: 10a435a44; end: 10a435a63;  */

void FUN_10a435a44(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010a004dac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10a435a64; end: 10a435a7b;  */

void FUN_10a435a64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a435a7c; end: 10a435acb;  */

void FUN_10a435a7c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010a435d00(puVar1 + 6);
    func_0x00010a435d58(puVar1 + 4);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a435acc; end: 10a435ae3;  */

void FUN_10a435acc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a435ae4; end: 10a435bc7;  */

void FUN_10a435ae4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar5 + (param_2[1] - (long)puVar2));
  puVar4 = puVar5;
  puVar6 = puVar1;
  if (puVar2 != puVar5) {
    do {
      *puVar6 = *puVar4;
      (**(code **)(puVar4[1] + 0x10))(puVar6 + 1,puVar4 + 1);
      puVar4 = puVar4 + 8;
      puVar6 = puVar6 + 8;
    } while (puVar4 != puVar2);
    puVar5 = puVar5 + 1;
    do {
      puVar4 = puVar5 + 7;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 8;
    } while (puVar4 != puVar2);
    puVar5 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar5;
  param_2[1] = puVar5;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10a435bc8; end: 10a435bdb;  */

undefined1  [16] FUN_10a435bc8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3a == 0) {
    lVar2 = (long)plVar1 << 6;
    __Znwm(lVar2);
    auVar5._8_8_ = plVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar1[2] = lVar3 + -0x40;
    (*(code *)*puVar4)();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 10a435bdc; end: 10a435e0f;  */

undefined1  [16] FUN_10a435bdc(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if ((ulong)param_1 >> 0x3a == 0) {
    lVar1 = (long)param_1 << 6;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x40;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10a435e10; end: 10a435f53;  */

void FUN_10a435e10(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (param_2[2] != 0) {
    ___dynamic_cast(param_2[2],&PTR_DAT_110c41a40,&PTR_DAT_110ba1ed8,0xfffffffffffffffe);
  }
  uVar3 = *(undefined4 *)(lVar2 + 0x50);
  (**(code **)(lVar1 + 0xc0))
            (uVar3,*(undefined4 *)(param_1 + 0x20),(int)param_2[3],*(undefined4 *)(lVar2 + 0x5c));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  return;
}



/* Entry: 10a435f54; end: 10a43601f;  */

undefined8 * FUN_10a435f54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd9040;
  func_0x00010a435edc(param_1 + 1);
  return param_1;
}



/* Entry: 10a436020; end: 10a436083;  */

void FUN_10a436020(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 auStack_48 [2];
  undefined4 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 8) {
    auStack_48[0] = *(undefined8 *)(param_1 + 0x20);
    uStack_38 = 1;
    (*(code *)*puVar2)(auStack_48,puVar2);
  }
  return;
}



/* Entry: 10a436084; end: 10a4360e3;  */

undefined8 * FUN_10a436084(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd9040;
  func_0x00010a435edc(param_1 + 1);
  return param_1;
}



/* Entry: 10a4360e4; end: 10a4361cb;  */

void FUN_10a4360e4(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    ___dynamic_cast(lVar3,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ad8,0xfffffffffffffffe);
  }
  uVar4 = *(undefined4 *)(lVar2 + 0x50);
  uVar5 = (undefined4)param_2[3];
  uVar6 = *(undefined4 *)(lVar2 + 0x5c);
  (**(code **)(lVar1 + 0x80))(param_1 + 0x20,lVar3,(undefined8 *)(lVar1 + 0x80));
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  return;
}



/* Entry: 10a4361cc; end: 10a43629b;  */

undefined8 * FUN_10a4361cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd9040;
  func_0x00010a435edc(param_1 + 1);
  return param_1;
}



/* Entry: 10a43629c; end: 10a4362ff;  */

void FUN_10a43629c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != puVar1; puVar2 = puVar2 + 8) {
    uStack_48 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x20);
    uStack_40 = 3;
    (*(code *)*puVar2)(&uStack_50,puVar2);
  }
  return;
}



/* Entry: 10a436300; end: 10a43635f;  */

undefined8 * FUN_10a436300(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bd9040;
  func_0x00010a435edc(param_1 + 1);
  return param_1;
}



/* Entry: 10a436360; end: 10a43643f;  */

void FUN_10a436360(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_s3;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    ___dynamic_cast(lVar3,&PTR_DAT_110c41a40,&PTR_DAT_110ba1ae8,0xfffffffffffffffe);
  }
  uVar4 = *(undefined4 *)(lVar2 + 0x50);
  uVar5 = (undefined4)param_2[3];
  uVar6 = *(undefined4 *)(lVar2 + 0x5c);
  (**(code **)(lVar1 + 0x40))(param_1 + 0x20,lVar3,(undefined8 *)(lVar1 + 0x40));
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = in_s3;
  return;
}



/* Entry: 10a436440; end: 10a4364a7;  */

void FUN_10a436440(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = FUN_10a4364a8;
  param_1[1] = &PTR_FUN_110bd91e0;
  uVar1 = 0x40;
  __Znwm();
  func_0x00010a435c64();
  param_1[2] = uVar1;
  return;
}



/* Entry: 10a4364a8; end: 10a4364f3;  */

void FUN_10a4364a8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 *puStack_20;
  long lStack_18;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = *(undefined4 *)(param_1 + 2);
  lStack_18 = (long)*(char *)((long)puVar1 + 0x17);
  puStack_20 = puVar1;
  if (lStack_18 < 0) {
    puStack_20 = (undefined8 *)*puVar1;
    lStack_18 = puVar1[1];
  }
  FUN_10a4355c4(puVar1[6],&puStack_20,&uStack_40);
  return;
}



/* Entry: 10a4364f4; end: 10a436543;  */

void FUN_10a4364f4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010a435d00(puVar1 + 6);
    func_0x00010a435d58(puVar1 + 4);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      __ZdlPv(*puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a436544; end: 10a43655b;  */

void FUN_10a436544(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10a43655c; end: 10a43656f;  */

undefined1  [16] FUN_10a43655c(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  puVar4 = (undefined4 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar4 >> 0x3c == 0) {
    lVar5 = (long)puVar4 << 4;
    __Znwm(lVar5);
    auVar9._8_8_ = puVar4;
    auVar9._0_8_ = lVar5;
    return auVar9;
  }
  func_0x000109ffded8();
  *puVar4 = *param_2;
  lVar5 = *(long *)(param_2 + 4);
  uVar7 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar4 + 2) = uVar7;
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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    puVar6 = *(undefined4 **)(param_2 + 6);
    func_0x000107c3192c(puVar4 + 6,puVar6,*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar7 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(puVar4 + 8) = uVar8;
    *(undefined8 *)(puVar4 + 6) = uVar7;
    puVar6 = param_2;
  }
  auVar10._8_8_ = puVar6;
  auVar10._0_8_ = puVar4;
  return auVar10;
}



/* Entry: 10a436570; end: 10a4365a3;  */

undefined1  [16] FUN_10a436570(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar4 = (long)param_1 << 4;
    __Znwm(lVar4);
    auVar8._8_8_ = param_1;
    auVar8._0_8_ = lVar4;
    return auVar8;
  }
  func_0x000109ffded8();
  *param_1 = *param_2;
  lVar4 = *(long *)(param_2 + 4);
  uVar6 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar6;
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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    puVar5 = *(undefined4 **)(param_2 + 6);
    func_0x000107c3192c(param_1 + 6,puVar5,*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar7;
    *(undefined8 *)(param_1 + 6) = uVar6;
    puVar5 = param_2;
  }
  auVar9._8_8_ = puVar5;
  auVar9._0_8_ = param_1;
  return auVar9;
}



/* Entry: 10a4365a4; end: 10a436633;  */

undefined4 * FUN_10a4365a4(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar5;
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
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    func_0x000107c3192c(param_1 + 6,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar5;
  }
  return param_1;
}



/* Entry: 10a436634; end: 10a43668b;  */

long FUN_10a436634(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
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



/* Entry: 10a43668c; end: 10a43669f;  */

void FUN_10a43668c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  if ((undefined4 *)0x555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        uVar2 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(param_4 + 2) = uVar2;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        uVar3 = *(undefined8 *)(puVar1 + 8);
        uVar2 = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(param_4 + 10) = *(undefined8 *)(puVar1 + 10);
        *(undefined8 *)(param_4 + 8) = uVar3;
        *(undefined8 *)(param_4 + 6) = uVar2;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(undefined8 *)(puVar1 + 10) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        puVar1 = puVar1 + 0xc;
        param_4 = param_4 + 0xc;
      } while (puVar1 != param_3);
      do {
        func_0x00010a436760(param_2);
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}



/* Entry: 10a4366a0; end: 10a4367db;  */

void FUN_10a4366a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((undefined4 *)0x555555555555555 < param_2) {
    func_0x000109ffded8();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        uVar2 = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(param_4 + 2) = uVar2;
        *(undefined8 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 4) = 0;
        uVar3 = *(undefined8 *)(puVar1 + 8);
        uVar2 = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(param_4 + 10) = *(undefined8 *)(puVar1 + 10);
        *(undefined8 *)(param_4 + 8) = uVar3;
        *(undefined8 *)(param_4 + 6) = uVar2;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(undefined8 *)(puVar1 + 10) = 0;
        *(undefined8 *)(puVar1 + 6) = 0;
        puVar1 = puVar1 + 0xc;
        param_4 = param_4 + 0xc;
      } while (puVar1 != param_3);
      do {
        func_0x00010a436760(param_2);
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 * 0x30);
  return;
}


