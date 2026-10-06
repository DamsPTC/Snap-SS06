/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106888648; end: 1068886c7;  */

void FUN_106888648(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000100152b88();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  lVar4 = *(long *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
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
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return;
}



/* Entry: 1068886c8; end: 1068886eb;  */

void FUN_1068886c8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_3 + 2);
    param_1 = param_1 + 3;
  }
  return;
}



/* Entry: 1068886ec; end: 1068886f7;  */

void FUN_1068886ec(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010688e3a0();
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e3a0();
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x60;
    func_0x0001001540b8();
  }
  return;
}



/* Entry: 1068886f8; end: 10688871f;  */

void FUN_1068886f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e3a0();
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x60;
    func_0x0001001540b8();
  }
  return;
}



/* Entry: 106888720; end: 106888747;  */

void FUN_106888720(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e3a0();
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x60;
    func_0x0001001540b8();
  }
  return;
}



/* Entry: 106888748; end: 106888753;  */

void FUN_106888748(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010688e3a0();
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x60;
    func_0x0001001540b8();
  }
  return;
}



/* Entry: 106888754; end: 106888773;  */

void FUN_106888754(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x60;
    func_0x0001001540b8();
  }
  return;
}



/* Entry: 106888774; end: 1068887a3;  */

void FUN_106888774(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x60;
    func_0x0001001540b8();
  }
  return;
}



/* Entry: 1068887a4; end: 1068887c3;  */

void FUN_1068887a4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2 * 2;
  return;
}



/* Entry: 1068887c4; end: 1068887cf;  */

void FUN_1068887c4(long param_1)

{
  func_0x00010688e3a0();
  func_0x000100152f48();
  func_0x0001001534ac(*(undefined8 *)(param_1 + 0x38));
  func_0x00010015312c();
  return;
}



/* Entry: 1068887d0; end: 1068887ff;  */

void FUN_1068887d0(long param_1)

{
  func_0x000100152f48();
  func_0x0001001534ac(*(undefined8 *)(param_1 + 0x38));
  func_0x00010015312c();
  return;
}



/* Entry: 106888800; end: 106888977;  */

byte * FUN_106888800(byte *param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *unaff_x19;
  byte *pbVar5;
  
  func_0x00010688e580();
  pbVar4 = unaff_x19;
  if ((!(bool)in_ZR) && (*unaff_x19 == 0x5c)) {
    pbVar5 = unaff_x19 + 1;
    if (pbVar5 == param_3) {
      FUN_106888a18();
      pbVar4 = param_2;
      if ((param_2 != param_3) && (*param_2 == 0x5b)) {
        uVar2 = 1;
        pbVar4 = param_1;
        if (param_2 + 1 != param_3) {
          pbVar5 = param_2 + 2;
          if (param_2[1] != 0x5e) {
            pbVar5 = param_2 + 1;
          }
          pbVar3 = param_1;
          func_0x000100152a30();
          uVar2 = 1;
          pbVar4 = pbVar3;
          if (pbVar5 != param_3) {
            if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pbVar5 == 0x5d)) {
              FUN_1068893d8(pbVar3,0x5d);
              pbVar5 = pbVar5 + 1;
            }
            FUN_10688988c(param_1,pbVar5,param_3,pbVar3);
            uVar2 = 1;
            pbVar4 = param_1;
            if (param_3 != param_1) {
              if (*param_1 == 0x2d) {
                FUN_1068893d8(pbVar3,0x2d);
                param_1 = param_1 + 1;
                pbVar4 = pbVar3;
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
            (uVar1 = *pbVar4 - 0x24,
            0x3a < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x7800000080004f1U) == 0)) &&
           (2 < *pbVar4 - 0x7b)) {
          func_0x00010688e718();
          pbVar4 = pbVar4 + 1;
        }
        return pbVar4;
      }
    }
    else {
      pbVar4 = param_1;
      func_0x00010688e9fc();
      FUN_106888a40();
      if (pbVar5 == pbVar4) {
        pbVar4 = param_1;
        func_0x00010688e9fc();
        func_0x000106888af4();
        if (pbVar5 == pbVar4) {
          func_0x00010688e9fc();
          FUN_106888bb0();
          pbVar4 = unaff_x19;
          if (pbVar5 != param_1) {
            pbVar4 = param_1;
          }
        }
      }
    }
  }
  return pbVar4;
}



/* Entry: 106888978; end: 10688899f;  */

byte * FUN_106888978(byte *param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e580();
  if (((!(bool)in_ZR) &&
      (uVar1 = *param_1 - 0x24,
      0x3a < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x7800000080004f1U) == 0)) &&
     (2 < *param_1 - 0x7b)) {
    func_0x00010688e718();
    param_1 = param_1 + 1;
  }
  return param_1;
}



/* Entry: 1068889a0; end: 1068889ff;  */

byte * FUN_1068889a0(void)

{
  uint uVar1;
  undefined1 in_ZR;
  byte *unaff_x19;
  
  func_0x00010688e580();
  if (((!(bool)in_ZR) &&
      (uVar1 = *unaff_x19 - 0x24,
      0x3a < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x7800000080004f1U) == 0)) &&
     (2 < *unaff_x19 - 0x7b)) {
    func_0x00010688e718();
    unaff_x19 = unaff_x19 + 1;
  }
  return unaff_x19;
}



/* Entry: 106888a00; end: 106888a03;  */

long FUN_106888a00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106888a04; end: 106888a17;  */

void FUN_106888a04(void)

{
  func_0x00010015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106888a18; end: 106888a3f;  */

byte * FUN_106888a18(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  func_0x00010688e480();
  pbVar4 = (byte *)0x3;
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  if (pbVar4 == param_3) {
    return pbVar4;
  }
  bVar1 = *pbVar4;
  uVar5 = (uint)bVar1;
  if (bVar1 == 0x30) {
    func_0x00010015341c();
    return pbVar4 + 1;
  }
  if (8 < bVar1 - 0x31) {
    return pbVar4;
  }
  while( true ) {
    pbVar4 = pbVar4 + 1;
    uVar5 = uVar5 - 0x30;
    uVar3 = true;
    pbVar6 = param_3;
    if (pbVar4 == param_3) break;
    uVar2 = *pbVar4 - 0x30;
    uVar3 = uVar2 == 9;
    pbVar6 = pbVar4;
    if (9 < uVar2) break;
    uVar3 = uVar5 == 0x19999999;
    pbVar6 = param_3;
    if (0x19999998 < uVar5) goto LAB_106888af0;
    uVar5 = (uint)*pbVar4 + uVar5 * 10;
  }
  if ((uVar5 != 0) &&
     (uVar3 = uVar5 == *(uint *)(param_1 + 0x1c), uVar5 <= *(uint *)(param_1 + 0x1c))) {
    FUN_106888ebc();
    return pbVar6;
  }
LAB_106888af0:
  FUN_106888e94();
  func_0x00010688e580();
  if ((bool)uVar3) {
    return pbVar6;
  }
  bVar1 = *pbVar6;
  if (bVar1 == 0x44) {
LAB_106888b90:
    func_0x000100152a30();
    uVar5 = *(uint *)(param_1 + 0xa0) | 0x400;
  }
  else {
    if (bVar1 != 0x53) {
      if ((bVar1 == 0x57) || (bVar1 == 0x77)) {
        func_0x000100152a30();
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x500;
        FUN_1068893d8();
        goto LAB_106888ba0;
      }
      if (bVar1 != 0x73) {
        if (bVar1 != 100) {
          return pbVar6;
        }
        goto LAB_106888b90;
      }
    }
    func_0x000100152a30();
    uVar5 = *(uint *)(param_1 + 0xa0) | 0x4000;
  }
  *(uint *)(param_1 + 0xa0) = uVar5;
LAB_106888ba0:
  return pbVar6 + 1;
}



/* Entry: 106888a40; end: 106888baf;  */

byte * FUN_106888a40(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar1 = *param_2;
  uVar4 = (uint)bVar1;
  if (bVar1 == 0x30) {
    func_0x00010015341c(param_1,0);
    return param_2 + 1;
  }
  if (8 < bVar1 - 0x31) {
    return param_2;
  }
  while( true ) {
    param_2 = param_2 + 1;
    uVar4 = uVar4 - 0x30;
    uVar3 = true;
    pbVar5 = param_3;
    if (param_2 == param_3) break;
    uVar2 = *param_2 - 0x30;
    uVar3 = uVar2 == 9;
    pbVar5 = param_2;
    if (9 < uVar2) break;
    uVar3 = uVar4 == 0x19999999;
    pbVar5 = param_3;
    if (0x19999998 < uVar4) goto LAB_106888af0;
    uVar4 = (uint)*param_2 + uVar4 * 10;
  }
  if ((uVar4 != 0) &&
     (uVar3 = uVar4 == *(uint *)(param_1 + 0x1c), uVar4 <= *(uint *)(param_1 + 0x1c))) {
    FUN_106888ebc();
    return pbVar5;
  }
LAB_106888af0:
  FUN_106888e94();
  func_0x00010688e580();
  if ((bool)uVar3) {
    return pbVar5;
  }
  bVar1 = *pbVar5;
  if (bVar1 == 0x44) {
LAB_106888b90:
    func_0x000100152a30();
    uVar4 = *(uint *)(param_1 + 0xa0) | 0x400;
  }
  else {
    if (bVar1 != 0x53) {
      if ((bVar1 == 0x57) || (bVar1 == 0x77)) {
        func_0x000100152a30();
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x500;
        FUN_1068893d8();
        goto LAB_106888ba0;
      }
      if (bVar1 != 0x73) {
        if (bVar1 != 100) {
          return pbVar5;
        }
        goto LAB_106888b90;
      }
    }
    func_0x000100152a30();
    uVar4 = *(uint *)(param_1 + 0xa0) | 0x4000;
  }
  *(uint *)(param_1 + 0xa0) = uVar4;
LAB_106888ba0:
  return pbVar5 + 1;
}



/* Entry: 106888bb0; end: 106888e93;  */

byte * FUN_106888bb0(byte *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined1 in_ZR;
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  undefined2 uVar7;
  long extraout_x8;
  byte *unaff_x19;
  int iVar6;
  
  func_0x00010688e580();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  bVar5 = *unaff_x19;
  pbVar3 = param_1;
  pbVar2 = param_1;
  switch(bVar5) {
  case 0x6e:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x00010688e37c();
      }
      else {
        func_0x00010688e6bc();
      }
      uVar7 = 10;
code_r0x000106888e5c:
      *(undefined2 *)param_4 = uVar7;
      goto LAB_106888e60;
    }
    iVar6 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
LAB_106888c40:
    iVar6 = (int)(char)bVar5;
    if ((-1 < iVar6) &&
       ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + (ulong)bVar5 * 4) & 0x500) != 0))
    goto LAB_106888e90;
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x00010688e37c();
        bVar5 = (byte)iVar6;
      }
      else {
        func_0x00010688e6bc();
        bVar5 = (byte)iVar6;
      }
      *param_4 = bVar5;
      param_4[1] = 0;
      goto LAB_106888e60;
    }
    break;
  case 0x72:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x00010688e37c();
      }
      else {
        func_0x00010688e6bc();
      }
      uVar7 = 0xd;
      goto code_r0x000106888e5c;
    }
    iVar6 = 0xd;
    break;
  case 0x74:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x00010688e37c();
      }
      else {
        func_0x00010688e6bc();
      }
      uVar7 = 9;
      goto code_r0x000106888e5c;
    }
    iVar6 = 9;
    break;
  case 0x75:
    bVar1 = unaff_x19 + 1 == param_3;
    if (((!bVar1) && (FUN_10688eb80(), !bVar1)) && (unaff_x19 = unaff_x19 + 2, unaff_x19 != param_3)
       ) {
      pbVar2 = (byte *)(ulong)*unaff_x19;
      FUN_106889814(pbVar2,0x10);
      pbVar3 = pbVar2;
      if ((int)pbVar2 != -1) goto code_r0x000106888ca8;
    }
    goto LAB_106888e90;
  case 0x76:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x00010688e37c();
      }
      else {
        func_0x00010688e6bc();
      }
      uVar7 = 0xb;
      goto code_r0x000106888e5c;
    }
    iVar6 = 0xb;
    break;
  case 0x78:
