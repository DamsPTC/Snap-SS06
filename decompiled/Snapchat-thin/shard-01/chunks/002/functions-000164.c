/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100de115c; end: 100de1177;  */

void FUN_100de115c(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (3 < bVar1) {
    return;
  }
  if ((bVar1 != 3) && (bVar1 != 2)) {
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 100de1178; end: 100de129b;  */

undefined8 * FUN_100de1178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  bVar2 = *(byte *)(param_2 + 2);
  if (bVar2 < 4) {
    uVar3 = *param_2;
    uVar1 = param_2[1];
    func_0x000100dd0978(uVar3,uVar1,bVar2);
    *param_1 = uVar3;
    param_1[1] = uVar1;
    *(byte *)(param_1 + 2) = bVar2;
  }
  else {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 100de129c; end: 100de12af;  */

void FUN_100de129c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100de12b0; end: 100de133f;  */

undefined8 * FUN_100de12b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(byte *)(param_1 + 2) < 4) {
    bVar2 = *(byte *)(param_2 + 2);
    uVar4 = *param_1;
    uVar1 = param_1[1];
    if (bVar2 < 4) {
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *(byte *)(param_1 + 2) = bVar2;
      func_0x000100dd0920(uVar4,uVar1);
    }
    else {
      func_0x000100dd0920(uVar4,uVar1);
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    }
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  }
  return param_1;
}



/* Entry: 100de1340; end: 100de143b;  */

int FUN_100de1340(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf8 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xf9;
  }
  uVar2 = (uint)*(byte *)(param_1 + 4);
  if (0xfb < uVar2) {
    uVar2 = 0xfc;
  }
  iVar1 = (uVar2 ^ 0xff) - 3;
  if (*(byte *)(param_1 + 4) < 4) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 100de143c; end: 100de1543;  */

ulong * FUN_100de143c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 5) {
    if (uVar1 < 5) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 5) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  *(char *)(param_1 + 1) = (char)param_2[1];
  return param_1;
}



/* Entry: 100de1544; end: 100de160b;  */

