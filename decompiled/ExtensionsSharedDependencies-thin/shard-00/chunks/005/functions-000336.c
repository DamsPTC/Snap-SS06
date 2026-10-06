/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00684148; end: 0068417f;  */

long FUN_00684148(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00685388(1,4);
  FUN_00683aec();
  return param_1 + lVar1;
}



/* Entry: 00684180; end: 006841e3;  */

void FUN_00684180(undefined8 param_1,long param_2)

{
  for (param_2 = param_2 * -0x28; param_2 != 0; param_2 = param_2 + 0x28) {
    func_0x0068519c();
    FUN_00683f54();
  }
  return;
}



/* Entry: 006841e4; end: 00684217;  */

undefined1  [16] FUN_006841e4(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_2;
  do {
    if ((uint)uVar1 != (uint)*(byte *)((long)param_1 + 10)) goto LAB_00684208;
    uVar1 = (ulong)*(byte *)(param_1 + 1);
    param_1 = (long *)*param_1;
  } while (*(char *)((long)param_1 + 0xb) == '\0');
  param_1 = (long *)0x0;
LAB_00684208:
  auVar2._8_8_ = param_2 & 0xffffffff00000000 | uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 00684218; end: 00684327;  */

uint FUN_00684218(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  
  FUN_00684328(auStack_50,*(undefined8 *)*param_1,param_2);
  uVar4 = *(undefined8 *)*param_1;
  FUN_00684328(auStack_70,uVar4,param_3);
  puVar3 = auStack_50;
  func_0x00685414();
  puStack_88 = puVar3;
  uStack_80 = uVar4;
  func_0x00685414(auStack_70);
  uVar5 = (uint)&puStack_88;
  func_0x006855f0();
  if (uVar5 == 0) {
    cVar1 = SBORROW8(lStack_48,lStack_68);
    cVar2 = lStack_48 - lStack_68 < 0;
    if (lStack_48 == lStack_68) {
      func_0x00466818(uStack_40,uStack_38,uStack_60,uStack_58);
      func_0x00685698();
      uVar5 = (uint)(cVar2 != cVar1);
    }
    else {
      FUN_00681c0c(&puStack_88,param_2,*(undefined8 *)*param_1);
      FUN_00681c0c(auStack_a0,param_3,*(undefined8 *)*param_1);
      func_0x004278bc(&puStack_88,auStack_a0);
      func_0x00685698();
      uVar5 = (uint)(cVar2 != cVar1);
      func_0x00685668();
      func_0x006851b8();
    }
  }
  else {
    uVar5 = uVar5 >> 0x1f;
  }
  return uVar5;
}



/* Entry: 00684328; end: 00684377;  */

void FUN_00684328(undefined8 *param_1,long param_2,uint *param_3)

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
  FUN_006827e4();
  if (param_2 == 0) {
    func_0x00685148();
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
    func_0x00685148();
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



/* Entry: 00684378; end: 006844fb;  */

void FUN_00684378(ulong *param_1,ulong param_2,uint param_3,undefined4 *param_4)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  byte bStack0000000000000008;
  
  func_0x00685710();
  bStack0000000000000008 = (byte)param_3;
  bVar3 = *(byte *)(param_2 + 0xb);
  if (bVar3 == 0) {
    FUN_006844fc();
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
      FUN_00684818();
      FUN_00684858();
      *(undefined1 *)(uVar1 + 10) = *(undefined1 *)(param_2 + 10);
      *(undefined1 *)(param_2 + 10) = 0;
      FUN_00682b6c(param_2);
      param_1[2] = uVar1;
      *param_1 = uVar1;
      param_2 = uVar1;
    }
    else {
      FUN_006845a8(param_1);
      param_3 = (uint)bStack0000000000000008;
    }
  }
  uVar2 = param_3 & 0xff;
  if ((param_3 & 0xff) < (uint)*(byte *)(param_2 + 10)) {
    FUN_00684a24(param_2,*(byte *)(param_2 + 10) - uVar2,uVar2 + 1,(ulong)uVar2,param_2);
  }
  lVar4 = param_2 + (ulong)uVar2 * 0x20;
  *(undefined4 *)(lVar4 + 0x10) = *param_4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(lVar4 + 0x18,param_4 + 2)
  ;
  bVar3 = *(char *)(param_2 + 10) + 1;
  *(byte *)(param_2 + 10) = bVar3;
  if ((*(char *)(param_2 + 0xb) == '\0') && (uVar2 + 1 < (uint)bVar3)) {
    while (uVar2 + 1 < (uint)bVar3) {
      uVar1 = param_2;
      FUN_00682cd4();
      lVar4 = *(long *)(uVar1 + (ulong)(byte)(bVar3 - 1) * 8);
      uVar1 = param_2;
      FUN_006849ec();
      *(long *)(uVar1 + (ulong)bVar3 * 8) = lVar4;
      *(byte *)(lVar4 + 8) = bVar3;
      bVar3 = bVar3 - 1;
    }
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 006844fc; end: 006845a7;  */

void FUN_006844fc(long *param_1)

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
  
  func_0x006853dc();
  uVar6 = *(uint *)(unaff_x19 + 1);
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    uVar2 = uVar6 - 1;
    *(uint *)(unaff_x19 + 1) = uVar2;
    if (0 < (int)uVar6) {
      return;
    }
    uVar6 = uVar2;
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      func_0x0068557c();
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
      func_0x0068531c();
      iVar4 = extraout_w8_00;
      goto LAB_00684594;
    }
  }
  FUN_00682cd4();
  param_1 = param_1 + (uVar6 & 0xff);
  while( true ) {
    lVar3 = *param_1;
    func_0x006856a4();
    bVar1 = *(byte *)(lVar3 + 10);
    if (extraout_w8 != 0) break;
    FUN_00682cd4();
    param_1 = (long *)(lVar3 + (ulong)bVar1 * 8);
  }
  iVar4 = bVar1 - 1;
LAB_00684594:
  *(int *)(unaff_x19 + 1) = iVar4;
  return;
}



/* Entry: 006845a8; end: 00684817;  */

void FUN_006845a8(void)

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
  
  func_0x00685710();
  func_0x00685018();
  if ((bool)in_ZR) {
    FUN_00684894(0);
    func_0x0068556c();
    FUN_006848d4();
    *unaff_x22 = unaff_x23;
    unaff_x21 = (long *)*unaff_x19;
LAB_0068472c:
    func_0x006854ec();
    if (extraout_w8_01 == 0) {
      unaff_x20 = (long *)(ulong)((uint)unaff_x21 & 0xff);
      FUN_00684894(unaff_x20,unaff_x23);
      func_0x00684f90();
      FUN_006848f8();
    }
    else {
      FUN_00682c70(7);
      FUN_00684840();
      func_0x00684ef4();
      FUN_006848f8();
      func_0x0068550c();
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
      FUN_00682cd4();
      func_0x00685408();
      if (*(byte *)((long)unaff_x20 + 10) < 7) {
        func_0x00685130();
        cVar6 = uVar11 > extraout_w10 && (int)((extraout_w9 & 0xff) - 6) < 0;
        if (uVar11 <= extraout_w10 || (extraout_w9 & 0xff) < 7) {
          func_0x0068532c(unaff_x20 + extraout_x8 * 4);
          FUN_00684890();
          func_0x00684f4c();
          FUN_00684858();
          func_0x0068532c(*unaff_x20 + (ulong)*(byte *)(unaff_x20 + 1) * 0x20);
          FUN_00684890();
          func_0x00684fe0();
          FUN_00684858();
          if (*(char *)((long)unaff_x20 + 0xb) == '\0') {
            func_0x006851a8();
            lVar9 = 0;
            while( true ) {
              cVar5 = SBORROW8(unaff_x24,lVar9);
              cVar6 = unaff_x24 - lVar9 < 0;
              if (unaff_x24 == lVar9) break;
              func_0x00684fa8();
              FUN_006848d4();
              lVar9 = unaff_x23;
            }
            while (func_0x006854ac(), cVar6 == cVar5) {
              func_0x00685110();
              FUN_006848d4();
            }
          }
          func_0x00684f18();
          *(undefined4 *)(unaff_x19 + 1) = extraout_w8;
          if (!(bool)cVar6) {
            return;
          }
          func_0x0068552c();
          iVar8 = extraout_w8_00;
          goto LAB_00684784;
        }
      }
    }
    bVar4 = *(byte *)(unaff_x23 + 10);
    if ((uint)bVar4 <= (uint)bVar3) {
LAB_006846f4:
      in_OV = SBORROW4((uint)bVar4,7);
      in_NG = (int)(bVar4 - 7) < 0;
      in_ZR = bVar4 == 7;
      if ((bool)in_ZR) {
        func_0x006852e0();
        FUN_006845a8();
        unaff_x21 = (long *)*unaff_x19;
        unaff_x23 = *unaff_x21;
      }
      goto LAB_0068472c;
    }
    unaff_x20 = (long *)(ulong)(bVar3 + 1);
    FUN_00682cd4();
    func_0x00685408();
    uVar7 = (ulong)*(byte *)((long)unaff_x20 + 10);
    cVar5 = SBORROW8(uVar7,6);
    cVar6 = (long)(uVar7 - 6) < 0;
    if (6 < uVar7) goto LAB_006846f4;
    func_0x00684dc8(7);
    uVar10 = extraout_w10_00 & 0xff;
    bVar1 = cVar6 != cVar5;
    in_OV = bVar1 && SBORROW4(uVar10,6);
    in_ZR = bVar1 && uVar10 == 6;
    in_NG = bVar1 && (int)(uVar10 - 6) < 0;
    if ((bVar1 && 5 < uVar10) && (!bVar1 || uVar10 != 6)) goto LAB_006846f4;
    func_0x006852f4();
    FUN_00684a24();
    func_0x006853bc();
    FUN_00684890();
    func_0x00684fc4();
    FUN_00684858();
    func_0x0068532c(*unaff_x21 + (ulong)*(byte *)(unaff_x21 + 1) * 0x20);
    FUN_00684890();
    if (*(char *)((long)unaff_x21 + 0xb) == '\0') {
      func_0x00685360();
      if (unaff_x23 != 0) {
        do {
          func_0x006854fc();
          FUN_00682cd4();
          func_0x0068529c();
          FUN_006848d4();
        } while (bVar3 != 0);
      }
      func_0x006851a8();
      uVar10 = 1;
      while( true ) {
        uVar2 = uVar10 & 0xff;
        in_OV = SBORROW4(uVar11,uVar2);
        in_NG = (int)(uVar11 - uVar2) < 0;
        in_ZR = uVar11 == uVar2;
        if (uVar11 < uVar2) break;
        func_0x00684e98();
        FUN_006848d4();
        uVar10 = uVar10 + 1;
      }
    }
    func_0x00684f80();
    func_0x0068554c();
  }
  func_0x006852c4();
  if ((bool)in_ZR || in_NG != in_OV) {
    return;
  }
  iVar8 = extraout_w8_02 + ~extraout_w9_00;
LAB_00684784:
  *(int *)(unaff_x19 + 1) = iVar8;
  *unaff_x19 = (ulong)unaff_x20;
  return;
}



/* Entry: 00684818; end: 0068483f;  */

void FUN_00684818(undefined4 param_1)

{
  FUN_00682c70(param_1);
  FUN_00684840();
  func_0x00685374();
  return;
}



/* Entry: 00684840; end: 00684857;  */

void FUN_00684840(void)

{
  func_0x0068506c();
  return;
}



/* Entry: 00684858; end: 0068488f;  */

void FUN_00684858(void)

{
  long unaff_x21;
  
  func_0x00685588();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + -0x20) {
    func_0x0068519c();
    FUN_00684890();
  }
  return;
}



/* Entry: 00684890; end: 00684893;  */

void FUN_00684890(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_2 + 2);
  return;
}



/* Entry: 00684894; end: 006848d3;  */

void FUN_00684894(void)

{
  func_0x00684e08(1,4);
  FUN_00682cac();
  FUN_00684840();
  func_0x00685244();
  return;
}



/* Entry: 006848d4; end: 006848f7;  */

void FUN_006848d4(void)

{
  func_0x0068551c();
  FUN_006849ec();
  func_0x006854cc();
  return;
}



/* Entry: 006848f8; end: 006849eb;  */

void FUN_006848f8(long param_1,int param_2)

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
  
  func_0x006856b0();
  if (param_2 == 7) {
    uVar3 = 0;
  }
  else if (param_2 == 0) {
    uVar3 = *(byte *)(unaff_x20 + 10) - 1;
  }
  else {
    uVar3 = (uint)(*(byte *)(unaff_x20 + 10) >> 1);
  }
  func_0x00684e1c(uVar3);
  FUN_00684858();
  func_0x00684ffc();
  uVar3 = (int)unaff_x20 + extraout_w8 * 0x20;
  if ((uint)unaff_x22 < (uint)*(byte *)(unaff_x21 + 10)) {
    func_0x00685208();
    FUN_00684a24();
  }
  func_0x00684e44(unaff_x21 + unaff_x22 * 0x20);
  func_0x0068521c();
  if ((extraout_w8_00 == 0) && (uVar1 = (uint)unaff_x22 + 1, uVar1 < (uVar3 & 0xff))) {
    while (uVar1 < (uVar3 & 0xff)) {
      func_0x006851a8();
      func_0x006851f4();
      FUN_006849ec();
      func_0x0068548c();
    }
  }
  func_0x006853f8();
  func_0x00685308();
  FUN_006849ec();
  *(long *)(param_1 + unaff_x21 * 8) = unaff_x19;
  if (*(char *)(unaff_x20 + 0xb) == '\0') {
    FUN_00682cd4();
    for (bVar2 = 0; bVar2 <= *(byte *)(unaff_x19 + 10); bVar2 = bVar2 + 1) {
      func_0x00685088();
      FUN_006848d4();
    }
  }
  return;
}



/* Entry: 006849ec; end: 00684a23;  */

long FUN_006849ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00684e08(1,4);
  FUN_00682cd0();
  return param_1 + lVar1;
}



/* Entry: 00684a24; end: 00684a5b;  */

void FUN_00684a24(void)

{
  long unaff_x21;
  
  func_0x006851cc();
  for (; unaff_x21 != 0; unaff_x21 = unaff_x21 + 0x20) {
    func_0x0068519c();
    FUN_00684890();
  }
  return;
}



/* Entry: 00684a5c; end: 00684ad3;  */

void FUN_00684a5c(long *param_1)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  int extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 uVar1;
  undefined8 extraout_x8_00;
  long unaff_x19;
  int unaff_w20;
  
  func_0x00685338();
  if (extraout_w8 != 0) {
    func_0x00685264();
    if (in_NG != in_OV) {
      return;
    }
    if (*(char *)((long)param_1 + 0xb) != '\0') {
      func_0x0068557c();
      uVar1 = extraout_x8;
      while( true ) {
        if (unaff_w20 != (int)uVar1) {
          return;
        }
        if (*(char *)(*param_1 + 0xb) != '\0') break;
        func_0x006850f8();
        uVar1 = extraout_x8_00;
      }
      func_0x0068531c();
      *(undefined4 *)(unaff_x19 + 8) = extraout_w8_01;
      return;
    }
  }
  FUN_00682cd4();
  func_0x006854dc();
  while (func_0x006856a4(), extraout_w8_00 == 0) {
    func_0x00682c94();
  }
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 00684ad4; end: 00684adf;  */

long FUN_00684ad4(long param_1)

{
  func_0x0068507c();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00682d30(param_1);
  }
  return param_1;
}



/* Entry: 00684ae0; end: 00684ba3;  */

long FUN_00684ae0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00682d30(param_1);
  }
  return param_1;
}



/* Entry: 00684ba4; end: 00684baf;  */

long FUN_00684ba4(long param_1)

{
  func_0x0068507c();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00682ac4(param_1);
  }
  return param_1;
}



/* Entry: 00684bb0; end: 00684bfb;  */

long FUN_00684bb0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00682ac4(param_1);
  }
  return param_1;
}



/* Entry: 00684bfc; end: 00684c07;  */

long FUN_00684bfc(long param_1)

{
  func_0x0068507c();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00684c34(param_1);
  }
  return param_1;
}



/* Entry: 00684c08; end: 00684c67;  */

long FUN_00684c08(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00684c34(param_1);
  }
  return param_1;
}



/* Entry: 00684c68; end: 00684ca7;  */

void FUN_00684c68(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar2 + -0x20);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 00684ca8; end: 00684da3;  */

void FUN_00684ca8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x006851c0();
  func_0x00685258();
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 00684da4; end: 00685727;  */

void FUN_00684da4(void)

{
  return;
}



/* Entry: 00685728; end: 0068598b;  */

void FUN_00685728(long param_1,int param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int iVar5;
  uint extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar9 = *(ulong *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(lVar11 + 0x80);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(uVar9 & 0xfffffffffffffffe);
  }
  iVar5 = 0;
  for (iVar6 = 0; iVar6 < *(int *)(lVar8 + 0x7c); iVar6 = iVar6 + 1) {
    *(undefined4 *)(param_1 + (iVar5 + *(int *)(lVar11 + 8))) = 0;
    iVar5 = iVar5 + 4;
  }
  if (*(int *)(lVar11 + 0xc) != -1) {
    puVar1 = (ulong *)(param_1 + *(int *)(lVar11 + 0xc));
    *puVar1 = uVar9;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
  }
  lVar10 = 0;
  lVar11 = 0;
  do {
    if (*(int *)(lVar8 + 4) <= lVar11) {
      return;
    }
    lVar12 = *(long *)(lVar8 + 0x38);
    iVar6 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + lVar11 * 4);
    uVar3 = lVar12 + lVar10;
    FUN_0068598c();
    if ((uVar3 & 1) == 0) {
      iVar5 = (int)lVar12 + (int)lVar10;
      FUN_00656c60();
      if (iVar5 - 1U < 10) {
        puVar2 = (undefined8 *)(param_1 + iVar6);
        switch(iVar5) {
        default:
          func_0x006867e4();
          if ((extraout_w9 >> 5 & 1) != 0) goto code_r0x006858bc;
          uVar4 = *(undefined4 *)(extraout_x8 + 0x50);
code_r0x0068588c:
          *(undefined4 *)puVar2 = uVar4;
          break;
        case 2:
        case 4:
          func_0x006867e4();
          if ((extraout_w9_00 >> 5 & 1) != 0) goto code_r0x006858bc;
          *puVar2 = *(undefined8 *)(extraout_x8_00 + 0x50);
          break;
        case 5:
          func_0x006867e4();
          if ((extraout_w9_01 >> 5 & 1) != 0) goto code_r0x006858bc;
          *puVar2 = *(undefined8 *)(extraout_x8_01 + 0x50);
          break;
        case 6:
          func_0x006867e4();
          if ((extraout_w9_02 >> 5 & 1) != 0) goto code_r0x006858bc;
          *(undefined4 *)puVar2 = *(undefined4 *)(extraout_x8_02 + 0x50);
          break;
        case 7:
          func_0x006867e4();
          if ((extraout_w9_03 >> 5 & 1) != 0) goto code_r0x006858bc;
          *(undefined1 *)puVar2 = *(undefined1 *)(extraout_x8_03 + 0x50);
          break;
        case 8:
          if ((*(byte *)(lVar12 + lVar10 + 1) >> 5 & 1) == 0) {
            lVar12 = lVar12 + lVar10;
            FUN_00656c80();
            uVar4 = *(undefined4 *)(lVar12 + 4);
            goto code_r0x0068588c;
          }
code_r0x006858bc:
          *puVar2 = 0;
          puVar2[1] = uVar9;
          break;
        case 9:
          if ((*(byte *)(lVar12 + lVar10 + 1) >> 5 & 1) == 0) {
            *puVar2 = &DAT_00b69408;
          }
          else {
code_r0x0068591c:
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = uVar9;
          }
          break;
        case 10:
          if ((*(byte *)(lVar12 + lVar10 + 1) >> 5 & 1) == 0) {
            *puVar2 = 0;
          }
          else {
            iVar6 = (int)lVar12 + (int)lVar10;
            func_0x006595dc();
            if (iVar6 == 0) goto code_r0x0068591c;
            plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
            lVar12 = lVar12 + lVar10;
            FUN_00656024(lVar12);
            if (param_2 == 0) {
              FUN_006859a8(plVar7,lVar12);
            }
            else {
              (**(code **)(*plVar7 + 0x10))();
            }
            if (uVar9 == 0) {
              FUN_0069777c(puVar2);
            }
            else {
              *puVar2 = &PTR_DAT_00a0f398;
              puVar2[1] = uVar9;
              puVar2[3] = 0x100000000;
              puVar2[2] = 0x100000000;
              puVar2[4] = &DAT_00810d88;
              puVar2[5] = uVar9;
              puVar2[6] = plVar7;
            }
          }
        }
      }
    }
    lVar11 = lVar11 + 1;
    lVar10 = lVar10 + 0x58;
  } while( true );
}



/* Entry: 0068598c; end: 006859a7;  */

bool FUN_0068598c(long param_1)

{
  FUN_00659454();
  return param_1 != 0;
}



/* Entry: 006859a8; end: 00685fab;  */

