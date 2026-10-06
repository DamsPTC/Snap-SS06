/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100355504; end: 10035550f; -[SCSnapTokenMetricsInfo setReferrer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100355504(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_11307e078);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 100355510; end: 100355587;  */

void FUN_100355510(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 100355588; end: 1003555d7; -[SCSnapTokenMetricsInfo setLastFetchTokenAgeInSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100355588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11307e058;
  func_0x000107c61428(param_1 + _DAT_11307e058,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1003555d8; end: 1003559ef; -[SCSnapTokenManager _startAccessTokenFetchForOp:] */

void FUN_1003555d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [88];
  char cStack_d8;
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
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ed89f;
  FUN_1000ba800(&UNK_10f6ed89f);
  lVar2 = param_1;
  func_0x000107c49920();
  if ((int)lVar2 == 0) {
    func_0x000107c61144(auStack_68,param_1);
    uVar5 = param_3;
    func_0x000107c4ce8c();
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c4a208();
    func_0x000107c61170(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if ((int)uVar4 == 0) {
      func_0x000107c3e804();
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c5cb8c(param_1);
      func_0x000107c61180();
      lVar6 = param_1;
      func_0x000107c5d984(param_1);
      func_0x000107c61180();
      func_0x000107c4e600(param_1);
      func_0x000107c61180();
      func_0x000107c6111c(auStack_138,auStack_68);
      func_0x000107c61174(uVar5);
      func_0x000107c61174(param_3);
      func_0x000107c43e98(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar5);
      func_0x000107c61120(auStack_138);
    }
    else {
      func_0x000107c3e804();
      func_0x000107c61180();
      lVar2 = param_1;
      func_0x000107c5cb8c();
      func_0x000107c61180();
      lVar6 = param_1;
      func_0x000107c5d984(param_1);
      func_0x000107c61180();
      func_0x000107c3ceec(param_3);
      if (lVar2 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x000107c4b6f8(&uStack_d0,lVar2);
      }
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar2);
      if ((char)uStack_78 == '\x01') {
        uVar4 = param_3;
        func_0x000107c4ce8c(param_3);
        func_0x000107c61180();
        func_0x000107c54ec0();
        func_0x000107c61170(uVar4);
      }
      func_0x000107c427dc(uVar5);
      FUN_1003b84dc(auStack_130,&uStack_d0);
      func_0x000107c3b670(param_1);
      if (cStack_d8 == '\x01') {
        FUN_100361bc4(auStack_130);
      }
      if ((char)uStack_78 == '\x01') {
        FUN_100361bc4(&uStack_d0);
      }
    }
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_68);
  }
  else {
    puVar3 = PTR_PTR_1126b65d0;
    func_0x000107c3b2dc(PTR_PTR_1126b65d0);
    func_0x000107c61180();
    func_0x000107c3ac7c(param_1);
    func_0x000107c61170(puVar3);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1003559f0; end: 1003559fb; -[SCSnapTokenManager invalidated] */

byte FUN_1003559f0(long param_1)

{
  return *(byte *)(param_1 + 0x40) & 1;
}



/* Entry: 1003559fc; end: 100355a0b; -[SCSnapTokenMetricsInfo isPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1003559fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11307e028);
}



/* Entry: 100355a0c; end: 100355a13; -[SCSnapTokenAccessTokenFetchOperation accessType] */

undefined8 FUN_100355a0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100355a14; end: 100355b6b; -[SCSnapTokenStorage loadAccessTokensIntoMemoryForUserId:tokenForType:] */

void FUN_100355a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [88];
  char cStack_58;
  
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126bd360;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x9012000000;
  puStack_c8 = &UNK_10af7e98c;
  puStack_c0 = &UNK_10af7e9cc;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  cStack_58 = '\0';
  func_0x000107c61174(param_4);
  func_0x000107c42b48(puVar1);
  FUN_1003b84dc(param_1,puStack_d8 + 6);
  func_0x000107c61170(param_4);
  func_0x000107c60bcc(&uStack_e0,8);
  if (cStack_58 == '\x01') {
    FUN_100361bc4(auStack_b0);
  }
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100355b6c; end: 100355ccf;  */

void FUN_100355b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f19e70,&UNK_10db51910);
  puVar1 = &UNK_1105d42a0;
  func_0x000107c613fc(&UNK_1105d42a0,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  FUN_1000823a8(&UNK_102df0a88,puVar1);
  return;
}



/* Entry: 100355cd0; end: 100355d83;  */

void FUN_100355cd0(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100355d84; end: 100355e1f; +[SCSnapTokenAccessTypeUtil executeOnAccessTypes:] */

void FUN_100355d84(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xc);
  return;
}



/* Entry: 100355e20; end: 100355f57;  */

void FUN_100355e20(long param_1,long param_2)

{
  undefined1 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
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
  
  lVar3 = param_2;
  func_0x000100355dc0(param_2);
  func_0x000107c61180();
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c3bd24(&uStack_90);
  }
  if (param_2 == *(long *)(param_1 + 0x38)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    puVar1 = (undefined1 *)(lVar4 + 0x30);
    cVar2 = *(char *)(lVar4 + 0x88);
    if (cVar2 == (char)uStack_38) {
      if (&uStack_90 != (undefined8 *)puVar1 && cVar2 != '\0') {
        FUN_1003618a0(puVar1);
        func_0x000107c2bc1c(puVar1,&uStack_90);
      }
    }
    else {
      if (cVar2 == '\0') {
        FUN_100361c08(puVar1,0,&uStack_90);
      }
      else {
        FUN_100361bc4(puVar1);
      }
      *(bool *)(lVar4 + 0x88) = cVar2 == '\0';
    }
  }
  if ((char)uStack_38 == '\x01') {
    FUN_100361bc4(&uStack_90);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100355f58; end: 10035624f; -[SCSnapTokenStorage _loadAccessTokenForUserId:op:] */

void FUN_100355f58(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_110 [8];
  ulong uStack_108;
  byte bStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  byte bStack_58;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar3 = &UNK_10f6ee04c;
  FUN_1000ba800(&UNK_10f6ee04c);
  func_0x000107c3ceec(param_5);
  func_0x000107c3bd8c(auStack_b0,param_2);
  if (bStack_58 == 1) {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x50);
    func_0x000107c4a6b0();
    if (iVar2 != 0) {
LAB_1003560e8:
      *param_1 = 0;
      param_1[0x58] = 0;
      if (bStack_58 == 1) {
        FUN_100361aa8(param_1,auStack_b0);
        param_1[0x58] = 1;
      }
      goto LAB_10035611c;
    }
    func_0x000107c3ceec(param_5);
    func_0x000107c3b078(param_2);
  }
  else {
    func_0x000107c3b7ec(auStack_110,param_2);
    if (bStack_58 == bStack_b8) {
      if (bStack_58 != 0) {
        if ((uStack_a8 & 1) != 0) {
          uStack_a8 = *(ulong *)(uStack_a8 & 0xfffffffffffffffe);
        }
        if ((uStack_108 & 1) != 0) {
          uStack_108 = *(ulong *)(uStack_108 & 0xfffffffffffffffe);
        }
        if (uStack_a8 == uStack_108) {
          FUN_100361b40(auStack_b0,auStack_110);
        }
        else {
          FUN_1003618a0(auStack_b0);
          func_0x000107c2bc1c(auStack_b0,auStack_110);
        }
      }
    }
    else {
      bVar1 = bStack_58 == 0;
      bStack_58 = bVar1;
      if (bVar1) {
        FUN_100361aa8(auStack_b0,auStack_110);
      }
      else {
        FUN_100361bc4();
      }
    }
    if (bStack_b8 == 1) {
      FUN_100361bc4(auStack_110);
    }
    if ((bStack_58 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x50);
      func_0x000107c4a6b0();
      if ((uVar4 & 1) == 0) {
        puVar6 = PTR_PTR_1126bd360;
        func_0x000107c5aae8(PTR_PTR_1126bd360);
        func_0x000107c61180();
        func_0x000107c3c2b8(param_2);
        *param_1 = 0;
        param_1[0x58] = 0;
        func_0x000107c61170(puVar6);
        goto LAB_10035611c;
      }
      func_0x000107c3ceec(param_5);
      func_0x000107c3c578(param_2);
      uVar5 = param_5;
      func_0x000107c4ce8c(param_5);
      func_0x000107c61180();
      func_0x000107c54ec0();
      func_0x000107c61170(uVar5);
      goto LAB_1003560e8;
    }
  }
  *param_1 = 0;
  param_1[0x58] = 0;
LAB_10035611c:
  if (bStack_58 == 1) {
    FUN_100361bc4(auStack_b0);
  }
  func_0x0001000e2a84(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100356250; end: 10035626b;  */

void FUN_100356250(undefined8 param_1)

{
  FUN_1000285a8(0x112f19e78,&UNK_10db51918);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102df0da0,param_1);
  return;
}



/* Entry: 10035626c; end: 1003562bb;  */

void FUN_10035626c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003562bc; end: 100356477; -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:shouldValidate:] */

void FUN_1003562bc(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_b0 [88];
  byte bStack_58;
  
  func_0x000107c61174(param_4);
  puVar1 = &UNK_10f6ee1b9;
  FUN_1000ba800(&UNK_10f6ee1b9);
  func_0x000107c3ceec(param_4);
  func_0x000107c3ac84(auStack_b0,param_2);
  if ((bStack_58 & 1) == 0) {
LAB_1003563c0:
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    FUN_100361e80();
    func_0x000107c4b9bc(*(undefined8 *)(param_2 + 0x40));
    uVar2 = param_4;
    func_0x000107c4ce8c(param_4);
    func_0x000107c61180();
    func_0x000107c55a34();
    func_0x000107c61170(uVar2);
    if (param_5 != 0) {
      uVar3 = *(ulong *)(param_2 + 0x50);
      func_0x000107c4a6b0();
      if ((uVar3 & 1) == 0) {
        func_0x000107c3c2bc(param_2);
        goto LAB_1003563c0;
      }
    }
    uVar2 = param_4;
    func_0x000107c4ce8c(param_4);
    func_0x000107c61180();
    func_0x000107c54ec0();
    func_0x000107c61170(uVar2);
    FUN_1003b84dc(param_1,auStack_b0);
  }
  if (bStack_58 == 1) {
    FUN_100361bc4(auStack_b0);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100356478; end: 100356497;  */

void FUN_100356478(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2ef8);
  return;
}



/* Entry: 100356498; end: 100356553; -[SCSnapTokenStorage _accessTokenFromMemoryForAccessType:] */

void FUN_100356498(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10f6ee1f8;
  uStack_38 = param_4;
  FUN_1000ba800(&UNK_10f6ee1f8);
  func_0x000107c611ec(param_2 + 0x30);
  lVar2 = param_2 + 8;
  FUN_100356554(lVar2,&uStack_38);
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_100361c08(param_1,0,lVar2 + 0x18);
  }
  param_1[0x58] = lVar2 != 0;
  func_0x000107c611f0(param_2 + 0x30);
  func_0x0001000e2a84(puVar1);
  return;
}



/* Entry: 100356554; end: 1003565fb;  */

long * FUN_100356554(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1003565fc; end: 1003567f7; -[SCSnapTokenStorage _getAccessTokenFromDiskForUserId:op:] */

void FUN_1003565fc(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [88];
  undefined1 auStack_b0 [88];
  byte bStack_58;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = &UNK_10f6ee06a;
  FUN_1000ba800(&UNK_10f6ee06a);
  puVar2 = PTR_PTR_1126bd360;
  func_0x000107c3ceec(param_5);
  func_0x000107c5aae8();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4adac();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c3ceec(param_5);
    func_0x000107c3c200(auStack_b0,param_2);
    if ((bStack_58 & 1) != 0) {
      FUN_100361c08(auStack_108,0,auStack_b0);
      FUN_100361e80();
      func_0x000107c4b9bc(*(undefined8 *)(param_2 + 0x40));
      uVar4 = param_5;
      func_0x000107c4ce8c(param_5);
      func_0x000107c61180();
      func_0x000107c55a34();
      func_0x000107c61170(uVar4);
      FUN_100361aa8(param_1,auStack_108);
      param_1[0x58] = 1;
      FUN_100361bc4(auStack_108);
      if (bStack_58 == 1) {
        FUN_100361bc4(auStack_b0);
      }
      goto LAB_100356730;
    }
  }
  *param_1 = 0;
  param_1[0x58] = 0;
LAB_100356730:
  func_0x000107c61170(puVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1003567f8; end: 1003569cf; -[SCSnapTokenStorage _readAccessTokenFromDiskForAccessType:userId:op:] */

void FUN_1003567f8(undefined1 *param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar2 = &UNK_10f6ee27a;
  FUN_1000ba800(&UNK_10f6ee27a);
  func_0x000107c6071c();
  uVar3 = *(ulong *)(param_3 + 0x48);
  dVar6 = param_2;
  func_0x000107c3cee8();
  func_0x000107c61180();
  func_0x000107c6071c();
  uVar4 = param_7;
  func_0x000107c4ce8c(param_7);
  func_0x000107c61180();
  func_0x000107c559c4(dVar6 - param_2);
  func_0x000107c61170(uVar4);
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    ppuStack_b8 = &PTR_DAT_110c9b600;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    puStack_90 = &DAT_11383d918;
    puStack_88 = &DAT_11383d918;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uVar5 = uVar3;
    FUN_100361818(uVar3,&ppuStack_b8);
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
      func_0x000107c3c2b8(param_3);
      *param_1 = 0;
    }
    else {
      FUN_100361aa8(param_1,&ppuStack_b8);
    }
    param_1[0x58] = !bVar1;
    FUN_100361bc4(&ppuStack_b8);
  }
  func_0x000107c61170(uVar3);
  func_0x0001000e2a84(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 1003569d0; end: 1003569eb;  */

void FUN_1003569d0(undefined8 param_1)

{
  FUN_1000285a8(0x112f0b518,&UNK_10db3e860);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10072980c,param_1);
  return;
}



/* Entry: 1003569ec; end: 100356a3b;  */

void FUN_1003569ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100356a3c; end: 100356aaf; -[SCSnapTokenKeychainBackedByArchiveDiskStorage accessTokenDataWithUserId:accessType:] */

void FUN_100356a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ed4d8;
  FUN_1000ba800(&UNK_10f6ed4d8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3cee8(uVar2,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100356ab0; end: 100356acf;  */

void FUN_100356ab0(void)

{
  func_0x000107c61168(&PTR_PTR_11293a590);
  return;
}



/* Entry: 100356ad0; end: 100356b6b; -[SCSnapTokenKeychainDiskStorage accessTokenDataWithUserId:accessType:] */

void FUN_100356ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x000107c3ac88();
  func_0x000107c61180();
  cVar1 = *(char *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x000107c3ac8c(param_1,param_2,param_4);
  func_0x000107c61180();
  if (cVar1 == '\x01') {
    func_0x000107c3b8e0();
    func_0x000107c61180();
  }
  else {
    func_0x000107c3b410(param_1,param_2,lVar2,lVar3);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100356b6c; end: 100356c0f; -[SCSnapTokenKeychainDiskStorage _accessTokenKeyForUserId:accessType:] */

void FUN_100356b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126bd360;
  func_0x000107c5aae8(PTR_PTR_1126bd360,param_2,param_4);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110eac2b8);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100356c10; end: 100356c5b;  */

void FUN_100356c10(undefined8 param_1)

{
  FUN_1000285a8(0x112ed0cb0,&UNK_10daf7990);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10297c5e0,param_1);
  return;
}



/* Entry: 100356c5c; end: 100356cbb;  */

void FUN_100356c5c(void)

{
  func_0x000107c61168(&PTR_PTR_1128748d8);
  return;
}



/* Entry: 100356cbc; end: 100356d77;  */

void FUN_100356cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e9c420,&UNK_10daaa2f0);
  puVar1 = &UNK_11050cad8;
  func_0x000107c613fc(&UNK_11050cad8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_1006ca4c8,puVar1);
  return;
}



/* Entry: 100356d78; end: 100356dc3;  */

void FUN_100356d78(undefined8 param_1)

{
  FUN_1000285a8(0x112f2d848,&UNK_10db71fa0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102fae918,param_1);
  return;
}



/* Entry: 100356dc4; end: 100356de3;  */

void FUN_100356dc4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ad5b0);
  return;
}



/* Entry: 100356de4; end: 100356e2f;  */

void FUN_100356de4(undefined8 param_1)

{
  FUN_1000285a8(0x112fb04e0,&UNK_10dc246f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103926b8c,param_1);
  return;
}



/* Entry: 100356e30; end: 100356e4f;  */

void FUN_100356e30(void)

{
  func_0x000107c61168(&PTR_PTR_1129010b8);
  return;
}



/* Entry: 100356e50; end: 100356e9b;  */

void FUN_100356e50(undefined8 param_1)

{
  FUN_1000285a8(0x112f30f78,&UNK_10db76c40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10051f114,param_1);
  return;
}



/* Entry: 100356e9c; end: 100356ebb;  */

void FUN_100356e9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128af340);
  return;
}



