/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086ce1d8; end: 1086ce1e3;  */

undefined ** FUN_1086ce1d8(void)

{
  return &PTR_DAT_110a63e68;
}



/* Entry: 1086ce1e4; end: 1086ce207;  */

undefined8 FUN_1086ce1e4(undefined8 param_1)

{
  func_0x0001086da8bc();
  FUN_1086ba840();
  return param_1;
}



/* Entry: 1086ce208; end: 1086ce213;  */

void FUN_1086ce208(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001086d9d1c();
  func_0x000107c32670();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x30) * 0x30;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x30) {
    FUN_108646534(lVar2,lVar3);
    lVar2 = lVar2 + 0x30;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    FUN_108646578(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x000107c325c4();
  return;
}



/* Entry: 1086ce214; end: 1086ce297;  */

void FUN_1086ce214(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x000107c32670();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x30) * 0x30;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x30) {
    FUN_108646534(lVar2,lVar3);
    lVar2 = lVar2 + 0x30;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
    FUN_108646578(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x000107c325c4();
  return;
}



/* Entry: 1086ce298; end: 1086ce2f3;  */

void FUN_1086ce298(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c32678();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (0x555555555555555 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x000107c32724();
      while (unaff_x20 != unaff_x19[2]) {
        unaff_x19[2] = unaff_x19[2] - 0x30;
        FUN_108646578();
      }
      if (*unaff_x19 != 0) {
        __ZdlPv();
      }
      return;
    }
    __Znwm(unaff_x20 * 0x30);
  }
  func_0x000107c327d4(0x30);
  return;
}



/* Entry: 1086ce2f4; end: 1086ce337;  */

void FUN_1086ce2f4(void)

{
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000107c32724();
  while (unaff_x20 != unaff_x19[2]) {
    unaff_x19[2] = unaff_x19[2] + -0x30;
    FUN_108646578();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1086ce338; end: 1086ce38f;  */

void FUN_1086ce338(void)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c3276c();
  func_0x000107c27994();
  func_0x000107c327a8();
  func_0x000107c27994();
  func_0x00010529e120();
  func_0x0001086da03c();
  func_0x000107c27914(auStack_38);
  return;
}



/* Entry: 1086ce390; end: 1086ce3b3;  */

long FUN_1086ce390(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c326a4();
  FUN_1086ce424();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086ce3b4; end: 1086ce3fb;  */

void FUN_1086ce3b4(void)

{
  uint unaff_w19;
  
  func_0x000107c32750();
  func_0x000107c326d4();
  func_0x000107c3260c(unaff_w19 & 0x147);
  func_0x0001086da13c();
  func_0x000107c325dc();
  return;
}



/* Entry: 1086ce3fc; end: 1086ce3ff;  */

void FUN_1086ce3fc(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086ce400; end: 1086ce41f;  */

void FUN_1086ce400(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086ce390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086ce420; end: 1086ce423;  */

void FUN_1086ce420(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086ce424; end: 1086ce6fb;  */

long * FUN_1086ce424(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x30;
      FUN_108646578();
    }
    func_0x0001006d42f0();
  }
  return param_1;
}



/* Entry: 1086ce6fc; end: 1086ce727;  */

void FUN_1086ce6fc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32724();
  func_0x000107c27994();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x18;
  return;
}



/* Entry: 1086ce728; end: 1086ce79b;  */

void FUN_1086ce728(void)

{
  undefined8 uStack_48;
  
  func_0x000107c32678();
  func_0x0001086db480();
  func_0x00010528d690();
  func_0x0001086da2bc();
  func_0x00010528d530();
  func_0x000107c27994(uStack_48);
  func_0x000107c326ec();
  func_0x00010528d4ec();
  func_0x0001086db474();
  func_0x00010528d5a4();
  return;
}



/* Entry: 1086ce79c; end: 1086ce823;  */

void FUN_1086ce79c(ulong param_1)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001086dacc8();
  if (extraout_w8 != 5) {
    func_0x0001086da7c4();
    func_0x0001086dabfc(5);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086ce7e0();
    *(ulong *)(unaff_x19 + 0x40) = param_1;
  }
  return;
}



/* Entry: 1086ce824; end: 1086ce82f;  */

void FUN_1086ce824(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1086ce830);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1086ce830);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1086ce830; end: 1086ce94f;  */

