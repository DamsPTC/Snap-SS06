/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10688d738; end: 10688d7b7;  */

uint FUN_10688d738(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint extraout_w8;
  uint uVar3;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000100152260();
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)*(byte *)(unaff_x20 + 0x40);
  }
  if (*unaff_x19 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)*(byte *)(unaff_x19 + 8);
    if (((uVar2 | *(byte *)(unaff_x19 + 8)) & 1) == 0) {
      lVar1 = unaff_x20 + 0x20;
      FUN_10688d7b8(lVar1,unaff_x19 + 4);
      if (((int)lVar1 == 0) || (*(long *)(unaff_x20 + 0x30) != unaff_x19[6])) {
        uVar2 = 0;
      }
      else {
        func_0x00010688ed14();
        uVar2 = extraout_w8;
      }
      goto LAB_10688d7a4;
    }
  }
  uVar2 = uVar2 ^ uVar3 ^ 1;
LAB_10688d7a4:
  return uVar2 & 1;
}



/* Entry: 10688d7b8; end: 10688d7ef;  */

bool FUN_10688d7b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    _memcmp(lVar1,*param_2,param_1[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10688d7f0; end: 10688d847;  */

void FUN_10688d7f0(undefined8 *param_1,long param_2)

{
  ulong *unaff_x19;
  ulong uVar1;
  
  func_0x000100153c68();
  uVar1 = *(ulong *)(param_2 + 0x10);
  param_1[2] = uVar1;
  *param_1 = 0;
  if (0x10 < uVar1) {
    __Znam();
    *unaff_x19 = uVar1;
  }
  _memcpy();
  return;
}



/* Entry: 10688d848; end: 10688d85b;  */

void FUN_10688d848(void)

{
  return;
}



/* Entry: 10688d85c; end: 10688d89f;  */

void FUN_10688d85c(void)

{
  func_0x00010688d87c();
  func_0x00010688e6c8();
  return;
}



/* Entry: 10688d8a0; end: 10688d8bf;  */

void FUN_10688d8a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10688d8c0; end: 10688d90f;  */

void FUN_10688d8c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  lVar1 = param_1;
  FUN_10688d9dc(param_1,lVar2,*(undefined8 *)(param_1 + 0x38));
  if ((*(long *)(param_1 + 0x38) == lVar1 && *(long *)(param_1 + 0x38) == lVar2) &&
     (*(long *)(param_1 + 0x28) == lVar2)) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(long *)(param_1 + 0x28) = lVar1;
  *(long *)(param_1 + 0x30) = lVar2;
  return;
}



/* Entry: 10688d910; end: 10688d9db;  */

void FUN_10688d910(long *param_1,char *param_2,char *param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  char *pcVar2;
  long *plVar3;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  func_0x00010688e300();
  plVar3 = (long *)*param_1;
  uStack_38 = extraout_x8;
  func_0x00010688eb24();
  while ((pcVar2 = param_3, param_2 != param_3 &&
         (param_1 = alStack_50, FUN_10688d198(alStack_50,(long)*param_2), pcVar2 = param_2,
         ((ulong)param_1 & 1) == 0))) {
    param_2 = param_2 + 1;
  }
  func_0x00010688e534();
  uVar1 = param_3 == pcVar2;
  if ((!(bool)uVar1) && ((int)plVar3[3] == 0)) {
    while ((uVar1 = pcVar2 == param_3, !(bool)uVar1 &&
           (param_1 = plVar3, FUN_10688d198(plVar3,(long)*pcVar2), (int)param_1 != 0))) {
      pcVar2 = pcVar2 + 1;
    }
  }
  func_0x00010688e240(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010688e3cc();
    if (*param_1 != 0) {
      FUN_10688da08();
    }
    return;
  }
  func_0x00010688e954();
  return;
}



/* Entry: 10688d9dc; end: 10688da07;  */

void FUN_10688d9dc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10688da08();
  }
  return;
}



/* Entry: 10688da08; end: 10688da53;  */

void FUN_10688da08(ulong *param_1)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10688da48);
  (*pcVar1)();
}



/* Entry: 10688da54; end: 10688da77;  */

undefined8 FUN_10688da54(undefined8 param_1)

{
  FUN_10688da78();
  return param_1;
}



/* Entry: 10688da78; end: 10688daaf;  */

void FUN_10688da78(ulong *param_1)

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



/* Entry: 10688dab0; end: 10688db47;  */

undefined1 * FUN_10688dab0(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

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
  FUN_10688d85c(auStack_78);
  FUN_10688d85c(auStack_c8,param_3);
  FUN_10688db48(param_1,auStack_78,auStack_c8);
  FUN_10688da54(auStack_c8);
  FUN_10688da54(auStack_78);
  func_0x00010688e240(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010688e458();
  FUN_10688da54();
  puVar1 = auStack_78;
  FUN_10688da54();
  func_0x00010688e3cc();
  func_0x000100153eb4();
  uStack_108 = 0;
  puStack_110 = puVar1;
  while( true ) {
    func_0x00010688e954();
    FUN_10688dbbc();
    if ((int)puVar1 == 0) break;
    func_0x00010688dc88(auStack_128,param_3 + 0x20);
    func_0x00010688eaf8();
    func_0x000100152c24();
    puVar1 = param_3;
    FUN_10688d8c0();
  }
  func_0x00010688e8f4();
  return puVar1;
}



/* Entry: 10688db48; end: 10688dbbb;  */

void FUN_10688db48(long param_1)

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
    FUN_10688dbbc();
    if (iVar1 == 0) break;
    func_0x00010688dc88(auStack_58,unaff_x20 + 0x20);
    func_0x00010688eaf8();
    func_0x000100152c24();
    param_1 = unaff_x20;
    FUN_10688d8c0();
  }
  func_0x00010688e8f4();
  return;
}



/* Entry: 10688dbbc; end: 10688dbd3;  */

uint FUN_10688dbbc(uint param_1)

{
  FUN_10688dbd4();
  return param_1 ^ 1;
}



/* Entry: 10688dbd4; end: 10688dc53;  */

uint FUN_10688dbd4(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint extraout_w8;
  uint uVar3;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000100152260();
  if (*param_1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)*(byte *)(unaff_x20 + 0x40);
  }
  if (*unaff_x19 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (uint)*(byte *)(unaff_x19 + 8);
    if (((uVar2 | *(byte *)(unaff_x19 + 8)) & 1) == 0) {
      lVar1 = unaff_x20 + 0x20;
      FUN_10688dc54(lVar1,unaff_x19 + 4);
      if (((int)lVar1 == 0) || (*(long *)(unaff_x20 + 0x30) != unaff_x19[6])) {
        uVar2 = 0;
      }
      else {
        func_0x00010688ed14();
        uVar2 = extraout_w8;
      }
      goto LAB_10688dc40;
    }
  }
  uVar2 = uVar2 ^ uVar3 ^ 1;
LAB_10688dc40:
  return uVar2 & 1;
}



/* Entry: 10688dc54; end: 10688dd0f;  */

bool FUN_10688dc54(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (param_1[1] - lVar1 == param_2[1] - *param_2) {
    _memcmp(lVar1,*param_2,param_1[1] - lVar1);
    return (int)lVar1 == 0;
  }
  return false;
}



/* Entry: 10688dd10; end: 10688ded7;  */

long FUN_10688dd10(long *param_1,long param_2,byte *param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  
  if ((param_5 >> 8 & 1) == 0) {
    while (param_3 != param_4) {
      lVar3 = (long)(char)*param_3;
      pbVar8 = param_3 + 1;
      if (*param_3 == 0x24 && pbVar8 != param_4) {
        bVar2 = *pbVar8;
        if (bVar2 == 0x60) {
          param_2 = param_1[6];
          lVar3 = param_1[7];
        }
        else {
          if (bVar2 == 0x26) {
            plVar6 = (long *)*param_1;
          }
          else {
            uVar4 = (uint)bVar2;
            if (uVar4 == 0x27) {
              param_2 = param_1[9];
              lVar3 = param_1[10];
              goto LAB_10688de14;
            }
            if (uVar4 == 0x24) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,0x24);
              goto LAB_10688de1c;
            }
            if (9 < uVar4 - 0x30) {
              lVar3 = 0x24;
              goto LAB_10688dd68;
            }
            uVar5 = (ulong)(uVar4 - 0x30) & 0xff;
            pbVar1 = param_3 + 2;
            uVar7 = uVar5;
            if ((pbVar1 != param_4) &&
               (uVar7 = ((ulong)*pbVar1 + uVar5 * 10) - 0x30, pbVar8 = pbVar1, 9 < *pbVar1 - 0x30))
            {
              uVar7 = uVar5;
              pbVar8 = param_3 + 1;
            }
            plVar6 = (long *)(*param_1 + (long)(int)uVar7 * 0x18);
            if ((ulong)((param_1[1] - *param_1) / 0x18) <= uVar7) {
              plVar6 = param_1 + 3;
            }
          }
          param_2 = *plVar6;
          lVar3 = plVar6[1];
        }
LAB_10688de14:
        func_0x00010688ec00(param_2,lVar3);
      }
      else {
LAB_10688dd68:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,lVar3);
        pbVar8 = param_3;
      }
LAB_10688de1c:
      param_3 = pbVar8 + 1;
    }
  }
  else {
    while (param_3 != param_4) {
      bVar2 = *param_3;
      if (bVar2 == 0x5c) {
        pbVar8 = param_3 + 1;
        if (pbVar8 == param_4) goto LAB_10688dea8;
        uVar4 = (int)(char)*pbVar8 - 0x30;
        if (uVar4 < 10) {
          plVar6 = (long *)(*param_1 + ((ulong)uVar4 & 0xff) * 0x18);
          if ((ulong)((param_1[1] - *param_1) / 0x18) <= (ulong)(byte)uVar4) {
            plVar6 = param_1 + 3;
          }
          param_2 = *plVar6;
          func_0x00010688ec00(param_2,plVar6[1]);
        }
        else {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2);
        }
      }
      else if (bVar2 == 0x26) {
        param_2 = *(long *)*param_1;
        func_0x00010688ec00(param_2,((long *)*param_1)[1]);
        pbVar8 = param_3;
      }
      else {
LAB_10688dea8:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2,(int)(char)bVar2);
        pbVar8 = param_3;
      }
      param_3 = pbVar8 + 1;
    }
  }
  return param_2;
}



/* Entry: 10688ded8; end: 10688dfab;  */

long FUN_10688ded8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auStack_a0 [112];
  
  uVar4 = *(uint *)(param_1 + 0x18) | 0x800;
  *(uint *)(param_1 + 0x18) = uVar4;
  puVar1 = (ulong *)(param_1 + 0x38);
  if (*(ulong **)(param_1 + 0x28) != *(ulong **)(param_1 + 0x20)) {
    puVar1 = *(ulong **)(param_1 + 0x20);
  }
  uVar2 = puVar1[1];
  uVar3 = uVar2;
  if (*puVar1 == uVar2) {
    if (*(ulong *)(param_1 + 8) == uVar2) goto LAB_10688df80;
    func_0x00010688ed0c();
    if ((uVar3 & 1) != 0) {
      return param_1;
    }
    uVar4 = *(uint *)(param_1 + 0x18);
    uVar3 = uVar2 + 1;
  }
  *(uint *)(param_1 + 0x18) = uVar4 | 0x80;
  func_0x00010688ed0c(uVar3,*(undefined8 *)(param_1 + 8),param_3,*(undefined8 *)(param_1 + 0x10));
  if ((uVar3 & 1) != 0) {
    *(ulong *)(param_1 + 0x50) = uVar2;
    *(bool *)(param_1 + 0x60) = *(ulong *)(param_1 + 0x58) != uVar2;
    return param_1;
  }
LAB_10688df80:
  func_0x0001001534f4();
  func_0x00010688ed28();
  FUN_10688e14c();
  func_0x00010015b3ec(auStack_a0);
  return param_1;
}



/* Entry: 10688dfac; end: 10688e01b;  */

undefined8 *
FUN_10688dfac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  func_0x00010688ed0c(param_2,param_3);
  return param_1;
}



/* Entry: 10688e01c; end: 10688e037;  */

bool FUN_10688e01c(int param_1)

{
  FUN_10688e038();
  return param_1 == 0;
}



/* Entry: 10688e038; end: 10688e08f;  */

undefined1 * FUN_10688e038(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x00010015b1f8(auStack_38);
  func_0x00010015b1f8(auStack_50,param_2);
  puVar1 = auStack_38;
  FUN_10688e090(puVar1,auStack_50);
  func_0x00010688e478();
  func_0x00010688e514();
  return puVar1;
}



/* Entry: 10688e090; end: 10688e0c7;  */

void FUN_10688e090(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puStack_20;
  ulong uStack_18;
  
  uStack_18 = param_2[1];
  puStack_20 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_18 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_20 = param_2;
  }
  FUN_10688e0c8(param_1,&puStack_20);
  return;
}



/* Entry: 10688e0c8; end: 10688e113;  */

uint FUN_10688e0c8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2[1];
  uVar5 = (ulong)*(char *)((long)param_1 + 0x17);
  puVar2 = param_1;
  if ((long)uVar5 < 0) {
    puVar2 = (undefined8 *)*param_1;
    uVar5 = param_1[1];
  }
  uVar1 = uVar4;
  if (uVar5 <= uVar4) {
    uVar1 = uVar5;
  }
  _memcmp(puVar2,*param_2,uVar1);
  uVar3 = (uint)(uVar4 < uVar5);
  if (uVar5 < uVar4) {
    uVar3 = 0xffffffff;
  }
  if ((uint)puVar2 != 0) {
    uVar3 = (uint)puVar2;
  }
  return uVar3;
}



/* Entry: 10688e114; end: 10688e14b;  */

void FUN_10688e114(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x000100153eb4();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 1) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
  }
  return;
}



/* Entry: 10688e14c; end: 10688e20f;  */

void FUN_10688e14c(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000100152260();
  func_0x00010688e1bc();
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x20 + 0x28) = *(undefined1 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined1 *)(unaff_x20 + 0x40) = *(undefined1 *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined1 *)(unaff_x20 + 0x58) = *(undefined1 *)(unaff_x19 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  return;
}



/* Entry: 10688e210; end: 10688eb7f;  */

void FUN_10688e210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_throw_110346bf8)();
  return;
}



