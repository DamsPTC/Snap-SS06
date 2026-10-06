/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107542d9c; end: 107542dcb;  */

void FUN_107542d9c(long param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_20 [16];
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == *(char *)(param_2 + 0x10)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        func_0x000107549214();
        FUN_107542e24();
        FUN_10733da60(auStack_20);
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        FUN_10733d9dc();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    func_0x00010754a018();
  }
  return;
}



/* Entry: 107542dcc; end: 107542e23;  */

void FUN_107542dcc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10733d9dc();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107542e24; end: 107542e47;  */

void FUN_107542e24(void)

{
  func_0x000107549194();
  FUN_10733da60();
  return;
}



/* Entry: 107542e48; end: 107542e6b;  */

undefined8 FUN_107542e48(undefined8 param_1)

{
  FUN_107542e6c();
  return param_1;
}



/* Entry: 107542e6c; end: 107542e9b;  */

void FUN_107542e6c(long param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_20 [16];
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == *(char *)(param_2 + 0x10)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        func_0x000107549214();
        FUN_107542ef4();
        FUN_10733c300(auStack_20);
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        FUN_10733c27c();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    func_0x00010754a018();
  }
  return;
}



/* Entry: 107542e9c; end: 107542ef3;  */

void FUN_107542e9c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10733c27c();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107542ef4; end: 107542f17;  */

void FUN_107542ef4(void)

{
  func_0x000107549194();
  FUN_10733c300();
  return;
}



/* Entry: 107542f18; end: 107542f3b;  */

undefined8 FUN_107542f18(undefined8 param_1)

{
  FUN_107542f3c();
  return param_1;
}



/* Entry: 107542f3c; end: 107542f6b;  */

void FUN_107542f3c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        uStack_18 = param_2[1];
        uStack_20 = *param_2;
        *param_2 = 0;
        param_2[1] = 0;
        func_0x000107268530(param_1,&uStack_20);
        func_0x000104c33428(&uStack_20);
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 2) == '\x01') {
        func_0x000104c335c0();
        *(undefined1 *)(param_1 + 2) = 0;
      }
      return;
    }
    func_0x00010754a018();
  }
  return;
}



/* Entry: 107542f6c; end: 107542f8f;  */

void FUN_107542f6c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x000104c335c0();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107542f90; end: 107542fb3;  */

undefined8 FUN_107542f90(undefined8 param_1)

{
  FUN_107542fb4();
  return param_1;
}



/* Entry: 107542fb4; end: 107542fdb;  */

long FUN_107542fb4(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 != *(char *)(param_2 + 0x40)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
        func_0x000104c3323c();
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      return param_1;
    }
    func_0x000104c32a18();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    func_0x000104c33050();
    return param_1;
  }
  return param_1;
}



/* Entry: 107542fdc; end: 107542fff;  */

undefined8 FUN_107542fdc(undefined8 param_1)

{
  FUN_107543000();
  return param_1;
}



/* Entry: 107543000; end: 10754302f;  */

void FUN_107543000(long param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_20 [16];
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == *(char *)(param_2 + 0x10)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        func_0x000107549214();
        FUN_107543088();
        FUN_1073bcf58(auStack_20);
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        FUN_1073bcebc();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    func_0x00010754a018();
  }
  return;
}



/* Entry: 107543030; end: 107543087;  */

void FUN_107543030(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1073bcebc();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107543088; end: 1075430ab;  */

void FUN_107543088(void)

{
  func_0x000107549194();
  FUN_1073bcf58();
  return;
}



/* Entry: 1075430ac; end: 1075430d7;  */

void FUN_1075430ac(void)

{
  func_0x00010754a2c8();
  FUN_1075430d8();
  return;
}



/* Entry: 1075430d8; end: 1075430eb;  */

void FUN_1075430d8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_1073be6c4();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 1075430ec; end: 107543107;  */

void FUN_1075430ec(long param_1)

{
  FUN_1073be6c4();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 107543108; end: 10754312b;  */

void FUN_107543108(void)

{
  func_0x000107549714();
  func_0x00010754a36c();
  FUN_10754312c();
  return;
}



/* Entry: 10754312c; end: 107543153;  */

void FUN_10754312c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 107543154; end: 10754321b;  */

long FUN_107543154(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010754a408();
  FUN_107404720();
  func_0x000107274b8c();
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10754321c; end: 10754323f;  */

undefined8 FUN_10754321c(undefined8 param_1)

{
  FUN_107543240();
  return param_1;
}



/* Entry: 107543240; end: 107543267;  */

void FUN_107543240(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 != *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x00010726afc0();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x0001072747d8();
    func_0x00010726d14c();
    func_0x000107274600();
    return;
  }
  return;
}



/* Entry: 107543268; end: 10754328b;  */

void FUN_107543268(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010726afc0();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10754328c; end: 1075432af;  */

undefined8 FUN_10754328c(undefined8 param_1)

{
  FUN_1075432b0();
  return param_1;
}



/* Entry: 1075432b0; end: 1075432df;  */

void FUN_1075432b0(long param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_20 [16];
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == *(char *)(param_2 + 0x10)) {
    if (cVar1 != '\0') {
      if (param_1 != param_2) {
        func_0x000107549214();
        FUN_107543338();
        FUN_107404ac4(auStack_20);
      }
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        FUN_107404cc4();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return;
    }
    func_0x00010754a018();
  }
  return;
}



/* Entry: 1075432e0; end: 107543337;  */

void FUN_1075432e0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_107404cc4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 107543338; end: 10754335b;  */

void FUN_107543338(void)

{
  func_0x000107549194();
  FUN_107404ac4();
  return;
}



/* Entry: 10754335c; end: 107543387;  */

void FUN_10754335c(void)

{
  func_0x00010754a2c8();
  FUN_107543388();
  return;
}



/* Entry: 107543388; end: 10754339b;  */

void FUN_107543388(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_107404a60();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  return;
}



/* Entry: 10754339c; end: 1075433b7;  */

void FUN_10754339c(long param_1)

{
  FUN_107404a60();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1075433b8; end: 1075433db;  */

void FUN_1075433b8(void)

{
  func_0x000107549714();
  func_0x00010754a36c();
  FUN_1075433dc();
  return;
}



/* Entry: 1075433dc; end: 107543403;  */

void FUN_1075433dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 107543404; end: 10754363b;  */

long FUN_107543404(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010754a408();
  FUN_107404aec();
  func_0x000107274b8c();
  func_0x000107266aa8();
  lVar1 = unaff_x19;
  func_0x000107274970();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10754363c; end: 1075436b7;  */

void FUN_10754363c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_1075436b8(param_1,param_4);
    FUN_1075436f0(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x000107543a3c(&uStack_40);
  return;
}



/* Entry: 1075436b8; end: 1075436ef;  */

void FUN_1075436b8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x38 == 0) {
    plVar1 = param_1 + 2;
    FUN_107543730();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x20);
  }
  else {
    FUN_107543724();
    plVar1 = param_1 + 2;
    func_0x000107543770();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1075436f0; end: 107543723;  */

void FUN_1075436f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x000107543770();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107543724; end: 10754372f;  */

void FUN_107543724(void)

{
  func_0x00010754a5bc();
  FUN_107543754();
  return;
}



/* Entry: 107543730; end: 107543753;  */

void FUN_107543730(void)

{
  FUN_107543754();
  return;
}



/* Entry: 107543754; end: 107543783;  */

void FUN_107543754(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x38 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 8);
    return;
  }
  func_0x000104bd35f4();
  FUN_107543784();
  return;
}



/* Entry: 107543784; end: 1075437fb;  */

long FUN_107543784(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010754a708();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x100) {
    FUN_1075437fc(param_4,param_2);
    param_4 = lStack_38 + 0x100;
    lStack_38 = param_4;
  }
  func_0x00010754a414();
  FUN_1075439bc(auStack_60);
  return param_4;
}