void FUN_1086ce830(long param_1)

{
  if (param_1 == 0) {
    func_0x0001086da3c4();
  }
  else {
    func_0x0001086d9e74();
  }
  func_0x000107c32688(&UNK_110a8e6e8);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1086ce950; end: 1086ce96b;  */

void FUN_1086ce950(long param_1)

{
  func_0x000107c28fb8();
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return;
}



/* Entry: 1086ce96c; end: 1086ce99b;  */

undefined8 * FUN_1086ce96c(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1086ce99c(param_1,param_2,param_2 + param_3 * 0x20,param_3);
  return param_1;
}



/* Entry: 1086ce99c; end: 1086ce9eb;  */

void FUN_1086ce99c(void)

{
  long in_x3;
  
  func_0x0001086daa90();
  if (in_x3 != 0) {
    func_0x0001086d9f2c();
    FUN_108684f08();
    func_0x0001086da360();
    FUN_1086ce9ec();
  }
  func_0x0001086d9ee4();
  FUN_108684fc0();
  return;
}



/* Entry: 1086ce9ec; end: 1086cea13;  */

void FUN_1086ce9ec(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107c32724();
  func_0x0001086db51c();
  FUN_1086cea14();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086cea14; end: 1086cea27;  */

void FUN_1086cea14(void)

{
  FUN_1086cea28();
  return;
}



/* Entry: 1086cea28; end: 1086cea93;  */

long FUN_1086cea28(void)

{
  long in_x3;
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001086daaa8();
  func_0x000107c325e0();
  func_0x0001086dbf14();
  for (; unaff_x21 != unaff_x19; unaff_x21 = unaff_x21 + 0x20) {
    func_0x0001086da544();
    func_0x000107c28b80();
    in_x3 = lStack_38 + 0x20;
    lStack_38 = in_x3;
  }
  func_0x000107c3273c();
  func_0x000104be761c(auStack_60);
  return in_x3;
}



/* Entry: 1086cea94; end: 1086ceab3;  */

void FUN_1086cea94(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086ceab4; end: 1086ceb03;  */

void FUN_1086ceab4(void)

{
  int extraout_w8;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 *unaff_x19;
  
  func_0x000107c32760();
  if (extraout_w8 == 1) {
    func_0x0001086da408(unaff_x19[1],*unaff_x19);
    (*extraout_x8)();
  }
  if (*(char *)((long)unaff_x19 + 0x19) == '\x01') {
    func_0x0001086da408(unaff_x19[2],*unaff_x19);
    (*extraout_x8_00)();
  }
  return;
}



/* Entry: 1086ceb04; end: 1086cebef;  */

undefined8
FUN_1086ceb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *unaff_x21;
  long unaff_x25;
  
  cVar1 = SBORROW8(param_5,1);
  cVar2 = param_5 + -1 < 0;
  uVar3 = param_5 == 1;
  if (0 < param_5) {
    func_0x0001086dbdd4();
    func_0x0001086dae50();
    if ((bool)uVar3 || cVar2 != cVar1) {
      func_0x0001086dbbc0();
      if ((bool)uVar3 || cVar2 != cVar1) {
        func_0x0001086dbd70();
        func_0x0001086da46c();
      }
      else {
        FUN_1086cebf0();
        if (unaff_x25 < 1) {
          return param_2;
        }
        func_0x0001086dbd70();
        func_0x0001086da46c();
      }
      FUN_1086cee68();
    }
    else {
      func_0x0001086dbbd4(*unaff_x21);
      FUN_10867b544();
      func_0x0001086dacd4(*unaff_x21);
      func_0x0001086dbe2c();
      FUN_1086cec8c();
      FUN_1086cecd8();
      func_0x0001086da024();
      func_0x00010867b814();
    }
  }
  return param_2;
}



/* Entry: 1086cebf0; end: 1086cec17;  */

void FUN_1086cebf0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107c32724();
  func_0x0001086db51c();
  FUN_1086ced8c();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086cec18; end: 1086cec8b;  */

void FUN_1086cec18(long param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = param_2 + (lVar3 - param_4);
  lVar2 = lVar3;
  for (uVar4 = uVar1; uVar4 < param_3; uVar4 = uVar4 + 0x1a8) {
    func_0x000107c28970(lVar2,uVar4);
    lVar2 = lVar2 + 0x1a8;
  }
  *(long *)(param_1 + 8) = lVar2;
  func_0x0001086dab44(param_2,uVar1,lVar3);
  FUN_1086cee10();
  return;
}



/* Entry: 1086cec8c; end: 1086cecd7;  */

void FUN_1086cec8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32678();
  lVar2 = *(long *)(param_1 + 0x10);
  param_3 = param_3 * 0x1a8;
  lVar1 = lVar2 + param_3;
  for (; param_3 != 0; param_3 = param_3 + -0x1a8) {
    func_0x000107c28970(lVar2,unaff_x20);
    lVar2 = lVar2 + 0x1a8;
    unaff_x20 = unaff_x20 + 0x1a8;
  }
  *(long *)(unaff_x19 + 0x10) = lVar1;
  return;
}



/* Entry: 1086cecd8; end: 1086ced8b;  */

undefined8 FUN_1086cecd8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  func_0x000107c325fc();
  uVar1 = *(undefined8 *)(param_2 + 8);
  FUN_10867b6d8(param_1 + 0x10);
  lVar3 = *unaff_x21;
  lVar2 = unaff_x20[1];
  unaff_x20[2] = unaff_x20[2] + (unaff_x21[1] - unaff_x19);
  unaff_x21[1] = unaff_x19;
  FUN_10867b6d8(unaff_x21 + 2);
  unaff_x20[1] = lVar2 + ((unaff_x19 - lVar3) / -0x1a8) * 0x1a8;
  lVar3 = *unaff_x21;
  unaff_x21[1] = lVar3;
  *unaff_x21 = unaff_x20[1];
  unaff_x20[1] = lVar3;
  lVar3 = unaff_x21[1];
  unaff_x21[1] = unaff_x20[2];
  unaff_x20[2] = lVar3;
  lVar3 = unaff_x21[2];
  unaff_x21[2] = unaff_x20[3];
  unaff_x20[3] = lVar3;
  *unaff_x20 = unaff_x20[1];
  return uVar1;
}