/* Entry: 10688eb80; end: 10688eb9b;  */

void FUN_10688eb80(undefined1 *param_1)

{
  FUN_106889814(*param_1,0x10);
  return;
}



/* Entry: 10688eb9c; end: 10688edff;  */

void FUN_10688eb9c(long param_1,undefined8 param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00010688eba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_3 + param_1);
  return;
}



/* Entry: 10688ee00; end: 10688f097;  */

void FUN_10688ee00(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
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
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  if ((*(char *)(param_2 + 0x17) < '\0') && (0x4000 < *(ulong *)(param_2 + 8))) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    if ((bRam00000001136c46d8 & 1) == 0) {
      iVar2 = 0x136c46d8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000100151db4(0x1136c46e0,&UNK_10f39e3c7,4);
        ___cxa_guard_release(0x1136c46d8);
      }
    }
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_8f = 0;
    uStack_97 = 0;
    uStack_90 = 0;
    func_0x0001001534c8(param_2,&uStack_b0,0x1136c46e0,0);
    if (((param_2 & 1) == 0) || (func_0x000106890b78(), extraout_x8 < 10)) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      func_0x00010015b1f8(&uStack_128,extraout_x9 + 0x30);
      func_0x000106890b78();
      puVar1 = (undefined1 *)(extraout_x9_00 + 0x60);
      if (extraout_x8_00 < 5) {
        puVar1 = &uStack_98;
      }
      func_0x00010015b1f8(&uStack_110,puVar1);
      func_0x000106890b78();
      puVar1 = (undefined1 *)(extraout_x9_01 + 0x78);
      if (extraout_x8_01 < 6) {
        puVar1 = &uStack_98;
      }
      func_0x00010015b1f8(&uStack_f8,puVar1);
      func_0x000106890b78();
      puVar1 = (undefined1 *)(extraout_x9_02 + 0xa8);
      if (extraout_x8_02 < 8) {
        puVar1 = &uStack_98;
      }
      func_0x00010015b1f8(&uStack_e0,puVar1);
      func_0x000106890b78();
      puVar1 = (undefined1 *)(extraout_x9_03 + 0xd8);
      if (extraout_x8_03 < 10) {
        puVar1 = &uStack_98;
      }
      func_0x00010015b1f8(&uStack_c8,puVar1);
      param_1[1] = uStack_120;
      *param_1 = uStack_128;
      param_1[2] = uStack_118;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      param_1[4] = uStack_108;
      param_1[3] = uStack_110;
      param_1[5] = uStack_100;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      param_1[8] = uStack_e8;
      param_1[7] = uStack_f0;
      param_1[6] = uStack_f8;
      uStack_f8 = 0;
      uStack_f0 = 0;
      param_1[0xb] = uStack_d0;
      param_1[10] = uStack_d8;
      param_1[9] = uStack_e0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      param_1[0xe] = uStack_b8;
      param_1[0xd] = uStack_c0;
      param_1[0xc] = uStack_c8;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      *(undefined1 *)(param_1 + 0xf) = 1;
      FUN_1068868ec(&uStack_128);
    }
    func_0x00010015b3ec(&uStack_b0);
  }
  return;
}



/* Entry: 10688f098; end: 10688f21b;  */

undefined4 FUN_10688f098(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  FUN_10688f21c(param_1,&UNK_10dde2240);
  func_0x000106890be8(uVar1 - 4);
  func_0x0001000633dc();
  if ((param_1 & 1) == 0) {
    func_0x000106890be8();
    func_0x0001000633dc();
    if ((param_1 & 1) == 0) {
      func_0x000106890b9c();
      if ((param_1 & 1) == 0) {
        func_0x000106890b9c();
        if ((param_1 & 1) == 0) {
          func_0x000106890be8();
          func_0x0001000633dc();
          if ((param_1 & 1) == 0) {
            func_0x000106890be8();
            func_0x0001000633dc();
            if ((param_1 & 1) == 0) {
              func_0x000106890be8();
              func_0x0001000633dc();
              if ((param_1 & 1) == 0) {
                func_0x000106890be8();
                func_0x0001000633dc();
                if ((param_1 & 1) == 0) {
                  func_0x000106890be8();
                  func_0x0001000633dc();
                  iVar2 = (int)param_1;
                  if ((param_1 & 1) == 0) {
                    func_0x000106890b9c();
                    uVar3 = 0xb;
                    if (iVar2 == 0) {
                      uVar3 = 0x7fffffff;
                    }
                  }
                  else {
                    uVar3 = 10;
                  }
                }
                else {
                  uVar3 = 9;
                }
              }
              else {
                uVar3 = 6;
              }
            }
            else {
              uVar3 = 5;
            }
          }
          else {
            uVar3 = 4;
          }
        }
        else {
          uVar3 = 3;
        }
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}



/* Entry: 10688f21c; end: 10688f24f;  */

void FUN_10688f21c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x000105394f0c(&stack0xffffffffffffffe0,param_2,uVar1);
  return;
}



/* Entry: 10688f250; end: 10688f27b;  */

void FUN_10688f250(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  
  if (param_2 < 0xc) {
    puVar1 = (&PTR_DAT_110945f88)[param_2];
  }
  else {
    puVar1 = &DAT_10f39e403;
  }
  func_0x00010002b82c(param_1,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10688f27c; end: 10688f2ab;  */

void FUN_10688f27c(undefined8 *param_1)

{
  undefined8 *puStack_20;
  long lStack_18;
  
  lStack_18 = (long)*(char *)((long)param_1 + 0x17);
  puStack_20 = param_1;
  if (lStack_18 < 0) {
    puStack_20 = (undefined8 *)*param_1;
    lStack_18 = param_1[1];
  }
  func_0x000105394f0c(&puStack_20);
  return;
}



/* Entry: 10688f2ac; end: 10688f33f;  */

char * FUN_10688f2ac(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *unaff_x23;
  char *unaff_x24;
  
  if (param_2 != param_3) {
    pcVar1 = param_1;
    if (*param_2 == '^') {
      FUN_10688816c();
      param_2 = param_2 + 1;
    }
    pcVar2 = pcVar1;
    if (param_2 != param_3) {
      func_0x000100152308();
      FUN_106890298();
      pcVar2 = pcVar1;
      param_2 = pcVar1;
      if ((pcVar1 != param_3 && pcVar1 + 1 == param_3) && (*pcVar1 == '$')) {
        func_0x000106888194();
        pcVar2 = param_1;
        param_2 = pcVar1 + 1;
      }
    }
    if (param_2 != param_3) {
      FUN_10688ad94();
      func_0x000100152318();
      FUN_1068907ac();
      pcVar1 = pcVar2;
      pcVar3 = pcVar2;
      if (pcVar2 != unaff_x23) {
        while( true ) {
          pcVar2 = pcVar1;
          if ((pcVar3 == param_3) || (*pcVar3 != '|')) {
            return pcVar3;
          }
          func_0x000106890cf0();
          FUN_1068907ac();
          if (pcVar2 == unaff_x24) break;
          pcVar1 = pcVar2;
          func_0x000106890c28();
          FUN_106887af4();
          pcVar3 = pcVar2;
        }
      }
      FUN_10688ad94();
      func_0x000100152c84();
      func_0x000100152318();
      func_0x000106890c00();
      pcVar1 = pcVar2;
      if (pcVar2 == unaff_x23) {
        func_0x000106890c34();
      }
      else {
        func_0x000106890c18();
        FUN_10688f2ac();
      }
      while( true ) {
        pcVar3 = pcVar1;
        if (pcVar2 != param_3) {
          pcVar2 = pcVar2 + 1;
        }
        if (pcVar2 == param_3) break;
        func_0x000106890c70();
        pcVar1 = pcVar3;
        if (pcVar3 == pcVar2) {
          func_0x000106890c34();
        }
        else {
          func_0x000106890c18();
          FUN_10688f2ac();
        }
        func_0x000106890c28();
        FUN_106887af4();
        pcVar2 = pcVar3;
      }
      return pcVar2;
    }
  }
  return param_2;
}



/* Entry: 10688f340; end: 10688f3af;  */

char * FUN_10688f340(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *unaff_x19;
  char *unaff_x23;
  char *unaff_x24;
  
  func_0x000100152318();
  FUN_1068907ac();
  pcVar1 = param_1;
  pcVar2 = param_1;
  if (param_1 != unaff_x23) {
    while( true ) {
      param_1 = pcVar1;
      if ((pcVar2 == unaff_x19) || (*pcVar2 != '|')) {
        return pcVar2;
      }
      func_0x000106890cf0();
      FUN_1068907ac();
      if (param_1 == unaff_x24) break;
      pcVar1 = param_1;
      func_0x000106890c28();
      FUN_106887af4();
      pcVar2 = param_1;
    }
  }
  FUN_10688ad94();
  func_0x000100152c84();
  func_0x000100152318();
  func_0x000106890c00();
  pcVar1 = param_1;
  if (param_1 == unaff_x23) {
    func_0x000106890c34();
  }
  else {
    func_0x000106890c18();
    FUN_10688f2ac();
  }
  while( true ) {
    pcVar2 = pcVar1;
    if (param_1 != unaff_x19) {
      param_1 = param_1 + 1;
    }
    if (param_1 == unaff_x19) break;
    func_0x000106890c70();
    pcVar1 = pcVar2;
    if (pcVar2 == param_1) {
      func_0x000106890c34();
    }
    else {
      func_0x000106890c18();
      FUN_10688f2ac();
    }
    func_0x000106890c28();
    FUN_106887af4();
    param_1 = pcVar2;
  }
  return param_1;
}



/* Entry: 10688f3b0; end: 10688f4c7;  */

long FUN_10688f3b0(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x23;
  
  func_0x000100152c84();
  func_0x000100152318();
  func_0x000106890c00();
  lVar1 = param_1;
  if (param_1 == unaff_x23) {
    func_0x000106890c34();
  }
  else {
    func_0x000106890c18();
    FUN_10688f2ac();
  }
  while( true ) {
    lVar2 = lVar1;
    if (param_1 != unaff_x19) {
      param_1 = param_1 + 1;
    }
    if (param_1 == unaff_x19) break;
    func_0x000106890c70();
    lVar1 = lVar2;
    if (lVar2 == param_1) {
      func_0x000106890c34();
    }
    else {
      func_0x000106890c18();
      FUN_10688f2ac();
    }
    func_0x000106890c28();
    FUN_106887af4();
    param_1 = lVar2;
  }
  return param_1;
}



/* Entry: 10688f4c8; end: 10688f60b;  */

/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */

char * FUN_10688f4c8(char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 != '[') {
    return param_2;
  }
  pcVar2 = param_1;
  pcVar3 = param_3;
  if (param_2 + 1 != param_3) {
    pcVar4 = (char *)(ulong)(param_2[1] == '^');
    pcVar1 = param_2 + 2;
    if (param_2[1] != '^') {
      pcVar1 = param_2 + 1;
    }
    func_0x000100152a30();
    param_2 = pcVar4;
    if (pcVar1 != param_3) {
      if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pcVar1 == ']')) {
        FUN_1068893d8(pcVar2,0x5d);
        pcVar1 = pcVar1 + 1;
      }
      goto SUB_10688f5b4;
    }
  }
  param_3 = pcVar3;
  pcVar1 = param_2;
  param_1 = pcVar2;
  FUN_106889864();
SUB_10688f5b4:
  pcVar2 = pcVar1;
  if (pcVar1 != param_3) {
    do {
      pcVar1 = pcVar2;
      pcVar2 = param_1;
      FUN_10688f60c();
    } while (pcVar2 != pcVar1);
  }
  return pcVar1;
}



/* Entry: 10688f60c; end: 10688f937;  */

/* WARNING: Removing unreachable block (ram,0x00010688f7a4) */
/* WARNING: Removing unreachable block (ram,0x00010688f7ac) */
/* WARNING: Removing unreachable block (ram,0x00010688f7b4) */
/* WARNING: Removing unreachable block (ram,0x00010688f828) */
/* WARNING: Removing unreachable block (ram,0x00010688f794) */
/* WARNING: Removing unreachable block (ram,0x00010688f7a0) */
/* WARNING: Removing unreachable block (ram,0x00010688f7b8) */

byte * FUN_10688f60c(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4)

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
      func_0x000106890cbc(param_1,param_2 + 2,param_3,&ppppppbStack_58);
      func_0x00010688fb38();
      uVar6 = uStack_48 >> 0x38;
      param_2 = pbVar4;
    }
    else {
      if (bVar5 == 0x3a) {
        func_0x000106890cbc(param_1,param_2 + 2);
        func_0x00010688faa4();
        goto LAB_10688f8e0;
      }
      if (bVar5 == 0x3d) {
        func_0x000106890cbc(param_1,param_2 + 2);
        FUN_10688f938();
        goto LAB_10688f8e0;
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
          func_0x000106890cbc();
          func_0x00010688fbd0();
          param_1 = pbVar4;
        }
        else {
          func_0x000106890cbc();
          func_0x00010688fcf8();
          param_1 = pbVar4;
        }
        goto LAB_10688f770;
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
LAB_10688f770:
  if ((((param_1 == param_3) || (*param_1 == 0x5d)) || (pbVar1 = param_1 + 1, pbVar1 == param_3)) ||
     ((*param_1 != 0x2d || (*pbVar1 == 0x5d)))) goto LAB_10688f8e0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  param_1 = param_1 + 2;
  if ((param_1 == param_3) || ((*pbVar1 != 0x5b || (*param_1 != 0x2e)))) {
    if ((uVar3 & 0x1b0) == 0) {
      bVar5 = *pbVar1;
      if (bVar5 == 0x5c) {
        if ((uVar3 & 0x1f0) == 0) {
          func_0x000106890d1c();
          func_0x00010688fbd0();
          param_1 = pbVar4;
        }
        else {
          func_0x000106890d1c();
          func_0x00010688fcf8();
          param_1 = pbVar4;
        }
        goto LAB_10688f88c;
      }
    }
    else {
      bVar5 = *pbVar1;
    }
    uStack_60 = 0x100000000000000;
    uStack_70 = (ulong)bVar5;
  }
  else {
    func_0x000106890cbc();
    func_0x00010688fb38();
    param_1 = pbVar4;
  }
LAB_10688f88c:
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
  func_0x000106890c84();
  func_0x000106890c9c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
LAB_10688f8e0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppbStack_58);
  return param_1;
}