undefined8 * FUN_006859a8(long param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  dword dVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  qword *pqVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  dword dVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  int iVar19;
  dword dVar20;
  long *plVar21;
  long lVar22;
  uint6 uVar23;
  byte bVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined8 uVar25;
  byte bVar31;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  puStack_88 = param_2;
  if (((*(char *)(param_1 + 0x10) != '\x01') ||
      (lVar18 = *(long *)(param_2[2] + 0x18), lVar10 = param_1, func_0x006559c0(), lVar18 != lVar10)
      ) || (FUN_006994a4(), param_2 == (undefined8 *)0x0)) {
    puVar17 = (ulong *)(param_1 + 0x18);
    Hint_Prefetch(*puVar17,0,2,0);
    puVar6 = puVar17;
    FUN_0066e1a4(*puVar17,puVar17,&puStack_88);
    lVar10 = 0;
    uVar15 = *puVar17 >> 0xc ^ (ulong)puVar6 >> 7;
    bVar1 = (byte)puVar6;
    uVar23 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
             0x7f7f7f7f7f7f;
    while( true ) {
      uVar15 = uVar15 & *(ulong *)(param_1 + 0x28);
      uVar25 = *(undefined8 *)(*puVar17 + uVar15);
      cVar26 = (char)((ulong)uVar25 >> 8);
      cVar27 = (char)((ulong)uVar25 >> 0x10);
      cVar28 = (char)((ulong)uVar25 >> 0x18);
      cVar29 = (char)((ulong)uVar25 >> 0x20);
      cVar30 = (char)((ulong)uVar25 >> 0x28);
      bVar24 = (byte)((ulong)uVar25 >> 0x30);
      bVar31 = (byte)((ulong)uVar25 >> 0x38);
      for (uVar16 = CONCAT17(-(bVar31 == (bVar1 & 0x7f)),
                             CONCAT16(-(bVar24 == (bVar1 & 0x7f)),
                                      CONCAT15(-(cVar30 == (char)(uVar23 >> 0x28)),
                                               CONCAT14(-(cVar29 == (char)(uVar23 >> 0x20)),
                                                        CONCAT13(-(cVar28 == (char)(uVar23 >> 0x18))
                                                                 ,CONCAT12(-(cVar27 ==
                                                                            (char)(uVar23 >> 0x10)),
                                                                           CONCAT11(-(cVar26 ==
                                                                                     (char)(uVar23 
                                                  >> 8)),-((char)uVar25 == (char)uVar23)))))))) &
                    0x8080808080808080; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
        uVar2 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        lVar18 = *(long *)(param_1 + 0x20);
        puVar6 = (ulong *)(uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) &
                          *(ulong *)(param_1 + 0x28));
        if (*(undefined8 **)(lVar18 + (long)puVar6 * 0x10) == puStack_88) goto LAB_00685ac4;
      }
      bVar24 = NEON_umaxv(CONCAT17(-(bVar31 == 0x80),
                                   CONCAT16(-(bVar24 == 0x80),
                                            CONCAT15(-(cVar30 == -0x80),
                                                     CONCAT14(-(cVar29 == -0x80),
                                                              CONCAT13(-(cVar28 == -0x80),
                                                                       CONCAT12(-(cVar27 == -0x80),
                                                                                CONCAT11(-(cVar26 ==
                                                                                          -0x80),-((
                                                  char)uVar25 == -0x80)))))))),1);
      if ((bVar24 & 1) != 0) break;
      lVar10 = lVar10 + 8;
      uVar15 = lVar10 + uVar15;
    }
    FUN_006865e4();
    lVar18 = *(long *)(param_1 + 0x20);
    puVar9 = (undefined8 *)(lVar18 + (long)puVar17 * 0x10);
    *puVar9 = puStack_88;
    puVar9[1] = 0;
    puVar6 = puVar17;
LAB_00685ac4:
    puVar9 = puStack_88;
    plVar21 = (long *)(lVar18 + (long)puVar6 * 0x10 + 8);
    lVar10 = *plVar21;
    if (lVar10 == 0) {
      pqVar7 = &section_00000068.size;
      __Znwm();
      pqVar7[4] = 0;
      pqVar7[5] = 0;
      pqVar7[6] = 0;
      pqVar7[8] = 0;
      pqVar7[9] = 0;
      pqVar7[10] = 0x699248;
      *(undefined4 *)(pqVar7 + 0xb) = 0x18;
      *(undefined1 *)((long)pqVar7 + 0x5c) = 0;
      pqVar7[0xc] = (qword)FUN_00699080;
      pqVar7[0xd] = (qword)&PTR_DAT_00a0fd40;
      pqVar7[0xf] = 0;
      pqVar7[0xe] = 0;
      pqVar7[0x11] = 0;
      pqVar7[0x10] = 0;
      *plVar21 = (long)pqVar7;
      pqVar7[0x10] = (qword)puVar9;
      lVar10 = *(long *)(param_1 + 8);
      if (lVar10 == 0) {
        lVar10 = *(long *)(puVar9[2] + 0x18);
      }
      pqVar7[2] = param_1;
      pqVar7[3] = lVar10;
      iVar14 = *(int *)((long)puVar9 + 0x7c);
      uVar5 = *(int *)((long)puVar9 + 4) + iVar14;
      uVar15 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      if ((int)uVar5 < 0 != SCARRY4(*(int *)((long)puVar9 + 4),iVar14)) {
        uVar15 = 0xffffffffffffffff;
      }
      __Znam();
      FUN_0068643c(pqVar7 + 4,uVar15);
      iVar19 = 0;
      *(undefined4 *)((long)pqVar7 + 4) = 0xffffffff;
      for (lVar10 = 0; uVar16 = (ulong)*(int *)((long)puStack_88 + 4), lVar10 < (long)uVar16;
          lVar10 = lVar10 + 1) {
        iVar4 = (int)puStack_88[7] + (int)lVar10 * 0x58;
        func_0x00665778();
        puVar9 = puStack_88;
        if (iVar4 != 0) {
          if (*(int *)((long)pqVar7 + 4) == -1) {
            *(undefined4 *)((long)pqVar7 + 4) = 0x20;
            lVar18 = (long)*(int *)((long)puStack_88 + 4) << 2;
            if (*(int *)((long)puStack_88 + 4) < 0) {
              lVar18 = -1;
            }
            __Znam();
            for (lVar11 = 0; lVar11 < *(int *)((long)puVar9 + 4); lVar11 = lVar11 + 1) {
              *(undefined4 *)(lVar18 + lVar11 * 4) = 0xffffffff;
            }
            FUN_0068643c(pqVar7 + 5);
          }
          *(int *)(pqVar7[5] + lVar10 * 4) = iVar19;
          iVar19 = iVar19 + 1;
        }
      }
      dVar13 = 0x20;
      if (0 < iVar19) {
        dVar13 = (((iVar19 + 0x1f) / 0x20) * 4 + 0x27) / 8 << 3;
      }
      if (0 < iVar14) {
        *(dword *)(pqVar7 + 1) = dVar13;
        dVar13 = (int)(dVar13 + iVar14 * 4 + 7) / 8 << 3;
      }
      lVar18 = 0;
      lVar10 = 0;
      dVar20 = dVar13;
      dVar3 = 0xffffffff;
      if (0 < *(int *)(puStack_88 + 0x11)) {
        dVar20 = (int)(dVar13 + 0x1f) / 8 << 3;
        dVar3 = dVar13;
      }
      *(dword *)((long)pqVar7 + 0xc) = dVar3;
      for (; lVar10 < (int)uVar16; lVar10 = lVar10 + 1) {
        uVar16 = puStack_88[7] + lVar18;
        FUN_0068598c();
        if ((uVar16 & 1) == 0) {
          lVar11 = puStack_88[7] + lVar18;
          bVar1 = *(byte *)(lVar11 + 1);
          lVar22 = lVar11;
          FUN_00656c60();
          uVar5 = (uint)lVar22;
          if (bVar1 < 0xc0) {
            iVar19 = 4;
            uVar5 = 1 << (ulong)(uVar5 & 0x1f);
            iVar14 = 8;
            if ((uVar5 & 0x634) != 0) goto LAB_00685d08;
            iVar14 = 4;
            if ((uVar5 & 0x14a) == 0) {
              iVar19 = 1;
              iVar14 = 1;
            }
          }
          else {
            if (uVar5 - 1 < 8) {
              iVar14 = 0x10;
            }
            else if (uVar5 == 9) {
              iVar14 = 0x18;
            }
            else {
              func_0x006595dc();
              iVar14 = 0x38;
              if ((int)lVar11 == 0) {
                iVar14 = 0x18;
              }
            }
LAB_00685d08:
            iVar19 = iVar14;
            iVar14 = 8;
          }
          iVar4 = 0;
          if (iVar14 != 0) {
            iVar4 = (int)(dVar20 + iVar14 + -1) / iVar14;
          }
          *(int *)(uVar15 + lVar10 * 4) = iVar4 * iVar14;
          dVar20 = iVar4 * iVar14 + iVar19;
        }
        uVar16 = (ulong)*(uint *)((long)puStack_88 + 4);
        lVar18 = lVar18 + 0x58;
      }
      for (lVar10 = 0; iVar14 = *(int *)((long)puStack_88 + 0x7c), (int)lVar10 < iVar14;
          lVar10 = lVar10 + 1) {
        iVar14 = ((int)(dVar20 + 7) / 8) * 8;
        *(int *)(uVar15 + (lVar10 + *(int *)((long)puStack_88 + 4)) * 4) = iVar14;
        dVar20 = iVar14 + 8;
      }
      *(undefined4 *)(pqVar7 + 7) = 0xffffffff;
      *(dword *)pqVar7 = dVar20;
      puVar9 = puStack_88;
      for (lVar10 = 0; lVar10 < iVar14; lVar10 = lVar10 + 1) {
        iVar14 = 0;
        for (lVar18 = 0; lVar11 = puVar9[8] + lVar10 * 0x38, lVar18 < *(int *)(lVar11 + 4);
            lVar18 = lVar18 + 1) {
          iVar19 = (int)*(undefined8 *)(lVar11 + 0x30) + iVar14;
          func_0x00659be0();
          *(undefined4 *)(uVar15 + (long)iVar19 * 4) = 0x40000000;
          iVar14 = iVar14 + 0x58;
          puVar9 = puStack_88;
        }
        iVar14 = *(int *)((long)puVar9 + 0x7c);
      }
      param_2 = (undefined8 *)(long)(int)dVar20;
      __Znwm();
      _bzero();
      *param_2 = &PTR_FUN_00a0eeb8;
      param_2[1] = 0;
      param_2[2] = pqVar7;
      *(undefined4 *)(param_2 + 3) = 0;
      pqVar7[6] = (qword)param_2;
      FUN_00685728(param_2,0);
      NEON_rev64(pqVar7[1],4);
      uVar25 = 0x70;
      __Znwm();
      FUN_0068952c();
      pqVar7[0xf] = uVar25;
      lVar10 = param_2[2];
      if ((*(undefined8 **)(lVar10 + 0x30) != param_2) &&
         (*(undefined8 **)(lVar10 + 0x30) != (undefined8 *)0x0)) {
        FUN_00533884(&uStack_80,&UNK_009134ed);
        FUN_00776794(auStack_70,&UNK_009134b3,0x23a,uStack_80,uStack_78);
        puVar9 = auStack_70;
        FUN_005558a0();
        __ZdlPv(uVar25);
        __Unwind_Resume();
        lVar10 = *(long *)(puVar9[2] + 0x80);
        FUN_00652538(puVar9 + 1);
        if (*(int *)(puVar9[2] + 0xc) != -1) {
          FUN_005338d0((long)puVar9 + (long)*(int *)(puVar9[2] + 0xc));
        }
        lVar11 = 0;
        lVar18 = 0;
        do {
          if (*(int *)(lVar10 + 4) <= lVar18) {
            return puVar9;
          }
          lVar22 = *(long *)(lVar10 + 0x38);
          iVar14 = (int)lVar22 + (int)lVar11;
          FUN_0068598c();
          if (iVar14 == 0) {
            plVar21 = (long *)((long)puVar9 +
                              (long)*(int *)(*(long *)(puVar9[2] + 0x20) + lVar18 * 4));
            if ((*(byte *)(lVar22 + lVar11 + 1) >> 5 & 1) == 0) {
              func_0x006867d4();
              if (iVar14 == 9) goto LAB_006860b0;
              func_0x006867d4();
              if (((iVar14 == 10) && (*(undefined8 **)(puVar9[2] + 0x30) != puVar9)) &&
                 (*(undefined8 **)(puVar9[2] + 0x30) != (undefined8 *)0x0)) goto LAB_00686110;
            }
            else {
              func_0x006867d4();
              switch(iVar14) {
              case 1:
              case 8:
                FUN_0048ed64(plVar21);
                break;
              case 2:
                FUN_0048b2d0(plVar21);
                break;
              case 3:
                FUN_004eb4cc(plVar21);
                break;
              case 4:
                FUN_004dfa80(plVar21);
                break;
              case 5:
                FUN_00538e10(plVar21);
                break;
              case 6:
                FUN_00538dcc(plVar21);
                break;
              case 7:
                FUN_00538e54(plVar21);
                break;
              case 9:
                FUN_00437b14(plVar21);
                break;
              case 10:
                iVar14 = (int)lVar22 + (int)lVar11;
                func_0x006595dc();
                if (iVar14 == 0) {
                  FUN_00686560(plVar21);
                }
                else {
                  FUN_00697d88(plVar21);
                }
              }
            }
          }
          else {
            lVar12 = *(long *)(lVar22 + lVar11 + 0x28);
            iVar19 = (int)((lVar12 - *(long *)(*(long *)(lVar12 + 0x10) + 0x40)) / 0x38);
            lVar12 = puVar9[2];
            if (*(int *)((long)puVar9 + (long)(*(int *)(lVar12 + 8) + iVar19 * 4)) ==
                *(int *)(lVar22 + lVar11 + 4)) {
              iVar19 = *(int *)(*(long *)(lVar12 + 0x20) +
                               (long)(*(int *)(*(long *)(lVar12 + 0x80) + 4) + iVar19) * 4);
              func_0x006867d4();
              plVar21 = (long *)((long)puVar9 + (long)iVar19);
              if (iVar14 == 9) {
LAB_006860b0:
                func_0x00532f74(plVar21);
              }
              else {
                func_0x006867d4();
                if (iVar14 == 10) {
LAB_00686110:
                  if ((long *)*plVar21 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar21 + 8))();
                  }
                }
              }
            }
          }
          lVar18 = lVar18 + 1;
          lVar11 = lVar11 + 0x58;
        } while( true );
      }
      lVar18 = 0;
      uVar25 = *(undefined8 *)(lVar10 + 0x10);
      lVar11 = *(long *)(lVar10 + 0x80);
      for (lVar10 = 0; lVar10 < *(int *)(lVar11 + 4); lVar10 = lVar10 + 1) {
        lVar22 = *(long *)(lVar11 + 0x38);
        uVar15 = lVar22 + lVar18;
        uVar16 = uVar15;
        FUN_00656c60();
        if (((((int)uVar16 == 10) && ((*(byte *)(*(long *)(uVar15 + 0x38) + 0x8c) & 1) == 0)) &&
            (uVar16 = uVar15, FUN_0068598c(), (uVar16 & 1) == 0)) &&
           ((*(byte *)(lVar22 + lVar18 + 1) >> 5 & 1) == 0)) {
          iVar14 = *(int *)(*(long *)(param_2[2] + 0x20) + lVar10 * 4);
          FUN_00656024(uVar15);
          uVar8 = uVar25;
          FUN_006859a8(uVar25,uVar15);
          *(undefined8 *)((long)param_2 + (long)iVar14) = uVar8;
        }
        lVar18 = lVar18 + 0x58;
      }
    }
    else {
      param_2 = *(undefined8 **)(lVar10 + 0x30);
    }
  }
  return param_2;
}



/* Entry: 00685fac; end: 006861c3;  */

long FUN_00685fac(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x80);
  FUN_00652538(param_1 + 8);
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0xc);
  if (iVar2 != -1) {
    FUN_005338d0(param_1 + iVar2);
  }
  lVar6 = 0;
  lVar7 = 0;
  do {
    if (*(int *)(lVar5 + 4) <= lVar7) {
      return param_1;
    }
    lVar8 = *(long *)(lVar5 + 0x38);
    iVar2 = (int)lVar8 + (int)lVar6;
    FUN_0068598c();
    if (iVar2 == 0) {
      plVar4 = (long *)(param_1 + *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + lVar7 * 4))
      ;
      if ((*(byte *)(lVar8 + lVar6 + 1) >> 5 & 1) == 0) {
        func_0x006867d4();
        if (iVar2 == 9) goto LAB_006860b0;
        func_0x006867d4();
        if (((iVar2 == 10) &&
            (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar8 != param_1)) && (lVar8 != 0)
           ) goto LAB_00686110;
      }
      else {
        func_0x006867d4();
        switch(iVar2) {
        case 1:
        case 8:
          FUN_0048ed64(plVar4);
          break;
        case 2:
          FUN_0048b2d0(plVar4);
          break;
        case 3:
          FUN_004eb4cc(plVar4);
          break;
        case 4:
          FUN_004dfa80(plVar4);
          break;
        case 5:
          FUN_00538e10(plVar4);
          break;
        case 6:
          FUN_00538dcc(plVar4);
          break;
        case 7:
          FUN_00538e54(plVar4);
          break;
        case 9:
          FUN_00437b14(plVar4);
          break;
        case 10:
          iVar2 = (int)lVar8 + (int)lVar6;
          func_0x006595dc();
          if (iVar2 == 0) {
            FUN_00686560(plVar4);
          }
          else {
            FUN_00697d88(plVar4);
          }
        }
      }
    }
    else {
      lVar3 = *(long *)(lVar8 + lVar6 + 0x28);
      iVar1 = (int)((lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) / 0x38);
      lVar3 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + (*(int *)(lVar3 + 8) + iVar1 * 4)) == *(int *)(lVar8 + lVar6 + 4)) {
        iVar1 = *(int *)(*(long *)(lVar3 + 0x20) +
                        (long)(*(int *)(*(long *)(lVar3 + 0x80) + 4) + iVar1) * 4);
        func_0x006867d4();
        plVar4 = (long *)(param_1 + iVar1);
        if (iVar2 == 9) {
LAB_006860b0:
          func_0x00532f74(plVar4);
        }
        else {
          func_0x006867d4();
          if (iVar2 == 10) {
LAB_00686110:
            if ((long *)*plVar4 != (long *)0x0) {
              (**(code **)(*(long *)*plVar4 + 8))();
            }
          }
        }
      }
    }
    lVar7 = lVar7 + 1;
    lVar6 = lVar6 + 0x58;
  } while( true );
}



/* Entry: 006861c4; end: 006861c7;  */

long FUN_006861c4(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x80);
  FUN_00652538(param_1 + 8);
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0xc);
  if (iVar2 != -1) {
    FUN_005338d0(param_1 + iVar2);
  }
  lVar6 = 0;
  lVar7 = 0;
  do {
    if (*(int *)(lVar5 + 4) <= lVar7) {
      return param_1;
    }
    lVar8 = *(long *)(lVar5 + 0x38);
    iVar2 = (int)lVar8 + (int)lVar6;
    FUN_0068598c();
    if (iVar2 == 0) {
      plVar4 = (long *)(param_1 + *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x20) + lVar7 * 4))
      ;
      if ((*(byte *)(lVar8 + lVar6 + 1) >> 5 & 1) == 0) {
        func_0x006867d4();
        if (iVar2 == 9) goto LAB_006860b0;
        func_0x006867d4();
        if (((iVar2 == 10) &&
            (lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar8 != param_1)) && (lVar8 != 0)
           ) goto LAB_00686110;
      }
      else {
        func_0x006867d4();
        switch(iVar2) {
        case 1:
        case 8:
          FUN_0048ed64(plVar4);
          break;
        case 2:
          FUN_0048b2d0(plVar4);
          break;
        case 3:
          FUN_004eb4cc(plVar4);
          break;
        case 4:
          FUN_004dfa80(plVar4);
          break;
        case 5:
          FUN_00538e10(plVar4);
          break;
        case 6:
          FUN_00538dcc(plVar4);
          break;
        case 7:
          FUN_00538e54(plVar4);
          break;
        case 9:
          FUN_00437b14(plVar4);
          break;
        case 10:
          iVar2 = (int)lVar8 + (int)lVar6;
          func_0x006595dc();
          if (iVar2 == 0) {
            FUN_00686560(plVar4);
          }
          else {
            FUN_00697d88(plVar4);
          }
        }
      }
    }
    else {
      lVar3 = *(long *)(lVar8 + lVar6 + 0x28);
      iVar1 = (int)((lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) / 0x38);
      lVar3 = *(long *)(param_1 + 0x10);
      if (*(int *)(param_1 + (*(int *)(lVar3 + 8) + iVar1 * 4)) == *(int *)(lVar8 + lVar6 + 4)) {
        iVar1 = *(int *)(*(long *)(lVar3 + 0x20) +
                        (long)(*(int *)(*(long *)(lVar3 + 0x80) + 4) + iVar1) * 4);
        func_0x006867d4();
        plVar4 = (long *)(param_1 + iVar1);
        if (iVar2 == 9) {
LAB_006860b0:
          func_0x00532f74(plVar4);
        }
        else {
          func_0x006867d4();
          if (iVar2 == 10) {
LAB_00686110:
            if ((long *)*plVar4 != (long *)0x0) {
              (**(code **)(*(long *)*plVar4 + 8))();
            }
          }
        }
      }
    }
    lVar7 = lVar7 + 1;
    lVar6 = lVar6 + 0x58;
  } while( true );
}



/* Entry: 006861c8; end: 006861db;  */

void FUN_006861c8(void)

{
  FUN_00685fac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006861dc; end: 006862ef;  */

undefined8 * FUN_006861dc(long param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *apuStack_48 [2];
  undefined8 uStack_38;
  
  puVar5 = (undefined8 *)(long)**(int **)(param_1 + 0x10);
  if (param_2 == (undefined8 *)0x0) {
    __Znwm();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _bzero();
    *puVar5 = &PTR_FUN_00a0eeb8;
    puVar5[1] = 0;
    puVar5[2] = uVar4;
  }
  else {
    uStack_38 = 0xffffffffffffffff;
    ppuVar1 = apuStack_48;
    apuStack_48[0] = puVar5;
    func_0x0048b1cc(ppuVar1,&uStack_38,
                    "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppuVar1 != (undefined8 **)0x0) {
      puVar5 = (undefined8 *)(long)*(char *)((long)ppuVar1 + 0x17);
      ppuVar3 = ppuVar1;
      if ((long)puVar5 < 0) {
        ppuVar3 = (undefined8 **)*ppuVar1;
        puVar5 = ppuVar1[1];
      }
      FUN_00776714(apuStack_48,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-ac22eb7a7f3d/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                   ,0x10a,ppuVar3,puVar5);
      func_0x0048b1e8(apuStack_48,"Requested size is too large to fit into size_t.");
      ppuVar1 = apuStack_48;
      FUN_005558a0();
      return ppuVar1[2] + 8;
    }
    puVar2 = param_2;
    func_0x0048b21c(param_2,puVar5,1);
    _bzero();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *puVar2 = &PTR_FUN_00a0eeb8;
    puVar2[1] = param_2;
    puVar2[2] = uVar4;
    puVar5 = puVar2;
  }
  *(undefined4 *)(puVar5 + 3) = 0;
  FUN_00685728(puVar5,1);
  return puVar5;
}



/* Entry: 006862f0; end: 006862fb;  */

long FUN_006862f0(long param_1)

{
  return *(long *)(param_1 + 0x10) + 0x40;
}



/* Entry: 006862fc; end: 00686377;  */

undefined8 * FUN_006862fc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_00a0ef08;
  puVar1 = param_1 + 3;
  FUN_00686378();
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)0x0) {
    if (*(long *)(lStack_28 + 8) != 0) {
      FUN_00686484();
    }
    __ZdlPv();
    FUN_006863a4(&puStack_30);
  }
  FUN_00567000(param_1 + 7);
  FUN_00686454(param_1 + 3);
  return param_1;
}



/* Entry: 00686378; end: 006863a3;  */

undefined1  [16] FUN_00686378(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_00686590(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 006863a4; end: 006863d7;  */

long * FUN_006863a4(long *param_1)

{
  param_1[1] = param_1[1] + 0x10;
  *param_1 = *param_1 + 1;
  FUN_00686590();
  return param_1;
}



/* Entry: 006863d8; end: 006863db;  */

undefined8 * FUN_006863d8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  
  *param_1 = &PTR_FUN_00a0ef08;
  puVar1 = param_1 + 3;
  FUN_00686378();
  puStack_30 = puVar1;
  lStack_28 = param_2;
  while (puStack_30 != (undefined8 *)0x0) {
    if (*(long *)(lStack_28 + 8) != 0) {
      FUN_00686484();
    }
    __ZdlPv();
    FUN_006863a4(&puStack_30);
  }
  FUN_00567000(param_1 + 7);
  FUN_00686454(param_1 + 3);
  return param_1;
}



/* Entry: 006863dc; end: 006863ef;  */

void FUN_006863dc(void)

{
  FUN_006862fc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 006863f0; end: 0068643b;  */

undefined8 FUN_006863f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00567528();
  FUN_006859a8(param_1,param_2);
  func_0x006867fc();
  return param_2;
}



/* Entry: 0068643c; end: 00686453;  */

void FUN_0068643c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_0099c618)();
    return;
  }
  return;
}