code_r0x000106888ca8:
    bVar1 = unaff_x19 + 1 == param_3;
    pbVar2 = pbVar3;
    if (((!bVar1) && (FUN_10688eb80(), pbVar2 = pbVar3, !bVar1)) &&
       ((bVar1 = unaff_x19 + 2 == param_3, !bVar1 && (FUN_10688eb80(), !bVar1)))) {
      bVar5 = (char)pbVar2 + (char)pbVar3 * '\x10';
      if (param_4 == (byte *)0x0) {
        func_0x00010015341c(param_1,(int)(char)bVar5);
      }
      else {
        if ((char)param_4[0x17] < '\0') {
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
          param_4 = *(byte **)param_4;
        }
        else {
          param_4[0x17] = 1;
        }
        *param_4 = bVar5;
        param_4[1] = 0;
      }
      return unaff_x19 + 3;
    }
LAB_106888e90:
    FUN_106888a18();
    func_0x00010688e480();
    pbVar3 = pbVar2;
    __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
    func_0x00010688e210();
    func_0x00010688e2c0();
    func_0x00010688e418();
    func_0x000100152a24();
    if ((*(uint *)(pbVar3 + 0x18) & 1) == 0) {
      if ((*(uint *)(pbVar3 + 0x18) >> 3 & 1) == 0) {
        func_0x0001001534a4();
        pbVar4 = pbVar3;
        func_0x0001001534ac(*(undefined8 *)(pbVar2 + 0x38));
        *(int *)(pbVar4 + 0x10) = (int)param_1;
        *(byte **)(extraout_x8 + 8) = pbVar4;
        param_4 = pbVar3;
        goto LAB_106888f2c;
      }
      func_0x00010688e56c();
      func_0x00010688e448();
      func_0x00010688e9f0();
      func_0x000106889220();
      pbVar4 = pbVar3;
    }
    else {
      func_0x00010688e56c();
      func_0x00010688e448();
      func_0x00010688e9f0();
      FUN_1068890f4();
      pbVar4 = pbVar3;
    }
    *(byte **)(*(long *)(pbVar2 + 0x38) + 8) = param_4;
LAB_106888f2c:
    *(byte **)(pbVar2 + 0x38) = param_4;
    return pbVar4;
  default:
    if (bVar5 == 0x30) {
      if (param_4 != (byte *)0x0) {
        if ((char)param_4[0x17] < '\0') {
          func_0x00010688e37c();
        }
        else {
          func_0x00010688e6bc();
        }
        param_4[0] = 0;
        param_4[1] = 0;
        goto LAB_106888e60;
      }
      iVar6 = 0;
    }
    else {
      if (bVar5 == 99) {
        if (((unaff_x19 + 1 != param_3) && (bVar5 = unaff_x19[1], '@' < (char)bVar5)) &&
           (bVar5 < 0x5b || (byte)(bVar5 + 0x9f) < 0x1a)) {
          bVar5 = bVar5 & 0x1f;
          if (param_4 == (byte *)0x0) {
            func_0x00010015341c(param_1);
          }
          else {
            if ((char)param_4[0x17] < '\0') {
              func_0x00010688e37c();
            }
            else {
              func_0x00010688e6bc();
            }
            *param_4 = bVar5;
            param_4[1] = 0;
          }
          return unaff_x19 + 2;
        }
        goto LAB_106888e90;
      }
      if (bVar5 != 0x66) goto LAB_106888c40;
      if (param_4 != (byte *)0x0) {
        if ((char)param_4[0x17] < '\0') {
          func_0x00010688e37c();
        }
        else {
          func_0x00010688e6bc();
        }
        uVar7 = 0xc;
        goto code_r0x000106888e5c;
      }
      iVar6 = 0xc;
    }
  }
  func_0x00010015341c(param_1,iVar6);
LAB_106888e60:
  return unaff_x19 + 1;
}



/* Entry: 106888e94; end: 106888ebb;  */

void FUN_106888e94(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined4 unaff_w21;
  
  func_0x00010688e480();
  lVar1 = param_1;
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x000100152a24();
  if ((*(uint *)(lVar1 + 0x18) & 1) == 0) {
    if ((*(uint *)(lVar1 + 0x18) >> 3 & 1) == 0) {
      func_0x0001001534a4();
      lVar2 = lVar1;
      func_0x0001001534ac(*(undefined8 *)(param_1 + 0x38));
      *(undefined4 *)(lVar2 + 0x10) = unaff_w21;
      *(long *)(extraout_x8 + 8) = lVar2;
      unaff_x20 = lVar1;
      goto LAB_106888f2c;
    }
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    func_0x000106889220();
  }
  else {
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    FUN_1068890f4();
  }
  *(long *)(*(long *)(param_1 + 0x38) + 8) = unaff_x20;
LAB_106888f2c:
  *(long *)(param_1 + 0x38) = unaff_x20;
  return;
}



/* Entry: 106888ebc; end: 106888f43;  */

void FUN_106888ebc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  
  func_0x000100152a24();
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      func_0x0001001534a4();
      lVar1 = param_1;
      func_0x0001001534ac(*(undefined8 *)(unaff_x19 + 0x38));
      *(undefined4 *)(lVar1 + 0x10) = unaff_w21;
      *(long *)(extraout_x8 + 8) = lVar1;
      unaff_x20 = param_1;
      goto LAB_106888f2c;
    }
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    func_0x000106889220();
  }
  else {
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    FUN_1068890f4();
  }
  *(long *)(*(long *)(unaff_x19 + 0x38) + 8) = unaff_x20;
LAB_106888f2c:
  *(long *)(unaff_x19 + 0x38) = unaff_x20;
  return;
}



/* Entry: 106888f44; end: 106888fa3;  */

void FUN_106888f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x21;
  
  func_0x00010688e5fc();
  func_0x00010688e40c(&UNK_110945b50);
  plVar1 = *(long **)(unaff_x21 + 8);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
  *(char *)(unaff_x19 + 0x28) = (char)plVar1;
  return;
}



/* Entry: 106888fa4; end: 106888fa7;  */

long FUN_106888fa4(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945b50);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106888fa8; end: 106888fbb;  */

void FUN_106888fa8(void)

{
  func_0x00010688901c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106888fbc; end: 10688906f;  */

void FUN_106888fbc(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  if (*(char **)(param_2 + 4) != *(char **)(param_2 + 6)) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010688e2f4(uVar1,(long)**(char **)(param_2 + 4));
    if ((uint)*(byte *)(param_1 + 0x28) == ((uint)uVar1 & 0xff)) {
      *param_2 = 0xfffffc1d;
      func_0x00010015aa10(*(long *)(param_2 + 4) + 1);
      uVar1 = extraout_x8;
      goto LAB_106889010;
    }
  }
  func_0x00010688e9c0();
  uVar1 = extraout_x8_00;
LAB_106889010:
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}



/* Entry: 106889070; end: 106889073;  */

long FUN_106889070(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945b98);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106889074; end: 106889087;  */

void FUN_106889074(void)

