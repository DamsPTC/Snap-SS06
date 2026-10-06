/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10688ad20; end: 10688ad5b;  */

void FUN_10688ad20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xfffffc20;
  return;
}



/* Entry: 10688ad5c; end: 10688ad93;  */

long FUN_10688ad5c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010688e9b4();
  do {
    lVar1 = param_2;
    func_0x00010688e948();
    FUN_10688adbc();
    param_2 = param_1;
  } while (lVar1 != param_1);
  return lVar1;
}



/* Entry: 10688ad94; end: 10688adbb;  */

long FUN_10688ad94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010688e480();
  lVar1 = 0xf;
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  if (lVar1 != param_3) {
    func_0x00010688e9b4();
    func_0x00010688ae14();
    if (lVar1 != param_1) {
      func_0x00010688e904();
      FUN_10688aec8();
      lVar1 = param_1;
    }
  }
  return lVar1;
}



/* Entry: 10688adbc; end: 10688aec7;  */

long FUN_10688adbc(long param_1,long param_2,long param_3)

{
  if (param_2 != param_3) {
    func_0x00010688e9b4();
    func_0x00010688ae14();
    if (param_2 != param_1) {
      func_0x00010688e904();
      FUN_10688aec8();
      param_2 = param_1;
    }
  }
  return param_2;
}



/* Entry: 10688aec8; end: 10688b027;  */

byte * FUN_10688aec8(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                    ulong param_6)

{
  uint uVar1;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  func_0x00010688ede8();
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 == 0x2a) {
    func_0x00010688e864(param_1,0);
    return param_2 + 1;
  }
  pbVar3 = param_1;
  FUN_10688b2e4(param_1,param_2);
  if (param_2 == pbVar3) {
    return param_2;
  }
  in_stack_0000000c = 0;
  pbVar7 = param_1;
  pbVar5 = pbVar3;
  pbVar6 = param_3;
  FUN_10688ac0c();
  uVar2 = pbVar7 == pbVar3;
  pbVar3 = pbVar7;
  if (!(bool)uVar2) {
    uVar2 = param_3 == pbVar7;
    if (!(bool)uVar2) {
      pbVar3 = param_1;
      if (*pbVar7 == 0x2c) {
        in_stack_00000008 = -1;
        pbVar4 = param_1;
        FUN_10688ac0c(param_1,pbVar7 + 1,param_3,&stack0x00000008);
        pbVar5 = pbVar4;
        func_0x00010688b31c();
        uVar2 = true;
        pbVar6 = param_3;
        if (pbVar3 != pbVar4) {
          pbVar6 = (byte *)(long)in_stack_00000008;
          pbVar5 = (byte *)(long)in_stack_0000000c;
          if (in_stack_00000008 == -1) {
            func_0x00010688e864(param_1);
            return pbVar3;
          }
          uVar2 = in_stack_00000008 == in_stack_0000000c;
          if (in_stack_00000008 < in_stack_0000000c) goto LAB_10688b024;
LAB_10688affc:
          func_0x000100152f50(param_1,pbVar5,pbVar6,param_4,(ulong)param_5 & 0xffffffff,
                              param_6 & 0xffffffff,1);
          return pbVar3;
        }
      }
      else {
        pbVar5 = pbVar7;
        func_0x00010688b31c();
        uVar2 = true;
        pbVar6 = param_3;
        if (pbVar3 != pbVar7) {
          pbVar5 = (byte *)(long)in_stack_0000000c;
          pbVar6 = pbVar5;
          goto LAB_10688affc;
        }
      }
    }
    FUN_10688acc0();
  }
LAB_10688b024:
  FUN_10688ac98();
  func_0x0001001535ec();
  func_0x00010688b14c();
  func_0x00010688ed94();
  pbVar7 = param_5;
  if ((bool)uVar2) {
    func_0x00010015ae88();
    func_0x00010688b1b0();
    func_0x00010688ed94();
    if ((bool)uVar2) {
      if ((param_4 == param_1) || (pbVar7 = param_5 + 1, *param_5 != 0x2e)) {
        func_0x00010015ae88();
        pbVar7 = pbVar5;
        if ((pbVar5 != pbVar6) && (*pbVar5 == 0x5b)) {
          uVar2 = 1;
          pbVar7 = pbVar3;
          if (pbVar5 + 1 != pbVar6) {
            pbVar4 = pbVar5 + 2;
            if (pbVar5[1] != 0x5e) {
              pbVar4 = pbVar5 + 1;
            }
            pbVar5 = pbVar3;
            func_0x000100152a30();
            uVar2 = 1;
            pbVar7 = pbVar5;
            if (pbVar4 != pbVar6) {
              if (((*(ushort *)(pbVar3 + 0x18) & 0x1f0) != 0) && (*pbVar4 == 0x5d)) {
                FUN_1068893d8(pbVar5,0x5d);
                pbVar4 = pbVar4 + 1;
              }
              FUN_10688988c(pbVar3,pbVar4,pbVar6,pbVar5);
              uVar2 = 1;
              pbVar7 = pbVar3;
              if (pbVar6 != pbVar3) {
                if (*pbVar3 == 0x2d) {
                  FUN_1068893d8(pbVar5,0x2d);
                  pbVar3 = pbVar3 + 1;
                  pbVar7 = pbVar5;
                }
                uVar2 = 1;
                if ((pbVar3 != pbVar6) && (uVar2 = 0, *pbVar3 == 0x5d)) {
                  return pbVar3 + 1;
                }
              }
            }
          }
          FUN_106889864();
          func_0x00010688e480();
          __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
          func_0x00010688e210();
          func_0x00010688e2c0();
          func_0x00010688e418();
          func_0x00010688e580();
          if (((!(bool)uVar2) &&
              (uVar1 = *pbVar7 - 0x24,
              0x3a < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x7800000080004f1U) == 0)) &&
             (2 < *pbVar7 - 0x7b)) {
            func_0x00010688e718();
            pbVar7 = pbVar7 + 1;
          }
          return pbVar7;
        }
      }
      else {
        func_0x00010688b214(param_6);
      }
    }
  }
  return pbVar7;
}



/* Entry: 10688b028; end: 10688b08f;  */

byte * FUN_10688b028(byte *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  byte *pbVar3;
  long unaff_x19;
  long unaff_x21;
  byte *pbVar4;
  byte *unaff_x22;
  byte *pbVar5;
  
  func_0x0001001535ec();
  func_0x00010688b14c();
  func_0x00010688ed94();
  pbVar5 = unaff_x22;
  if ((bool)in_ZR) {
    func_0x00010015ae88();
    func_0x00010688b1b0();
    func_0x00010688ed94();
    if ((bool)in_ZR) {
      if ((unaff_x19 == unaff_x21) || (pbVar5 = unaff_x22 + 1, *unaff_x22 != 0x2e)) {
        func_0x00010015ae88();
        pbVar5 = param_2;
        if ((param_2 != param_3) && (*param_2 == 0x5b)) {
          uVar2 = 1;
          pbVar5 = param_1;
          if (param_2 + 1 != param_3) {
            pbVar4 = param_2 + 2;
            if (param_2[1] != 0x5e) {
              pbVar4 = param_2 + 1;
            }
            pbVar3 = param_1;
            func_0x000100152a30();
            uVar2 = 1;
            pbVar5 = pbVar3;
            if (pbVar4 != param_3) {
              if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pbVar4 == 0x5d)) {
                FUN_1068893d8(pbVar3,0x5d);
                pbVar4 = pbVar4 + 1;
              }
              FUN_10688988c(param_1,pbVar4,param_3,pbVar3);
              uVar2 = 1;
              pbVar5 = param_1;
              if (param_3 != param_1) {
                if (*param_1 == 0x2d) {
                  FUN_1068893d8(pbVar3,0x2d);
                  param_1 = param_1 + 1;
                  pbVar5 = pbVar3;
                }
                uVar2 = 1;
                if ((param_1 != param_3) && (uVar2 = 0, *param_1 == 0x5d)) {
                  return param_1 + 1;
                }
              }
            }
          }
          FUN_106889864();
          func_0x00010688e480();
          __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
          func_0x00010688e210();
          func_0x00010688e2c0();
          func_0x00010688e418();
          func_0x00010688e580();
          if (((!(bool)uVar2) &&
              (uVar1 = *pbVar5 - 0x24,
              0x3a < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x7800000080004f1U) == 0)) &&
             (2 < *pbVar5 - 0x7b)) {
            func_0x00010688e718();
            pbVar5 = pbVar5 + 1;
          }
          return pbVar5;
        }
      }
      else {
        func_0x00010688b214();
      }
    }
  }
  return pbVar5;
}



/* Entry: 10688b090; end: 10688b0ff;  */

char * FUN_10688b090(undefined8 param_1,char *param_2,char *param_3)

{
  long lVar1;
  
  if ((param_2 != param_3 && param_2 + 1 != param_3) && (*param_2 == '\\')) {
    lVar1 = 2;
    if (param_2[1] != '(') {
      lVar1 = 0;
    }
    return param_2 + lVar1;
  }
  return param_2;
}



/* Entry: 10688b100; end: 10688b243;  */

