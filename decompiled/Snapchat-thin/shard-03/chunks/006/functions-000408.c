/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102aa6ecc; end: 102aa6f13;  */

undefined8 FUN_102aa6ecc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102aa6f14; end: 102aa6f53;  */

undefined1  [16] FUN_102aa6f14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x726f66736e617274;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x61746144626c67;
  }
  uVar2 = 0xea0000000000736d;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102aa6f54; end: 102aa7033;  */

void FUN_102aa6f54(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x61746144626c67;
  if ((param_2 == 0x61746144626c67 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x61746144626c67,0xe700000000000000,param_2,param_3,0), (uVar1 & 1) != 0))
  {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x726f66736e617274) && (param_3 == -0x15ffffffffff8c93)) {
      func_0x000107c6142c(0xea0000000000736d);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x726f66736e617274,0xea0000000000736d,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102aa7034; end: 102aa703f;  */

undefined1  [16] FUN_102aa7034(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa7040; end: 102aa708f;  */

void FUN_102aa7040(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa8e3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa7090; end: 102aa71e7;  */

void FUN_102aa7090(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined8 uStack_5e;
  undefined1 uStack_51;
  
  lVar3 = 0x112ee8300;
  func_0x0001000285a8(0x112ee8300,&UNK_10db14cc8);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa8e3c();
  puVar4 = &UNK_110592b68;
  func_0x000107c606ec((long)&uStack_90 - extraout_x8,&UNK_110592b68,&UNK_110592b68,param_1,uVar1,
                      uVar2);
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_51 = 0;
  func_0x000102aa8e7c();
  puVar5 = &uStack_90;
  func_0x000107c60530(puVar5,&uStack_51,lVar3,&UNK_110592718,puVar4);
  if (unaff_x21 == 0) {
    uStack_88 = unaff_x20[5];
    uStack_90 = unaff_x20[4];
    uStack_78 = unaff_x20[7];
    uStack_80 = unaff_x20[6];
    uStack_70 = unaff_x20[8];
    uStack_68 = (undefined2)unaff_x20[9];
    uStack_5e = *(undefined8 *)((long)unaff_x20 + 0x52);
    uStack_66 = (undefined6)*(undefined8 *)((long)unaff_x20 + 0x4a);
    uStack_60 = (undefined2)((ulong)*(undefined8 *)((long)unaff_x20 + 0x4a) >> 0x30);
    uStack_51 = 1;
    func_0x000102aa8ebc();
    func_0x000107c60530(&uStack_90,&uStack_51,lVar3,&UNK_110592898,puVar5);
  }
  (**(code **)(lVar6 + 8))((long)&uStack_90 - extraout_x8,lVar3);
  return;
}



/* Entry: 102aa71e8; end: 102aa7237;  */

void FUN_102aa71e8(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined6 uStack_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  FUN_102aa8efc(&uStack_80);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_58;
    param_1[4] = uStack_60;
    param_1[7] = uStack_48;
    param_1[6] = uStack_50;
    param_1[9] = CONCAT62(uStack_36,uStack_38);
    param_1[8] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x52) = uStack_2e;
    *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_30,uStack_36);
    param_1[1] = uStack_78;
    *param_1 = uStack_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
  }
  return;
}



/* Entry: 102aa7238; end: 102aa72b3;  */

void FUN_102aa7238(void)

{
  FUN_102aa7090();
  return;
}



/* Entry: 102aa72b4; end: 102aa72e7;  */

undefined1  [16] FUN_102aa72b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6d75736b63656863;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6c7275;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102aa72e8; end: 102aa73bf;  */

