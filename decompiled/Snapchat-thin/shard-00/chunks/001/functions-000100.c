/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100298ba4; end: 100298bef; -[GPBCodedOutputStream writeRawData:] */

void FUN_100298ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c3eea8(param_3);
  func_0x000107c4adac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c2be230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_writeRawPtr_offset_length__11268d2b0,uVar1,0,param_3);
  return;
}



/* Entry: 100298bf0; end: 100298cf3; -[GPBCodedOutputStream writeRawPtr:offset:length:] */

void FUN_100298bf0(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_3 != 0) && (param_5 != 0)) {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar5 = lVar2 - *(long *)(param_1 + 0x18);
    lVar1 = *(long *)(param_1 + 8) + *(long *)(param_1 + 0x18);
    uVar3 = param_5 - uVar5;
    if (param_5 < uVar5 || uVar3 == 0) {
      func_0x000107c610b4(lVar1,param_3 + param_4,param_5);
      *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_5;
    }
    else {
      func_0x000107c610b4(lVar1,param_3 + param_4,uVar5);
      *(long *)(param_1 + 0x18) = lVar2;
      FUN_1003f59d4((long *)(param_1 + 8));
      if (*(ulong *)(param_1 + 0x10) < uVar3) {
        uVar4 = *(ulong *)(param_1 + 0x28);
        FUN_1003f5a60(uVar4,param_3 + uVar5 + param_4,uVar3);
        if (uVar4 != uVar3) {
          func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
        }
        *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + uVar4;
      }
      else {
        func_0x000107c610b4(*(undefined8 *)(param_1 + 8),param_3 + uVar5 + param_4,uVar3);
        *(ulong *)(param_1 + 0x18) = uVar3;
      }
    }
  }
  return;
}



/* Entry: 100298cf4; end: 100298cfb; -[AFHTTPClient defaultHeaders] */

undefined8 FUN_100298cf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100298cfc; end: 100298d2f; -[GPBCodedOutputStream writeInt32:value:] */

/* WARNING: Possible PIC construction at 0x000100298d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100298d1c) */
/* WARNING: Removing unreachable block (ram,0x000100298d30) */
/* WARNING: Removing unreachable block (ram,0x000100298d38) */
/* WARNING: Removing unreachable block (ram,0x000100299010) */
/* WARNING: Removing unreachable block (ram,0x000100299038) */
/* WARNING: Removing unreachable block (ram,0x000100299044) */
/* WARNING: Removing unreachable block (ram,0x000100299050) */
/* WARNING: Removing unreachable block (ram,0x000100299030) */
/* WARNING: Removing unreachable block (ram,0x000100299074) */
/* WARNING: Removing unreachable block (ram,0x000100299080) */
/* WARNING: Removing unreachable block (ram,0x00010029908c) */
/* WARNING: Removing unreachable block (ram,0x000100298d34) */