/* Entry: 00686454; end: 00686483;  */

long * FUN_00686454(long *param_1)

{
  if (param_1[2] != 0) {
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 00686484; end: 00686523;  */

long FUN_00686484(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00685fac();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_0068958c();
  }
  __ZdlPv();
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x80);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = *(int *)(lVar1 + 4);
    while (0 < iVar3) {
      *puVar2 = 0xcdcdcdcd;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    }
  }
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    iVar3 = *(int *)(lVar1 + 4);
    while (0 < iVar3) {
      *puVar2 = 0xcdcdcdcd;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    }
  }
  FUN_00686524();
  FUN_00686524((undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 00686524; end: 00686547;  */

undefined8 FUN_00686524(undefined8 param_1)

{
  FUN_00686548(param_1,0);
  return param_1;
}



/* Entry: 00686548; end: 0068655f;  */

void FUN_00686548(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_0099c618)();
    return;
  }
  return;
}



/* Entry: 00686560; end: 0068658f;  */

long * FUN_00686560(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0054cf94(param_1);
  }
  return param_1;
}



/* Entry: 00686590; end: 006865e3;  */

void FUN_00686590(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x10;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 006865e4; end: 006866f3;  */

void FUN_006865e4(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar3 = param_1;
  lVar11 = param_2;
  func_0x00553d3c();
  lVar6 = *param_1;
  if ((*(long *)(lVar6 + -8) == 0) && (*(char *)(lVar6 + (long)plVar3) != -2)) {
    uVar7 = param_1[2];
    if ((uVar7 < 9) || (uVar7 * 0x19 < (ulong)(param_1[3] << 5))) {
      FUN_006866f4(param_1,uVar7 << 1 | 1);
    }
    else {
      FUN_00553d9c(param_1,&UNK_00a0ef50,auStack_38);
    }
    plVar3 = param_1;
    lVar11 = param_2;
    func_0x00553d3c();
    lVar6 = *param_1;
  }
  param_1[3] = param_1[3] + 1;
  *(ulong *)(lVar6 + -8) = *(long *)(lVar6 + -8) - (ulong)(*(char *)(lVar6 + (long)plVar3) == -0x80)
  ;
  bVar1 = (byte)param_2 & 0x7f;
  uVar7 = param_1[2];
  *(byte *)(lVar6 + (long)plVar3) = bVar1;
  *(byte *)(lVar6 + (uVar7 & (long)plVar3 - 7U) + (uVar7 & 7)) = bVar1;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *plVar3;
  puVar9 = (undefined8 *)plVar3[1];
  lVar10 = plVar3[2];
  plVar3[2] = lVar11;
  FUN_003b3200();
  lVar12 = plVar3[1];
  for (lVar11 = 0; lVar10 != lVar11; lVar11 = lVar11 + 1) {
    if (-1 < *(char *)(lVar6 + lVar11)) {
      plVar4 = plVar3;
      FUN_0066e1a4(plVar3,puVar9);
      plVar5 = plVar3;
      func_0x00553d3c(plVar3,plVar4);
      bVar1 = (byte)plVar4 & 0x7f;
      uVar7 = plVar3[2];
      lVar8 = *plVar3;
      *(byte *)(lVar8 + (long)plVar5) = bVar1;
      *(byte *)(lVar8 + ((long)plVar5 - 7U & uVar7) + (uVar7 & 7)) = bVar1;
      uVar13 = *puVar9;
      puVar2 = (undefined8 *)(lVar12 + (long)plVar5 * 0x10);
      puVar2[1] = puVar9[1];
      *puVar2 = uVar13;
    }
    puVar9 = puVar9 + 2;
  }
  if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar6 + -8);
    return;
  }
  return;
}



/* Entry: 006866f4; end: 006867c3;  */

void FUN_006866f4(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar1 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  FUN_003b3200();
  lVar11 = param_1[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      plVar4 = param_1;
      FUN_0066e1a4(param_1,puVar8);
      plVar5 = param_1;
      func_0x00553d3c(param_1,plVar4);
      bVar2 = (byte)plVar4 & 0x7f;
      uVar6 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + (long)plVar5) = bVar2;
      *(byte *)(lVar7 + ((long)plVar5 - 7U & uVar6) + (uVar6 & 7)) = bVar2;
      uVar12 = *puVar8;
      puVar3 = (undefined8 *)(lVar11 + (long)plVar5 * 0x10);
      puVar3[1] = puVar8[1];
      *puVar3 = uVar12;
    }
    puVar8 = puVar8 + 2;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 006867c4; end: 00686807;  */

void FUN_006867c4(void)

{
  func_0x00675d0c();
  return;
}



/* Entry: 00686808; end: 006868c3;  */

void FUN_00686808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  puStack_38 = (undefined1 *)&uStack_50;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  uStack_50 = param_4;
  uStack_48 = param_2;
  uStack_40 = param_3;
  if ((long)*(short *)(param_1 + 10) < 0) {
    lVar4 = puVar3[1];
    lStack_30 = *(long *)*puVar3;
    bVar2 = *(byte *)(lVar4 + 10);
    uStack_28 = 0;
    uStack_28._0_4_ = 0;
    while (lStack_30 != lVar4 || (uint)uStack_28 != bVar2) {
      lVar1 = lStack_30 + (ulong)((uint)uStack_28 & 0xff) * 0x20;
      func_0x00687e44(&uStack_48,*(undefined4 *)(lVar1 + 0x10),lVar1 + 0x18);
      func_0x005387bc(&lStack_30);
    }
  }
  else {
    puStack_38 = (undefined1 *)&uStack_50;
    for (lVar4 = (long)*(short *)(param_1 + 10) << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
      func_0x00687e44(&uStack_48,*(undefined4 *)puVar3,puVar3 + 1);
      puVar3 = puVar3 + 4;
    }
  }
  return;
}



/* Entry: 006868c4; end: 0068695b;  */

long * FUN_006868c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = param_1;
  func_0x005339b8();
  if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)((long)puVar1 + 10) & 1) == 0)) {
    plVar2 = (long *)*puVar1;
    if ((*(byte *)((long)puVar1 + 10) >> 4 & 1) == 0) {
      return plVar2;
    }
    (**(code **)(*param_4 + 0x10))(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00686958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_4,*param_1);
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0068690c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x10))(param_4,param_3);
  return param_4;
}



/* Entry: 0068695c; end: 00686acf;  */

long * FUN_0068695c(long *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)((long)param_2 + 4);
  plVar2 = param_1;
  FUN_0053572c();
  plVar2[2] = (long)param_2;
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)((long)plVar2 + 10);
    *(byte *)((long)plVar2 + 10) = bVar1 & 0xf0;
    param_2 = (long *)*plVar2;
    if ((bVar1 >> 4 & 1) != 0) {
      func_0x00688510();
      func_0x00688404();
                    /* WARNING: Could not recover jumptable at 0x00686a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x28))(param_2,plVar2,*param_1);
      return param_2;
    }
  }
  else {
    FUN_006538b4();
    *(char *)(plVar2 + 1) = (char)param_2;
    *(undefined1 *)((long)plVar2 + 9) = 0;
    *(undefined1 *)((long)plVar2 + 0xb) = 0;
    func_0x00688510();
    func_0x00688404();
    *(byte *)((long)plVar2 + 10) = *(byte *)((long)plVar2 + 10) & 0xf;
    func_0x006884e4();
    *plVar2 = (long)param_2;
    *(byte *)((long)plVar2 + 10) = *(byte *)((long)plVar2 + 10) & 0xf0;
  }
  return param_2;
}



/* Entry: 00686ad0; end: 00686b3f;  */

long * FUN_00686ad0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_38;
  
  uVar3 = (ulong)*(uint *)(param_2 + 4);
  plVar1 = param_1;
  FUN_0053572c();
  plVar1[2] = param_2;
  if ((uVar3 & 1) != 0) {
    FUN_006538b4();
    *(char *)(plVar1 + 1) = (char)param_2;
    *(undefined1 *)((long)plVar1 + 9) = 1;
    lStack_38 = *param_1;
    plVar2 = &lStack_38;
    func_0x00538630();
    *plVar1 = (long)plVar2;
  }
  return plVar1;
}



/* Entry: 00686b40; end: 00686c0f;  */

ulong FUN_00686b40(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong auStack_50 [2];
  
  FUN_00686ad0();
  uVar1 = *param_1;
  FUN_00686c10();
  if (uVar1 == 0) {
    puVar3 = (ulong *)*param_1;
    if ((int)puVar3[1] == 0) {
      func_0x00688510();
      func_0x00688404();
      if (uVar1 == 0) {
        FUN_00533884(&uStack_60,&UNK_0091353a);
        FUN_00776794(auStack_50,&UNK_009134fc,0xeb,uStack_60,uStack_58);
        puVar3 = auStack_50;
        FUN_005558a0();
        uVar1 = puVar3[1];
        puVar2 = puVar3;
        FUN_0048cf58();
        if ((int)uVar1 < (int)puVar2) {
          uVar1 = puVar3[1];
          *(int *)(puVar3 + 1) = (int)uVar1 + 1;
          if ((*puVar3 & 1) != 0) {
            puVar3 = (ulong *)(*puVar3 + (long)(int)uVar1 * 8 + 7);
          }
          uVar1 = *puVar3;
        }
        else {
          uVar1 = 0;
        }
        return uVar1;
      }
    }
    else {
      if ((*puVar3 & 1) != 0) {
        puVar3 = (ulong *)(*puVar3 + 7);
      }
      uVar1 = *puVar3;
    }
    func_0x006884e4();
    FUN_00687fdc(*param_1,uVar1);
  }
  return uVar1;
}



/* Entry: 00686c10; end: 00686c63;  */

ulong FUN_00686c10(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  puVar1 = param_1;
  FUN_0048cf58();
  if ((int)uVar2 < (int)puVar1) {
    uVar2 = param_1[1];
    *(int *)(param_1 + 1) = (int)uVar2 + 1;
    if ((*param_1 & 1) != 0) {
      param_1 = (ulong *)(*param_1 + (long)(int)uVar2 * 8 + 7);
    }
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 00686c64; end: 00686d9f;  */

undefined1 * FUN_00686c64(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar1 = *param_1;
  FUN_00655ca0(lVar1,param_1[2],param_2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_006538b4();
    *(char *)(param_3 + 0xc) = (char)lVar2;
    *(byte *)(param_3 + 0xd) = *(byte *)(lVar1 + 1) >> 5 & 1;
    lVar2 = lVar1;
    FUN_00659660();
    *(char *)(param_3 + 0xe) = (char)lVar2;
    *(long *)(param_3 + 0x20) = lVar1;
    lVar2 = lVar1;
    FUN_00656c60();
    if ((int)lVar2 == 10) {
      lVar2 = lVar1;
      FUN_00656024();
      func_0x00688404();
      *(long *)(param_3 + 0x10) = lVar2;
      FUN_00533888();
      *(long *)(param_3 + 0x18) = lVar2;
      if (*(long *)(param_3 + 0x10) == 0) {
        FUN_00776714(auStack_40,&UNK_009134fc,0x117,&UNK_0091354f,0x29);
        FUN_00686da0(auStack_40,&UNK_00913579);
        lVar1 = *(long *)(lVar1 + 8) + 0x18;
        FUN_00555478();
        FUN_005558a0(auStack_40);
        lVar2 = lVar1;
        _strlen(lVar1);
        FUN_00554ab4(puVar3,lVar1,lVar2);
        return puVar3;
      }
      if ((*(byte *)(*(long *)(lVar1 + 0x38) + 0x28) >> 5 & 1) != 0) {
        *(char *)(param_3 + 0xf) = '\x02' - *(char *)(*(long *)(lVar1 + 0x38) + 0x89);
      }
    }
    else {
      lVar2 = lVar1;
      FUN_00656c60();
      if ((int)lVar2 == 8) {
        *(code **)(param_3 + 0x10) = FUN_00686dd8;
        lVar2 = lVar1;
        func_0x006579b0();
        *(long *)(param_3 + 0x18) = lVar2;
      }
    }
  }
  return (undefined1 *)(ulong)(lVar1 != 0);
}



/* Entry: 00686da0; end: 00686dd7;  */

undefined8 FUN_00686da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen(param_2);
  FUN_00554ab4(param_1,param_2,uVar1);
  return param_1;
}



/* Entry: 00686dd8; end: 00686df3;  */

bool FUN_00686dd8(long param_1)

{
  FUN_00656390();
  return param_1 != 0;
}



/* Entry: 00686df4; end: 00686eb7;  */

void FUN_00686df4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong *param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_41;
  
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar1 = param_1;
  FUN_00686eb8(param_1,(uint)param_2 & 7,param_2 >> 3,param_4,param_6,&uStack_80,&uStack_41);
  if ((uVar1 & 1) == 0) {
    if ((*param_5 & 1) == 0) {
      func_0x00699010(param_5);
    }
    else {
      param_5 = (ulong *)((*param_5 & 0xfffffffffffffffe) + 8);
    }
    FUN_006a4fd0(param_2,param_5,param_3,param_6);
  }
  else {
    FUN_00686f4c(param_1,param_2 >> 3,uStack_41,&uStack_80,param_5,param_3,param_6);
  }
  return;
}



/* Entry: 00686eb8; end: 00686f4b;  */

void FUN_00686eb8(void)

{
  long in_x4;
  
  if (*(long *)(in_x4 + 0x60) == 0) {
    func_0x00688498();
    FUN_00535adc();
  }
  else {
    FUN_00699298();
    func_0x00688498();
    FUN_00687d5c();
  }
  return;
}



/* Entry: 00686f4c; end: 0068788b;  */

/* WARNING: Type propagation algorithm not settling */

ulong *******
FUN_00686f4c(ulong *******param_1,ulong *******param_2,int param_3,ulong *******param_4,
            ulong *******param_5,ulong *******param_6,ulong *******param_7)

{
  byte *pbVar1;
  undefined8 *****pppppuVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  long lVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  ulong *******pppppppuVar15;
  char *pcVar16;
  undefined8 uVar17;
  ulong *******pppppppuVar18;
  int extraout_w8;
  int extraout_w8_00;
  int extraout_w8_01;
  ulong ******ppppppuVar19;
  ulong *******extraout_x8;
  ulong *******extraout_x8_00;
  ulong *******extraout_x8_01;
  ulong *******extraout_x8_02;
  ulong *******extraout_x8_03;
  ulong *******extraout_x8_04;
  ulong *******extraout_x8_05;
  ulong *******extraout_x8_06;
  ulong *******extraout_x8_07;
  ulong *******extraout_x8_08;
  ulong *******extraout_x8_09;
  ulong *******extraout_x8_10;
  int iVar20;
  ulong *******pppppppuVar21;
  undefined8 ******ppppppuVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  bool bVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 unaff_x30;
  ulong *******pppppppuStack_250;
  undefined8 *****pppppuStack_248;
  undefined8 uStack_240;
  undefined1 *puStack_238;
  ulong *******pppppppuStack_230;
  undefined8 *******pppppppuStack_228;
  undefined1 **ppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  uint auStack_1c8 [3];
  uint uStack_1bc;
  undefined8 *******pppppppuStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong *******pppppppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  int iStack_148;
  long lStack_128;
  ulong uStack_f8;
  undefined8 uStack_e8;
  ulong *******pppppppuStack_e0;
  ulong *******pppppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong *******pppppppuStack_c0;
  ulong *******pppppppuStack_b8;
  undefined1 auStack_b0 [8];
  ulong *******pppppppuStack_a8;
  ulong *******pppppppuStack_a0;
  ulong *****pppppuStack_98;
  ulong ******ppppppuStack_90;
  undefined2 uStack_88;
  undefined4 uStack_7c;
  ulong *******pppppppuStack_78;
  ulong *****pppppuStack_70;
  ulong *****pppppuStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  undefined8 uStack_48;
  
  pppppppuVar11 = (ulong *******)&pppppppuStack_c0;
  pppppppuVar9 = (ulong *******)&pppppppuStack_c0;
  pppppppuVar21 = (ulong *******)&pppppppuStack_c0;
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  iVar20 = *(byte *)((long)param_4 + 0xc) - 1;
  cVar6 = SBORROW4(iVar20,0x11);
  cVar7 = (int)(*(byte *)((long)param_4 + 0xc) - 0x12) < 0;
  uVar8 = iVar20 == 0x11;
  pppppppuVar15 = param_4;
  pppppppuVar18 = param_5;
  pppppppuStack_e0 = param_2;
  pppppppuStack_d8 = param_6;
  pppppppuStack_c0 = param_6;
  if (param_3 == 0) {
    switch(iVar20) {
    case 0:
      func_0x00688448(*param_6);
      if ((bool)uVar8) {
        func_0x006883d4();
        FUN_00534268();
        pppppppuVar18 = param_5;
        param_6 = param_6 + 1;
      }
      else {
        pppppppuVar15 = (ulong *******)param_4[4];
        func_0x00688428();
        FUN_005341e0();
        pppppppuVar18 = param_5;
        param_6 = param_6 + 1;
      }
      break;
    case 1:
      func_0x00688448(*(undefined4 *)param_6);
      if ((bool)uVar8) {
        func_0x006883d4();
        FUN_005340f8();
        pppppppuVar18 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        pppppppuVar15 = (ulong *******)param_4[4];
        func_0x00688428();
        FUN_00534070();
        pppppppuVar18 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 2:
      func_0x006883f8();
      pppppppuVar18 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00688448();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar18 = pppppppuStack_b8;
          func_0x00688428();
          FUN_00533d84();
        }
        else {
          pppppppuVar18 = (ulong *******)param_4[4];
          pppppppuVar15 = pppppppuStack_b8;
          func_0x00688428();
          FUN_00533d14();
        }
      }
      break;
    case 3:
      func_0x006883f8();
      pppppppuVar18 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00688448();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar18 = pppppppuStack_b8;
          func_0x00688428();
          FUN_00533fbc();
        }
        else {
          pppppppuVar18 = (ulong *******)param_4[4];
          pppppppuVar15 = pppppppuStack_b8;
          func_0x00688428();
          FUN_00533f4c();
        }
      }
      break;
    case 4:
      func_0x006883f8();
      pppppppuVar18 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00688448();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar18 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          func_0x00688428();
          FUN_00533c68();
        }
        else {
          pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          pppppppuVar18 = (ulong *******)param_4[4];
          func_0x00688428();
          FUN_00533bd8();
        }
      }
      break;
    case 5:
      func_0x0068848c(*param_6);
      if ((bool)uVar8) {
        func_0x00688460();
        func_0x00688428();
        pppppppuVar18 = extraout_x8_03;
        FUN_00533fbc();
        pppppppuVar15 = param_4;
        param_6 = param_6 + 1;
      }
      else {
        func_0x006883e8();
        pppppppuVar15 = extraout_x8_07;
        FUN_00533f4c();
        pppppppuVar18 = param_5;
        param_6 = param_6 + 1;
      }
      break;
    case 6:
      func_0x0068848c(*(undefined4 *)param_6);
      if ((bool)uVar8) {
        func_0x00688460();
        func_0x00688428();
        pppppppuVar18 = extraout_x8_04;
        FUN_00533ea0();
        pppppppuVar15 = param_4;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        func_0x006883e8();
        pppppppuVar15 = extraout_x8_08;
        FUN_00533e30();
        pppppppuVar18 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 7:
      func_0x006883f8();
      pppppppuVar18 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00688448();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          uVar8 = pppppppuStack_b8 == (ulong *******)0x0;
          pppppppuVar18 = (ulong *******)(ulong)!(bool)uVar8;
          func_0x00688428();
          FUN_005343b8();
        }
        else {
          uVar8 = pppppppuStack_b8 == (ulong *******)0x0;
          pppppppuVar15 = (ulong *******)(ulong)!(bool)uVar8;
          pppppppuVar18 = (ulong *******)param_4[4];
          func_0x00688428();
          FUN_00534348();
        }
      }
      break;
    case 8:
    case 0xb:
      pppppppuVar15 = (ulong *******)param_4[4];
      func_0x00688428(*(byte *)((long)param_4 + 0xd));
      uVar8 = extraout_w8 == 1;
      if ((bool)uVar8) {
        FUN_00534704();
        pppppppuVar18 = param_5;
      }
      else {
        FUN_00534670();
        pppppppuVar18 = param_5;
      }
      FUN_00533034(&pppppppuStack_c0);
      if (pppppppuStack_c0 == (ulong *******)0x0) goto code_r0x006877d8;
      param_6 = param_7;
      FUN_00533074(param_7,pppppppuStack_c0,pppppppuVar21);
      pppppppuVar15 = param_1;
      break;
    case 9:
      pppppppuVar15 = (ulong *******)param_4[2];
      func_0x006883e8(*(byte *)((long)param_4 + 0xd));
      if (extraout_w8_01 == 1) {
        FUN_005349b8();
        pppppppuVar18 = param_5;
      }
      else {
        FUN_005347ac();
        pppppppuVar18 = param_5;
      }
      iVar20 = *(int *)(param_7 + 0xb);
      iVar24 = iVar20 + -1;
      uVar8 = iVar24 == 0;
      *(int *)(param_7 + 0xb) = iVar24;
      if (0 < iVar20) {
        uVar5 = (int)param_2 << 3 | 3;
        param_2 = (ulong *******)(ulong)uVar5;
        *(int *)((long)param_7 + 0x5c) = *(int *)((long)param_7 + 0x5c) + 1;
        func_0x00688454();
        FUN_00549a60();
        param_7[0xb] = (ulong ******)
                       CONCAT44((int)((ulong)param_7[0xb] >> 0x20) + -1,(int)param_7[0xb] + 1);
        uVar3 = *(uint *)(param_7 + 10);
        *(undefined4 *)(param_7 + 10) = 0;
        uVar8 = uVar3 == uVar5;
        goto code_r0x00687784;
      }
