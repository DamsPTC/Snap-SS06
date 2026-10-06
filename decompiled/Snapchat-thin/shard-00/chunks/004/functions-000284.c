/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10062bfa8; end: 10062bfc7;  */

void FUN_10062bfa8(void)

{
  func_0x000107c61168(&PTR_PTR_112f6f890);
  return;
}



/* Entry: 10062bfc8; end: 10062bfdb;  */

void FUN_10062bfc8(long param_1,long param_2)

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



/* Entry: 10062bfdc; end: 10062c073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062bfdc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f71188) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10062c074; end: 10062c077;  */

void FUN_10062c074(long param_1,long param_2)

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



/* Entry: 10062c078; end: 10062c0c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062c078(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f71158) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10062c0c4; end: 10062c127;  */

void FUN_10062c0c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10062c128; end: 10062c15b;  */

long FUN_10062c128(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x000107c28ddc();
  }
  else {
    FUN_10062c19c();
  }
  return param_1;
}



/* Entry: 10062c15c; end: 10062c16b;  */

void FUN_10062c15c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x69);
  return;
}



/* Entry: 10062c16c; end: 10062c19b;  */

void FUN_10062c16c(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_10062c15c();
  FUN_10062b2fc(unaff_x20 + 0x70,unaff_x19 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xb0) = *(undefined8 *)(unaff_x19 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar1;
  return;
}



/* Entry: 10062c19c; end: 10062c1b7;  */

void FUN_10062c19c(long param_1)

{
  FUN_10062c16c();
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}



/* Entry: 10062c1b8; end: 10062c1d7;  */

void FUN_10062c1b8(void)

{
  return;
}



/* Entry: 10062c1d8; end: 10062c267;  */

void FUN_10062c1d8(undefined1 *param_1)

{
  long *plVar1;
  undefined1 auStack_1c0 [200];
  long lStack_f8;
  undefined1 auStack_f0 [184];
  char cStack_38;
  
  func_0x00010062c1c0(&lStack_f8);
  func_0x000107c60ee4(auStack_1c0,200);
  if (cStack_38 == '\x01') {
    func_0x00010062c360();
    if (lStack_f8 != 0) {
      plVar1 = &lStack_f8;
      FUN_10062c398(plVar1);
      FUN_10062c430(param_1,plVar1);
      goto LAB_10062c248;
    }
  }
  else {
    func_0x00010062c360();
  }
  *param_1 = 0;
  param_1[0xb8] = 0;
LAB_10062c248:
  FUN_10062c368(auStack_f0);
  return;
}



/* Entry: 10062c268; end: 10062c273;  */

void FUN_10062c268(void)

{
  return;
}



/* Entry: 10062c274; end: 10062c2a7;  */

void FUN_10062c274(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10062c268();
  FUN_10062c2a8(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10062c2a8; end: 10062c317;  */

void FUN_10062c2a8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_e8 [184];
  
  FUN_10062c268();
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 != *(char *)(param_2 + 0xb8)) {
    if (cVar1 == '\0') {
      FUN_10062c318();
      FUN_10062c19c();
    }
    else {
      FUN_10062c19c();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0xb8) == '\x01') {
      FUN_10062b428(unaff_x19 + 0x70);
      *(undefined1 *)(unaff_x19 + 0xb8) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    FUN_10062c318();
    func_0x000107c323c4();
    func_0x000107c28de0(auStack_e8,unaff_x20);
    func_0x000107c323e0();
    func_0x000108691270();
    func_0x000108691674();
    func_0x000108691270();
    func_0x0001086916c8();
    return;
  }
  return;
}



/* Entry: 10062c318; end: 10062c323;  */

void FUN_10062c318(void)

{
  return;
}



/* Entry: 10062c324; end: 10062c357;  */

void FUN_10062c324(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_10062b428(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  return;
}



/* Entry: 10062c358; end: 10062c367;  */

void FUN_10062c358(void)

{
  return;
}



/* Entry: 10062c368; end: 10062c397;  */

long FUN_10062c368(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_10062b428(param_1 + 0x70);
  }
  return param_1;
}



/* Entry: 10062c398; end: 10062c42f;  */

long * FUN_10062c398(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    func_0x000107c60c94(auStack_50,*param_1 + 0x58);
    FUN_1004c3cd0(auStack_38,&UNK_10f4b0787,auStack_50);
    func_0x000107c313a4(uVar1,0x65,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 10062c430; end: 10062c44b;  */

void FUN_10062c430(long param_1)

{
  FUN_10062c16c();
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}



/* Entry: 10062c44c; end: 10062c45b;  */

void FUN_10062c44c(void)

{
  return;
}



/* Entry: 10062c45c; end: 10062c4bb;  */

undefined8 * FUN_10062c45c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [200];
  
  func_0x000107c60ee4(auStack_e8,200);
  FUN_10062c508(param_1 + 1,auStack_e8);
  func_0x00010062c360();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_10062c368(param_1 + 2);
  return param_1;
}



/* Entry: 10062c4bc; end: 10062c4e3;  */

void FUN_10062c4bc(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xb8);
  if (cVar1 != *(char *)(param_2 + 0xb8)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xb8) == '\x01') {
        FUN_10062b428(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0xb8) = 0;
      }
      return;
    }
    FUN_10062c16c();
    *(undefined1 *)(param_1 + 0xb8) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c323bc();
    func_0x00010868cf80(unaff_x20 + 0x70,unaff_x19 + 0x70);
    uVar2 = *(undefined1 *)(unaff_x19 + 0xb0);
    *(undefined8 *)(unaff_x20 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
    *(undefined1 *)(unaff_x20 + 0xb0) = uVar2;
    return;
  }
  return;
}



/* Entry: 10062c4e4; end: 10062c507;  */

undefined8 FUN_10062c4e4(undefined8 param_1)

{
  FUN_10062c4bc();
  return param_1;
}



/* Entry: 10062c508; end: 10062c52f;  */