/* Entry: 10688f938; end: 10688faa3;  */

long FUN_10688f938(long param_1,undefined8 param_2,long param_3,long param_4)

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
  func_0x000106890bac(&uStack_42,param_1,param_2,&uStack_42);
  if (lVar2 == param_3) {
    FUN_106889864();
LAB_10688fa78:
    FUN_10688a5a4();
LAB_10688fa84:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10688fa88);
    (*pcVar1)();
  }
  FUN_10688ff5c(&pppcStack_60,param_1,param_2,lVar2);
  if ((long)(char)bStack_49 < 0) {
    ppppcVar3 = (char ****)pppcStack_60;
    uVar4 = uStack_58;
    if (uStack_58 == 0) goto LAB_10688fa78;
  }
  else {
    if (bStack_49 == 0) goto LAB_10688fa78;
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
        goto LAB_10688fa84;
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
  func_0x000106890c68();
  func_0x000106890c9c();
  return lVar2 + 2;
}



/* Entry: 10688faa4; end: 10688fbcf;  */

/* WARNING: Possible PIC construction at 0x000100153388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100153394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010688fed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100153318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688fed8) */
/* WARNING: Removing unreachable block (ram,0x000100153398) */
/* WARNING: Removing unreachable block (ram,0x00010015338c) */
/* WARNING: Removing unreachable block (ram,0x00010015331c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10688faa4(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
             undefined8 *******param_4,long param_5)

{
  bool bVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  byte bVar7;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined2 uVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  undefined *puVar14;
  undefined1 auStack_140 [24];
  undefined8 *******pppppppuStack_128;
  undefined8 *******pppppppuStack_120;
  undefined8 uStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  code *pcStack_f8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [30];
  byte abStack_92 [2];
  undefined8 *****pppppuStack_60;
  undefined8 uStack_58;
  byte abStack_42 [2];
  int iVar8;
  
  abStack_42[0] = 0x3a;
  abStack_42[1] = 0x5d;
  pppppppuVar6 = (undefined8 *******)abStack_42;
  pppppppuVar4 = param_1;
  pppppppuVar3 = param_2;
  pppppppuVar9 = param_4;
  func_0x000106890bac(abStack_42);
  if (pppppppuVar4 == param_3) {
    FUN_106889864();
    param_1 = pppppppuVar4;
  }
  else {
    pppppppuVar9 = (undefined8 *******)(ulong)(*(uint *)(param_1 + 3) & 1);
    pppppppuVar3 = param_2;
    pppppppuVar6 = pppppppuVar4;
    FUN_106890168();
    if ((uint)param_1 != 0) {
      *(uint *)(param_4 + 0x14) = *(uint *)(param_4 + 0x14) | (uint)param_1;
      return (undefined8 *******)((long)pppppppuVar4 + 2);
    }
  }
  FUN_10688a878();
  uStack_58 = 0x10688fb38;
  abStack_92[0] = 0x2e;
  abStack_92[1] = 0x5d;
  pppppppuVar4 = (undefined8 *******)abStack_92;
  pppppppuVar5 = param_1;
  pppppppuVar2 = pppppppuVar3;
  pppppppuVar10 = pppppppuVar9;
  pppppuStack_60 = (undefined8 *****)&stack0xfffffffffffffff0;
  func_0x000106890bac(abStack_92);
  if (pppppppuVar5 == pppppppuVar6) {
    FUN_106889864();
    pppppppuVar6 = pppppppuVar5;
  }
  else {
    pppppppuVar6 = param_1;
    pppppppuVar2 = pppppppuVar3;
    pppppppuVar4 = pppppppuVar5;
    FUN_10688ff5c(auStack_b0);
    func_0x000106890c3c();
    func_0x000106890c84();
    func_0x000106890cd8();
    param_2 = pppppppuVar5;
    if (extraout_x8_00 - 1U < 2) {
      return (undefined8 *******)((long)pppppppuVar5 + 2);
    }
  }
  FUN_10688a5a4();
  pcStack_b8 = FUN_10688fbd0;
  pppppppuStack_e0 = &ppppppuStack_c0;
  pppppppuStack_d0 = param_2;
  pppppppuStack_c8 = pppppppuVar9;
  ppppppuStack_c0 = &pppppuStack_60;
  if (pppppppuVar2 == pppppppuVar4) {
    FUN_106888a18();
    pppppppuStack_d8 = (undefined8 *******)0x10688fcf8;
    pppppppuVar5 = &pppppppuStack_e0;
    if (pppppppuVar2 != pppppppuVar4) {
      bVar7 = *(byte *)pppppppuVar2;
      uVar12 = (uint)(char)bVar7;
      pppppppuVar9 = pppppppuVar2;
      switch(bVar7) {
      case 0x6e:
        if (pppppppuVar10 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          uVar11 = 10;
LAB_10688ff44:
          *(undefined2 *)pppppppuVar10 = uVar11;
LAB_10688ff48:
          return (undefined8 *******)((long)pppppppuVar2 + 1);
        }
        break;
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x75:
LAB_10688fd94:
        if ((uVar12 & 0xfffffff8) == 0x30) {
          bVar7 = bVar7 - 0x30;
          pppppppuVar9 = (undefined8 *******)((long)pppppppuVar2 + 1);
          if ((pppppppuVar9 != pppppppuVar4) && ((*(byte *)pppppppuVar9 & 0xf8) == 0x30)) {
            bVar7 = (*(byte *)pppppppuVar9 + bVar7 * '\b') - 0x30;
            pppppppuVar6 = (undefined8 *******)((long)pppppppuVar2 + 2);
            pppppppuVar9 = pppppppuVar6;
            if (pppppppuVar6 != pppppppuVar4) {
              if ((*(byte *)pppppppuVar6 & 0xf8) == 0x30) {
                pppppppuVar9 = (undefined8 *******)((long)pppppppuVar2 + 3);
                bVar7 = (*(byte *)pppppppuVar6 + bVar7 * '\b') - 0x30;
              }
            }
          }
          if (pppppppuVar10 != (undefined8 *******)0x0) {
            if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
              pppppppuVar10[1] = (undefined8 ******)0x1;
              pppppppuVar10 = (undefined8 *******)*pppppppuVar10;
            }
            else {
              *(byte *)((long)pppppppuVar10 + 0x17) = 1;
            }
            *(byte *)pppppppuVar10 = bVar7;
            *(byte *)((long)pppppppuVar10 + 1) = 0;
            return pppppppuVar9;
          }
          func_0x000106890c8c();
          return pppppppuVar9;
        }
        goto LAB_10688ff58;
      case 0x72:
        if (pppppppuVar10 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          uVar11 = 0xd;
          goto LAB_10688ff44;
        }
        break;
      case 0x74:
        if (pppppppuVar10 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          uVar11 = 9;
          goto LAB_10688ff44;
        }
        break;
      case 0x76:
        if (pppppppuVar10 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          uVar11 = 0xb;
          goto LAB_10688ff44;
        }
        break;
      default:
        if ((bVar7 == 0x22) || (bVar7 == 0x2f)) {
LAB_10688fd54:
          if (pppppppuVar10 != (undefined8 *******)0x0) {
            if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
              func_0x000106890b68();
              bVar7 = (byte)uVar12;
            }
            else {
              func_0x000106890bdc();
              bVar7 = (byte)uVar12;
            }
            *(byte *)pppppppuVar10 = bVar7;
            *(byte *)((long)pppppppuVar10 + 1) = 0;
            goto LAB_10688ff48;
          }
        }
        else if (bVar7 == 0x66) {
          if (pppppppuVar10 != (undefined8 *******)0x0) {
            if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
              func_0x000106890b68();
            }
            else {
              func_0x000106890bdc();
            }
            uVar11 = 0xc;
            goto LAB_10688ff44;
          }
        }
        else if (bVar7 == 0x61) {
          if (pppppppuVar10 != (undefined8 *******)0x0) {
            if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
              func_0x000106890b68();
            }
            else {
              func_0x000106890bdc();
            }
            uVar11 = 7;
            goto LAB_10688ff44;
          }
        }
        else {
          if (bVar7 != 0x62) {
            if (bVar7 != 0x5c) goto LAB_10688fd94;
            goto LAB_10688fd54;
          }
          if (pppppppuVar10 != (undefined8 *******)0x0) {
            if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
              func_0x000106890b68();
            }
            else {
              func_0x000106890bdc();
            }
            uVar11 = 8;
            goto LAB_10688ff44;
          }
        }
      }
      puVar14 = (undefined *)0x10688fed8;
      pppppppuVar2 = pppppppuVar6;
      pppppppuVar10 = param_2;
      pppppppuVar6 = pppppppuVar3;
      pppppppuVar4 = param_1;
      goto code_r0x00010015341c;
    }
LAB_10688ff58:
    FUN_106888a18();
    pcStack_f8 = FUN_10688ff5c;
    pppppppuStack_110 = param_2;
    pppppppuStack_108 = pppppppuVar9;
    pppppppuStack_100 = pppppppuVar5;
    func_0x00010533b3bc(&pppppppuStack_128);
    *extraout_x8_01 = 0;
    extraout_x8_01[1] = 0;
    extraout_x8_01[2] = 0;
    if ((long)uStack_118 < 0) {
      pppppppuVar9 = pppppppuStack_128;
      if (pppppppuStack_120 == (undefined8 *******)0x0) goto LAB_1068900a4;
    }
    else {
      if (uStack_118._7_1_ == 0) goto LAB_1068900a4;
      pppppppuVar9 = &pppppppuStack_128;
    }
    __ZNSt3__120__get_collation_nameEPKc(auStack_140,pppppppuVar9);
    func_0x000106890c3c();
    func_0x000106890c84();
    func_0x000106890cd8();
    if (extraout_x8_02 != 0) goto LAB_1068900a4;
    if ((long)(char)uStack_118._7_1_ < 0) {
      if (2 < pppppppuStack_120) goto LAB_1068900a4;
    }
    else {
      if (2 < uStack_118._7_1_) goto LAB_1068900a4;
      pppppppuStack_128 = &pppppppuStack_128;
      pppppppuStack_120 = (undefined8 *******)(long)(char)uStack_118._7_1_;
    }
    (*(code *)(*pppppppuVar6[2])[4])
              (auStack_140,pppppppuVar6[2],pppppppuStack_128,
               (long)pppppppuStack_128 + (long)pppppppuStack_120);
    func_0x000106890c3c();
    func_0x000106890c84();
    lVar13 = (long)*(char *)((long)extraout_x8_01 + 0x17);
    if (lVar13 < 0) {
      lVar13 = extraout_x8_01[1];
      if (lVar13 != 1) goto LAB_106890124;
    }
    else if (*(char *)((long)extraout_x8_01 + 0x17) != '\x01') {
LAB_106890124:
      if (lVar13 != 0xc) {
        func_0x0001001a5598(extraout_x8_01);
        goto LAB_1068900a4;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (extraout_x8_01,&pppppppuStack_128);
LAB_1068900a4:
    pppppppuVar9 = &pppppppuStack_128;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar9);
    return pppppppuVar9;
  }
  bVar7 = *(byte *)pppppppuVar2;
  if (bVar7 == 0x77) {
    *(uint *)(param_5 + 0xa0) = *(uint *)(param_5 + 0xa0) | 0x500;
    FUN_1068893d8(param_5,0x5f);
    goto LAB_10688fce8;
  }
  if (bVar7 == 0x44) {
    uVar12 = *(uint *)(param_5 + 0xa4) | 0x400;
LAB_10688fca8:
    *(uint *)(param_5 + 0xa4) = uVar12;
LAB_10688fce8:
    return (undefined8 *******)((long)pppppppuVar2 + 1);
  }
  if (bVar7 == 0x53) {
    uVar12 = *(uint *)(param_5 + 0xa4) | 0x4000;
    goto LAB_10688fca8;
  }
  if (bVar7 == 0x57) {
    *(uint *)(param_5 + 0xa4) = *(uint *)(param_5 + 0xa4) | 0x500;
    FUN_10688a920(param_5,0x5f);
    goto LAB_10688fce8;
  }
  if (bVar7 == 0x62) {
    if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
      func_0x000106890b68();
    }
    else {
      func_0x000106890bdc();
    }
    *(undefined2 *)pppppppuVar10 = 8;
    goto LAB_10688fce8;
  }
  if (bVar7 == 100) {
    uVar12 = *(uint *)(param_5 + 0xa0) | 0x400;
LAB_10688fc5c:
    *(uint *)(param_5 + 0xa0) = uVar12;
    goto LAB_10688fce8;
  }
  bVar1 = bVar7 == 0x73;
  if (bVar1) {
    uVar12 = *(uint *)(param_5 + 0xa0) | 0x4000;
    goto LAB_10688fc5c;
  }
  if (bVar7 == 0) {
    if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
      func_0x000106890b68();
    }
    else {
      func_0x000106890bdc();
    }
    *(undefined2 *)pppppppuVar10 = 0;
    goto LAB_10688fce8;
  }
  pppppppuVar5 = &ppppppuStack_c0;
  pppppppuStack_e0 = param_1;
  pppppppuStack_d8 = pppppppuVar3;
  func_0x0001001523a0();
  if (bVar1) {
    return pppppppuVar9;
  }
  bVar7 = *(byte *)pppppppuVar9;
  pppppppuVar3 = pppppppuVar6;
  pppppppuVar2 = pppppppuVar6;
  switch(bVar7) {
  case 0x6e:
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar11 = 10;
code_r0x0001001533e4:
      *(undefined2 *)pppppppuVar10 = uVar11;
code_r0x0001001533e8:
      return (undefined8 *******)((long)pppppppuVar9 + 1);
    }
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
code_r0x0001001531c8:
    iVar8 = (int)(char)bVar7;
    if ((-1 < iVar8) && ((*(uint *)((long)pppppppuVar6[1][2] + (ulong)bVar7 * 4) & 0x500) != 0))
    goto code_r0x000100153418;
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
        func_0x000106890b8c();
        bVar7 = (byte)iVar8;
      }
      else {
        func_0x000106890c54();
        bVar7 = (byte)iVar8;
      }
      *(byte *)pppppppuVar10 = bVar7;
      *(byte *)((long)pppppppuVar10 + 1) = 0;
      goto code_r0x0001001533e8;
    }
    break;
  case 0x72:
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar11 = 0xd;
      goto code_r0x0001001533e4;
    }
    break;
  case 0x74:
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar11 = 9;
      goto code_r0x0001001533e4;
    }
    break;
  case 0x75:
    if ((((undefined8 *******)((long)pppppppuVar9 + 1) != pppppppuVar4) &&
        (func_0x000106890bf4(), (int)pppppppuVar2 != -1)) &&
       (pppppppuVar9 = (undefined8 *******)((long)pppppppuVar9 + 2), pppppppuVar9 != pppppppuVar4))
    {
      pppppppuVar2 = (undefined8 *******)(ulong)*(byte *)pppppppuVar9;
      FUN_106889814(pppppppuVar2,0x10);
      pppppppuVar3 = pppppppuVar2;
      if ((int)pppppppuVar2 != -1) goto code_r0x000100153234;
    }
code_r0x000100153418:
    puVar14 = &SUB_10015341c;
    FUN_106888a18();
    goto code_r0x00010015341c;
  case 0x76:
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
        func_0x000106890b8c();
      }
      else {
        func_0x000106890c54();
      }
      uVar11 = 0xb;
      goto code_r0x0001001533e4;
    }
    break;
  case 0x78:
code_r0x000100153234:
    pppppppuVar2 = pppppppuVar3;
    if ((((undefined8 *******)((long)pppppppuVar9 + 1) == pppppppuVar4) ||
        (func_0x000106890bf4(), pppppppuVar2 = pppppppuVar3, (int)pppppppuVar3 == -1)) ||
       (((undefined8 *******)((long)pppppppuVar9 + 2) == pppppppuVar4 ||
        (func_0x000106890bf4(), (int)pppppppuVar2 == -1)))) goto code_r0x000100153418;
    if (pppppppuVar10 != (undefined8 *******)0x0) {
      if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
        pppppppuVar10[1] = (undefined8 ******)0x1;
        pppppppuVar10 = (undefined8 *******)*pppppppuVar10;
      }
      else {
        *(byte *)((long)pppppppuVar10 + 0x17) = 1;
      }
      *(char *)pppppppuVar10 = (char)pppppppuVar2 + (char)pppppppuVar3 * '\x10';
      *(byte *)((long)pppppppuVar10 + 1) = 0;
      return (undefined8 *******)((long)pppppppuVar9 + 3);
    }
    puVar14 = &UNK_10015331c;
    pppppppuVar2 = pppppppuVar6;
    goto code_r0x00010015341c;
  default:
    if (bVar7 == 0x30) {
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
          func_0x000106890b8c();
        }
        else {
          func_0x000106890c54();
        }
        *(undefined2 *)pppppppuVar10 = 0;
        goto code_r0x0001001533e8;
      }
    }
    else {
      if (bVar7 == 99) {
        if (((undefined8 *******)((long)pppppppuVar9 + 1) == pppppppuVar4) ||
           (bVar7 = *(byte *)((long)pppppppuVar9 + 1), 0x19 < (byte)((bVar7 & 0xdf) + 0xbf)))
        goto code_r0x000100153418;
        bVar7 = bVar7 & 0x1f;
        if (pppppppuVar10 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
            func_0x000106890b8c();
          }
          else {
            func_0x000106890c54();
          }
          *(byte *)pppppppuVar10 = bVar7;
          *(byte *)((long)pppppppuVar10 + 1) = 0;
          return (undefined8 *******)((long)pppppppuVar9 + 2);
        }
        puVar14 = &UNK_100153398;
        goto code_r0x00010015341c;
      }
      if (bVar7 != 0x66) goto code_r0x0001001531c8;
      if (pppppppuVar10 != (undefined8 *******)0x0) {
        if ((char)*(byte *)((long)pppppppuVar10 + 0x17) < '\0') {
          func_0x000106890b8c();
        }
        else {
          func_0x000106890c54();
        }
        uVar11 = 0xc;
        goto code_r0x0001001533e4;
      }
    }
  }
  puVar14 = &UNK_10015338c;
code_r0x00010015341c:
  pppppppuStack_120 = pppppppuVar4;
  uStack_118 = pppppppuVar6;
  pppppppuStack_110 = pppppppuVar10;
  pppppppuStack_108 = pppppppuVar9;
  pppppppuStack_100 = pppppppuVar5;
  pcStack_f8 = (code *)puVar14;
  func_0x000100152a24();
  if ((*(uint *)(pppppppuVar2 + 3) & 1) == 0) {
    if ((*(uint *)(pppppppuVar2 + 3) >> 3 & 1) == 0) {
      func_0x0001001534a4();
      pppppppuVar4 = pppppppuVar2;
      func_0x0001001534ac(pppppppuVar9[7]);
      *(byte *)(pppppppuVar4 + 2) = (byte)pppppppuVar6;
      *(undefined8 ********)(extraout_x8 + 8) = pppppppuVar4;
      pppppppuVar10 = pppppppuVar2;
      goto code_r0x00010015348c;
    }
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    func_0x000106889044();
    pppppppuVar4 = pppppppuVar2;
  }
  else {
    func_0x00010688e56c();
    func_0x00010688e448();
    func_0x00010688e9f0();
    FUN_106888f44();
    pppppppuVar4 = pppppppuVar2;
  }
  pppppppuVar9[7][1] = pppppppuVar10;
code_r0x00010015348c:
  pppppppuVar9[7] = pppppppuVar10;
  return pppppppuVar4;
}



/* Entry: 10688fbd0; end: 10688ff5b;  */