/* Entry: 1086ced8c; end: 1086ced9f;  */

void FUN_1086ced8c(void)

{
  FUN_1086ceda0();
  return;
}



/* Entry: 1086ceda0; end: 1086cedf3;  */

long FUN_1086ceda0(void)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x0001086d9f2c();
  func_0x000107c325e0();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x1a8) {
    func_0x0001086daeb4();
    func_0x000107c28970();
    unaff_x19 = uStack_38 + 0x1a8;
    uStack_38 = unaff_x19;
  }
  func_0x0001086da4d4();
  return unaff_x19;
}



/* Entry: 1086cedf4; end: 1086cee0f;  */

void FUN_1086cedf4(void)

{
  func_0x0001086dab44();
  FUN_1086cee10();
  return;
}



/* Entry: 1086cee10; end: 1086cee67;  */

void FUN_1086cee10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x21;
  
  func_0x0001086d9f2c();
  for (; param_3 != unaff_x21; param_3 = param_3 + -0x1a8) {
    func_0x0001086daac4();
    func_0x000107c28950();
  }
  func_0x000107c326d0();
  return;
}



/* Entry: 1086cee68; end: 1086ceea3;  */

long FUN_1086cee68(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + param_2 * 0x1a8;
  func_0x0001086cee88(param_1,lVar1);
  return lVar1;
}



/* Entry: 1086ceea4; end: 1086ceee7;  */

void FUN_1086ceea4(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001086d9f2c();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x1a8) {
    func_0x0001086daad0();
    func_0x000107c28950();
  }
  func_0x000107c326d0();
  return;
}



/* Entry: 1086ceee8; end: 1086cefdf;  */

