/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10045fbc8; end: 10045fbf7;  */

undefined1 * FUN_10045fbc8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  FUN_10045fbb4();
  return param_1;
}



/* Entry: 10045fbf8; end: 10045fc9b;  */

undefined8 *
FUN_10045fbf8(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
             undefined4 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

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
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(char *)(param_4 + 3) == '\x01') {
    uVar2 = param_4[1];
    uVar1 = *param_4;
    param_1[6] = param_4[2];
    param_1[5] = uVar2;
    param_1[4] = uVar1;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)((long)param_1 + 0x44) = param_6;
  *(undefined4 *)(param_1 + 9) = param_7;
  *(undefined1 *)((long)param_1 + 0x4c) = param_8;
  *(undefined4 *)(param_1 + 10) = param_9;
  *(undefined1 *)((long)param_1 + 0x54) = param_10;
  param_1[0xb] = param_11;
  FUN_10045fbc8(param_1 + 0xc,param_12);
  return param_1;
}



/* Entry: 10045fc9c; end: 10045fcbb;  */

void FUN_10045fc9c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010049cddc();
  }
  return;
}



/* Entry: 10045fcbc; end: 10045fcc3;  */

void FUN_10045fcbc(void)

{
  char in_stack_00000028;
  
  if (in_stack_00000028 == '\x01') {
    func_0x00010049cddc();
  }
  return;
}



/* Entry: 10045fcc4; end: 10045fd17;  */

void FUN_10045fcc4(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000113839998 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    func_0x000107c60c38(0x113839998,&ppuStack_20,FUN_10045fe68);
  }
  return;
}



/* Entry: 10045fd18; end: 10045fe67;  */

void FUN_10045fd18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c8 [16];
  undefined1 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 auStack_1a0 [4];
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [320];
  
  FUN_10045fcc4();
  uVar1 = param_2;
  FUN_100468be8(auStack_180,param_2);
  auStack_1a0[0] = 0xb;
  FUN_10046e484();
  FUN_10046e628(auStack_190,&UNK_10f50ea1e,auStack_1a0,uVar1);
  puVar2 = auStack_180;
  FUN_10046e8d8(&uStack_1b0);
  FUN_100488bd8();
  puStack_1b8 = puVar2;
  FUN_1004896c8(auStack_1c8,param_3);
  FUN_100489b40(auStack_1a0,param_2,auStack_190,&uStack_1b0,&puStack_1b8,auStack_1c8,param_4);
  FUN_10048b4e8(auStack_1c8);
  func_0x000100488b84(&uStack_1b0);
  FUN_10048b594(&uStack_1b0,auStack_1a0);
  param_1[1] = uStack_1a8;
  *param_1 = uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  FUN_10048b6f4(&uStack_1b0);
  func_0x00010048b4a0(auStack_1a0);
  FUN_100450be4(auStack_190);
  FUN_10048b724(auStack_180);
  return;
}



/* Entry: 10045fe68; end: 10045fe6b;  */

void FUN_10045fe68(void)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_10045fe6c(0x1130a64b0,FUN_10046011c);
  uVar2 = uRam00000001136a2af0;
  FUN_100460448(uRam00000001136a2af0);
  iVar3 = iRam00000001136a22e8 + 1;
  bVar1 = iRam00000001136a22e8 == 0;
  iRam00000001136a22e8 = iVar3;
  if (bVar1) {
    if (cRam00000001136a2af8 == '\x01') {
      cRam00000001136a2af8 = '\0';
      func_0x000104a6f52c(uRam00000001136a2b00);
    }
    FUN_100460504();
    FUN_1004605b8();
    func_0x0001004605cc();
    FUN_100460e60();
    FUN_100467cf0();
    if (0 < iRam00000001136a22ec) {
      lVar4 = 0;
      puVar5 = (undefined8 *)0x1136a22f0;
      iVar3 = iRam00000001136a22ec;
      do {
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)();
          iVar3 = iRam00000001136a22ec;
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < iVar3);
    }
    FUN_100468868();
    FUN_100468a10();
  }
  func_0x000100466b80(uVar2);
  return;
}



/* Entry: 10045fe6c; end: 10045fe87;  */

void FUN_10045fe6c(int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  func_0x000107c6127c();
  if (param_1 == 0) {
    return;
  }
  func_0x000107c2c150();
  FUN_10045fe6c(0x1130a64b0,FUN_10046011c);
  uVar2 = uRam00000001136a2af0;
  FUN_100460448(uRam00000001136a2af0);
  iVar3 = iRam00000001136a22e8 + 1;
  bVar1 = iRam00000001136a22e8 == 0;
  iRam00000001136a22e8 = iVar3;
  if (bVar1) {
    if (cRam00000001136a2af8 == '\x01') {
      cRam00000001136a2af8 = '\0';
      func_0x000104a6f52c(uRam00000001136a2b00);
    }
    FUN_100460504();
    FUN_1004605b8();
    func_0x0001004605cc();
    FUN_100460e60();
    FUN_100467cf0();
    if (0 < iRam00000001136a22ec) {
      lVar4 = 0;
      puVar5 = (undefined8 *)0x1136a22f0;
      iVar3 = iRam00000001136a22ec;
      do {
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)();
          iVar3 = iRam00000001136a22ec;
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < iVar3);
    }
    FUN_100468868();
    FUN_100468a10();
  }
  func_0x000100466b80(uVar2);
  return;
}



/* Entry: 10045fe88; end: 10045ff7f;  */

void FUN_10045fe88(void)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_10045fe6c(0x1130a64b0,FUN_10046011c);
  uVar2 = uRam00000001136a2af0;
  FUN_100460448(uRam00000001136a2af0);
  iVar3 = iRam00000001136a22e8 + 1;
  bVar1 = iRam00000001136a22e8 == 0;
  iRam00000001136a22e8 = iVar3;
  if (bVar1) {
    if (cRam00000001136a2af8 == '\x01') {
      cRam00000001136a2af8 = '\0';
      func_0x000104a6f52c(uRam00000001136a2b00);
    }
    FUN_100460504();
    FUN_1004605b8();
    func_0x0001004605cc();
    FUN_100460e60();
    FUN_100467cf0();
    if (0 < iRam00000001136a22ec) {
      lVar4 = 0;
      puVar5 = (undefined8 *)0x1136a22f0;
      iVar3 = iRam00000001136a22ec;
      do {
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)();
          iVar3 = iRam00000001136a22ec;
        }
        lVar4 = lVar4 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < iVar3);
    }
    FUN_100468868();
    FUN_100468a10();
  }
  func_0x000100466b80(uVar2);
  return;
}



/* Entry: 10045ff80; end: 10045ffc3;  */

char * FUN_10045ff80(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    do {
      func_0x000107c60e84();
      *pcVar2 = cVar1;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)*param_1;
  }
  return pcVar2;
}



/* Entry: 10045ffc4; end: 10046001f;  */

void FUN_10045ffc4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10045ff80();
  FUN_10046018c();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_2 + 8);
    FUN_1004601ac();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 100460020; end: 10046011b;  */