{
  FUN_1068890c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106889088; end: 1068890c7;  */

void FUN_106889088(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(char **)(param_2 + 4);
  if ((pcVar1 == *(char **)(param_2 + 6)) || (*pcVar1 != *(char *)(param_1 + 0x28))) {
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



/* Entry: 1068890c8; end: 1068890ef;  */

long FUN_1068890c8(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945b98);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 1068890f0; end: 1068890f3;  */

long FUN_1068890f0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 1068890f4; end: 10688911f;  */

void FUN_1068890f4(void)

{
  undefined4 unaff_w19;
  long unaff_x20;
  
  func_0x00010688ed70();
  func_0x00010688e40c(&UNK_110945c28);
  *(undefined4 *)(unaff_x20 + 0x28) = unaff_w19;
  return;
}



/* Entry: 106889120; end: 106889123;  */

long FUN_106889120(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945c28);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106889124; end: 106889137;  */

void FUN_106889124(void)

{
  FUN_1068891f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106889138; end: 1068891f7;  */

void FUN_106889138(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  plVar3 = (long *)(*(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x28) - 1) * 0x18);
  if (((char)plVar3[2] == '\x01') &&
     (uVar4 = plVar3[1] - *plVar3, (long)uVar4 <= *(long *)(param_2 + 6) - *(long *)(param_2 + 4)))
  {
    uVar5 = 0;
    do {
      if ((uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU)) == uVar5) {
        *param_2 = 0xfffffc1e;
        func_0x00010015aa10(*(long *)(param_2 + 4) + uVar4);
        uVar1 = extraout_x8_00;
        goto LAB_1068891d4;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010688e2f4(uVar1,(long)*(char *)(*plVar3 + uVar5));
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010688e2f4(uVar2,(long)*(char *)(*(long *)(param_2 + 4) + uVar5));
      uVar5 = uVar5 + 1;
    } while ((int)uVar1 == (int)uVar2);
  }
  func_0x00010688e9c0();
  uVar1 = extraout_x8;
LAB_1068891d4:
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  return;
}



/* Entry: 1068891f8; end: 10688924b;  */

long FUN_1068891f8(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945c28);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 10688924c; end: 10688924f;  */

long FUN_10688924c(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945c70);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106889250; end: 106889263;  */

void FUN_106889250(void)

{
  FUN_1068892e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106889264; end: 1068892e3;  */

void FUN_106889264(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  
  plVar4 = (long *)(*(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x28) - 1) * 0x18);
  if ((char)plVar4[2] == '\x01') {
    uVar5 = plVar4[1] - *plVar4;
    pcVar1 = *(char **)(param_2 + 4);
    if ((long)uVar5 <= *(long *)(param_2 + 6) - (long)pcVar1) {
      uVar8 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
      pcVar7 = (char *)*plVar4;
      pcVar9 = pcVar1;
      do {
        if (uVar8 == 0) {
          *param_2 = 0xfffffc1e;
          *(char **)(param_2 + 4) = pcVar1 + uVar5;
          uVar6 = *(undefined8 *)(param_1 + 8);
          goto LAB_1068892c8;
        }
        cVar2 = *pcVar7;
        cVar3 = *pcVar9;
        uVar8 = uVar8 - 1;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 == cVar3);
    }
  }
  uVar6 = 0;
  *param_2 = 0xfffffc1f;
LAB_1068892c8:
  *(undefined8 *)(param_2 + 0x14) = uVar6;
  return;
}



/* Entry: 1068892e4; end: 10688930b;  */

long FUN_1068892e4(long param_1)

{
  long lVar1;
  
  func_0x00010688e400(&UNK_110945c70);
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 10688930c; end: 10688930f;  */

long FUN_10688930c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 106889310; end: 106889323;  */

void FUN_106889310(void)

{
  func_0x00010015b524();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 106889324; end: 1068893b7;  */

ulong FUN_106889324(ulong param_1,undefined4 *param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar3;
  long lVar4;
  
  if ((ulong)((*(long *)(param_2 + 10) - *(long *)(param_2 + 8)) / 0x18) <
      (ulong)*(uint *)(param_1 + 0x10)) {
    FUN_106888e94();
    iVar1 = (int)param_1;
    _memcmp();
    return (ulong)(iVar1 == 0);
  }
  puVar2 = (ulong *)(*(long *)(param_2 + 8) + (ulong)(*(uint *)(param_1 + 0x10) - 1) * 0x18);
  if ((char)puVar2[2] == '\x01') {
    param_1 = *puVar2;
    lVar4 = puVar2[1] - param_1;
    if ((lVar4 <= *(long *)(param_2 + 6) - *(long *)(param_2 + 4)) &&
       (FUN_1068893b8(), (int)param_1 != 0)) {
      *param_2 = 0xfffffc1e;
      func_0x00010015aa10(*(long *)(param_2 + 4) + lVar4);
      uVar3 = extraout_x8;
      goto LAB_1068893a8;
    }
  }
  func_0x00010688e9c0();
  uVar3 = extraout_x8_00;
LAB_1068893a8:
  *(undefined8 *)(param_2 + 0x14) = uVar3;
  return param_1;
}



/* Entry: 1068893b8; end: 1068893bb;  */

bool FUN_1068893b8(long param_1,long param_2,undefined8 param_3)

{
  _memcmp(param_1,param_3,param_2 - param_1);
  return (int)param_1 == 0;
}



/* Entry: 1068893bc; end: 1068893d7;  */

bool FUN_1068893bc(int param_1)

{
  _memcmp();
  return param_1 == 0;
}



/* Entry: 1068893d8; end: 106889437;  */

void FUN_1068893d8(undefined1 param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x19;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  func_0x00010688edd4();
  if ((bool)in_ZR) {
    uStack_22 = param_1;
    func_0x00010688e2cc();
    puVar1 = &uStack_22;
  }
  else {
    if (*(char *)(unaff_x19 + 0xaa) != '\x01') {
      FUN_10688977c(unaff_x19 + 0x28,&uStack_21);
      return;
    }
    puVar1 = &uStack_23;
    uStack_23 = param_2;
  }
  FUN_106889610(unaff_x19 + 0x28,puVar1);
  return;
}



/* Entry: 106889438; end: 106889443;  */

void FUN_106889438(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000100152a88();
  *param_1 = extraout_x8;
  func_0x0001000e30f4(param_1 + 0x11);
  func_0x00010015b810(unaff_x19 + 0x70);
  func_0x00010015b888(unaff_x19 + 0x58);
  func_0x00010015b8c8(unaff_x19 + 0x40);
  func_0x00010015b8c8(unaff_x19 + 0x28);
  func_0x000107c60db0(param_1 + 2);
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010015b56c();
  }
  return;
}



/* Entry: 106889444; end: 10688948f;  */

void FUN_106889444(long param_1)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  func_0x00010688ea80();
  func_0x00010015492c();
  func_0x00010688e310(*(undefined8 *)(param_1 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010688ed7c(uVar1);
  func_0x00010688eba8();
  func_0x000100152c24();
  return;
}



/* Entry: 106889490; end: 106889497;  */

void FUN_106889490(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 extraout_x11;
  long unaff_x20;
  
  func_0x00010688edc8();
  func_0x00010688ea80();
  func_0x00010015492c();
  func_0x00010688e310(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010688ed7c(uVar1);
  func_0x00010688eb9c();
  func_0x00010688ea08();
  if (extraout_x9 != 1) {
    if (extraout_x9 == 0xc) {
      func_0x00010688ea8c();
    }
    else {
      func_0x00010688e974();
    }
  }
  func_0x000100152c24();
  return;
}



/* Entry: 106889498; end: 1068894b3;  */

void FUN_106889498(void)

{
  func_0x00010061f9cc();
  return;
}



/* Entry: 1068894b4; end: 1068895a7;  */

void FUN_1068894b4(void)

{
  undefined8 ***pppuVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010688edc8();
  func_0x00010015492c(&ppuStack_38);
  func_0x00010688e968();
  if ((char)bStack_21 < '\0') {
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (uStack_30 == 0) goto LAB_10688950c;
  }
  else {
    if (bStack_21 == 0) goto LAB_10688950c;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__120__get_collation_nameEPKc(auStack_50,pppuVar1);
  func_0x00010688e3f4();
  func_0x00010688e478();
  func_0x00010688e4cc();
  if (extraout_x8 != 0) goto LAB_10688950c;
  if ((char)bStack_21 < '\0') {
    if (2 < uStack_30) goto LAB_10688950c;
  }
  else {
    if (2 < bStack_21) goto LAB_10688950c;
    ppuStack_38 = &ppuStack_38;
  }
  func_0x00010688ec1c(*(undefined8 *)(unaff_x20 + 0x10),ppuStack_38);
  func_0x00010688e3f4();
  func_0x00010688e478();
  lVar2 = (long)*(char *)(unaff_x19 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(unaff_x19 + 8);
    if (lVar2 != 1) goto LAB_106889578;
  }
  else if (*(char *)(unaff_x19 + 0x17) != '\x01') {
LAB_106889578:
    if (lVar2 != 0xc) {
      func_0x00010688e974();
      goto LAB_10688950c;
    }
  }
  func_0x00010688ebc0();
LAB_10688950c:
  func_0x00010688e514();
  return;
}



/* Entry: 1068895a8; end: 10688960f;  */

void FUN_1068895a8(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 extraout_x11;
  long unaff_x20;
  
  func_0x00010688edc8();
  func_0x00010688ea80();
  func_0x00010015492c();
  func_0x00010688e310(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010688ed7c(uVar1);
  func_0x00010688eb9c();
  func_0x00010688ea08();
  if (extraout_x9 != 1) {
    if (extraout_x9 == 0xc) {
      func_0x00010688ea8c();
    }
    else {
      func_0x00010688e974();
    }
  }
  func_0x000100152c24();
  return;
}



/* Entry: 106889610; end: 10688964f;  */

undefined1 * FUN_106889610(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x19;
  
  func_0x0001001522cc();
  if (param_1 < *(undefined1 **)(unaff_x19 + 0x10)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_106889650();
  }
  *(undefined1 **)(unaff_x19 + 8) = puVar1;
  return puVar1 + -1;
}



/* Entry: 106889650; end: 1068896a7;  */

void FUN_106889650(undefined8 param_1,long param_2)

{
  func_0x000100153c68();
  func_0x00010688e928();
  func_0x00010688eae0();
  if (param_2 != 0) {
    func_0x000100033e30();
  }
  func_0x00010688e7a8();
  func_0x000100153e64();
  FUN_1068896e4();
  func_0x00010688ec28();
  return;
}



/* Entry: 1068896a8; end: 1068896e3;  */

ulong FUN_1068896a8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (-1 < (long)param_2) {
    uVar2 = (param_1[2] - *param_1) * 2;
    if (uVar2 < param_2 || uVar2 - param_2 == 0) {
      uVar2 = param_2;
    }
    if (0x3ffffffffffffffe < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0x7fffffffffffffff;
    }
    return uVar2;
  }
  FUN_106889720();
  func_0x000100152260();
  lVar1 = *param_1;
  uVar2 = *(long *)(param_2 + 8) + (lVar1 - param_1[1]);
  _memcpy(uVar2,lVar1,param_1[1] - lVar1);
  func_0x000100153fc8();
  return uVar2;
}



/* Entry: 1068896e4; end: 10688971f;  */

void FUN_1068896e4(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x000100152260();
  lVar1 = *param_1;
  _memcpy(*(long *)(param_2 + 8) + (lVar1 - param_1[1]),lVar1,param_1[1] - lVar1);
  func_0x000100153fc8();
  return;
}



/* Entry: 106889720; end: 10688972b;  */

long * FUN_106889720(long *param_1)

{
  func_0x00010688e3a0();
  FUN_106889758();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10688972c; end: 106889757;  */

long * FUN_10688972c(long *param_1)

{
  FUN_106889758();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 106889758; end: 10688977b;  */

void FUN_106889758(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -1;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10688977c; end: 1068897bb;  */

undefined1 * FUN_10688977c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x19;
  
  func_0x0001001522cc();
  if (param_1 < *(undefined1 **)(unaff_x19 + 0x10)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_1068897bc();
  }
  *(undefined1 **)(unaff_x19 + 8) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1068897bc; end: 106889813;  */

void FUN_1068897bc(undefined8 param_1,long param_2)

{
  func_0x000100153c68();
  func_0x00010688e928();
  func_0x00010688eae0();
  if (param_2 != 0) {
    func_0x000100033e30();
  }
  func_0x00010688e7a8();
  func_0x000100153e64();
  FUN_1068896e4();
  func_0x00010688ec28();
  return;
}



/* Entry: 106889814; end: 106889863;  */

int FUN_106889814(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if ((param_1 | 0x20) - 0x61 < 6) {
    iVar2 = (param_1 | 0x20) - 0x57;
  }
  iVar1 = -1;
  if (param_2 == 0x10) {
    iVar1 = iVar2;
  }
  if ((param_1 & 0xfe) == 0x38) {
    iVar1 = param_1 - 0x30;
  }
  iVar2 = -1;
  if (param_2 != 8) {
    iVar2 = iVar1;
  }
  if ((param_1 & 0xf8) == 0x30) {
    iVar2 = param_1 - 0x30;
  }
  return iVar2;
}



/* Entry: 106889864; end: 10688988b;  */

long FUN_106889864(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010688e480();
  lVar2 = 5;
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  lVar1 = lVar2;
  if (lVar2 != param_3) {
    do {
      lVar2 = lVar1;
      lVar1 = param_1;
      func_0x0001001539c4();
      FUN_1068898e0();
    } while (lVar2 != lVar1);
  }
  return lVar2;
}



/* Entry: 10688988c; end: 1068898df;  */

long FUN_10688988c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = lVar1;
      lVar1 = param_1;
      func_0x0001001539c4();
      FUN_1068898e0();
    } while (param_2 != lVar1);
  }
  return param_2;
}



/* Entry: 1068898e0; end: 106889c17;  */

/* WARNING: Removing unreachable block (ram,0x000106889a78) */
/* WARNING: Removing unreachable block (ram,0x000106889a80) */
/* WARNING: Removing unreachable block (ram,0x000106889a88) */
/* WARNING: Removing unreachable block (ram,0x000106889afc) */
/* WARNING: Removing unreachable block (ram,0x000106889a68) */
/* WARNING: Removing unreachable block (ram,0x000106889a74) */
/* WARNING: Removing unreachable block (ram,0x000106889a8c) */

byte * FUN_1068898e0(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  ulong uVar6;
  byte *******pppppppbVar7;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  byte ******ppppppbStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte ******ppppppbStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 == 0x5d) {
    return param_2;
  }
  uVar6 = 0;
  ppppppbStack_58 = (byte ******)0x0;
  uStack_50 = 0;
  uStack_48 = 0;
  pbVar4 = param_1;
  if ((param_2 + 1 != param_3) && (*param_2 == 0x5b)) {
    bVar5 = param_2[1];
    if (bVar5 == 0x2e) {
      func_0x00010688e8d8(param_1,param_2 + 2,param_3,&ppppppbStack_58);
      func_0x000106889e14();
      uVar6 = uStack_48 >> 0x38;
      param_2 = pbVar4;
    }
    else {
      if (bVar5 == 0x3a) {
        func_0x00010688e8d8(param_1,param_2 + 2);
        func_0x000106889d80();
        goto LAB_106889bb0;
      }
      if (bVar5 == 0x3d) {
        func_0x00010688e8d8(param_1,param_2 + 2);
        FUN_106889c18();
        goto LAB_106889bb0;
      }
      uVar6 = 0;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  uVar2 = uStack_50;
  if (-1 < (char)uVar6) {
    uVar2 = uVar6;
  }
  param_1 = param_2;
  if (uVar2 == 0) {
    if ((uVar3 & 0x1b0) == 0) {
      bVar5 = *param_2;
      if (bVar5 == 0x5c) {
        if ((uVar3 & 0x1f0) == 0) {
          func_0x00010688e8d8();
          func_0x000106889e9c();
          param_1 = pbVar4;
        }
        else {
          func_0x00010688e8d8();
          func_0x000106889fc0();
          param_1 = pbVar4;
        }
        goto LAB_106889a44;
      }
    }
    else {
      bVar5 = *param_2;
    }
    if ((uint)uVar6 >> 7 == 0) {
      uStack_48 = CONCAT17(1,(undefined7)uStack_48);
      pppppppbVar7 = &ppppppbStack_58;
    }
    else {
      uStack_50 = 1;
      pppppppbVar7 = (byte *******)ppppppbStack_58;
    }
    *(byte *)pppppppbVar7 = bVar5;
    *(char *)((long)pppppppbVar7 + 1) = '\0';
    param_1 = param_2 + 1;
  }
LAB_106889a44:
  if ((((param_1 == param_3) || (*param_1 == 0x5d)) || (pbVar1 = param_1 + 1, pbVar1 == param_3)) ||
     ((*param_1 != 0x2d || (*pbVar1 == 0x5d)))) goto LAB_106889bb0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  param_1 = param_1 + 2;
  if ((param_1 == param_3) || ((*pbVar1 != 0x5b || (*param_1 != 0x2e)))) {
    if ((uVar3 & 0x1b0) == 0) {
      bVar5 = *pbVar1;
      if (bVar5 == 0x5c) {
        if ((uVar3 & 0x1f0) == 0) {
          func_0x00010688ed5c();
          func_0x000106889e9c();
          param_1 = pbVar4;
        }
        else {
          func_0x00010688ed5c();
          func_0x000106889fc0();
          param_1 = pbVar4;
        }
        goto LAB_106889b60;
      }
    }
    else {
      bVar5 = *pbVar1;
    }
    uStack_60 = 0x100000000000000;
    uStack_70 = (ulong)bVar5;
  }
  else {
    func_0x00010688e8d8();
    func_0x000106889e14();
    param_1 = pbVar4;
  }
LAB_106889b60:
  uStack_88 = uStack_50;
  ppppppbStack_90 = ppppppbStack_58;
  uStack_80 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  ppppppbStack_58 = (byte ******)0x0;
  uStack_a8 = uStack_68;
  uStack_b0 = uStack_70;
  uStack_a0 = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_10688a228(param_4,&ppppppbStack_90,&uStack_b0);
  func_0x00010688e478();
  func_0x00010688e938();
  func_0x00010688ec40();
LAB_106889bb0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppbStack_58);
  return param_1;
}



/* Entry: 106889c18; end: 106889d7f;  */

long FUN_106889c18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  char ****ppppcVar3;
  ulong uVar4;
  undefined1 auStack_78 [8];
  ulong uStack_70;
  byte bStack_61;
  char ***pppcStack_60;
  ulong uStack_58;
  byte bStack_49;
  undefined2 uStack_42;
  
  uStack_42 = 0x5d3d;
  lVar2 = param_1;
  func_0x00010688e488(&uStack_42,param_1,param_2,&uStack_42);
  if (param_3 == lVar2) {
    FUN_106889864();
LAB_106889d58:
    FUN_10688a5a4();
LAB_106889d64:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x106889d68);
    (*pcVar1)();
  }
  FUN_10688a59c(&pppcStack_60,param_1,param_2,lVar2);
  if ((long)(char)bStack_49 < 0) {
    ppppcVar3 = (char ****)pppcStack_60;
    uVar4 = uStack_58;
    if (uStack_58 == 0) goto LAB_106889d58;
  }
  else {
    if (bStack_49 == 0) goto LAB_106889d58;
    ppppcVar3 = &pppcStack_60;
    uVar4 = (long)(char)bStack_49;
  }
  FUN_10688a5cc(auStack_78,param_1,ppppcVar3,(char *)((long)ppppcVar3 + uVar4));
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uStack_70 == 0) {
    if (-1 < (char)bStack_49) {
      uStack_58 = (ulong)bStack_49;
    }
    if (uStack_58 == 2) {
      if (-1 < (char)bStack_49) {
        pppcStack_60 = (char ***)&pppcStack_60;
      }
      FUN_10688a50c(param_4,(long)*(char *)pppcStack_60,(long)*(char *)((long)pppcStack_60 + 1));
    }
    else {
      if (uStack_58 != 1) {
        FUN_10688a5a4();
        goto LAB_106889d64;
      }
      if (-1 < (char)bStack_49) {
        pppcStack_60 = (char ***)&pppcStack_60;
      }
      FUN_1068893d8(param_4,(long)*(char *)pppcStack_60);
    }
  }
  else {
    func_0x000100206870(param_4 + 0x88,auStack_78);
  }
  func_0x000100152c24();
  func_0x00010688e938();
  return lVar2 + 2;
}



/* Entry: 106889d80; end: 106889e9b;  */

byte * FUN_106889d80(byte *param_1,byte *param_2,byte *param_3,byte *param_4,long param_5)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  ushort *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 uVar10;
  uint uVar11;
  long extraout_x8;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  ushort uStack_1b6;
  ushort uStack_1b4;
  ushort uStack_1b2;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  byte *pbStack_198;
  undefined1 *****pppppuStack_190;
  code *pcStack_188;
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
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined1 ****ppppuStack_100;
  code *pcStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined1 ***pppuStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [30];
  byte abStack_92 [2];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  byte abStack_42 [2];
  
  abStack_42[0] = 0x3a;
  abStack_42[1] = 0x5d;
  pbVar15 = abStack_42;
  pbVar13 = param_1;
  pbVar4 = param_2;
  pbVar8 = param_4;
  func_0x00010688e488(abStack_42);
  if (param_3 == pbVar13) {
    FUN_106889864();
    param_1 = pbVar13;
  }
  else {
    pbVar8 = (byte *)(ulong)(*(uint *)(param_1 + 0x18) & 1);
    pbVar4 = param_2;
    pbVar15 = pbVar13;
    FUN_10688a870();
    if ((uint)param_1 != 0) {
      *(uint *)(param_4 + 0xa0) = *(uint *)(param_4 + 0xa0) | (uint)param_1;
      return pbVar13 + 2;
    }
  }
  FUN_10688a878();
  uStack_58 = 0x106889e14;
  abStack_92[0] = 0x2e;
  abStack_92[1] = 0x5d;
  pbVar13 = abStack_92;
  pbVar6 = param_1;
  pbVar5 = pbVar4;
  pbVar9 = pbVar8;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010688e488(abStack_92);
  if (pbVar15 == pbVar6) {
    FUN_106889864();
    pbVar15 = pbVar6;
  }
  else {
    pbVar15 = param_1;
    pbVar5 = pbVar4;
    pbVar13 = pbVar6;
    FUN_10688a59c(auStack_b0);
    func_0x00010688e3f4();
    func_0x00010688e478();
    func_0x00010688e4cc();
    param_2 = pbVar6;
    if (extraout_x8 - 1U < 2) {
      return pbVar6 + 2;
    }
  }
  FUN_10688a5a4();
  pcStack_b8 = FUN_106889e9c;
  pbStack_d0 = param_2;
  pbStack_c8 = pbVar8;
  ppuStack_c0 = &puStack_60;
  if (pbVar5 != pbVar13) {
    bVar2 = *pbVar5;
    if (bVar2 == 0x77) {
      *(uint *)(param_5 + 0xa0) = *(uint *)(param_5 + 0xa0) | 0x500;
      FUN_1068893d8(param_5,0x5f);
      goto LAB_106889fb0;
    }
    if (bVar2 == 0x44) {
      uVar11 = *(uint *)(param_5 + 0xa4) | 0x400;
    }
    else {
      if (bVar2 != 0x53) {
        if (bVar2 == 0x57) {
          *(uint *)(param_5 + 0xa4) = *(uint *)(param_5 + 0xa4) | 0x500;
          FUN_10688a920(param_5,0x5f);
        }
        else if (bVar2 == 0x62) {
          if ((char)pbVar9[0x17] < '\0') {
            func_0x00010688e354();
          }
          else {
            func_0x00010688e574();
          }
          pbVar9[0] = 8;
          pbVar9[1] = 0;
        }
        else {
          if (bVar2 == 100) {
            uVar11 = *(uint *)(param_5 + 0xa0) | 0x400;
          }
          else {
            if (bVar2 != 0x73) {
              if (bVar2 != 0) {
                FUN_106888bb0();
                return pbVar15;
              }
              if ((char)pbVar9[0x17] < '\0') {
                func_0x00010688e354();
              }
              else {
                func_0x00010688e574();
              }
              pbVar9[0] = 0;
              pbVar9[1] = 0;
              goto LAB_106889fb0;
            }
            uVar11 = *(uint *)(param_5 + 0xa0) | 0x4000;
          }
          *(uint *)(param_5 + 0xa0) = uVar11;
        }
        goto LAB_106889fb0;
      }
      uVar11 = *(uint *)(param_5 + 0xa4) | 0x4000;
    }
    *(uint *)(param_5 + 0xa4) = uVar11;
LAB_106889fb0:
    return pbVar5 + 1;
  }
  FUN_106888a18();
  uStack_d8 = 0x106889fc0;
  pbVar6 = pbVar5;
  pbStack_f0 = param_2;
  pbStack_e8 = pbVar8;
  pppuStack_e0 = &ppuStack_c0;
  if (pbVar5 == pbVar13) goto LAB_10688a224;
  bVar2 = *pbVar5;
  uVar11 = (uint)(char)bVar2;
  pbVar6 = (byte *)(ulong)uVar11;
  switch(bVar2) {
  case 0x6e:
    if (pbVar9 != (byte *)0x0) {
      if ((char)pbVar9[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar10 = 10;
LAB_10688a210:
      *(undefined2 *)pbVar9 = uVar10;
      goto LAB_10688a214;
    }
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x75:
LAB_10688a05c:
    pbVar8 = pbVar5;
    if ((uVar11 & 0xfffffff8) == 0x30) {
      bVar2 = bVar2 - 0x30;
      pbVar15 = pbVar5 + 1;
      pbVar8 = pbVar13;
      if ((pbVar15 != pbVar13) && (pbVar8 = pbVar15, (*pbVar15 & 0xf8) == 0x30)) {
        bVar2 = (*pbVar15 + bVar2 * '\b') - 0x30;
        pbVar15 = pbVar5 + 2;
        pbVar8 = pbVar13;
        if (pbVar15 != pbVar13) {
          pbVar8 = pbVar15;
          if ((*pbVar15 & 0xf8) == 0x30) {
            pbVar8 = pbVar5 + 3;
            bVar2 = (*pbVar15 + bVar2 * '\b') - 0x30;
          }
        }
      }
      if (pbVar9 != (byte *)0x0) {
        if ((char)pbVar9[0x17] < '\0') {
          pbVar9[8] = 1;
          pbVar9[9] = 0;
          pbVar9[10] = 0;
          pbVar9[0xb] = 0;
          pbVar9[0xc] = 0;
          pbVar9[0xd] = 0;
          pbVar9[0xe] = 0;
          pbVar9[0xf] = 0;
          pbVar9 = *(byte **)pbVar9;
        }
        else {
          pbVar9[0x17] = 1;
        }
        *pbVar9 = bVar2;
        pbVar9[1] = 0;
        return pbVar8;
      }
      func_0x00010688e718();
      return pbVar8;
    }
LAB_10688a224:
    uVar3 = (ushort)pbVar6;
    FUN_106888a18();
    pcStack_f8 = FUN_10688a228;
    pbStack_120 = param_1;
    pbStack_118 = pbVar4;
    pbStack_110 = param_2;
    pbStack_108 = pbVar8;
    ppppuStack_100 = &pppuStack_e0;
    func_0x000100154268();
    if (pbVar15[0xaa] == 1) {
      if ((pbVar8[0xa9] & 1) == 0) {
        uVar16 = 0;
        while( true ) {
          uVar12 = (ulong)(char)pbVar4[0x17];
          if ((long)uVar12 < 0) {
            uVar12 = *(ulong *)(pbVar4 + 8);
          }
          if (uVar12 <= uVar16) break;
          pbVar13 = pbVar4;
          pbVar15 = pbVar4;
          if ((char)pbVar4[0x17] < '\0') {
            pbVar15 = *(byte **)pbVar4;
            pbVar13 = *(byte **)pbVar4;
          }
          pbVar13[uVar16] = pbVar15[uVar16];
          uVar16 = uVar16 + 1;
        }
        uVar16 = 0;
        while( true ) {
          uVar12 = (ulong)(char)param_2[0x17];
          if ((long)uVar12 < 0) {
            uVar12 = *(ulong *)(param_2 + 8);
          }
          if (uVar12 <= uVar16) break;
          pbVar13 = param_2;
          pbVar15 = param_2;
          if ((char)param_2[0x17] < '\0') {
            pbVar15 = *(byte **)param_2;
            pbVar13 = *(byte **)param_2;
          }
          pbVar13[uVar16] = pbVar15[uVar16];
          uVar16 = uVar16 + 1;
        }
      }
      else {
        uVar16 = 0;
        while( true ) {
          uVar12 = (ulong)(char)pbVar4[0x17];
          if ((long)uVar12 < 0) {
            uVar12 = *(ulong *)(pbVar4 + 8);
          }
          if (uVar12 <= uVar16) break;
          func_0x00010688e2cc();
          pbVar13 = pbVar4;
          if ((char)pbVar4[0x17] < '\0') {
            pbVar13 = *(byte **)pbVar4;
          }
          pbVar13[uVar16] = (byte)pbVar15;
          uVar16 = uVar16 + 1;
        }
        uVar16 = 0;
        while( true ) {
          uVar12 = (ulong)(char)param_2[0x17];
          if ((long)uVar12 < 0) {
            uVar12 = *(ulong *)(param_2 + 8);
          }
          if (uVar12 <= uVar16) break;
          func_0x00010688e2cc();
          pbVar13 = param_2;
          if ((char)param_2[0x17] < '\0') {
            pbVar13 = *(byte **)param_2;
          }
          pbVar13[uVar16] = (byte)pbVar15;
          uVar16 = uVar16 + 1;
        }
      }
      lVar14 = (long)(char)pbVar4[0x17];
      pbVar15 = pbVar4;
      if (lVar14 < 0) {
        pbVar15 = *(byte **)pbVar4;
        lVar14 = *(long *)(pbVar4 + 8);
      }
      FUN_10688a980(&uStack_168,pbVar8 + 0x10,pbVar15,pbVar15 + lVar14);
      lVar14 = (long)(char)param_2[0x17];
      pbVar15 = param_2;
      if (lVar14 < 0) {
        pbVar15 = *(byte **)param_2;
        lVar14 = *(long *)(param_2 + 8);
      }
      pbVar8 = pbVar8 + 0x10;
      FUN_10688a980(&uStack_180,pbVar8,pbVar15,pbVar15 + lVar14);
      uStack_148 = uStack_160;
      uStack_150 = uStack_168;
      uStack_140 = uStack_158;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_130 = uStack_178;
      uStack_138 = uStack_180;
      uStack_128 = uStack_170;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      func_0x00010688ec34();
      func_0x00010688e920();
      func_0x00010688e478();
      func_0x00010688e514();
      return pbVar8;
    }
    lVar14 = (long)(char)pbVar4[0x17];
    if (lVar14 < 0) {
      lVar14 = *(long *)(pbVar4 + 8);
    }
    if (lVar14 == 1) {
      lVar14 = (long)(char)param_2[0x17];
      if (lVar14 < 0) {
        lVar14 = *(long *)(param_2 + 8);
      }
      if (lVar14 == 1) {
        if (pbVar8[0xa9] == 1) {
          func_0x00010688e2cc();
          pbVar8 = pbVar4;
          if ((char)pbVar4[0x17] < '\0') {
            pbVar8 = *(byte **)pbVar4;
          }
          *pbVar8 = (byte)pbVar15;
          func_0x00010688e2cc();
          pbVar8 = param_2;
          if ((char)param_2[0x17] < '\0') {
            pbVar8 = *(byte **)param_2;
          }
          *pbVar8 = (byte)pbVar15;
        }
        uStack_148 = *(undefined8 *)(pbVar4 + 8);
        uStack_150 = *(undefined8 *)pbVar4;
        uStack_140 = *(undefined8 *)(pbVar4 + 0x10);
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        pbVar4[0x10] = 0;
        pbVar4[0x11] = 0;
        pbVar4[0x12] = 0;
        pbVar4[0x13] = 0;
        pbVar4[0x14] = 0;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0;
        pbVar4[0x17] = 0;
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        uStack_130 = *(undefined8 *)(param_2 + 8);
        uStack_138 = *(undefined8 *)param_2;
        uStack_128 = *(undefined8 *)(param_2 + 0x10);
        param_2[0] = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        param_2[0x10] = 0;
        param_2[0x11] = 0;
        param_2[0x12] = 0;
        param_2[0x13] = 0;
        param_2[0x14] = 0;
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        func_0x00010688ec34();
        func_0x00010688e920();
        return pbVar15;
      }
    }
    FUN_10688a9cc();
    pbVar8 = pbVar15;
    func_0x00010688e920();
    func_0x00010688e3cc();
    pcStack_188 = FUN_10688a50c;
    pbStack_1b0 = param_1;
    pbStack_1a8 = pbVar4;
    pbStack_1a0 = param_2;
    pbStack_198 = pbVar15;
    pppppuStack_190 = &ppppuStack_100;
    if (pbVar8[0xa9] == 1) {
      pbVar15 = pbVar8;
      func_0x00010688e2cc();
      plVar1 = *(long **)(pbVar8 + 0x18);
      (**(code **)(*plVar1 + 0x28))(plVar1,pbVar13);
      uStack_1b2 = (ushort)pbVar15 & 0xff | (ushort)((int)plVar1 << 8);
      puVar7 = &uStack_1b2;
    }
    else {
      uVar3 = uVar3 & 0xff | (ushort)((int)pbVar13 << 8);
      if (pbVar8[0xaa] == 1) {
        puVar7 = &uStack_1b4;
        uStack_1b4 = uVar3;
      }
      else {
        puVar7 = &uStack_1b6;
        uStack_1b6 = uVar3;
      }
    }
    pbVar8 = pbVar8 + 0x70;
    FUN_10688a9f4(pbVar8,puVar7);
    return pbVar8;
  case 0x72:
    if (pbVar9 != (byte *)0x0) {
      if ((char)pbVar9[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar10 = 0xd;
      goto LAB_10688a210;
    }
    break;
  case 0x74:
    if (pbVar9 != (byte *)0x0) {
      if ((char)pbVar9[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar10 = 9;
      goto LAB_10688a210;
    }
    break;
  case 0x76:
    if (pbVar9 != (byte *)0x0) {
      if ((char)pbVar9[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar10 = 0xb;
      goto LAB_10688a210;
    }
    break;
  default:
    if ((bVar2 == 0x22) || (bVar2 == 0x2f)) {
LAB_10688a01c:
      if (pbVar9 != (byte *)0x0) {
        if ((char)pbVar9[0x17] < '\0') {
          func_0x00010688e354();
          bVar2 = (byte)uVar11;
        }
        else {
          func_0x00010688e574();
          bVar2 = (byte)uVar11;
        }
        *pbVar9 = bVar2;
        pbVar9[1] = 0;
        goto LAB_10688a214;
      }
    }
    else if (bVar2 == 0x66) {
      if (pbVar9 != (byte *)0x0) {
        if ((char)pbVar9[0x17] < '\0') {
          func_0x00010688e354();
        }
        else {
          func_0x00010688e574();
        }
        uVar10 = 0xc;
        goto LAB_10688a210;
      }
    }
    else if (bVar2 == 0x61) {
      if (pbVar9 != (byte *)0x0) {
        if ((char)pbVar9[0x17] < '\0') {
          func_0x00010688e354();
        }
        else {
          func_0x00010688e574();
        }
        uVar10 = 7;
        goto LAB_10688a210;
      }
    }
    else {
      if (bVar2 != 0x62) {
        if (bVar2 != 0x5c) goto LAB_10688a05c;
        goto LAB_10688a01c;
      }
      if (pbVar9 != (byte *)0x0) {
        if ((char)pbVar9[0x17] < '\0') {
          func_0x00010688e354();
        }
        else {
          func_0x00010688e574();
        }
        uVar10 = 8;
        goto LAB_10688a210;
      }
    }
  }
  func_0x00010015341c();
LAB_10688a214:
  return pbVar5 + 1;
}



/* Entry: 106889e9c; end: 10688a227;  */

void FUN_106889e9c(long param_1,byte *param_2,byte *param_3,char *param_4,long param_5)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  char cVar4;
  ushort uVar5;
  byte *pbVar6;
  ushort *puVar7;
  undefined2 uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar14;
  ushort uStack_106;
  ushort uStack_104;
  ushort uStack_102;
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
  
  if (param_2 != param_3) {
    bVar1 = *param_2;
    if (bVar1 == 0x77) {
      *(uint *)(param_5 + 0xa0) = *(uint *)(param_5 + 0xa0) | 0x500;
      FUN_1068893d8(param_5,0x5f);
      return;
    }
    if (bVar1 == 0x44) {
      uVar9 = *(uint *)(param_5 + 0xa4) | 0x400;
    }
    else {
      if (bVar1 != 0x53) {
        if (bVar1 == 0x57) {
          *(uint *)(param_5 + 0xa4) = *(uint *)(param_5 + 0xa4) | 0x500;
          FUN_10688a920(param_5,0x5f);
          return;
        }
        if (bVar1 != 0x62) {
          if (bVar1 == 100) {
            uVar9 = *(uint *)(param_5 + 0xa0) | 0x400;
          }
          else {
            if (bVar1 != 0x73) {
              if (bVar1 != 0) {
                FUN_106888bb0(param_1,param_2);
                return;
              }
              if (param_4[0x17] < '\0') {
                func_0x00010688e354();
              }
              else {
                func_0x00010688e574();
              }
              param_4[0] = '\0';
              param_4[1] = '\0';
              return;
            }
            uVar9 = *(uint *)(param_5 + 0xa0) | 0x4000;
          }
          *(uint *)(param_5 + 0xa0) = uVar9;
          return;
        }
        if (param_4[0x17] < '\0') {
          func_0x00010688e354();
        }
        else {
          func_0x00010688e574();
        }
        param_4[0] = '\b';
        param_4[1] = '\0';
        return;
      }
      uVar9 = *(uint *)(param_5 + 0xa4) | 0x4000;
    }
    *(uint *)(param_5 + 0xa4) = uVar9;
    return;
  }
  FUN_106888a18();
  pbVar6 = param_2;
  if (param_2 == param_3) goto LAB_10688a224;
  bVar1 = *param_2;
  uVar9 = (uint)(char)bVar1;
  pbVar6 = (byte *)(ulong)uVar9;
  switch(bVar1) {
  case 0x6e:
    if (param_4 != (char *)0x0) {
      if (param_4[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar8 = 10;
LAB_10688a210:
      *(undefined2 *)param_4 = uVar8;
      return;
    }
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x75:
LAB_10688a05c:
    unaff_x19 = param_2;
    if ((uVar9 & 0xfffffff8) == 0x30) {
      cVar4 = bVar1 - 0x30;
      if ((param_2 + 1 != param_3) && (bVar1 = param_2[1], (bVar1 & 0xf8) == 0x30)) {
        cVar4 = bVar1 + cVar4 * '\b' + -0x30;
        if ((param_2 + 2 != param_3) && (bVar1 = param_2[2], (bVar1 & 0xf8) == 0x30)) {
          cVar4 = bVar1 + cVar4 * '\b' + -0x30;
        }
      }
      if (param_4 != (char *)0x0) {
        if (param_4[0x17] < '\0') {
          param_4[8] = '\x01';
          param_4[9] = '\0';
          param_4[10] = '\0';
          param_4[0xb] = '\0';
          param_4[0xc] = '\0';
          param_4[0xd] = '\0';
          param_4[0xe] = '\0';
          param_4[0xf] = '\0';
          param_4 = *(char **)param_4;
        }
        else {
          param_4[0x17] = '\x01';
        }
        *param_4 = cVar4;
        param_4[1] = '\0';
        return;
      }
      func_0x00010688e718();
      return;
    }
LAB_10688a224:
    uVar5 = (ushort)pbVar6;
    FUN_106888a18();
    func_0x000100154268();
    if (*(char *)(param_1 + 0xaa) == '\x01') {
      if ((unaff_x19[0xa9] & 1) == 0) {
        uVar14 = 0;
        while( true ) {
          uVar10 = (ulong)*(char *)((long)unaff_x21 + 0x17);
          if ((long)uVar10 < 0) {
            uVar10 = unaff_x21[1];
          }
          if (uVar10 <= uVar14) break;
          puVar13 = unaff_x21;
          puVar11 = unaff_x21;
          if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
            puVar11 = (undefined8 *)*unaff_x21;
            puVar13 = (undefined8 *)*unaff_x21;
          }
          *(undefined1 *)((long)puVar13 + uVar14) = *(undefined1 *)((long)puVar11 + uVar14);
          uVar14 = uVar14 + 1;
        }
        uVar14 = 0;
        while( true ) {
          uVar10 = (ulong)*(char *)((long)unaff_x20 + 0x17);
          if ((long)uVar10 < 0) {
            uVar10 = unaff_x20[1];
          }
          if (uVar10 <= uVar14) break;
          puVar13 = unaff_x20;
          puVar11 = unaff_x20;
          if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
            puVar11 = (undefined8 *)*unaff_x20;
            puVar13 = (undefined8 *)*unaff_x20;
          }
          *(undefined1 *)((long)puVar13 + uVar14) = *(undefined1 *)((long)puVar11 + uVar14);
          uVar14 = uVar14 + 1;
        }
      }
      else {
        uVar14 = 0;
        while( true ) {
          uVar10 = (ulong)*(char *)((long)unaff_x21 + 0x17);
          if ((long)uVar10 < 0) {
            uVar10 = unaff_x21[1];
          }
          if (uVar10 <= uVar14) break;
          func_0x00010688e2cc();
          puVar11 = unaff_x21;
          if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
            puVar11 = (undefined8 *)*unaff_x21;
          }
          *(char *)((long)puVar11 + uVar14) = (char)param_1;
          uVar14 = uVar14 + 1;
        }
        uVar14 = 0;
        while( true ) {
          uVar10 = (ulong)*(char *)((long)unaff_x20 + 0x17);
          if ((long)uVar10 < 0) {
            uVar10 = unaff_x20[1];
          }
          if (uVar10 <= uVar14) break;
          func_0x00010688e2cc();
          puVar11 = unaff_x20;
          if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
            puVar11 = (undefined8 *)*unaff_x20;
          }
          *(char *)((long)puVar11 + uVar14) = (char)param_1;
          uVar14 = uVar14 + 1;
        }
      }
      lVar12 = (long)*(char *)((long)unaff_x21 + 0x17);
      puVar11 = unaff_x21;
      if (lVar12 < 0) {
        puVar11 = (undefined8 *)*unaff_x21;
        lVar12 = unaff_x21[1];
      }
      FUN_10688a980(&uStack_b8,unaff_x19 + 0x10,puVar11,(long)puVar11 + lVar12);
      lVar12 = (long)*(char *)((long)unaff_x20 + 0x17);
      puVar11 = unaff_x20;
      if (lVar12 < 0) {
        puVar11 = (undefined8 *)*unaff_x20;
        lVar12 = unaff_x20[1];
      }
      FUN_10688a980(&uStack_d0,unaff_x19 + 0x10,puVar11,(long)puVar11 + lVar12);
      uStack_98 = uStack_b0;
      uStack_a0 = uStack_b8;
      uStack_90 = uStack_a8;
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_80 = uStack_c8;
      uStack_88 = uStack_d0;
      uStack_78 = uStack_c0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010688ec34();
      func_0x00010688e920();
      func_0x00010688e478();
      func_0x00010688e514();
      return;
    }
    lVar12 = (long)*(char *)((long)unaff_x21 + 0x17);
    if (lVar12 < 0) {
      lVar12 = unaff_x21[1];
    }
    if (lVar12 == 1) {
      lVar12 = (long)*(char *)((long)unaff_x20 + 0x17);
      if (lVar12 < 0) {
        lVar12 = unaff_x20[1];
      }
      if (lVar12 == 1) {
        if (unaff_x19[0xa9] == 1) {
          func_0x00010688e2cc();
          uVar2 = (undefined1)param_1;
          puVar11 = unaff_x21;
          if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
            puVar11 = (undefined8 *)*unaff_x21;
          }
          *(undefined1 *)puVar11 = uVar2;
          func_0x00010688e2cc();
          puVar11 = unaff_x20;
          if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
            puVar11 = (undefined8 *)*unaff_x20;
          }
          *(undefined1 *)puVar11 = uVar2;
        }
        uStack_98 = unaff_x21[1];
        uStack_a0 = *unaff_x21;
        uStack_90 = unaff_x21[2];
        unaff_x21[1] = 0;
        unaff_x21[2] = 0;
        *unaff_x21 = 0;
        uStack_80 = unaff_x20[1];
        uStack_88 = *unaff_x20;
        uStack_78 = unaff_x20[2];
        *unaff_x20 = 0;
        unaff_x20[1] = 0;
        unaff_x20[2] = 0;
        func_0x00010688ec34();
        func_0x00010688e920();
        return;
      }
    }
    FUN_10688a9cc();
    func_0x00010688e920();
    func_0x00010688e3cc();
    if (*(char *)(param_1 + 0xa9) == '\x01') {
      lVar12 = param_1;
      func_0x00010688e2cc();
      plVar3 = *(long **)(param_1 + 0x18);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_3);
      uStack_102 = (ushort)lVar12 & 0xff | (ushort)((int)plVar3 << 8);
      puVar7 = &uStack_102;
    }
    else {
      uVar5 = uVar5 & 0xff | (ushort)((int)param_3 << 8);
      if (*(char *)(param_1 + 0xaa) == '\x01') {
        puVar7 = &uStack_104;
        uStack_104 = uVar5;
      }
      else {
        puVar7 = &uStack_106;
        uStack_106 = uVar5;
      }
    }
    FUN_10688a9f4(param_1 + 0x70,puVar7);
    return;
  case 0x72:
    if (param_4 != (char *)0x0) {
      if (param_4[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar8 = 0xd;
      goto LAB_10688a210;
    }
    break;
  case 0x74:
    if (param_4 != (char *)0x0) {
      if (param_4[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar8 = 9;
      goto LAB_10688a210;
    }
    break;
  case 0x76:
    if (param_4 != (char *)0x0) {
      if (param_4[0x17] < '\0') {
        func_0x00010688e354();
      }
      else {
        func_0x00010688e574();
      }
      uVar8 = 0xb;
      goto LAB_10688a210;
    }
    break;
  default:
    if ((bVar1 != 0x22) && (bVar1 != 0x2f)) {
      if (bVar1 == 0x66) {
        if (param_4 != (char *)0x0) {
          if (param_4[0x17] < '\0') {
            func_0x00010688e354();
          }
          else {
            func_0x00010688e574();
          }
          uVar8 = 0xc;
          goto LAB_10688a210;
        }
        break;
      }
      if (bVar1 == 0x61) {
        if (param_4 != (char *)0x0) {
          if (param_4[0x17] < '\0') {
            func_0x00010688e354();
          }
          else {
            func_0x00010688e574();
          }
          uVar8 = 7;
          goto LAB_10688a210;
        }
        break;
      }
      if (bVar1 == 0x62) {
        if (param_4 != (char *)0x0) {
          if (param_4[0x17] < '\0') {
            func_0x00010688e354();
          }
          else {
            func_0x00010688e574();
          }
          uVar8 = 8;
          goto LAB_10688a210;
        }
        break;
      }
      if (bVar1 != 0x5c) goto LAB_10688a05c;
    }
    if (param_4 != (char *)0x0) {
      if (param_4[0x17] < '\0') {
        func_0x00010688e354();
        cVar4 = (char)uVar9;
      }
      else {
        func_0x00010688e574();
        cVar4 = (char)uVar9;
      }
      *param_4 = cVar4;
      param_4[1] = '\0';
      return;
    }
  }
  func_0x00010015341c();
  return;
}



/* Entry: 10688a228; end: 10688a50b;  */

void FUN_10688a228(long param_1,ushort param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  long *plVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar9;
  ushort uStack_c6;
  ushort uStack_c4;
  ushort uStack_c2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100154268();
  if (*(char *)(param_1 + 0xaa) == '\x01') {
    if ((*(byte *)(unaff_x19 + 0xa9) & 1) == 0) {
      uVar9 = 0;
      while( true ) {
        uVar5 = (ulong)*(char *)((long)unaff_x21 + 0x17);
        if ((long)uVar5 < 0) {
          uVar5 = unaff_x21[1];
        }
        if (uVar5 <= uVar9) break;
        puVar8 = unaff_x21;
        puVar6 = unaff_x21;
        if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*unaff_x21;
          puVar8 = (undefined8 *)*unaff_x21;
        }
        *(undefined1 *)((long)puVar8 + uVar9) = *(undefined1 *)((long)puVar6 + uVar9);
        uVar9 = uVar9 + 1;
      }
      uVar9 = 0;
      while( true ) {
        uVar5 = (ulong)*(char *)((long)unaff_x20 + 0x17);
        if ((long)uVar5 < 0) {
          uVar5 = unaff_x20[1];
        }
        if (uVar5 <= uVar9) break;
        puVar8 = unaff_x20;
        puVar6 = unaff_x20;
        if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*unaff_x20;
          puVar8 = (undefined8 *)*unaff_x20;
        }
        *(undefined1 *)((long)puVar8 + uVar9) = *(undefined1 *)((long)puVar6 + uVar9);
        uVar9 = uVar9 + 1;
      }
    }
    else {
      uVar9 = 0;
      while( true ) {
        uVar5 = (ulong)*(char *)((long)unaff_x21 + 0x17);
        if ((long)uVar5 < 0) {
          uVar5 = unaff_x21[1];
        }
        if (uVar5 <= uVar9) break;
        func_0x00010688e2cc();
        puVar6 = unaff_x21;
        if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*unaff_x21;
        }
        *(char *)((long)puVar6 + uVar9) = (char)param_1;
        uVar9 = uVar9 + 1;
      }
      uVar9 = 0;
      while( true ) {
        uVar5 = (ulong)*(char *)((long)unaff_x20 + 0x17);
        if ((long)uVar5 < 0) {
          uVar5 = unaff_x20[1];
        }
        if (uVar5 <= uVar9) break;
        func_0x00010688e2cc();
        puVar6 = unaff_x20;
        if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*unaff_x20;
        }
        *(char *)((long)puVar6 + uVar9) = (char)param_1;
        uVar9 = uVar9 + 1;
      }
    }
    lVar7 = (long)*(char *)((long)unaff_x21 + 0x17);
    puVar6 = unaff_x21;
    if (lVar7 < 0) {
      puVar6 = (undefined8 *)*unaff_x21;
      lVar7 = unaff_x21[1];
    }
    FUN_10688a980(&uStack_78,unaff_x19 + 0x10,puVar6,(long)puVar6 + lVar7);
    lVar7 = (long)*(char *)((long)unaff_x20 + 0x17);
    puVar6 = unaff_x20;
    if (lVar7 < 0) {
      puVar6 = (undefined8 *)*unaff_x20;
      lVar7 = unaff_x20[1];
    }
    FUN_10688a980(&uStack_90,unaff_x19 + 0x10,puVar6,(long)puVar6 + lVar7);
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    uStack_50 = uStack_68;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_40 = uStack_88;
    uStack_48 = uStack_90;
    uStack_38 = uStack_80;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x00010688ec34();
    func_0x00010688e920();
    func_0x00010688e478();
    func_0x00010688e514();
    return;
  }
  lVar7 = (long)*(char *)((long)unaff_x21 + 0x17);
  if (lVar7 < 0) {
    lVar7 = unaff_x21[1];
  }
  if (lVar7 == 1) {
    lVar7 = (long)*(char *)((long)unaff_x20 + 0x17);
    if (lVar7 < 0) {
      lVar7 = unaff_x20[1];
    }
    if (lVar7 == 1) {
      if (*(char *)(unaff_x19 + 0xa9) == '\x01') {
        func_0x00010688e2cc();
        uVar2 = (undefined1)param_1;
        puVar6 = unaff_x21;
        if (*(char *)((long)unaff_x21 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*unaff_x21;
        }
        *(undefined1 *)puVar6 = uVar2;
        func_0x00010688e2cc();
        puVar6 = unaff_x20;
        if (*(char *)((long)unaff_x20 + 0x17) < '\0') {
          puVar6 = (undefined8 *)*unaff_x20;
        }
        *(undefined1 *)puVar6 = uVar2;
      }
      uStack_58 = unaff_x21[1];
      uStack_60 = *unaff_x21;
      uStack_50 = unaff_x21[2];
      unaff_x21[1] = 0;
      unaff_x21[2] = 0;
      *unaff_x21 = 0;
      uStack_40 = unaff_x20[1];
      uStack_48 = *unaff_x20;
      uStack_38 = unaff_x20[2];
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
      func_0x00010688ec34();
      func_0x00010688e920();
      return;
    }
  }
  FUN_10688a9cc();
  func_0x00010688e920();
  func_0x00010688e3cc();
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    lVar7 = param_1;
    func_0x00010688e2cc();
    plVar3 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar3 + 0x28))(plVar3,param_3);
    uStack_c2 = (ushort)lVar7 & 0xff | (ushort)((int)plVar3 << 8);
    puVar4 = &uStack_c2;
  }
  else {
    uVar1 = param_2 & 0xff | (ushort)((int)param_3 << 8);
    if (*(char *)(param_1 + 0xaa) == '\x01') {
      puVar4 = &uStack_c4;
      uStack_c4 = uVar1;
    }
    else {
      puVar4 = &uStack_c6;
      uStack_c6 = uVar1;
    }
  }
  FUN_10688a9f4(param_1 + 0x70,puVar4);
  return;
}



/* Entry: 10688a50c; end: 10688a59b;  */

void FUN_10688a50c(long param_1,ushort param_2,undefined8 param_3)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  ushort *puVar4;
  ushort uStack_36;
  ushort uStack_34;
  ushort uStack_32;
  
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    lVar2 = param_1;
    func_0x00010688e2cc();
    plVar3 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar3 + 0x28))(plVar3,param_3);
    uStack_32 = (ushort)lVar2 & 0xff | (ushort)((int)plVar3 << 8);
    puVar4 = &uStack_32;
  }
  else {
    uVar1 = param_2 & 0xff | (ushort)((int)param_3 << 8);
    if (*(char *)(param_1 + 0xaa) == '\x01') {
      puVar4 = &uStack_34;
      uStack_34 = uVar1;
    }
    else {
      puVar4 = &uStack_36;
      uStack_36 = uVar1;
    }
  }
  FUN_10688a9f4(param_1 + 0x70,puVar4);
  return;
}