void FUN_102aa72e8(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6c7275 || param_3 != -0x1d00000000000000) {
    uVar1 = 0x6c7275;
    func_0x000107c605b8(0x6c7275,0xe300000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x6d75736b63656863;
      if ((param_2 == 0x6d75736b63656863) && (param_3 == -0x1800000000000000)) {
        func_0x000107c6142c(0xe800000000000000);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x6d75736b63656863,0xe800000000000000,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_102aa7348;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_102aa7348:
  *param_1 = uVar2;
  return;
}



/* Entry: 102aa73c0; end: 102aa73cb;  */

undefined1  [16] FUN_102aa73c0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa73cc; end: 102aa741b;  */

void FUN_102aa73cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa9130();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa741c; end: 102aa755b;  */

void FUN_102aa741c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112ee8320;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112ee8320,&UNK_10db14cd0);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa9130();
  func_0x000107c606ec(lVar5,&UNK_110592ad8,&UNK_110592ad8,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60520(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60520(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 102aa755c; end: 102aa7587;  */

void FUN_102aa755c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_102aa9170();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 102aa7588; end: 102aa75a3;  */

void FUN_102aa7588(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102aa741c(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 102aa75a4; end: 102aa7727;  */

undefined8 FUN_102aa75a4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 != 0) && (param_1 != param_2)) {
      plVar10 = (long *)(param_1 + 0x38);
      plVar11 = (long *)(param_2 + 0x38);
      do {
        lVar6 = plVar10[-2];
        uVar3 = plVar10[-1];
        lVar7 = *plVar10;
        lVar5 = plVar11[-2];
        uVar1 = plVar11[-1];
        lVar8 = *plVar11;
        if (lVar6 == 0) {
          if (lVar5 != 0) goto LAB_102aa7708;
        }
        else {
          if (lVar5 == 0) goto LAB_102aa7708;
          uVar2 = plVar10[-3];
          if ((uVar2 != plVar11[-3] || lVar6 != lVar5) &&
             (func_0x000107c605b8(uVar2,lVar6,plVar11[-3],lVar5,0), (uVar2 & 1) == 0))
          goto LAB_102aa7708;
          func_0x000107c61434(lVar5);
          func_0x000107c61434(lVar6);
        }
        if (lVar7 == 0) {
          func_0x000107c61438(lVar8,2);
          func_0x000107c6142c(lVar6);
          if (lVar8 != 0) {
            func_0x000107c6142c(lVar8);
            lVar6 = lVar8;
            goto LAB_102aa76f8;
          }
LAB_102aa75fc:
          func_0x000107c6142c(lVar5);
        }
        else {
          if (lVar8 == 0) {
LAB_102aa76f8:
            func_0x000107c6142c(lVar6);
            func_0x000107c6142c(lVar5);
            goto LAB_102aa7708;
          }
          if ((uVar3 == uVar1) && (lVar7 == lVar8)) {
            func_0x000107c61434(lVar7);
            func_0x000107c6142c();
            func_0x000107c6142c(lVar5);
            lVar5 = lVar6;
            goto LAB_102aa75fc;
          }
          func_0x000107c605b8(uVar3,lVar7,uVar1,lVar8,0);
          func_0x000107c61434(lVar7);
          func_0x000107c6142c();
          func_0x000107c6142c(lVar5);
          func_0x000107c6142c(lVar6);
          if ((uVar3 & 1) == 0) goto LAB_102aa7708;
        }
        plVar10 = plVar10 + 4;
        plVar11 = plVar11 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    uVar4 = 1;
  }
  else {
LAB_102aa7708:
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 102aa7728; end: 102aa778f;  */

undefined8 FUN_102aa7728(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  if (param_1[1] == 0) {
    if (uVar3 == 0) goto FUN_102aa75a4;
  }
  else if ((uVar3 != 0) &&
          ((uVar5 = *param_1, uVar5 == *param_2 && param_1[1] == uVar3 ||
           (func_0x000107c605b8(), (uVar5 & 1) != 0)))) {
FUN_102aa75a4:
    lVar10 = *(long *)(uVar1 + 0x10);
    if (lVar10 == *(long *)(uVar2 + 0x10)) {
      if ((lVar10 != 0) && (uVar1 != uVar2)) {
        plVar11 = (long *)(uVar1 + 0x38);
        plVar12 = (long *)(uVar2 + 0x38);
        do {
          lVar7 = plVar11[-2];
          uVar3 = plVar11[-1];
          lVar8 = *plVar11;
          lVar6 = plVar12[-2];
          uVar1 = plVar12[-1];
          lVar9 = *plVar12;
          if (lVar7 == 0) {
            if (lVar6 != 0) goto LAB_102aa7708;
          }
          else {
            if (lVar6 == 0) goto LAB_102aa7708;
            uVar2 = plVar11[-3];
            if ((uVar2 != plVar12[-3] || lVar7 != lVar6) &&
               (func_0x000107c605b8(uVar2,lVar7,plVar12[-3],lVar6,0), (uVar2 & 1) == 0))
            goto LAB_102aa7708;
            func_0x000107c61434(lVar6);
            func_0x000107c61434(lVar7);
          }
          if (lVar8 == 0) {
            func_0x000107c61438(lVar9,2);
            func_0x000107c6142c(lVar7);
            if (lVar9 != 0) {
              func_0x000107c6142c(lVar9);
              lVar7 = lVar9;
              goto LAB_102aa76f8;
            }
LAB_102aa75fc:
            func_0x000107c6142c(lVar6);
          }
          else {
            if (lVar9 == 0) {
LAB_102aa76f8:
              func_0x000107c6142c(lVar7);
              func_0x000107c6142c(lVar6);
              goto LAB_102aa7708;
            }
            if ((uVar3 == uVar1) && (lVar8 == lVar9)) {
              func_0x000107c61434(lVar8);
              func_0x000107c6142c();
              func_0x000107c6142c(lVar6);
              lVar6 = lVar7;
              goto LAB_102aa75fc;
            }
            func_0x000107c605b8(uVar3,lVar8,uVar1,lVar9,0);
            func_0x000107c61434(lVar8);
            func_0x000107c6142c();
            func_0x000107c6142c(lVar6);
            func_0x000107c6142c(lVar7);
            if ((uVar3 & 1) == 0) goto LAB_102aa7708;
          }
          plVar11 = plVar11 + 4;
          plVar12 = plVar12 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar4 = 1;
    }
    else {
LAB_102aa7708:
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0;
}



/* Entry: 102aa7790; end: 102aa77bf;  */

uint FUN_102aa7790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_102aa92f8(uVar1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],param_2[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 102aa77c0; end: 102aa77ff;  */

undefined1  [16] FUN_102aa77c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x74616c736e617274;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x656c616373;
  }
  uVar2 = 0xeb000000006e6f69;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102aa7800; end: 102aa78d7;  */

void FUN_102aa7800(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0x656c616373;
  if ((param_2 == 0x656c616373 && param_3 == -0x1b00000000000000) ||
     (func_0x000107c605b8(0x656c616373,0xe500000000000000,param_2,param_3,0), (uVar1 & 1) != 0)) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x74616c736e617274) && (param_3 == -0x14ffffffff919097)) {
      func_0x000107c6142c(0xeb000000006e6f69);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x74616c736e617274,0xeb000000006e6f69,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 102aa78d8; end: 102aa78e3;  */

undefined1  [16] FUN_102aa78d8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa78e4; end: 102aa7933;  */

void FUN_102aa78e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa93b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa7934; end: 102aa7a9f;  */

void FUN_102aa7934(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar3 = 0x112ee8330;
  func_0x0001000285a8(0x112ee8330,&UNK_10db14cd8);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa93b0();
  puVar4 = &UNK_110592a48;
  func_0x000107c606ec(puVar5,&UNK_110592a48,&UNK_110592a48,param_1,uVar1,uVar2);
  uStack_70 = *unaff_x20;
  uStack_68 = (undefined1)unaff_x20[1];
  uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x11);
  uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
  uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 9) >> 0x38);
  uStack_71 = 0;
  func_0x000102aa93f0();
  func_0x000107c60530(&uStack_70,&uStack_71,lVar3,&UNK_110592918,puVar4);
  if (unaff_x21 == 0) {
    uStack_70 = unaff_x20[4];
    uStack_68 = (undefined1)unaff_x20[5];
    uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x31);
    uStack_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x29) >> 0x38);
    uStack_71 = 1;
    func_0x000107c60530(&uStack_70,&uStack_71,lVar3,&UNK_110592918,puVar4);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 102aa7aa0; end: 102aa7ae7;  */

void FUN_102aa7aa0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_102aa9430(&uStack_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = CONCAT71(uStack_37,uStack_38);
    param_1[4] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_2f;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_30,uStack_37);
  }
  return;
}



/* Entry: 102aa7ae8; end: 102aa7b53;  */

void FUN_102aa7ae8(void)

{
  FUN_102aa7934();
  return;
}



/* Entry: 102aa7b54; end: 102aa7bd7;  */

void FUN_102aa7b54(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102aa7bd8; end: 102aa7be7;  */

undefined1  [16] FUN_102aa7bd8(void)

{
  byte *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = (ulong)*unaff_x20 + 0x78;
  return auVar1;
}



/* Entry: 102aa7be8; end: 102aa7c0b;  */

void FUN_102aa7be8(undefined1 *param_1,undefined1 param_2)

{
  FUN_102aa9678();
  *param_1 = param_2;
  return;
}



/* Entry: 102aa7c0c; end: 102aa7c17;  */

undefined1  [16] FUN_102aa7c0c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102aa7c18; end: 102aa7c67;  */

void FUN_102aa7c18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102aa95f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102aa7c68; end: 102aa7e03;  */

void FUN_102aa7c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_70 [7];
  undefined1 uStack_69;
  undefined8 uStack_68;
  
  lVar3 = 0x112ee8348;
  func_0x0001000285a8(0x112ee8348,&UNK_10db14ce0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  uVar2 = *(undefined8 *)(param_4 + 0x20);
  func_0x0001000a8868(param_4,uVar1);
  FUN_102aa95f8();
  puVar4 = &UNK_1105929b8;
  func_0x000107c606ec(puVar5,&UNK_1105929b8,&UNK_1105929b8,param_4,uVar1,uVar2);
  uStack_69 = 0;
  uStack_68 = param_1;
  func_0x000102aa9638();
  func_0x000107c60554(&uStack_68,&uStack_69,lVar3,PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar4);
  if (unaff_x21 == 0) {
    uStack_69 = 1;
    uStack_68 = param_2;
    func_0x000107c60554(&uStack_68,&uStack_69,lVar3,PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar4
                       );
    uStack_69 = 2;
    uStack_68 = param_3;
    func_0x000107c60554(&uStack_68,&uStack_69,lVar3,PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar4
                       );
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 102aa7e04; end: 102aa7e2f;  */

void FUN_102aa7e04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_102aa976c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  return;
}



/* Entry: 102aa7e30; end: 102aa7e4b;  */

void FUN_102aa7e30(void)

{
  undefined8 *unaff_x20;
  
  FUN_102aa7c68(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 102aa7e4c; end: 102aa7e7b;  */

bool FUN_102aa7e4c(double *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  if (!bVar1) {
    return false;
  }
  return param_1[2] == param_2[2];
}



/* Entry: 102aa7e7c; end: 102aa7edf;  */

ulong FUN_102aa7e7c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102aa7ee0; end: 102aa821f;  */

/* WARNING: Removing unreachable block (ram,0x000102aa7fd0) */
/* WARNING: Removing unreachable block (ram,0x000102aa808c) */
/* WARNING: Removing unreachable block (ram,0x000102aa8030) */

void FUN_102aa7ee0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [168];
  undefined8 ***pppuStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 uStack_191;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined2 uStack_138;
  undefined1 uStack_131;
  long lStack_130;
  long lStack_128;
  undefined8 ***pppuStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = 0x112ee84a0;
  func_0x0001000285a8(0x112ee84a0,&UNK_10db15790);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102aa8220();
  func_0x000107c606e0((long)&lStack_340 - extraout_x8,&UNK_110592c88,&UNK_110592c88,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    lStack_100 = 0;
    lStack_108 = 0;
    pppuStack_240 = (undefined8 ***)((ulong)pppuStack_240 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_240;
    lVar4 = lVar3;
    lStack_2f0 = lVar7;
    func_0x000107c604f4();
    uStack_131 = 1;
    pppuStack_118 = ppppuVar5;
    lStack_110 = lVar4;
    FUN_102aab2d0();
    puVar6 = &UNK_110592618;
    func_0x000107c60508(&lStack_130,&UNK_110592618,&uStack_131,lVar3,&UNK_110592618,ppppuVar5);
    lStack_f0 = lStack_128;
    lStack_f8 = lStack_130;
    uStack_191 = 2;
    func_0x000102aab310();
    func_0x000107c60508(&lStack_190,&UNK_110592698,&uStack_191,lVar3,&UNK_110592698,puVar6);
    lStack_2f8 = lStack_148;
    lStack_308 = lStack_178;
    lStack_310 = lStack_180;
    lStack_318 = lStack_188;
    lStack_320 = lStack_190;
    lStack_328 = lStack_158;
    lStack_330 = lStack_160;
    lStack_338 = lStack_168;
    lStack_340 = lStack_170;
    (**(code **)(lStack_2f0 + 8))((long)&lStack_340 - extraout_x8,lVar3);
    lStack_e0 = lStack_318;
    lStack_e8 = lStack_320;
    lStack_d0 = lStack_308;
    lStack_d8 = lStack_310;
    lStack_c0 = lStack_338;
    lStack_c8 = lStack_340;
    lStack_b0 = lStack_328;
    lStack_b8 = lStack_330;
    lStack_a8 = lStack_150;
    lStack_a0 = lStack_2f8;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    lStack_1a0 = 0;
    lStack_238 = lStack_110;
    pppuStack_240 = pppuStack_118;
    lStack_228 = lStack_100;
    lStack_230 = lStack_108;
    lStack_1b8 = CONCAT62(uStack_8e,uStack_138);
    lStack_1a8 = 0;
    lStack_1b0 = 0;
    lStack_218 = lStack_f0;
    lStack_220 = lStack_f8;
    lStack_208 = lStack_318;
    lStack_210 = lStack_320;
    lStack_1f8 = lStack_308;
    lStack_200 = lStack_310;
    lStack_1e8 = lStack_338;
    lStack_1f0 = lStack_340;
    lStack_1d8 = lStack_328;
    lStack_1e0 = lStack_330;
    lStack_1c8 = lStack_2f8;
    lStack_1d0 = lStack_150;
    lStack_1c0 = lStack_140;
    FUN_102a7b970(&pppuStack_240,auStack_2e8);
    func_0x0001000834e4(param_2);
    func_0x000102a7b9ac(&pppuStack_118);
    param_1[0x11] = lStack_1b8;
    param_1[0x10] = lStack_1c0;
    param_1[0x13] = lStack_1a8;
    param_1[0x12] = lStack_1b0;
    param_1[0x14] = lStack_1a0;
    param_1[9] = lStack_1f8;
    param_1[8] = lStack_200;
    param_1[0xb] = lStack_1e8;
    param_1[10] = lStack_1f0;
    param_1[0xd] = lStack_1d8;
    param_1[0xc] = lStack_1e0;
    param_1[0xf] = lStack_1c8;
    param_1[0xe] = lStack_1d0;
    param_1[1] = lStack_238;
    *param_1 = (long)pppuStack_240;
    param_1[3] = lStack_228;
    param_1[2] = lStack_230;
    param_1[5] = lStack_218;
    param_1[4] = lStack_220;
    param_1[7] = lStack_208;
    param_1[6] = lStack_210;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102aa8220; end: 102aa8307;  */

void FUN_102aa8220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee82b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1570c;
  func_0x000107c61520(&UNK_10db1570c,&UNK_110592c88);
  puRam0000000112ee82b8 = puVar1;
  return;
}



/* Entry: 102aa8308; end: 102aa836f;  */

void FUN_102aa8308(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puVar2 = PTR___sxSgSEsSERzlMc_11034f180;
    uStack_38 = uVar1;
    func_0x000107c61520(PTR___sxSgSEsSERzlMc_11034f180,param_2,&uStack_38);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 102aa8370; end: 102aa83af;  */

void FUN_102aa8370(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee82e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db14e00;
  func_0x000107c61520(&UNK_10db14e00,&UNK_110592698);
  puRam0000000112ee82e0 = puVar1;
  return;
}



/* Entry: 102aa83b0; end: 102aa8447;  */

undefined8 FUN_102aa83b0(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(char *)(param_2 + 3) != '\x01') {
      return 0;
    }
  }
  else {
    if (*(char *)(param_2 + 3) == '\x01') {
      return 0;
    }
    bVar1 = false;
    if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
      bVar1 = param_1[1] == param_2[1];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
      bVar2 = param_1[2] == param_2[2];
    }
    if (!bVar2) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    if (*(char *)(param_2 + 7) == '\x01') {
      return 1;
    }
  }
  else if (*(char *)(param_2 + 7) != '\x01') {
    bVar1 = false;
    if ((param_1[4] == param_2[4]) && (bVar1 = false, !NAN(param_1[5]) && !NAN(param_2[5]))) {
      bVar1 = param_1[5] == param_2[5];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(param_1[6]) && !NAN(param_2[6]))) {
      bVar2 = param_1[6] == param_2[6];
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 102aa8448; end: 102aa8b5b;  */

undefined8 FUN_102aa8448(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  ulong *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  undefined2 uStack_308;
  undefined6 uStack_306;
  undefined2 uStack_300;
  undefined8 uStack_2fe;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  undefined2 uStack_2a8;
  undefined6 uStack_2a6;
  undefined2 uStack_2a0;
  undefined6 uStack_29e;
  undefined1 uStack_298;
  char cStack_297;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined2 uStack_248;
  undefined6 uStack_246;
  undefined2 uStack_240;
  undefined8 uStack_23e;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined8 uStack_17e;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined8 uStack_11e;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined2 uStack_c8;
  undefined6 uStack_c6;
  undefined2 uStack_c0;
  undefined8 uStack_be;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  uVar6 = param_1[1];
  uVar5 = param_2[1];
  if (uVar6 == 0) {
    if (uVar5 != 0) {
      return 0;
    }
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    uVar7 = *param_1;
    if ((uVar7 != *param_2 || uVar6 != uVar5) &&
       (func_0x000107c605b8(uVar7,uVar6,*param_2,uVar5,0), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_1[3];
  uVar5 = param_2[3];
  if (uVar6 == 0) {
    if (uVar5 != 0) {
      return 0;
    }
  }
  else {
    if (uVar5 == 0) {
      return 0;
    }
    uVar7 = param_1[2];
    if (((uVar7 != param_2[2]) || (uVar6 != uVar5)) &&
       (func_0x000107c605b8(uVar7,uVar6,param_2[2],uVar5,0), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  uVar6 = param_1[5];
  uVar5 = param_2[5];
  if (uVar6 == 1) {
    if (uVar5 != 1) {
      return 0;
    }
  }
  else {
    if (uVar5 == 1) {
      return 0;
    }
    if (uVar6 == 0) {
      if (uVar5 != 0) {
        return 0;
      }
    }
    else {
      if (uVar5 == 0) {
        return 0;
      }
      uVar7 = param_1[4];
      if (((uVar7 != param_2[4]) || (uVar6 != uVar5)) &&
         (func_0x000107c605b8(uVar7,uVar6,param_2[4],uVar5,0), (uVar7 & 1) == 0)) {
        return 0;
      }
    }
  }
  uStack_208 = param_1[0xb];
  uStack_210 = param_1[10];
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_218 = param_1[9];
  uStack_220 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_1f8 = param_1[0xd];
  uStack_200 = param_1[0xc];
  uStack_d0 = param_1[0xe];
  uStack_c8 = (undefined2)param_1[0xf];
  uStack_be = *(undefined8 *)((long)param_1 + 0x82);
  uStack_c6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_c0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_228 = param_1[7];
  uStack_230 = param_1[6];
  uStack_1a8 = param_2[0xb];
  uStack_1b0 = param_2[10];
  uStack_138 = param_2[0xd];
  uStack_140 = param_2[0xc];
  uStack_1b8 = param_2[9];
  uStack_1c0 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  uStack_198 = param_2[0xd];
  uStack_1a0 = param_2[0xc];
  uStack_130 = param_2[0xe];
  uStack_128 = (undefined2)param_2[0xf];
  uStack_11e = *(undefined8 *)((long)param_2 + 0x82);
  uStack_126 = (undefined6)*(undefined8 *)((long)param_2 + 0x7a);
  uStack_120 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_158 = param_2[9];
  uStack_160 = param_2[8];
  uStack_1c8 = param_2[7];
  uStack_1d0 = param_2[6];
  uStack_1f0 = param_1[0xe];
  uStack_1e8 = (undefined2)param_1[0xf];
  uVar9 = *(undefined8 *)((long)param_1 + 0x82);
  uStack_1de = (undefined6)uVar9;
  uStack_1d8 = (undefined2)((ulong)uVar9 >> 0x30);
  uStack_1e6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
  uStack_1e0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
  uStack_190 = param_2[0xe];
  uStack_188 = (undefined2)param_2[0xf];
  uStack_17e = *(undefined8 *)((long)param_2 + 0x82);
  uStack_186 = (undefined6)*(undefined8 *)((long)param_2 + 0x7a);
  uStack_180 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
  if (uStack_228 == 2) {
    if (uStack_1c8 == 2) {
      uStack_2c8 = param_1[0xb];
      uStack_2d0 = param_1[10];
      uStack_2b8 = param_1[0xd];
      uStack_2c0 = param_1[0xc];
      uStack_2b0 = param_1[0xe];
      uStack_2a8 = (undefined2)param_1[0xf];
      uVar9 = *(undefined8 *)((long)param_1 + 0x82);
      uStack_29e = (undefined6)uVar9;
      uStack_298 = (undefined1)((ulong)uVar9 >> 0x30);
      cStack_297 = (char)((ulong)uVar9 >> 0x38);
      uStack_2a6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
      uStack_2a0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
      uStack_2e8 = param_1[7];
      uStack_2f0 = param_1[6];
      uStack_2d8 = param_1[9];
      uStack_2e0 = param_1[8];
      FUN_102aa6ecc(&uStack_110,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
      FUN_102aa6ecc(&uStack_170,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
      puVar3 = &uStack_2f0;
      goto LAB_102aa863c;
    }
  }
  else {
    uStack_2c8 = param_1[0xb];
    uStack_2d0 = param_1[10];
    uStack_2b8 = param_1[0xd];
    uStack_2c0 = param_1[0xc];
    uStack_2b0 = param_1[0xe];
    uStack_2a8 = (undefined2)param_1[0xf];
    uVar10 = *(undefined8 *)((long)param_1 + 0x82);
    uStack_29e = (undefined6)uVar10;
    uStack_298 = (undefined1)((ulong)uVar10 >> 0x30);
    cStack_297 = (char)((ulong)uVar10 >> 0x38);
    cVar2 = cStack_297;
    uStack_2a6 = (undefined6)*(undefined8 *)((long)param_1 + 0x7a);
    uStack_2a0 = (undefined2)((ulong)*(undefined8 *)((long)param_1 + 0x7a) >> 0x30);
    uVar6 = param_1[7];
    uVar5 = param_1[6];
    uVar13 = param_1[9];
    uVar7 = param_1[8];
    if (uStack_1c8 != 2) {
      uVar11 = param_2[7];
      uVar8 = param_2[6];
      uVar14 = param_2[9];
      uVar12 = param_2[8];
      uVar9 = *(undefined8 *)((long)param_2 + 0x82);
      uStack_300 = (undefined2)((ulong)*(undefined8 *)((long)param_2 + 0x7a) >> 0x30);
      uStack_328 = param_2[0xb];
      uStack_330 = param_2[10];
      uStack_318 = param_2[0xd];
      uStack_320 = param_2[0xc];
      uStack_310 = param_2[0xe];
      uStack_308 = (undefined2)param_2[0xf];
      uStack_306 = (undefined6)(param_2[0xf] >> 0x10);
      uStack_2fe._7_1_ = (char)((ulong)uVar9 >> 0x38);
      cVar1 = uStack_2fe._7_1_;
      uStack_350 = uVar8;
      uStack_348 = uVar11;
      uStack_340 = uVar12;
      uStack_338 = uVar14;
      uStack_2fe = uVar9;
      uStack_2f0 = uVar5;
      uStack_2e8 = uVar6;
      uStack_2e0 = uVar7;
      uStack_2d8 = uVar13;
      if (uVar6 == 1) {
        if (uVar11 != 1) goto LAB_102aa8894;
        FUN_102aa6ecc(&uStack_110,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_170,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_350,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
LAB_102aa89cc:
        if (cVar2 == '\x01') {
          func_0x000102aab260(&uStack_350,0x112ee82a8,&UNK_10db14ca0);
          if (cVar1 == '\x01') {
LAB_102aa8b44:
            puVar3 = &uStack_230;
LAB_102aa863c:
            func_0x000102aab260(puVar3,0x112ee82a8,&UNK_10db14ca0);
            uVar5 = param_1[0x14];
            uVar6 = param_2[0x14];
            if (uVar5 == 0) {
              if (uVar6 == 0) {
                return 1;
              }
              return 0;
            }
            if (uVar6 == 0) {
              return 0;
            }
            uVar7 = param_1[0x12];
            uVar8 = param_1[0x13];
            uVar13 = param_2[0x12];
            uVar11 = param_2[0x13];
            if (uVar8 == 0) {
              if (uVar11 != 0) {
                FUN_102a957ec(uVar13,uVar11,uVar6);
                func_0x000107c6142c(uVar6);
                func_0x000107c6142c(uVar11);
                return 0;
              }
            }
            else {
              if (uVar11 == 0) {
                return 0;
              }
              if (((uVar7 != uVar13) || (uVar8 != uVar11)) &&
                 (uVar12 = uVar7, func_0x000107c605b8(uVar7,uVar8,uVar13,uVar11,0),
                 (uVar12 & 1) == 0)) {
                FUN_102a957ec(uVar13,uVar11,uVar6);
                FUN_102a957ec(uVar7,uVar8,uVar5);
                func_0x000107c6142c(uVar6);
                func_0x000107c6142c(uVar11);
                func_0x000102aab2a0(uVar7,uVar8,uVar5);
                return 0;
              }
            }
            FUN_102a957ec(uVar13,uVar11,uVar6);
            FUN_102a957ec(uVar7,uVar8,uVar5);
            uVar13 = uVar5;
            FUN_102aa75a4(uVar5,uVar6);
            func_0x000107c6142c(uVar6);
            func_0x000107c6142c(uVar11);
            func_0x000102aab2a0(uVar7,uVar8,uVar5);
            if ((uVar13 & 1) == 0) {
              return 0;
            }
            return 1;
          }
        }
        else {
          if (cVar1 == '\x01') goto LAB_102aa8a0c;
          uStack_3a8 = param_2[0xb];
          uStack_3b0 = param_2[10];
          uStack_398 = param_2[0xd];
          uStack_3a0 = param_2[0xc];
          uStack_390 = param_2[0xe];
          uStack_388 = (undefined1)param_2[0xf];
          uStack_37f = *(undefined8 *)((long)param_2 + 0x81);
          uStack_387 = (undefined7)*(undefined8 *)((long)param_2 + 0x79);
          uStack_380 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x79) >> 0x38);
          uStack_a8 = param_1[0xb];
          uStack_b0 = param_1[10];
          uStack_98 = param_1[0xd];
          uStack_a0 = param_1[0xc];
          uStack_90 = param_1[0xe];
          uStack_88 = (undefined1)param_1[0xf];
          uStack_7f = *(undefined8 *)((long)param_1 + 0x81);
          uStack_87 = (undefined7)*(undefined8 *)((long)param_1 + 0x79);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x79) >> 0x38);
          puVar3 = &uStack_b0;
          FUN_102aa83b0(puVar3,&uStack_3b0);
          func_0x000102aab260(&uStack_350,0x112ee82a8,&UNK_10db14ca0);
          if (((ulong)puVar3 & 1) != 0) goto LAB_102aa8b44;
        }
      }
      else {
        if (uVar11 != 1) {
          FUN_102aa92f8(uVar5,uVar6,uVar7,uVar13,uVar8,uVar11,uVar12,uVar14);
          FUN_102aa6ecc(&uStack_110,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          FUN_102aa6ecc(&uStack_170,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          FUN_102aa6ecc(&uStack_350,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          FUN_102aa6ecc(&uStack_2f0,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar14);
          func_0x000102aab260(&uStack_2f0,0x112ee82a8,&UNK_10db14ca0);
          if ((uVar5 & 1) != 0) goto LAB_102aa89cc;
LAB_102aa8a0c:
          func_0x000102aab260(&uStack_350,0x112ee82a8,&UNK_10db14ca0);
          goto LAB_102aa8a24;
        }
LAB_102aa8894:
        FUN_102aa6ecc(&uStack_110,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_170,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        FUN_102aa6ecc(&uStack_2f0,&uStack_3b0,0x112ee82a8,&UNK_10db14ca0);
        func_0x000102aab1f8(uVar5,uVar6,uVar7,uVar13);
        func_0x000102aab1f8(uVar8,uVar11,uVar12,uVar14);
      }
LAB_102aa8a24:
      uVar9 = 0x112ee82a8;
      puVar4 = &UNK_10db14ca0;
      puVar3 = &uStack_230;
      goto LAB_102aa8a38;
    }
  }
  uStack_248 = uStack_188;
  uStack_2a8 = uStack_1e8;
  uStack_2a6 = uStack_1e6;
  uStack_298 = (undefined1)((ulong)uVar9 >> 0x30);
  cStack_297 = (char)((ulong)uVar9 >> 0x38);
  uStack_2a0 = uStack_1e0;
  uStack_29e = uStack_1de;
  uStack_2f0 = uStack_230;
  uStack_2e8 = uStack_228;
  uStack_2e0 = uStack_220;
  uStack_2d8 = uStack_218;
  uStack_2d0 = uStack_210;
  uStack_2c8 = uStack_208;
  uStack_2c0 = uStack_200;
  uStack_2b8 = uStack_1f8;
  uStack_2b0 = uStack_1f0;
  uStack_290 = uStack_1d0;
  uStack_288 = uStack_1c8;
  uStack_280 = uStack_1c0;
  uStack_278 = uStack_1b8;
  uStack_270 = uStack_1b0;
  uStack_268 = uStack_1a8;
  uStack_260 = uStack_1a0;
  uStack_258 = uStack_198;
  uStack_250 = uStack_190;
  uStack_246 = uStack_186;
  uStack_240 = uStack_180;
  uStack_23e = uStack_17e;
  FUN_102aa6ecc(&uStack_110,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
  FUN_102aa6ecc(&uStack_170,&uStack_350,0x112ee82a8,&UNK_10db14ca0);
  uVar9 = 0x112ee8498;
  puVar4 = &UNK_10db15788;
  puVar3 = &uStack_2f0;
LAB_102aa8a38:
  func_0x000102aab260(puVar3,uVar9,puVar4);
  return 0;
}



/* Entry: 102aa8b5c; end: 102aa8b9b;  */

void FUN_102aa8b5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee82f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db156bc;
  func_0x000107c61520(&UNK_10db156bc,&UNK_110592bf8);
  puRam0000000112ee82f0 = puVar1;
  return;
}



/* Entry: 102aa8b9c; end: 102aa8e3b;  */

undefined8 FUN_102aa8b9c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  undefined1 auStack_c0 [96];
  
  uVar7 = *param_1;
  uVar3 = param_1[1];
  uVar8 = param_1[2];
  uVar4 = param_1[3];
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  if (uVar3 == 1) {
    if (uVar5 != 1) {
LAB_102aa8c18:
      func_0x000102aab22c(param_2,auStack_c0);
      func_0x000102aab22c(param_1,auStack_c0);
      func_0x000102aab1f8(uVar7,uVar3,uVar8,uVar4);
      func_0x000102aab1f8(uVar1,uVar5,uVar2,uVar6);
      return 0;
    }
    func_0x000102aab22c(param_2,auStack_c0);
    goto LAB_102aa8bf0;
  }
  if (uVar5 == 1) goto LAB_102aa8c18;
  if (uVar3 == 0) {
    if (uVar5 == 0) {
LAB_102aa8cd4:
      if (uVar4 == 0) {
        if (uVar6 == 0) {
LAB_102aa8e08:
          func_0x000102aab22c(param_2,auStack_c0);
          func_0x000102aab22c(param_1,auStack_c0);
          func_0x000107c6142c(uVar5);
          goto LAB_102aa8e28;
        }
      }
      else if (uVar6 != 0) {
        if ((uVar8 == uVar2) && (uVar4 == uVar6)) goto LAB_102aa8e08;
        func_0x000107c605b8(uVar8,uVar4,uVar2,uVar6,0);
        func_0x000102aab22c(param_2,auStack_c0);
        func_0x000102aab22c(param_1,auStack_c0);
        func_0x000107c6142c(uVar5);
        if ((uVar8 & 1) == 0) goto LAB_102aa8d70;
LAB_102aa8e28:
        func_0x000107c6142c(uVar6);
        func_0x000102a93330(param_1);
LAB_102aa8bf0:
        cVar9 = *(char *)((long)param_2 + 0x59);
        if (*(char *)((long)param_1 + 0x59) != '\x01') {
          if (cVar9 == '\x01') {
            return 0;
          }
          cVar9 = (char)param_2[0xb];
          if ((char)param_1[7] == '\x01') {
            if ((char)param_2[7] != '\x01') {
              return 0;
            }
          }
          else {
            if ((char)param_2[7] == '\x01') {
              return 0;
            }
            if ((double)param_1[4] != (double)param_2[4]) {
              return 0;
            }
            if ((double)param_1[5] != (double)param_2[5]) {
              return 0;
            }
            if ((double)param_1[6] != (double)param_2[6]) {
              return 0;
            }
          }
          if ((char)param_1[0xb] != '\x01') {
            if (cVar9 == '\x01') {
              return 0;
            }
            if ((double)param_1[8] != (double)param_2[8]) {
              return 0;
            }
            if ((double)param_1[9] != (double)param_2[9]) {
              return 0;
            }
            if ((double)param_1[10] == (double)param_2[10]) {
              return 1;
            }
            return 0;
          }
        }
        if (cVar9 != '\x01') {
          return 0;
        }
        return 1;
      }
    }
  }
  else {
    if (uVar5 == 0) {
      func_0x000102aab22c(param_2,auStack_c0);
      func_0x000102aab22c(param_1,auStack_c0);
      goto LAB_102aa8d70;
    }
    if (((uVar7 == uVar1) && (uVar3 == uVar5)) ||
       (func_0x000107c605b8(uVar7,uVar3,uVar1,uVar5,0), (uVar7 & 1) != 0)) goto LAB_102aa8cd4;
  }
  func_0x000102aab22c(param_2,auStack_c0);
  func_0x000102aab22c(param_1,auStack_c0);
  func_0x000107c6142c(uVar5);
LAB_102aa8d70:
  func_0x000107c6142c(uVar6);
  func_0x000102a93330(param_1);
  return 0;
}



/* Entry: 102aa8e3c; end: 102aa8efb;  */

void FUN_102aa8e3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1566c;
  func_0x000107c61520(&UNK_10db1566c,&UNK_110592b68);
  puRam0000000112ee8308 = puVar1;
  return;
}



/* Entry: 102aa8efc; end: 102aa912f;  */

/* WARNING: Removing unreachable block (ram,0x000102aa9078) */
/* WARNING: Removing unreachable block (ram,0x000102aa8fec) */

void FUN_102aa8efc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [96];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined2 uStack_120;
  undefined8 uStack_11e;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined8 uStack_de;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7e;
  
  lVar3 = 0x112ee8480;
  func_0x0001000285a8(0x112ee8480,&UNK_10db15780);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102aa8e3c();
  puVar5 = &UNK_110592b68;
  func_0x000107c606e0((long)&uStack_1e0 - extraout_x8,&UNK_110592b68,&UNK_110592b68,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    auStack_1d0[0] = 0;
    func_0x000102aab178();
    puVar6 = &UNK_110592718;
    func_0x000107c604e8(&uStack_170,&UNK_110592718,auStack_1d0,lVar3,&UNK_110592718,puVar5);
    uStack_d0 = uStack_170;
    uStack_c8 = uStack_168;
    uStack_1e0 = uStack_158;
    uStack_1d8 = uStack_160;
    uStack_c0 = uStack_160;
    uStack_b8 = uStack_158;
    uStack_111 = 1;
    func_0x000102aab1b8();
    func_0x000107c604e8(&uStack_110,&UNK_110592898,&uStack_111,lVar3,&UNK_110592898,puVar6);
    (**(code **)(lVar7 + 8))((long)&uStack_1e0 - extraout_x8,lVar3);
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    uStack_90 = uStack_f0;
    uStack_7e = uStack_de;
    uStack_a8 = uStack_108;
    uStack_b0 = uStack_110;
    uStack_148 = uStack_108;
    uStack_150 = uStack_110;
    uStack_138 = uStack_f8;
    uStack_140 = uStack_100;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_128 = uStack_e8;
    uStack_130 = uStack_f0;
    uStack_11e = uStack_de;
    uStack_126 = uStack_e6;
    uStack_120 = uStack_e0;
    func_0x000102aab22c(&uStack_170,auStack_1d0);
    func_0x0001000834e4(param_2);
    func_0x000102a93330(&uStack_d0);
    param_1[5] = uStack_148;
    param_1[4] = uStack_150;
    param_1[7] = uStack_138;
    param_1[6] = uStack_140;
    param_1[9] = CONCAT62(uStack_126,uStack_128);
    param_1[8] = uStack_130;
    *(undefined8 *)((long)param_1 + 0x52) = uStack_11e;
    *(ulong *)((long)param_1 + 0x4a) = CONCAT26(uStack_120,uStack_126);
    param_1[1] = uStack_168;
    *param_1 = uStack_170;
    param_1[3] = uStack_158;
    param_1[2] = uStack_160;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102aa9130; end: 102aa916f;  */

void FUN_102aa9130(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1561c;
  func_0x000107c61520(&UNK_10db1561c,&UNK_110592ad8);
  puRam0000000112ee8328 = puVar1;
  return;
}



/* Entry: 102aa9170; end: 102aa92f7;  */

/* WARNING: Removing unreachable block (ram,0x000102aa92b0) */
/* WARNING: Removing unreachable block (ram,0x000102aa9238) */

undefined1 * FUN_102aa9170(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112ee8478;
  func_0x0001000285a8(0x112ee8478,&UNK_10db15778);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa9130();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110592ad8,&UNK_110592ad8,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604d4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c604d4(&uStack_52,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 102aa92f8; end: 102aa93af;  */

undefined8
FUN_102aa92f8(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 102aa93b0; end: 102aa942f;  */

void FUN_102aa93b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db155cc;
  func_0x000107c61520(&UNK_10db155cc,&UNK_110592a48);
  puRam0000000112ee8338 = puVar1;
  return;
}



/* Entry: 102aa9430; end: 102aa95f7;  */

/* WARNING: Removing unreachable block (ram,0x000102aa951c) */

void FUN_102aa9430(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_51;
  
  lVar4 = 0x112ee8468;
  func_0x0001000285a8(0x112ee8468,&UNK_10db15770);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102aa93b0();
  puVar6 = &UNK_110592a48;
  func_0x000107c606e0((long)&uStack_a0 - extraout_x8,&UNK_110592a48,&UNK_110592a48,lVar5,uVar1,uVar2
                     );
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x000102aab138();
    func_0x000107c604e8(&uStack_80,&UNK_110592918,&uStack_51,lVar4,&UNK_110592918,puVar6);
    uVar3 = uStack_68;
    uVar1 = uStack_80;
    uStack_90 = uStack_70;
    uStack_88 = uStack_78;
    uStack_51 = 1;
    func_0x000107c604e8(&uStack_80,&UNK_110592918,&uStack_51,lVar4,&UNK_110592918,puVar6);
    (**(code **)(lVar7 + 8))((long)&uStack_a0 - extraout_x8,lVar4);
    uStack_98 = uStack_78;
    uStack_a0 = uStack_80;
    func_0x0001000834e4(param_2);
    *param_1 = uVar1;
    param_1[1] = uStack_88;
    param_1[2] = uStack_90;
    *(undefined1 *)(param_1 + 3) = uVar3;
    param_1[5] = uStack_98;
    param_1[4] = uStack_a0;
    param_1[6] = uStack_70;
    *(undefined1 *)(param_1 + 7) = uStack_68;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102aa95f8; end: 102aa9677;  */

void FUN_102aa95f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1557c;
  func_0x000107c61520(&UNK_10db1557c,&UNK_1105929b8);
  puRam0000000112ee8350 = puVar1;
  return;
}



/* Entry: 102aa9678; end: 102aa976b;  */

undefined4 FUN_102aa9678(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != 0x78) || (param_2 != -0x1f00000000000000)) {
    uVar1 = 0;
    func_0x000107c605b8(0x78,0xe100000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != 0x79) || (param_2 != -0x1f00000000000000)) {
        uVar1 = 0x79;
        func_0x000107c605b8(0x79,0xe100000000000000,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 == 0x7a) && (param_2 == -0x1f00000000000000)) {
            func_0x000107c6142c(0xe100000000000000);
            return 2;
          }
          uVar1 = 0;
          func_0x000107c605b8(0x7a,0xe100000000000000,param_1,param_2,0);
          func_0x000107c6142c(param_2);
          if ((uVar1 & 1) != 0) {
            return 2;
          }
          return 3;
        }
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 102aa976c; end: 102aa993b;  */

/* WARNING: Removing unreachable block (ram,0x000102aa9894) */

undefined8 FUN_102aa976c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 unaff_d8;
  undefined1 auStack_80 [15];
  undefined1 uStack_71;
  undefined8 uStack_68;
  
  lVar3 = 0x112ee8460;
  func_0x0001000285a8(0x112ee8460,&UNK_10db15768);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar4 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102aa95f8();
  puVar5 = &UNK_1105929b8;
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_1105929b8,&UNK_1105929b8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_71 = 0;
    func_0x0001010f2b20();
    func_0x000107c60508(&uStack_68,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_71,lVar3,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    uStack_71 = 1;
    func_0x000107c60508(&uStack_68,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_71,lVar3,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    uStack_71 = 2;
    func_0x000107c60508(&uStack_68,PTR___s12CoreGraphics7CGFloatVN_1103513a8,&uStack_71,lVar3,
                        PTR___s12CoreGraphics7CGFloatVN_1103513a8,puVar5);
    (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_1);
    unaff_d8 = uStack_68;
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return unaff_d8;
}



/* Entry: 102aa993c; end: 102aa99b3;  */

/* WARNING: Possible PIC construction at 0x000102aa9950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aa9968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102aa9984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aa9954) */
/* WARNING: Removing unreachable block (ram,0x000102aa996c) */
/* WARNING: Removing unreachable block (ram,0x000102aa9988) */
/* WARNING: Removing unreachable block (ram,0x000102aa99a8) */
/* WARNING: Removing unreachable block (ram,0x000102aa9990) */
/* WARNING: Removing unreachable block (ram,0x000102aa997c) */
/* WARNING: Removing unreachable block (ram,0x000102aa9968) */

void FUN_102aa993c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102aa99b4; end: 102aa9eef;  */

undefined8 * FUN_102aa99b4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar1 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  if (lVar1 == 1) {
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
  }
  else {
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    func_0x000107c61434(lVar1);
  }
  lVar1 = param_2[7];
  if (lVar1 == 1) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
  }
  else {
    if (lVar1 == 2) {
      uVar2 = param_2[10];
      uVar4 = param_2[0xd];
      uVar3 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar2;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar3;
      uVar2 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0x7a);
      *(undefined8 *)((long)param_1 + 0x82) = *(undefined8 *)((long)param_2 + 0x82);
      *(undefined8 *)((long)param_1 + 0x7a) = uVar2;
      uVar2 = param_2[6];
      uVar4 = param_2[9];
      uVar3 = param_2[8];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
      param_1[9] = uVar4;
      param_1[8] = uVar3;
      lVar1 = param_2[0x14];
      goto joined_r0x000102aa9aa4;
    }
    param_1[6] = param_2[6];
    param_1[7] = lVar1;
    uVar2 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = uVar2;
    func_0x000107c61434();
    func_0x000107c61434(uVar2);
  }
  uVar2 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x7a);
  *(undefined8 *)((long)param_1 + 0x82) = *(undefined8 *)((long)param_2 + 0x82);
  *(undefined8 *)((long)param_1 + 0x7a) = uVar2;
  lVar1 = param_2[0x14];
joined_r0x000102aa9aa4:
  if (lVar1 == 0) {
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x14] = param_2[0x14];
  }
  else {
    uVar2 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar2;
    param_1[0x14] = lVar1;
    func_0x000107c61434();
    func_0x000107c61434(lVar1);
  }
  return param_1;
}



/* Entry: 102aa9ef0; end: 102aa9fdf;  */

int FUN_102aa9ef0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102aa9fe0; end: 102aaa04f;  */

undefined8 * FUN_102aa9fe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102aaa050; end: 102aaa10b;  */

int FUN_102aaa050(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102aaa10c; end: 102aaa147;  */

/* WARNING: Possible PIC construction at 0x000102aaa134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aaa138) */

void FUN_102aaa10c(long param_1)

{
  if (*(long *)(param_1 + 8) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 102aaa148; end: 102aaa2b3;  */

void FUN_102aaa148(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[1];
  if (lVar1 == 1) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = lVar1;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    func_0x000107c61434(lVar1);
    func_0x000107c61434(uVar2);
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x4a);
  *(undefined8 *)((long)param_1 + 0x52) = *(undefined8 *)((long)param_2 + 0x52);
  *(undefined8 *)((long)param_1 + 0x4a) = uVar2;
  return;
}



/* Entry: 102aaa2b4; end: 102aaa2d7;  */

void FUN_102aaa2b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  uVar7 = *(undefined8 *)((long)param_2 + 0x4a);
  *(undefined8 *)((long)param_1 + 0x52) = *(undefined8 *)((long)param_2 + 0x52);
  *(undefined8 *)((long)param_1 + 0x4a) = uVar7;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 102aaa2d8; end: 102aaa36f;  */

void FUN_102aaa2d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = param_1[1];
  if (lVar2 == 1) {
    uVar4 = *param_2;
    uVar5 = param_2[3];
    uVar1 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar5;
    param_1[2] = uVar1;
  }
  else {
    lVar3 = param_2[1];
    if (lVar3 == 1) {
      func_0x000102a932fc();
      uVar4 = *param_2;
      uVar5 = param_2[3];
      uVar1 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_1[3] = uVar5;
      param_1[2] = uVar1;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = lVar3;
      func_0x000107c6142c(lVar2);
      uVar4 = param_2[3];
      uVar1 = param_1[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar4;
      func_0x000107c6142c(uVar1);
    }
  }
  uVar4 = param_2[4];
  uVar5 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  param_1[7] = uVar5;
  param_1[6] = uVar1;
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + 0x4a);
  *(undefined8 *)((long)param_1 + 0x52) = *(undefined8 *)((long)param_2 + 0x52);
  *(undefined8 *)((long)param_1 + 0x4a) = uVar4;
  return;
}



/* Entry: 102aaa370; end: 102aaa45f;  */

int FUN_102aaa370(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && (*(char *)((long)param_1 + 0x5a) != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 102aaa460; end: 102aaa4c3;  */

/* WARNING: Possible PIC construction at 0x000102aaa474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aaa478) */

void FUN_102aaa460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102aaa4c4; end: 102aaa527;  */

undefined8 * FUN_102aaa4c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102aaa528; end: 102aaa56b;  */

undefined8 * FUN_102aaa528(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102aaa56c; end: 102aaa603;  */

int FUN_102aaa56c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102aaa604; end: 102aaa667;  */

/* WARNING: Possible PIC construction at 0x000102aaa618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102aaa61c) */

void FUN_102aaa604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102aaa668; end: 102aaa6d3;  */

undefined8 * FUN_102aaa668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102aaa6d4; end: 102aaa717;  */

undefined8 * FUN_102aaa6d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102aaa718; end: 102aaac73;  */

int FUN_102aaa718(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102aaac74; end: 102aaacb3;  */

void FUN_102aaac74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db151bc;
  func_0x000107c61520(&UNK_10db151bc,&UNK_110592c88);
  puRam0000000112ee8360 = puVar1;
  return;
}



/* Entry: 102aaacb4; end: 102aaacb7;  */

void FUN_102aaacb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15274;
  func_0x000107c61520(&UNK_10db15274,&UNK_110592bf8);
  puRam0000000112ee8368 = puVar1;
  return;
}



/* Entry: 102aaacb8; end: 102aaacf7;  */

void FUN_102aaacb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15274;
  func_0x000107c61520(&UNK_10db15274,&UNK_110592bf8);
  puRam0000000112ee8368 = puVar1;
  return;
}



/* Entry: 102aaacf8; end: 102aaacfb;  */

void FUN_102aaacf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1532c;
  func_0x000107c61520(&UNK_10db1532c,&UNK_110592b68);
  puRam0000000112ee8370 = puVar1;
  return;
}



/* Entry: 102aaacfc; end: 102aaad3b;  */

void FUN_102aaacfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1532c;
  func_0x000107c61520(&UNK_10db1532c,&UNK_110592b68);
  puRam0000000112ee8370 = puVar1;
  return;
}



/* Entry: 102aaad3c; end: 102aaad3f;  */

void FUN_102aaad3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db153e4;
  func_0x000107c61520(&UNK_10db153e4,&UNK_110592ad8);
  puRam0000000112ee8378 = puVar1;
  return;
}



/* Entry: 102aaad40; end: 102aaad7f;  */

void FUN_102aaad40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db153e4;
  func_0x000107c61520(&UNK_10db153e4,&UNK_110592ad8);
  puRam0000000112ee8378 = puVar1;
  return;
}



/* Entry: 102aaad80; end: 102aaad83;  */

void FUN_102aaad80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1549c;
  func_0x000107c61520(&UNK_10db1549c,&UNK_110592a48);
  puRam0000000112ee8380 = puVar1;
  return;
}



/* Entry: 102aaad84; end: 102aaadc3;  */

void FUN_102aaad84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1549c;
  func_0x000107c61520(&UNK_10db1549c,&UNK_110592a48);
  puRam0000000112ee8380 = puVar1;
  return;
}



/* Entry: 102aaadc4; end: 102aaadc7;  */

void FUN_102aaadc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15554;
  func_0x000107c61520(&UNK_10db15554,&UNK_1105929b8);
  puRam0000000112ee8388 = puVar1;
  return;
}



/* Entry: 102aaadc8; end: 102aaae07;  */

void FUN_102aaadc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15554;
  func_0x000107c61520(&UNK_10db15554,&UNK_1105929b8);
  puRam0000000112ee8388 = puVar1;
  return;
}



/* Entry: 102aaae08; end: 102aaae0b;  */

void FUN_102aaae08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db154ec;
  func_0x000107c61520(&UNK_10db154ec,&UNK_1105929b8);
  puRam0000000112ee8390 = puVar1;
  return;
}



/* Entry: 102aaae0c; end: 102aaae4b;  */

void FUN_102aaae0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db154ec;
  func_0x000107c61520(&UNK_10db154ec,&UNK_1105929b8);
  puRam0000000112ee8390 = puVar1;
  return;
}



/* Entry: 102aaae4c; end: 102aaae4f;  */

void FUN_102aaae4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db154c4;
  func_0x000107c61520(&UNK_10db154c4,&UNK_1105929b8);
  puRam0000000112ee8398 = puVar1;
  return;
}



/* Entry: 102aaae50; end: 102aaae8f;  */

void FUN_102aaae50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee8398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db154c4;
  func_0x000107c61520(&UNK_10db154c4,&UNK_1105929b8);
  puRam0000000112ee8398 = puVar1;
  return;
}



/* Entry: 102aaae90; end: 102aaae93;  */

void FUN_102aaae90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15434;
  func_0x000107c61520(&UNK_10db15434,&UNK_110592a48);
  puRam0000000112ee83a0 = puVar1;
  return;
}



/* Entry: 102aaae94; end: 102aaaed3;  */

void FUN_102aaae94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15434;
  func_0x000107c61520(&UNK_10db15434,&UNK_110592a48);
  puRam0000000112ee83a0 = puVar1;
  return;
}



/* Entry: 102aaaed4; end: 102aaaed7;  */

void FUN_102aaaed4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1540c;
  func_0x000107c61520(&UNK_10db1540c,&UNK_110592a48);
  puRam0000000112ee83a8 = puVar1;
  return;
}