void FUN_100460020(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcStack_28;
  
  if (pcRam00000001130a57a0 == (char *)0xc) {
    FUN_10045ffc4(&pcStack_28,&PTR_DAT_1130a57c8);
    if (*pcStack_28 == '\0') {
      pcRam00000001130a57a0 = (char *)0x2;
    }
    else {
      pcVar1 = pcStack_28;
      FUN_100460228(pcStack_28,2);
      pcVar2 = pcStack_28;
      pcStack_28 = (char *)0x0;
      pcRam00000001130a57a0 = pcVar1;
      if (pcVar2 == (char *)0x0) goto LAB_10046008c;
    }
    pcStack_28 = (char *)0x0;
    FUN_100460314();
  }
LAB_10046008c:
  if (pcRam00000001130a57a8 == (char *)0xc) {
    FUN_10045ffc4(&pcStack_28,&PTR_DAT_1130a57f8);
    if (*pcStack_28 == '\0') {
      pcRam00000001130a57a8 = (char *)0xd;
    }
    else {
      pcVar2 = pcStack_28;
      FUN_100460228(pcStack_28,0xd);
      pcRam00000001130a57a8 = pcVar2;
      if (pcStack_28 == (char *)0x0) {
        return;
      }
    }
    pcStack_28 = (char *)0x0;
    FUN_100460314();
  }
  return;
}



/* Entry: 10046011c; end: 10046018b;  */

void FUN_10046011c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100460020();
  uVar1 = 0x40;
  func_0x000107c60e20();
  FUN_100460318();
  uVar2 = 0x30;
  uRam00000001136a2af0 = uVar1;
  func_0x000107c60e20();
  FUN_100460338();
  uRam00000001136a2b00 = uVar2;
  func_0x0001004603e8();
  FUN_100460434();
  func_0x00010046043c();
  return;
}



/* Entry: 10046018c; end: 1004601ab;  */

long FUN_10046018c(long param_1)

{
  func_0x000107c60ffc();
  if (param_1 != 0) {
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      func_0x000107c613d0();
      param_1 = param_1 + 1;
      FUN_100460200(param_1);
      func_0x000107c610b4();
    }
    return param_1;
  }
  return 0;
}



/* Entry: 1004601ac; end: 1004601ff;  */

long FUN_1004601ac(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c613d0();
    param_1 = param_1 + 1;
    FUN_100460200(param_1);
    func_0x000107c610b4();
  }
  return param_1;
}



/* Entry: 100460200; end: 10046021f;  */

char * FUN_100460200(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if ((param_1 == (char *)0x0) || (func_0x000107c610a0(), param_1 != (char *)0x0)) {
    return param_1;
  }
  func_0x000107c60ebc();
  lVar4 = -2;
  do {
    iVar2 = (int)*param_1;
    func_0x000107c60e80();
    iVar3 = (int)*param_2;
    func_0x000107c60e80();
    bVar1 = lVar4 != 0;
    lVar4 = lVar4 + -1;
    if ((iVar3 == 0 || iVar2 == 0) || iVar2 != iVar3) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (bVar1);
  return (char *)(ulong)(uint)(iVar2 - iVar3);
}



/* Entry: 100460220; end: 100460227;  */

int FUN_100460220(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = -2;
  do {
    iVar2 = (int)*param_1;
    func_0x000107c60e80();
    iVar3 = (int)*param_2;
    func_0x000107c60e80();
    bVar1 = lVar4 != 0;
    lVar4 = lVar4 + -1;
    if ((iVar3 == 0 || iVar2 == 0) || iVar2 != iVar3) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (bVar1);
  return iVar2 - iVar3;
}



/* Entry: 100460228; end: 1004602b3;  */

undefined8 FUN_100460228(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100460220(param_1,&DAT_10f57b91a);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    FUN_100460220(param_1,"INFO");
    if ((int)uVar1 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = param_1;
      FUN_100460220(param_1,"ERROR");
      if ((int)uVar1 == 0) {
        uVar1 = 2;
      }
      else {
        FUN_100460220(param_1,"NONE");
        uVar1 = 0xd;
        if ((int)param_1 != 0) {
          uVar1 = param_2;
        }
      }
    }
  }
  return uVar1;
}



/* Entry: 1004602b4; end: 100460313;  */

int FUN_1004602b4(char *param_1,char *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  do {
    param_3 = param_3 + -1;
    iVar1 = (int)*param_1;
    func_0x000107c60e80();
    iVar2 = (int)*param_2;
    func_0x000107c60e80();
    if ((iVar2 == 0 || iVar1 == 0) || iVar1 != iVar2) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  } while (param_3 != 0);
  return iVar1 - iVar2;
}



/* Entry: 100460314; end: 100460317;  */

void FUN_100460314(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 100460318; end: 100460337;  */

void FUN_100460318(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  puVar2 = (undefined1 *)0x0;
  func_0x000107c6125c();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x000107c2c12c();
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_48;
  func_0x000107c61234();
  if ((int)puVar1 == 0) {
    puVar2 = auStack_48;
    func_0x000107c61224();
    if ((int)param_1 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
        return;
      }
      goto LAB_1004603a8;
    }
  }
  else {
    func_0x000107c2c140();
    param_1 = puVar1;
  }
  func_0x000107c2c13c();
LAB_1004603a8:
  func_0x000107c60e78();
  if (iRam00000001136a22ec != 0x80) {
    *(undefined1 **)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f0) = param_1;
    *(undefined1 **)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f8) = puVar2;
    iRam00000001136a22ec = iRam00000001136a22ec + 1;
    return;
  }
  func_0x000107c2c428();
  FUN_1004603ac(FUN_100467d2c,&UNK_104a8204c);
  FUN_1004603ac(FUN_100468428,&UNK_104a84174);
  FUN_1004603ac(FUN_100468864,&UNK_104a84eb8);
  return;
}



/* Entry: 100460338; end: 1004603ab;  */

void FUN_100460338(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_38;
  func_0x000107c61234();
  if ((int)puVar1 == 0) {
    param_2 = auStack_38;
    func_0x000107c61224();
    if ((int)param_1 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
        return;
      }
      goto LAB_1004603a8;
    }
  }
  else {
    func_0x000107c2c140();
    param_1 = puVar1;
  }
  func_0x000107c2c13c();
LAB_1004603a8:
  func_0x000107c60e78();
  if (iRam00000001136a22ec != 0x80) {
    *(undefined1 **)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f0) = param_1;
    *(undefined1 **)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f8) = param_2;
    iRam00000001136a22ec = iRam00000001136a22ec + 1;
    return;
  }
  func_0x000107c2c428();
  FUN_1004603ac(FUN_100467d2c,&UNK_104a8204c);
  FUN_1004603ac(FUN_100468428,&UNK_104a84174);
  FUN_1004603ac(FUN_100468864,&UNK_104a84eb8);
  return;
}



/* Entry: 1004603ac; end: 100460433;  */

void FUN_1004603ac(undefined8 param_1,undefined8 param_2)

