/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002a2130; end: 1002a217f;  */

void FUN_1002a2130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a2180; end: 1002a219b;  */

void FUN_1002a2180(undefined8 param_1)

{
  FUN_1000285a8(0x112e337f8,&UNK_10da1c978);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100435668,param_1);
  return;
}



/* Entry: 1002a219c; end: 1002a21eb;  */

void FUN_1002a219c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a21ec; end: 1002a2207;  */

void FUN_1002a21ec(undefined8 param_1)

{
  FUN_1000285a8(0x112e16f40,&UNK_10d9f4fe0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100464ce8,param_1);
  return;
}



/* Entry: 1002a2208; end: 1002a2257;  */

void FUN_1002a2208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a2258; end: 1002a2277;  */

void FUN_1002a2258(void)

{
  func_0x000107c61168(&PTR_PTR_112e16fb8);
  return;
}



/* Entry: 1002a2278; end: 1002a2293;  */

void FUN_1002a2278(undefined8 param_1)

{
  FUN_1000285a8(0x112e16f48,&UNK_10d9f4fe8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100464c8c,param_1);
  return;
}



/* Entry: 1002a2294; end: 1002a22b3;  */

void FUN_1002a2294(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 1002a22b4; end: 1002a2357;  */

void FUN_1002a22b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e18958,&UNK_10d9f7a70);
  puVar1 = &UNK_11046c580;
  func_0x000107c613fc(&UNK_11046c580,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10071bffc,puVar1);
  return;
}



/* Entry: 1002a2358; end: 1002a2387;  */

void FUN_1002a2358(undefined8 param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(*param_2 + 0x30) & 0xfffffffffffffffc;
  cVar1 = *(char *)(uVar3 + 0x17);
  if (cVar1 < '\0') {
    if (*(long *)(uVar3 + 8) == 0) goto LAB_1002a2380;
  }
  else if (cVar1 == '\0') {
LAB_1002a2380:
    if (*(int *)(*param_2 + 0x84) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__19to_stringEi_110346938)();
      return;
    }
    puVar2 = &UNK_10f7739d6;
    func_0x00010002b82c(param_1,&UNK_10f7739d6);
    func_0x000107c613d0(puVar2);
    func_0x000107c60c50();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1);
  return;
}



/* Entry: 1002a2388; end: 1002a23a7;  */

void FUN_1002a2388(void)

{
  func_0x000107c61168(&PTR_PTR_112e189d0);
  return;
}



/* Entry: 1002a23a8; end: 1002a23cf;  */

bool FUN_1002a23a8(long *param_1)

{
  if ((*(byte *)(*param_1 + 0x10) & 1) == 0) {
    return false;
  }
  return *(int *)(*(long *)(*param_1 + 0x48) + 0x1c) == 6;
}



/* Entry: 1002a23d0; end: 1002a25db;  */

void FUN_1002a23d0(long *param_1)