undefined8
FUN_1086ceee8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined8 extraout_x8;
  long unaff_x25;
  undefined1 auStack_78 [40];
  
  cVar1 = SBORROW8(param_5,1);
  cVar2 = param_5 + -1 < 0;
  bVar3 = param_5 == 1;
  if (0 < param_5) {
    func_0x0001086dae50();
    if (bVar3 || cVar2 != cVar1) {
      func_0x0001086dbbc0();
      if (bVar3 || cVar2 != cVar1) {
        func_0x0001086dbd70();
        func_0x000107c326d0();
        FUN_1086cec18();
        func_0x0001086da544();
      }
      else {
        FUN_1086cefe0(param_1,param_3 + unaff_x25,param_4,extraout_x8);
        if (unaff_x25 < 1) {
          return param_2;
        }
        func_0x0001086dbd70();
        func_0x000107c326d0();
        FUN_1086cec18();
        func_0x0001086da544();
      }
      FUN_1086cf008();
    }
    else {
      func_0x0001086dbbd4(*param_1);
      FUN_10867b544(param_1);
      func_0x0001086dacd4(*param_1);
      func_0x0001086db1dc();
      FUN_1086cf074();
      FUN_1086cecd8(param_1,auStack_78,param_2);
      func_0x0001086da024();
      func_0x00010867b814();
    }
  }
  return param_2;
}



/* Entry: 1086cefe0; end: 1086cf007;  */

void FUN_1086cefe0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107c32724();
  func_0x0001086db51c();
  FUN_1086cf0cc();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086cf008; end: 1086cf073;  */

void FUN_1086cf008(undefined8 param_1,undefined8 param_2,long param_3)

{
  for (param_3 = param_3 * 0x1a8; param_3 != 0; param_3 = param_3 + -0x1a8) {
    func_0x000107c327a8();
    func_0x000107c28a9c();
    func_0x000107c32738();
    func_0x000107c28950();
    func_0x0001086dad64();
  }
  return;
}



/* Entry: 1086cf074; end: 1086cf0cb;  */

void FUN_1086cf074(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da550();
  param_3 = param_3 * 0x1a8;
  lVar1 = *(long *)(param_1 + 0x10) + param_3;
  for (; param_3 != 0; param_3 = param_3 + -0x1a8) {
    func_0x0001086da544();
    func_0x000107c28a9c();
  }
  *(long *)(unaff_x19 + 0x10) = lVar1;
  return;
}



/* Entry: 1086cf0cc; end: 1086cf0df;  */

void FUN_1086cf0cc(void)

{
  FUN_1086cc128();
  return;
}



/* Entry: 1086cf0e0; end: 1086cf10b;  */

void FUN_1086cf0e0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32724();
  FUN_1086cf17c();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x20;
  return;
}



/* Entry: 1086cf10c; end: 1086cf17b;  */

void FUN_1086cf10c(void)

{
  undefined8 uStack_48;
  
  func_0x0001086da060();
  func_0x0001086db480();
  func_0x000104be77f0();
  func_0x0001086db150();
  func_0x000104be74ec();
  func_0x0001086da610(uStack_48);
  FUN_1086cf17c();
  func_0x000107c326ec();
  func_0x000104be74b4();
  func_0x0001086db474();
  func_0x000104be769c();
  return;
}



/* Entry: 1086cf17c; end: 1086cf1e3;  */

void FUN_1086cf17c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001086daa9c();
  func_0x000107c27994();
  uVar1 = *param_3;
  unaff_x20[1] = uStack_38;
  *unaff_x20 = uStack_40;
  func_0x0001086dac08(uVar1);
  unaff_x20[2] = extraout_x9;
  unaff_x20[3] = extraout_x8;
  func_0x0001086da03c();
  return;
}



/* Entry: 1086cf1e4; end: 1086cf1ff;  */

void FUN_1086cf1e4(long param_1)

{
  func_0x000107c28fb8();
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return;
}



/* Entry: 1086cf200; end: 1086cf253;  */

undefined8 * FUN_1086cf200(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x21) = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x000107c28298(param_1 + 3);
  return param_1;
}



/* Entry: 1086cf254; end: 1086cf26b;  */

void FUN_1086cf254(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086cf26c; end: 1086cf28b;  */

void FUN_1086cf26c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1086d42f8();
  }
  return;
}



/* Entry: 1086cf28c; end: 1086cf353;  */