{
  if (iRam00000001136a22ec != 0x80) {
    *(undefined8 *)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f0) = param_1;
    *(undefined8 *)((long)iRam00000001136a22ec * 0x10 + 0x1136a22f8) = param_2;
    iRam00000001136a22ec = iRam00000001136a22ec + 1;
    return;
  }
  func_0x000107c2c428();
  FUN_1004603ac(FUN_100467d2c,&UNK_104a8204c);
  FUN_1004603ac(FUN_100468428,&UNK_104a84174);
  FUN_1004603ac(FUN_100468864,&UNK_104a84eb8);
  return;
}



/* Entry: 100460434; end: 100460447;  */

void FUN_100460434(void)

{
  return;
}



/* Entry: 100460448; end: 100460463;  */

ulong FUN_100460448(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char cStack_39;
  ulong uStack_38;
  
  func_0x000107c61260();
  if ((int)param_1 == 0) {
    return param_1;
  }
  func_0x000107c2c134();
  uVar2 = param_1;
  FUN_10045ff80();
  FUN_10046018c();
  if (uVar2 == 0) {
    cVar1 = *(char *)(param_1 + 8);
  }
  else {
    cStack_39 = '\0';
    uVar3 = uVar2;
    uStack_38 = uVar2;
    func_0x000104a6f424();
    if ((uVar3 & 1) == 0) {
      FUN_10045ff80(param_1);
      func_0x000104a6f8e4();
      pcVar4 = (char *)(param_1 + 8);
    }
    else {
      pcVar4 = &cStack_39;
    }
    cVar1 = *pcVar4;
    uStack_38 = 0;
    FUN_100460314(uVar2);
  }
  return (ulong)(cVar1 != '\0');
}



/* Entry: 100460464; end: 100460503;  */

bool FUN_100460464(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char cStack_29;
  ulong uStack_28;
  
  uVar2 = param_1;
  FUN_10045ff80();
  FUN_10046018c();
  if (uVar2 == 0) {
    cVar1 = *(char *)(param_1 + 8);
  }
  else {
    cStack_29 = '\0';
    uVar3 = uVar2;
    uStack_28 = uVar2;
    func_0x000104a6f424();
    if ((uVar3 & 1) == 0) {
      FUN_10045ff80(param_1);
      func_0x000104a6f8e4();
      pcVar4 = (char *)(param_1 + 8);
    }
    else {
      pcVar4 = &cStack_29;
    }
    cVar1 = *pcVar4;
    uStack_28 = 0;
    FUN_100460314(uVar2);
  }
  return cVar1 != '\0';
}



/* Entry: 100460504; end: 1004605b7;  */

void FUN_100460504(void)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  
  if (cRam0000000113815bb8 == '\0') {
    bVar1 = 0x30;
    FUN_100460464();
    bRam0000000113815bd8 = bVar1;
  }
  if ((bRam0000000113815bd8 & 1) != 0) {
    puVar2 = (undefined1 *)0x80;
    func_0x000107c60e20();
    *puVar2 = 1;
    FUN_100460318(puVar2 + 8);
    FUN_100460338(puVar2 + 0x48);
    *(undefined8 *)(puVar2 + 0x78) = 2;
    puVar3 = (undefined2 *)0x80;
    puRam0000000113815bc0 = puVar2;
    func_0x000107c60e20();
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 0x3c) = 0;
    FUN_100460318(puVar3 + 4);
    FUN_100460338(puVar3 + 0x24);
    puRam0000000113815bc8 = puVar3;
  }
  return;
}



/* Entry: 1004605b8; end: 1004605df;  */

byte FUN_1004605b8(void)

{
  return bRam0000000113815bd8 & 1;
}



/* Entry: 1004605e0; end: 100460653;  */

undefined4 FUN_1004605e0(void)

{
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 4;
  func_0x000107c61664(&UNK_10f51b5a3,&uStack_1c,&uStack_18,0,0);
  return uStack_1c;
}



/* Entry: 100460654; end: 1004607eb; -[SCUnlockablesMetricsServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100460654(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61144(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b9170;
  func_0x000107c610f4();
  lVar2 = param_1 + _DAT_11272c2c8;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c45db0();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11272c2f0);
  }
  func_0x000107c61174(uVar6);
  puVar5 = PTR_PTR_1126c0258;
  func_0x000107c610f4(PTR_PTR_1126c0258);
  func_0x000107c490bc();
  func_0x000107c42c20(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 1004607ec; end: 10046085f; -[SCUnlockablesMetricsServices initWithUnlockableViewTracker:] */

undefined1 * FUN_1004607ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd690;
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



/* Entry: 100460860; end: 1004608ef;  */

void FUN_100460860(long param_1)

{
  long unaff_x20;
  
  if ((param_1 != 0) && (func_0x000107c60ee8(param_1,1), param_1 == 0)) {
    func_0x000107c60ebc();
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocObject_11034f298)();
    return;
  }
  return;
}



/* Entry: 1004608f0; end: 1004608f7;  */

void FUN_1004608f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004608f8; end: 10046094b;  */

void FUN_1004608f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10046094c; end: 10046095b;  */

void FUN_10046094c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022f364();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_100460b04(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_100460b90();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  func_0x000100460c60();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10046095c; end: 100460b03;  */

void FUN_10046095c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_10022f364();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_100460b04(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100460b90();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x000100460c60();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100460b04; end: 100460b8f;  */

void FUN_100460b04(undefined8 param_1)

{
  if (lRam0000000112dcf200 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6560c4);
  return;
}



/* Entry: 100460b90; end: 100460d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100460b90(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113010610);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + _DAT_113043d30);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + _DAT_11304a480);
  func_0x000107c61174();
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_5 + _DAT_113010888);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return;
}



/* Entry: 100460d24; end: 100460d27;  */

void FUN_100460d24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100460d28; end: 100460d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100460d28(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113010970) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010968) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100460d80; end: 100460de3;  */

void FUN_100460d80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100460de4; end: 100460e5f;  */

undefined8 * FUN_100460de4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_1107c0ee8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 1;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  param_1[7] = 0;
  puVar1 = param_1;
  func_0x000100460dc4();
  param_1[8] = *puVar1;
  if ((bRam0000000113815bd8 & 1) != 0) {
    func_0x000104a6f724();
  }
  func_0x000100460dc4();
  *puVar1 = param_1;
  return param_1;
}



/* Entry: 100460e60; end: 100460eff;  */

void FUN_100460e60(void)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 auStack_68 [72];
  
  uVar2 = 0;
  FUN_100460de4();
  FUN_1004610e0();
  if ((uVar2 & 1) == 0) {
    func_0x00010046115c();
  }
  FUN_100460318(0x1136a1fe8);
  FUN_100460338(0x1136a2028);
  FUN_100461e70();
  uRam00000001136a2060 = 0x1136a2058;
  uRam00000001136a2068 = 0x1136a2058;
  puRam00000001136a2058 = &DAT_10f2d41c6;
  FUN_100466b9c();
  FUN_100467030();
  uVar1 = 0xe0;
  FUN_100460464();
  uRam00000001136a2070 = uVar1;
  FUN_100467a48(auStack_68);
  return;
}



