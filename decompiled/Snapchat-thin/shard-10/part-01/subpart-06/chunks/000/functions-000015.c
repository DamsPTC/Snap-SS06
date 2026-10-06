/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107910504; end: 10791059b;  */

void FUN_107910504(void)

{
  long lVar1;
  bool bVar2;
  int extraout_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001079168ec();
  do {
    bVar2 = unaff_x20 == 8;
    if (bVar2) {
      return;
    }
    func_0x00010791784c();
    if (bVar2) {
      uStack_60 = 0x100000000;
LAB_10791055c:
      func_0x00010790831c(&uStack_60);
      uVar3 = uStack_60;
      uVar4 = uStack_58;
    }
    else {
      if (extraout_w8 == 1) {
        uStack_60 = 0x100000001;
        goto LAB_10791055c;
      }
      lVar1 = 0x18;
      if (unaff_x20 != 0) {
        lVar1 = 0x28;
      }
      uVar4 = ((undefined8 *)(unaff_x19 + lVar1))[1];
      uVar3 = *(undefined8 *)(unaff_x19 + lVar1);
    }
    unaff_x22[1] = uVar4;
    *unaff_x22 = uVar3;
    unaff_x20 = unaff_x20 + 4;
    unaff_x22 = unaff_x22 + 9;
  } while( true );
}



/* Entry: 107910978; end: 107910a2b;  */

ulong FUN_107910978(ulong param_1)

{
  undefined1 in_ZR;
  
  func_0x000107913fec();
  func_0x0001079135a4();
  func_0x0001079134a0();
  func_0x000107915c1c();
  if ((bool)in_ZR) {
LAB_1079109d8:
    func_0x00010791658c();
    func_0x000107914d88();
    func_0x000107910c68();
    if ((int)param_1 != 0) {
      func_0x0001079165f8();
      func_0x000107914d88();
      func_0x000107910c68();
      goto LAB_107910a00;
    }
  }
  else {
    func_0x000107917308();
    func_0x000107915144();
    func_0x000107914d88();
    func_0x000107910c68();
    if ((int)param_1 != 0) {
      func_0x0001079148c4();
      func_0x000107914aa0();
      func_0x000107910d48();
      if ((int)param_1 != 0) {
        func_0x0001079148b4();
        func_0x000107914aa0();
        func_0x000107910d48();
        if ((param_1 & 1) != 0) goto LAB_1079109d8;
      }
    }
  }
  param_1 = 0;
LAB_107910a00:
  func_0x0001079151e0();
  func_0x00010791518c();
  func_0x000107915024();
  return param_1;
}



/* Entry: 1079110a0; end: 1079110a7;  */

undefined8 FUN_1079110a0(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  
  func_0x000107913588();
  func_0x000107907378();
  func_0x000107913304();
  func_0x0001079133b4();
  func_0x000107913398();
  func_0x000107915afc();
  if ((bool)in_ZR) {
code_r0x000107911170:
    func_0x000107915a78();
    if ((bool)in_ZR) {
      func_0x0001079176fc();
code_r0x0001079111dc:
      uVar2 = 0x7f < unaff_x21;
      if ((bool)uVar2) {
code_r0x0001079111e4:
        uVar2 = 0x62 < unaff_x20;
        if ((99 < unaff_x20) || (func_0x000107914200(), !(bool)uVar2)) goto code_r0x000107911204;
        func_0x0001079137b0();
        func_0x000107911298();
        if ((param_1 & 1) == 0) goto code_r0x000107911248;
      }
      else {
code_r0x000107911204:
        func_0x0001079145ec();
        func_0x000107911030();
        if ((int)param_1 == 0) goto code_r0x000107911248;
      }
      func_0x0001079141f0();
      iVar3 = (int)param_1;
      if (((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) {
        func_0x000107914280();
        iVar3 = (int)param_1;
        if (!bVar1) goto code_r0x000107911218;
        func_0x0001079137c8();
        func_0x000107911298();
        if ((param_1 & 1) == 0) goto code_r0x000107911248;
      }
      else {
code_r0x000107911218:
        func_0x0001079142f0();
        func_0x000107911030();
        if (iVar3 == 0) goto code_r0x000107911248;
      }
      uVar4 = 1;
      goto code_r0x00010791124c;
    }
    func_0x0001079156e4();
    if (((((bool)in_CY) && (func_0x000107914210(), (bool)in_CY)) &&
        (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) && (func_0x000107914e34(), bVar1)) {
      func_0x000107916824();
      func_0x000107913840();
      func_0x000107911298();
      if ((int)param_1 != 0) {
        func_0x000107913828();
        func_0x000107911298();
        if ((param_1 & 1) != 0) goto code_r0x0001079111e4;
      }
    }
    else {
      func_0x0001079145fc();
      func_0x000107911030();
      if ((int)param_1 != 0) {
        func_0x0001079142e0();
        func_0x000107911030();
        if ((int)param_1 != 0) goto code_r0x0001079111dc;
      }
    }
  }
  else {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto code_r0x0001079110e0;
      func_0x000107914d28();
      func_0x000107913668();
      func_0x000107911298();
      if ((param_1 & 1) != 0) goto code_r0x000107911114;
    }
    else {
code_r0x0001079110e0:
      func_0x0001079142a0();
      func_0x000107911030();
      if ((int)param_1 != 0) {
code_r0x000107911114:
        func_0x000107914220();
        in_CY = false;
        if ((bool)uVar2) {
          func_0x0001079142c0();
          in_CY = false;
          if ((bool)uVar2) {
            in_CY = 0x62 < unaff_x20;
            in_ZR = unaff_x20 == 99;
            if (unaff_x20 < 100) {
              in_CY = 0x78 < unaff_x21;
              in_ZR = unaff_x21 == 0x79;
              if ((bool)in_CY) {
                func_0x000107916834();
                func_0x000107913810();
                func_0x000107911298();
                if ((int)param_1 != 0) {
                  func_0x0001079137f8();
                  func_0x000107911298();
                  if ((param_1 & 1) != 0) goto code_r0x000107911170;
                }
                goto code_r0x000107911248;
              }
            }
          }
        }
        func_0x000107914290();
        func_0x000107911030();
        if ((int)param_1 != 0) {
          func_0x0001079142b0();
          func_0x000107911030();
          if ((int)param_1 != 0) goto code_r0x000107911170;
        }
      }
    }
  }
code_r0x000107911248:
  uVar4 = 0;
code_r0x00010791124c:
  func_0x000107914e10();
  func_0x000107914df0();
  func_0x000107914dbc();
  func_0x000107914e18();
  func_0x000107914e20();
  func_0x000107914dc4();
  return uVar4;
}



/* Entry: 1079114b4; end: 1079114db;  */

undefined8 * FUN_1079114b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  func_0x0001079114dc();
  return param_1;
}



/* Entry: 107911800; end: 10791180b;  */

void FUN_107911800(void)

{
  uint extraout_w8;
  undefined8 *unaff_x19;
  
  func_0x000107913ad0();
  func_0x00010002bfa0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107911834(*unaff_x19);
  }
  return;
}