{
  undefined4 uVar1;
  undefined8 ***pppuVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  undefined8 **ppuStack_50;
  ulong uStack_48;
  byte bStack_39;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60c94(&ppuStack_50,*(ulong *)(*param_1 + 0x38) & 0xfffffffffffffffc);
  func_0x000107c60c94(auStack_68,*(ulong *)(*param_1 + 0x30) & 0xfffffffffffffffc);
  uVar1 = *(undefined4 *)(*param_1 + 0x84);
  if (-1 < (char)bStack_39) {
    uStack_48 = (ulong)bStack_39;
    ppuStack_50 = &ppuStack_50;
  }
  func_0x000107c610b4(auStack_38,ppuStack_50,uStack_48);
  FUN_1002a2640(auStack_98,auStack_38);
  FUN_1000e1048(auStack_80,auStack_98,0,7);
  func_0x0001002a2720();
  if (-1 < (char)bStack_51) {
    uStack_60 = (ulong)bStack_51;
  }
  if (uStack_60 < 0x3f) {
    func_0x000107c60c94(auStack_98,auStack_68);
  }
  else {
    FUN_1000e1048(auStack_98,auStack_68,0,0x3e);
  }
  plVar4 = (long *)param_1[2];
  func_0x0001002a2728(auStack_b0,uVar1);
  func_0x000107c60c94(auStack_c8,auStack_98);
  func_0x000107c60c94(auStack_e0,auStack_80);
  (**(code **)(*plVar4 + 0x10))(plVar4,auStack_b0,auStack_c8,1,auStack_e0,1);
  func_0x000107c60ca0(auStack_e0);
  func_0x000107c60ca0(auStack_c8);
  func_0x000107c60ca0(auStack_b0);
  func_0x0001002a2720();
  func_0x000107c60ca0(auStack_80);
  func_0x000107c60ca0(auStack_68);
  pppuVar2 = &ppuStack_50;
  func_0x000107c60ca0(pppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    func_0x000107c60ca0(auStack_e0);
    func_0x000107c60ca0(auStack_c8);
    func_0x000107c60ca0(auStack_b0);
    func_0x0001002a2720();
    puVar3 = auStack_80;
    do {
      func_0x000107c60ca0(puVar3);
      func_0x000107c60ca0(auStack_68);
      func_0x000107c60ca0(&ppuStack_50);
      func_0x000107c60bd8(pppuVar2);
      puVar3 = auStack_98;
    } while( true );
  }
  return;
}



/* Entry: 1002a25dc; end: 1002a263f;  */

void FUN_1002a25dc(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  
  FUN_1002a23d0();
  ppuVar1 = &PTR_PTR_113386140;
  if (*(undefined ***)(*param_2 + 0x48) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(*param_2 + 0x48);
  }
  if (*(int *)((long)ppuVar1 + 0x1c) == 6) {
    ppuVar1 = (undefined **)ppuVar1[2];
  }
  else {
    ppuVar1 = &PTR_PTR_1134051b0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1,(ulong)ppuVar1[3] & 0xfffffffffffffffc);
  return;
}



/* Entry: 1002a2640; end: 1002a268f;  */

void FUN_1002a2640(long *param_1,undefined8 param_2)

{
  long *plVar1;
  
  func_0x000107c60c54(param_1,0x24,0);
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  FUN_1002a2690(param_2,plVar1);
  return;
}



/* Entry: 1002a2690; end: 1002a275b;  */

byte * FUN_1002a2690(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  
  for (uVar4 = 0; uVar4 != 0x10; uVar4 = uVar4 + 1) {
    bVar2 = *(byte *)(param_1 + uVar4) >> 4;
    bVar1 = bVar2 | 0x30;
    if (0x9f < *(byte *)(param_1 + uVar4)) {
      bVar1 = bVar2 + 0x57;
    }
    *param_2 = bVar1;
    bVar1 = *(byte *)(param_1 + uVar4) & 0xf;
    bVar2 = *(byte *)(param_1 + uVar4) & 0xf | 0x30;
    if (9 < bVar1) {
      bVar2 = bVar1 + 0x57;
    }
    param_2[1] = bVar2;
    pbVar3 = param_2 + 2;
    if ((uVar4 < 10) && ((1L << (uVar4 & 0x3f) & 0x2a8U) != 0)) {
      param_2[2] = 0x2d;
      pbVar3 = param_2 + 3;
    }
    param_2 = pbVar3;
  }
  return param_2;
}



/* Entry: 1002a275c; end: 1002a27ab;  */

void FUN_1002a275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a27ac; end: 1002a295b;  */

void FUN_1002a27ac(long param_1,long *param_2,undefined8 *param_3,int param_4,undefined8 *param_5,
                  long param_6)

