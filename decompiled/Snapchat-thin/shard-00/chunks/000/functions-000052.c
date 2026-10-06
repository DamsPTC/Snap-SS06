/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100152b88; end: 100152bab;  */

void FUN_100152b88(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c60da8();
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 100152bac; end: 100152bb7;  */

void FUN_100152bac(void)

{
  return;
}



/* Entry: 100152bb8; end: 100152c23;  */

bool FUN_100152bb8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long unaff_x20;
  
  FUN_100152bac();
  func_0x000107c613d0();
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (param_2 == uVar1) {
    func_0x000107c60bf4();
    bVar2 = (int)unaff_x20 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 100152c24; end: 100152c9b;  */

void FUN_100152c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 100152c9c; end: 100152f1b;  */

char * FUN_100152c9c(char *param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5
                    ,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  int in_stack_0000000c;
  
  func_0x000100152c84();
  if (param_2 == param_3) {
    return param_2;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  cVar2 = *param_2;
  if (cVar2 != '{') {
    if (cVar2 == '+') {
      pcVar5 = param_2 + 1;
      bVar3 = uVar1 != 0 || pcVar5 == param_3;
      if ((bVar3) || (FUN_100152f1c(), !bVar3)) {
        lVar4 = 1;
LAB_100152e0c:
        func_0x000100152f28(param_1,lVar4,param_4,param_5,param_6);
        return pcVar5;
      }
      param_2 = param_2 + 2;
      lVar4 = 1;
LAB_100152d4c:
      func_0x00010688abec(param_1,lVar4,param_4,param_5,param_6);
      return param_2;
    }
    if (cVar2 != '?') {
      if (cVar2 != '*') {
        return param_2;
      }
      pcVar5 = param_2 + 1;
      if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
        lVar4 = 0;
        goto LAB_100152e0c;
      }
      param_2 = param_2 + 2;
      lVar4 = 0;
      goto LAB_100152d4c;
    }
    pcVar5 = param_2 + 1;
    if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
      func_0x000106890bbc();
      goto LAB_100152e84;
    }
    func_0x000106890bbc();
LAB_100152dec:
    pcVar5 = param_2 + 2;
LAB_100152e84:
    FUN_100152f50();
    return pcVar5;
  }
  pcVar5 = param_2 + 1;
  param_2 = param_1;
  func_0x000106890ca4(param_1,pcVar5);
  if (param_2 != pcVar5) {
    if (param_2 == param_3) goto LAB_100152f18;
    if (*param_2 == ',') {
      pcVar5 = param_2 + 1;
      if (pcVar5 != param_3) {
        if (*pcVar5 == '}') {
          pcVar5 = param_2 + 2;
          if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
            lVar4 = (long)in_stack_0000000c;
            goto LAB_100152e0c;
          }
          param_2 = param_2 + 3;
          lVar4 = (long)in_stack_0000000c;
          goto LAB_100152d4c;
        }
        func_0x000106890ca4(param_1,pcVar5);
        param_2 = param_1;
        if (((param_1 == pcVar5) || (param_1 == param_3)) || (*param_1 != '}')) goto LAB_100152f18;
        if (in_stack_0000000c < 0) {
          pcVar5 = param_1 + 1;
          if (((uVar1 == 0) && (pcVar5 != param_3)) && (param_1[1] == '?')) {
            pcVar5 = param_1 + 2;
          }
          func_0x000106890bbc();
          goto LAB_100152e84;
        }
      }
    }
    else if (*param_2 == '}') {
      pcVar5 = param_2 + 1;
      if (((uVar1 != 0) || (bVar3 = pcVar5 == param_3, bVar3)) || (FUN_100152f1c(), !bVar3)) {
        func_0x000106890bbc();
        goto LAB_100152e84;
      }
      func_0x000106890bbc();
      goto LAB_100152dec;
    }
  }
  func_0x00010688ac98();
LAB_100152f18:
  func_0x00010688acc0();
  return param_2;
}



/* Entry: 100152f1c; end: 100152f4f;  */

void FUN_100152f1c(void)

{
  return;
}



/* Entry: 100152f50; end: 100153053;  */

void FUN_100152f50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = param_1;
  func_0x000100152f48();
  lVar6 = param_1[7];
  uVar5 = *(undefined8 *)(lVar6 + 8);
  *puVar2 = &PTR_DAT_110945950;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar6 + 8) = 0;
  puVar3 = (undefined8 *)0x38;
  func_0x000107c60e20();
  iVar1 = *(int *)(param_1 + 4);
  uVar5 = *(undefined8 *)(param_4 + 8);
  *puVar3 = &PTR_DAT_110945de8;
  puVar3[1] = uVar5;
  puVar3[2] = puVar2;
  puVar3[3] = param_2;
  puVar3[4] = param_3;
  *(int *)(puVar3 + 5) = iVar1;
  *(undefined4 *)((long)puVar3 + 0x2c) = param_5;
  *(undefined4 *)(puVar3 + 6) = param_6;
  *(undefined1 *)((long)puVar3 + 0x34) = param_7;
  *(undefined8 *)(param_4 + 8) = 0;
  puVar4 = puVar3;
  func_0x000100152f48();
  *puVar4 = &PTR_DAT_110945e78;
  puVar4[1] = puVar3;
  *(undefined8 **)(lVar6 + 8) = puVar4;
  param_1[7] = puVar2;
  *(undefined8 **)(param_4 + 8) = puVar3;
  *(int *)(param_1 + 4) = iVar1 + 1;
  return;
}



/* Entry: 100153054; end: 100153073;  */

void FUN_100153054(void)

{
  return;
}



/* Entry: 100153074; end: 1001530d3;  */

byte * FUN_100153074(void)

{
  uint uVar1;
  undefined1 in_ZR;
  byte *unaff_x19;
  
  FUN_1001523a0();
  if (((!(bool)in_ZR) &&
      (uVar1 = *unaff_x19 - 0x24,
      0x3a < uVar1 || (1L << ((ulong)uVar1 & 0x3f) & 0x7800000080004f1U) == 0)) &&
     (2 < *unaff_x19 - 0x7b)) {
    func_0x000106890c8c();
    unaff_x19 = unaff_x19 + 1;
  }
  return unaff_x19;
}



/* Entry: 1001530d4; end: 1001530e3;  */

void FUN_1001530d4(void)

{
  return;
}



/* Entry: 1001530e4; end: 10015312b;  */

void FUN_1001530e4(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
    FUN_1001527a0();
    uVar1 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
    *param_1 = &PTR_DAT_110945da0;
    param_1[1] = uVar1;
    *(undefined4 *)(param_1 + 2) = param_2;
    FUN_10015312c();
  }
  return;
}



/* Entry: 10015312c; end: 100153137;  */

void FUN_10015312c(long param_1,undefined8 param_2)

{
  long unaff_x19;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(unaff_x19 + 0x38) = param_2;
  return;
}



/* Entry: 100153138; end: 10015341b;  */

byte * FUN_100153138(byte *param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  undefined1 in_ZR;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined2 uVar5;
  long extraout_x8;
  byte *unaff_x19;
  int iVar4;
  
  FUN_1001523a0();
  if ((bool)in_ZR) {
    return unaff_x19;
  }
  bVar3 = *unaff_x19;
  pbVar2 = param_1;
  pbVar1 = param_1;
  switch(bVar3) {
  case 0x6e:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar5 = 10;
code_r0x0001001533e4:
      *(undefined2 *)param_4 = uVar5;
      goto LAB_1001533e8;
    }
    iVar4 = 10;
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
LAB_1001531c8:
    iVar4 = (int)(char)bVar3;
    if ((-1 < iVar4) &&
       ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + (ulong)bVar3 * 4) & 0x500) != 0))
    goto LAB_100153418;
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x000106890b8c();
        bVar3 = (byte)iVar4;
      }
      else {
        func_0x000106890c54();
        bVar3 = (byte)iVar4;
      }
      *param_4 = bVar3;
      param_4[1] = 0;
      goto LAB_1001533e8;
    }
    break;
  case 0x72:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar5 = 0xd;
      goto code_r0x0001001533e4;
    }
    iVar4 = 0xd;
    break;
  case 0x74:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar5 = 9;
      goto code_r0x0001001533e4;
    }
    iVar4 = 9;
    break;
  case 0x75:
    if (((unaff_x19 + 1 != param_3) && (func_0x000106890bf4(), (int)pbVar1 != -1)) &&
       (unaff_x19 = unaff_x19 + 2, unaff_x19 != param_3)) {
      pbVar1 = (byte *)(ulong)*unaff_x19;
      func_0x000106889814(pbVar1,0x10);
      pbVar2 = pbVar1;
      if ((int)pbVar1 != -1) goto code_r0x000100153234;
    }
    goto LAB_100153418;
  case 0x76:
    if (param_4 != (byte *)0x0) {
      if ((char)param_4[0x17] < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar5 = 0xb;
      goto code_r0x0001001533e4;
    }
    iVar4 = 0xb;
    break;
  case 0x78:
code_r0x000100153234:
    pbVar1 = pbVar2;
    if (((unaff_x19 + 1 != param_3) && (func_0x000106890bf4(), pbVar1 = pbVar2, (int)pbVar2 != -1))
       && ((unaff_x19 + 2 != param_3 && (func_0x000106890bf4(), (int)pbVar1 != -1)))) {
      bVar3 = (char)pbVar1 + (char)pbVar2 * '\x10';
      if (param_4 == (byte *)0x0) {
        FUN_10015341c(param_1,(int)(char)bVar3);
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
        *param_4 = bVar3;
        param_4[1] = 0;
      }
      return unaff_x19 + 3;
    }
LAB_100153418:
    func_0x000106888a18();
    FUN_100152a24();
    if ((*(uint *)(pbVar1 + 0x18) & 1) == 0) {
      if ((*(uint *)(pbVar1 + 0x18) >> 3 & 1) == 0) {
        FUN_1001534a4();
        pbVar2 = pbVar1;
        func_0x0001001534ac(*(undefined8 *)(unaff_x19 + 0x38));
        pbVar2[0x10] = (byte)param_1;
        *(byte **)(extraout_x8 + 8) = pbVar2;
        param_4 = pbVar1;
        goto LAB_10015348c;
      }
      func_0x00010688e56c();
      func_0x00010688e448();
      func_0x00010688e9f0();
      func_0x000106889044();
      pbVar2 = pbVar1;
    }
    else {
      func_0x00010688e56c();
      func_0x00010688e448();
      func_0x00010688e9f0();
      func_0x000106888f44();
      pbVar2 = pbVar1;
    }
    *(byte **)(*(long *)(unaff_x19 + 0x38) + 8) = param_4;
LAB_10015348c:
    *(byte **)(unaff_x19 + 0x38) = param_4;
    return pbVar2;
  default:
    if (bVar3 == 0x30) {
      if (param_4 != (byte *)0x0) {
        if ((char)param_4[0x17] < '\0') {
          func_0x000106890b8c();
        }
        else {
          func_0x000106890c54();
        }
        param_4[0] = 0;
        param_4[1] = 0;
        goto LAB_1001533e8;
      }
      iVar4 = 0;
    }
    else {
      if (bVar3 == 99) {
        if ((unaff_x19 + 1 != param_3) &&
           (bVar3 = unaff_x19[1], (byte)((bVar3 & 0xdf) + 0xbf) < 0x1a)) {
          bVar3 = bVar3 & 0x1f;
          if (param_4 == (byte *)0x0) {
            FUN_10015341c(param_1);
          }
          else {
            if ((char)param_4[0x17] < '\0') {
              func_0x000106890b8c();
            }
            else {
              func_0x000106890c54();
            }
            *param_4 = bVar3;
            param_4[1] = 0;
          }
          return unaff_x19 + 2;
        }
        goto LAB_100153418;
      }
      if (bVar3 != 0x66) goto LAB_1001531c8;
      if (param_4 != (byte *)0x0) {
        if ((char)param_4[0x17] < '\0') {
          func_0x000106890b8c();
        }
        else {
          func_0x000106890c54();
        }
        uVar5 = 0xc;
        goto code_r0x0001001533e4;
      }
      iVar4 = 0xc;
    }
  }
  FUN_10015341c(param_1,iVar4);
LAB_1001533e8:
  return unaff_x19 + 1;
}



/* Entry: 10015341c; end: 1001534a3;  */

void FUN_10015341c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 unaff_w21;
  
  FUN_100152a24();
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      FUN_1001534a4();
      lVar1 = param_1;
      func_0x0001001534ac(*(undefined8 *)(unaff_x19 + 0x38));
      *(undefined1 *)(lVar1 + 0x10) = unaff_w21;
      *(long *)(extraout_x8 + 8) = lVar1;
      unaff_x20 = param_1;
      goto LAB_10015348c;
    }
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    func_0x000106889044();
  }
  else {
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    func_0x000106888f44();
  }
  *(long *)(*(long *)(unaff_x19 + 0x38) + 8) = unaff_x20;
LAB_10015348c:
  *(long *)(unaff_x19 + 0x38) = unaff_x20;
  return;
}



/* Entry: 1001534a4; end: 10015351b;  */

void FUN_1001534a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 10015351c; end: 1001535a3;  */

undefined8
FUN_10015351c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined1 auStack_b0 [112];
  
  func_0x0001001534f4(param_4);
  uVar1 = extraout_x8;
  FUN_100153710(extraout_x8,param_1,param_2,auStack_b0);
  func_0x00010015ae88();
  FUN_10015aecc();
  FUN_100154104(auStack_b0);
  return uVar1;
}



/* Entry: 1001535a4; end: 1001535eb;  */

void FUN_1001535a4(int param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_10015351c();
  if ((param_1 != 0) && (*(char *)(param_3 + 0xb) == '\x01')) {
    param_3[1] = *param_3;
  }
  return;
}



/* Entry: 1001535ec; end: 1001535fb;  */

void FUN_1001535ec(void)

{
  return;
}



/* Entry: 1001535fc; end: 10015370f;  */

void FUN_1001535fc(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_1001535ec();
  lVar4 = *param_1;
  if ((ulong)((param_1[2] - lVar4) / 0x18) < param_2) {
    plVar5 = unaff_x20;
    FUN_100153868();
    FUN_10015388c();
    FUN_100153898();
    func_0x000100153930();
    FUN_10015388c();
  }
  else {
    uVar2 = (unaff_x20[1] - lVar4) / 0x18;
    uVar1 = uVar2;
    if (unaff_x21 <= uVar2) {
      uVar1 = unaff_x21;
    }
    func_0x0001068886c8(lVar4,uVar1);
    plVar5 = (long *)(unaff_x21 - uVar2);
    if (unaff_x21 < uVar2 || plVar5 == (long *)0x0) {
      unaff_x20[1] = *unaff_x20 + unaff_x21 * 0x18;
      return;
    }
  }
  puVar6 = (undefined8 *)unaff_x20[1];
  puVar3 = puVar6;
  for (lVar4 = (long)plVar5 * 0x18; lVar4 != 0; lVar4 = lVar4 + -0x18) {
    uVar8 = unaff_x19[1];
    uVar7 = *unaff_x19;
    puVar3[2] = unaff_x19[2];
    puVar3[1] = uVar8;
    *puVar3 = uVar7;
    puVar3 = puVar3 + 3;
  }
  unaff_x20[1] = (long)(puVar6 + (long)plVar5 * 3);
  return;
}