char * FUN_10688b100(int param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 in_ZR;
  char *unaff_x19;
  
  func_0x00010688e580();
  if ((!(bool)in_ZR && param_2 + 1 != param_3) && (*unaff_x19 == '\\')) {
    FUN_10688b294();
    lVar1 = 2;
    if (param_1 == 0) {
      lVar1 = 0;
    }
    unaff_x19 = unaff_x19 + lVar1;
  }
  return unaff_x19;
}



/* Entry: 10688b244; end: 10688b247;  */

long FUN_10688b244(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 10688b248; end: 10688b25b;  */

void FUN_10688b248(void)

{
  func_0x00010015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10688b25c; end: 10688b293;  */

void FUN_10688b25c(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(char **)(param_2 + 4);
  if ((pcVar1 == *(char **)(param_2 + 6)) || (*pcVar1 == '\0')) {
    uVar2 = 0;
    *param_2 = 0xfffffc1f;
  }
  else {
    *param_2 = 0xfffffc1d;
    *(char **)(param_2 + 4) = pcVar1 + 1;
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_2 + 0x14) = uVar2;
  return;
}



/* Entry: 10688b294; end: 10688b2e3;  */

char * FUN_10688b294(long param_1,uint param_2,char *param_3)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(ulong)(param_2 & 0xff);
  func_0x00010688eb44();
  uVar2 = (uint)pcVar3 - 1;
  if (uVar2 < 9) {
    if (*(uint *)(param_1 + 0x1c) < (uint)pcVar3) {
      FUN_106888e94();
      if ((pcVar3 != param_3 && pcVar3 + 1 != param_3) && (*pcVar3 == '\\')) {
        lVar1 = 2;
        if (pcVar3[1] != '{') {
          lVar1 = 0;
        }
        return pcVar3 + lVar1;
      }
      return pcVar3;
    }
    FUN_106888ebc(param_1);
  }
  return (char *)(ulong)(uVar2 < 9);
}



/* Entry: 10688b2e4; end: 10688b353;  */

char * FUN_10688b2e4(undefined8 param_1,char *param_2,char *param_3)

{
  long lVar1;
  
  if ((param_2 != param_3 && param_2 + 1 != param_3) && (*param_2 == '\\')) {
    lVar1 = 2;
    if (param_2[1] != '{') {
      lVar1 = 0;
    }
    return param_2 + lVar1;
  }
  return param_2;
}



/* Entry: 10688b354; end: 10688b397;  */

byte * FUN_10688b354(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *unaff_x21;
  byte *pbVar10;
  byte *pbVar11;
  
  func_0x0001001535ec();
  FUN_10688b398();
  if (unaff_x21 != param_1) {
    do {
      pbVar7 = param_1;
      param_1 = pbVar7;
      func_0x00010015ae88();
      FUN_10688b398();
    } while (pbVar7 != param_1);
    return pbVar7;
  }
  FUN_10688ad94();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x1c);
  pbVar7 = param_1;
  FUN_10688b4a4();
  if (param_2 == pbVar7 && param_3 != pbVar7) {
    bVar3 = *pbVar7;
    if (bVar3 == 0x24) {
      func_0x000106888194(param_1);
    }
    else if (bVar3 == 0x28) {
      func_0x0001001527ac(param_1);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pbVar6 = pbVar7 + 1;
      pbVar7 = param_1;
      pbVar8 = param_3;
      FUN_106887860();
      uVar5 = 1;
      if ((param_3 == pbVar7) || (uVar5 = 0, *pbVar7 != 0x29)) {
        FUN_106888248();
        func_0x0001001535ec();
        FUN_10688b50c();
        func_0x00010688ed94();
        pbVar11 = param_2;
        if ((bool)uVar5) {
          func_0x00010015ae88();
          func_0x00010688b584();
          func_0x00010688ed94();
          if ((bool)uVar5) {
            if ((param_3 == param_1) || (pbVar11 = param_2 + 1, *param_2 != 0x2e)) {
              func_0x00010015ae88();
              pbVar11 = pbVar6;
              if ((pbVar6 != pbVar8) && (*pbVar6 == 0x5b)) {
                uVar5 = 1;
                pbVar11 = pbVar7;
                if (pbVar6 + 1 != pbVar8) {
                  pbVar10 = pbVar6 + 2;
                  if (pbVar6[1] != 0x5e) {
                    pbVar10 = pbVar6 + 1;
                  }
                  pbVar6 = pbVar7;
                  func_0x000100152a30();
                  uVar5 = 1;
                  pbVar11 = pbVar6;
                  if (pbVar10 != pbVar8) {
                    if (((*(ushort *)(pbVar7 + 0x18) & 0x1f0) != 0) && (*pbVar10 == 0x5d)) {
                      FUN_1068893d8(pbVar6,0x5d);
                      pbVar10 = pbVar10 + 1;
                    }
                    FUN_10688988c(pbVar7,pbVar10,pbVar8,pbVar6);
                    uVar5 = 1;
                    pbVar11 = pbVar7;
                    if (pbVar8 != pbVar7) {
                      if (*pbVar7 == 0x2d) {
                        FUN_1068893d8(pbVar6,0x2d);
                        pbVar7 = pbVar7 + 1;
                        pbVar11 = pbVar6;
                      }
                      uVar5 = 1;
                      if ((pbVar7 != pbVar8) && (uVar5 = 0, *pbVar7 == 0x5d)) {
                        return pbVar7 + 1;
                      }
                    }
                  }
                }
                FUN_106889864();
                func_0x00010688e480();
                __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
                func_0x00010688e210();
                func_0x00010688e2c0();
                func_0x00010688e418();
                func_0x00010688e580();
                if (((!(bool)uVar5) &&
                    (uVar4 = *pbVar11 - 0x24,
                    0x3a < uVar4 || (1L << ((ulong)uVar4 & 0x3f) & 0x7800000080004f1U) == 0)) &&
                   (2 < *pbVar11 - 0x7b)) {
                  func_0x00010688e718();
                  pbVar11 = pbVar11 + 1;
                }
                return pbVar11;
              }
            }
            else {
              func_0x00010688b214(uVar9);
            }
          }
        }
        return pbVar11;
      }
      func_0x0001001530e4(param_1,uVar2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    else {
      if (bVar3 != 0x5e) goto LAB_10688b468;
      FUN_10688816c(param_1);
    }
    pbVar7 = pbVar7 + 1;
  }
LAB_10688b468:
  if (pbVar7 != param_2) {
    FUN_106887efc(param_1,pbVar7,param_3,uVar9,iVar1 + 1,*(int *)(param_1 + 0x1c) + 1);
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 10688b398; end: 10688b4a3;  */

byte * FUN_10688b398(byte *param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x1c);
  pbVar7 = param_1;
  FUN_10688b4a4();
  if (param_2 == pbVar7 && param_3 != pbVar7) {
    bVar3 = *pbVar7;
    if (bVar3 == 0x24) {
      func_0x000106888194(param_1);
    }
    else if (bVar3 == 0x28) {
      func_0x0001001527ac(param_1);
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pbVar6 = pbVar7 + 1;
      pbVar7 = param_1;
      pbVar8 = param_3;
      FUN_106887860();
      uVar5 = 1;
      if ((param_3 == pbVar7) || (uVar5 = 0, *pbVar7 != 0x29)) {
        FUN_106888248();
        func_0x0001001535ec();
        FUN_10688b50c();
        func_0x00010688ed94();
        pbVar11 = param_2;
        if ((bool)uVar5) {
          func_0x00010015ae88();
          func_0x00010688b584();
          func_0x00010688ed94();
          if ((bool)uVar5) {
            if ((param_3 == param_1) || (pbVar11 = param_2 + 1, *param_2 != 0x2e)) {
              func_0x00010015ae88();
              pbVar11 = pbVar6;
              if ((pbVar6 != pbVar8) && (*pbVar6 == 0x5b)) {
                uVar5 = 1;
                pbVar11 = pbVar7;
                if (pbVar6 + 1 != pbVar8) {
                  pbVar10 = pbVar6 + 2;
                  if (pbVar6[1] != 0x5e) {
                    pbVar10 = pbVar6 + 1;
                  }
                  pbVar6 = pbVar7;
                  func_0x000100152a30();
                  uVar5 = 1;
                  pbVar11 = pbVar6;
                  if (pbVar10 != pbVar8) {
                    if (((*(ushort *)(pbVar7 + 0x18) & 0x1f0) != 0) && (*pbVar10 == 0x5d)) {
                      FUN_1068893d8(pbVar6,0x5d);
                      pbVar10 = pbVar10 + 1;
                    }
                    FUN_10688988c(pbVar7,pbVar10,pbVar8,pbVar6);
                    uVar5 = 1;
                    pbVar11 = pbVar7;
                    if (pbVar8 != pbVar7) {
                      if (*pbVar7 == 0x2d) {
                        FUN_1068893d8(pbVar6,0x2d);
                        pbVar7 = pbVar7 + 1;
                        pbVar11 = pbVar6;
                      }
                      uVar5 = 1;
                      if ((pbVar7 != pbVar8) && (uVar5 = 0, *pbVar7 == 0x5d)) {
                        return pbVar7 + 1;
                      }
                    }
                  }
                }
                FUN_106889864();
                func_0x00010688e480();
                __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
                func_0x00010688e210();
                func_0x00010688e2c0();
                func_0x00010688e418();
                func_0x00010688e580();
                if (((!(bool)uVar5) &&
                    (uVar4 = *pbVar11 - 0x24,
                    0x3a < uVar4 || (1L << ((ulong)uVar4 & 0x3f) & 0x7800000080004f1U) == 0)) &&
                   (2 < *pbVar11 - 0x7b)) {
                  func_0x00010688e718();
                  pbVar11 = pbVar11 + 1;
                }
                return pbVar11;
              }
            }
            else {
              func_0x00010688b214(uVar9);
            }
          }
        }
        return pbVar11;
      }
      func_0x0001001530e4(param_1,uVar2);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    else {
      if (bVar3 != 0x5e) goto LAB_10688b468;
      FUN_10688816c(param_1);
    }
    pbVar7 = pbVar7 + 1;
  }
LAB_10688b468:
  if (pbVar7 != param_2) {
    FUN_106887efc(param_1,pbVar7,param_3,uVar9,iVar1 + 1,*(int *)(param_1 + 0x1c) + 1);
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 10688b4a4; end: 10688b50b;  */

byte * FUN_10688b4a4(byte *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  byte *pbVar3;
  long unaff_x19;
  long unaff_x21;
  byte *pbVar4;
  byte *unaff_x22;
  byte *pbVar5;
  
  func_0x0001001535ec();
  FUN_10688b50c();
  func_0x00010688ed94();
  pbVar5 = unaff_x22;
  if ((bool)in_ZR) {
    func_0x00010015ae88();
    func_0x00010688b584();
    func_0x00010688ed94();
    if ((bool)in_ZR) {
      if ((unaff_x19 == unaff_x21) || (pbVar5 = unaff_x22 + 1, *unaff_x22 != 0x2e)) {
        func_0x00010015ae88();
        pbVar5 = param_2;
        if ((param_2 != param_3) && (*param_2 == 0x5b)) {
          uVar2 = 1;
          pbVar5 = param_1;
          if (param_2 + 1 != param_3) {
            pbVar4 = param_2 + 2;
            if (param_2[1] != 0x5e) {
              pbVar4 = param_2 + 1;
            }
            pbVar3 = param_1;
            func_0x000100152a30();
            uVar2 = 1;
            pbVar5 = pbVar3;
            if (pbVar4 != param_3) {
              if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pbVar4 == 0x5d)) {
                FUN_1068893d8(pbVar3,0x5d);
                pbVar4 = pbVar4 + 1;
              }
              FUN_10688988c(param_1,pbVar4,param_3,pbVar3);
              uVar2 = 1;
              pbVar5 = param_1;
              if (param_3 != param_1) {
                if (*param_1 == 0x2d) {
                  FUN_1068893d8(pbVar3,0x2d);
                  param_1 = param_1 + 1;
                  pbVar5 = pbVar3;
                }
                uVar2 = 1;
                if ((param_1 != param_3) && (uVar2 = 0, *param_1 == 0x5d)) {
                  return param_1 + 1;
                }
              }
            }
          }
          FUN_106889864();
          func_0x00010688e480();
          __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
          func_0x00010688e210();
          func_0x00010688e2c0();
          func_0x00010688e418();
          func_0x00010688e580();
          if (((!(bool)uVar2) &&
              (uVar1 = *pbVar5 - 0x24,
              0x3a < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x7800000080004f1U) == 0)) &&
             (2 < *pbVar5 - 0x7b)) {
            func_0x00010688e718();
            pbVar5 = pbVar5 + 1;
          }
          return pbVar5;
        }
      }
      else {
        func_0x00010688b214();
      }
    }
  }
  return pbVar5;
}



/* Entry: 10688b50c; end: 10688b63b;  */

byte * FUN_10688b50c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  byte *unaff_x19;
  
  func_0x00010688e580();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  uVar1 = *unaff_x19 - 0x24;
  if (uVar1 < 0x3b) {
    if ((1L << ((ulong)uVar1 & 0x3f) & 0x5800000080004d1U) != 0) {
      return unaff_x19;
    }
    if ((ulong)uVar1 == 5) {
      if (*(int *)(param_1 + 0x24) != 0) {
        return unaff_x19;
      }
      goto LAB_10688b578;
    }
  }
  if (*unaff_x19 - 0x7b < 2) {
    return unaff_x19;
  }
LAB_10688b578:
  func_0x00010688e718();
  return unaff_x19 + 1;
}



/* Entry: 10688b63c; end: 10688b8df;  */

/* WARNING: Removing unreachable block (ram,0x00010688b73c) */
/* WARNING: Removing unreachable block (ram,0x00010688b8a0) */

long * FUN_10688b63c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5,undefined1 param_6)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 == 0) {
    FUN_10688c578(&uStack_a0);
    return (long *)0x0;
  }
  func_0x000100153c0c();
  func_0x00010688eb60();
  func_0x00010688ed04();
  uVar5 = (lStack_78 + lStack_80) - 1;
  puVar6 = (undefined4 *)(*(long *)(lStack_98 + (uVar5 / 0x2a) * 8) + (uVar5 % 0x2a) * 0x60);
  *puVar6 = 0;
  *(undefined8 *)(puVar6 + 2) = param_2;
  *(undefined8 *)(puVar6 + 4) = param_2;
  *(undefined8 *)(puVar6 + 6) = param_3;
  func_0x0001001543b4(puVar6 + 0xe,*(undefined4 *)(param_1 + 0x20));
  uVar5 = (lStack_78 + lStack_80) - 1;
  lVar7 = *(long *)(lStack_98 + (uVar5 / 0x2a) * 8) + (uVar5 % 0x2a) * 0x60;
  *(long *)(lVar7 + 0x50) = lVar8;
  *(undefined4 *)(lVar7 + 0x58) = param_5;
  *(undefined1 *)(lVar7 + 0x5c) = param_6;
  uVar3 = 0;
  uVar2 = 0;
  uVar5 = (lStack_78 + lStack_80) - 1;
  plVar4 = *(long **)(*(long *)(lStack_98 + (uVar5 / 0x2a) * 8) + (uVar5 % 0x2a) * 0x60 + 0x50);
  if (plVar4 != (long *)0x0) {
    func_0x00010015909c(*(undefined8 *)(*plVar4 + 0x10));
  }
  func_0x0001001590bc();
  if ((bool)uVar3 && !(bool)uVar2) {
    FUN_106888720();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10688b8b0);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010688b790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dde1b74)[extraout_x8] * 4 + 0x10688b794))();
  return plVar4;
}