void FUN_100298cfc(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_3 << 3;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_1003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      uVar5 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 100298d30; end: 100298d3f;  */

void FUN_100298d30(long *param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((int)param_2 < 0) {
    uVar2 = (ulong)(int)param_2;
    uVar5 = uVar2;
    if (0x7f < uVar2) {
      do {
        lVar3 = param_1[2];
        if (lVar3 == param_1[1]) {
          FUN_1003f59d4(param_1);
          lVar3 = param_1[2];
        }
        param_1[2] = lVar3 + 1;
        *(byte *)(*param_1 + lVar3) = (byte)uVar5 | 0x80;
        uVar2 = uVar5 >> 7;
        bVar1 = 0x3fff < uVar5;
        uVar5 = uVar2;
      } while (bVar1);
    }
    lVar3 = param_1[2];
    if (lVar3 == param_1[1]) {
      FUN_1003f59d4(param_1);
      lVar3 = param_1[2];
    }
    param_1[2] = lVar3 + 1;
    *(char *)(*param_1 + lVar3) = (char)uVar2;
    return;
  }
  uVar4 = param_2;
  if (0x7f < param_2) {
    do {
      lVar3 = param_1[2];
      if (lVar3 == param_1[1]) {
        FUN_1003f59d4(param_1);
        lVar3 = param_1[2];
      }
      param_1[2] = lVar3 + 1;
      *(byte *)(*param_1 + lVar3) = (byte)uVar4 | 0x80;
      param_2 = uVar4 >> 7;
      bVar1 = 0x3fff < uVar4;
      uVar4 = param_2;
    } while (bVar1);
  }
  lVar3 = param_1[2];
  if (lVar3 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar3 = param_1[2];
  }
  param_1[2] = lVar3 + 1;
  *(char *)(*param_1 + lVar3) = (char)param_2;
  return;
}



/* Entry: 100298d40; end: 100298d73; -[GPBCodedOutputStream writeEnum:value:] */

/* WARNING: Possible PIC construction at 0x000100298d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100298d60) */
/* WARNING: Removing unreachable block (ram,0x000100298d30) */
/* WARNING: Removing unreachable block (ram,0x000100298d38) */
/* WARNING: Removing unreachable block (ram,0x000100299010) */
/* WARNING: Removing unreachable block (ram,0x000100299038) */
/* WARNING: Removing unreachable block (ram,0x000100299044) */
/* WARNING: Removing unreachable block (ram,0x000100299050) */
/* WARNING: Removing unreachable block (ram,0x000100299030) */
/* WARNING: Removing unreachable block (ram,0x000100299074) */
/* WARNING: Removing unreachable block (ram,0x000100299080) */
/* WARNING: Removing unreachable block (ram,0x00010029908c) */
/* WARNING: Removing unreachable block (ram,0x000100298d34) */

void FUN_100298d40(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_3 << 3;
  plVar1 = (long *)(param_1 + 8);
  uVar4 = uVar5;
  if (0x7f < uVar5) {
    do {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == *(long *)(param_1 + 0x10)) {
        FUN_1003f59d4(plVar1);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      *(long *)(param_1 + 0x18) = lVar3 + 1;
      *(byte *)(*plVar1 + lVar3) = (byte)uVar4 | 0x80;
      uVar5 = uVar4 >> 7;
      bVar2 = 0x3fff < uVar4;
      uVar4 = uVar5;
    } while (bVar2);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == *(long *)(param_1 + 0x10)) {
    FUN_1003f59d4(plVar1);
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(long *)(param_1 + 0x18) = lVar3 + 1;
  *(char *)(*plVar1 + lVar3) = (char)uVar5;
  return;
}



/* Entry: 100298d74; end: 100298ec3; -[GPBCodedOutputStream writeEnumArray:values:tag:] */

void FUN_100298d74(long param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined4 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((int)param_5 == 0) {
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_10bd602b4;
    puStack_c8 = &UNK_110d9f4f8;
    lStack_c0 = param_1;
    uStack_b8 = param_3;
    func_0x000107c429d0(param_4,param_2,&puStack_e0);
  }
  else {
    lVar1 = param_4;
    func_0x000107c40808();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar1 != 0) {
      puStack_68 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      puStack_78 = &UNK_10bd60250;
      puStack_70 = &UNK_11087e858;
      puStack_58 = puStack_68;
      func_0x000107c429d0(param_4);
      func_0x000100298744(param_1 + 8,param_5);
      func_0x000100298744(param_1 + 8,*(undefined4 *)(puStack_58 + 3));
      uStack_a8 = 0xc2000000;
      puStack_a0 = &UNK_10bd602a8;
      puStack_98 = &UNK_110d9f4c8;
      lStack_90 = param_1;
      func_0x000107c429d0(param_4);
      func_0x000107c60bcc(&uStack_60,8);
    }
  }
  return;
}



/* Entry: 100298ec4; end: 100298edf;  */

void FUN_100298ec4(undefined8 param_1)

{
  FUN_1000285a8(0x112e140c8,&UNK_10d9f05c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cb99fc,param_1);
  return;
}



/* Entry: 100298ee0; end: 100298f2f;  */

void FUN_100298ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100298f30; end: 100298fd3;  */

void FUN_100298f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e142b0,&UNK_10d9f0940);
  puVar1 = &UNK_110468020;
  func_0x000107c613fc(&UNK_110468020,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101cba638,puVar1);
  return;
}



/* Entry: 100298fd4; end: 10029900f;  */

void FUN_100298fd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100299010; end: 1002990ab;  */

void FUN_100299010(long *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = param_2;
  if (0x7f < param_2) {
    do {
      lVar2 = param_1[2];
      if (lVar2 == param_1[1]) {
        FUN_1003f59d4(param_1);
        lVar2 = param_1[2];
      }
      param_1[2] = lVar2 + 1;
      *(byte *)(*param_1 + lVar2) = (byte)uVar3 | 0x80;
      param_2 = uVar3 >> 7;
      bVar1 = 0x3fff < uVar3;
      uVar3 = param_2;
    } while (bVar1);
  }
  lVar2 = param_1[2];
  if (lVar2 == param_1[1]) {
    FUN_1003f59d4(param_1);
    lVar2 = param_1[2];
  }
  param_1[2] = lVar2 + 1;
  *(char *)(*param_1 + lVar2) = (char)param_2;
  return;
}