{
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 auStack_c8 [24];
  long alStack_b0 [4];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *(long **)(param_1 + 8);
  (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110cf0190);
  if ((int)plVar2 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    alStack_b0[1] = param_2[1];
    alStack_b0[0] = *param_2;
    alStack_b0[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uStack_90 = param_3[1];
    alStack_b0[3] = *param_3;
    uStack_88 = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    pcVar1 = "true";
    if (param_4 == 0) {
      pcVar1 = "false";
    }
    param_3[2] = 0;
    FUN_10002b838(auStack_80,pcVar1);
    uStack_60 = param_5[1];
    uStack_68 = *param_5;
    uStack_58 = param_5[2];
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    FUN_1000e3098(auStack_c8,alStack_b0,4);
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110cf0190,auStack_c8,param_6 * 100);
    FUN_1000e30f4(auStack_c8);
    lVar4 = 0x48;
    do {
      plVar2 = (long *)((long)alStack_b0 + lVar4);
      func_0x000107c60ca0();
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x18);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  FUN_1000e30f4(auStack_c8);
  puVar3 = &uStack_68;
  lVar4 = -0x60;
  do {
    func_0x000107c60ca0(puVar3);
    puVar3 = puVar3 + -3;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0);
  func_0x000107c60bd8(plVar2);
  FUN_1000285a8(0x112e35d10,&UNK_10da1f440);
  func_0x000107c6157c(plVar2);
  FUN_1000823a8(&UNK_101e9da00,plVar2);
  return;
}



/* Entry: 1002a295c; end: 1002a2977;  */

void FUN_1002a295c(undefined8 param_1)

{
  FUN_1000285a8(0x112e35d10,&UNK_10da1f440);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101e9da00,param_1);
  return;
}



/* Entry: 1002a2978; end: 1002a29c7;  */

void FUN_1002a2978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a29c8; end: 1002a29e7;  */

void FUN_1002a29c8(void)

{
  func_0x000107c61168(&PTR_PTR_112e35d88);
  return;
}



/* Entry: 1002a29e8; end: 1002a2a7f;  */

void FUN_1002a29e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e36108,&UNK_10da1fbf0);
  puVar1 = &UNK_110493058;
  func_0x000107c613fc(&UNK_110493058,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101e9f080,puVar1);
  return;
}



/* Entry: 1002a2a80; end: 1002a2ad3;  */

void FUN_1002a2a80(void)

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



/* Entry: 1002a2ad4; end: 1002a2aef;  */

void FUN_1002a2ad4(undefined8 param_1)

{
  FUN_1000285a8(0x112e36110,&UNK_10da1fbf8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101e9f34c,param_1);
  return;
}



/* Entry: 1002a2af0; end: 1002a2b3f;  */

void FUN_1002a2af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a2b40; end: 1002a2b5b;  */

void FUN_1002a2b40(undefined8 param_1)

{
  FUN_1000285a8(0x112e1d7f0,&UNK_10d9fee88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004f517c,param_1);
  return;
}



/* Entry: 1002a2b5c; end: 1002a2bab;  */

void FUN_1002a2b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a2bac; end: 1002a2bcb;  */

void FUN_1002a2bac(void)

{
  func_0x000107c61168(&PTR_PTR_1129153b0);
  return;
}



/* Entry: 1002a2bcc; end: 1002a2be7;  */

void FUN_1002a2bcc(undefined8 param_1)

{
  FUN_1000285a8(0x112e37c30,&UNK_10da22018);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101eb2518,param_1);
  return;
}



/* Entry: 1002a2be8; end: 1002a2c37;  */

void FUN_1002a2be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a2c38; end: 1002a2ccf;  */

void FUN_1002a2c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3ed58,&UNK_10da2c4b0);
  puVar1 = &UNK_11049dcc8;
  func_0x000107c613fc(&UNK_11049dcc8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101f0a6c4,puVar1);
  return;
}



/* Entry: 1002a2cd0; end: 1002a2d23;  */

void FUN_1002a2cd0(void)

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



/* Entry: 1002a2d24; end: 1002a2d3f;  */

void FUN_1002a2d24(undefined8 param_1)

{
  FUN_1000285a8(0x112e3ed60,&UNK_10da2c4b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101f0a990,param_1);
  return;
}



/* Entry: 1002a2d40; end: 1002a2d8f;  */

void FUN_1002a2d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a2d90; end: 1002a2daf;  */

void FUN_1002a2d90(void)

{
  func_0x000107c61168(&PTR_PTR_112962590);
  return;
}



/* Entry: 1002a2db0; end: 1002a2e6b;  */