/* Entry: 10688b8e0; end: 10688bb6f;  */

/* WARNING: Removing unreachable block (ram,0x00010688b9b4) */
/* WARNING: Removing unreachable block (ram,0x00010688bb28) */

long * FUN_10688b8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  long extraout_x8;
  undefined4 unaff_w21;
  undefined1 unaff_w23;
  long unaff_x24;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined4 auStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined5 uStack_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
  auStack_e0[0] = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_8b = 0;
  uStack_88 = 0;
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    func_0x0001001540b8(auStack_e0);
    func_0x00010015ae24(&uStack_80);
    return (long *)0x0;
  }
  func_0x0001001539f0();
  uStack_e8 = 0;
  auStack_158[0] = 0;
  uStack_148 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,
                                                  CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))));
  uStack_150 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12
                                                  (uVar6,CONCAT11(uVar5,uVar4)))))));
  uStack_138 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,
                                                  CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))));
  uStack_140 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12
                                                  (uVar6,CONCAT11(uVar5,uVar4)))))));
  uStack_128 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,
                                                  CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))));
  uStack_130 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12
                                                  (uVar6,CONCAT11(uVar5,uVar4)))))));
  uStack_118 = CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,CONCAT13(uVar15,
                                                  CONCAT12(uVar14,CONCAT11(uVar13,uVar12)))))));
  uStack_120 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12
                                                  (uVar6,CONCAT11(uVar5,uVar4)))))));
  uStack_108 = CONCAT14(uVar16,CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,uVar12))));
  uStack_110 = CONCAT17(uVar11,CONCAT16(uVar10,CONCAT15(uVar9,CONCAT14(uVar8,CONCAT13(uVar7,CONCAT12
                                                  (uVar6,CONCAT11(uVar5,uVar4)))))));
  uStack_103 = 0;
  uStack_100 = 0;
  uStack_f8 = param_3;
  uStack_f0 = param_3;
  func_0x00010688ecb4();
  func_0x0001001540b8(auStack_158);
  func_0x00010015413c(lStack_78);
  func_0x000100154154();
  func_0x0001001543b4(lStack_78 + -0x28,*(undefined4 *)(unaff_x24 + 0x20));
  *(long *)(lStack_78 + -0x10) = lVar3;
  *(undefined4 *)(lStack_78 + -8) = unaff_w21;
  *(undefined1 *)(lStack_78 + -4) = unaff_w23;
  uVar5 = 0;
  uVar4 = 0;
  plVar2 = *(long **)(lStack_78 + -0x10);
  if (plVar2 != (long *)0x0) {
    func_0x00010015909c(*(undefined8 *)(*plVar2 + 0x10));
  }
  func_0x0001001590bc();
  if ((bool)uVar5 && !(bool)uVar4) {
    FUN_106888720();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10688bb38);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010688b9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dde1b7e)[extraout_x8] * 4 + 0x10688b9f0))();
  return plVar2;
}