/* Entry: 100460f00; end: 10046106b; -[SCArroyoChatLoggingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100460f00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126be6a0;
  func_0x000107c610f4(PTR_PTR_1126be6a0);
  func_0x000107c45790();
  param_1 = param_1 + _DAT_112729ce4;
  func_0x000107c61148(param_1);
  lVar3 = param_1;
  func_0x000107c40668();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = puVar1;
  func_0x000107c5c734(puVar1);
  func_0x000107c61180();
  func_0x000107c3d740(lVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10046106c; end: 1004610df; -[SCArroyoChatLoggingServices initWithArroyoChatLogger:] */

undefined1 * FUN_10046106c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f8928;
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



/* Entry: 1004610e0; end: 1004610f3;  */

bool FUN_1004610e0(void)

{
  return lRam00000001136a2078 != 0;
}



/* Entry: 1004610f4; end: 10046120b;  */

uint FUN_1004610f4(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  pcVar1 = "grpc_cfstream";
  func_0x000107c60ffc();
  if (pcVar1 == (char *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)(*pcVar1 != '0');
  }
  pcVar1 = "GRPC_CFSTREAM_RUN_LOOP";
  func_0x000107c60ffc();
  if (pcVar1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(*pcVar1 == '1') << 8;
  }
  return uVar2 | uVar3;
}



/* Entry: 10046120c; end: 10046124f;  */

void FUN_10046120c(undefined8 param_1)

{
  uRam0000000113815c20 = param_1;
  return;
}



/* Entry: 100461250; end: 100461603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100461250(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar31 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112729cc8;
    func_0x000107c61148();
    lVar2 = lVar1;
    func_0x000107c5d2e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar31 = PTR_PTR_1126be698;
    func_0x000107c610f4();
    lVar1 = param_1 + _DAT_112729ccc;
    func_0x000107c61148();
    lVar3 = lVar1;
    func_0x000107c5dac4();
    func_0x000107c61180();
    lVar4 = param_1 + _DAT_112729cd0;
    func_0x000107c61148();
    lVar5 = lVar4;
    func_0x000107c42f48();
    func_0x000107c61180();
    lVar6 = param_1 + _DAT_112729cd4;
    func_0x000107c61148();
    lVar7 = lVar6;
    func_0x000107c4b254();
    func_0x000107c61180();
    lVar8 = param_1 + _DAT_112729cd8;
    func_0x000107c61148();
    lVar9 = lVar8;
    func_0x000107c444a4();
    func_0x000107c61180();
    lVar10 = param_1 + _DAT_112729cdc;
    func_0x000107c61148();
    lVar11 = lVar10;
    func_0x000107c3fa04();
    func_0x000107c61180();
    lVar12 = param_1 + _DAT_112729ce0;
    func_0x000107c61148();
    lVar13 = lVar12;
    func_0x000107c5b4b0();
    func_0x000107c61180();
    lVar14 = param_1 + _DAT_112729ce4;
    func_0x000107c61148();
    lVar15 = lVar14;
    func_0x000107c40664();
    func_0x000107c61180();
    lVar16 = param_1 + _DAT_112729ce8;
    func_0x000107c61148();
    lVar17 = lVar16;
    func_0x000107c51714();
    func_0x000107c61180();
    lVar18 = param_1 + _DAT_112729cec;
    func_0x000107c61148();
    lVar19 = lVar18;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    puVar20 = PTR_PTR_1126b1600;
    func_0x000107c5aa18();
    func_0x000107c61180();
    lVar21 = param_1 + _DAT_112729cf0;
    func_0x000107c61148();
    lVar22 = lVar21;
    func_0x000107c5da60();
    func_0x000107c61180();
    lVar23 = lVar22;
    func_0x000107c5d984();
    func_0x000107c61180();
    lVar24 = param_1 + _DAT_112729cf4;
    func_0x000107c61148();
    lVar25 = lVar24;
    func_0x000107c5b828();
    func_0x000107c61180();
    lVar30 = (long)_DAT_112729cf8;
    lVar26 = param_1 + lVar30;
    func_0x000107c61148();
    lVar27 = lVar26;
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar30 = param_1 + lVar30;
    func_0x000107c61148();
    lVar28 = lVar30;
    func_0x000107c42e68();
    func_0x000107c61180();
    lVar29 = param_1 + _DAT_112729cfc;
    func_0x000107c61148();
    func_0x000107c49408(puVar31,param_2,lVar3,lVar5,lVar7,lVar2,lVar9,lVar11,lVar13,lVar15,lVar17,
                        lVar19,puVar20,lVar23,lVar25,lVar27,lVar28,lVar29);
    func_0x000107c61170(lVar29);
    func_0x000107c61170(lVar28);
    func_0x000107c61170(lVar30);
    func_0x000107c61170(lVar27);
    func_0x000107c61170(lVar26);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(lVar24);
    func_0x000107c61170(lVar23);
    func_0x000107c61170(lVar22);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar16);
    func_0x000107c61170(lVar15);
    func_0x000107c61170(lVar14);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar31);
  return;
}



/* Entry: 100461604; end: 10046165b;  */

void FUN_100461604(void)

{
  undefined8 uVar1;
  
  FUN_1004605e0();
  uVar1 = 0x18;
  func_0x000107c60e20();
  FUN_100461828();
  uRam00000001136a20a8 = uVar1;
  return;
}



/* Entry: 10046165c; end: 100461663; -[SCUnlockablesMetricsServices unlockableViewTracker] */

undefined8 FUN_10046165c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100461664; end: 100461697; -[_TtC37SponsoredSnapAdResponseParserServices37SponsoredSnapAdResponseParserServices scSponsoredSnapAdResponseParser] */

void FUN_100461664(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100461698();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100461698; end: 10046170b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100461698(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113010970;
  lVar2 = *(long *)(unaff_x20 + _DAT_113010970);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_1003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113010968));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 10046170c; end: 10046175f; +[SCPerfLogger sharedPerfLogger] */