/* Entry: 1075437fc; end: 107543953;  */

void FUN_1075437fc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107549fec();
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
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
  FUN_107543954(unaff_x19 + 0x10,unaff_x20 + 0x10);
  FUN_107543954(unaff_x19 + 0x28,unaff_x20 + 0x28);
  FUN_107543954(unaff_x19 + 0x40,unaff_x20 + 0x40);
  FUN_107543954(unaff_x19 + 0x58,unaff_x20 + 0x58);
  FUN_107543954(unaff_x19 + 0x70,unaff_x20 + 0x70);
  FUN_107543954(unaff_x19 + 0x88,unaff_x20 + 0x88);
  FUN_107543954(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_107543954(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  FUN_107543954(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  FUN_107543954(unaff_x19 + 0xe8,unaff_x20 + 0xe8);
  return;
}



/* Entry: 107543954; end: 10754397f;  */

void FUN_107543954(void)

{
  func_0x00010754a2c8();
  FUN_107543980();
  return;
}



/* Entry: 107543980; end: 1075439bb;  */

void FUN_107543980(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 2) == '\x01') {
    lVar4 = param_2[1];
    uVar5 = *param_2;
    param_1[1] = param_2[1];
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
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1075439bc; end: 1075439eb;  */

long FUN_1075439bc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1075439ec(param_1);
  }
  return param_1;
}



/* Entry: 1075439ec; end: 107543a0b;  */

void FUN_1075439ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x100;
    func_0x000107543ad8();
  }
  return;
}



/* Entry: 107543a0c; end: 107543a9b;  */

void FUN_107543a0c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x100;
    func_0x000107543ad8();
  }
  return;
}



/* Entry: 107543a9c; end: 107543aa3;  */

void FUN_107543a9c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x100;
    func_0x000107543ad8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107543aa4; end: 107543b97;  */

void FUN_107543aa4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x100;
    func_0x000107543ad8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107543b98; end: 107543c33;  */