/* Entry: 100356ebc; end: 100356f8f; -[SCSnapTokenKeychainDiskStorage _accessTokenMetricKeyWithType:] */

void FUN_100356ebc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  ppuVar1 = (undefined **)PTR_PTR_1126bd360;
  func_0x000107c5aae8();
  func_0x000107c61180();
  ppuVar2 = ppuVar1;
  func_0x000107c4adac();
  if (ppuVar2 == (undefined **)0x0) {
    func_0x000107c61170(ppuVar1);
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  func_0x000107c61180();
  func_0x000107c61170(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100356f90; end: 100356faf;  */

void FUN_100356f90(void)

{
  func_0x000107c61168(&PTR_PTR_1128af4e0);
  return;
}



/* Entry: 100356fb0; end: 100356ffb;  */

void FUN_100356fb0(undefined8 param_1)

{
  FUN_1000285a8(0x112f153c0,&UNK_10db4ad70);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102d84198,param_1);
  return;
}



/* Entry: 100356ffc; end: 10035701b;  */

void FUN_100356ffc(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5620);
  return;
}



/* Entry: 10035701c; end: 100357067;  */

void FUN_10035701c(undefined8 param_1)

{
  FUN_1000285a8(0x112fee498,&UNK_10dc58480);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103b48edc,param_1);
  return;
}