void FUN_1086cf28c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x28) != 1) {
    func_0x000107c2a47c(param_1);
    *(undefined4 *)(param_1 + 0x28) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x000107c290e4();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 1086cf354; end: 1086cf35f;  */

void FUN_1086cf354(void)

{
  func_0x0001086d9d1c();
  FUN_1086cf380();
  return;
}



/* Entry: 1086cf360; end: 1086cf37f;  */

void FUN_1086cf360(void)

{
  FUN_1086cf380();
  return;
}



/* Entry: 1086cf380; end: 1086cf3ab;  */

void FUN_1086cf380(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c32760();
  if ((extraout_x8 & 1) == 0) {
    FUN_1086cf3d8();
  }
  return;
}



/* Entry: 1086cf3ac; end: 1086cf3d7;  */

void FUN_1086cf3ac(void)

{
  uint extraout_w8;
  
  func_0x000107c32760();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086cf3d8();
  }
  return;
}



/* Entry: 1086cf3d8; end: 1086cf3e7;  */

void FUN_1086cf3d8(long param_1)

{
  long unaff_x19;
  
  func_0x0001086da870();
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    func_0x000107c2a484();
  }
  return;
}



/* Entry: 1086cf3e8; end: 1086cf57f;  */

void FUN_1086cf3e8(long param_1)

{
  long unaff_x19;
  
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x30;
    func_0x000107c2a484();
  }
  return;
}



/* Entry: 1086cf580; end: 1086cf5c7;  */

void FUN_1086cf580(long param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107c327c4();
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    func_0x000107c28fb8();
    *(undefined1 *)(unaff_x19 + 0x1d0) = 1;
  }
  return;
}



/* Entry: 1086cf5c8; end: 1086cf5f3;  */

void FUN_1086cf5c8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32724();
  FUN_1086cf668();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x18;
  return;
}



/* Entry: 1086cf5f4; end: 1086cf667;  */

void FUN_1086cf5f4(void)

{
  undefined8 uStack_48;
  
  func_0x000107c32678();
  func_0x0001086db480();
  func_0x00010528d470();
  func_0x0001086da2bc();
  func_0x00010528d210();
  FUN_1086cf668(uStack_48);
  func_0x000107c326ec();
  func_0x00010528d1ec();
  func_0x0001086db474();
  func_0x00010528d384();
  return;
}



/* Entry: 1086cf668; end: 1086cf6a3;  */

void FUN_1086cf668(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x0001086da128();
  func_0x000107c27994();
  unaff_x19[1] = uStack_38;
  *unaff_x19 = uStack_40;
  unaff_x19[2] = uStack_30;
  func_0x0001086dac08();
  func_0x0001086da03c();
  return;
}



/* Entry: 1086cf6a4; end: 1086cf6c3;  */

void FUN_1086cf6a4(long param_1)

{
  if (*(char *)(param_1 + 0x290) == '\x01') {
    FUN_1086cf6c4();
  }
  return;
}



/* Entry: 1086cf6c4; end: 1086cf773;  */

long FUN_1086cf6c4(long param_1)

{
  func_0x000107c279c4(param_1 + 0x250);
  func_0x000107c279dc(param_1 + 0x230);
  func_0x000107c2a500(param_1 + 0x160);
  func_0x000107c279dc(param_1 + 0x140);
  func_0x000107c279c4(param_1 + 0x118);
  func_0x000107c279c4(param_1 + 0xf8);
  func_0x000107c279c4(param_1 + 0xd8);
  func_0x000104bee630(param_1 + 0xa8);
  func_0x000107c27914(param_1 + 0x70);
  func_0x000107c279c4(param_1 + 0x48);
  func_0x000107c28754(param_1 + 0x20);
  func_0x0001086dbaf8();
  return param_1;
}



/* Entry: 1086cf774; end: 1086cf863;  */