/* WARNING: Possible PIC construction at 0x000100153388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100153394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010688fed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100153318: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688fed8) */
/* WARNING: Removing unreachable block (ram,0x000100153398) */
/* WARNING: Removing unreachable block (ram,0x00010015338c) */
/* WARNING: Removing unreachable block (ram,0x00010015331c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10688fbd0(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
             undefined8 *******param_4,long param_5)

{
  bool bVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  byte bVar5;
  undefined2 uVar7;
  uint uVar8;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined8 *******unaff_x19;
  undefined8 *******unaff_x20;
  undefined8 *******unaff_x21;
  undefined8 *******unaff_x22;
  undefined1 auStack_90 [24];
  undefined8 *******pppppppuStack_78;
  undefined8 *******pppppppuStack_70;
  undefined8 uStack_68;
  int iVar6;
  
  if (param_2 != param_3) {
    bVar5 = *(byte *)param_2;
    if (bVar5 == 0x77) {
      *(uint *)(param_5 + 0xa0) = *(uint *)(param_5 + 0xa0) | 0x500;
      FUN_1068893d8(param_5,0x5f);
      goto LAB_10688fce8;
    }
    if (bVar5 == 0x44) {
      uVar8 = *(uint *)(param_5 + 0xa4) | 0x400;
    }
    else {
      if (bVar5 != 0x53) {
        if (bVar5 == 0x57) {
          *(uint *)(param_5 + 0xa4) = *(uint *)(param_5 + 0xa4) | 0x500;
          FUN_10688a920(param_5,0x5f);
          goto LAB_10688fce8;
        }
        if (bVar5 == 0x62) {
          if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          *(undefined2 *)param_4 = 8;
          goto LAB_10688fce8;
        }
        if (bVar5 == 100) {
          uVar8 = *(uint *)(param_5 + 0xa0) | 0x400;
        }
        else {
          bVar1 = bVar5 == 0x73;
          if (!bVar1) {
            if (bVar5 == 0) {
              if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                func_0x000106890b68();
              }
              else {
                func_0x000106890bdc();
              }
              *(undefined2 *)param_4 = 0;
              goto LAB_10688fce8;
            }
            func_0x0001001523a0(param_1,param_2);
            if (bVar1) {
              return unaff_x19;
            }
            bVar5 = *(byte *)unaff_x19;
            pppppppuVar3 = param_1;
            pppppppuVar2 = param_1;
            pppppppuVar4 = param_1;
            unaff_x20 = param_4;
            switch(bVar5) {
            case 0x6e:
              if (param_4 != (undefined8 *******)0x0) {
                if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                  func_0x000106890b8c();
                }
                else {
                  func_0x000106890c54();
                }
                uVar7 = 10;
code_r0x0001001533e4:
                *(undefined2 *)param_4 = uVar7;
code_r0x0001001533e8:
                return (undefined8 *******)((long)unaff_x19 + 1);
              }
              break;
            case 0x6f:
            case 0x70:
            case 0x71:
            case 0x73:
            case 0x77:
code_r0x0001001531c8:
              iVar6 = (int)(char)bVar5;
              if ((-1 < iVar6) && ((*(uint *)((long)param_1[1][2] + (ulong)bVar5 * 4) & 0x500) != 0)
                 ) goto code_r0x000100153418;
              if (param_4 != (undefined8 *******)0x0) {
                if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                  func_0x000106890b8c();
                  bVar5 = (byte)iVar6;
                }
                else {
                  func_0x000106890c54();
                  bVar5 = (byte)iVar6;
                }
                *(byte *)param_4 = bVar5;
                *(byte *)((long)param_4 + 1) = 0;
                goto code_r0x0001001533e8;
              }
              break;
            case 0x72:
              if (param_4 != (undefined8 *******)0x0) {
                if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                  func_0x000106890b8c();
                }
                else {
                  func_0x000106890c54();
                }
                uVar7 = 0xd;
                goto code_r0x0001001533e4;
              }
              break;
            case 0x74:
              if (param_4 != (undefined8 *******)0x0) {
                if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                  func_0x000106890b8c();
                }
                else {
                  func_0x000106890c54();
                }
                uVar7 = 9;
                goto code_r0x0001001533e4;
              }
              break;
            case 0x75:
              if ((((undefined8 *******)((long)unaff_x19 + 1) != param_3) &&
                  (func_0x000106890bf4(), (int)pppppppuVar2 != -1)) &&
                 (unaff_x19 = (undefined8 *******)((long)unaff_x19 + 2), unaff_x19 != param_3)) {
                pppppppuVar2 = (undefined8 *******)(ulong)*(byte *)unaff_x19;
                FUN_106889814(pppppppuVar2,0x10);
                pppppppuVar3 = pppppppuVar2;
                if ((int)pppppppuVar2 != -1) goto code_r0x000100153234;
              }
code_r0x000100153418:
              FUN_106888a18();
              pppppppuVar4 = pppppppuVar2;
              break;
            case 0x76:
              if (param_4 != (undefined8 *******)0x0) {
                if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                  func_0x000106890b8c();
                }
                else {
                  func_0x000106890c54();
                }
                uVar7 = 0xb;
                goto code_r0x0001001533e4;
              }
              break;
            case 0x78:
code_r0x000100153234:
              pppppppuVar2 = pppppppuVar3;
              if ((((undefined8 *******)((long)unaff_x19 + 1) == param_3) ||
                  (func_0x000106890bf4(), pppppppuVar2 = pppppppuVar3, (int)pppppppuVar3 == -1)) ||
                 (((undefined8 *******)((long)unaff_x19 + 2) == param_3 ||
                  (func_0x000106890bf4(), (int)pppppppuVar2 == -1)))) goto code_r0x000100153418;
              if (param_4 != (undefined8 *******)0x0) {
                if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                  param_4[1] = (undefined8 ******)0x1;
                  param_4 = (undefined8 *******)*param_4;
                }
                else {
                  *(byte *)((long)param_4 + 0x17) = 1;
                }
                *(char *)param_4 = (char)pppppppuVar2 + (char)pppppppuVar3 * '\x10';
                *(byte *)((long)param_4 + 1) = 0;
                return (undefined8 *******)((long)unaff_x19 + 3);
              }
              break;
            default:
              if (bVar5 == 0x30) {
                if (param_4 != (undefined8 *******)0x0) {
                  if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                    func_0x000106890b8c();
                  }
                  else {
                    func_0x000106890c54();
                  }
                  *(undefined2 *)param_4 = 0;
                  goto code_r0x0001001533e8;
                }
              }
              else if (bVar5 == 99) {
                if (((undefined8 *******)((long)unaff_x19 + 1) == param_3) ||
                   (bVar5 = *(byte *)((long)unaff_x19 + 1), 0x19 < (byte)((bVar5 & 0xdf) + 0xbf)))
                goto code_r0x000100153418;
                bVar5 = bVar5 & 0x1f;
                if (param_4 != (undefined8 *******)0x0) {
                  if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                    func_0x000106890b8c();
                  }
                  else {
                    func_0x000106890c54();
                  }
                  *(byte *)param_4 = bVar5;
                  *(byte *)((long)param_4 + 1) = 0;
                  return (undefined8 *******)((long)unaff_x19 + 2);
                }
              }
              else {
                if (bVar5 != 0x66) goto code_r0x0001001531c8;
                if (param_4 != (undefined8 *******)0x0) {
                  if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
                    func_0x000106890b8c();
                  }
                  else {
                    func_0x000106890c54();
                  }
                  uVar7 = 0xc;
                  goto code_r0x0001001533e4;
                }
              }
            }
            goto code_r0x00010015341c;
          }
          uVar8 = *(uint *)(param_5 + 0xa0) | 0x4000;
        }
        *(uint *)(param_5 + 0xa0) = uVar8;
        goto LAB_10688fce8;
      }
      uVar8 = *(uint *)(param_5 + 0xa4) | 0x4000;
    }
    *(uint *)(param_5 + 0xa4) = uVar8;
LAB_10688fce8:
    return (undefined8 *******)((long)param_2 + 1);
  }
  FUN_106888a18();
  if (param_2 != param_3) {
    bVar5 = *(byte *)param_2;
    uVar8 = (uint)(char)bVar5;
    pppppppuVar4 = param_1;
    unaff_x19 = param_2;
    switch(bVar5) {
    case 0x6e:
      param_1 = unaff_x21;
      param_3 = unaff_x22;
      if (param_4 != (undefined8 *******)0x0) {
        if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
          func_0x000106890b68();
        }
        else {
          func_0x000106890bdc();
        }
        uVar7 = 10;
LAB_10688ff44:
        *(undefined2 *)param_4 = uVar7;
LAB_10688ff48:
        return (undefined8 *******)((long)param_2 + 1);
      }
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
    case 0x75:
LAB_10688fd94:
      if ((uVar8 & 0xfffffff8) == 0x30) {
        bVar5 = bVar5 - 0x30;
        pppppppuVar4 = (undefined8 *******)((long)param_2 + 1);
        if ((pppppppuVar4 != param_3) && ((*(byte *)pppppppuVar4 & 0xf8) == 0x30)) {
          bVar5 = (*(byte *)pppppppuVar4 + bVar5 * '\b') - 0x30;
          pppppppuVar2 = (undefined8 *******)((long)param_2 + 2);
          pppppppuVar4 = pppppppuVar2;
          if (pppppppuVar2 != param_3) {
            if ((*(byte *)pppppppuVar2 & 0xf8) == 0x30) {
              pppppppuVar4 = (undefined8 *******)((long)param_2 + 3);
              bVar5 = (*(byte *)pppppppuVar2 + bVar5 * '\b') - 0x30;
            }
          }
        }
        if (param_4 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
            param_4[1] = (undefined8 ******)0x1;
            param_4 = (undefined8 *******)*param_4;
          }
          else {
            *(byte *)((long)param_4 + 0x17) = 1;
          }
          *(byte *)param_4 = bVar5;
          *(byte *)((long)param_4 + 1) = 0;
          return pppppppuVar4;
        }
        func_0x000106890c8c();
        return pppppppuVar4;
      }
      goto LAB_10688ff58;
    case 0x72:
      param_1 = unaff_x21;
      param_3 = unaff_x22;
      if (param_4 != (undefined8 *******)0x0) {
        if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
          func_0x000106890b68();
        }
        else {
          func_0x000106890bdc();
        }
        uVar7 = 0xd;
        goto LAB_10688ff44;
      }
      break;
    case 0x74:
      param_1 = unaff_x21;
      param_3 = unaff_x22;
      if (param_4 != (undefined8 *******)0x0) {
        if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
          func_0x000106890b68();
        }
        else {
          func_0x000106890bdc();
        }
        uVar7 = 9;
        goto LAB_10688ff44;
      }
      break;
    case 0x76:
      param_1 = unaff_x21;
      param_3 = unaff_x22;
      if (param_4 != (undefined8 *******)0x0) {
        if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
          func_0x000106890b68();
        }
        else {
          func_0x000106890bdc();
        }
        uVar7 = 0xb;
        goto LAB_10688ff44;
      }
      break;
    default:
      if ((bVar5 == 0x22) || (bVar5 == 0x2f)) {
LAB_10688fd54:
        param_1 = unaff_x21;
        param_3 = unaff_x22;
        if (param_4 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
            func_0x000106890b68();
            bVar5 = (byte)uVar8;
          }
          else {
            func_0x000106890bdc();
            bVar5 = (byte)uVar8;
          }
          *(byte *)param_4 = bVar5;
          *(byte *)((long)param_4 + 1) = 0;
          goto LAB_10688ff48;
        }
      }
      else if (bVar5 == 0x66) {
        param_1 = unaff_x21;
        param_3 = unaff_x22;
        if (param_4 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          uVar7 = 0xc;
          goto LAB_10688ff44;
        }
      }
      else if (bVar5 == 0x61) {
        param_1 = unaff_x21;
        param_3 = unaff_x22;
        if (param_4 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          uVar7 = 7;
          goto LAB_10688ff44;
        }
      }
      else {
        if (bVar5 != 0x62) {
          if (bVar5 != 0x5c) goto LAB_10688fd94;
          goto LAB_10688fd54;
        }
        param_1 = unaff_x21;
        param_3 = unaff_x22;
        if (param_4 != (undefined8 *******)0x0) {
          if ((char)*(byte *)((long)param_4 + 0x17) < '\0') {
            func_0x000106890b68();
          }
          else {
            func_0x000106890bdc();
          }
          uVar7 = 8;
          goto LAB_10688ff44;
        }
      }
    }
code_r0x00010015341c:
    pppppppuStack_70 = param_3;
    uStack_68 = param_1;
    func_0x000100152a24();
    if ((*(uint *)(pppppppuVar4 + 3) & 1) == 0) {
      if ((*(uint *)(pppppppuVar4 + 3) >> 3 & 1) == 0) {
        func_0x0001001534a4();
        pppppppuVar2 = pppppppuVar4;
        func_0x0001001534ac(unaff_x19[7]);
        *(byte *)(pppppppuVar2 + 2) = (byte)param_1;
        *(undefined8 ********)(extraout_x8 + 8) = pppppppuVar2;
        unaff_x20 = pppppppuVar4;
        goto code_r0x00010015348c;
      }
      func_0x00010688e56c();
      func_0x00010688e448();
      func_0x00010688e9f0();
      func_0x000106889044();
      pppppppuVar2 = pppppppuVar4;
    }
    else {
      func_0x00010688e56c();
      func_0x00010688e448();
      func_0x00010688e9f0();
      FUN_106888f44();
      pppppppuVar2 = pppppppuVar4;
    }
    unaff_x19[7][1] = unaff_x20;
code_r0x00010015348c:
    unaff_x19[7] = unaff_x20;
    return pppppppuVar2;
  }
LAB_10688ff58:
  FUN_106888a18();
  func_0x00010533b3bc(&pppppppuStack_78);
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  extraout_x8_00[2] = 0;
  if ((long)uStack_68 < 0) {
    pppppppuVar4 = pppppppuStack_78;
    if (pppppppuStack_70 == (undefined8 *******)0x0) goto LAB_1068900a4;
  }
  else {
    if (uStack_68._7_1_ == 0) goto LAB_1068900a4;
    pppppppuVar4 = &pppppppuStack_78;
  }
  __ZNSt3__120__get_collation_nameEPKc(auStack_90,pppppppuVar4);
  func_0x000106890c3c();
  func_0x000106890c84();
  func_0x000106890cd8();
  if (extraout_x8_01 != 0) goto LAB_1068900a4;
  if ((long)(char)uStack_68._7_1_ < 0) {
    if (2 < pppppppuStack_70) goto LAB_1068900a4;
  }
  else {
    if (2 < uStack_68._7_1_) goto LAB_1068900a4;
    pppppppuStack_78 = &pppppppuStack_78;
    pppppppuStack_70 = (undefined8 *******)(long)(char)uStack_68._7_1_;
  }
  (*(code *)(*param_1[2])[4])
            (auStack_90,param_1[2],pppppppuStack_78,(long)pppppppuStack_78 + (long)pppppppuStack_70)
  ;
  func_0x000106890c3c();
  func_0x000106890c84();
  lVar9 = (long)*(char *)((long)extraout_x8_00 + 0x17);
  if (lVar9 < 0) {
    lVar9 = extraout_x8_00[1];
    if (lVar9 != 1) goto LAB_106890124;
  }
  else if (*(char *)((long)extraout_x8_00 + 0x17) != '\x01') {
LAB_106890124:
    if (lVar9 != 0xc) {
      func_0x0001001a5598(extraout_x8_00);
      goto LAB_1068900a4;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (extraout_x8_00,&pppppppuStack_78);
LAB_1068900a4:
  pppppppuVar4 = &pppppppuStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar4);
  return pppppppuVar4;
}



/* Entry: 10688ff5c; end: 10688ff63;  */