int FUN_100de1544(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffa < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + 0x7ffffffb;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 5;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100de160c; end: 100de16a7;  */

undefined1  [16] FUN_100de160c(undefined8 param_1,undefined8 param_2,byte param_3,ulong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  if (param_3 < 0xfc) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        func_0x000100dd0978(param_1,param_2,0);
      }
      else {
        param_4 = (ulong)((uint)param_1 & 1);
        param_1 = 0;
      }
    }
    else {
      param_1 = 0;
      if (param_3 != 2) {
        param_1 = 3;
      }
      uVar1 = 4;
      if (param_3 != 2) {
        uVar1 = (uint)param_4;
      }
      param_4 = (ulong)uVar1;
    }
  }
  else if (param_3 < 0xfe) {
    param_1 = 0;
    if (param_3 != 0xfc) {
      param_1 = 4;
    }
  }
  else if (param_3 == 0xff) {
    param_1 = 1;
  }
  else {
    param_1 = 2;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 100de16a8; end: 100de16bf;  */

void FUN_100de16a8(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 100de16c0; end: 100de1747;  */

ulong * FUN_100de16c0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61174();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c61170(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
  }
  return param_1;
}



/* Entry: 100de1748; end: 100de1753;  */

void FUN_100de1748(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 100de1754; end: 100de17c7;  */

ulong * FUN_100de1754(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 < 0xffffffff) {
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    func_0x000107c61170(uVar1);
    *param_1 = uVar2;
  }
  else {
    *param_1 = uVar2;
    func_0x000107c61170(uVar1);
  }
  return param_1;
}



/* Entry: 100de17c8; end: 100de18d3;  */

int FUN_100de17c8(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffa < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffb;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (5 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -4;
  }
  return iVar1;
}



/* Entry: 100de18d4; end: 100de192b;  */

void FUN_100de18d4(long *param_1,long param_2,long param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_2 + 8);
  if (cVar1 == '\x02') {
    func_0x000100df2b64();
  }
  else if (cVar1 == '\x03') {
    func_0x000100df2a98();
  }
  else if (cVar1 == '\x04') {
    func_0x000100df29cc();
  }
  else {
    func_0x000100df2900();
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100de192c; end: 100de1a8b;  */

void FUN_100de192c(long *param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 == 2) {
    func_0x000107c3da2c();
    func_0x000107c61180();
    lVar4 = param_4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar4 == 0) {
      lVar5 = 0xd;
    }
    else {
      lVar5 = lVar4;
      func_0x000107c4cf88();
      func_0x000107c615e8();
      param_4 = lVar4;
    }
    func_0x000100df2f60();
    lVar4 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    puVar2 = PTR___sSiN_11034deb0;
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    puVar3 = PTR___sSis7CVarArgsWP_11034df08;
    *(undefined **)(lVar4 + 0x38) = puVar2;
    *(undefined **)(lVar4 + 0x40) = puVar3;
    *(long *)(lVar4 + 0x20) = lVar5;
    lVar5 = param_3;
    func_0x000107c5fb00(param_4,param_3,lVar4);
    func_0x000107c6142c(param_3);
    *param_1 = param_4;
    param_1[1] = lVar5;
  }
  else {
    if (bVar1 == 3) {
      func_0x000100df2e94();
    }
    else if (bVar1 == 4) {
      func_0x000100df2dc8();
    }
    else {
      param_2 = *(long *)(param_3 + 0x18);
      lVar4 = *(long *)(param_3 + 0x20);
      func_0x0001000a8868(param_3,param_2);
      (**(code **)(lVar4 + 8))();
      if (((uint)param_2 & 1) == (bVar1 & 1)) {
        func_0x000100df2cfc();
        param_3 = lVar4;
      }
      else {
        func_0x000100df2c30();
        param_3 = lVar4;
      }
    }
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Entry: 100de1a8c; end: 100de1ae3;  */

void FUN_100de1a8c(undefined8 param_1,long param_2)

{
  *(bool *)param_1 = *(char *)(param_2 + 8) != '\x02';
  return;
}



/* Entry: 100de1ae4; end: 100de1b53;  */

void FUN_100de1ae4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c450a4(0x4048000000000000,0x4048000000000000);
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 100de1b54; end: 100de1b67;  */

void FUN_100de1b54(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 == 1;
  return;
}



/* Entry: 100de1b68; end: 100de1bcf;  */

void FUN_100de1b68(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  if (*param_2 == 3) {
    func_0x000108b9aaec();
    func_0x000107c61180();
    if (param_2 != (long *)0x0) {
      plVar1 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      goto LAB_100de1bbc;
    }
  }
  plVar1 = (long *)0x0;
  param_3 = 0;
LAB_100de1bbc:
  *param_1 = (long)plVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100de1bd0; end: 100de1beb;  */

undefined * FUN_100de1bd0(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSSSQsWP_11034da98;
  puVar1 = PTR___sSSN_11034da80;
  pcVar2 = FUN_100de18d4;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100de18d4,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 100de1bec; end: 100de1cab;  */

undefined * FUN_100de1bec(undefined8 param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  
  lVar2 = *unaff_x20;
  func_0x000103dbf46c();
  uVar3 = *(undefined8 *)(lVar2 + 0x58);
  func_0x000100de1ff4(lVar2 + 0x30,auStack_58);
  puVar1 = &UNK_110352ba0;
  func_0x000107c613fc(&UNK_110352ba0,0x40,7);
  FUN_100de2038(auStack_58,puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x38) = uVar3;
  func_0x000107c61174(uVar3);
  uVar3 = 0x100de2050;
  func_0x0001000bfde0(0x100de2050,puVar1,PTR___sSSN_11034da80);
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar1);
  puVar1 = PTR___sSSSQsWP_11034da98;
  func_0x000104884898(PTR___sSSSQsWP_11034da98);
  func_0x000107c61574(uVar3);
  return puVar1;
}



/* Entry: 100de1cac; end: 100de1cff;  */

undefined * FUN_100de1cac(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSbSQsWP_11034dd50;
  puVar1 = PTR___sSbN_11034dd40;
  pcVar2 = FUN_100de1a8c;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100de1a8c,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 100de1d00; end: 100de1d8b;  */

undefined8 FUN_100de1d00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0;
  func_0x000100dd1e4c(0);
  uVar2 = 0x100de1ac8;
  func_0x0001000bfde0(0x100de1ac8,0,uVar1);
  func_0x000107c61574(param_1);
  uVar1 = 0x112d36858;
  FUN_100de1fb4(0x112d36858,0x100dd1e4c,&UNK_10d90048c);
  func_0x000104884898();
  func_0x000107c61574(uVar2);
  return uVar1;
}



/* Entry: 100de1d8c; end: 100de1dcb;  */

undefined8 FUN_100de1d8c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x112d36838;
  pcVar2 = FUN_100de1ae4;
  func_0x000103dbf46c();
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  func_0x0001000bfde0(FUN_100de1ae4,0,uVar1);
  func_0x000107c61574(param_1);
  FUN_100de1ee8();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 100de1dcc; end: 100de1e3b;  */

undefined8
FUN_100de1dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  func_0x000104884898(param_5);
  func_0x000107c61574(param_3);
  return param_5;
}



/* Entry: 100de1e3c; end: 100de1e5f;  */

undefined8 FUN_100de1e3c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x112d35ff8;
  pcVar2 = FUN_100de1b68;
  func_0x000103dbf46c();
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x0001000bfde0(FUN_100de1b68,0,uVar1);
  func_0x000107c61574(param_1);
  FUN_100dd41f8();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 100de1e60; end: 100de1ee7;  */

undefined8
FUN_100de1e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  func_0x000103dbf46c();
  func_0x0001000285a8(param_3,param_4);
  func_0x0001000bfde0(param_5,0,param_3);
  func_0x000107c61574(param_1);
  (*param_6)();
  func_0x000104884898();
  func_0x000107c61574(param_5);
  return param_1;
}



/* Entry: 100de1ee8; end: 100de1f6f;  */

void FUN_100de1ee8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d36840 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d36838;
  func_0x00010002969c(0x112d36838,&UNK_10d915fb0);
  uVar2 = 0x112d36848;
  FUN_100de1fb4(0x112d36848,FUN_100de1f70,PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0);
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112d36840 = puVar3;
  return;
}



