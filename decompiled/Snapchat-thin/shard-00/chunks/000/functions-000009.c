/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100066d74; end: 100066d9b;  */

void FUN_100066d74(undefined4 param_1)

{
  FUN_100066d50(param_1);
  FUN_100066dc4();
  func_0x000100066380();
  return;
}



/* Entry: 100066d9c; end: 100066d9f;  */

ulong FUN_100066d9c(long *param_1)

{
  return param_1[1] * 4 + *param_1 * 8 + param_1[2] + param_1[3] * 0x20 + 7U & 0xfffffffffffffff8;
}



/* Entry: 100066da0; end: 100066dc3;  */

long FUN_100066da0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100066d9c();
  return lVar1 + *(long *)(param_1 + 0x20) * 8;
}



/* Entry: 100066dc4; end: 100066ddb;  */

void FUN_100066dc4(void)

{
  FUN_100066368();
  return;
}



/* Entry: 100066ddc; end: 100066de7;  */

void FUN_100066ddc(void)

{
  return;
}



/* Entry: 100066de8; end: 100066f6b;  */

void FUN_100066de8(ulong *param_1,ulong param_2,uint param_3,undefined4 *param_4)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte bStack0000000000000008;
  
  FUN_100066f6c();
  bStack0000000000000008 = (byte)param_3;
  bVar3 = *(byte *)(param_2 + 0xb);
  if (bVar3 == 0) {
    FUN_10006736c();
    param_3 = param_3 + 1;
    bStack0000000000000008 = (byte)param_3;
    bVar3 = *(byte *)(param_2 + 0xb);
  }
  uVar2 = 7;
  if (bVar3 != 0) {
    uVar2 = (uint)bVar3;
  }
  if (*(byte *)(param_2 + 10) == uVar2) {
    if (uVar2 < 7) {
      uVar2 = (uVar2 & 0x7f) << 1;
      if (6 < uVar2) {
        uVar2 = 7;
      }
      uVar1 = (ulong)uVar2;
      FUN_100066d74();
      FUN_100067448();
      *(undefined1 *)(uVar1 + 10) = *(undefined1 *)(param_2 + 10);
      *(undefined1 *)(param_2 + 10) = 0;
      FUN_1000674dc(param_2);
      param_1[2] = uVar1;
      *param_1 = uVar1;
      param_2 = uVar1;
    }
    else {
      FUN_100067664(param_1);
      param_3 = (uint)bStack0000000000000008;
    }
  }
  uVar2 = param_3 & 0xff;
  if ((param_3 & 0xff) < (uint)*(byte *)(param_2 + 10)) {
    FUN_1000675f8(param_2,*(byte *)(param_2 + 10) - uVar2,uVar2 + 1,(ulong)uVar2,param_2);
  }
  lVar4 = param_2 + (ulong)uVar2 * 0x20;
  *(undefined4 *)(lVar4 + 0x10) = *param_4;
  func_0x000107c60c94(lVar4 + 0x18,param_4 + 2);
  bVar3 = *(char *)(param_2 + 10) + 1;
  *(byte *)(param_2 + 10) = bVar3;
  if ((*(char *)(param_2 + 0xb) == '\0') && (uVar2 + 1 < (uint)bVar3)) {
    while (uVar2 + 1 < (uint)bVar3) {
      uVar1 = param_2;
      FUN_100067c04();
      lVar4 = *(long *)(uVar1 + (ulong)(byte)(bVar3 - 1) * 8);
      uVar1 = param_2;
      FUN_1000679a8();
      *(long *)(uVar1 + (ulong)bVar3 * 8) = lVar4;
      *(byte *)(lVar4 + 8) = bVar3;
      bVar3 = bVar3 - 1;
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 100066f6c; end: 100066fa3;  */

void FUN_100066f6c(void)

{
  return;
}



/* Entry: 100066fa4; end: 10006704b;  */

bool FUN_100066fa4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = (long)*(int *)(param_4 + 0x38) << 3;
  do {
    if (lVar2 == 0) {
      lVar2 = (long)*(int *)(param_4 + 0x80) << 3;
      do {
        bVar1 = lVar2 == 0;
        if (lVar2 == 0) {
          return true;
        }
        func_0x000100067d10();
        func_0x000107c31698();
        lVar2 = lVar2 + -8;
      } while ((param_1 & 1) != 0);
      return bVar1;
    }
    func_0x000100067d10();
    FUN_100066fa4();
    lVar2 = lVar2 + -8;
  } while ((param_1 & 1) != 0);
  return false;
}



/* Entry: 10006704c; end: 10006709b;  */

void FUN_10006704c(undefined8 *param_1,long param_2,uint *param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  char in_NG;
  char in_OV;
  uint *puVar3;
  uint *extraout_x8;
  uint *extraout_x8_00;
  undefined8 extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x11;
  long extraout_x11_00;
  
  puVar3 = (uint *)(ulong)*param_3;
  FUN_100066b08();
  if (param_2 == 0) {
    FUN_1000671ac();
    param_2 = extraout_x11_00;
    puVar3 = extraout_x8_00;
    if (in_NG == in_OV) {
      param_2 = extraout_x9_00;
      puVar3 = param_3;
    }
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_1000671ac();
    uVar1 = extraout_x11;
    puVar2 = extraout_x8;
    if (in_NG == in_OV) {
      uVar1 = extraout_x9;
      puVar2 = param_3;
    }
    param_1[2] = puVar2;
    param_1[3] = uVar1;
  }
  *param_1 = puVar3;
  param_1[1] = param_2;
  return;
}



/* Entry: 10006709c; end: 1000671ab;  */

uint FUN_10006709c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_a0 [24];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10006704c(auStack_50,*(undefined8 *)*param_1,param_2);
  uVar4 = *(undefined8 *)*param_1;
  FUN_10006704c(auStack_70,uVar4,param_3);
  puVar3 = auStack_50;
  func_0x0001000671cc();
  puStack_88 = puVar3;
  uStack_80 = uVar4;
  func_0x0001000671cc(auStack_70);
  uVar5 = (uint)&puStack_88;
  FUN_10006720c();
  if (uVar5 == 0) {
    cVar1 = SBORROW8(lStack_48,lStack_68);
    cVar2 = lStack_48 - lStack_68 < 0;
    if (lStack_48 == lStack_68) {
      FUN_10006725c(uStack_40,uStack_38,uStack_60,uStack_58);
      FUN_100067294();
      uVar5 = (uint)(cVar2 != cVar1);
    }
    else {
      FUN_100066a54(&puStack_88,param_2,*(undefined8 *)*param_1);
      FUN_100066a54(auStack_a0,param_3,*(undefined8 *)*param_1);
      func_0x000100125af4(&puStack_88,auStack_a0);
      FUN_100067294();
      uVar5 = (uint)(cVar2 != cVar1);
      func_0x000100066f9c();
      func_0x000107c3a800();
    }
  }
  else {
    uVar5 = uVar5 >> 0x1f;
  }
  return uVar5;
}