void FUN_10046170c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f0e88 != -1) {
    FUN_10002a2fc(0x1137f0e88,&PTR___NSConcreteGlobalBlock_110c9b718);
  }
  uVar1 = uRam00000001137f0e80;
  func_0x000107c61174(uRam00000001137f0e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100461760; end: 10046178b;  */

void FUN_100461760(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b1600;
  func_0x000107c610fc();
  uVar1 = puRam00000001137f0e80;
  puRam00000001137f0e80 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10046178c; end: 100461793; -[SCPlusServices featureLogging] */

undefined8 FUN_10046178c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100461794; end: 100461827;  */

/* WARNING: Possible PIC construction at 0x000100461858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010046185c) */

undefined1  [16] FUN_100461794(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_2 < 0x2aaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x60;
    func_0x000107c60e20(lVar2);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar2;
    return auVar6;
  }
  uVar5 = 0x1004617d8;
  func_0x000104a7757c();
  puVar1 = &stack0xffffffffffffffe0;
  while( true ) {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x20);
    *(ulong *)(puVar1 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = puVar4;
    *(undefined8 *)(puVar1 + -8) = uVar5;
    if (param_2 < 0x2aaaaaaaaaaaaab) {
      puVar3 = param_1 + 2;
      FUN_100461794();
      *param_1 = puVar3;
      param_1[1] = puVar3;
      param_1[2] = puVar3 + param_2 * 0xc;
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = puVar3;
      return auVar7;
    }
    unaff_x19 = param_1;
    func_0x000104ac148c();
    *(ulong *)(puVar1 + -0x40) = unaff_x20;
    *(undefined8 **)(puVar1 + -0x38) = param_1;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(code **)(puVar1 + -0x28) = FUN_100461828;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *(undefined8 **)(puVar1 + -0x50) = unaff_x19;
    puVar1[-0x48] = 0;
    if (param_2 == 0) break;
    uVar5 = 0x10046185c;
    puVar1 = puVar1 + -0x50;
    param_1 = unaff_x19;
    unaff_x20 = param_2;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = unaff_x19;
  return auVar8;
}



/* Entry: 100461828; end: 10046188f;  */

undefined8 * FUN_100461828(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    func_0x0001004617d8(param_1);
    FUN_100461890(param_1,param_2);
  }
  return param_1;
}



/* Entry: 100461890; end: 10046191b;  */

void FUN_100461890(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = puVar1;
  if (param_2 != 0) {
    puVar2 = puVar1 + param_2 * 0xc;
    param_2 = param_2 * 0x60;
    do {
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      FUN_100460318(puVar1);
      puVar1[8] = &UNK_10e52b660;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -0x60;
    } while (param_2 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar2;
  return;
}



/* Entry: 10046191c; end: 100461927;  */

void FUN_10046191c(undefined8 param_1)

{
  uRam0000000113815c30 = param_1;
  return;
}



/* Entry: 100461928; end: 100461de3; -[SCArroyoChatLogger initWithUserTrackedLogger:feedPropertyLogger:lazyLensLogger:unlockableViewTracker:grapheneRegistry:circumstanceEngine:snapchattersDataFetcher:conversationDataFetcher:sponsoredSnapAdResponseParser:messagingExperimentService:performanceLogger:currentUserId:sponsoredSnapConversationSeqNumProvider:subscriptionInfoProvider:plusFeatureLogging:editContentDivergenceServices:] */

undefined8 *
FUN_100461928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  puStack_80 = PTR_PTR_1126f8918;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[9];
    puVar1[9] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[10];
    puVar1[10] = param_17;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_14;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b2e38;
    func_0x000107c61160();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_12);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_12);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 0x12) = 0;
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_12);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100461de4; end: 100461e63;  */

undefined8 * FUN_100461de4(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam00000001136a2090 & 1) == 0) {
    iVar1 = 0x136a2090;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x8;
      func_0x000107c60e20();
      *puVar2 = &PTR_DAT_1107c58d8;
      puRam00000001136a2088 = puVar2;
      func_0x000107c60e4c(0x1136a2090);
    }
  }
  return puRam00000001136a2088;
}



/* Entry: 100461e64; end: 100461e6f;  */

void FUN_100461e64(undefined8 param_1)

{
  uRam00000001136a2080 = param_1;
  return;
}



/* Entry: 100461e70; end: 100461f5b;  */

/* WARNING: Removing unreachable block (ram,0x0001004627ec) */
/* WARNING: Removing unreachable block (ram,0x0001004627f0) */
/* WARNING: Removing unreachable block (ram,0x0001004627f8) */
/* WARNING: Removing unreachable block (ram,0x000100462804) */
/* WARNING: Removing unreachable block (ram,0x000100462844) */
/* WARNING: Removing unreachable block (ram,0x00010046284c) */
/* WARNING: Removing unreachable block (ram,0x000100462854) */
/* WARNING: Removing unreachable block (ram,0x00010046285c) */
/* WARNING: Removing unreachable block (ram,0x000100462864) */
/* WARNING: Removing unreachable block (ram,0x000100462878) */
/* WARNING: Removing unreachable block (ram,0x00010046287c) */
/* WARNING: Removing unreachable block (ram,0x000100462894) */
/* WARNING: Removing unreachable block (ram,0x0001004628a4) */
/* WARNING: Removing unreachable block (ram,0x0001004628ac) */
/* WARNING: Removing unreachable block (ram,0x0001004628ec) */

undefined8 * FUN_100461e70(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined2 auStack_80 [4];
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  
  if (puRam00000001136a1fd8 != (undefined8 *)0x0) {
    if (puRam00000001136a1fe0 != (undefined8 *)0x0) {
      return param_1;
    }
    func_0x000107c2c368();
    func_0x000107c60e14();
    func_0x000107c60bd8();
    puVar4 = (undefined8 *)&stack0xffffffffffffffb0;
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = puVar4;
      (*(code *)PTR_DAT_113403208)();
      puVar4[1] = puVar3;
    }
    return puVar4;
  }
  puVar3 = (undefined8 *)0x28;
  func_0x000107c60e20();
  *puVar3 = "default-executor";
  puVar3[4] = 0;
  puVar3[3] = 0;
  puVar4 = puVar3;
  FUN_1004605e0();
  uVar1 = (int)puVar4 << 1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  puVar3[2] = (ulong)uVar1;
  puVar5 = (undefined8 *)0x28;
  puRam00000001136a1fd8 = puVar3;
  func_0x000107c60e20();
  *puVar5 = "resolver-executor";
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar4 = puVar5;
  FUN_1004605e0();
  uVar1 = (int)puVar4 << 1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  puVar5[2] = (ulong)uVar1;
  puRam00000001136a1fe0 = puVar5;
  FUN_1004626d4(puRam00000001136a1fd8,1);
  puVar4 = puRam00000001136a1fe0;
  if ((long)puRam00000001136a1fe0[3] < 1) {
    if (puRam00000001136a1fe0[3] != 0) {
      puVar4 = puRam00000001136a1fe0;
      func_0x000107c2c364();
      if ((*(char *)(puVar4 + 2) != '\0') && (puVar4[1] != 0)) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd.h"
                      ,0x7b,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100462a08);
        (*pcVar2)();
      }
      return puVar4;
    }
    puRam00000001136a1fe0[3] = 1;
    lVar6 = puVar4[2] * 0xc0;
    FUN_100460860();
    puVar4[1] = lVar6;
    if (puVar4[2] != 0) {
      uVar8 = 0;
      lVar6 = 0x80;
      do {
        FUN_100460318(puVar4[1] + lVar6 + -0x80);
        FUN_100460338(puVar4[1] + lVar6 + -0x30);
        lVar7 = puVar4[1] + lVar6;
        *(ulong *)(lVar7 + -0x40) = uVar8;
        *(undefined8 *)(lVar7 + -0x38) = *puVar4;
        auStack_70[0] = 0;
        if ((undefined4 *)(lVar7 + 0x20) != auStack_70) {
          *(undefined4 *)(lVar7 + 0x20) = 0;
          *(undefined8 *)(lVar7 + 0x28) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          *(ulong *)(lVar7 + 0x30) = CONCAT62(uStack_5e,0x101);
          auStack_70[0] = 5;
        }
        uStack_58 = 0;
        uStack_60 = 0x101;
        uStack_68 = 0;
        FUN_1004629b0(auStack_70);
        lVar7 = puVar4[1];
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar7 + lVar6) = 0;
        ((undefined8 *)(lVar7 + lVar6))[1] = 0;
        lVar6 = lVar6 + 0xc0;
      } while (uVar8 < (ulong)puVar4[2]);
      lVar6 = puVar4[1];
    }
    auStack_80[0] = 0x101;
    uStack_78 = 0;
    FUN_100462a0c(auStack_70,*puVar4,FUN_100466d34,lVar6,0,auStack_80);
    lVar6 = puVar4[1];
    if ((undefined4 *)(lVar6 + 0xa0) != auStack_70) {
      *(undefined4 *)(lVar6 + 0xa0) = auStack_70[0];
      *(undefined8 *)(lVar6 + 0xa8) = uStack_68;
      *(undefined8 *)(lVar6 + 0xb8) = uStack_58;
      *(ulong *)(lVar6 + 0xb0) = CONCAT62(uStack_5e,uStack_60);
      auStack_70[0] = 5;
      uStack_68 = 0;
      uStack_60 = 0x101;
      uStack_58 = 0;
    }
    FUN_1004629b0(auStack_70);
    puVar4 = (undefined8 *)(puVar4[1] + 0xa0);
    FUN_100463850(puVar4);
  }
  return puVar4;
}