/* Entry: 100de1f70; end: 100de1fb3;  */

void FUN_100de1f70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d36850 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d36850 = puVar1;
  return;
}



/* Entry: 100de1fb4; end: 100de2037;  */

void FUN_100de1fb4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100de2038; end: 100de205b;  */

undefined8 * FUN_100de2038(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100de205c; end: 100de219f;  */

void FUN_100de205c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100de21a0; end: 100de228f;  */

undefined * FUN_100de21a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1);
  func_0x000107c56ba8(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef10310);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100de2290; end: 100de22a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100de2290(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36888;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36888);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100de22a4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100de22a4; end: 100de239f;  */

undefined * FUN_100de22a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af058;
  func_0x000107c610f8(PTR_PTR_1126af058);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1);
  func_0x000107c53fcc(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef102e0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100de23a0; end: 100de23b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100de23a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36890;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36890);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100de23b4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100de23b4; end: 100de249b;  */

undefined * FUN_100de23b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c59a2c();
  FUN_100df302c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c3d8b8(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef102b0);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100de249c; end: 100de24af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100de249c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d36898;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d36898);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100de24b0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100de24b0; end: 100de258f;  */

undefined * FUN_100de24b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_100df226c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c3d8b8(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef10280);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100de2590; end: 100de25a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100de2590(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d368a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d368a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100de25a4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100de25a4; end: 100de268f;  */

undefined * FUN_100de25a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000100df30f8();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59a2c(puVar1);
  func_0x000107c3d8b8(puVar1);
  func_0x000107c61174(puVar1);
  func_0x000107c5a050();
  uVar3 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010ef10250);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar1;
}



/* Entry: 100de2690; end: 100de26a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100de2690(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d368a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d368a8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    (*(code *)0x100de2704)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100de26a4; end: 100de2877;  */

long FUN_100de26a4(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100de2878; end: 100de28d7; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController viewDidLoad] */

void FUN_100de2878(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_100de4180();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_100de2900();
  FUN_100de3188();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100de28d8; end: 100de28ff; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController initWithCoder:] */

void FUN_100de28d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100de4360();
  return;
}



/* Entry: 100de2900; end: 100de3187;  */

/* WARNING: Possible PIC construction at 0x000100de2950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de29a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de29d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de2fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de3004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de3058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de30b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de310c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de30b4) */
/* WARNING: Removing unreachable block (ram,0x000100de305c) */
/* WARNING: Removing unreachable block (ram,0x000100de3008) */
/* WARNING: Removing unreachable block (ram,0x000100de2fac) */
/* WARNING: Removing unreachable block (ram,0x000100de2f54) */
/* WARNING: Removing unreachable block (ram,0x000100de2f00) */
/* WARNING: Removing unreachable block (ram,0x000100de2ea4) */
/* WARNING: Removing unreachable block (ram,0x000100de2e4c) */
/* WARNING: Removing unreachable block (ram,0x000100de2df8) */
/* WARNING: Removing unreachable block (ram,0x000100de2da4) */
/* WARNING: Removing unreachable block (ram,0x000100de2d70) */
/* WARNING: Removing unreachable block (ram,0x000100de2d2c) */
/* WARNING: Removing unreachable block (ram,0x000100de2cd8) */
/* WARNING: Removing unreachable block (ram,0x000100de2c78) */
/* WARNING: Removing unreachable block (ram,0x000100de2c24) */
/* WARNING: Removing unreachable block (ram,0x000100de2bd0) */
/* WARNING: Removing unreachable block (ram,0x000100de2bb0) */
/* WARNING: Removing unreachable block (ram,0x000100de2b48) */
/* WARNING: Removing unreachable block (ram,0x000100de3184) */
/* WARNING: Removing unreachable block (ram,0x000100de2b7c) */
/* WARNING: Removing unreachable block (ram,0x000100de2b24) */
/* WARNING: Removing unreachable block (ram,0x000100de2ad4) */
/* WARNING: Removing unreachable block (ram,0x000100de3180) */
/* WARNING: Removing unreachable block (ram,0x000100de2b08) */
/* WARNING: Removing unreachable block (ram,0x000100de2ab0) */
/* WARNING: Removing unreachable block (ram,0x000100de2a34) */
/* WARNING: Removing unreachable block (ram,0x000100de317c) */
/* WARNING: Removing unreachable block (ram,0x000100de2a94) */
/* WARNING: Removing unreachable block (ram,0x000100de2a04) */
/* WARNING: Removing unreachable block (ram,0x000100de29d4) */
/* WARNING: Removing unreachable block (ram,0x000100de29a4) */
/* WARNING: Removing unreachable block (ram,0x000100de2954) */
/* WARNING: Removing unreachable block (ram,0x000100de3110) */

void FUN_100de2900(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = unaff_x20;
    func_0x000100de27fc();
    func_0x000107c3d89c(unaff_x20,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de317c);
  (*pcVar1)();
}



/* Entry: 100de3188; end: 100de376b;  */