/* Entry: 102aaaed8; end: 102aaaf17;  */

void FUN_102aaaed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1540c;
  func_0x000107c61520(&UNK_10db1540c,&UNK_110592a48);
  puRam0000000112ee83a8 = puVar1;
  return;
}



/* Entry: 102aaaf18; end: 102aaaf1b;  */

void FUN_102aaaf18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1537c;
  func_0x000107c61520(&UNK_10db1537c,&UNK_110592ad8);
  puRam0000000112ee83b0 = puVar1;
  return;
}



/* Entry: 102aaaf1c; end: 102aaaf5b;  */

void FUN_102aaaf1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1537c;
  func_0x000107c61520(&UNK_10db1537c,&UNK_110592ad8);
  puRam0000000112ee83b0 = puVar1;
  return;
}



/* Entry: 102aaaf5c; end: 102aaaf5f;  */

void FUN_102aaaf5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15354;
  func_0x000107c61520(&UNK_10db15354,&UNK_110592ad8);
  puRam0000000112ee83b8 = puVar1;
  return;
}



/* Entry: 102aaaf60; end: 102aaaf9f;  */

void FUN_102aaaf60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db15354;
  func_0x000107c61520(&UNK_10db15354,&UNK_110592ad8);
  puRam0000000112ee83b8 = puVar1;
  return;
}