void FUN_1002a2db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e18a50,&UNK_10d9f7bd0);
  puVar1 = &UNK_11046c648;
  func_0x000107c613fc(&UNK_11046c648,0x38,7);
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
  FUN_1000823a8(FUN_100465b00,puVar1);
  return;
}



/* Entry: 1002a2e6c; end: 1002a2e8b;  */

void FUN_1002a2e6c(void)

{
  func_0x000107c61168(&PTR_PTR_112e18ac8);
  return;
}



/* Entry: 1002a2e8c; end: 1002a2ea7;  */

void FUN_1002a2e8c(undefined8 param_1)

{
  FUN_1000285a8(0x112e18a58,&UNK_10d9f7bd8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100465aa4,param_1);
  return;
}



/* Entry: 1002a2ea8; end: 1002a2ef7;  */

void FUN_1002a2ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a2ef8; end: 1002a2fbf;  */

void FUN_1002a2ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3a330,&UNK_10da24fe0);
  puVar1 = &UNK_110498868;
  func_0x000107c613fc(&UNK_110498868,0x40,7);
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
  FUN_1000823a8(&UNK_101ed4298,puVar1);
  return;
}



/* Entry: 1002a2fc0; end: 1002a302b;  */

void FUN_1002a2fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a302c; end: 1002a3047;  */

void FUN_1002a302c(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a338,&UNK_10da24fe8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed46d0,param_1);
  return;
}



/* Entry: 1002a3048; end: 1002a3097;  */

void FUN_1002a3048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a3098; end: 1002a313b;  */

void FUN_1002a3098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0e138,&UNK_10d9e8b70);
  puVar1 = &UNK_110460b20;
  func_0x000107c613fc(&UNK_110460b20,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1007e559c,puVar1);
  return;
}



/* Entry: 1002a313c; end: 1002a315b;  */

void FUN_1002a313c(void)

{
  func_0x000107c61168(&PTR_PTR_112e0e1c0);
  return;
}



/* Entry: 1002a315c; end: 1002a31f3;  */

void FUN_1002a315c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0f128,&UNK_10d9ea1c0);
  puVar1 = &UNK_110461778;
  func_0x000107c613fc(&UNK_110461778,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_10048efdc,puVar1);
  return;
}



/* Entry: 1002a31f4; end: 1002a3213;  */

void FUN_1002a31f4(void)

{
  func_0x000107c61168(&PTR_PTR_112e0f1a0);
  return;
}



/* Entry: 1002a3214; end: 1002a322f;  */

void FUN_1002a3214(undefined8 param_1)

{
  FUN_1000285a8(0x112e0f130,&UNK_10d9ea1c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10048ef80,param_1);
  return;
}



/* Entry: 1002a3230; end: 1002a327f;  */

void FUN_1002a3230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a3280; end: 1002a329f;  */

void FUN_1002a3280(void)

{
  func_0x000107c61168(&PTR_PTR_11290b178);
  return;
}



/* Entry: 1002a32a0; end: 1002a32bb;  */

void FUN_1002a32a0(undefined8 param_1)

{
  FUN_1000285a8(0x112e1bbb0,&UNK_10d9fd030);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100752bf8,param_1);
  return;
}



/* Entry: 1002a32bc; end: 1002a330b;  */

void FUN_1002a32bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a330c; end: 1002a332b;  */

void FUN_1002a330c(void)

{
  func_0x000107c61168(&PTR_PTR_112e1bc28);
  return;
}



/* Entry: 1002a332c; end: 1002a342f;  */

void FUN_1002a332c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e146b0,&UNK_10d9f0fe0);
  puVar1 = &UNK_110468340;
  func_0x000107c613fc(&UNK_110468340,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_1007935a0,puVar1);
  return;
}



/* Entry: 1002a3430; end: 1002a344f;  */

void FUN_1002a3430(void)

{
  func_0x000107c61168(&PTR_PTR_112e14728);
  return;
}



/* Entry: 1002a3450; end: 1002a346b;  */

void FUN_1002a3450(undefined8 param_1)

{
  FUN_1000285a8(0x112e146b8,&UNK_10d9f0fe8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100792fc8,param_1);
  return;
}



/* Entry: 1002a346c; end: 1002a34bb;  */