void FUN_10688ff5c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010533b3bc(&ppuStack_38,param_3,param_4,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((char)bStack_21 < '\0') {
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (uStack_30 == 0) goto LAB_1068900a4;
  }
  else {
    if (bStack_21 == 0) goto LAB_1068900a4;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__120__get_collation_nameEPKc(auStack_50,pppuVar1);
  func_0x000106890c3c();
  func_0x000106890c84();
  func_0x000106890cd8();
  if (extraout_x8 != 0) goto LAB_1068900a4;
  if ((long)(char)bStack_21 < 0) {
    if (2 < uStack_30) goto LAB_1068900a4;
  }
  else {
    if (2 < bStack_21) goto LAB_1068900a4;
    ppuStack_38 = &ppuStack_38;
    uStack_30 = (long)(char)bStack_21;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (auStack_50,*(long **)(param_2 + 0x10),ppuStack_38,(long)ppuStack_38 + uStack_30);
  func_0x000106890c3c();
  func_0x000106890c84();
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    if (lVar2 != 1) goto LAB_106890124;
  }
  else if (*(char *)((long)param_1 + 0x17) != '\x01') {
LAB_106890124:
    if (lVar2 != 0xc) {
      func_0x0001001a5598(param_1);
      goto LAB_1068900a4;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,&ppuStack_38);
LAB_1068900a4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_38);
  return;
}



/* Entry: 10688ff64; end: 10688ffcf;  */

void FUN_10688ff64(void)

{
  func_0x00010688ff90();
  return;
}



/* Entry: 10688ffd0; end: 106890043;  */

undefined1  [16] FUN_10688ffd0(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  long in_x7;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  long in_stack_00000000;
  
  pcVar1 = param_1 + (in_x7 - in_stack_00000000) + 1;
  pcVar4 = param_1;
  do {
    pcVar4 = pcVar4 + 1;
    pcVar5 = param_2;
    if (param_1 == pcVar1) {
LAB_106890034:
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = pcVar5;
      return auVar7;
    }
    cVar3 = *param_3;
    cVar2 = *param_1;
    pcVar6 = pcVar4;
    pcVar5 = param_3;
    while (pcVar5 = pcVar5 + 1, cVar2 == cVar3) {
      if (pcVar5 == param_4) {
        param_2 = param_1 + in_stack_00000000;
        pcVar5 = param_1;
        goto LAB_106890034;
      }
      cVar3 = *pcVar5;
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    }
    param_1 = param_1 + 1;
  } while( true );
}



/* Entry: 106890044; end: 106890167;  */

void FUN_106890044(undefined8 *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  func_0x00010533b3bc(&ppuStack_38);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((char)bStack_21 < '\0') {
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (uStack_30 == 0) goto LAB_1068900a4;
  }
  else {
    if (bStack_21 == 0) goto LAB_1068900a4;
    pppuVar1 = &ppuStack_38;
  }
  __ZNSt3__120__get_collation_nameEPKc(auStack_50,pppuVar1);
  func_0x000106890c3c();
  func_0x000106890c84();
  func_0x000106890cd8();
  if (extraout_x8 != 0) goto LAB_1068900a4;
  if ((long)(char)bStack_21 < 0) {
    if (2 < uStack_30) goto LAB_1068900a4;
  }
  else {
    if (2 < bStack_21) goto LAB_1068900a4;
    ppuStack_38 = &ppuStack_38;
    uStack_30 = (long)(char)bStack_21;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (auStack_50,*(long **)(param_2 + 0x10),ppuStack_38,(long)ppuStack_38 + uStack_30);
  func_0x000106890c3c();
  func_0x000106890c84();
  lVar2 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = param_1[1];
    if (lVar2 != 1) goto LAB_106890124;
  }
  else if (*(char *)((long)param_1 + 0x17) != '\x01') {
LAB_106890124:
    if (lVar2 != 0xc) {
      func_0x0001001a5598(param_1);
      goto LAB_1068900a4;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,&ppuStack_38);
LAB_1068900a4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_38);
  return;
}



/* Entry: 106890168; end: 10689016f;  */

undefined8 *** FUN_106890168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x00010533b3bc(&ppuStack_48);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))
            (*(long **)(param_1 + 8),pppuVar1,(long)pppuVar1 + uStack_40);
  if (-1 < (char)bStack_31) {
    ppuStack_48 = &ppuStack_48;
  }
  __ZNSt3__115__get_classnameEPKcb(ppuStack_48,param_4);
  func_0x000106890c68();
  return (undefined8 ***)ppuStack_48;
}



/* Entry: 106890170; end: 106890207;  */

undefined8 *** FUN_106890170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  func_0x00010533b3bc(&ppuStack_48);
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    pppuVar1 = &ppuStack_48;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))
            (*(long **)(param_1 + 8),pppuVar1,(long)pppuVar1 + uStack_40);
  if (-1 < (char)bStack_31) {
    ppuStack_48 = &ppuStack_48;
  }
  __ZNSt3__115__get_classnameEPKcb(ppuStack_48,param_4);
  func_0x000106890c68();
  return (undefined8 ***)ppuStack_48;
}



/* Entry: 106890208; end: 106890297;  */

byte * FUN_106890208(undefined8 param_1,undefined8 param_2,byte *param_3,int *param_4)

{
  undefined1 in_ZR;
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *unaff_x19;
  
  func_0x0001001523a0();
  if (!(bool)in_ZR) {
    uVar1 = (ulong)*unaff_x19;
    FUN_106889814(uVar1,10);
    if ((int)uVar1 != -1) {
      while( true ) {
        unaff_x19 = unaff_x19 + 1;
        *param_4 = (int)uVar1;
        if (unaff_x19 == param_3) break;
        pbVar2 = (byte *)(ulong)*unaff_x19;
        pbVar3 = (byte *)0xa;
        FUN_106889814();
        if ((int)pbVar2 == -1) {
          return unaff_x19;
        }
        if (0xccccccb < *param_4) {
          FUN_10688ac98();
          do {
            pbVar4 = pbVar3;
            pbVar3 = pbVar2;
            FUN_1068902d8();
          } while (pbVar3 != pbVar4);
          return pbVar4;
        }
        uVar1 = (ulong)(uint)((int)pbVar2 + *param_4 * 10);
      }
    }
  }
  return unaff_x19;
}



/* Entry: 106890298; end: 1068902d7;  */

long FUN_106890298(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  do {
    lVar1 = param_2;
    param_2 = param_1;
    FUN_1068902d8(param_1,lVar1,param_3);
  } while (param_2 != lVar1);
  return lVar1;
}



/* Entry: 1068902d8; end: 1068903f3;  */

/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */
/* WARNING: Removing unreachable block (ram,0x0001068904d8) */
/* WARNING: Removing unreachable block (ram,0x0001068904e0) */