/* Entry: 1000671ac; end: 1000671d3;  */

void FUN_1000671ac(void)

{
  return;
}



/* Entry: 1000671d4; end: 10006720b;  */

undefined1  [16] FUN_1000671d4(long *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar4 = param_1[1] - param_2;
  if (param_2 <= (ulong)param_1[1]) {
    if (param_3 <= uVar4) {
      uVar4 = param_3;
    }
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = *param_1 + param_2;
    return auVar7;
  }
  pcVar5 = "string_view::substr";
  func_0x000104c03f28();
  uVar6 = *(undefined8 *)pcVar5;
  uVar3 = *(ulong *)(pcVar5 + 8);
  uVar4 = param_4;
  if (uVar3 <= param_4) {
    uVar4 = uVar3;
  }
  func_0x000107c610b0(uVar6,param_3,uVar4);
  uVar1 = 1;
  if (uVar3 < param_4) {
    uVar1 = 0xffffffff;
  }
  uVar2 = 0;
  if (uVar3 != param_4) {
    uVar2 = uVar1;
  }
  uVar1 = (uint)uVar6;
  if ((uint)uVar6 == 0) {
    uVar1 = uVar2;
  }
  auVar8._4_4_ = 0;
  auVar8._0_4_ = uVar1;
  auVar8._8_8_ = param_3;
  return auVar8;
}



/* Entry: 10006720c; end: 100067217;  */