/* Entry: 100153710; end: 10015385b;  */

undefined8 FUN_100153710(long param_1,long param_2,long param_3,long *param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if ((param_5 & 0x80) != 0) {
    param_5 = param_5 & 0xffa;
  }
  func_0x0001001536a8(param_4,*(int *)(param_1 + 0x1c) + 1,param_2,param_3,(param_5 & 0x800) >> 0xb)
  ;
  lVar6 = param_1;
  func_0x0001001539c4(param_1,param_2);
  iVar1 = (int)lVar6;
  func_0x0001001539d0();
  if (iVar1 == 0) {
    if ((param_2 != param_3) && ((param_5 >> 6 & 1) == 0)) {
      while( true ) {
        param_2 = param_2 + 1;
        func_0x00010688e764(param_4[1]);
        lVar6 = param_1;
        func_0x0001001539c4(param_1,param_2);
        iVar1 = (int)lVar6;
        func_0x0001001539d0();
        if (param_2 == param_3) break;
        plVar5 = (long *)*param_4;
        plVar3 = (long *)param_4[1];
        if (iVar1 != 0) goto LAB_1001537f8;
        func_0x00010688e764();
      }
      if (iVar1 != 0) {
        plVar5 = (long *)*param_4;
        plVar3 = (long *)param_4[1];
LAB_1001537f8:
        plVar4 = param_4 + 3;
        if (plVar3 != plVar5) {
          plVar4 = plVar5;
        }
        goto LAB_100153800;
      }
    }
    uVar2 = 0;
    param_4[1] = *param_4;
  }
  else {
    plVar4 = param_4 + 3;
    if ((long *)param_4[1] != (long *)*param_4) {
      plVar4 = (long *)*param_4;
    }
LAB_100153800:
    lVar6 = *plVar4;
    param_4[7] = lVar6;
    *(bool *)(param_4 + 8) = param_4[6] != lVar6;
    lVar6 = plVar4[1];
    param_4[9] = lVar6;
    *(bool *)(param_4 + 0xb) = lVar6 != param_4[10];
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10015385c; end: 100153867;  */

undefined8 FUN_10015385c(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 100153868; end: 10015388b;  */

void FUN_100153868(long param_1)

{
  FUN_10015385c();
  if (param_1 != 0) {
    func_0x00010688eb04();
    func_0x00010688e968();
  }
  return;
}



/* Entry: 10015388c; end: 100153897;  */

void FUN_10015388c(void)

{
  return;
}



/* Entry: 100153898; end: 1001538b7;  */

ulong FUN_100153898(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong uVar3;
  
  uVar2 = 0xaaaaaaaaaaaaaaa;
  if (0xaaaaaaaaaaaaaaa < param_2) {
    func_0x0001068886ec();
    uVar2 = extraout_x8;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar3 = uVar1 * 2;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar3 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    uVar3 = uVar2;
  }
  return uVar3;
}



/* Entry: 1001538b8; end: 1001538eb;  */

ulong FUN_1001538b8(ulong param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (param_2[2] - *param_2) / 0x18;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_3 || uVar2 - param_3 == 0) {
    uVar2 = param_3;
  }
  if (0x555555555555554 < uVar1) {
    uVar2 = param_1;
  }
  return uVar2;
}



/* Entry: 1001538ec; end: 10015390f;  */

void FUN_1001538ec(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1001538ec();
  return;
}



/* Entry: 100153910; end: 100153977;  */

void FUN_100153910(void)

{
  FUN_1001538ec();
  return;
}



/* Entry: 100153978; end: 100153a0b;  */

void FUN_100153978(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 100153a0c; end: 100153c0b;  */

/* WARNING: Removing unreachable block (ram,0x000100153ab0) */
/* WARNING: Removing unreachable block (ram,0x000100153bcc) */

long * FUN_100153a0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long extraout_x8;
  undefined4 unaff_w21;
  undefined1 unaff_w23;
  long unaff_x24;
  long lVar5;
  undefined4 auStack_f0 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_9b;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
    FUN_10015ae24(&uStack_78);
    return (long *)0x0;
  }
  func_0x0001001539f0();
  uStack_80 = 0;
  auStack_f0[0] = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_90 = param_3;
  uStack_88 = param_3;
  FUN_100153c0c();
  uStack_9b = 0;
  func_0x000100153c20();
  func_0x0001001540b8(auStack_f0);
  func_0x00010015413c(lStack_70);
  func_0x000100154154();
  func_0x0001001543b4(lStack_70 + -0x28,*(undefined4 *)(unaff_x24 + 0x20));
  *(long *)(lStack_70 + -0x10) = lVar5;
  *(undefined4 *)(lStack_70 + -8) = unaff_w21;
  *(undefined1 *)(lStack_70 + -4) = unaff_w23;
  uVar3 = 0;
  uVar2 = 0;
  plVar4 = *(long **)(lStack_70 + -0x10);
  if (plVar4 != (long *)0x0) {
    FUN_10015909c(*(undefined8 *)(*plVar4 + 0x10));
  }
  func_0x0001001590bc();
  if ((bool)uVar3 && !(bool)uVar2) {
    func_0x000106888720();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100153bdc);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000100153ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dde1b56)[extraout_x8] * 4 + 0x100153aec))();
  return plVar4;
}



/* Entry: 100153c0c; end: 100153c2b;  */

void FUN_100153c0c(void)

{
  return;
}



/* Entry: 100153c2c; end: 100153c67;  */

long FUN_100153c2c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_10015add4();
    lVar2 = uVar1 + 0x60;
  }
  else {
    lVar2 = param_1;
    FUN_100153c74();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x60;
}



/* Entry: 100153c68; end: 100153c73;  */

void FUN_100153c68(void)

{
  return;
}



/* Entry: 100153c74; end: 100153cf7;  */

undefined8 FUN_100153c74(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  FUN_100153c68();
  FUN_100153cf8();
  FUN_100153d48();
  FUN_100153d68(auStack_58);
  func_0x000100153e00(lStack_48);
  lStack_48 = lStack_48 + 0x60;
  func_0x000100153e64();
  FUN_100153e70();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  FUN_100154014(auStack_58);
  return uVar1;
}



/* Entry: 100153cf8; end: 100153d47;  */

undefined1  [16] FUN_100153cf8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (0x2aaaaaaaaaaaaaa < param_2) {
    func_0x000106888748();
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  uVar1 = (param_1[2] - *param_1) / 0x60;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x155555555555554 < uVar1) {
    uVar2 = 0x2aaaaaaaaaaaaaa;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 100153d48; end: 100153d67;  */

void FUN_100153d48(void)

{
  return;
}



/* Entry: 100153d68; end: 100153d9b;  */

void FUN_100153d68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100153d58();
  if (param_2 != 0) {
    FUN_100153dc8(param_4);
  }
  FUN_100153de8(0x60);
  return;
}



/* Entry: 100153d9c; end: 100153dc7;  */

void FUN_100153d9c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  FUN_100153d9c();
  return;
}



/* Entry: 100153dc8; end: 100153de7;  */

void FUN_100153dc8(void)

{
  FUN_100153d9c();
  return;
}



/* Entry: 100153de8; end: 100153e6f;  */

void FUN_100153de8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  lVar1 = param_2 + unaff_x20 * param_1;
  *unaff_x19 = param_2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_2 + param_3 * param_1;
  return;
}



/* Entry: 100153e70; end: 100153eb3;  */

void FUN_100153e70(long *param_1,long param_2)

{
  FUN_100152260();
  FUN_100153ec4(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x60) * 0x60);
  func_0x000100153fc8();
  return;
}



/* Entry: 100153eb4; end: 100153ec3;  */

void FUN_100153eb4(void)

{
  return;
}



/* Entry: 100153ec4; end: 100153f47;  */

void FUN_100153ec4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  FUN_100153eb4();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x60) {
    func_0x000100153e08(param_4,param_2);
    param_4 = lStack_38 + 0x60;
  }
  uStack_48 = 1;
  FUN_100153f48();
  FUN_100153f58();
  FUN_100153f88(&uStack_60);
  return;
}



/* Entry: 100153f48; end: 100153f57;  */

void FUN_100153f48(void)

{
  return;
}



/* Entry: 100153f58; end: 100153f87;  */

void FUN_100153f58(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    func_0x0001001540b8();
  }
  return;
}



/* Entry: 100153f88; end: 100153fb7;  */

long FUN_100153f88(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000106888754(param_1);
  }
  return param_1;
}



/* Entry: 100153fb8; end: 100154013;  */

void FUN_100153fb8(void)

{
  return;
}



/* Entry: 100154014; end: 100154073;  */

long * FUN_100154014(long *param_1)

{
  func_0x00010015400c();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100154074; end: 100154093;  */

void FUN_100154074(void)

{
  return;
}



/* Entry: 100154094; end: 1001540e3;  */

void FUN_100154094(void)

{
  func_0x000100154084();
  FUN_1001540e4();
  return;
}



/* Entry: 1001540e4; end: 100154103;  */

void FUN_1001540e4(undefined8 *param_1)

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



/* Entry: 100154104; end: 100154127;  */

void FUN_100154104(void)

{
  func_0x000100154084();
  FUN_100154128();
  return;
}



/* Entry: 100154128; end: 10015419b;  */

void FUN_100154128(undefined8 *param_1)

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



/* Entry: 10015419c; end: 100154267;  */

void FUN_10015419c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *in_stack_00000018;
  
  func_0x000100154188();
  FUN_100154268();
  func_0x000100154278(*(undefined8 *)(param_1 + 8));
  if (!(bool)in_CY) {
    FUN_100153898();
    FUN_100153d48();
    FUN_10015428c(&stack0x00000008);
    puVar1 = in_stack_00000018;
    for (lVar3 = unaff_x21 * 0x18; lVar3 != 0; lVar3 = lVar3 + -0x18) {
      uVar5 = unaff_x20[1];
      uVar4 = *unaff_x20;
      puVar1[2] = unaff_x20[2];
      puVar1[1] = uVar5;
      *puVar1 = uVar4;
      puVar1 = puVar1 + 3;
    }
    in_stack_00000018 = in_stack_00000018 + unaff_x21 * 3;
    func_0x000100153e64();
    func_0x0001001542e4();
    FUN_100154358(&stack0x00000008);
    return;
  }
  func_0x00010688e670();
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 * 0x18; lVar3 != 0; lVar3 = lVar3 + -0x18) {
    uVar5 = param_3[1];
    uVar4 = *param_3;
    puVar1[2] = param_3[2];
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1 = puVar1 + 3;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2 * 3;
  return;
}



/* Entry: 100154268; end: 10015428b;  */

void FUN_100154268(void)

{
  return;
}



/* Entry: 10015428c; end: 1001542bf;  */

void FUN_10015428c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000100153d58();
  if (param_2 != 0) {
    FUN_100153910(param_4);
  }
  FUN_100153de8(0x18);
  return;
}



/* Entry: 1001542c0; end: 100154357;  */

void FUN_1001542c0(void)

{
  return;
}



/* Entry: 100154358; end: 100154383;  */

long * FUN_100154358(long *param_1)

{
  func_0x000100154350();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100154384; end: 1001543e3;  */

void FUN_100154384(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x18;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1001543e4; end: 10015449b;  */

void FUN_1001543e4(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  FUN_100153c68();
  if (param_2 <= (ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 4)) {
    puVar2 = *(undefined8 **)(unaff_x19 + 8);
    puVar1 = puVar2;
    for (lVar3 = unaff_x20 << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(unaff_x19 + 8) = puVar2 + unaff_x20 * 2;
    return;
  }
  FUN_10015449c();
  FUN_100153d48();
  FUN_1001544dc(auStack_58);
  puVar1 = puStack_48 + unaff_x20 * 2;
  for (lVar3 = unaff_x20 << 4; lVar3 != 0; lVar3 = lVar3 + -0x10) {
    *puStack_48 = 0;
    puStack_48[1] = 0;
    puStack_48 = puStack_48 + 2;
  }
  puStack_48 = puVar1;
  func_0x000100153e64();
  FUN_100154558();
  FUN_10015459c(auStack_58);
  return;
}



/* Entry: 10015449c; end: 1001544db;  */

long * FUN_10015449c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long *unaff_x19;
  long unaff_x20;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0xfffffffffffffff;
    }
    return plVar2;
  }
  func_0x0001068887c4();
  func_0x000100153d58();
  if (param_2 == (long *)0x0) {
    param_4 = 0;
  }
  else {
    FUN_100154538();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + (long)param_2 * 0x10;
  return unaff_x19;
}



/* Entry: 1001544dc; end: 10015451b;  */

void FUN_1001544dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000100153d58();
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_100154538();
  }
  lVar1 = param_4 + unaff_x20 * 0x10;
  *unaff_x19 = param_4;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = param_4 + param_2 * 0x10;
  return;
}



/* Entry: 10015451c; end: 100154537;  */

void FUN_10015451c(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  FUN_10015451c();
  return;
}



/* Entry: 100154538; end: 100154557;  */

void FUN_100154538(void)

{
  FUN_10015451c();
  return;
}



/* Entry: 100154558; end: 10015457b;  */

void FUN_100154558(void)

{
  FUN_100152260();
  FUN_10015457c();
  func_0x000100153fc8();
  return;
}



/* Entry: 10015457c; end: 10015459b;  */

void FUN_10015457c(long *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(*(long *)(param_2 + 8) - (param_1[1] - *param_1));
  return;
}



/* Entry: 10015459c; end: 1001545c7;  */

long * FUN_10015459c(long *param_1)