void FUN_1002a346c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a34bc; end: 1002a355f;  */

void FUN_1002a34bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3a438,&UNK_10da25190);
  puVar1 = &UNK_110498930;
  func_0x000107c613fc(&UNK_110498930,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101ed4a64,puVar1);
  return;
}



/* Entry: 1002a3560; end: 1002a35bb;  */

void FUN_1002a3560(void)

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



/* Entry: 1002a35bc; end: 1002a35d7;  */

void FUN_1002a35bc(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a440,&UNK_10da25198);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed4de0,param_1);
  return;
}



/* Entry: 1002a35d8; end: 1002a36a7;  */

void FUN_1002a35d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a36a8; end: 1002a36c7;  */

void FUN_1002a36a8(void)

{
  func_0x000107c61168(&PTR_PTR_112e17188);
  return;
}



/* Entry: 1002a36c8; end: 1002a36e3;  */

void FUN_1002a36c8(undefined8 param_1)

{
  FUN_1000285a8(0x112e17118,&UNK_10d9f5318);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100462fec,param_1);
  return;
}



/* Entry: 1002a36e4; end: 1002a3733;  */

void FUN_1002a36e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a3734; end: 1002a3753;  */

void FUN_1002a3734(void)

{
  func_0x000107c61168(&PTR_PTR_11292e020);
  return;
}



/* Entry: 1002a3754; end: 1002a376f;  */

void FUN_1002a3754(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a160,&UNK_10da24cd8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed373c,param_1);
  return;
}



/* Entry: 1002a3770; end: 1002a378f;  */

void FUN_1002a3770(void)

{
  func_0x000107c61168(&PTR_PTR_11291f958);
  return;
}



/* Entry: 1002a3790; end: 1002a3827;  */

void FUN_1002a3790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e18b50,&UNK_10d9f7d70);
  puVar1 = &UNK_11046c710;
  func_0x000107c613fc(&UNK_11046c710,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101cda2a4,puVar1);
  return;
}



/* Entry: 1002a3828; end: 1002a387b;  */

void FUN_1002a3828(void)

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



/* Entry: 1002a387c; end: 1002a3897;  */

void FUN_1002a387c(undefined8 param_1)

{
  FUN_1000285a8(0x112e18b58,&UNK_10d9f7d78);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101cda570,param_1);
  return;
}



/* Entry: 1002a3898; end: 1002a38e7;  */

void FUN_1002a3898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a38e8; end: 1002a3a1b;  */

void FUN_1002a38e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e20220,&UNK_10da02ef0);
  puVar1 = &UNK_1104743a0;
  func_0x000107c613fc(&UNK_1104743a0,0x70,7);
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
  FUN_1000823a8(FUN_1007230f0,puVar1);
  return;
}



/* Entry: 1002a3a1c; end: 1002a3a3b;  */

void FUN_1002a3a1c(void)

{
  func_0x000107c61168(&PTR_PTR_112e20298);
  return;
}



/* Entry: 1002a3a3c; end: 1002a3a57;  */

void FUN_1002a3a3c(undefined8 param_1)

{
  FUN_1000285a8(0x112e20228,&UNK_10da02ef8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100722954,param_1);
  return;
}



/* Entry: 1002a3a58; end: 1002a3aa7;  */

void FUN_1002a3a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a3aa8; end: 1002a3b4b;  */

void FUN_1002a3aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e27928,&UNK_10da0fe10);
  puVar1 = &UNK_110479db8;
  func_0x000107c613fc(&UNK_110479db8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10077ed48,puVar1);
  return;
}



/* Entry: 1002a3b4c; end: 1002a3b6b;  */

void FUN_1002a3b4c(void)

{
  func_0x000107c61168(&PTR_PTR_112e279a0);
  return;
}



/* Entry: 1002a3b6c; end: 1002a3b87;  */

void FUN_1002a3b6c(undefined8 param_1)

{
  FUN_1000285a8(0x112e27930,&UNK_10da0fe18);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10077ecec,param_1);
  return;
}



/* Entry: 1002a3b88; end: 1002a3bd7;  */