/* Entry: 100357068; end: 100357087;  */

void FUN_100357068(void)

{
  func_0x000107c61168(&PTR_PTR_11292f330);
  return;
}



/* Entry: 100357088; end: 1003571af;  */

void FUN_100357088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f0b678,&UNK_10db3ea80);
  puVar1 = &UNK_1105bfa80;
  func_0x000107c613fc(&UNK_1105bfa80,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  FUN_1000823a8(FUN_10071a830,puVar1);
  return;
}



/* Entry: 1003571b0; end: 1003571cf;  */

void FUN_1003571b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f0b6f0);
  return;
}



/* Entry: 1003571d0; end: 10035721b;  */

void FUN_1003571d0(undefined8 param_1)

{
  FUN_1000285a8(0x113078250,&UNK_10dcfc3a0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006ec168,param_1);
  return;
}



/* Entry: 10035721c; end: 10035723b;  */

void FUN_10035721c(void)

{
  func_0x000107c61168(&PTR_PTR_1129b10a8);
  return;
}



/* Entry: 10035723c; end: 100357723;  */

undefined * FUN_10035723c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  FUN_1000285a8(0x112dd8638);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  FUN_10035a314();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100357340);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      FUN_10035a314();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100357310);
  (*pcVar1)();
}



/* Entry: 100357724; end: 100357757; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl deviceFormatHandler] */

void FUN_100357724(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100357758();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100357758; end: 100357867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100357758(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_50;
  long lStack_48;
  
  lVar3 = _DAT_112da0d50;
  plVar7 = &lStack_50;
  puVar4 = *(undefined1 **)(unaff_x20 + _DAT_112da0d50);
  puVar9 = puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112da0d10);
    uVar10 = uVar8;
    func_0x000107c615f0();
    FUN_1000db838();
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112da0d58);
    lVar5 = 0;
    FUN_100357868();
    lVar6 = lVar5;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)(lVar6 + _DAT_112da0a68);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112da0a70);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *(undefined8 *)(lVar6 + _DAT_112da0a50) = uVar8;
    *(undefined8 *)(lVar6 + _DAT_112da0a58) = uVar10;
    *(undefined8 *)(lVar6 + _DAT_112da0a60) = uVar11;
    puVar2 = PTR_s_init_1125d9248;
    lStack_50 = lVar6;
    lStack_48 = lVar5;
    func_0x000107c6157c(uVar11);
    func_0x000107c61154(&lStack_50,puVar2);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long **)(unaff_x20 + lVar3) = plVar7;
    func_0x000107c61174();
    func_0x000107c615e8(uVar10);
    puVar4 = (undefined1 *)0x0;
    puVar9 = (undefined1 *)plVar7;
  }
  func_0x000107c615f0(puVar4);
  return puVar9;
}



/* Entry: 100357868; end: 100357887;  */

void FUN_100357868(void)

{
  func_0x000107c61168(&PTR_PTR_1127d82c0);
  return;
}



/* Entry: 100357888; end: 1003578c3; -[_TtC26SCCaptureDeviceManagerImpl30CaptureDeviceFormatHandlerImpl formatsForDeviceAtPosition:] */

void FUN_100357888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1003578c4(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1003578c4; end: 10035796f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1003578c4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112da0a50));
  uVar4 = 2;
  if (param_1 != 1) {
    uVar4 = (uint)(param_1 == 0);
  }
  uVar1 = (ulong)uVar4;
  FUN_1002a1e70();
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c614f0();
    (**(code **)(param_2 + 400))();
    func_0x000107c615e8(uVar1);
    uVar3 = 0;
    FUN_1003579d8(0);
    uVar1 = uVar2;
    func_0x000107c5fc48(uVar2,uVar3);
    func_0x000107c6142c(uVar2);
  }
  return uVar1;
}



/* Entry: 100357970; end: 1003579d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100357970(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112da1120);
  func_0x000107c43890(uVar1);
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1002507d4(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
  uVar3 = uVar1;
  func_0x000107c5fc54(uVar1,uVar2);
  func_0x000107c61170(uVar1);
  return uVar3;
}



/* Entry: 1003579d8; end: 100357a1b;  */

void FUN_1003579d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da0aa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112da0aa0 = puVar1;
  return;
}



/* Entry: 100357a1c; end: 100357d93;  */

undefined * FUN_100357a1c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  float fVar16;
  ulong uStack_e8;
  undefined *apuStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  puVar3 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000054;
  FUN_1000a9a18(0xd000000000000054,0x800000010efc2b20);
  func_0x000107c61170(uVar4);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar12 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar12 = param_1;
    }
    func_0x000107c60480();
  }
  uStack_e8 = (ulong)param_1 & 0xffffffffffffff8;
  func_0x000107c61428(puVar3,auStack_98,0,0);
  func_0x000107c61428(puVar3,auStack_b0,0,0);
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar12 != (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined8 **)(uStack_e8 + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100357d78);
            (*pcVar2)();
          }
          puVar7 = (undefined8 *)param_1[(long)puVar15 + 4];
          func_0x000107c61174();
        }
        else {
          puVar7 = puVar15;
          FUN_10035b8a0(puVar15,param_1);
        }
        puVar1 = (undefined8 *)((long)puVar15 + 1);
        if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100357d74);
          (*pcVar2)();
        }
        puVar8 = puVar7;
        func_0x000107c43878();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c60a68();
        func_0x000107c61170(puVar8);
        uVar10 = param_2;
        func_0x000107c4cef4();
        if (((-1 < (long)puVar9) && (uVar13 = (ulong)puVar9 >> 0x20, uVar10 <= uVar13)) &&
           ((uVar10 = param_2, func_0x000107c4c848(), (int)((ulong)puVar9 >> 0x20) < 1 ||
            (uVar13 <= uVar10)))) break;