/* Entry: 1002990ac; end: 1002990cb;  */

void FUN_1002990ac(void)

{
  func_0x000107c61168(&PTR_PTR_112e14328);
  return;
}



/* Entry: 1002990cc; end: 1002990e7;  */

void FUN_1002990cc(undefined8 param_1)

{
  FUN_1000285a8(0x112e142b8,&UNK_10d9f0948);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cba9a4,param_1);
  return;
}



/* Entry: 1002990e8; end: 1002991b7;  */

void FUN_1002990e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002991b8; end: 1002991d7;  */

void FUN_1002991b8(void)

{
  func_0x000107c61168(&PTR_PTR_112e14420);
  return;
}



/* Entry: 1002991d8; end: 1002991f3;  */

void FUN_1002991d8(undefined8 param_1)

{
  FUN_1000285a8(0x112e143b0,&UNK_10d9f0af8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007073c0,param_1);
  return;
}



/* Entry: 1002991f4; end: 100299243;  */

void FUN_1002991f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100299244; end: 10029930b;  */

void FUN_100299244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e14490,&UNK_10d9f0c80);
  puVar1 = &UNK_1104681b0;
  func_0x000107c613fc(&UNK_1104681b0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1007080f4,puVar1);
  return;
}



/* Entry: 10029930c; end: 10029932b;  */

void FUN_10029930c(void)

{
  func_0x000107c61168(&PTR_PTR_112e14508);
  return;
}



/* Entry: 10029932c; end: 100299357;  */

undefined1  [16] FUN_10029932c(void)

{
  return ZEXT816(0x11077dd20);
}



/* Entry: 100299358; end: 1002993a7;  */

void FUN_100299358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002993a8; end: 100299493;  */

void FUN_1002993a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e14598,&UNK_10d9f0e20);
  puVar1 = &UNK_110468278;
  func_0x000107c613fc(&UNK_110468278,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(FUN_1007077dc,puVar1);
  return;
}



/* Entry: 100299494; end: 1002994b3;  */

void FUN_100299494(void)

{
  func_0x000107c61168(&PTR_PTR_112e14610);
  return;
}



/* Entry: 1002994b4; end: 1002994cf;  */

void FUN_1002994b4(undefined8 param_1)

{
  FUN_1000285a8(0x112e145a0,&UNK_10d9f0e28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100707780,param_1);
  return;
}



/* Entry: 1002994d0; end: 10029951f;  */

void FUN_1002994d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100299520; end: 10029953b;  */

void FUN_100299520(undefined8 param_1)

{
  FUN_1000285a8(0x112e39678,&UNK_10da23de8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ec9b70,param_1);
  return;
}



/* Entry: 10029953c; end: 10029960b;  */

void FUN_10029953c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029960c; end: 100299657;  */

void FUN_10029960c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100299658; end: 100299673;  */

void FUN_100299658(undefined8 param_1)

{
  FUN_1000285a8(0x112e1dad0,&UNK_10d9ff358);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cfe4b4,param_1);
  return;
}



/* Entry: 100299674; end: 1002996c3;  */

void FUN_100299674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002996c4; end: 1002996e3;  */

void FUN_1002996c4(void)

{
  func_0x000107c61168(&PTR_PTR_112914588);
  return;
}



/* Entry: 1002996e4; end: 1002996e7;  */

void FUN_1002996e4(void)

{
  return;
}



/* Entry: 1002996e8; end: 100299767;  */

void FUN_1002996e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e02f60,&UNK_10d9d5520);
  puVar1 = &UNK_110447b20;
  func_0x000107c613fc(&UNK_110447b20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101b3b848,puVar1);
  return;
}



/* Entry: 100299768; end: 100299793;  */

void FUN_100299768(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100299794; end: 10029982b;  */

void FUN_100299794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e19d98,&UNK_10d9f9cf0);
  puVar1 = &UNK_11046d788;
  func_0x000107c613fc(&UNK_11046d788,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101cdfa2c,puVar1);
  return;
}



/* Entry: 10029982c; end: 10029987f;  */

void FUN_10029982c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100299880; end: 10029989b;  */