int FUN_10006720c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  uVar4 = param_1[1];
  uVar3 = param_4;
  if (uVar4 <= param_4) {
    uVar3 = uVar4;
  }
  func_0x000107c610b0(uVar5,param_3,uVar3);
  iVar1 = 1;
  if (uVar4 < param_4) {
    iVar1 = -1;
  }
  iVar2 = 0;
  if (uVar4 != param_4) {
    iVar2 = iVar1;
  }
  iVar1 = (int)uVar5;
  if ((int)uVar5 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Entry: 100067218; end: 10006725b;  */

int FUN_100067218(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  uVar4 = param_1[1];
  uVar3 = param_3;
  if (uVar4 <= param_3) {
    uVar3 = uVar4;
  }
  func_0x000107c610b0(uVar5,param_2,uVar3);
  iVar1 = 1;
  if (uVar4 < param_3) {
    iVar1 = -1;
  }
  iVar2 = 0;
  if (uVar4 != param_3) {
    iVar2 = iVar1;
  }
  iVar1 = (int)uVar5;
  if ((int)uVar5 == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Entry: 10006725c; end: 100067293;  */

uint FUN_10006725c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  iVar1 = (int)&uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  FUN_100067218(&uStack_20,param_3,param_4);
  uVar2 = (uint)(0 < iVar1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 100067294; end: 1000672bf;  */

void FUN_100067294(void)

{
  return;
}



/* Entry: 1000672c0; end: 100067323;  */

void FUN_1000672c0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_1000633dc();
  if ((uVar1 & 1) == 0) {
    FUN_100067324(param_3,param_4,param_1,param_2);
  }
  return;
}



/* Entry: 100067324; end: 100067363;  */

bool FUN_100067324(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if (param_4 == 0) {
    return true;
  }
  if (param_2 < param_4) {
    return false;
  }
  func_0x000107c610b0(param_1,param_3,param_4);
  return (int)param_1 == 0;
}



/* Entry: 100067364; end: 10006736b;  */

void FUN_100067364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 10006736c; end: 100067417;  */

void FUN_10006736c(long *param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  int extraout_w8;
  int iVar4;
  int extraout_w8_00;
  long *plVar5;
  long *unaff_x19;
  uint uVar6;
  
  FUN_100067418();
  uVar6 = *(uint *)(unaff_x19 + 1);
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    uVar2 = uVar6 - 1;
    *(uint *)(unaff_x19 + 1) = uVar2;
    if (0 < (int)uVar6) {
      return;
    }
    uVar6 = uVar2;
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      FUN_100067c3c();
      while( true ) {
        if (-1 < (int)uVar2) {
          return;
        }
        plVar5 = (long *)*param_1;
        if (*(char *)((long)plVar5 + 0xb) != '\0') break;
        uVar2 = *(byte *)(param_1 + 1) - 1;
        *(uint *)(unaff_x19 + 1) = uVar2;
        *unaff_x19 = (long)plVar5;
        param_1 = plVar5;
      }
      func_0x000107c3a82c();
      iVar4 = extraout_w8_00;
      goto LAB_100067404;
    }
  }
  FUN_100067c04();
  param_1 = param_1 + (uVar6 & 0xff);
  while( true ) {
    lVar3 = *param_1;
    func_0x000100067c48();
    bVar1 = *(byte *)(lVar3 + 10);
    if (extraout_w8 != 0) break;
    FUN_100067c04();
    param_1 = (long *)(lVar3 + (ulong)bVar1 * 8);
  }
  iVar4 = bVar1 - 1;
LAB_100067404:
  *(int *)(unaff_x19 + 1) = iVar4;
  return;
}



/* Entry: 100067418; end: 100067447;  */

undefined8 FUN_100067418(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 100067448; end: 10006747f;  */

void FUN_100067448(void)

{
  long unaff_x21;
  
  FUN_100067480();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -0x20) {
    func_0x000100067498();
    func_0x0001000674a4();
  }
  return;
}



/* Entry: 100067480; end: 1000674db;  */

void FUN_100067480(void)

{
  return;
}



/* Entry: 1000674dc; end: 1000675af;  */

void FUN_1000674dc(long param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  int extraout_w8;
  int extraout_w8_00;
  long *unaff_x19;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  FUN_1000675b0();
  if (extraout_w8 == 0) {
    if (*(char *)(param_1 + 10) != '\0') {
      plVar6 = (long *)*unaff_x19;
      do {
        func_0x000107c31678();
        FUN_1000675b0();
      } while (extraout_w8_00 == 0);
      uVar7 = (ulong)*(byte *)(unaff_x19 + 1);
      lVar4 = *unaff_x19;
      do {
        lVar2 = lVar4;
        FUN_100067c04();
        plVar5 = *(long **)(lVar2 + uVar7 * 8);
        cVar3 = '\0';
        if (*(char *)((long)plVar5 + 0xb) == '\0') {
          while (cVar3 == '\0') {
            func_0x000107c31678();
            cVar3 = *(char *)((long)plVar5 + 0xb);
          }
          uVar7 = (ulong)*(byte *)(plVar5 + 1);
          lVar4 = *plVar5;
        }
        FUN_1000675bc(plVar5,*(undefined1 *)((long)plVar5 + 10));
        func_0x000107c3a860();
        if (*(byte *)(lVar4 + 10) <= uVar7) {
          do {
            func_0x000107c3a838();
            FUN_1000675bc();
            func_0x000107c3a8b8();
            bVar1 = plVar6 <= plVar5;
            if (plVar5 == plVar6) {
              return;
            }
            func_0x000107c3a890();
          } while (bVar1);
        }
        uVar7 = uVar7 + 1;
      } while( true );
    }
  }
  else {
    FUN_1000675bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1000675b0; end: 1000675bb;  */

void FUN_1000675b0(void)

{
  return;
}



/* Entry: 1000675bc; end: 1000675eb;  */

void FUN_1000675bc(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1 = param_1 + 0x18;
  uVar2 = (param_2 & 0xffffffff) << 5;
  uVar1 = param_2 & 0xffffffff;
  while (uVar1 != 0) {
    func_0x000107c60ca0(param_1);
    param_1 = param_1 + 0x20;
    uVar2 = uVar2 - 0x20;
    uVar1 = uVar2;
  }
  return;
}



/* Entry: 1000675ec; end: 1000675f7;  */

void FUN_1000675ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1000675f8; end: 10006762f;  */

void FUN_1000675f8(void)

{
  long unaff_x21;
  
  FUN_100067630();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + 0x20) {
    func_0x000100067498();
    func_0x0001000674a4();
  }
  return;
}



/* Entry: 100067630; end: 100067663;  */

void FUN_100067630(void)

{
  return;
}



/* Entry: 100067664; end: 1000678d3;  */

void FUN_100067664(void)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar5;
  char cVar6;
  ulong uVar7;
  undefined4 extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  int extraout_w8_02;
  int iVar8;
  long extraout_x8;
  long lVar9;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w10;
  uint extraout_w10_00;
  ulong *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar10;
  long unaff_x23;
  uint uVar11;
  long unaff_x24;
  
  FUN_100066f6c();
  FUN_1000678d4();
  if ((bool)in_ZR) {
    FUN_1000678f0(0);
    func_0x000100067964();
    FUN_100067974();
    *unaff_x22 = unaff_x23;
    unaff_x21 = (long *)*unaff_x19;
LAB_1000677e8:
    func_0x0001000679f0();
    if (extraout_w8_01 == 0) {
      unaff_x20 = (long *)(ulong)((uint)unaff_x21 & 0xff);
      FUN_1000678f0(unaff_x20,unaff_x23);
      func_0x000107c3a7cc();
      FUN_100067a24();
    }
    else {
      FUN_100066d50(7);
      FUN_100066dc4();
      func_0x000100067a00();
      FUN_100067a24();
      func_0x000100067bd8();
      if ((bool)in_ZR) {
        unaff_x22[2] = (long)unaff_x20;
      }
    }
  }
  else {
    bVar3 = *(byte *)(unaff_x21 + 1);
    uVar11 = (uint)unaff_x24;
    if (bVar3 != 0) {
      unaff_x20 = (long *)(ulong)(bVar3 - 1);
      FUN_100067c04();
      func_0x000100067c54();
      if (*(byte *)((long)unaff_x20 + 10) < 7) {
        func_0x000100067d24();
        cVar6 = uVar11 > extraout_w10 && (int)((extraout_w9 & 0xff) - 6) < 0;
        if (uVar11 <= extraout_w10 || (extraout_w9 & 0xff) < 7) {
          func_0x000100067ce4(unaff_x20 + extraout_x8 * 4);
          func_0x0001000674a4();
          func_0x000100067d3c();
          FUN_100067448();
          func_0x000100067ce4(*unaff_x20 + (ulong)*(byte *)(unaff_x20 + 1) * 0x20);
          func_0x0001000674a4();
          func_0x000100067d5c();
          FUN_100067448();
          if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
            func_0x000100067bfc();
            lVar9 = 0;
            while( true ) {
              cVar5 = SBORROW8(unaff_x24,lVar9);
              cVar6 = unaff_x24 - lVar9 < 0;
              if (unaff_x24 == lVar9) break;
              func_0x000107c3a7b8();
              FUN_100067974();
              lVar9 = unaff_x23;
            }
            while (func_0x000107c3a88c(), cVar6 == cVar5) {
              func_0x000107c3a7f0();
              FUN_100067974();
            }
          }
          func_0x000100067d78();
          *(undefined4 *)(unaff_x19 + 1) = extraout_w8;
          if (!(bool)cVar6) {
            return;
          }
          func_0x0001000695e8();
          iVar8 = extraout_w8_00;
          goto LAB_100067840;
        }
      }
    }
    bVar4 = *(byte *)(unaff_x23 + 10);
    if ((uint)bVar4 <= (uint)bVar3) {
LAB_1000677b0:
      in_OV = SBORROW4((uint)bVar4,7);
      in_NG = (int)(bVar4 - 7) < 0;
      in_ZR = bVar4 == 7;
      if ((bool)in_ZR) {
        func_0x000107c3a850();
        FUN_100067664();
        unaff_x21 = (long *)*unaff_x19;
        unaff_x23 = *unaff_x21;
      }
      goto LAB_1000677e8;
    }
    unaff_x20 = (long *)(ulong)(bVar3 + 1);
    FUN_100067c04();
    func_0x000100067c54();
    uVar7 = (ulong)*(byte *)((long)unaff_x20 + 10);
    cVar5 = SBORROW8(uVar7,6);
    cVar6 = (long)(uVar7 - 6) < 0;
    if (6 < uVar7) goto LAB_1000677b0;
    func_0x000100067c60(7);
    uVar10 = extraout_w10_00 & 0xff;
    bVar1 = cVar6 != cVar5;
    in_OV = bVar1 && SBORROW4(uVar10,6);
    in_ZR = bVar1 && uVar10 == 6;
    in_NG = bVar1 && (int)(uVar10 - 6) < 0;
    if ((bVar1 && 5 < uVar10) && (!bVar1 || uVar10 != 6)) goto LAB_1000677b0;
    func_0x000100067c94();
    FUN_1000675f8();
    func_0x000100067ca8();
    func_0x0001000674a4();
    func_0x000100067cc8();
    FUN_100067448();
    func_0x000100067ce4(*unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x20);
    func_0x0001000674a4();
    if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
      func_0x000107c3a814();
      if (unaff_x23 != 0) {
        do {
          func_0x000107c3a894();
          FUN_100067c04();
          func_0x000107c3a830();
          FUN_100067974();
        } while (bVar3 != 0);
      }
      func_0x000100067bfc();
      uVar10 = 1;
      while( true ) {
        uVar2 = uVar10 & 0xff;
        in_OV = SBORROW4(uVar11,uVar2);
        in_NG = (int)(uVar11 - uVar2) < 0;
        in_ZR = uVar11 == uVar2;
        if (uVar11 < uVar2) break;
        func_0x000107c3a7a0();
        FUN_100067974();
        uVar10 = uVar10 + 1;
      }
    }
    func_0x000100067cf0();
    func_0x000100067d00();
  }
  func_0x000100067be8();
  if ((bool)in_ZR || in_NG != in_OV) {
    return;
  }
  iVar8 = extraout_w8_02 + ~extraout_w9_00;