code_r0x006877d8:
      param_6 = (ulong *******)0x0;
      break;
    case 10:
      pbVar1 = (byte *)((long)param_4 + 0xd);
      param_4 = (ulong *******)param_4[2];
      func_0x006883e8(*pbVar1);
      uVar8 = extraout_w8_00 == 1;
      if ((bool)uVar8) {
        FUN_005349b8();
      }
      else {
        FUN_005347ac();
      }
      FUN_006883bc();
      if ((bool)uVar8) {
        func_0x006884d0();
        pppppppuVar9 = param_7;
        func_0x0054b68c();
        if (pppppppuVar9 == (ulong *******)0x0) {
          return (ulong *******)0x0;
        }
        FUN_00549a60(param_1,pppppppuVar9,param_7);
        *(int *)(param_7 + 0xb) = *(int *)(param_7 + 0xb) + 1;
        uStack_e8 = (ulong *******)CONCAT44(uStack_e8._4_4_,uStack_e8._4_4_);
        FUN_005439fc(param_7,&uStack_e8);
        if ((int)param_7 != 0) {
          return param_1;
        }
        return (ulong *******)0x0;
      }
      goto LAB_0068782c;
    case 0xc:
      func_0x006883f8();
      pppppppuVar18 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x00688448();
        if ((bool)uVar8) {
          pppppppuVar15 = (ulong *******)(ulong)*(byte *)((long)param_4 + 0xe);
          pppppppuVar18 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          func_0x00688428();
          FUN_00533ea0();
        }
        else {
          pppppppuVar15 = (ulong *******)((ulong)pppppppuStack_b8 & 0xffffffff);
          pppppppuVar18 = (ulong *******)param_4[4];
          func_0x00688428();
          FUN_00533e30();
        }
      }
      break;
    case 0xd:
      func_0x006883f8();
      pppppppuVar9 = pppppppuStack_b8;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        ppppppuVar19 = param_4[3];
        (*(code *)param_4[2])(ppppppuVar19,pppppppuStack_b8);
        param_7 = pppppppuVar9;
        if (((ulong)ppppppuVar19 & 1) == 0) {
          if (((ulong)*param_5 & 1) == 0) {
            func_0x00699010(param_5);
          }
          FUN_006a4bc0();
        }
        else {
          func_0x00688448();
          if ((bool)uVar8) {
            func_0x00688460();
            func_0x00688428();
            pppppppuVar18 = pppppppuVar9;
            FUN_005345f8();
          }
          else {
            pppppppuVar18 = (ulong *******)param_4[4];
            func_0x00688428();
            pppppppuVar15 = pppppppuVar9;
            FUN_00534588();
          }
        }
      }
      break;
    case 0xe:
      func_0x0068848c(*(undefined4 *)param_6);
      if ((bool)uVar8) {
        func_0x00688460();
        func_0x00688428();
        pppppppuVar18 = extraout_x8_00;
        FUN_00533c68();
        pppppppuVar15 = param_4;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      else {
        func_0x006883e8();
        pppppppuVar15 = extraout_x8_05;
        FUN_00533bd8();
        pppppppuVar18 = param_5;
        param_6 = (ulong *******)((long)param_6 + 4);
      }
      break;
    case 0xf:
      func_0x0068848c(*param_6);
      if ((bool)uVar8) {
        func_0x00688460();
        func_0x00688428();
        pppppppuVar18 = extraout_x8_01;
        FUN_00533d84();
        pppppppuVar15 = param_4;
        param_6 = param_6 + 1;
      }
      else {
        func_0x006883e8();
        pppppppuVar15 = extraout_x8_06;
        FUN_00533d14();
        pppppppuVar18 = param_5;
        param_6 = param_6 + 1;
      }
      break;
    case 0x10:
      func_0x006883f8();
      pppppppuVar18 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x0068848c(-((uint)pppppppuStack_b8 & 1) ^ (uint)pppppppuStack_b8 >> 1);
        if ((bool)uVar8) {
          func_0x00688460();
          func_0x00688428();
          pppppppuVar18 = extraout_x8;
          FUN_00533c68();
        }
        else {
          pppppppuVar18 = (ulong *******)param_4[4];
          func_0x00688428();
          pppppppuVar15 = extraout_x8_09;
          FUN_00533bd8();
        }
      }
      break;
    case 0x11:
      func_0x006883f8();
      pppppppuVar18 = param_5;
      param_6 = param_1;
      if (param_1 != (ulong *******)0x0) {
        func_0x0068848c(-((ulong)pppppppuStack_b8 & 1) ^ (ulong)pppppppuStack_b8 >> 1);
        if ((bool)uVar8) {
          func_0x00688460();
          func_0x00688428();
          pppppppuVar18 = extraout_x8_02;
          FUN_00533d84();
        }
        else {
          pppppppuVar18 = (ulong *******)param_4[4];
          func_0x00688428();
          pppppppuVar15 = extraout_x8_10;
          FUN_00533d14();
        }
      }
    }
    goto LAB_006877dc;
  }
  pppppppuVar21 = param_6;
  uStack_e8 = param_7;
  switch(iVar20) {
  case 0:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688454();
      func_0x006884d0();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c670();
      return param_1;
    }
    break;
  case 1:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688454();
      func_0x006884d0();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c568();
      return param_1;
    }
    break;
  case 2:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688418();
      func_0x006884d0();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar8 && cVar7 == cVar6) {
          FUN_0054bf28();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_0054bf00;
          func_0x0054cb64();
          if ((bool)uVar8 || cVar7 != cVar6) {
            func_0x0054ca84();
            if (param_1 != (ulong *******)0x0) goto LAB_0054bf1c;
            func_0x0054cb7c();
            FUN_0054bf28();
            uVar8 = param_1 == param_7;
            if ((bool)uVar8) {
              func_0x0054cd1c();
            }
            else {
LAB_0054befc:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_0054bf00;
          }
          func_0x0054cce8();
          if (cVar7 != cVar6) goto LAB_0054befc;
          func_0x0054ccb0();
          if (param_1 == (ulong *******)0x0) goto LAB_0054bf00;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054bf28();
        func_0x0054cd28();
      }
LAB_0054bf00:
      func_0x0054cb2c();
      if ((bool)uVar8) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054bf1c:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054bf28;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while ((param_6 < param_7 &&
             (func_0x0054cbf0(), param_6 = param_1, param_1 != (ulong *******)0x0))) {
        param_1 = param_2;
        FUN_00533dd0(param_2,uStack_f8);
      }
      return param_6;
    }
    break;
  case 3:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688418();
      func_0x006884d0();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar8 && cVar7 == cVar6) {
          FUN_0054c01c();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_0054bff4;
          func_0x0054cb64();
          if ((bool)uVar8 || cVar7 != cVar6) {
            func_0x0054ca84();
            if (param_1 != (ulong *******)0x0) goto LAB_0054c010;
            func_0x0054cb7c();
            FUN_0054c01c();
            uVar8 = param_1 == param_7;
            if ((bool)uVar8) {
              func_0x0054cd1c();
            }
            else {
LAB_0054bff0:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_0054bff4;
          }
          func_0x0054cce8();
          if (cVar7 != cVar6) goto LAB_0054bff0;
          func_0x0054ccb0();
          if (param_1 == (ulong *******)0x0) goto LAB_0054bff4;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c01c();
        func_0x0054cd28();
      }
LAB_0054bff4:
      func_0x0054cb2c();
      if ((bool)uVar8) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c010:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c01c;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        FUN_00534008(param_2,uStack_f8);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 4:
    pppppppuVar15 = param_2;
    func_0x006883d4();
    pppppppuVar18 = (ulong *******)((long)&MACH_HEADER.cputype + 1);
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688418();
      func_0x006884d0();
      func_0x0054cdd0();
      pppppppuStack_78 = *(ulong ********)PTR____stack_chk_guard_00999f88;
      pppppppuVar21 = (ulong *******)&pppppppuStack_a8;
      pppppppuStack_a8 = pppppppuVar15;
      FUN_00533034();
      func_0x0054cd00();
      pppppppuVar10 = pppppppuVar21;
      if (pppppppuVar21 != (ulong *******)0x0) {
        while( true ) {
          pppppppuVar15 = (ulong *******)param_1[1];
          iVar24 = (int)pppppppuVar15 - (int)pppppppuVar21;
          iVar20 = (int)param_7;
          uVar8 = iVar20 == iVar24;
          if (iVar20 <= iVar24) break;
          func_0x0054cd84();
          pppppppuVar10 = (ulong *******)0x0;
          pppppppuStack_a8 = pppppppuVar21;
          if (pppppppuVar21 == (ulong *******)0x0) goto LAB_0054bcf8;
          ppppppuVar19 = param_1[1];
          lVar23 = (long)iVar20 - (long)iVar24;
          if ((int)lVar23 < 0x11) {
            uStack_88 = 0;
            ppppppuStack_90 = (ulong ******)0x0;
            pppppuStack_98 = ppppppuVar19[1];
            pppppppuStack_a0 = (ulong *******)*ppppppuVar19;
            pppppppuStack_c0 = (ulong *******)CONCAT44(pppppppuStack_c0._4_4_,(int)lVar23);
            auStack_b0._4_4_ = 0x10;
            pppppppuVar15 = (ulong *******)(auStack_b0 + 4);
            func_0x005389ec(&pppppppuStack_c0,pppppppuVar15,"size - chunk_size <= kSlopBytes");
            if (pppppppuVar11 != (ulong *******)0x0) goto LAB_0054bd18;
            param_7 = (ulong *******)((long)&pppppppuStack_a0 + lVar23);
            pppppppuVar11 =
                 (ulong *******)
                 ((long)&pppppppuStack_a0 + (long)((int)pppppppuVar21 - (int)ppppppuVar19));
            pppppppuVar15 = param_7;
            func_0x0054cd84(pppppppuVar11,param_7);
            uVar8 = pppppppuVar11 == param_7;
            if ((bool)uVar8) {
              pppppppuVar10 = (ulong *******)((long)param_1[1] + lVar23);
            }
            else {
LAB_0054bcf4:
              pppppppuVar10 = (ulong *******)0x0;
            }
            goto LAB_0054bcf8;
          }
          uVar8 = *(int *)((long)param_1 + 0x1c) == 0x11;
          if (*(int *)((long)param_1 + 0x1c) < 0x11) goto LAB_0054bcf4;
          pppppppuVar10 = param_1;
          FUN_0054aed0();
          if (pppppppuVar10 == (ulong *******)0x0) goto LAB_0054bcf8;
          func_0x0054cba0();
          pppppppuVar21 = pppppppuVar10;
        }
        param_1 = (ulong *******)((long)pppppppuVar21 + (long)iVar20);
        pppppppuVar15 = param_1;
        func_0x0054cd84();
        uVar8 = param_1 == pppppppuVar21;
        pppppppuVar10 = pppppppuVar21;
        if (!(bool)uVar8) {
          pppppppuVar10 = (ulong *******)0x0;
        }
      }
LAB_0054bcf8:
      func_0x0054cb2c();
      if ((bool)uVar8) {
        return pppppppuVar10;
      }
      ___stack_chk_fail();
      pppppppuVar11 = pppppppuVar10;
LAB_0054bd18:
      func_0x00533528();
      FUN_00776794(&pppppppuStack_c0,
                   "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/parse_context.h"
                   ,0x4ce,pppppppuVar11,pppppppuVar15);
      func_0x0054cc78();
      __Unwind_Resume();
      pcStack_c8 = FUN_0054bd40;
      uStack_e8 = param_7;
      pppppppuStack_e0 = pppppppuVar18;
      pppppppuStack_d8 = param_1;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pppppppuVar11 = pppppppuVar9;
        if (param_7 <= param_1) {
          return param_1;
        }
        func_0x0054cbf0();
        if (pppppppuVar11 == (ulong *******)0x0) break;
        pppppppuVar9 = pppppppuVar18;
        FUN_00533cb4(pppppppuVar18,uStack_f8 & 0xffffffff);
        param_1 = pppppppuVar11;
      }
      return (ulong *******)0x0;
    }
    break;
  case 5:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688454();
      func_0x006884d0();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_00543378();
      return param_1;
    }
    break;
  case 6:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688454();
      func_0x006884d0();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_00543490();
      return param_1;
    }
    break;
  case 7:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688418();
      func_0x006884d0();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar8 && cVar7 == cVar6) {
          FUN_0054c308();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_0054c2e0;
          func_0x0054cb64();
          if ((bool)uVar8 || cVar7 != cVar6) {
            func_0x0054ca84();
            if (param_1 != (ulong *******)0x0) goto LAB_0054c2fc;
            func_0x0054cb7c();
            FUN_0054c308();
            uVar8 = param_1 == param_7;
            if ((bool)uVar8) {
              func_0x0054cd1c();
            }
            else {
LAB_0054c2dc:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_0054c2e0;
          }
          func_0x0054cce8();
          if (cVar7 != cVar6) goto LAB_0054c2dc;
          func_0x0054ccb0();
          if (param_1 == (ulong *******)0x0) goto LAB_0054c2e0;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c308();
        func_0x0054cd28();
      }
LAB_0054c2e0:
      func_0x0054cb2c();
      if ((bool)uVar8) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c2fc:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c308;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        FUN_00534404(param_2,uStack_f8 != 0);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    goto code_r0x00687830;
  case 0xc:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688418();
      func_0x006884d0();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar8 && cVar7 == cVar6) {
          FUN_0054be34();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_0054be0c;
          func_0x0054cb64();
          if ((bool)uVar8 || cVar7 != cVar6) {
            func_0x0054ca84();
            if (param_1 != (ulong *******)0x0) goto LAB_0054be28;
            func_0x0054cb7c();
            FUN_0054be34();
            uVar8 = param_1 == param_7;
            if ((bool)uVar8) {
              func_0x0054cd1c();
            }
            else {
LAB_0054be08:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_0054be0c;
          }
          func_0x0054cce8();
          if (cVar7 != cVar6) goto LAB_0054be08;
          func_0x0054ccb0();
          if (param_1 == (ulong *******)0x0) goto LAB_0054be0c;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054be34();
        func_0x0054cd28();
      }
LAB_0054be0c:
      func_0x0054cb2c();
      if ((bool)uVar8) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054be28:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054be34;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        FUN_00533eec(param_2,uStack_f8 & 0xffffffff);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 0xd:
    func_0x006883d4();
    FUN_0053445c();
    pppppppuStack_a8 = (ulong *******)param_4[3];
    auStack_b0 = (undefined1  [8])param_4[2];
    pppppuStack_98 = (ulong *****)CONCAT44(pppppuStack_98._4_4_,(int)param_2);
    pppppppuVar21 = (ulong *******)&pppppppuStack_78;
    pppppppuStack_b8 = param_1;
    pppppppuStack_a0 = param_5;
    pppppppuStack_78 = param_6;
    FUN_00533034();
    if (pppppppuStack_78 == (ulong *******)0x0) goto code_r0x006877d8;
    while( true ) {
      param_2 = (ulong *******)((long)param_7[1] - (long)pppppppuStack_78);
      iVar20 = (int)pppppppuVar21;
      iVar24 = (int)param_2;
      uVar8 = iVar20 == iVar24;
      if (iVar20 <= iVar24) break;
      FUN_00688230(pppppppuStack_78,param_7[1],&pppppppuStack_b8);
      if (pppppppuStack_78 == (ulong *******)0x0) goto code_r0x006877d8;
      ppppppuVar19 = param_7[1];
      iVar25 = (int)pppppppuStack_78 - (int)ppppppuVar19;
      lVar23 = (long)iVar20 - (long)iVar24;
      if ((int)lVar23 < 0x11) {
        uStack_58 = 0;
        uStack_60 = 0;
        pppppuStack_68 = ppppppuVar19[1];
        pppppuStack_70 = *ppppppuVar19;
        ppppppuStack_90 = (ulong ******)CONCAT44(ppppppuStack_90._4_4_,(int)lVar23);
        uStack_7c = 0x10;
        param_4 = &ppppppuStack_90;
        param_5 = (ulong *******)&uStack_7c;
        func_0x005389ec(param_4,param_5,"size - chunk_size <= kSlopBytes");
        if (param_4 != (ulong *******)0x0) {
          func_0x00533528();
          pcVar16 = &UNK_00913663;
          uVar17 = 0x4ce;
          FUN_00776794(&ppppppuStack_90,&UNK_00913663,0x4ce);
          FUN_005558a0(&ppppppuStack_90);
          goto LAB_00687880;
        }
        lVar12 = (long)&pppppuStack_70 + (long)iVar25;
        func_0x006884fc();
        uVar8 = lVar12 == (long)&pppppuStack_70 + lVar23;
        if (!(bool)uVar8) goto code_r0x006877d8;
        param_6 = (ulong *******)((long)param_7[1] + lVar23);
        goto LAB_006877dc;
      }
      uVar8 = *(int *)((long)param_7 + 0x1c) == 0x11;
      if ((*(int *)((long)param_7 + 0x1c) < 0x11) ||
         (pppppppuVar9 = param_7, FUN_0054aed0(), pppppppuVar9 == (ulong *******)0x0))
      goto code_r0x006877d8;
      pppppppuVar21 = (ulong *******)(ulong)(uint)((iVar20 - iVar24) - iVar25);
      pppppppuStack_78 = (ulong *******)((long)pppppppuVar9 + (long)iVar25);
    }
    pppppppuVar9 = (ulong *******)((long)pppppppuStack_78 + (long)iVar20);
    param_1 = pppppppuStack_78;
    func_0x006884fc();
    uVar8 = pppppppuVar9 == param_1;
code_r0x00687784:
    param_6 = param_1;
    if (!(bool)uVar8) {
      param_6 = (ulong *******)0x0;
    }
  default:
LAB_006877dc:
    FUN_006883bc();
    param_4 = pppppppuVar15;
    param_5 = pppppppuVar18;
    if ((bool)uVar8) {
      func_0x006884d0(param_6,unaff_x30);
      return param_6;
    }
    break;
  case 0xe:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688454();
      func_0x006884d0();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c358();
      return param_1;
    }
    break;
  case 0xf:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688454();
      func_0x006884d0();
      func_0x0054cb08();
      func_0x0054cbdc();
      FUN_0054c460();
      return param_1;
    }
    break;
  case 0x10:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688418();
      func_0x006884d0();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar8 && cVar7 == cVar6) {
          FUN_0054c110();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_0054c0e8;
          func_0x0054cb64();
          if ((bool)uVar8 || cVar7 != cVar6) {
            func_0x0054ca84();
            if (param_1 != (ulong *******)0x0) goto LAB_0054c104;
            func_0x0054cb7c();
            FUN_0054c110();
            uVar8 = param_1 == param_7;
            if ((bool)uVar8) {
              func_0x0054cd1c();
            }
            else {
LAB_0054c0e4:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_0054c0e8;
          }
          func_0x0054cce8();
          if (cVar7 != cVar6) goto LAB_0054c0e4;
          func_0x0054ccb0();
          if (param_1 == (ulong *******)0x0) goto LAB_0054c0e8;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c110();
        func_0x0054cd28();
      }
LAB_0054c0e8:
      func_0x0054cb2c();
      if ((bool)uVar8) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c104:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c110;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        FUN_00533cb4(param_2,-((uint)uStack_f8 & 1) ^ (uint)uStack_f8 >> 1);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
    break;
  case 0x11:
    func_0x006883d4();
    FUN_0053445c();
    FUN_006883bc();
    if ((bool)uVar8) {
      func_0x00688418();
      func_0x006884d0();
      func_0x0054cdd0();
      func_0x0054cab4();
      func_0x0054cd00();
      if (param_1 != (ulong *******)0x0) {
        while (func_0x0054cc2c(), !(bool)uVar8 && cVar7 == cVar6) {
          FUN_0054c20c();
          pppppppuStack_a8 = param_1;
          if (param_1 == (ulong *******)0x0) goto LAB_0054c1e4;
          func_0x0054cb64();
          if ((bool)uVar8 || cVar7 != cVar6) {
            func_0x0054ca84();
            if (param_1 != (ulong *******)0x0) goto LAB_0054c200;
            func_0x0054cb7c();
            FUN_0054c20c();
            uVar8 = param_1 == param_7;
            if ((bool)uVar8) {
              func_0x0054cd1c();
            }
            else {
LAB_0054c1e0:
              param_1 = (ulong *******)0x0;
            }
            goto LAB_0054c1e4;
          }
          func_0x0054cce8();
          if (cVar7 != cVar6) goto LAB_0054c1e0;
          func_0x0054ccb0();
          if (param_1 == (ulong *******)0x0) goto LAB_0054c1e4;
          func_0x0054cba0();
        }
        func_0x0054cc1c();
        FUN_0054c20c();
        func_0x0054cd28();
      }
LAB_0054c1e4:
      func_0x0054cb2c();
      if ((bool)uVar8) {
        return param_1;
      }
      ___stack_chk_fail();
LAB_0054c200:
      func_0x00533528();
      func_0x0054cad8();
      func_0x0054cc78();
      pcStack_c8 = FUN_0054c20c;
      puStack_d0 = &stack0xffffffffffffffc0;
      func_0x0054cc0c();
      while( true ) {
        pppppppuVar9 = param_1;
        if (param_7 <= param_6) {
          return param_6;
        }
        func_0x0054cbf0();
        if (pppppppuVar9 == (ulong *******)0x0) break;
        param_1 = param_2;
        FUN_00533dd0(param_2,-(uStack_f8 & 1) ^ uStack_f8 >> 1);
        param_6 = pppppppuVar9;
      }
      return (ulong *******)0x0;
    }
  }
LAB_0068782c:
  ___stack_chk_fail();
  pppppppuVar21 = param_6;
code_r0x00687830:
  uVar17 = 0x38;
  FUN_0077670c(&pppppppuStack_b8,&UNK_009135ba,0x38);
  pcVar16 = "Non-primitive types can\'t be packed.";
  FUN_00537844(&pppppppuStack_b8);
LAB_00687880:
  pppppppuVar9 = (ulong *******)&pppppppuStack_b8;
  FUN_005558a0();
  __Unwind_Resume();
  pcStack_c8 = FUN_0068788c;
  iVar20 = 0;
  lStack_128 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_1a8 = 0;
  pppppppuStack_1b8 = (undefined8 *******)0x0;
  uStack_1b0 = 0;
  uVar28 = 0;
  pppppppuStack_1a0 = (ulong *******)pcVar16;
  uStack_e8 = param_7;
  pppppppuStack_e0 = param_2;
  pppppppuStack_d8 = pppppppuVar21;
  puStack_d0 = &stack0xfffffffffffffff0;
  do {
    while( true ) {
      while( true ) {
        pppppppuVar15 = param_5;
        func_0x00538a04(param_5,&pppppppuStack_1a0);
        pppppppuVar11 = pppppppuStack_1a0;
        if (((ulong)pppppppuVar15 & 1) != 0) goto LAB_00687b20;
        pppppppuVar15 = (ulong *******)((long)pppppppuStack_1a0 + 1);
        uStack_1bc = (uint)*(byte *)pppppppuStack_1a0;
        if (uStack_1bc == 0x1a) break;
        if (*(byte *)pppppppuStack_1a0 == 0x10) {
          pppppppuStack_1a0 = pppppppuVar15;
          func_0x00538a0c(pppppppuVar15,auStack_1c8);
          pppppppuStack_1a0 = pppppppuVar15;
          if ((pppppppuVar15 == (ulong *******)0x0) ||
             (uVar27 = (ulong)auStack_1c8[0], auStack_1c8[0] == 0)) goto LAB_00687b08;
          if (iVar20 == 0) {
            iVar20 = 1;
            uVar28 = uVar27;
          }
          else if (iVar20 == 2) {
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            pppppppuVar11 = pppppppuVar9;
            FUN_00686eb8(pppppppuVar9,2,uVar27,uVar17,param_5,&uStack_200,&uStack_201);
            if (((ulong)pppppppuVar11 & 1) == 0) {
              uVar28 = uStack_1b0;
              pppppppuVar13 = pppppppuStack_1b8;
              if (-1 < (long)uStack_1a8) {
                uVar28 = uStack_1a8 >> 0x38;
                pppppppuVar13 = &pppppppuStack_1b8;
              }
              if (((ulong)*param_4 & 1) == 0) {
                pppppppuVar11 = param_4;
                func_0x00699010(param_4);
              }
              else {
                pppppppuVar11 = (ulong *******)(((ulong)*param_4 & 0xfffffffffffffffe) + 8);
              }
              func_0x006882d8(uVar27,pppppppuVar13,uVar28,pppppppuVar11);
            }
            else {
              pppppppuVar11 = pppppppuVar9;
              if (uStack_1f8._5_1_ == '\x01') {
                FUN_005349b8(pppppppuVar9,uVar27,0xb);
              }
              else {
                FUN_005347ac(pppppppuVar9,uVar27,0xb,uStack_1f0,uStack_1e0);
              }
              func_0x00538b48(&uStack_198,param_5,&uStack_210,&pppppppuStack_1b8);
              FUN_00549a60(pppppppuVar11,uStack_210,&uStack_198);
              if ((pppppppuVar11 == (ulong *******)0x0) || (iStack_148 != 0)) goto LAB_00687b08;
            }
            iVar20 = 3;
            uVar28 = uVar27;
          }
        }
        else {
          pppppppuStack_1a0 = pppppppuVar15;
          func_0x00538a80(pppppppuVar11,&uStack_1bc,0);
          if ((uStack_1bc == 0) || ((uStack_1bc & 7) == 4)) {
            *(uint *)(param_5 + 10) = uStack_1bc - 1;
            pppppppuVar11 = pppppppuStack_1a0;
            goto LAB_00687b20;
          }
          pppppppuVar11 = pppppppuVar9;
          func_0x0068847c(pppppppuVar9,uStack_1bc,pppppppuStack_1a0);
          pppppppuStack_1a0 = pppppppuVar11;
          if (pppppppuVar11 == (ulong *******)0x0) goto LAB_00687b08;
        }
      }
      if (iVar20 != 1) break;
      pppppppuVar11 = pppppppuVar9;
      pppppppuStack_1a0 = pppppppuVar15;
      func_0x0068847c(pppppppuVar9,uVar28 << 3 | 2);
      pppppppuStack_1a0 = pppppppuVar11;
      if (pppppppuVar11 == (ulong *******)0x0) goto LAB_00687b08;
      iVar20 = 3;
    }
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    pppppppuVar11 = (ulong *******)&pppppppuStack_1a0;
    pppppppuStack_1a0 = pppppppuVar15;
    FUN_00533034(pppppppuVar11);
    if ((pppppppuStack_1a0 == (ulong *******)0x0) ||
       (pppppppuVar15 = param_5, FUN_00533074(param_5,pppppppuStack_1a0,pppppppuVar11,&uStack_198),
       pppppppuStack_1a0 = pppppppuVar15, pppppppuVar15 == (ulong *******)0x0)) {
      bVar26 = false;
    }
    else {
      if (iVar20 == 0) {
        FUN_004575b8(&pppppppuStack_1b8,&uStack_198);
        iVar20 = 2;
      }
      bVar26 = true;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_198);
  } while (bVar26);