long FUN_107543b98(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_107543c50(param_1,(param_1[1] - *param_1 >> 5) + 1);
  FUN_107543cd4(auStack_58,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
  FUN_107543c34(lStack_48,param_2,param_3);
  lStack_48 = lStack_48 + 0x20;
  FUN_107543c90(param_1,auStack_58);
  lVar2 = param_1[1];
  FUN_107543d5c(auStack_58);
  return lVar2;
}



/* Entry: 107543c34; end: 107543c4f;  */

void FUN_107543c34(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[3] = param_3[1];
  param_1[2] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 107543c50; end: 107543c8f;  */

ulong FUN_107543c50(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  if (param_2 >> 0x3b == 0) {
    uVar1 = param_1[2] - *param_1 >> 4;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x7ffffffffffffff;
    }
    return uVar1;
  }
  FUN_107543cc8();
  func_0x000107549a14();
  uVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(uVar1);
  func_0x000107549a20();
  return uVar1;
}



/* Entry: 107543c90; end: 107543cc7;  */

void FUN_107543c90(long *param_1,long param_2)

{
  func_0x000107549a14();
  _memcpy(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  func_0x000107549a20();
  return;
}



/* Entry: 107543cc8; end: 107543cd3;  */

long * FUN_107543cc8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x00010754a5bc();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107543d1c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 107543cd4; end: 107543d3f;  */

long * FUN_107543cd4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107543d1c();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 107543d40; end: 107543d5b;  */

long * FUN_107543d40(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_2 << 5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107543d88();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107543d5c; end: 107543d87;  */

long * FUN_107543d5c(long *param_1)

{
  FUN_107543d88();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107543d88; end: 107543d8f;  */

void FUN_107543d88(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000107543dc4();
  }
  return;
}



/* Entry: 107543d90; end: 107543e4b;  */

void FUN_107543d90(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000107543dc4();
  }
  return;
}



/* Entry: 107543e4c; end: 107543e53;  */

void FUN_107543e4c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107543dc4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107543e54; end: 107543e87;  */

void FUN_107543e54(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107543dc4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107543e88; end: 10754420b;  */

void FUN_107543e88(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  long **pplVar6;
  long **pplVar7;
  long **pplVar8;
  undefined8 extraout_x8;
  code *extraout_x9;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  undefined1 **ppuVar12;
  long *plVar13;
  undefined8 uStack_220;
  long *plStack_218;
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [24];
  undefined1 uStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  byte bStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [144];
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined1 auStack_98 [8];
  byte bStack_90;
  undefined1 *puStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  func_0x0001075491f8();
  uStack_70 = extraout_x8;
  func_0x000107549b64();
  (*extraout_x9)(&lStack_a0);
  if ((bStack_90 & 1) == 0) {
    func_0x0001075492e4();
  }
  else {
    puVar3 = auStack_98;
    (**(code **)(lStack_a0 + 0x18))();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x0001075492d4();
    }
    else {
      func_0x00010754a190(*(undefined8 *)(lStack_a0 + 0x20));
      if (puVar3 != (undefined1 *)0x0) {
        lStack_c8 = 0;
        lStack_c0 = 0;
        uStack_170 = 0;
        uStack_168 = 0;
        puStack_88 = (undefined1 *)((ulong)puStack_88 & 0xffffffffffffff00);
        uStack_78 = uStack_78 & 0xffffffffffffff00;
        puStack_190 = (undefined1 *)((ulong)puStack_190 & 0xffffffffffffff00);
        bStack_180 = 0;
        auStack_1b0[0] = 0;
        uStack_198 = 0;
        plStack_d0 = &lStack_c8;
        FUN_1075375e8(auStack_160,&uStack_170,&puStack_88,&puStack_190,auStack_1b0);
        func_0x00010754977c();
        func_0x0001075497a0();
        ppuVar4 = &puStack_88;
        FUN_107323ef8();
        func_0x000107549b5c();
        ppuVar12 = (undefined1 **)0x0;
        do {
          func_0x00010754a190(*(undefined8 *)(lStack_a0 + 0x20));
          in_ZR = ppuVar12 == ppuVar4;
          if (ppuVar4 <= ppuVar12) {
            *param_1 = (long)plStack_d0;
            plVar13 = param_1 + 1;
            *plVar13 = lStack_c8;
            param_1[2] = lStack_c0;
            if (lStack_c0 == 0) {
              *param_1 = (long)plVar13;
            }
            else {
              *(long **)(lStack_c8 + 0x10) = plVar13;
              lStack_c8 = 0;
              lStack_c0 = 0;
              plStack_d0 = &lStack_c8;
            }
            *(undefined1 *)(param_1 + 3) = 1;
            break;
          }
          puVar3 = auStack_98;
          (**(code **)(lStack_a0 + 0x28))(&lStack_b0,puVar3,ppuVar12);
          func_0x00010754a094(*(undefined8 *)(lStack_b0 + 0x18));
          if (((ulong)puVar3 & 1) == 0) {
LAB_107544144:
            func_0x000107549654();
LAB_107544148:
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 3) = 0;
            func_0x00010754a5c8();
            break;
          }
          func_0x00010754a08c(*(undefined8 *)(lStack_b0 + 0x20));
          in_ZR = puVar3 == (undefined1 *)0x2;
          if (!(bool)in_ZR) goto LAB_107544144;
          puVar3 = auStack_a8;
          func_0x000107549924(&puStack_88);
          func_0x00010754a298();
          FUN_107324e4c();
          func_0x00010754a144();
          if (((ulong)puVar3 >> 0x20 & 1) == 0) goto LAB_107544148;
          func_0x0001072c9ff4(auStack_1c0,param_2);
          func_0x00010754995c(&puStack_88);
          FUN_107544540(&puStack_190,auStack_1c0,&puStack_88,param_4,param_5);
          func_0x00010754a144();
          puVar5 = auStack_1c0;
          func_0x0001072c9884();
          bVar2 = bStack_180;
          if ((bStack_180 & 1) == 0) {
            *(undefined1 *)param_1 = 0;
            *(undefined1 *)(param_1 + 3) = 0;
          }
          else {
            func_0x000107549bb8();
            uStack_78 = 1;
            puStack_88 = puVar5;
            plStack_80 = &lStack_c8;
            *(double *)(puVar5 + 0x20) = (double)SUB84(puVar3,0);
            *(undefined8 *)(puVar5 + 0x30) = uStack_188;
            *(undefined1 **)(puVar5 + 0x28) = puStack_190;
            puStack_190 = (undefined1 *)0x0;
            uStack_188 = 0;
            pplVar6 = &plStack_d0;
            FUN_1075453d0(pplVar6,&uStack_b8);
            if (*pplVar6 == (long *)0x0) {
              FUN_107545418(&plStack_d0,uStack_b8,pplVar6,puVar5);
              puStack_88 = (undefined1 *)0x0;
            }
            func_0x000107545440(&puStack_88);
          }
          ppuVar4 = &puStack_190;
          func_0x0001072c95d0();
          func_0x00010754a5c8();
          ppuVar12 = (undefined1 **)((long)ppuVar12 + 1);
        } while ((bVar2 & 1) != 0);
        func_0x0001075499ec();
        FUN_107545fd8();
        goto LAB_1075440d0;
      }
      func_0x0001075492c4();
    }
  }
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
LAB_1075440d0:
  func_0x00010754992c();
  func_0x00010754909c(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010754a5c8();
  func_0x0001075499ec();
  pplVar6 = &plStack_d0;
  FUN_107545fd8();
  func_0x00010754992c();
  func_0x0001075495c4();
  pplVar11 = pplVar6 + 1;
  pplVar7 = (long **)*pplVar6;
  plStack_218 = (long *)0x7fefffffffffffff;
  while (pplVar7 != pplVar11) {
    plVar13 = pplVar7[4];
    if ((double)plStack_218 <= (double)pplVar7[4]) {
      plVar13 = plStack_218;
    }
    func_0x00010002c7d4();
    plStack_218 = plVar13;
  }
  uStack_220 = 0xfff0000000000000;
  pplVar7 = pplVar6;
  func_0x0001075454c4(pplVar6,&plStack_218);
  pplVar8 = pplVar6;
  func_0x0001075454ac(pplVar6,&uStack_220,pplVar7);
  pplVar10 = pplVar11;
  pplVar7 = pplVar11;
  while (pplVar9 = (long **)*pplVar7, pplVar9 != (long **)0x0) {
    lVar1 = 8;
    if ((double)plStack_218 <= (double)pplVar9[4]) {
      lVar1 = 0;
    }
    pplVar7 = (long **)((long)pplVar9 + lVar1);
    if ((double)plStack_218 <= (double)pplVar9[4]) {
      pplVar10 = pplVar9;
    }
  }
  if ((pplVar11 != pplVar10) && ((double)pplVar10[4] <= (double)plStack_218)) {
    func_0x000107549dec();
    if ((long **)*pplVar6 == pplVar10) {
      *pplVar6 = (long *)pplVar8;
    }
    pplVar6[2] = (long *)((long)pplVar6[2] + -1);
    func_0x00010530d618(pplVar6[1],pplVar10);
    func_0x0001072c9b9c(pplVar10 + 5);
    __ZdlPv(pplVar10);
  }
  return;
}



/* Entry: 10754420c; end: 10754430f;  */

void FUN_10754420c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  double dVar7;
  undefined8 uStack_50;
  double dStack_48;
  
  plVar6 = param_1 + 1;
  plVar2 = (long *)*param_1;
  dStack_48 = 1.79769313486232e+308;
  while (plVar2 != plVar6) {
    dVar7 = (double)plVar2[4];
    if (dStack_48 <= (double)plVar2[4]) {
      dVar7 = dStack_48;
    }
    func_0x00010002c7d4();
    dStack_48 = dVar7;
  }
  uStack_50 = 0xfff0000000000000;
  plVar2 = param_1;
  func_0x0001075454c4(param_1,&dStack_48);
  plVar3 = param_1;
  func_0x0001075454ac(param_1,&uStack_50,plVar2);
  plVar5 = plVar6;
  plVar2 = plVar6;
  while (plVar4 = (long *)*plVar2, plVar4 != (long *)0x0) {
    lVar1 = 8;
    if (dStack_48 <= (double)plVar4[4]) {
      lVar1 = 0;
    }
    plVar2 = (long *)((long)plVar4 + lVar1);
    if (dStack_48 <= (double)plVar4[4]) {
      plVar5 = plVar4;
    }
  }
  if ((plVar6 != plVar5) && ((double)plVar5[4] <= dStack_48)) {
    func_0x000107549dec();
    if ((long *)*param_1 == plVar5) {
      *param_1 = (long)plVar3;
    }
    param_1[2] = param_1[2] + -1;
    func_0x00010530d618(param_1[1],plVar5);
    func_0x0001072c9b9c(plVar5 + 5);
    __ZdlPv(plVar5);
  }
  return;
}



/* Entry: 107544310; end: 1075444b7;  */

void FUN_107544310(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_40 [2];
  
  if (*param_5 == 0) {
    uVar1 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = uVar1;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    FUN_107545674(auStack_a0,&DAT_10f41698f,param_3);
    func_0x00010774f358(auStack_b0,"number");
    func_0x00010774f8f8(&uStack_60,auStack_a0,auStack_b0);
    FUN_1075426b0(&uStack_90,&uStack_60,param_4);
    func_0x000107549944();
    func_0x0001075495d4();
    func_0x000107549ce8();
    uVar1 = 0x70;
    __Znwm();
    func_0x0001072c9ff4(auStack_40,param_2);
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    uStack_50 = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    lStack_68 = param_5[1];
    lStack_70 = *param_5;
    *param_5 = 0;
    param_5[1] = 0;
    FUN_107545708(uVar1,auStack_40,&uStack_60,&lStack_70);
    func_0x000107549ae4();
    func_0x000107543dec(&uStack_60);
    puVar2 = auStack_40;
    func_0x0001072c9884();
    *param_1 = uVar1;
    func_0x00010754a4a0();
    *puVar2 = &PTR_DAT_1109ba3d0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = uVar1;
    param_1[1] = puVar2;
    func_0x000107543dec(&uStack_90);
  }
  return;
}



/* Entry: 1075444b8; end: 1075444f3;  */

void FUN_1075444b8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_11;
  
  uStack_11 = (undefined1)param_3;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x30))(param_1,param_2,&uStack_11);
    return;
  }
  func_0x000104bfeb48();
  FUN_107545d8c(&uStack_50,param_2,param_3,param_4);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_107545f78(&uStack_50);
  return;
}