void FUN_100299880(undefined8 param_1)

{
  FUN_1000285a8(0x112e19da0,&UNK_10d9f9cf8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cdfd04,param_1);
  return;
}



/* Entry: 10029989c; end: 1002998eb;  */

void FUN_10029989c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002998ec; end: 10029990b;  */

void FUN_1002998ec(void)

{
  func_0x000107c61168(&PTR_PTR_112df7c40);
  return;
}



/* Entry: 10029990c; end: 1002999af;  */

void FUN_10029990c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0dd30,&UNK_10d9e8460);
  puVar1 = &UNK_110460840;
  func_0x000107c613fc(&UNK_110460840,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1007e64f8,puVar1);
  return;
}



/* Entry: 1002999b0; end: 1002999cf;  */

void FUN_1002999b0(void)

{
  func_0x000107c61168(&PTR_PTR_112e0dda8);
  return;
}



/* Entry: 1002999d0; end: 1002999eb;  */

void FUN_1002999d0(undefined8 param_1)

{
  FUN_1000285a8(0x112e0dd38,&UNK_10d9e8468);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007e649c,param_1);
  return;
}



/* Entry: 1002999ec; end: 100299a3b;  */

void FUN_1002999ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100299a3c; end: 100299b1b;  */

void FUN_100299a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e14da8,&UNK_10d9f1cc0);
  puVar1 = &UNK_110468af8;
  func_0x000107c613fc(&UNK_110468af8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_1006ee17c,puVar1);
  return;
}



/* Entry: 100299b1c; end: 100299b3b;  */

void FUN_100299b1c(void)

{
  func_0x000107c61168(&PTR_PTR_112e14e20);
  return;
}



/* Entry: 100299b3c; end: 100299b57;  */

void FUN_100299b3c(undefined8 param_1)

{
  FUN_1000285a8(0x112e14db0,&UNK_10d9f1cc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006ee120,param_1);
  return;
}



/* Entry: 100299b58; end: 100299ba7;  */

void FUN_100299b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100299ba8; end: 100299bc7;  */

void FUN_100299ba8(void)

{
  func_0x000107c61168(&PTR_PTR_1129b1680);
  return;
}



/* Entry: 100299bc8; end: 100299be3;  */

void FUN_100299bc8(undefined8 param_1)

{
  FUN_1000285a8(0x112e14cd0,&UNK_10d9f1b48);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cbcb5c,param_1);
  return;
}



/* Entry: 100299be4; end: 100299c03;  */

void FUN_100299be4(void)

{
  func_0x000107c61168(&PTR_PTR_11290f308);
  return;
}



/* Entry: 100299c04; end: 100299ccb;  */

void FUN_100299c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e14eb8,&UNK_10d9f1e80);
  puVar1 = &UNK_110468bc0;
  func_0x000107c613fc(&UNK_110468bc0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1006eca10,puVar1);
  return;
}



/* Entry: 100299ccc; end: 100299ceb;  */

void FUN_100299ccc(void)

{
  func_0x000107c61168(&PTR_PTR_112e14f30);
  return;
}



/* Entry: 100299cec; end: 100299d07;  */

void FUN_100299cec(undefined8 param_1)

{
  FUN_1000285a8(0x112e14ec0,&UNK_10d9f1e88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006ec9b4,param_1);
  return;
}



/* Entry: 100299d08; end: 100299d57;  */

void FUN_100299d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100299d58; end: 100299d77;  */

void FUN_100299d58(void)

{
  func_0x000107c61168(&PTR_PTR_1129b1168);
  return;
}



/* Entry: 100299d78; end: 100299d93;  */

void FUN_100299d78(undefined8 param_1)

{
  FUN_1000285a8(0x112e14be8,&UNK_10d9f19a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100aa9e7c,param_1);
  return;
}



/* Entry: 100299d94; end: 100299de3;  */

void FUN_100299d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100299de4; end: 100299e03;  */

void FUN_100299de4(void)

{
  func_0x000107c61168(&PTR_PTR_11290f248);
  return;
}



/* Entry: 100299e04; end: 100299e83;  */

void FUN_100299e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e14fc0,&UNK_10d9f2030);
  puVar1 = &UNK_110468c88;
  func_0x000107c613fc(&UNK_110468c88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006fdb44,puVar1);
  return;
}



/* Entry: 100299e84; end: 100299ea3;  */

void FUN_100299e84(void)

{
  func_0x000107c61168(&PTR_PTR_112e15038);
  return;
}