/* Entry: 10688bb70; end: 10688bc0f;  */

void FUN_10688bb70(long param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x000100153c68();
  func_0x00010688bd14();
  if (param_1 == 0) {
    FUN_10688bd3c();
  }
  FUN_10688be3c();
  func_0x000100153e00(param_2);
  *(long *)(unaff_x19 + 0x28) = *(long *)(unaff_x19 + 0x28) + 1;
  return;
}



/* Entry: 10688bc10; end: 10688bcb3;  */

void FUN_10688bc10(ulong *param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong *puVar2;
  ulong uVar3;
  long extraout_x9;
  ulong uVar4;
  
  puVar2 = param_1;
  func_0x00010688c2b0();
  uVar3 = param_2;
  FUN_10688be3c(param_1);
  do {
    uVar4 = param_2 - 0xfc0;
    do {
      uVar1 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        param_1[5] = 0;
        while (func_0x00010688ed48(), (bool)uVar1) {
          func_0x00010688ec48();
          func_0x00010688e9d0();
        }
        if (extraout_x9 == 1) {
          uVar3 = 0x15;
        }
        else {
          if (extraout_x9 != 2) {
            return;
          }
          uVar3 = 0x2a;
        }
        param_1[4] = uVar3;
        return;
      }
      func_0x0001001540b8(param_2);
      param_2 = param_2 + 0x60;
      uVar4 = uVar4 + 0x60;
    } while (*puVar2 != uVar4);
    puVar2 = puVar2 + 1;
    param_2 = *puVar2;
  } while( true );
}



/* Entry: 10688bcb4; end: 10688bd3b;  */

void FUN_10688bcb4(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x19;
  
  func_0x000100153c68();
  if (*(long *)(param_1 + 0x20) == 0) {
    FUN_10688c2d8();
  }
  plVar1 = unaff_x19;
  func_0x00010688c2b0();
  if (*plVar1 == param_2) {
    param_2 = plVar1[-1] + 0xfc0;
  }
  func_0x000100153e00(param_2 + -0x60);
  unaff_x19[5] = unaff_x19[5] + 1;
  unaff_x19[4] = unaff_x19[4] + -1;
  return;
}



/* Entry: 10688bd3c; end: 10688be3b;  */

void FUN_10688bd3c(long *param_1)

{
  long lVar1;
  undefined8 auStack_50 [6];
  
  if ((ulong)param_1[4] < 0x2a) {
    if ((ulong)(param_1[3] - *param_1) <= (ulong)(param_1[2] - param_1[1])) {
      func_0x00010688e750();
      func_0x00010688eda0();
      __Znwm(0xfc0);
      func_0x00010688eaa4();
      func_0x00010688ec50();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -8;
        FUN_10688c08c(auStack_50,lVar1);
      }
      func_0x00010688e7e8();
      FUN_10688c18c();
      func_0x00010688e940();
      return;
    }
    if (param_1[3] != param_1[2]) {
      __Znwm(0xfc0);
      func_0x00010688e438();
      FUN_10688bf04();
      return;
    }
    __Znwm(0xfc0);
    func_0x00010688e438();
    FUN_10688bf7c();
  }
  else {
    param_1[4] = param_1[4] - 0x2a;
  }
  auStack_50[0] = *(undefined8 *)param_1[1];
  param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  func_0x00010688e58c();
  FUN_10688be8c();
  return;
}



/* Entry: 10688be3c; end: 10688be8b;  */

void FUN_10688be3c(long param_1)

{
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 8)) {
    return;
  }
  return;
}



/* Entry: 10688be8c; end: 10688bf03;  */

void FUN_10688be8c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000100154188();
  func_0x000100153c68();
  func_0x00010688e608();
  if ((bool)in_ZR) {
    func_0x00010688ea44();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010688ea20();
      func_0x00010688e498();
      func_0x00010688e254();
      func_0x00010688e564();
      func_0x00010688e228();
      FUN_10688c1c8();
    }
    else {
      func_0x00010688e2a8();
      if (!(bool)in_ZR) {
        func_0x00010688e364();
      }
      func_0x00010688e3d4();
    }
  }
  func_0x00010688e3e4();
  return;
}



/* Entry: 10688bf04; end: 10688bf7b;  */

void FUN_10688bf04(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x000100154188();
  func_0x000100153c68();
  func_0x00010688e608();
  if ((bool)in_ZR) {
    func_0x00010688ea44();
    if (!(bool)in_CY || (bool)in_ZR) {
      func_0x00010688ea20();
      func_0x00010688e498();
      func_0x00010688e254();
      func_0x00010688e564();
      func_0x00010688e228();
      FUN_10688c1c8();
    }
    else {
      func_0x00010688e2a8();
      if (!(bool)in_ZR) {
        func_0x00010688e364();
      }
      func_0x00010688e3d4();
    }
  }
  func_0x00010688e3e4();
  return;
}



/* Entry: 10688bf7c; end: 10688c00b;  */

