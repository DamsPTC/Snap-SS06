/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003abdf8; end: 1003abe2f;  */

void FUN_1003abdf8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    uVar2 = 0;
    puVar1 = &UNK_10f7d0ef0;
  }
  else {
    puVar1 = (undefined *)(lVar3 + 0x18);
    uVar2 = *(undefined4 *)(lVar3 + 0xc);
  }
  FUN_1003abe30(param_1,puVar1,uVar2);
  return;
}



/* Entry: 1003abe30; end: 1003abe33;  */

long FUN_1003abe30(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  char acStack_50 [16];
  
  func_0x000107c60cd0(acStack_50,param_1);
  if (acStack_50[0] == '\x01') {
    FUN_1003abf2c();
    lVar1 = param_1 + extraout_x8;
    lVar5 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    lVar4 = lVar1;
    FUN_1003abf9c(lVar1);
    lVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    FUN_1003abfdc(lVar5,param_2,lVar2,param_2 + param_3,lVar1,lVar4);
    if (lVar5 == 0) {
      FUN_1003abf2c();
      func_0x000100456940(param_1 + extraout_x8_00,5);
    }
  }
  func_0x000107c60cd4(acStack_50);
  return param_1;
}



/* Entry: 1003abe34; end: 1003abf2b;  */

long FUN_1003abe34(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  char acStack_50 [16];
  
  func_0x000107c60cd0(acStack_50,param_1);
  if (acStack_50[0] == '\x01') {
    FUN_1003abf2c();
    lVar1 = param_1 + extraout_x8;
    lVar5 = *(long *)(lVar1 + 0x28);
    uVar3 = *(uint *)(lVar1 + 8);
    lVar4 = lVar1;
    FUN_1003abf9c(lVar1);
    lVar2 = param_2 + param_3;
    if ((uVar3 & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    FUN_1003abfdc(lVar5,param_2,lVar2,param_2 + param_3,lVar1,lVar4);
    if (lVar5 == 0) {
      FUN_1003abf2c();
      func_0x000100456940(param_1 + extraout_x8_00,5);
    }
  }
  func_0x000107c60cd4(acStack_50);
  return param_1;
}



/* Entry: 1003abf2c; end: 1003abf37;  */

void FUN_1003abf2c(void)

{
  return;
}



/* Entry: 1003abf38; end: 1003abf9b;  */

long * FUN_1003abf38(void)

{
  long *plVar1;
  long lStack_28;
  
  func_0x000107c60c08(&lStack_28);
  plVar1 = &lStack_28;
  FUN_100152084();
  (**(code **)(*plVar1 + 0x38))();
  func_0x000107c60db0(&lStack_28);
  return plVar1;
}



/* Entry: 1003abf9c; end: 1003abfd3;  */

int FUN_1003abf9c(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == -1) {
    lVar2 = param_1;
    FUN_1003abf38(param_1,0x20);
    iVar1 = (int)lVar2;
    *(int *)(param_1 + 0x90) = iVar1;
  }
  return (int)(char)iVar1;
}



/* Entry: 1003abfd4; end: 1003abfdb;  */

void FUN_1003abfd4(void)

{
  return;
}



/* Entry: 1003abfdc; end: 1003ac0ff;  */

long * FUN_1003abfdc(long *param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 **appuStack_68 [2];
  char cStack_51;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = *(long *)(param_5 + 0x18);
  plVar2 = (long *)(param_3 - param_2);
  if (((long)plVar2 < 1) ||
     (plVar1 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_2,plVar2), plVar1 == plVar2)) {
    if (param_4 - param_2 < lVar3) {
      plVar2 = (long *)(lVar3 - (param_4 - param_2));
      func_0x000107c60c54(appuStack_68,plVar2,param_6);
      if (-1 < cStack_51) {
        appuStack_68[0] = appuStack_68;
      }
      plVar1 = param_1;
      (**(code **)(*param_1 + 0x60))(param_1,appuStack_68[0],plVar2);
      func_0x00010539285c();
      if (plVar1 != plVar2) {
        return (long *)0x0;
      }
    }
    plVar2 = (long *)(param_4 - param_3);
    if (((long)plVar2 < 1) ||
       (plVar1 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_3,plVar2), plVar1 == plVar2))
    {
      *(undefined8 *)(param_5 + 0x18) = 0;
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 1003ac100; end: 1003ac10f;  */

void FUN_1003ac100(void)

{
  return;
}



/* Entry: 1003ac110; end: 1003ac18f;  */

void FUN_1003ac110(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar4;
  
  FUN_1003ac100();
  lVar2 = *(long *)(param_1 + 0x10);
  do {
    uVar4 = unaff_x19 - unaff_x20;
    uVar3 = unaff_x21[3];
    if (uVar3 < uVar4 + lVar2) {
      (**(code **)*unaff_x21)();
      lVar2 = unaff_x21[2];
      uVar3 = unaff_x21[3];
    }
    uVar1 = uVar3 - lVar2;
    if (uVar4 <= uVar3 - lVar2) {
      uVar1 = uVar4;
    }
    FUN_1003ac1b8(unaff_x20,uVar1,unaff_x21[1] + lVar2);
    lVar2 = unaff_x21[2] + uVar1;
    unaff_x21[2] = lVar2;
    unaff_x20 = unaff_x20 + uVar1;
  } while (unaff_x20 != unaff_x19);
  return;
}



/* Entry: 1003ac190; end: 1003ac1b7;  */

long FUN_1003ac190(long param_1,long param_2,long param_3)

{
  FUN_1003ac110(*(undefined8 *)(param_1 + 0x40),param_2,param_2 + param_3);
  return param_3;
}



/* Entry: 1003ac1b8; end: 1003ac207;  */

undefined1  [16] FUN_1003ac1b8(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_1;
  puVar2 = param_3;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar2 = *puVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1003ac208; end: 1003ac24b;  */

void FUN_1003ac208(long param_1,ulong param_2)

{
  ulong uVar1;
  code *extraout_x8;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001003ac1fc();
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 < param_2) {
    func_0x0001072cef80(*(undefined8 *)*unaff_x19);
    (*extraout_x8)();
    uVar1 = unaff_x19[3];
  }
  if (uVar1 <= unaff_x20) {
    unaff_x20 = uVar1;
  }
  unaff_x19[2] = unaff_x20;
  return;
}



/* Entry: 1003ac24c; end: 1003ac263;  */

void FUN_1003ac24c(void)

{
  return;
}



/* Entry: 1003ac264; end: 1003ac2e3;  */

void FUN_1003ac264(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001003ac254();
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  FUN_1003ac304();
  uStack_58 = *(undefined8 *)(unaff_x21 + 0x30);
  uStack_60 = *(undefined8 *)(unaff_x21 + 0x28);
  FUN_1003ac374(unaff_x21 + 4,&uStack_60);
  uStack_60 = *unaff_x19;
  uStack_58 = unaff_x19[3];
  FUN_1003ac3c0(&uStack_60,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 1003ac2e4; end: 1003ac303;  */

void FUN_1003ac2e4(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  return;
}



/* Entry: 1003ac304; end: 1003ac34f;  */

void FUN_1003ac304(void)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  int extraout_w8;
  undefined4 *unaff_x19;
  undefined1 auStack_50 [48];
  
  uVar1 = SUB84(auStack_50,0);
  FUN_1003ac2e4();
  if ((bool)in_ZR) {
    func_0x000106e54430();
  }
  else {
    in_ZR = extraout_w8 == 1;
    if (!(bool)in_ZR) goto LAB_1003ac33c;
    func_0x000106e54530();
  }
  func_0x000106e53fa0();
  *unaff_x19 = uVar1;
LAB_1003ac33c:
  FUN_1003ac350();
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1003ac350; end: 1003ac373;  */

void FUN_1003ac350(void)

{
  return;
}



/* Entry: 1003ac374; end: 1003ac3bf;  */

undefined8 * FUN_1003ac374(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w8;
  undefined4 *unaff_x19;
  undefined1 uStack_81;
  undefined8 auStack_50 [6];
  
  puVar1 = auStack_50;
  FUN_1003ac2e4();
  if ((bool)in_ZR) {
    func_0x000106e54430();
  }
  else {
    in_ZR = extraout_w8 == 1;
    if (!(bool)in_ZR) goto LAB_1003ac3ac;
    func_0x000106e54530();
  }
  func_0x000106e541f4();
  *unaff_x19 = (int)puVar1;
  param_1 = puVar1;
LAB_1003ac3ac:
  FUN_1003ac350();
  if ((bool)in_ZR) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x0001003a9ccc();
  if (param_1[2] == 0) {
    FUN_1003ac430();
    func_0x000106e54318();
  }
  else {
    FUN_1003ac414((long)*(char *)(param_1[2] + 8),&uStack_81);
    FUN_1003ac430();
    FUN_1003ac44c();
  }
  return (undefined8 *)*param_1;
}



/* Entry: 1003ac3c0; end: 1003ac413;  */

undefined8 FUN_1003ac3c0(undefined8 *param_1)

{
  undefined1 uStack_31;
  
  func_0x0001003a9ccc();
  if (param_1[2] == 0) {
    FUN_1003ac430();
    func_0x000106e54318();
  }
  else {
    FUN_1003ac414((long)*(char *)(param_1[2] + 8),&uStack_31);
    FUN_1003ac430();
    FUN_1003ac44c();
  }
  return *param_1;
}



/* Entry: 1003ac414; end: 1003ac42f;  */

void FUN_1003ac414(int param_1)

{
  if ((param_1 != 0) && (param_1 != 0x73)) {
    func_0x000106e54464();
    return;
  }
  return;
}



/* Entry: 1003ac430; end: 1003ac44b;  */

void FUN_1003ac430(void)

{
  return;
}



/* Entry: 1003ac44c; end: 1003ac46b;  */

void FUN_1003ac44c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001003ac440();
  FUN_1003ac46c();
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1003ac46c; end: 1003ac5f7;  */

void FUN_1003ac46c(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = param_4[1];
  uVar1 = param_3;
  if (uVar2 <= param_3) {
    uVar1 = (ulong)uVar2;
  }
  if (-1 < (int)uVar2) {
    param_3 = uVar1;
  }
  if (*param_4 != 0) {
    func_0x000106e542ec(param_2,param_3);
  }
  func_0x0001003a9d9c();
  func_0x0001003ac4d8();
  return;
}



/* Entry: 1003ac5f8; end: 1003ac61f;  */

long FUN_1003ac5f8(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1 + param_1[1];
  FUN_1003a9d20(*param_1,lVar1,param_2);
  return lVar1;
}



/* Entry: 1003ac620; end: 1003ac6cf;  */

void FUN_1003ac620(void)

{
  return;
}



/* Entry: 1003ac6d0; end: 1003ac70b;  */

void FUN_1003ac6d0(void)

{
  func_0x0001003ac6c4();
  FUN_1003ac70c();
  func_0x0001003ac718();
  func_0x000107c60c50();
  return;
}



/* Entry: 1003ac70c; end: 1003ac773;  */

void FUN_1003ac70c(void)

{
  return;
}



/* Entry: 1003ac774; end: 1003ac863;  */

void FUN_1003ac774(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  int extraout_w11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1003ac864();
  if (extraout_x8 == 0) {
    uVar5 = 0;
    pcVar8 = "";
    pcVar7 = pcVar8;
    uVar6 = uVar5;
  }
  else {
    pcVar8 = (char *)(extraout_x8 + 0x18);
    uVar5 = (ulong)*(uint *)(extraout_x8 + 0xc);
    pcVar7 = pcVar8;
    uVar6 = uVar5;
  }
  do {
    if (uVar5 == 0) {
      uVar4 = 0;
      if (*unaff_x20 != 0) {
        do {
          FUN_1003b1ed4();
          uVar4 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      *unaff_x19 = uVar4;
      return;
    }
    iVar1 = (int)*pcVar8;
    func_0x0001003ac874();
    pcVar8 = pcVar8 + 1;
    uVar5 = uVar5 - 1;
  } while (iVar1 == 0);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*unaff_x20 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*unaff_x20 + 0xc);
  }
  func_0x000107c60c84(&uStack_58,uVar3);
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    lVar2 = (long)*pcVar7;
    func_0x000107c60e80(lVar2);
    func_0x000107c60c8c(&uStack_58,(int)(char)lVar2);
    pcVar7 = pcVar7 + 1;
  }
  FUN_1003a8364();
  func_0x0001003ac87c();
  func_0x000107c60ca0(&uStack_58);
  return;
}



/* Entry: 1003ac864; end: 1003ac893;  */

void FUN_1003ac864(void)

{
  return;
}



/* Entry: 1003ac894; end: 1003ac8ef;  */

void FUN_1003ac894(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  plVar1 = param_1 + 1;
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
    FUN_1003a8364();
    FUN_1003ac8f0();
    if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1003ac8f0; end: 1003ac95b;  */

void FUN_1003ac8f0(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  long lStack_28;
  
  lStack_28 = param_2;
  func_0x000107c60d88(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  FUN_1003a8560(uVar1);
  FUN_1003ac9f8(param_1,&lStack_28,uVar1);
  func_0x0001003a8718();
  if (!(bool)in_ZR) {
    func_0x0001003aca48();
  }
  func_0x0001003a8cc4();
  return;
}



/* Entry: 1003ac95c; end: 1003ac9f7;  */

bool FUN_1003ac95c(long *param_1,long *param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar1 = 0;
  uVar4 = param_3 >> 7;
  uVar2 = param_1[3];
  lVar3 = *param_1;
  while( true ) {
    uVar4 = uVar4 & uVar2;
    uVar6 = *(ulong *)(lVar3 + uVar4);
    uVar5 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    lVar7 = *param_2;
    for (uVar5 = uVar5 + 0xfefefefefefefeff & (uVar5 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar8 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar4 + ((ulong)LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) >> 3) & uVar2;
      *param_4 = uVar8;
      if (*(long *)(param_1[1] + uVar8 * 8) == lVar7) goto LAB_1003ac9ec;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar4 = lVar1 + uVar4;
  }
LAB_1003ac9ec:
  return uVar5 != 0;
}



/* Entry: 1003ac9f8; end: 1003aca33;  */

void FUN_1003ac9f8(int param_1)

{
  FUN_1003ac95c();
  if (param_1 != 0) {
    FUN_1003aca34();
  }
  return;
}



/* Entry: 1003aca34; end: 1003aca53;  */

undefined1  [16] FUN_1003aca34(void)

{
  long *unaff_x19;
  undefined1 auVar1 [16];
  long in_stack_00000008;
  
  auVar1._8_8_ = unaff_x19[1] + in_stack_00000008 * 8;
  auVar1._0_8_ = *unaff_x19 + in_stack_00000008;
  return auVar1;
}



/* Entry: 1003aca54; end: 1003aca87;  */

long * FUN_1003aca54(long *param_1)

{
  param_1[1] = param_1[1] + 8;
  *param_1 = *param_1 + 1;
  FUN_1003acadc();
  return param_1;
}



/* Entry: 1003aca88; end: 1003acadb;  */

undefined1  [16] FUN_1003aca88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1003aca54(&uStack_40);
  func_0x0001003acb38(param_1,param_2,param_3);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 1003acadc; end: 1003acb2b;  */

void FUN_1003acadc(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = (char *)*param_1;
  while (*pcVar2 < -1) {
    uStack_28 = *(undefined8 *)pcVar2;
    puVar1 = &uStack_28;
    func_0x0001003acc00();
    pcVar2 = (char *)(*param_1 + ((ulong)puVar1 & 0xffffffff));
    *param_1 = (long)pcVar2;
    param_1[1] = param_1[1] + ((ulong)puVar1 & 0xffffffff) * 8;
  }
  return;
}



/* Entry: 1003acb2c; end: 1003acc43;  */

void FUN_1003acb2c(void)

{
  return;
}



/* Entry: 1003acc44; end: 1003acc7f;  */

void FUN_1003acc44(void)

{
  long unaff_x20;
  
  FUN_1003acc80();
  func_0x0001003acc8c();
  FUN_1003acca0(unaff_x20 + 0xa0);
  func_0x0001003acd1c();
  return;
}



/* Entry: 1003acc80; end: 1003acc9f;  */

void FUN_1003acc80(void)

{
  return;
}



/* Entry: 1003acca0; end: 1003acce3;  */

long * FUN_1003acca0(long *param_1,long *param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    if (*param_2 != 0) {
      do {
        FUN_1003acce4();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *param_1 = lVar1;
    func_0x0001003accf4();
  }
  return param_1;
}



/* Entry: 1003acce4; end: 1003acd23;  */

void FUN_1003acce4(void)

{
  bool bVar1;
  long *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003acd24; end: 1003acd53;  */

undefined8 * FUN_1003acd24(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c60d2c(*param_1);
  }
  return param_1;
}



/* Entry: 1003acd54; end: 1003acdb7;  */

void FUN_1003acd54(void)

{
  return;
}



/* Entry: 1003acdb8; end: 1003acf67;  */

void FUN_1003acdb8(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  plVar5 = &lStack_50;
  FUN_1003acf68();
  FUN_1003a8364();
  FUN_1003a83dc(&lStack_50,param_2);
  lVar8 = *(long *)(param_1 + 0x20) + 0x18;
  uStack_38 = 1;
  lStack_40 = lVar8;
  func_0x000107c60d28();
  func_0x0001003acf74();
  func_0x0001003acfa8(param_1 + 0x100,lStack_50,lVar8);
  func_0x0001003ad068(*(undefined8 *)(param_1 + 0x100));
  if ((bool)in_ZR) {
    func_0x0001003ad074(&uStack_48);
    FUN_1003ad080();
    func_0x0001003acf74();
    lVar8 = 0;
    uVar9 = (ulong)plVar5 >> 7;
    while( true ) {
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x118);
      uVar10 = *(ulong *)(*(long *)(param_1 + 0x100) + uVar9);
      uVar11 = uVar10 ^ ((ulong)plVar5 & 0x7f) * 0x101010101010101;
      for (uVar11 = uVar11 + 0xfefefefefefefeff & (uVar11 ^ 0xffffffffffffffff) & 0x8080808080808080
          ; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar6 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        lVar12 = *(long *)(param_1 + 0x108);
        uVar6 = uVar9 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) &
                *(ulong *)(param_1 + 0x118);
        if (*(long *)(lVar12 + uVar6 * 0x10) == lStack_50) goto LAB_1003acf20;
      }
      if ((uVar10 & ~uVar10 << 6 & 0x8080808080808080) != 0) break;
      lVar8 = lVar8 + 8;
      uVar9 = lVar8 + uVar9;
    }
    uVar6 = param_1 + 0x100;
    FUN_1003ad3b0(uVar6,plVar5);
    plVar2 = (long *)(*(long *)(param_1 + 0x108) + uVar6 * 0x10);
    if (lStack_50 != 0) {
      piVar1 = (int *)(lStack_50 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *plVar2 = lStack_50;
    plVar2[1] = 0;
    *(byte *)(*(long *)(param_1 + 0x100) + uVar6) = (byte)plVar5 & 0x7f;
    func_0x0001003ad5f8();
    lVar12 = *(long *)(param_1 + 0x108);
LAB_1003acf20:
    lVar12 = lVar12 + uVar6 * 0x10;
    uVar7 = *(undefined8 *)(lVar12 + 8);
    *(undefined8 *)(lVar12 + 8) = uStack_48;
    func_0x0001003ad610(uVar7);
  }
  func_0x0001003ad63c();
  FUN_1003ad678();
  return;
}



/* Entry: 1003acf68; end: 1003acf7b;  */

void FUN_1003acf68(void)

{
  return;
}



/* Entry: 1003acf7c; end: 1003acf93;  */

void FUN_1003acf7c(void)

{
  FUN_1003acf94();
  return;
}



/* Entry: 1003acf94; end: 1003ad07f;  */

long FUN_1003acf94(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = ~param_1 + param_1 * 0x200000;
  uVar1 = (uVar1 ^ uVar1 >> 0x18) * 0x109;
  uVar1 = (uVar1 ^ uVar1 >> 0xe) * 0x15;
  return (uVar1 ^ uVar1 >> 0x1c) * 0x80000001;
}



/* Entry: 1003ad080; end: 1003ad17f;  */

void FUN_1003ad080(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uStack_79;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  
  puStack_78 = auStack_60;
  uStack_68 = 0x10;
  uStack_70 = 0;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    uVar3 = 0;
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)(lVar2 + 0x18);
    uVar3 = (ulong)*(uint *)(lVar2 + 0xc);
  }
  uVar5 = 0;
  bVar6 = false;
  lVar2 = 0;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    lVar1 = (long)*pcVar4;
    if (*pcVar4 == ':') {
      bVar6 = true;
      lVar1 = lVar2;
    }
    else {
      FUN_1003ad180();
      uStack_79 = (undefined1)lVar1;
      if (!bVar6) {
        func_0x0001003ad218(&puStack_78,&uStack_79);
        lVar1 = lVar2;
      }
    }
    uVar5 = (uint)lVar1;
    pcVar4 = pcVar4 + 1;
    lVar2 = lVar1;
  }
  FUN_1003ad2c8(param_1,param_3,param_4,uVar5 & 0xff,uStack_70,puStack_78);
  FUN_1003ad378(&puStack_78);
  return;
}



/* Entry: 1003ad180; end: 1003ad26f;  */

undefined1 * FUN_1003ad180(int param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  long lStack_20;
  
  if (param_1 == 0x62) {
    return (undefined1 *)0x4;
  }
  if (param_1 == 100) {
    return (undefined1 *)0x3;
  }
  if (param_1 == 0x69) {
    return (undefined1 *)0x5;
  }
  if (param_1 != 0x6c) {
    if (param_1 == 0x76) {
      return (undefined1 *)0x0;
    }
    if (param_1 == 0x6f) {
      return (undefined1 *)0x2;
    }
    lStack_20 = (long)param_1;
    plVar3 = (long *)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c1f8(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f9e098);
    func_0x000107c61180();
    func_0x000107c30e0c();
    lVar1 = *plVar3;
    lVar2 = plVar3[1];
    if (lVar2 == plVar3[2]) {
      uStack_28 = 0x1003ad218;
      puStack_30 = &stack0xfffffffffffffff0;
      func_0x000107c30e5c(&puStack_38);
    }
    else {
      *(undefined1 *)(lVar1 + lVar2) = *param_2;
      plVar3[1] = lVar2 + 1;
      puStack_38 = (undefined1 *)(lVar1 + lVar2);
    }
    return puStack_38;
  }
  return (undefined1 *)0x6;
}



/* Entry: 1003ad270; end: 1003ad2c7;  */

void FUN_1003ad270(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 *param_5,long *param_6,undefined8 *param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  
  puVar2 = (undefined8 *)(param_2 + 0x30);
  func_0x000107c60e20();
  uVar3 = *param_3;
  uVar4 = *param_4;
  uVar1 = *param_5;
  lVar5 = *param_6;
  puVar6 = (undefined1 *)*param_7;
  *puVar2 = &PTR_DAT_110d7b728;
  puVar2[1] = 1;
  puVar2[2] = uVar3;
  puVar2[3] = uVar4;
  *(undefined1 *)(puVar2 + 4) = uVar1;
  puVar2[5] = lVar5;
  puVar2 = puVar2 + 6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined1 *)puVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar2 = (undefined8 *)((long)puVar2 + 1);
  }
  return;
}



/* Entry: 1003ad2c8; end: 1003ad323;  */

void FUN_1003ad2c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_49;
  uStack_48 = param_6;
  uStack_40 = param_5;
  uStack_31 = param_4;
  uStack_30 = param_3;
  uStack_28 = param_2;
  FUN_1003ad270(puVar1,param_5,&uStack_28,&uStack_30,&uStack_31,&uStack_40,&uStack_48);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1003ad324; end: 1003ad377;  */

void FUN_1003ad324(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110d7b728;
  param_1[1] = 1;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  param_1[5] = param_5;
  puVar1 = param_1 + 6;
  for (; param_5 != 0; param_5 = param_5 + -1) {
    *(undefined1 *)puVar1 = *param_6;
    puVar1 = (undefined8 *)((long)puVar1 + 1);
    param_6 = param_6 + 1;
  }
  return;
}



/* Entry: 1003ad378; end: 1003ad3a7;  */

long FUN_1003ad378(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001003ad35c(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1003ad3a8; end: 1003ad3af;  */

void FUN_1003ad3a8(void)

{
  return;
}



/* Entry: 1003ad3b0; end: 1003ad41f;  */

void FUN_1003ad3b0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  FUN_1003ad420();
  func_0x0001003ad440();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_1003ad3dc;
  func_0x0001003ad494();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_1003ad3dc;
  }
  if (unaff_x22 == 0) {
    func_0x0001003ad4a0();
LAB_1003ad400:
    FUN_1003ad4ac();
  }
  else {
    func_0x0001003ad690();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x0001003ad6a0();
      goto LAB_1003ad400;
    }
    func_0x000107c30ea4();
  }
  func_0x0001003ad5b4();
  func_0x0001003ad440();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_1003ad3dc:
  func_0x0001003ad5c8(lVar1);
  return;
}



/* Entry: 1003ad420; end: 1003ad4ab;  */

undefined8 FUN_1003ad420(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1003ad4ac; end: 1003ad527;  */

/* WARNING: Removing unreachable block (ram,0x0001003ad514) */

void FUN_1003ad4ac(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  char *unaff_x19;
  long unaff_x21;
  long unaff_x24;
  
  FUN_1003ad528();
  func_0x0001003ad53c();
  func_0x0001003ad55c();
  func_0x0001003ad574();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x0001003ad58c(uVar1);
  while (unaff_x24 != 0) {
    if (-1 < *unaff_x19) {
      lVar2 = unaff_x21;
      FUN_1003ad6b0();
      func_0x0001003ad6d4();
      func_0x0001003ad440();
      func_0x0001003ad6ec();
      func_0x0001003ad71c(extraout_x8_00 + lVar2 * 0x10);
    }
    FUN_1003ad77c();
  }
  return;
}



/* Entry: 1003ad528; end: 1003ad643;  */

void FUN_1003ad528(void)

{
  return;
}



/* Entry: 1003ad644; end: 1003ad677;  */

undefined8 * FUN_1003ad644(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c60d2c(*param_1);
  }
  return param_1;
}



/* Entry: 1003ad678; end: 1003ad6af;  */

void FUN_1003ad678(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000000;
  
  if (in_stack_00000000 == (long *)0x0) {
    return;
  }
  plVar1 = in_stack_00000000 + 1;
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
    FUN_1003a8364();
    FUN_1003ac8f0();
    if (in_stack_00000000 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_stack_00000000 + 8))(in_stack_00000000);
      return;
    }
  }
  return;
}