LAB_100357be0:
        func_0x000107c61170(puVar7);
        puVar15 = (undefined8 *)((long)puVar15 + 1);
        if (puVar1 == puVar12) goto LAB_100357d18;
      }
      uVar4 = *puVar3;
      func_0x000107c61174(uVar4);
      uVar6 = 0xd000000000000050;
      FUN_1000a9a18(0xd000000000000050,0x800000010efc2b80);
      func_0x000107c61170(uVar4);
      fVar16 = (float)(long)(int)puVar9 / (float)uVar13;
      uVar10 = 2;
      if (0.01 <= ABS(fVar16 + -1.3333334)) {
        uVar10 = 0;
      }
      if (ABS(fVar16 + -1.7777778) < 0.01) {
        uVar10 = 1;
      }
      uVar4 = *puVar3;
      func_0x000107c61174(uVar4);
      FUN_1000aa0a8(uVar6);
      func_0x000107c61170(uVar4);
      uVar13 = param_2;
      func_0x000107c3e1f4();
      if (uVar10 != uVar13) goto LAB_100357be0;
      puVar11 = puVar14;
      func_0x000107c61558();
      apuStack_c8[0] = puVar14;
      if (((ulong)puVar11 & 1) == 0) {
        FUN_100357ee0(0,*(long *)(puVar14 + 0x10) + 1,1);
      }
      uVar10 = *(ulong *)(apuStack_c8[0] + 0x10);
      if (*(ulong *)(apuStack_c8[0] + 0x18) >> 1 <= uVar10) {
        FUN_100357ee0(1 < *(ulong *)(apuStack_c8[0] + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(apuStack_c8[0] + 0x10) = uVar10 + 1;
      *(undefined8 **)(apuStack_c8[0] + uVar10 * 8 + 0x20) = puVar7;
      puVar14 = apuStack_c8[0];
      puVar15 = puVar1;
    } while (puVar1 != puVar12);
  }
LAB_100357d18:
  func_0x000107c61428(puVar3,apuStack_c8,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return puVar14;
}



/* Entry: 100357d94; end: 100357d9b; -[SCCameraDeviceResolutionConstraint minHeight] */

undefined8 FUN_100357d94(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100357d9c; end: 100357da3; -[SCCameraDeviceResolutionConstraint maxHeight] */

undefined8 FUN_100357d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100357da4; end: 100357dab; -[SCCameraDeviceResolutionConstraint aspectRatio] */

undefined8 FUN_100357da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100357dac; end: 100357edf;  */

undefined * FUN_100357dac(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100357ee0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_100357efc();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_100357f20(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100357ee0; end: 100357efb;  */

void FUN_100357ee0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100357dac();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100357efc; end: 100357f1f;  */

void FUN_100357efc(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112dd8560;
  plVar5 = (long *)&UNK_10d99bcd0;
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1002a4e04(0,0x112da0aa0,&PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100357f20; end: 100357fab;  */

void FUN_100357f20(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100357fac; end: 100357fcb;  */

void FUN_100357fac(void)

{
  func_0x000107c61168(&PTR_PTR_1129b2030);
  return;
}



/* Entry: 100357fcc; end: 1003581d7;  */

undefined * FUN_100357fcc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *apuStack_a0 [4];
  ulong auStack_80 [4];
  
  puVar4 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  uVar6 = 0xd000000000000053;
  FUN_1000a9a18(0xd000000000000053,0x800000010efc2ac0);
  func_0x000107c61170(uVar5);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar11;
  if (puVar10 != (undefined8 *)0x0) {
    uVar12 = 0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10035815c);
          (*pcVar3)();
        }
        uVar7 = param_1[uVar12 + 4];
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar12;
        FUN_10035b8a0(uVar12,param_1);
      }
      puVar1 = (undefined8 *)(uVar12 + 1);
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100358158);
        (*pcVar3)();
      }
      puVar8 = auStack_80;
      auStack_80[0] = uVar7;
      FUN_1003581d8(puVar8,param_2);
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000107c61170(uVar7);
      }
      else {
        puVar9 = puVar11;
        func_0x000107c61558();
        apuStack_a0[0] = puVar11;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_100357ee0(0,*(long *)(puVar11 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(apuStack_a0[0] + 0x10);
        if (*(ulong *)(apuStack_a0[0] + 0x18) >> 1 <= uVar2) {
          FUN_100357ee0(1 < *(ulong *)(apuStack_a0[0] + 0x18),uVar2 + 1,1);
        }
        *(ulong *)(apuStack_a0[0] + 0x10) = uVar2 + 1;
        *(ulong *)(apuStack_a0[0] + uVar2 * 8 + 0x20) = uVar7;
        puVar11 = apuStack_a0[0];
      }
      uVar12 = uVar12 + 1;
    } while (puVar1 != puVar10);
  }
  func_0x000107c61428(puVar4,apuStack_a0,0,0);
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  FUN_1000aa0a8(uVar6);
  func_0x000107c61170(uVar5);
  return puVar11;
}



/* Entry: 1003581d8; end: 1003584d7;  */

undefined8 FUN_1003581d8(double param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar3 = *param_2;
  func_0x000107c5de1c();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_1001262e4(0,0x112dd8948,&PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0);
  uVar5 = uVar3;
  func_0x000107c5fc54(uVar3,uVar4);
  func_0x000107c61170(uVar3);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar9 = 4;
    do {
      uVar8 = lVar9 - 4;
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358464);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar5 + lVar9 * 8);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar8;
        FUN_1003584d8(uVar8,uVar5);
      }
      uVar1 = lVar9 - 3;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100358448);
        (*pcVar2)();
      }
      func_0x000107c4c844(uVar6);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10035844c);
        (*pcVar2)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100358450);
        (*pcVar2)();
      }
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100358454);
        (*pcVar2)();
      }
      uVar7 = (ulong)param_1;
      uVar8 = param_3;
      func_0x000107c4c840();
      if (uVar8 < uVar7) {
LAB_1003583c4:
        func_0x000107c61170(uVar6);
      }
      else {
        func_0x000107c4c844(uVar6);
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358458);
          (*pcVar2)();
        }
        if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10035845c);
          (*pcVar2)();
        }
        if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358460);
          (*pcVar2)();
        }
        uVar7 = (ulong)param_1;
        uVar8 = param_3;
        func_0x000107c4c83c();
        if (uVar7 < uVar8) goto LAB_1003583c4;
        func_0x000107c4c844(uVar6);
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358468);
          (*pcVar2)();
        }
        if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10035846c);
          (*pcVar2)();
        }
        if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358470);
          (*pcVar2)();
        }
        uVar7 = (ulong)param_1;
        uVar8 = param_3;
        func_0x000107c4c804();
        if (uVar7 < uVar8) goto LAB_1003583c4;
        func_0x000107c4c844(uVar6);
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358474);
          (*pcVar2)();
        }
        if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358478);
          (*pcVar2)();
        }
        if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10035847c);
          (*pcVar2)();
        }
        uVar7 = (ulong)param_1;
        uVar8 = param_3;
        func_0x000107c4cecc();
        if (uVar7 < uVar8) goto LAB_1003583c4;
        func_0x000107c4cee8(uVar6);
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358480);
          (*pcVar2)();
        }
        if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358484);
          (*pcVar2)();
        }
        if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358488);
          (*pcVar2)();
        }
        uVar7 = (ulong)param_1;
        uVar8 = param_3;
        func_0x000107c4cecc();
        func_0x000107c61170(uVar6);
        if (uVar7 <= uVar8) {
          uVar4 = 1;
          goto LAB_1003584a4;
        }
      }
      lVar9 = lVar9 + 1;
    } while (uVar1 != uVar3);
    uVar4 = 0;
  }
LAB_1003584a4:
  func_0x000107c6142c(uVar5);
  return uVar4;
}



/* Entry: 1003584d8; end: 1003584eb;  */