void FUN_10688bf7c(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010688e38c();
  if ((bool)in_ZR) {
    func_0x00010688e608();
    if ((bool)in_CY) {
      func_0x00010688ed88();
      lVar1 = extraout_x8;
      if ((bool)in_ZR) {
        lVar1 = 1;
      }
      func_0x00010688ec08();
      func_0x00010688e294(unaff_x19 + (lVar1 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010688e564();
      func_0x00010688e228();
      FUN_10688c1c8();
    }
    else {
      func_0x00010688e270();
      if (!(bool)in_ZR) {
        func_0x00010688e63c();
      }
      func_0x00010688ea68();
    }
  }
  func_0x00010688e504();
  return;
}



/* Entry: 10688c00c; end: 10688c08b;  */

void FUN_10688c00c(long param_1)

{
  bool bVar1;
  bool bVar2;
  long unaff_x19;
  
  func_0x000100154188();
  func_0x000100153c68();
  bVar1 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10);
  bVar2 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_1 + 0x18);
  if (bVar2) {
    func_0x00010688ea44();
    if (!bVar1 || bVar2) {
      func_0x00010688ea20();
      func_0x00010688e498(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x00010688e254();
      func_0x00010688e564();
      func_0x00010688e228();
      FUN_10688c1c8();
    }
    else {
      func_0x00010688e2a8();
      if (!bVar2) {
        func_0x00010688e364();
      }
      func_0x00010688e3d4();
    }
  }
  func_0x00010688e3e4();
  return;
}



/* Entry: 10688c08c; end: 10688c11f;  */

void FUN_10688c08c(void)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010688e38c();
  if ((bool)in_ZR) {
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == *(ulong *)(unaff_x19 + 0x18);
    if (*(ulong *)(unaff_x19 + 0x10) < *(ulong *)(unaff_x19 + 0x18)) {
      func_0x00010688e270();
      if (!bVar2) {
        func_0x00010688e63c();
      }
      func_0x00010688ea68();
    }
    else {
      func_0x00010688ed88();
      lVar1 = extraout_x8;
      if (bVar2) {
        lVar1 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      func_0x00010688ec08(lVar3);
      func_0x00010688e294(lVar3 + (lVar1 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010688e564();
      func_0x00010688e228();
      FUN_10688c1c8();
    }
  }
  func_0x00010688e504();
  return;
}



/* Entry: 10688c120; end: 10688c14f;  */

void FUN_10688c120(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 10688c150; end: 10688c16f;  */

void FUN_10688c150(void)

{
  FUN_10688c170();
  return;
}



/* Entry: 10688c170; end: 10688c18b;  */

long FUN_10688c170(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10688c1b0();
  return param_1;
}



/* Entry: 10688c18c; end: 10688c1af;  */

undefined8 FUN_10688c18c(undefined8 param_1)

{
  FUN_10688c1b0(param_1,0);
  return param_1;
}



/* Entry: 10688c1b0; end: 10688c1c7;  */

void FUN_10688c1b0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10688c1c8; end: 10688c1f3;  */

long * FUN_10688c1c8(long *param_1)

{
  FUN_10688c1f4();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10688c1f4; end: 10688c217;  */

void FUN_10688c1f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10688c218; end: 10688c26b;  */

void FUN_10688c218(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10688c26c();
  if ((1 < uVar1) || (((param_2 & 1) == 0 && (uVar1 = param_1, FUN_10688c26c(), uVar1 != 0)))) {
    __ZdlPv(*(undefined8 *)(*(long *)(param_1 + 0x10) + -8));
    func_0x00010688eca0();
  }
  return;
}



/* Entry: 10688c26c; end: 10688c287;  */

ulong FUN_10688c26c(ulong param_1)

{
  func_0x00010688bd14();
  return param_1 / 0x2a;
}



/* Entry: 10688c288; end: 10688c2d7;  */

void FUN_10688c288(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar2 != lVar1 + -8) {
    lVar2 = lVar2 + -8;
    *(long *)(param_1 + 0x10) = lVar2;
  }
  return;
}



/* Entry: 10688c2d8; end: 10688c467;  */

void FUN_10688c2d8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_68 [3];
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar1 = param_1;
  func_0x00010688bd14();
  if (plVar1 < (long *)0x2a) {
    plVar1 = param_1 + 3;
    if ((ulong)(param_1[2] - param_1[1]) < (ulong)(*plVar1 - *param_1)) {
      if (param_1[1] == *param_1) {
        __Znwm(0xfc0);
        func_0x00010688e438();
        FUN_10688bf04();
        lStack_50 = *(long *)(param_1[2] + -8);
        func_0x00010688eca0();
        func_0x00010688e58c();
        FUN_10688c468();
      }
      else {
        __Znwm(0xfc0);
        func_0x00010688e438();
        FUN_10688bf7c();
      }
      if (param_1[2] - param_1[1] == 8) {
        lVar4 = 0x15;
      }
      else {
        lVar4 = param_1[4] + 0x2a;
      }
      param_1[4] = lVar4;
    }
    else {
      func_0x00010688e750();
      plStack_38 = plVar1 + param_2;
      lStack_50 = (long)plVar1;
      plStack_48 = plVar1;
      plStack_40 = plVar1;
      __Znwm(0xfc0);
      func_0x00010688eaa4();
      func_0x00010688ec50();
      auStack_68[0] = 0;
      for (lVar4 = param_1[1]; lVar2 = param_1[2], lVar4 != lVar2; lVar4 = lVar4 + 8) {
        FUN_10688c4f8(&lStack_50,lVar4);
      }
      lVar6 = param_1[1];
      lVar5 = *param_1;
      lVar4 = param_1[3];
      param_1[1] = (long)plStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = (long)plStack_40;
      if ((long)plStack_40 - (long)plStack_48 == 8) {
        lVar3 = 0x15;
      }
      else {
        lVar3 = param_1[4] + 0x2a;
      }
      param_1[4] = lVar3;
      lStack_50 = lVar5;
      plStack_48 = (long *)lVar6;
      plStack_40 = (long *)lVar2;
      plStack_38 = (long *)lVar4;
      FUN_10688c18c(auStack_68);
      func_0x00010688e940();
    }
  }
  else {
    param_1[4] = param_1[4] + 0x2a;
    lStack_50 = *(long *)(param_1[2] + -8);
    func_0x00010688eca0();
    func_0x00010688e58c();
    FUN_10688c468();
  }
  return;
}



/* Entry: 10688c468; end: 10688c4f7;  */

void FUN_10688c468(void)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010688e38c();
  if ((bool)in_ZR) {
    func_0x00010688e608();
    if ((bool)in_CY) {
      func_0x00010688ed88();
      lVar1 = extraout_x8;
      if ((bool)in_ZR) {
        lVar1 = 1;
      }
      func_0x00010688ec08();
      func_0x00010688e294(unaff_x19 + (lVar1 * 2 + 6U & 0xfffffffffffffff8));
      func_0x00010688e564();
      func_0x00010688e228();
      FUN_10688c1c8();
    }
    else {
      func_0x00010688e270();
      if (!(bool)in_ZR) {
        func_0x00010688e63c();
      }
      func_0x00010688ea68();
    }
  }
  func_0x00010688e504();
  return;
}



/* Entry: 10688c4f8; end: 10688c577;  */

void FUN_10688c4f8(long param_1)

{
  bool bVar1;
  bool bVar2;
  long unaff_x19;
  
  func_0x000100154188();
  func_0x000100153c68();
  bVar1 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(param_1 + 0x10);
  bVar2 = *(ulong *)(param_1 + 0x10) == *(ulong *)(param_1 + 0x18);
  if (bVar2) {
    func_0x00010688ea44();
    if (!bVar1 || bVar2) {
      func_0x00010688ea20();
      func_0x00010688e498(*(undefined8 *)(unaff_x19 + 0x20));
      func_0x00010688e254();
      func_0x00010688e564();
      func_0x00010688e228();
      FUN_10688c1c8();
    }
    else {
      func_0x00010688e2a8();
      if (!bVar2) {
        func_0x00010688e364();
      }
      func_0x00010688e3d4();
    }
  }
  func_0x00010688e3e4();
  return;
}



/* Entry: 10688c578; end: 10688c5bb;  */

long * FUN_10688c578(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10688bc10();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_10688c5e8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10688c5bc; end: 10688c5e7;  */

long * FUN_10688c5bc(long *param_1)

{
  FUN_10688c5e8();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10688c5e8; end: 10688c5ef;  */

void FUN_10688c5e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10688c5f0; end: 10688c69b;  */

void FUN_10688c5f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100152260();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x00010688c634(param_1 + 4,param_2 + 4);
  func_0x00010688c668(unaff_x20 + 0x38,unaff_x19 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x55);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x55) = uVar1;
  return;
}



/* Entry: 10688c69c; end: 10688c6ab;  */

void FUN_10688c69c(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = ((long)param_3 - param_2) / 0x18;
  plVar3 = (long *)*param_1;
  if ((ulong)((param_1[2] - (long)plVar3) / 0x18) < uVar1) {
    func_0x000100153868(param_1);
    plVar2 = param_1;
    func_0x000100153898(param_1,uVar1);
    func_0x000100153930(param_1);
    func_0x00010688e9fc();
    param_3 = plVar3;
  }
  else {
    lVar4 = param_1[1] - (long)plVar3;
    if (uVar1 <= (ulong)(lVar4 / 0x18)) {
      FUN_10688c78c(param_2);
      param_1[1] = (long)param_3;
      return;
    }
    FUN_10688c78c(param_2,param_2 + lVar4);
    plVar2 = (long *)(param_2 + lVar4);
  }
  plVar3 = (long *)param_1[1];
  for (; plVar2 != param_3; plVar2 = plVar2 + 3) {
    lVar5 = plVar2[1];
    lVar4 = *plVar2;
    plVar3[2] = plVar2[2];
    plVar3[1] = lVar5;
    *plVar3 = lVar4;
    plVar3 = plVar3 + 3;
  }
  param_1[1] = (long)plVar3;
  return;
}



/* Entry: 10688c6ac; end: 10688c78b;  */

void FUN_10688c6ac(long *param_1,long param_2,long *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  if ((ulong)((param_1[2] - (long)plVar2) / 0x18) < param_4) {
    func_0x000100153868(param_1);
    plVar1 = param_1;
    func_0x000100153898(param_1,param_4);
    func_0x000100153930(param_1);
    func_0x00010688e9fc();
    param_3 = plVar2;
  }
  else {
    lVar3 = param_1[1] - (long)plVar2;
    if (param_4 <= (ulong)(lVar3 / 0x18)) {
      FUN_10688c78c(param_2);
      param_1[1] = (long)param_3;
      return;
    }
    FUN_10688c78c(param_2,param_2 + lVar3);
    plVar1 = (long *)(param_2 + lVar3);
  }
  plVar2 = (long *)param_1[1];
  for (; plVar1 != param_3; plVar1 = plVar1 + 3) {
    lVar4 = plVar1[1];
    lVar3 = *plVar1;
    plVar2[2] = plVar1[2];
    plVar2[1] = lVar4;
    *plVar2 = lVar3;
    plVar2 = plVar2 + 3;
  }
  param_1[1] = (long)plVar2;
  return;
}



/* Entry: 10688c78c; end: 10688c7a7;  */

void FUN_10688c78c(void)

{
  func_0x00010688ed34();
  FUN_10688c7a8();
  return;
}



/* Entry: 10688c7a8; end: 10688c7eb;  */

void FUN_10688c7a8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    uVar1 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar1;
    *(undefined1 *)(param_4 + 2) = *(undefined1 *)(param_2 + 2);
    param_4 = param_4 + 3;
  }
  return;
}



/* Entry: 10688c7ec; end: 10688c8a7;  */

void FUN_10688c7ec(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  
  uVar3 = param_4;
  func_0x000100154268();
  puVar2 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar2 >> 4) < uVar3) {
    FUN_10688c8a8();
    puVar1 = unaff_x19;
    func_0x00010015449c();
    func_0x00010015ac40();
    func_0x00010688e670();
    unaff_x20 = puVar2;
  }
  else {
    lVar4 = unaff_x19[1];
    if (param_4 <= (ulong)(lVar4 - (long)puVar2 >> 4)) {
      FUN_10688c8cc();
      unaff_x19[1] = unaff_x20;
      return;
    }
    FUN_10688c8cc();
    puVar1 = (undefined8 *)(unaff_x21 + (lVar4 - (long)puVar2));
  }
  puVar2 = (undefined8 *)unaff_x19[1];
  for (; puVar1 != unaff_x20; puVar1 = puVar1 + 2) {
    uVar5 = *puVar1;
    puVar2[1] = puVar1[1];
    *puVar2 = uVar5;
    puVar2 = puVar2 + 2;
  }
  unaff_x19[1] = puVar2;
  return;
}



/* Entry: 10688c8a8; end: 10688c8cb;  */

void FUN_10688c8a8(long param_1)

{
  func_0x00010015385c();
  if (param_1 != 0) {
    func_0x00010688eb04();
    func_0x00010688e968();
  }
  return;
}



/* Entry: 10688c8cc; end: 10688c8e7;  */

void FUN_10688c8cc(void)

{
  func_0x00010688ed34();
  FUN_10688c8e8();
  return;
}



/* Entry: 10688c8e8; end: 10688c93b;  */