char * FUN_1068902d8(char *param_1,char *param_2,char *param_3,undefined8 param_4,char *param_5,
                    ulong param_6)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  if ((param_2 == param_3) || (func_0x000106890340(param_1,param_2), param_1 == param_2)) {
    return param_2;
  }
  pcVar5 = param_1;
  func_0x000100152c68();
  func_0x000100152c84();
  if (pcVar5 == param_3) {
    return pcVar5;
  }
  if (*pcVar5 == '*') {
    func_0x000106890cc8(param_1,0);
    return pcVar5 + 1;
  }
  pcVar4 = param_1;
  pcVar3 = param_3;
  FUN_10689073c(param_1,pcVar5);
  if (pcVar4 == pcVar5) {
    return pcVar5;
  }
  pcVar5 = param_1;
  pcVar7 = pcVar4;
  func_0x000106890ca4();
  uVar1 = pcVar5 == pcVar4;
  pcVar4 = pcVar5;
  if (!(bool)uVar1) {
    uVar1 = pcVar5 == param_3;
    if (!(bool)uVar1) {
      pcVar4 = param_1;
      if (*pcVar5 == ',') {
        pcVar6 = param_1;
        func_0x000106890ca4(param_1,pcVar5 + 1);
        pcVar7 = pcVar6;
        func_0x000106890774();
        uVar1 = true;
        pcVar3 = param_3;
        if (pcVar4 != pcVar6) {
          func_0x000106890cc8(param_1);
          return pcVar4;
        }
      }
      else {
        pcVar7 = pcVar5;
        func_0x000106890774();
        uVar1 = true;
        pcVar3 = param_3;
        if (pcVar4 != pcVar5) {
          func_0x000100152f50(param_1,0,0,param_4,(ulong)param_5 & 0xffffffff,param_6 & 0xffffffff,1
                             );
          return pcVar4;
        }
      }
    }
    FUN_10688acc0();
  }
  FUN_10688ac98();
  pcVar5 = pcVar3;
  func_0x000106890c48();
  func_0x000106890674();
  func_0x000106890d30();
  if (!(bool)uVar1) {
    return param_5;
  }
  func_0x000106890bcc();
  func_0x0001068906d8();
  func_0x000106890d30();
  if (!(bool)uVar1) {
    return param_5;
  }
  if ((param_1 != pcVar3) && (*param_5 == '.')) {
    func_0x00010688b214(param_6);
    return param_5 + 1;
  }
  func_0x000106890bcc();
  if (pcVar7 == pcVar5) {
    return pcVar7;
  }
  if (*pcVar7 != '[') {
    return pcVar7;
  }
  pcVar3 = pcVar4;
  pcVar6 = pcVar5;
  if (pcVar7 + 1 != pcVar5) {
    pcVar8 = (char *)(ulong)(pcVar7[1] == '^');
    pcVar2 = pcVar7 + 2;
    if (pcVar7[1] != '^') {
      pcVar2 = pcVar7 + 1;
    }
    func_0x000100152a30();
    pcVar7 = pcVar8;
    if (pcVar2 != pcVar5) {
      if (((*(ushort *)(pcVar4 + 0x18) & 0x1f0) != 0) && (*pcVar2 == ']')) {
        FUN_1068893d8(pcVar3,0x5d);
        pcVar2 = pcVar2 + 1;
      }
      goto SUB_10688f5b4;
    }
  }
  pcVar5 = pcVar6;
  pcVar2 = pcVar7;
  pcVar4 = pcVar3;
  FUN_106889864();
SUB_10688f5b4:
  pcVar3 = pcVar2;
  if (pcVar2 != pcVar5) {
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar4;
      FUN_10688f60c();
    } while (pcVar3 != pcVar2);
  }
  return pcVar2;
}



/* Entry: 1068903f4; end: 10689054b;  */

/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */
/* WARNING: Removing unreachable block (ram,0x0001068904d8) */
/* WARNING: Removing unreachable block (ram,0x0001068904e0) */

char * FUN_1068903f4(char *param_1,char *param_2,char *param_3,undefined8 param_4,char *param_5,
                    ulong param_6)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  func_0x000100152c84();
  if (param_2 == param_3) {
    return param_2;
  }
  if (*param_2 == '*') {
    func_0x000106890cc8(param_1,0);
    return param_2 + 1;
  }
  pcVar4 = param_1;
  pcVar3 = param_3;
  FUN_10689073c(param_1,param_2);
  if (pcVar4 == param_2) {
    return param_2;
  }
  pcVar5 = param_1;
  pcVar7 = pcVar4;
  func_0x000106890ca4();
  uVar1 = pcVar5 == pcVar4;
  pcVar4 = pcVar5;
  if (!(bool)uVar1) {
    uVar1 = pcVar5 == param_3;
    if (!(bool)uVar1) {
      pcVar4 = param_1;
      if (*pcVar5 == ',') {
        pcVar6 = param_1;
        func_0x000106890ca4(param_1,pcVar5 + 1);
        pcVar7 = pcVar6;
        func_0x000106890774();
        uVar1 = true;
        pcVar3 = param_3;
        if (pcVar4 != pcVar6) {
          func_0x000106890cc8(param_1);
          return pcVar4;
        }
      }
      else {
        pcVar7 = pcVar5;
        func_0x000106890774();
        uVar1 = true;
        pcVar3 = param_3;
        if (pcVar4 != pcVar5) {
          func_0x000100152f50(param_1,0,0,param_4,(ulong)param_5 & 0xffffffff,param_6 & 0xffffffff,1
                             );
          return pcVar4;
        }
      }
    }
    FUN_10688acc0();
  }
  FUN_10688ac98();
  pcVar5 = pcVar3;
  func_0x000106890c48();
  func_0x000106890674();
  func_0x000106890d30();
  if (!(bool)uVar1) {
    return param_5;
  }
  func_0x000106890bcc();
  func_0x0001068906d8();
  func_0x000106890d30();
  if (!(bool)uVar1) {
    return param_5;
  }
  if ((param_1 != pcVar3) && (*param_5 == '.')) {
    func_0x00010688b214(param_6);
    return param_5 + 1;
  }
  func_0x000106890bcc();
  if (pcVar7 == pcVar5) {
    return pcVar7;
  }
  if (*pcVar7 != '[') {
    return pcVar7;
  }
  pcVar3 = pcVar4;
  pcVar6 = pcVar5;
  if (pcVar7 + 1 != pcVar5) {
    pcVar8 = (char *)(ulong)(pcVar7[1] == '^');
    pcVar2 = pcVar7 + 2;
    if (pcVar7[1] != '^') {
      pcVar2 = pcVar7 + 1;
    }
    func_0x000100152a30();
    pcVar7 = pcVar8;
    if (pcVar2 != pcVar5) {
      if (((*(ushort *)(pcVar4 + 0x18) & 0x1f0) != 0) && (*pcVar2 == ']')) {
        FUN_1068893d8(pcVar3,0x5d);
        pcVar2 = pcVar2 + 1;
      }
      goto SUB_10688f5b4;
    }
  }
  pcVar5 = pcVar6;
  pcVar2 = pcVar7;
  pcVar4 = pcVar3;
  FUN_106889864();
SUB_10688f5b4:
  pcVar3 = pcVar2;
  if (pcVar2 != pcVar5) {
    do {
      pcVar2 = pcVar3;
      pcVar3 = pcVar4;
      FUN_10688f60c();
    } while (pcVar3 != pcVar2);
  }
  return pcVar2;
}



/* Entry: 10689054c; end: 1068905b7;  */

/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */

char * FUN_10689054c(char *param_1,char *param_2,char *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_x21;
  char *unaff_x22;
  
  pcVar4 = param_3;
  func_0x000106890c48();
  func_0x000106890674();
  func_0x000106890d30();
  if (!(bool)in_ZR) {
    return unaff_x22;
  }
  func_0x000106890bcc();
  func_0x0001068906d8();
  func_0x000106890d30();
  if (!(bool)in_ZR) {
    return unaff_x22;
  }
  if ((unaff_x21 != param_3) && (*unaff_x22 == '.')) {
    func_0x00010688b214();
    return unaff_x22 + 1;
  }
  func_0x000106890bcc();
  if (param_2 == pcVar4) {
    return param_2;
  }
  if (*param_2 != '[') {
    return param_2;
  }
  pcVar2 = param_1;
  pcVar3 = pcVar4;
  if (param_2 + 1 != pcVar4) {
    pcVar5 = (char *)(ulong)(param_2[1] == '^');
    pcVar1 = param_2 + 2;
    if (param_2[1] != '^') {
      pcVar1 = param_2 + 1;
    }
    func_0x000100152a30();
    param_2 = pcVar5;
    if (pcVar1 != pcVar4) {
      if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pcVar1 == ']')) {
        FUN_1068893d8(pcVar2,0x5d);
        pcVar1 = pcVar1 + 1;
      }
      goto SUB_10688f5b4;
    }
  }
  pcVar4 = pcVar3;
  pcVar1 = param_2;
  param_1 = pcVar2;
  FUN_106889864();
SUB_10688f5b4:
  pcVar2 = pcVar1;
  if (pcVar1 != pcVar4) {
    do {
      pcVar1 = pcVar2;
      pcVar2 = param_1;
      FUN_10688f60c();
    } while (pcVar2 != pcVar1);
  }
  return pcVar1;
}



/* Entry: 1068905b8; end: 106890627;  */

char * FUN_1068905b8(undefined8 param_1,char *param_2,char *param_3)

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



/* Entry: 106890628; end: 10689073b;  */