/* Entry: 1075444f4; end: 10754453f;  */

void FUN_1075444f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_107545d8c(&uStack_30,param_2,param_3,param_4);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_107545f78(&uStack_30);
  return;
}



/* Entry: 107544540; end: 107544d1f;  */

undefined8 *
FUN_107544540(long *param_1,long *param_2,long *param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x10;
  undefined8 extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  long *plVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  ulong uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined8 auStack_2b0 [7];
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined1 uStack_250;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 auStack_220 [18];
  undefined8 **appuStack_190 [2];
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 uStack_170;
  byte bStack_168;
  undefined8 ***pppuStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  byte bStack_148;
  undefined8 **ppuStack_100;
  undefined8 ***pppuStack_f8;
  ulong uStack_f0;
  byte bStack_c8;
  undefined4 uStack_98;
  undefined8 uStack_88;
  
  func_0x0001075491f8();
  uStack_230 = 0;
  uStack_228 = 0;
  ppuStack_100 = (undefined8 **)((ulong)ppuStack_100 & 0xffffffffffffff00);
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  pppuStack_160 = (undefined8 ***)((ulong)pppuStack_160 & 0xffffffffffffff00);
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_88 = extraout_x8;
  func_0x00010754a558(auStack_220,&uStack_230,&ppuStack_100,&pppuStack_160);
  func_0x000107549b54();
  func_0x000107323f70(&pppuStack_160);
  FUN_107323ef8(&ppuStack_100);
  puVar8 = &uStack_230;
  FUN_107323f90();
  iVar2 = (int)param_2[1];
  if (iVar2 == 0) goto LAB_1075446e8;
  in_ZR = iVar2 == 1;
  if ((bool)in_ZR) {
    func_0x000107549814();
    FUN_107324e4c();
    if (((ulong)puVar8 >> 0x20 & 1) == 0) goto LAB_1075446e8;
    pppuStack_f8 = (undefined8 ***)(double)SUB84(puVar8,0);
    uStack_98 = 2;
    func_0x000107549c78();
    func_0x00010754a278();
    func_0x0001075498fc();
LAB_107544640:
    ppppuVar11 = &pppuStack_160;
  }
  else {
    in_ZR = iVar2 == 2;
    if ((bool)in_ZR) {
      func_0x000107549814();
      uVar7 = (uint)puVar8;
      FUN_107324a00();
      if ((uVar7 >> 8 & 1) == 0) goto LAB_1075446e8;
      pppuStack_f8 = (undefined8 ***)CONCAT71(pppuStack_f8._1_7_,(char)uVar7);
      param_4 = 1;
      uStack_98 = 1;
      func_0x000107549c78();
      func_0x00010754a278();
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_107544640;
    }
    cVar5 = SBORROW4(iVar2,3);
    cVar6 = iVar2 + -3 < 0;
    in_ZR = iVar2 == 3;
    if ((bool)in_ZR) {
      func_0x000107549814(&pppuStack_180);
      FUN_10753e004();
      if ((bStack_168 & 1) == 0) {
LAB_107544964:
        func_0x000107549764();
      }
      else {
        if (param_5 == 0) {
          func_0x000107262e9c(&pppuStack_160,&pppuStack_180);
          func_0x000107277488(&ppuStack_100,&pppuStack_160);
          func_0x00010754a4b8();
        }
        else {
          func_0x00010754a390();
          uVar1 = extraout_x11;
          uVar3 = extraout_x10;
          if (cVar6 == cVar5) {
            uVar1 = extraout_x8_00;
            uVar3 = extraout_x9;
          }
          FUN_107541f8c(appuStack_190,uVar3,uVar1);
        }
        func_0x0001075494f8(appuStack_190[0]);
        if ((param_5 & 1) == 0) {
          func_0x0001075498bc(&ppuStack_100);
          func_0x00010754a198();
        }
      }
LAB_107544968:
      ppppuVar11 = &pppuStack_180;
LAB_10754496c:
      func_0x0001001148fc(ppppuVar11);
      goto LAB_1075446ec;
    }
    in_ZR = iVar2 == 4;
    if (!(bool)in_ZR) {
      in_ZR = iVar2 == 5;
      if ((!(bool)in_ZR) && (in_ZR = iVar2 == 6, !(bool)in_ZR)) {
        in_ZR = iVar2 == 7;
        if ((bool)in_ZR) {
          lVar14 = *param_2;
          plVar13 = param_3 + 1;
          plVar9 = plVar13;
          (**(code **)(*param_3 + 0x18))();
          if (((ulong)plVar9 & 1) == 0) {
            func_0x000107549654();
          }
          else {
            in_ZR = false;
            plVar10 = plVar9;
            if (*(char *)(lVar14 + 0x18) == '\x01') {
              func_0x00010754a378();
              func_0x000107549eb4();
              plVar10 = *(long **)(lVar14 + 0x10);
              in_ZR = plVar9 == plVar10;
              if (!(bool)in_ZR) {
                func_0x000107878fec(&pppuStack_160);
                func_0x0001004c3cd0(&ppuStack_100,&UNK_10f41696d,&pppuStack_160);
                func_0x00010754961c();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_100);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_160)
                ;
                goto LAB_1075446e8;
              }
            }
            iVar2 = *(int *)(lVar14 + 8);
            if (iVar2 != 0) {
              if (iVar2 == 1) {
                pppuStack_160 = (undefined8 ****)0x0;
                uStack_158 = 0;
                uStack_150 = 0;
                func_0x00010754a378();
                func_0x000107549eb4();
                ppppuVar11 = &pppuStack_160;
                FUN_1074b01dc(ppppuVar11,plVar10);
                ppppuVar15 = (undefined8 ****)0x0;
                while( true ) {
                  func_0x00010754a378();
                  func_0x000107549eb4();
                  in_ZR = ppppuVar15 == ppppuVar11;
                  if (ppppuVar11 <= ppppuVar15) break;
                  plVar9 = plVar13;
                  func_0x000107549b88(&ppuStack_100);
                  func_0x00010754a190(ppuStack_100[0xb]);
                  ppppuVar11 = (undefined8 ****)&ppuStack_100;
                  func_0x0001072f5f6c();
                  if (((ulong)plVar9 >> 0x20 & 1) == 0) {
                    func_0x000107549654();
                    func_0x000107549764();
                    goto LAB_107544b24;
                  }
                  if (uStack_158 < uStack_150) {
                    *(double *)(uStack_158 + 8) = (double)SUB84(plVar9,0);
                    *(undefined4 *)(uStack_158 + 0x68) = 2;
                    uVar16 = uStack_158 + 0x70;
                  }
                  else {
                    ppppuVar11 = &pppuStack_160;
                    func_0x00010727776c(ppppuVar11,
                                        (long)(uStack_158 - (long)pppuStack_160) / 0x70 + 1);
                    func_0x000107277858(&ppuStack_100,ppppuVar11,
                                        (long)(uStack_158 - (long)pppuStack_160) / 0x70,&uStack_150)
                    ;
                    *(double *)(uStack_f0 + 8) = (double)SUB84(plVar9,0);
                    *(undefined4 *)(uStack_f0 + 0x68) = 2;
                    uStack_f0 = uStack_f0 + 0x70;
                    func_0x0001072777cc(&pppuStack_160,&ppuStack_100);
                    uVar16 = uStack_158;
                    ppppuVar11 = (undefined8 ****)&ppuStack_100;
                    func_0x000107277a38();
                  }
                  ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1);
                  uStack_158 = uVar16;
                }
                func_0x000107277aa4(appuStack_190,&pppuStack_160);
                func_0x00010754a048();
                func_0x00010754a4f4();
                param_1[1] = lStack_178;
                *param_1 = (long)pppuStack_180;
                pppuStack_180 = (undefined8 ****)0x0;
                lStack_178 = 0;
                func_0x0001075498fc();
                func_0x00010754a4c0();
                func_0x000107549aec();
                func_0x00010754a0c0();
LAB_107544b24:
                ppppuVar11 = &pppuStack_160;
              }
              else {
                in_ZR = 1;
                if ((iVar2 == 2) || (in_ZR = iVar2 == 3, !(bool)in_ZR)) goto LAB_1075446e8;
                pppuStack_180 = (undefined8 ****)0x0;
                lStack_178 = 0;
                uStack_170 = 0;
                func_0x00010754a378();
                func_0x000107549eb4();
                ppppuVar11 = &pppuStack_180;
                FUN_1074b01dc(ppppuVar11,plVar10);
                ppppuVar15 = (undefined8 ****)0x0;
                uVar17 = (undefined1)*param_1;
                uVar18 = (undefined1)param_1[2];
                do {
                  func_0x00010754a378();
                  func_0x000107549eb4();
                  in_ZR = ppppuVar15 == ppppuVar11;
                  if (ppppuVar11 <= ppppuVar15) {
                    *(undefined1 *)(param_1 + 2) = uVar18;
                    *(undefined1 *)param_1 = uVar17;
                    func_0x000107277aa4(appuStack_190,&pppuStack_180);
                    func_0x00010754a048();
                    func_0x000107549c78();
                    func_0x00010754a278();
                    func_0x0001075498fc();
                    func_0x000107549ef4();
                    func_0x000107549aec();
                    func_0x00010754a0c0();
                    goto LAB_107544bbc;
                  }
                  func_0x000107549b88(&pppuStack_160,plVar13);
                  (*(code *)pppuStack_160[0xd])(&ppuStack_100,&uStack_158);
                  func_0x0001072f5f6c(&pppuStack_160);
                  bVar4 = bStack_c8;
                  if ((bStack_c8 & 1) == 0) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                              (param_4,&UNK_10f416562);
                    uVar18 = 0;
                    uVar17 = 0;
                  }
                  else {
                    func_0x000104c2fe00(&pppuStack_160,&ppuStack_100);
                    FUN_1073f24b0(&pppuStack_180,&pppuStack_160);
                    func_0x00010754a198();
                  }
                  ppppuVar11 = (undefined8 ****)&ppuStack_100;
                  func_0x00010724b3d8();
                  ppppuVar15 = (undefined8 ****)((long)ppppuVar15 + 1);
                } while ((bVar4 & 1) != 0);
                *(undefined1 *)(param_1 + 2) = uVar18;
                *(undefined1 *)param_1 = uVar17;
LAB_107544bbc:
                ppppuVar11 = &pppuStack_180;
              }
              func_0x000107277d70(ppppuVar11);
              goto LAB_1075446ec;
            }
          }
        }
        else {
          in_ZR = iVar2 == 8;
          if (!(bool)in_ZR) {
            in_ZR = iVar2 == 9;
            if ((bool)in_ZR) {
              func_0x000107549814(&pppuStack_160);
              FUN_10753e004();
              if ((bStack_148 & 1) == 0) {
                func_0x000107549764();
              }
              else {
                if (param_5 == 0) {
                  in_ZR = uStack_150._7_1_ == 0;
                  ppppuVar11 = (undefined8 ****)pppuStack_160;
                  if (-1 < (long)uStack_150) {
                    ppppuVar11 = &pppuStack_160;
                  }
                  FUN_107544d20(&pppuStack_180,ppppuVar11);
                  FUN_107545338(&ppuStack_100,&pppuStack_180);
                  func_0x00010754a4b8();
                }
                else {
                  in_ZR = uStack_150._7_1_ == 0;
                  uVar16 = uStack_158;
                  ppppuVar11 = (undefined8 ****)pppuStack_160;
                  if (-1 < (long)uStack_150) {
                    uVar16 = (ulong)uStack_150._7_1_;
                    ppppuVar11 = &pppuStack_160;
                  }
                  FUN_107541e74(appuStack_190,ppppuVar11,uVar16);
                }
                func_0x0001075494f8(appuStack_190[0]);
                if ((param_5 & 1) == 0) {
                  func_0x0001075498bc(&ppuStack_100);
                  func_0x00010726afc0(&pppuStack_180);
                }
              }
              ppppuVar11 = &pppuStack_160;
              goto LAB_10754496c;
            }
            cVar5 = SBORROW4(iVar2,10);
            cVar6 = iVar2 + -10 < 0;
            in_ZR = iVar2 == 10;
            if (!(bool)in_ZR) {
              func_0x000107549814(&pppuStack_180);
              FUN_10753e004();
              if ((bStack_168 & 1) == 0) goto LAB_107544964;
              if (param_5 == 0) {
                in_ZR = uStack_170._7_1_ == '\0';
                ppppuVar11 = (undefined8 ****)pppuStack_180;
                if (-1 < uStack_170) {
                  ppppuVar11 = &pppuStack_180;
                }
                func_0x00010775f080(&pppuStack_160,ppppuVar11);
                FUN_10754538c(&ppuStack_100,&pppuStack_160);
                func_0x00010754a4b8();
              }
              else {
                func_0x00010754a390();
                uVar1 = extraout_x11_00;
                uVar3 = extraout_x10_00;
                if (cVar6 == cVar5) {
                  uVar1 = extraout_x8_01;
                  uVar3 = extraout_x9_00;
                }
                FUN_107542278(&pppuStack_160,uVar3,uVar1);
                FUN_107547ae0(&ppuStack_100,&pppuStack_160);
                appuStack_190[0] = ppuStack_100;
                ppuStack_100 = (undefined8 ***)0x0;
                pppuStack_f8 = (undefined8 ****)0x0;
              }
              func_0x0001075494f8(appuStack_190[0]);
              if ((param_5 & 1) == 0) {
                func_0x0001075498bc(&ppuStack_100);
                func_0x00010726b164(&pppuStack_160);
              }
              else {
                FUN_107547c88(&ppuStack_100);
                func_0x000107549ef4();
              }
              goto LAB_107544968;
            }
          }
        }
      }
