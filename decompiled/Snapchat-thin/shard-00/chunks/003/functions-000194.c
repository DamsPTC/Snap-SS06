/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100467040; end: 1004671a3;  */

void FUN_100467040(int param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  uint uVar9;
  
  FUN_1004605e0();
  uVar2 = param_1 << 1;
  uVar9 = uVar2;
  if (0x1f < uVar2) {
    uVar9 = 0x20;
  }
  if (uVar2 == 0) {
    uVar9 = 1;
  }
  uRam00000001136a2188 = (ulong)uVar9;
  lVar3 = uRam00000001136a2188 * 0xd8;
  FUN_100460860();
  lVar4 = uRam00000001136a2188 << 3;
  lRam00000001136a2180 = lVar3;
  FUN_100460860();
  uRam00000001136a2110 = 1;
  uRam00000001136a2108 = 0;
  puVar5 = (undefined8 *)0x1136a2118;
  lRam00000001136a2190 = lVar4;
  FUN_100460318();
  func_0x000100460dc4();
  uVar6 = *puVar5;
  FUN_1004671a4();
  ppuVar7 = &PTR___tlv_bootstrap_11340d990;
  uRam00000001136a2100 = uVar6;
  (*(code *)PTR___tlv_bootstrap_11340d990)();
  *ppuVar7 = (undefined *)0x0;
  if (uRam00000001136a2188 != 0) {
    uVar8 = 0;
    uVar9 = 1;
    do {
      lVar4 = lRam00000001136a2180 + uVar8 * 0xd8;
      FUN_100460318(lVar4);
      FUN_1004678e4(0x40083e0f83e0f83e,0x3fb999999999999a,0x3fe0000000000000,lVar4 + 0x40);
      *(undefined8 *)(lVar4 + 0x78) = uRam00000001136a2100;
      *(uint *)(lVar4 + 0x88) = uVar9 - 1;
      func_0x0001004678fc(lVar4 + 0x90);
      *(long *)(lVar4 + 0xb8) = lVar4 + 0xa0;
      *(long *)(lVar4 + 0xb0) = lVar4 + 0xa0;
      lVar3 = lVar4;
      FUN_100467914();
      *(long *)(lRam00000001136a2190 + uVar8 * 8) = lVar4;
      *(long *)(lVar4 + 0x80) = lVar3;
      uVar8 = (ulong)uVar9;
      uVar1 = (ulong)uVar9;
      uVar9 = uVar9 + 1;
    } while (uVar1 < uRam00000001136a2188);
  }
  return;
}



/* Entry: 1004671a4; end: 10046737f;  */

void FUN_1004671a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar1 = 0;
    FUN_100467380();
    FUN_1004674d8();
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return;
}



/* Entry: 100467380; end: 1004673ef;  */

void FUN_100467380(uint param_1,uint param_2)

{
  char *pcVar1;
  
  if (param_1 < 3) {
    (*(code *)PTR_DAT_1130a5808)();
    if (param_2 < 1000000000) {
      return;
    }
  }
  else {
    func_0x000107c2c170();
  }
  func_0x000107c2c174();
  pcVar1 = "GRPC_INIT_TIME_FIX";
  func_0x000107c60ffc();
  if (pcVar1 != (char *)0x0) {
    func_0x000107c613e8();
  }
  return;
}



/* Entry: 1004673f0; end: 1004674d7;  */

undefined1  [16] FUN_1004673f0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_2 >> 0x20;
  iVar3 = (int)(param_2 >> 0x20);
  uVar1 = param_2;
  if (iVar3 != (int)param_3) {
    if (param_1 + 0x8000000000000001U < 2) {
      uVar1 = param_2 & 0xffffffff | param_3 << 0x20;
    }
    else if ((int)param_3 == 3) {
      FUN_100467380(uVar4);
      FUN_10046778c(param_1,param_2,uVar4,uVar1);
      uVar1 = param_2;
    }
    else {
      FUN_100467380(param_3);
      if (iVar3 != 3) {
        uVar2 = uVar1;
        FUN_100467380(uVar4);
        FUN_10046778c(param_1,param_2,uVar4,uVar2);
      }
      FUN_10047e648(param_3,uVar1,param_1,param_2);
      param_1 = param_3;
    }
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 1004674d8; end: 100467527;  */

undefined8 *
FUN_1004674d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             ulong param_5)

{
  undefined8 *puVar1;
  double dVar2;
  
  FUN_1004673f0(param_4,param_5,0);
  puVar1 = puRam00000001136a1f48;
  if (puRam00000001136a1f48 == (undefined8 *)0x0) {
    puVar1 = param_4;
    FUN_100467528();
  }
  FUN_10046778c(param_4,param_5,puVar1,0);
  if (param_5 >> 0x20 == 3) {
    dVar2 = (double)(int)param_5 / 1000000.0 + (double)(long)param_4 * 1000.0;
    if (dVar2 <= -9.223372036854776e+18) {
      puVar1 = (undefined8 *)0x8000000000000000;
    }
    else if (9.223372036854776e+18 <= dVar2) {
      puVar1 = (undefined8 *)0x7fffffffffffffff;
    }
    else {
      puVar1 = (undefined8 *)(long)dVar2;
    }
    return puVar1;
  }
  func_0x000107c2c33c();
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[3] = 0;
  param_4[6] = param_1;
  return param_4;
}



/* Entry: 100467528; end: 10046771b;  */

undefined1  [16] FUN_100467528(double param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  lVar6 = 0x1136a1000;
  if ((bRam00000001136a1f60 & 1) == 0) goto LAB_1004676f4;
LAB_100467554:
  dVar8 = param_1;
  if (*(char *)(lVar6 + 0xf58) == '\0') {
    iVar7 = 0xb;
    do {
      func_0x000100467750();
      lVar6 = 0;
      param_1 = dVar8;
      FUN_100467380();
      func_0x000100467750();
      lVar4 = lVar6 + -1;
      if (lVar4 != 0) goto LAB_10046764c;
      uVar3 = 100;
      uVar5 = 3;
      FUN_10047e734(100,3);
      FUN_10047e648(lVar6,param_3,uVar3,uVar5);
      func_0x000104a6f57c();
      iVar7 = iVar7 + -1;
      dVar8 = param_1;
    } while (iVar7 != 0);
    param_3 = 0x5c;
  }
  else {
    iVar7 = 0x15;
    do {
      func_0x000100467750();
      lVar6 = 0;
      param_1 = dVar8;
      FUN_100467380();
      func_0x000100467750();
      lVar4 = lVar6 + -1;
      if (lVar4 != 0 && 0 < lVar6) goto LAB_10046764c;
      uVar3 = 100;
      uVar5 = 3;
      FUN_10047e734(100,3);
      FUN_10047e648(lVar6,param_3,uVar3,uVar5);
      func_0x000104a6f57c();
      iVar7 = iVar7 + -1;
      dVar8 = param_1;
    } while (iVar7 != 0);
    param_3 = 0x49;
  }
  goto LAB_1004676e8;
LAB_10046764c:
  param_1 = (param_1 + dVar8) * 0.5;
  if (param_1 == 0.0) {
    param_3 = 0x61;
LAB_1004676e8:
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/time.cc"
                  ,param_3,2,"assertion failed: %s");
    func_0x000107c60ebc();
LAB_1004676f4:
    iVar7 = 0x136a1f60;
    func_0x000107c60e48();
    if (iVar7 != 0) {
      func_0x00010046771c();
      *(char *)(lVar6 + 0xf58) = (char)iVar7;
      func_0x000107c60e4c(0x1136a1f60);
    }
    goto LAB_100467554;
  }
LAB_100467668:
  if (lRam00000001136a1f48 != 0) {
    ClearExclusiveLocal();
    do {
      lVar4 = lRam00000001136a1f48;
      dVar8 = dRam00000001136a1f50;
    } while (ABS(dRam00000001136a1f50) == 0.0);
LAB_1004676b0:
    dRam00000001136a1f50 = dVar8;
    auVar9._8_8_ = dRam00000001136a1f50;
    auVar9._0_8_ = lVar4;
    return auVar9;
  }
  cVar1 = '\x01';
  bVar2 = (bool)ExclusiveMonitorPass(0x1136a1f48,0x10);
  if (bVar2) {
    cVar1 = ExclusiveMonitorsStatus();
    lRam00000001136a1f48 = lVar4;
  }
  dVar8 = param_1;
  if (cVar1 == '\0') goto LAB_1004676b0;
  goto LAB_100467668;
}



/* Entry: 10046771c; end: 100467767;  */

void FUN_10046771c(void)

{
  char *pcVar1;
  
  pcVar1 = "GRPC_INIT_TIME_FIX";
  func_0x000107c60ffc();
  if (pcVar1 != (char *)0x0) {
    func_0x000107c613e8();
  }
  return;
}



/* Entry: 100467768; end: 10046778b;  */

double FUN_100467768(long param_1,int param_2)

{
  return (double)param_2 * 0.001 + (double)param_1 * 1000000.0;
}



/* Entry: 10046778c; end: 1004678e3;  */

undefined1  [16]
FUN_10046778c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             ulong param_5,ulong param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int extraout_w8;
  int extraout_w9;
  int iVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar6;
  
  iVar7 = (int)((ulong)param_7 >> 0x20);
  iVar4 = (int)param_7;
  uVar6 = param_5 >> 0x20;
  iVar5 = (int)(param_5 >> 0x20);
  if (iVar7 == 3) {
    if (-1 < iVar4) goto LAB_1004677b8;
    func_0x000107c2c168();
    iVar7 = extraout_w9;
    iVar5 = extraout_w8;
  }
  if (iVar5 != iVar7) {
    func_0x000107c2c16c();
    if (param_5 >> 0x20 == 3) {
      dVar8 = (double)(int)param_5 / 1000000.0 + (double)(long)param_4 * 1000.0;
      if (dVar8 <= -9.223372036854776e+18) {
        lVar3 = -0x8000000000000000;
      }
      else if (9.223372036854776e+18 <= dVar8) {
        lVar3 = 0x7fffffffffffffff;
      }
      else {
        lVar3 = (long)dVar8;
      }
      auVar10._8_8_ = param_5;
      auVar10._0_8_ = lVar3;
      return auVar10;
    }
    func_0x000107c2c33c();
    *param_4 = param_1;
    param_4[1] = param_2;
    param_4[2] = param_3;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[3] = 0;
    param_4[6] = param_1;
    auVar11._8_8_ = param_5;
    auVar11._0_8_ = param_4;
    return auVar11;
  }
  uVar6 = 3;
LAB_1004677b8:
  uVar2 = (int)param_5 - iVar4;
  uVar1 = uVar2 + 1000000000;
  if (iVar4 <= (int)param_5) {
    uVar1 = uVar2;
  }
  if (1 < (long)param_4 + 0x8000000000000001U) {
    if ((param_6 == 0x8000000000000000) ||
       (((long)param_6 < 1 && ((long)(param_6 + 0x7fffffffffffffff) <= (long)param_4)))) {
      uVar6 = 1;
      param_4 = (undefined8 *)0x7fffffffffffffff;
      param_5 = 0;
    }
    else if (((param_6 == 0x7fffffffffffffff) ||
             ((-1 < (long)param_6 && ((long)param_4 <= (long)(param_6 | 0x8000000000000000))))) ||
            (((int)uVar2 < 0 && ((long)param_4 - param_6 == -0x7fffffffffffffff)))) {
      uVar6 = 1;
      param_4 = (undefined8 *)0x8000000000000000;
      param_5 = 0;
    }
    else {
      param_4 = (undefined8 *)(((long)param_4 - param_6) - (ulong)(uVar2 >> 0x1f));
      param_5 = (ulong)uVar1;
    }
  }
  auVar9._8_8_ = param_5 & 0xffffffff | uVar6 << 0x20;
  auVar9._0_8_ = param_4;
  return auVar9;
}



/* Entry: 1004678e4; end: 100467913;  */

void FUN_1004678e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_4 = param_1;
  param_4[1] = param_2;
  param_4[2] = param_3;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[3] = 0;
  param_4[6] = param_1;
  return;
}



/* Entry: 100467914; end: 10046796f;  */

long FUN_100467914(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(param_1 + 0x90);
  plVar2 = plVar3;
  func_0x000100467904();
  if ((int)plVar2 == 0) {
    func_0x000104ac8688();
    lVar4 = *plVar3;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x78);
    lVar1 = lVar5;
    if (lVar5 != 0x7fffffffffffffff) {
      lVar1 = lVar5 + 1;
    }
    lVar4 = -0x8000000000000000;
    if (lVar5 != -0x8000000000000000) {
      lVar4 = lVar1;
    }
  }
  return lVar4;
}



/* Entry: 100467970; end: 100467a47;  */