{
  func_0x000100154594();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1001545c8; end: 1001545eb;  */

void FUN_1001545c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x10;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1001545ec; end: 100154773;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_1001545ec(long *param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined8 param_6)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *******pppppppuStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar9 = (long *)(*(long *)(param_5 + 0x18) - (param_4 - param_2));
  if (plVar9 == (long *)0x0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    plVar9 = (long *)0x0;
  }
  plVar11 = (long *)(param_3 - param_2);
  plVar4 = param_1;
  if (((long)plVar11 < 1) ||
     ((**(code **)(*param_1 + 0x60))(param_1,param_2,plVar11), plVar4 == plVar11)) {
    uVar6 = (uint)param_2;
    if (0 < (long)plVar9) {
      plStack_60 = (long *)0xaaaaaaaaaaaaaaaa;
      uStack_58 = 0xaaaaaaaaaaaaaaaa;
      pppppppuStack_68 = (undefined8 *******)0xaaaaaaaaaaaaaaaa;
      if ((long *)0x7ffffffffffffff7 < plVar9) {
        func_0x000107c35c54();
        if (uVar6 == 0xffffffff) {
          return (long *)0x0;
        }
        lVar2 = plVar4[2];
        lVar3 = plVar4[3];
        lVar10 = plVar4[6];
        if (lVar10 == plVar4[7]) {
          if ((*(byte *)(plVar4 + 0xc) >> 4 & 1) == 0) {
            return (long *)0xffffffff;
          }
          lVar12 = plVar4[5];
          lVar13 = plVar4[0xb];
          plVar9 = plVar4 + 8;
          func_0x000107c60c8c(plVar9,0);
          if (*(char *)((long)plVar4 + 0x57) < '\0') {
            lVar7 = (plVar4[10] & 0x7fffffffffffffffU) - 1;
          }
          else {
            lVar7 = 0x16;
          }
          FUN_1001548a8(plVar9,lVar7);
          lVar7 = (long)*(char *)((long)plVar4 + 0x57);
          if (lVar7 < 0) {
            plVar9 = (long *)plVar4[8];
            lVar7 = plVar4[9];
          }
          lVar10 = (long)plVar9 + (lVar10 - lVar12);
          plVar4[5] = (long)plVar9;
          plVar4[6] = lVar10;
          plVar4[7] = (long)plVar9 + lVar7;
          uVar8 = (long)plVar9 + (lVar13 - lVar12);
        }
        else {
          uVar8 = plVar4[0xb];
        }
        if (uVar8 <= lVar10 + 1U) {
          uVar8 = lVar10 + 1;
        }
        plVar4[0xb] = uVar8;
        if ((*(byte *)(plVar4 + 0xc) >> 3 & 1) != 0) {
          plVar9 = plVar4 + 8;
          if (*(char *)((long)plVar4 + 0x57) < '\0') {
            plVar9 = (long *)*plVar9;
          }
          plVar4[2] = (long)plVar9;
          plVar4[3] = (long)plVar9 + (lVar3 - lVar2);
          plVar4[4] = uVar8;
        }
        if ((undefined1 *)plVar4[6] == (undefined1 *)plVar4[7]) {
                    /* WARNING: Could not recover jumptable at 0x0001001548e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x68))(plVar4,uVar6 & 0xff);
          return plVar4;
        }
        *(undefined1 *)plVar4[6] = (char)uVar6;
        plVar4[6] = plVar4[6] + 1;
        return (long *)(ulong)(uVar6 & 0xff);
      }
      if (plVar9 < (long *)0x17) {
        uStack_58 = CONCAT17((char)plVar9,0xaaaaaaaaaaaaaa);
        pppppppuVar5 = &pppppppuStack_68;
      }
      else {
        pppppppuVar1 = (undefined8 *******)0x19;
        if (((ulong)plVar9 | 7) != 0x17) {
          pppppppuVar1 = (undefined8 *******)(((ulong)plVar9 | 7) + 1);
        }
        pppppppuVar5 = pppppppuVar1;
        func_0x000107c60e20();
        uStack_58 = (ulong)pppppppuVar1 | 0x8000000000000000;
        pppppppuStack_68 = pppppppuVar5;
        plStack_60 = plVar9;
      }
      func_0x000107c610bc(pppppppuVar5,param_6,plVar9);
      *(undefined1 *)((long)pppppppuVar5 + (long)plVar9) = 0;
      pppppppuVar1 = pppppppuStack_68;
      if (-1 < (long)uStack_58) {
        pppppppuVar1 = &pppppppuStack_68;
      }
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x60))(param_1,pppppppuVar1,plVar9);
      if ((long)uStack_58 < 0) {
        func_0x000107c60e14(pppppppuStack_68);
      }
      if (plVar4 != plVar9) {
        return (long *)0x0;
      }
    }
    plVar9 = (long *)(param_4 - param_3);
    if (((long)plVar9 < 1) ||
       (plVar4 = param_1, (**(code **)(*param_1 + 0x60))(param_1,param_3,plVar9), plVar4 == plVar9))
    {
      *(undefined8 *)(param_5 + 0x18) = 0;
      return param_1;
    }
  }
  return (long *)0x0;
}



/* Entry: 100154774; end: 1001548a7;  */

long * FUN_100154774(long *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == 0xffffffff) {
    return (long *)0x0;
  }
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  lVar6 = param_1[6];
  if (lVar6 == param_1[7]) {
    if ((*(byte *)(param_1 + 0xc) >> 4 & 1) == 0) {
      return (long *)0xffffffff;
    }
    lVar7 = param_1[5];
    lVar8 = param_1[0xb];
    plVar5 = param_1 + 8;
    func_0x000107c60c8c(plVar5,0);
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      lVar3 = (param_1[10] & 0x7fffffffffffffffU) - 1;
    }
    else {
      lVar3 = 0x16;
    }
    FUN_1001548a8(plVar5,lVar3);
    lVar3 = (long)*(char *)((long)param_1 + 0x57);
    if (lVar3 < 0) {
      plVar5 = (long *)param_1[8];
      lVar3 = param_1[9];
    }
    lVar6 = (long)plVar5 + (lVar6 - lVar7);
    param_1[5] = (long)plVar5;
    param_1[6] = lVar6;
    param_1[7] = (long)plVar5 + lVar3;
    uVar4 = (long)plVar5 + (lVar8 - lVar7);
  }
  else {
    uVar4 = param_1[0xb];
  }
  if (uVar4 <= lVar6 + 1U) {
    uVar4 = lVar6 + 1;
  }
  param_1[0xb] = uVar4;
  if ((*(byte *)(param_1 + 0xc) >> 3 & 1) != 0) {
    plVar5 = param_1 + 8;
    if (*(char *)((long)param_1 + 0x57) < '\0') {
      plVar5 = (long *)*plVar5;
    }
    param_1[2] = (long)plVar5;
    param_1[3] = (long)plVar5 + (lVar2 - lVar1);
    param_1[4] = uVar4;
  }
  if ((undefined1 *)param_1[6] == (undefined1 *)param_1[7]) {
                    /* WARNING: Could not recover jumptable at 0x0001001548e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x68))(param_1,param_2 & 0xff);
    return param_1;
  }
  *(undefined1 *)param_1[6] = (char)param_2;
  param_1[6] = param_1[6] + 1;
  return (long *)(ulong)(param_2 & 0xff);
}



/* Entry: 1001548a8; end: 100154943;  */

void FUN_1001548a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc_1103462e8
  )(param_1,param_2,0);
  return;
}



/* Entry: 100154944; end: 1001549a7;  */

/* WARNING: Possible PIC construction at 0x000100154978: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010015497c) */

void FUN_100154944(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 in_CY;
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100154934();
  if ((bool)in_CY) {
    func_0x000104bd47d4();
  }
  else {
    uVar1 = param_4;
    FUN_100153c68();
    if (uVar1 < 0x17) {
      *(char *)(unaff_x19 + 0x17) = (char)param_4;
      if (param_3 - unaff_x20 != 0) {
        func_0x0001001549d4();
        func_0x000107c610b8();
      }
      *(undefined1 *)(unaff_x19 + (param_3 - unaff_x20)) = 0;
      return;
    }
  }
  return;
}



/* Entry: 1001549a8; end: 1001549e3;  */

void FUN_1001549a8(void)

{
  return;
}



/* Entry: 1001549e4; end: 100154b23;  */

long * FUN_1001549e4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar4 = param_2;
  func_0x000107c613d0(param_2);
  uStack_68 = 0xaaaaaaaaaaaaaaaa;
  uStack_60 = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c60cd0(&uStack_68,param_1);
  if ((char)uStack_68 == '\x01') {
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar5 = *(long *)(lVar1 + 0x28);
    lVar2 = param_2 + lVar4;
    if ((*(uint *)(lVar1 + 8) & 0xb0) != 0x20) {
      lVar2 = param_2;
    }
    iVar6 = *(int *)(lVar1 + 0x90);
    if (iVar6 == -1) {
      func_0x000107c60c08(&lStack_58,lVar1);
      plVar3 = &lStack_58;
      func_0x000107c60c00(plVar3,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar3 + 0x38))();
      iVar6 = (int)plVar3;
      func_0x000107c60db0(&lStack_58);
      *(int *)(lVar1 + 0x90) = iVar6;
    }
    FUN_1001545ec(lVar5,param_2,lVar2,param_2 + lVar4,lVar1,(int)(char)iVar6);
    if (lVar5 == 0) {
      lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
      func_0x000107c60dd4(lVar4,*(uint *)(lVar4 + 0x20) | 5);
    }
  }
  func_0x000107c60cd4(&uStack_68);
  return param_1;
}



/* Entry: 100154b24; end: 100155447;  */

/* WARNING: Type propagation algorithm not settling */

uint FUN_100154b24(long *******param_1,long param_2,uint param_3,ulong *param_4,ulong param_5)

{
  long *******ppppppplVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  long *******ppppppplVar8;
  ulong uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  long ******pppppplVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong *puStack_c0;
  ulong uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  long *******ppppppplStack_90;
  long ******pppppplStack_88;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    *(undefined1 *)*param_4 = 0;
    param_4[1] = 0;
    uVar13 = (ulong)*(byte *)((long)param_4 + 0x17);
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) goto LAB_100154b9c;
    uVar17 = param_4[2];
    uVar21 = uVar17 >> 0x38;
    if ((uVar17 & 0x7fffffffffffffff) - 1 < 0x400) {
      uVar13 = uVar21;
      if (-1 < (long)uVar17) goto LAB_100154b9c;
      puVar7 = (undefined1 *)0x408;
      func_0x000107c60e20();
      *puVar7 = *(undefined1 *)*param_4;
      func_0x000107c60e14();
      uVar13 = 0;
      goto LAB_100154bb8;
    }
    uVar13 = 0;
  }
  else {
    *(undefined1 *)param_4 = 0;
    *(undefined1 *)((long)param_4 + 0x17) = 0;
    uVar13 = 0;
LAB_100154b9c:
    puVar7 = (undefined1 *)0x408;
    func_0x000107c60e20();
    func_0x000107c610b4();
LAB_100154bb8:
    uVar17 = 0x8000000000000408;
    param_4[1] = uVar13;
    param_4[2] = 0x8000000000000408;
    *param_4 = (ulong)puVar7;
    uVar21 = 0x80;
  }
  uStack_b0 = CONCAT71(0xaaaaaaaaaaaaaa,(char)param_3) & 0xffffffffffffff01;
  uStack_b0 = CONCAT62(uStack_b0._2_6_,CONCAT11((char)(param_3 >> 1),(undefined1)uStack_b0)) &
              0xffffffffffff01ff;
  uStack_b0 = CONCAT53(uStack_b0._3_5_,CONCAT12((char)(param_3 >> 2),(undefined2)uStack_b0)) &
              0xffffffffff01ffff;
  uStack_98 = 0;
  puStack_a8 = param_4;
  uStack_a0 = param_5;
  if (200 < param_5) goto LAB_10015543c;
  if (param_2 < 4) {
    uVar20 = (uint)uVar21;
    if (1 < param_2) {
      if (param_2 == 2) {
        uVar15 = (uint)param_1;
        uVar11 = -uVar15;
        if (-1 < (int)uVar15) {
          uVar11 = uVar15;
        }
        uStack_70 = 0xaaaaaaaaaa;
        uStack_78 = 0xaaaaaaaaaa;
        uStack_73 = 0xaaaaaa;
        uVar12 = (ulong)uVar11;
        lVar4 = 0xc;
        do {
          lVar19 = lVar4;
          uVar11 = (uint)uVar12;
          *(byte *)((long)&uStack_78 + lVar19) = (char)uVar12 + (char)(uVar12 / 10) * -10 | 0x30;
          uVar12 = uVar12 / 10;
          lVar4 = lVar19 + -1;
        } while (9 < uVar11);
        if ((int)uVar15 < 0) {
          *(undefined1 *)((long)&uStack_80 + lVar19 + 7) = 0x2d;
          lVar19 = lVar19 + -1;
        }
        pppppplVar16 = (long ******)(0xd - lVar19);
        if (pppppplVar16 < (long ******)0x7ffffffffffffff8) {
          if (pppppplVar16 < (long ******)0x17) {
            uStack_80 = CONCAT17((char)pppppplVar16,(undefined7)uStack_80);
            ppppppplVar8 = (long *******)&ppppppplStack_90;
          }
          else {
            ppppppplVar1 = (long *******)0x19;
            if (((ulong)pppppplVar16 | 7) != 0x17) {
              ppppppplVar1 = (long *******)(((ulong)pppppplVar16 | 7) + 1);
            }
            ppppppplVar8 = ppppppplVar1;
            func_0x000107c60e20();
            uStack_80 = (ulong)ppppppplVar1 | 0x8000000000000000;
            ppppppplStack_90 = ppppppplVar8;
            pppppplStack_88 = pppppplVar16;
          }
          if (lVar19 != 0xd) {
            func_0x000107c610b4(ppppppplVar8,(long)&uStack_78 + lVar19,pppppplVar16);
          }
          *(undefined1 *)((long)ppppppplVar8 + (long)pppppplVar16) = 0;
          uVar12 = uStack_80;
          ppppppplVar8 = ppppppplStack_90;
          pppppplVar16 = pppppplStack_88;
          ppppppplVar1 = ppppppplStack_90;
          if (-1 < (long)uStack_80) {
            pppppplVar16 = (long ******)(uStack_80 >> 0x38);
            ppppppplVar1 = (long *******)&ppppppplStack_90;
          }
          uVar17 = (uVar17 & 0x7fffffffffffffff) - 1;
          if (-1 < (char)uVar21) {
            uVar17 = 0x16;
            uVar13 = uVar21;
          }
          if ((long ******)(uVar17 - uVar13) < pppppplVar16) {
            if (~uVar17 + 0x7ffffffffffffff7 < (long)pppppplVar16 + (uVar13 - uVar17))
            goto LAB_100155434;
            if (uVar20 >> 7 == 0) {
              puStack_c0 = param_4;
              if (uVar17 < 0x3ffffffffffffff3) goto LAB_100154ef4;
LAB_1001551f8:
              uVar21 = 0x7ffffffffffffff7;
              uVar9 = uVar21;
              func_0x000107c60e20();
            }
            else {
              puStack_c0 = (ulong *)*param_4;
              if (0x3ffffffffffffff2 < uVar17) goto LAB_1001551f8;
LAB_100154ef4:
              uVar9 = uVar13 + (long)pppppplVar16;
              if (uVar13 + (long)pppppplVar16 <= uVar17 * 2) {
                uVar9 = uVar17 * 2;
              }
              uVar2 = 0x19;
              if ((uVar9 | 7) != 0x17) {
                uVar2 = (uVar9 | 7) + 1;
              }
              uVar21 = 0x17;
              if (0x16 < uVar9) {
                uVar21 = uVar2;
              }
              uVar9 = uVar21;
              func_0x000107c60e20();
            }
            if (uVar13 != 0) {
              func_0x000107c610b8(uVar9,puStack_c0,uVar13);
            }
            func_0x000107c610b8(uVar9 + uVar13,ppppppplVar1,pppppplVar16);
            if (uVar17 != 0x16) {
              func_0x000107c60e14(puStack_c0);
            }
            *param_4 = uVar9;
            param_4[1] = uVar13 + (long)pppppplVar16;
            param_4[2] = uVar21 | 0x8000000000000000;
            *(undefined1 *)(uVar9 + uVar13 + (long)pppppplVar16) = 0;
          }
          else if (pppppplVar16 != (long ******)0x0) {
            puVar14 = param_4;
            if (uVar20 >> 7 != 0) {
              puVar14 = (ulong *)*param_4;
            }
            func_0x000107c610b8((undefined1 *)((long)puVar14 + uVar13),ppppppplVar1,pppppplVar16);
            uVar13 = uVar13 + (long)pppppplVar16;
            if (*(char *)((long)param_4 + 0x17) < '\0') {
              param_4[1] = uVar13;
            }
            else {
              *(byte *)((long)param_4 + 0x17) = (byte)uVar13 & 0x7f;
            }
            *(undefined1 *)((long)puVar14 + uVar13) = 0;
          }
          if ((long)uVar12 < 0) {
            func_0x000107c60e14(ppppppplVar8);
            goto joined_r0x000100155274;
          }
          uVar20 = 1;
        }
        else {
          func_0x000107c35c54();
          pcVar18 = (char *)0x2;
LAB_100155054:
          uVar12 = (uVar17 & 0x7fffffffffffffff) - 1;
          if ((long ******)(uVar12 - uVar13) < pppppplVar16) {
            if ((long)pppppplVar16 + (uVar13 - uVar12) <=
                0x7ffffffffffffff7 - (uVar17 & 0x7fffffffffffffff)) {
              puVar14 = (ulong *)*param_4;
              if (uVar12 < 0x3ffffffffffffff3) goto LAB_100155090;
              bVar6 = false;
              uVar17 = 0x7ffffffffffffff7;
              uVar21 = uVar17;
              func_0x000107c60e20();
              goto joined_r0x000100155428;
            }
            goto LAB_100155434;
          }
          uVar21 = uVar13;
          puVar14 = (ulong *)*param_4;
LAB_100155190:
          func_0x000107c610b4((long)puVar14 + uVar21,pcVar18,pppppplVar16);
          uVar21 = uVar21 + (long)pppppplVar16;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            param_4[1] = uVar21;
            *(undefined1 *)((long)puVar14 + uVar21) = 0;
            goto joined_r0x000100155274;
          }
          *(byte *)((long)param_4 + 0x17) = (byte)uVar21 & 0x7f;
          *(undefined1 *)((long)puVar14 + uVar21) = 0;
          uVar20 = 1;
        }
      }
      else {
        if (param_2 != 3) goto LAB_100155438;
        func_0x000107c2cb0c(param_1,&uStack_b0);
        uVar20 = 1;
      }
      goto joined_r0x000100154c88;
    }
    if (param_2 == 0) {
      if (uVar20 >> 7 == 0) {
        if (3 < uVar20 - 0x13) {
          *(undefined4 *)((long)param_4 + uVar21) = 0x6c6c756e;
          cVar3 = *(char *)((long)param_4 + 0x17);
          puVar14 = param_4;
joined_r0x000100155174:
          uVar21 = uVar21 + 4;
          if (cVar3 < '\0') {
            param_4[1] = uVar21;
            *(undefined1 *)((long)puVar14 + uVar21) = 0;
            goto joined_r0x000100155274;
          }
          *(byte *)((long)param_4 + 0x17) = (byte)uVar21 & 0x7f;
          *(undefined1 *)((long)puVar14 + uVar21) = 0;
          uVar20 = 1;
          goto joined_r0x000100154c88;
        }
        if (0x11 < uVar20) {
          uVar12 = 0x16;
          uVar13 = uVar21;
          puVar14 = param_4;
LAB_100154fa8:
          uVar21 = uVar13 + 4;
          if (uVar13 + 4 <= uVar12 * 2) {
            uVar21 = uVar12 * 2;
          }
          uVar9 = 0x19;
          if ((uVar21 | 7) != 0x17) {
            uVar9 = (uVar21 | 7) + 1;
          }
          uVar17 = 0x17;
          if (0x16 < uVar21) {
            uVar17 = uVar9;
          }
          bVar6 = uVar12 == 0x16;
          uVar21 = uVar17;
          func_0x000107c60e20();
joined_r0x000100155408:
          if (uVar13 != 0) {
            func_0x000107c610b8(uVar21,puVar14,uVar13);
          }
          *(undefined4 *)(uVar21 + uVar13) = 0x6c6c756e;
          if (!bVar6) {
            func_0x000107c60e14(puVar14);
          }
          *param_4 = uVar21;
          param_4[1] = uVar13 + 4;
          param_4[2] = uVar17 | 0x8000000000000000;
          *(undefined1 *)(uVar21 + uVar13 + 4) = 0;
          uVar20 = 1;
          goto joined_r0x000100154c88;
        }
      }
      else {
        uVar12 = (uVar17 & 0x7fffffffffffffff) - 1;
        if (3 < uVar12 - uVar13) {
          puVar14 = (ulong *)*param_4;
          *(undefined4 *)((long)puVar14 + uVar13) = 0x6c6c756e;
          cVar3 = *(char *)((long)param_4 + 0x17);
          uVar21 = uVar13;
          goto joined_r0x000100155174;
        }
        if ((uVar13 - uVar12) + 4 <= 0x7ffffffffffffff7 - (uVar17 & 0x7fffffffffffffff)) {
          puVar14 = (ulong *)*param_4;
          if (uVar12 < 0x3ffffffffffffff3) goto LAB_100154fa8;
          bVar6 = false;
          uVar17 = 0x7ffffffffffffff7;
          uVar21 = uVar17;
          func_0x000107c60e20();
          goto joined_r0x000100155408;
        }
      }
      goto LAB_100155434;
    }
    if (param_2 == 1) {
      bVar6 = ((ulong)param_1 & 1) == 0;
      pcVar18 = "true";
      if (bVar6) {
        pcVar18 = "false";
      }
      pppppplVar16 = (long ******)0x4;
      if (bVar6) {
        pppppplVar16 = (long ******)0x5;
      }
      if (uVar20 >> 7 != 0) goto LAB_100155054;
      puVar14 = param_4;
      if (pppppplVar16 <= (long ******)(0x16 - uVar21)) goto LAB_100155190;
      if (0x7fffffffffffffe0 < (long)pppppplVar16 + (uVar21 - 0x16)) goto LAB_100155434;
      uVar12 = 0x16;
      uVar13 = uVar21;
LAB_100155090:
      uVar21 = uVar13 + (long)pppppplVar16;
      if (uVar13 + (long)pppppplVar16 <= uVar12 * 2) {
        uVar21 = uVar12 * 2;
      }
      uVar9 = 0x19;
      if ((uVar21 | 7) != 0x17) {
        uVar9 = (uVar21 | 7) + 1;
      }
      uVar17 = 0x17;
      if (0x16 < uVar21) {
        uVar17 = uVar9;
      }
      bVar6 = uVar12 == 0x16;
      uVar21 = uVar17;
      func_0x000107c60e20();
joined_r0x000100155428:
      if (uVar13 != 0) {
        func_0x000107c610b8(uVar21,puVar14,uVar13);
      }
      func_0x000107c610b4(uVar21 + uVar13,pcVar18,pppppplVar16);
      if (!bVar6) {
        func_0x000107c60e14(puVar14);
      }
      *param_4 = uVar21;
      param_4[1] = uVar13 + (long)pppppplVar16;
      param_4[2] = uVar17 | 0x8000000000000000;
      *(undefined1 *)(uVar21 + uVar13 + (long)pppppplVar16) = 0;
      uVar20 = 1;
      goto joined_r0x000100154c88;
    }
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 4) {
        ppppppplStack_90 = (long *******)*param_1;
        pppppplStack_88 = param_1[1];
        if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
          ppppppplStack_90 = param_1;
          pppppplStack_88 = (long ******)(ulong)*(byte *)((long)param_1 + 0x17);
        }
        func_0x000107c35ca0(&ppppppplStack_90,1,param_4);