void FUN_10688c8e8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar1 = param_2[1];
    *param_4 = *param_2;
    param_4[1] = uVar1;
    param_4 = param_4 + 2;
  }
  return;
}



/* Entry: 10688c93c; end: 10688c947;  */

undefined8 * FUN_10688c93c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  func_0x00010688e3a0();
  *param_1 = 0;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  puVar4 = (undefined8 *)(lVar3 - lVar2);
  param_1[2] = puVar4;
  puVar1 = param_1;
  if ((undefined8 *)0x10 < puVar4) {
    puVar1 = puVar4;
    __Znam();
    *param_1 = puVar1;
    lVar2 = *param_2;
    lVar3 = param_2[1];
  }
  if (lVar3 != lVar2) {
    func_0x00010688e63c();
    puVar4 = (undefined8 *)param_1[2];
  }
  FUN_10688c9c0(puVar1,(long)puVar1 + (long)puVar4);
  return param_1;
}



/* Entry: 10688c948; end: 10688c9bf;  */

undefined8 * FUN_10688c948(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  lVar2 = *param_2;
  lVar3 = param_2[1];
  puVar4 = (undefined8 *)(lVar3 - lVar2);
  param_1[2] = puVar4;
  puVar1 = param_1;
  if ((undefined8 *)0x10 < puVar4) {
    puVar1 = puVar4;
    __Znam();
    *param_1 = puVar1;
    lVar2 = *param_2;
    lVar3 = param_2[1];
  }
  if (lVar3 != lVar2) {
    func_0x00010688e63c();
    puVar4 = (undefined8 *)param_1[2];
  }
  FUN_10688c9c0(puVar1,(long)puVar1 + (long)puVar4);
  return param_1;
}



/* Entry: 10688c9c0; end: 10688c9f7;  */

void FUN_10688c9c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010688c9dc(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10688c9f8; end: 10688ca2b;  */

long * FUN_10688c9f8(long *param_1)

{
  if ((0x10 < (ulong)param_1[2]) && (*param_1 != 0)) {
    __ZdaPv();
  }
  return param_1;
}



/* Entry: 10688ca2c; end: 10688cbd3;  */

undefined8 * FUN_10688ca2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_290 [3];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 auStack_238 [4];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1f0 [72];
  undefined1 auStack_1a8 [80];
  undefined1 auStack_158 [80];
  undefined1 auStack_108 [80];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [80];
  undefined8 uStack_48;
  
  func_0x00010688e300();
  uVar4 = param_2;
  uStack_48 = extraout_x8;
  func_0x0001006801f0();
  FUN_10688cca4(auStack_b8,param_3);
  FUN_10688ccc8(auStack_1f0,param_2,uVar4,auStack_b8);
  FUN_10688cc40(auStack_98,auStack_1f0);
  FUN_10688d5b8(auStack_1f0);
  FUN_10688c9f8(auStack_b8);
  auStack_238[0] = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f8 = 1;
  FUN_10688cc40(auStack_108,auStack_238);
  FUN_10688d5b8(auStack_238);
  FUN_10688cc40(auStack_158,auStack_98);
  FUN_10688cc40(auStack_1a8,auStack_108);
  puVar1 = auStack_158;
  FUN_10688d614(&uStack_250,puVar1,auStack_1a8);
  uVar3 = SUB84(puVar1,0);
  FUN_10688d5b8(auStack_1a8);
  FUN_10688d5b8(auStack_158);
  uVar6 = param_1[1];
  uVar5 = *param_1;
  param_1[1] = uStack_248;
  *param_1 = uStack_250;
  uVar4 = param_1[2];
  param_1[2] = uStack_240;
  uStack_250 = uVar5;
  uStack_248 = uVar6;
  uStack_240 = uVar4;
  func_0x0001000e30f4(&uStack_250);
  FUN_10688d5b8(auStack_108);
  puVar1 = auStack_98;
  FUN_10688d5b8();
  func_0x00010688e240(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10688d5b8(auStack_1a8);
  FUN_10688d5b8(auStack_158);
  FUN_10688d5b8(auStack_108);
  FUN_10688d5b8(auStack_98);
  func_0x00010688e3cc();
  puVar2 = auStack_290;
  pcStack_258 = FUN_10688cbd4;
  uStack_270 = param_2;
  puStack_268 = puVar1;
  puStack_260 = &stack0xfffffffffffffff0;
  func_0x00010688e300();
  uStack_278 = extraout_x8_01;
  FUN_10688d7f0(auStack_290);
  func_0x00010688ed28();
  FUN_10688d7f0();
  *(undefined4 *)(extraout_x8_00 + 0x18) = uVar3;
  func_0x00010688e534();
  func_0x00010688e240(uStack_278);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010015221c();
  FUN_10688c9f8();
  func_0x00010688e3cc();
  func_0x00010688cc60();
  func_0x00010688e6c8();
  return puVar2;
}



/* Entry: 10688cbd4; end: 10688cc3f;  */

void FUN_10688cbd4(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x00010688e300(param_2,param_2);
  uStack_28 = extraout_x8;
  FUN_10688d7f0(auStack_40);
  func_0x00010688ed28();
  FUN_10688d7f0();
  *(undefined4 *)(param_1 + 0x18) = param_3;
  func_0x00010688e534();
  func_0x00010688e240(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010015221c();
  FUN_10688c9f8();
  func_0x00010688e3cc();
  func_0x00010688cc60();
  func_0x00010688e6c8();
  return;
}



/* Entry: 10688cc40; end: 10688cc83;  */

void FUN_10688cc40(void)

{
  func_0x00010688cc60();
  func_0x00010688e6c8();
  return;
}



/* Entry: 10688cc84; end: 10688cca3;  */

void FUN_10688cc84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *param_1 = puVar1;
  if (((ulong)puVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010688e74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(param_2 + 1,param_1 + 1,0);
    return;
  }
  uVar3 = param_2[2];
  uVar2 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10688cca4; end: 10688ccc7;  */

void FUN_10688cca4(long param_1,long param_2)

{
  FUN_10688d7f0();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return;
}



/* Entry: 10688ccc8; end: 10688cd5f;  */

long FUN_10688ccc8(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x000100154268();
  func_0x00010688e300();
  uStack_38 = extraout_x8;
  FUN_10688cca4(auStack_58,in_x3);
  func_0x000100153e64();
  FUN_10688cd60();
  func_0x00010688e4b4();
  *(long *)(unaff_x19 + 0x20) = unaff_x21;
  *(long *)(unaff_x19 + 0x28) = unaff_x21;
  *(long *)(unaff_x19 + 0x30) = unaff_x21;
  *(long *)(unaff_x19 + 0x38) = unaff_x20;
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  uVar1 = unaff_x21 == unaff_x20;
  if (!(bool)uVar1) {
    FUN_10688cdbc();
  }
  func_0x00010688e240(uStack_38);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  FUN_10688d5b8();
  func_0x00010688e418();
  lVar2 = unaff_x19;
  func_0x00010688e300();
  func_0x00010688e7a0();
  func_0x000100153e64();
  FUN_10688ce0c();
  func_0x00010688e4b4();
  func_0x00010688e240(extraout_x8_00);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  func_0x00010688e420();
  func_0x00010688e3cc();
  lVar4 = *(long *)(lVar2 + 0x30);
  lVar3 = lVar2;
  FUN_10688d318();
  if ((*(long *)(lVar2 + 0x38) == lVar3 && *(long *)(lVar2 + 0x38) == lVar4) &&
     (*(long *)(lVar2 + 0x28) == lVar4)) {
    *(undefined1 *)(lVar2 + 0x40) = 1;
  }
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 0x30);
  *(long *)(lVar2 + 0x28) = lVar3;
  *(long *)(lVar2 + 0x30) = lVar4;
  return lVar3;
}



/* Entry: 10688cd60; end: 10688cdbb;  */

long FUN_10688cd60(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  
  lVar1 = param_1;
  func_0x00010688e300();
  func_0x00010688e7a0();
  func_0x000100153e64();
  FUN_10688ce0c();
  func_0x00010688e4b4();
  func_0x00010688e240(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010688e420();
  func_0x00010688e3cc();
  lVar3 = *(long *)(lVar1 + 0x30);
  lVar2 = lVar1;
  FUN_10688d318();
  if ((*(long *)(lVar1 + 0x38) == lVar2 && *(long *)(lVar1 + 0x38) == lVar3) &&
     (*(long *)(lVar1 + 0x28) == lVar3)) {
    *(undefined1 *)(lVar1 + 0x40) = 1;
  }
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x30);
  *(long *)(lVar1 + 0x28) = lVar2;
  *(long *)(lVar1 + 0x30) = lVar3;
  return lVar2;
}



/* Entry: 10688cdbc; end: 10688ce0b;  */

void FUN_10688cdbc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  lVar1 = param_1;
  FUN_10688d318(param_1,lVar2,*(undefined8 *)(param_1 + 0x38));
  if ((*(long *)(param_1 + 0x38) == lVar1 && *(long *)(param_1 + 0x38) == lVar2) &&
     (*(long *)(param_1 + 0x28) == lVar2)) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x30) = lVar2;
  return;
}



/* Entry: 10688ce0c; end: 10688ce67;  */