ulong FUN_1003584d8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003585d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003585d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0;
    func_0x000107c61168(PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0;
    func_0x000107c61168(PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100357f20(0,0x112dd8948,&PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003586a8);
  (*pcVar2)();
}



/* Entry: 1003584ec; end: 1003586a7;  */

ulong FUN_1003584ec(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003585d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003585d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100357f20(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003586a8);
  (*pcVar2)();
}



/* Entry: 1003586a8; end: 1003586af; -[SCCameraDeviceFrameRateConstraint maxFpsUpperbound] */

undefined8 FUN_1003586a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003586b0; end: 1003586b7; -[SCCameraDeviceFrameRateConstraint maxFpsLowerbound] */

undefined8 FUN_1003586b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003586b8; end: 1003586bf; -[SCCameraDeviceFrameRateConstraint maxActiveFps] */

undefined8 FUN_1003586b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1003586c0; end: 1003586c7; -[SCCameraDeviceFrameRateConstraint minActiveFps] */

undefined8 FUN_1003586c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1003586c8; end: 1003588eb;  */

undefined * FUN_1003586c8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puStack_98;
  undefined *apuStack_90 [6];
  
  puVar3 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000056;
  FUN_1000a9a18(0xd000000000000056,0x800000010efc2a60);
  func_0x000107c61170(uVar4);
  puVar12 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar13 = (undefined8 *)puVar12[2];
  }
  else {
    puVar13 = puVar12;
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar13 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if ((undefined8 *)puVar12[2] <= puVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100358874);
            (*pcVar2)();
          }
          puVar6 = (undefined8 *)param_1[(long)puVar11 + 4];
          func_0x000107c61174();
        }
        else {
          puVar6 = puVar11;
          FUN_10035b8a0(puVar11,param_1);
        }
        puVar1 = (undefined8 *)((long)puVar11 + 1);
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358870);
          (*pcVar2)();
        }
        puVar7 = puVar6;
        func_0x000107c43878();
        func_0x000107c61180();
        puVar8 = puVar7;
        func_0x000107c60a08();
        func_0x000107c61170(puVar7);
        uVar9 = param_2;
        func_0x000107c4ca48();
        if (uVar9 == ((ulong)puVar8 & 0xffffffff)) break;
        func_0x000107c61170(puVar6);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
        if (puVar1 == puVar13) goto LAB_100358894;
      }
      puVar10 = puStack_98;
      func_0x000107c61558();
      apuStack_90[0] = puStack_98;
      if (((ulong)puVar10 & 1) == 0) {
        FUN_100357ee0(0,*(long *)(puStack_98 + 0x10) + 1,1);
      }
      uVar9 = *(ulong *)(apuStack_90[0] + 0x10);
      if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar9) {
        FUN_100357ee0(1 < *(ulong *)(apuStack_90[0] + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(apuStack_90[0] + 0x10) = uVar9 + 1;
      *(undefined8 **)(apuStack_90[0] + uVar9 * 8 + 0x20) = puVar6;
      puVar11 = puVar1;
      puStack_98 = apuStack_90[0];
    } while (puVar1 != puVar13);
  }
LAB_100358894:
  func_0x000107c61428(puVar3,apuStack_90,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return puStack_98;
}



/* Entry: 1003588ec; end: 1003588f3; -[SCCameraDeviceMediaSubtypeConstraint mediaSubtype] */

undefined8 FUN_1003588ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003588f4; end: 100358b9f;  */

undefined * FUN_1003588f4(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *apuStack_90 [6];
  
  puVar4 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  uVar6 = 0xd00000000000005d;
  FUN_1000a9a18(0xd00000000000005d,0x800000010efc2a00);
  func_0x000107c61170(uVar5);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar10 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar10 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (puVar10 != (undefined8 *)0x0) {
    uVar11 = 0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100358b28);
          (*pcVar2)();
        }
        uVar7 = param_1[uVar11 + 4];
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar11;
        FUN_10035b8a0(uVar11,param_1);
      }
      puVar1 = (undefined8 *)(uVar11 + 1);
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100358b24);
        (*pcVar2)();
      }
      iVar3 = param_2;
      func_0x000107c5ace8();
      if ((((((iVar3 == 0) || (uVar8 = uVar7, func_0x000107c4a6f4(), (uVar8 & 1) != 0)) &&
            ((iVar3 = param_2, func_0x000107c5ace0(), iVar3 == 0 ||
             (uVar8 = uVar7, func_0x000107c4a0a0(), (uVar8 & 1) != 0)))) &&
           ((iVar3 = param_2, func_0x000107c5ace4(), iVar3 == 0 ||
            (uVar8 = uVar7, func_0x000107c4a6d4(), (uVar8 & 1) != 0)))) &&
          ((iVar3 = param_2, func_0x000107c5acec(), iVar3 == 0 ||
           (uVar8 = uVar7, func_0x000107c4a708(), (uVar8 & 1) != 0)))) &&
         ((((iVar3 = param_2, func_0x000107c5acf8(), iVar3 == 0 ||
            (uVar8 = uVar7, func_0x000107c4a708(), (uVar8 & 1) != 0)) &&
           ((iVar3 = param_2, func_0x000107c5acf0(), iVar3 == 0 ||
            (uVar8 = uVar7, func_0x000107c4a708(), (uVar8 & 1) != 0)))) &&
          ((iVar3 = param_2, func_0x000107c5acf4(), iVar3 == 0 ||
           (uVar8 = uVar7, func_0x000107c4a708(), (uVar8 & 1) != 0)))))) {
        puVar9 = puVar12;
        func_0x000107c61558();
        apuStack_90[0] = puVar12;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_100357ee0(0,*(long *)(puVar12 + 0x10) + 1,1);
        }
        uVar8 = *(ulong *)(apuStack_90[0] + 0x10);
        if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar8) {
          FUN_100357ee0(1 < *(ulong *)(apuStack_90[0] + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(apuStack_90[0] + 0x10) = uVar8 + 1;
        *(ulong *)(apuStack_90[0] + uVar8 * 8 + 0x20) = uVar7;
        puVar12 = apuStack_90[0];
      }
      else {
        func_0x000107c61170(uVar7);
      }
      uVar11 = uVar11 + 1;
    } while (puVar1 != puVar10);
  }
  func_0x000107c61428(puVar4,apuStack_90,0,0);
  uVar5 = *puVar4;
  func_0x000107c61174(uVar5);
  FUN_1000aa0a8(uVar6);
  func_0x000107c61170(uVar5);
  return puVar12;
}



/* Entry: 100358ba0; end: 100358ba7; -[SCCameraDeviceVideoCaptureSupportConstraint shouldRequireVideoHDR] */

undefined1 FUN_100358ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100358ba8; end: 100358baf; -[SCCameraDeviceVideoCaptureSupportConstraint shouldRequireMultiCam] */

undefined1 FUN_100358ba8(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100358bb0; end: 100358bb7; -[SCCameraDeviceVideoCaptureSupportConstraint shouldRequireVideoBinned] */

undefined1 FUN_100358bb0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 100358bb8; end: 100358bbf; -[SCCameraDeviceVideoCaptureSupportConstraint shouldRequireVideoStabilizationModeAuto] */

undefined1 FUN_100358bb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 100358bc0; end: 100358bc7; -[SCCameraDeviceVideoCaptureSupportConstraint shouldRequireVideoStabilizationModeStandard] */

undefined1 FUN_100358bc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 100358bc8; end: 100358bcf; -[SCCameraDeviceVideoCaptureSupportConstraint shouldRequireVideoStabilizationModeCinematic] */

undefined1 FUN_100358bc8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 100358bd0; end: 100358bd7; -[SCCameraDeviceVideoCaptureSupportConstraint shouldRequireVideoStabilizationModeCinematicExtended] */

undefined1 FUN_100358bd0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 100358bd8; end: 100358e03;  */

undefined * FUN_100358bd8(float param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  float fVar14;
  undefined *apuStack_a0 [6];
  
  puVar5 = param_2;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd000000000000052;
  FUN_1000a9a18(0xd000000000000052,0x800000010efc29a0);
  func_0x000107c61170(uVar6);
  puVar13 = (undefined8 *)((ulong)param_2 & 0xffffffffffffff8);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar11 = (undefined8 *)puVar13[2];
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar11 = puVar13;
    if ((undefined8 *)0x7fffffffffffffff < param_2) {
      puVar11 = param_2;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar12;
  if (puVar11 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if ((undefined8 *)puVar13[2] <= puVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100358d8c);
            (*pcVar3)();
          }
          puVar8 = (undefined8 *)param_2[(long)puVar10 + 4];
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar10;
          FUN_10035b8a0(puVar10,param_2);
        }
        puVar1 = (undefined8 *)((long)puVar10 + 1);
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100358d88);
          (*pcVar3)();
        }
        func_0x000107c4cef8(puVar8);
        fVar14 = param_1;
        func_0x000107c4cef8(param_3);
        bVar4 = fVar14 <= param_1;
        param_1 = fVar14;
        if (bVar4) break;