undefined8 * FUN_100467970(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  puVar4 = (undefined8 *)0x0;
  puVar1 = param_1;
  do {
    while (plVar2 = (long *)param_1[1], plVar2 != (long *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      do {
        plVar3 = (long *)*plVar2;
        func_0x0001004bd8dc(&puStack_48,plVar2[3]);
        plVar2[3] = 0;
        puStack_50 = puStack_48;
        puStack_48 = (undefined8 *)0x36;
        (*(code *)plVar2[1])(plVar2[2],&puStack_50);
        if (((ulong)puStack_50 & 1) != 0) {
          FUN_10084dad0();
        }
        puVar1 = puStack_48;
        if (((ulong)puStack_48 & 1) != 0) {
          FUN_10084dad0();
        }
        plVar2 = plVar3;
      } while (plVar3 != (long *)0x0);
      puVar4 = (undefined8 *)0x1;
    }
    FUN_100467ab4();
  } while (((ulong)puVar1 & 1) != 0);
  if (param_1[3] == 0) {
    return puVar4;
  }
  func_0x000107c2c360();
  func_0x000104bd46a0();
  func_0x000104bd46a0();
  FUN_1004bdf74(&puStack_50);
  FUN_1004bdf74(&puStack_48);
  func_0x000107c60bd8();
  *puVar1 = &PTR_DAT_1107c0ee8;
  puVar1[5] = puVar1[5] | 1;
  puVar4 = puVar1;
  FUN_100467970();
  func_0x000100460dc4(puVar1[8]);
  *puVar4 = extraout_x8;
  if (((*(byte *)(puVar1 + 5) >> 2 & 1) == 0) && ((bRam0000000113815bd8 & 1) != 0)) {
    func_0x000104a6f7dc();
  }
  return puVar1;
}



/* Entry: 100467a48; end: 100467ab3;  */

undefined8 * FUN_100467a48(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_DAT_1107c0ee8;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  FUN_100467970();
  func_0x000100460dc4(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000113815bd8 & 1) != 0)) {
    func_0x000104a6f7dc();
  }
  return param_1;
}



/* Entry: 100467ab4; end: 100467cef;  */