joined_r0x000100155274:
        uVar20 = 1;
      }
      else {
        uVar20 = param_3;
        if (param_2 != 5) goto LAB_100155438;
      }
    }
    else if (param_2 == 6) {
      puVar14 = &uStack_b0;
      func_0x000107c2cb10(puVar14,param_1,0);
      uVar20 = (uint)puVar14;
    }
    else {
      if (param_2 != 7) goto LAB_100155438;
      puVar14 = &uStack_b0;
      func_0x000107c2cb14(puVar14,param_1,0);
      uVar20 = (uint)puVar14;
    }
joined_r0x000100154c88:
    if ((param_3 >> 2 & 1) != 0) {
      uVar13 = (ulong)*(char *)((long)param_4 + 0x17);
      if ((long)uVar13 < 0) {
        uVar13 = param_4[1];
        uVar21 = param_4[2] & 0x7fffffffffffffff;
        uVar17 = uVar21 - 1;
        if (uVar17 != uVar13) {
          puVar14 = (ulong *)*param_4;
          goto LAB_10015534c;
        }
        if (uVar17 == 0x7ffffffffffffff6) goto LAB_100155434;
        uVar13 = *param_4;
        puVar14 = (ulong *)0x7ffffffffffffff7;
        if (uVar17 < 0x3ffffffffffffff3) {
          if (uVar17 != 0) {
            uVar12 = uVar17 * 2 | 7;
            puVar10 = (ulong *)0x19;
            if (uVar12 != 0x17) {
              puVar10 = (ulong *)(uVar12 + 1);
            }
            puVar14 = (ulong *)0x17;
            if (0xb < uVar17) {
              puVar14 = puVar10;
            }
            goto LAB_100155314;
          }
          puVar14 = (ulong *)0x17;
          puVar10 = (ulong *)0x17;
          func_0x000107c60e20();
LAB_100155390:
          *(undefined1 *)((long)puVar10 + uVar17) = 10;
          uVar21 = 1;
        }
        else {
LAB_100155314:
          puVar10 = puVar14;
          func_0x000107c60e20();
          if (uVar17 == 0) goto LAB_100155390;
          func_0x000107c610b8(puVar10,uVar13,uVar17);
          *(undefined1 *)((long)puVar10 + uVar17) = 10;
          if (uVar17 == 0x16) goto LAB_1001552b4;
        }
        func_0x000107c60e14(uVar13);
      }
      else {
        puVar14 = param_4;
        if (*(char *)((long)param_4 + 0x17) != '\x16') {
LAB_10015534c:
          *(undefined1 *)((long)puVar14 + uVar13) = 10;
          uVar13 = uVar13 + 1;
          if (*(char *)((long)param_4 + 0x17) < '\0') {
            param_4[1] = uVar13;
            *(undefined1 *)((long)puVar14 + uVar13) = 0;
          }
          else {
            *(byte *)((long)param_4 + 0x17) = (byte)uVar13 & 0x7f;
            *(undefined1 *)((long)puVar14 + uVar13) = 0;
          }
          goto LAB_1001553b4;
        }
        puVar14 = (ulong *)0x30;
        puVar10 = (ulong *)0x30;
        func_0x000107c60e20();
        uVar13 = *param_4;
        puVar10[1] = param_4[1];
        *puVar10 = uVar13;
        *(undefined8 *)((long)puVar10 + 0xe) = *(undefined8 *)((long)param_4 + 0xe);
        *(undefined1 *)((long)puVar10 + 0x16) = 10;
LAB_1001552b4:
        uVar21 = 0x17;
      }
      param_4[1] = uVar21;
      param_4[2] = (ulong)puVar14 | 0x8000000000000000;
      *param_4 = (ulong)puVar10;
      *(undefined1 *)((long)puVar10 + uVar21) = 0;
    }
LAB_1001553b4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return uVar20 & 1;
    }
    func_0x000107c60e78();
LAB_100155434:
    func_0x000104bd47d4();
  }
LAB_100155438:
  func_0x000107c2d0dc();
LAB_10015543c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(0,0x100155440);
  (*pcVar5)();
}



/* Entry: 100155448; end: 10015544f;  */

/* WARNING: Removing unreachable block (ram,0x000100155a20) */