/* Entry: 100461f5c; end: 100461fcf; -[SCGrapheneChatLoggerMetric2 init] */

undefined1 * FUN_100461f5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8920;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100461fd0; end: 10046205b;  */

void FUN_100461fd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10046205c; end: 100462063;  */

void FUN_10046205c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462064; end: 1004620b7;  */

void FUN_100462064(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004620b8; end: 1004620c3;  */

void FUN_1004620b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10023f248();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100462194(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004620c4; end: 100462193;  */

void FUN_1004620c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10023f248();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100462194(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462194; end: 10046244b;  */

void FUN_100462194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7f88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efc3300);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10046244c);
  (*pcVar1)();
}



/* Entry: 10046244c; end: 10046254b; -[SCConversationIdServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046244c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ba6e0;
  func_0x000107c610f4(PTR_PTR_1126ba6e0);
  func_0x000107c461b0();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112725658));
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10046254c; end: 1004625bf; -[SCConversationIdServices initWithConversationIdResolver:] */

undefined1 * FUN_10046254c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd9e0;
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



/* Entry: 1004625c0; end: 1004625fb;  */

void FUN_1004625c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004625fc; end: 100462603;  */

void FUN_1004625fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462604; end: 100462657;  */

void FUN_100462604(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462658; end: 10046265f;  */

void FUN_100462658(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_1002b7d98();
  func_0x000107c613fc();
  FUN_100463a34(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462660; end: 1004626d3;  */

void FUN_100462660(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_1002b7d98();
  func_0x000107c613fc();
  FUN_100463a34(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 1004626d4; end: 1004629af;  */

void FUN_1004626d4(undefined8 *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined2 auStack_80 [4];
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  
  lVar5 = param_1[3];
  if (param_2 == 0) {
    if (lVar5 != 0) {
      if (param_1[2] != 0) {
        lVar5 = 0;
        uVar7 = 0;
        do {
          FUN_100460448(param_1[1] + lVar5);
          lVar6 = param_1[1];
          *(undefined1 *)(lVar6 + lVar5 + 0x98) = 1;
          FUN_100466b64(lVar6 + lVar5 + 0x50);
          func_0x000100466b80(param_1[1] + lVar5);
          uVar7 = uVar7 + 1;
          lVar5 = lVar5 + 0xc0;
        } while (uVar7 < (ulong)param_1[2]);
      }
      plVar1 = param_1 + 4;
      do {
        while (*plVar1 != 0) {
          ClearExclusiveLocal();
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_1[4] = 0;
      lVar5 = param_1[3];
      if (0 < lVar5) {
        lVar6 = 0xa0;
        do {
          func_0x000104ab3234(param_1[1] + lVar6);
          lVar6 = lVar6 + 0xc0;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_1[3] = 0;
      if (param_1[2] != 0) {
        lVar5 = 0;
        uVar7 = 0;
        do {
          FUN_1005a5f48(param_1[1] + lVar5);
          FUN_100832c44(param_1[1] + lVar5 + 0x50);
          FUN_1004c17cc();
          uVar7 = uVar7 + 1;
          lVar5 = lVar5 + 0xc0;
        } while (uVar7 < (ulong)param_1[2]);
      }
      FUN_100460314(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x000104abe2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lRam00000001136a2078 + 0x18))();
      return;
    }
  }
  else if (lVar5 < 1) {
    if (lVar5 != 0) {
      func_0x000107c2c364();
      if ((*(char *)(param_1 + 2) != '\0') && (param_1[1] != 0)) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd.h"
                      ,0x7b,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100462a08);
        (*pcVar4)();
      }
      return;
    }
    param_1[3] = 1;
    lVar5 = param_1[2] * 0xc0;
    FUN_100460860();
    param_1[1] = lVar5;
    if (param_1[2] != 0) {
      uVar7 = 0;
      lVar5 = 0x80;
      do {
        FUN_100460318(param_1[1] + lVar5 + -0x80);
        FUN_100460338(param_1[1] + lVar5 + -0x30);
        lVar6 = param_1[1] + lVar5;
        *(ulong *)(lVar6 + -0x40) = uVar7;
        *(undefined8 *)(lVar6 + -0x38) = *param_1;
        auStack_70[0] = 0;
        if ((undefined4 *)(lVar6 + 0x20) != auStack_70) {
          *(undefined4 *)(lVar6 + 0x20) = 0;
          *(undefined8 *)(lVar6 + 0x28) = 0;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(ulong *)(lVar6 + 0x30) = CONCAT62(uStack_5e,0x101);
          auStack_70[0] = 5;
        }
        uStack_58 = 0;
        uStack_60 = 0x101;
        uStack_68 = 0;
        FUN_1004629b0(auStack_70);
        lVar6 = param_1[1];
        uVar7 = uVar7 + 1;
        *(undefined8 *)(lVar6 + lVar5) = 0;
        ((undefined8 *)(lVar6 + lVar5))[1] = 0;
        lVar5 = lVar5 + 0xc0;
      } while (uVar7 < (ulong)param_1[2]);
      lVar5 = param_1[1];
    }
    auStack_80[0] = 0x101;
    uStack_78 = 0;
    FUN_100462a0c(auStack_70,*param_1,FUN_100466d34,lVar5,0,auStack_80);
    lVar5 = param_1[1];
    if ((undefined4 *)(lVar5 + 0xa0) != auStack_70) {
      *(undefined4 *)(lVar5 + 0xa0) = auStack_70[0];
      *(undefined8 *)(lVar5 + 0xa8) = uStack_68;
      *(undefined8 *)(lVar5 + 0xb8) = uStack_58;
      *(ulong *)(lVar5 + 0xb0) = CONCAT62(uStack_5e,uStack_60);
      auStack_70[0] = 5;
      uStack_68 = 0;
      uStack_60 = 0x101;
      uStack_58 = 0;
    }
    FUN_1004629b0(auStack_70);
    FUN_100463850(param_1[1] + 0xa0);
  }
  return;
}



/* Entry: 1004629b0; end: 100462a0b;  */

void FUN_1004629b0(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(long *)(param_1 + 8) != 0)) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd.h"
                  ,0x7b,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100462a08);
    (*pcVar1)();
  }
  return;
}



/* Entry: 100462a0c; end: 100462a0f;  */

code * FUN_100462a0c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)param_6;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  UNRECOVERED_JUMPTABLE = (code *)0x88;
  func_0x000107c60e20();
  *(undefined ***)UNRECOVERED_JUMPTABLE = &PTR_DAT_1107c06e8;
  UNRECOVERED_JUMPTABLE[0x78] = (code)0x0;
  FUN_100460318(UNRECOVERED_JUMPTABLE + 8);
  FUN_100460338(UNRECOVERED_JUMPTABLE + 0x48);
  puVar3 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar3 == (undefined8 *)0x0) {
    uVar9 = 0x55;
  }
  else {
    *puVar3 = UNRECOVERED_JUMPTABLE;
    puVar3[1] = param_3;
    puVar3[2] = param_4;
    puVar3[3] = param_2;
    *(char *)(puVar3 + 4) = *param_6;
    cVar1 = param_6[1];
    *(char *)((long)puVar3 + 0x21) = cVar1;
    if (cVar1 != '\0') {
      FUN_100462c80();
    }
    iVar2 = (int)auStack_98;
    func_0x000107c61210();
    if (iVar2 == 0) {
      if (*param_6 == '\0') {
        puVar4 = auStack_98;
        func_0x000107c61214(puVar4,2);
        if ((int)puVar4 != 0) {
          uVar9 = 0x66;
          goto LAB_100462c44;
        }
      }
      else {
        puVar4 = auStack_98;
        func_0x000107c61214(puVar4,1);
        if ((int)puVar4 != 0) {
          uVar9 = 99;
          goto LAB_100462c44;
        }
      }
      uVar10 = *(ulong *)(param_6 + 8);
      if (uVar10 != 0) {
        uVar5 = 0x5d;
        func_0x000107c6165c();
        lVar6 = 0x1d;
        func_0x000107c6165c(0x1d);
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        puVar4 = auStack_98;
        func_0x000107c61218(puVar4,(uVar5 + lVar6) - 1 & -lVar6);
        if ((int)puVar4 != 0) {
          uVar9 = 0x6b;
          goto LAB_100462c44;
        }
      }
      pcVar7 = UNRECOVERED_JUMPTABLE + 0x80;
      func_0x000107c61238(pcVar7,auStack_98,FUN_1004664d4,puVar3);
      pcVar8 = (code *)auStack_98;
      func_0x000107c6120c();
      if ((int)pcVar8 == 0) {
        if ((int)pcVar7 == 0) {
          *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
          *(undefined4 *)param_1 = 1;
        }
        else {
          func_0x000107c60fd0(puVar3);
          if (param_6[1] != '\0') {
            func_0x000104a6f808();
          }
          *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
          *(undefined4 *)param_1 = 4;
          pcVar8 = UNRECOVERED_JUMPTABLE;
          (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 8))();
          *(undefined8 *)(param_1 + 8) = 0;
        }
        if (param_5 != 0) {
          *(bool *)param_5 = (int)pcVar7 == 0;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return param_1;
        }
        func_0x000107c60e78();
        func_0x000107c60e14(UNRECOVERED_JUMPTABLE);
        func_0x000107c60bd8(pcVar8);
        lVar6 = lRam0000000113815bc8;
        if ((bRam0000000113815bd8 & 1) == 0) {
          return pcVar8;
        }
        UNRECOVERED_JUMPTABLE = (code *)(lRam0000000113815bc8 + 8);
        FUN_100460448(UNRECOVERED_JUMPTABLE);
        *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
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
      uVar9 = 0x96;
    }
    else {
      uVar9 = 0x60;
    }
  }