char * FUN_100467ab4(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  func_0x000100460dc4();
  plVar7 = *(long **)(*param_1 + 0x18);
  if (plVar7 == (long *)0x0) goto LAB_100467c80;
  if (plVar7[0xb] == 0) {
    func_0x000100460dc4();
    puVar8 = (ulong *)*param_1;
    if ((puVar8[5] & 1) == 0) {
      param_1 = puVar8;
      (**(code **)(*puVar8 + 0x10))();
      if ((int)param_1 == 0) goto LAB_100467ae0;
      puVar8[5] = puVar8[5] | 1;
    }
    FUN_100836d50();
    iVar3 = (int)param_1;
    if ((((ulong)param_1 & 1) != 0) || (func_0x000104abdc80(), iVar3 == 0)) goto LAB_100467ae0;
LAB_100467b8c:
    func_0x000104aba4bc(plVar7);
  }
  else {
LAB_100467ae0:
    if (((char)plVar7[0xd] == '\0') || (3 < plVar7[0xc])) {
      plVar4 = plVar7 + 1;
      FUN_1007483d8();
      if (plVar4 == (long *)0x0) goto LAB_100467b8c;
      func_0x0001004bd8dc(&plStack_38,plVar4[3]);
      plVar4[3] = 0;
      plStack_40 = plStack_38;
      plStack_38 = (long *)0x36;
      (*(code *)plVar4[1])(plVar4[2],&plStack_40);
      if (((ulong)plStack_40 & 1) != 0) {
        FUN_10084dad0();
      }
      plVar4 = plStack_38;
      if (((ulong)plStack_38 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      plVar9 = (long *)plVar7[0xe];
      if (plVar9 == (long *)0x0) {
        func_0x000107c2c344();
        goto code_r0x000100467ca0;
      }
      plVar7[0xe] = 0;
      plVar7[0xf] = 0;
      do {
        plVar10 = (long *)*plVar9;
        func_0x0001004bd8dc(&plStack_38,plVar9[3]);
        plVar9[3] = 0;
        plStack_48 = plStack_38;
        plStack_38 = (long *)0x36;
        (*(code *)plVar9[1])(plVar9[2],&plStack_48);
        if (((ulong)plStack_48 & 1) != 0) {
          FUN_10084dad0();
        }
        plVar4 = plStack_38;
        if (((ulong)plStack_38 & 1) != 0) {
          FUN_10084dad0();
        }
        plVar9 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
    FUN_100748474();
    *(undefined1 *)(plVar7 + 0xd) = 0;
    plVar9 = plVar7 + 0xc;
    do {
      lVar6 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6 + -2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    switch(lVar6) {
    case 0:
    case 1:
code_r0x000100467ca0:
      pcVar5 = "return true";
      func_0x000104a6e964("return true",
                          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/combiner.cc"
                          ,0x131);
      func_0x000104bd46a0();
      func_0x000104bd46a0();
      FUN_1004bdf74(&plStack_40);
      FUN_1004bdf74(&plStack_38);
      func_0x000107c60bd8(pcVar5);
      return pcVar5;
    case 2:
      func_0x000104aba520(plVar7);
      break;
    case 3:
      break;
    case 4:
    case 5:
      if (plVar7[0xe] != 0) {
        *(undefined1 *)(plVar7 + 0xd) = 1;
      }
    default:
      func_0x000100460dc4();
      *plVar7 = *(long *)(*plVar4 + 0x18);
      func_0x000100460dc4();
      *(long **)(*plVar4 + 0x18) = plVar7;
      if (*plVar7 == 0) {
        func_0x000100460dc4();
        *(long **)(*plVar4 + 0x20) = plVar7;
      }
    }
  }
LAB_100467c80:
  return (char *)(ulong)(plVar7 != (long *)0x0);
}



/* Entry: 100467cf0; end: 100467cf3;  */

void FUN_100467cf0(void)

{
  return;
}



/* Entry: 100467cf4; end: 100467d2b;  */

void FUN_100467cf4(void)

{
  undefined8 *puVar1;
  
  if (puRam00000001136a1db8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puRam00000001136a1db8 = puVar1;
  }
  return;
}



/* Entry: 100467d2c; end: 100467d47;  */

void FUN_100467d2c(void)

{
  undefined **ppuVar1;
  
  FUN_100467cf4();
  FUN_100467d48();
  FUN_100467d80();
  FUN_10045fe6c(0x1130a5850,FUN_100468374);
  ppuVar1 = &PTR_DAT_1130a5898;
  FUN_100468380();
  if ((int)ppuVar1 < 0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/backup_poller.cc"
                  ,0x50,2,
                  "Invalid GRPC_CLIENT_CHANNEL_BACKUP_POLL_INTERVAL_MS: %d, default value %lld will be used."
                 );
  }
  else {
    uRam00000001130a5860 = (ulong)ppuVar1 & 0xffffffff;
  }
  return;
}



/* Entry: 100467d48; end: 100467d7f;  */

void FUN_100467d48(void)

{
  undefined8 *puVar1;
  
  if (puRam00000001136a1dc0 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x18;
    func_0x000107c60e20();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puRam00000001136a1dc0 = puVar1;
  }
  return;
}



/* Entry: 100467d80; end: 100467dff;  */

void FUN_100467d80(void)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c2128;
  plStack_28 = plVar1;
  FUN_100467e00(1,&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 100467e00; end: 100467f6b;  */

undefined1  [16] FUN_100467e00(int param_1,long *param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long **pplVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long **pplVar16;
  undefined8 unaff_x22;
  undefined8 uVar17;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  code *unaff_x30;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_60 [8];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long **pplStack_38;
  
  puVar3 = auStack_60;
  puVar18 = &stack0xfffffffffffffff0;
  uVar17 = 0x1136a1000;
  plVar5 = plRam00000001136a1dc0;
  plVar6 = param_2;
  if (plRam00000001136a1dc0 == (long *)0x0) {
    plVar5 = (long *)0x18;
    func_0x000107c60e20();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = 0;
  }
  plVar7 = plVar5;
  plRam00000001136a1dc0 = plVar5;
  if (param_1 == 0) {
    pplVar4 = (long **)(plVar5 + 2);
    plVar8 = (long *)plVar5[1];
    if (plVar8 < *pplVar4) {
      lVar10 = *param_2;
      *param_2 = 0;
      pplVar16 = (long **)(plVar8 + 1);
      *plVar8 = lVar10;
    }
    else {
      unaff_x21 = (long)plVar8 - *plVar5 >> 3;
      plVar8 = (long *)(unaff_x21 + 1);
      if ((ulong)plVar8 >> 0x3d != 0) {
        unaff_x30 = FUN_100467f6c;
        func_0x000104a84e34();
        unaff_x19 = plVar5;
        goto code_r0x000100467f6c;
      }
      uVar12 = (long)*pplVar4 - *plVar5;
      plVar6 = (long *)((long)uVar12 >> 2);
      if (plVar6 <= plVar8) {
        plVar6 = plVar8;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        plVar6 = (long *)0x1fffffffffffffff;
      }
      pplStack_38 = pplVar4;
      if (plVar6 == (long *)0x0) {
        pplVar4 = (long **)0x0;
      }
      else {
        FUN_1004680b0();
      }
      pplVar9 = pplVar4 + unaff_x21;
      plVar7 = (long *)*param_2;
      *param_2 = 0;
      pplVar16 = pplVar9 + 1;
      *pplVar9 = plVar7;
      plVar7 = (long *)*plVar5;
      plStack_48 = (long *)plVar5[1];
      plStack_58 = plStack_48;
      if (plStack_48 != plVar7) {
        do {
          plStack_48 = plStack_48 + -1;
          plVar8 = (long *)*plStack_48;
          *plStack_48 = 0;
          pplVar9 = pplVar9 + -1;
          *pplVar9 = plVar8;
        } while (plStack_48 != plVar7);
        plStack_48 = (long *)plVar5[1];
        plStack_58 = (long *)*plVar5;
      }
      *plVar5 = (long)pplVar9;
      plVar5[1] = (long)pplVar16;
      lStack_40 = plVar5[2];
      plVar5[2] = (long)(pplVar4 + (long)plVar6);
      pplVar4 = &plStack_58;
      plStack_50 = plStack_58;
      FUN_1004682a0(pplVar4);
    }
    plVar5[1] = (long)pplVar16;
    auVar21._8_8_ = plVar6;
    auVar21._0_8_ = pplVar4;
    return auVar21;
  }
  plVar6 = (long *)*plVar5;
  puVar3 = (undefined1 *)register0x00000008;
  param_3 = param_2;
  param_2 = unaff_x20;
  uVar17 = unaff_x22;
  puVar18 = unaff_x29;
code_r0x000100467f6c:
  *(undefined8 *)(puVar3 + -0x30) = uVar17;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(long **)(puVar3 + -0x20) = param_2;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar18;
  *(code **)(puVar3 + -8) = unaff_x30;
  plVar8 = (long *)plVar7[1];
  plVar5 = plVar7 + 2;
  if (plVar8 < (long *)*plVar5) {
    plVar5 = plVar6;
    if (plVar6 == plVar8) {
      lVar10 = *param_3;
      *param_3 = 0;
      *plVar6 = lVar10;
      plVar7[1] = (long)(plVar6 + 1);
      plVar7 = plVar6;
    }
    else {
      func_0x000104a84d84(plVar7,plVar6,plVar8,plVar6 + 1);
      lVar10 = *param_3;
      *param_3 = 0;
      plVar8 = (long *)*plVar6;
      *plVar6 = lVar10;
      plVar7 = plVar6;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  else {
    lVar10 = *plVar7;
    uVar12 = ((long)plVar8 - lVar10 >> 3) + 1;
    if (uVar12 >> 0x3d != 0) {
      plVar5 = plVar7;
      func_0x000104a84e34();
      FUN_1004682a0(puVar3 + -0x58);
      plVar8 = plVar5;
      func_0x000107c60bd8();
      *(long **)(puVar3 + -0x80) = plVar7;
      *(long **)(puVar3 + -0x78) = plVar5;
      *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
      *(code **)(puVar3 + -0x68) = FUN_1004680b0;
      if ((ulong)plVar6 >> 0x3d == 0) {
        lVar10 = (long)plVar6 << 3;
        func_0x000107c60e20(lVar10);
        auVar23._8_8_ = plVar6;
        auVar23._0_8_ = lVar10;
        return auVar23;
      }
      func_0x000104a7757c();
      *(undefined8 *)(puVar3 + -0xb0) = uVar17;
      *(long **)(puVar3 + -0xa8) = param_3;
      *(long **)(puVar3 + -0xa0) = plVar7;
      *(long **)(puVar3 + -0x98) = plVar5;
      *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x70;
      *(code **)(puVar3 + -0x88) = FUN_1004680e4;
      plVar7 = (long *)plVar8[2];
      plVar5 = plVar8;
      if (plVar7 == (long *)plVar8[3]) {
        plVar2 = (long *)*plVar8;
        plVar5 = (long *)plVar8[1];
        if (plVar5 < plVar2 || (long)plVar5 - (long)plVar2 == 0) {
          uVar12 = (long)plVar7 - (long)plVar2 >> 2;
          if ((long)plVar7 - (long)plVar2 == 0) {
            uVar12 = 1;
          }
          lVar10 = plVar8[4];
          *(long *)(puVar3 + -0xb8) = lVar10;
          uVar13 = uVar12;
          FUN_1004680b0();
          puVar1 = (undefined8 *)(lVar10 + (uVar12 >> 2) * 8);
          puVar19 = (undefined8 *)plVar8[1];
          uVar12 = plVar8[2] - (long)puVar19;
          puVar14 = puVar1;
          puVar20 = puVar19;
          if (uVar12 != 0) {
            lVar15 = ((long)uVar12 >> 3) << 3;
            do {
              uVar17 = *puVar19;
              *puVar19 = 0;
              *puVar14 = uVar17;
              lVar15 = lVar15 + -8;
              puVar19 = puVar19 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar15 != 0);
            puVar19 = (undefined8 *)plVar8[1];
            puVar14 = (undefined8 *)((long)puVar1 + (uVar12 & 0xfffffffffffffff8));
            puVar20 = (undefined8 *)plVar8[2];
          }
          *(long *)(puVar3 + -0xd8) = *plVar8;
          *plVar8 = lVar10;
          plVar8[1] = (long)puVar1;
          *(undefined8 **)(puVar3 + -200) = puVar20;
          *(undefined8 **)(puVar3 + -0xd0) = puVar19;
          lVar15 = plVar8[3];
          plVar8[2] = (long)puVar14;
          plVar8[3] = lVar10 + uVar13 * 8;
          *(long *)(puVar3 + -0xc0) = lVar15;
          plVar5 = (long *)(puVar3 + -0xd8);
          FUN_1004682a0(plVar5);
          plVar7 = (long *)plVar8[2];
        }
        else {
          lVar10 = (long)plVar5 - (long)plVar2 >> 3;
          uVar12 = lVar10 + 2;
          if (-2 < lVar10) {
            uVar12 = lVar10 + 1;
          }
          func_0x000104a84e48(plVar5,plVar7,plVar5 + -(uVar12 >> 1));
          plVar8[1] = plVar8[1] + (uVar12 >> 1) * -8;
          plVar8[2] = (long)plVar7;
        }
      }
      lVar10 = *plVar6;
      *plVar6 = 0;
      *plVar7 = lVar10;
      plVar8[2] = plVar8[2] + 8;
      auVar24._8_8_ = plVar7;
      auVar24._0_8_ = plVar5;
      return auVar24;
    }
    uVar11 = *plVar5 - lVar10;
    uVar13 = (long)uVar11 >> 2;
    if (uVar13 <= uVar12) {
      uVar13 = uVar12;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar13 = 0x1fffffffffffffff;
    }
    *(long **)(puVar3 + -0x38) = plVar5;
    if (uVar13 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      FUN_1004680b0();
    }
    *(long **)(puVar3 + -0x58) = plVar5;
    *(long **)(puVar3 + -0x50) = plVar5 + ((long)plVar6 - lVar10 >> 3);
    *(long **)(puVar3 + -0x48) = plVar5 + ((long)plVar6 - lVar10 >> 3);
    *(long **)(puVar3 + -0x40) = plVar5 + uVar13;
    FUN_1004680e4(puVar3 + -0x58,param_3);
    plVar5 = (long *)(puVar3 + -0x58);
    FUN_100468204(plVar7,plVar5,plVar6);
    FUN_1004682a0(puVar3 + -0x58);
  }
  auVar22._8_8_ = plVar5;
  auVar22._0_8_ = plVar7;
  return auVar22;
}



/* Entry: 100467f6c; end: 1004680af;  */

undefined1  [16] FUN_100467f6c(long *****param_1,long *****param_2,undefined8 *param_3)

{
  long ****pppplVar1;
  long lVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long ****pppplVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long ***ppplVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ****pppplStack_58;
  long ****pppplStack_50;
  long ****pppplStack_48;
  long ****pppplStack_40;
  long ****pppplStack_38;
  
  ppppplVar5 = (long *****)param_1[1];
  ppppplVar4 = param_1 + 2;
  if (ppppplVar5 < *ppppplVar4) {
    ppppplVar4 = param_2;
    if (param_2 == ppppplVar5) {
      pppplVar1 = (long ****)*param_3;
      *param_3 = 0;
      *param_2 = pppplVar1;
      param_1[1] = (long ****)(param_2 + 1);
      param_1 = param_2;
    }
    else {
      func_0x000104a84d84(param_1,param_2,ppppplVar5,param_2 + 1);
      pppplVar6 = (long ****)*param_3;
      *param_3 = 0;
      pppplVar1 = *param_2;
      *param_2 = pppplVar6;
      param_1 = param_2;
      if (pppplVar1 != (long ****)0x0) {
        (*(code *)(*pppplVar1)[1])();
      }
    }
  }
  else {
    pppplVar1 = *param_1;
    uVar8 = ((long)ppppplVar5 - (long)pppplVar1 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
      func_0x000104a84e34();
      FUN_1004682a0(&pppplStack_58);
      func_0x000107c60bd8();
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104a7757c();
        pppplVar1 = param_1[2];
        ppppplVar4 = param_1;
        if (pppplVar1 == param_1[3]) {
          ppppplVar5 = (long *****)*param_1;
          ppppplVar4 = (long *****)param_1[1];
          if (ppppplVar4 < ppppplVar5 || (long)ppppplVar4 - (long)ppppplVar5 == 0) {
            uVar8 = (long)pppplVar1 - (long)ppppplVar5 >> 2;
            if ((long)pppplVar1 - (long)ppppplVar5 == 0) {
              uVar8 = 1;
            }
            pppplVar3 = param_1[4];
            uVar9 = uVar8;
            ppplStack_b8 = (long ***)pppplVar3;
            FUN_1004680b0();
            pppplVar1 = pppplVar3 + (uVar8 >> 2);
            ppplStack_d0 = (long ***)param_1[1];
            uVar8 = (long)param_1[2] - (long)ppplStack_d0;
            pppplVar6 = pppplVar1;
            ppplStack_c8 = ppplStack_d0;
            if (uVar8 != 0) {
              lVar2 = ((long)uVar8 >> 3) << 3;
              do {
                ppplVar10 = (long ***)*ppplStack_d0;
                *ppplStack_d0 = (long **)0x0;
                *pppplVar6 = ppplVar10;
                lVar2 = lVar2 + -8;
                ppplStack_d0 = ppplStack_d0 + 1;
                pppplVar6 = pppplVar6 + 1;
              } while (lVar2 != 0);
              ppplStack_d0 = (long ***)param_1[1];
              pppplVar6 = (long ****)((long)pppplVar1 + (uVar8 & 0xfffffffffffffff8));
              ppplStack_c8 = (long ***)param_1[2];
            }
            ppplStack_d8 = (long ***)*param_1;
            *param_1 = pppplVar3;
            param_1[1] = pppplVar1;
            ppplStack_c0 = (long ***)param_1[3];
            param_1[2] = pppplVar6;
            param_1[3] = pppplVar3 + uVar9;
            ppppplVar4 = (long *****)&ppplStack_d8;
            FUN_1004682a0(ppppplVar4);
            pppplVar1 = param_1[2];
          }
          else {
            lVar2 = (long)ppppplVar4 - (long)ppppplVar5 >> 3;
            uVar8 = lVar2 + 2;
            if (-2 < lVar2) {
              uVar8 = lVar2 + 1;
            }
            func_0x000104a84e48(ppppplVar4,pppplVar1,ppppplVar4 + -(uVar8 >> 1));
            param_1[1] = param_1[1] + -(uVar8 >> 1);
            param_1[2] = pppplVar1;
          }
        }
        pppplVar6 = *param_2;
        *param_2 = (long ****)0x0;
        *pppplVar1 = (long ***)pppplVar6;
        param_1[2] = param_1[2] + 1;
        auVar13._8_8_ = pppplVar1;
        auVar13._0_8_ = ppppplVar4;
        return auVar13;
      }
      lVar2 = (long)param_2 << 3;
      func_0x000107c60e20(lVar2);
      auVar12._8_8_ = param_2;
      auVar12._0_8_ = lVar2;
      return auVar12;
    }
    uVar7 = (long)*ppppplVar4 - (long)pppplVar1;
    uVar9 = (long)uVar7 >> 2;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar9 = 0x1fffffffffffffff;
    }
    pppplStack_38 = (long ****)ppppplVar4;
    if (uVar9 == 0) {
      pppplStack_58 = (long ****)0x0;
    }
    else {
      FUN_1004680b0();
      pppplStack_58 = (long ****)ppppplVar4;
    }
    pppplStack_50 = pppplStack_58 + ((long)param_2 - (long)pppplVar1 >> 3);
    pppplStack_40 = pppplStack_58 + uVar9;
    pppplStack_48 = pppplStack_50;
    FUN_1004680e4(&pppplStack_58,param_3);
    ppppplVar4 = &pppplStack_58;
    FUN_100468204(param_1,ppppplVar4,param_2);
    FUN_1004682a0(&pppplStack_58);
  }
  auVar11._8_8_ = ppppplVar4;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 1004680b0; end: 1004680e3;  */

void FUN_1004680b0(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x000104a7757c();
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 == (undefined8 *)param_1[3]) {
      uVar1 = *param_1;
      uVar6 = param_1[1];
      if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
        uVar6 = (long)((long)puVar4 - uVar1) >> 2;
        if ((long)puVar4 - uVar1 == 0) {
          uVar6 = 1;
        }
        uVar2 = param_1[4];
        uVar3 = uVar6;
        uStack_58 = uVar2;
        FUN_1004680b0();
        puVar4 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
        puStack_70 = (undefined8 *)param_1[1];
        uVar1 = param_1[2] - (long)puStack_70;
        puVar8 = puVar4;
        puStack_68 = puStack_70;
        if (uVar1 != 0) {
          lVar5 = ((long)uVar1 >> 3) << 3;
          do {
            uVar7 = *puStack_70;
            *puStack_70 = 0;
            *puVar8 = uVar7;
            lVar5 = lVar5 + -8;
            puStack_70 = puStack_70 + 1;
            puVar8 = puVar8 + 1;
          } while (lVar5 != 0);
          puStack_70 = (undefined8 *)param_1[1];
          puVar8 = (undefined8 *)((long)puVar4 + (uVar1 & 0xfffffffffffffff8));
          puStack_68 = (undefined8 *)param_1[2];
        }
        uStack_78 = *param_1;
        *param_1 = uVar2;
        param_1[1] = (ulong)puVar4;
        uStack_60 = param_1[3];
        param_1[2] = (ulong)puVar8;
        param_1[3] = uVar2 + uVar3 * 8;
        FUN_1004682a0(&uStack_78);
        puVar4 = (undefined8 *)param_1[2];
      }
      else {
        lVar5 = (long)(uVar6 - uVar1) >> 3;
        uVar1 = lVar5 + 2;
        if (-2 < lVar5) {
          uVar1 = lVar5 + 1;
        }
        func_0x000104a84e48(uVar6,puVar4,uVar6 + (uVar1 >> 1) * -8);
        param_1[1] = param_1[1] + (uVar1 >> 1) * -8;
        param_1[2] = (ulong)puVar4;
      }
    }
    uVar7 = *param_2;
    *param_2 = 0;
    *puVar4 = uVar7;
    param_1[2] = param_1[2] + 8;
    return;
  }
  func_0x000107c60e20((long)param_2 << 3);
  return;
}



/* Entry: 1004680e4; end: 100468203;  */

void FUN_1004680e4(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 == (undefined8 *)param_1[3]) {
    uVar1 = *param_1;
    uVar6 = param_1[1];
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = (long)((long)puVar4 - uVar1) >> 2;
      if ((long)puVar4 - uVar1 == 0) {
        uVar6 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar6;
      uStack_38 = uVar2;
      FUN_1004680b0();
      puVar4 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
      puStack_50 = (undefined8 *)param_1[1];
      uVar1 = param_1[2] - (long)puStack_50;
      puVar8 = puVar4;
      puStack_48 = puStack_50;
      if (uVar1 != 0) {
        lVar5 = ((long)uVar1 >> 3) << 3;
        do {
          uVar7 = *puStack_50;
          *puStack_50 = 0;
          *puVar8 = uVar7;
          lVar5 = lVar5 + -8;
          puStack_50 = puStack_50 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
        puStack_50 = (undefined8 *)param_1[1];
        puVar8 = (undefined8 *)((long)puVar4 + (uVar1 & 0xfffffffffffffff8));
        puStack_48 = (undefined8 *)param_1[2];
      }
      uStack_58 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar4;
      uStack_40 = param_1[3];
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + uVar3 * 8;
      FUN_1004682a0(&uStack_58);
      puVar4 = (undefined8 *)param_1[2];
    }
    else {
      lVar5 = (long)(uVar6 - uVar1) >> 3;
      uVar1 = lVar5 + 2;
      if (-2 < lVar5) {
        uVar1 = lVar5 + 1;
      }
      func_0x000104a84e48(uVar6,puVar4,uVar6 + (uVar1 >> 1) * -8);
      param_1[1] = param_1[1] + (uVar1 >> 1) * -8;
      param_1[2] = (ulong)puVar4;
    }
  }
  uVar7 = *param_2;
  *param_2 = 0;
  *puVar4 = uVar7;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 100468204; end: 10046829f;  */

void FUN_100468204(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar2 = (undefined8 *)*param_1;
  puVar3 = param_3;
  while (puVar2 != puVar3) {
    puVar3 = puVar3 + -1;
    uVar6 = *puVar3;
    *puVar3 = 0;
    puVar1 = puVar1 + -1;
    *puVar1 = uVar6;
  }
  param_2[1] = puVar1;
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_2[2];
  puVar3 = puVar2;
  if (puVar5 != param_3) {
    do {
      uVar6 = *param_3;
      puVar1 = param_3 + 1;
      *param_3 = 0;
      puVar2 = puVar3 + 1;
      *puVar3 = uVar6;
      param_3 = puVar1;
      puVar3 = puVar2;
    } while (puVar1 != puVar5);
    puVar1 = (undefined8 *)param_2[1];
  }
  param_2[2] = puVar2;
  lVar4 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1004682a0; end: 1004682ff;  */

long * FUN_1004682a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100468300; end: 100468373;  */

void FUN_100468300(void)

{
  undefined **ppuVar1;
  
  FUN_10045fe6c(0x1130a5850,FUN_100468374);
  ppuVar1 = &PTR_DAT_1130a5898;
  FUN_100468380();
  if ((int)ppuVar1 < 0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/backup_poller.cc"
                  ,0x50,2,
                  "Invalid GRPC_CLIENT_CHANNEL_BACKUP_POLL_INTERVAL_MS: %d, default value %lld will be used."
                 );
  }
  else {
    uRam00000001130a5860 = (ulong)ppuVar1 & 0xffffffff;
  }
  return;
}



/* Entry: 100468374; end: 10046837f;  */

void FUN_100468374(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  puVar1 = (undefined1 *)0x1136a1d60;
  puVar3 = (undefined1 *)0x0;
  func_0x000107c6125c();
  if ((int)puVar1 == 0) {
    return;
  }
  func_0x000107c2c12c();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_48;
  func_0x000107c61234();
  if ((int)puVar2 == 0) {
    puVar3 = auStack_48;
    func_0x000107c61224();
    if ((int)puVar1 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_1004603a8;
    }
  }
  else {
    func_0x000107c2c140();
    puVar1 = puVar2;
  }
  func_0x000107c2c13c();
LAB_1004603a8:
  func_0x000107c60e78();
  if (iRam00000001136a22ec != 0x80) {
    *(undefined1 **)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f0) = puVar1;
    *(undefined1 **)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f8) = puVar3;
    iRam00000001136a22ec = iRam00000001136a22ec + 1;
    return;
  }
  func_0x000107c2c428();
  FUN_1004603ac(FUN_100467d2c,&UNK_104a8204c);
  FUN_1004603ac(FUN_100468428,&UNK_104a84174);
  FUN_1004603ac(FUN_100468864,&UNK_104a84eb8);
  return;
}



/* Entry: 100468380; end: 100468427;  */

char * FUN_100468380(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_1;
  FUN_10045ff80();
  FUN_10046018c();
  if (pcVar1 == (char *)0x0) {
    pcVar2 = (char *)(ulong)*(uint *)(param_1 + 8);
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c613e8();
    if (*pcVar1 != '\0') {
      FUN_10045ff80(param_1);
      func_0x000104a6f8e4();
      pcVar2 = (char *)(ulong)*(uint *)(param_1 + 8);
    }
    FUN_100460314(pcVar1);
  }
  return pcVar2;
}



/* Entry: 100468428; end: 1004684a3;  */

void FUN_100468428(void)

{
  long *plVar1;
  long *plStack_28;
  
  plVar1 = (long *)0x8;
  func_0x000107c60e20();
  *plVar1 = (long)&PTR_DAT_1107c24c0;
  plStack_28 = plVar1;
  FUN_1004684a4(&plStack_28);
  plVar1 = plStack_28;
  plStack_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return;
}



/* Entry: 1004684a4; end: 1004686ab;  */

void FUN_1004684a4(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (plRam00000001136a1db8 == (long *)0x0) {
    plVar3 = (long *)0x18;
    func_0x000107c60e20();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = 0;
    plRam00000001136a1db8 = plVar3;
  }
  plVar1 = plRam00000001136a1db8;
  plVar9 = (long *)*param_1;
  *param_1 = 0;
  (**(code **)(*plVar9 + 0x18))();
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                ,0x30,0,"registering LB policy factory for \"%s\"");
  plVar3 = (long *)*plVar1;
  plVar4 = (long *)plVar1[1];
  lVar7 = 0;
  if (plVar4 != plVar3) {
    uVar11 = 0;
    do {
      plVar4 = *(long **)((long)plVar3 + uVar11 * 8);
      (**(code **)(*plVar4 + 0x18))();
      plVar3 = plVar9;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      func_0x000107c613c0(plVar4,plVar3);
      if ((int)plVar4 == 0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                      ,0x33,2,"assertion failed: %s");
        func_0x000107c60ebc();
        goto LAB_100468688;
      }
      uVar11 = uVar11 + 1;
      plVar3 = (long *)*plVar1;
      plVar4 = (long *)plVar1[1];
      lVar7 = (long)plVar4 - (long)plVar3;
    } while (uVar11 < (ulong)(lVar7 >> 3));
  }
  plVar5 = plVar1 + 2;
  if (plVar4 < (long *)*plVar5) {
    plVar10 = plVar4 + 1;
    *plVar4 = (long)plVar9;
  }
  else {
    uVar11 = (lVar7 >> 3) + 1;
    if (uVar11 >> 0x3d != 0) {
      func_0x000104a84ae8(plVar1);
LAB_100468688:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10046868c);
      (*pcVar2)();
    }
    uVar6 = *plVar5 - (long)plVar3;
    uVar8 = (long)uVar6 >> 2;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar5;
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      FUN_1004687d0();
    }
    plVar3 = plVar5 + (lVar7 >> 3);
    plVar10 = plVar3 + 1;
    *plVar3 = (long)plVar9;
    plVar4 = (long *)*plVar1;
    plStack_48 = (long *)plVar1[1];
    plStack_58 = plStack_48;
    if (plStack_48 != plVar4) {
      do {
        plStack_48 = plStack_48 + -1;
        lVar7 = *plStack_48;
        *plStack_48 = 0;
        plVar3 = plVar3 + -1;
        *plVar3 = lVar7;
      } while (plStack_48 != plVar4);
      plStack_48 = (long *)plVar1[1];
      plStack_58 = (long *)*plVar1;
    }
    *plVar1 = (long)plVar3;
    plVar1[1] = (long)plVar10;
    lStack_40 = plVar1[2];
    plVar1[2] = (long)(plVar5 + uVar8);
    plStack_50 = plStack_58;
    func_0x000100468804(&plStack_58);
  }
  plVar1[1] = (long)plVar10;
  return;
}