void FUN_1086cf774(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_618 [1496];
  
  func_0x000107c32670();
  if (((ulong)param_2[5] & 1) == 0) {
    FUN_1086e0ad4(auStack_618,*unaff_x20);
    func_0x0001086db750();
  }
  else {
    ppuVar2 = &PTR_PTR_113286e08;
    if (*(undefined ***)(unaff_x19 + 0x80) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(unaff_x19 + 0x80);
    }
    ppuVar1 = ppuVar2 + 0x18;
    FUN_1086a2990(ppuVar1);
    ppuVar3 = ppuVar1;
    if (((ulong)ppuVar2[0x18] & 1) != 0) {
      ppuVar3 = (undefined **)(ppuVar2[0x18] + 7);
    }
    if (((ppuVar3 != param_2) && ((*(byte *)(unaff_x19 + 0x138) & 1) != 0)) &&
       (*(long *)unaff_x20[4] < *(long *)(unaff_x19 + 0x130))) {
      puVar4 = unaff_x20 + 5;
      FUN_1086a5c08(puVar4,unaff_x20[2],ppuVar1,*(undefined8 *)(unaff_x19 + 0x18));
      puVar5 = *(undefined8 **)unaff_x20[4];
      if ((long)puVar4 <= (long)puVar5) {
        puVar4 = puVar5;
      }
      *(undefined8 **)unaff_x20[4] = puVar4;
    }
    func_0x000107c29260(auStack_618,*unaff_x20);
    func_0x0001086db750();
  }
  func_0x0001086da3d4();
  return;
}



/* Entry: 1086cf864; end: 1086cf913;  */

void FUN_1086cf864(ulong param_1)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001086db5f4();
  if (extraout_w8 != 0xd) {
    func_0x0001086dadd0();
    func_0x0001086db4bc(0xd);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086cf8a8();
    *(ulong *)(unaff_x19 + 0x38) = param_1;
  }
  return;
}



/* Entry: 1086cf914; end: 1086cf95b;  */

void FUN_1086cf914(void)

{
  long in_x3;
  
  func_0x0001086daa90();
  if (in_x3 != 0) {
    func_0x0001086d9f2c();
    func_0x0001086db840();
    func_0x0001086da360();
    FUN_1086cf95c();
  }
  func_0x0001086d9ee4();
  FUN_10867bdc0();
  return;
}



/* Entry: 1086cf95c; end: 1086cf983;  */

void FUN_1086cf95c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x000107c32724();
  func_0x0001086db51c();
  FUN_1086cf984();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1086cf984; end: 1086cf997;  */

void FUN_1086cf984(void)

{
  FUN_1086cf998();
  return;
}



/* Entry: 1086cf998; end: 1086cf9ef;  */

undefined8 FUN_1086cf998(void)

{
  undefined8 in_x3;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001086daaa8();
  func_0x000107c325e0();
  func_0x0001086dbf14();
  while (unaff_x21 != unaff_x19) {
    func_0x0001086da544();
    func_0x000107c28a9c();
    func_0x0001086dbd5c();
  }
  func_0x0001086da4d4();
  return in_x3;
}



/* Entry: 1086cf9f0; end: 1086cfabb;  */