undefined1 * FUN_100155448(void)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  ulong uVar4;
  uint uVar5;
  char cVar6;
  dword dVar7;
  bool bVar8;
  ulong *puVar9;
  code *pcVar10;
  mach_header *pmVar11;
  mach_header *pmVar12;
  long *plVar13;
  mach_header *pmVar14;
  long lVar15;
  long lVar16;
  mach_header *pmVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  uint in_stack_00000218;
  long in_stack_00000220;
  long in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined4 in_stack_00000338;
  dword in_stack_0000033c;
  undefined1 auStack_538 [24];
  mach_header *pmStack_520;
  mach_header *pmStack_518;
  mach_header mStack_510;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_488;
  undefined1 uStack_111;
  undefined4 uStack_110;
  ushort uStack_10c;
  undefined2 uStack_10a;
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (((&stack0x00000240)[*(long *)(in_stack_00000220 + -0x18)] & 5) == 0) {
    (**(code **)(**(long **)(&stack0x00000248 + *(long *)(in_stack_00000220 + -0x18)) + 0x20))
              (&mStack_510,*(long **)(&stack0x00000248 + *(long *)(in_stack_00000220 + -0x18)),0,1,
               0x10);
    lVar21 = lStack_490;
  }
  else {
    lVar21 = -1;
  }
  func_0x000107c60c08(&mStack_510,&stack0x00000220 + *(long *)(in_stack_00000220 + -0x18));
  pmVar11 = &mStack_510;
  func_0x000107c60c00(pmVar11,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*(long *)pmVar11 + 0x38))();
  func_0x000107c60db0(&mStack_510);
  func_0x000107c60cc4(&stack0x00000220,pmVar11);
  func_0x000107c60cc8(&stack0x00000220);
  auStack_538._8_8_ = 0xaaaaaaaaaaaaaaaa;
  auStack_538._16_8_ = 0xaaaaaaaaaaaaaaaa;
  auStack_538._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
  func_0x0001001548e4(auStack_538,&stack0x00000228);
  uStack_498 = 0xaaaaaaaaaaaaaaaa;
  uStack_4a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_488 = 0xaaaaaaaaaaaaaaaa;
  lStack_490 = 0xaaaaaaaaaaaaaaaa;
  uStack_4a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e0 = 0xaaaaaaaaaaaaaaaa;
  mStack_510.cpusubtype = 0xaaaaaaaa;
  mStack_510.filetype = 0xaaaaaaaa;
  mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
  mStack_510.flags = 0xaaaaaaaa;
  mStack_510.reserved = 0xaaaaaaaa;
  mStack_510.ncmds = 0xaaaaaaaa;
  mStack_510.sizeofcmds = 0xaaaaaaaa;
  pmVar11 = *(mach_header **)PTR____stderrp_11034bdc8;
  func_0x000107c60fc0();
  func_0x000107c60fe4();
  if ((int)pmVar11 == -1) {
LAB_1001555f4:
    func_0x000107c60760();
    if (pmVar11 == (mach_header *)0x0) {
LAB_100155638:
      mStack_510.cpusubtype = 0xaaaaaaaa;
      mStack_510.filetype = 0xaaaaaaaa;
      mStack_510.ncmds = 0xaaaaaaaa;
      mStack_510.sizeofcmds = 0xaaaaaa;
      mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaa00;
      pmVar12 = (mach_header *)PTR___os_log_default_11034be80;
    }
    else {
      func_0x000107c6075c();
      mStack_510.cpusubtype = 0xaaaaaaaa;
      mStack_510.filetype = 0xaaaaaaaa;
      mStack_510.ncmds = 0xaaaaaaaa;
      mStack_510.sizeofcmds = 0xaaaaaaaa;
      mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
      if (pmVar11 == (mach_header *)0x0) goto LAB_100155638;
      FUN_100155c20(&mStack_510);
      pmVar12 = (mach_header *)PTR___os_log_default_11034be80;
      if ((long)mStack_510._16_8_ < 0) {
        if ((mStack_510._8_8_ != 0) &&
           (pmVar11 = (mach_header *)mStack_510._0_8_,
           (mach_header *)mStack_510._0_8_ != (mach_header *)0x0)) {
LAB_100155664:
          func_0x000107c611d0(pmVar11,&UNK_10f7443ae);
          pmVar12 = pmVar11;
        }
      }
      else if (mStack_510.sizeofcmds._3_1_ != '\0') {
        pmVar11 = &mStack_510;
        goto LAB_100155664;
      }
    }
    puVar3 = PTR___os_log_default_11034be80;
    uVar18 = 0x11100001 >> (ulong)((in_stack_00000218 & 3) << 3);
    if (3 < in_stack_00000218) {
      uVar18 = in_stack_00000218 >> 0x1e & 2;
    }
    pmVar11 = pmVar12;
    func_0x000107c611d4(pmVar12,uVar18 & 0xff);
    if ((int)pmVar11 != 0) {
      pmVar11 = (mach_header *)auStack_538._0_8_;
      if (-1 < (long)auStack_538._16_8_) {
        pmVar11 = (mach_header *)auStack_538;
      }
      uStack_110 = 0x8220102;
      uStack_10c = (ushort)pmVar11;
      uStack_10a = (undefined2)((ulong)pmVar11 >> 0x10);
      uStack_108._0_4_ = (undefined4)((ulong)pmVar11 >> 0x20);
      pmVar11 = &MACH_HEADER;
      func_0x000107c60ea4(0x100000000,pmVar12,uVar18 & 0xff,"%{public}s",&uStack_110,0xc);
    }
    if (pmVar12 != (mach_header *)puVar3) {
      func_0x000107c611dc();
      pmVar11 = pmVar12;
    }
    if ((long)mStack_510._16_8_ < 0) {
      pmVar11 = (mach_header *)mStack_510._0_8_;
      func_0x000107c60e14();
    }
  }
  else if (((ushort)mStack_510.cputype & 0xf000) == 0x2000) {
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    uStack_90 = 0xaaaaaaaaaaaaaaaa;
    uStack_98 = 0xaaaaaaaaaaaaaaaa;
    uStack_a0 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_c0 = 0xaaaaaaaaaaaaaaaa;
    uStack_c8 = 0xaaaaaaaaaaaaaaaa;
    uStack_d0 = 0xaaaaaaaaaaaaaaaa;
    uStack_d8 = 0xaaaaaaaaaaaaaaaa;
    uStack_e0 = 0xaaaaaaaaaaaaaaaa;
    uStack_e8 = 0xaaaaaaaaaaaaaaaa;
    uStack_f0 = 0xaaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_100 = 0xaaaaaaaaaaaaaaaa;
    uStack_108._0_4_ = 0xaaaaaaaa;
    uStack_108._4_4_ = 0xaaaaaaaa;
    uStack_110 = 0xaaaaaaaa;
    uStack_10c = 0xaaaa;
    uStack_10a = 0xaaaa;
    pmVar11 = (mach_header *)&UNK_10f517886;
    func_0x000107c613b8(&UNK_10f517886,&uStack_110);
    if (((int)pmVar11 != -1) && ((uStack_10c & 0xf000) == 0x2000)) {
      if (mStack_510.flags != (dword)uStack_f8) goto LAB_100155718;
    }
    goto LAB_1001555f4;
  }
LAB_100155718:
  uVar4 = auStack_538._8_8_;
  pmVar12 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538._16_8_) {
    uVar4 = (ulong)auStack_538._16_8_ >> 0x38;
    pmVar12 = (mach_header *)auStack_538;
  }
  if (uVar4 != 0) {
    uVar19 = 0;
    do {
      while( true ) {
        pmVar11 = (mach_header *)0x2;
        func_0x000107c616d4(2,(undefined *)((long)&pmVar12->magic + uVar19),uVar4 - uVar19);
        if (pmVar11 != (mach_header *)0xffffffffffffffff) break;
        func_0x000107c60e5c();
        if (pmVar11->magic != 4) goto LAB_100155780;
      }
    } while ((-1 < (int)pmVar11) &&
            (uVar19 = ((ulong)pmVar11 & 0x7fffffff) + uVar19, uVar19 < uVar4));
  }
LAB_100155780:
  puVar9 = puRam000000011383a990;
  if (in_stack_00000218 != 3) goto LAB_1001559d4;
  if (puRam000000011383a990 == (ulong *)0x0) goto LAB_100155894;
  pmVar11 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538[0x17]) {
    pmVar11 = (mach_header *)auStack_538;
  }
  uVar4 = auStack_538._8_8_;
  if (-1 < (long)auStack_538._16_8_) {
    uVar4 = (long)auStack_538[0x17];
  }
  uVar20 = *puRam000000011383a990;
  lVar16 = uVar4 + 1;
  uVar19 = uVar20;
  func_0x000107c2cbd4(uVar20,lVar16,0x4cf434fa);
  plVar13 = *(long **)(uVar20 + 0x30);
  uVar18 = (uint)uVar19;
  if (uVar18 == 0) {
    if (plVar13 == (long *)0x0) goto LAB_100155894;
    lVar15 = 0;
LAB_1001557fc:
    (**(code **)(*plVar13 + 0x30))(plVar13,lVar15);
  }
  else {
    lVar15 = lVar16;
    if (plVar13 != (long *)0x0) goto LAB_1001557fc;
  }
  if (0x3f < uVar18 && (uVar19 & 7) == 0) {
    uVar20 = *puVar9;
    uVar1 = (int)lVar16 + 0x10;
    uVar5 = *(uint *)(uVar20 + 0x14);
    if ((((uVar1 + uVar18 <= uVar5) &&
         (puVar2 = (uint *)(*(long *)(uVar20 + 8) + (uVar19 & 0xffffffff)), puVar2[1] == 0xc8799269)
         ) && (uVar1 <= *puVar2)) && ((*puVar2 + uVar18 <= uVar5 && (puVar2[2] == 0x4cf434fa)))) {
      func_0x000107c610b4(puVar2 + 4,pmVar11,uVar4);
      func_0x000107c2cbd8(*puVar9,uVar19);
    }
  }
LAB_100155894:
  func_0x000107c610bc(&mStack_510,0xaa,0x400);
  lVar16 = 0;
  pmVar11 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538._16_8_) {
    pmVar11 = (mach_header *)auStack_538;
  }
  do {
    cVar6 = *(char *)((long)&pmVar11->magic + lVar16);
    *(char *)((long)&mStack_510.magic + lVar16) = cVar6;
    if (cVar6 == '\0') goto LAB_1001558dc;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x400);
  uStack_111 = 0;
LAB_1001558dc:
  pmVar11 = &mStack_510;
  func_0x000100123990();
  pmVar12 = (mach_header *)0x1137f5070;
  if ((bRam00000001137f5070 & 1) == 0) goto LAB_100155a9c;
  do {
    if (uRam00000001137f5088 == uRam00000001137f5090) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0,0x100155af8);
      (*pcVar10)();
    }
    if ((pmVar12->magic & 1) == 0) {
      pmVar17 = (mach_header *)0x1137f5070;
      pmVar11 = pmVar17;
      func_0x000107c60e48();
      if ((int)pmVar11 != 0) {
        uRam00000001137f5090 = 0;
        uRam00000001137f5088 = 0;
        uRam00000001137f5080 = 0;
        lRam00000001137f5078 = 0;
        func_0x000107c60e4c();
        pmVar11 = pmVar17;
      }
    }
    uVar4 = uRam00000001137f5080;
    if (uRam00000001137f5090 != 0) {
      uVar4 = uRam00000001137f5090;
    }
    if (uRam00000001137f5080 < uVar4 - 1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(0,0x100155b04);
      (*pcVar10)();
    }
    pmVar17 = *(mach_header **)(lRam00000001137f5078 + (uVar4 - 1) * 8);
    if (pmVar17 != (mach_header *)0x0) {
      do {
        dVar7 = pmVar17->magic;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pmVar17,0x10);
        if (bVar8) {
          pmVar17->magic = dVar7 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)dVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0,0x100155b10);
        (*pcVar10)();
      }
      pmVar11 = (mach_header *)auStack_538._0_8_;
      if (-1 < (long)auStack_538._16_8_) {
        pmVar11 = (mach_header *)auStack_538;
      }
      pmVar12 = (mach_header *)((long)&pmVar11->magic + lVar21);
      if (pmVar12 == (mach_header *)0x0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(0,0x100155b1c);
        (*pcVar10)();
      }
      puVar3 = (undefined *)((long)&pmVar11->magic + in_stack_00000328);
      lVar21 = lVar21 - in_stack_00000328;
      pmVar14 = pmVar12;
      func_0x000107c613d0();
      uStack_110 = SUB84(puVar3,0);
      uStack_10c = (ushort)((ulong)puVar3 >> 0x20);
      uStack_10a = (undefined2)((ulong)puVar3 >> 0x30);
      pmVar11 = pmVar17;
      pmStack_520 = pmVar12;
      pmStack_518 = pmVar14;
      uStack_108 = lVar21;
      (**(code **)&pmVar17->cpusubtype)
                (pmVar17,in_stack_00000330,in_stack_00000338,&uStack_110,&pmStack_520);
      do {
        dVar7 = pmVar17->magic - 1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pmVar17,0x10);
        if (bVar8) {
          pmVar17->magic = dVar7;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (dVar7 == 0) {
        (**(code **)&pmVar17->ncmds)();
        pmVar11 = pmVar17;
      }
    }
LAB_1001559d4:
    if ((long)auStack_538._16_8_ < 0) {
      pmVar11 = (mach_header *)auStack_538._0_8_;
      func_0x000107c60e14();
    }
    func_0x000107c60e5c();
    pmVar11->magic = in_stack_0000033c;
    func_0x000107c60db0(&stack0x00000230);
    func_0x000107c60cdc(&stack0x00000220,&PTR_PTR_11088d720);
    func_0x000107c60dd8(&stack0x00000290);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return &stack0x00000210;
    }
    func_0x000107c60e78();
LAB_100155a9c:
    pmVar17 = (mach_header *)0x1137f5070;
    pmVar11 = pmVar17;
    func_0x000107c60e48();
    if ((int)pmVar11 != 0) {
      uRam00000001137f5090 = 0;
      uRam00000001137f5088 = 0;
      uRam00000001137f5080 = 0;
      lRam00000001137f5078 = 0;
      func_0x000107c60e4c();
      pmVar11 = pmVar17;
    }
  } while( true );
}



/* Entry: 100155450; end: 100155b23;  */

/* WARNING: Removing unreachable block (ram,0x000100155a20) */