/* Entry: 100299ea4; end: 100299ebf;  */

void FUN_100299ea4(undefined8 param_1)

{
  FUN_1000285a8(0x112e14fc8,&UNK_10d9f2038);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006fdae8,param_1);
  return;
}



/* Entry: 100299ec0; end: 100299f0f;  */

void FUN_100299ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100299f10; end: 100299f2f;  */

void FUN_100299f10(void)

{
  func_0x000107c61168(&PTR_PTR_1129342b0);
  return;
}



/* Entry: 100299f30; end: 100299faf;  */

void FUN_100299f30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e150a8,&UNK_10d9f2200);
  puVar1 = &UNK_110468d50;
  func_0x000107c613fc(&UNK_110468d50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100aaa8f0,puVar1);
  return;
}



/* Entry: 100299fb0; end: 100299fcf;  */

void FUN_100299fb0(void)

{
  func_0x000107c61168(&PTR_PTR_112e15120);
  return;
}



/* Entry: 100299fd0; end: 100299feb;  */

void FUN_100299fd0(undefined8 param_1)

{
  FUN_1000285a8(0x112e150b0,&UNK_10d9f2208);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100aaa894,param_1);
  return;
}



/* Entry: 100299fec; end: 10029a03b;  */

void FUN_100299fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029a03c; end: 10029a05b;  */

void FUN_10029a03c(void)

{
  func_0x000107c61168(&PTR_PTR_11292f800);
  return;
}



/* Entry: 10029a05c; end: 10029a0f3;  */

void FUN_10029a05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e16278,&UNK_10d9f3a90);
  puVar1 = &UNK_110469ec0;
  func_0x000107c613fc(&UNK_110469ec0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1006cce0c,puVar1);
  return;
}



/* Entry: 10029a0f4; end: 10029a113;  */

void FUN_10029a0f4(void)

{
  func_0x000107c61168(&PTR_PTR_112e162f0);
  return;
}



/* Entry: 10029a114; end: 10029a1ab;  */

void FUN_10029a114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e18868,&UNK_10d9f78d0);
  puVar1 = &UNK_11046c4b8;
  func_0x000107c613fc(&UNK_11046c4b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101cd96b8,puVar1);
  return;
}



/* Entry: 10029a1ac; end: 10029a1ff;  */

void FUN_10029a1ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10029a200; end: 10029a21b;  */

void FUN_10029a200(undefined8 param_1)

{
  FUN_1000285a8(0x112e18870,&UNK_10d9f78d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cd9984,param_1);
  return;
}



/* Entry: 10029a21c; end: 10029a26b;  */

void FUN_10029a21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029a26c; end: 10029a287;  */

void FUN_10029a26c(undefined8 param_1)

{
  FUN_1000285a8(0x112e3dc60,&UNK_10da2a808);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10043cdd0,param_1);
  return;
}



/* Entry: 10029a288; end: 10029a2d7;  */

void FUN_10029a288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029a2d8; end: 10029a2f7;  */

void FUN_10029a2d8(void)

{
  func_0x000107c61168(&PTR_PTR_112962a98);
  return;
}



/* Entry: 10029a2f8; end: 10029a39b;  */

void FUN_10029a2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1f718,&UNK_10da01c40);
  puVar1 = &UNK_110473b30;
  func_0x000107c613fc(&UNK_110473b30,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_100700fe0,puVar1);
  return;
}



/* Entry: 10029a39c; end: 10029a3bb;  */

void FUN_10029a39c(void)

{
  func_0x000107c61168(&PTR_PTR_112e1f790);
  return;
}



/* Entry: 10029a3bc; end: 10029a3d7;  */

void FUN_10029a3bc(undefined8 param_1)

{
  FUN_1000285a8(0x112e1f720,&UNK_10da01c48);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100700f84,param_1);
  return;
}



/* Entry: 10029a3d8; end: 10029a427;  */

void FUN_10029a3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029a428; end: 10029a467;  */

void FUN_10029a428(void)