LAB_00687b08:
  pppppppuVar11 = (ulong *******)0x0;
LAB_00687b20:
  pppppppuVar13 = &pppppppuStack_1b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_128) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_1b8);
    pppppppuVar14 = pppppppuVar13;
    __Unwind_Resume();
    pppppuStack_248 = &pppppppuStack_250;
    puStack_238 = (undefined1 *)&pppppppuStack_250;
    pcStack_218 = FUN_00687ba0;
    pppppppuStack_230 = param_4;
    pppppppuStack_228 = pppppppuVar13;
    ppuStack_220 = &puStack_d0;
    if ((long)*(short *)((long)pppppppuVar14 + 10) < 0) {
      ppppppuVar22 = pppppppuVar14[2];
      pppppuVar2 = ppppppuVar22[1];
      pppppppuStack_250 = (ulong *******)((long)ppppppuVar22[2] << 5);
      pppppuStack_248 = (undefined8 *****)**ppppppuVar22;
      bVar4 = *(byte *)((long)pppppuVar2 + 10);
      uStack_240 = 0;
      uStack_240._0_4_ = 0;
      while (pppppuStack_248 != pppppuVar2 || (uint)uStack_240 != bVar4) {
        func_0x0068830c(&puStack_238,
                        (long)pppppuStack_248 + (ulong)(((uint)uStack_240 & 0xff) << 5) + 0x18);
        func_0x005387bc(&pppppuStack_248);
      }
    }
    else {
      pppppppuStack_250 = (ulong *******)((ulong)*(ushort *)(pppppppuVar14 + 1) << 5);
      ppppppuVar22 = pppppppuVar14[2];
      for (lVar23 = (long)*(short *)((long)pppppppuVar14 + 10) << 5; lVar23 != 0;
          lVar23 = lVar23 + -0x20) {
        func_0x0068830c(&pppppuStack_248,ppppppuVar22 + 1);
        ppppppuVar22 = ppppppuVar22 + 4;
      }
    }
    return pppppppuStack_250;
  }
  return pppppppuVar11;
}



/* Entry: 0068788c; end: 00687b9f;  */

byte * FUN_0068788c(byte *param_1,byte *param_2,undefined8 param_3,ulong *param_4,byte *param_5)

{
  undefined8 ***pppuVar1;
  byte bVar2;
  byte *pbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  ulong *puVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  byte *pbStack_190;
  undefined8 **ppuStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  ulong *puStack_170;
  undefined8 ****ppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined1 uStack_141;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint auStack_108 [3];
  uint uStack_fc;
  undefined8 ****ppppuStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_88;
  long lStack_68;
  
  iVar14 = 0;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_e8 = 0;
  ppppuStack_f8 = (undefined8 *****)0x0;
  uStack_f0 = 0;
  uVar13 = 0;
  pbStack_e0 = param_2;
  do {
    while( true ) {
      while( true ) {
        pbVar3 = param_5;
        func_0x00538a04(param_5,&pbStack_e0);
        pbVar5 = pbStack_e0;
        if (((ulong)pbVar3 & 1) != 0) goto LAB_00687b20;
        pbVar3 = pbStack_e0 + 1;
        uStack_fc = (uint)*pbStack_e0;
        if (uStack_fc == 0x1a) break;
        if (*pbStack_e0 == 0x10) {
          pbStack_e0 = pbVar3;
          func_0x00538a0c(pbVar3,auStack_108);
          pbStack_e0 = pbVar3;
          if ((pbVar3 == (byte *)0x0) || (uVar12 = (ulong)auStack_108[0], auStack_108[0] == 0))
          goto LAB_00687b08;
          if (iVar14 == 0) {
            iVar14 = 1;
            uVar13 = uVar12;
          }
          else if (iVar14 == 2) {
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            pbVar5 = param_1;
            FUN_00686eb8(param_1,2,uVar12,param_3,param_5,&uStack_140,&uStack_141);
            if (((ulong)pbVar5 & 1) == 0) {
              uVar13 = uStack_f0;
              pppppuVar7 = (undefined8 *****)ppppuStack_f8;
              if (-1 < (long)uStack_e8) {
                uVar13 = uStack_e8 >> 0x38;
                pppppuVar7 = &ppppuStack_f8;
              }
              if ((*param_4 & 1) == 0) {
                puVar6 = param_4;
                func_0x00699010(param_4);
              }
              else {
                puVar6 = (ulong *)((*param_4 & 0xfffffffffffffffe) + 8);
              }
              func_0x006882d8(uVar12,pppppuVar7,uVar13,puVar6);
            }
            else {
              pbVar5 = param_1;
              if (uStack_138._5_1_ == '\x01') {
                FUN_005349b8(param_1,uVar12,0xb);
              }
              else {
                FUN_005347ac(param_1,uVar12,0xb,uStack_130,uStack_120);
              }
              func_0x00538b48(&uStack_d8,param_5,&uStack_150,&ppppuStack_f8);
              FUN_00549a60(pbVar5,uStack_150,&uStack_d8);
              if ((pbVar5 == (byte *)0x0) || (iStack_88 != 0)) goto LAB_00687b08;
            }
            iVar14 = 3;
            uVar13 = uVar12;
          }
        }
        else {
          pbStack_e0 = pbVar3;
          func_0x00538a80(pbVar5,&uStack_fc,0);
          if ((uStack_fc == 0) || ((uStack_fc & 7) == 4)) {
            *(uint *)(param_5 + 0x50) = uStack_fc - 1;
            pbVar5 = pbStack_e0;
            goto LAB_00687b20;
          }
          pbVar5 = param_1;
          func_0x0068847c(param_1,uStack_fc,pbStack_e0);
          pbStack_e0 = pbVar5;
          if (pbVar5 == (byte *)0x0) goto LAB_00687b08;
        }
      }
      if (iVar14 != 1) break;
      pbVar5 = param_1;
      pbStack_e0 = pbVar3;
      func_0x0068847c(param_1,uVar13 << 3 | 2);
      pbStack_e0 = pbVar5;
      if (pbVar5 == (byte *)0x0) goto LAB_00687b08;
      iVar14 = 3;
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    ppbVar4 = &pbStack_e0;
    pbStack_e0 = pbVar3;
    FUN_00533034(ppbVar4);
    if ((pbStack_e0 == (byte *)0x0) ||
       (pbVar5 = param_5, FUN_00533074(param_5,pbStack_e0,ppbVar4,&uStack_d8), pbStack_e0 = pbVar5,
       pbVar5 == (byte *)0x0)) {
      bVar11 = false;
    }
    else {
      if (iVar14 == 0) {
        FUN_004575b8(&ppppuStack_f8,&uStack_d8);
        iVar14 = 2;
      }
      bVar11 = true;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_d8);
  } while (bVar11);
LAB_00687b08:
  pbVar5 = (byte *)0x0;
LAB_00687b20:
  pppppuVar7 = &ppppuStack_f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pbVar5;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_f8);
  pppppuVar8 = pppppuVar7;
  __Unwind_Resume();
  ppuStack_188 = (undefined8 **)&pbStack_190;
  puStack_178 = (undefined1 *)&pbStack_190;
  pcStack_158 = FUN_00687ba0;
  puStack_170 = param_4;
  ppppuStack_168 = pppppuVar7;
  puStack_160 = &stack0xfffffffffffffff0;
  if ((long)*(short *)((long)pppppuVar8 + 10) < 0) {
    ppppuVar9 = pppppuVar8[2];
    pppuVar1 = ppppuVar9[1];
    pbStack_190 = (byte *)((long)ppppuVar9[2] << 5);
    ppuStack_188 = **ppppuVar9;
    bVar2 = *(byte *)((long)pppuVar1 + 10);
    uStack_180 = 0;
    uStack_180._0_4_ = 0;
    while ((undefined8 ***)ppuStack_188 != pppuVar1 || (uint)uStack_180 != bVar2) {
      func_0x0068830c(&puStack_178,
                      (long)ppuStack_188 + (ulong)(((uint)uStack_180 & 0xff) << 5) + 0x18);
      func_0x005387bc(&ppuStack_188);
    }
  }
  else {
    pbStack_190 = (byte *)((ulong)*(ushort *)(pppppuVar8 + 1) << 5);
    ppppuVar9 = pppppuVar8[2];
    for (lVar10 = (long)*(short *)((long)pppppuVar8 + 10) << 5; lVar10 != 0; lVar10 = lVar10 + -0x20
        ) {
      func_0x0068830c(&ppuStack_188,ppppuVar9 + 1);
      ppppuVar9 = ppppuVar9 + 4;
    }
  }
  return pbStack_190;
}



/* Entry: 00687ba0; end: 00687c5f;  */

long FUN_00687ba0(long param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined1 *puStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = (undefined1 *)&lStack_40;
  puStack_28 = (undefined1 *)&lStack_40;
  if ((long)*(short *)(param_1 + 10) < 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = (undefined1 *)puVar3[1];
    lStack_40 = puVar3[2] << 5;
    puStack_38 = *(undefined1 **)*puVar3;
    bVar2 = puVar1[10];
    uStack_30 = 0;
    uStack_30._0_4_ = 0;
    while (puStack_38 != puVar1 || (uint)uStack_30 != bVar2) {
      func_0x0068830c(&puStack_28,puStack_38 + (ulong)(((uint)uStack_30 & 0xff) << 5) + 0x18);
      func_0x005387bc(&puStack_38);
    }
  }
  else {
    lStack_40 = (ulong)*(ushort *)(param_1 + 8) << 5;
    lVar4 = *(long *)(param_1 + 0x10);
    for (lVar5 = (long)*(short *)(param_1 + 10) << 5; lVar5 != 0; lVar5 = lVar5 + -0x20) {
      func_0x0068830c(&puStack_38,lVar4 + 8);
      lVar4 = lVar4 + 0x20;
    }
  }
  return lStack_40;
}



/* Entry: 00687c60; end: 00687d5b;  */

dword * FUN_00687c60(long *param_1)

{
  int iVar1;
  long lVar2;
  dword *pdVar3;
  dword *pdVar4;
  uint uVar5;
  
  iVar1 = *(int *)(&UNK_00823b54 + (ulong)*(byte *)(param_1 + 1) * 4);
  if (*(char *)((long)param_1 + 9) != '\x01') {
    if (iVar1 == 10) {
      pdVar3 = (dword *)*param_1;
      if ((*(byte *)((long)param_1 + 10) >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00687d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)pdVar3 + 0x70))();
        return pdVar3;
      }
      pdVar4 = pdVar3;
      func_0x0069af04();
                    /* WARNING: Could not recover jumptable at 0x006993b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(pdVar4 + 10) + 0x18))(pdVar3);
      return pdVar3;
    }
    if (iVar1 != 9) {
      return (dword *)0x0;
    }
    lVar2 = *param_1;
    FUN_00547748(lVar2);
    goto LAB_00687d50;
  }
  switch(iVar1) {
  case 1:
  case 3:
  case 6:
  case 8:
    uVar5 = *(uint *)(*param_1 + 4);
    lVar2 = (ulong)uVar5 << 2;
    break;
  case 2:
  case 4:
  case 5:
    uVar5 = *(uint *)(*param_1 + 4);
    lVar2 = (ulong)uVar5 << 3;
    break;
  case 7:
    uVar5 = *(int *)(*param_1 + 4) + 8;
    if (*(int *)(*param_1 + 4) < 1) {
      uVar5 = 0;
    }
    return (dword *)((ulong)uVar5 + 0x10);
  case 9:
    lVar2 = *param_1;
    FUN_00688340(lVar2);
    goto LAB_00687d50;
  case 10:
    lVar2 = *param_1;
    func_0x00687de0(lVar2);
LAB_00687d50:
    return (dword *)(lVar2 + 0x18);
  default:
    return (dword *)0x0;
  }
  pdVar3 = (dword *)(lVar2 + 0x18);
  if ((int)uVar5 < 1) {
    pdVar3 = &MACH_HEADER.ncmds;
  }
  return pdVar3;
}



/* Entry: 00687d5c; end: 00687ee7;  */

void FUN_00687d5c(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined1 *param_6)

{
  int iVar1;
  
  FUN_00686c64(param_4,param_3,param_5);
  if ((int)param_4 != 0) {
    iVar1 = *(int *)(&UNK_00810e8c + (ulong)*(byte *)(param_5 + 0xc) * 4);
    *param_6 = 0;
    if (((param_2 == 2) && ((*(byte *)(param_5 + 0xd) & 1) != 0)) && (iVar1 - 5U < 0xfffffffd)) {
      *param_6 = 1;
    }
  }
  return;
}



/* Entry: 00687ee8; end: 00687f2b;  */

undefined8 * FUN_00687ee8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
  }
  else {
    puVar2 = param_1;
    FUN_00687f2c();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 00687f2c; end: 00687fdb;  */

long FUN_00687f2c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_00666d10(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_00666d44();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  func_0x0066bd70(param_1,&plStack_58);
  lVar3 = param_1[1];
  FUN_00666d80(&plStack_58);
  return lVar3;
}



/* Entry: 00687fdc; end: 0068808b;  */

void FUN_00687fdc(ulong *param_1,long *param_2,ulong param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong *puVar3;
  long *plVar4;
  ulong *extraout_x9;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2[1];
  if ((uVar5 & 1) != 0) {
    uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
  }
  uVar6 = param_1[2];
  uVar1 = uVar6 == uVar5;
  plVar4 = param_2;
  if ((bool)uVar1) {
    puVar3 = param_1;
    FUN_0068808c();
    iVar2 = (int)puVar3;
    if (iVar2 == 0) {
      func_0x006884b4();
      puVar3 = param_1;
      if (!(bool)uVar1) {
        puVar3 = extraout_x9;
      }
      uVar5 = param_1[1];
      func_0x00688440();
      if ((int)uVar5 < iVar2) {
        uVar5 = puVar3[(int)param_1[1]];
        func_0x00688440();
        puVar3[iVar2] = uVar5;
      }
      uVar5 = param_1[1];
      *(int *)(param_1 + 1) = (int)uVar5 + 1;
      puVar3[(int)uVar5] = (ulong)param_2;
      uVar5 = *param_1;
      if ((uVar5 & 1) == 0) {
        return;
      }
      *(int *)(uVar5 - 1) = *(int *)(uVar5 - 1) + 1;
      return;
    }
  }
  func_0x00688454();
  if ((param_3 == 0) && (uVar6 != 0)) {
    if (plVar4 != (long *)0x0) {
      FUN_00550ffc(uVar6,plVar4,FUN_00538668);
    }
  }
  else if (uVar6 != param_3) {
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar6);
    (**(code **)(*plVar4 + 0x20))();
  }
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    FUN_0054cdf0(param_1,1);
LAB_00688168:
    uVar6 = *param_1;
  }
  else {
    puVar3 = param_1;
    FUN_0068808c();
    uVar5 = param_1[1];
    iVar2 = (int)puVar3;
    if (iVar2 != 0) {
      uVar6 = *param_1;
      puVar3 = param_1;
      if ((uVar6 & 1) != 0) {
        puVar3 = (ulong *)(uVar6 + (long)(int)uVar5 * 8 + 7);
      }
      if ((*puVar3 != 0) && (param_1[2] == 0)) {
        func_0x006884f0();
        uVar6 = *param_1;
      }
      goto LAB_00688178;
    }
    func_0x00688440();
    if ((int)uVar5 < iVar2) {
      puVar3 = param_1;
      if ((*param_1 & 1) != 0) {
        puVar3 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar5 = *puVar3;
      func_0x00688440();
      puVar3 = param_1;
      if ((*param_1 & 1) != 0) {
        puVar3 = (ulong *)(*param_1 + (long)iVar2 * 8 + 7);
      }
      *puVar3 = uVar5;
      goto LAB_00688168;
    }
    uVar6 = *param_1;
    if ((uVar6 & 1) == 0) goto LAB_00688178;
  }
  *(int *)(uVar6 - 1) = *(int *)(uVar6 - 1) + 1;
LAB_00688178:
  uVar5 = param_1[1];
  *(int *)(param_1 + 1) = (int)uVar5 + 1;
  if ((uVar6 & 1) != 0) {
    param_1 = (ulong *)(uVar6 + (long)(int)uVar5 * 8 + 7);
  }
  *param_1 = (ulong)plVar4;
  return;
}



/* Entry: 0068808c; end: 006880b3;  */

bool FUN_0068808c(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    return uVar1 != 0;
  }
  return *(int *)((long)param_1 + 0xc) < *(int *)(uVar1 - 1);
}



/* Entry: 006880b4; end: 0068822f;  */

void FUN_006880b4(ulong *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_3 == 0) && (param_4 != 0)) {
    if (param_2 != (long *)0x0) {
      FUN_00550ffc(param_4,param_2,FUN_00538668);
    }
  }
  else if (param_4 != param_3) {
    (**(code **)(*param_2 + 0x10))(param_2,param_4);
    (**(code **)(*param_2 + 0x20))();
  }
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1]) {
    FUN_0054cdf0(param_1,1);
LAB_00688168:
    uVar3 = *param_1;
  }
  else {
    puVar2 = param_1;
    FUN_0068808c();
    uVar4 = param_1[1];
    iVar1 = (int)puVar2;
    if (iVar1 != 0) {
      uVar3 = *param_1;
      puVar2 = param_1;
      if ((uVar3 & 1) != 0) {
        puVar2 = (ulong *)(uVar3 + (long)(int)uVar4 * 8 + 7);
      }
      if ((*puVar2 != 0) && (param_1[2] == 0)) {
        func_0x006884f0();
        uVar3 = *param_1;
      }
      goto LAB_00688178;
    }
    func_0x00688440();
    if ((int)uVar4 < iVar1) {
      puVar2 = param_1;
      if ((*param_1 & 1) != 0) {
        puVar2 = (ulong *)(*param_1 + (long)(int)param_1[1] * 8 + 7);
      }
      uVar4 = *puVar2;
      func_0x00688440();
      puVar2 = param_1;
      if ((*param_1 & 1) != 0) {
        puVar2 = (ulong *)(*param_1 + (long)iVar1 * 8 + 7);
      }
      *puVar2 = uVar4;
      goto LAB_00688168;
    }
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) goto LAB_00688178;
  }
  *(int *)(uVar3 - 1) = *(int *)(uVar3 - 1) + 1;
LAB_00688178:
  uVar4 = param_1[1];
  *(int *)(param_1 + 1) = (int)uVar4 + 1;
  if ((uVar3 & 1) != 0) {
    param_1 = (ulong *)(uVar3 + (long)(int)uVar4 * 8 + 7);
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Entry: 00688230; end: 006882d7;  */

ulong * FUN_00688230(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uStack_48;
  
  puVar2 = param_1;
  while ((puVar2 < param_2 && (func_0x006883f8(), puVar2 = param_1, param_1 != (ulong *)0x0))) {
    lVar1 = param_3[2];
    (*(code *)param_3[1])(lVar1,uStack_48);
    if ((int)lVar1 == 0) {
      param_1 = (ulong *)param_3[3];
      if ((*param_1 & 1) == 0) {
        func_0x00699010();
      }
      else {
        param_1 = (ulong *)((*param_1 & 0xfffffffffffffffe) + 8);
      }
      FUN_006a4bc0();
    }
    else {
      param_1 = (ulong *)*param_3;
      FUN_00533cb4(param_1,uStack_48);
    }
  }
  return puVar2;
}



/* Entry: 006882d8; end: 0068833f;  */

void FUN_006882d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_006a4c8c(param_4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00779b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm_009989c8)();
  return;
}



/* Entry: 00688340; end: 006883a3;  */

long FUN_00688340(byte *param_1)