/* Entry: 102aaafa0; end: 102aaafa3;  */

void FUN_102aaafa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db152c4;
  func_0x000107c61520(&UNK_10db152c4,&UNK_110592b68);
  puRam0000000112ee83c0 = puVar1;
  return;
}



/* Entry: 102aaafa4; end: 102aaafe3;  */

void FUN_102aaafa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db152c4;
  func_0x000107c61520(&UNK_10db152c4,&UNK_110592b68);
  puRam0000000112ee83c0 = puVar1;
  return;
}



/* Entry: 102aaafe4; end: 102aaafe7;  */

void FUN_102aaafe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1529c;
  func_0x000107c61520(&UNK_10db1529c,&UNK_110592b68);
  puRam0000000112ee83c8 = puVar1;
  return;
}



/* Entry: 102aaafe8; end: 102aab027;  */

void FUN_102aaafe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1529c;
  func_0x000107c61520(&UNK_10db1529c,&UNK_110592b68);
  puRam0000000112ee83c8 = puVar1;
  return;
}



/* Entry: 102aab028; end: 102aab02b;  */

void FUN_102aab028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1520c;
  func_0x000107c61520(&UNK_10db1520c,&UNK_110592bf8);
  puRam0000000112ee83d0 = puVar1;
  return;
}



/* Entry: 102aab02c; end: 102aab06b;  */

void FUN_102aab02c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee83d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db1520c;
  func_0x000107c61520(&UNK_10db1520c,&UNK_110592bf8);
  puRam0000000112ee83d0 = puVar1;
  return;
}