char * FUN_106890628(int param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 in_ZR;
  char *unaff_x19;
  
  func_0x0001001523a0();
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



/* Entry: 10689073c; end: 1068907ab;  */

char * FUN_10689073c(undefined8 param_1,char *param_2,char *param_3)

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



/* Entry: 1068907ac; end: 1068907f3;  */

/* WARNING: Possible PIC construction at 0x000100152d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100152e5c) */
/* WARNING: Removing unreachable block (ram,0x000100152e60) */
/* WARNING: Removing unreachable block (ram,0x000100152dd8) */
/* WARNING: Removing unreachable block (ram,0x000100152ddc) */
/* WARNING: Removing unreachable block (ram,0x000100152d3c) */
/* WARNING: Removing unreachable block (ram,0x000100152d40) */
/* WARNING: Removing unreachable block (ram,0x000100152d74) */
/* WARNING: Removing unreachable block (ram,0x000100152d78) */
/* WARNING: Removing unreachable block (ram,0x000100152dec) */
/* WARNING: Removing unreachable block (ram,0x000100152d0c) */
/* WARNING: Removing unreachable block (ram,0x000100152d10) */
/* WARNING: Removing unreachable block (ram,0x000100152d4c) */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */

char * FUN_1068907ac(char *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  char *unaff_x21;
  
  func_0x000106890c48();
  FUN_1068907f4();
  if (param_1 != unaff_x21) {
    do {
      pcVar9 = param_1;
      param_1 = pcVar9;
      func_0x000106890bcc();
      FUN_1068907f4();
    } while (param_1 != pcVar9);
    return pcVar9;
  }
  FUN_10688ad94();
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x1c);
  pcVar9 = param_1;
  FUN_106890920();
  if (pcVar9 == param_2 && pcVar9 != param_3) {
    cVar4 = *pcVar9;
    if (cVar4 == '$') {
      func_0x000106888194(param_1);
    }
    else if (cVar4 == '(') {
      func_0x0001001527ac(param_1);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pcVar7 = pcVar9 + 1;
      pcVar9 = param_1;
      pcVar8 = param_3;
      FUN_10688f340();
      uVar5 = 1;
      if ((pcVar9 == param_3) || (uVar5 = 0, *pcVar9 != ')')) {
        FUN_106888248();
        pcVar12 = pcVar8;
        func_0x000106890c48();
        FUN_10689098c();
        func_0x000106890d30();
        if (!(bool)uVar5) {
          return param_2;
        }
        func_0x000106890bcc();
        func_0x000106890a04();
        func_0x000106890d30();
        if (!(bool)uVar5) {
          return param_2;
        }
        if ((param_1 != pcVar8) && (*param_2 == '.')) {
          func_0x00010688b214(uVar16);
          return param_2 + 1;
        }
        func_0x000106890bcc();
        if (pcVar7 == pcVar12) {
          return pcVar7;
        }
        if (*pcVar7 != '[') {
          return pcVar7;
        }
        pcVar8 = pcVar9;
        pcVar11 = pcVar12;
        if (pcVar7 + 1 != pcVar12) {
          pcVar15 = (char *)(ulong)(pcVar7[1] == '^');
          pcVar6 = pcVar7 + 2;
          if (pcVar7[1] != '^') {
            pcVar6 = pcVar7 + 1;
          }
          func_0x000100152a30();
          pcVar7 = pcVar15;
          if (pcVar6 != pcVar12) {
            if (((*(ushort *)(pcVar9 + 0x18) & 0x1f0) != 0) && (*pcVar6 == ']')) {
              FUN_1068893d8(pcVar8,0x5d);
              pcVar6 = pcVar6 + 1;
            }
            goto SUB_10688f5b4;
          }
        }
        pcVar12 = pcVar11;
        pcVar6 = pcVar7;
        pcVar9 = pcVar8;
        FUN_106889864();
SUB_10688f5b4:
        pcVar7 = pcVar6;
        if (pcVar6 != pcVar12) {
          do {
            pcVar6 = pcVar7;
            pcVar7 = pcVar9;
            FUN_10688f60c();
          } while (pcVar7 != pcVar6);
        }
        return pcVar6;
      }
      func_0x0001001530e4(param_1,uVar3);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    else {
      if (cVar4 != '^') goto LAB_1068908c4;
      FUN_10688816c(param_1);
    }
    pcVar9 = pcVar9 + 1;
  }
LAB_1068908c4:
  if (pcVar9 == param_2) {
    return pcVar9;
  }
  uVar13 = (ulong)(iVar2 + 1);
  uVar14 = (ulong)(*(int *)(param_1 + 0x1c) + 1);
  func_0x000100152c84();
  if (pcVar9 == param_3) {
    return pcVar9;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  cVar4 = *pcVar9;
  if (cVar4 != '{') {
    if (cVar4 == '+') {
      pcVar9 = pcVar9 + 1;
      if (uVar1 == 0 && pcVar9 != param_3) {
        return param_1;
      }
      lVar10 = 1;
    }
    else {
      if (cVar4 == '?') {
        pcVar9 = pcVar9 + 1;
        if ((uVar1 == 0) && (pcVar9 != param_3)) {
          return param_1;
        }
        func_0x000106890bbc();
        goto code_r0x000100152e84;
      }
      if (cVar4 != '*') {
        return pcVar9;
      }
      pcVar9 = pcVar9 + 1;
      if ((uVar1 == 0) && (pcVar9 != param_3)) {
        return param_1;
      }
      lVar10 = 0;
    }
code_r0x000100152e0c:
    func_0x000100152f28(param_1,lVar10,uVar16,uVar13,uVar14);
    return pcVar9;
  }
  pcVar7 = param_1;
  func_0x000106890ca4(param_1,pcVar9 + 1);
  if (pcVar7 != pcVar9 + 1) {
    if (pcVar7 == param_3) goto code_r0x000100152f18;
    if (*pcVar7 == ',') {
      pcVar9 = pcVar7 + 1;
      if (pcVar9 != param_3) {
        if (*pcVar9 == '}') {
          pcVar9 = pcVar7 + 2;
          if ((uVar1 == 0) && (pcVar9 != param_3)) {
            return pcVar7;
          }
          lVar10 = (long)(int)((ulong)unaff_x21 >> 0x20);
          goto code_r0x000100152e0c;
        }
        func_0x000106890ca4(param_1,pcVar9);
        pcVar7 = param_1;
        if (((param_1 == pcVar9) || (param_1 == param_3)) || (*param_1 != '}'))
        goto code_r0x000100152f18;
        if ((long)unaff_x21 < 0) {
          pcVar9 = param_1 + 1;
          if (((uVar1 == 0) && (pcVar9 != param_3)) && (param_1[1] == '?')) {
            pcVar9 = param_1 + 2;
          }
          func_0x000106890bbc();
          goto code_r0x000100152e84;
        }
      }
    }
    else if (*pcVar7 == '}') {
      pcVar9 = pcVar7 + 1;
      if ((uVar1 == 0) && (pcVar9 != param_3)) {
        return pcVar7;
      }
      func_0x000106890bbc();
code_r0x000100152e84:
      func_0x000100152f50();
      return pcVar9;
    }
  }
  FUN_10688ac98();
code_r0x000100152f18:
  FUN_10688acc0();
  return pcVar7;
}



/* Entry: 1068907f4; end: 10689091f;  */

/* WARNING: Possible PIC construction at 0x000100152d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100152e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100152e5c) */
/* WARNING: Removing unreachable block (ram,0x000100152e60) */
/* WARNING: Removing unreachable block (ram,0x000100152dd8) */
/* WARNING: Removing unreachable block (ram,0x000100152ddc) */
/* WARNING: Removing unreachable block (ram,0x000100152d3c) */
/* WARNING: Removing unreachable block (ram,0x000100152d40) */
/* WARNING: Removing unreachable block (ram,0x000100152d74) */
/* WARNING: Removing unreachable block (ram,0x000100152d78) */
/* WARNING: Removing unreachable block (ram,0x000100152dec) */
/* WARNING: Removing unreachable block (ram,0x000100152d0c) */
/* WARNING: Removing unreachable block (ram,0x000100152d10) */
/* WARNING: Removing unreachable block (ram,0x000100152d4c) */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */

char * FUN_1068907f4(char *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  undefined8 uVar16;
  int in_stack_0000000c;
  
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x1c);
  pcVar9 = param_1;
  FUN_106890920();
  if (pcVar9 == param_2 && pcVar9 != param_3) {
    cVar4 = *pcVar9;
    if (cVar4 == '$') {
      func_0x000106888194(param_1);
    }
    else if (cVar4 == '(') {
      func_0x0001001527ac(param_1);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pcVar7 = pcVar9 + 1;
      pcVar9 = param_1;
      pcVar8 = param_3;
      FUN_10688f340();
      uVar5 = 1;
      if ((pcVar9 == param_3) || (uVar5 = 0, *pcVar9 != ')')) {
        FUN_106888248();
        pcVar12 = pcVar8;
        func_0x000106890c48();
        FUN_10689098c();
        func_0x000106890d30();
        if (!(bool)uVar5) {
          return param_2;
        }
        func_0x000106890bcc();
        func_0x000106890a04();
        func_0x000106890d30();
        if (!(bool)uVar5) {
          return param_2;
        }
        if ((param_1 != pcVar8) && (*param_2 == '.')) {
          func_0x00010688b214(uVar16);
          return param_2 + 1;
        }
        func_0x000106890bcc();
        if (pcVar7 == pcVar12) {
          return pcVar7;
        }
        if (*pcVar7 != '[') {
          return pcVar7;
        }
        pcVar8 = pcVar9;
        pcVar11 = pcVar12;
        if (pcVar7 + 1 != pcVar12) {
          pcVar15 = (char *)(ulong)(pcVar7[1] == '^');
          pcVar6 = pcVar7 + 2;
          if (pcVar7[1] != '^') {
            pcVar6 = pcVar7 + 1;
          }
          func_0x000100152a30();
          pcVar7 = pcVar15;
          if (pcVar6 != pcVar12) {
            if (((*(ushort *)(pcVar9 + 0x18) & 0x1f0) != 0) && (*pcVar6 == ']')) {
              FUN_1068893d8(pcVar8,0x5d);
              pcVar6 = pcVar6 + 1;
            }
            goto SUB_10688f5b4;
          }
        }
        pcVar12 = pcVar11;
        pcVar6 = pcVar7;
        pcVar9 = pcVar8;
        FUN_106889864();
SUB_10688f5b4:
        pcVar7 = pcVar6;
        if (pcVar6 != pcVar12) {
          do {
            pcVar6 = pcVar7;
            pcVar7 = pcVar9;
            FUN_10688f60c();
          } while (pcVar7 != pcVar6);
        }
        return pcVar6;
      }
      func_0x0001001530e4(param_1,uVar3);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
    }
    else {
      if (cVar4 != '^') goto LAB_1068908c4;
      FUN_10688816c(param_1);
    }
    pcVar9 = pcVar9 + 1;
  }
LAB_1068908c4:
  if (pcVar9 == param_2) {
    return pcVar9;
  }
  uVar13 = (ulong)(iVar2 + 1);
  uVar14 = (ulong)(*(int *)(param_1 + 0x1c) + 1);
  func_0x000100152c84();
  if (pcVar9 == param_3) {
    return pcVar9;
  }
  uVar1 = *(uint *)(param_1 + 0x18) & 0x1f0;
  cVar4 = *pcVar9;
  if (cVar4 != '{') {
    if (cVar4 == '+') {
      pcVar9 = pcVar9 + 1;
      if (uVar1 == 0 && pcVar9 != param_3) {
        return param_1;
      }
      lVar10 = 1;
    }
    else {
      if (cVar4 == '?') {
        pcVar9 = pcVar9 + 1;
        if ((uVar1 == 0) && (pcVar9 != param_3)) {
          return param_1;
        }
        func_0x000106890bbc();
        goto code_r0x000100152e84;
      }
      if (cVar4 != '*') {
        return pcVar9;
      }
      pcVar9 = pcVar9 + 1;
      if ((uVar1 == 0) && (pcVar9 != param_3)) {
        return param_1;
      }
      lVar10 = 0;
    }
code_r0x000100152e0c:
    func_0x000100152f28(param_1,lVar10,uVar16,uVar13,uVar14);
    return pcVar9;
  }
  pcVar7 = param_1;
  func_0x000106890ca4(param_1,pcVar9 + 1);
  if (pcVar7 != pcVar9 + 1) {
    if (pcVar7 == param_3) goto code_r0x000100152f18;
    if (*pcVar7 == ',') {
      pcVar9 = pcVar7 + 1;
      if (pcVar9 != param_3) {
        if (*pcVar9 == '}') {
          pcVar9 = pcVar7 + 2;
          if ((uVar1 == 0) && (pcVar9 != param_3)) {
            return pcVar7;
          }
          lVar10 = (long)in_stack_0000000c;
          goto code_r0x000100152e0c;
        }
        func_0x000106890ca4(param_1,pcVar9);
        pcVar7 = param_1;
        if (((param_1 == pcVar9) || (param_1 == param_3)) || (*param_1 != '}'))
        goto code_r0x000100152f18;
        if (in_stack_0000000c < 0) {
          pcVar9 = param_1 + 1;
          if (((uVar1 == 0) && (pcVar9 != param_3)) && (param_1[1] == '?')) {
            pcVar9 = param_1 + 2;
          }
          func_0x000106890bbc();
          goto code_r0x000100152e84;
        }
      }
    }
    else if (*pcVar7 == '}') {
      pcVar9 = pcVar7 + 1;
      if ((uVar1 == 0) && (pcVar9 != param_3)) {
        return pcVar7;
      }
      func_0x000106890bbc();
code_r0x000100152e84:
      func_0x000100152f50();
      return pcVar9;
    }
  }
  FUN_10688ac98();
code_r0x000100152f18:
  FUN_10688acc0();
  return pcVar7;
}



/* Entry: 106890920; end: 10689098b;  */

/* WARNING: Possible PIC construction at 0x00010688f560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010688f564) */
/* WARNING: Removing unreachable block (ram,0x00010688f56c) */
/* WARNING: Removing unreachable block (ram,0x00010688f57c) */
/* WARNING: Removing unreachable block (ram,0x00010688f58c) */
/* WARNING: Removing unreachable block (ram,0x00010688f594) */
/* WARNING: Removing unreachable block (ram,0x00010688f5a0) */

char * FUN_106890920(char *param_1,char *param_2,char *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_x21;
  char *unaff_x22;
  
  pcVar4 = param_3;
  func_0x000106890c48();
  FUN_10689098c();
  func_0x000106890d30();
  if (!(bool)in_ZR) {
    return unaff_x22;
  }
  func_0x000106890bcc();
  func_0x000106890a04();
  func_0x000106890d30();
  if (!(bool)in_ZR) {
    return unaff_x22;
  }
  if ((unaff_x21 != param_3) && (*unaff_x22 == '.')) {
    func_0x00010688b214();
    return unaff_x22 + 1;
  }
  func_0x000106890bcc();
  if (param_2 == pcVar4) {
    return param_2;
  }
  if (*param_2 != '[') {
    return param_2;
  }
  pcVar2 = param_1;
  pcVar3 = pcVar4;
  if (param_2 + 1 != pcVar4) {
    pcVar5 = (char *)(ulong)(param_2[1] == '^');
    pcVar1 = param_2 + 2;
    if (param_2[1] != '^') {
      pcVar1 = param_2 + 1;
    }
    func_0x000100152a30();
    param_2 = pcVar5;
    if (pcVar1 != pcVar4) {
      if (((*(ushort *)(param_1 + 0x18) & 0x1f0) != 0) && (*pcVar1 == ']')) {
        FUN_1068893d8(pcVar2,0x5d);
        pcVar1 = pcVar1 + 1;
      }
      goto SUB_10688f5b4;
    }
  }
  pcVar4 = pcVar3;
  pcVar1 = param_2;
  param_1 = pcVar2;
  FUN_106889864();
SUB_10688f5b4:
  pcVar2 = pcVar1;
  if (pcVar1 != pcVar4) {
    do {
      pcVar1 = pcVar2;
      pcVar2 = param_1;
      FUN_10688f60c();
    } while (pcVar2 != pcVar1);
  }
  return pcVar1;
}



/* Entry: 10689098c; end: 106890abb;  */

byte * FUN_10689098c(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  byte *unaff_x19;
  
  func_0x0001001523a0();
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
      goto LAB_1068909f8;
    }
  }
  if (*unaff_x19 - 0x7b < 2) {
    return unaff_x19;
  }
LAB_1068909f8:
  func_0x000106890c8c();
  return unaff_x19 + 1;
}



/* Entry: 106890abc; end: 106890b67;  */

undefined8 *
FUN_106890abc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2;
  func_0x0001005d466c();
  uVar2 = uVar1;
  func_0x0001005d466c();
  uVar3 = uVar2;
  func_0x0001005d466c();
  uVar4 = uVar3;
  func_0x0001005d466c();
  uVar5 = uVar4;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  param_1[4] = param_4;
  param_1[5] = uVar3;
  param_1[6] = param_5;
  param_1[7] = uVar4;
  param_1[8] = param_6;
  param_1[9] = uVar5;
  return param_1;
}



/* Entry: 106890b68; end: 106890d4f;  */

void FUN_106890b68(void)

{
  long in_x3;
  
  *(undefined8 *)(in_x3 + 8) = 1;
  return;
}



/* Entry: 106890d50; end: 106890e3b;  */

void FUN_106890d50(undefined8 param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined8 auStack_d8 [3];
  undefined1 auStack_c0 [32];
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x000106890fe8();
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar6 = &UNK_10f39e438;
  if (param_3 == 0) {
    puVar6 = &UNK_10f39e43d;
  }
  func_0x00010002b838(auStack_48,puVar6);
  uVar7 = 2;
  func_0x0001000e3098(auStack_78,&uStack_60);
  puVar6 = &UNK_110945fe8;
  func_0x000106890fc0(*(undefined8 *)(*unaff_x20 + 0x18));
  func_0x000106890fb0();
  lVar8 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&uStack_60 + lVar8);
    lVar8 = lVar8 + -0x18;
    bVar1 = lVar8 == -0x18;
  } while (!bVar1);
  func_0x000106890fd0();
  if (bVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000106890fa4();
  puVar3 = auStack_48;
  lVar9 = -0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    iVar5 = (int)puVar6;
    puVar3 = puVar3 + -0x18;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0);
  func_0x000106890fb8();
  pcStack_88 = FUN_106890e3c;
  lStack_a0 = lVar9;
  lStack_98 = lVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x000106890fe8();
  uVar2 = iVar5 == 0;
  puVar6 = &UNK_10f39e438;
  if ((bool)uVar2) {
    puVar6 = &UNK_10f39e43d;
  }
  func_0x00010002b838(auStack_c0,puVar6);
  puVar4 = auStack_d8;
  func_0x0001000e3098(puVar4,auStack_c0,1);
  puVar6 = &UNK_110946038;
  func_0x000106890fc0(*(undefined8 *)(lRam0000000000000000 + 0x18));
  func_0x000106890fb0();
  func_0x000106891000();
  func_0x000106890fd0();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000106890fa4();
    func_0x000106891000();
    func_0x000106890fb8();
    pcStack_e8 = FUN_106890ed8;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    lStack_100 = lVar9;
    uStack_f8 = uVar7;
    ppuStack_f0 = &puStack_90;
    (**(code **)(*(long *)*puVar4 + 0x18))
              ((long *)*puVar4,&UNK_110946088,&uStack_118,(long)puVar6 / 1000000);
    func_0x000106890fb0();
    return;
  }
  return;
}



/* Entry: 106890e3c; end: 106890ed7;  */