/* WARNING: Possible PIC construction at 0x000100de3270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de330c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de33a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de3444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de34e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de357c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de3618: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de36b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de361c) */
/* WARNING: Removing unreachable block (ram,0x000100de3580) */
/* WARNING: Removing unreachable block (ram,0x000100de34e4) */
/* WARNING: Removing unreachable block (ram,0x000100de3448) */
/* WARNING: Removing unreachable block (ram,0x000100de33ac) */
/* WARNING: Removing unreachable block (ram,0x000100de3310) */
/* WARNING: Removing unreachable block (ram,0x000100de3274) */
/* WARNING: Removing unreachable block (ram,0x000100de36b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de3188(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d36860,*(undefined8 *)(unaff_x20 + _DAT_112d36860 + 0x18))
  ;
  plVar1 = (long *)0x0;
  FUN_100de0fbc();
  FUN_100de1bd0();
  puVar2 = &UNK_110352c18;
  func_0x000107c613fc(&UNK_110352c18,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar3 = 0x100de4290;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x100de4290);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  uVar4 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d36870),uVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 100de376c; end: 100de3b9b;  */

void FUN_100de376c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000100de2140();
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c59c6c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 100de3b9c; end: 100de3ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100de3b9c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = unaff_x20;
  func_0x000107c4b7a0();
  func_0x000100de27fc();
  func_0x000107c4abfc();
  func_0x000107c61170(lVar2);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    param_1 = param_1 + -48.0;
    dVar5 = *(double *)(PTR__UILayoutFittingCompressedSize_110345d28 + 8);
    uVar6 = 0x447a0000;
    uVar7 = 0x42480000;
    func_0x000107c5c614(param_1,dVar5,0x447a0000,0x42480000,
                        *(undefined8 *)(unaff_x20 + _DAT_112d368b8));
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar4 = dVar5;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c61170(puVar3);
    func_0x000107c609b0(param_1,dVar4,uVar6,uVar7);
    dVar4 = param_1 * 0.9;
    if (dVar5 <= param_1 * 0.9) {
      dVar4 = dVar5;
    }
    return dVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de3cd0);
  (*pcVar1)();
}



/* Entry: 100de3cd0; end: 100de3eaf;  */