/* Entry: 10688a59c; end: 10688a5a3;  */

void FUN_10688a59c(void)

{
  undefined8 ***pppuVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010688edc8();
  func_0x00010015b220(&ppuStack_38);
  func_0x00010688e968();
  if ((char)bStack_21 < '\0') {
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (uStack_30 == 0) goto LAB_10688a700;
  }
  else {
    if (bStack_21 == 0) goto LAB_10688a700;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__120__get_collation_nameEPKc(auStack_50,pppuVar1);
  func_0x00010688e3f4();
  func_0x00010688e478();
  func_0x00010688e4cc();
  if (extraout_x8 != 0) goto LAB_10688a700;
  if ((char)bStack_21 < '\0') {
    if (2 < uStack_30) goto LAB_10688a700;
  }
  else {
    if (2 < bStack_21) goto LAB_10688a700;
    ppuStack_38 = &ppuStack_38;
  }
  func_0x00010688ec1c(*(undefined8 *)(unaff_x20 + 0x10),ppuStack_38);
  func_0x00010688e3f4();
  func_0x00010688e478();
  lVar2 = (long)*(char *)(unaff_x19 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(unaff_x19 + 8);
    if (lVar2 != 1) goto LAB_10688a76c;
  }
  else if (*(char *)(unaff_x19 + 0x17) != '\x01') {
LAB_10688a76c:
    if (lVar2 != 0xc) {
      func_0x00010688e974();
      goto LAB_10688a700;
    }
  }
  func_0x00010688ebc0();
LAB_10688a700:
  func_0x00010688e514();
  return;
}



/* Entry: 10688a5a4; end: 10688a5cb;  */

void FUN_10688a5a4(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 extraout_x11;
  long unaff_x20;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688edc8();
  func_0x00010688ea80();
  FUN_10688a804();
  func_0x00010688e310(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010688ed7c(uVar1);
  func_0x00010688eb9c();
  func_0x00010688ea08();
  if (extraout_x9 != 1) {
    if (extraout_x9 == 0xc) {
      func_0x00010688ea8c();
    }
    else {
      func_0x00010688e974();
    }
  }
  func_0x000100152c24();
  return;
}



/* Entry: 10688a5cc; end: 10688a5d3;  */

void FUN_10688a5cc(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 extraout_x11;
  long unaff_x20;
  
  func_0x00010688edc8();
  func_0x00010688ea80();
  FUN_10688a804();
  func_0x00010688e310(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010688ed7c(uVar1);
  func_0x00010688eb9c();
  func_0x00010688ea08();
  if (extraout_x9 != 1) {
    if (extraout_x9 == 0xc) {
      func_0x00010688ea8c();
    }
    else {
      func_0x00010688e974();
    }
  }
  func_0x000100152c24();
  return;
}



/* Entry: 10688a5d4; end: 10688a637;  */

void FUN_10688a5d4(void)

{
  func_0x00010688a5fc();
  return;
}



/* Entry: 10688a638; end: 10688a6a7;  */

undefined1  [16] FUN_10688a638(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  long in_x7;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  long in_stack_00000000;
  
  pcVar3 = param_1 + 1;
  pcVar4 = pcVar3 + (in_x7 - in_stack_00000000);
  do {
    pcVar5 = param_2;
    if (param_1 == pcVar4) {
LAB_10688a698:
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = pcVar5;
      return auVar7;
    }
    cVar2 = *param_3;
    cVar1 = *param_1;
    pcVar6 = pcVar3;
    pcVar5 = param_3;
    while (pcVar5 = pcVar5 + 1, cVar1 == cVar2) {
      if (pcVar5 == param_4) {
        param_2 = param_1 + in_stack_00000000;
        pcVar5 = param_1;
        goto LAB_10688a698;
      }
      cVar2 = *pcVar5;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    }
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 1;
  } while( true );
}



/* Entry: 10688a6a8; end: 10688a79b;  */

void FUN_10688a6a8(void)

{
  undefined8 ***pppuVar1;
  long extraout_x8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010688edc8();
  func_0x00010015b220(&ppuStack_38);
  func_0x00010688e968();
  if ((char)bStack_21 < '\0') {
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (uStack_30 == 0) goto LAB_10688a700;
  }
  else {
    if (bStack_21 == 0) goto LAB_10688a700;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__120__get_collation_nameEPKc(auStack_50,pppuVar1);
  func_0x00010688e3f4();
  func_0x00010688e478();
  func_0x00010688e4cc();
  if (extraout_x8 != 0) goto LAB_10688a700;
  if ((char)bStack_21 < '\0') {
    if (2 < uStack_30) goto LAB_10688a700;
  }
  else {
    if (2 < bStack_21) goto LAB_10688a700;
    ppuStack_38 = &ppuStack_38;
  }
  func_0x00010688ec1c(*(undefined8 *)(unaff_x20 + 0x10),ppuStack_38);
  func_0x00010688e3f4();
  func_0x00010688e478();
  lVar2 = (long)*(char *)(unaff_x19 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(unaff_x19 + 8);
    if (lVar2 != 1) goto LAB_10688a76c;
  }
  else if (*(char *)(unaff_x19 + 0x17) != '\x01') {
LAB_10688a76c:
    if (lVar2 != 0xc) {
      func_0x00010688e974();
      goto LAB_10688a700;
    }
  }
  func_0x00010688ebc0();
LAB_10688a700:
  func_0x00010688e514();
  return;
}



/* Entry: 10688a79c; end: 10688a803;  */

void FUN_10688a79c(void)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined8 extraout_x11;
  long unaff_x20;
  
  func_0x00010688edc8();
  func_0x00010688ea80();
  FUN_10688a804();
  func_0x00010688e310(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010688ed7c(uVar1);
  func_0x00010688eb9c();
  func_0x00010688ea08();
  if (extraout_x9 != 1) {
    if (extraout_x9 == 0xc) {
      func_0x00010688ea8c();
    }
    else {
      func_0x00010688e974();
    }
  }
  func_0x000100152c24();
  return;
}



/* Entry: 10688a804; end: 10688a80b;  */

long FUN_10688a804(long param_1,long param_2,long param_3)

{
  undefined1 in_CY;
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lStack_78;
  char cStack_61;
  
  uVar2 = param_3 - param_2;
  func_0x000100154934();
  if (!(bool)in_CY) {
    uVar3 = uVar2;
    func_0x000100153c68();
    if (uVar3 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)uVar2;
    }
    else {
      func_0x0001001549a8();
      func_0x0001001549b8();
      func_0x0001001549c0();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0001001549d4();
      _memmove();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
    return param_1;
  }
  func_0x000104bd47d4();
  func_0x00010688ea80();
  func_0x00010015b220();
  plVar1 = *(long **)(param_1 + 8);
  func_0x00010688e310();
  (**(code **)(*plVar1 + 0x30))();
  if (-1 < cStack_61) {
    lStack_78 = unaff_x21;
  }
  __ZNSt3__115__get_classnameEPKcb(lStack_78,uVar2);
  func_0x000100152c24();
  return lStack_78;
}



/* Entry: 10688a80c; end: 10688a86f;  */

long FUN_10688a80c(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 in_CY;
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lStack_78;
  char cStack_61;
  
  func_0x000100154934();
  if (!(bool)in_CY) {
    uVar2 = param_4;
    func_0x000100153c68();
    if (uVar2 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)param_4;
    }
    else {
      func_0x0001001549a8();
      func_0x0001001549b8();
      func_0x0001001549c0();
    }
    if (param_3 - unaff_x20 != 0) {
      func_0x0001001549d4();
      _memmove();
    }
    *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
    return param_1;
  }
  func_0x000104bd47d4();
  func_0x00010688ea80();
  func_0x00010015b220();
  plVar1 = *(long **)(param_1 + 8);
  func_0x00010688e310();
  (**(code **)(*plVar1 + 0x30))();
  if (-1 < cStack_61) {
    lStack_78 = unaff_x21;
  }
  __ZNSt3__115__get_classnameEPKcb(lStack_78,param_4);
  func_0x000100152c24();
  return lStack_78;
}



/* Entry: 10688a870; end: 10688a877;  */

undefined8 FUN_10688a870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 unaff_x21;
  undefined8 uStack_48;
  char cStack_31;
  
  func_0x00010688ea80();
  func_0x00010015b220();
  plVar1 = *(long **)(param_1 + 8);
  func_0x00010688e310();
  (**(code **)(*plVar1 + 0x30))();
  if (-1 < cStack_31) {
    uStack_48 = unaff_x21;
  }
  __ZNSt3__115__get_classnameEPKcb(uStack_48,param_4);
  func_0x000100152c24();
  return uStack_48;
}



/* Entry: 10688a878; end: 10688a89f;  */

undefined8 FUN_10688a878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 unaff_x21;
  undefined8 uStack_68;
  char cStack_51;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688ea80();
  func_0x00010015b220();
  plVar1 = *(long **)(param_1 + 8);
  func_0x00010688e310();
  (**(code **)(*plVar1 + 0x30))();
  if (-1 < cStack_51) {
    uStack_68 = unaff_x21;
  }
  __ZNSt3__115__get_classnameEPKcb(uStack_68,param_4);
  func_0x000100152c24();
  return uStack_68;
}



/* Entry: 10688a8a0; end: 10688a91f;  */

undefined8 FUN_10688a8a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 unaff_x21;
  undefined8 uStack_48;
  char cStack_31;
  
  func_0x00010688ea80();
  func_0x00010015b220();
  plVar1 = *(long **)(param_1 + 8);
  func_0x00010688e310();
  (**(code **)(*plVar1 + 0x30))();
  if (-1 < cStack_31) {
    uStack_48 = unaff_x21;
  }
  __ZNSt3__115__get_classnameEPKcb(uStack_48,param_4);
  func_0x000100152c24();
  return uStack_48;
}