{
  undefined1 in_ZR;
  uint uVar1;
  long lVar3;
  byte *extraout_x9;
  long lVar4;
  ulong uVar5;
  byte *pbVar2;
  
  if ((*param_1 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (long)*(int *)(param_1 + 0xc) * 8 + 0x10;
  }
  pbVar2 = param_1;
  func_0x00688440();
  uVar1 = (uint)pbVar2;
  func_0x006884b4();
  if (!(bool)in_ZR) {
    param_1 = extraout_x9;
  }
  for (uVar5 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar5 != 0; uVar5 = uVar5 - 1) {
    lVar3 = *(long *)param_1;
    FUN_006883a4(lVar3);
    lVar4 = lVar3 + lVar4;
    param_1 = param_1 + 8;
  }
  return lVar4;
}



/* Entry: 006883a4; end: 006883bb;  */

long FUN_006883a4(long param_1)

{
  FUN_00547748();
  return param_1 + 0x18;
}



/* Entry: 006883bc; end: 00688517;  */

void FUN_006883bc(void)

{
  return;
}



/* Entry: 00688518; end: 00688623;  */

void FUN_00688518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar8;
  bool bVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong *extraout_x8_03;
  ulong *extraout_x8_04;
  undefined8 extraout_x8_05;
  int *piVar22;
  undefined8 *extraout_x8_06;
  ulong *extraout_x11;
  ulong *extraout_x11_00;
  ulong uVar23;
  int iVar24;
  ulong *puVar25;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar26;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *puVar27;
  code *pcVar28;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong auStack_118 [2];
  undefined1 uStack_101;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined8 *puStack_98;
  undefined4 *puStack_90;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  puVar27 = &stack0xfffffffffffffff0;
  uStack_100 = param_4;
  func_0x0068933c();
  uStack_fc = (undefined4)param_2;
  puVar10 = &UNK_00913743;
  uStack_38 = extraout_x8;
  FUN_00532c74();
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puVar11 = &uStack_130;
  puVar19 = &uStack_fc;
  puStack_68 = puVar10;
  uStack_60 = param_2;
  func_0x0066e6e8();
  puStack_98 = puVar11;
  puStack_90 = puVar19;
  FUN_00532c74();
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  puVar11 = &uStack_148;
  puVar20 = &uStack_100;
  uStack_c8 = param_3;
  puStack_c0 = puVar19;
  func_0x0066e6e8();
  puStack_f8 = puVar11;
  puStack_f0 = puVar20;
  FUN_00575ebc(auStack_118,&puStack_68,&puStack_98,&uStack_c8,&puStack_f8);
  func_0x006893ac(uStack_101);
  puVar15 = extraout_x11;
  if (in_NG == in_OV) {
    puVar15 = extraout_x8_00;
  }
  func_0x005535c0(param_1);
  puVar12 = auStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0068938c();
  func_0x00689320();
  func_0x0068930c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar18 = auStack_118;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0068938c();
  func_0x00689320();
  pcVar28 = FUN_00688624;
  func_0x0068937c();
  puVar7 = auStack_150;
  puVar11 = extraout_x8_01;
  puVar25 = auStack_118;
  do {
    puVar13 = puVar7 + -0x70;
    puVar14 = (ulong *)(puVar7 + -0x70);
    *(ulong **)(puVar7 + -0x20) = puVar25;
    *(ulong **)(puVar7 + -0x18) = puVar12;
    *(undefined1 **)(puVar7 + -0x10) = puVar27;
    *(code **)(puVar7 + -8) = pcVar28;
    func_0x0068933c();
    *(undefined8 *)(puVar7 + -0x28) = extraout_x8_02;
    FUN_00532c74();
    *(ulong **)(puVar7 + -0x58) = puVar18;
    *(ulong **)(puVar7 + -0x50) = puVar15;
    FUN_0055d0c8(puVar7 + -0x70,puVar7 + -0x58);
    func_0x006893ac(puVar7[-0x59]);
    puVar18 = extraout_x11_00;
    if (in_NG == in_OV) {
      puVar18 = extraout_x8_03;
    }
    func_0x005535c0(puVar11);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0068930c(*(undefined8 *)(puVar7 + -0x28));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0068937c();
    *(ulong *)(puVar7 + -0xd0) = unaff_x28;
    *(ulong *)(puVar7 + -200) = unaff_x27;
    *(ulong **)(puVar7 + -0xc0) = unaff_x26;
    *(ulong **)(puVar7 + -0xb8) = unaff_x25;
    *(ulong *)(puVar7 + -0xb0) = unaff_x24;
    *(ulong **)(puVar7 + -0xa8) = unaff_x23;
    *(undefined ***)(puVar7 + -0xa0) = unaff_x22;
    *(ulong **)(puVar7 + -0x98) = unaff_x21;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x70;
    *(undefined1 **)(puVar7 + -0x88) = puVar13;
    *(undefined1 **)(puVar7 + -0x80) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x78) = FUN_006886b4;
    puVar27 = puVar7 + -0x80;
    puVar15 = puVar14;
    func_0x0068933c();
    *(undefined8 *)(puVar7 + -0xe0) = extraout_x8_05;
    uVar8 = (int)puVar15 == (int)puVar18[6];
    if ((int)puVar15 < (int)puVar18[6]) {
      func_0x006893e4();
      puVar15 = (ulong *)(puVar7 + -0x1b8);
      func_0x00689364();
      puVar18 = unaff_x21;
    }
    else {
      iVar24 = (int)puVar14;
      uVar8 = *(int *)((long)puVar18 + 0x34) == iVar24;
      if (iVar24 <= *(int *)((long)puVar18 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = puVar18 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)puVar18[4];
        unaff_x22 = &PTR_PTR_00b25a18;
        puVar15 = puVar18;
LAB_00688788:
        uVar8 = unaff_x25 == unaff_x26;
        if ((bool)uVar8) {
          *(undefined ***)(puVar7 + -0x110) = &PTR_FUN_00a0e368;
          *(undefined8 *)(puVar7 + -0x108) = 0;
          *(undefined8 *)(puVar7 + -0xf8) = 0;
          *(undefined8 *)(puVar7 + -0xf0) = 0;
          *(undefined8 *)(puVar7 + -0x100) = 0;
          *(int *)(puVar7 + -0xe8) = iVar24;
          *(undefined4 *)(puVar7 + -0x100) = 4;
          puVar12 = unaff_x23;
          if ((puVar18[3] & 1) != 0) {
            puVar12 = (ulong *)(puVar18[3] + 7);
          }
          uVar6 = (long)(int)puVar18[4];
          puVar18 = puVar12;
          while (uVar6 != 0) {
            uVar23 = uVar6 >> 1;
            uVar2 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            uVar6 = uVar23;
            if (*(int *)(puVar18[uVar23] + 0x28) <= iVar24) {
              uVar6 = uVar2;
              puVar18 = puVar18 + uVar23 + 1;
            }
          }
          uVar8 = puVar18 == puVar12;
          if ((bool)uVar8) {
            *(int *)(puVar7 + -0x238) = iVar24;
            puVar10 = &UNK_00913829;
            FUN_00532c74();
            *(undefined **)(puVar7 + -0x1b8) = puVar10;
            *(ulong **)(puVar7 + -0x1b0) = puVar15;
            *(undefined8 *)(puVar7 + -0x170) = 0;
            *(undefined8 *)(puVar7 + -0x168) = 0;
            *(undefined8 *)(puVar7 + -0x160) = 0;
            func_0x006893c8();
            *(undefined **)(puVar7 + -0x200) = puVar10;
            *(ulong **)(puVar7 + -0x1f8) = puVar15;
            func_0x006893f0();
            FUN_00575d30();
            func_0x006893ac(puVar7[-0x129]);
            func_0x005535c0(puVar7 + -0x220);
            func_0x00689384();
            func_0x006893c0();
            puVar15 = (ulong *)(puVar7 + -0x220);
            func_0x00689364();
            FUN_006697d4(puVar7 + -0x220);
          }
          else {
            func_0x00689404(*(undefined8 *)(puVar18[-1] + 0x20));
            FUN_0066f2d4(puVar7 + -0x1b8);
            func_0x00689404(*(undefined8 *)(puVar18[-1] + 0x18));
            FUN_0067d4a8(puVar7 + -0x1b8);
            FUN_006696a4(puVar7 + -0x2a0,puVar7 + -0x1b8);
            FUN_006696a4(puVar7 + -0x200,puVar7 + -0x2a0);
            puVar15 = (ulong *)(puVar7 + -0x200);
            FUN_006696a4(extraout_x8_04 + 1);
            *extraout_x8_04 = 0;
            FUN_0067d448(puVar7 + -0x200);
            FUN_0067d448(puVar7 + -0x2a0);
            func_0x00689374();
          }
          puVar17 = (ulong *)(puVar7 + -0x110);
          FUN_0067d78c();
          goto LAB_00688734;
        }
        unaff_x27 = *unaff_x25;
        iVar3 = *(int *)(unaff_x27 + 0x28);
        if (iVar3 == 0) {
          *(undefined4 *)(puVar7 + -0x238) = 0;
          puVar10 = &UNK_009137aa;
          FUN_00532c74();
          *(undefined **)(puVar7 + -0x1b8) = puVar10;
          *(ulong **)(puVar7 + -0x1b0) = puVar15;
          *(undefined8 *)(puVar7 + -0x170) = 0;
          *(undefined8 *)(puVar7 + -0x168) = 0;
          *(undefined8 *)(puVar7 + -0x160) = 0;
          func_0x006893c8();
          *(undefined **)(puVar7 + -0x200) = puVar10;
          *(ulong **)(puVar7 + -0x1f8) = puVar15;
          puVar10 = &UNK_009137bb;
          FUN_00532c74();
          *(undefined **)(puVar7 + -0x110) = puVar10;
          *(ulong **)(puVar7 + -0x108) = puVar15;
          func_0x006893f0();
          FUN_00575ddc();
          func_0x006893ac(puVar7[-0x129]);
          func_0x005535c0(puVar7 + -0x220);
          func_0x00689384();
          func_0x006893c0();
          puVar15 = (ulong *)(puVar7 + -0x220);
          func_0x00689364();
          puVar17 = (ulong *)(puVar7 + -0x220);
        }
        else {
          iVar26 = (int)unaff_x24;
          if ((iVar26 == 0) || (uVar8 = iVar3 == iVar26, iVar26 < iVar3)) break;
          *(int *)(puVar7 + -0x208) = iVar3;
          *(int *)(puVar7 + -0x204) = iVar26;
          puVar10 = &UNK_009137c7;
          FUN_00532c74();
          *(undefined **)(puVar7 + -0x1b8) = puVar10;
          *(ulong **)(puVar7 + -0x1b0) = puVar15;
          *(undefined8 *)(puVar7 + -0x238) = 0;
          *(undefined8 *)(puVar7 + -0x230) = 0;
          *(undefined8 *)(puVar7 + -0x228) = 0;
          puVar13 = puVar7 + -0x238;
          puVar21 = puVar7 + -0x204;
          func_0x0066e6e8();
          *(undefined1 **)(puVar7 + -0x200) = puVar13;
          *(undefined1 **)(puVar7 + -0x1f8) = puVar21;
          puVar10 = &UNK_00913803;
          FUN_00532c74();
          *(undefined **)(puVar7 + -0x110) = puVar10;
          *(undefined1 **)(puVar7 + -0x108) = puVar21;
          *(undefined8 *)(puVar7 + -0x250) = 0;
          *(undefined8 *)(puVar7 + -0x248) = 0;
          *(undefined8 *)(puVar7 + -0x240) = 0;
          puVar13 = puVar7 + -0x250;
          puVar21 = puVar7 + -0x208;
          func_0x0066e6e8();
          *(undefined1 **)(puVar7 + -0x140) = puVar13;
          *(undefined1 **)(puVar7 + -0x138) = puVar21;
          pcVar16 = ".";
          FUN_00532c74();
          *(char **)(puVar7 + -0x170) = pcVar16;
          *(undefined1 **)(puVar7 + -0x168) = puVar21;
          puVar14 = (ulong *)(puVar7 + -0x220);
          FUN_0054dd58(puVar7 + -0x220,puVar7 + -0x1b8,puVar7 + -0x200,puVar7 + -0x110,
                       puVar7 + -0x140,puVar7 + -0x170);
          func_0x006893ac(puVar7[-0x209]);
          func_0x005535c0(puVar7 + -600);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7 + -0x220);
          func_0x00689334();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7 + -0x238);
          puVar15 = (ulong *)(puVar7 + -600);
          func_0x00689364();
          puVar17 = (ulong *)(puVar7 + -600);
        }
        goto LAB_00688730;
      }
      func_0x006893e4();
      puVar15 = (ulong *)(puVar7 + -0x1b8);
      func_0x00689364();
    }
    puVar17 = (ulong *)(puVar7 + -0x1b8);
LAB_00688730:
    FUN_006697d4();
LAB_00688734:
    func_0x0068930c(*(undefined8 *)(puVar7 + -0xe0));
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x0068934c();
    func_0x006893b8();
    func_0x00689374();
    pcVar28 = FUN_00688b8c;
    func_0x00689394();
    uVar5 = (int)puVar17[6] - 1;
    in_OV = SBORROW4(uVar5,3);
    in_NG = (int)puVar17[6] + -4 < 0;
    in_ZR = uVar5 == 3;
    puVar11 = extraout_x8_06;
    puVar12 = extraout_x8_04;
    puVar25 = puVar14;
    unaff_x21 = puVar18;
    if (uVar5 < 3) {
      uVar5 = *(int *)((long)puVar17 + 0x34) - 1;
      in_OV = SBORROW4(uVar5,2);
      in_NG = *(int *)((long)puVar17 + 0x34) + -3 < 0;
      in_ZR = uVar5 == 2;
      if (uVar5 < 2) {
        uVar5 = (int)puVar17[7] - 1;
        in_OV = SBORROW4(uVar5,2);
        in_NG = (int)puVar17[7] + -3 < 0;
        in_ZR = uVar5 == 2;
        if (uVar5 < 2) {
          bVar1 = 2 < *(uint *)((long)puVar17 + 0x3c) - 1;
          bVar9 = (1 << (ulong)(*(uint *)((long)puVar17 + 0x3c) & 0x1f) & 0xdU) == 0;
          in_ZR = bVar1 || bVar9;
          in_NG = '\0';
          in_OV = '\0';
          if (bVar1 || bVar9) {
            puVar18 = (ulong *)&UNK_0091397f;
            puVar7 = puVar7 + -0x2a0;
          }
          else {
            uVar5 = (int)puVar17[8] - 1;
            in_OV = SBORROW4(uVar5,2);
            in_NG = (int)puVar17[8] + -3 < 0;
            in_ZR = uVar5 == 2;
            if (uVar5 < 2) {
              uVar5 = *(int *)((long)puVar17 + 0x44) - 1;
              in_OV = SBORROW4(uVar5,2);
              in_NG = *(int *)((long)puVar17 + 0x44) + -3 < 0;
              in_ZR = uVar5 == 2;
              if (uVar5 < 2) {
                *extraout_x8_06 = 0;
                return;
              }
              puVar18 = (ulong *)&UNK_00913a3b;
              puVar7 = puVar7 + -0x2a0;
            }
            else {
              puVar18 = (ulong *)&UNK_009139dc;
              puVar7 = puVar7 + -0x2a0;
            }
          }
        }
        else {
          puVar18 = (ulong *)&UNK_00913912;
          puVar7 = puVar7 + -0x2a0;
        }
      }
      else {
        puVar18 = (ulong *)&UNK_009138c1;
        puVar7 = puVar7 + -0x2a0;
      }
    }
    else {
      puVar18 = (ulong *)&UNK_00913866;
      puVar7 = puVar7 + -0x2a0;
    }
  } while( true );
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_0066f2d4(puVar7 + -0x1b8);
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_0067d4a8(puVar7 + -0x1b8);
  puVar17 = (ulong *)(puVar7 + -0x1b8);
  FUN_00688b8c(puVar7 + -0x200);
  unaff_x28 = *(ulong *)(puVar7 + -0x200);
  if (unaff_x28 == 0) {
    func_0x006893b8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *extraout_x8_04 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar22 = (int *)(unaff_x28 - 1);
      do {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar22,0x10);
        if (bVar1) {
          *piVar22 = *piVar22 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar17 = extraout_x8_04;
    FUN_00689244();
    func_0x006893b8();
  }
  func_0x00689374();
  unaff_x25 = unaff_x25 + 1;
  if (unaff_x28 != 0) goto LAB_00688734;
  goto LAB_00688788;
}



/* Entry: 00688624; end: 006886b3;  */

void FUN_00688624(undefined8 *param_1,undefined *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined1 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  undefined *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  int *piVar15;
  undefined8 *extraout_x8_03;
  ulong *extraout_x11;
  ulong uVar16;
  ulong *unaff_x19;
  int iVar17;
  undefined1 *unaff_x20;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar18;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar10 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0068933c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    FUN_00532c74();
    *(undefined **)((long)register0x00000008 + -0x58) = param_2;
    *(ulong **)((long)register0x00000008 + -0x50) = param_3;
    FUN_0055d0c8((undefined1 *)((long)register0x00000008 + -0x70),
                 (undefined1 *)((long)register0x00000008 + -0x58));
    func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x59));
    puVar14 = extraout_x11;
    if (in_NG == in_OV) {
      puVar14 = extraout_x8_00;
    }
    func_0x005535c0(param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0068930c(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0068937c();
    *(ulong *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -200) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x88) = puVar9;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_006886b4;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar9 = puVar10;
    func_0x0068933c();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = extraout_x8_02;
    uVar7 = (int)puVar9 == (int)puVar14[6];
    if ((int)puVar9 < (int)puVar14[6]) {
      func_0x006893e4();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00689364();
      puVar14 = unaff_x21;
    }
    else {
      iVar17 = (int)puVar10;
      uVar7 = *(int *)((long)puVar14 + 0x34) == iVar17;
      if (iVar17 <= *(int *)((long)puVar14 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = puVar14 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)puVar14[4];
        unaff_x22 = &PTR_PTR_00b25a18;
        param_3 = puVar14;
LAB_00688788:
        uVar7 = unaff_x25 == unaff_x26;
        if ((bool)uVar7) {
          *(undefined ***)((long)register0x00000008 + -0x110) = &PTR_FUN_00a0e368;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(int *)((long)register0x00000008 + -0xe8) = iVar17;
          *(undefined4 *)((long)register0x00000008 + -0x100) = 4;
          puVar13 = unaff_x23;
          if ((puVar14[3] & 1) != 0) {
            puVar13 = (ulong *)(puVar14[3] + 7);
          }
          uVar6 = (long)(int)puVar14[4];
          puVar14 = puVar13;
          while (uVar6 != 0) {
            uVar16 = uVar6 >> 1;
            uVar2 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            uVar6 = uVar16;
            if (*(int *)(puVar14[uVar16] + 0x28) <= iVar17) {
              uVar6 = uVar2;
              puVar14 = puVar14 + uVar16 + 1;
            }
          }
          uVar7 = puVar14 == puVar13;
          if ((bool)uVar7) {
            *(int *)((long)register0x00000008 + -0x238) = iVar17;
            puVar12 = &UNK_00913829;
            FUN_00532c74();
            *(undefined **)((long)register0x00000008 + -0x1b8) = puVar12;
            *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
            *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
            func_0x006893c8();
            *(undefined **)((long)register0x00000008 + -0x200) = puVar12;
            *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
            func_0x006893f0();
            FUN_00575d30();
            func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x129));
            func_0x005535c0((undefined1 *)((long)register0x00000008 + -0x220));
            func_0x00689384();
            func_0x006893c0();
            param_3 = (ulong *)((long)register0x00000008 + -0x220);
            func_0x00689364();
            FUN_006697d4((undefined1 *)((long)register0x00000008 + -0x220));
          }
          else {
            func_0x00689404(*(undefined8 *)(puVar14[-1] + 0x20));
            FUN_0066f2d4((undefined1 *)((long)register0x00000008 + -0x1b8));
            func_0x00689404(*(undefined8 *)(puVar14[-1] + 0x18));
            FUN_0067d4a8((undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_006696a4((undefined1 *)((long)register0x00000008 + -0x2a0),
                         (undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_006696a4((undefined1 *)((long)register0x00000008 + -0x200),
                         (undefined1 *)((long)register0x00000008 + -0x2a0));
            param_3 = (ulong *)((long)register0x00000008 + -0x200);
            FUN_006696a4(extraout_x8_01 + 1);
            *extraout_x8_01 = 0;
            FUN_0067d448((undefined1 *)((long)register0x00000008 + -0x200));
            FUN_0067d448((undefined1 *)((long)register0x00000008 + -0x2a0));
            func_0x00689374();
          }
          puVar13 = (ulong *)((long)register0x00000008 + -0x110);
          FUN_0067d78c();
          goto LAB_00688734;
        }
        unaff_x27 = *unaff_x25;
        iVar3 = *(int *)(unaff_x27 + 0x28);
        if (iVar3 == 0) {
          *(undefined4 *)((long)register0x00000008 + -0x238) = 0;
          puVar12 = &UNK_009137aa;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
          func_0x006893c8();
          *(undefined **)((long)register0x00000008 + -0x200) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
          puVar12 = &UNK_009137bb;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x108) = param_3;
          func_0x006893f0();
          FUN_00575ddc();
          func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x129));
          func_0x005535c0((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00689384();
          func_0x006893c0();
          param_3 = (ulong *)((long)register0x00000008 + -0x220);
          func_0x00689364();
          puVar13 = (ulong *)((long)register0x00000008 + -0x220);
        }
        else {
          iVar18 = (int)unaff_x24;
          if ((iVar18 == 0) || (uVar7 = iVar3 == iVar18, iVar18 < iVar3)) break;
          *(int *)((long)register0x00000008 + -0x208) = iVar3;
          *(int *)((long)register0x00000008 + -0x204) = iVar18;
          puVar12 = &UNK_009137c7;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar12;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x238);
          puVar9 = (undefined1 *)((long)register0x00000008 + -0x204);
          func_0x0066e6e8();
          *(undefined1 **)((long)register0x00000008 + -0x200) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -0x1f8) = puVar9;
          puVar12 = &UNK_00913803;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0x108) = puVar9;
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x250);
          puVar9 = (undefined1 *)((long)register0x00000008 + -0x208);
          func_0x0066e6e8();
          *(undefined1 **)((long)register0x00000008 + -0x140) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -0x138) = puVar9;
          pcVar11 = ".";
          FUN_00532c74();
          *(char **)((long)register0x00000008 + -0x170) = pcVar11;
          *(undefined1 **)((long)register0x00000008 + -0x168) = puVar9;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x220);
          FUN_0054dd58((undefined1 *)((long)register0x00000008 + -0x220),
                       (undefined1 *)((long)register0x00000008 + -0x1b8),
                       (undefined1 *)((long)register0x00000008 + -0x200),
                       (undefined1 *)((long)register0x00000008 + -0x110),
                       (undefined1 *)((long)register0x00000008 + -0x140),
                       (undefined1 *)((long)register0x00000008 + -0x170));
          func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x209));
          func_0x005535c0((undefined1 *)((long)register0x00000008 + -600));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00689334();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x238));
          param_3 = (ulong *)((long)register0x00000008 + -600);
          func_0x00689364();
          puVar13 = (ulong *)((long)register0x00000008 + -600);
        }
        goto LAB_00688730;
      }
      func_0x006893e4();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00689364();
    }
    puVar13 = (ulong *)((long)register0x00000008 + -0x1b8);
LAB_00688730:
    FUN_006697d4();