/* Entry: 1004686ac; end: 1004686cb;  */

undefined * FUN_1004686ac(void)

{
  return &UNK_10dd50770;
}



/* Entry: 1004686cc; end: 1004687cf;  */

undefined1  [16] FUN_1004686cc(undefined8 param_1,ulong param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = param_3;
  uVar3 = param_2;
  func_0x0001004686b8();
  if ((int)plVar5 != 0) {
    plVar5 = alStack_88;
    func_0x000107c616d0(plVar5,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar5 < 0) {
      plVar2 = (long *)0x0;
      plVar5 = (long *)0x0;
    }
    else if ((uint)plVar5 < 0x40) {
      plVar5 = (long *)0x0;
      plVar2 = alStack_88;
    }
    else {
      plVar5 = (long *)(((ulong)plVar5 & 0xffffffff) + 1);
      FUN_100460200();
      func_0x000107c616d0();
      plVar2 = plVar5;
    }
    func_0x000104a6e9e0(param_1,param_2,param_3,plVar2);
    FUN_100460314();
    uVar3 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar3;
    auVar6._0_8_ = plVar5;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar3 >> 0x3d == 0) {
    lVar1 = uVar3 << 3;
    func_0x000107c60e20(lVar1);
    auVar7._8_8_ = uVar3;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000104a7757c();
  lVar1 = plVar5[1];
  lVar4 = plVar5[2];
  while (lVar4 != lVar1) {
    plVar5[2] = lVar4 + -8;
    plVar2 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar4 = plVar5[2];
  }
  if (*plVar5 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = plVar5;
  return auVar8;
}



/* Entry: 1004687d0; end: 100468863;  */

undefined1  [16] FUN_1004687d0(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    func_0x000107c60e20(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000104a7757c();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 100468864; end: 100468867;  */

void FUN_100468864(void)

{
  return;
}



/* Entry: 100468868; end: 10046895f;  */

void FUN_100468868(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined8 *puStack_38;
  
  FUN_10045ffc4(&lStack_48,&PTR_DAT_1130a6020);
  lVar1 = lStack_48;
  lStack_40 = 0;
  puStack_38 = (undefined8 *)0x0;
  lVar4 = lStack_48;
  func_0x000107c613bc(lStack_48,0x2c);
  while (lVar4 != 0) {
    FUN_100468960(lVar1,lVar4,&puStack_38,&lStack_40);
    lVar1 = lVar4 + 1;
    lVar4 = lVar1;
    func_0x000107c613bc(lVar1,0x2c);
  }
  lVar4 = lVar1;
  func_0x000107c613d0(lVar1);
  FUN_100468960(lVar1,lVar1 + lVar4,&puStack_38,&lStack_40);
  puVar3 = puStack_38;
  puVar2 = puStack_38;
  for (lVar1 = lStack_40; lVar1 != 0; lVar1 = lVar1 + -1) {
    FUN_100460314(*puVar2);
    puVar2 = puVar2 + 1;
  }
  FUN_100460314(puVar3);
  lVar1 = lStack_48;
  lStack_48 = 0;
  if (lVar1 != 0) {
    FUN_100460314();
  }
  return;
}



/* Entry: 100468960; end: 1004689e3;  */

/* WARNING: Possible PIC construction at 0x000100468b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100468b08) */
/* WARNING: Removing unreachable block (ram,0x000100468b50) */
/* WARNING: Removing unreachable block (ram,0x000100468b7c) */
/* WARNING: Removing unreachable block (ram,0x000100468ba0) */
/* WARNING: Removing unreachable block (ram,0x000100468bc0) */
/* WARNING: Removing unreachable block (ram,0x000100468bd4) */

code * FUN_100468960(code *param_1,code *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 ***pppuVar2;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_c0 [48];
  undefined8 ***pppuStack_70;
  code *pcStack_68;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  
  if (param_1 <= param_2) {
    lVar4 = *param_4;
    lVar1 = lVar4 + 1;
    UNRECOVERED_JUMPTABLE = param_2 + (1 - (long)param_1);
    FUN_100460200();
    func_0x000107c610b4();
    param_2[(long)UNRECOVERED_JUMPTABLE - (long)param_1] = (code)0x0;
    pcVar3 = (code *)*param_3;
    FUN_1004689e4(pcVar3,lVar1 * 8);
    *param_3 = (long)pcVar3;
    *(code **)(pcVar3 + lVar4 * 8) = UNRECOVERED_JUMPTABLE;
    *param_4 = lVar1;
    return pcVar3;
  }
  func_0x000107c2c32c();
  pcStack_58 = FUN_1004689e4;
  if ((param_1 == (code *)0x0) && (param_2 == (code *)0x0)) {
    param_1 = (code *)0x0;
  }
  else {
    ppuStack_60 = (undefined8 **)&stack0xfffffffffffffff0;
    func_0x000107c612c4();
    if (param_1 == (code *)0x0) {
      func_0x000107c60ebc();
      pcStack_68 = FUN_100468a10;
      pppuStack_70 = &ppuStack_60;
      FUN_100460318(0x1136a2198);
      FUN_100460338(0x1136a21d8);
      FUN_100460338(0x1136a2208);
      bRam00000001136a2238 = 0;
      iRam00000001136a223c = 0;
      iRam00000001136a2240 = 0;
      uRam00000001136a2248 = 0;
      uRam00000001136a2250 = 0;
      uRam00000001136a2258 = 0x7fffffffffffffff;
      FUN_100460448(0x1136a2198);
      if ((bRam00000001136a2238 & 1) == 0) {
        bRam00000001136a2238 = 1;
        pppuVar2 = (undefined8 ***)auStack_c0;
        ppppuVar5 = &pppuStack_70;
        iRam00000001136a2240 = iRam00000001136a2240 + 1;
        iRam00000001136a223c = iRam00000001136a223c + 1;
        UNRECOVERED_JUMPTABLE = (code *)0x100468b08;
      }
      else {
        pppuVar2 = &ppuStack_60;
        ppppuVar5 = (undefined8 ****)pppuStack_70;
        UNRECOVERED_JUMPTABLE = pcStack_68;
      }
      pcVar3 = (code *)0x1136a2198;
      *(undefined8 *****)((long)pppuVar2 + -0x10) = ppppuVar5;
      *(code **)((long)pppuVar2 + -8) = UNRECOVERED_JUMPTABLE;
      func_0x000107c61268();
      if ((int)pcVar3 != 0) {
        func_0x000107c2c138();
        UNRECOVERED_JUMPTABLE = (code *)*puRam00000001136a2078;
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      return pcVar3;
    }
  }
  return param_1;
}



/* Entry: 1004689e4; end: 100468a0f;  */

/* WARNING: Possible PIC construction at 0x000100468b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100468b08) */
/* WARNING: Removing unreachable block (ram,0x000100468b50) */
/* WARNING: Removing unreachable block (ram,0x000100468b7c) */
/* WARNING: Removing unreachable block (ram,0x000100468ba0) */
/* WARNING: Removing unreachable block (ram,0x000100468bc0) */
/* WARNING: Removing unreachable block (ram,0x000100468bd4) */

code * FUN_1004689e4(code *param_1,long param_2)

{
  undefined1 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_70 [48];
  undefined8 **ppuStack_20;
  code *pcStack_18;
  
  if ((param_1 == (code *)0x0) && (param_2 == 0)) {
    param_1 = (code *)0x0;
  }
  else {
    func_0x000107c612c4();
    if (param_1 == (code *)0x0) {
      func_0x000107c60ebc();
      pcStack_18 = FUN_100468a10;
      ppuStack_20 = (undefined8 **)&stack0xfffffffffffffff0;
      FUN_100460318(0x1136a2198);
      FUN_100460338(0x1136a21d8);
      FUN_100460338(0x1136a2208);
      bRam00000001136a2238 = 0;
      iRam00000001136a223c = 0;
      iRam00000001136a2240 = 0;
      uRam00000001136a2248 = 0;
      uRam00000001136a2250 = 0;
      uRam00000001136a2258 = 0x7fffffffffffffff;
      FUN_100460448(0x1136a2198);
      if ((bRam00000001136a2238 & 1) == 0) {
        bRam00000001136a2238 = 1;
        puVar1 = auStack_70;
        pppuVar3 = &ppuStack_20;
        iRam00000001136a2240 = iRam00000001136a2240 + 1;
        iRam00000001136a223c = iRam00000001136a223c + 1;
        UNRECOVERED_JUMPTABLE = (code *)0x100468b08;
      }
      else {
        puVar1 = &stack0xfffffffffffffff0;
        pppuVar3 = (undefined8 ***)ppuStack_20;
        UNRECOVERED_JUMPTABLE = pcStack_18;
      }
      pcVar2 = (code *)0x1136a2198;
      *(undefined8 ****)(puVar1 + -0x10) = pppuVar3;
      *(code **)(puVar1 + -8) = UNRECOVERED_JUMPTABLE;
      func_0x000107c61268();
      if ((int)pcVar2 != 0) {
        func_0x000107c2c138();
        UNRECOVERED_JUMPTABLE = (code *)*puRam00000001136a2078;
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      return pcVar2;
    }
  }
  return param_1;
}



/* Entry: 100468a10; end: 100468a13;  */

/* WARNING: Possible PIC construction at 0x000100468b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100468b08) */
/* WARNING: Removing unreachable block (ram,0x000100468b50) */
/* WARNING: Removing unreachable block (ram,0x000100468b7c) */
/* WARNING: Removing unreachable block (ram,0x000100468ba0) */
/* WARNING: Removing unreachable block (ram,0x000100468bc0) */
/* WARNING: Removing unreachable block (ram,0x000100468bd4) */

code * FUN_100468a10(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_60 [48];
  
  FUN_100460318(0x1136a2198);
  FUN_100460338(0x1136a21d8);
  FUN_100460338(0x1136a2208);
  bRam00000001136a2238 = 0;
  iRam00000001136a223c = 0;
  iRam00000001136a2240 = 0;
  uRam00000001136a2248 = 0;
  uRam00000001136a2250 = 0;
  uRam00000001136a2258 = 0x7fffffffffffffff;
  FUN_100460448(0x1136a2198);
  if ((bRam00000001136a2238 & 1) == 0) {
    bRam00000001136a2238 = 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    iRam00000001136a2240 = iRam00000001136a2240 + 1;
    iRam00000001136a223c = iRam00000001136a223c + 1;
    unaff_x30 = 0x100468b08;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x1136a2198;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c61268();
  if ((int)UNRECOVERED_JUMPTABLE == 0) {
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c2c138();
  UNRECOVERED_JUMPTABLE = (code *)*puRam00000001136a2078;
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 100468a14; end: 100468abb;  */

/* WARNING: Possible PIC construction at 0x000100468b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100468b08) */
/* WARNING: Removing unreachable block (ram,0x000100468b50) */
/* WARNING: Removing unreachable block (ram,0x000100468b7c) */
/* WARNING: Removing unreachable block (ram,0x000100468ba0) */
/* WARNING: Removing unreachable block (ram,0x000100468bc0) */
/* WARNING: Removing unreachable block (ram,0x000100468bd4) */

code * FUN_100468a14(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_60 [48];
  
  FUN_100460318(0x1136a2198);
  FUN_100460338(0x1136a21d8);
  FUN_100460338(0x1136a2208);
  bRam00000001136a2238 = 0;
  iRam00000001136a223c = 0;
  iRam00000001136a2240 = 0;
  uRam00000001136a2248 = 0;
  uRam00000001136a2250 = 0;
  uRam00000001136a2258 = 0x7fffffffffffffff;
  FUN_100460448(0x1136a2198);
  if ((bRam00000001136a2238 & 1) == 0) {
    bRam00000001136a2238 = 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    iRam00000001136a2240 = iRam00000001136a2240 + 1;
    iRam00000001136a223c = iRam00000001136a223c + 1;
    unaff_x30 = 0x100468b08;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
  }
  UNRECOVERED_JUMPTABLE = (code *)0x1136a2198;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107c61268();
  if ((int)UNRECOVERED_JUMPTABLE == 0) {
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c2c138();
  UNRECOVERED_JUMPTABLE = (code *)*puRam00000001136a2078;
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 100468abc; end: 100468ba3;  */

undefined4 * FUN_100468abc(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined2 auStack_60 [4];
  undefined8 uStack_58;
  undefined4 auStack_50 [2];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined8 uStack_38;
  
  if ((bRam00000001136a2238 & 1) != 0) {
    iRam00000001136a2240 = iRam00000001136a2240 + 1;
    iRam00000001136a223c = iRam00000001136a223c + 1;
    func_0x000100466b80(0x1136a2198);
    puVar1 = (undefined4 *)0x28;
    FUN_100460200();
    auStack_60[0] = 0x101;
    uStack_58 = 0;
    FUN_100462a0c(auStack_50,"grpc_global_timer",FUN_100490ab8,puVar1,0,auStack_60);
    if (puVar1 != auStack_50) {
      *puVar1 = auStack_50[0];
      *(undefined8 *)(puVar1 + 2) = uStack_48;
      *(undefined8 *)(puVar1 + 6) = uStack_38;
      *(ulong *)(puVar1 + 4) = CONCAT62(uStack_3e,uStack_40);
      auStack_50[0] = 5;
      uStack_48 = 0;
      uStack_40 = 0x101;
      uStack_38 = 0;
    }
    FUN_1004629b0(auStack_50);
    FUN_100463850(puVar1);
    return puVar1;
  }
  func_0x000107c2c384();
  lVar2 = 0x48;
  do {
    func_0x000107c60ca0((long)auStack_50 + lVar2);
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x18);
  return auStack_50;
}



/* Entry: 100468ba4; end: 100468bab;  */

undefined1 * FUN_100468ba4(void)

{
  long lVar1;
  
  lVar1 = 0x48;
  do {
    func_0x000107c60ca0(&stack0x00000010 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return &stack0x00000010;
}



/* Entry: 100468bac; end: 100468be3;  */

long FUN_100468bac(long param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  do {
    func_0x000107c60ca0(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x18);
  return param_1;
}



/* Entry: 100468be4; end: 100468be7;  */

undefined8 * FUN_100468be4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  FUN_10002b024(auStack_48,"grpc.primary_user_agent");
  FUN_10046900c(auStack_78);
  puVar1 = auStack_78;
  func_0x000107c60c6c(puVar1,0,"grpc-c++/");
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  lStack_50 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_100469094(param_1,auStack_48,&uStack_60);
  if (lStack_50 < 0) {
    func_0x000107c60e14(uStack_60);
  }
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  if (cStack_31 < '\0') {
    func_0x000107c60e14(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 100468be8; end: 100468edb;  */

void FUN_100468be8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long **pplVar5;
  long *plStack_180;
  long lStack_178;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pplVar5 = &plStack_180;
  FUN_100468be4(auStack_80);
  if ((*(uint *)(param_2 + 0x50) & 0xfffffffd) == 0) {
    FUN_100469238();
    func_0x000100469240();
    func_0x00010045da20();
    FUN_100469238();
    func_0x000100469240();
    func_0x00010045da20();
    FUN_100469238();
    FUN_10046924c(auStack_80,&plStack_180,0);
    func_0x00010045da20();
    FUN_100469238();
    func_0x000100469240();
    func_0x00010045da20();
  }
  FUN_10046938c(param_1);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  FUN_1004695d8(&plStack_b0);
  func_0x000107c60ca4(plStack_b0 + 0x13,param_2);
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1002a8234(plStack_b0 + 1,param_2 + 0x20);
  }
  *(undefined4 *)((long)plStack_b0 + 0x8c) = *(undefined4 *)(param_2 + 0x18);
  (**(code **)(*plStack_b0 + 0x10))(&plStack_180);
  lVar4 = 0xf0;
  func_0x000107c60e20();
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_100469900();
  FUN_10046997c(&uStack_50);
  func_0x0001004699a0(&uStack_40);
  lStack_b8 = lVar4;
  func_0x0001004699c4(&uStack_98,&lStack_b8);
  lVar4 = lStack_b8;
  lStack_b8 = 0;
  if (lVar4 != 0) {
    func_0x000107c34cd4();
  }
  FUN_100469c34(&plStack_180);
  FUN_100469c74(param_1,auStack_80);
  lStack_178 = lStack_a8;
  plStack_180 = plStack_b0;
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10046a2d4(param_1,&plStack_180);
  FUN_10046e1e8(param_1,&uStack_98);
  FUN_10046e224();
  if ((*(char *)(param_2 + 0x88) == '\x01') && (func_0x000107c34cc4(), pplVar5 != (long **)0x0)) {
    func_0x000107c34cc4();
    func_0x000107c60c94(&plStack_180,(undefined1 *)((long)pplVar5 + 0x18));
    func_0x000107c60c58(&plStack_180,PTR_DAT_11330a920);
    func_0x000107c2bf90(param_1,&plStack_180);
    func_0x00010045da20();
  }
  func_0x00010046e248(&plStack_b0);
  func_0x00010046e31c(&uStack_98);
  FUN_10046a1bc(auStack_80);
  return;
}



/* Entry: 100468edc; end: 10046900b;  */

undefined8 * FUN_100468edc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 3;
  param_1[4] = param_1 + 3;
  param_1[5] = 0;
  FUN_10002b024(auStack_48,"grpc.primary_user_agent");
  FUN_10046900c(auStack_78);
  puVar1 = auStack_78;
  func_0x000107c60c6c(puVar1,0,"grpc-c++/");
  uStack_58 = puVar1[1];
  uStack_60 = *puVar1;
  lStack_50 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_100469094(param_1,auStack_48,&uStack_60);
  if (lStack_50 < 0) {
    func_0x000107c60e14(uStack_60);
  }
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  if (cStack_31 < '\0') {
    func_0x000107c60e14(auStack_48[0]);
  }
  return param_1;
}



/* Entry: 10046900c; end: 10046901b;  */

ulong * FUN_10046900c(ulong *param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong *puVar3;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  code *pcStack_48;
  
  pcVar2 = "1.48.0";
  func_0x000107c613d0();
  if ((char *)0x7ffffffffffffff7 < pcVar2) {
    func_0x000104a6fa5c(param_1);
    pcStack_48 = FUN_10002b0d4;
    puVar3 = (ulong *)0x2947bdebdbc7a448;
    puStack_50 = &stack0xfffffffffffffff0;
    FUN_10002b140(0x2947bdebdbc7a448,auStack_5c,auStack_58);
    return puVar3;
  }
  if (pcVar2 < (char *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)pcVar2;
    puVar3 = param_1;
    if (pcVar2 == (char *)0x0) goto LAB_10002b0b0;
  }
  else {
    uVar1 = ((ulong)pcVar2 & 0xfffffffffffffff8) + 8;
    if (((ulong)pcVar2 | 7) != 0x17) {
      uVar1 = (ulong)pcVar2 | 7;
    }
    puVar3 = (ulong *)(uVar1 + 1);
    func_0x000107c60e20();
    param_1[1] = (ulong)pcVar2;
    param_1[2] = uVar1 + 1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,"1.48.0",pcVar2);
LAB_10002b0b0:
  *(char *)((long)puVar3 + (long)pcVar2) = '\0';
  return param_1;
}



/* Entry: 10046901c; end: 100469093;  */

undefined8 *
FUN_10046901c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    FUN_100033dac(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  return puVar1;
}



/* Entry: 100469094; end: 100469203;  */

undefined1  [16] FUN_100469094(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *plStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar10 = param_1 + 3;
  plVar4 = plVar10;
  FUN_10046901c(plVar10,0,0,param_2);
  lVar6 = param_1[3];
  *plVar4 = lVar6;
  plVar4[1] = (long)plVar10;
  *(long **)(lVar6 + 8) = plVar4;
  param_1[3] = (long)plVar4;
  param_1[5] = param_1[5] + 1;
  plVar12 = plVar4 + 2;
  if (*(char *)((long)plVar4 + 0x27) < '\0') {
    plVar12 = (long *)*plVar12;
  }
  uVar5 = 0;
  plVar4 = plVar10;
  FUN_10046901c(plVar10,0,0,param_3);
  lVar6 = param_1[3];
  *plVar4 = lVar6;
  plVar4[1] = (long)plVar10;
  *(long **)(lVar6 + 8) = plVar4;
  param_1[3] = (long)plVar4;
  param_1[5] = param_1[5] + 1;
  plVar10 = plVar4 + 2;
  if (*(char *)((long)plVar4 + 0x27) < '\0') {
    plVar10 = (long *)*plVar10;
  }
  plVar4 = param_1 + 2;
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 < (undefined4 *)*plVar4) {
    *puVar8 = 0;
    plVar11 = (long *)(puVar8 + 8);
    *(long **)(puVar8 + 2) = plVar12;
    *(long **)(puVar8 + 4) = plVar10;
  }
  else {
    lVar6 = (long)puVar8 - *param_1 >> 5;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3b != 0) {
      func_0x000104aaa134(param_1);
      pcStack_38 = FUN_100469204;
      plStack_50 = plVar10;
      plStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      if (uVar5 >> 0x3b == 0) {
        lVar6 = uVar5 << 5;
        func_0x000107c60e20(lVar6);
        auVar17._8_8_ = uVar5;
        auVar17._0_8_ = lVar6;
        return auVar17;
      }
      func_0x000104a7757c();
      func_0x00010002b82c(&plStack_50);
      func_0x000107c613d0(uVar5);
      func_0x000107c60c50(plVar10,param_1,uVar5);
      auVar15._8_8_ = param_1;
      auVar15._0_8_ = plVar10;
      return auVar15;
    }
    uVar7 = *plVar4 - *param_1;
    uVar5 = (long)uVar7 >> 4;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar5 = 0x7ffffffffffffff;
    }
    if (uVar5 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      FUN_100469204();
    }
    plVar9 = plVar4 + lVar6 * 4;
    plVar2 = plVar4 + uVar5 * 4;
    *(undefined4 *)plVar9 = 0;
    plVar9[1] = (long)plVar12;
    plVar9[2] = (long)plVar10;
    plVar11 = plVar9 + 4;
    plVar10 = (long *)*param_1;
    plVar4 = (long *)param_1[1];
    plVar12 = plVar9;
    if (plVar4 != plVar10) {
      do {
        plVar3 = plVar4 + -3;
        lVar6 = plVar4[-4];
        lVar14 = plVar4[-1];
        lVar13 = plVar4[-2];
        plVar4 = plVar4 + -4;
        plVar9 = plVar12 + -4;
        plVar12[-3] = *plVar3;
        *plVar9 = lVar6;
        plVar12[-1] = lVar14;
        plVar12[-2] = lVar13;
        plVar12 = plVar9;
      } while (plVar4 != plVar10);
      plVar4 = (long *)*param_1;
    }
    *param_1 = (long)plVar9;
    param_1[1] = (long)plVar11;
    param_1[2] = (long)plVar2;
    if (plVar4 != (long *)0x0) {
      func_0x000107c60e14();
    }
  }
  param_1[1] = (long)plVar11;
  auVar16._8_8_ = uVar5;
  auVar16._0_8_ = plVar4;
  return auVar16;
}



/* Entry: 100469204; end: 100469237;  */

void FUN_100469204(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
    func_0x000107c60e20(param_2 << 5);
    return;
  }
  func_0x000104a7757c();
  func_0x00010002b82c(&stack0xffffffffffffffe0);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 100469238; end: 10046924b;  */

void FUN_100469238(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c();
  func_0x000107c613d0(param_2);
  func_0x000107c60c50();
  return;
}



/* Entry: 10046924c; end: 10046938b;  */

long * FUN_10046924c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c8 [24];
  undefined1 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  plVar12 = param_1 + 3;
  plVar5 = plVar12;
  FUN_10046901c(plVar12,0,0,param_2);
  lVar6 = param_1[3];
  *plVar5 = lVar6;
  plVar5[1] = (long)plVar12;
  *(long **)(lVar6 + 8) = plVar5;
  param_1[3] = (long)plVar5;
  param_1[5] = param_1[5] + 1;
  plVar12 = plVar5 + 2;
  if (*(char *)((long)plVar5 + 0x27) < '\0') {
    plVar12 = (long *)*plVar12;
  }
  plVar5 = param_1 + 2;
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 < (undefined4 *)*plVar5) {
    *puVar8 = 1;
    *(long **)(puVar8 + 2) = plVar12;
    puVar8[4] = (int)param_3;
    plVar12 = (long *)(puVar8 + 8);
  }
  else {
    lVar6 = (long)puVar8 - *param_1 >> 5;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3b != 0) {
      plVar12 = param_1;
      func_0x000104aaa134();
      pcStack_38 = FUN_10046938c;
      plVar12[5] = 0;
      plVar12[4] = 0;
      plVar12[7] = 0;
      plVar12[6] = 0;
      plVar12[1] = 0;
      *plVar12 = 0;
      plVar12[3] = 0;
      plVar12[2] = 0;
      uStack_50 = param_3;
      plStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      FUN_100468be4(plVar12 + 8);
      plVar12[0xe] = 0;
      *(undefined2 *)(plVar12 + 0xf) = 0;
      uStack_68 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      auStack_88[0] = 0;
      uStack_70 = 0;
      auStack_a8[0] = 0;
      uStack_90 = 0;
      auStack_c8[0] = 0;
      uStack_b0 = 0;
      FUN_10046946c(plVar12 + 0x10,&uStack_68,0,0,3,auStack_88,0,auStack_a8,0,0,auStack_c8,0x101);
      FUN_1001148fc(auStack_c8);
      FUN_1001148fc(auStack_a8);
      FUN_1001148fc(auStack_88);
      func_0x000107c60ca0(&uStack_68);
      return plVar12;
    }
    uVar7 = *plVar5 - *param_1;
    uVar11 = (long)uVar7 >> 4;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar7) {
      uVar11 = 0x7ffffffffffffff;
    }
    if (uVar11 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      FUN_100469204();
    }
    plVar10 = plVar5 + lVar6 * 4;
    plVar2 = plVar5 + uVar11 * 4;
    *(undefined4 *)plVar10 = 1;
    plVar10[1] = (long)plVar12;
    *(int *)(plVar10 + 2) = (int)param_3;
    plVar12 = plVar10 + 4;
    plVar3 = (long *)*param_1;
    plVar5 = (long *)param_1[1];
    plVar9 = plVar10;
    if (plVar5 != plVar3) {
      do {
        plVar4 = plVar5 + -3;
        lVar6 = plVar5[-4];
        lVar14 = plVar5[-1];
        lVar13 = plVar5[-2];
        plVar5 = plVar5 + -4;
        plVar10 = plVar9 + -4;
        plVar9[-3] = *plVar4;
        *plVar10 = lVar6;
        plVar9[-1] = lVar14;
        plVar9[-2] = lVar13;
        plVar9 = plVar10;
      } while (plVar5 != plVar3);
      plVar5 = (long *)*param_1;
    }
    *param_1 = (long)plVar10;
    param_1[1] = (long)plVar12;
    param_1[2] = (long)plVar2;
    if (plVar5 != (long *)0x0) {
      func_0x000107c60e14();
    }
  }
  param_1[1] = (long)plVar12;
  return plVar5;
}



/* Entry: 10046938c; end: 10046946b;  */

undefined8 * FUN_10046938c(undefined8 *param_1)

{
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_100468be4(param_1 + 8);
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  auStack_58[0] = 0;
  uStack_40 = 0;
  auStack_78[0] = 0;
  uStack_60 = 0;
  auStack_98[0] = 0;
  uStack_80 = 0;
  FUN_10046946c(param_1 + 0x10,&uStack_38,0,0,3,auStack_58,0,auStack_78,0,0,auStack_98,0x101);
  FUN_1001148fc(auStack_98);
  FUN_1001148fc(auStack_78);
  FUN_1001148fc(auStack_58);
  func_0x000107c60ca0(&uStack_38);
  return param_1;
}



/* Entry: 10046946c; end: 10046956f;  */

void FUN_10046946c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar2 = param_6[1];
    uVar1 = *param_6;
    param_1[8] = param_6[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[10] = param_7;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_8 + 3) == '\x01') {
    uVar2 = param_8[1];
    uVar1 = *param_8;
    param_1[0xd] = param_8[2];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_8[1] = 0;
    param_8[2] = 0;
    *param_8 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0xf] = param_9;
  param_1[0x10] = param_10;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(char *)(param_11 + 3) == '\x01') {
    uVar2 = param_11[1];
    uVar1 = *param_11;
    param_1[0x13] = param_11[2];
    param_1[0x12] = uVar2;
    param_1[0x11] = uVar1;
    param_11[1] = 0;
    param_11[2] = 0;
    *param_11 = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  *(undefined1 *)(param_1 + 0x15) = (undefined1)param_12;
  *(undefined1 *)((long)param_1 + 0xa9) = param_12._1_1_;
  param_1[0x16] = param_14;
  param_1[0x17] = param_15;
  return;
}



/* Entry: 100469570; end: 1004695d7;  */

void FUN_100469570(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100469560();
  uStack_28 = extraout_x8;
  FUN_100469628(auStack_40,1);
  FUN_1004696b4(uStack_30);
  FUN_1004696e8();
  func_0x000100469700();
  func_0x000100469710(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100469700(auStack_40);
  func_0x00010527e434();
  pcStack_48 = FUN_1004695d8;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_100469570(&uStack_51);
  return;
}



/* Entry: 1004695d8; end: 100469627;  */

void FUN_1004695d8(void)

{
  undefined1 uStack_11;
  
  FUN_100469570(&uStack_11);
  return;
}



/* Entry: 100469628; end: 10046964f;  */

long FUN_100469628(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x0001004695f8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100469650; end: 1004696b3;  */

void FUN_100469650(void)

{
  return;
}



/* Entry: 1004696b4; end: 1004696e7;  */

undefined8 * FUN_1004696b4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108739c0;
  param_1[1] = 0;
  func_0x000100469658(param_1 + 3);
  return param_1;
}



/* Entry: 1004696e8; end: 10046972f;  */

void FUN_1004696e8(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  
  *unaff_x19 = in_stack_00000010 + 0x18;
  unaff_x19[1] = in_stack_00000010;
  return;
}



/* Entry: 100469730; end: 10046984f;  */

void FUN_100469730(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  func_0x000107c60c94(auStack_78,param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  FUN_10028af84(auStack_98,param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  FUN_10028af84(auStack_b8,param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x80);
  FUN_10028af84(auStack_d8,param_2 + 0x48);
  FUN_10046946c(param_1,auStack_78,uVar1,uVar3,uVar5,auStack_98,uVar6,auStack_b8,uVar2,uVar4,
                auStack_d8,*(undefined1 *)(param_2 + 0x88));
  FUN_1001148fc(auStack_d8);
  FUN_1001148fc(auStack_b8);
  FUN_1001148fc(auStack_98);
  func_0x000107c60ca0(auStack_78);
  return;
}



/* Entry: 100469850; end: 10046985b;  */

void FUN_100469850(void)

{
  return;
}



/* Entry: 10046985c; end: 1004698ff;  */

void FUN_10046985c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100469850();
  func_0x000107c60c94();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_10028af84(param_1 + 0x30,unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_10028af84(unaff_x19 + 0x58,unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  FUN_10028af84(unaff_x19 + 0x88,unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined1 *)(unaff_x19 + 0xb8) = *(undefined1 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  return;
}



/* Entry: 100469900; end: 100469973;  */

undefined8 *
FUN_100469900(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110abd390;
  FUN_10046985c(param_1 + 1);
  *(undefined1 *)(param_1 + 0x19) = param_3;
  *(undefined1 *)((long)param_1 + 0xc9) = param_4;
  uVar1 = *param_5;
  param_1[0x1b] = param_5[1];
  param_1[0x1a] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0x1d] = param_6[1];
  param_1[0x1c] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  return param_1;
}



/* Entry: 100469974; end: 10046997b;  */

void FUN_100469974(void)

{
  return;
}



/* Entry: 10046997c; end: 100469a0b;  */

void FUN_10046997c(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100469a0c; end: 100469a4b;  */

undefined8 * FUN_100469a0c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    puVar4 = (undefined8 *)(param_1[2] - *param_1 >> 2);
    if (puVar4 <= param_2) {
      puVar4 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      puVar4 = (undefined8 *)0x1fffffffffffffff;
    }
    return puVar4;
  }
  func_0x000107c2a8a8();
  plVar3 = param_1;
  FUN_100469a0c();
  lVar1 = *param_1;
  lVar2 = param_1[1];
  plStack_68 = param_1 + 2;
  plStack_48 = plStack_68;
  if (plVar3 == (long *)0x0) {
    plStack_68 = (long *)0x0;
  }
  else {
    FUN_100469b18();
  }
  puStack_60 = (undefined8 *)((long)plStack_68 + (lVar2 - lVar1));
  plStack_50 = plStack_68 + (long)plVar3;
  uVar5 = *param_2;
  *param_2 = 0;
  puStack_58 = puStack_60 + 1;
  *puStack_60 = uVar5;
  FUN_100469b3c(param_1,&plStack_68);
  puVar4 = (undefined8 *)param_1[1];
  FUN_100469bc4(&plStack_68);
  return puVar4;
}



/* Entry: 100469a4c; end: 100469afb;  */

long FUN_100469a4c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_100469a0c(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar4 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_100469b18();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar4));
  plStack_40 = plStack_58 + (long)plVar2;
  uVar3 = *param_2;
  *param_2 = 0;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = uVar3;
  FUN_100469b3c(param_1,&plStack_58);
  lVar4 = param_1[1];
  FUN_100469bc4(&plStack_58);
  return lVar4;
}



/* Entry: 100469afc; end: 100469b17;  */

void FUN_100469afc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_100469afc();
  return;
}



/* Entry: 100469b18; end: 100469b3b;  */

void FUN_100469b18(void)

{
  FUN_100469afc();
  return;
}



/* Entry: 100469b3c; end: 100469bbb;  */

void FUN_100469b3c(long *param_1,undefined8 *param_2)

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



/* Entry: 100469bbc; end: 100469bc3;  */

void FUN_100469bbc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    func_0x00010046e384();
  }
  return;
}



/* Entry: 100469bc4; end: 100469c2b;  */

long * FUN_100469bc4(long *param_1)

{
  FUN_100469bbc();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100469c2c; end: 100469c33;  */

void FUN_100469c2c(void)

{
  return;
}



/* Entry: 100469c34; end: 100469c67;  */

void FUN_100469c34(long param_1)

{
  FUN_1001148fc(param_1 + 0x88);
  FUN_1001148fc(param_1 + 0x58);
  FUN_1001148fc(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 100469c68; end: 100469c73;  */

void FUN_100469c68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 100469c74; end: 100469cc7;  */

long FUN_100469c74(long param_1)

{
  undefined1 auStack_50 [48];
  
  func_0x000100469c70(auStack_50);
  FUN_10046a10c(param_1 + 0x40,auStack_50);
  FUN_10046a1bc(auStack_50);
  return param_1;
}



/* Entry: 100469cc8; end: 100469d43;  */

undefined8 *
FUN_100469cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  func_0x000107c60e20();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    FUN_100033dac(puVar1 + 2,*param_4,param_4[1]);
  }
  else {
    uVar2 = *param_4;
    puVar1[3] = param_4[1];
    puVar1[2] = uVar2;
    puVar1[4] = param_4[2];
  }
  return puVar1;
}



/* Entry: 100469d44; end: 100469dd3;  */

long * FUN_100469d44(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  for (lVar3 = *(long *)(param_2 + 8); lVar3 != param_2; lVar3 = *(long *)(lVar3 + 8)) {
    plVar1 = param_1;
    FUN_100469cc8(param_1,0,0,lVar3 + 0x10);
    lVar2 = *param_1;
    *plVar1 = lVar2;
    plVar1[1] = (long)param_1;
    *(long **)(lVar2 + 8) = plVar1;
    *param_1 = (long)plVar1;
    param_1[2] = param_1[2] + 1;
  }
  return param_1;
}



/* Entry: 100469dd4; end: 10046a06f;  */

long * FUN_100469dd4(long *param_1,long *param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x20;
  long lVar14;
  long *plVar15;
  ulong *unaff_x22;
  int *piVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_100469d44(param_1 + 3,param_2 + 3);
  FUN_10046a070(param_1,param_2[1] - *param_2 >> 5);
  piVar16 = (int *)*param_2;
  piVar3 = (int *)param_2[1];
  if (piVar16 != piVar3) {
    lVar17 = param_2[4];
    lVar18 = param_1[4];
    do {
      puVar9 = (undefined8 *)(lVar17 + 0x10);
      if (*(char *)(lVar17 + 0x27) < '\0') {
        puVar9 = (undefined8 *)*puVar9;
      }
      if (puVar9 != *(undefined8 **)(piVar16 + 2)) {
        uVar8 = 0x32;
LAB_100469fec:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/common/channel_arguments.cc"
                      ,uVar8,2,"assertion failed: %s");
        func_0x000107c60ebc();
LAB_10046a030:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10046a034);
        (*pcVar6)();
      }
      plVar19 = (long *)(lVar18 + 0x10);
      if (*(char *)(lVar18 + 0x27) < '\0') {
        plVar19 = (long *)*plVar19;
      }
      iVar4 = *piVar16;
      lVar17 = *(long *)(lVar17 + 8);
      lVar18 = *(long *)(lVar18 + 8);
      if (iVar4 == 0) {
        puVar9 = (undefined8 *)(lVar17 + 0x10);
        if (*(char *)(lVar17 + 0x27) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        if (puVar9 != *(undefined8 **)(piVar16 + 4)) {
          uVar8 = 0x3b;
          goto LAB_100469fec;
        }
        unaff_x22 = (ulong *)(lVar18 + 0x10);
        if (*(char *)(lVar18 + 0x27) < '\0') {
          unaff_x22 = (ulong *)*unaff_x22;
        }
        lVar17 = *(long *)(lVar17 + 8);
        lVar18 = *(long *)(lVar18 + 8);
      }
      else if (iVar4 == 2) {
        unaff_x22 = *(ulong **)(piVar16 + 4);
        unaff_x20 = *(undefined8 **)(piVar16 + 6);
        (*(code *)*unaff_x20)();
      }
      else if (iVar4 == 1) {
        unaff_x22 = (ulong *)((ulong)unaff_x22 & 0xffffffff00000000 | (ulong)(uint)piVar16[4]);
      }
      piVar2 = (int *)param_1[1];
      if (piVar2 < (int *)param_1[2]) {
        *piVar2 = iVar4;
        *(long **)(piVar2 + 2) = plVar19;
        *(ulong **)(piVar2 + 4) = unaff_x22;
        plVar15 = (long *)(piVar2 + 8);
        *(undefined8 **)(piVar2 + 6) = unaff_x20;
      }
      else {
        lVar14 = (long)piVar2 - *param_1 >> 5;
        uVar1 = lVar14 + 1;
        if (uVar1 >> 0x3b != 0) {
          func_0x000104aaa134(param_1);
          goto LAB_10046a030;
        }
        uVar10 = param_1[2] - *param_1;
        uVar11 = (long)uVar10 >> 4;
        if (uVar11 <= uVar1) {
          uVar11 = uVar1;
        }
        if (0x7fffffffffffffdf < uVar10) {
          uVar11 = 0x7ffffffffffffff;
        }
        if (uVar11 == 0) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = param_1 + 2;
          FUN_100469204();
        }
        plVar15 = plVar7 + lVar14 * 4;
        *(int *)plVar15 = iVar4;
        plVar15[1] = (long)plVar19;
        plVar15[2] = (long)unaff_x22;
        plVar15[3] = (long)unaff_x20;
        lVar14 = *param_1;
        lVar13 = param_1[1];
        plVar19 = plVar15;
        plVar12 = plVar15;
        if (lVar13 != lVar14) {
          do {
            plVar5 = (long *)(lVar13 + -0x18);
            lVar20 = *(long *)(lVar13 + -0x20);
            lVar22 = *(long *)(lVar13 + -8);
            lVar21 = *(long *)(lVar13 + -0x10);
            lVar13 = lVar13 + -0x20;
            plVar12 = plVar19 + -4;
            plVar19[-3] = *plVar5;
            *plVar12 = lVar20;
            plVar19[-1] = lVar22;
            plVar19[-2] = lVar21;
            plVar19 = plVar12;
          } while (lVar13 != lVar14);
          lVar13 = *param_1;
        }
        plVar15 = plVar15 + 4;
        *param_1 = (long)plVar12;
        param_1[1] = (long)plVar15;
        param_1[2] = (long)(plVar7 + uVar11 * 4);
        if (lVar13 != 0) {
          func_0x000107c60e14(lVar13);
        }
      }
      param_1[1] = (long)plVar15;
      piVar16 = piVar16 + 8;
    } while (piVar16 != piVar3);
  }
  return param_1;
}



/* Entry: 10046a070; end: 10046a10b;  */

void FUN_10046a070(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  plVar4 = param_1 + 2;
  lVar5 = *param_1;
  if ((long *)(*plVar4 - lVar5 >> 5) < param_2) {
    if ((ulong)param_2 >> 0x3b != 0) {
      func_0x000104aaa134();
      lVar5 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar5;
      lVar5 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = lVar5;
      lVar5 = param_1[2];
      param_1[2] = param_2[2];
      param_2[2] = lVar5;
      plVar4 = param_1 + 3;
      plVar1 = param_2 + 3;
      lVar5 = param_1[5];
      param_1[5] = param_2[5];
      param_2[5] = lVar5;
      lVar7 = param_1[4];
      lVar5 = *plVar4;
      lVar12 = *plVar1;
      param_1[4] = param_2[4];
      *plVar4 = lVar12;
      param_2[4] = lVar7;
      *plVar1 = lVar5;
      if (param_1[5] == 0) {
        *plVar4 = (long)plVar4;
        plVar6 = plVar4;
      }
      else {
        *(long **)param_1[4] = plVar4;
        plVar6 = (long *)*plVar4;
      }
      plVar6[1] = (long)plVar4;
      if (param_2[5] == 0) {
        *plVar1 = (long)plVar1;
        plVar4 = plVar1;
      }
      else {
        *(long **)param_2[4] = plVar1;
        plVar4 = (long *)*plVar1;
      }
      plVar4[1] = (long)plVar1;
      return;
    }
    lVar7 = param_1[1];
    FUN_100469204();
    puVar2 = (undefined8 *)((long)plVar4 + (lVar7 - lVar5 & 0xffffffffffffffe0U));
    lVar5 = *param_1;
    lVar7 = param_1[1];
    puVar8 = puVar2;
    puVar9 = puVar2;
    if (lVar7 != lVar5) {
      do {
        puVar3 = (undefined8 *)(lVar7 + -0x18);
        uVar10 = *(undefined8 *)(lVar7 + -0x20);
        uVar13 = *(undefined8 *)(lVar7 + -8);
        uVar11 = *(undefined8 *)(lVar7 + -0x10);
        lVar7 = lVar7 + -0x20;
        puVar9 = puVar8 + -4;
        puVar8[-3] = *puVar3;
        *puVar9 = uVar10;
        puVar8[-1] = uVar13;
        puVar8[-2] = uVar11;
        puVar8 = puVar9;
      } while (lVar7 != lVar5);
      lVar7 = *param_1;
    }
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar2;
    param_1[2] = (long)(plVar4 + (long)param_2 * 4);
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10046a10c; end: 10046a147;  */

void FUN_10046a10c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar2;
  puVar4 = param_1 + 3;
  puVar1 = param_2 + 3;
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  param_2[5] = uVar2;
  uVar5 = param_1[4];
  uVar2 = *puVar4;
  uVar6 = *puVar1;
  param_1[4] = param_2[4];
  *puVar4 = uVar6;
  param_2[4] = uVar5;
  *puVar1 = uVar2;
  if (param_1[5] == 0) {
    *puVar4 = puVar4;
    puVar3 = puVar4;
  }
  else {
    *(undefined8 **)param_1[4] = puVar4;
    puVar3 = (undefined8 *)*puVar4;
  }
  puVar3[1] = puVar4;
  if (param_2[5] == 0) {
    *puVar1 = puVar1;
    puVar4 = puVar1;
  }
  else {
    *(undefined8 **)param_2[4] = puVar1;
    puVar4 = (undefined8 *)*puVar1;
  }
  puVar4[1] = puVar1;
  return;
}



/* Entry: 10046a148; end: 10046a1bb;  */

void FUN_10046a148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  uVar3 = param_1[1];
  uVar1 = *param_1;
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_2[1] = uVar3;
  *param_2 = uVar1;
  if (param_1[2] == 0) {
    *param_1 = param_1;
    puVar2 = param_1;
  }
  else {
    *(undefined8 **)param_1[1] = param_1;
    puVar2 = (undefined8 *)*param_1;
  }
  puVar2[1] = param_1;
  if (param_2[2] == 0) {
    *param_2 = param_2;
    puVar2 = param_2;
  }
  else {
    *(undefined8 **)param_2[1] = param_2;
    puVar2 = (undefined8 *)*param_2;
  }
  puVar2[1] = param_2;
  return;
}



/* Entry: 10046a1bc; end: 10046a1bf;  */

long * FUN_10046a1bc(long *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_78 [72];
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; piVar2 != piVar1; piVar2 = piVar2 + 8) {
    if (*piVar2 == 2) {
      FUN_100460de4(auStack_78);
      (**(code **)(*(long *)(piVar2 + 6) + 8))(*(undefined8 *)(piVar2 + 4));
      FUN_100467a48(auStack_78);
    }
  }
  FUN_10046a278(param_1 + 3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10046a1c0; end: 10046a247;  */

long * FUN_10046a1c0(long *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_78 [72];
  
  piVar1 = (int *)param_1[1];
  for (piVar2 = (int *)*param_1; piVar2 != piVar1; piVar2 = piVar2 + 8) {
    if (*piVar2 == 2) {
      FUN_100460de4(auStack_78);
      (**(code **)(*(long *)(piVar2 + 6) + 8))(*(undefined8 *)(piVar2 + 4));
      FUN_100467a48(auStack_78);
    }
  }
  FUN_10046a278(param_1 + 3);
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10046a248; end: 10046a277;  */

/* WARNING: Possible PIC construction at 0x00010046a264: Changing call to branch */

void FUN_10046a248(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x27) < '\0') {
    param_2 = *(long *)(param_2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10046a278; end: 10046a2d3;  */

void FUN_10046a278(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar3 = (long *)param_1[1];
    plVar1 = *(long **)(*param_1 + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_1[2] = 0;
    while (plVar3 != param_1) {
      plVar3 = (long *)plVar3[1];
      FUN_10046a248(param_1);
    }
  }
  return;
}



/* Entry: 10046a2d4; end: 10046a333;  */

undefined8 FUN_10046a2d4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_e0 [192];
  
  (**(code **)(*(long *)*param_2 + 0x10))(auStack_e0);
  func_0x00010046a3b4(param_1,auStack_e0);
  FUN_100469c34(auStack_e0);
  return param_1;
}



/* Entry: 10046a334; end: 10046a42b;  */

long FUN_10046a334(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c60ca4();
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  func_0x0001002a969c(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  func_0x0001002a969c(param_1 + 0x58,param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  func_0x0001002a969c(param_1 + 0x88,param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  return param_1;
}



/* Entry: 10046a42c; end: 10046a433;  */

void FUN_10046a42c(void)

{
  return;
}



/* Entry: 10046a434; end: 10046a6d7;  */

ulong ***** FUN_10046a434(ulong *****param_1,ulong *****param_2)

{
  ulong *****pppppuVar1;
  ulong uVar2;
  ulong ****ppppuVar3;
  char cVar4;
  code *pcVar5;
  ulong ****ppppuVar6;
  ulong *****pppppuVar7;
  ulong ****ppppuVar8;
  long lVar9;
  ulong ****ppppuVar10;
  ulong ****ppppuVar11;
  ulong ****ppppuStack_98;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  char cStack_81;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar6 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppppuVar6 = (ulong ****)(ulong)*(byte *)((long)param_2 + 0x17);
  }
  pppppuVar7 = param_2;
  if (ppppuVar6 != (ulong ****)0x0) {
    ppppuVar6 = *param_1;
    ppppuVar11 = param_1[1];
    if (ppppuVar6 != ppppuVar11) {
      ppppuVar10 = param_1[4];
      do {
        ppppuVar10 = (ulong ****)ppppuVar10[1];
        if (*(int *)ppppuVar6 == 0) {
          FUN_10002b024(&ppppuStack_98,ppppuVar6[1]);
          if (cStack_81 < '\0') {
            if (CONCAT17(uStack_89,uStack_90) == 0x17) {
              ppppuVar8 = (ulong ****)*ppppuStack_98;
              ppppuVar3 = (ulong ****)ppppuStack_98[1];
              lVar9 = *(long *)((long)ppppuStack_98 + 0xf);
              func_0x000107c60e14();
              if ((ppppuVar8 == (ulong ****)0x6972702e63707267 &&
                  ppppuVar3 == (ulong ****)0x6573755f7972616d) && lVar9 == 0x746e6567615f7265)
              goto LAB_10046a580;
            }
            else {
              func_0x000107c60e14();
            }
          }
          else if ((cStack_81 == '\x17') &&
                  (((ulong *****)ppppuStack_98 == (ulong *****)0x6972702e63707267 &&
                   CONCAT17(uStack_89,uStack_90) == 0x6573755f7972616d) &&
                   CONCAT71(uStack_88,uStack_89) == 0x746e6567615f7265)) {
LAB_10046a580:
            ppppuVar11 = ppppuVar10 + 2;
            ppppuVar8 = ppppuVar11;
            if (*(char *)((long)ppppuVar10 + 0x27) < '\0') {
              ppppuVar8 = (ulong ****)*ppppuVar11;
            }
            if ((ulong ****)ppppuVar6[2] != ppppuVar8) {
              func_0x000107c2c494();
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10046a6ac);
              (*pcVar5)();
            }
            ppppuVar8 = param_2[1];
            if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
              ppppuVar8 = (ulong ****)(ulong)*(byte *)((long)param_2 + 0x17);
            }
            FUN_10046a6d8(&ppppuStack_98,(long)ppppuVar8 + 1,&uStack_79);
            pppppuVar7 = (ulong *****)ppppuStack_98;
            if (-1 < cStack_81) {
              pppppuVar7 = &ppppuStack_98;
            }
            if (ppppuVar8 != (ulong ****)0x0) {
              pppppuVar1 = (ulong *****)*param_2;
              if (-1 < *(char *)((long)param_2 + 0x17)) {
                pppppuVar1 = param_2;
              }
              func_0x000107c610b8(pppppuVar7,pppppuVar1,ppppuVar8);
            }
            *(undefined2 *)((long)pppppuVar7 + (long)ppppuVar8) = 0x20;
            pppppuVar7 = (ulong *****)ppppuVar6[2];
            param_1 = &ppppuStack_98;
            func_0x000107c60c58();
            ppppuVar8 = *param_1;
            uStack_78 = SUB87(param_1[1],0);
            uStack_71 = (undefined1)*(undefined8 *)((long)param_1 + 0xf);
            uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0xf) >> 8);
            cVar4 = *(char *)((long)param_1 + 0x17);
            param_1[1] = (ulong ****)0x0;
            param_1[2] = (ulong ****)0x0;
            *param_1 = (ulong ****)0x0;
            if (*(char *)((long)ppppuVar10 + 0x27) < '\0') {
              param_1 = (ulong *****)*ppppuVar11;
              func_0x000107c60e14();
            }
            ppppuVar10[2] = (ulong ***)ppppuVar8;
            ppppuVar10[3] = (ulong ***)CONCAT17(uStack_71,uStack_78);
            *(ulong *)((long)ppppuVar10 + 0x1f) = CONCAT71(uStack_70,uStack_71);
            *(char *)((long)ppppuVar10 + 0x27) = cVar4;
            if (cStack_81 < '\0') {
              param_1 = (ulong *****)ppppuStack_98;
              func_0x000107c60e14();
              cVar4 = *(char *)((long)ppppuVar10 + 0x27);
            }
            if (cVar4 < '\0') {
              ppppuVar11 = (ulong ****)*ppppuVar11;
            }
            ppppuVar6[2] = (ulong ***)ppppuVar11;
            goto LAB_10046a66c;
          }
          ppppuVar10 = (ulong ****)ppppuVar10[1];
        }
        ppppuVar6 = ppppuVar6 + 4;
      } while (ppppuVar6 != ppppuVar11);
    }
    FUN_10002b024(&ppppuStack_98,"grpc.primary_user_agent");
    pppppuVar7 = &ppppuStack_98;
    FUN_100469094(param_1,pppppuVar7,param_2);
    if (cStack_81 < '\0') {
      param_1 = (ulong *****)ppppuStack_98;
      func_0x000107c60e14();
    }
  }
LAB_10046a66c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  func_0x000107c60e78();
  if (cStack_81 < '\0') {
    func_0x000107c60e14(ppppuStack_98);
  }
  func_0x000107c60bd8();
  if (pppppuVar7 < (ulong *****)0x7ffffffffffffff8) {
    if (pppppuVar7 < (ulong *****)0x17) {
      param_1[1] = (ulong ****)0x0;
      param_1[2] = (ulong ****)0x0;
      *param_1 = (ulong ****)0x0;
      *(char *)((long)param_1 + 0x17) = (char)pppppuVar7;
    }
    else {
      uVar2 = ((ulong)pppppuVar7 & 0xfffffffffffffff8) + 8;
      if (((ulong)pppppuVar7 | 7) != 0x17) {
        uVar2 = (ulong)pppppuVar7 | 7;
      }
      ppppuVar6 = (ulong ****)(uVar2 + 1);
      func_0x000107c60e20();
      param_1[1] = (ulong ****)pppppuVar7;
      param_1[2] = (ulong ****)(uVar2 + 1 | 0x8000000000000000);
      *param_1 = ppppuVar6;
    }
    return param_1;
  }
  func_0x000104a6fa5c();
  func_0x000107c60ca4();
  func_0x000107c60ca4(param_1 + 0x10,pppppuVar7);
  pppppuVar7 = param_1;
  FUN_10046a7c4(param_1,&UNK_10f73f5c6,0xffffffffffffffff);
  if (pppppuVar7 == (ulong *****)0xffffffffffffffff) {
    FUN_1001a5598(param_1);
  }
  else {
    func_0x000107c60c4c(param_1,(long)pppppuVar7 + 1,0xffffffffffffffff);
  }
  return param_1;
}



/* Entry: 10046a6d8; end: 10046a75b;  */

ulong * FUN_10046a6d8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (param_2 < 0x7ffffffffffffff8) {
    if (param_2 < 0x17) {
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      *(char *)((long)param_1 + 0x17) = (char)param_2;
    }
    else {
      uVar1 = (param_2 & 0xfffffffffffffff8) + 8;
      if ((param_2 | 7) != 0x17) {
        uVar1 = param_2 | 7;
      }
      uVar2 = uVar1 + 1;
      func_0x000107c60e20();
      param_1[1] = param_2;
      param_1[2] = uVar1 + 1 | 0x8000000000000000;
      *param_1 = uVar2;
    }
    return param_1;
  }
  func_0x000104a6fa5c();
  func_0x000107c60ca4();
  func_0x000107c60ca4(param_1 + 0x10,param_2);
  puVar3 = param_1;
  FUN_10046a7c4(param_1,&UNK_10f73f5c6,0xffffffffffffffff);
  if (puVar3 == (ulong *)0xffffffffffffffff) {
    FUN_1001a5598(param_1);
  }
  else {
    func_0x000107c60c4c(param_1,(long)puVar3 + 1,0xffffffffffffffff);
  }
  return param_1;
}