undefined8 * FUN_10062c508(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10062c4e4(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10062c530; end: 10062c53b;  */

undefined ** FUN_10062c530(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10062c53c; end: 10062c567;  */

void FUN_10062c53c(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10062c568; end: 10062c56f;  */

void FUN_10062c568(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f88dc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10062c570; end: 10062c5f3;  */

void FUN_10062c570(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f88dc,param_2,&UNK_1029f88e0,param_2,&UNK_1029f8908,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10062c5f4; end: 10062c63f;  */

void FUN_10062c5f4(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10062c640; end: 10062c66f;  */

void FUN_10062c640(long param_1)

{
  func_0x00010062b2f0();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_10062c670();
  return;
}



/* Entry: 10062c670; end: 10062c68f;  */

void FUN_10062c670(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x00010868cae8();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 10062c690; end: 10062c793;  */

void FUN_10062c690(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010062c684();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_10062c7a4(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x38);
    do {
      func_0x00010062d030();
    } while (extraout_w10 != 0);
    func_0x00010062d040(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x00010062d020();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x00010062d04c();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010062d058();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c33dd8();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          FUN_10062d0f4();
          if ((bool)in_ZR) {
            func_0x000107c33d64();
            func_0x000107c33d48();
            func_0x000107c33d40();
          }
          func_0x00010062d108();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005f9618(unaff_x19 + 0x30);
  func_0x000107c33dd0();
  func_0x000107c33dd4();
  func_0x000107c33d8c();
  func_0x000107c33d70();
  func_0x000107c33e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10062c794; end: 10062c7a3;  */

void FUN_10062c794(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x38);
  return;
}



/* Entry: 10062c7a4; end: 10062c8bb;  */

void FUN_10062c7a4(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x20;
  
  FUN_10062c794();
  *param_1 = &UNK_10883de6c;
  param_1[1] = &UNK_10883debc;
  FUN_10054f3f8(param_1 + 2);
  FUN_10062c8bc();
  FUN_10062c8d8(param_1 + 5);
  func_0x00010062d148(param_1[5]);
  do {
    func_0x00010062d030();
  } while (extraout_w10 != 0);
  func_0x00010062d040(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00010062d020();
    if (*unaff_x20 == 0) {
      FUN_10054ef74();
    }
    func_0x00010062d04c();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010062d058();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c33dd8();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010062d0f4();
        if ((bool)in_ZR) {
          func_0x000107c33d64();
          func_0x000107c33d48();
          func_0x000107c33d40();
        }
        func_0x00010062d108();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005f9618(param_1 + 4);
  func_0x000107c33d88();
  func_0x000107c33d84();
  func_0x000107c33d8c();
  func_0x000107c33d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10062c8bc; end: 10062c8d7;  */

void FUN_10062c8bc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *unaff_x21 = lVar4;
  func_0x00010054ee5c();
  return;
}



/* Entry: 10062c8d8; end: 10062ca83;  */

void FUN_10062c8d8(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x21;
  
  func_0x00010062c8c8();
  *param_1 = &UNK_10883dd68;
  param_1[1] = &UNK_10883de48;
  param_1[0xb] = unaff_x21;
  func_0x00010062ca90();
  FUN_10062cac4();
  FUN_10062cad0(param_1 + 10);
  param_1[9] = param_1[10];
  do {
    func_0x00010062d030();
  } while (extraout_w10 != 0);
  func_0x00010062d040(param_1[9]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x00010062d020();
    if (*unaff_x21 == 0) {
      FUN_10054ef74();
    }
    func_0x00010062d04c();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010062d058();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c33dd8();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        FUN_10062d0f4();
        if ((bool)in_ZR) {
          func_0x000107c33d64();
          func_0x000107c33d48();
          func_0x000107c33d40();
        }
        func_0x00010062d108();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005f9618(param_1 + 9);
  func_0x000107c33db4();
  func_0x000107c33da8();
  func_0x000107c33d8c();
  func_0x000107c33d70();
  func_0x000107c33d90();
  return;
}



/* Entry: 10062ca84; end: 10062ca97;  */

undefined ** FUN_10062ca84(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10062ca98; end: 10062cac3;  */

void FUN_10062ca98(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10062cac4; end: 10062cacf;  */

void FUN_10062cac4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *unaff_x20 = lVar4;
  func_0x00010054ee5c();
  return;
}



/* Entry: 10062cad0; end: 10062cf5b;  */

/* WARNING: Removing unreachable block (ram,0x00010062ccbc) */

void FUN_10062cad0(long param_1)

{
  long *plVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  uint extraout_w8;
  int extraout_w8_00;
  ulong extraout_x8;
  long lVar13;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar14;
  long extraout_x8_03;
  uint extraout_w9;
  int extraout_w9_00;
  ulong extraout_x9;
  long lVar15;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar16;
  long unaff_x28;
  long lVar17;
  
  plVar8 = (long *)0xe8;
  func_0x000107c60e20();
  *plVar8 = (long)&UNK_10883d914;
  plVar8[1] = (long)&UNK_10883dd20;
  plVar1 = plVar8 + 0x12;
  plVar8[0x1a] = param_1;
  plVar9 = plVar8;
  func_0x00010062ca90();
  func_0x0001005f0b1c();
  plVar8[0x17] = (long)plVar1;
  plVar8[0x18] = 1;
  FUN_10062d020();
  uVar14 = extraout_x8;
  while( true ) {
    plVar8[0x1b] = unaff_x28;
    *(byte *)((long)plVar8 + 0xe1) = (byte)uVar14 & 1;
    lVar13 = *(long *)(plVar8[0x1a] + 0x60);
    plVar8[4] = lVar13 + 0x58;
    plVar8[5] = lVar13;
    if (lVar13 != 0) {
      do {
        func_0x00010062d030();
      } while (extraout_w10 != 0);
    }
    plVar10 = plVar8 + 4;
    func_0x00010061e2f8();
    plVar16 = plVar10;
    if (((ulong)plVar10 & 1) == 0) {
      *(undefined1 *)(plVar8 + 0x1c) = 0;
      plVar16 = (long *)plVar8[4];
      lVar13 = *plVar9;
      if (lVar13 == 0) {
        FUN_10054ef74();
        lVar13 = *plVar10;
      }
      FUN_10061e340(plVar16,0,plVar8,lVar13);
      if (((ulong)plVar16 & 1) != 0) {
        return;
      }
    }
    pbVar2 = (byte *)(plVar8[5] + 0xa8);
    do {
      bVar4 = *pbVar2;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
      if (bVar7) {
        *pbVar2 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar4 & 1) != 0));
    if ((*(long *)(plVar8[5] + 0xe8) == 0) && ((*(byte *)(plVar8[5] + 0xb8) & 1) != 0)) break;
    func_0x000107c33ddc();
    func_0x000107c33e84();
    *pbVar2 = 0;
    *(undefined1 *)((long)plVar8 + 0xe2) = 1;
    func_0x000107c33de8();
    func_0x000107c33ecc();
    if ((extraout_x9 & 1) == 0) {
      unaff_x28 = plVar8[0x1b];
    }
    else {
      func_0x000107c33e68();
      func_0x000107c33dcc(plVar8[0x1a]);
      (*extraout_x8_00)();
      func_0x000107c33e54();
      plVar8[6] = 0;
      plVar8[7] = 0;
      plVar8[4] = (long)&PTR_DAT_110a609a8;
      plVar8[5] = 0;
      *(undefined4 *)(plVar8 + 8) = 0x2a3;
      plVar8[0x12] = (long)pbVar2 * 1000000;
      (**(code **)(*plVar16 + 0x18))();
      func_0x000107c33d9c();
      func_0x000107c33e70();
      plVar10 = *(long **)(plVar8[0x1a] + 0x10);
      func_0x000107c29d84(plVar1,plVar10,plVar8 + 0x19,plVar8[0x1a] + 0x80);
      func_0x00010062d148(*plVar1);
      do {
        func_0x00010062d030();
      } while (extraout_w10_00 != 0);
      func_0x00010062d040(plVar8[4]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(plVar8 + 0x1c) = 1;
        lVar13 = plVar8[4];
        lVar17 = *plVar9;
        if (lVar17 == 0) {
          FUN_10054ef74();
          lVar17 = *plVar10;
        }
        plVar10 = (long *)(lVar13 + 0x10);
        do {
          lVar15 = *plVar10;
          if (lVar15 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar7) {
              *plVar10 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            bVar7 = cVar5 == '\0';
            if (bVar7) {
              uVar6 = 1;
              lVar15 = *(long *)(lVar13 + 0x90);
              func_0x000107c33e48();
              if (bVar7) {
                func_0x000107c33d64();
                iVar3 = extraout_w8_00;
                if ((bool)uVar6) {
                  iVar3 = extraout_w9_00;
                }
                puVar12 = (undefined1 *)(ulong)(iVar3 * 0x18 + 0x10);
                func_0x000107c610a0();
                *puVar12 = (char)iVar3;
                puVar12[1] = 0;
                *(undefined8 *)(puVar12 + 8) = 0;
                *(undefined1 **)(lVar15 + 8) = puVar12;
                *(undefined1 **)(lVar13 + 0x90) = puVar12;
              }
              func_0x000107c33e44();
              *(long *)(extraout_x8_03 + 0x20) = lVar17;
              func_0x000107c33d60(*(undefined8 *)(lVar13 + 0x90));
              *(undefined8 *)(lVar13 + 0x10) = 0;
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
        } while (((uint)lVar15 >> 1 & 1) == 0);
      }
      plVar10 = plVar8 + 4;
      FUN_10061a9e4();
      unaff_x28 = *plVar10;
      func_0x000107c33d88();
      func_0x000107c33e24();
      if (unaff_x28 == 0) {
        func_0x000107c33e64(plVar8[0x1a]);
        if (plVar10 != (long *)0x0) {
          func_0x000107c33e88();
        }
        func_0x000107c29d88(plVar8 + 4,plVar8[0x1a]);
        func_0x000107c33ecc();
        if (extraout_w9 == *(byte *)(plVar8 + 8)) {
          if (extraout_w9 != 0) {
            func_0x000107c33e58();
          }
        }
        else if (extraout_w9 == 0) {
          func_0x000107c33df4();
          *(undefined1 *)(extraout_x8_01 + 0xb0) = 1;
        }
        else {
          func_0x000107c33e00();
        }
        lVar13 = plVar8[0x1a];
        func_0x000107c29d8c(plVar8 + 4);
        if (*(char *)(lVar13 + 0xb0) == '\x01') {
          func_0x000107c33e40(plVar8[0x1a]);
        }
        plVar8[4] = *(long *)(plVar8[0x1a] + 0x20);
        *(undefined1 *)(plVar8 + 5) = 1;
        func_0x000107c60d88();
        func_0x000107c33df0();
        FUN_1000df5a0(plVar8 + 4);
        plVar10 = (long *)plVar8[0x15];
        if (plVar10 != (long *)0x0) {
          FUN_10054f8dc(plVar1,plVar8 + 0xe);
          func_0x000107c28d0c(plVar8 + 4,plVar8[0x17],plVar8[0x18]);
          (**(code **)(*plVar10 + 200))(plVar10,plVar8 + 4);
          func_0x000107c33e34();
          FUN_100100fec(plVar1);
        }
        lVar13 = plVar8[0x1a];
        func_0x000107c33e2c();
        uVar11 = *(undefined8 *)(lVar13 + 0x40);
        plVar8[0xb] = 0;
        plVar8[0xc] = 0;
        func_0x000107c33e50(&PTR_DAT_110a609a8,uVar11);
        (*extraout_x8_02)();
        func_0x000107c33e28();
      }
      func_0x000107c33dec();
      func_0x000107c33de4();
    }
    uVar14 = (ulong)*(byte *)((long)plVar8 + 0xe2);
  }
  func_0x0001006716e0();
  *pbVar2 = 0;
  *(undefined1 *)((long)plVar8 + 0xe2) = 0;
  func_0x000107c33de8();
  func_0x000107c33d8c();
  func_0x000107c33d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(plVar8);
  return;
}



/* Entry: 10062cf5c; end: 10062cf63;  */

void FUN_10062cf5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f8adc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10062cf64; end: 10062cfe7;  */

void FUN_10062cf64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f8adc,param_2,&UNK_1029f8ae0,param_2,&UNK_1029f8b08,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10062cfe8; end: 10062cff3;  */

undefined ** FUN_10062cfe8(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10062cff4; end: 10062d01f;  */

void FUN_10062cff4(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10062d020; end: 10062d06f;  */

void FUN_10062d020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010062d02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e278)();
  return;
}



/* Entry: 10062d070; end: 10062d0f3;  */

void FUN_10062d070(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f8cd0,param_2,FUN_10062d154,param_2,&UNK_1029f8cd4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10062d0f4; end: 10062d153;  */

void FUN_10062d0f4(void)

{
  return;
}



/* Entry: 10062d154; end: 10062d17b;  */

void FUN_10062d154(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10062d17c; end: 10062d27f;  */

void FUN_10062d17c(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x00010062c684();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_10062d280(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x38);
    do {
      func_0x00010062d030();
    } while (extraout_w10 != 0);
    func_0x00010062d040(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x00010062d020();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x00010062d04c();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x00010062d058();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c33dd8();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          FUN_10062d0f4();
          if ((bool)in_ZR) {
            func_0x000107c33d64();
            func_0x000107c33d48();
            func_0x000107c33d40();
          }
          func_0x00010062d108();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005f9618(unaff_x19 + 0x30);
  func_0x000107c33dd0();
  func_0x000107c33dd4();
  func_0x000107c33d8c();
  func_0x000107c33d70();
  func_0x000107c33e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10062d280; end: 10062d397;  */

void FUN_10062d280(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x20;
  
  FUN_10062c794();
  *param_1 = &UNK_10883e040;
  param_1[1] = &UNK_10883e090;
  FUN_10054f3f8(param_1 + 2);
  FUN_10062c8bc();
  FUN_10062d398(param_1 + 5);
  func_0x00010062d148(param_1[5]);
  do {
    func_0x00010062d030();
  } while (extraout_w10 != 0);
  func_0x00010062d040(param_1[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00010062d020();
    if (*unaff_x20 == 0) {
      FUN_10054ef74();
    }
    func_0x00010062d04c();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010062d058();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c33dd8();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x00010062d0f4();
        if ((bool)in_ZR) {
          func_0x000107c33d64();
          func_0x000107c33d48();
          func_0x000107c33d40();
        }
        func_0x00010062d108();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005f9618(param_1 + 4);
  func_0x000107c33d88();
  func_0x000107c33d84();
  func_0x000107c33d8c();
  func_0x000107c33d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10062d398; end: 10062d543;  */

void FUN_10062d398(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x21;
  
  func_0x00010062c8c8();
  *param_1 = &UNK_10883df3c;
  param_1[1] = &UNK_10883e01c;
  param_1[0xb] = unaff_x21;
  func_0x00010062ca90();
  FUN_10062cac4();
  FUN_10062d544(param_1 + 10);
  param_1[9] = param_1[10];
  do {
    func_0x00010062d030();
  } while (extraout_w10 != 0);
  func_0x00010062d040(param_1[9]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x00010062d020();
    if (*unaff_x21 == 0) {
      FUN_10054ef74();
    }
    func_0x00010062d04c();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x00010062d058();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c33dd8();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        FUN_10062d0f4();
        if ((bool)in_ZR) {
          func_0x000107c33d64();
          func_0x000107c33d48();
          func_0x000107c33d40();
        }
        func_0x00010062d108();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  FUN_1005f9618(param_1 + 9);
  func_0x000107c33db4();
  func_0x000107c33da8();
  func_0x000107c33d8c();
  func_0x000107c33d70();
  func_0x000107c33d90();
  return;
}



/* Entry: 10062d544; end: 10062db57;  */

void FUN_10062d544(long *param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long lVar12;
  code *extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar13;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  int extraout_w9;
  ulong extraout_x9;
  undefined8 *puVar14;
  ulong extraout_x9_00;
  ulong uVar15;
  ulong extraout_x9_01;
  long extraout_x9_02;
  undefined8 *extraout_x9_03;
  int extraout_w10;
  int extraout_w10_00;
  long *extraout_x10;
  long *extraout_x10_00;
  undefined8 *puVar16;
  ulong extraout_x10_01;
  undefined8 *extraout_x11;
  undefined8 *extraout_x11_00;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *unaff_x24;
  byte unaff_w25;
  uint uVar20;
  undefined8 *unaff_x26;
  
  puVar11 = (undefined8 *)0x170;
  func_0x000107c60e20();
  *puVar11 = FUN_1006ba360;
  puVar11[1] = &UNK_10883df14;
  puVar11[0x2c] = param_4;
  func_0x00010062ca90();
  FUN_10062c8bc();
  FUN_10062d020();
  FUN_10062db58();
  do {
    FUN_10062f874();
    if (extraout_x8 != 0) {
      do {
        func_0x00010062d030();
      } while (extraout_w10 != 0);
    }
    plVar17 = puVar11 + 0x27;
    func_0x00010061e2f8();
    if (((ulong)plVar17 & 1) == 0) {
      func_0x00010062f888();
      if (param_7 == 0) {
        FUN_10054ef74();
        param_7 = *plVar17;
      }
      func_0x00010062f89c();
      if (((ulong)plVar17 & 1) != 0) {
        return;
      }
    }
    pbVar1 = (byte *)(puVar11[0x28] + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar9) {
        *pbVar1 = unaff_w25;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    puVar19 = (undefined8 *)puVar11[0x28];
    lVar12 = puVar19[0x1d];
    if (lVar12 == 0) {
      pbVar2 = (byte *)(puVar19 + 0x17);
      puVar19 = (undefined8 *)puVar11[0x28];
      if ((*pbVar2 & 1) == 0) {
        lVar12 = puVar19[0x1d];
        goto LAB_10062d624;
      }
      param_1 = puVar19 + 0xb;
      FUN_1006716e8();
      *(undefined1 *)(puVar11 + 4) = 0;
      *(undefined1 *)(puVar11 + 0x10) = 0;
    }
    else {
LAB_10062d624:
      FUN_1006ba938(lVar12);
      FUN_100100fec(param_1);
      param_1 = puVar19 + 2;
      FUN_1006716e8();
      func_0x0001006baa0c();
      func_0x0001006baa30();
    }
    *pbVar1 = 0;
    func_0x0001006baa3c();
    if (*(char *)(puVar11 + 0x10) != '\x01') {
      func_0x0001006bac10();
      func_0x000107c33d8c();
      func_0x000107c33d70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(puVar11);
      return;
    }
    func_0x0001006baac8(puVar11[0x2c]);
    uVar8 = *(char *)(puVar11 + 0xf) == '\x01';
    if ((((bool)uVar8) && ((*(byte *)(puVar11 + 0xe) & 1) == 0)) &&
       ((*(byte *)(puVar11 + 0xd) & 1) == 0)) {
      plVar17 = (long *)puVar11[8];
      plVar18 = param_1;
      func_0x000107c33dcc(puVar11[0x2c]);
      (*extraout_x8_00)();
      uVar8 = plVar17 == plVar18;
      if ((long)plVar17 <= (long)plVar18) goto LAB_10062d6e0;
      lVar12 = puVar11[8];
      if ((param_1 != (long *)0x0) && (uVar8 = true, param_1[5] == lVar12)) goto LAB_10062d6f4;
      puVar16 = puVar11 + 4;
      func_0x000107c29eec();
      puVar14 = puVar16;
      func_0x000107c33eac();
      if (unaff_x26 != (undefined8 *)0x0) {
        puVar19 = (undefined8 *)((long)unaff_x26 + -1);
        uVar20 = (uint)unaff_x26;
        if (((ulong)unaff_x26 & (ulong)puVar19) == 0) {
          unaff_x24 = (undefined8 *)((ulong)(uVar20 - 1) & (ulong)puVar16);
        }
        else {
          unaff_x24 = puVar16;
          if (unaff_x26 <= puVar16) {
            uVar5 = 0;
            if (uVar20 != 0) {
              uVar5 = (uint)puVar16 / uVar20;
            }
            unaff_x24 = (undefined8 *)(ulong)((uint)puVar16 - uVar5 * uVar20);
          }
        }
        plVar18 = *(long **)(*(long *)(extraout_x8_01 + 0xb8) + (long)unaff_x24 * 8);
        plVar17 = (long *)0x0;
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              plVar17 = (long *)*plVar18;
              if (plVar17 == (long *)0x0) goto LAB_10062d75c;
              puVar13 = (undefined8 *)plVar17[1];
              plVar18 = plVar17;
              if (puVar13 != puVar16) break;
              func_0x000107c33e7c();
              if (((ulong)puVar14 & 1) != 0) {
                plVar17[5] = lVar12;
                goto LAB_10062d960;
              }
            }
            if (((ulong)unaff_x26 & (ulong)puVar19) == 0) {
              puVar13 = (undefined8 *)((ulong)puVar13 & (ulong)puVar19);
            }
            else if (unaff_x26 <= puVar13) {
              uVar15 = 0;
              if (unaff_x26 != (undefined8 *)0x0) {
                uVar15 = (ulong)puVar13 / (ulong)unaff_x26;
              }
              puVar13 = (undefined8 *)((long)puVar13 - uVar15 * (long)unaff_x26);
            }
          } while (puVar13 == unaff_x24);
        }
      }
LAB_10062d75c:
      func_0x000100555174();
      func_0x000107c33e18();
      FUN_10054f8dc();
      func_0x000107c33df8();
      if ((unaff_x26 == (undefined8 *)0x0) ||
         (uVar8 = param_3 * (float)unaff_x26 == param_2, param_3 * (float)unaff_x26 < param_2)) {
        func_0x000107c33ec0();
        bVar9 = unaff_x26 == (undefined8 *)0x3;
        func_0x000107c33e10();
        lVar12 = extraout_x8_02;
        if (bVar9) {
          unaff_x24 = (undefined8 *)0x2;
        }
        else if (((ulong)unaff_x24 & extraout_x9) != 0) {
          func_0x000107c60c44();
          lVar12 = puVar11[0x2c];
          puVar14 = unaff_x24;
        }
        unaff_x26 = *(undefined8 **)(lVar12 + 0xc0);
        bVar9 = unaff_x26 <= unaff_x24;
        if (bVar9 && unaff_x24 != unaff_x26) {
LAB_10062d7cc:
          if ((ulong)unaff_x24 >> 0x3d != 0) {
            func_0x000104bd35f4();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10062dab8);
            (*pcVar7)();
          }
          func_0x000107c60e20((long)unaff_x24 << 3);
          func_0x000107c33eb4();
          func_0x000107c29d94();
          plVar17[0x18] = (long)unaff_x24;
          lVar12 = plVar17[0x17];
          for (puVar14 = (undefined8 *)0x0; unaff_x24 != puVar14;
              puVar14 = (undefined8 *)((long)puVar14 + 1)) {
            *(undefined8 *)(lVar12 + (long)puVar14 * 8) = 0;
          }
          unaff_x26 = unaff_x24;
          if (*(long *)(puVar11[0x2c] + 200) != 0) {
            func_0x000107c33ea0();
            func_0x000107c33e9c();
            lVar12 = extraout_x8_03;
            uVar15 = extraout_x9_00;
            plVar17 = extraout_x10;
            puVar14 = extraout_x11;
            while (plVar18 = plVar17, plVar17 = (long *)*plVar18, plVar17 != (long *)0x0) {
              puVar13 = (undefined8 *)plVar17[1];
              if (((ulong)unaff_x24 & uVar15) == 0) {
                puVar13 = (undefined8 *)((ulong)puVar13 & uVar15);
              }
              else if (unaff_x24 <= puVar13) {
                uVar6 = 0;
                if (unaff_x24 != (undefined8 *)0x0) {
                  uVar6 = (ulong)puVar13 / (ulong)unaff_x24;
                }
                puVar13 = (undefined8 *)((long)puVar13 - uVar6 * (long)unaff_x24);
              }
              if (puVar13 != puVar14) {
                if (*(long *)(lVar12 + (long)puVar13 * 8) == 0) {
                  *(long **)(lVar12 + (long)puVar13 * 8) = plVar18;
                  puVar14 = puVar13;
                }
                else {
                  func_0x000107c33dfc();
                  lVar12 = extraout_x8_04;
                  uVar15 = extraout_x9_01;
                  plVar17 = extraout_x10_00;
                  puVar14 = extraout_x11_00;
                }
              }
            }
          }
        }
        else if (!bVar9) {
          func_0x000107c33e14();
          if ((bVar9) && (((ulong)unaff_x26 & (long)unaff_x26 - 1U) == 0)) {
            func_0x000107c33e3c();
          }
          else {
            func_0x000107c60c44();
          }
          if (unaff_x24 <= puVar14) {
            unaff_x24 = puVar14;
          }
          if (unaff_x24 < unaff_x26) {
            if (unaff_x24 != (undefined8 *)0x0) goto LAB_10062d7cc;
            func_0x000107c33eb4();
            func_0x000107c29d94();
            plVar17[0x18] = 0;
            unaff_x26 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c33eac();
          }
        }
        if (((ulong)unaff_x26 & (long)unaff_x26 - 1U) == 0) {
          uVar8 = true;
          unaff_x24 = (undefined8 *)((ulong)((int)unaff_x26 - 1) & (ulong)puVar16);
        }
        else {
          uVar8 = puVar16 == unaff_x26;
          unaff_x24 = puVar16;
          if (unaff_x26 <= puVar16) {
            uVar15 = 0;
            if (unaff_x26 != (undefined8 *)0x0) {
              uVar15 = (ulong)puVar16 / (ulong)unaff_x26;
            }
            unaff_x24 = (undefined8 *)((long)puVar16 - uVar15 * (long)unaff_x26);
          }
        }
      }
      puVar16 = *(undefined8 **)(*(long *)(puVar11[0x2c] + 0xb8) + (long)unaff_x24 * 8);
      if (puVar16 == (undefined8 *)0x0) {
        func_0x000107c33e4c();
        if (extraout_x9_02 != 0) {
          func_0x000107c33ec0();
          if ((bool)uVar8) {
            puVar16 = (undefined8 *)((ulong)extraout_x9_03 & extraout_x10_01);
          }
          else {
            puVar16 = extraout_x9_03;
            if (unaff_x26 <= extraout_x9_03) {
              uVar15 = 0;
              if (unaff_x26 != (undefined8 *)0x0) {
                uVar15 = (ulong)extraout_x9_03 / (ulong)unaff_x26;
              }
              puVar16 = (undefined8 *)((long)extraout_x9_03 - uVar15 * (long)unaff_x26);
            }
          }
          *(undefined8 **)(extraout_x8_05 + (long)puVar16 * 8) = puVar19;
        }
      }
      else {
        *puVar19 = *puVar16;
        *puVar16 = puVar19;
      }
      func_0x000107c33dbc();
LAB_10062d960:
      uVar8 = param_1 == (long *)0x0;
      bVar9 = true;
    }
    else {
LAB_10062d6e0:
      if (param_1 == (long *)0x0) {
LAB_10062d6f4:
        bVar9 = false;
      }
      else {
        func_0x000107c33e08();
        bVar9 = true;
      }
    }
    FUN_1006babb0();
    iVar10 = (int)puVar11 + 0x138;
    FUN_10002b838();
    func_0x0001006babd4();
    func_0x0001006babe0();
    func_0x0001006babe8();
    func_0x0001006babf4(*(undefined8 *)(*param_1 + 0x50));
    func_0x0001006bac00();
    func_0x0001006bac08();
    if (bVar9) {
      func_0x000107c33dac();
      (*extraout_x8_06)();
      param_1 = (long *)puVar11[0x2c];
      func_0x0001006bac08();
      func_0x000107c33e8c();
      func_0x000107c33ea8();
      if (((bool)uVar8) && (extraout_w9 != 0)) {
        func_0x000107c33e90();
        lVar12 = puVar11[0x2c];
        if ((iVar10 == 0) || (puVar11[0x14] != *(long *)(lVar12 + 0xa8))) {
LAB_10062da00:
          cVar4 = *(char *)(lVar12 + 0xb0);
          if (cVar4 == *(char *)(puVar11 + 0x15)) {
            if (cVar4 != '\0') {
              func_0x000107c33e60();
              *(undefined8 *)(puVar11[0x2c] + 0xa8) = puVar11[0x14];
            }
          }
          else if (cVar4 == '\0') {
            func_0x000107c33e5c();
            *(byte *)(puVar11[0x2c] + 0xb0) = unaff_w25;
          }
          else {
            func_0x000107c33e00();
          }
          lVar12 = puVar11[0x2c];
          if (*(char *)(lVar12 + 0xb0) == '\x01') {
            func_0x000107c33e40();
            lVar12 = puVar11[0x2c];
          }
          func_0x000107c33dc4(lVar12);
          (*extraout_x8_08)();
          func_0x000107c33de0();
          func_0x0001005ed540(param_1);
          FUN_10054ed98(puVar11 + 0x27);
          func_0x000107c33e04();
          func_0x00010054ef4c(puVar11 + 0x27);
        }
      }
      else {
        lVar12 = extraout_x8_07;
        if (extraout_w9 != extraout_w10_00) goto LAB_10062da00;
      }
      func_0x000107c33e38();
    }
    func_0x0001006bac10();
  } while( true );
}



/* Entry: 10062db58; end: 10062db7b;  */

void FUN_10062db58(void)

{
  return;
}



/* Entry: 10062db7c; end: 10062dcef;  */

void FUN_10062db7c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  func_0x0001005c7bb0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_10074daac(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uStack_98);
  FUN_10074dacc(uStack_68,uVar1,uVar2,uVar3,uVar4,uVar5,uStack_98);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 10062dcf0; end: 10062dcf7;  */

void FUN_10062dcf0(undefined8 *param_1)

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



/* Entry: 10062dcf8; end: 10062dd4b;  */

void FUN_10062dcf8(undefined8 *param_1)

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



/* Entry: 10062dd4c; end: 10062dd53;  */

void FUN_10062dd4c(long *param_1)

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
  func_0x0001005c6f60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x0001006e2834(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_1006e28b0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_1006e28d8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10062dd54; end: 10062de37;  */

void FUN_10062dd54(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  func_0x0001005c6f60();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x0001006e2834(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1006e28b0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1006e28d8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10062de38; end: 10062de3f;  */

void FUN_10062de38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10062de40; end: 10062de93;  */

void FUN_10062de40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x150);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10062de94; end: 10062f783;  */

void FUN_10062de94(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100083b20(&uStack_1a0);
  FUN_100083b20(&uStack_1a8);
  func_0x0001005c6ee0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  *(undefined8 *)(param_2 + 0x50) = uStack_98;
  *(undefined8 *)(param_2 + 0x58) = uStack_a0;
  *(undefined8 *)(param_2 + 0x60) = uStack_a8;
  *(undefined8 *)(param_2 + 0x68) = uStack_b0;
  *(undefined8 *)(param_2 + 0x70) = uStack_b8;
  *(undefined8 *)(param_2 + 0x78) = uStack_c0;
  *(undefined8 *)(param_2 + 0x80) = uStack_c8;
  *(undefined8 *)(param_2 + 0x88) = uStack_d0;
  *(undefined8 *)(param_2 + 0x90) = uStack_d8;
  *(undefined8 *)(param_2 + 0x98) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xb8) = uStack_100;
  *(undefined8 *)(param_2 + 0xc0) = uStack_108;
  *(undefined8 *)(param_2 + 200) = uStack_110;
  *(undefined8 *)(param_2 + 0xd0) = uStack_118;
  *(undefined8 *)(param_2 + 0xd8) = uStack_120;
  *(undefined8 *)(param_2 + 0xe0) = uStack_128;
  *(undefined8 *)(param_2 + 0xe8) = uStack_130;
  *(undefined8 *)(param_2 + 0xf0) = uStack_138;
  *(undefined8 *)(param_2 + 0xf8) = uStack_140;
  *(undefined8 *)(param_2 + 0x100) = uStack_148;
  *(undefined8 *)(param_2 + 0x108) = uStack_150;
  *(undefined8 *)(param_2 + 0x110) = uStack_158;
  *(undefined8 *)(param_2 + 0x118) = uStack_160;
  *(undefined8 *)(param_2 + 0x120) = uStack_168;
  *(undefined8 *)(param_2 + 0x128) = uStack_170;
  *(undefined8 *)(param_2 + 0x130) = uStack_178;
  *(undefined8 *)(param_2 + 0x138) = uStack_180;
  *(undefined8 *)(param_2 + 0x140) = uStack_188;
  *(undefined8 *)(param_2 + 0x148) = uStack_190;
  FUN_1000285a8(0x112ed9688,&UNK_10db05e50);
  func_0x000107c610f8();
  uVar18 = uStack_78;
  func_0x000107c61174();
  uVar20 = uStack_80;
  func_0x000107c61174();
  uVar21 = uStack_88;
  func_0x000107c61174();
  uVar22 = uStack_90;
  func_0x000107c61174();
  uVar1 = uStack_98;
  func_0x000107c61174();
  uVar2 = uStack_a0;
  func_0x000107c61174();
  uVar3 = uStack_a8;
  func_0x000107c61174();
  uVar4 = uStack_b0;
  func_0x000107c61174();
  uVar5 = uStack_b8;
  func_0x000107c61174();
  uVar6 = uStack_c0;
  func_0x000107c61174();
  uVar7 = uStack_c8;
  func_0x000107c61174();
  uVar8 = uStack_d0;
  func_0x000107c61174();
  uVar9 = uStack_d8;
  func_0x000107c61174();
  uVar10 = uStack_e0;
  func_0x000107c61174();
  uVar11 = uStack_e8;
  func_0x000107c61174();
  uVar12 = uStack_f0;
  func_0x000107c61174();
  uVar13 = uStack_f8;
  func_0x000107c61174();
  uVar14 = uStack_100;
  func_0x000107c61174();
  uVar23 = uStack_108;
  func_0x000107c61174();
  uVar24 = uStack_110;
  func_0x000107c61174();
  uVar25 = uStack_118;
  func_0x000107c61174();
  uVar26 = uStack_120;
  func_0x000107c61174();
  uVar27 = uStack_128;
  func_0x000107c61174();
  uVar28 = uStack_130;
  func_0x000107c61174();
  uVar29 = uStack_138;
  func_0x000107c61174();
  uVar30 = uStack_140;
  func_0x000107c61174();
  uVar31 = uStack_148;
  func_0x000107c61174();
  uVar32 = uStack_150;
  func_0x000107c61174();
  uVar33 = uStack_158;
  func_0x000107c61174();
  uVar34 = uStack_160;
  func_0x000107c61174();
  uVar35 = uStack_168;
  func_0x000107c61174();
  uVar36 = uStack_170;
  func_0x000107c61174();
  uVar37 = uStack_178;
  func_0x000107c61174();
  uVar38 = uStack_180;
  func_0x000107c61174();
  uVar39 = uStack_188;
  func_0x000107c61174();
  uVar40 = uStack_190;
  func_0x000107c61174();
  uVar17 = uStack_198;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar15;
  FUN_1000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar17 = uStack_1a0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar15 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x20) = puVar15;
  FUN_1000285a8(0x112ed9690,&UNK_10db05e60);
  func_0x000107c610f8();
  uVar17 = uStack_1a8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x28) = puVar15;
  puVar15 = PTR_PTR_1126abcd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1dfd0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar19);
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef38480);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar43 = 0xd000000000000014;
  uVar17 = uVar43;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f03f020);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar44 = 0xd000000000000010;
  uVar17 = uVar44;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef11140);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar41 = 0xd000000000000012;
  uVar17 = uVar41;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef24830);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000011;
  uVar17 = uVar42;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0dba00);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef244e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef202e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef383e0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef246b0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar41);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0dba20);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef30960);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0dba40);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar43);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0dba60);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef35740);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef20290);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar44);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0dba80);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef1e070);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar36);
  func_0x000107c61174();
  uVar19 = 0x536e496b63656863;
  func_0x000107c5fadc(0x536e496b63656863,0xef73656369767265);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar19);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar19 = 0x69767265536f6375;
  func_0x000107c5fadc(0x69767265536f6375,0xeb00000000736563);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar19);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef35db0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0dbaa0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0dbac0);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar42);
  uVar17 = *(undefined8 *)(param_2 + 0x10);
  uVar19 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar42 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1e140);
  func_0x000107c5a49c(uVar17);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar42);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  uVar42 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0dbae0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar17 = uVar19;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61574(uStack_198);
  func_0x000107c61574(uStack_1a0);
  func_0x000107c61574(uStack_1a8);
  *(undefined8 *)(param_2 + 0x150) = uVar17;
  *param_1 = param_2;
  return;
}