undefined8 * FUN_100155450(undefined8 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  dword dVar9;
  bool bVar10;
  ulong *puVar11;
  code *pcVar12;
  mach_header *pmVar13;
  mach_header *pmVar14;
  long *plVar15;
  mach_header *pmVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  mach_header *pmVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  undefined1 auStack_538 [24];
  mach_header *pmStack_520;
  mach_header *pmStack_518;
  mach_header mStack_510;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_490;
  undefined8 uStack_488;
  undefined1 uStack_111;
  undefined4 uStack_110;
  ushort uStack_10c;
  undefined2 uStack_10a;
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
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar19 = param_1 + 2;
  lVar18 = *plVar19;
  *param_1 = &PTR_DAT_110cd4a10;
  if ((*(byte *)((long)plVar19 + *(long *)(lVar18 + -0x18) + 0x20) & 5) == 0) {
    plVar15 = *(long **)((long)plVar19 + *(long *)(lVar18 + -0x18) + 0x28);
    (**(code **)(*plVar15 + 0x20))(&mStack_510,plVar15,0,1,0x10);
    lVar18 = *plVar19;
    lVar24 = lStack_490;
  }
  else {
    lVar24 = -1;
  }
  func_0x000107c60c08(&mStack_510,(long)plVar19 + *(long *)(lVar18 + -0x18));
  pmVar13 = &mStack_510;
  func_0x000107c60c00(pmVar13,PTR___ZNSt3__15ctypeIcE2idE_110346770);
  (**(code **)(*(long *)pmVar13 + 0x38))();
  func_0x000107c60db0(&mStack_510);
  func_0x000107c60cc4(plVar19,pmVar13);
  func_0x000107c60cc8(plVar19);
  auStack_538._8_8_ = 0xaaaaaaaaaaaaaaaa;
  auStack_538._16_8_ = 0xaaaaaaaaaaaaaaaa;
  auStack_538._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
  func_0x0001001548e4(auStack_538,param_1 + 3);
  uStack_498 = 0xaaaaaaaaaaaaaaaa;
  uStack_4a0 = 0xaaaaaaaaaaaaaaaa;
  uStack_488 = 0xaaaaaaaaaaaaaaaa;
  lStack_490 = 0xaaaaaaaaaaaaaaaa;
  uStack_4a8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4b0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4b8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4c0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4f0 = 0xaaaaaaaaaaaaaaaa;
  uStack_4d8 = 0xaaaaaaaaaaaaaaaa;
  uStack_4e0 = 0xaaaaaaaaaaaaaaaa;
  mStack_510.cpusubtype = 0xaaaaaaaa;
  mStack_510.filetype = 0xaaaaaaaa;
  mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
  mStack_510.flags = 0xaaaaaaaa;
  mStack_510.reserved = 0xaaaaaaaa;
  mStack_510.ncmds = 0xaaaaaaaa;
  mStack_510.sizeofcmds = 0xaaaaaaaa;
  pmVar13 = *(mach_header **)PTR____stderrp_11034bdc8;
  func_0x000107c60fc0();
  func_0x000107c60fe4();
  if ((int)pmVar13 == -1) {
LAB_1001555f4:
    func_0x000107c60760();
    if (pmVar13 == (mach_header *)0x0) {
LAB_100155638:
      mStack_510.cpusubtype = 0xaaaaaaaa;
      mStack_510.filetype = 0xaaaaaaaa;
      mStack_510.ncmds = 0xaaaaaaaa;
      mStack_510.sizeofcmds = 0xaaaaaa;
      mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaa00;
      pmVar14 = (mach_header *)PTR___os_log_default_11034be80;
    }
    else {
      func_0x000107c6075c();
      mStack_510.cpusubtype = 0xaaaaaaaa;
      mStack_510.filetype = 0xaaaaaaaa;
      mStack_510.ncmds = 0xaaaaaaaa;
      mStack_510.sizeofcmds = 0xaaaaaaaa;
      mStack_510._0_8_ = (mach_header *)0xaaaaaaaaaaaaaaaa;
      if (pmVar13 == (mach_header *)0x0) goto LAB_100155638;
      FUN_100155c20(&mStack_510);
      pmVar14 = (mach_header *)PTR___os_log_default_11034be80;
      if ((long)mStack_510._16_8_ < 0) {
        if ((mStack_510._8_8_ != 0) &&
           (pmVar13 = (mach_header *)mStack_510._0_8_,
           (mach_header *)mStack_510._0_8_ != (mach_header *)0x0)) {
LAB_100155664:
          func_0x000107c611d0(pmVar13,&UNK_10f7443ae);
          pmVar14 = pmVar13;
        }
      }
      else if (mStack_510.sizeofcmds._3_1_ != '\0') {
        pmVar13 = &mStack_510;
        goto LAB_100155664;
      }
    }
    puVar2 = PTR___os_log_default_11034be80;
    uVar5 = *(uint *)(param_1 + 1);
    uVar21 = 0x11100001 >> (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar21 = uVar5 >> 0x1e & 2;
    }
    pmVar13 = pmVar14;
    func_0x000107c611d4(pmVar14,uVar21 & 0xff);
    if ((int)pmVar13 != 0) {
      pmVar13 = (mach_header *)auStack_538._0_8_;
      if (-1 < (long)auStack_538._16_8_) {
        pmVar13 = (mach_header *)auStack_538;
      }
      uStack_110 = 0x8220102;
      uStack_10c = (ushort)pmVar13;
      uStack_10a = (undefined2)((ulong)pmVar13 >> 0x10);
      uStack_108._0_4_ = (undefined4)((ulong)pmVar13 >> 0x20);
      pmVar13 = &MACH_HEADER;
      func_0x000107c60ea4(0x100000000,pmVar14,uVar21 & 0xff,"%{public}s",&uStack_110,0xc);
    }
    if (pmVar14 != (mach_header *)puVar2) {
      func_0x000107c611dc();
      pmVar13 = pmVar14;
    }
    if ((long)mStack_510._16_8_ < 0) {
      pmVar13 = (mach_header *)mStack_510._0_8_;
      func_0x000107c60e14();
    }
  }
  else if (((ushort)mStack_510.cputype & 0xf000) == 0x2000) {
    uStack_88 = 0xaaaaaaaaaaaaaaaa;
    uStack_90 = 0xaaaaaaaaaaaaaaaa;
    uStack_98 = 0xaaaaaaaaaaaaaaaa;
    uStack_a0 = 0xaaaaaaaaaaaaaaaa;
    uStack_a8 = 0xaaaaaaaaaaaaaaaa;
    uStack_b0 = 0xaaaaaaaaaaaaaaaa;
    uStack_b8 = 0xaaaaaaaaaaaaaaaa;
    uStack_c0 = 0xaaaaaaaaaaaaaaaa;
    uStack_c8 = 0xaaaaaaaaaaaaaaaa;
    uStack_d0 = 0xaaaaaaaaaaaaaaaa;
    uStack_d8 = 0xaaaaaaaaaaaaaaaa;
    uStack_e0 = 0xaaaaaaaaaaaaaaaa;
    uStack_e8 = 0xaaaaaaaaaaaaaaaa;
    uStack_f0 = 0xaaaaaaaaaaaaaaaa;
    uStack_f8 = 0xaaaaaaaaaaaaaaaa;
    uStack_100 = 0xaaaaaaaaaaaaaaaa;
    uStack_108._0_4_ = 0xaaaaaaaa;
    uStack_108._4_4_ = 0xaaaaaaaa;
    uStack_110 = 0xaaaaaaaa;
    uStack_10c = 0xaaaa;
    uStack_10a = 0xaaaa;
    pmVar13 = (mach_header *)&UNK_10f517886;
    func_0x000107c613b8(&UNK_10f517886,&uStack_110);
    if (((int)pmVar13 != -1) && ((uStack_10c & 0xf000) == 0x2000)) {
      if (mStack_510.flags != (dword)uStack_f8) goto LAB_100155718;
    }
    goto LAB_1001555f4;
  }
LAB_100155718:
  uVar3 = auStack_538._8_8_;
  pmVar14 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538._16_8_) {
    uVar3 = (ulong)auStack_538._16_8_ >> 0x38;
    pmVar14 = (mach_header *)auStack_538;
  }
  if (uVar3 != 0) {
    uVar22 = 0;
    do {
      while( true ) {
        pmVar13 = (mach_header *)0x2;
        func_0x000107c616d4(2,(undefined *)((long)&pmVar14->magic + uVar22),uVar3 - uVar22);
        if (pmVar13 != (mach_header *)0xffffffffffffffff) break;
        func_0x000107c60e5c();
        if (pmVar13->magic != 4) goto LAB_100155780;
      }
    } while ((-1 < (int)pmVar13) &&
            (uVar22 = ((ulong)pmVar13 & 0x7fffffff) + uVar22, uVar22 < uVar3));
  }
LAB_100155780:
  puVar11 = puRam000000011383a990;
  if (*(int *)(param_1 + 1) != 3) goto LAB_1001559d4;
  if (puRam000000011383a990 == (ulong *)0x0) goto LAB_100155894;
  pmVar13 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538[0x17]) {
    pmVar13 = (mach_header *)auStack_538;
  }
  uVar3 = auStack_538._8_8_;
  if (-1 < (long)auStack_538._16_8_) {
    uVar3 = (long)auStack_538[0x17];
  }
  uVar23 = *puRam000000011383a990;
  lVar18 = uVar3 + 1;
  uVar22 = uVar23;
  func_0x000107c2cbd4(uVar23,lVar18,0x4cf434fa);
  plVar15 = *(long **)(uVar23 + 0x30);
  uVar21 = (uint)uVar22;
  if (uVar21 == 0) {
    if (plVar15 == (long *)0x0) goto LAB_100155894;
    lVar17 = 0;
LAB_1001557fc:
    (**(code **)(*plVar15 + 0x30))(plVar15,lVar17);
  }
  else {
    lVar17 = lVar18;
    if (plVar15 != (long *)0x0) goto LAB_1001557fc;
  }
  if (0x3f < uVar21 && (uVar22 & 7) == 0) {
    uVar23 = *puVar11;
    uVar5 = (int)lVar18 + 0x10;
    uVar6 = *(uint *)(uVar23 + 0x14);
    if ((((uVar5 + uVar21 <= uVar6) &&
         (puVar1 = (uint *)(*(long *)(uVar23 + 8) + (uVar22 & 0xffffffff)), puVar1[1] == 0xc8799269)
         ) && (uVar5 <= *puVar1)) && ((*puVar1 + uVar21 <= uVar6 && (puVar1[2] == 0x4cf434fa)))) {
      func_0x000107c610b4(puVar1 + 4,pmVar13,uVar3);
      func_0x000107c2cbd8(*puVar11,uVar22);
    }
  }
LAB_100155894:
  func_0x000107c610bc(&mStack_510,0xaa,0x400);
  lVar18 = 0;
  pmVar13 = (mach_header *)auStack_538._0_8_;
  if (-1 < (long)auStack_538._16_8_) {
    pmVar13 = (mach_header *)auStack_538;
  }
  do {
    cVar8 = *(char *)((long)&pmVar13->magic + lVar18);
    *(char *)((long)&mStack_510.magic + lVar18) = cVar8;
    if (cVar8 == '\0') goto LAB_1001558dc;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 0x400);
  uStack_111 = 0;
LAB_1001558dc:
  pmVar13 = &mStack_510;
  func_0x000100123990();
  pmVar14 = (mach_header *)0x1137f5070;
  if ((bRam00000001137f5070 & 1) == 0) goto LAB_100155a9c;
  do {
    if (uRam00000001137f5088 == uRam00000001137f5090) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(0,0x100155af8);
      (*pcVar12)();
    }
    if ((pmVar14->magic & 1) == 0) {
      pmVar20 = (mach_header *)0x1137f5070;
      pmVar13 = pmVar20;
      func_0x000107c60e48();
      if ((int)pmVar13 != 0) {
        uRam00000001137f5090 = 0;
        uRam00000001137f5088 = 0;
        uRam00000001137f5080 = 0;
        lRam00000001137f5078 = 0;
        func_0x000107c60e4c();
        pmVar13 = pmVar20;
      }
    }
    uVar3 = uRam00000001137f5080;
    if (uRam00000001137f5090 != 0) {
      uVar3 = uRam00000001137f5090;
    }
    if (uRam00000001137f5080 < uVar3 - 1) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(0,0x100155b04);
      (*pcVar12)();
    }
    pmVar20 = *(mach_header **)(lRam00000001137f5078 + (uVar3 - 1) * 8);
    if (pmVar20 != (mach_header *)0x0) {
      do {
        dVar9 = pmVar20->magic;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pmVar20,0x10);
        if (bVar10) {
          pmVar20->magic = dVar9 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if ((int)dVar9 < 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(0,0x100155b10);
        (*pcVar12)();
      }
      pmVar13 = (mach_header *)auStack_538._0_8_;
      if (-1 < (long)auStack_538._16_8_) {
        pmVar13 = (mach_header *)auStack_538;
      }
      pmVar14 = (mach_header *)((long)&pmVar13->magic + lVar24);
      if (pmVar14 == (mach_header *)0x0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(0,0x100155b1c);
        (*pcVar12)();
      }
      uVar4 = param_1[0x24];
      puVar2 = (undefined *)((long)&pmVar13->magic + param_1[0x23]);
      uVar7 = *(undefined4 *)(param_1 + 0x25);
      lVar24 = lVar24 - param_1[0x23];
      pmVar16 = pmVar14;
      func_0x000107c613d0();
      uStack_110 = SUB84(puVar2,0);
      uStack_10c = (ushort)((ulong)puVar2 >> 0x20);
      uStack_10a = (undefined2)((ulong)puVar2 >> 0x30);
      pmVar13 = pmVar20;
      pmStack_520 = pmVar14;
      pmStack_518 = pmVar16;
      uStack_108 = lVar24;
      (**(code **)&pmVar20->cpusubtype)(pmVar20,uVar4,uVar7,&uStack_110,&pmStack_520);
      do {
        dVar9 = pmVar20->magic - 1;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(pmVar20,0x10);
        if (bVar10) {
          pmVar20->magic = dVar9;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (dVar9 == 0) {
        (**(code **)&pmVar20->ncmds)();
        pmVar13 = pmVar20;
      }
    }
LAB_1001559d4:
    if ((long)auStack_538._16_8_ < 0) {
      pmVar13 = (mach_header *)auStack_538._0_8_;
      func_0x000107c60e14();
    }
    dVar9 = *(dword *)((long)param_1 + 300);
    func_0x000107c60e5c();
    pmVar13->magic = dVar9;
    param_1[0x10] = &PTR_DAT_11088d708;
    param_1[2] = &PTR_DAT_11088d6e0;
    param_1[3] = &PTR_DAT_11088d7b0;
    param_1[3] = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
    func_0x000107c60db0(param_1 + 4);
    func_0x000107c60cdc(plVar19,&PTR_PTR_11088d720);
    func_0x000107c60dd8(param_1 + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return param_1;
    }
    func_0x000107c60e78();
LAB_100155a9c:
    pmVar20 = (mach_header *)0x1137f5070;
    pmVar13 = pmVar20;
    func_0x000107c60e48();
    if ((int)pmVar13 != 0) {
      uRam00000001137f5090 = 0;
      uRam00000001137f5088 = 0;
      uRam00000001137f5080 = 0;
      lRam00000001137f5078 = 0;
      func_0x000107c60e4c();
      pmVar13 = pmVar20;
    }
  } while( true );
}



/* Entry: 100155b24; end: 100155c1f;  */

void FUN_100155b24(undefined8 *param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x30);
  uVar1 = *(ulong *)(param_2 + 0x58);
  if (*(ulong *)(param_2 + 0x58) < uVar2) {
    *(ulong *)(param_2 + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  if (((param_5 & 0x18) == 0) || (param_4 == 1 && (param_5 & 0x18) == 0x18)) {
LAB_100155b8c:
    lVar5 = -1;
  }
  else {
    if (uVar1 == 0) {
      uVar4 = 0;
      if (param_4 == 0) goto LAB_100155bb4;
LAB_100155b6c:
      uVar6 = uVar4;
      if (param_4 != 2) {
        if (param_4 != 1) goto LAB_100155b8c;
        if ((param_5 >> 3 & 1) == 0) {
          uVar6 = uVar2 - *(long *)(param_2 + 0x28);
        }
        else {
          uVar6 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        }
      }
    }
    else {
      puVar3 = (undefined8 *)(param_2 + 0x40);
      if (*(char *)(param_2 + 0x57) < '\0') {
        puVar3 = (undefined8 *)*puVar3;
      }
      uVar4 = uVar1 - (long)puVar3;
      if (param_4 != 0) goto LAB_100155b6c;
LAB_100155bb4:
      uVar6 = (ulong)param_4;
    }
    lVar5 = -1;
    param_3 = uVar6 + param_3;
    if (((-1 < param_3) && (param_3 <= (long)uVar4)) &&
       ((param_3 == 0 ||
        ((((param_5 >> 3 & 1) == 0 || (*(long *)(param_2 + 0x18) != 0)) &&
         (((param_5 >> 4 & 1) == 0 || (uVar2 != 0)))))))) {
      if ((param_5 >> 3 & 1) != 0) {
        *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x10) + param_3;
        *(ulong *)(param_2 + 0x20) = uVar1;
      }
      lVar5 = param_3;
      if ((param_5 >> 4 & 1) != 0) {
        *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x28) + param_3;
      }
    }
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x10] = lVar5;
  return;
}



/* Entry: 100155c20; end: 100155db3;  */

/* WARNING: Removing unreachable block (ram,0x0001001387f8) */