LAB_100358c80:
        func_0x000107c61170(puVar8);
        puVar10 = (undefined8 *)((long)puVar10 + 1);
        if (puVar1 == puVar11) goto LAB_100358da8;
      }
      func_0x000107c4c84c(puVar8);
      param_1 = fVar14;
      func_0x000107c4c84c(param_3);
      if (param_1 < fVar14) goto LAB_100358c80;
      puVar9 = puVar12;
      func_0x000107c61558();
      apuStack_a0[0] = puVar12;
      if (((ulong)puVar9 & 1) == 0) {
        FUN_100357ee0(0,*(long *)(puVar12 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(apuStack_a0[0] + 0x10);
      if (*(ulong *)(apuStack_a0[0] + 0x18) >> 1 <= uVar2) {
        FUN_100357ee0(1 < *(ulong *)(apuStack_a0[0] + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(apuStack_a0[0] + 0x10) = uVar2 + 1;
      *(undefined8 **)(apuStack_a0[0] + uVar2 * 8 + 0x20) = puVar8;
      puVar10 = puVar1;
      puVar12 = apuStack_a0[0];
    } while (puVar1 != puVar11);
  }
LAB_100358da8:
  func_0x000107c61428(puVar5,apuStack_a0,0,0);
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  FUN_1000aa0a8(uVar7);
  func_0x000107c61170(uVar6);
  return puVar12;
}



/* Entry: 100358e04; end: 100358e0b; -[SCCameraDeviceExposureConstraint minISO] */

undefined4 FUN_100358e04(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 100358e0c; end: 100358e13; -[SCCameraDeviceExposureConstraint maxISO] */

undefined4 FUN_100358e0c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 100358e14; end: 1003591fb;  */

undefined * FUN_100358e14(undefined8 *param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulong uStack_e8;
  undefined *apuStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [56];
  
  puVar5 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  uVar7 = 0xd000000000000056;
  FUN_1000a9a18(0xd000000000000056,0x800000010efc2940);
  func_0x000107c61170(uVar6);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar20 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar20 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar20 = param_1;
    }
    func_0x000107c60480();
  }
  uStack_e8 = (ulong)param_1 & 0xffffffffffffff8;
  func_0x000107c61428(puVar5,auStack_98,0,0);
  func_0x000107c61428(puVar5,auStack_b0,0,0);
  func_0x000107c61428(puVar5,auStack_c8,0,0);
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar20 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined8 **)(uStack_e8 + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003591e0);
            (*pcVar3)();
          }
          puVar8 = (undefined8 *)param_1[(long)puVar21 + 4];
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar21;
          FUN_10035b8a0(puVar21,param_1);
        }
        bVar4 = SCARRY8((long)puVar21,1);
        puVar21 = (undefined8 *)((long)puVar21 + 1);
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003591dc);
          (*pcVar3)();
        }
        uVar6 = *puVar5;
        func_0x000107c61174(uVar6);
        uVar9 = 0xd00000000000003f;
        FUN_1000a9a18(0xd00000000000003f,0x800000010efc28a0);
        func_0x000107c61170(uVar6);
        lVar10 = 2;
        FUN_100029b9c(2,0x10,0,0);
        if ((int)lVar10 == 0) break;
        func_0x000107c60054();
        uVar13 = *(ulong *)(lVar10 + 0x10);
        if (uVar13 == 0) {
          func_0x000107c6142c();
          uVar18 = 0;
        }
        else {
          if (uVar13 < 9) {
            uVar18 = 0;
            lVar15 = 0;
          }
          else {
            uVar18 = 8;
            if ((uVar13 & 7) != 0) {
              uVar18 = uVar13 & 7;
            }
            lVar15 = uVar13 - uVar18;
            puVar17 = (undefined4 *)(lVar10 + 0x44);
            auVar23 = ZEXT216(0);
            auVar24 = ZEXT216(0);
            lVar16 = lVar15;
            do {
              auVar1._4_4_ = puVar17[-6];
              auVar1._0_4_ = puVar17[-8];
              auVar1._8_4_ = puVar17[-4];
              auVar1._12_4_ = puVar17[-2];
              auVar23 = NEON_smax(auVar23,auVar1,4);
              auVar2._4_4_ = puVar17[2];
              auVar2._0_4_ = *puVar17;
              auVar2._8_4_ = puVar17[4];
              auVar2._12_4_ = puVar17[6];
              auVar24 = NEON_smax(auVar24,auVar2,4);
              puVar17 = puVar17 + 0x10;
              lVar16 = lVar16 + -8;
            } while (lVar16 != 0);
            auVar23 = NEON_smax(auVar23,auVar24,4);
            uVar22 = NEON_smaxv(auVar23,4);
            uVar18 = (ulong)uVar22;
          }
          lVar14 = uVar13 - lVar15;
          lVar16 = lVar15 * 8 + 0x24;
          do {
            uVar22 = (uint)uVar18;
            if ((int)(uint)uVar18 <= (int)*(uint *)(lVar10 + lVar16)) {
              uVar22 = *(uint *)(lVar10 + lVar16);
            }
            uVar18 = (ulong)uVar22;
            lVar16 = lVar16 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          func_0x000107c6142c();
        }
        uVar6 = *puVar5;
        func_0x000107c61174(uVar6);
        FUN_1000aa0a8(uVar9);
        func_0x000107c61170(uVar6);
        uVar13 = param_2;
        func_0x000107c4cef4();
        if (uVar13 <= uVar18) goto LAB_1003590a0;
LAB_100358f10:
        func_0x000107c61170(puVar8);
        if (puVar21 == puVar20) goto LAB_100359184;
      }
      puVar11 = puVar8;
      func_0x000107c44e68();
      uVar18 = (long)puVar11 >> 0x20;
      uVar6 = *puVar5;
      func_0x000107c61174(uVar6);
      FUN_1000aa0a8(uVar9);
      func_0x000107c61170(uVar6);
      uVar13 = param_2;
      func_0x000107c4cef4();
      if (((long)uVar18 < 0) || (uVar18 < uVar13)) goto LAB_100358f10;
LAB_1003590a0:
      uVar13 = param_2;
      func_0x000107c4c848();
      if (((uVar18 != 0 && uVar13 < uVar18) ||
          ((uVar13 = param_2, func_0x000107c5acd8(), (int)uVar13 != 0 &&
           (puVar11 = puVar8, func_0x000107c49eb0(), (int)puVar11 == 0)))) ||
         ((uVar13 = param_2, func_0x000107c5acdc(), (int)uVar13 != 0 &&
          (puVar11 = puVar8, func_0x000107c49ebc(), ((ulong)puVar11 & 1) == 0))))
      goto LAB_100358f10;
      puVar12 = puVar19;
      func_0x000107c61558();
      apuStack_e0[0] = puVar19;
      if (((ulong)puVar12 & 1) == 0) {
        FUN_100357ee0(0,*(long *)(puVar19 + 0x10) + 1,1);
      }
      uVar13 = *(ulong *)(apuStack_e0[0] + 0x10);
      if (*(ulong *)(apuStack_e0[0] + 0x18) >> 1 <= uVar13) {
        FUN_100357ee0(1 < *(ulong *)(apuStack_e0[0] + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(apuStack_e0[0] + 0x10) = uVar13 + 1;
      *(undefined8 **)(apuStack_e0[0] + uVar13 * 8 + 0x20) = puVar8;
      puVar19 = apuStack_e0[0];
    } while (puVar21 != puVar20);
  }
LAB_100359184:
  func_0x000107c61428(puVar5,apuStack_e0,0,0);
  uVar6 = *puVar5;
  func_0x000107c61174(uVar6);
  FUN_1000aa0a8(uVar7);
  func_0x000107c61170(uVar6);
  return puVar19;
}



/* Entry: 1003591fc; end: 100359203; -[SCCameraDevicePhotoQualityConstraint minHeight] */

undefined8 FUN_1003591fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100359204; end: 10035920b; -[SCCameraDevicePhotoQualityConstraint maxHeight] */

undefined8 FUN_100359204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10035920c; end: 100359213; -[SCCameraDevicePhotoQualityConstraint shouldRequireHighPhotoQualitySupport] */