/* Entry: 107911ca0; end: 107911cd3;  */

/* WARNING: Possible PIC construction at 0x0001079120bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107912200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001079121b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010791213c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107912144: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001079121b4) */
/* WARNING: Removing unreachable block (ram,0x000107912204) */
/* WARNING: Removing unreachable block (ram,0x0001079120c0) */
/* WARNING: Removing unreachable block (ram,0x000107912140) */

void FUN_107911ca0(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar7;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [48];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  uVar3 = param_2[1] - *param_2 == 0x80;
  if (((ulong)(param_2[1] - *param_2) < 0x80) || (uVar3 = param_4 == 99, 99 < param_4))
  goto code_r0x000107911fd4;
  uVar1 = 0x78 < (ulong)(param_3[1] - *param_3);
  uVar3 = param_3[1] - *param_3 == 0x79;
  if (!(bool)uVar1) goto code_r0x000107911fd4;
  unaff_x29 = &stack0xfffffffffffffff0;
  func_0x0001079136f4();
  func_0x000107907378();
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x000107913338();
  func_0x000107915ca8();
  puVar5 = auStack_70;
  func_0x000107913ab0(auStack_60);
  func_0x000107911b44();
  func_0x000107915afc();
  if (!(bool)uVar3) {
    func_0x0001079158b4();
    if ((bool)uVar1) {
      uVar1 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914230(), (bool)uVar1)) {
        func_0x000107912284(auStack_b8);
        func_0x000107916d80();
        puStack_108 = puStack_48;
        puStack_110 = puStack_50;
        func_0x000107913668();
        func_0x00010791227c();
        func_0x000107914220();
        if (((bool)uVar1) &&
           ((func_0x0001079142c0(), (bool)uVar1 &&
            (uVar3 = unaff_x20 == (long *)0x63, unaff_x20 < (long *)0x64)))) {
          uVar1 = 0x78 < unaff_x21;
          uVar3 = unaff_x21 == 0x79;
          if ((bool)uVar1) {
            puVar4 = auStack_b8;
            func_0x000107912284();
            puStack_50 = puVar4;
            puStack_48 = puVar5;
            func_0x000107913a9c(&puStack_50);
            func_0x00010791227c();
            func_0x000107913a88(&puStack_50);
            func_0x00010791227c();
            goto LAB_107912148;
          }
        }
        func_0x000107914290();
        unaff_x30 = 0x107912140;
        register0x00000008 = (BADSPACEBASE *)&puStack_110;
        goto code_r0x000107911fd4;
      }
    }
    func_0x0001079142a0();
    unaff_x30 = 0x1079120c0;
    register0x00000008 = (BADSPACEBASE *)&puStack_110;
    goto code_r0x000107911fd4;
  }
LAB_107912148:
  func_0x000107915a78();
  if (!(bool)uVar3) {
    func_0x0001079158a8();
    if (((bool)uVar1) && (func_0x000107914210(), (bool)uVar1)) {
      bVar2 = (long *)0x62 < unaff_x20;
      uVar3 = unaff_x20 == (long *)0x63;
      if ((unaff_x20 < (long *)0x64) && (func_0x000107914e34(), bVar2)) {
        puVar4 = auStack_100;
        func_0x000107912284();
        puStack_50 = puVar4;
        puStack_48 = puVar5;
        func_0x000107914aa0(&puStack_50,&lStack_88,auStack_100);
        func_0x00010791227c();
        func_0x000107913a4c(&puStack_50);
        func_0x00010791227c();
        goto LAB_1079121c8;
      }
    }
    func_0x0001079147a8(&lStack_88);
    func_0x0001079142e0();
    unaff_x30 = 0x1079121b4;
    register0x00000008 = (BADSPACEBASE *)&puStack_110;
    goto code_r0x000107911fd4;
  }
  unaff_x21 = lStack_80 - lStack_88;
  uVar1 = 0x7f < unaff_x21;
  uVar3 = unaff_x21 == 0x80;
  if ((bool)uVar1) {
LAB_1079121c8:
    uVar1 = (long *)0x62 < unaff_x20;
    uVar3 = unaff_x20 == (long *)0x63;
    if (((long *)0x63 < unaff_x20) || (func_0x000107914200(), !(bool)uVar1)) goto LAB_1079121ec;
    func_0x000107913cc4(auStack_60,&lStack_88);
    func_0x00010791227c();
  }
  else {
LAB_1079121ec:
    func_0x0001079154ec(&lStack_88);
  }
  func_0x0001079141f0();
  if ((bool)uVar1) {
    bVar2 = (long *)0x62 < unaff_x20;
    uVar3 = unaff_x20 == (long *)0x63;
    if ((unaff_x20 < (long *)0x64) && (func_0x000107914280(), bVar2)) {
      func_0x000107913a60(auStack_70);
      func_0x00010791227c();
      func_0x000107917268();
      func_0x0001079171a8();
      func_0x000107916c40();
      func_0x0001079172a4();
      func_0x000107917348();
      func_0x000107916d78();
      return;
    }
  }
  func_0x0001079142f0();
  unaff_x30 = 0x107912204;
  register0x00000008 = (BADSPACEBASE *)&puStack_110;