LAB_100067840:
  *(int *)(unaff_x19 + 1) = iVar8;
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 1000678d4; end: 1000678ef;  */

void FUN_1000678d4(void)

{
  return;
}



/* Entry: 1000678f0; end: 10006792f;  */

void FUN_1000678f0(void)

{
  FUN_100067930(1,4);
  FUN_100066da0();
  FUN_100066dc4();
  func_0x000100067944();
  return;
}



/* Entry: 100067930; end: 100067973;  */

void FUN_100067930(void)

{
  return;
}



/* Entry: 100067974; end: 100067997;  */

void FUN_100067974(void)

{
  FUN_100067998();
  FUN_1000679a8();
  FUN_1000679e0();
  return;
}



/* Entry: 100067998; end: 1000679a7;  */

void FUN_100067998(void)

{
  return;
}



/* Entry: 1000679a8; end: 1000679df;  */

long FUN_1000679a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100067930(1,4);
  FUN_100066d9c();
  return param_1 + lVar1;
}



/* Entry: 1000679e0; end: 100067a23;  */

void FUN_1000679e0(long param_1)

{
  undefined8 *unaff_x19;
  uint unaff_w20;
  undefined8 unaff_x21;
  
  *(undefined8 **)(param_1 + (ulong)unaff_w20 * 8) = unaff_x19;
  *(char *)(unaff_x19 + 1) = (char)unaff_w20;
  *unaff_x19 = unaff_x21;
  return;
}



/* Entry: 100067a24; end: 100067b17;  */

void FUN_100067a24(long param_1,int param_2)