undefined1 FUN_10035920c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100359214; end: 10035921b; -[SCCameraDevicePhotoQualityConstraint shouldRequireHighestPhotoQualitySupport] */

undefined1 FUN_100359214(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10035921c; end: 10035979b;  */

undefined * FUN_10035921c(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *apuStack_90 [6];
  
  if ((param_2 & 1) != 0) {
    puVar4 = (undefined8 *)0x2;
    FUN_100029b9c(2,0x1a,0,0);
    if ((int)puVar4 != 0) {
      FUN_1000298f0();
      func_0x000107c61428();
      uVar5 = *puVar4;
      func_0x000107c61174(uVar5);
      uVar6 = 0xd00000000000005c;
      FUN_1000a9a18(0xd00000000000005c,0x800000010efc28e0);
      func_0x000107c61170(uVar5);
      puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if ((ulong)param_1 >> 0x3e == 0) {
        puVar11 = *(undefined **)(puVar12 + 0x10);
      }
      else {
        puVar11 = puVar12;
        if ((undefined *)0x7fffffffffffffff < param_1) {
          puVar11 = param_1;
        }
        func_0x000107c60480();
      }
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar11 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)param_1 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar12 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1003593c0);
                (*pcVar3)();
              }
              puVar7 = *(undefined **)(param_1 + (long)puVar9 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar7 = puVar9;
              FUN_10035b8a0(puVar9,param_1);
            }
            puVar1 = puVar9 + 1;
            if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1003593bc);
              (*pcVar3)();
            }
            puVar8 = puVar7;
            func_0x000107c49b0c();
            if (((ulong)puVar8 & 1) != 0) break;
            func_0x000107c61170(puVar7);
            puVar9 = puVar9 + 1;
            if (puVar1 == puVar11) goto LAB_1003593dc;
          }
          puVar9 = puVar10;
          func_0x000107c61558();
          apuStack_90[0] = puVar10;
          if (((ulong)puVar9 & 1) == 0) {
            FUN_100357ee0(0,*(long *)(puVar10 + 0x10) + 1,1);
          }
          uVar2 = *(ulong *)(apuStack_90[0] + 0x10);
          if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar2) {
            FUN_100357ee0(1 < *(ulong *)(apuStack_90[0] + 0x18),uVar2 + 1,1);
          }
          *(ulong *)(apuStack_90[0] + 0x10) = uVar2 + 1;
          *(undefined **)(apuStack_90[0] + uVar2 * 8 + 0x20) = puVar7;
          puVar9 = puVar1;
          puVar10 = apuStack_90[0];
        } while (puVar1 != puVar11);
      }
LAB_1003593dc:
      if (((long)puVar10 < 0) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
        puVar12 = puVar10;
        func_0x000107c60480();
      }
      else {
        puVar12 = *(undefined **)(puVar10 + 0x10);
      }
      if (puVar12 != (undefined *)0x0) {
        func_0x000107c61428(puVar4,apuStack_90,0,0);
        uVar5 = *puVar4;
        func_0x000107c61174(uVar5);
        FUN_1000aa0a8(uVar6);
        func_0x000107c61170(uVar5);
        return puVar10;
      }
      func_0x000107c61574(puVar10);
      func_0x000107c61428(puVar4,apuStack_90,0,0);
      uVar5 = *puVar4;
      func_0x000107c61434(param_1);
      func_0x000107c61174(uVar5);
      FUN_1000aa0a8(uVar6);
      func_0x000107c61170(uVar5);
      return param_1;
    }
  }
  func_0x000107c61434(param_1);
  return param_1;
}



/* Entry: 10035979c; end: 1003597b7;  */

ulong FUN_10035979c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100359900);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1002ee2f8(uVar2,uVar4,FUN_100357efc);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003598fc);
      (*pcVar1)();
    }
    func_0x000100359900(0,uVar2,uVar3 + 0x20,param_4,0x112da0aa0,
                        &PTR__OBJC_CLASS___AVCaptureDeviceFormat_1126a70e8);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1003597b8; end: 100359a1b;  */

ulong FUN_1003597b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100359900);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1002ee2f8(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003598fc);
      (*pcVar1)();
    }
    func_0x000100359900(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100359a1c; end: 100359a5b;  */

void FUN_100359a1c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100359a5c; end: 100359bd7;  */

ulong FUN_100359a5c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_60 [48];
  
  puVar3 = param_1;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd00000000000003f;
  FUN_1000a9a18(0xd00000000000003f,0x800000010efc28a0);
  func_0x000107c61170(uVar4);
  lVar6 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if ((int)lVar6 == 0) {
    func_0x000107c44e68(param_1);
    uVar12 = (long)param_1 >> 0x20;
  }
  else {
    func_0x000107c60054();
    uVar7 = *(ulong *)(lVar6 + 0x10);
    if (uVar7 == 0) {
      func_0x000107c6142c();
      uVar12 = 0;
    }
    else {
      if (uVar7 < 9) {
        uVar12 = 0;
        lVar9 = 0;
      }
      else {
        uVar12 = 8;
        if ((uVar7 & 7) != 0) {
          uVar12 = uVar7 & 7;
        }
        lVar9 = uVar7 - uVar12;
        puVar11 = (undefined4 *)(lVar6 + 0x44);
        auVar14 = ZEXT216(0);
        auVar15 = ZEXT216(0);
        lVar10 = lVar9;
        do {
          auVar1._4_4_ = puVar11[-6];
          auVar1._0_4_ = puVar11[-8];
          auVar1._8_4_ = puVar11[-4];
          auVar1._12_4_ = puVar11[-2];
          auVar14 = NEON_smax(auVar14,auVar1,4);
          auVar2._4_4_ = puVar11[2];
          auVar2._0_4_ = *puVar11;
          auVar2._8_4_ = puVar11[4];
          auVar2._12_4_ = puVar11[6];
          auVar15 = NEON_smax(auVar15,auVar2,4);
          puVar11 = puVar11 + 0x10;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
        auVar14 = NEON_smax(auVar14,auVar15,4);
        uVar13 = NEON_smaxv(auVar14,4);
        uVar12 = (ulong)uVar13;
      }
      lVar8 = uVar7 - lVar9;
      lVar10 = lVar9 * 8 + 0x24;
      do {
        uVar13 = (uint)uVar12;
        if ((int)(uint)uVar12 <= (int)*(uint *)(lVar6 + lVar10)) {
          uVar13 = *(uint *)(lVar6 + lVar10);
        }
        uVar12 = (ulong)uVar13;
        lVar10 = lVar10 + 8;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      func_0x000107c6142c();
    }
  }
  func_0x000107c61428(puVar3,auStack_60,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return uVar12;
}



/* Entry: 100359bd8; end: 10035a1eb;  */

undefined * FUN_100359bd8(double param_1,undefined8 *param_2,uint param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_a0 [48];
  
  puVar3 = param_2;
  FUN_1000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000058;
  FUN_1000a9a18(0xd000000000000058,0x800000010efc27e0);
  func_0x000107c61170(uVar4);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar17 = *(undefined8 **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined8 *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_2) {
      puVar17 = param_2;
    }
    func_0x000107c60480();
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar17 != (undefined8 *)0x0) {
    if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035a1ec);
      (*pcVar2)();
    }
    puVar18 = (undefined8 *)0x0;
    puVar14 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    puVar1 = puVar14;
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        puVar6 = (undefined8 *)param_2[(long)puVar18 + 4];
        func_0x000107c61174();
        dVar20 = param_1;
      }
      else {
        puVar6 = puVar18;
        FUN_10035b8a0(puVar18,param_2);
        dVar20 = param_1;
      }
      uVar16 = (ulong)puVar13 >> 0x3e;
      if (uVar16 == 0) {
        param_1 = dVar20;
        if (*(long *)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10) == 0)
        goto LAB_100359fc8;
LAB_100359cec:
        puVar9 = puVar6;
        func_0x000107c5de1c();
        func_0x000107c61180();
        uVar4 = 0;
        FUN_1001262e4(0,0x112dd8948,&PTR__OBJC_CLASS___AVFrameRateRange_1126a7ef0);
        puVar7 = puVar9;
        func_0x000107c5fc54(puVar9,uVar4);
        func_0x000107c61170(puVar9);
        if ((param_3 & 1) == 0) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar9 = *(undefined8 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined8 *)0x7fffffffffffffff < puVar7) {
              puVar9 = puVar7;
            }
            func_0x000107c60480();
          }
          if (puVar9 == (undefined8 *)0x0) goto LAB_100359c98;
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10035a1c0);
              (*pcVar2)();
            }
            uVar8 = puVar7[4];
            func_0x000107c61174(uVar8);
            dVar19 = param_1;
          }
          else {
            uVar8 = 0;
            FUN_1003584d8(0,puVar7);
            dVar19 = param_1;
          }
          func_0x000107c6142c(puVar7);
          func_0x000107c4c844(uVar8);
          dVar20 = dVar19;
          func_0x000107c61170(uVar8);
          if (uVar16 == 0) {
            puVar11 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if (((ulong)puVar13 & 0x8000000000000000) != 0) {
              puVar11 = puVar13;
            }
            func_0x000107c60480();
          }
          if (puVar11 == (undefined *)0x0) goto LAB_10035a034;
          if (((ulong)puVar13 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10035a1c8);
              (*pcVar2)();
            }
            puVar9 = *(undefined8 **)(puVar13 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar9 = (undefined8 *)0x0;
            FUN_10035b8a0(0,puVar13);
          }
          puVar10 = puVar9;
          func_0x000107c5de1c();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          puVar7 = puVar10;
          func_0x000107c5fc54(puVar10,uVar4);
          func_0x000107c61170(puVar10);
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar9 = *(undefined8 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            param_1 = dVar20;
          }
          else {
            puVar9 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined8 *)0x7fffffffffffffff < puVar7) {
              puVar9 = puVar7;
            }
            func_0x000107c60480();
            param_1 = dVar20;
          }
          if (puVar9 == (undefined8 *)0x0) goto LAB_100359c98;
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10035a1cc);
              (*pcVar2)();
            }
            uVar4 = puVar7[4];
            func_0x000107c61174(uVar4);
          }
          else {
            uVar4 = 0;
            FUN_1003584d8(0,puVar7);
          }
          func_0x000107c6142c(puVar7);
          func_0x000107c4c844(uVar4);
          dVar20 = param_1;
          func_0x000107c61170(uVar4);
          if (param_1 <= dVar19) {
            if (dVar19 == param_1) goto LAB_100359fc8;
            goto LAB_10035a034;
          }