void FUN_1002a3b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a3bd8; end: 1002a3bf7;  */

void FUN_1002a3bd8(void)

{
  func_0x000107c61168(&PTR_PTR_112940d78);
  return;
}



/* Entry: 1002a3bf8; end: 1002a3c8f;  */

void FUN_1002a3bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3a880,&UNK_10da258e0);
  puVar1 = &UNK_110498c50;
  func_0x000107c613fc(&UNK_110498c50,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101ed7278,puVar1);
  return;
}



/* Entry: 1002a3c90; end: 1002a3ce3;  */

void FUN_1002a3c90(void)

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



/* Entry: 1002a3ce4; end: 1002a3cff;  */

void FUN_1002a3ce4(undefined8 param_1)

{
  FUN_1000285a8(0x112e3a888,&UNK_10da258e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed7548,param_1);
  return;
}



/* Entry: 1002a3d00; end: 1002a3d4f;  */

void FUN_1002a3d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a3d50; end: 1002a3e0b;  */

void FUN_1002a3d50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e101d0,&UNK_10d9eb4b0);
  puVar1 = &UNK_1104635c8;
  func_0x000107c613fc(&UNK_1104635c8,0x38,7);
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
  FUN_1000823a8(FUN_100453644,puVar1);
  return;
}



/* Entry: 1002a3e0c; end: 1002a3e2b;  */

void FUN_1002a3e0c(void)

{
  func_0x000107c61168(&PTR_PTR_112e10248);
  return;
}



/* Entry: 1002a3e2c; end: 1002a3e47;  */

void FUN_1002a3e2c(undefined8 param_1)

{
  FUN_1000285a8(0x112e101d8,&UNK_10d9eb4b8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004535e8,param_1);
  return;
}



/* Entry: 1002a3e48; end: 1002a3e97;  */

void FUN_1002a3e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a3e98; end: 1002a3f53;  */

void FUN_1002a3e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e39f70,&UNK_10da24940);
  puVar1 = &UNK_1104984c8;
  func_0x000107c613fc(&UNK_1104984c8,0x38,7);
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
  FUN_1000823a8(&UNK_101ed2e84,puVar1);
  return;
}



/* Entry: 1002a3f54; end: 1002a3fb7;  */

void FUN_1002a3f54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002a3fb8; end: 1002a3fd3;  */

void FUN_1002a3fb8(undefined8 param_1)

{
  FUN_1000285a8(0x112e39f78,&UNK_10da24948);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed3218,param_1);
  return;
}



/* Entry: 1002a3fd4; end: 1002a4023;  */

void FUN_1002a3fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a4024; end: 1002a40c7;  */

void FUN_1002a4024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3cc68,&UNK_10da28cf0);
  puVar1 = &UNK_11049b630;
  func_0x000107c613fc(&UNK_11049b630,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1004ef4f8,puVar1);
  return;
}



/* Entry: 1002a40c8; end: 1002a40e7;  */

void FUN_1002a40c8(void)

{
  func_0x000107c61168(&PTR_PTR_112e3cce0);
  return;
}



/* Entry: 1002a40e8; end: 1002a4103;  */

void FUN_1002a40e8(undefined8 param_1)

{
  FUN_1000285a8(0x112e3cc70,&UNK_10da28cf8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004ef49c,param_1);
  return;
}



/* Entry: 1002a4104; end: 1002a4153;  */

void FUN_1002a4104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002a4154; end: 1002a41f7;  */

void FUN_1002a4154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3cd60,&UNK_10da28ed0);
  puVar1 = &UNK_11049b6f8;
  func_0x000107c613fc(&UNK_11049b6f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1004efab4,puVar1);
  return;
}



/* Entry: 1002a41f8; end: 1002a4217;  */

void FUN_1002a41f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e3cdd8);
  return;
}



/* Entry: 1002a4218; end: 1002a4233;  */

void FUN_1002a4218(undefined8 param_1)

{
  FUN_1000285a8(0x112e3cd68,&UNK_10da28ed8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004efa58,param_1);
  return;
}



/* Entry: 1002a4234; end: 1002a4283;  */

void FUN_1002a4234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}