LAB_1075446e8:
      func_0x000107549764();
      goto LAB_1075446ec;
    }
    func_0x000107549814(&pppuStack_160);
    FUN_10753d60c();
    if ((uStack_150 & 1) == 0) goto LAB_1075446e8;
    uStack_f0 = uStack_158;
    pppuStack_f8 = pppuStack_160;
    uStack_98 = 4;
    func_0x00010754a4f4();
    param_1[1] = lStack_178;
    *param_1 = (long)pppuStack_180;
    pppuStack_180 = (undefined8 ****)0x0;
    lStack_178 = 0;
    func_0x0001075498fc();
    ppppuVar11 = &pppuStack_180;
  }
  func_0x0001072c9b9c(ppppuVar11);
  func_0x000107549aec();
LAB_1075446ec:
  puVar8 = auStack_220;
  func_0x000107324968(puVar8);
  func_0x00010754909c(uStack_88);
  if ((bool)in_ZR) {
    return puVar8;
  }
  ___stack_chk_fail();
  func_0x000107549594();
  func_0x00010754a0c0();
  func_0x000107277d70(&pppuStack_180);
  puVar8 = auStack_220;
  func_0x000107324968();
  func_0x000107549adc();
  puVar12 = auStack_2b0;
  pcStack_258 = FUN_107544d20;
  uStack_270 = param_4;
  plStack_268 = param_1;
  puStack_260 = &stack0xfffffffffffffff0;
  func_0x0001075491f8();
  uStack_278 = extraout_x8_02;
  func_0x000100060964(auStack_2b0);
  FUN_107544d90(puVar8,auStack_2b0);
  func_0x000104c2f714();
  func_0x00010754909c(uStack_278);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107549648();
    func_0x000104c2f714();
    func_0x0001075495c4();
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    FUN_107544dec();
    return puVar12;
  }
  return puVar8;
}