undefined8 * FUN_100155c20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x20;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int unaff_w25;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar3 = param_2;
  func_0x000107c60864();
  puVar4 = (undefined8 *)0x0;
  if (puVar3 == (undefined8 *)0x0) {
LAB_100155c9c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return puVar4;
  }
  puStack_50 = &uStack_48;
  uStack_48 = 0xaaaaaaaaaaaaaaaa;
  puVar4 = param_2;
  func_0x000107c60854(param_2,0,puVar3,0x8000100,0,0,0,0);
  uVar2 = uStack_48;
  if ((puVar4 == (undefined8 *)0x0) || (uStack_48 == 0)) goto LAB_100155c9c;
  puVar1 = (undefined8 *)(uStack_48 + 1);
  if (uStack_48 == 0xffffffffffffffff) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = unaff_x20;
    if ((long)puVar1 < 0) goto LAB_100155d98;
    puVar6 = puVar1;
    func_0x000107c60e20();
    func_0x000107c60ee4();
  }
  puStack_50 = (ulong *)0x0;
  puVar4 = param_2;
  func_0x000107c60854(param_2,0,puVar3,0x8000100,0,0,puVar6,uVar2);
  if (puVar4 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    *(undefined1 *)((long)puVar6 + uVar2) = 0;
    if (0x7ffffffffffffff7 < uVar2) {
      func_0x000107c35c54();
LAB_100155d98:
      func_0x000107c2cca0();
      if (puVar6 != (undefined8 *)0x0) {
        func_0x000107c60e14(puVar6);
      }
      func_0x000107c60bd8(puVar4);
      puVar5 = unaff_x20 + 0x18;
      uStack_78 = uVar2;
      uStack_58 = 0x100155db4;
      puStack_80 = param_2;
      puStack_70 = puVar6;
      puStack_68 = puVar4;
      puStack_60 = &stack0xfffffffffffffff0;
      func_0x000100155dc4();
      puVar4 = puVar5;
      if ((undefined8 *)unaff_x20[0x19] != puVar5) {
        func_0x00010014c40c();
        if (unaff_w25 == 0) {
          puVar4 = puVar5 + 7;
        }
      }
      if (puVar4 != puVar5) {
        puVar7 = (undefined8 *)unaff_x20[0x19];
        puVar6 = puVar5;
        puStack_90 = puVar1;
        puStack_88 = puVar3;
        if (puVar4 != puVar7) {
          lVar8 = 0;
          do {
            puVar3 = (undefined8 *)((long)puVar5 + lVar8);
            if (*(char *)((long)puVar3 + 0x17) < '\0') {
              func_0x000107c60e14(*puVar3);
            }
            puVar1 = (undefined8 *)((long)puVar4 + lVar8);
            uVar10 = puVar1[1];
            uVar9 = *puVar1;
            puVar3[2] = puVar1[2];
            puVar3[1] = uVar10;
            *puVar3 = uVar9;
            *(undefined1 *)((long)puVar1 + 0x17) = 0;
            *(undefined1 *)puVar1 = 0;
            puStack_a0 = puVar3 + 3;
            puStack_98 = puVar1 + 3;
            func_0x000100136cd8(&puStack_a0,puVar1[6]);
            lVar8 = lVar8 + 0x38;
          } while ((undefined8 *)((long)puVar4 + lVar8) != puVar7);
          puVar7 = (undefined8 *)unaff_x20[0x19];
          puVar6 = (undefined8 *)((long)puVar5 + lVar8);
        }
        for (; puVar7 != puVar6; puVar7 = puVar7 + -7) {
          puStack_a0 = puVar7 + -4;
          FUN_100136360(&puStack_a0,puVar7[-1]);
        }
        unaff_x20[0x19] = puVar6;
      }
      return puVar5;
    }
    if (uVar2 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar2;
      puVar3 = param_1;
    }
    else {
      puVar4 = (undefined8 *)0x19;
      if ((uVar2 | 7) != 0x17) {
        puVar4 = (undefined8 *)((uVar2 | 7) + 1);
      }
      puVar3 = puVar4;
      func_0x000107c60e20();
      param_1[1] = uVar2;
      param_1[2] = (ulong)puVar4 | 0x8000000000000000;
      *param_1 = puVar3;
    }
    puVar4 = puVar3;
    func_0x000107c610b8(puVar3,puVar6,uVar2);
    *(undefined1 *)((long)puVar3 + uVar2) = 0;
    if (puVar6 == (undefined8 *)0x0) {
      return puVar4;
    }
  }
  func_0x000107c60e14(puVar6);
  return puVar6;
}



/* Entry: 100155db4; end: 100156e2f;  */

/* WARNING: Removing unreachable block (ram,0x0001001387f8) */

long FUN_100155db4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int unaff_w25;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000030;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  lVar3 = in_stack_00000030 + 0xc0;
  func_0x000100155dc4();
  lVar4 = lVar3;
  if (*(long *)(in_stack_00000030 + 200) != lVar3) {
    func_0x00010014c40c();
    if (unaff_w25 == 0) {
      lVar4 = lVar3 + 0x38;
    }
  }
  if (lVar4 != lVar3) {
    lVar5 = *(long *)(in_stack_00000030 + 200);
    lVar6 = lVar3;
    if (lVar4 != lVar5) {
      lVar6 = 0;
      do {
        puVar2 = (undefined8 *)(lVar3 + lVar6);
        if (*(char *)((long)puVar2 + 0x17) < '\0') {
          func_0x000107c60e14(*puVar2);
        }
        puVar1 = (undefined8 *)(lVar4 + lVar6);
        uVar8 = puVar1[1];
        uVar7 = *puVar1;
        puVar2[2] = puVar1[2];
        puVar2[1] = uVar8;
        *puVar2 = uVar7;
        *(undefined1 *)((long)puVar1 + 0x17) = 0;
        *(undefined1 *)puVar1 = 0;
        puStack_50 = puVar2 + 3;
        puStack_48 = puVar1 + 3;
        func_0x000100136cd8(&puStack_50,puVar1[6]);
        lVar6 = lVar6 + 0x38;
      } while (lVar4 + lVar6 != lVar5);
      lVar5 = *(long *)(in_stack_00000030 + 200);
      lVar6 = lVar3 + lVar6;
    }
    for (; lVar5 != lVar6; lVar5 = lVar5 + -0x38) {
      puStack_50 = (undefined8 *)(lVar5 + -0x20);
      FUN_100136360(&puStack_50,*(undefined8 *)(lVar5 + -8));
    }
    *(long *)(in_stack_00000030 + 200) = lVar6;
  }
  return lVar3;
}



/* Entry: 100156e30; end: 100156e3b;  */

void FUN_100156e30(void)

{
  return;
}



/* Entry: 100156e3c; end: 100156f63;  */

undefined4 FUN_100156e3c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  long alStack_58 [4];
  undefined1 uStack_31;
  
  uStack_31 = 0xaa;
  FUN_100156e30(&UNK_10f75c4f1);
  FUN_10012dd4c(alStack_58);
  func_0x000100157030(&uStack_31,alStack_58);
  lVar3 = param_1 + 0x30;
  func_0x00010012d504();
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar2 = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    func_0x000107c377a0();
    lStack_60 = 2000000;
    alStack_58[0] = lVar3;
    func_0x000107c377a0();
    plVar1 = &lStack_68;
    lStack_68 = lVar3;
    func_0x00010018b698(plVar1,2000000);
    lVar3 = 2000000;
    while (0 < lVar3) {
      lVar3 = param_1 + 0x70;
      func_0x000107c2cfb4(lVar3,&lStack_60);
      if (*(char *)(param_1 + 0x28) == '\x01') {
        uVar2 = *(undefined4 *)(param_1 + 0x24);
        goto LAB_100156f08;
      }
      func_0x000107c377a0();
      lVar3 = (long)plVar1 - lVar3;
      lStack_60 = lVar3;
    }
    uVar2 = 0;
LAB_100156f08:
    func_0x000107c2eb54(alStack_58);
  }
  func_0x000107c61268(param_1 + 0x30);
  func_0x000100157054(&uStack_31);
  return uVar2;
}



/* Entry: 100156f64; end: 1001571e3;  */

void FUN_100156f64(void)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  
  if ((bRam000000011383ad68 & 1) == 0) {
    iVar4 = 0x1383ad68;
    func_0x000107c60e48();
    if (iVar4 != 0) {
      uRam000000011383ad60 = 0xffffffff;
      func_0x000100126cd4(0x11383ad60,0);
      func_0x000107c60e4c(0x11383ad68);
    }
  }
  uVar5 = uRam000000011336f908;
  func_0x000107c61248();
  if ((((uVar5 & 0xfffffffffffffffc) != 0) &&
      (puVar1 = (undefined8 *)
                ((uVar5 & 0xfffffffffffffffc) + (long)(int)uRam000000011383ad60 * 0x10),
      *(int *)(puVar1 + 1) == uRam000000011383ad60._4_4_)) &&
     (puVar6 = (ulong *)*puVar1, puVar6 != (ulong *)0x0)) {
    uVar5 = puVar6[1];
    if (uVar5 != 0) {
      uVar7 = *puVar6;
      (**(code **)(uVar5 + 8))();
      *puVar6 = uVar5 | uVar7 & 0xff00000000000000;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
      if (bVar3) {
        *puVar6 = *puVar6 | 0x4000000000000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 1001571e4; end: 10015739b;  */

void FUN_1001571e4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = lRam000000011383aa68;
  if (lRam000000011383aa68 == 0) goto LAB_1001572f0;
  lVar9 = lRam000000011383aa68;
  func_0x000107c61264();
  if ((int)lVar9 == 0) {
    plVar11 = (long *)(lRam000000011383aa68 + 0x48);
    plVar12 = (long *)*plVar11;
  }
  else {
    func_0x000107c2cfbc(lVar4);
    plVar11 = (long *)(lRam000000011383aa68 + 0x48);
    plVar12 = (long *)*plVar11;
  }
  plVar10 = plVar11;
  if (plVar12 != (long *)0x0) {
    do {
      cVar3 = *(char *)((long)plVar12 + 0x37);
      plVar6 = (long *)plVar12[4];
      if (-1 < (long)cVar3) {
        plVar6 = plVar12 + 4;
      }
      uVar2 = plVar12[5];
      if (-1 < cVar3) {
        uVar2 = (long)cVar3;
      }
      uVar7 = param_3;
      if (uVar2 <= param_3) {
        uVar7 = uVar2;
      }
      func_0x000107c610b0(plVar6,param_2,uVar7);
      uVar8 = (uint)((ulong)plVar6 >> 0x1f) & 1;
      uVar7 = 8;
      if (uVar2 >= param_3) {
        uVar7 = 0;
      }
      uVar1 = (ulong)((uint)((ulong)plVar6 >> 0x1c) & 8);
      if ((int)plVar6 == 0) {
        uVar8 = (uint)(uVar2 < param_3);
        uVar1 = uVar7;
      }
      if (uVar8 == 0) {
        plVar10 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + uVar1);
    } while (plVar12 != (long *)0x0);
    if (plVar10 != plVar11) {
      cVar3 = *(char *)((long)plVar10 + 0x37);
      plVar11 = (long *)plVar10[4];
      if (-1 < (long)cVar3) {
        plVar11 = plVar10 + 4;
      }
      uVar2 = plVar10[5];
      if (-1 < cVar3) {
        uVar2 = (long)cVar3;
      }
      uVar7 = uVar2;
      if (param_3 <= uVar2) {
        uVar7 = param_3;
      }
      func_0x000107c610b0(param_2,plVar11,uVar7);
      if ((int)param_2 == 0) {
        if (uVar2 <= param_3) goto LAB_100157314;
      }
      else if (-1 < (int)param_2) {
LAB_100157314:
        lVar9 = plVar10[7];
        func_0x000107c61268(lVar4);
        if (lVar9 != 0) {
          func_0x000107c2cb70(lVar9,0);
          if (*(char *)(lVar9 + 0x73) == '\x01') {
            func_0x000107c2cb6c(lVar9);
          }
          if (-1 < *(char *)(lVar9 + 0x6f)) {
            uVar14 = *(undefined8 *)(lVar9 + 0x60);
            uVar13 = *(undefined8 *)(lVar9 + 0x58);
            param_1[2] = *(undefined8 *)(lVar9 + 0x68);
            param_1[1] = uVar14;
            *param_1 = uVar13;
            return;
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x58);
          uVar2 = *(ulong *)(lVar9 + 0x60);
          puVar5 = param_1;
          if (uVar2 < 0x17) {
            *(char *)((long)param_1 + 0x17) = (char)uVar2;
          }
          else {
            if (0x7ffffffffffffff6 < uVar2) {
              func_0x000104bd47d4();
              func_0x000107c60e20(uVar13);
              return;
            }
            uVar7 = 0x19;
            if ((uVar2 | 7) != 0x17) {
              uVar7 = (uVar2 | 7) + 1;
            }
            FUN_100033e30();
            param_1[1] = uVar2;
            param_1[2] = uVar7 | 0x8000000000000000;
            *param_1 = puVar5;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memmove_11034c660)(puVar5,uVar13,uVar2 + 1);
          return;
        }
        goto LAB_1001572f0;
      }
    }
  }
  func_0x000107c61268(lVar4);
LAB_1001572f0:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10015739c; end: 100157a43;  */

void FUN_10015739c(void)

{
  return;
}



/* Entry: 100157a44; end: 100157a67;  */

void FUN_100157a44(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 100157a68; end: 100157e27;  */

void FUN_100157a68(void)

{
  return;
}



/* Entry: 100157e28; end: 100157ed3;  */

void FUN_100157e28(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  lRam00000001137f5098 = param_2;
  if (*(int *)(param_2 + 8) == 1) {
    FUN_1009db1c0(param_2,0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000100157e8c(&puStack_38,uStack_30);
  return;
}



/* Entry: 100157ed4; end: 10015909b;  */

long * FUN_100157ed4(long param_1,undefined8 *param_2)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long alStack_48 [3];
  
  alStack_48[2] = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)0x80;
  func_0x000107c60e20();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = 0;
  *plVar5 = (long)&PTR_DAT_110cd5b68;
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
  }
  *(undefined8 *)((long)plVar5 + 0xc) = *param_2;
  *(undefined1 *)((long)plVar5 + 0x14) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)((long)plVar5 + 0x15) = *(undefined4 *)((long)param_2 + 9);
  *(undefined2 *)((long)plVar5 + 0x19) = *(undefined2 *)((long)param_2 + 0xd);
  plVar5[4] = lVar1;
  alStack_48[0] = -0x5555555555555556;
  alStack_48[1] = 0xaaaaaaaaaaaaaaaa;
  func_0x000107c61270(alStack_48);
  func_0x000107c61274(alStack_48,1);
  func_0x000107c6125c(plVar5 + 5,alStack_48);
  plVar6 = alStack_48;
  func_0x000107c6126c();
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  if (plVar5 != (long *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_48[2]) {
    return plVar5;
  }
  func_0x000107c60e78();
  plVar5 = (long *)*plVar6;
  if (plVar5 != (long *)0x0) {
    plVar7 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar7 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *(int *)plVar7 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  return plVar6;
}



/* Entry: 10015909c; end: 1001590cb;  */

void FUN_10015909c(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001001590a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1001590cc; end: 1001594f3;  */

void FUN_1001590cc(void)

{
  return;
}



/* Entry: 1001594f4; end: 10015980f;  */

/* WARNING: Removing unreachable block (ram,0x0001001597e0) */
/* WARNING: Removing unreachable block (ram,0x00010015956c) */

void FUN_1001594f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)puVar6 >> 3) * -0x5555555555555555)) {
    puVar8 = (undefined8 *)param_1[1];
    lVar3 = (long)puVar8 - (long)puVar6;
    if ((ulong)((lVar3 >> 3) * -0x5555555555555555) < param_4) {
      puVar7 = (undefined8 *)((long)param_2 + lVar3);
      if (puVar8 != puVar6) {
        do {
          if (param_2 != puVar6) {
            bVar2 = *(byte *)((long)param_2 + 0x17);
            if (*(char *)((long)puVar6 + 0x17) < '\0') {
              uVar4 = param_2[1];
              puVar8 = (undefined8 *)*param_2;
              if (-1 < (char)bVar2) {
                uVar4 = (ulong)bVar2;
                puVar8 = param_2;
              }
              FUN_1006aabfc(puVar6,puVar8,uVar4);
            }
            else if ((char)bVar2 < '\0') {
              FUN_10014884c(puVar6,*param_2,param_2[1]);
            }
            else {
              uVar10 = param_2[1];
              uVar9 = *param_2;
              puVar6[2] = param_2[2];
              puVar6[1] = uVar10;
              *puVar6 = uVar9;
            }
          }
          param_2 = param_2 + 3;
          puVar6 = puVar6 + 3;
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != 0);
        puVar8 = (undefined8 *)param_1[1];
      }
      if (puVar7 != param_3) {
        lVar3 = 0;
        do {
          while( true ) {
            lVar5 = lVar3;
            puVar6 = (undefined8 *)((long)puVar7 + lVar5);
            puVar1 = (undefined8 *)((long)puVar8 + lVar5);
            if (*(char *)((long)puVar6 + 0x17) < '\0') break;
            uVar10 = puVar6[1];
            uVar9 = *puVar6;
            puVar1[2] = puVar6[2];
            puVar1[1] = uVar10;
            *puVar1 = uVar9;
            lVar3 = lVar5 + 0x18;
            if ((undefined8 *)((long)puVar7 + lVar5 + 0x18) == param_3) goto LAB_1001597a4;
          }
          FUN_100033dac(puVar1,*puVar6,puVar6[1]);
          lVar3 = lVar5 + 0x18;
        } while ((undefined8 *)((long)puVar7 + lVar5 + 0x18) != param_3);
LAB_1001597a4:
        puVar8 = (undefined8 *)((long)puVar8 + lVar5 + 0x18);
      }
      param_1[1] = puVar8;
      return;
    }
    if (param_2 != param_3) {
      do {
        if (param_2 != puVar6) {
          bVar2 = *(byte *)((long)param_2 + 0x17);
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            uVar4 = param_2[1];
            puVar8 = (undefined8 *)*param_2;
            if (-1 < (char)bVar2) {
              uVar4 = (ulong)bVar2;
              puVar8 = param_2;
            }
            FUN_1006aabfc(puVar6,puVar8,uVar4);
          }
          else if ((char)bVar2 < '\0') {
            FUN_10014884c(puVar6,*param_2,param_2[1]);
          }
          else {
            uVar10 = param_2[1];
            uVar9 = *param_2;
            puVar6[2] = param_2[2];
            puVar6[1] = uVar10;
            *puVar6 = uVar9;
          }
        }
        param_2 = param_2 + 3;
        puVar6 = puVar6 + 3;
      } while (param_2 != param_3);
      puVar8 = (undefined8 *)param_1[1];
    }
    for (; puVar8 != puVar6; puVar8 = puVar8 + -3) {
    }
LAB_1001597f0:
    param_1[1] = puVar6;
    return;
  }
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[1];
    puVar8 = puVar6;
    if (puVar7 != puVar6) {
      do {
        puVar7 = puVar7 + -3;
      } while (puVar7 != puVar6);
      puVar8 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar6;
    func_0x000107c60e14(puVar8);
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0xaaaaaaaaaaaaaab) {
    uVar4 = (lVar3 >> 3) * 0x5555555555555556;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x555555555555554 < (ulong)((lVar3 >> 3) * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar4 < 0xaaaaaaaaaaaaaab) {
      puVar6 = (undefined8 *)(uVar4 * 0x18);
      func_0x000107c60e20();
      *param_1 = puVar6;
      param_1[1] = puVar6;
      param_1[2] = puVar6 + uVar4 * 3;
      for (; param_2 != param_3; param_2 = param_2 + 3) {
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          FUN_100033dac(puVar6,*param_2,param_2[1]);
        }
        else {
          uVar9 = *param_2;
          puVar6[1] = param_2[1];
          *puVar6 = uVar9;
          puVar6[2] = param_2[2];
        }
        puVar6 = puVar6 + 3;
      }
      goto LAB_1001597f0;
    }
  }
  func_0x000107c35c9c();
  return;
}