/* Entry: 10062f784; end: 10062f7ff;  */

void FUN_10062f784(void)

{
  long unaff_x20;
  
  FUN_10062de94(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148));
  return;
}



/* Entry: 10062f800; end: 10062f807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062f800(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10036d680();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11302bc08) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10062f808; end: 10062f873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062f808(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10036d680();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11302bc08) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10062f874; end: 10062f8c7;  */

void FUN_10062f874(void)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x160) + 0x70);
  *(long *)(unaff_x19 + 0x138) = lVar1 + 0x58;
  *(long *)(unaff_x19 + 0x140) = lVar1;
  return;
}



/* Entry: 10062f8c8; end: 10062fe97;  */

/* WARNING: Possible PIC construction at 0x00010062fc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fcc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fdd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062fe70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010062fe64) */
/* WARNING: Removing unreachable block (ram,0x00010062fe54) */
/* WARNING: Removing unreachable block (ram,0x00010062fe44) */
/* WARNING: Removing unreachable block (ram,0x00010062fe34) */
/* WARNING: Removing unreachable block (ram,0x00010062fe24) */
/* WARNING: Removing unreachable block (ram,0x00010062fe14) */
/* WARNING: Removing unreachable block (ram,0x00010062fe04) */
/* WARNING: Removing unreachable block (ram,0x00010062fdf4) */
/* WARNING: Removing unreachable block (ram,0x00010062fde4) */
/* WARNING: Removing unreachable block (ram,0x00010062fdd4) */
/* WARNING: Removing unreachable block (ram,0x00010062fdc4) */
/* WARNING: Removing unreachable block (ram,0x00010062fdb4) */
/* WARNING: Removing unreachable block (ram,0x00010062fda4) */
/* WARNING: Removing unreachable block (ram,0x00010062fd94) */
/* WARNING: Removing unreachable block (ram,0x00010062fd84) */
/* WARNING: Removing unreachable block (ram,0x00010062fd74) */
/* WARNING: Removing unreachable block (ram,0x00010062fd64) */
/* WARNING: Removing unreachable block (ram,0x00010062fd54) */
/* WARNING: Removing unreachable block (ram,0x00010062fd44) */
/* WARNING: Removing unreachable block (ram,0x00010062fd34) */
/* WARNING: Removing unreachable block (ram,0x00010062fd24) */
/* WARNING: Removing unreachable block (ram,0x00010062fd14) */
/* WARNING: Removing unreachable block (ram,0x00010062fd04) */
/* WARNING: Removing unreachable block (ram,0x00010062fcf4) */
/* WARNING: Removing unreachable block (ram,0x00010062fce4) */
/* WARNING: Removing unreachable block (ram,0x00010062fcd4) */
/* WARNING: Removing unreachable block (ram,0x00010062fcc4) */
/* WARNING: Removing unreachable block (ram,0x00010062fcb4) */
/* WARNING: Removing unreachable block (ram,0x00010062fca4) */
/* WARNING: Removing unreachable block (ram,0x00010062fc94) */
/* WARNING: Removing unreachable block (ram,0x00010062fc84) */
/* WARNING: Removing unreachable block (ram,0x00010062fc74) */
/* WARNING: Removing unreachable block (ram,0x00010062fc64) */
/* WARNING: Removing unreachable block (ram,0x00010062fc54) */
/* WARNING: Removing unreachable block (ram,0x00010062fc44) */
/* WARNING: Removing unreachable block (ram,0x00010062fe74) */