undefined ** FUN_10688ce0c(undefined **param_1)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined **ppuStack_e8;
  undefined8 auStack_a8 [4];
  undefined8 uStack_88;
  
  ppuVar5 = param_1;
  func_0x00010688e300();
  *ppuVar5 = (undefined *)0x0;
  func_0x00010688e7a0();
  func_0x000100153e64();
  FUN_10688ce68();
  func_0x00010688e4b4();
  func_0x00010688e240(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010688e420();
  func_0x00010688e3cc();
  func_0x00010688e300();
  uStack_88 = extraout_x8_00;
  func_0x00010688e7a0();
  ppuVar1 = &PTR_FUN_110945740;
  puVar6 = auStack_a8;
  iVar7 = (int)ppuVar5 + 8;
  ppuVar3 = ppuVar1;
  FUN_10688cf08();
  ppuVar4 = ppuVar3;
  func_0x00010688e4b4();
  bVar2 = (int)ppuVar3 == 0;
  if (bVar2) {
    ppuVar1 = (undefined **)0x0;
  }
  *ppuVar5 = (undefined *)ppuVar1;
  func_0x00010688e240(uStack_88);
  if (bVar2) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010688e420();
  func_0x00010688e3cc();
  if (iVar7 == 4) {
    *puVar6 = &PTR_DAT_110945750;
    *(undefined2 *)(puVar6 + 1) = 0;
    return ppuVar4;
  }
  ppuVar5 = ppuVar4;
  switch(iVar7) {
  case 0:
    func_0x0001001522c4();
    ppuVar5 = ppuVar4;
    FUN_10688cca4();
    *puVar6 = ppuVar4;
    break;
  case 1:
    *puVar6 = *ppuVar4;
    *ppuVar4 = (undefined *)0x0;
    break;
  case 2:
    ppuVar5 = (undefined **)*puVar6;
    if (ppuVar5 != (undefined **)0x0) {
      FUN_10688c9f8();
    }
    __ZdlPv();
    goto code_r0x00010688d000;
  case 3:
    ppuVar5 = (undefined **)*puVar6;
    ppuStack_e8 = &PTR_DAT_110945750;
    FUN_10688d038(ppuVar5,&ppuStack_e8);
    if ((int)ppuVar5 != 0) {
      *puVar6 = *ppuVar4;
      return ppuVar5;
    }
code_r0x00010688d000:
    *puVar6 = 0;
    break;
  default:
    *puVar6 = &PTR_DAT_110945750;
    *(undefined2 *)(puVar6 + 1) = 0;
  }
  return ppuVar5;
}



/* Entry: 10688ce68; end: 10688cedf;  */

void FUN_10688ce68(undefined8 *param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  undefined8 extraout_x8;
  undefined **ppuStack_98;
  long alStack_58 [4];
  undefined8 uStack_38;
  
  func_0x00010688e300();
  uStack_38 = extraout_x8;
  func_0x00010688e7a0();
  ppuVar1 = &PTR_FUN_110945740;
  plVar6 = alStack_58;
  iVar7 = (int)param_1 + 8;
  ppuVar3 = ppuVar1;
  FUN_10688cf08();
  ppuVar4 = ppuVar3;
  func_0x00010688e4b4();
  bVar2 = (int)ppuVar3 == 0;
  if (bVar2) {
    ppuVar1 = (undefined **)0x0;
  }
  *param_1 = ppuVar1;
  func_0x00010688e240(uStack_38);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010688e420();
  func_0x00010688e3cc();
  if (iVar7 == 4) {
    *plVar6 = (long)&PTR_DAT_110945750;
    *(undefined2 *)(plVar6 + 1) = 0;
    return;
  }
  switch(iVar7) {
  case 0:
    func_0x0001001522c4();
    FUN_10688cca4();
    *plVar6 = (long)ppuVar4;
    break;
  case 1:
    *plVar6 = (long)*ppuVar4;
    *ppuVar4 = (undefined *)0x0;
    break;
  case 2:
    if (*plVar6 != 0) {
      FUN_10688c9f8();
    }
    __ZdlPv();
    goto code_r0x00010688d000;
  case 3:
    lVar5 = *plVar6;
    ppuStack_98 = &PTR_DAT_110945750;
    FUN_10688d038(lVar5,&ppuStack_98);
    if ((int)lVar5 != 0) {
      *plVar6 = (long)*ppuVar4;
      return;
    }
code_r0x00010688d000:
    *plVar6 = 0;
    break;
  default:
    *plVar6 = (long)&PTR_DAT_110945750;
    *(undefined2 *)(plVar6 + 1) = 0;
  }
  return;
}



/* Entry: 10688cee0; end: 10688cf07;  */

void FUN_10688cee0(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined **ppuStack_38;
  
  if (param_3 == 4) {
    *param_2 = (long)&PTR_DAT_110945750;
    *(undefined2 *)(param_2 + 1) = 0;
    return;
  }
  switch(param_3) {
  case 0:
    func_0x0001001522c4();
    FUN_10688cca4();
    *param_2 = (long)param_1;
    break;
  case 1:
    *param_2 = *param_1;
    *param_1 = 0;
    break;
  case 2:
    if (*param_2 != 0) {
      FUN_10688c9f8();
    }
    __ZdlPv();
    goto code_r0x00010688d000;
  case 3:
    lVar1 = *param_2;
    ppuStack_38 = &PTR_DAT_110945750;
    FUN_10688d038(lVar1,&ppuStack_38);
    if ((int)lVar1 != 0) {
      *param_2 = *param_1;
      return;
    }
code_r0x00010688d000:
    *param_2 = 0;
    break;
  default:
    *param_2 = (long)&PTR_DAT_110945750;
    *(undefined2 *)(param_2 + 1) = 0;
  }
  return;
}



/* Entry: 10688cf08; end: 10688cf67;  */

undefined8 * FUN_10688cf08(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined **ppuStack_88;
  undefined8 auStack_48 [4];
  undefined8 uStack_28;
  
  func_0x00010688e9b4();
  func_0x00010688e300();
  uStack_28 = extraout_x8;
  func_0x00010688e7a0();
  puVar3 = auStack_48;
  func_0x00010688e948();
  FUN_10688d280();
  puVar1 = param_1;
  func_0x00010688e4b4();
  func_0x00010688e240(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010688e420();
  func_0x00010688e3cc();
  puVar2 = puVar1;
  switch(param_3) {
  case 0:
    func_0x0001001522c4();
    puVar2 = puVar1;
    FUN_10688cca4();
    *puVar3 = puVar1;
    break;
  case 1:
    *puVar3 = *puVar1;
    *puVar1 = 0;
    break;
  case 2:
    puVar2 = (undefined8 *)*puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_10688c9f8();
    }
    __ZdlPv();
    goto code_r0x00010688d000;
  case 3:
    puVar2 = (undefined8 *)*puVar3;
    ppuStack_88 = &PTR_DAT_110945750;
    FUN_10688d038(puVar2,&ppuStack_88);
    if ((int)puVar2 != 0) {
      *puVar3 = *puVar1;
      return puVar2;
    }
code_r0x00010688d000:
    *puVar3 = 0;
    break;
  default:
    *puVar3 = &PTR_DAT_110945750;
    *(undefined2 *)(puVar3 + 1) = 0;
  }
  return puVar2;
}



/* Entry: 10688cf68; end: 10688d037;  */

void FUN_10688cf68(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined **ppuStack_38;
  
  switch(param_3) {
  case 0:
    func_0x0001001522c4();
    FUN_10688cca4();
    *param_2 = (long)param_1;
    break;
  case 1:
    *param_2 = *param_1;
    *param_1 = 0;
    break;
  case 2:
    if (*param_2 != 0) {
      FUN_10688c9f8();
    }
    __ZdlPv();
    goto code_r0x00010688d000;
  case 3:
    lVar1 = *param_2;
    ppuStack_38 = &PTR_DAT_110945750;
    FUN_10688d038(lVar1,&ppuStack_38);
    if ((int)lVar1 != 0) {
      *param_2 = *param_1;
      return;
    }
code_r0x00010688d000:
    *param_2 = 0;
    break;
  default:
    *param_2 = (long)&PTR_DAT_110945750;
    *(undefined2 *)(param_2 + 1) = 0;
  }
  return;
}



/* Entry: 10688d038; end: 10688d09b;  */

void FUN_10688d038(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010688d058(&uStack_18);
  return;
}



/* Entry: 10688d09c; end: 10688d14b;  */

char * FUN_10688d09c(char *param_1,char *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  char *unaff_x19;
  char *pcVar5;
  char *unaff_x21;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar4 = auStack_50;
  func_0x000100153eb4();
  func_0x00010688e300();
  uStack_38 = extraout_x8;
  func_0x00010688eb24();
  func_0x00010688e954();
  FUN_10688d14c();
  pcVar2 = param_1;
  func_0x00010688e534();
  uVar1 = unaff_x19 == param_1;
  if ((!(bool)uVar1) && (*(int *)(unaff_x21 + 0x18) == 0)) {
    for (; uVar1 = param_1 == unaff_x19, !(bool)uVar1; param_1 = param_1 + 1) {
      param_2 = (char *)(long)*param_1;
      pcVar2 = unaff_x21;
      FUN_10688d198();
      if ((int)pcVar2 == 0) break;
    }
  }
  func_0x00010688e240(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010015221c();
    FUN_10688c9f8();
    func_0x00010688e3cc();
    while ((pcVar5 = param_2, pcVar2 != param_2 &&
           (puVar3 = puVar4, FUN_10688d198(puVar4,(long)*pcVar2), pcVar5 = pcVar2,
           ((ulong)puVar3 & 1) == 0))) {
      pcVar2 = pcVar2 + 1;
    }
    return pcVar5;
  }
  func_0x00010688e954();
  return pcVar2;
}