/* Entry: 10688a920; end: 10688a97f;  */

void FUN_10688a920(undefined1 param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long unaff_x19;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  func_0x00010688edd4();
  if ((bool)in_ZR) {
    uStack_22 = param_1;
    func_0x00010688e2cc();
    puVar1 = &uStack_22;
  }
  else {
    if (*(char *)(unaff_x19 + 0xaa) != '\x01') {
      FUN_10688977c(unaff_x19 + 0x40,&uStack_21);
      return;
    }
    puVar1 = &uStack_23;
    uStack_23 = param_2;
  }
  FUN_106889610(unaff_x19 + 0x40,puVar1);
  return;
}



/* Entry: 10688a980; end: 10688a9cb;  */

void FUN_10688a980(long param_1)

{
  undefined8 uVar1;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  undefined8 extraout_x11;
  
  func_0x00010688ea80();
  FUN_10688a804();
  func_0x00010688e310(*(undefined8 *)(param_1 + 0x10));
  uVar1 = extraout_x11;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
  }
  func_0x00010688ed7c(uVar1);
  func_0x00010688eba8();
  func_0x000100152c24();
  return;
}



/* Entry: 10688a9cc; end: 10688a9f3;  */

undefined2 * FUN_10688a9cc(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  func_0x00010688e480();
  puVar3 = (undefined2 *)0x9;
  puVar1 = param_1;
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x0001001522cc();
  if (puVar1 < *(undefined2 **)(param_1 + 8)) {
    puVar2 = puVar1 + 1;
    *puVar1 = *puVar3;
  }
  else {
    puVar2 = param_1;
    FUN_10688aa34();
  }
  *(undefined2 **)(param_1 + 4) = puVar2;
  return puVar2 + -1;
}