{
  undefined *puVar1;
  
  if (puRam0000000112da9658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d950e90;
  func_0x000107c61520(&UNK_10d950e90,&UNK_1103ce390);
  puRam0000000112da9658 = puVar1;
  return;
}



/* Entry: 10029a468; end: 10029a483;  */

void FUN_10029a468(undefined8 param_1)

{
  FUN_1000285a8(0x112e3de70,&UNK_10da2abf0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100bafa34,param_1);
  return;
}



/* Entry: 10029a484; end: 10029a4d3;  */

void FUN_10029a484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10029a4d4; end: 10029a4f3;  */

void FUN_10029a4d4(void)

{
  func_0x000107c61168(&PTR_PTR_112e3dee8);
  return;
}



/* Entry: 10029a4f4; end: 10029a507; -[GPBCodedOutputStream flush] */

void FUN_10029a4f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(long *)(param_1 + 0x28) == 0) {
      func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                          &PTR____CFConstantStringClassReference_11102f578,
                          &PTR____CFConstantStringClassReference_110daafd8);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar1 = *(long *)(param_1 + 0x28);
      FUN_1003f5a60(lVar1,*(undefined8 *)(param_1 + 8));
      if (lVar1 != *(long *)(param_1 + 0x18)) {
        func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lVar1;
    }
    return;
  }
  return;
}



/* Entry: 10029a508; end: 10029a56f; -[GPBCodedOutputStream dealloc] */

void FUN_10029a508(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c43704();
  func_0x000107c3fc10(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_11270e7d8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10029a570; end: 10029a58b;  */

void FUN_10029a570(undefined8 param_1)

{
  FUN_1000285a8(0x112e3de78,&UNK_10da2abf8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100baf9d8,param_1);
  return;
}



/* Entry: 10029a58c; end: 10029a63b;  */

void FUN_10029a58c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(uint *)(lVar2 + 0x14);
  if ((int)uVar1 < 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (*(int *)(lVar3 + (ulong)-uVar1 * 4) != *(int *)(lVar2 + 0x10)) goto LAB_10029a5c8;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x40);
    if ((*(uint *)(lVar3 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
LAB_10029a5c8:
      uVar4 = *(undefined8 *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18));
      *(undefined8 *)(lVar3 + (ulong)*(uint *)(lVar2 + 0x18)) = 0;
      func_0x00010029a5f8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 10029a63c; end: 10029a65b;  */

void FUN_10029a63c(void)

{
  func_0x000107c61168(&PTR_PTR_112923b08);
  return;
}



/* Entry: 10029a65c; end: 10029a6df;  */

void FUN_10029a65c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_10029a6ec(&uStack_40,param_2);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_100100fec(&uStack_40);
  }
  FUN_10029acec();
  return;
}



/* Entry: 10029a6e0; end: 10029a6eb;  */

void FUN_10029a6e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10029a6ec; end: 10029a75f;  */

void FUN_10029a6ec(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_10029a6e0();
  func_0x000107c61178();
  func_0x000107c3eea8();
  func_0x000107c4adac();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  else {
    func_0x000107c4adac();
    FUN_10029a878();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10029a760; end: 10029a76b; +[SCAPIAuth userAgentHeader] */

void FUN_10029a760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c291270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0380,PTR_s_userAgentHeader_112681ec0);
  return;
}



/* Entry: 10029a76c; end: 10029a7f3; +[SCAPIUserAgentHelper userAgentHeader] */

void FUN_10029a76c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10029a8a8;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137fc278 != -1) {
    FUN_10002a2fc(0x1137fc278,&puStack_48);
  }
  uVar1 = uRam00000001137fc270;
  func_0x000107c61174(uRam00000001137fc270);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10029a7f4; end: 10029a877;  */

void FUN_10029a7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10002b958(param_1,param_4);
    FUN_10029a9bc(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  FUN_10002b9fc(&uStack_40);
  return;
}



/* Entry: 10029a878; end: 10029a8a7;  */

undefined8 * FUN_10029a878(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10029a7f4();
  return param_1;
}



/* Entry: 10029a8a8; end: 10029a9bb;  */

/* WARNING: Possible PIC construction at 0x00010029a978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010029a988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010029a998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010029a98c) */
/* WARNING: Removing unreachable block (ram,0x00010029a97c) */
/* WARNING: Removing unreachable block (ram,0x00010029a99c) */

void FUN_10029a8a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c3de0c();
  func_0x000107c61180();
  func_0x000107c5dd1c();
  func_0x000107c61180();
  func_0x000107c446b4();
  func_0x000107c61180();
  func_0x000107c5c650();
  func_0x000107c61180();
  func_0x000107c51804(puVar2,param_2,&PTR____CFConstantStringClassReference_110f9c818);
  func_0x000107c61180();
  uVar1 = puRam00000001137fc270;
  puRam00000001137fc270 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10029a9bc; end: 10029a9db;  */

void FUN_10029a9bc(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}