{
  uint uVar1;
  int extraout_w8;
  int extraout_w8_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte bVar2;
  long unaff_x22;
  uint uVar3;
  
  FUN_100067b18();
  if (param_2 == 7) {
    uVar3 = 0;
  }
  else if (param_2 == 0) {
    uVar3 = *(byte *)(unaff_x20 + 10) - 1;
  }
  else {
    uVar3 = (uint)(*(byte *)(unaff_x20 + 10) >> 1);
  }
  func_0x000100067b24(uVar3);
  FUN_100067448();
  func_0x000100067b4c();
  uVar3 = (int)unaff_x20 + extraout_w8 * 0x20;
  if ((uint)unaff_x22 < (uint)*(byte *)(unaff_x21 + 10)) {
    FUN_1000695b0();
    FUN_1000675f8();
  }
  func_0x000100067b68(unaff_x21 + unaff_x22 * 0x20);
  func_0x000100067b8c();
  if ((extraout_w8_00 == 0) && (uVar1 = (uint)unaff_x22 + 1, uVar1 < (uVar3 & 0xff))) {
    while (uVar1 < (uVar3 & 0xff)) {
      func_0x000100067bfc();
      func_0x0001000695c4();
      FUN_1000679a8();
      func_0x0001000695d8();
    }
  }
  func_0x000100067ba0();
  func_0x000100067bb0();
  FUN_1000679a8();
  *(long *)(param_1 + unaff_x21 * 8) = unaff_x19;
  if (*(char *)(unaff_x20 + 0xb) == '\0') {
    FUN_100067c04();
    for (bVar2 = 0; bVar2 <= *(byte *)(unaff_x19 + 10); bVar2 = bVar2 + 1) {
      func_0x000107c3a7f8();
      FUN_100067974();
    }
  }
  return;
}



/* Entry: 100067b18; end: 100067c03;  */

void FUN_100067b18(void)

{
  return;
}



/* Entry: 100067c04; end: 100067c3b;  */

long FUN_100067c04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100067930(1,4);
  FUN_100066d9c();
  return param_1 + lVar1;
}



/* Entry: 100067c3c; end: 100067d9b;  */

void FUN_100067c3c(void)

{
  return;
}



/* Entry: 100067d9c; end: 100067dc7;  */

undefined8 FUN_100067d9c(undefined8 param_1)

{
  FUN_100067dc8();
  func_0x000100067e14(param_1);
  return param_1;
}



/* Entry: 100067dc8; end: 100067ddf;  */

void FUN_100067dc8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  uVar2 = *puVar1 & 0xfffffffffffffffe;
  if (uVar2 != 0) {
    func_0x00010bd02384(uVar2 + 8);
  }
  __ZdlPv(uVar2);
  *puVar1 = 0;
  return;
}



/* Entry: 100067de0; end: 100067e6b;  */

void FUN_100067de0(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 100067e6c; end: 100067e97;  */

undefined8 FUN_100067e6c(undefined8 param_1)

{
  FUN_100067dc8();
  FUN_100067e98(param_1);
  return param_1;
}



/* Entry: 100067e98; end: 100067f13;  */

long * FUN_100067e98(long param_1)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_100067de0(param_1 + 0x48);
  FUN_100067de0(param_1 + 0x50);
  FUN_100067de0(param_1 + 0x58);
  FUN_100067f14();
  FUN_100067de0(param_1 + 0x68);
  FUN_100067de0(param_1 + 0x70);
  FUN_100067de0(param_1 + 0x78);
  FUN_100067de0(param_1 + 0x80);
  FUN_100067de0(param_1 + 0x88);
  FUN_100067de0(param_1 + 0x90);
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x000107c31624();
  }
  func_0x000107c60e14();
  FUN_100067f38(param_1 + 0x10);
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return unaff_x19;
}



/* Entry: 100067f14; end: 100067f1b;  */

void FUN_100067f14(void)