LAB_00688734:
    func_0x0068930c(*(undefined8 *)((long)register0x00000008 + -0xe0));
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x0068934c();
    func_0x006893b8();
    func_0x00689374();
    unaff_x30 = FUN_00688b8c;
    func_0x00689394();
    uVar5 = (int)puVar13[6] - 1;
    in_OV = SBORROW4(uVar5,3);
    in_NG = (int)puVar13[6] + -4 < 0;
    in_ZR = uVar5 == 3;
    param_1 = extraout_x8_03;
    unaff_x19 = extraout_x8_01;
    unaff_x20 = puVar10;
    unaff_x21 = puVar14;
    if (uVar5 < 3) {
      uVar5 = *(int *)((long)puVar13 + 0x34) - 1;
      in_OV = SBORROW4(uVar5,2);
      in_NG = *(int *)((long)puVar13 + 0x34) + -3 < 0;
      in_ZR = uVar5 == 2;
      if (uVar5 < 2) {
        uVar5 = (int)puVar13[7] - 1;
        in_OV = SBORROW4(uVar5,2);
        in_NG = (int)puVar13[7] + -3 < 0;
        in_ZR = uVar5 == 2;
        if (uVar5 < 2) {
          bVar1 = 2 < *(uint *)((long)puVar13 + 0x3c) - 1;
          bVar8 = (1 << (ulong)(*(uint *)((long)puVar13 + 0x3c) & 0x1f) & 0xdU) == 0;
          in_ZR = bVar1 || bVar8;
          in_NG = '\0';
          in_OV = '\0';
          if (bVar1 || bVar8) {
            param_2 = &UNK_0091397f;
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
          }
          else {
            uVar5 = (int)puVar13[8] - 1;
            in_OV = SBORROW4(uVar5,2);
            in_NG = (int)puVar13[8] + -3 < 0;
            in_ZR = uVar5 == 2;
            if (uVar5 < 2) {
              uVar5 = *(int *)((long)puVar13 + 0x44) - 1;
              in_OV = SBORROW4(uVar5,2);
              in_NG = *(int *)((long)puVar13 + 0x44) + -3 < 0;
              in_ZR = uVar5 == 2;
              if (uVar5 < 2) {
                *extraout_x8_03 = 0;
                return;
              }
              param_2 = &UNK_00913a3b;
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
            }
            else {
              param_2 = &UNK_009139dc;
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
            }
          }
        }
        else {
          param_2 = &UNK_00913912;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
        }
      }
      else {
        param_2 = &UNK_009138c1;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
      }
    }
    else {
      param_2 = &UNK_00913866;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
    }
  } while( true );
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_0066f2d4((undefined1 *)((long)register0x00000008 + -0x1b8));
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_0067d4a8((undefined1 *)((long)register0x00000008 + -0x1b8));
  puVar13 = (ulong *)((long)register0x00000008 + -0x1b8);
  FUN_00688b8c((undefined1 *)((long)register0x00000008 + -0x200));
  unaff_x28 = *(ulong *)((long)register0x00000008 + -0x200);
  if (unaff_x28 == 0) {
    func_0x006893b8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *extraout_x8_01 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar15 = (int *)(unaff_x28 - 1);
      do {
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar1) {
          *piVar15 = *piVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar13 = extraout_x8_01;
    FUN_00689244();
    func_0x006893b8();
  }
  func_0x00689374();
  unaff_x25 = unaff_x25 + 1;
  if (unaff_x28 != 0) goto LAB_00688734;
  goto LAB_00688788;
}



/* Entry: 006886b4; end: 00688b8b;  */

void FUN_006886b4(ulong *param_1,undefined1 *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 *puVar10;
  char *pcVar11;
  ulong *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  ulong *puVar15;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  int *piVar16;
  undefined8 *extraout_x8_03;
  ulong *extraout_x11;
  ulong uVar17;
  undefined1 *unaff_x19;
  int iVar18;
  undefined1 *unaff_x20;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar19;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar10 = param_2;
    func_0x0068933c();
    *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8_02;
    uVar8 = (int)puVar10 == (int)param_3[6];
    if ((int)puVar10 < (int)param_3[6]) {
      func_0x006893e4();
      puVar15 = (ulong *)((long)register0x00000008 + -0x148);
      func_0x00689364();
      param_3 = unaff_x21;
    }
    else {
      iVar18 = (int)param_2;
      uVar8 = *(int *)((long)param_3 + 0x34) == iVar18;
      if (iVar18 <= *(int *)((long)param_3 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = param_3 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)param_3[4];
        unaff_x22 = &PTR_PTR_00b25a18;
        puVar15 = param_3;
LAB_00688788:
        uVar8 = unaff_x25 == unaff_x26;
        puVar10 = param_2;
        if ((bool)uVar8) {
          *(undefined ***)((long)register0x00000008 + -0xa0) = &PTR_FUN_00a0e368;
          *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
          *(int *)((long)register0x00000008 + -0x78) = iVar18;
          *(undefined4 *)((long)register0x00000008 + -0x90) = 4;
          puVar12 = unaff_x23;
          if ((param_3[3] & 1) != 0) {
            puVar12 = (ulong *)(param_3[3] + 7);
          }
          uVar5 = (long)(int)param_3[4];
          unaff_x21 = puVar12;
          while (uVar5 != 0) {
            uVar17 = uVar5 >> 1;
            uVar2 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
            uVar5 = uVar17;
            if (*(int *)(unaff_x21[uVar17] + 0x28) <= iVar18) {
              uVar5 = uVar2;
              unaff_x21 = unaff_x21 + uVar17 + 1;
            }
          }
          uVar8 = unaff_x21 == puVar12;
          if ((bool)uVar8) {
            *(int *)((long)register0x00000008 + -0x1c8) = iVar18;
            puVar13 = &UNK_00913829;
            FUN_00532c74();
            *(undefined **)((long)register0x00000008 + -0x148) = puVar13;
            *(ulong **)((long)register0x00000008 + -0x140) = puVar15;
            *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
            func_0x006893c8();
            *(undefined **)((long)register0x00000008 + -400) = puVar13;
            *(ulong **)((long)register0x00000008 + -0x188) = puVar15;
            func_0x006893f0();
            FUN_00575d30();
            func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0xb9));
            func_0x005535c0((undefined1 *)((long)register0x00000008 + -0x1b0));
            func_0x00689384();
            func_0x006893c0();
            puVar15 = (ulong *)((long)register0x00000008 + -0x1b0);
            func_0x00689364();
            FUN_006697d4((undefined1 *)((long)register0x00000008 + -0x1b0));
          }
          else {
            func_0x00689404(*(undefined8 *)(unaff_x21[-1] + 0x20));
            FUN_0066f2d4((undefined1 *)((long)register0x00000008 + -0x148));
            func_0x00689404(*(undefined8 *)(unaff_x21[-1] + 0x18));
            FUN_0067d4a8((undefined1 *)((long)register0x00000008 + -0x148));
            FUN_006696a4((undefined1 *)((long)register0x00000008 + -0x230),
                         (undefined1 *)((long)register0x00000008 + -0x148));
            FUN_006696a4((undefined1 *)((long)register0x00000008 + -400),
                         (undefined1 *)((long)register0x00000008 + -0x230));
            puVar15 = (ulong *)((long)register0x00000008 + -400);
            FUN_006696a4(param_1 + 1);
            *param_1 = 0;
            FUN_0067d448((undefined1 *)((long)register0x00000008 + -400));
            FUN_0067d448((undefined1 *)((long)register0x00000008 + -0x230));
            func_0x00689374();
          }
          puVar12 = (ulong *)((long)register0x00000008 + -0xa0);
          FUN_0067d78c();
          goto LAB_00688734;
        }
        unaff_x27 = *unaff_x25;
        iVar3 = *(int *)(unaff_x27 + 0x28);
        if (iVar3 == 0) {
          *(undefined4 *)((long)register0x00000008 + -0x1c8) = 0;
          puVar13 = &UNK_009137aa;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x148) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x140) = puVar15;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          func_0x006893c8();
          *(undefined **)((long)register0x00000008 + -400) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x188) = puVar15;
          puVar13 = &UNK_009137bb;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0xa0) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x98) = puVar15;
          func_0x006893f0();
          FUN_00575ddc();
          func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0xb9));
          func_0x005535c0((undefined1 *)((long)register0x00000008 + -0x1b0));
          func_0x00689384();
          func_0x006893c0();
          puVar15 = (ulong *)((long)register0x00000008 + -0x1b0);
          func_0x00689364();
          puVar12 = (ulong *)((long)register0x00000008 + -0x1b0);
        }
        else {
          iVar19 = (int)unaff_x24;
          if ((iVar19 == 0) || (uVar8 = iVar3 == iVar19, iVar19 < iVar3)) break;
          *(int *)((long)register0x00000008 + -0x198) = iVar3;
          *(int *)((long)register0x00000008 + -0x194) = iVar19;
          puVar13 = &UNK_009137c7;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x148) = puVar13;
          *(ulong **)((long)register0x00000008 + -0x140) = puVar15;
          *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x1c8);
          puVar14 = (undefined1 *)((long)register0x00000008 + -0x194);
          func_0x0066e6e8();
          *(undefined1 **)((long)register0x00000008 + -400) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -0x188) = puVar14;
          puVar13 = &UNK_00913803;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0xa0) = puVar13;
          *(undefined1 **)((long)register0x00000008 + -0x98) = puVar14;
          *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
          puVar10 = (undefined1 *)((long)register0x00000008 + -0x1e0);
          puVar14 = (undefined1 *)((long)register0x00000008 + -0x198);
          func_0x0066e6e8();
          *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar10;
          *(undefined1 **)((long)register0x00000008 + -200) = puVar14;
          pcVar11 = ".";
          FUN_00532c74();
          *(char **)((long)register0x00000008 + -0x100) = pcVar11;
          *(undefined1 **)((long)register0x00000008 + -0xf8) = puVar14;
          param_2 = (undefined1 *)((long)register0x00000008 + -0x1b0);
          FUN_0054dd58((undefined1 *)((long)register0x00000008 + -0x1b0),
                       (undefined1 *)((long)register0x00000008 + -0x148),
                       (undefined1 *)((long)register0x00000008 + -400),
                       (undefined1 *)((long)register0x00000008 + -0xa0),
                       (undefined1 *)((long)register0x00000008 + -0xd0),
                       (undefined1 *)((long)register0x00000008 + -0x100));
          func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x199));
          func_0x005535c0((undefined1 *)((long)register0x00000008 + -0x1e8));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x1b0));
          func_0x00689334();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x1c8));
          puVar15 = (ulong *)((long)register0x00000008 + -0x1e8);
          func_0x00689364();
          puVar12 = (ulong *)((long)register0x00000008 + -0x1e8);
        }
        goto LAB_00688730;
      }
      func_0x006893e4();
      puVar15 = (ulong *)((long)register0x00000008 + -0x148);
      func_0x00689364();
    }
    puVar12 = (ulong *)((long)register0x00000008 + -0x148);
LAB_00688730:
    FUN_006697d4();
    puVar10 = param_2;
    unaff_x21 = param_3;
LAB_00688734:
    func_0x0068930c(*(undefined8 *)((long)register0x00000008 + -0x70));
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x0068934c();
    func_0x006893b8();
    func_0x00689374();
    func_0x00689394();
    uVar4 = (int)puVar12[6] - 1;
    cVar6 = SBORROW4(uVar4,3);
    cVar7 = (int)puVar12[6] + -4 < 0;
    uVar8 = uVar4 == 3;
    if (uVar4 < 3) {
      uVar4 = *(int *)((long)puVar12 + 0x34) - 1;
      cVar6 = SBORROW4(uVar4,2);
      cVar7 = *(int *)((long)puVar12 + 0x34) + -3 < 0;
      uVar8 = uVar4 == 2;
      if (uVar4 < 2) {
        uVar4 = (int)puVar12[7] - 1;
        cVar6 = SBORROW4(uVar4,2);
        cVar7 = (int)puVar12[7] + -3 < 0;
        uVar8 = uVar4 == 2;
        if (uVar4 < 2) {
          bVar1 = 2 < *(uint *)((long)puVar12 + 0x3c) - 1;
          bVar9 = (1 << (ulong)(*(uint *)((long)puVar12 + 0x3c) & 0x1f) & 0xdU) == 0;
          uVar8 = bVar1 || bVar9;
          cVar7 = false;
          cVar6 = false;
          if (bVar1 || bVar9) {
            puVar13 = &UNK_0091397f;
          }
          else {
            uVar4 = (int)puVar12[8] - 1;
            cVar6 = SBORROW4(uVar4,2);
            cVar7 = (int)puVar12[8] + -3 < 0;
            uVar8 = uVar4 == 2;
            if (uVar4 < 2) {
              uVar4 = *(int *)((long)puVar12 + 0x44) - 1;
              cVar6 = SBORROW4(uVar4,2);
              cVar7 = *(int *)((long)puVar12 + 0x44) + -3 < 0;
              uVar8 = uVar4 == 2;
              if (uVar4 < 2) {
                *extraout_x8_03 = 0;
                return;
              }
              puVar13 = &UNK_00913a3b;
            }
            else {
              puVar13 = &UNK_009139dc;
            }
          }
        }
        else {
          puVar13 = &UNK_00913912;
        }
      }
      else {
        puVar13 = &UNK_009138c1;
      }
    }
    else {
      puVar13 = &UNK_00913866;
    }
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    param_2 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x2a0);
    *(undefined1 **)((long)register0x00000008 + -0x250) = puVar10;
    *(ulong **)((long)register0x00000008 + -0x248) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x240) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x238) = FUN_00688b8c;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x240);
    func_0x0068933c();
    *(undefined8 *)((long)register0x00000008 + -600) = extraout_x8;
    FUN_00532c74();
    *(undefined **)((long)register0x00000008 + -0x288) = puVar13;
    *(ulong **)((long)register0x00000008 + -0x280) = puVar15;
    FUN_0055d0c8((undefined1 *)((long)register0x00000008 + -0x2a0),
                 (undefined1 *)((long)register0x00000008 + -0x288));
    func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x289));
    param_3 = extraout_x11;
    if (cVar7 == cVar6) {
      param_3 = extraout_x8_00;
    }
    func_0x005535c0(extraout_x8_03);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0068930c(*(undefined8 *)((long)register0x00000008 + -600));
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    unaff_x30 = FUN_006886b4;
    func_0x0068937c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
    param_1 = extraout_x8_01;
  } while( true );
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_0066f2d4((undefined1 *)((long)register0x00000008 + -0x148));
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_0067d4a8((undefined1 *)((long)register0x00000008 + -0x148));
  puVar12 = (ulong *)((long)register0x00000008 + -0x148);
  FUN_00688b8c((undefined1 *)((long)register0x00000008 + -400));
  unaff_x28 = *(ulong *)((long)register0x00000008 + -400);
  if (unaff_x28 == 0) {
    func_0x006893b8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *param_1 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar16 = (int *)(unaff_x28 - 1);
      do {
        cVar7 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar1) {
          *piVar16 = *piVar16 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    puVar12 = param_1;
    FUN_00689244();
    func_0x006893b8();
  }
  func_0x00689374();
  unaff_x25 = unaff_x25 + 1;
  unaff_x21 = param_3;
  if (unaff_x28 != 0) goto LAB_00688734;
  goto LAB_00688788;
}



/* Entry: 00688b8c; end: 00688c4f;  */

void FUN_00688b8c(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined *puVar14;
  ulong *puVar15;
  undefined8 extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  undefined8 extraout_x8_02;
  int *piVar16;
  undefined8 *extraout_x8_03;
  ulong *extraout_x11;
  ulong uVar17;
  ulong *unaff_x19;
  int iVar18;
  undefined1 *unaff_x20;
  ulong *unaff_x21;
  undefined **unaff_x22;
  ulong *unaff_x23;
  int iVar19;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong unaff_x27;
  ulong unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    uVar5 = (int)param_2[6] - 1;
    cVar7 = SBORROW4(uVar5,3);
    cVar8 = (int)param_2[6] + -4 < 0;
    uVar9 = uVar5 == 3;
    if (uVar5 < 3) {
      uVar5 = *(int *)((long)param_2 + 0x34) - 1;
      cVar7 = SBORROW4(uVar5,2);
      cVar8 = *(int *)((long)param_2 + 0x34) + -3 < 0;
      uVar9 = uVar5 == 2;
      if (uVar5 < 2) {
        uVar5 = (int)param_2[7] - 1;
        cVar7 = SBORROW4(uVar5,2);
        cVar8 = (int)param_2[7] + -3 < 0;
        uVar9 = uVar5 == 2;
        if (uVar5 < 2) {
          bVar1 = 2 < *(uint *)((long)param_2 + 0x3c) - 1;
          bVar10 = (1 << (ulong)(*(uint *)((long)param_2 + 0x3c) & 0x1f) & 0xdU) == 0;
          uVar9 = bVar1 || bVar10;
          cVar8 = false;
          cVar7 = false;
          if (bVar1 || bVar10) {
            puVar14 = &UNK_0091397f;
          }
          else {
            uVar5 = (int)param_2[8] - 1;
            cVar7 = SBORROW4(uVar5,2);
            cVar8 = (int)param_2[8] + -3 < 0;
            uVar9 = uVar5 == 2;
            if (uVar5 < 2) {
              uVar5 = *(int *)((long)param_2 + 0x44) - 1;
              cVar7 = SBORROW4(uVar5,2);
              cVar8 = *(int *)((long)param_2 + 0x44) + -3 < 0;
              uVar9 = uVar5 == 2;
              if (uVar5 < 2) {
                *param_1 = 0;
                return;
              }
              puVar14 = &UNK_00913a3b;
            }
            else {
              puVar14 = &UNK_009139dc;
            }
          }
        }
        else {
          puVar14 = &UNK_00913912;
        }
      }
      else {
        puVar14 = &UNK_009138c1;
      }
    }
    else {
      puVar14 = &UNK_00913866;
    }
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar12 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    func_0x0068933c();
    *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8;
    FUN_00532c74();
    *(undefined **)((long)register0x00000008 + -0x58) = puVar14;
    *(ulong **)((long)register0x00000008 + -0x50) = param_3;
    FUN_0055d0c8((undefined1 *)((long)register0x00000008 + -0x70),
                 (undefined1 *)((long)register0x00000008 + -0x58));
    func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x59));
    puVar15 = extraout_x11;
    if (cVar8 == cVar7) {
      puVar15 = extraout_x8_00;
    }
    func_0x005535c0(param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0068930c(*(undefined8 *)((long)register0x00000008 + -0x28));
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0068937c();
    *(ulong *)((long)register0x00000008 + -0xd0) = unaff_x28;
    *(ulong *)((long)register0x00000008 + -200) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0xc0) = unaff_x26;
    *(ulong **)((long)register0x00000008 + -0xb8) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x24;
    *(ulong **)((long)register0x00000008 + -0xa8) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x98) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined1 **)((long)register0x00000008 + -0x88) = puVar11;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x78) = FUN_006886b4;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar11 = puVar12;
    func_0x0068933c();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = extraout_x8_02;
    uVar9 = (int)puVar11 == (int)puVar15[6];
    if ((int)puVar11 < (int)puVar15[6]) {
      func_0x006893e4();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00689364();
      puVar15 = unaff_x21;
    }
    else {
      iVar18 = (int)puVar12;
      uVar9 = *(int *)((long)puVar15 + 0x34) == iVar18;
      if (iVar18 <= *(int *)((long)puVar15 + 0x34)) {
        unaff_x24 = 0;
        unaff_x23 = puVar15 + 3;
        unaff_x25 = unaff_x23;
        if ((*unaff_x23 & 1) != 0) {
          unaff_x25 = (ulong *)(*unaff_x23 + 7);
        }
        unaff_x26 = unaff_x25 + (int)puVar15[4];
        unaff_x22 = &PTR_PTR_00b25a18;
        param_3 = puVar15;
LAB_00688788:
        uVar9 = unaff_x25 == unaff_x26;
        if ((bool)uVar9) {
          *(undefined ***)((long)register0x00000008 + -0x110) = &PTR_FUN_00a0e368;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
          *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
          *(int *)((long)register0x00000008 + -0xe8) = iVar18;
          *(undefined4 *)((long)register0x00000008 + -0x100) = 4;
          puVar3 = unaff_x23;
          if ((puVar15[3] & 1) != 0) {
            puVar3 = (ulong *)(puVar15[3] + 7);
          }
          uVar6 = (long)(int)puVar15[4];
          puVar15 = puVar3;
          while (uVar6 != 0) {
            uVar17 = uVar6 >> 1;
            uVar2 = uVar6 + (uVar6 >> 1 ^ 0xffffffffffffffff);
            uVar6 = uVar17;
            if (*(int *)(puVar15[uVar17] + 0x28) <= iVar18) {
              uVar6 = uVar2;
              puVar15 = puVar15 + uVar17 + 1;
            }
          }
          uVar9 = puVar15 == puVar3;
          if ((bool)uVar9) {
            *(int *)((long)register0x00000008 + -0x238) = iVar18;
            puVar14 = &UNK_00913829;
            FUN_00532c74();
            *(undefined **)((long)register0x00000008 + -0x1b8) = puVar14;
            *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
            *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
            func_0x006893c8();
            *(undefined **)((long)register0x00000008 + -0x200) = puVar14;
            *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
            func_0x006893f0();
            FUN_00575d30();
            func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x129));
            func_0x005535c0((undefined1 *)((long)register0x00000008 + -0x220));
            func_0x00689384();
            func_0x006893c0();
            param_3 = (ulong *)((long)register0x00000008 + -0x220);
            func_0x00689364();
            FUN_006697d4((undefined1 *)((long)register0x00000008 + -0x220));
          }
          else {
            func_0x00689404(*(undefined8 *)(puVar15[-1] + 0x20));
            FUN_0066f2d4((undefined1 *)((long)register0x00000008 + -0x1b8));
            func_0x00689404(*(undefined8 *)(puVar15[-1] + 0x18));
            FUN_0067d4a8((undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_006696a4((undefined1 *)((long)register0x00000008 + -0x2a0),
                         (undefined1 *)((long)register0x00000008 + -0x1b8));
            FUN_006696a4((undefined1 *)((long)register0x00000008 + -0x200),
                         (undefined1 *)((long)register0x00000008 + -0x2a0));
            param_3 = (ulong *)((long)register0x00000008 + -0x200);
            FUN_006696a4(extraout_x8_01 + 1);
            *extraout_x8_01 = 0;
            FUN_0067d448((undefined1 *)((long)register0x00000008 + -0x200));
            FUN_0067d448((undefined1 *)((long)register0x00000008 + -0x2a0));
            func_0x00689374();
          }
          param_2 = (ulong *)((long)register0x00000008 + -0x110);
          FUN_0067d78c();
          goto LAB_00688734;
        }
        unaff_x27 = *unaff_x25;
        iVar4 = *(int *)(unaff_x27 + 0x28);
        if (iVar4 == 0) {
          *(undefined4 *)((long)register0x00000008 + -0x238) = 0;
          puVar14 = &UNK_009137aa;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar14;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
          func_0x006893c8();
          *(undefined **)((long)register0x00000008 + -0x200) = puVar14;
          *(ulong **)((long)register0x00000008 + -0x1f8) = param_3;
          puVar14 = &UNK_009137bb;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar14;
          *(ulong **)((long)register0x00000008 + -0x108) = param_3;
          func_0x006893f0();
          FUN_00575ddc();
          func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x129));
          func_0x005535c0((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00689384();
          func_0x006893c0();
          param_3 = (ulong *)((long)register0x00000008 + -0x220);
          func_0x00689364();
          param_2 = (ulong *)((long)register0x00000008 + -0x220);
        }
        else {
          iVar19 = (int)unaff_x24;
          if ((iVar19 == 0) || (uVar9 = iVar4 == iVar19, iVar19 < iVar4)) break;
          *(int *)((long)register0x00000008 + -0x208) = iVar4;
          *(int *)((long)register0x00000008 + -0x204) = iVar19;
          puVar14 = &UNK_009137c7;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x1b8) = puVar14;
          *(ulong **)((long)register0x00000008 + -0x1b0) = param_3;
          *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x238);
          puVar11 = (undefined1 *)((long)register0x00000008 + -0x204);
          func_0x0066e6e8();
          *(undefined1 **)((long)register0x00000008 + -0x200) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0x1f8) = puVar11;
          puVar14 = &UNK_00913803;
          FUN_00532c74();
          *(undefined **)((long)register0x00000008 + -0x110) = puVar14;
          *(undefined1 **)((long)register0x00000008 + -0x108) = puVar11;
          *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x248) = 0;
          *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x250);
          puVar11 = (undefined1 *)((long)register0x00000008 + -0x208);
          func_0x0066e6e8();
          *(undefined1 **)((long)register0x00000008 + -0x140) = puVar12;
          *(undefined1 **)((long)register0x00000008 + -0x138) = puVar11;
          pcVar13 = ".";
          FUN_00532c74();
          *(char **)((long)register0x00000008 + -0x170) = pcVar13;
          *(undefined1 **)((long)register0x00000008 + -0x168) = puVar11;
          puVar12 = (undefined1 *)((long)register0x00000008 + -0x220);
          FUN_0054dd58((undefined1 *)((long)register0x00000008 + -0x220),
                       (undefined1 *)((long)register0x00000008 + -0x1b8),
                       (undefined1 *)((long)register0x00000008 + -0x200),
                       (undefined1 *)((long)register0x00000008 + -0x110),
                       (undefined1 *)((long)register0x00000008 + -0x140),
                       (undefined1 *)((long)register0x00000008 + -0x170));
          func_0x006893ac(*(undefined1 *)((long)register0x00000008 + -0x209));
          func_0x005535c0((undefined1 *)((long)register0x00000008 + -600));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x220));
          func_0x00689334();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)register0x00000008 + -0x238));
          param_3 = (ulong *)((long)register0x00000008 + -600);
          func_0x00689364();
          param_2 = (ulong *)((long)register0x00000008 + -600);
        }
        goto LAB_00688730;
      }
      func_0x006893e4();
      param_3 = (ulong *)((long)register0x00000008 + -0x1b8);
      func_0x00689364();
    }
    param_2 = (ulong *)((long)register0x00000008 + -0x1b8);