code_r0x000107911fd4:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000107915c10();
  if ((!(bool)uVar3) && (func_0x0001079143ac(), !(bool)uVar3)) {
    func_0x00010791589c();
    lVar6 = extraout_x8;
    lVar7 = extraout_x9;
    while (unaff_x22 != lVar7) {
      lVar7 = *unaff_x20;
      while (lVar7 != lVar6) {
        func_0x00010791415c();
        func_0x000107911918();
        lVar6 = unaff_x20[1];
      }
      func_0x000107915c04();
      lVar6 = extraout_x8_00;
      lVar7 = extraout_x9_00;
    }
  }
  return;
}



/* Entry: 107912060; end: 10791227b;  */

void FUN_107912060(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [48];
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  func_0x0001079136f4();
  func_0x000107907378();
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x000107913338();
  func_0x000107915ca8();
  puVar4 = auStack_70;
  func_0x000107913ab0(auStack_60);
  func_0x000107911b44();
  func_0x000107915afc();
  if (!(bool)in_ZR) {
    func_0x0001079158b4();
    uVar2 = 0;
    if ((bool)in_CY) {
      uVar2 = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if ((99 < unaff_x20) || (func_0x000107914230(), !(bool)uVar2)) goto LAB_1079120b8;
      func_0x000107912284(auStack_b8);
      func_0x000107916d80();
      func_0x000107913668();
      func_0x00010791227c();
    }
    else {
LAB_1079120b8:
      func_0x0001079142a0();
      func_0x000107911fd4();
    }
    func_0x000107914220();
    in_CY = false;
    if (((bool)uVar2) && (func_0x0001079142c0(), in_CY = false, (bool)uVar2)) {
      in_CY = 0x62 < unaff_x20;
      in_ZR = unaff_x20 == 99;
      if (unaff_x20 < 100) {
        in_CY = 0x78 < unaff_x21;
        in_ZR = unaff_x21 == 0x79;
        if ((bool)in_CY) {
          puVar3 = auStack_b8;
          func_0x000107912284();
          puStack_50 = puVar3;
          puStack_48 = puVar4;
          func_0x000107913a9c(&puStack_50);
          func_0x00010791227c();
          func_0x000107913a88(&puStack_50);
          func_0x00010791227c();
          goto LAB_107912148;
        }
      }
    }
    func_0x000107914290();
    func_0x000107911fd4();
    func_0x0001079142b0();
    func_0x000107911fd4();
  }
LAB_107912148:
  func_0x000107915a78();
  if ((bool)in_ZR) {
    unaff_x21 = lStack_80 - lStack_88;
LAB_1079121c0:
    uVar2 = 0;
    if (0x7f < unaff_x21) goto LAB_1079121c8;
  }
  else {
    func_0x0001079158a8();
    if ((((!(bool)in_CY) || (func_0x000107914210(), !(bool)in_CY)) ||
        (bVar1 = 0x62 < unaff_x20, 99 < unaff_x20)) || (func_0x000107914e34(), !bVar1)) {
      func_0x0001079147a8(&lStack_88);
      func_0x0001079142e0();
      func_0x000107911fd4();
      goto LAB_1079121c0;
    }
    puVar3 = auStack_100;
    func_0x000107912284();
    puStack_50 = puVar3;
    puStack_48 = puVar4;
    func_0x000107914aa0(&puStack_50,&lStack_88,auStack_100);
    func_0x00010791227c();
    func_0x000107913a4c(&puStack_50);
    func_0x00010791227c();
LAB_1079121c8:
    uVar2 = 0x62 < unaff_x20;
    if ((unaff_x20 < 100) && (func_0x000107914200(), (bool)uVar2)) {
      func_0x000107913cc4(auStack_60,&lStack_88);
      func_0x00010791227c();
      goto LAB_1079121f4;
    }
  }
  func_0x0001079154ec(&lStack_88);
LAB_1079121f4:
  func_0x0001079141f0();
  if ((((bool)uVar2) && (bVar1 = 0x62 < unaff_x20, unaff_x20 < 100)) &&
     (func_0x000107914280(), bVar1)) {
    func_0x000107913a60(auStack_70);
    func_0x00010791227c();
  }
  else {
    func_0x0001079142f0();
    func_0x000107911fd4();
  }
  func_0x000107917268();
  func_0x0001079171a8();
  func_0x000107916c40();
  func_0x0001079172a4();
  func_0x000107917348();
  func_0x000107916d78();
  return;
}



/* Entry: 107912678; end: 1079126fb;  */

void FUN_107912678(void)