{
  ulong uVar1;
  long unaff_x19;
  
  uVar1 = *(ulong *)(unaff_x19 + 0x60) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 100067f1c; end: 100067f37;  */

void FUN_100067f1c(void)

{
  char cVar1;
  long lVar2;
  long *unaff_x19;
  undefined8 *puVar3;
  long lVar4;
  
  FUN_100067f38();
  if (*unaff_x19 == 0) {
    puVar3 = (undefined8 *)unaff_x19[2];
    if ((long)*(short *)((long)unaff_x19 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)unaff_x19 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)unaff_x19 + 10) < 0) {
      if (unaff_x19[2] != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return;
}



/* Entry: 100067f38; end: 100067f43;  */

long FUN_100067f38(long param_1)

{
  long extraout_x8;
  
  FUN_100067f6c(param_1 + 0x20);
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return param_1;
}



/* Entry: 100067f44; end: 100067f6b;  */

void FUN_100067f44(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100067f6c; end: 100067f7f;  */

void FUN_100067f6c(void)

{
  return;
}



/* Entry: 100067f80; end: 10006803b;  */

long * FUN_100067f80(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    puVar3 = (undefined8 *)param_1[2];
    if ((long)*(short *)((long)param_1 + 10) < 0) {
      lVar4 = puVar3[1];
      lVar2 = *(long *)*puVar3;
      cVar1 = *(char *)(lVar4 + 10);
      while (lVar2 != lVar4 || cVar1 != '\0') {
        func_0x000107c30280(lVar2 + 0x18);
        func_0x000107c398e8();
      }
    }
    else {
      for (lVar4 = (long)*(short *)((long)param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c30280(puVar3 + 1);
        puVar3 = puVar3 + 4;
      }
    }
    if (*(short *)((long)param_1 + 10) < 0) {
      if (param_1[2] != 0) {
        func_0x000107c302a0();
      }
      func_0x000107c60e14();
    }
    else {
      func_0x000107c60e10();
    }
  }
  return param_1;
}



/* Entry: 10006803c; end: 10006805b;  */

void FUN_10006803c(void)

{
  return;
}



/* Entry: 10006805c; end: 100068087;  */

void FUN_10006805c(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010006804c();
  if (in_NG == in_OV) {
    FUN_1002a998c();
  }
  return;
}



/* Entry: 100068088; end: 1000680db;  */

long FUN_100068088(long param_1)

{
  FUN_10006805c(param_1 + 0x90);
  FUN_10006805c(param_1 + 0x80);
  FUN_1000680e4(param_1 + 0x68);
  FUN_10006810c(param_1 + 0x50);
  FUN_100068134(param_1 + 0x38);
  FUN_10006815c(param_1 + 0x20);
  FUN_1000682a4(param_1 + 8);
  return param_1;
}



/* Entry: 1000680dc; end: 1000680e3;  */

void FUN_1000680dc(void)

{
  return;
}



/* Entry: 1000680e4; end: 10006810b;  */

void FUN_1000680e4(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 10006810c; end: 100068133;  */

void FUN_10006810c(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100068134; end: 10006815b;  */

void FUN_100068134(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 10006815c; end: 100068183;  */

void FUN_10006815c(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100068184; end: 10006819f;  */

void FUN_100068184(void)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong uVar3;
  
  if (unaff_x19[2] == 0) {
    puVar2 = unaff_x19;
    func_0x00010006818c();
    puVar1 = unaff_x19;
    if ((*unaff_x19 & 1) != 0) {
      puVar1 = (ulong *)(*unaff_x19 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if ((long *)*puVar1 != (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 8))();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*unaff_x19 & 1) != 0) {
      func_0x000107c60e14(*unaff_x19 - 1);
    }
  }
  *unaff_x19 = 0;
  return;
}



/* Entry: 1000681a0; end: 10006821f;  */

void FUN_1000681a0(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_1[2] == 0) {
    puVar2 = param_1;
    func_0x00010006818c();
    puVar1 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar1 = (ulong *)(*param_1 + 7);
    }
    for (uVar3 = (ulong)((uint)puVar2 & ((int)(uint)puVar2 >> 0x1f ^ 0xffffffffU)); uVar3 != 0;
        uVar3 = uVar3 - 1) {
      if ((long *)*puVar1 != (long *)0x0) {
        (**(code **)(*(long *)*puVar1 + 8))();
      }
      puVar1 = puVar1 + 1;
    }
    if ((*param_1 & 1) != 0) {
      func_0x000107c60e14(*param_1 - 1);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 100068220; end: 10006828f;  */

long FUN_100068220(long param_1)

{
  FUN_100067dc8();
  FUN_100067de0(param_1 + 0xd8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    func_0x000107c315f8();
  }
  func_0x000107c60e14();
  FUN_1000682a4(param_1 + 0xc0);
  FUN_1000682dc(param_1 + 0xa8);
  FUN_100068304(param_1 + 0x90);
  FUN_10006832c();
  FUN_100068334(param_1 + 0x60);
  FUN_10006835c();
  func_0x00010006847c();
  FUN_1000680e4(param_1 + 0x18);
  return param_1;
}



/* Entry: 100068290; end: 1000682a3;  */

void FUN_100068290(void)

{
  FUN_100068220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1000682a4; end: 1000682d3;  */

long * FUN_1000682a4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100069100(param_1);
  }
  return param_1;
}



/* Entry: 1000682d4; end: 1000682db;  */

void FUN_1000682d4(void)

{
  return;
}



/* Entry: 1000682dc; end: 100068303;  */

void FUN_1000682dc(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100068304; end: 10006832b;  */

void FUN_100068304(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 10006832c; end: 100068333;  */

void FUN_10006832c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  FUN_100067f6c(unaff_x19 + 0x78);
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100068334; end: 10006835b;  */

void FUN_100068334(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 10006835c; end: 10006836f;  */

void FUN_10006835c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  FUN_100067f6c(unaff_x19 + 0x48);
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100068370; end: 1000683bb;  */

long FUN_100068370(long param_1)

{
  FUN_100067dc8();
  FUN_100067f14();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x000107c31610();
  }
  func_0x000107c60e14();
  FUN_1000683d0();
  FUN_1000683d8(param_1 + 0x30);
  FUN_100068400(param_1 + 0x18);
  return param_1;
}



/* Entry: 1000683bc; end: 1000683cf;  */

void FUN_1000683bc(void)

{
  FUN_100068370();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1000683d0; end: 1000683d7;  */

long * FUN_1000683d0(void)

{
  long *plVar1;
  long unaff_x19;
  
  plVar1 = (long *)(unaff_x19 + 0x48);
  if (*plVar1 != 0) {
    FUN_100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 1000683d8; end: 1000683ff;  */

void FUN_1000683d8(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100068400; end: 100068427;  */

void FUN_100068400(void)

{
  long extraout_x8;
  
  FUN_100067f6c();
  if (extraout_x8 != 0) {
    FUN_100068184();
  }
  return;
}



/* Entry: 100068428; end: 10006845f;  */

long FUN_100068428(long param_1)

{
  FUN_100067dc8();
  FUN_100068474();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c31618();
  }
  func_0x000107c60e14();
  return param_1;
}



/* Entry: 100068460; end: 100068473;  */

void FUN_100068460(void)

{
  FUN_100068428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100068474; end: 100068483;  */

void FUN_100068474(void)

{
  ulong uVar1;
  long unaff_x19;
  
  uVar1 = *(ulong *)(unaff_x19 + 0x18) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 100068484; end: 1000684d3;  */

long FUN_100068484(long param_1)

{
  FUN_100067dc8();
  FUN_100068474();
  FUN_1000684e8();
  FUN_100067de0(param_1 + 0x28);
  func_0x0001000684f0();
  FUN_100067de0(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c31600();
  }
  func_0x000107c60e14();
  return param_1;
}



/* Entry: 1000684d4; end: 1000684e7;  */

void FUN_1000684d4(void)

{
  FUN_100068484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1000684e8; end: 1000684f7;  */

void FUN_1000684e8(void)

{
  ulong uVar1;
  long unaff_x19;
  
  uVar1 = *(ulong *)(unaff_x19 + 0x20) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 1000684f8; end: 10006852f;  */

long FUN_1000684f8(long param_1)

{
  FUN_100067dc8();
  FUN_100068474();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107c31608();
  }
  func_0x000107c60e14();
  return param_1;
}



/* Entry: 100068530; end: 100068543;  */

void FUN_100068530(void)

{
  FUN_1000684f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100068544; end: 10006856b;  */

void FUN_100068544(long param_1)

{
  FUN_10006856c();
  if (param_1 != 0) {
    func_0x000100061898();
  }
  return;
}



/* Entry: 10006856c; end: 10006857f;  */

undefined8 FUN_10006856c(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 100068580; end: 10006864f;  */

undefined8 * FUN_100068580(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000113847370 & 1) == 0) {
    iVar1 = 0x13847370;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x90;
      func_0x000107c60e20();
      *puVar2 = &PTR_DAT_110d9d298;
      puVar2[1] = &UNK_10e52b660;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = &PTR_DAT_110d9cda0;
      puVar2[6] = 0;
      puVar2[8] = &UNK_10e52b660;
      puVar2[10] = 0;
      puVar2[9] = 0;
      puVar2[0xc] = 0;
      puVar2[0xb] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = &UNK_10e52b660;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0xf] = 0;
      *(undefined1 *)(puVar2 + 7) = 1;
      FUN_100061470(&UNK_10bd2bc18,puVar2);
      puRam0000000113847368 = puVar2;
      func_0x000107c60e4c(0x113847370);
    }
  }
  return puRam0000000113847368;
}



/* Entry: 100068650; end: 1000687e3;  */

void FUN_100068650(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  uint6 uVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined8 uVar16;
  byte bVar22;
  undefined1 auStack_90 [16];
  
  uVar2 = param_1;
  FUN_100068580();
  puVar10 = (ulong *)(uVar2 + 8);
  Hint_Prefetch(*puVar10,0,2,0);
  uVar3 = param_1;
  FUN_1000687ec(*puVar10);
  lVar13 = 0;
  uVar8 = *puVar10;
  uVar9 = *(ulong *)(uVar2 + 0x18);
  uVar5 = uVar8 >> 0xc ^ uVar3 >> 7;
  bVar1 = (byte)uVar3;
  uVar15 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  do {
    uVar5 = uVar5 & uVar9;
    uVar16 = *(undefined8 *)(uVar8 + uVar5);
    cVar17 = (char)((ulong)uVar16 >> 8);
    cVar18 = (char)((ulong)uVar16 >> 0x10);
    cVar19 = (char)((ulong)uVar16 >> 0x18);
    cVar20 = (char)((ulong)uVar16 >> 0x20);
    cVar21 = (char)((ulong)uVar16 >> 0x28);
    bVar14 = (byte)((ulong)uVar16 >> 0x30);
    bVar22 = (byte)((ulong)uVar16 >> 0x38);
    for (uVar7 = CONCAT17(-(bVar22 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar14 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar21 == (char)(uVar15 >> 0x28)),
                                            CONCAT14(-(cVar20 == (char)(uVar15 >> 0x20)),
                                                     CONCAT13(-(cVar19 == (char)(uVar15 >> 0x18)),
                                                              CONCAT12(-(cVar18 ==
                                                                        (char)(uVar15 >> 0x10)),
                                                                       CONCAT11(-(cVar17 ==
                                                                                 (char)(uVar15 >> 8)
                                                                                 ),-((char)uVar16 ==
                                                                                    (char)uVar15))))
                                                    )))) & 0x8080808080808080; uVar7 != 0;
        uVar7 = uVar7 - 1 & uVar7) {
      uVar6 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = *(ulong *)(*(long *)(uVar2 + 0x10) +
                        (uVar5 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & uVar9) * 8);
      if (uVar6 == param_1) {
LAB_10006877c:
        func_0x000107c3a910();
        func_0x000107c2b93c();
        func_0x000107c303f8(auStack_90,&UNK_10f836050);
        func_0x000107c303fc();
        func_0x000107c3a8f4();
        return;
      }
      uVar11 = *(ulong *)(uVar6 + 0x10);
      uVar6 = uVar11;
      func_0x000107c613d0(uVar11);
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = uVar12;
      func_0x000107c613d0(uVar12);
      FUN_1000633dc(uVar11,uVar6,uVar12,uVar4);
      if ((uVar11 & 1) != 0) goto LAB_10006877c;
    }
    bVar14 = NEON_umaxv(CONCAT17(-(bVar22 == 0x80),
                                 CONCAT16(-(bVar14 == 0x80),
                                          CONCAT15(-(cVar21 == -0x80),
                                                   CONCAT14(-(cVar20 == -0x80),
                                                            CONCAT13(-(cVar19 == -0x80),
                                                                     CONCAT12(-(cVar18 == -0x80),
                                                                              CONCAT11(-(cVar17 ==
                                                                                        -0x80),-((
                                                  char)uVar16 == -0x80)))))))),1);
    if ((bVar14 & 1) != 0) {
      FUN_100068864(puVar10,uVar3);
      *(ulong *)(*(long *)(uVar2 + 0x10) + (long)puVar10 * 8) = param_1;
      return;
    }
    lVar13 = lVar13 + 8;
    uVar5 = lVar13 + uVar5;
  } while( true );
}



/* Entry: 1000687e4; end: 1000687eb;  */

void FUN_1000687e4(void)

{
  return;
}



/* Entry: 1000687ec; end: 100068837;  */

void FUN_1000687ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = uVar1;
  func_0x000107c613d0();
  uStack_18 = uVar1;
  func_0x00010006881c(&uStack_20);
  return;
}



/* Entry: 100068838; end: 100068863;  */

undefined1 * FUN_100068838(void)

{
  return &stack0x00000008;
}



/* Entry: 100068864; end: 1000688fb;  */

void FUN_100068864(long param_1)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *unaff_x19;
  
  FUN_1000688fc();
  FUN_100061de0();
  lVar2 = *unaff_x19;
  if ((*(long *)(lVar2 + -8) == 0) && (in_ZR = *(char *)(lVar2 + param_1) == -2, !(bool)in_ZR)) {
    bVar1 = 8 < (ulong)unaff_x19[2];
    in_ZR = unaff_x19[2] == 9;
    if ((bVar1) && (func_0x000107c3a91c(), bVar1)) {
      func_0x000107c2b958();
    }
    else {
      FUN_100068968();
    }
    func_0x000100068a04();
    lVar2 = *unaff_x19;
  }
  func_0x000100068a10(lVar2);
  func_0x000100068a58(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1000688fc; end: 100068913;  */

void FUN_1000688fc(void)

{
  return;
}



/* Entry: 100068914; end: 100068967;  */

void FUN_100068914(long *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  uVar2 = param_1[2] + 0x17U & 0xfffffffffffffff8;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + param_1[2] * 8);
  *param_1 = (long)(puVar1 + 8);
  param_1[1] = (long)(puVar1 + uVar2);
  FUN_1000631d0(param_1,8);
  return;
}



/* Entry: 100068968; end: 1000689ef;  */

void FUN_100068968(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_1;
  plVar4 = (long *)param_1[1];
  lVar5 = param_1[2];
  param_1[2] = param_2;
  FUN_100068914();
  lVar7 = param_1[1];
  for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
    if (-1 < *(char *)(lVar1 + lVar6)) {
      lVar2 = *plVar4;
      FUN_1000687ec();
      lVar3 = lVar2;
      func_0x000100068a04();
      FUN_100068de4((uint)lVar2 & 0x7f);
      *(long *)(lVar7 + lVar3 * 8) = *plVar4;
    }
    plVar4 = plVar4 + 1;
  }
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1000689f0; end: 100068a77;  */

void FUN_1000689f0(void)

{
  return;
}



/* Entry: 100068a78; end: 100068ab3;  */

void FUN_100068a78(void)

{
  func_0x000107c60e34(&UNK_10bcd3cf4,0x113847218,0x100000000);
  uRam0000000113847228 = 0;
  uRam0000000113847230 = 0;
  return;
}



/* Entry: 100068ab4; end: 100068b7b;  */

void FUN_100068ab4(void)

{
  uRam0000000113847238 = 0;
  uRam0000000113847240 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_atexit_11034bd48)(&UNK_10bcd3a90,0x113847238,0x100000000);
  return;
}



/* Entry: 100068b7c; end: 100068c0f;  */

byte * FUN_100068b7c(byte *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5,
                    undefined8 param_6,code *UNRECOVERED_JUMPTABLE_00)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  short *unaff_x19;
  byte *unaff_x20;
  ulong uVar4;
  
  func_0x000100063acc();
  uVar2 = 0;
  if ((param_4 & 0xffff) == 0) {
    FUN_100063b70();
    if ((param_4 & 1) != 0) {
      func_0x000107c39b7c();
    }
    if (param_4 == 0) {
      param_1 = param_2 + 2;
      func_0x000100063b88();
    }
    else {
      func_0x000107c39b5c();
    }
    if (param_1 != (byte *)0x0) {
      pbVar3 = param_1;
      func_0x000100063e28();
      if (!(bool)uVar2) {
        func_0x000100063e34();
                    /* WARNING: Could not recover jumptable at 0x000100063e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return param_1;
      }
      if (*unaff_x19 != 0) {
        func_0x0001000644fc();
      }
      return pbVar3;
    }
    func_0x000107c39a00();
DAT_10b4c5d10:
    if (*param_5 != 0) {
      func_0x000107c39bb4();
    }
    return (byte *)0x0;
  }
  func_0x000107c399e0();
  func_0x000100064c34();
  uVar4 = (ulong)*param_2;
  if ((char)*param_2 < '\0') {
    bVar1 = param_2[1];
    if ((char)bVar1 < '\0') {
      uVar4 = (uVar4 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
      bVar1 = param_2[2];
      if ((char)bVar1 < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            func_0x000100064e38(param_1);
            goto DAT_10b4c5d10;
          }
          func_0x000107c39ba4();
          uVar4 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
        }
        else {
          uVar4 = (uVar4 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
        }
      }
      else {
        uVar4 = uVar4 >> 0x32 | (ulong)bVar1 << 0xe;
      }
    }
    else {
      uVar4 = uVar4 & 0x7f | (ulong)bVar1 << 7;
    }
  }
  pbVar3 = unaff_x20;
  FUN_100064d5c(unaff_x20,uVar4 >> 3 & 0x1fffffff);
  if (pbVar3 == (byte *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x30);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)*(ushort *)(pbVar3 + 10) & 0xf];
  }
  func_0x000100064e2c();
  func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return pbVar3;
}



/* Entry: 100068c10; end: 100068c53;  */

uint FUN_100068c10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  char in_NG;
  char in_OV;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x11;
  
  FUN_100068c54();
  uVar1 = extraout_x11;
  uVar4 = extraout_x8;
  if (in_NG == in_OV) {
    uVar1 = extraout_x9;
    uVar4 = param_1;
  }
  uVar2 = *(ulong *)(param_2 + 0x10);
  plVar3 = (long *)*(long *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x1f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x1f);
    plVar3 = (long *)(param_2 + 8);
  }
  FUN_10006725c(uVar4,uVar1,plVar3,uVar2);
  return (uint)uVar4 >> 7 & 1;
}