void FUN_1086cf9f0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1c) != 3) {
    FUN_108916b4c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 3;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086cfa40();
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1086cfabc; end: 1086cfac3;  */

void FUN_1086cfabc(void)

{
  return;
}



/* Entry: 1086cfac4; end: 1086cfaf3;  */

void FUN_1086cfac4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001086da3c4();
  func_0x0001086db408(&PTR_FUN_110a63ea0);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1086cfaf4; end: 1086cfb0f;  */

void FUN_1086cfaf4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_110a63ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086cfb10; end: 1086cfc43;  */

void FUN_1086cfb10(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x23;
  long lVar1;
  long lVar2;
  
  func_0x000107c325fc();
  func_0x0001086d9a34();
  func_0x0001086dbda0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x000107c28150();
  lVar1 = *(long *)(unaff_x23 + 0x10);
  func_0x0001086da518();
  lVar2 = *(long *)(lVar1 + 0x70);
  func_0x0001086da220();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001086db914(lVar1 + 0x48);
  func_0x000107c325e8(&PTR_FUN_110a63f10);
  func_0x0001086da258();
  if (lVar2 == 0) {
    func_0x0001086d9eac();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c3265c();
    func_0x0001086db91c();
    func_0x0001086da9f0();
  }
  func_0x0001086daa20();
  func_0x0001086da664();
  FUN_1086cfc78();
  func_0x000107c325c0(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086da9f0();
    func_0x0001086daa20();
    func_0x0001086d9ff8();
    func_0x0001086da3f0();
    func_0x0001086da290();
    func_0x0001086d9b48();
    return;
  }
  return;
}



/* Entry: 1086cfc44; end: 1086cfc6b;  */

void FUN_1086cfc44(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a63fc0);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086cfc6c; end: 1086cfc77;  */

undefined ** FUN_1086cfc6c(void)

{
  return &PTR_DAT_110a63fc0;
}



/* Entry: 1086cfc78; end: 1086cfe7b;  */

void FUN_1086cfc78(long *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [16];
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_58;
  
  func_0x0001086da3fc();
  func_0x000107c325d4();
  lVar7 = *param_1;
  plVar6 = *(long **)(*(long *)(lVar7 + 0xd0) + 0x130);
  uStack_58 = extraout_x8;
  func_0x0001086da304();
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  pcStack_b8 = (code *)(extraout_x8_00 + 0x10);
  ppuStack_b0 = (undefined **)0x0;
  uStack_98 = 0x17d;
  func_0x0001086dbaf0(&pcStack_b8,0x11);
  uVar3 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107c2825c();
  uStack_110 = uVar3;
  func_0x0001086daac4(*(undefined8 *)(*plVar6 + 0x18));
  (*extraout_x8_01)();
  func_0x0001086db7a8();
  uVar1 = *(char *)(unaff_x20 + 1) == '\x01';
  if ((bool)uVar1) {
    iVar2 = (int)lVar7 + 0x88;
    FUN_1086bf5ac();
    if (iVar2 != 0) {
      FUN_10867ea28(*(undefined8 *)(*(long *)(lVar7 + 0xd0) + 0x80));
    }
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xd0) + 0x110);
  uStack_108 = *(undefined8 *)(lVar7 + 0x18);
  uStack_110 = *(undefined8 *)(lVar7 + 0x10);
  if (*(long *)(lVar7 + 0x18) != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  func_0x0001086da478(auStack_100);
  uStack_e0 = *(undefined1 *)(unaff_x20 + 1);
  uStack_e8 = *unaff_x20;
  uStack_d8 = **(undefined8 **)(unaff_x19 + 0x10);
  puVar4 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 0x30);
  func_0x000107c3271c();
  (*extraout_x8_02)();
  pcStack_b8 = FUN_1086cfee4;
  ppuStack_b0 = &PTR_FUN_110a63fa8;
  puVar5 = puVar4;
  func_0x000107c326e0();
  puVar5[1] = uStack_108;
  *puVar5 = uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x000107c27994(puVar5 + 2,auStack_100);
  puVar5[6] = CONCAT71(uStack_df,uStack_e0);
  puVar5[5] = uStack_e8;
  puVar5[7] = uStack_d8;
  puStack_a8 = puVar5;
  func_0x00010bcce9b8(auStack_c8,uVar3,&pcStack_b8,puVar4);
  func_0x0001086d9d10(ppuStack_b0);
  func_0x000107c27f44(auStack_c8);
  FUN_1086cfec8(&uStack_110);
  func_0x000107c325c0(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001086d9ff8();
    func_0x0001086d9d58();
    return;
  }
  return;
}



/* Entry: 1086cfe7c; end: 1086cfe93;  */

void FUN_1086cfe7c(void)

{
  func_0x0001086d9d58();
  return;
}



/* Entry: 1086cfe94; end: 1086cfec7;  */