void FUN_10062f8c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  
  puVar1 = &UNK_1106563e8;
  func_0x000107c613fc(&UNK_1106563e8,0x250,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  uVar2 = 0x112f69030;
  FUN_1000285a8(0x112f69030,&UNK_10dbc6520);
  func_0x000107c613fc();
  puVar3 = &UNK_10343f0fc;
  FUN_1000841f8(&UNK_10343f0fc,puVar1,uVar2);
  FUN_100084214(&UNK_10dbc64f0,0x28,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10062fe98; end: 10062fe9b;  */

void FUN_10062fe98(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10062fe9c; end: 10062ff7b;  */

void FUN_10062fe9c(void)

{
  long unaff_x20;
  
  FUN_10062f8c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10062ff7c; end: 10062ff87;  */

void FUN_10062ff7c(void)

{
  return;
}



/* Entry: 10062ff88; end: 10063007f;  */

void FUN_10062ff88(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  FUN_10062ff7c();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_100630090(unaff_x19 + 0x38);
    func_0x0001006304ec();
    do {
      FUN_100554eec();
    } while (extraout_w10 != 0);
    func_0x0001005ee40c(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x0001005ee418();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x0001005ee494();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x0001005ee434();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c31f8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001005ee4a0();
          if ((bool)in_ZR) {
            func_0x000107c31f3c();
            func_0x000107c31f24();
            func_0x000107c31f14();
          }
          func_0x0001005ee4b4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c32028();
  func_0x000107c31fac();
  func_0x000107c31fbc();
  func_0x000107c31f74();
  func_0x000107c31f60();
  func_0x000107c31fd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100630080; end: 10063008f;  */

void FUN_100630080(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x38);
  return;
}



/* Entry: 100630090; end: 10063018b;  */

void FUN_100630090(long *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  
  FUN_100630080();
  plVar2 = param_1;
  FUN_1005ee3f8(&UNK_108677f44);
  func_0x0001005ee400();
  FUN_10063018c();
  FUN_100630198();
  func_0x0001006304b4();
  do {
    FUN_100554eec();
  } while (extraout_w10 != 0);
  func_0x0001006304c4();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x0001006304d4();
    if (*plVar2 == 0) {
      FUN_10054ef74();
    }
    func_0x0001005ee494();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x0001005ee434();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c31f8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001005ee4a0();
        if ((bool)in_ZR) {
          func_0x000107c31f3c();
          func_0x000107c31f24();
          func_0x000107c31f14();
        }
        func_0x0001005ee4b4();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c31f88();
  func_0x000107c31f68();
  func_0x000107c31f64();
  func_0x000107c31f74();
  func_0x000107c31f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10063018c; end: 100630197;  */

void FUN_10063018c(void)

{
  return;
}



/* Entry: 100630198; end: 1006302d7;  */

void FUN_100630198(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  lVar2 = 0x38;
  func_0x000107c60e20(0x38);
  FUN_1005ee3f8(&UNK_108677e9c);
  FUN_1006302d8();
  FUN_1006302e4(lVar2 + 0x28);
  func_0x0001006304b4();
  do {
    FUN_100554eec();
  } while (extraout_w10 != 0);
  func_0x0001006304c4();
  if ((extraout_w8 >> 1 & 1) == 0) {
    func_0x0001006304d4();
    if (*plVar4 == 0) {
      FUN_10054ef74();
    }
    func_0x0001005ee494();
    plVar4 = extraout_x8;
    do {
      if (*plVar4 == 0) {
        func_0x0001005ee434();
        plVar4 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c31f8c();
        plVar4 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001005ee4a0();
        if ((bool)in_ZR) {
          func_0x000107c31f3c();
          func_0x000107c31f24();
          func_0x000107c31f14();
        }
        func_0x0001005ee4b4();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000107c31f88();
  func_0x000107c31f68();
  func_0x000107c31f64();
  func_0x000107c31f74();
  func_0x000107c31f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1006302d8; end: 1006302e3;  */

void FUN_1006302d8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *unaff_x20 = lVar4;
  func_0x00010054ee5c();
  return;
}



/* Entry: 1006302e4; end: 10063048f;  */

void FUN_1006302e4(long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long extraout_x8;
  long lVar9;
  int extraout_w10;
  long lVar10;
  
  plVar6 = (long *)0x108;
  func_0x000107c60e20();
  *plVar6 = (long)&UNK_108677d04;
  plVar6[1] = (long)&UNK_108677e74;
  plVar6[0x1f] = param_2;
  plVar7 = plVar6;
  FUN_100554fd8();
  func_0x0001005ee400();
  func_0x0001005ee418();
  do {
    FUN_100630490();
    if (extraout_x8 != 0) {
      do {
        FUN_100554eec();
      } while (extraout_w10 != 0);
    }
    plVar8 = plVar6 + 0xb;
    func_0x00010061e2f8();
    if (((ulong)plVar8 & 1) == 0) {
      *(undefined1 *)(plVar6 + 0x20) = 0;
      param_1 = plVar6[0xb];
      if (*plVar7 == 0) {
        FUN_10054ef74();
      }
      func_0x0001006304a4();
      if (((ulong)plVar8 & 1) != 0) {
        return;
      }
    }
    pbVar1 = (byte *)(plVar6[0xc] + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar5) {
        *pbVar1 = 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while ((cVar4 != '\0') || ((bVar3 & 1) != 0));
    lVar10 = plVar6[0xc];
    lVar9 = *(long *)(lVar10 + 0xe8);
    if (lVar9 == 0) {
      pbVar2 = (byte *)(lVar10 + 0xb8);
      lVar10 = plVar6[0xc];
      if ((*pbVar2 & 1) == 0) {
        lVar9 = *(long *)(lVar10 + 0xe8);
        goto LAB_1006303c4;
      }
      FUN_1006716e8(lVar10 + 0x58);
      *(undefined1 *)(plVar6 + 0x12) = 0;
      *(undefined1 *)(plVar6 + 0x17) = 0;
    }
    else {
LAB_1006303c4:
      func_0x000107c31fa4(lVar9);
      func_0x000107c28a40(param_1);
      FUN_1006716e8(lVar10 + 0x10);
      func_0x000107c32034();
      *(undefined1 *)(plVar6 + 0x17) = 1;
      func_0x000107c31fb8();
    }
    *pbVar1 = 0;
    func_0x000107c32008();
    if ((char)plVar6[0x17] != '\x01') {
      func_0x000107c31fdc();
      func_0x000107c31f74();
      func_0x000107c31f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar6);
      return;
    }
    func_0x000107c31fcc();
    func_0x000107c32000();
    func_0x000107c32030();
    func_0x000107c3202c();
    func_0x000107c31ffc();
    func_0x000107c31fe4();
    func_0x000107c28a5c(plVar6 + 0xb);
    func_0x000107c32004();
    FUN_10054ebfc(plVar6 + 0x1e);
    func_0x000107c31fdc();
  } while( true );
}



/* Entry: 100630490; end: 100630507;  */

void FUN_100630490(void)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0xf8) + 0x40);
  *(long *)(unaff_x19 + 0x58) = lVar1 + 0x58;
  *(long *)(unaff_x19 + 0x60) = lVar1;
  return;
}



/* Entry: 100630508; end: 10063060f;  */

void FUN_100630508(void)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  ulong extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long unaff_x19;
  
  func_0x0001006304fc();
  if ((extraout_x8 & 1) == 0) {
    plVar2 = (long *)(unaff_x19 + 0x20);
    FUN_100630620(unaff_x19 + 0x38);
    *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x38);
    do {
      func_0x000100633778();
    } while (extraout_w10 != 0);
    func_0x000100633810(*(undefined8 *)(unaff_x19 + 0x30));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x40) = 1;
      func_0x000100633754();
      if (*plVar2 == 0) {
        FUN_10054ef74();
      }
      func_0x0001006337b4();
      plVar2 = extraout_x8_00;
      do {
        if (*plVar2 == 0) {
          func_0x0001006337c0();
          plVar2 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000107c32d8c();
          plVar2 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x0001006337d0();
          if ((bool)in_ZR) {
            func_0x000107c32d20();
            func_0x000107c32d08();
            func_0x000107c32cfc();
          }
          func_0x0001006337e4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  FUN_1005f9618(unaff_x19 + 0x30);
  func_0x000100871d70();
  func_0x000107c32d74();
  func_0x000100871d40();
  func_0x000100871d48();
  FUN_1005efe48(unaff_x19 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100630610; end: 10063061f;  */

void FUN_100630610(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x38);
  return;
}



/* Entry: 100630620; end: 10063072f;  */

void FUN_100630620(undefined8 *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar2;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long *unaff_x20;
  
  FUN_100630610();
  *param_1 = &UNK_108704e90;
  param_1[1] = &UNK_108704ee0;
  FUN_10054f3f8(param_1 + 2);
  FUN_100630730();
  FUN_10063073c(param_1 + 5);
  func_0x000100633798(param_1[5]);
  do {
    func_0x000100633778();
  } while (extraout_w10 != 0);
  func_0x0001006337a4();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x000100633754();
    if (*unaff_x20 == 0) {
      FUN_10054ef74();
    }
    func_0x0001006337b4();
    plVar2 = extraout_x8;
    do {
      if (*plVar2 == 0) {
        func_0x0001006337c0();
        plVar2 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar3 = extraout_w11_00;
      }
      else {
        func_0x000107c32d8c();
        plVar2 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar3 = extraout_w11;
      }
      if ((uVar3 & 1) != 0) {
        func_0x0001006337d0();
        if ((bool)in_ZR) {
          func_0x000107c32d20();
          func_0x000107c32d08();
          func_0x000107c32cfc();
        }
        func_0x0001006337e4();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000100871d60();
  func_0x000100871d68();
  func_0x000107c32d50();
  func_0x000100871d40();
  func_0x000100871d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 100630730; end: 10063073b;  */

void FUN_100630730(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x21;
  
  lVar4 = *(long *)(unaff_x19 + 0x10);
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *unaff_x21 = lVar4;
  func_0x00010054ee5c();
  return;
}



/* Entry: 10063073c; end: 1006309eb;  */

void FUN_10063073c(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar5;
  long *plVar6;
  undefined4 uStack_238;
  undefined1 uStack_234;
  int iStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [24];
  undefined1 uStack_200;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [200];
  
  param_1 = (long *)*param_1;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  *puVar4 = &UNK_108704de4;
  puVar4[1] = &UNK_108704e6c;
  FUN_10054f3f8(puVar4 + 2);
  FUN_100630730();
  uStack_238 = 0;
  uStack_234 = 0;
  iVar3 = (int)param_1 + 0x60;
  FUN_1006309ec();
  if (iVar3 < 1) {
    iStack_230 = 100;
  }
  else {
    iStack_230 = (int)param_1 + 0x60;
    FUN_1006309ec();
  }
  uStack_200 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  auStack_218[0] = 0;
  FUN_100630a14(param_1 + 0x14,&uStack_238);
  FUN_1005fce88(auStack_218);
  FUN_100630a50(param_1);
  uVar2 = 0;
  if (((char)param_1[0x1c] == '\x01') &&
     (uVar2 = *(char *)((long)param_1 + 0xa4) == '\x01', (bool)uVar2)) {
    FUN_100632844(auStack_108,3,1);
    plVar6 = (long *)param_1[8];
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    FUN_100632b18(&uStack_238,auStack_108);
    (**(code **)(*plVar6 + 0x10))
              (plVar6,&uStack_120,&uStack_138,&uStack_150,&uStack_168,&uStack_238);
    FUN_100633354(&uStack_238);
    func_0x0001006333b4(&uStack_168);
    func_0x000100633494(&uStack_150);
    func_0x000100633408(&uStack_138);
    func_0x00010063350c(&uStack_120);
    func_0x000100633328(auStack_108);
  }
  FUN_100633538(puVar4 + 5);
  func_0x000100633798(puVar4[5]);
  do {
    func_0x000100633778();
  } while (extraout_w10 != 0);
  func_0x0001006337a4();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 6) = 0;
    func_0x000100633754();
    if (*param_1 == 0) {
      FUN_10054ef74();
    }
    func_0x0001006337b4();
    plVar6 = extraout_x8;
    do {
      if (*plVar6 == 0) {
        func_0x0001006337c0();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar5 = extraout_w11_00;
      }
      else {
        func_0x000107c32d8c();
        plVar6 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar5 = extraout_w11;
      }
      if ((uVar5 & 1) != 0) {
        func_0x0001006337d0();
        if ((bool)uVar2) {
          func_0x000107c32d20();
          func_0x000107c32d08();
          func_0x000107c32cfc();
        }
        func_0x0001006337e4();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000100871d60();
  func_0x000100871d68();
  func_0x000107c32d50();
  func_0x000100871d40();
  func_0x000100871d48();
  func_0x000107c32d58();
  return;
}



/* Entry: 1006309ec; end: 100630a13;  */

long * FUN_1006309ec(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100575164(param_1,0x98);
    return param_1;
  }
  return (long *)0xffffffff;
}



/* Entry: 100630a14; end: 100630a3b;  */

undefined8 * FUN_100630a14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  FUN_1005fcf54(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 100630a3c; end: 100630a4f;  */

void FUN_100630a3c(void)

{
  return;
}



/* Entry: 100630a50; end: 100630b73;  */

void FUN_100630a50(long param_1,uint param_2)

{
  int iVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  char cStack_88;
  undefined1 auStack_80 [40];
  char cStack_58;
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  
  auStack_50[0] = 0;
  uStack_38 = 0;
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100630a44(*(undefined8 *)(param_1 + 0x30));
    (*extraout_x8)();
    func_0x000100630b7c();
    FUN_100630b8c(uVar2);
    *(byte *)(param_1 + 0xa4) = (byte)param_2 & 1;
    if ((param_2 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x000100630a44(*(undefined8 *)(param_1 + 0x30));
      (*extraout_x8_00)();
      func_0x000100630b7c();
      FUN_10061ea5c(auStack_b0,uVar2);
      uVar2 = 0x7ffffffffffffffe;
      if (cStack_58 == '\x01') {
        uVar2 = uStack_90;
        if (cStack_88 == '\0') {
          uVar2 = 0x7ffffffffffffffe;
        }
        func_0x000100620418(auStack_50,auStack_80);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x000100630a44();
        (*extraout_x8_01)();
        if (2 < iVar1 - 1U) {
          iVar1 = 0;
        }
        func_0x000107c29f54(uVar3,uVar2,iVar1);
        *(long *)(param_1 + 0xb0) = (long)(int)uVar3;
      }
      *(undefined8 *)(param_1 + 0xb8) = uVar2;
      func_0x000100620418(param_1 + 0xc0,auStack_50);
      FUN_10061fd34(auStack_b0);
    }
  }
  FUN_1005fce88(auStack_50);
  return;
}



/* Entry: 100630b74; end: 100630b8b;  */

undefined4 FUN_100630b74(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



/* Entry: 100630b8c; end: 100630c27;  */

undefined1  [16] FUN_100630b8c(void)

{
  undefined1 in_ZR;
  undefined1 auVar1 [16];
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  func_0x0001005e793c();
  FUN_100630c28();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  func_0x000100630c34(auStack_90);
  FUN_100630c40();
  FUN_100631e3c(auStack_90);
  if (cStack_48 == '\0') {
    uStack_50 = 0;
    uStack_58 = 0;
  }
  auVar1._8_8_ = uStack_50;
  auVar1._0_8_ = uStack_58;
  return auVar1;
}



/* Entry: 100630c28; end: 100630c3f;  */

void FUN_100630c28(void)

{
  return;
}



/* Entry: 100630c40; end: 100630e27;  */

void FUN_100630c40(undefined8 *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 in_ZR;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [28];
  int iStack_44;
  
  FUN_1005f3d5c();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c34214(auStack_60);
      func_0x000107c34370(&uStack_78);
      FUN_10054f908();
      func_0x000107c34324();
      uVar4 = uStack_68;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x000107c345f0(uVar4);
      func_0x000107c34394();
      func_0x000107c344e4();
      func_0x000107c345cc();
      func_0x000107c34514();
    }
  }
  FUN_10061ec34();
  if ((int)param_1 == 0) {
    FUN_100630e28();
    func_0x0001005f5a7c();
    FUN_100631ce4();
    func_0x000100631e74();
  }
  else {
    uVar3 = *(ulong *)(unaff_x20 + 0xb0);
    if ((uVar3 != 0) && (*(long *)(unaff_x20 + 0xc0) != 0)) {
      uVar5 = (ulong)iStack_44;
      uVar6 = uVar3 - 1;
      if ((uVar3 & uVar6) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      else {
        uVar7 = uVar5;
        if (uVar3 <= uVar5) {
          uVar7 = 0;
          if (uVar3 != 0) {
            uVar7 = uVar5 / uVar3;
          }
          uVar7 = uVar5 - uVar7 * uVar3;
        }
      }
      plVar8 = *(long **)(*(long *)(unaff_x20 + 0xa8) + uVar7 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_100630d64;
            uVar9 = plVar8[1];
            if (uVar9 != uVar5) break;
            if (*(int *)(plVar8 + 2) == iStack_44) {
              FUN_1006323dc();
              uVar1 = *(undefined1 *)(param_1 + 2);
              uVar4 = *param_1;
              unaff_x19[1] = param_1[1];
              *unaff_x19 = uVar4;
              *(undefined1 *)(unaff_x19 + 2) = uVar1;
              FUN_100606fd8(unaff_x19 + 3,param_1 + 3);
              uVar4 = param_1[7];
              unaff_x19[8] = param_1[8];
              unaff_x19[7] = uVar4;
              *(undefined1 *)(unaff_x19 + 9) = 1;
              return;
            }
          }
          if ((uVar3 & uVar6) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar3 <= uVar9) {
            uVar2 = 0;
            if (uVar3 != 0) {
              uVar2 = uVar9 / uVar3;
            }
            uVar9 = uVar9 - uVar2 * uVar3;
          }
        } while (uVar9 == uVar7);
      }
    }
LAB_100630d64:
    FUN_100630e28();
    func_0x0001005f5a7c();
    FUN_100631ce4();
    func_0x000100631e74();
    if (*(char *)(unaff_x19 + 9) == '\x01') {
      FUN_1006323dc();
      uVar10 = unaff_x19[1];
      uVar4 = *unaff_x19;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_x19 + 2);
      param_1[1] = uVar10;
      *param_1 = uVar4;
      func_0x000100620418(param_1 + 3,unaff_x19 + 3);
      uVar4 = unaff_x19[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(unaff_x19 + 8);
      param_1[7] = uVar4;
    }
  }
  return;
}



/* Entry: 100630e28; end: 100630e3f;  */

undefined1  [16] FUN_100630e28(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  undefined ***pppuVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *extraout_x9;
  long extraout_x10;
  long *unaff_x19;
  long *unaff_x20;
  undefined ***pppuVar14;
  long unaff_x29;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined **ppuStack_d8;
  long *plStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [32];
  long *plStack_a0;
  undefined1 uStack_98;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar11 = unaff_x20[4];
  lVar2 = lVar11 + 0x36f0;
  lVar9 = lVar2;
  FUN_100557ab8(&stack0x00000008,lVar2,unaff_x29 + -0x34);
  FUN_10061eeb0();
  pppuVar14 = (undefined ***)(lVar11 + 0x3750);
  puVar13 = (undefined8 *)(lVar11 + 0x3758);
  do {
    uVar4 = (undefined ***)*puVar13 == pppuVar14;
    if ((bool)uVar4) {
      func_0x0001005ec6c0();
      lVar9 = *(long *)(lVar11 + 0x3730);
      FUN_1005ecd30();
      ppuStack_d8 = &PTR_DAT_110a7de48;
      lStack_50 = 0;
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      unaff_x20[1] = (long)pppuVar14;
      unaff_x20[2] = (long)&PTR_DAT_110a7de48;
      unaff_x20[0x13] = lStack_50;
      lVar12 = *(long *)(lVar11 + 0x3750);
      *unaff_x20 = lVar12;
      *(long **)(lVar12 + 8) = unaff_x20;
      *(long **)(lVar11 + 0x3750) = unaff_x20;
      *(long *)(lVar11 + 0x3760) = *(long *)(lVar11 + 0x3760) + 1;
      func_0x0001005edc3c();
      goto LAB_100630f04;
    }
    func_0x0001005ed218();
    puVar13 = extraout_x9;
  } while (extraout_x10 != 0);
  uVar4 = pppuVar14 == (undefined ***)*extraout_x9;
  if (!(bool)uVar4) {
    func_0x000107c34250();
    func_0x000107c3452c();
  }
LAB_100630f04:
  plVar1 = (long *)(*(long *)(lVar11 + 0x3750) + 0x10);
  *(long *)(*(long *)(lVar11 + 0x3750) + 0x98) = lVar2;
  func_0x00010061eec8();
  FUN_100631054();
  FUN_1005ef160();
  *unaff_x19 = (long)plVar1;
  unaff_x19[1] = (long)plVar1;
  plVar8 = unaff_x19 + 2;
  *(undefined1 *)plVar8 = 0;
  *(undefined1 *)(unaff_x19 + 0xb) = 0;
  plVar5 = plVar1;
  FUN_10054c3a4();
  if ((int)plVar5 == 0) {
    func_0x0001005ed474(uStack_48);
    if ((bool)uVar4) {
      if ((char)unaff_x19[0xb] == '\x01') {
        plVar8 = unaff_x19 + 5;
        FUN_1005fce88(plVar8);
        *(undefined1 *)(unaff_x19 + 0xb) = 0;
      }
      auVar17._8_8_ = lVar9;
      auVar17._0_8_ = plVar8;
      return auVar17;
    }
  }
  else {
    unaff_x19 = plVar1;
    FUN_10054c7ec();
    uStack_c8 = (undefined1)lVar9;
    plVar5 = unaff_x19;
    FUN_1005ede54();
    ppuStack_d8 = (undefined **)CONCAT44(ppuStack_d8._4_4_,(int)plVar5);
    FUN_1006317e8();
    FUN_1005f9230();
    pppuVar14 = &ppuStack_d8;
    uStack_98 = 2;
    plVar6 = unaff_x19;
    plStack_d0 = plVar5;
    FUN_10061f61c(auStack_c0);
    FUN_100631c80();
    FUN_1005f9230();
    pppuVar10 = &ppuStack_d8;
    plStack_a0 = plVar6;
    FUN_100631cc8(plVar8,pppuVar10);
    puVar7 = auStack_c0;
    FUN_1005fce88(puVar7);
    func_0x0001005ed474(uStack_48);
    if ((bool)uVar4) {
      auVar15._8_8_ = pppuVar10;
      auVar15._0_8_ = puVar7;
      return auVar15;
    }
  }
  func_0x000107c60e78();
  func_0x000107c34540();
  FUN_1005fce88(pppuVar14 + 3);
  FUN_100631e3c(plVar8);
  if ((int)lVar2 == 1) {
    func_0x000107c344ec();
    FUN_10054cac4(plVar1);
    func_0x000107c60e50();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100631034);
    (*pcVar3)();
  }
  func_0x000107c34360();
  func_0x000104bd46a0(unaff_x19);
  auVar16._8_8_ = plVar8;
  auVar16._0_8_ = plVar1;
  return auVar16;
}



/* Entry: 100630e40; end: 100631053;  */

undefined1  [16] FUN_100630e40(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  undefined ***pppuVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x9;
  long extraout_x10;
  long *unaff_x19;
  long *unaff_x20;
  undefined ***pppuVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined **ppuStack_d8;
  long *plStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [32];
  long *plStack_a0;
  undefined1 uStack_98;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar8 = param_2;
  FUN_100557ab8();
  FUN_10061eeb0();
  pppuVar12 = (undefined ***)(param_2 + 0x60);
  puVar11 = (undefined8 *)(param_2 + 0x68);
  do {
    uVar3 = (undefined ***)*puVar11 == pppuVar12;
    if ((bool)uVar3) {
      func_0x0001005ec6c0();
      lVar8 = *(long *)(param_2 + 0x40);
      FUN_1005ecd30();
      ppuStack_d8 = &PTR_DAT_110a7de48;
      lStack_50 = 0;
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      unaff_x20[1] = (long)pppuVar12;
      unaff_x20[2] = (long)&PTR_DAT_110a7de48;
      unaff_x20[0x13] = lStack_50;
      lVar10 = *(long *)(param_2 + 0x60);
      *unaff_x20 = lVar10;
      *(long **)(lVar10 + 8) = unaff_x20;
      *(long **)(param_2 + 0x60) = unaff_x20;
      *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x70) + 1;
      func_0x0001005edc3c();
      goto LAB_100630f04;
    }
    func_0x0001005ed218();
    puVar11 = extraout_x9;
  } while (extraout_x10 != 0);
  uVar3 = pppuVar12 == (undefined ***)*extraout_x9;
  if (!(bool)uVar3) {
    func_0x000107c34250();
    func_0x000107c3452c();
  }
LAB_100630f04:
  plVar1 = (long *)(*(long *)(param_2 + 0x60) + 0x10);
  *(long *)(*(long *)(param_2 + 0x60) + 0x98) = param_2;
  func_0x00010061eec8();
  FUN_100631054();
  FUN_1005ef160();
  *unaff_x19 = (long)plVar1;
  unaff_x19[1] = (long)plVar1;
  plVar7 = unaff_x19 + 2;
  *(undefined1 *)plVar7 = 0;
  *(undefined1 *)(unaff_x19 + 0xb) = 0;
  plVar4 = plVar1;
  FUN_10054c3a4();
  if ((int)plVar4 == 0) {
    func_0x0001005ed474(uStack_48);
    if ((bool)uVar3) {
      if ((char)unaff_x19[0xb] == '\x01') {
        plVar7 = unaff_x19 + 5;
        FUN_1005fce88(plVar7);
        *(undefined1 *)(unaff_x19 + 0xb) = 0;
      }
      auVar15._8_8_ = lVar8;
      auVar15._0_8_ = plVar7;
      return auVar15;
    }
  }
  else {
    unaff_x19 = plVar1;
    FUN_10054c7ec();
    uStack_c8 = (undefined1)lVar8;
    plVar4 = unaff_x19;
    FUN_1005ede54();
    ppuStack_d8 = (undefined **)CONCAT44(ppuStack_d8._4_4_,(int)plVar4);
    FUN_1006317e8();
    FUN_1005f9230();
    pppuVar12 = &ppuStack_d8;
    uStack_98 = 2;
    plVar5 = unaff_x19;
    plStack_d0 = plVar4;
    FUN_10061f61c(auStack_c0);
    FUN_100631c80();
    FUN_1005f9230();
    pppuVar9 = &ppuStack_d8;
    plStack_a0 = plVar5;
    FUN_100631cc8(plVar7,pppuVar9);
    puVar6 = auStack_c0;
    FUN_1005fce88(puVar6);
    func_0x0001005ed474(uStack_48);
    if ((bool)uVar3) {
      auVar13._8_8_ = pppuVar9;
      auVar13._0_8_ = puVar6;
      return auVar13;
    }
  }
  func_0x000107c60e78();
  func_0x000107c34540();
  FUN_1005fce88(pppuVar12 + 3);
  FUN_100631e3c(plVar7);
  if ((int)param_2 == 1) {
    func_0x000107c344ec();
    FUN_10054cac4(plVar1);
    func_0x000107c60e50();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100631034);
    (*pcVar2)();
  }
  func_0x000107c34360();
  func_0x000104bd46a0(unaff_x19);
  auVar14._8_8_ = plVar7;
  auVar14._0_8_ = plVar1;
  return auVar14;
}



/* Entry: 100631054; end: 100631063;  */

void FUN_100631054(void)

{
  return;
}



/* Entry: 100631064; end: 1006312bf;  */

void FUN_100631064(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006312c0; end: 1006312ef;  */

void FUN_1006312c0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 1006312f0; end: 10063131f;  */

undefined8 * FUN_1006312f0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110cfb470;
  param_1[1] = param_2;
  FUN_1006312c0();
  return param_1;
}



/* Entry: 100631320; end: 1006314d3;  */

undefined1  [16] FUN_100631320(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  undefined8 extraout_x8_01;
  ulong extraout_x8_02;
  long lVar6;
  long extraout_x8_03;
  ulong uVar7;
  ulong extraout_x9;
  undefined8 extraout_x9_00;
  long *plVar8;
  ulong extraout_x9_01;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  long *aplStack_58 [3];
  
  iVar1 = *param_4;
  uVar9 = (ulong)iVar1;
  uVar11 = param_3[1];
  if (uVar11 != 0) {
    func_0x0001006316cc();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar9;
    }
    else {
      in_NG = (long)(uVar11 - uVar9) < 0;
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar5 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_3 + unaff_x23 * 8);
    uVar5 = extraout_x8;
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_1006313c4;
          uVar7 = plVar10[1];
          if (uVar7 != uVar9) break;
          in_NG = (int)plVar10[2] - iVar1 < 0;
          if ((int)plVar10[2] == iVar1) {
            uVar4 = 0;
            goto LAB_1006314ac;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          func_0x000107c39424();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x23) < 0;
      } while (uVar7 == unaff_x23);
    }
  }
LAB_1006313c4:
  FUN_100631520(aplStack_58);
  FUN_10063152c();
  func_0x000100631580();
  if ((uVar11 == 0) || (func_0x00010066fe28(param_1,param_2,(float)uVar11), (bool)in_NG)) {
    func_0x000100631594();
    bVar2 = 2 < uVar11;
    uVar3 = uVar11 == 3;
    func_0x0001006315ac();
    uVar4 = extraout_x8_01;
    if (!bVar2 || (bool)uVar3) {
      uVar4 = extraout_x9_00;
    }
    FUN_100600ee0(param_3,uVar4);
    uVar11 = param_3[1];
    func_0x0001006316cc();
    if ((bool)uVar3) {
      unaff_x23 = extraout_x8_02 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar5 * uVar11;
      }
    }
  }
  plVar10 = aplStack_58[0];
  lVar6 = *param_3;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    param_3 = param_3 + 2;
    *aplStack_58[0] = *param_3;
    *param_3 = (long)aplStack_58[0];
    *(long **)(lVar6 + unaff_x23 * 8) = param_3;
    if (*aplStack_58[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar9 = uVar9 & uVar11 - 1;
      }
      else if (uVar11 <= uVar9) {
        func_0x000107c39424();
        lVar6 = extraout_x8_03;
        uVar9 = extraout_x9_01;
      }
      *(long **)(lVar6 + uVar9 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  func_0x0001006316d8();
  func_0x0001006316e8();
  uVar4 = 1;
LAB_1006314ac:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 1006314d4; end: 10063151f;  */

void FUN_1006314d4(undefined8 param_1,undefined8 param_2)

{
  FUN_100631320(param_1,param_2,param_2);
  return;
}