/* Entry: 10688d14c; end: 10688d197;  */

char * FUN_10688d14c(char *param_1,char *param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  
  while ((pcVar2 = param_2, param_1 != param_2 &&
         (uVar1 = param_3, FUN_10688d198(param_3,(long)*param_1), pcVar2 = param_1, (uVar1 & 1) == 0
         ))) {
    param_1 = param_1 + 1;
  }
  return pcVar2;
}



/* Entry: 10688d198; end: 10688d1cb;  */

void FUN_10688d198(undefined8 *param_1,undefined1 param_2)

{
  ulong *puVar1;
  undefined1 uStack_11;
  
  puVar1 = param_1 + 2;
  if (0x10 < *puVar1) {
    param_1 = (undefined8 *)*param_1;
  }
  uStack_11 = param_2;
  FUN_10688d1cc(param_1,(long)param_1 + *puVar1,&uStack_11);
  return;
}



/* Entry: 10688d1cc; end: 10688d21b;  */

bool FUN_10688d1cc(char *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  
  FUN_10688d21c();
  if (param_1 == param_2) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_1 <= *param_3;
  }
  return bVar1;
}



/* Entry: 10688d21c; end: 10688d23b;  */

void FUN_10688d21c(void)

{
  FUN_10688d23c();
  return;
}



/* Entry: 10688d23c; end: 10688d27f;  */

void FUN_10688d23c(char *param_1,long param_2,char *param_3)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar2 = param_2 - (long)param_1;
  while (pcVar3 = param_1, uVar2 != 0) {
    pcVar1 = pcVar3 + (uVar2 >> 1);
    uVar4 = uVar2 >> 1;
    uVar2 = uVar2 + (uVar2 >> 1 ^ 0xffffffffffffffff);
    param_1 = pcVar1 + 1;
    if (*param_3 <= *pcVar1) {
      uVar2 = uVar4;
      param_1 = pcVar3;
    }
  }
  return;
}



/* Entry: 10688d280; end: 10688d2db;  */

undefined8 FUN_10688d280(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  func_0x00010688e9b4();
  func_0x00010688e300();
  func_0x00010688e7a0();
  func_0x00010688e948();
  FUN_10688d2dc();
  func_0x00010688e4b4();
  func_0x00010688e240(extraout_x8);
  if ((bool)in_ZR) {
    return 1;
  }
  ___stack_chk_fail();
  func_0x00010688e420();
  func_0x00010688e3cc();
  func_0x0001001522c4();
  uVar1 = param_1;
  FUN_10688cca4();
  *param_3 = param_1;
  return uVar1;
}



/* Entry: 10688d2dc; end: 10688d317;  */

void FUN_10688d2dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x0001001522c4();
  FUN_10688cca4();
  *param_3 = param_1;
  return;
}



/* Entry: 10688d318; end: 10688d343;  */

void FUN_10688d318(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10688d344();
  }
  return;
}



/* Entry: 10688d344; end: 10688d38f;  */

void FUN_10688d344(ulong *param_1)

{
  code *pcVar1;
  undefined1 auStack_30 [16];
  
  if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010688ec88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((*param_1 & 0xfffffffffffffffe) + 8))(param_1 + 1);
    return;
  }
  FUN_10688d590(auStack_30);
  FUN_10688d390(auStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10688d384);
  (*pcVar1)();
}



/* Entry: 10688d390; end: 10688d3b7;  */

void FUN_10688d390(void)

{
  func_0x00010688ecc0();
  FUN_10688d3b8();
  func_0x00010688e5a4();
  func_0x00010688e2c0();
  func_0x00010688e418();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10688d3b8; end: 10688d3c3;  */

void FUN_10688d3b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10688d3c4; end: 10688d407;  */

undefined8 * FUN_10688d3c4(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  FUN_10688d408(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  func_0x00010688e848();
  param_1[3] = extraout_x8;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10688d408; end: 10688d427;  */

void FUN_10688d408(void)

{
  __ZNSt13runtime_errorC2ERKS_();
  func_0x00010015b518(&UNK_110945838);
  return;
}



/* Entry: 10688d428; end: 10688d48b;  */

long FUN_10688d428(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm(0x40);
  FUN_10688d500();
  func_0x00010530126c(lVar1 + 0x18,param_1 + 0x18);
  return lVar1;
}



/* Entry: 10688d48c; end: 10688d4b3;  */

void FUN_10688d48c(void)

{
  func_0x00010688ecc0();
  FUN_10688d4fc();
  func_0x00010688e5a4();
  func_0x00010688e2c0();
  func_0x00010688e418();
  FUN_10688d564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10688d4b4; end: 10688d4c7;  */

void FUN_10688d4b4(void)

{
  FUN_10688d564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10688d4c8; end: 10688d4e7;  */

long FUN_10688d4c8(long param_1)

{
  func_0x0001053010fc(param_1 + 0x10);
  __ZNSt13runtime_errorD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 10688d4e8; end: 10688d4fb;  */

void FUN_10688d4e8(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10688d4fc; end: 10688d4ff;  */

void FUN_10688d4fc(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100153c68();
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  FUN_10688d408(param_1 + 1,param_2 + 8);
  func_0x000105301370(param_1 + 3,unaff_x20 + 0x18);
  func_0x00010688e848();
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10688d500; end: 10688d563;  */

void FUN_10688d500(undefined8 *param_1,long param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100153c68();
  *param_1 = &PTR____cxa_pure_virtual_1108775d8;
  FUN_10688d408(param_1 + 1,param_2 + 8);
  func_0x000105301370(param_1 + 3,unaff_x20 + 0x18);
  func_0x00010688e848();
  *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
  return;
}



/* Entry: 10688d564; end: 10688d58f;  */

long FUN_10688d564(long param_1)

{
  func_0x0001053010fc(param_1 + 0x18);
  __ZNSt13runtime_errorD2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10688d590; end: 10688d5b7;  */

void FUN_10688d590(undefined8 param_1)

{
  __ZNSt13runtime_errorC2EPKc(param_1,&UNK_10f39e3a9);
  func_0x00010015b518(&UNK_110945838);
  return;
}



/* Entry: 10688d5b8; end: 10688d5db;  */

undefined8 FUN_10688d5b8(undefined8 param_1)

{
  FUN_10688d5dc();
  return param_1;
}



/* Entry: 10688d5dc; end: 10688d613;  */

void FUN_10688d5dc(ulong *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((((ulong)plVar1 & 1) == 0) && (*plVar1 != 0)) {
      func_0x00010688e838();
    }
    *param_1 = 0;
  }
  return;
}



/* Entry: 10688d614; end: 10688d6ab;  */

undefined1 * FUN_10688d614(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_128 [24];
  undefined1 *puStack_110;
  undefined1 uStack_108;
  undefined1 auStack_c8 [80];
  undefined1 auStack_78 [80];
  undefined8 uStack_28;
  
  func_0x00010688e300();
  uStack_28 = extraout_x8;
  func_0x00010015aa90();
  FUN_10688cc40(auStack_78);
  FUN_10688cc40(auStack_c8,param_3);
  FUN_10688d6ac(param_1,auStack_78,auStack_c8);
  FUN_10688d5b8(auStack_c8);
  FUN_10688d5b8(auStack_78);
  func_0x00010688e240(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010688e458();
  FUN_10688d5b8();
  puVar1 = auStack_78;
  FUN_10688d5b8();
  func_0x00010688e3cc();
  func_0x000100153eb4();
  uStack_108 = 0;
  puStack_110 = puVar1;
  while( true ) {
    func_0x00010688e954();
    FUN_10688d720();
    if ((int)puVar1 == 0) break;
    func_0x00010688d7ec(auStack_128,param_3 + 0x20);
    func_0x00010688eaf8();
    func_0x000100152c24();
    puVar1 = param_3;
    FUN_10688cdbc();
  }
  func_0x00010688e8f4();
  return puVar1;
}



/* Entry: 10688d6ac; end: 10688d71f;  */

void FUN_10688d6ac(long param_1)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x000100153eb4();
  uStack_38 = 0;
  lStack_40 = param_1;
  while( true ) {
    iVar1 = (int)param_1;
    func_0x00010688e954();
    FUN_10688d720();
    if (iVar1 == 0) break;
    func_0x00010688d7ec(auStack_58,unaff_x20 + 0x20);
    func_0x00010688eaf8();
    func_0x000100152c24();
    param_1 = unaff_x20;
    FUN_10688cdbc();
  }
  func_0x00010688e8f4();
  return;
}



/* Entry: 10688d720; end: 10688d737;  */

uint FUN_10688d720(uint param_1)

{
  FUN_10688d738();
  return param_1 ^ 1;
}