void FUN_100de3cd0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  lVar1 = param_1;
  FUN_100de9c28();
  lVar6 = ((ulong)*(uint *)(lVar1 + 0x30) + 7 & 0x1fffffff8) + 8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = lVar1;
  FUN_100df226c();
  puVar3 = &UNK_110352bc8;
  func_0x000107c613fc(&UNK_110352bc8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  func_0x000107c61174();
  func_0x000107c5fadc(lVar2,lVar6);
  func_0x000107c6142c(lVar6);
  pcStack_60 = FUN_100de4264;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100de205c;
  puStack_68 = &UNK_110352be0;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000107c61168();
  func_0x000107c3dad0();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(puStack_58);
  *(undefined **)(lVar1 + 0x20) = puVar3;
  puVar3 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  func_0x000107c5fadc(param_1,param_2);
  uVar5 = 0;
  FUN_100de4320(0,0x112d360a8,&PTR_PTR_1126aed70);
  lVar6 = lVar1;
  func_0x000107c5fc48(lVar1,uVar5);
  func_0x000107c61574(lVar1);
  func_0x000107c4656c(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  func_0x000107c59bc8(puVar3);
  func_0x000107c4f018(unaff_x20);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100de3eb0; end: 100de3f67;  */

void FUN_100de3eb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110352c18;
  func_0x000107c613fc(&UNK_110352c18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  uStack_40 = 0x100de4288;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110352c30;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100de3f68; end: 100de3fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de3f68(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d36868);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0xfc;
    func_0x0001002a64a8(&uStack_50);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100de3fe8; end: 100de3fef; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController downloadMyDataButtonDidTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de3fe8(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0xfe;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100de3ff0; end: 100de3ff7; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController okayButtonDidTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de3ff0(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0xfd;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100de3ff8; end: 100de3fff; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController tryAgainButtonDidTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de3ff8(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0xff;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100de4000; end: 100de404b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de4000(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = param_3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100de404c; end: 100de40a7; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController initWithNibName:bundle:] */

void FUN_100de404c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AgeVerificationFeature.AgeVerificationResultViewController",0x3a,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de4078);
  (*pcVar1)();
}



/* Entry: 100de40a8; end: 100de417f; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100de40f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4138) */
/* WARNING: Removing unreachable block (ram,0x000100de4118) */
/* WARNING: Removing unreachable block (ram,0x000100de40f8) */
/* WARNING: Removing unreachable block (ram,0x000100de4158) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de40a8(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d36860);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d36868));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d36870));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d36878));
  return;
}



/* Entry: 100de4180; end: 100de419f;  */

void FUN_100de4180(void)

{
  func_0x000107c61168(&PTR_PTR_112797698);
  return;
}



/* Entry: 100de41a0; end: 100de4263; -[_TtC22AgeVerificationFeature35AgeVerificationResultViewController textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100de41a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar2 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c5edb4(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0xff;
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_58);
  (**(code **)(lVar2 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 100de4264; end: 100de429f;  */

void FUN_100de4264(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110352c18;
  func_0x000107c613fc(&UNK_110352c18,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar3);
  uStack_40 = 0x100de4288;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110352c30;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100de42a0; end: 100de42ff;  */

void FUN_100de42a0(void)

{
  func_0x000100de388c();
  return;
}



/* Entry: 100de4300; end: 100de431f;  */

void FUN_100de4300(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_100de249c();
    func_0x000107c61170(lVar1);
    func_0x000107c59a2c(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100de4320; end: 100de435f;  */

void FUN_100de4320(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100de4360; end: 100de4507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de4360(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112d36868;
  uVar3 = 0x112d368e8;
  func_0x0001000285a8(0x112d368e8,&UNK_10d901190);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d36870;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d36878) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36880) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36888) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36890) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d36898) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d368a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d368a8) = 0;
  lVar1 = _DAT_112d368b0;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c61174();
  func_0x000107c5a050();
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef10370);
  func_0x000107c520f4(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d368b8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AgeVerificationFeature/AgeVerificationResultViewController.swift",0x40,2,0x77
                      ,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100de4508);
  (*pcVar2)();
}



/* Entry: 100de4508; end: 100de450f;  */

void FUN_100de4508(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100de4510; end: 100de452f;  */

void FUN_100de4510(void)

{
  func_0x000107c61168(&PTR_PTR_112d36930);
  return;
}



/* Entry: 100de4530; end: 100de457f;  */

void FUN_100de4530(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bf8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100de4580; end: 100de45c3;  */

void FUN_100de4580(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100de45c4; end: 100de4613;  */

void FUN_100de45c4(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4bfb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100de4614; end: 100de4617;  */

void FUN_100de4614(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100de4618; end: 100de47db;  */

/* WARNING: Possible PIC construction at 0x000100de46cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de47b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4704) */
/* WARNING: Removing unreachable block (ram,0x000100de4780) */
/* WARNING: Removing unreachable block (ram,0x000100de4764) */
/* WARNING: Removing unreachable block (ram,0x000100de4774) */
/* WARNING: Removing unreachable block (ram,0x000100de4778) */
/* WARNING: Removing unreachable block (ram,0x000100de4784) */
/* WARNING: Removing unreachable block (ram,0x000100de46d0) */
/* WARNING: Removing unreachable block (ram,0x000100de47b4) */

void FUN_100de4618(char param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  puVar1 = PTR_PTR_1126a5d38;
  func_0x000107c610f8(PTR_PTR_1126a5d38);
  func_0x000107c453e4();
  func_0x000107c571f8();
  if (param_1 == '\0') {
    uVar2 = 0xd00000000000001a;
    pcVar3 = "on_session_payload";
  }
  else {
    uVar2 = 0xd000000000000022;
    pcVar3 = "nil_challenge_data";
    if (param_1 != '\x01') {
      uVar2 = 0xd000000000000012;
      pcVar3 = "compliance_engine";
    }
  }
  func_0x000107c5fadc(uVar2,(ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar3 | 0x8000000000000000);
  func_0x000107c5487c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100de47dc; end: 100de4897;  */

/* WARNING: Possible PIC construction at 0x000100de4880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4884) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de47dc(char param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_1130525a8);
  FUN_100de4898(uVar2);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  uVar3 = 0x79636167656c;
  if (param_1 != '\x01') {
    uVar3 = 0xd000000000000011;
  }
  uVar1 = 0xe600000000000000;
  if (param_1 != '\x01') {
    uVar1 = 0x800000010ef104a0;
  }
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000104c64164(uVar4,uVar2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100de4898; end: 100de4a2b;  */

undefined1  [16] FUN_100de4898(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_18;
  
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar3._8_8_ = 0xe700000000000000;
        auVar3._0_8_ = 0x68747541657270;
        return auVar3;
      }
      if (param_1 == 1) {
        auVar7._8_8_ = 0xe300000000000000;
        auVar7._0_8_ = 0x706866;
        return auVar7;
      }
    }
    else {
      if (param_1 == 2) {
        auVar4._8_8_ = 0xec000000676e696e;
        auVar4._0_8_ = 0x7261577070416e69;
        return auVar4;
      }
      if (param_1 == 3) {
        auVar8._8_8_ = 0x800000010ef10440;
        auVar8._0_8_ = 0xd000000000000011;
        return auVar8;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar5._8_8_ = 0xec0000006e6f6974;
      auVar5._0_8_ = 0x6172747369676572;
      return auVar5;
    }
    if (param_1 == 5) {
      auVar10._8_8_ = 0x800000010ef10420;
      auVar10._0_8_ = 0xd000000000000017;
      return auVar10;
    }
  }
  else {
    if (param_1 == 6) {
      auVar6._8_8_ = 0x800000010ef10400;
      auVar6._0_8_ = 0xd000000000000013;
      return auVar6;
    }
    if (param_1 == 7) {
      auVar2._8_8_ = 0x800000010ef103e0;
      auVar2._0_8_ = 0xd000000000000010;
      return auVar2;
    }
    if (param_1 == 8) {
      auVar9._8_8_ = 0xef65746147656741;
      auVar9._0_8_ = 0x646572616c636564;
      return auVar9;
    }
  }
  lStack_18 = param_1;
  func_0x000107c60614(&UNK_11073c4f0,&lStack_18,&UNK_11073c4f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de4a2c);
  (*pcVar1)();
}



/* Entry: 100de4a2c; end: 100de4a47;  */

/* WARNING: Possible PIC construction at 0x000100de4ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4d44) */
/* WARNING: Removing unreachable block (ram,0x000100de4ca4) */
/* WARNING: Removing unreachable block (ram,0x000100de4d54) */

void FUN_100de4a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a5d38;
  func_0x000107c610f8(PTR_PTR_1126a5d38,param_2,&PTR_PTR_1126a5d38,&UNK_10b9b3434,&UNK_104c63ea4);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c571f8(puVar1);
  func_0x000107c61174(puVar1);
  FUN_100de5014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100de4a48; end: 100de4c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de4a48(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  lVar2 = 0;
  FUN_100dd8cfc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR_PTR_1126a5d40;
  func_0x000107c610f8(PTR_PTR_1126a5d40);
  func_0x000107c453e4();
  func_0x000107c52140();
  FUN_100de5174(param_1,puVar8);
  puVar4 = puVar8;
  func_0x000107c614c4(puVar8,lVar2);
  iVar1 = (int)puVar4;
  if (iVar1 < 2) {
    uVar9 = 0;
    if (iVar1 != 0) {
      uVar9 = (ulong)puVar4 & 0xffffffff;
    }
  }
  else if (iVar1 == 2) {
    uVar9 = 3;
  }
  else {
    if (iVar1 != 3) {
      uVar9 = 2;
      goto LAB_100de4b14;
    }
    uVar9 = 4;
  }
  func_0x000100de51b8(puVar8);
LAB_100de4b14:
  func_0x000107c532f0(puVar3);
  func_0x000107c61174(puVar3);
  FUN_100de5014();
  func_0x000107c61170(puVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x18,uVar6);
  (**(code **)(lVar2 + 8))(puVar3,uVar6,lVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c31108(param_2);
  func_0x000107c61180();
  func_0x000107c3110c(uVar9);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_1130525a8);
  FUN_100de4898(uVar5);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000104c63be4(uVar7,param_2,uVar9,uVar5,1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100de4c18; end: 100de4c33;  */

/* WARNING: Possible PIC construction at 0x000100de4ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4d44) */
/* WARNING: Removing unreachable block (ram,0x000100de4ca4) */
/* WARNING: Removing unreachable block (ram,0x000100de4d54) */

void FUN_100de4c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a5d48;
  func_0x000107c610f8(PTR_PTR_1126a5d48,param_2,&PTR_PTR_1126a5d48,&UNK_10b9b33b4,&UNK_104c63924);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c571f8(puVar1);
  func_0x000107c61174(puVar1);
  FUN_100de5014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100de4c34; end: 100de4d73;  */

/* WARNING: Possible PIC construction at 0x000100de4ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4d44) */
/* WARNING: Removing unreachable block (ram,0x000100de4ca4) */
/* WARNING: Removing unreachable block (ram,0x000100de4d54) */

void FUN_100de4c34(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  func_0x000107c610f8(uVar1);
  func_0x000107c453e4();
  func_0x000107c52140();
  func_0x000107c571f8(uVar1);
  func_0x000107c61174(uVar1);
  FUN_100de5014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100de4d74; end: 100de4e4b;  */

/* WARNING: Possible PIC construction at 0x000100de4dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100de4e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4dc4) */
/* WARNING: Removing unreachable block (ram,0x000100de4e34) */

void FUN_100de4d74(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a5d38;
  func_0x000107c610f8(PTR_PTR_1126a5d38);
  func_0x000107c453e4();
  func_0x000107c571f8();
  func_0x000107c61174(puVar1);
  FUN_100de5014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100de4e4c; end: 100de4fbf;  */

/* WARNING: Possible PIC construction at 0x000100de4fa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de4fac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de4e4c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_1130525a8);
  FUN_100de4898(uVar1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  if (param_1 < 3) {
    if (param_1 == 0) {
      uVar4 = 0xee00746168637061;
      uVar2 = 0x6e735f776f6c6c61;
      goto LAB_100de4f7c;
    }
    if (param_1 == 1) {
      uVar4 = 0xe900000000000065;
      uVar2 = 0x67615f7265646e75;
      goto LAB_100de4f7c;
    }
    if (param_1 == 2) {
      uVar4 = 0xe700000000000000;
      uVar2 = 0x6572756c696166;
      goto LAB_100de4f7c;
    }
  }
  else {
    if (param_1 == 3) {
      uVar4 = 0xe400000000000000;
      uVar2 = 0x74697865;
      goto LAB_100de4f7c;
    }
    if (param_1 == 4) {
      uVar4 = 0x800000010ef10460;
      uVar2 = 0xd00000000000001b;
      goto LAB_100de4f7c;
    }
    if (param_1 == 5) {
      uVar2 = 0xd000000000000019;
      uVar4 = 0x800000010ef10480;
      goto LAB_100de4f7c;
    }
  }
  uVar4 = 0xe700000000000000;
  uVar2 = 0x6e776f6e6b6e75;
LAB_100de4f7c:
  func_0x000107c5fadc(uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000104c64394(uVar3,uVar1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100de4fc0; end: 100de5013;  */

void FUN_100de4fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100de5014; end: 100de512b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100de5014(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_113052598);
  uVar1 = ((undefined8 *)(lVar3 + _DAT_113052598))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c52ac4(param_1);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_1130525a0);
  uVar1 = ((undefined8 *)(lVar3 + _DAT_1130525a0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c5280c(param_1);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar2);
  FUN_100de512c(*(undefined8 *)(lVar3 + _DAT_1130525a8));
  func_0x000107c570cc(param_1);
  if (*(long *)(lVar3 + _DAT_1130525b0) == 1) {
    uVar2 = 1;
  }
  else {
    if (*(long *)(lVar3 + _DAT_1130525b0) != 2) {
      return;
    }
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1af950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsBlocking__112649878,uVar2);
  return;
}



/* Entry: 100de512c; end: 100de5173;  */

undefined8 FUN_100de512c(ulong param_1)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_1 < 9) {
    return *(undefined8 *)(&UNK_10d900f78 + param_1 * 8);
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_11073c4f0,&uStack_18,&UNK_11073c4f0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100de5174);
  (*pcVar1)();
}



/* Entry: 100de5174; end: 100de51f3;  */

undefined8 FUN_100de5174(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100dd8cfc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100de51f4; end: 100de522f;  */

void FUN_100de51f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 100de5230; end: 100de58af;  */

void FUN_100de5230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined **ppuVar23;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar3 = &UNK_110352e88;
  func_0x000107c613fc(&UNK_110352e88,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_110352eb0;
  func_0x000107c613fc(&UNK_110352eb0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100de612c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_100de6004;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_110352ec8;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_80;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110352f00;
  func_0x000107c613fc(&UNK_110352f00,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_110352f28;
  func_0x000107c613fc(&UNK_110352f28,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x100de6024;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = (code *)0x100de6130;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_110352f40;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4();
  puVar9 = puStack_80;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110352f78;
  func_0x000107c613fc(&UNK_110352f78,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = param_4;
  *(undefined8 *)(puVar9 + 0x18) = param_5;
  puVar10 = &UNK_110352fa0;
  func_0x000107c613fc(&UNK_110352fa0,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x100de604c;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_88 = (code *)0x100de606c;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_100de58b0;
  puStack_90 = &UNK_110352fb8;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar12 = puStack_80;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_110352ff0;
  func_0x000107c613fc(&UNK_110352ff0,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = param_2;
  *(undefined8 *)(puVar12 + 0x18) = param_3;
  puVar13 = &UNK_110353018;
  func_0x000107c613fc(&UNK_110353018,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = 0x100de608c;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  pcStack_88 = (code *)0x100de60ac;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100de58f0;
  puStack_90 = &UNK_110353030;
  ppuVar14 = &puStack_a8;
  puStack_80 = puVar13;
  func_0x000107c60bc4();
  puVar15 = puStack_80;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_110353068;
  func_0x000107c613fc(&UNK_110353068,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = param_2;
  *(undefined8 *)(puVar15 + 0x18) = param_3;
  puVar16 = &UNK_110353090;
  func_0x000107c613fc(&UNK_110353090,0x20,7);
  *(undefined8 *)(puVar16 + 0x10) = 0x100de6114;
  *(undefined **)(puVar16 + 0x18) = puVar15;
  pcStack_88 = (code *)0x100de6118;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100de58f0;
  puStack_90 = &UNK_1103530a8;
  ppuVar17 = &puStack_a8;
  puStack_80 = puVar16;
  func_0x000107c60bc4();
  puVar18 = puStack_80;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar16);
  func_0x000107c61574(puVar18);
  puVar18 = &UNK_1103530e0;
  func_0x000107c613fc(&UNK_1103530e0,0x20,7);
  *(undefined8 *)(puVar18 + 0x10) = param_2;
  *(undefined8 *)(puVar18 + 0x18) = param_3;
  puVar19 = &UNK_110353108;
  func_0x000107c613fc(&UNK_110353108,0x20,7);
  *(undefined8 *)(puVar19 + 0x10) = 0x100de611c;
  *(undefined **)(puVar19 + 0x18) = puVar18;
  pcStack_88 = (code *)0x100de6120;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100de58f0;
  puStack_90 = &UNK_110353120;
  ppuVar20 = &puStack_a8;
  puStack_80 = puVar19;
  func_0x000107c60bc4();
  puVar21 = puStack_80;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar19);
  func_0x000107c61574(puVar21);
  puVar21 = &UNK_110353158;
  func_0x000107c613fc(&UNK_110353158,0x20,7);
  *(undefined8 *)(puVar21 + 0x10) = param_2;
  *(undefined8 *)(puVar21 + 0x18) = param_3;
  puVar22 = &UNK_110353180;
  func_0x000107c613fc(&UNK_110353180,0x20,7);
  *(undefined8 *)(puVar22 + 0x10) = 0x100de6124;
  *(undefined **)(puVar22 + 0x18) = puVar21;
  pcStack_88 = (code *)0x100de6128;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x100de58f0;
  puStack_90 = &UNK_110353198;
  ppuVar23 = &puStack_a8;
  puStack_80 = puVar22;
  func_0x000107c60bc4();
  puVar1 = puStack_80;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar22);
  func_0x000107c61574(puVar1);
  func_0x000107c4c580(param_1);
  func_0x000107c60bd0(ppuVar23);
  func_0x000107c60bd0(ppuVar20);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0x20,0x27,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100de5898);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x75,0x23,0x19,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100de589c);
    (*pcVar2)();
  }
  puVar3 = puVar10;
  func_0x000107c61544(puVar10,"",0x75,0x26,0x1b,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100de58a0);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  func_0x000107c61544(puVar13,"",0x75,0x28,0x23,1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar16;
    func_0x000107c61544(puVar16,"",0x75,0x2a,0x23,1);
    func_0x000107c61574(puVar18);
    func_0x000107c61574(puVar16);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100de58a8);
      (*pcVar2)();
    }
    puVar3 = puVar19;
    func_0x000107c61544(puVar19,"",0x75,0x2c,0x1c,1);
    func_0x000107c61574(puVar21);
    func_0x000107c61574(puVar19);
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = puVar22;
      func_0x000107c61544(puVar22,"",0x75,0x2e,0x1d,1);
      func_0x000107c61574(puVar22);
      if (((ulong)puVar3 & 1) == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100de58b0);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100de58ac);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100de58a4);
  (*pcVar2)();
}



/* Entry: 100de58b0; end: 100de5a13;  */

void FUN_100de58b0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100de5a14; end: 100de5a7b;  */

void FUN_100de5a14(undefined8 param_1,code *param_2,undefined8 param_3,code *param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  code *pcVar1;
  
  pcVar1 = param_2;
  func_0x000107c61174();
  (*param_4)();
  (*param_2)();
                    /* WARNING: Could not recover jumptable at 0x000100de5a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pcVar1,param_3);
  return;
}



/* Entry: 100de5a7c; end: 100de5ac7;  */

void FUN_100de5a7c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100de5ac8; end: 100de5af3;  */

void FUN_100de5ac8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100de5af4; end: 100de5bdf;  */

void FUN_100de5af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_100de5be0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 100de5be0; end: 100de5d5f;  */

/* WARNING: Possible PIC construction at 0x000100de5d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de5d0c) */

void FUN_100de5be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000100de5f24(0);
  FUN_100de5f68(param_1,param_2,param_3,param_4);
  func_0x000104060028(param_1,param_2,param_3,param_4);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_110352e38;
    func_0x000107c613fc(&UNK_110352e38,0x30,7);
    *(undefined8 *)(puVar2 + 0x10) = param_7;
    *(undefined8 *)(puVar2 + 0x18) = param_8;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    *(undefined8 *)(puVar2 + 0x28) = param_6;
    uStack_70 = 0x100de5ff8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x100de6138;
    puStack_78 = &UNK_110352e50;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(param_8);
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c5dcf0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100de5d60; end: 100de5ebf;  */

/* WARNING: Possible PIC construction at 0x000100de5e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de5e74) */

void FUN_100de5d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  func_0x000100de5f24(0);
  FUN_100de5f68(param_1,param_2,param_3,param_4);
  func_0x000104060028(param_1,param_2,param_3,param_4);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = &UNK_110352de8;
    func_0x000107c613fc(&UNK_110352de8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_5;
    *(undefined8 *)(puVar2 + 0x18) = param_6;
    pcStack_60 = FUN_100de5fa4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    uStack_70 = 0x100de6138;
    puStack_68 = &UNK_110352e00;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c5dcf0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100de5ec0; end: 100de5ee7;  */

void FUN_100de5ec0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100de5a14(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &UNK_104060938,0x100dd0920);
  return;
}



/* Entry: 100de5ee8; end: 100de5f03;  */

void FUN_100de5ee8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100de5f04; end: 100de5f67;  */

void FUN_100de5f04(void)

{
  func_0x000107c61168(&PTR_PTR_112d36b20);
  return;
}



/* Entry: 100de5f68; end: 100de5fa3;  */

/* WARNING: Possible PIC construction at 0x000100de5f8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100de5f90) */
/* WARNING: Removing unreachable block (ram,0x000107c61434) */
/* WARNING: Removing unreachable block (ram,0x00010bdc002c) */

void FUN_100de5f68(void)

{
  char in_w3;
  
  if ((in_w3 != '\x02') && (in_w3 != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100de5fa4; end: 100de5fcb;  */

void FUN_100de5fa4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100de5a14(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &UNK_1040601d8,FUN_100de5fcc);
  return;
}



/* Entry: 100de5fcc; end: 100de6003;  */

void FUN_100de5fcc(undefined8 param_1,undefined8 param_2,char param_3)

{
  if ((param_3 != '\x03') && (param_3 != '\x02')) {
    if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100de6004; end: 100de60cb;  */

void FUN_100de6004(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