void FUN_106890e3c(undefined8 param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_58 [3];
  undefined1 auStack_40 [32];
  
  func_0x000106890fe8();
  uVar1 = param_2 == 0;
  puVar3 = &UNK_10f39e438;
  if ((bool)uVar1) {
    puVar3 = &UNK_10f39e43d;
  }
  func_0x00010002b838(auStack_40,puVar3);
  puVar2 = auStack_58;
  func_0x0001000e3098(puVar2,auStack_40,1);
  puVar3 = &UNK_110946038;
  func_0x000106890fc0(*(undefined8 *)(*unaff_x20 + 0x18));
  func_0x000106890fb0();
  func_0x000106891000();
  func_0x000106890fd0();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000106890fa4();
    func_0x000106891000();
    func_0x000106890fb8();
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    (**(code **)(*(long *)*puVar2 + 0x18))
              ((long *)*puVar2,&UNK_110946088,&uStack_98,(long)puVar3 / 1000000);
    func_0x000106890fb0();
    return;
  }
  return;
}



/* Entry: 106890ed8; end: 106890f33;  */

void FUN_106890ed8(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*(long *)*param_1 + 0x18))
            ((long *)*param_1,&UNK_110946088,&uStack_38,param_2 / 1000000);
  func_0x000106890fb0();
  return;
}



/* Entry: 106890f34; end: 106890fa3;  */

undefined8 FUN_106890f34(void)

{
  undefined8 uVar1;
  
  if ((bRam000000011381af18 & 1) == 0) {
    uVar1 = 0x11381af18;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam000000011381af10 = uVar1;
      ___cxa_guard_release(0x11381af18);
    }
  }
  return 0x11381af10;
}



/* Entry: 106890fa4; end: 106891007;  */

undefined1 * FUN_106890fa4(void)

{
  undefined1 *puStack_28;
  
  puStack_28 = &stack0x00000008;
  func_0x00010007e5dc(&puStack_28);
  return &stack0x00000008;
}



/* Entry: 106891008; end: 10689107b; -[SCDeepLinkTransformerPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_106891008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3970;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10689107c; end: 106891083; -[SCDeepLinkTransformerPluginScope plugInRegistry] */

undefined8 FUN_10689107c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106891084; end: 10689108f; -[SCDeepLinkTransformerPluginScope .cxx_destruct] */

void FUN_106891084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106891090; end: 1068911af;  */

uint FUN_106891090(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe4420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfe4420();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c0f5860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    if (uVar4 < 2) {
      uVar7 = 0;
    }
    else {
      uVar4 = param_1;
      func_0x00010c0f5860(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0720c0();
      uVar7 = (uint)uVar6;
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return ((uint)uVar2 | uVar7) & 1;
}



/* Entry: 1068911b0; end: 1068912c3; -[SCMainCameraDeepLinkScope initWithDeepLink:additionalInfo:uiContainer:sourceViewController:scopeDelegate:] */

undefined1 *
FUN_1068911b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3978;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068912c4; end: 1068912cb; -[SCMainCameraDeepLinkScope deepLink] */

undefined8 FUN_1068912c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1068912cc; end: 1068912d3; -[SCMainCameraDeepLinkScope additionalInfo] */

undefined8 FUN_1068912cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1068912d4; end: 1068912db; -[SCMainCameraDeepLinkScope uiContainer] */

undefined8 FUN_1068912d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068912dc; end: 1068912f3; -[SCMainCameraDeepLinkScope sourceViewController] */

void FUN_1068912dc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068912f4; end: 10689130b; -[SCMainCameraDeepLinkScope scopeDelegate] */

void FUN_1068912f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10689130c; end: 106891317; -[SCMainCameraDeepLinkScope setScopeDelegate:] */

void FUN_10689130c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 106891318; end: 106891363; -[SCMainCameraDeepLinkScope .cxx_destruct] */

void FUN_106891318(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106891364; end: 10689136f; -[SCMainCameraDeepLinkScopeServices .cxx_destruct] */

void FUN_106891364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106891370; end: 1068913db; -[SCSearchPulldownInteractionController startInteractiveTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106891370(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3988;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_startInteractiveTransition__112671648);
  if ((*(byte *)(param_1 + _DAT_112752450) & 1) == 0) {
    func_0x00010bfaf8e0(param_1);
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112752454) = 1;
  }
  return;
}



/* Entry: 1068913dc; end: 10689140b; -[SCSearchPulldownInteractionController wantsInteractiveStart] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1068913dc(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + _DAT_112752450) == '\x01') {
    bVar1 = *(byte *)(param_1 + _DAT_112752458);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10689140c; end: 10689146b; -[SCSearchPulldownInteractionController updateInteractiveTransition:] */

void FUN_10689140c(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  param_1 = param_1 / 0.3;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar1 = 1.0;
  if (param_1 <= 1.0) {
    dVar1 = param_1;
  }
  if (dVar1 < 1.0) {
    puStack_18 = PTR_PTR_1126f3988;
    uStack_20 = param_2;
    _objc_msgSendSuper2(&uStack_20,PTR_s_updateInteractiveTransition__11267f4a8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bfaf8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_finishInteractiveTransition_1125c97e0);
  return;
}



/* Entry: 10689146c; end: 1068914bf; -[SCSearchPulldownInteractionController completeTransition:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10689146c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112752454;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112752450) = 0;
  }
  else {
    if (param_3 == 0) {
      func_0x00010bf2e5a0(param_1);
    }
    else {
      func_0x00010bfaf8e0();
    }
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 1068914c0; end: 106891513; -[SCSearchPulldownInteractionController completeTransition:animated:withVelocity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068914c0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112752454;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112752450) = 0;
  }
  else {
    if (param_3 == 0) {
      func_0x00010bf2e5a0(param_1);
    }
    else {
      func_0x00010bfaf8e0();
    }
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 106891514; end: 106891523; -[SCSearchPulldownInteractionController isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106891514(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112752458);
}



/* Entry: 106891524; end: 106891533; -[SCSearchPulldownInteractionController setIsPresenting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106891524(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112752458) = param_3;
  return;
}



/* Entry: 106891534; end: 106891543; -[SCSearchPulldownInteractionController wantsInteractivePresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106891534(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112752450);
}



/* Entry: 106891544; end: 106891553; -[SCSearchPulldownInteractionController setWantsInteractivePresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106891544(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112752450) = param_3;
  return;
}



/* Entry: 106891554; end: 106891573; -[SCSearchPulldownInteractionController presentedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106891554(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11275244c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106891574; end: 106891587; -[SCSearchPulldownInteractionController setPresentedViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106891574(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275244c,param_3);
  return;
}



/* Entry: 106891588; end: 106891597; -[SCSearchPulldownInteractionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106891588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275244c);
  return;
}



/* Entry: 106891598; end: 106891a5b; -[SCSearchPulldownTransitionAnimator animateTransition:] */

void FUN_106891598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_1e8;
  long lStack_1e0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined1 uStack_108;
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
  
  _objc_retain(param_7);
  lVar14 = param_5 + 8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar14 != 0) {
    uVar6 = param_7;
    func_0x00010c29c220(param_7,param_6,
                        *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_7;
    func_0x00010c29c220(param_7,param_6,
                        *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_7;
    func_0x00010c29ce60(param_7,param_6,*(undefined8 *)PTR__UITransitionContextToViewKey_110345e60);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_7;
    func_0x00010c29ce60(param_7,param_6,*(undefined8 *)PTR__UITransitionContextFromViewKey_110345e50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_7;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar7;
    func_0x00010c06d1e0();
    uVar1 = uVar6;
    if ((uint)uVar11 == 0) {
      uVar1 = uVar7;
    }
    _objc_retain(uVar1);
    uVar3 = (uint)uVar11 ^ 1;
    func_0x00010bf17b00(uVar1,param_6,uVar3,1);
    func_0x00010bfb68e0(uVar8);
    if ((uVar3 & 1) == 0) {
      func_0x00010befbb60(uVar10,param_6,uVar8);
      func_0x00010bfaef80(param_7,param_6,uVar7);
      func_0x00010c19f0e0(uVar8);
      func_0x00010c1cbe20(uVar8);
      func_0x00010c08cdc0(uVar8);
      lVar12 = param_5 + 8;
      _objc_loadWeakRetained();
      lVar14 = lVar12;
      func_0x00010bfb2de0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      lVar12 = param_5 + 8;
      _objc_loadWeakRetained();
      lStack_1e0 = lVar12;
      func_0x00010bfb2dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      lVar12 = param_5 + 8;
      _objc_loadWeakRetained();
      lStack_1e8 = lVar12;
      func_0x00010c152b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      puVar15 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
      _objc_alloc();
      func_0x00010c00ee20();
      func_0x00010bf20c00(uVar10);
      func_0x00010c19f0e0(puVar15);
      func_0x00010c066fa0(uVar10,param_6,puVar15,0);
      func_0x00010c1677c0(0,uVar8);
      _CGAffineTransformMakeTranslation(&uStack_d0,0,0xc059000000000000);
      uStack_f8 = uStack_c8;
      uStack_100 = uStack_d0;
      uStack_e8 = uStack_b8;
      uStack_f0 = uStack_c0;
      uStack_d8 = uStack_a8;
      uStack_e0 = uStack_b0;
      func_0x00010c219960(uVar8,param_6,&uStack_100);
      func_0x00010bfb68e0(uVar8);
      func_0x00010c19f0e0(uVar8);
      func_0x00010c1677c0(0,lVar14);
      uVar17 = 0;
      func_0x00010c1677c0(0,lStack_1e0);
      func_0x00010c1cbe20(uVar10);
      func_0x00010c08cdc0(uVar10);
      uVar16 = 0x20004;
    }
    else {
      uStack_f8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
      uStack_100 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
      uStack_e8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
      uStack_f0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
      uStack_d8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
      uVar17 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
      uStack_e0 = uVar17;
      func_0x00010c219960(uVar9,param_6,&uStack_100);
      lStack_1e8 = 0;
      lStack_1e0 = 0;
      lVar14 = 0;
      puVar15 = (undefined *)0x0;
      uVar16 = 0x10004;
    }
    uVar13 = param_7;
    func_0x00010c075b60();
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    uVar2 = 0x30004;
    if ((int)uVar13 == 0) {
      uVar2 = uVar16;
    }
    func_0x00010c27a940(param_5,param_6,param_7);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_106891a5c;
    puStack_130 = &UNK_110878f70;
    uStack_108 = (char)uVar11;
    _objc_retain(uVar8);
    lStack_110 = lStack_1e8;
    puStack_1b8 = puVar4;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_106891b38;
    puStack_1a0 = &UNK_110946108;
    uStack_128 = uVar8;
    puStack_120 = puVar15;
    uStack_118 = uVar9;
    _objc_retain(param_7);
    lStack_178 = lStack_1e0;
    uStack_198 = param_7;
    uStack_190 = uVar8;
    uStack_188 = uVar1;
    lStack_180 = lVar14;
    uStack_170 = param_1;
    uStack_168 = param_2;
    uStack_160 = param_3;
    uStack_158 = param_4;
    uStack_150 = (char)uVar11;
    _objc_retain(lStack_1e0);
    _objc_retain(lVar14);
    _objc_retain(uVar1);
    _objc_retain(uVar8);
    _objc_retain(lStack_1e8);
    _objc_retain(uVar9);
    _objc_retain(puVar15);
    func_0x00010bf03440(uVar17,0,puVar5,param_6,uVar2,&puStack_148,&puStack_1b8);
    _objc_release(lStack_178);
    _objc_release(lStack_180);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
    _objc_release(uStack_198);
    _objc_release(lStack_110);
    _objc_release(uStack_118);
    _objc_release(puStack_120);
    _objc_release(uStack_128);
    _objc_release(uVar1);
    _objc_release(uVar8);
    _objc_release(lStack_1e8);
    _objc_release(uVar9);
    _objc_release(lStack_1e0);
    _objc_release(lVar14);
    _objc_release(puVar15);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106891a5c; end: 106891b37;  */

void FUN_106891a5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20));
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
    puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193d20(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
    _objc_release(puVar1);
  }
  else {
    func_0x00010c193d20(*(undefined8 *)(param_1 + 0x28),param_2,0);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + 0x30));
    _CGAffineTransformMakeTranslation(&uStack_80,0,0x4059000000000000);
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    uStack_38 = uStack_68;
    uStack_40 = uStack_70;
    uStack_28 = uStack_58;
    uStack_30 = uStack_60;
    func_0x00010c219960(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_50);
  }
  return;
}



/* Entry: 106891b38; end: 106891c4f;  */

void FUN_106891b38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ac00();
  if (*(char *)(param_1 + 0x68) == '\x01' && uVar2 != 0) {
    func_0x00010c12c960(*(undefined8 *)(param_1 + 0x28));
  }
  if (uVar2 == 0) {
    func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x30));
    if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
      func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                          *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                          *(undefined8 *)(param_1 + 0x28));
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_106891c50;
      puStack_48 = &UNK_110841f80;
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      uStack_40 = uVar3;
      _objc_retain(uVar4);
      uStack_38 = uVar4;
      func_0x00010bf03400(0x3fc999999999999a,puVar1,param_2,&puStack_60);
      _objc_release(uStack_38);
      _objc_release(uStack_40);
    }
  }
  else {
    func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined1 *)(param_1 + 0x68),1);
    func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x30));
  }
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20),param_2,uVar2 ^ 1);
  return;
}



/* Entry: 106891c50; end: 106891c7f;  */

/* WARNING: Possible PIC construction at 0x000106891c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106891c6c) */

void FUN_106891c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106891c80; end: 106891caf; -[SCSearchPulldownTransitionAnimator transitionDuration:] */

undefined8 FUN_106891c80(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c075b60();
  uVar1 = 0x3fc999999999999a;
  if (param_3 == 0) {
    uVar1 = 0x3fb999999999999a;
  }
  return uVar1;
}



/* Entry: 106891cb0; end: 106891cc7; -[SCSearchPulldownTransitionAnimator searchViewProvider] */

void FUN_106891cb0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106891cc8; end: 106891cd3; -[SCSearchPulldownTransitionAnimator setSearchViewProvider:] */

void FUN_106891cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106891cd4; end: 106891cdb; -[SCSearchPulldownTransitionAnimator .cxx_destruct] */

void FUN_106891cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}