/* Entry: 100159810; end: 10015a47f;  */

void FUN_100159810(void)

{
  return;
}



/* Entry: 10015a480; end: 10015a58b;  */

void FUN_10015a480(long param_1,undefined4 *param_2)

{
  *param_2 = 0xfffffc1e;
  *(undefined8 *)(*(long *)(param_2 + 8) + (ulong)(*(int *)(param_1 + 0x10) - 1) * 0x18) =
       *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 8);
  return;
}



/* Entry: 10015a58c; end: 10015a9d7;  */

void FUN_10015a58c(long *param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  undefined4 uVar10;
  long lVar11;
  char *pcVar12;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  char acStack_70 [8];
  ulong uStack_68;
  byte bStack_59;
  char cStack_52;
  char cStack_51;
  
  FUN_100152260();
  pcVar12 = *(char **)(param_2 + 0x10);
  if (pcVar12 == *(char **)(param_2 + 0x18)) {
    lVar13 = 0;
    uVar14 = (uint)*(byte *)(unaff_x20 + 0xa8);
    goto LAB_10015a98c;
  }
  if ((*(char *)(unaff_x20 + 0xab) == '\x01') && (pcVar12 + 1 != *(char **)(param_2 + 0x18))) {
    cStack_52 = *pcVar12;
    cStack_51 = pcVar12[1];
    lVar13 = (long)cStack_51;
    if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
      cVar2 = (char)*(undefined8 *)(unaff_x20 + 0x18);
      func_0x00010688e2f4();
      cStack_52 = cVar2;
      param_1 = *(long **)(unaff_x20 + 0x18);
      (**(code **)(*param_1 + 0x28))(param_1,lVar13);
      cStack_51 = (char)param_1;
    }
    func_0x00010688e4f4();
    func_0x00010688943c();
    if (-1 < (char)bStack_59) {
      uStack_68 = (ulong)bStack_59;
    }
    func_0x00010688e478();
    if (uStack_68 != 0) {
      lVar13 = (*(long *)(unaff_x20 + 0x78) - *(long *)(unaff_x20 + 0x70) >> 1) + 1;
      pcVar12 = (char *)(*(long *)(unaff_x20 + 0x70) + 1);
      do {
        lVar13 = lVar13 + -1;
        if (lVar13 == 0) {
          if ((*(char *)(unaff_x20 + 0xaa) != '\x01') ||
             (*(long *)(unaff_x20 + 0x58) == *(long *)(unaff_x20 + 0x60))) goto LAB_10015a8d0;
          func_0x00010688e4f4();
          func_0x000106889444();
          lVar13 = 0;
          uVar15 = 0;
          goto LAB_10015a774;
        }
        pcVar1 = pcVar12 + -1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 2;
      } while (cStack_52 != *pcVar1 || cStack_51 != cVar2);
      goto LAB_10015a674;
    }
  }
  lVar13 = 1;
  uVar5 = 0;
  goto LAB_10015a684;
LAB_10015a774:
  uVar4 = (*(long *)(unaff_x20 + 0x60) - *(long *)(unaff_x20 + 0x58)) / 0x30;
  if (uVar4 <= uVar15) goto LAB_10015a8b8;
  param_1 = (long *)(*(long *)(unaff_x20 + 0x58) + lVar13);
  func_0x000100125af4(param_1,acStack_70);
  if (((char)param_1 < '\x01') &&
     (func_0x00010688eb0c(*(long *)(unaff_x20 + 0x58) + lVar13), (char)param_1 < '\x01')) {
    iVar6 = 5;
    goto LAB_10015a8c4;
  }
  uVar15 = uVar15 + 1;
  lVar13 = lVar13 + 0x30;
  goto LAB_10015a774;
LAB_10015a7e4:
  uVar4 = (*(long *)(unaff_x20 + 0x60) - *(long *)(unaff_x20 + 0x58)) / 0x30;
  if (uVar4 <= uVar15) goto LAB_10015a838;
  plVar7 = (long *)(*(long *)(unaff_x20 + 0x58) + lVar11);
  func_0x000100125af4(plVar7,acStack_70);
  if (((char)plVar7 < '\x01') &&
     (func_0x00010688eb0c(*(long *)(unaff_x20 + 0x58) + lVar11), (char)plVar7 < '\x01')) {
    uVar14 = 1;
    goto LAB_10015a838;
  }
  uVar15 = uVar15 + 1;
  lVar11 = lVar11 + 0x30;
  goto LAB_10015a7e4;
LAB_10015a838:
  func_0x00010688e478();
  if (uVar4 <= uVar15) {
LAB_10015a844:
    uVar5 = (uint)plVar7;
    if (*(long *)(unaff_x20 + 0x88) != *(long *)(unaff_x20 + 0x90)) {
      func_0x00010688e4f4();
      func_0x000106889490();
      uVar15 = 0xffffffffffffffff;
      lVar11 = 0;
      do {
        uVar5 = (uint)plVar7;
        uVar4 = (*(long *)(unaff_x20 + 0x90) - *(long *)(unaff_x20 + 0x88)) / 0x18;
        uVar15 = uVar15 + 1;
        if (uVar4 <= uVar15) goto LAB_10015a898;
        func_0x00010688eb18(lVar11);
        uVar5 = (uint)plVar7;
        lVar11 = lVar11 + 0x18;
      } while (uVar5 == 0);
      uVar14 = 1;
LAB_10015a898:
      func_0x00010688e478();
      if (uVar15 < uVar4) goto LAB_10015a98c;
    }
    func_0x00010015a9d8();
    uVar14 = uVar14 | uVar5;
  }
  goto LAB_10015a98c;
LAB_10015a8b8:
  iVar6 = 0;
LAB_10015a8c4:
  func_0x00010688e478();
  if (uVar4 <= uVar15) {
LAB_10015a8d0:
    if (*(long *)(unaff_x20 + 0x88) != *(long *)(unaff_x20 + 0x90)) {
      func_0x00010688e4f4();
      func_0x000106889490();
      uVar15 = 0xffffffffffffffff;
      lVar13 = 0;
      do {
        uVar4 = (*(long *)(unaff_x20 + 0x90) - *(long *)(unaff_x20 + 0x88)) / 0x18;
        uVar15 = uVar15 + 1;
        if (uVar4 <= uVar15) {
          iVar6 = 0;
          goto LAB_10015a928;
        }
        func_0x00010688eb18(lVar13);
        lVar13 = lVar13 + 0x18;
      } while ((int)param_1 == 0);
      iVar6 = 5;
LAB_10015a928:
      func_0x00010688e478();
      if (uVar15 < uVar4) goto LAB_10015a934;
    }
    func_0x00010015a9d8();
    if (((int)param_1 == 0) || (func_0x00010015a9d8(), ((ulong)param_1 & 1) == 0)) {
      func_0x00010015a9d8();
      iVar6 = (int)param_1;
      if ((((ulong)param_1 & 1) == 0) && (func_0x00010015a9d8(), iVar6 == 0)) goto LAB_10015a674;
      uVar14 = 0;
    }
    else {
LAB_10015a674:
      uVar14 = 1;
    }
    lVar13 = 2;
    goto LAB_10015a98c;
  }
LAB_10015a934:
  uVar14 = 1;
  lVar13 = 2;
  uVar5 = 1;
  if (iVar6 != 0) goto LAB_10015a98c;
LAB_10015a684:
  uVar14 = uVar5;
  cStack_52 = **(char **)(unaff_x19 + 4);
  uVar5 = (uint)cStack_52;
  if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
    param_1 = *(long **)(unaff_x20 + 0x18);
    func_0x00010688e2f4();
    uVar5 = (uint)param_1;
    cStack_52 = (char)param_1;
  }
  lVar11 = *(long *)(unaff_x20 + 0x30) - (long)*(byte **)(unaff_x20 + 0x28);
  pbVar8 = *(byte **)(unaff_x20 + 0x28);
  do {
    if (lVar11 == 0) {
      if ((*(int *)(unaff_x20 + 0xa4) != 0) ||
         (plVar7 = param_1, *(long *)(unaff_x20 + 0x40) != *(long *)(unaff_x20 + 0x48))) {
        func_0x00010015a9d8();
        plVar7 = *(long **)(unaff_x20 + 0x40);
        func_0x000106889498(plVar7,*(undefined8 *)(unaff_x20 + 0x48),&cStack_52);
        if ((((ulong)param_1 & 1) == 0) && (*(long **)(unaff_x20 + 0x48) == plVar7)) break;
      }
      if (*(long *)(unaff_x20 + 0x58) == *(long *)(unaff_x20 + 0x60)) goto LAB_10015a844;
      if (*(char *)(unaff_x20 + 0xaa) == '\x01') {
        func_0x00010688e4f4();
        func_0x000106889444();
      }
      else {
        bStack_59 = 1;
        acStack_70[0] = cStack_52;
        acStack_70[1] = 0;
      }
      lVar11 = 0;
      uVar15 = 0;
      goto LAB_10015a7e4;
    }
    bVar3 = *pbVar8;
    lVar11 = lVar11 + -1;
    pbVar8 = pbVar8 + 1;
  } while ((uint)bVar3 != (uVar5 & 0xff));
  uVar14 = 1;
LAB_10015a98c:
  if ((uint)*(byte *)(unaff_x20 + 0xa8) == (uVar14 & 1)) {
    uVar9 = 0;
    uVar10 = 0xfffffc1f;
  }
  else {
    func_0x00010015aa10(*(long *)(unaff_x19 + 4) + lVar13);
    uVar10 = 0xfffffc1d;
    uVar9 = extraout_x8;
  }
  *unaff_x19 = uVar10;
  *(undefined8 *)(unaff_x19 + 0x14) = uVar9;
  return;
}



/* Entry: 10015a9d8; end: 10015aa3b;  */

uint FUN_10015a9d8(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  long unaff_x20;
  
  if ((-1 < param_2) &&
     ((*(uint *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + (long)param_2 * 4) & param_3) != 0)
     ) {
    return 1;
  }
  uVar1 = 0;
  if (param_2 == 0x5f) {
    uVar1 = param_3 >> 7 & 1;
  }
  return uVar1;
}



/* Entry: 10015aa3c; end: 10015aa8f;  */

void FUN_10015aa3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100153c68();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  FUN_10015aa9c(param_1 + 4,param_2 + 4);
  FUN_10015abb0(unaff_x19 + 0x38,unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x55) = *(undefined8 *)(unaff_x20 + 0x55);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  return;
}



/* Entry: 10015aa90; end: 10015aa9b;  */

void FUN_10015aa90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 10015aa9c; end: 10015aad3;  */

undefined8 FUN_10015aa9c(undefined8 param_1)

{
  FUN_10015aa90();
  FUN_10015aaec();
  return param_1;
}



/* Entry: 10015aad4; end: 10015aaeb;  */

void FUN_10015aad4(void)

{
  return;
}



/* Entry: 10015aaec; end: 10015ab47;  */

void FUN_10015aaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10015aad4();
    func_0x000100153930();
    func_0x0001001539c4();
    FUN_10015ab48();
  }
  uStack_38 = 1;
  FUN_10015ab74(&uStack_40);
  return;
}