/* Entry: 107544d20; end: 107544d8f;  */

undefined8 * FUN_107544d20(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 auStack_60 [7];
  undefined8 uStack_28;
  
  puVar1 = auStack_60;
  func_0x0001075491f8();
  uStack_28 = extraout_x8;
  func_0x000100060964(auStack_60);
  FUN_107544d90(param_1,auStack_60);
  func_0x000104c2f714();
  func_0x00010754909c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107549648();
  func_0x000104c2f714();
  func_0x0001075495c4();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_107544dec();
  return puVar1;
}



/* Entry: 107544d90; end: 107544deb;  */

undefined8 * FUN_107544d90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_107544dec();
  return param_1;
}



/* Entry: 107544dec; end: 107544e4b;  */

long FUN_107544dec(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_107544e4c(param_1);
    lVar2 = uVar1 + 0x120;
  }
  else {
    lVar2 = param_1;
    FUN_107544e94();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x120;
}



/* Entry: 107544e4c; end: 107544e93;  */

void FUN_107544e4c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_107544f9c(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x120;
  return;
}



/* Entry: 107544e94; end: 107544f9b;  */

long FUN_107544e94(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_88 [16];
  long lStack_78;
  
  plVar1 = param_1;
  func_0x000107295a98(param_1,(param_1[1] - *param_1) / 0x120 + 1);
  FUN_107545178(auStack_88,plVar1,(param_1[1] - *param_1) / 0x120,param_1 + 2);
  FUN_107544f9c(lStack_78,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12);
  lStack_78 = lStack_78 + 0x120;
  FUN_107545134(param_1,auStack_88);
  lVar2 = param_1[1];
  func_0x0001075452d0(auStack_88);
  return lVar2;
}