LAB_100359f7c:
          func_0x000107c6142c(puVar13);
          func_0x000107c61174();
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
            puVar11 = *(undefined **)(puVar14 + 0x10);
          }
          else {
            puVar11 = puVar1;
            func_0x000107c60480(puVar1);
          }
          puVar12 = (undefined *)0x0;
          FUN_10035979c(0,puVar11 + 1,1,puVar13);
          goto LAB_10035a00c;
        }
        if ((ulong)puVar7 >> 0x3e == 0) {
          dVar19 = param_1;
          if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_100359c98;
LAB_100359d50:
          if (((ulong)puVar7 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10035a1bc);
              (*pcVar2)();
            }
            uVar8 = puVar7[4];
            func_0x000107c61174(uVar8);
          }
          else {
            uVar8 = 0;
            FUN_1003584d8(0,puVar7);
          }
          func_0x000107c6142c(puVar7);
          func_0x000107c4c844(uVar8);
          dVar20 = dVar19;
          func_0x000107c61170(uVar8);
          if (uVar16 == 0) {
            puVar11 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if (((ulong)puVar13 & 0x8000000000000000) != 0) {
              puVar11 = puVar13;
            }
            func_0x000107c60480();
          }
          if (puVar11 != (undefined *)0x0) {
            if (((ulong)puVar13 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10035a1c4);
                (*pcVar2)();
              }
              puVar9 = *(undefined8 **)(puVar13 + 0x20);
              func_0x000107c61174();
            }
            else {
              puVar9 = (undefined8 *)0x0;
              FUN_10035b8a0(0,puVar13);
            }
            puVar10 = puVar9;
            func_0x000107c5de1c();
            func_0x000107c61180();
            func_0x000107c61170(puVar9);
            puVar7 = puVar10;
            func_0x000107c5fc54(puVar10,uVar4);
            func_0x000107c61170(puVar10);
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar9 = *(undefined8 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
              param_1 = dVar20;
            }
            else {
              puVar9 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined8 *)0x7fffffffffffffff < puVar7) {
                puVar9 = puVar7;
              }
              func_0x000107c60480();
              param_1 = dVar20;
            }
            if (puVar9 == (undefined8 *)0x0) goto LAB_100359c98;
            if (((ulong)puVar7 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10035a1d0);
                (*pcVar2)();
              }
              uVar4 = puVar7[4];
              func_0x000107c61174(uVar4);
            }
            else {
              uVar4 = 0;
              FUN_1003584d8(0,puVar7);
            }
            func_0x000107c6142c(puVar7);
            func_0x000107c4c844(uVar4);
            dVar20 = param_1;
            func_0x000107c61170(uVar4);
            if (param_1 < dVar19) goto LAB_100359f7c;
            if (dVar19 == param_1) goto LAB_100359fc8;
          }
LAB_10035a034:
          func_0x000107c61170(puVar6);
          param_1 = dVar20;
        }
        else {
          puVar9 = (undefined8 *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined8 *)0x7fffffffffffffff < puVar7) {
            puVar9 = puVar7;
          }
          func_0x000107c60480();
          dVar19 = param_1;
          if (puVar9 != (undefined8 *)0x0) goto LAB_100359d50;
LAB_100359c98:
          func_0x000107c61170(puVar6);
          func_0x000107c6142c(puVar7);
        }
      }
      else {
        puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if (((ulong)puVar13 & 0x8000000000000000) != 0) {
          puVar11 = puVar13;
        }
        func_0x000107c60480();
        param_1 = dVar20;
        if (puVar11 != (undefined *)0x0) goto LAB_100359cec;
LAB_100359fc8:
        func_0x000107c61174();
        puVar11 = puVar13;
        func_0x000107c61550();
        if ((uVar16 != 0) || (puVar12 = puVar13, (int)puVar11 == 0)) {
          if (uVar16 == 0) {
            puVar11 = *(undefined **)((undefined *)((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if (((ulong)puVar13 & 0x8000000000000000) != 0) {
              puVar11 = puVar13;
            }
            func_0x000107c60480(puVar11);
          }
          puVar12 = (undefined *)0x0;
          FUN_10035979c(0,puVar11 + 1,1,puVar13);
        }
LAB_10035a00c:
        uVar15 = (ulong)puVar12 & 0xffffffffffffff8;
        uVar16 = *(ulong *)(uVar15 + 0x10);
        puVar13 = puVar12;
        param_1 = dVar20;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar16) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          FUN_10035979c(puVar13,uVar16 + 1,1,puVar12);
          uVar15 = (ulong)puVar13 & 0xffffffffffffff8;
          param_1 = dVar20;
        }
        *(ulong *)(uVar15 + 0x10) = uVar16 + 1;
        *(undefined8 **)(uVar15 + uVar16 * 8 + 0x20) = puVar6;
        func_0x000107c61170(puVar6);
      }
      puVar18 = (undefined8 *)((long)puVar18 + 1);
    } while (puVar17 != puVar18);
  }
  func_0x000107c61428(puVar3,auStack_a0,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  FUN_1000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return puVar13;
}



/* Entry: 10035a1ec; end: 10035a207;  */

void FUN_10035a1ec(undefined8 param_1)

{
  FUN_1000285a8(0x112f31458,&UNK_10db77480);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102ff49d8,param_1);
  return;
}



/* Entry: 10035a208; end: 10035a313;  */

void FUN_10035a208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035a314; end: 10035a343;  */

void FUN_10035a314(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10035a344; end: 10035a473;  */

void FUN_10035a344(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_10035a314();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10035a408);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_10035a4d8(lVar5);
    uVar2 = param_2;
    FUN_10035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10035a3d4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00010195a544();
    lVar5 = *unaff_x20;
    goto joined_r0x00010035a41c;
  }
  lVar5 = *unaff_x20;
joined_r0x00010035a41c:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10035a474);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 10035a474; end: 10035a4d7;  */

void FUN_10035a474(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}