LAB_100462c44:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd_posix.cc"
                ,uVar9,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100462c68);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 100462a10; end: 100462c7f;  */

code * FUN_100462a10(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_98 [64];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = *(undefined8 *)param_6;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  UNRECOVERED_JUMPTABLE = (code *)0x88;
  func_0x000107c60e20();
  *(undefined ***)UNRECOVERED_JUMPTABLE = &PTR_DAT_1107c06e8;
  UNRECOVERED_JUMPTABLE[0x78] = (code)0x0;
  FUN_100460318(UNRECOVERED_JUMPTABLE + 8);
  FUN_100460338(UNRECOVERED_JUMPTABLE + 0x48);
  puVar3 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (puVar3 == (undefined8 *)0x0) {
    uVar9 = 0x55;
  }
  else {
    *puVar3 = UNRECOVERED_JUMPTABLE;
    puVar3[1] = param_3;
    puVar3[2] = param_4;
    puVar3[3] = param_2;
    *(char *)(puVar3 + 4) = *param_6;
    cVar1 = param_6[1];
    *(char *)((long)puVar3 + 0x21) = cVar1;
    if (cVar1 != '\0') {
      FUN_100462c80();
    }
    iVar2 = (int)auStack_98;
    func_0x000107c61210();
    if (iVar2 == 0) {
      if (*param_6 == '\0') {
        puVar4 = auStack_98;
        func_0x000107c61214(puVar4,2);
        if ((int)puVar4 != 0) {
          uVar9 = 0x66;
          goto LAB_100462c44;
        }
      }
      else {
        puVar4 = auStack_98;
        func_0x000107c61214(puVar4,1);
        if ((int)puVar4 != 0) {
          uVar9 = 99;
          goto LAB_100462c44;
        }
      }
      uVar10 = *(ulong *)(param_6 + 8);
      if (uVar10 != 0) {
        uVar5 = 0x5d;
        func_0x000107c6165c();
        lVar6 = 0x1d;
        func_0x000107c6165c(0x1d);
        if (uVar5 <= uVar10) {
          uVar5 = uVar10;
        }
        puVar4 = auStack_98;
        func_0x000107c61218(puVar4,(uVar5 + lVar6) - 1 & -lVar6);
        if ((int)puVar4 != 0) {
          uVar9 = 0x6b;
          goto LAB_100462c44;
        }
      }
      pcVar7 = UNRECOVERED_JUMPTABLE + 0x80;
      func_0x000107c61238(pcVar7,auStack_98,FUN_1004664d4,puVar3);
      pcVar8 = (code *)auStack_98;
      func_0x000107c6120c();
      if ((int)pcVar8 == 0) {
        if ((int)pcVar7 == 0) {
          *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
          *(undefined4 *)param_1 = 1;
        }
        else {
          func_0x000107c60fd0(puVar3);
          if (param_6[1] != '\0') {
            func_0x000104a6f808();
          }
          *(code **)(param_1 + 8) = UNRECOVERED_JUMPTABLE;
          *(undefined4 *)param_1 = 4;
          pcVar8 = UNRECOVERED_JUMPTABLE;
          (**(code **)(*(long *)UNRECOVERED_JUMPTABLE + 8))();
          *(undefined8 *)(param_1 + 8) = 0;
        }
        if (param_5 != 0) {
          *(bool *)param_5 = (int)pcVar7 == 0;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
          return param_1;
        }
        func_0x000107c60e78();
        func_0x000107c60e14(UNRECOVERED_JUMPTABLE);
        func_0x000107c60bd8(pcVar8);
        lVar6 = lRam0000000113815bc8;
        if ((bRam0000000113815bd8 & 1) == 0) {
          return pcVar8;
        }
        UNRECOVERED_JUMPTABLE = (code *)(lRam0000000113815bc8 + 8);
        FUN_100460448(UNRECOVERED_JUMPTABLE);
        *(int *)(lVar6 + 0x78) = *(int *)(lVar6 + 0x78) + 1;
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
      uVar9 = 0x96;
    }
    else {
      uVar9 = 0x60;
    }
  }
LAB_100462c44:
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/gprpp/thd_posix.cc"
                ,uVar9,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100462c68);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Entry: 100462c80; end: 100462cd3;  */

void FUN_100462c80(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam0000000113815bc8;
  if ((bRam0000000113815bd8 & 1) == 0) {
    return;
  }
  lVar2 = lRam0000000113815bc8 + 8;
  FUN_100460448(lVar2);
  *(int *)(lVar1 + 0x78) = *(int *)(lVar1 + 0x78) + 1;
  func_0x000107c61268();
  if ((int)lVar2 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 100462cd4; end: 100462cdb;  */

void FUN_100462cd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462cdc; end: 100462d2f;  */

void FUN_100462cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462d30; end: 100462d3b;  */

void FUN_100462d30(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002b05c0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a8f78;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00a660);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 100462d3c; end: 100462feb;  */

void FUN_100462d3c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002b05c0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a8f78;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00a660);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 100462fec; end: 100462ff3;  */

void FUN_100462fec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100462ff4; end: 100463047;  */

void FUN_100462ff4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100463048; end: 10046304f;  */

void FUN_100463048(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1002a36a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_100463134(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1004631b0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_1004631d8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 100463050; end: 100463133;  */

void FUN_100463050(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1002a36a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_100463134(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1004631b0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1004631d8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100463134; end: 1004631af;  */

void FUN_100463134(undefined8 param_1)

{
  if (lRam0000000112e17b98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e683e9c);
  return;
}



/* Entry: 1004631b0; end: 1004631d7;  */

void FUN_1004631b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1004631d8; end: 100463293;  */

undefined * FUN_1004631d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11046b1f0;
  func_0x000107c613fc(&UNK_11046b1f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  FUN_1000285a8(0x112e17b68,&UNK_10d9f6120);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  puVar2 = &UNK_101cce3e4;
  FUN_1000bdd8c(&UNK_101cce3e4,puVar1);
  puVar1 = puVar2;
  FUN_1003a5b88();
  uVar3 = 0;
  FUN_1002a3734(0);
  func_0x000107c610f8();
  FUN_1004632b8(puVar1,uVar3);
  func_0x000107c61574(puVar2);
  return puVar1;
}



/* Entry: 100463294; end: 1004632b7;  */

void FUN_100463294(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004632b8; end: 100463303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004632b8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112feddf0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100463304; end: 10046332f;  */

void FUN_100463304(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100463330; end: 100463337;  */

void FUN_100463330(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0xa0);
  return;
}



/* Entry: 100463338; end: 1004635ab;  */

long * FUN_100463338(long param_1,long *param_2,char *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [24];
  long alStack_88 [3];
  long *plStack_70;
  undefined *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_58 = 0;
  lVar8 = param_1;
  FUN_10028bb78();
  uStack_48 = 1;
  plStack_60 = (long *)0x0;
  lStack_50 = lVar8;
  FUN_1004635ac();
  uVar6 = 0x10000;
  if (param_3[0x19] == '\0') {
    uVar6 = 0x8000;
  }
  uVar7 = 6;
  if (*param_3 == '\0') {
    uVar7 = 2;
  }
  if (param_3[1] != '\0') {
    uVar7 = 1;
  }
  uVar7 = uVar7 | uVar6 | (uint)(byte)param_3[0x1a] << 0x11;
  uVar3 = param_3[0x14] == '\x01';
  if ((bool)uVar3) {
    uVar7 = uVar7 | 0x400000;
    FUN_10046362c();
    FUN_100463748(param_2,uVar3);
  }
  plVar4 = param_2;
  func_0x000107c6139c(param_2,&plStack_60,uVar7,0);
  plVar2 = plStack_60;
  plStack_70 = plStack_60;
  puStack_68 = PTR__sqlite3_close_v2_11034cfc8;
  if ((int)plVar4 != 0) {
    FUN_10002b838(auStack_a0,&UNK_10f82f5bf);
    func_0x000107c3a404();
    func_0x000107c3a3e0();
    func_0x000107c3a3f4();
    func_0x000107c3a40c();
  }
  if (plVar2 == (long *)0x0) {
    FUN_10002b838(auStack_a0,&UNK_10f82f5db);
    func_0x000107c3a404();
    func_0x000107c313a4(0,1,alStack_88);
    func_0x000107c3a3f4();
    func_0x000107c3a40c();
  }
  plVar4 = plVar2;
  func_0x000107c61384(plVar2,1);
  if ((int)plVar4 != 0) {
    plVar4 = alStack_88;
    FUN_10002b838(plVar4,&UNK_10f82f601);
    func_0x000107c3a3e0();
    func_0x000107c3a3f4();
  }
  if ((0 < *(int *)(param_3 + 0x10)) && (plVar4 = plVar2, func_0x000107c61340(), (int)plVar4 != 0))
  {
    plVar4 = alStack_88;
    FUN_10002b838(plVar4,&UNK_10f82f628);
    func_0x000107c3a3e0();
    func_0x000107c3a3f4();
  }
  uVar3 = param_3[0x14] == '\x01';
  if ((bool)uVar3) {
    FUN_10046362c();
    FUN_1004c2f7c(param_2);
    FUN_10046362c();
    FUN_1004c31bc(param_2,uVar3);
    plVar4 = param_2;
  }
  FUN_1004c330c();
  lVar8 = (long)*(char *)(param_1 + 0x10f);
  if (lVar8 < 0) {
    lVar9 = *(long *)(param_1 + 0xf8);
    lVar8 = *(long *)(param_1 + 0x100);
  }
  else {
    lVar9 = param_1 + 0xf8;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  puVar5 = &uStack_58;
  func_0x0001004c3350(puVar5);
  (**(code **)(*plVar4 + 0x20))(plVar4,uVar1,lVar9,lVar8,puVar5);
  plStack_70 = (long *)0x0;
  FUN_1004c3a90(&plStack_70);
  return plVar2;
}



/* Entry: 1004635ac; end: 10046362b;  */

void FUN_1004635ac(void)

{
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if (lRam0000000113847120 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    func_0x000107c60c38(0x113847120,&ppuStack_20,0x100463600);
  }
  return;
}