LAB_00688730:
    FUN_006697d4();
LAB_00688734:
    func_0x0068930c(*(undefined8 *)((long)register0x00000008 + -0xe0));
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x0068934c();
    func_0x006893b8();
    func_0x00689374();
    unaff_x30 = FUN_00688b8c;
    func_0x00689394();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2a0);
    param_1 = extraout_x8_03;
    unaff_x19 = extraout_x8_01;
    unaff_x20 = puVar12;
    unaff_x21 = puVar15;
  } while( true );
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x20));
  FUN_0066f2d4((undefined1 *)((long)register0x00000008 + -0x1b8));
  func_0x00689404(*(undefined8 *)(unaff_x27 + 0x18));
  FUN_0067d4a8((undefined1 *)((long)register0x00000008 + -0x1b8));
  param_2 = (ulong *)((long)register0x00000008 + -0x1b8);
  FUN_00688b8c((undefined1 *)((long)register0x00000008 + -0x200));
  unaff_x28 = *(ulong *)((long)register0x00000008 + -0x200);
  if (unaff_x28 == 0) {
    func_0x006893b8();
    unaff_x24 = (ulong)*(uint *)(unaff_x27 + 0x28);
  }
  else {
    *extraout_x8_01 = unaff_x28;
    if ((unaff_x28 & 1) != 0) {
      piVar16 = (int *)(unaff_x28 - 1);
      do {
        cVar8 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar1) {
          *piVar16 = *piVar16 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
    }
    param_2 = extraout_x8_01;
    FUN_00689244();
    func_0x006893b8();
  }
  func_0x00689374();
  unaff_x25 = unaff_x25 + 1;
  if (unaff_x28 != 0) goto LAB_00688734;
  goto LAB_00688788;
}



/* Entry: 00688c50; end: 00688d07;  */

void FUN_00688c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_80;
  undefined1 auStack_78 [72];
  
  FUN_0066f2d4(auStack_78,param_2);
  FUN_0067d4a8(auStack_78,param_3);
  FUN_0067d4a8(auStack_78,param_4);
  FUN_00688b8c(&lStack_80,auStack_78);
  if (lStack_80 == 0) {
    func_0x006893dc();
    FUN_006892b0(param_1,auStack_78);
  }
  else {
    FUN_00689254(param_1,&lStack_80);
    func_0x006893dc();
  }
  FUN_0067d448(auStack_78);
  return;
}



/* Entry: 00688d08; end: 00688e87;  */

void FUN_00688d08(undefined8 *param_1,undefined8 param_2,undefined ***param_3,long param_4)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 ***pppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuStack_80 = &PTR_FUN_00a0ef08;
  uStack_78 = 0;
  uStack_70 = 0;
  puStack_68 = &UNK_00811030;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_4 != 0) {
    pppuVar2 = &ppuStack_80;
    FUN_006863f0(pppuVar2,param_4);
    (*(code *)(*pppuVar2)[2])();
    FUN_0054a274(&pppuStack_98,param_3);
    if (-1 < (char)bStack_81) {
      uStack_90 = (ulong)bStack_81;
      pppuStack_98 = &pppuStack_98;
    }
    FUN_00549e14(pppuVar2,pppuStack_98,uStack_90);
    func_0x0068938c();
    pppuVar1 = pppuVar2;
    if (pppuVar2 != (undefined ***)0x0) goto LAB_00688de8;
    FUN_00776794(&pppuStack_98,&UNK_00913708,0x1e8,&UNK_0091384d,0x18);
    FUN_005558a0(&pppuStack_98);
  }
  pppuVar2 = (undefined ***)0x0;
  pppuVar1 = param_3;
LAB_00688de8:
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_00688e88(param_2,pppuVar1,param_1);
  if (pppuVar2 != (undefined ***)0x0) {
    (*(code *)(*pppuVar2)[1])(pppuVar2);
  }
  FUN_006862fc(&ppuStack_80);
  return;
}



/* Entry: 00688e88; end: 0068920b;  */

undefined8 ** FUN_00688e88(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  int iVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_194;
  undefined8 auStack_190 [3];
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  char *pcStack_160;
  undefined8 *puStack_158;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_d0 [48];
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_70;
  
  puVar10 = param_2;
  func_0x0068933c();
  puStack_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  uStack_70 = extraout_x8;
  FUN_00699298(puVar10);
  puVar5 = param_2;
  FUN_0068b260(puVar10,param_2,&puStack_178);
  puVar1 = puStack_170;
  puVar10 = puStack_178;
  do {
    uVar2 = puVar10 == puVar1;
    if ((bool)uVar2) {
      ppuVar9 = &puStack_178;
      FUN_00666dd0();
      func_0x0068930c(uStack_70);
      if ((bool)uVar2) {
        return ppuVar9;
      }
      ___stack_chk_fail();
      ppuVar9 = &puStack_178;
      FUN_00666dd0();
      func_0x0068937c();
      *ppuVar9 = (undefined8 *)*puVar5;
      *puVar5 = 0x36;
      FUN_00689244();
      return ppuVar9;
    }
    puVar13 = (undefined *)*puVar10;
    if ((((byte)puVar13[1] >> 3 & 1) == 0) || (puVar3 = puVar13, FUN_00656c60(), (int)puVar3 != 10))
    {
      puVar4 = puVar13;
      func_0x006579b0();
      iVar11 = (int)param_1;
      puVar3 = (undefined *)0x0;
      if (puVar4 != (undefined *)0x0) {
        FUN_00699298(param_2);
        FUN_0068d770(puVar5,param_2,puVar13);
        puVar3 = puVar13;
        func_0x006579b0();
        FUN_00656390();
        if (((puVar3 != (undefined *)0x0) &&
            ((*(byte *)(*(long *)(puVar3 + 0x18) + 0x28) >> 1 & 1) != 0)) &&
           (lVar12 = *(long *)(*(long *)(puVar3 + 0x18) + 0x50), iVar11 < *(int *)(lVar12 + 0x20)))
        {
          puVar4 = puVar3;
          func_0x0068936c();
          puStack_a0 = puVar4;
          puStack_98 = puVar5;
          func_0x006892d8(*(undefined8 *)(puVar3 + 8));
          puVar3 = &UNK_00913a99;
          FUN_00532c74();
          puStack_100 = puVar3;
          puStack_f8 = puVar5;
          func_0x0068939c(*(undefined4 *)(lVar12 + 0x20));
          func_0x00689328();
          puStack_130 = puVar3;
          puStack_128 = puVar5;
          func_0x006892f4();
          func_0x00689358();
          func_0x00689334();
          func_0x00689320();
        }
      }
      if ((*(byte *)(*(long *)(puVar13 + 0x38) + 0x28) >> 1 & 1) != 0) {
        lVar12 = *(long *)(*(long *)(puVar13 + 0x38) + 0x78);
        if (iVar11 < *(int *)(lVar12 + 0x20)) {
          func_0x0068936c();
          puStack_a0 = puVar3;
          puStack_98 = puVar5;
          func_0x006892d8(*(undefined8 *)(puVar13 + 8));
          puVar3 = &UNK_00913a99;
          FUN_00532c74();
          puStack_100 = puVar3;
          puStack_f8 = puVar5;
          func_0x0068939c(*(undefined4 *)(lVar12 + 0x20));
          func_0x00689328();
          puStack_130 = puVar3;
          puStack_128 = puVar5;
          func_0x006892f4();
          func_0x00689358();
          func_0x00689334();
          func_0x00689320();
        }
        if (((*(uint *)(lVar12 + 0x10) >> 3 & 1) == 0) || (iVar11 < *(int *)(lVar12 + 0x28))) {
          if (((*(uint *)(lVar12 + 0x10) >> 2 & 1) == 0) || (iVar11 < *(int *)(lVar12 + 0x24)))
          goto LAB_00689148;
          func_0x0068936c();
          puStack_a0 = puVar3;
          puStack_98 = puVar5;
          func_0x006892d8(*(undefined8 *)(puVar13 + 8));
          puVar13 = &UNK_00913ad9;
          FUN_00532c74();
          uStack_194 = *(undefined4 *)(lVar12 + 0x24);
          uStack_1b0 = 0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          puVar8 = (undefined8 *)&uStack_194;
          puVar6 = &uStack_1b0;
          puStack_100 = puVar13;
          puStack_f8 = puVar5;
          func_0x0066e6e8();
          pcVar7 = ": ";
          puStack_130 = (undefined *)puVar6;
          puStack_128 = puVar8;
          FUN_00532c74();
          pcStack_160 = pcVar7;
          puStack_158 = puVar8;
          FUN_0054a558(auStack_190,&puStack_a0,auStack_d0,&puStack_100,&puStack_130,&pcStack_160,
                       *(ulong *)(lVar12 + 0x18) & 0xfffffffffffffffc);
          puVar5 = auStack_190;
          func_0x0045a4f0(param_3 + 0x18);
          func_0x00689320();
          puVar8 = &uStack_1b0;
        }
        else {
          func_0x0068936c();
          puStack_a0 = puVar3;
          puStack_98 = puVar5;
          func_0x006892d8(*(undefined8 *)(puVar13 + 8));
          puVar13 = &UNK_00913abb;
          FUN_00532c74();
          puStack_100 = puVar13;
          puStack_f8 = puVar5;
          func_0x0068939c(*(undefined4 *)(lVar12 + 0x28));
          func_0x00689328();
          puStack_130 = puVar13;
          puStack_128 = puVar5;
          func_0x006892f4();
          func_0x00689358();
          func_0x00689334();
          puVar8 = auStack_190;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar8);
      }
    }
    else {
      FUN_00699298(param_2);
      FUN_0068dc98(puVar5,param_2,puVar13,0);
      FUN_00688e88(param_1,puVar5,param_3);
    }
LAB_00689148:
    puVar10 = puVar10 + 1;
  } while( true );
}



/* Entry: 0068920c; end: 00689243;  */

undefined8 * FUN_0068920c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0x36;
  FUN_00689244();
  return param_1;
}



/* Entry: 00689244; end: 00689253;  */

void FUN_00689244(ulong *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  pcStack_30 = "external/abseil-cpp+/absl/status/statusor.cc";
  pcStack_28 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_38 = 0x4a;
  uStack_34 = 2;
  FUN_0055159c(&PTR_FUN_00b1e660,&uStack_34,&pcStack_30,&uStack_38,&pcStack_28);
  pcVar5 = pcStack_28;
  pcVar4 = pcStack_28;
  _strlen(pcStack_28);
  FUN_005529d0(&pcStack_30,0xd,pcVar5,pcVar4);
  pcVar4 = (char *)*param_1;
  pcVar5 = pcVar4;
  if (pcStack_30 != pcVar4) {
    *param_1 = (ulong)pcStack_30;
    pcStack_30 = "";
    if (((ulong)pcVar4 & 1) == 0) {
      return;
    }
    piVar6 = (int *)(pcVar4 + -1);
    if (*piVar6 != 1) {
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcVar5 = pcStack_30;
      if (iVar1 + -1 != 0) goto LAB_00551520;
    }
    plVar7 = *(long **)(pcVar4 + 0x1f);
    pcVar4[0x1f] = '\0';
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != 0) {
        FUN_00553a40(plVar7);
      }
      __ZdlPv(plVar7);
    }
    if (pcVar4[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar4 + 7));
    }
    __ZdlPv(piVar6);
    pcVar5 = pcStack_30;
  }
LAB_00551520:
  if (((ulong)pcVar5 & 1) != 0) {
    piVar6 = (int *)(pcVar5 + -1);
    if (*piVar6 != 1) {
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 != 0) {
        return;
      }
    }
    plVar7 = *(long **)(pcVar5 + 0x1f);
    pcVar5[0x1f] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != 0) {
        FUN_00553a40(plVar7);
      }
      __ZdlPv(plVar7);
    }
    if (pcVar5[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + 7));
    }
    __ZdlPv(piVar6);
  }
  return;
}



/* Entry: 00689254; end: 0068929f;  */

ulong * FUN_00689254(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(uVar3 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_006892a0(param_1);
  return param_1;
}



/* Entry: 006892a0; end: 006892af;  */

void FUN_006892a0(ulong *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char *pcStack_30;
  char *pcStack_28;
  
  if (*param_1 != 0) {
    return;
  }
  pcStack_30 = "external/abseil-cpp+/absl/status/statusor.cc";
  pcStack_28 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_38 = 0x4a;
  uStack_34 = 2;
  FUN_0055159c(&PTR_FUN_00b1e660,&uStack_34,&pcStack_30,&uStack_38,&pcStack_28);
  pcVar5 = pcStack_28;
  pcVar4 = pcStack_28;
  _strlen(pcStack_28);
  FUN_005529d0(&pcStack_30,0xd,pcVar5,pcVar4);
  pcVar4 = (char *)*param_1;
  pcVar5 = pcVar4;
  if (pcStack_30 != pcVar4) {
    *param_1 = (ulong)pcStack_30;
    pcStack_30 = "";
    if (((ulong)pcVar4 & 1) == 0) {
      return;
    }
    piVar6 = (int *)(pcVar4 + -1);
    if (*piVar6 != 1) {
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pcVar5 = pcStack_30;
      if (iVar1 + -1 != 0) goto LAB_00551520;
    }
    plVar7 = *(long **)(pcVar4 + 0x1f);
    pcVar4[0x1f] = '\0';
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != 0) {
        FUN_00553a40(plVar7);
      }
      __ZdlPv(plVar7);
    }
    if (pcVar4[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar4 + 7));
    }
    __ZdlPv(piVar6);
    pcVar5 = pcStack_30;
  }
LAB_00551520:
  if (((ulong)pcVar5 & 1) != 0) {
    piVar6 = (int *)(pcVar5 + -1);
    if (*piVar6 != 1) {
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 != 0) {
        return;
      }
    }
    plVar7 = *(long **)(pcVar5 + 0x1f);
    pcVar5[0x1f] = '\0';
    pcVar5[0x20] = '\0';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    if (plVar7 != (long *)0x0) {
      if (*plVar7 != 0) {
        FUN_00553a40(plVar7);
      }
      __ZdlPv(plVar7);
    }
    if (pcVar5[0x1e] < '\0') {
      __ZdlPv(*(undefined8 *)(pcVar5 + 7));
    }
    __ZdlPv(piVar6);
  }
  return;
}



/* Entry: 006892b0; end: 006892d7;  */

undefined8 * FUN_006892b0(undefined8 *param_1)

{
  FUN_006696a4(param_1 + 1);
  *param_1 = 0;
  return param_1;
}



/* Entry: 006892d8; end: 0068941f;  */

void FUN_006892d8(void)

{
  return;
}



/* Entry: 00689420; end: 00689453;  */

undefined8 * FUN_00689420(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0ef80;
  FUN_00652538(param_1 + 1);
  return param_1;
}



/* Entry: 00689454; end: 006894a7;  */

long FUN_00689454(long param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *puVar1 = 0;
    return 0;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    FUN_006a480c();
  }
  else {
    param_1 = (*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8;
  }
  FUN_006a5cc8();
  *puVar1 = (int)param_1;
  return param_1;
}



/* Entry: 006894a8; end: 006894ff;  */

undefined8 FUN_006894a8(undefined8 param_1)

{
  FUN_00554ab4(param_1,&UNK_00913b41,0x45);
  return param_1;
}



/* Entry: 00689500; end: 0068952b;  */

undefined * FUN_00689500(long param_1)

{
  undefined *puVar1;
  
  FUN_00656390();
  if (param_1 == 0) {
    func_0x0048afa0();
    puVar1 = &DAT_00b69408;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
  }
  return puVar1;
}



/* Entry: 0068952c; end: 0068958b;  */

long * FUN_0068952c(long *param_1,long param_2,undefined8 param_3,long *param_4,long param_5)

{
  long *plVar1;
  
  plVar1 = param_1 + 1;
  *param_1 = param_2;
  _memcpy(plVar1,param_3,0x48);
  if (param_4 == (long *)0x0) {
    FUN_006558fc();
    param_2 = *param_1;
    param_4 = plVar1;
  }
  param_1[10] = (long)param_4;
  param_1[0xb] = param_5;
  param_1[0xd] = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_2 + 4) + -1;
  *(undefined4 *)((long)param_1 + 100) = 0;
  return param_1;
}



/* Entry: 0068958c; end: 006895af;  */

long FUN_0068958c(long param_1)

{
  __ZdlPv(*(undefined8 *)(param_1 + 0x68));
  return param_1;
}



/* Entry: 006895b0; end: 006895eb;  */

undefined8 * FUN_006895b0(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + (ulong)*(uint *)(param_1 + 0x24));
  if ((uVar2 & 1) == 0) {
    if ((bRam0000000000b6c8b0 & 1) == 0) {
      puVar1 = (undefined8 *)0xb6c8b0;
      ___cxa_guard_acquire();
      if ((int)puVar1 != 0) {
        func_0x006a57ac();
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        FUN_006a4880();
        puRam0000000000b6c8a8 = puVar1;
        ___cxa_guard_release(0xb6c8b0);
      }
    }
    return puRam0000000000b6c8a8;
  }
  return (undefined8 *)((uVar2 & 0xfffffffffffffffe) + 8);
}



/* Entry: 006895ec; end: 0068962f;  */

undefined8 FUN_006895ec(undefined8 param_1,long param_2)

{
  if ((*(byte *)(*(long *)(param_2 + 0x38) + 0x8a) & 1) != 0) {
    return 1;
  }
  if (*(char *)(*(long *)(param_2 + 0x38) + 0x89) == '\x01') {
    FUN_006538b4(param_2);
    return 1;
  }
  return 0;
}



/* Entry: 00689630; end: 0068988f;  */

ulong * FUN_00689630(ulong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  long *unaff_x20;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  func_0x00692d80();
  uVar8 = param_1[6];
  FUN_006895b0();
  FUN_006a4b24();
  puVar6 = (ulong *)((long)param_1 + (ulong)(uint)uVar8);
  if (*(uint *)(unaff_x20 + 5) != 0xffffffff) {
    param_1 = (ulong *)(unaff_x19 + (ulong)*(uint *)(unaff_x20 + 5));
    FUN_00687ba0();
    puVar6 = (ulong *)((long)param_1 + (long)puVar6);
  }
  lVar7 = 0;
  uVar8 = 0;
  do {
    uVar5 = (ulong)(int)unaff_x20[0xc];
    uVar1 = uVar5 <= uVar8;
    uVar2 = uVar8 == uVar5;
    if (!(bool)uVar2 && (long)uVar5 <= (long)uVar8) {
      return puVar6;
    }
    puVar4 = (ulong *)(*(long *)(*unaff_x20 + 0x38) + lVar7);
    if ((*(byte *)((long)puVar4 + 1) >> 5 & 1) == 0) {
      func_0x00692fb8();
      if (param_1 != (ulong *)0x0) {
        func_0x00692ae8();
        FUN_00689ae8();
        if ((int)param_1 == 0) goto LAB_00689850;
      }
      func_0x00693398();
      if ((int)param_1 == 10) {
        if (unaff_x19 != unaff_x20[1]) {
          func_0x00692ae8();
          FUN_00689b8c();
          param_1 = (ulong *)*param_1;
          if (param_1 != (ulong *)0x0) {
            FUN_00699388();
            goto LAB_0068984c;
          }
        }
      }
      else if ((int)param_1 == 9) {
        param_1 = puVar4;
        FUN_00689b10();
        uVar2 = (int)param_1 == 1;
        if ((bool)uVar2) {
          func_0x00692fb8();
          if (param_1 == (ulong *)0x0) {
            func_0x00692ae8();
            FUN_00691adc();
            FUN_00689b5c();
            puVar6 = (ulong *)((long)puVar6 + (long)param_1 + -0x10);
          }
          else {
            func_0x00692ae8();
            FUN_00691a40();
            param_1 = (ulong *)*param_1;
            FUN_00689b5c();
LAB_0068984c:
            puVar6 = (ulong *)((long)param_1 + (long)puVar6);
          }
        }
        else {
          puVar3 = (ulong *)(unaff_x20 + 1);
          func_0x0068fc18(puVar3,puVar4);
          if ((int)puVar3 != 0) {
            func_0x00692ae8();
            FUN_00691b78();
            FUN_00547748();
            param_1 = puVar3;
            goto LAB_0068984c;
          }
          func_0x00692ae8();
          FUN_00691c14();
          func_0x006934d0();
          uVar5 = extraout_x8_00;
          if ((bool)uVar2) {
            puVar4 = puVar3;
            func_0x00692fb8();
            param_1 = (ulong *)0x0;
            if (puVar4 == (ulong *)0x0) goto LAB_00689850;
            uVar5 = *puVar3;
          }
          param_1 = (ulong *)(uVar5 & 0xfffffffffffffffc);
          FUN_00547748();
          puVar6 = (ulong *)((long)puVar6 + (long)param_1 + 0x18);
        }
      }
    }
    else {
      func_0x00693398();
      func_0x00692f84();
      if (!(bool)uVar1 || (bool)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00689710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_008275c0)[extraout_x8] * 4 + 0x689714))();
        return param_1;
      }
    }
LAB_00689850:
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 0x58;
  } while( true );
}



/* Entry: 00689890; end: 00689ae7;  */

long FUN_00689890(ulong param_1)

{
  long unaff_x19;
  
  func_0x00692914();
  if (param_1 == 0) {
    func_0x00692a2c();
    func_0x006928e4();
    if ((int)param_1 != 0) {
      func_0x00692a2c();
      func_0x006929a0();
      return *(long *)(unaff_x19 + (param_1 & 0xffffffff));
    }
    func_0x00692a78();
  }
  else {
    func_0x00692a84();
  }
  return unaff_x19 + (param_1 & 0xffffffff);
}