{
  undefined1 in_CY;
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001079164a8();
  while (func_0x000107914570(), (bool)in_CY) {
    func_0x000107915cc4();
    func_0x000107914e7c();
  }
  if (extraout_x8 == 1) {
    lVar1 = 8;
  }
  else {
    if (extraout_x8 != 2) goto LAB_1079126c8;
    lVar1 = 0x10;
  }
  unaff_x19[4] = lVar1;
LAB_1079126c8:
  while (unaff_x20 != unaff_x21) {
    func_0x0001079163e8();
  }
  lVar1 = unaff_x19[1];
  lVar2 = unaff_x19[2];
  while (lVar2 != lVar1) {
    func_0x000107915c58();
    lVar1 = extraout_x8_00;
    lVar2 = extraout_x9;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107912b90; end: 107912bcb;  */

void FUN_107912b90(undefined8 *param_1)

{
  func_0x00010791551c();
  func_0x000107912bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)
            (*param_1);
  return;
}



/* Entry: 107912e4c; end: 107912e6b;  */

void FUN_107912e4c(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010791664c();
  func_0x000107912d34();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10791316c; end: 10791319b;  */

void FUN_10791316c(undefined8 *param_1)

{
  long lVar1;
  
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    lVar1 = param_1[1] + -1;
    param_1[1] = lVar1;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    lVar1 = (long)*(char *)((long)param_1 + 0x17) + -1;
    *(byte *)((long)param_1 + 0x17) = (byte)lVar1 & 0x7f;
  }
  *(undefined1 *)((long)param_1 + lVar1) = 0;
  return;
}



/* Entry: 107913274; end: 1079132bf;  */

void FUN_107913274(long param_1)

{
  func_0x00010735d338(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 107918928; end: 10791893b;  */

void FUN_107918928(void)

{
  func_0x0001078ee35c();
  return;
}



/* Entry: 107918bdc; end: 107918d0f;  */

void FUN_107918bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  int iStack_50;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010793ee90(param_3);
  func_0x000100291d50(&uStack_58,uVar2);
  func_0x00010b4d1758(param_3,uStack_58,iStack_50 - (int)uStack_58);
  func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5620;
  _objc_alloc(PTR_PTR_1126d5620);
  func_0x00010c008360();
  func_0x000107918de8();
  func_0x000100100fec(&uStack_58);
  func_0x00010bfcff80(uVar4);
  _objc_release(puVar3);
  func_0x000107918de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 107918fb8; end: 107918fcb;  */

void FUN_107918fb8(void)

{
  func_0x0001079190f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107919140; end: 107919307;  */

void FUN_107919140(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c0d12e0();
  uVar2 = param_2;
  func_0x00010bf8b160();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010011b600();
  uVar4 = param_2;
  uVar9 = param_3;
  func_0x00010c2979e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x0001000ff4bc();
  uVar6 = param_2;
  uVar10 = uVar9;
  func_0x00010c0cdea0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x0001000ff4bc();
  uVar8 = param_2;
  func_0x00010bf8bfc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107919308(&uStack_88);
  func_0x00010bf440c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791935c(&uStack_a0);
  *(undefined8 *)(param_1 + 0x10) = uStack_80;
  *(undefined8 *)(param_1 + 0xe) = uStack_88;
  *param_1 = (int)uVar1;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(ulong *)(param_1 + 4) = param_3 & 0xff;
  *(undefined8 *)(param_1 + 6) = uVar5;
  *(ulong *)(param_1 + 8) = uVar9 & 0xff;
  *(undefined8 *)(param_1 + 10) = uVar7;
  *(ulong *)(param_1 + 0xc) = uVar10 & 0xff;
  *(undefined8 *)(param_1 + 0x14) = uStack_70;
  *(undefined8 *)(param_1 + 0x12) = uStack_78;
  *(undefined8 *)(param_1 + 0x16) = uStack_68;
  *(undefined8 *)(param_1 + 0x1a) = uStack_98;
  *(undefined8 *)(param_1 + 0x18) = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x0001072835ec(&uStack_a0);
  _objc_release(param_2);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x0001000ff4e4();
  return;
}



/* Entry: 107919580; end: 107919587; -[SCNSnapMapsSdkCMAnimationOptions duration] */

undefined8 FUN_107919580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10791974c; end: 107919833;  */

void FUN_10791974c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d55f8;
  _objc_alloc(PTR_PTR_1126d55f8);
  lVar2 = param_1;
  func_0x0001079193a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x10;
  func_0x0001079193a0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x20;
  func_0x0001079193a0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x30;
  func_0x0001006a7df8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c063760(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  func_0x00010791988c();
  func_0x00010791987c();
  _objc_release(lVar3);
  func_0x000107919884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107919a2c; end: 107919a33;  */

void FUN_107919a2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 107919ce8; end: 107919cef; -[SCNSnapMapsSdkCMCameraViewport screenSize] */

undefined8 FUN_107919ce8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107919f18; end: 107919f87;  */

void FUN_107919f18(void)

{
  func_0x00010791a058();
  return;
}



/* Entry: 10791a234; end: 10791a30f; -[SCNSnapMapsSdkCameraManager moveToCenter:cameraOptions:animationOptions:] */

void FUN_10791a234(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  long *plVar1;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010791af48();
  func_0x00010791afec();
  func_0x00010791b104();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000107920504();
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x00010791b094();
  func_0x00010791affc();
  func_0x00010791b018(*(undefined8 *)(*plVar1 + 0x18));
  func_0x00010791afa4();
  func_0x0001001148fc(auStack_70);
  func_0x00010791b024();
  func_0x00010791afac();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791a7a4; end: 10791a873; -[SCNSnapMapsSdkCameraManager rotateBy:p1:animationOptions:] */

void FUN_10791a7a4(void)

{
  long unaff_x22;
  long *plVar1;
  
  func_0x00010791af48();
  func_0x00010791afec();
  func_0x00010791b104();
  plVar1 = *(long **)(unaff_x22 + 0x18);
  func_0x000107927ba8();
  func_0x000107927ba8();
  func_0x00010791affc();
  func_0x00010791b018(*(undefined8 *)(*plVar1 + 0x58));
  func_0x00010791afa4();
  func_0x00010791b024();
  func_0x00010791afac();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791abec; end: 10791ac6b; -[SCNSnapMapsSdkCameraManager addOnCameraChangeStartListener:] */

void FUN_10791abec(void)

{
  long unaff_x20;
  long *plVar1;
  
  func_0x00010791af3c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010791b0b8();
  func_0x00010791b0ac(*(undefined8 *)(*plVar1 + 0x98));
  func_0x00010791b080();
  func_0x00010791af9c();
  return;
}



/* Entry: 10791aebc; end: 10791af2b;  */

void FUN_10791aebc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5630;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010791b008();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001072cd28c(&uStack_30);
  return;
}



/* Entry: 10791b260; end: 10791b30f;  */

void FUN_10791b260(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ea5c8;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791b310);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010791b9a4(&uStack_50);
  }
  func_0x0001005e7630();
  return;
}



/* Entry: 10791b540; end: 10791b5af;  */

undefined8 FUN_10791b540(void)

{
  undefined8 unaff_x21;
  
  func_0x00010791b9d0();
  func_0x00010791b9f8();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba4c();
  func_0x00010bfc3180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791b9dc();
  func_0x00010011c84c();
  func_0x00010791ba14();
  func_0x00010791ba2c();
  return unaff_x21;
}



/* Entry: 10791b8b8; end: 10791b903;  */

void FUN_10791b8b8(void)

{
  func_0x00010791b9d0();
  func_0x00010791b9f8();
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791ba4c();
  func_0x00010c0a5de0();
  func_0x00010791ba1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10791bc80; end: 10791bc93;  */

void FUN_10791bc80(void)

{
  func_0x00010791bda4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791bea4; end: 10791bf9b;  */

void FUN_10791bea4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ea8f8;
  puVar4[3] = &PTR_DAT_1109ea970;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  func_0x00010791c200();
  puVar4[3] = &PTR_DAT_1109ea948;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10791c1d4(&uStack_50);
  return;
}



/* Entry: 10791c1d4; end: 10791c1ff;  */

long FUN_10791c1d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10791c430; end: 10791c4bf;  */

void FUN_10791c430(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2202a0(uVar2);
  func_0x00010791c60c();
  func_0x00010791c5f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10791c7d0; end: 10791c7d3;  */

void FUN_10791c7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109eab58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791ca3c; end: 10791ca4f;  */

void FUN_10791ca3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791cb90; end: 10791cc47;  */

void FUN_10791cb90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eac40;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791cc48);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010791cfb8(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10791cf1c; end: 10791cfa7;  */

void FUN_10791cf1c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010791cfe4();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x0001005f2030();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x0001005f2294();
  func_0x00010791cfec();
  return;
}



/* Entry: 10791d104; end: 10791d10b; -[SCNSnapMapsSdkExternalCustomLayerRenderParameters latitude] */

undefined8 FUN_10791d104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10791d1c8; end: 10791d323;  */

void FUN_10791d1c8(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_1c8;
  int iStack_1c0;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar1 = param_2;
  _objc_retain();
  func_0x00010791d770();
  if (puVar1 != (undefined1 *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + (long)puVar9 * 8);
        _objc_retain(uVar7);
        func_0x0001000fbca4(auStack_138,uVar7);
        func_0x00010726db00(param_1,auStack_138);
        puVar2 = auStack_138;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010791d78c();
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar1);
      func_0x00010791d770();
      puVar1 = puVar2;
    } while (puVar2 != (undefined1 *)0x0);
  }
  lVar8 = 0;
  func_0x00010791d768();
  func_0x00010791d768();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010791d768();
    func_0x0001005d0538(param_1);
    func_0x00010791d768();
    __Unwind_Resume();
    puVar3 = PTR_PTR_1126d5650;
    _objc_alloc(PTR_PTR_1126d5650);
    func_0x00010791d5f8(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001001011a4(lVar8 + 0x58);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8 + 0x70;
    func_0x00010791d6b8(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010088f8a4(lVar8 + 0x98);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    plVar10 = (long *)(lVar8 + 0xc0);
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      func_0x00010791d6b8(plVar10 + 5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001001011a4(plVar10 + 2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar5);
      func_0x00010791d784();
      func_0x00010791d794();
    }
    func_0x00010bf51e00(puVar5);
    func_0x00010791d79c();
    uVar11 = *(undefined4 *)(lVar8 + 0xd8);
    uVar12 = *(undefined4 *)(lVar8 + 0xdc);
    if (*(char *)(lVar8 + 0x100) == '\x01') {
      func_0x000107928910(lVar8 + 0xe0);
      _objc_retainAutoreleasedReturnValue();
    }
    if (*(char *)(lVar8 + 0x138) == '\x01') {
      lVar6 = lVar8 + 0x108;
      func_0x0001079316a8(lVar6);
      func_0x000100291d50(&uStack_1c8,lVar6);
      func_0x00010b4d1758(lVar8 + 0x108,uStack_1c8,iStack_1c0 - (int)uStack_1c8);
      func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      _objc_alloc();
      func_0x00010c008360();
      func_0x00010791d784();
      func_0x000100100fec(&uStack_1c8);
    }
    func_0x00010c0118c0(uVar11,uVar12,puVar3);
    func_0x00010791d7ac();
    func_0x00010791d79c();
    func_0x00010791d794();
    func_0x00010791d78c();
    _objc_release(lVar4);
    func_0x00010791d7a4();
    func_0x00010791d768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10791d9c0; end: 10791d9c7; -[SCNSnapMapsSdkFeatureDescriptor groups] */

undefined8 FUN_10791d9c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10791da4c; end: 10791da5b;  */

void FUN_10791da4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10791ddc0; end: 10791ddcf;  */

void FUN_10791ddc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10791e08c; end: 10791e0e7;  */

void FUN_10791e08c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010791e668();
  func_0x00010bf1d920(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791e17c();
  func_0x00010791e634();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10791e5fc; end: 10791e60b;  */

void FUN_10791e5fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eae08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10791e740; end: 10791e747; -[SCNSnapMapsSdkGestureInfo lat] */

undefined4 FUN_10791e740(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10791e95c; end: 10791eaf3;  */

void FUN_10791e95c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_78;
  int iStack_70;
  
  lVar2 = param_1;
  _objc_autoreleasePoolPush();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2[1];
  for (lVar8 = *param_2; lVar8 != lVar1; lVar8 = lVar8 + 0x38) {
    lVar4 = lVar8;
    func_0x0001079430fc(lVar8);
    func_0x000100291d50(&uStack_78,lVar4);
    func_0x00010b4d1758(lVar8,uStack_78,iStack_70 - (int)uStack_78);
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a40(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126d5668;
    _objc_alloc(PTR_PTR_1126d5668);
    func_0x00010c008360();
    _objc_release(puVar5);
    func_0x000100100fec(&uStack_78);
    func_0x00010befa120(puVar3);
    _objc_release(puVar6);
  }
  func_0x00010bf51e00(puVar3);
  func_0x00010791ebc4();
  func_0x00010c0e45c0(uVar7);
  func_0x00010791ebd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar2);
  return;
}



/* Entry: 10791ec80; end: 10791ec87; -[SCNSnapMapsSdkInitialViewportInfo activeUserLocationAvailable] */

undefined1 FUN_10791ec80(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10791eeac; end: 10791ef1f;  */

void FUN_10791eeac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010791ebe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6080(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10791f1ac; end: 10791f1bf;  */

void FUN_10791f1ac(void)

{
  func_0x00010791f3e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10791f420; end: 10791f443;  */

void FUN_10791f420(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10791f760; end: 10791f7a3; -[SCNSnapMapsSdkInputManager .cxx_construct] */

undefined8 * FUN_10791f760(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010791f90c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10791fbbc; end: 10791fc47; -[SCNSnapMapsSdkInspector getConnectionParamsQrCode] */

void FUN_10791fbbc(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))(auStack_30);
  func_0x000100837700(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010791fe8c();
  func_0x0001000ff1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10791fecc; end: 10791ff83;  */

void FUN_10791fecc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eb288;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10791ff84);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107920254(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1079201b4; end: 107920243;  */

void FUN_1079201b4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x000107920280();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x0001005f2030();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x0001005f2294();
  _objc_autoreleasePoolPop(param_1);
  return;
}



/* Entry: 1079204c4; end: 1079204cb; -[SCNSnapMapsSdkLatLngBoundsDouble sw] */

undefined8 FUN_1079204c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1079205f4; end: 10792064b; -[SCNSnapMapsSdkMapSdk initWithCpp:] */

undefined1 * FUN_1079205f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8de0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001072a1d60((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107920968; end: 1079209bb; -[SCNSnapMapsSdkMapSdk getNativeThisPtr] */

void FUN_107920968(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10792120c; end: 107921247;  */

void FUN_10792120c(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107921f84();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    func_0x00010792215c();
    FUN_10791b260();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1079215d4; end: 1079216cb; -[SCNSnapMapsSdkMapSdk prefetchResources:] */

void FUN_1079215d4(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107921f90();
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = unaff_x19;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c08fa60(unaff_x19);
  ppuStack_60 = &PTR_DAT_1109ed780;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x00010006369c(&ppuStack_60,uVar1,unaff_x19);
  func_0x00010792203c();
  (**(code **)(*plVar2 + 0x60))(plVar2,&ppuStack_60);
  FUN_10793f10c(&ppuStack_60);
  func_0x000107921fa0();
  return;
}



/* Entry: 107921980; end: 107921997;  */

void FUN_107921980(void)

{
  func_0x000107921a1c();
  return;
}



/* Entry: 107921d54; end: 107921f1b;  */

undefined1  [16] FUN_107921d54(float param_1,float param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x25;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  func_0x000107922110();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x25 = uVar7 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_3 / uVar6;
        }
        unaff_x25 = param_3 - uVar4 * uVar6;
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_107921e10;
          uVar4 = unaff_x21[1];
          plVar5 = unaff_x21;
          if (uVar4 != param_3) break;
          plVar2 = unaff_x21 + 2;
          func_0x0001000e107c(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_107921ef0;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar4 = uVar4 & uVar7;
        }
        else if (uVar6 <= uVar4) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar4 / uVar6;
          }
          uVar4 = uVar4 - uVar1 * uVar6;
        }
      } while (uVar4 == unaff_x25);
    }
  }
LAB_107921e10:
  func_0x00010792217c();
  func_0x000107921f1c();
  func_0x000107922168();
  if ((uVar6 == 0) || (param_2 * (float)uVar6 < param_1)) {
    func_0x0001079220dc(uVar6 << 1);
    func_0x0001072aaaf4();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x25 = uVar6 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = param_3 / uVar6;
        }
        unaff_x25 = param_3 - uVar7 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x25 * 8) == 0) {
    func_0x0001079220c4();
    *(undefined8 *)(extraout_x8 + unaff_x25 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar7 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar4 * uVar6;
      }
      *(long **)(extraout_x8 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x000107922148();
  }
  func_0x000107921fec();
  uVar3 = 1;
LAB_107921ef0:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 1079223e4; end: 10792247b; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder authContextProviders:] */

void FUN_1079223e4(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  func_0x000107922b38();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107920d30(auStack_58);
  func_0x000107922be4(*(undefined8 *)(*plVar1 + 0x20));
  func_0x0001072aa7e4(auStack_58);
  func_0x000107922b84();
  return;
}



/* Entry: 107922868; end: 1079228eb; -[SCNSnapMapsSdkMapSdkInitializationParamsBuilder cofProvider:] */

void FUN_107922868(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_40 [16];
  
  func_0x000107922b38();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x000107922bd0();
  FUN_10792120c();
  func_0x000107922b58(*(undefined8 *)(*plVar1 + 0x60));
  func_0x0001072ab65c(auStack_40);
  func_0x000107922b84();
  return;
}



/* Entry: 107922c1c; end: 107922cd3;  */

void FUN_107922c1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109eb420;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_107922cd4);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x000107922ff8(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107922fe8; end: 107922ff7;  */

void FUN_107922fe8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109eb460;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107923304; end: 10792345b; -[SCNSnapMapsSdkMapSdkSession initialize2:mapSdkObserver:appTriggersDelegate:viewportInfoObserver:] */

void FUN_107923304(long param_1)

{
  undefined8 in_x5;
  long *plVar1;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [56];
  
  func_0x00010792689c();
  func_0x000107926640();
  func_0x0001079266e0();
  func_0x000107926820();
  func_0x00010792683c();
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107923280(auStack_78);
  FUN_107922c1c(auStack_88);
  func_0x0001079189d0(auStack_98);
  func_0x000107929cf8(auStack_a8,in_x5);
  (**(code **)(*plVar1 + 0x20))(plVar1,auStack_78,auStack_88,auStack_98,auStack_a8);
  func_0x0001072ca8d0(auStack_a8);
  func_0x0001072bb9d0(auStack_98);
  func_0x0001072bca58(auStack_88);
  func_0x00010793d6c4(auStack_78);
  func_0x000107926734();
  func_0x0001079266a0();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 10792380c; end: 107923887; -[SCNSnapMapsSdkMapSdkSession getInspector] */

void FUN_10792380c(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079266cc();
  func_0x00010792675c();
  func_0x00010791fcc0(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x0001072ac7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107923e24; end: 107923ecb; -[SCNSnapMapsSdkMapSdkSession removeFeatures:featureId:] */

void FUN_107923e24(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_60 [48];
  
  FUN_107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079265ec();
  func_0x000107926830();
  func_0x0001000fbed0();
  func_0x000107926614(*(undefined8 *)(*plVar1 + 0x98));
  func_0x0001000e30f4(auStack_60);
  func_0x0001079266e8();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 107924404; end: 10792447f; -[SCNSnapMapsSdkMapSdkSession getPlaceManager] */

void FUN_107924404(void)

{
  undefined1 auStack_30 [16];
  
  func_0x0001079266cc();
  func_0x00010792675c();
  func_0x00010792796c(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107926728();
  func_0x000107926338();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107924b10; end: 107924bbb; -[SCNSnapMapsSdkMapSdkSession loadManualStyle:extraHeaders:] */

void FUN_107924b10(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  FUN_107926550();
  func_0x0001079266e0();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001079266b0(auStack_48);
  func_0x000107926830();
  func_0x000100626d7c();
  func_0x000107926614(*(undefined8 *)(*plVar1 + 0x100));
  func_0x00010028ad98(auStack_70);
  func_0x0001079267a0();
  func_0x000107926638();
  func_0x000107926620();
  return;
}



/* Entry: 107925110; end: 1079251c3; -[SCNSnapMapsSdkMapSdkSession zoomTo:zoomTarget:viewportEdgeInsets:] */

void FUN_107925110(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 auStack_80 [64];
  
  _objc_retain(param_5);
  plVar1 = *(long **)(param_2 + 0x18);
  func_0x000107926964();
  (**(code **)(*plVar1 + 0x138))(param_1,plVar1,param_4,auStack_80);
  func_0x0001079267e8();
  func_0x000107926620();
  return;
}



/* Entry: 107925528; end: 10792579b; -[SCNSnapMapsSdkMapSdkSession updateSdkConfigs:] */

void FUN_107925528(ulong param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  func_0x00010792673c();
  uStack_70 = extraout_x8;
  func_0x000107926640();
  plVar6 = *(long **)(unaff_x20 + 0x18);
  func_0x000107926780();
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_170 = 0;
  func_0x000107926884();
  puVar2 = (undefined1 *)0x0;
  if (param_1 != 0) {
    in_ZR = param_1 == 0x666666666666667;
    if (0x666666666666666 < param_1) goto LAB_1079256e0;
    func_0x0001072aa560(auStack_f0,param_1,0,&uStack_160);
    func_0x0001072aa520(&uStack_170,auStack_f0);
    puVar2 = auStack_f0;
    func_0x0001072aa6dc();
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107926780();
  func_0x0001079265c4();
  if (puVar2 != (undefined1 *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          func_0x00010792687c();
        }
        uVar7 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
        func_0x000107926820();
        func_0x00010bf63640(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        uVar3 = uVar7;
        func_0x00010bf25f00(uVar7);
        uVar4 = uVar7;
        func_0x00010c08fa60(uVar7);
        ppuStack_158 = &PTR_DAT_1109ed320;
        uStack_150 = 0;
        puStack_148 = &DAT_11383d918;
        uStack_138 = 0;
        func_0x00010006369c(&ppuStack_158,uVar3,uVar4);
        _objc_release(uVar7);
        puVar5 = &uStack_170;
        func_0x0001072aa360(&uStack_170,&ppuStack_158);
        func_0x0001079268d8();
        func_0x0001079266a0();
        puVar9 = puVar9 + 1;
        in_ZR = puVar9 == puVar2;
      } while (puVar9 < puVar2);
      func_0x0001079265c4();
      puVar2 = (undefined1 *)puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  func_0x000107926620();
  func_0x000107926620();
  func_0x000107926700(*(undefined8 *)(*plVar6 + 0x178));
  func_0x000107926970();
  func_0x000107926620();
  func_0x0001079266b8(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1079256e0:
  func_0x0001072aa554();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x107925778);
  (*pcVar1)();
}



/* Entry: 107925c2c; end: 107925d17; -[SCNSnapMapsSdkMapSdkSession getSystemStats] */

void FUN_107925c2c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  puVar1 = auStack_60;
  func_0x0001079266cc();
  func_0x00010792675c();
  func_0x000107943318(auStack_60);
  func_0x000100291d50(auStack_38,puVar1);
  func_0x000107926954();
  func_0x0001079268ac();
  func_0x00010bf64a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_alloc(PTR_PTR_1126d56b8);
  uStack_40 = 0;
  func_0x0001079267f0();
  func_0x0001079265b8();
  func_0x00010792685c();
  func_0x000107943220(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107926208; end: 107926273;  */

void FUN_107926208(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5698;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001079267cc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010725af7c(&uStack_30);
  return;
}



/* Entry: 107926550; end: 107926977;  */

void FUN_107926550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 107926cbc; end: 107926ceb;  */

void FUN_107926cbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010bf2e9c0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 107926f68; end: 107926f93;  */

void FUN_107926f68(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010792702c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107927218; end: 1079272db; -[SCNSnapMapsSdkParticleEffectImageLoaderObserver onImageLoaded:] */

void FUN_107927218(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x0001000fbca4(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107927560; end: 1079275cf;  */

void FUN_107927560(void)

{
  func_0x0001079276a0();
  return;
}



/* Entry: 10792781c; end: 107927877; -[SCNSnapMapsSdkPlaceManager hideAllPlaces] */

void FUN_10792781c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 107927b14; end: 107927ba7;  */

void FUN_107927b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10792809c; end: 1079280c7;  */

void FUN_10792809c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001079281a4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079283d4; end: 10792844b;  */

long FUN_1079283d4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010793bd48(param_1,0);
  if (lVar1 != param_2) {
    uVar2 = *(ulong *)(param_1 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    uVar3 = *(ulong *)(param_2 + 8);
    if ((uVar3 & 1) != 0) {
      uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
    }
    if (uVar2 == uVar3) {
      func_0x00010793c25c(param_1,param_2);
    }
    else {
      func_0x00010793c22c(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 1079286c4; end: 107928703;  */

void FUN_1079286c4(void)

{
  func_0x000107928870();
  return;
}



/* Entry: 107928944; end: 1079289a3; -[SCNSnapMapsSdkRect initWithTop:left:bottom:right:] */

void FUN_107928944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8e20;
  uStack_40 = param_5;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  }
  return;
}



/* Entry: 107928b8c; end: 107928bdf; -[SCNSnapMapsSdkResolveContentObjectCallback .cxx_destruct] */

void FUN_107928b8c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109eb8c8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010726e9f8((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 107928dcc; end: 107928dd3; -[SCNSnapMapsSdkSize height] */

undefined8 FUN_107928dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107929044; end: 107929143;  */

void FUN_107929044(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109eb970;
  puVar4[3] = &PTR_DAT_1109eb9e8;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109eb9c0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10792928c(&uStack_50);
  return;
}



/* Entry: 10792928c; end: 1079292b7;  */

long FUN_10792928c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1079294c0; end: 1079294fb; -[SCNSnapMapsSdkStyleRevision .cxx_destruct] */

void FUN_1079294c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107929638; end: 1079296cf; -[SCNSnapMapsSdkTimedTransitionOptions initWithDuration:easing:] */

undefined1 *
FUN_107929638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8e50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10792988c; end: 107929893; -[SCNSnapMapsSdkUnitBezierDouble p2] */

undefined8 FUN_10792988c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107929bbc; end: 107929c33;  */

void FUN_107929bbc(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109eba00;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x000107929ca8();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_107929c34);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107929cec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107929ecc; end: 107929f0b;  */

void FUN_107929ecc(void)

{
  func_0x00010792a0d8();
  return;
}



/* Entry: 10792a270; end: 10792a29b;  */

void FUN_10792a270(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010792a334();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10792a600; end: 10792a603;  */

void FUN_10792a600(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ebbe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792a7a8; end: 10792a7b3;  */

long FUN_10792a7a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ebba0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10792aa80; end: 10792aaeb;  */

undefined1  [16] FUN_10792aa80(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  bVar1 = param_1 == 0;
  if (bVar1) {
    param_1 = 0;
    uVar2 = 0;
  }
  else {
    func_0x00010c1552c0(param_1);
    uVar2 = param_1 & 0xffffffffffffff00;
    param_1 = param_1 & 0xff;
  }
  func_0x00010792aaec();
  auVar3._0_8_ = uVar2 | param_1;
  auVar3[8] = !bVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Entry: 10792b07c; end: 10792b083;  */

void FUN_10792b07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10792b39c; end: 10792b3a3; -[SCNMapSdkResourceRequesterResource tileData] */

undefined8 FUN_10792b39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10792b3dc; end: 10792b3e3; -[SCNMapSdkResourceRequesterResource httpMethod] */

undefined8 FUN_10792b3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}