/* Entry: 10688a9f4; end: 10688aa33;  */

undefined2 * FUN_10688a9f4(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *unaff_x19;
  
  func_0x0001001522cc();
  if (param_1 < *(undefined2 **)(unaff_x19 + 8)) {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  else {
    puVar1 = unaff_x19;
    FUN_10688aa34();
  }
  *(undefined2 **)(unaff_x19 + 4) = puVar1;
  return puVar1 + -1;
}



/* Entry: 10688aa34; end: 10688aab3;  */

undefined8 FUN_10688aa34(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined2 *unaff_x20;
  undefined1 auStack_48 [16];
  undefined2 *puStack_38;
  
  func_0x000100153c68();
  FUN_10688aab4();
  func_0x000100153d48();
  FUN_10688ab1c(auStack_48);
  *puStack_38 = *unaff_x20;
  puStack_38 = puStack_38 + 1;
  func_0x000100153e64();
  FUN_10688aaec();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_10688ab94(auStack_48);
  return uVar1;
}



/* Entry: 10688aab4; end: 10688aaeb;  */

long * FUN_10688aab4(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (-1 < (long)param_2) {
    plVar2 = (long *)(param_1[2] - *param_1);
    plVar1 = plVar2;
    if (plVar2 <= param_2) {
      plVar1 = param_2;
    }
    if ((long *)0x7ffffffffffffffd < plVar2) {
      plVar1 = (long *)0x7fffffffffffffff;
    }
    return plVar1;
  }
  FUN_10688ab10();
  func_0x000100152260();
  func_0x00010015457c();
  func_0x000100153fc8();
  return param_1;
}



/* Entry: 10688aaec; end: 10688ab0f;  */

void FUN_10688aaec(void)

{
  func_0x000100152260();
  func_0x00010015457c();
  func_0x000100153fc8();
  return;
}



/* Entry: 10688ab10; end: 10688ab1b;  */

void FUN_10688ab10(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010688e3a0();
  func_0x000100153d58();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010688ab5c();
  }
  lVar1 = param_4 + unaff_x20 * 2;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 2;
  return;
}