/* Entry: 10046a75c; end: 10046a7c3;  */

long FUN_10046a75c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c60ca4();
  func_0x000107c60ca4(param_1 + 0x80,param_2);
  lVar1 = param_1;
  FUN_10046a7c4(param_1,&UNK_10f73f5c6,0xffffffffffffffff);
  if (lVar1 == -1) {
    FUN_1001a5598(param_1);
  }
  else {
    func_0x000107c60c4c(param_1,lVar1 + 1,0xffffffffffffffff);
  }
  return param_1;
}



/* Entry: 10046a7c4; end: 10046a817;  */

long FUN_10046a7c4(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar3 = param_1;
  if ((long)uVar5 < 0) {
    puVar3 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  lVar1 = param_2;
  func_0x000107c613d0(param_2);
  if (param_3 < uVar5) {
    uVar5 = param_3 + 1;
  }
  lVar6 = -uVar5;
  lVar4 = uVar5 + (long)puVar3;
  do {
    lVar4 = lVar4 + -1;
    if (lVar6 == 0) {
      return -1;
    }
    lVar2 = param_2;
    FUN_10046a818(param_2,lVar1,lVar4);
    lVar6 = lVar6 + 1;
  } while (lVar2 != 0);
  return -lVar6;
}



/* Entry: 10046a818; end: 10046a827;  */

void FUN_10046a818(undefined8 param_1,undefined8 param_2,char *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memchr_11034c648)(param_1,(long)*param_3,param_2);
  return;
}