/* Entry: 107544f9c; end: 107545043;  */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 * FUN_107544f9c(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  uint7 uStack_9f;
  undefined8 uStack_98;
  int iStack_90;
  undefined1 auStack_8c [16];
  undefined1 uStack_7c;
  undefined1 auStack_78 [16];
  undefined1 uStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  func_0x0001075491f8();
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60);
  auStack_78[0] = 0;
  uStack_68 = 0;
  auStack_8c[0] = 0;
  uStack_7c = 0;
  iStack_90 = (uint)iStack_90._1_3_ << 8;
  uVar3 = 0;
  uVar4 = 0;
  FUN_10754506c(param_1,auStack_60,0,0,auStack_78,auStack_8c);
  func_0x00010726b07c(auStack_78);
  puVar1 = auStack_60;
  func_0x000104c2f714();
  func_0x00010754909c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010754a648();
  puVar2 = puVar1;
  func_0x000104c318bc();
  puVar2[0x38] = 0;
  puVar2[0x98] = 0;
  *(undefined8 *)(puVar2 + 0xa0) = unaff_x24;
  *(undefined8 *)(puVar2 + 0xa8) = unaff_x23;
  func_0x0001072ca5c0(puVar2 + 0xb0);
  uVar6 = unaff_x21[1];
  uVar5 = *unaff_x21;
  *(undefined4 *)(puVar1 + 0xd8) = *(undefined4 *)(unaff_x21 + 2);
  *(undefined8 *)(puVar1 + 0xd0) = uVar6;
  *(undefined8 *)(puVar1 + 200) = uVar5;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  *(undefined2 *)(puVar1 + 0xf0) = 0;
  *(undefined2 *)(puVar1 + 0xf2) = 0;
  *(undefined2 *)(puVar1 + 0xf4) = 0;
  *(undefined2 *)(puVar1 + 0xf6) = 0;
  *(int *)(puVar1 + 0x108) = iStack_90;
  *(undefined8 *)(puVar1 + 0x100) = uStack_98;
  *(ulong *)(puVar1 + 0xf8) = (ulong)uStack_9f << 8;
  *(undefined8 *)(puVar1 + 0x110) = 0;
  *(undefined8 *)(puVar1 + 0x118) = 0;
  return puVar1;
}



/* Entry: 107545044; end: 10754506b;  */

long FUN_107545044(long param_1)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000008;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  func_0x00010754a648();
  lVar1 = param_1;
  func_0x000104c318bc();
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x24;
  *(undefined8 *)(lVar1 + 0xa8) = unaff_x23;
  func_0x0001072ca5c0(lVar1 + 0xb0);
  uVar3 = unaff_x21[1];
  uVar2 = *unaff_x21;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(unaff_x21 + 2);
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = in_x6;
  *(undefined8 *)(param_1 + 0xe8) = in_x7;
  *(undefined2 *)(param_1 + 0xf0) = in_stack_00000000;
  *(undefined2 *)(param_1 + 0xf2) = in_stack_00000008;
  *(undefined2 *)(param_1 + 0xf4) = in_stack_00000010;
  *(undefined2 *)(param_1 + 0xf6) = in_stack_00000018;
  uVar3 = in_stack_00000020[1];
  uVar2 = *in_stack_00000020;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(in_stack_00000020 + 2);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x118) = in_stack_00000030;
  return param_1;
}



/* Entry: 10754506c; end: 107545133;  */

long FUN_10754506c(long param_1)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 in_stack_00000000;
  undefined2 in_stack_00000008;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  func_0x00010754a648();
  lVar1 = param_1;
  func_0x000104c318bc();
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = unaff_x24;
  *(undefined8 *)(lVar1 + 0xa8) = unaff_x23;
  func_0x0001072ca5c0(lVar1 + 0xb0);
  uVar3 = unaff_x21[1];
  uVar2 = *unaff_x21;
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(unaff_x21 + 2);
  *(undefined8 *)(param_1 + 0xd0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined8 *)(param_1 + 0xe0) = in_x6;
  *(undefined8 *)(param_1 + 0xe8) = in_x7;
  *(undefined2 *)(param_1 + 0xf0) = in_stack_00000000;
  *(undefined2 *)(param_1 + 0xf2) = in_stack_00000008;
  *(undefined2 *)(param_1 + 0xf4) = in_stack_00000010;
  *(undefined2 *)(param_1 + 0xf6) = in_stack_00000018;
  uVar3 = in_stack_00000020[1];
  uVar2 = *in_stack_00000020;
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(in_stack_00000020 + 2);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x118) = in_stack_00000030;
  return param_1;
}



/* Entry: 107545134; end: 107545177;  */

void FUN_107545134(long *param_1,long param_2)

{
  func_0x000107549a14();
  FUN_1075451c4(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x120) * 0x120);
  func_0x000107549a20();
  return;
}



/* Entry: 107545178; end: 1075451c3;  */

long * FUN_107545178(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107278914();
  }
  lVar1 = param_4 + param_3 * 0x120;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x120;
  return param_1;
}



/* Entry: 1075451c4; end: 10754524f;  */

void FUN_1075451c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x00010754a71c();
  func_0x00010754a708();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x120) {
    func_0x000107545280(param_4,param_2);
    param_4 = lStack_38 + 0x120;
    lStack_38 = param_4;
  }
  func_0x00010754a414();
  func_0x000107545250(param_1);
  func_0x000107278bd4(auStack_60);
  return;
}



/* Entry: 107545250; end: 1075452fb;  */

void FUN_107545250(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x120) {
    func_0x00010726b04c();
  }
  return;
}



/* Entry: 1075452fc; end: 107545303;  */

void FUN_1075452fc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x120;
    func_0x00010726b04c();
  }
  return;
}



/* Entry: 107545304; end: 107545337;  */

void FUN_107545304(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107549a14();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x120;
    func_0x00010726b04c();
  }
  return;
}



/* Entry: 107545338; end: 10754535f;  */

long FUN_107545338(long param_1)

{
  FUN_107545360(param_1 + 8);
  return param_1;
}



/* Entry: 107545360; end: 10754538b;  */

void FUN_107545360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 0xc) = 6;
  return;
}



/* Entry: 10754538c; end: 1075453b3;  */

long FUN_10754538c(long param_1)

{
  FUN_1075453b4(param_1 + 8);
  return param_1;
}



/* Entry: 1075453b4; end: 1075453cf;  */

void FUN_1075453b4(long param_1)

{
  func_0x00010726ccd4();
  *(undefined4 *)(param_1 + 0x60) = 7;
  return;
}



/* Entry: 1075453d0; end: 107545417;  */

long * FUN_1075453d0(double param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar3 = (long *)*plVar1;
  plVar2 = plVar1;
  while (plVar3 != (long *)0x0) {
    while (plVar2 = plVar3, param_1 < (double)plVar2[4]) {
      plVar1 = plVar2;
      plVar3 = (long *)*plVar2;
      if ((long *)*plVar2 == (long *)0x0) goto LAB_107545414;
    }
    if (param_1 <= (double)plVar2[4]) break;
    plVar1 = plVar2 + 1;
    plVar3 = (long *)*plVar1;
  }
LAB_107545414:
  *param_3 = plVar2;
  return plVar1;
}



/* Entry: 107545418; end: 10754545f;  */

void FUN_107545418(void)

{
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010754988c();
  if (extraout_x8 != 0) {
    *unaff_x19 = extraout_x8;
  }
  func_0x000107549d04();
  func_0x000107549ab4();
  return;
}



/* Entry: 107545460; end: 107545477;  */