/* Entry: 1003ad6b0; end: 1003ad6cb;  */

void FUN_1003ad6b0(undefined8 *param_1)

{
  FUN_1003ad6cc(param_1,*param_1);
  return;
}



/* Entry: 1003ad6cc; end: 1003ad72f;  */

long FUN_1003ad6cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = ~param_2 + param_2 * 0x200000;
  uVar1 = (uVar1 ^ uVar1 >> 0x18) * 0x109;
  uVar1 = (uVar1 ^ uVar1 >> 0xe) * 0x15;
  return (uVar1 ^ uVar1 >> 0x1c) * 0x80000001;
}



/* Entry: 1003ad730; end: 1003ad77b;  */

undefined8 * FUN_1003ad730(undefined8 *param_1)

{
  func_0x0001003ad610(*param_1);
  return param_1;
}



/* Entry: 1003ad77c; end: 1003ad7a7;  */

void FUN_1003ad77c(void)

{
  return;
}



/* Entry: 1003ad7a8; end: 1003ad7e3; -[SCValdiMarshallableObjectRegistry registerUntypedClass:] */

void FUN_1003ad7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60b14(param_3);
  func_0x000107c61180();
  FUN_1003ad7e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1003ad7e4; end: 1003ad7ef;  */

void FUN_1003ad7e4(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  undefined8 unaff_x19;
  long unaff_x20;
  long lStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 uStack_38;
  
  FUN_1003ad8ec();
  func_0x000107c61174(unaff_x19);
  lStack_40 = *(long *)(unaff_x20 + 0x20) + 0x18;
  uStack_38 = 1;
  func_0x000107c60d28();
  FUN_1003ad8f8(&lStack_68);
  uStack_60 = 0;
  if (lStack_68 != 0) {
    do {
      func_0x0001003ad994();
      uStack_60 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_58 = 0xff00;
  FUN_1003ad9a4(auStack_50,&uStack_60);
  func_0x0001003adc54();
  func_0x0001003adc5c();
  FUN_1003adc64(&uStack_60);
  func_0x0001003adcb8();
  func_0x0001003aef68();
  func_0x0001003aef70();
  FUN_1003ad644(&lStack_40);
  func_0x0001003aef78();
  return;
}



/* Entry: 1003ad7f0; end: 1003ad8eb;  */

void FUN_1003ad7f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x20;
  long lStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined1 uStack_38;
  
  FUN_1003ad8ec();
  func_0x000107c61174(param_2);
  lStack_40 = *(long *)(unaff_x20 + 0x20) + 0x18;
  uStack_38 = 1;
  func_0x000107c60d28();
  FUN_1003ad8f8(&lStack_68);
  uStack_60 = 0;
  if (lStack_68 != 0) {
    do {
      func_0x0001003ad994();
      uStack_60 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_58 = 0xff00;
  FUN_1003ad9a4(auStack_50,&uStack_60);
  func_0x0001003adc54();
  func_0x0001003adc5c();
  FUN_1003adc64(&uStack_60);
  func_0x0001003adcb8();
  func_0x0001003aef68();
  func_0x0001003aef70();
  FUN_1003ad644(&lStack_40);
  func_0x0001003aef78();
  return;
}



/* Entry: 1003ad8ec; end: 1003ad8f7;  */

void FUN_1003ad8ec(void)

{
  return;
}



/* Entry: 1003ad8f8; end: 1003ad93f;  */

void FUN_1003ad8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  FUN_1003a8364();
  FUN_1003ad940();
  uStack_40 = param_2;
  uStack_38 = param_3;
  func_0x0001003a8458(param_1,uVar1,&uStack_40);
  return;
}



/* Entry: 1003ad940; end: 1003ad977;  */

void FUN_1003ad940(void)

{
  func_0x000107c61178();
  func_0x000107c3ac4c();
  FUN_1003ad978();
  func_0x000107c4adb0();
  return;
}



/* Entry: 1003ad978; end: 1003ad9a3;  */

void FUN_1003ad978(void)

{
  return;
}



/* Entry: 1003ad9a4; end: 1003ada5f;  */

void FUN_1003ad9a4(undefined8 param_1,long *param_2)

{
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)((long)param_2 + 9) == -1) {
    if (*param_2 == 0) {
      uStack_30 = 0;
    }
    else {
      do {
        FUN_1003ada60();
      } while (extraout_w11 != 0);
      do {
        FUN_1003ada60();
        uStack_30 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    FUN_1003adb84();
    FUN_1003adc18(&uStack_30);
    func_0x0001003adbe8();
  }
  else {
    uStack_28 = 0;
    FUN_1003adb84(param_1,9,0,*(char *)((long)param_2 + 9),&uStack_28);
    FUN_1003adc18(&uStack_28);
  }
  return;
}



/* Entry: 1003ada60; end: 1003ada6f;  */

void FUN_1003ada60(void)

{
  bool bVar1;
  int *in_x9;
  
  bVar1 = (bool)ExclusiveMonitorPass(in_x9,0x10);
  if (bVar1) {
    *in_x9 = *in_x9 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1003ada70; end: 1003adb4f;  */

void FUN_1003ada70(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *unaff_x19;
  
  FUN_1003adbcc();
  if ((param_1 != 0) && (func_0x0001003adbd8(), param_1 != 0)) {
    piVar1 = (int *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *unaff_x19 = param_1;
  return;
}



/* Entry: 1003adb50; end: 1003adb83;  */

void FUN_1003adb50(byte *param_1)

{
  undefined1 auStack_20 [16];
  
  if ((*param_1 & 0xfe) == 8) {
    func_0x0001003adabc(auStack_20);
    func_0x0001003adbf0();
  }
  return;
}



/* Entry: 1003adb84; end: 1003adbcb;  */

undefined1 *
FUN_1003adb84(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 *param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined8 *)(param_1 + 8) = *param_5;
  *param_5 = 0;
  FUN_1003adb50();
  return param_1;
}



/* Entry: 1003adbcc; end: 1003adc17;  */

undefined8 FUN_1003adbcc(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1003adc18; end: 1003adc47;  */

void FUN_1003adc18(long *param_1)

{
  func_0x0001003adc0c();
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x18))();
  }
  return;
}



/* Entry: 1003adc48; end: 1003adc63;  */

void FUN_1003adc48(void)

{
  return;
}



/* Entry: 1003adc64; end: 1003adc97;  */

void FUN_1003adc64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  FUN_1003adc98();
  func_0x0001003adca4(param_1,0,param_3,param_4,auStack_28);
  func_0x0001003adcb0();
  return;
}



/* Entry: 1003adc98; end: 1003adcbf;  */

undefined8 FUN_1003adc98(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1003adcc0; end: 1003add0b;  */

void FUN_1003adcc0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long *plVar1;
  
  FUN_1003adda4();
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  *(long **)(unaff_x19 + 8) = plVar1;
  func_0x0001003addd4();
  return;
}



/* Entry: 1003add0c; end: 1003add53;  */

long FUN_1003add0c(long param_1,undefined8 param_2)

{
  FUN_1003adcc0();
  FUN_1003adddc();
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* Entry: 1003add54; end: 1003adda3;  */

undefined8 FUN_1003add54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  FUN_1003add0c(auStack_48);
  FUN_1003ae144(param_1,auStack_48,param_3);
  func_0x0001003aef5c();
  return param_3;
}



/* Entry: 1003adda4; end: 1003adddb;  */

void FUN_1003adda4(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return;
}



/* Entry: 1003adddc; end: 1003ae0e7;  */

long FUN_1003adddc(byte *param_1)

{
  undefined1 *puVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = auStack_60;
  puVar3 = auStack_60;
  if ((*param_1 & 0xfe) == 8) {
    func_0x0001003adabc(auStack_60,param_1);
    FUN_1003ae0e8(auStack_60);
    func_0x0001003ae134((long)puVar1 * -0x395b586ca42e166b);
    func_0x0001003adbf0();
    goto LAB_1003ae0ac;
  }
  pbVar5 = param_1;
  switch(*param_1) {
  case 10:
    pbVar2 = param_1;
    func_0x000107c30f4c();
    pbVar5 = pbVar2 + 0x10;
    FUN_1003ae0e8(pbVar5);
    func_0x0001003ae134((long)pbVar5 * -0x395b586ca42e166b);
    pbVar5 = pbVar2 + 0x28;
    for (uVar7 = 0; uVar7 < *(ulong *)(pbVar2 + 0x20); uVar7 = uVar7 + 1) {
      pbVar4 = pbVar5;
      FUN_1003adddc(pbVar5);
      func_0x0001003ae134((long)pbVar4 * -0x395b586ca42e166b);
      pbVar5 = pbVar5 + 0x10;
    }
    break;
  case 0xb:
    pbVar5 = param_1;
    FUN_1003b21c0(param_1);
    func_0x000107c30fbc();
    goto code_r0x0001003ae070;
  case 0xc:
    pbVar2 = param_1;
    func_0x000107c30f54();
    func_0x0001003ae134(*(long *)(pbVar2 + 0x10) * -0x395b586ca42e166b);
    func_0x000107c3a1c8();
    func_0x000107c3a14c();
    pbVar5 = pbVar2 + 0x38;
    for (uVar7 = 0; uVar7 < *(ulong *)(pbVar2 + 0x28); uVar7 = uVar7 + 1) {
      func_0x0001003ae134(*(long *)(pbVar5 + -8) * -0x395b586ca42e166b);
      func_0x000107c310c0(pbVar5);
      func_0x000107c3a14c();
      pbVar5 = pbVar5 + 0x18;
    }
    break;
  case 0xd:
    pbVar2 = param_1;
    func_0x000107c30f58();
    func_0x0001003ae134((ulong)pbVar2[0x10] * -0x395b586ca42e166b);
    func_0x000107c3a190(extraout_x8 * -0x395b586ca42e166b + 0xe6546b64);
    func_0x000107c3a190(extraout_x8_00 * -0x395b586ca42e166b + 0xe6546b64);
    func_0x000107c3a190(extraout_x8_01 * -0x395b586ca42e166b + 0xe6546b64);
    func_0x000107c3a1c8();
    func_0x000107c3a14c();
    pbVar5 = pbVar2 + 0x30;
    for (uVar7 = 0; uVar7 < *(ulong *)(pbVar2 + 0x28); uVar7 = uVar7 + 1) {
      pbVar4 = pbVar5;
      FUN_1003adddc(pbVar5);
      func_0x0001003ae134((long)pbVar4 * -0x395b586ca42e166b);
      pbVar5 = pbVar5 + 0x10;
    }
    break;
  case 0xe:
    func_0x000107c30f80(param_1);
    goto code_r0x0001003ae064;
  case 0xf:
    func_0x000107c30f5c(param_1);
    goto code_r0x0001003ae080;
  case 0x10:
    func_0x000107c30f70(param_1);
    goto code_r0x0001003ae064;
  case 0x11:
    pbVar5 = param_1;
    func_0x000107c30f74();
    (**(code **)(*(long *)pbVar5 + 0x20))(auStack_60);
    FUN_1003adddc(auStack_60);
    func_0x0001003ae134((long)puVar3 * -0x395b586ca42e166b);
    FUN_1003adc18(auStack_58);
    break;
  case 0x12:
    func_0x000107c30f60(param_1);
    goto code_r0x0001003ae080;
  case 0x13:
    func_0x000107c30f64(param_1);
code_r0x0001003ae064:
    pbVar5 = pbVar5 + 0x10;
    FUN_1003adddc(pbVar5);
code_r0x0001003ae070:
    func_0x0001003ae134((long)pbVar5 * -0x395b586ca42e166b);
    break;
  case 0x14:
    func_0x000107c30f68(param_1);
code_r0x0001003ae080:
    pbVar2 = pbVar5 + 0x10;
    FUN_1003adddc(pbVar2);
    func_0x0001003ae134((long)pbVar2 * -0x395b586ca42e166b);
    FUN_1003adddc(pbVar5 + 0x20);
    func_0x000107c3a14c();
    break;
  case 0x16:
    pbVar2 = param_1;
    func_0x000107c30f6c();
    pbVar5 = (byte *)0x0;
    for (plVar6 = *(long **)(pbVar2 + 0x10); plVar6 != *(long **)(pbVar2 + 0x18);
        plVar6 = plVar6 + 2) {
      pbVar5 = (byte *)(((*plVar6 * -0x395b586ca42e166b ^
                         (ulong)(*plVar6 * -0x395b586ca42e166b) >> 0x2f) * -0x395b586ca42e166b ^
                        (ulong)pbVar5) * -0x395b586ca42e166b + 0xe6546b64);
    }
    goto code_r0x0001003ae070;
  }
LAB_1003ae0ac:
  func_0x0001003ae134((ulong)param_1[1] * -0x395b586ca42e166b);
  return extraout_x8_02 * -0x395b586ca42e166b + 0xe6546b64;
}



/* Entry: 1003ae0e8; end: 1003ae143;  */

ulong FUN_1003ae0e8(ulong *param_1)

{
  ulong uVar1;
  
  if ((ulong)*(byte *)((long)param_1 + 9) != 0xff) {
    return (ulong)*(byte *)((long)param_1 + 9);
  }
  uVar1 = (ulong)(byte)param_1[1] * -0x395b586ca42e166b;
  return ((uVar1 ^ uVar1 >> 0x2f) * -0x395b586ca42e166b ^ *param_1) * -0x395b586ca42e166b +
         0xe6546b64;
}



/* Entry: 1003ae144; end: 1003ae237;  */

long FUN_1003ae144(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  FUN_1003ae238();
  func_0x000107c60d28(param_1 + 0x18);
  FUN_1003ae244(unaff_x19 + 0x58);
  FUN_1003ae3e8();
  if (!(bool)in_ZR) {
    lVar1 = *(long *)(unaff_x19 + 0x88) + *(long *)(unaff_x20 + 0x18) * 0x18;
    func_0x000107c30f94(lVar1,param_3);
    if ((int)lVar1 != 0) {
      lVar1 = *(long *)(unaff_x20 + 0x18);
      goto LAB_1003ae210;
    }
  }
  plVar2 = (long *)(unaff_x19 + 0x88);
  lStack_38 = (*(long *)(unaff_x19 + 0x90) - *plVar2) / 0x18;
  FUN_1003ae3fc();
  FUN_1003ae7b0();
  FUN_1003ae864(auStack_40,&stack0xffffffffffffffb8);
  FUN_1003aeaac(plVar2 + 2,auStack_40);
  FUN_1003aeae8(auStack_40);
  lVar1 = lStack_38;
  plVar2 = (long *)(unaff_x19 + 0x58);
  FUN_1003aeb9c();
  *plVar2 = lVar1;
  lVar1 = lStack_38;
LAB_1003ae210:
  func_0x0001003aef44();
  return lVar1;
}



/* Entry: 1003ae238; end: 1003ae243;  */

void FUN_1003ae238(void)

{
  return;
}



/* Entry: 1003ae244; end: 1003ae26f;  */

long FUN_1003ae244(void)

{
  long *plVar1;
  long lVar2;
  long *unaff_x20;
  long lStack_28;
  
  FUN_1003acc80();
  func_0x0001003ae290();
  plVar1 = unaff_x20;
  FUN_1003ae2bc();
  if ((int)plVar1 == 0) {
    lVar2 = *unaff_x20 + unaff_x20[3];
  }
  else {
    lVar2 = *unaff_x20 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1003ae270; end: 1003ae2b3;  */

void FUN_1003ae270(undefined8 param_1,long param_2)

{
  undefined1 uStack_11;
  
  func_0x0001003a85b8(&uStack_11,*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Entry: 1003ae2b4; end: 1003ae2bb;  */

void FUN_1003ae2b4(void)

{
  return;
}



/* Entry: 1003ae2bc; end: 1003ae397;  */

bool FUN_1003ae2bc(long *param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar4 = 0;
  uVar1 = param_3 >> 7;
  uVar5 = param_1[3];
  while( true ) {
    uVar1 = uVar1 & uVar5;
    uVar6 = *(ulong *)(*param_1 + uVar1);
    uVar2 = uVar6 ^ (param_3 & 0x7f) * 0x101010101010101;
    for (uVar2 = uVar2 + 0xfefefefefefefeff & (uVar2 ^ 0xffffffffffffffff) & 0x8080808080808080;
        uVar2 != 0; uVar2 = uVar2 - 1 & uVar2) {
      uVar3 = (uVar2 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar2 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar1 + ((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3) & uVar5;
      *param_4 = uVar3;
      uVar3 = param_1[1] + uVar3 * 0x20;
      func_0x000107c30f94(uVar3,param_2);
      if ((uVar3 & 1) != 0) goto LAB_1003ae374;
    }
    if ((uVar6 & ~uVar6 << 6 & 0x8080808080808080) != 0) break;
    lVar4 = lVar4 + 8;
    uVar1 = lVar4 + uVar1;
  }
LAB_1003ae374:
  return uVar2 != 0;
}



/* Entry: 1003ae398; end: 1003ae3e7;  */

long FUN_1003ae398(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  plVar1 = param_1;
  FUN_1003ae2bc();
  if ((int)plVar1 == 0) {
    lVar2 = *param_1 + param_1[3];
  }
  else {
    lVar2 = *param_1 + lStack_28;
  }
  return lVar2;
}



/* Entry: 1003ae3e8; end: 1003ae3fb;  */

void FUN_1003ae3e8(void)

{
  return;
}



/* Entry: 1003ae3fc; end: 1003ae43f;  */

undefined8 * FUN_1003ae3fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = puVar1 + 3;
    puVar1[2] = 0;
  }
  else {
    puVar2 = param_1;
    FUN_1003ae490();
  }
  param_1[1] = puVar2;
  return puVar2 + -3;
}



/* Entry: 1003ae440; end: 1003ae48f;  */

ulong FUN_1003ae440(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x18;
    uVar3 = uVar1 * 2;
    if (uVar3 < param_2 || uVar3 - param_2 == 0) {
      uVar3 = param_2;
    }
    if (0x555555555555554 < uVar1) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    return uVar3;
  }
  func_0x000107c3100c();
  plVar2 = param_1;
  FUN_1003ae440();
  func_0x0001003ae57c(auStack_58,plVar2,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  puStack_48 = puStack_48 + 3;
  FUN_1003ae5c8(param_1,auStack_58);
  uVar3 = param_1[1];
  FUN_1003ae748(auStack_58);
  return uVar3;
}



/* Entry: 1003ae490; end: 1003ae52b;  */

long FUN_1003ae490(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  FUN_1003ae440(param_1,(param_1[1] - *param_1) / 0x18 + 1);
  func_0x0001003ae57c(auStack_48,plVar1,(param_1[1] - *param_1) / 0x18,param_1 + 2);
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  puStack_38 = puStack_38 + 3;
  FUN_1003ae5c8(param_1,auStack_48);
  lVar2 = param_1[1];
  FUN_1003ae748(auStack_48);
  return lVar2;
}