void FUN_1086cfe94(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010054ffe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1086cfec8; end: 1086cfee3;  */

long FUN_1086cfec8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1bc();
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086cfee4; end: 1086cffd3;  */

void FUN_1086cfee4(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  long *plVar2;
  long lVar3;
  long alStack_98 [2];
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined **appuStack_60 [3];
  undefined ***pppuStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001086d9a34();
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_38 = extraout_x8;
  FUN_1086ce034(alStack_98,lVar1);
  if ((alStack_98[0] != 0) && ((*(byte *)(alStack_98[0] + 0x110) & 1) == 0)) {
    in_ZR = *(char *)(lVar1 + 0x30) == '\0';
    lVar3 = 0x28;
    if ((bool)in_ZR) {
      lVar3 = 0x38;
    }
    lVar3 = *(long *)(lVar1 + lVar3);
    plVar2 = *(long **)(*(long *)(alStack_98[0] + 0xd0) + 0x90);
    uStack_88 = 0x1200a4;
    uStack_84 = 1;
    func_0x000107c27994(auStack_80,lVar1 + 0x10);
    lStack_68 = lVar3 + 1;
    pppuStack_48 = appuStack_60;
    appuStack_60[0] = &PTR_FUN_110a63f38;
    uStack_40 = 0;
    func_0x0001086dad8c(*(undefined8 *)(*plVar2 + 0x28));
    func_0x0001086cf1c0(&uStack_88);
  }
  func_0x0001086db1c4();
  func_0x000107c325c0(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c3276c();
  func_0x0001086cf1c0();
  func_0x0001086db1c4();
  func_0x0001086d9ff8();
  return;
}



/* Entry: 1086cffd4; end: 1086cffdb;  */

void FUN_1086cffd4(void)

{
  return;
}



/* Entry: 1086cffdc; end: 1086cfffb;  */

void FUN_1086cffdc(undefined8 *param_1)

{
  func_0x0001086da65c();
  *param_1 = &PTR_FUN_110a63f38;
  return;
}



/* Entry: 1086cfffc; end: 1086d001b;  */

void FUN_1086cfffc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a63f38;
  return;
}



/* Entry: 1086d001c; end: 1086d0043;  */

void FUN_1086d001c(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a63f98);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d0044; end: 1086d004f;  */

undefined ** FUN_1086d0044(void)

{
  return &PTR_DAT_110a63f98;
}



/* Entry: 1086d0050; end: 1086d006f;  */

void FUN_1086d0050(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086cfec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d0070; end: 1086d007b;  */

void FUN_1086d0070(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d007c; end: 1086d00a3;  */

void FUN_1086d007c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001086d9fd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a63fe0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1086d00a4; end: 1086d00c7;  */

void FUN_1086d00a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a63fe0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d00c8; end: 1086d00ef;  */

void FUN_1086d00c8(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64050);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d00f0; end: 1086d0103;  */

undefined ** FUN_1086d00f0(void)

{
  return &PTR_DAT_110a64050;
}



/* Entry: 1086d0104; end: 1086d012b;  */

void FUN_1086d0104(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001086d9fd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a64070;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1086d012c; end: 1086d014f;  */

void FUN_1086d012c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a64070;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d0150; end: 1086d0177;  */

void FUN_1086d0150(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a640e0);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d0178; end: 1086d0183;  */

undefined ** FUN_1086d0178(void)

{
  return &PTR_DAT_110a640e0;
}



/* Entry: 1086d0184; end: 1086d0207;  */

void FUN_1086d0184(long param_1)

{
  undefined1 in_ZR;
  ulong uVar1;
  
  func_0x0001086dbc08();
  if (!(bool)in_ZR) {
    FUN_108916b4c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086d01d0();
    *(ulong *)(param_1 + 0x10) = uVar1;
  }
  return;
}



/* Entry: 1086d0208; end: 1086d0223;  */

void FUN_1086d0208(long param_1)

{
  FUN_10868cc20();
  *(undefined1 *)(param_1 + 0x78) = 1;
  return;
}



/* Entry: 1086d0224; end: 1086d03d7;  */

void FUN_1086d0224(ulong param_1)

{
  int extraout_w8;
  long unaff_x19;
  
  func_0x0001086db5f4();
  if (extraout_w8 != 0x15) {
    func_0x0001086dadd0();
    func_0x0001086db4bc(0x15);
    if ((param_1 & 1) != 0) {
      func_0x0001086da030();
    }
    func_0x0001086d0268();
    *(ulong *)(unaff_x19 + 0x38) = param_1;
  }
  return;
}



/* Entry: 1086d03d8; end: 1086d03e3;  */

void FUN_1086d03d8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1086d03e4);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1086d03e4);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1086d03e4; end: 1086d0497;  */

void FUN_1086d03e4(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  
  lVar1 = param_1;
  if (param_1 == 0) {
    func_0x0001086db070();
  }
  else {
    func_0x0001086db9e8();
  }
  func_0x0001086d9c80(&UNK_110a8d548);
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(long *)(lVar1 + 0x38) = param_1;
  func_0x0001086daf64();
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x40) = extraout_x8;
  return;
}