void FUN_107545460(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x000107549a7c(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x000107549efc();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107545478; end: 1075454ab;  */

void FUN_107545478(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000107549a7c();
  if ((bool)in_ZR) {
    func_0x000107549efc();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075454ac; end: 107545513;  */

void FUN_1075454ac(void)

{
  func_0x0001075454f4();
  return;
}



/* Entry: 107545514; end: 107545573;  */

undefined1  [16] FUN_107545514(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  
  func_0x00010754a508(param_1,param_2,param_2);
  lVar2 = *param_1;
  bVar1 = lVar2 == 0;
  if (bVar1) {
    func_0x00010754a3e4();
    FUN_1075455c0();
    func_0x000107549ed8();
    func_0x000107549cdc();
    lVar2 = uStack_60;
  }
  auVar3[8] = bVar1;
  auVar3._0_8_ = lVar2;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 107545574; end: 1075455bf;  */

long * FUN_107545574(long param_1,long *param_2,double *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar3 = (long *)*plVar1;
    do {
      while (plVar2 = plVar3, *param_3 < (double)plVar3[4]) {
        plVar4 = (long *)*plVar3;
        plVar1 = plVar3;
        plVar3 = plVar4;
        if (plVar4 == (long *)0x0) goto LAB_1075455bc;
      }
      if (*param_3 <= (double)plVar3[4]) break;
      plVar1 = plVar3 + 1;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
LAB_1075455bc:
  *param_2 = (long)plVar2;
  return plVar1;
}



/* Entry: 1075455c0; end: 1075455eb;  */

void FUN_1075455c0(void)

{
  func_0x00010754a71c();
  func_0x000107549bb8();
  func_0x000107549e34();
  return;
}



/* Entry: 1075455ec; end: 107545673;  */

undefined1  [16]
FUN_1075455ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  func_0x00010754a508(param_1,param_2,param_2);
  plVar3 = (long *)*plVar2;
  bVar1 = plVar3 == (long *)0x0;
  if (bVar1) {
    plVar3 = plVar2;
    func_0x000107549bb8();
    plVar3[4] = *(long *)*param_4;
    plVar3[5] = 0;
    plVar3[6] = 0;
    FUN_107545418(param_1,uStack_48,plVar2,plVar3);
    func_0x000107549cdc();
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = plVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 107545674; end: 107545707;  */

undefined8 * FUN_107545674(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined1 auStack_e8 [8];
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined1 auStack_d0 [16];
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [9];
  undefined8 uStack_28;
  
  func_0x0001075491f8();
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  puVar4 = (undefined8 *)&uStack_81;
  puVar3 = (undefined8 *)0x1;
  uStack_28 = extraout_x8;
  func_0x0001072bed5c(auStack_70,&uStack_80);
  func_0x00010774ee44(param_1,param_2,auStack_70);
  puVar1 = auStack_70;
  func_0x0001072c9c34();
  func_0x000107549ce8();
  func_0x00010754909c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107549a64();
  func_0x0001072c9c34();
  func_0x000107549ce8();
  func_0x0001075495c4();
  func_0x0001072ca12c(auStack_d0);
  puVar2 = puVar3;
  func_0x00010754581c();
  uStack_e0 = SUB84(puVar2,0);
  uStack_dc = (undefined2)((ulong)puVar2 >> 0x20);
  func_0x000107549cd0(*puVar4);
  func_0x0001075457c8(&uStack_e0,auStack_e8);
  func_0x000107549824();
  func_0x0001072c9f9c();
  func_0x000107549ca8();
  *puVar1 = &PTR_FUN_1109be2b8;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  uVar5 = *puVar3;
  puVar1[10] = puVar3[1];
  puVar1[9] = uVar5;
  puVar1[0xb] = puVar3[2];
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar5 = *puVar4;
  puVar1[0xd] = puVar4[1];
  puVar1[0xc] = uVar5;
  *puVar4 = 0;
  puVar4[1] = 0;
  return puVar1;
}



/* Entry: 107545708; end: 1075457c7;  */

undefined8 *
FUN_107545708(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined1 auStack_40 [16];
  
  func_0x0001072ca12c(auStack_40);
  puVar1 = param_3;
  func_0x00010754581c();
  uStack_50 = SUB84(puVar1,0);
  uStack_4c = (undefined2)((ulong)puVar1 >> 0x20);
  func_0x000107549cd0(*param_4);
  func_0x0001075457c8(&uStack_50,auStack_58);
  func_0x000107549824();
  func_0x0001072c9f9c();
  func_0x000107549ca8();
  *param_1 = &PTR_FUN_1109be2b8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  uVar2 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar2;
  param_1[0xb] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar2 = *param_4;
  param_1[0xd] = param_4[1];
  param_1[0xc] = uVar2;
  *param_4 = 0;
  param_4[1] = 0;
  return param_1;
}



/* Entry: 1075457c8; end: 10754589f;  */

ulong FUN_1075457c8(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined4 *puStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  uStack_28 = 0x1010101;
  uStack_24 = 1;
  puStack_38 = &uStack_28;
  uStack_30 = param_1;
  FUN_1075458a0(&puStack_38);
  puStack_48 = &uStack_28;
  uStack_40 = param_2;
  func_0x000107545974(&puStack_48);
  return (ulong)CONCAT24(uStack_24,uStack_28);
}



/* Entry: 1075458a0; end: 107545a47;  */

void FUN_1075458a0(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)*param_1;
  if (*pbVar1 == 1) {
    bVar2 = *(byte *)param_1[1];
  }
  else {
    bVar2 = 0;
  }
  *pbVar1 = bVar2 & 1;
  if (pbVar1[1] == 1) {
    bVar2 = *(byte *)(param_1[1] + 1);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[1] = bVar2 & 1;
  if (pbVar1[2] == 1) {
    bVar2 = *(byte *)(param_1[1] + 2);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[2] = bVar2 & 1;
  if (pbVar1[3] == 1) {
    bVar2 = *(byte *)(param_1[1] + 3);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[3] = bVar2 & 1;
  if (pbVar1[4] == 1) {
    bVar2 = *(byte *)(param_1[1] + 4);
  }
  else {
    bVar2 = 0;
  }
  pbVar1[4] = bVar2 & 1;
  if ((pbVar1[5] & 1) == 0) {
    bVar2 = *(byte *)(param_1[1] + 5);
  }
  else {
    bVar2 = 1;
  }
  pbVar1[5] = bVar2 & 1;
  return;
}



/* Entry: 107545a48; end: 107545ab7;  */

ulong FUN_107545a48(undefined8 param_1)

{
  undefined4 *puStack_68;
  undefined4 *puStack_58;
  undefined4 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  func_0x00010754a71c();
  uStack_38 = 0x1010101;
  uStack_34 = 1;
  puStack_48 = &uStack_38;
  uStack_40 = param_1;
  FUN_107545ab8(&puStack_48);
  puStack_58 = &uStack_38;
  func_0x000107545b8c(&puStack_58);
  puStack_68 = &uStack_38;
  func_0x000107545c60(&puStack_68);
  return (ulong)CONCAT24(uStack_34,uStack_38);
}