/* Entry: 10688ab1c; end: 10688ab7b;  */

void FUN_10688ab1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000100153d58();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010688ab5c();
  }
  lVar1 = param_4 + unaff_x20 * 2;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 2;
  return;
}



/* Entry: 10688ab7c; end: 10688ab93;  */

long * FUN_10688ab7c(long *param_1,long param_2)

{
  long *plVar1;
  
  if (-1 < param_2) {
    plVar1 = (long *)(param_2 << 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_10688abc0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10688ab94; end: 10688abbf;  */

long * FUN_10688ab94(long *param_1)

{
  FUN_10688abc0();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10688abc0; end: 10688ac0b;  */

void FUN_10688abc0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -2;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10688ac0c; end: 10688ac97;  */

byte * FUN_10688ac0c(undefined8 param_1,undefined8 param_2,byte *param_3,int *param_4)

{
  undefined1 in_ZR;
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *unaff_x19;
  
  func_0x00010688e580();
  pbVar3 = unaff_x19;
  if (!(bool)in_ZR) {
    uVar2 = (ulong)*unaff_x19;
    func_0x00010688eb44();
    if ((int)uVar2 != -1) {
      while( true ) {
        unaff_x19 = unaff_x19 + 1;
        *param_4 = (int)uVar2;
        pbVar3 = param_3;
        if (unaff_x19 == param_3) break;
        pbVar3 = (byte *)(ulong)*unaff_x19;
        func_0x00010688eb44();
        if ((int)pbVar3 == -1) {
          return unaff_x19;
        }
        if (0xccccccb < *param_4) {
          FUN_10688ac98();
          func_0x00010688e480();
          __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
          func_0x00010688e210();
          func_0x00010688e2c0();
          func_0x00010688e418();
          func_0x00010688e480();
          __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
          func_0x00010688e210();
          func_0x00010688e2c0();
          func_0x00010688e418();
          pbVar1 = pbVar3;
          func_0x00010015b518(&UNK_110945e38);
          if (*(long *)(pbVar1 + 0x10) != 0) {
            func_0x00010015b56c();
          }
          pbVar1 = pbVar3;
          func_0x00010015b518(&UNK_1109459b8);
          if (*(long *)(pbVar1 + 8) != 0) {
            func_0x00010015b56c();
          }
          return pbVar3;
        }
        uVar2 = (ulong)(uint)((int)pbVar3 + *param_4 * 10);
      }
    }
  }
  return pbVar3;
}



/* Entry: 10688ac98; end: 10688acbf;  */

long FUN_10688ac98(long param_1)

{
  long lVar1;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  lVar1 = param_1;
  func_0x00010015b518(&UNK_110945e38);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x00010015b56c();
  }
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 10688acc0; end: 10688ace7;  */

long FUN_10688acc0(long param_1)

{
  long lVar1;
  
  func_0x00010688e480();
  __ZNSt3__111regex_errorC1ENS_15regex_constants10error_typeE();
  func_0x00010688e210();
  func_0x00010688e2c0();
  func_0x00010688e418();
  lVar1 = param_1;
  func_0x00010015b518(&UNK_110945e38);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x00010015b56c();
  }
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 10688ace8; end: 10688acef;  */

long FUN_10688ace8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010015b518(&UNK_110945e38);
  if (*(long *)(lVar1 + 0x10) != 0) {
    func_0x00010015b56c();
  }
  lVar1 = param_1;
  func_0x00010015b518(&UNK_1109459b8);
  if (*(long *)(lVar1 + 8) != 0) {
    func_0x00010015b56c();
  }
  return param_1;
}



/* Entry: 10688acf0; end: 10688ad03;  */

void FUN_10688acf0(void)

{
  func_0x00010015b58c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10688ad04; end: 10688ad0b;  */

void FUN_10688ad04(void)

{
  return;
}



/* Entry: 10688ad0c; end: 10688ad1f;  */

void FUN_10688ad0c(void)

{
  func_0x00010015b58c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