/* Entry: 10046a828; end: 10046a88f;  */

long FUN_10046a828(long param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  if (param_4 < param_2) {
    param_2 = param_4 + 1;
  }
  lVar2 = -param_2;
  param_1 = param_2 + param_1;
  do {
    param_1 = param_1 + -1;
    if (lVar2 == 0) {
      return -1;
    }
    lVar1 = param_3;
    FUN_10046a818(param_3,param_5,param_1);
    lVar2 = lVar2 + 1;
  } while (lVar1 != 0);
  return -lVar2;
}



/* Entry: 10046a890; end: 10046aa1b;  */

long FUN_10046a890(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [48];
  undefined1 auStack_38 [24];
  
  switch(param_2) {
  case 0:
  case 3:
    FUN_10046aa1c(param_1,PTR_DAT_11330a920);
    FUN_10046d300();
    func_0x00010046d310();
    FUN_10046d324(auStack_80,auStack_68);
    func_0x00010046e0f0(param_1 + 0x18,auStack_80);
    func_0x00010046e0cc(auStack_80);
    FUN_10046e134();
    break;
  case 1:
    func_0x000104ae3ae0(auStack_68);
    FUN_10055ce8c();
    func_0x00010046e0cc(auStack_68);
    break;
  case 2:
    FUN_10007847c(auStack_80,&UNK_10f73f5cc);
    lVar1 = *(long *)(param_1 + 0x70);
    if (lVar1 == 0) {
      FUN_10096ce0c();
      *(long *)(param_1 + 0x70) = lVar1;
      if (lVar1 != 0) goto code_r0x00010046a940;
      FUN_10046aa1c();
      FUN_10046d300();
      FUN_10002b838(auStack_38,&UNK_10f73f5cb);
      FUN_10046d324(auStack_90,auStack_68);
      func_0x00010046e0f0(param_1 + 0x18,auStack_90);
      func_0x00010046e0cc(auStack_90);
      FUN_10046e134();
    }
    else {
code_r0x00010046a940:
      FUN_10055cc30(auStack_68);
      FUN_10055ce8c();
      func_0x00010046e0cc(auStack_68);
    }
    FUN_100078bd8(auStack_80);
  }
  return param_1;
}



/* Entry: 10046aa1c; end: 10046aa27;  */

undefined1 * FUN_10046aa1c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010002b82c(&stack0x00000028);
  func_0x000107c613d0(param_2);
  func_0x000107c60c50(&stack0x00000028);
  return &stack0x00000028;
}



/* Entry: 10046aa28; end: 10046aa9b; -[SCSearchServices initWithIndexFactory:] */

undefined1 * FUN_10046aa28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702918;
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



/* Entry: 10046aa9c; end: 10046aacf;  */

void FUN_10046aa9c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10046aad0; end: 10046ac2f;  */

void FUN_10046aad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a80f8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0x6553686372616573;
  func_0x000107c5fadc(0x6553686372616573,0xee00736563697672);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}


