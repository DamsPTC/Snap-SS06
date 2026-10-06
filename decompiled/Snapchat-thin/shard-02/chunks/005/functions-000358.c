/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e701d0; end: 101e701d7;  */

undefined8 * FUN_101e701d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 101e701d8; end: 101e701eb;  */

void FUN_101e701d8(void)

{
  FUN_101e6f18c();
  return;
}



/* Entry: 101e701ec; end: 101e7026f;  */

long FUN_101e701ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined1 *)(unaff_x20 + 0x29) = param_5;
  *(undefined1 *)(unaff_x20 + 0x2a) = param_6;
  FUN_101e70270(param_7,unaff_x20 + 0x30);
  return unaff_x20;
}



/* Entry: 101e70270; end: 101e70287;  */

undefined8 * FUN_101e70270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 101e70288; end: 101e702d3;  */

void FUN_101e70288(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010006c090(uVar1,uVar2);
  func_0x0001000834e4(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e702d4; end: 101e703f7;  */

void FUN_101e702d4(long *param_1,double param_2,double param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_4 + 0x10) + 1;
  plVar1 = (long *)(param_4 + 0x48);
  do {
    plVar4 = plVar1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      lVar9 = 0;
      lVar3 = 0;
      lVar5 = 0;
      lVar6 = 0;
      lVar7 = 0;
      lVar8 = 0;
      goto LAB_101e703c4;
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e703e8);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e703ec);
      (*pcVar2)();
    }
    if (0x7fefffffffffffff < (ulong)ABS(param_2) || 0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e703f0);
      (*pcVar2)();
    }
    if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e703f4);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e703f8);
      (*pcVar2)();
    }
    plVar1 = plVar4 + 6;
    lVar5 = plVar4[-3];
  } while (((((long)param_2 < lVar5) || (lVar6 = plVar4[-2], lVar6 < (long)param_2)) ||
           (lVar7 = plVar4[-1], (long)param_3 < lVar7)) || (lVar8 = *plVar4, lVar8 < (long)param_3))
  ;
  lVar9 = plVar4[-5];
  lVar3 = plVar4[-4];
  func_0x000107c61434();
LAB_101e703c4:
  *param_1 = lVar9;
  param_1[1] = lVar3;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  param_1[4] = lVar7;
  param_1[5] = lVar8;
  return;
}



/* Entry: 101e703f8; end: 101e70533;  */

void FUN_101e703f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(lVar7 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000101e7d8fc(0,lVar6,0);
    puVar8 = (undefined8 *)(lVar7 + 0x38);
    puVar5 = puStack_a0;
    do {
      uVar10 = puVar8[-2];
      uVar9 = puVar8[-3];
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      puStack_a0 = puVar5;
      func_0x000107c61434(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        func_0x000101e7d8fc(1 < uVar4,uVar2 + 1,1);
        puVar5 = puStack_a0;
      }
      puVar8 = puVar8 + 6;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x30 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x30 + 0x28) = uVar3;
      *(long *)(puVar5 + uVar2 * 0x30 + 0x38) = (long)(int)((ulong)uVar9 >> 0x20);
      *(long *)(puVar5 + uVar2 * 0x30 + 0x30) = (long)(int)uVar9;
      *(long *)(puVar5 + uVar2 * 0x30 + 0x48) = (long)(int)((ulong)uVar10 >> 0x20);
      *(long *)(puVar5 + uVar2 * 0x30 + 0x40) = (long)(int)uVar10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_101e702d4(&puStack_a0,param_2,param_3,puVar5);
  lVar6 = lStack_98;
  func_0x000107c6142c(puVar5);
  if (lVar6 != 0) {
    func_0x000107c6142c(0);
  }
  param_1[1] = lStack_98;
  *param_1 = puStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  return;
}



/* Entry: 101e70534; end: 101e70553;  */

void FUN_101e70534(void)

{
  func_0x000107c61168(&PTR_PTR_112e34148);
  return;
}



/* Entry: 101e70554; end: 101e705ff;  */

long FUN_101e70554(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(long *)(unaff_x20 + 0x18) = lVar2;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
    *(undefined8 *)(unaff_x20 + 0x28) = param_5;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e70600);
  (*pcVar1)();
}



/* Entry: 101e70600; end: 101e7062b;  */

/* WARNING: Possible PIC construction at 0x000101e7060c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e7061c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e70610) */
/* WARNING: Removing unreachable block (ram,0x000101e70620) */

void FUN_101e70600(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e7062c; end: 101e706ab;  */

void FUN_101e7062c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e706ac; end: 101e7088b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101e706ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(0xe000000000000000);
  if ((long)param_1 < 2) {
    if (param_1 == (undefined8 *)0x0) {
      uVar4 = 0xe800000000000000;
      uVar3 = 0x72656469766f7250;
      goto LAB_101e707f0;
    }
    if (param_1 == (undefined8 *)0x1) {
      uVar4 = 0xea0000000000676e;
      uVar3 = 0x69737365636f7250;
      goto LAB_101e707f0;
    }
  }
  else {
    if (param_1 == (undefined8 *)0x2) {
      uVar4 = 0xe600000000000000;
      uVar3 = 0x74757074754f;
      goto LAB_101e707f0;
    }
    if (param_1 == (undefined8 *)0x3) {
      uVar4 = 0xe500000000000000;
      uVar3 = 0x6574617453;
      goto LAB_101e707f0;
    }
    if (param_1 == (undefined8 *)0x4) {
      uVar4 = 0xe800000000000000;
      uVar3 = 0x657461746f6e6e41;
      goto LAB_101e707f0;
    }
  }
  uVar4 = 0xed000064657a6972;
  uVar3 = 0x6f67657461636e55;
LAB_101e707f0:
  func_0x000107c5fb78(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112e342b0),
                      ((undefined8 *)(unaff_x20 + _DAT_112e342b0))[1]);
  func_0x000107c5fb78(0x23,0xe100000000000000);
  func_0x000107c5fb78(param_2,param_3);
  uVar3 = 0x6579616c706f656e;
  func_0x000100029b28(0x6579616c706f656e,0xea00000000003a72);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(0xea00000000003a72);
  return uVar3;
}



/* Entry: 101e7088c; end: 101e708f7; -[_TtC28SCPlaybackPlayerServicesImpl19PlayerPreloadTracer beginAsyncTrace:name:] */

undefined8
FUN_101e7088c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101e706ac(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 101e708f8; end: 101e7094f; -[_TtC28SCPlaybackPlayerServicesImpl19PlayerPreloadTracer endAsyncTrace:] */

void FUN_101e708f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101e70950; end: 101e70a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e70950(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112e342b0),
                      ((undefined8 *)(unaff_x20 + _DAT_112e342b0))[1]);
  func_0x000107c5fb78(0x23,0xe100000000000000);
  func_0x000107c5fb78(param_1,param_2);
  func_0x0001048d85b4(0xd000000000000013,0x800000010f015bd0);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(0x800000010f015bd0);
  return;
}



/* Entry: 101e70a40; end: 101e70a9b; -[_TtC28SCPlaybackPlayerServicesImpl19PlayerPreloadTracer asyncAnnotate:] */

void FUN_101e70a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101e70950(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101e70a9c; end: 101e70c73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e70a9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000107c602fc(0x12);
  func_0x000107c6142c(0xe000000000000000);
  if ((long)param_1 < 2) {
    if (param_1 == (undefined8 *)0x0) {
      uVar4 = 0xe800000000000000;
      uVar3 = 0x72656469766f7250;
      goto LAB_101e70be0;
    }
    if (param_1 == (undefined8 *)0x1) {
      uVar4 = 0xea0000000000676e;
      uVar3 = 0x69737365636f7250;
      goto LAB_101e70be0;
    }
  }
  else {
    if (param_1 == (undefined8 *)0x2) {
      uVar4 = 0xe600000000000000;
      uVar3 = 0x74757074754f;
      goto LAB_101e70be0;
    }
    if (param_1 == (undefined8 *)0x3) {
      uVar4 = 0xe500000000000000;
      uVar3 = 0x6574617453;
      goto LAB_101e70be0;
    }
    if (param_1 == (undefined8 *)0x4) {
      uVar4 = 0xe800000000000000;
      uVar3 = 0x657461746f6e6e41;
      goto LAB_101e70be0;
    }
  }
  uVar4 = 0xed000064657a6972;
  uVar3 = 0x6f67657461636e55;
LAB_101e70be0:
  func_0x000107c5fb78(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112e342b0),
                      ((undefined8 *)(unaff_x20 + _DAT_112e342b0))[1]);
  func_0x000107c5fb78(0x23,0xe100000000000000);
  func_0x000107c5fb78(param_2,param_3);
  func_0x0001048d85b4(0x6579616c706f656e,0xea00000000003a72);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(0xea00000000003a72);
  return;
}



/* Entry: 101e70c74; end: 101e70cd3; -[_TtC28SCPlaybackPlayerServicesImpl19PlayerPreloadTracer asyncInstant:name:] */

void FUN_101e70c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101e70a9c(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101e70cd4; end: 101e70d33; -[_TtC28SCPlaybackPlayerServicesImpl19PlayerPreloadTracer init] */

void FUN_101e70cd4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.PlayerPreloadTracer",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e70d00);
  (*pcVar1)();
}



/* Entry: 101e70d34; end: 101e70d47; -[_TtC28SCPlaybackPlayerServicesImpl19PlayerPreloadTracer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e70d34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e342b0 + 8))
  ;
  return;
}



/* Entry: 101e70d48; end: 101e70d67;  */

void FUN_101e70d48(void)

{
  func_0x000107c61168(&PTR_PTR_112806908);
  return;
}



/* Entry: 101e70d68; end: 101e70dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_101e70d68(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e34338;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112e34338);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueuePerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 101e70dd8; end: 101e70f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e70dd8(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112e342f0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112e342f8;
  uVar3 = 0x112e343b0;
  func_0x0001000285a8(0x112e343b0,&UNK_10da1d9a0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e34308) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112e34310,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e34318) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112e34330);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34338) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34340) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34358) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34360) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34368) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34300) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112e34348) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112e34350) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112e342e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34328) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34320) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e342e0) = 0;
  func_0x000101e7424c();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101e70f4c; end: 101e70f7f;  */

void FUN_101e70f4c(void)

{
  FUN_101e713a0();
  func_0x000101e7424c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e70f80; end: 101e70fc3; -[_TtC28SCPlaybackPlayerServicesImpl17SCAVPlayerMonitor dealloc] */

void FUN_101e70f80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101e713a0();
  func_0x000101e7424c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101e70fc4; end: 101e7108b; -[_TtC28SCPlaybackPlayerServicesImpl17SCAVPlayerMonitor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101e71000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e71030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e71060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e71034) */
/* WARNING: Removing unreachable block (ram,0x000101e71004) */
/* WARNING: Removing unreachable block (ram,0x000101e71064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e70fc4(long param_1)

{
  func_0x000100cd4ac8(param_1 + _DAT_112e342f0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e342f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e34300));
  return;
}



/* Entry: 101e7108c; end: 101e71263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7108c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if ((*(byte *)(unaff_x20 + _DAT_112e342e8) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e342e8) = 1;
    puVar2 = PTR_PTR_1126b44c8;
    func_0x000107c610f8();
    func_0x000107c47ba0();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e34318);
    *(undefined **)(unaff_x20 + _DAT_112e34318) = puVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61604(unaff_x20 + _DAT_112e34310,param_1);
    func_0x000107c60a44(&puStack_80,0x3fa10cb295e9e1b1,10000);
    uVar3 = 0;
    FUN_101e74a84(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar2 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_60 = FUN_101e74ac4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100f72a5c;
    puStack_68 = &UNK_110490308;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar2;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_58);
    uVar5 = param_1;
    func_0x000107c3d7ec(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c60234(&puStack_80,uVar5);
    func_0x000107c615e8(uVar5);
    lVar1 = _DAT_112e34330;
    func_0x000107c61428(unaff_x20 + _DAT_112e34330,auStack_98,0x21,0);
    func_0x000100f72e88(&puStack_80,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_98);
    func_0x000101e7156c(param_1);
  }
  return;
}



/* Entry: 101e71264; end: 101e7139f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e71264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 == 0) {
    return;
  }
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x000107c60a3c(&uStack_70);
  lVar1 = param_5 + _DAT_112e34310;
  uVar6 = param_1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c40f5c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c4b7a8(&uStack_70,lVar2);
      uVar5 = uStack_60;
      uVar7 = uStack_68;
      uVar4 = uStack_70;
      func_0x000107c61170(lVar2);
      goto LAB_101e71338;
    }
  }
  uVar4 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar5 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
LAB_101e71338:
  uStack_70 = uVar4;
  uStack_68 = uVar7;
  uStack_60 = uVar5;
  func_0x000107c60a3c(&uStack_70);
  puVar3 = PTR_PTR_1126dd630;
  func_0x000107c61168(PTR_PTR_1126dd630);
  func_0x000107c4dcac(param_1,uVar6);
  func_0x000107c61180();
  FUN_101e73fa0();
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 101e713a0; end: 101e717ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e713a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = _DAT_112e34330;
  lVar1 = _DAT_112e342e8;
  if (*(char *)(unaff_x20 + _DAT_112e342e8) == '\x01') {
    func_0x000107c61428(unaff_x20 + _DAT_112e34330,auStack_98,0,0);
    func_0x000100672b50(unaff_x20 + lVar2,auStack_80);
    if (lStack_68 == 0) {
      func_0x00010006e7f4(auStack_80);
    }
    else {
      func_0x000100102924(auStack_80,&uStack_60);
      lVar3 = unaff_x20 + _DAT_112e34310;
      func_0x000107c61618();
      if (lVar3 != 0) {
        puVar4 = &uStack_60;
        func_0x0001006732c8(puVar4,uStack_48);
        func_0x000107c605b0();
        func_0x000107c50034(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(puVar4);
      }
      func_0x000100183ab8(&uStack_60);
    }
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    func_0x000107c61428(unaff_x20 + lVar2,auStack_80,0x21,0);
    func_0x000100f72e88(&uStack_60,unaff_x20 + lVar2);
    func_0x000107c614a8(auStack_80);
    lVar2 = _DAT_112e34358;
    func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112e34358));
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112e34360;
    func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112e34360));
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112e34368;
    func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112e34368));
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    lVar2 = _DAT_112e34318;
    func_0x000107c5d324(*(undefined8 *)(unaff_x20 + _DAT_112e34318));
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    func_0x000107c4ffa0(*(undefined8 *)(unaff_x20 + _DAT_112e34300));
    func_0x000107c61604(unaff_x20 + _DAT_112e34310,0);
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112e34328) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112e342e0) = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112e34320) = 0;
  }
  return;
}



/* Entry: 101e717ac; end: 101e71863;  */

void FUN_101e717ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_2,auStack_50);
  uVar1 = 0x112e343a8;
  func_0x0001000285a8(0x112e343a8,&UNK_10da1d998);
  puVar2 = &uStack_58;
  func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,0xe);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_50,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      func_0x000101e73844(uStack_58,param_3);
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170(uStack_58);
  }
  return;
}



/* Entry: 101e71864; end: 101e7194b;  */

void FUN_101e71864(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_80 [3];
  undefined8 uStack_68;
  long alStack_60 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar3 = 0;
    alStack_60[1] = 0;
    alStack_60[2] = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c614f0();
  }
  uVar4 = param_3;
  alStack_60[0] = param_2;
  alStack_60[3] = lVar3;
  func_0x000107c614f0();
  uVar5 = 0;
  auStack_80[0] = param_3;
  uStack_68 = uVar4;
  func_0x000101e6bfa8(0);
  uVar4 = uVar5;
  func_0x000101e74534();
  func_0x000107c5f9e8(param_4,uVar5,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(alStack_60,auStack_80,param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_4);
  func_0x00010006e7f4(alStack_60);
  func_0x000100183ab8(auStack_80);
  return;
}



/* Entry: 101e7194c; end: 101e71a43;  */

void FUN_101e7194c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long alStack_68 [3];
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_2,auStack_50);
  uVar1 = 0;
  FUN_101e74a84(0,0x112d7e3f8,&PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
  plVar2 = alStack_68;
  func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)plVar2 & 1) != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_50,0,0);
    lVar3 = param_4 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      FUN_101e727e0(alStack_68[0]);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61428(param_4 + 0x10,alStack_68,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      FUN_101e7337c(alStack_68[0],param_3);
      func_0x000107c61170(alStack_68[0]);
      alStack_68[0] = param_4;
    }
    func_0x000107c61170(alStack_68[0]);
  }
  return;
}



/* Entry: 101e71a44; end: 101e71b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e71a44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar1 = _DAT_112e34358;
  ppuVar4 = &puStack_70;
  func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112e34358));
  lVar2 = param_1;
  func_0x000107c517fc();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    puVar3 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    pcStack_50 = FUN_101e74a6c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100b5fdac;
    puStack_58 = &UNK_110490290;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar6 = lVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar6;
  func_0x000107c61170(uVar5);
  func_0x000107c517f8(param_1);
  FUN_101e71bb8();
  return;
}



/* Entry: 101e71b58; end: 101e71bb7;  */

void FUN_101e71b58(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c49820(param_1);
    FUN_101e71bb8();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101e71bb8; end: 101e71d7b;  */

/* WARNING: Possible PIC construction at 0x000101e71c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e71ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e71ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e71d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e71cec) */
/* WARNING: Removing unreachable block (ram,0x000101e71ca8) */
/* WARNING: Removing unreachable block (ram,0x000101e71c28) */
/* WARNING: Removing unreachable block (ram,0x000101e71d2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e71bb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  if (param_1 == 2) {
    lVar2 = unaff_x20 + _DAT_112e34310;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x000107c517b0();
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126dd630;
      func_0x000107c61168(PTR_PTR_1126dd630);
      func_0x000107c5ed2c(puVar3);
      func_0x000107c4dcb4(puVar4,param_2,puVar3);
      func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else if (param_1 == 1) {
    lVar2 = unaff_x20 + _DAT_112e34310;
    func_0x000107c61618();
    if (lVar2 != 0) {
      if (*(char *)(unaff_x20 + _DAT_112e34348) == '\x01') {
        lVar1 = lVar2;
        func_0x000107c5180c();
        func_0x000107c61180();
        if (lVar1 != 0) goto code_r0x000107c61170;
      }
      FUN_101e71d7c(lVar2);
      goto code_r0x000107c61170;
    }
  }
  return;
}



/* Entry: 101e71d7c; end: 101e71f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e71d7c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = _DAT_112e34318;
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e34318);
  if (lVar2 != 0) {
    func_0x000107c61174();
    uVar3 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f015cd0);
    puVar4 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x101e74590;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101e71864;
    puStack_78 = &UNK_110490218;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4da28(lVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    lVar6 = *(long *)(unaff_x20 + lVar6);
    if (lVar6 != 0) {
      func_0x000107c61174();
      uVar3 = 0x65746172;
      func_0x000107c5fadc(0x65746172,0xe400000000000000);
      puVar4 = &UNK_11048ffa8;
      func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uStack_70 = 0x101e74598;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_101e71864;
      puStack_78 = &UNK_110490240;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c4da28(lVar6);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 101e71f44; end: 101e720c3;  */

void FUN_101e71f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_2,auStack_50);
  uVar1 = 0;
  FUN_101e74a84(0,0x112e343a0,&PTR__OBJC_CLASS___AVPlayer_1126bf5e8);
  puVar2 = &uStack_58;
  func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)puVar2 & 1) != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_50,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      FUN_101e745a0(param_3);
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170(uStack_58);
  }
  return;
}



/* Entry: 101e720c4; end: 101e72313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e720c4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar8 = _DAT_112e34360;
  ppuVar6 = &puStack_90;
  ppuVar9 = &puStack_90;
  func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112e34360));
  puVar2 = &UNK_110490188;
  func_0x000107c613fc(&UNK_110490188,0x20,7);
  lVar3 = param_1;
  func_0x000107c51808();
  *(long *)(puVar2 + 0x10) = lVar3;
  puVar2[0x18] = 0;
  lVar3 = param_1;
  func_0x000107c5180c();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 == 0) {
    lVar10 = 0;
  }
  else {
    puVar4 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1104901d8;
    func_0x000107c613fc(&UNK_1104901d8,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    uStack_70 = 0x101e74588;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100b5fdac;
    puStack_78 = &UNK_1104901f0;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar4);
    lVar10 = lVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + lVar8);
  *(long *)(unaff_x20 + lVar8) = lVar10;
  func_0x000107c61170(uVar7);
  lVar8 = param_1;
  func_0x000107c51808(param_1);
  FUN_101e72420(0,1,lVar8);
  lVar8 = _DAT_112e34368;
  func_0x000107c4218c(*(undefined8 *)(unaff_x20 + _DAT_112e34368));
  lVar3 = param_1;
  func_0x000107c517c0();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar10 = 0;
  }
  else {
    puVar4 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_70 = 0x101e74580;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100b5fdac;
    puStack_78 = &UNK_1104901a0;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar10 = lVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar3);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + lVar8);
  *(long *)(unaff_x20 + lVar8) = lVar10;
  func_0x000107c61170(uVar7);
  func_0x000107c517bc(param_1);
  FUN_101e72610();
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101e72314; end: 101e723bf;  */

void FUN_101e72314(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c49820();
    func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
    FUN_101e72420(*(undefined8 *)(param_3 + 0x10),*(undefined1 *)(param_3 + 0x18),param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61428(param_3 + 0x10,auStack_78,1,0);
    *(undefined8 *)(param_3 + 0x10) = param_1;
    *(undefined1 *)(param_3 + 0x18) = 0;
  }
  return;
}



/* Entry: 101e723c0; end: 101e7241f;  */

void FUN_101e723c0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c436dc(param_1);
    FUN_101e72610();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101e72420; end: 101e7260f;  */

/* WARNING: Possible PIC construction at 0x000101e724c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e724c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e72420(long param_1,char param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if ((param_3 == 2) != (bool)*(char *)(unaff_x20 + _DAT_112e342e0)) {
    *(bool *)(unaff_x20 + _DAT_112e342e0) = param_3 == 2;
    puVar2 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dc40();
    func_0x000107c61180();
    puStack_70 = (undefined *)0x6e6576456d6f7266;
    uStack_68 = 0xe900000000000074;
    func_0x000107c417f0();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  lVar1 = param_1;
  FUN_101e742f0();
  if (((*(char *)(unaff_x20 + _DAT_112e34340) == '\x01') && (param_3 == 0)) &&
     ((*(char *)(unaff_x20 + _DAT_112e342e8) != '\0' && param_2 != '\x01') && param_1 == 2)) {
    FUN_101e70d68();
    puVar2 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    pcStack_50 = FUN_101e74578;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110490150;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4e524(lVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 101e72610; end: 101e727df;  */

/* WARNING: Possible PIC construction at 0x000101e72680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e72784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e72704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e72740: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e72788) */
/* WARNING: Removing unreachable block (ram,0x000101e72684) */
/* WARNING: Removing unreachable block (ram,0x000101e726a4) */
/* WARNING: Removing unreachable block (ram,0x000101e72708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e72610(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  if (0.0 < (float)param_1) {
    puVar1 = (undefined *)(unaff_x20 + _DAT_112e34310);
    func_0x000107c61618();
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c51808();
      goto code_r0x000107c61170;
    }
  }
  if ((*(byte *)(unaff_x20 + _DAT_112e342e0) & 1) == 0) {
    puVar1 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dcb8(param_1);
    func_0x000107c61180();
    func_0x000107c417f0();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    *(byte *)(unaff_x20 + _DAT_112e342e0) = 0;
    puVar1 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dc40();
    func_0x000107c61180();
    func_0x000107c417f0();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101e727e0; end: 101e72bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e727e0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar9 = _DAT_112e34318;
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e34318);
  if (lVar1 != 0) {
    func_0x000107c61174();
    uVar2 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f015c50);
    puVar3 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110490020;
    func_0x000107c613fc(&UNK_110490020,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = (code *)0x101e74b44;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101e71864;
    puStack_88 = &UNK_110490038;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar4 = puStack_78;
    uVar10 = param_1;
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    func_0x000107c4da28(lVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    lVar1 = *(long *)(unaff_x20 + lVar9);
    if (lVar1 != 0) {
      func_0x000107c61174();
      uVar2 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f015c70);
      puVar4 = &UNK_11048ffa8;
      func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar6 = &UNK_110490070;
      func_0x000107c613fc(&UNK_110490070,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar4;
      *(undefined8 *)(puVar6 + 0x18) = uVar10;
      pcStack_80 = FUN_101e744c8;
      puStack_a0 = puVar3;
      uStack_98 = 0x42000000;
      pcStack_90 = FUN_101e71864;
      puStack_88 = &UNK_110490088;
      puStack_78 = puVar6;
      func_0x000107c60bc4(&puStack_a0);
      puVar4 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61574(puVar4);
      func_0x000107c4da28(lVar1);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar2);
      lVar1 = *(long *)(unaff_x20 + lVar9);
      if (lVar1 != 0) {
        func_0x000107c61174();
        uVar2 = 0xd000000000000013;
        func_0x000107c5fadc(0xd000000000000013,0x800000010f015c90);
        puVar4 = &UNK_11048ffa8;
        func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        puVar6 = &UNK_1104900c0;
        func_0x000107c613fc(&UNK_1104900c0,0x20,7);
        *(undefined **)(puVar6 + 0x10) = puVar4;
        *(undefined8 *)(puVar6 + 0x18) = uVar10;
        pcStack_80 = (code *)0x101e74b48;
        puStack_a0 = puVar3;
        uStack_98 = 0x42000000;
        pcStack_90 = FUN_101e71864;
        puStack_88 = &UNK_1104900d8;
        puStack_78 = puVar6;
        func_0x000107c60bc4(&puStack_a0);
        puVar3 = puStack_78;
        func_0x000107c61174(uVar10);
        func_0x000107c61574(puVar3);
        func_0x000107c4da28(lVar1);
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(uVar2);
      }
    }
  }
  if (((*(byte *)(unaff_x20 + _DAT_112e34350) & 1) == 0) &&
     (lVar9 = *(long *)(unaff_x20 + lVar9), lVar9 != 0)) {
    func_0x000107c61174();
    uVar10 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f015cb0);
    puVar3 = &UNK_11048ffa8;
    func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110490110;
    func_0x000107c613fc(&UNK_110490110,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    pcStack_80 = (code *)0x101e74514;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101e71864;
    puStack_88 = &UNK_110490128;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c4da28(lVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar10);
  }
  return;
}



/* Entry: 101e72c00; end: 101e72c73;  */

void FUN_101e72c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    (*param_6)(param_5,param_3);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 101e72c74; end: 101e7337b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e72c74(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong auStack_78 [5];
  
  lVar3 = _DAT_112e34310;
  uVar10 = unaff_x20 + _DAT_112e34310;
  func_0x000107c61618();
  if (uVar10 != 0) {
    uVar1 = uVar10;
    func_0x000107c40f5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    if (uVar1 != 0) {
      FUN_101e74a84(0,0x112d7e3f8,&PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      func_0x000107c61174();
      uVar10 = param_1;
      uVar8 = uVar1;
      func_0x000107c60118();
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar1);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_2 + 0x10) != 0) {
          lVar9 = *(long *)PTR__NSKeyValueChangeNewKey_110345500;
          func_0x000107c61434(param_2);
          FUN_101e6b9dc(lVar9);
          if ((uVar8 & 1) == 0) {
            func_0x000107c6142c(param_2);
          }
          else {
            func_0x0001000bb420(*(long *)(param_2 + 0x38) + lVar9 * 0x20,auStack_78 + 1);
            func_0x000107c6142c(param_2);
            uVar5 = 0x112e34398;
            func_0x0001000285a8(0x112e34398,&UNK_10da1d990);
            puVar2 = auStack_78;
            func_0x000107c6147c(puVar2,auStack_78 + 1,PTR___sypN_11034f1a8 + 8,uVar5,6);
            if (((ulong)puVar2 & 1) != 0) {
              if (auStack_78[0] >> 0x3e == 0) {
                uVar10 = *(ulong *)((auStack_78[0] & 0xffffffffffffff8) + 0x10);
              }
              else {
                uVar10 = auStack_78[0] & 0xffffffffffffff8;
                if (0x7fffffffffffffff < auStack_78[0]) {
                  uVar10 = auStack_78[0];
                }
                func_0x000107c60480();
              }
              func_0x000107c6142c(auStack_78[0]);
              if (uVar10 == 0) {
                return;
              }
            }
          }
        }
        lVar3 = unaff_x20 + lVar3;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x000107c51790();
          func_0x000107c61170(lVar3);
        }
        puVar4 = PTR_PTR_1126dd630;
        func_0x000107c61168(PTR_PTR_1126dd630);
        uVar5 = 0;
        FUN_101e74a84(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
        func_0x000107c4dcb0(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        auStack_78[1] = 0x6e6576456d6f7266;
        auStack_78[2] = 0xe900000000000074;
        puVar6 = puVar4;
        func_0x000107c417f0(puVar4);
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5faec();
        func_0x000107c61170(puVar6);
        func_0x000107c5fb78(puVar7,uVar5);
        func_0x000107c6142c(uVar5);
        uVar10 = auStack_78[2];
        FUN_101e742f0();
        func_0x000107c6142c(uVar10);
        FUN_101e73fa0(puVar4);
        func_0x000107c61170(puVar4);
      }
    }
  }
  return;
}



/* Entry: 101e7337c; end: 101e736a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7337c(ulong param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  bool bVar13;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar6 = _DAT_112e34310;
  lVar3 = unaff_x20 + _DAT_112e34310;
  plVar5 = param_2;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  if (param_2 != (long *)0x0) {
    if (param_2[2] == 0) {
      lVar12 = 0;
      bVar13 = false;
      lVar11 = param_2[2];
    }
    else {
      lVar12 = *(long *)PTR__NSKeyValueChangeOldKey_110345510;
      func_0x000107c61434(param_2);
      FUN_101e6b9dc(lVar12);
      if (((ulong)plVar5 & 1) == 0) {
        func_0x000107c6142c(param_2);
        lVar12 = 0;
        bVar13 = false;
      }
      else {
        func_0x0001000bb420(param_2[7] + lVar12 * 0x20,&lStack_80);
        func_0x000107c6142c(param_2);
        plVar4 = &lStack_88;
        plVar5 = &lStack_80;
        func_0x000107c6147c(plVar4,plVar5,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
        if (((ulong)plVar4 & 1) == 0) goto LAB_101e73680;
        bVar13 = true;
        lVar12 = lStack_88;
      }
      lVar11 = param_2[2];
    }
    if (lVar11 != 0) {
      lVar11 = *(long *)PTR__NSKeyValueChangeNewKey_110345500;
      func_0x000107c61434(param_2);
      FUN_101e6b9dc(lVar11);
      if (((ulong)plVar5 & 1) == 0) {
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(param_2);
        return;
      }
      func_0x0001000bb420(param_2[7] + lVar11 * 0x20,&lStack_80);
      func_0x000107c6142c(param_2);
      plVar5 = &lStack_88;
      func_0x000107c6147c(plVar5,&lStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)plVar5 & 1) != 0) {
        bVar1 = false;
        if (lVar12 == lStack_88) {
          bVar1 = bVar13;
        }
        if (!bVar1) {
          lVar6 = unaff_x20 + lVar6;
          func_0x000107c61618();
          if (lVar6 != 0) {
            lVar3 = lVar6;
            func_0x000107c40f5c();
            func_0x000107c61180();
            func_0x000107c61170(lVar6);
            if (lVar3 != 0) {
              FUN_101e74a84(0,0x112d7e3f8,&PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
              func_0x000107c61174();
              uVar7 = param_1;
              lVar6 = lVar3;
              func_0x000107c60118();
              func_0x000107c61170(param_1);
              func_0x000107c61170(lVar3);
              if ((uVar7 & 1) != 0) {
                if (lStack_88 == 2) {
                  puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
                  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
                  func_0x000107c517b0();
                  func_0x000107c61180();
                  puVar9 = PTR_PTR_1126dd630;
                  func_0x000107c61168();
                  puVar10 = puVar8;
                  func_0x000107c5ed2c(puVar8);
                  func_0x000107c4dcb4();
                  func_0x000107c61180();
                  func_0x000107c61170(puVar10);
                  func_0x000107c61170(puVar8);
                  if (puVar9 != (undefined *)0x0) {
                    lStack_80 = 0x6e6576456d6f7266;
                    uStack_78 = 0xe900000000000074;
                    puVar8 = puVar9;
                    func_0x000107c417f0(puVar9);
                    func_0x000107c61180();
                    puVar10 = puVar8;
                    func_0x000107c5faec();
                    func_0x000107c61170(puVar8);
                    func_0x000107c5fb78(puVar10,lVar6);
                    func_0x000107c6142c(lVar6);
                    uVar2 = uStack_78;
                    FUN_101e742f0();
                    func_0x000107c6142c(uVar2);
                    FUN_101e73fa0(puVar9);
                    func_0x000107c61170(puVar9);
                    goto LAB_101e73680;
                  }
                }
                else if (lStack_88 == 1) {
                  func_0x000101e731c4();
                }
                FUN_101e742f0();
              }
            }
          }
        }
      }
    }
  }
LAB_101e73680:
  func_0x000107c61170();
  return;
}



/* Entry: 101e736a4; end: 101e73adb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e736a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  float *pfVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long unaff_x20;
  long lVar9;
  float fStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar7 = param_2;
  if (param_2[2] != 0) {
    lVar9 = *(long *)PTR__NSKeyValueChangeNewKey_110345500;
    func_0x000107c61434(param_2);
    FUN_101e6b9dc(lVar9);
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      func_0x0001000bb420(param_2[7] + lVar9 * 0x20,&uStack_60);
      func_0x000107c6142c(param_2);
      pfVar3 = &fStack_64;
      puVar7 = &uStack_60;
      func_0x000107c6147c(pfVar3,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSfN_11034ddf8,6);
      if (((ulong)pfVar3 & 1) == 0) {
        return;
      }
      if (0.0 < fStack_64) {
        func_0x000107c5c9cc();
        bVar2 = param_1 == 2;
        pbVar8 = (byte *)(unaff_x20 + _DAT_112e342e0);
        if (bVar2 == (bool)*pbVar8) {
          return;
        }
        goto LAB_101e7378c;
      }
    }
  }
  pbVar8 = (byte *)(unaff_x20 + _DAT_112e342e0);
  if ((*pbVar8 & 1) == 0) {
    return;
  }
  bVar2 = false;
LAB_101e7378c:
  *pbVar8 = bVar2;
  puVar4 = PTR_PTR_1126dd630;
  func_0x000107c61168(PTR_PTR_1126dd630);
  func_0x000107c4dc40();
  func_0x000107c61180();
  uStack_60 = 0x6e6576456d6f7266;
  uStack_58 = 0xe900000000000074;
  puVar5 = puVar4;
  func_0x000107c417f0();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5faec();
  func_0x000107c61170(puVar5);
  func_0x000107c5fb78(puVar6,puVar7);
  func_0x000107c6142c(puVar7);
  uVar1 = uStack_58;
  FUN_101e742f0();
  func_0x000107c6142c(uVar1);
  FUN_101e73fa0(puVar4);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101e73adc; end: 101e73ce3;  */

void FUN_101e73adc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar6;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puVar5;
  
  lVar2 = 0;
  func_0x000107c5ebac();
  lVar12 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)&puStack_90 - (lVar9 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar8 - extraout_x12;
  puVar3 = &UNK_11048ffa8;
  func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar13 = *(code **)(lVar12 + 0x10);
  (*pcVar13)(lVar11,param_1,lVar2);
  (*pcVar13)(lVar8,lVar11,lVar2);
  uVar7 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar14 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar4 = &UNK_11048ffd0;
  func_0x000107c613fc(&UNK_11048ffd0,uVar10 + 8,uVar7 | 7);
  (**(code **)(lVar12 + 0x20))(puVar4 + uVar14,lVar11,lVar2);
  *(undefined **)(puVar4 + uVar10) = puVar3;
  puVar5 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar1 = (int)puVar5;
  func_0x000107c6157c(puVar3);
  func_0x000107c4a02c();
  if (iVar1 == 0) {
    func_0x000107c61574(puVar3);
    FUN_101e70d68();
    pcStack_70 = FUN_101e742b0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11048ffe8;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_68;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(puVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(puVar3);
  }
  else {
    FUN_101e73ce4(lVar8,puVar3);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  (**(code **)(lVar12 + 8))(lVar8,lVar2);
  return;
}



/* Entry: 101e73ce4; end: 101e73efb;  */

void FUN_101e73ce4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_88;
  long lStack_80;
  undefined *apuStack_78 [5];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar6 = param_2;
  func_0x000107c5eba8();
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
LAB_101e73e84:
    func_0x00010006e7f4(&uStack_50);
LAB_101e73e8c:
    puVar4 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dca8();
    func_0x000107c61180();
    func_0x000107c61428(param_2 + 0x10,apuStack_78,0,0);
    puVar5 = (undefined *)(param_2 + 0x10);
    func_0x000107c61618();
    if (puVar5 == (undefined *)0x0) goto LAB_101e73ee0;
    FUN_101e73fa0(puVar4);
  }
  else {
    uVar1 = *(undefined8 *)PTR__AVPlayerItemFailedToPlayToEndTimeErrorKey_1103480c8;
    func_0x000107c5faec();
    uStack_88 = uVar1;
    lStack_80 = lVar6;
    func_0x000107c61434(lVar6);
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apuStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_101e73d98:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x000107c61434(param_1);
      ppuVar2 = apuStack_78;
      func_0x000100df95d0(ppuVar2);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c6142c(param_1);
        goto LAB_101e73d98;
      }
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + (long)ppuVar2 * 0x20,&uStack_50);
      func_0x000107c6142c(lVar6);
      lVar6 = param_1;
    }
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(param_1);
    func_0x0001007bbff0(apuStack_78);
    if (lStack_38 == 0) goto LAB_101e73e84;
    uVar1 = 0;
    FUN_101e74a84(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    ppuVar2 = apuStack_78;
    func_0x000107c6147c(ppuVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)ppuVar2 & 1) == 0) goto LAB_101e73e8c;
    puVar5 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    puVar4 = apuStack_78[0];
    func_0x000107c61174(apuStack_78[0]);
    puVar3 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar4);
    func_0x000107c4dcb4(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61428(param_2 + 0x10,apuStack_78,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_101e73fa0(puVar5);
      func_0x000107c61170(param_2);
    }
  }
  func_0x000107c61170(puVar5);
LAB_101e73ee0:
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101e73efc; end: 101e73f9f; -[_TtC28SCPlaybackPlayerServicesImpl17SCAVPlayerMonitor playerItemDidReachEndWithNotif:] */

void FUN_101e73efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ebac();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eba0(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_101e73adc(puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101e73fa0; end: 101e74147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e73fa0(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar3 = (undefined *)(unaff_x20 + _DAT_112e342f0);
  puVar2 = puVar3;
  func_0x000107c61618();
  lVar1 = _DAT_112e34308;
  if (puVar2 == (undefined *)0x0) {
    puStack_80 = param_1;
    func_0x0001002a64a8(&puStack_80);
  }
  else {
    uVar7 = *(undefined8 *)(puVar3 + 8);
    puVar3 = param_1;
    func_0x000107c49cec();
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = &UNK_11048ff58;
      func_0x000107c613fc(&UNK_11048ff58,0x28,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = uVar7;
      *(undefined **)(puVar3 + 0x20) = param_1;
      puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x000107c61168();
      puVar5 = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c615f0(puVar2);
      func_0x000107c4a02c();
      if ((int)puVar4 == 0) {
        FUN_101e70d68();
        pcStack_60 = FUN_101e7426c;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_11048ff70;
        puStack_58 = puVar3;
        func_0x000107c60bc4(&puStack_80);
        puVar5 = puStack_58;
        func_0x000107c6157c(puVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c4e524(puVar4);
        func_0x000107c61574(puVar3);
        func_0x000107c615e8(puVar2);
        func_0x000107c60bd0(ppuVar6);
        puVar2 = puVar4;
      }
      else {
        FUN_101e76c78(puVar5);
        func_0x000107c61574(puVar3);
      }
    }
    func_0x000107c615e8(puVar2);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 101e74148; end: 101e7421f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e74148(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112e34310;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112e34310;
    func_0x000107c61618();
    lVar5 = param_1;
    if (lVar1 != 0) {
      lVar2 = param_1 + lVar2;
      func_0x000107c61618();
      lVar4 = param_1;
      lVar5 = lVar1;
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c51808();
        func_0x000107c61170(lVar2);
        lVar4 = lVar1;
        lVar5 = param_1;
        if ((*(char *)(param_1 + _DAT_112e34340) == '\x01') &&
           (*(char *)(param_1 + _DAT_112e342e8) == '\x01' && lVar3 == 0)) {
          func_0x000107c4e868(lVar1);
        }
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 101e74220; end: 101e7426b; -[_TtC28SCPlaybackPlayerServicesImpl17SCAVPlayerMonitor init] */

void FUN_101e74220(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaybackPlayerServicesImpl.SCAVPlayerMonitor",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e7424c);
  (*pcVar1)();
}



/* Entry: 101e7426c; end: 101e74293;  */

void FUN_101e7426c(void)

{
  long unaff_x20;
  
  FUN_101e76c78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101e74294; end: 101e742af;  */

void FUN_101e74294(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101e742b0; end: 101e742ef;  */

void FUN_101e742b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uStack_88;
  long lStack_80;
  undefined *apuStack_78 [5];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar7 = 0;
  func_0x000107c5ebac();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar9 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar9 + 7 & 0xffffffffffffff8));
  lVar1 = unaff_x20 + uVar9;
  lVar8 = lVar7;
  func_0x000107c5eba8();
  if (lVar1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
LAB_101e73e84:
    func_0x00010006e7f4(&uStack_50);
LAB_101e73e8c:
    puVar5 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dca8();
    func_0x000107c61180();
    func_0x000107c61428(lVar7 + 0x10,apuStack_78,0,0);
    puVar6 = (undefined *)(lVar7 + 0x10);
    func_0x000107c61618();
    if (puVar6 == (undefined *)0x0) goto LAB_101e73ee0;
    FUN_101e73fa0(puVar5);
  }
  else {
    uVar2 = *(undefined8 *)PTR__AVPlayerItemFailedToPlayToEndTimeErrorKey_1103480c8;
    func_0x000107c5faec();
    uStack_88 = uVar2;
    lStack_80 = lVar8;
    func_0x000107c61434(lVar8);
    puVar6 = PTR___sSSN_11034da80;
    func_0x000107c602d4(apuStack_78,&uStack_88,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(lVar1 + 0x10) == 0) {
LAB_101e73d98:
      uStack_48 = 0;
      uStack_50 = 0;
      lStack_38 = 0;
      uStack_40 = 0;
    }
    else {
      func_0x000107c61434(lVar1);
      ppuVar3 = apuStack_78;
      func_0x000100df95d0(ppuVar3);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000107c6142c(lVar1);
        goto LAB_101e73d98;
      }
      func_0x0001000bb420(*(long *)(lVar1 + 0x38) + (long)ppuVar3 * 0x20,&uStack_50);
      func_0x000107c6142c(lVar8);
      lVar8 = lVar1;
    }
    func_0x000107c6142c(lVar8);
    func_0x000107c6142c(lVar1);
    func_0x0001007bbff0(apuStack_78);
    if (lStack_38 == 0) goto LAB_101e73e84;
    uVar2 = 0;
    FUN_101e74a84(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    ppuVar3 = apuStack_78;
    func_0x000107c6147c(ppuVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)ppuVar3 & 1) == 0) goto LAB_101e73e8c;
    puVar6 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    puVar5 = apuStack_78[0];
    func_0x000107c61174(apuStack_78[0]);
    puVar4 = puVar5;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar5);
    func_0x000107c4dcb4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61428(lVar7 + 0x10,apuStack_78,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61618();
    if (lVar7 != 0) {
      FUN_101e73fa0(puVar6);
      func_0x000107c61170(lVar7);
    }
  }
  func_0x000107c61170(puVar6);
LAB_101e73ee0:
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101e742f0; end: 101e744c7;  */

/* WARNING: Possible PIC construction at 0x000101e743ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e74468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e74490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e743b0) */
/* WARNING: Removing unreachable block (ram,0x000101e743bc) */
/* WARNING: Removing unreachable block (ram,0x000101e743c4) */
/* WARNING: Removing unreachable block (ram,0x000101e743d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e742f0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar6 = _DAT_112e34310;
  puVar2 = (undefined *)(unaff_x20 + _DAT_112e34310);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = puVar2;
  func_0x000107c40f5c();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) goto code_r0x000107c61170;
  puVar4 = puVar2;
  func_0x000107c517f8();
  puVar5 = puVar3;
  func_0x000107c5bd00();
  lVar1 = _DAT_112e34328;
  lVar7 = *(long *)(unaff_x20 + _DAT_112e34328);
  if (puVar4 == (undefined *)0x0) {
LAB_101e74404:
    lVar6 = 1;
    if (lVar7 == 1) {
LAB_101e74494:
      func_0x000107c61170(puVar2);
      puVar2 = puVar3;
      goto code_r0x000107c61170;
    }
  }
  else if (puVar4 == (undefined *)0x2) {
LAB_101e743f4:
    lVar6 = 4;
    if (lVar7 == 4) goto LAB_101e74494;
  }
  else if (puVar4 == (undefined *)0x1) {
    if (puVar5 == (undefined *)0x0) goto LAB_101e74404;
    if (puVar5 == (undefined *)0x2) goto LAB_101e743f4;
    if (puVar5 != (undefined *)0x1) goto LAB_101e74414;
    if (1 < lVar7) {
      puVar4 = (undefined *)(unaff_x20 + lVar6);
      func_0x000107c61618();
      if (puVar4 != (undefined *)0x0) {
        func_0x000107c51808();
        func_0x000107c51794(puVar4);
        puVar2 = puVar4;
        goto code_r0x000107c61170;
      }
    }
    lVar6 = 2;
    if (lVar7 == 2) goto LAB_101e74494;
  }
  else {
LAB_101e74414:
    lVar6 = 0;
    if (lVar7 == 0) goto LAB_101e74494;
  }
  *(long *)(unaff_x20 + lVar1) = lVar6;
  if ((lVar6 == 2) && ((*(byte *)(unaff_x20 + _DAT_112e34320) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112e34320) = 1;
    puVar2 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dcbc();
    func_0x000107c61180();
    FUN_101e73fa0();
  }
  else {
    puVar2 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dcc0();
    func_0x000107c61180();
    FUN_101e73fa0();
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 101e744c8; end: 101e74577;  */

void FUN_101e744c8(void)

{
  FUN_101e72c00();
  return;
}



/* Entry: 101e74578; end: 101e7459f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e74578(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112e34310;
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112e34310;
    func_0x000107c61618();
    lVar6 = lVar1;
    if (lVar2 != 0) {
      lVar3 = lVar1 + lVar3;
      func_0x000107c61618();
      lVar5 = lVar1;
      lVar6 = lVar2;
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c51808();
        func_0x000107c61170(lVar3);
        lVar5 = lVar2;
        lVar6 = lVar1;
        if ((*(char *)(lVar1 + _DAT_112e34340) == '\x01') &&
           (*(char *)(lVar1 + _DAT_112e342e8) == '\x01' && lVar4 == 0)) {
          func_0x000107c4e868(lVar2);
        }
      }
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 101e745a0; end: 101e7487b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e745a0(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  byte bVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_1[2] == 0) {
    return;
  }
  lVar8 = *(long *)PTR__NSKeyValueChangeNewKey_110345500;
  func_0x000107c61434(param_1);
  FUN_101e6b9dc(lVar8);
  if ((param_2 & 1) == 0) {
    func_0x000107c6142c(param_1);
    return;
  }
  func_0x0001000bb420(param_1[7] + lVar8 * 0x20,&puStack_78);
  func_0x000107c6142c(param_1);
  puVar5 = PTR___sypN_11034f1a8;
  plVar2 = &lStack_48;
  ppuVar6 = &puStack_78;
  func_0x000107c6147c(plVar2,ppuVar6,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
  lVar8 = lStack_48;
  if (((ulong)plVar2 & 1) == 0) {
    return;
  }
  if (param_1[2] != 0) {
    lVar9 = *(long *)PTR__NSKeyValueChangeOldKey_110345510;
    func_0x000107c61434(param_1);
    FUN_101e6b9dc(lVar9);
    if (((ulong)ppuVar6 & 1) != 0) {
      func_0x0001000bb420(param_1[7] + lVar9 * 0x20,&puStack_78);
      func_0x000107c6142c(param_1);
      plVar2 = &lStack_48;
      ppuVar6 = &puStack_78;
      func_0x000107c6147c(plVar2,ppuVar6,puVar5 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)plVar2 & 1) == 0) {
        return;
      }
      if (lVar8 == lStack_48) {
        return;
      }
      bVar7 = 1;
      lVar9 = lStack_48;
      goto LAB_101e746dc;
    }
    func_0x000107c6142c(param_1);
    plVar2 = param_1;
  }
  bVar7 = 0;
  lVar9 = 0;
LAB_101e746dc:
  if ((lVar8 == 2) == (bool)*(char *)(unaff_x20 + _DAT_112e342e0)) {
    FUN_101e742f0();
    if ((((*(char *)(unaff_x20 + _DAT_112e34340) == '\x01') && (lVar9 == 2)) &&
        ((bVar7 & *(byte *)(unaff_x20 + _DAT_112e342e8)) != 0)) && (lVar8 == 0)) {
      FUN_101e70d68();
      puVar5 = &UNK_11048ffa8;
      func_0x000107c613fc(&UNK_11048ffa8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      uStack_58 = 0x101e74b4c;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_110490268;
      ppuVar6 = &puStack_78;
      puStack_50 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(plVar2);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(plVar2);
    }
  }
  else {
    *(bool *)(unaff_x20 + _DAT_112e342e0) = lVar8 == 2;
    puVar5 = PTR_PTR_1126dd630;
    func_0x000107c61168(PTR_PTR_1126dd630);
    func_0x000107c4dc40();
    func_0x000107c61180();
    puStack_78 = (undefined *)0x6e6576456d6f7266;
    uStack_70 = 0xe900000000000074;
    puVar3 = puVar5;
    func_0x000107c417f0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    func_0x000107c5fb78(puVar4,ppuVar6);
    func_0x000107c6142c(ppuVar6);
    uVar1 = uStack_70;
    FUN_101e742f0();
    func_0x000107c6142c(uVar1);
    FUN_101e73fa0(puVar5);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 101e7487c; end: 101e74a6b;  */

void FUN_101e7487c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar10 = *(long *)PTR__NSKeyValueChangeOldKey_110345510;
    func_0x000107c61434(param_1);
    FUN_101e6b9dc(lVar10);
    if (((ulong)param_2 & 1) != 0) {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar10 * 0x20,&uStack_70);
      func_0x000107c6142c(param_1);
      pfVar5 = &fStack_74;
      param_2 = &uStack_70;
      func_0x000107c6147c(pfVar5,param_2,PTR___sypN_11034f1a8 + 8,PTR___sSfN_11034ddf8,6);
      if (((ulong)pfVar5 & 1) == 0) {
        return;
      }
      bVar2 = true;
      lVar10 = *(long *)(param_1 + 0x10);
      fVar3 = fStack_74;
      goto joined_r0x000101e74934;
    }
    func_0x000107c6142c(param_1);
  }
  bVar2 = false;
  lVar10 = *(long *)(param_1 + 0x10);
  fVar3 = 0.0;
joined_r0x000101e74934:
  if (lVar10 != 0) {
    lVar10 = *(long *)PTR__NSKeyValueChangeNewKey_110345500;
    func_0x000107c61434(param_1);
    FUN_101e6b9dc(lVar10);
    if (((ulong)param_2 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar10 * 0x20,&uStack_70);
      func_0x000107c6142c(param_1);
      pfVar5 = &fStack_74;
      puVar9 = &uStack_70;
      func_0x000107c6147c(pfVar5,puVar9,PTR___sypN_11034f1a8 + 8,PTR___sSfN_11034ddf8,6);
      if (((ulong)pfVar5 & 1) != 0) {
        bVar1 = false;
        if (fVar3 == fStack_74) {
          bVar1 = bVar2;
        }
        if (!bVar1) {
          puVar6 = PTR_PTR_1126dd630;
          func_0x000107c61168(PTR_PTR_1126dd630);
          func_0x000107c4dcb8(fStack_74);
          func_0x000107c61180();
          uStack_70 = 0x6e6576456d6f7266;
          uStack_68 = 0xe900000000000074;
          puVar7 = puVar6;
          func_0x000107c417f0();
          func_0x000107c61180();
          puVar8 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          func_0x000107c5fb78(puVar8,puVar9);
          func_0x000107c6142c(puVar9);
          uVar4 = uStack_68;
          FUN_101e742f0();
          func_0x000107c6142c(uVar4);
          FUN_101e73fa0(puVar6);
          func_0x000107c61170(puVar6);
        }
      }
    }
  }
  return;
}



/* Entry: 101e74a6c; end: 101e74a83;  */

void FUN_101e74a6c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c49820(param_1);
    FUN_101e71bb8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101e74a84; end: 101e74ac3;  */

void FUN_101e74a84(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101e74ac4; end: 101e74b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e74ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  func_0x000107c60a3c(&uStack_70);
  lVar2 = lVar1 + _DAT_112e34310;
  uVar7 = param_1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c40f5c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c4b7a8(&uStack_70,lVar3);
      uVar6 = uStack_60;
      uVar8 = uStack_68;
      uVar5 = uStack_70;
      func_0x000107c61170(lVar3);
      goto LAB_101e71338;
    }
  }
  uVar5 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uVar8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uVar6 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
LAB_101e71338:
  uStack_70 = uVar5;
  uStack_68 = uVar8;
  uStack_60 = uVar6;
  func_0x000107c60a3c(&uStack_70);
  puVar4 = PTR_PTR_1126dd630;
  func_0x000107c61168(PTR_PTR_1126dd630);
  func_0x000107c4dcac(param_1,uVar7);
  func_0x000107c61180();
  FUN_101e73fa0();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101e74b50; end: 101e74b77; +[_TtC28SCPlaybackPlayerServicesImpl14SCAVPlayerView layerClass] */

void FUN_101e74b50(void)

{
  FUN_101e7aa04(0,0x112d50dc0,&PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 101e74b78; end: 101e75337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101e74b78(double param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  undefined *puVar17;
  undefined *unaff_x20;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined *)0x0;
  puStack_e8 = auStack_130 + -extraout_x8;
  func_0x000107c5ede0();
  lVar21 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar3 = _DAT_112e343b8;
  uStack_e0 = (long)(auStack_130 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_b0;
  func_0x000107c61428(unaff_x20 + _DAT_112e343b8,puVar14,0,0);
  puVar19 = *(undefined **)(unaff_x20 + lVar3);
  if (puVar19 != (undefined *)0x0) {
    func_0x000103b78e18(0);
    puVar5 = puVar19;
    func_0x000107c615f0();
    func_0x000103b788a0();
    if (puVar14 != (undefined1 *)0x0) {
      puVar4 = puVar5;
      FUN_101e7a408();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      uStack_c8 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_b8 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      dVar23 = *(double *)(PTR__kCMTimeZero_110348670 + 8);
      dStack_c0 = dVar23;
      func_0x000107c60a3c(&uStack_c8);
      puVar17 = PTR_PTR_1126a9668;
      func_0x000107c610f8();
      func_0x000107c5fadc(puVar5,puVar14);
      func_0x000107c476c8(0,dVar23 * 1000.0);
      func_0x000107c6142c(puVar14);
      func_0x000107c615e8(puVar19);
      func_0x000107c61170(puVar5);
      *(undefined **)(puVar4 + 0x20) = puVar17;
      return puVar4;
    }
    func_0x000107c615e8(puVar19);
  }
  puVar5 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar19 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  puVar17 = puVar5;
  func_0x000107c61490(puVar5,puVar19,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar17 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    goto joined_r0x000101e74e34;
  }
  puStack_d0 = PTR_DAT_1126a00f0;
  puVar19 = (undefined *)0x1;
  puVar5 = puVar17;
  func_0x000107c61494(puVar17,1,&puStack_d0);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c40f5c();
    func_0x000107c61180();
    func_0x000107c61170(puVar17);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 == (undefined *)0x0) goto joined_r0x000101e74e34;
    puVar22 = puVar5;
    func_0x000107c3cee0();
    func_0x000107c61180();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar22 == (undefined *)0x0) goto joined_r0x000101e74e34;
    puVar17 = puVar22;
    func_0x000107c42afc();
    func_0x000107c61180();
    func_0x000107c61170(puVar22);
    puVar19 = (undefined *)0x0;
    FUN_101e7aa04(0,0x112e344a8,&PTR__OBJC_CLASS___AVPlayerItemAccessLogEvent_1126a96a0);
    puVar13 = puVar17;
    func_0x000107c5fc54(puVar17,puVar19);
  }
  func_0x000107c61170(puVar17);
joined_r0x000101e74e34:
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      puVar17 = puVar13;
    }
    func_0x000107c60480();
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c6142c(puVar13);
    func_0x000107c61170(puVar5);
    puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    if ((long)puVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e75338);
      (*pcVar2)();
    }
    uVar20 = 0;
    lStack_f0 = 0;
    puVar22 = (undefined *)0x0;
    lStack_110 = *(long *)(unaff_x20 + _DAT_112e34478);
    uStack_d8 = (ulong)puVar13 & 0xc000000000000001;
    uStack_120 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    dVar23 = *(double *)((long)PTR__kCMTimeZero_110348670 + 8);
    uStack_128 = *(undefined8 *)((long)PTR__kCMTimeZero_110348670 + 0x10);
    dVar25 = 0.0;
    puStack_118 = puVar5;
    puStack_108 = puVar13;
    puStack_100 = puVar4;
    puStack_f8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (uStack_d8 == 0) {
        puVar5 = *(undefined **)(puVar13 + (long)puVar22 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar22;
        puVar19 = puVar13;
        FUN_101e7dd58(puVar22,puVar13);
      }
      puVar12 = puVar5;
      func_0x000107c3abf8();
      func_0x000107c61180();
      if (puVar12 == (undefined *)0x0) {
        func_0x000107c61170(puVar5);
      }
      else {
        puVar6 = puVar12;
        func_0x000107c5faec();
        func_0x000107c61170(puVar12);
        puVar14 = puStack_e8;
        func_0x000107c5edd0(puStack_e8,puVar6,puVar19);
        func_0x000107c6142c(puVar19);
        puVar19 = (undefined *)0x1;
        puVar7 = puVar14;
        (**(code **)(lVar21 + 0x30))(puVar14,1,puVar4);
        uVar16 = uStack_e0;
        if ((int)puVar7 == 1) {
          func_0x000107c61170(puVar5);
          func_0x0001000293e4(puVar14);
        }
        else {
          (**(code **)(lVar21 + 0x20))(uStack_e0,puVar14,puVar4);
          puVar8 = (undefined8 *)0x0;
          func_0x000103b78e18();
          func_0x000103b78894();
          uVar9 = *puVar8;
          puVar8 = (undefined8 *)puVar8[1];
          func_0x000107c61434(puVar8);
          func_0x000107c5fadc(uVar9,puVar8);
          func_0x000107c6142c();
          func_0x000103b78888();
          uVar10 = *puVar8;
          uVar1 = puVar8[1];
          func_0x000107c61434(uVar1);
          uVar15 = uVar1;
          func_0x000107c5fadc(uVar10,uVar1);
          func_0x000107c6142c(uVar1);
          lVar3 = lStack_110;
          func_0x000107c5c1dc();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar10);
          lVar11 = lVar3;
          func_0x000107c5faec();
          func_0x000107c61170(lVar3);
          func_0x000103b789c0(uVar16,lVar11,uVar15);
          func_0x000107c6142c(uVar15);
          uVar18 = 0x474e495353494d;
          if (lVar11 != 0) {
            uVar18 = uVar16;
          }
          lVar3 = -0x1900000000000000;
          if (lVar11 != 0) {
            lVar3 = lVar11;
          }
          func_0x000107c42394(puVar5);
          lVar11 = lStack_f0;
          param_1 = (double)(long)param_1;
          if (param_1 < 0.0) {
            param_1 = 0.0;
          }
          dVar25 = dVar25 + param_1;
          if (lStack_f0 == 0) {
            func_0x000107c61434(lVar3);
LAB_101e75118:
            puVar4 = puStack_f8;
            uVar9 = uStack_120;
            uVar10 = uStack_128;
            dVar24 = dVar23;
            if (puStack_118 != (undefined *)0x0) {
              func_0x000107c41014(&uStack_c8);
              uVar9 = uStack_c8;
              uVar10 = uStack_b8;
              dVar24 = dStack_c0;
            }
            param_1 = dVar25 * 1000.0;
            uStack_c8 = uVar9;
            dStack_c0 = dVar24;
            uStack_b8 = uVar10;
            func_0x000107c60a3c(&uStack_c8);
            puVar19 = PTR_PTR_1126a9668;
            func_0x000107c610f8();
            uVar20 = uVar18;
            func_0x000107c5fadc(uVar18,lVar3);
            func_0x000107c476c8(param_1,dVar24 * 1000.0);
            func_0x000107c61170(uVar20);
            func_0x000107c61174();
            puVar13 = puVar4;
            func_0x000107c61550();
            if ((((int)puVar13 == 0) || ((long)puVar4 < 0)) ||
               (puVar13 = puVar4, ((ulong)puVar4 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar4 >> 0x3e == 0) {
                puVar12 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar12 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar4) {
                  puVar12 = puVar4;
                }
                func_0x000107c60480(puVar12);
              }
              puVar13 = (undefined *)0x0;
              FUN_101e85ce4(0,puVar12 + 1,1,puVar4);
            }
            uVar16 = (ulong)puVar13 & 0xffffffffffffff8;
            uVar20 = *(ulong *)(uVar16 + 0x10);
            puStack_f8 = puVar13;
            if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar20) {
              puVar4 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
              FUN_101e85ce4(puVar4,uVar20 + 1,1,puVar13);
              uVar16 = (ulong)puVar4 & 0xffffffffffffff8;
              puStack_f8 = puVar4;
            }
            *(ulong *)(uVar16 + 0x10) = uVar20 + 1;
            *(undefined **)(uVar16 + uVar20 * 8 + 0x20) = puVar19;
            func_0x000107c61170(puVar19);
            func_0x000107c61170(puVar5);
            func_0x000107c6142c(lVar3);
            puVar4 = puStack_100;
            lStack_f0 = lVar3;
          }
          else if ((uVar20 == uVar18) && (lStack_f0 == lVar3)) {
            func_0x000107c6142c(lVar3);
            func_0x000107c61170(puVar5);
            uVar18 = uVar20;
            puVar4 = puStack_100;
          }
          else {
            uVar16 = uVar20;
            func_0x000107c605b8(uVar20,lStack_f0,uVar18,lVar3,0);
            puVar4 = puStack_100;
            if ((uVar16 & 1) == 0) {
              func_0x000107c61434(lVar3);
              func_0x000107c6142c(lVar11);
              goto LAB_101e75118;
            }
            func_0x000107c6142c(lVar3);
            func_0x000107c61170(puVar5);
            uVar18 = uVar20;
          }
          puVar13 = puStack_108;
          puVar19 = puVar4;
          (**(code **)(lVar21 + 8))(uStack_e0);
          uVar20 = uVar18;
        }
      }
      puVar22 = puVar22 + 1;
    } while (puVar17 != puVar22);
    func_0x000107c61170(puStack_118);
    func_0x000107c6142c(puVar13);
    func_0x000107c6142c(lStack_f0);
  }
  return puStack_f8;
}



/* Entry: 101e75338; end: 101e75493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e75338(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e343b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_58,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c615e8(uVar6);
  *(undefined1 *)(unaff_x20 + _DAT_112e343c0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343c8) = 0;
  lVar1 = _DAT_112e343d0;
  if (*(char *)(unaff_x20 + _DAT_112e343d0) != '\x01') {
    func_0x000107c615e8(param_1);
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar5 = lVar3;
  func_0x000107c61490(lVar3,puVar4,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar5 != 0) {
    puStack_60 = PTR_DAT_1126a00f0;
    lVar3 = lVar5;
    func_0x000107c61494(lVar5,1,&puStack_60);
    if (lVar3 == 0) {
      func_0x000107c615e8(param_1);
      func_0x000107c61170(lVar5);
      goto LAB_101e7545c;
    }
    func_0x000107c3f4c4();
    func_0x000107c61170(lVar5);
  }
  func_0x000107c615e8(param_1);
LAB_101e7545c:
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  if (!SCARRY8(*(long *)(unaff_x20 + _DAT_112e343d8),1)) {
    *(long *)(unaff_x20 + _DAT_112e343d8) = *(long *)(unaff_x20 + _DAT_112e343d8) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e75494);
  (*pcVar2)();
}



/* Entry: 101e75494; end: 101e754ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101e75494(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x5193);
  }
  *param_1 = lVar2;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  lVar1 = _DAT_112e343b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e343b8,lVar2,0x21,0);
  auVar3._8_8_ = unaff_x20 + lVar1;
  auVar3._0_8_ = FUN_101e75500;
  return auVar3;
}



/* Entry: 101e75500; end: 101e75613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e75500(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  func_0x000107c614a8(lVar6);
  if ((param_2 & 1) == 0) {
    lVar7 = *(long *)(lVar6 + 0x20);
    *(undefined1 *)(lVar7 + _DAT_112e343c0) = 0;
    *(undefined1 *)(lVar7 + _DAT_112e343c8) = 0;
    lVar5 = _DAT_112e343d0;
    if (*(char *)(lVar7 + _DAT_112e343d0) == '\x01') {
      lVar2 = *(long *)(lVar6 + 0x20);
      func_0x000107c4aba4();
      func_0x000107c61180();
      puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
      func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
      lVar4 = lVar2;
      func_0x000107c61490(lVar2,puVar3,0,0,0);
      func_0x000107c4e980();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 != 0) {
        *(undefined **)(lVar6 + 0x18) = PTR_DAT_1126a00f0;
        lVar2 = lVar4;
        func_0x000107c61494(lVar4,1,lVar6 + 0x18);
        if (lVar2 != 0) {
          func_0x000107c3f4c4();
        }
        func_0x000107c61170(lVar4);
      }
      lVar4 = *(long *)(lVar6 + 0x20);
      *(undefined1 *)(lVar7 + lVar5) = 0;
      lVar5 = *(long *)(lVar4 + _DAT_112e343d8);
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e75614);
        (*pcVar1)();
      }
      *(long *)(lVar4 + _DAT_112e343d8) = lVar5 + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar6);
  return;
}



/* Entry: 101e75614; end: 101e75793;  */

void FUN_101e75614(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1,puVar7);
  puVar2 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar7);
    FUN_101e75338(0);
    func_0x0001000293e4(param_1);
  }
  else {
    lVar3 = lVar6;
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    func_0x000107c5ed90();
    puVar4 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    func_0x000107c61168(PTR__OBJC_CLASS___AVAsset_1126aff38);
    func_0x000107c3e250();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar5 = PTR_PTR_1126bcb80;
    func_0x000107c610f8(PTR_PTR_1126bcb80);
    func_0x000107c454a8();
    func_0x000107c61170(puVar4);
    FUN_101e75338(puVar5);
    func_0x0001000293e4(param_1);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return;
}



/* Entry: 101e75794; end: 101e75a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e75794(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  bool bVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e343b8;
  func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + lVar1);
  if (lVar1 == 0) {
    bVar4 = true;
  }
  else {
    func_0x000107c4d444();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    lVar3 = lVar1;
    func_0x000107c6148c(lVar1,puVar2);
    bVar4 = lVar3 == 0;
    if (!bVar4) {
      func_0x000107c3abfc();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c5edb4(param_1,lVar3);
      lVar1 = lVar3;
    }
    func_0x000107c61170(lVar1);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,bVar4,1,lVar1);
  return;
}



/* Entry: 101e75a4c; end: 101e75f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101e75a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  
  puVar7 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e343e8) = 0;
  lVar2 = _DAT_112e34450;
  uVar5 = 0x112e33e30;
  func_0x0001000285a8(0x112e33e30,&UNK_10da1d340);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e34470);
  *puVar1 = 0x79616c5056414353;
  puVar1[1] = 0xee00776569567265;
  *(undefined8 *)(unaff_x20 + _DAT_112e343b8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e343e0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343f0) = 2;
  lVar3 = _DAT_112e34468;
  uVar5 = 0x112e33e38;
  func_0x0001000285a8(0x112e33e38,&UNK_10da1dd50);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar5;
  *(undefined1 *)(unaff_x20 + _DAT_112e343f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343c0) = 0;
  lVar2 = _DAT_112e34418;
  uVar5 = 0;
  func_0x000103bae79c();
  func_0x000107c610f8();
  func_0x000103bae528();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e34440);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34420) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34428) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34430) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34448) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34458) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e34438) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e343d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e343d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e34400) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e34478) = param_3;
  uVar6 = 0;
  func_0x000103b791cc();
  uVar5 = uVar6;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c453e4();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e34410);
  puVar1[3] = uVar6;
  puVar1[4] = &PTR_DAT_1106da5c8;
  *puVar1 = uVar5;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
  FUN_101e6bf0c(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c6157c(uVar6);
  uVar5 = param_1;
  FUN_101e6bc00(param_1,uVar6);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112e34408) = uVar5;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61174(param_1);
  puVar8 = puVar7;
  func_0x000107c4aba4(puVar7);
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  func_0x000107c61490(puVar8,puVar9,0,0,0);
  func_0x000107c57500();
  func_0x000107c61170(puVar8);
  uVar6 = *(undefined8 *)(puVar7 + _DAT_112e34478);
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f015d90);
  func_0x000107c3ebd4(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c52ab0(param_1);
  func_0x000107c61170(param_1);
  puVar8 = puVar7;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168();
  func_0x000107c61490(puVar8,puVar9,0,0,0);
  func_0x000107c5a51c();
  func_0x000107c61170();
  iVar4 = (int)puVar8;
  func_0x000109128f4c();
  if (iVar4 != 0) {
    puVar8 = puVar7;
    func_0x000107c4aba4(puVar7);
    func_0x000107c61180();
    func_0x000107c52e0c(0x3ff0000000000000);
    func_0x000107c61170(puVar8);
    puVar8 = puVar7;
    func_0x000107c4aba4(puVar7);
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c3ab24();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c52df8(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
  }
  uVar5 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f015db0);
  uVar6 = param_3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar5);
  puVar7[_DAT_112e34430] = (char)uVar6;
  uVar5 = 0xd00000000000004b;
  func_0x000107c5fadc(0xd00000000000004b,0x800000010f015de0);
  uVar6 = param_3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar5);
  puVar7[_DAT_112e34448] = (char)uVar6;
  uVar5 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f015e30);
  uVar6 = param_3;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  puVar7[_DAT_112e34458] = (char)uVar6;
  return puVar7;
}



/* Entry: 101e75f90; end: 101e75fb7; -[_TtC28SCPlaybackPlayerServicesImpl14SCAVPlayerView initWithCoder:] */

void FUN_101e75f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101e7a474();
  return;
}



/* Entry: 101e75fb8; end: 101e76083; -[_TtC28SCPlaybackPlayerServicesImpl14SCAVPlayerView layoutSublayersOfLayer:] */

void FUN_101e75fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_layoutSublayersOfLayer__1125377f8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2,param_3);
  uVar1 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  uVar3 = uVar1;
  func_0x000107c61490(uVar1,puVar2,0,0,0);
  func_0x000107c3ec60(param_1);
  func_0x000107c54b80(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101e76084; end: 101e7670f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e76084(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&puStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(unaff_x20 + _DAT_112e343c0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112e343c0) = 1;
    lVar4 = unaff_x20;
    func_0x000107c4aba4();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
    func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
    lVar3 = lVar4;
    func_0x000107c61490(lVar4,puVar2,0,0,0);
    func_0x000107c4e980();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      puStack_a0 = PTR_DAT_1126a00f0;
      lVar4 = lVar3;
      func_0x000107c61494(lVar3,1,&puStack_a0);
      if (lVar4 != 0) {
        func_0x000107c5015c();
      }
      func_0x000107c61170(lVar3);
    }
    lVar4 = _DAT_112e343b8;
    func_0x000107c61428(unaff_x20 + _DAT_112e343b8,auStack_68,0,0);
    lVar4 = *(long *)(unaff_x20 + lVar4);
    if (lVar4 != 0) {
      func_0x000107c4d444();
      func_0x000107c61180();
      uVar5 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      FUN_101e7aa04(0,0x112d56378,&PTR_PTR_1126ae790);
      (**(code **)(lVar9 + 0x68))
                (lVar8,*(undefined4 *)
                        PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
      lVar3 = lVar8;
      func_0x000104188018(lVar8,0,0);
      (**(code **)(lVar9 + 8))(lVar8,lVar1);
      puVar2 = &UNK_1104906b0;
      func_0x000107c613fc(&UNK_1104906b0,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar6 = &UNK_110490ad0;
      func_0x000107c613fc(&UNK_110490ad0,0x28,7);
      *(long *)(puVar6 + 0x10) = lVar4;
      *(undefined8 *)(puVar6 + 0x18) = uVar5;
      *(undefined **)(puVar6 + 0x20) = puVar2;
      uStack_78 = 0x101e7a9e0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_110490ae8;
      ppuVar7 = &puStack_98;
      puStack_70 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar2 = puStack_70;
      func_0x000107c61174(lVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(lVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 101e76710; end: 101e76c1b;  */

void FUN_101e76710(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  pcVar1 = "prepareAsync()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  puVar3 = &UNK_1104906b0;
  func_0x000107c613fc(&UNK_1104906b0,0x18,7);
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618(param_3);
  func_0x000107c61614(puVar3 + 0x10,param_3);
  func_0x000107c61170(param_3);
  puVar4 = &UNK_110490b20;
  func_0x000107c613fc(&UNK_110490b20,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  puVar5 = &UNK_110490b48;
  func_0x000107c613fc(&UNK_110490b48,0x30,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(char **)(puVar5 + 0x20) = pcVar1;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  uStack_68 = 0x101e7a9ec;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_1000b0c7c;
  puStack_70 = &UNK_110490b60;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_60;
  func_0x000107c615f0(pcVar1);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c4b794(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101e76c1c; end: 101e76c77;  */

void FUN_101e76c1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101e76c78(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101e76c78; end: 101e7738f;  */

void FUN_101e76c78(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  ulong uVar25;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar3 = &UNK_110490340;
  func_0x000107c613fc(&UNK_110490340,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110490368;
  func_0x000107c613fc(&UNK_110490368,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101e77468;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101e77470;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_100e2fcec;
  puStack_90 = &UNK_110490380;
  ppuVar5 = &puStack_a8;
  puStack_80 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104903b8;
  func_0x000107c613fc(&UNK_1104903b8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_1104903e0;
  func_0x000107c613fc(&UNK_1104903e0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101e77510;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_88 = (code *)0x101e7aacc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101e77518;
  puStack_90 = &UNK_1104903f8;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4();
  puVar9 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110490430;
  func_0x000107c613fc(&UNK_110490430,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = unaff_x20;
  puVar10 = &UNK_110490458;
  func_0x000107c613fc(&UNK_110490458,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_101e775dc;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_88 = FUN_101e775e4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_110490470;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4();
  puVar12 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_1104904a8;
  func_0x000107c613fc(&UNK_1104904a8,0x18,7);
  *(undefined8 *)(puVar12 + 0x10) = unaff_x20;
  puVar13 = &UNK_1104904d0;
  func_0x000107c613fc(&UNK_1104904d0,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_101e77604;
  *(undefined **)(puVar13 + 0x18) = puVar12;
  pcStack_88 = FUN_101e77608;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x101e77628;
  puStack_90 = &UNK_1104904e8;
  ppuVar14 = &puStack_a8;
  puStack_80 = puVar13;
  func_0x000107c60bc4(ppuVar14);
  puVar15 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar13);
  func_0x000107c61574(puVar15);
  puVar15 = &UNK_110490520;
  func_0x000107c613fc(&UNK_110490520,0x18,7);
  *(undefined8 *)(puVar15 + 0x10) = unaff_x20;
  puVar16 = &UNK_110490548;
  func_0x000107c613fc(&UNK_110490548,0x20,7);
  *(code **)(puVar16 + 0x10) = FUN_101e776c4;
  *(undefined **)(puVar16 + 0x18) = puVar15;
  pcStack_88 = FUN_101e776cc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101e776ec;
  puStack_90 = &UNK_110490560;
  ppuVar17 = &puStack_a8;
  puStack_80 = puVar16;
  func_0x000107c60bc4();
  puVar18 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar16);
  func_0x000107c61574(puVar18);
  puVar18 = &UNK_110490598;
  func_0x000107c613fc(&UNK_110490598,0x18,7);
  *(undefined8 *)(puVar18 + 0x10) = unaff_x20;
  puVar19 = &UNK_1104905c0;
  func_0x000107c613fc(&UNK_1104905c0,0x20,7);
  *(code **)(puVar19 + 0x10) = FUN_101e777a8;
  *(undefined **)(puVar19 + 0x18) = puVar18;
  pcStack_88 = (code *)0x101e7aad4;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_10006eb60;
  puStack_90 = &UNK_1104905d8;
  ppuVar20 = &puStack_a8;
  puStack_80 = puVar19;
  func_0x000107c60bc4();
  puVar22 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar19);
  func_0x000107c61574(puVar22);
  pcStack_88 = (code *)0x101e777b0;
  puStack_80 = (undefined *)0x0;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101e777b4;
  puStack_90 = &UNK_110490600;
  ppuVar21 = &puStack_a8;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  puVar22 = &UNK_110490638;
  func_0x000107c613fc(&UNK_110490638,0x18,7);
  *(undefined8 *)(puVar22 + 0x10) = unaff_x20;
  puVar23 = &UNK_110490660;
  func_0x000107c613fc(&UNK_110490660,0x20,7);
  *(code **)(puVar23 + 0x10) = FUN_101e7785c;
  *(undefined **)(puVar23 + 0x18) = puVar22;
  pcStack_88 = FUN_101e77864;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  pcStack_98 = (code *)0x101e77884;
  puStack_90 = &UNK_110490678;
  ppuVar24 = &puStack_a8;
  puStack_80 = puVar23;
  func_0x000107c60bc4();
  puVar1 = puStack_80;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar23);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6c8(param_1);
  func_0x000107c60bd0(ppuVar24);
  func_0x000107c60bd0(ppuVar21);
  func_0x000107c60bd0(ppuVar20);
  func_0x000107c60bd0(ppuVar17);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x58,0x124,0x15,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e77374);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x58,299,0x1a,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e77378);
    (*pcVar2)();
  }
  puVar3 = puVar10;
  func_0x000107c61544(puVar10,"",0x58,0x134,0x1a,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7737c);
    (*pcVar2)();
  }
  puVar3 = puVar13;
  func_0x000107c61544(puVar13,"",0x58,0x136,0x21,1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar13);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e77380);
    (*pcVar2)();
  }
  puVar3 = puVar16;
  func_0x000107c61544(puVar16,"",0x58,0x13c,0x22,1);
  func_0x000107c61574(puVar18);
  func_0x000107c61574(puVar16);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e77384);
    (*pcVar2)();
  }
  puVar3 = puVar19;
  func_0x000107c61544(puVar19,"",0x58,0x143,0x1a,1);
  func_0x000107c61574(puVar19);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e77388);
    (*pcVar2)();
  }
  uVar25 = 0;
  func_0x000107c61544(0,"",0x58,0x14a,0x20,1);
  func_0x000107c61574(puVar22);
  if ((uVar25 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e7738c);
    (*pcVar2)();
  }
  puVar3 = puVar23;
  func_0x000107c61544(puVar23,"",0x58,0x14b,0x26,1);
  func_0x000107c61574(puVar23);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e77390);
  (*pcVar2)();
}



/* Entry: 101e77390; end: 101e77467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e77390(uint param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_38;
  
  lVar3 = param_2;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar2 = lVar3;
  func_0x000107c61490(lVar3,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    puStack_38 = PTR_DAT_1126a00f0;
    lVar3 = lVar2;
    func_0x000107c61494(lVar2,1,&puStack_38);
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar3 = *(long *)(param_2 + _DAT_112e343e8);
      if (lVar3 != 0) {
        func_0x000107c61174();
        func_0x000103b7a874(param_1 & 1);
        func_0x000107c61170(lVar3);
      }
    }
  }
  return;
}



/* Entry: 101e77468; end: 101e7746f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e77468(uint param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = lVar4;
  func_0x000107c4aba4();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  lVar2 = lVar3;
  func_0x000107c61490(lVar3,puVar1,0,0,0);
  func_0x000107c4e980();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar2 != 0) {
    puStack_38 = PTR_DAT_1126a00f0;
    lVar3 = lVar2;
    func_0x000107c61494(lVar2,1,&puStack_38);
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar4 + _DAT_112e343e8);
      if (lVar3 != 0) {
        func_0x000107c61174();
        func_0x000103b7a874(param_1 & 1);
        func_0x000107c61170(lVar3);
      }
    }
  }
  return;
}



/* Entry: 101e77470; end: 101e7748f;  */

void FUN_101e77470(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e77490; end: 101e774ab;  */

void FUN_101e77490(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101e774ac; end: 101e7750f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e774ac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e34450);
  uStack_30 = 0;
  uStack_28 = 2;
  uStack_38 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000107c614b0(param_1);
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61574(uVar1);
  func_0x000107c614ac(param_1);
  return;
}



/* Entry: 101e77510; end: 101e77517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e77510(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e34450);
  uStack_30 = 0;
  uStack_28 = 2;
  uStack_38 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000107c614b0(param_1);
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61574(uVar1);
  func_0x000107c614ac(param_1);
  return;
}



/* Entry: 101e77518; end: 101e7754f;  */

void FUN_101e77518(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e77550; end: 101e775db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e77550(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if ((*(byte *)(param_1 + _DAT_112e34428) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112e34428) = 1;
    uVar1 = *(undefined8 *)(param_1 + _DAT_112e34450);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 3;
    func_0x000107c6157c(uVar1);
    func_0x0001002a64a8(&uStack_38);
    func_0x000107c61574(uVar1);
    if ((*(byte *)(param_1 + _DAT_112e343c8) & 1) != 0) {
      *(undefined1 *)(param_1 + _DAT_112e343c8) = 0;
      FUN_101e77d98(0x3f800000);
    }
  }
  return;
}



/* Entry: 101e775dc; end: 101e775e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e775dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if ((*(byte *)(lVar1 + _DAT_112e34428) & 1) == 0) {
    *(undefined1 *)(lVar1 + _DAT_112e34428) = 1;
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112e34450);
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 3;
    func_0x000107c6157c(uVar2);
    func_0x0001002a64a8(&uStack_38);
    func_0x000107c61574(uVar2);
    if ((*(byte *)(lVar1 + _DAT_112e343c8) & 1) != 0) {
      *(undefined1 *)(lVar1 + _DAT_112e343c8) = 0;
      FUN_101e77d98(0x3f800000);
    }
  }
  return;
}



/* Entry: 101e775e4; end: 101e77603;  */

void FUN_101e775e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e77604; end: 101e77607;  */

void FUN_101e77604(void)

{
  return;
}



/* Entry: 101e77608; end: 101e7764b;  */

void FUN_101e77608(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e7764c; end: 101e776c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7764c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (*(char *)(param_3 + _DAT_112e34420) == '\x01') {
    lVar1 = *(long *)(param_3 + _DAT_112e343e8);
    if ((lVar1 != 0) && (func_0x000103b7a8ec(), (param_1 & 1) == 0)) {
      func_0x000107c61174(lVar1);
      FUN_101e78704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 101e776c4; end: 101e776cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e776c4(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e34420) == '\x01') {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e343e8);
    if ((lVar1 != 0) && (func_0x000103b7a8ec(), (param_1 & 1) == 0)) {
      func_0x000107c61174(lVar1);
      FUN_101e78704();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 101e776cc; end: 101e776eb;  */

void FUN_101e776cc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101e776ec; end: 101e7774f;  */

void FUN_101e776ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = 0;
  FUN_101e7aa04(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5fc54(param_3,uVar2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101e77750; end: 101e777a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e77750(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e34450);
  uStack_38 = 0;
  uStack_40 = 4;
  uStack_30 = 3;
  func_0x000107c6157c(uVar1);
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101e777a8; end: 101e777b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e777a8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112e34450);
  uStack_38 = 0;
  uStack_40 = 4;
  uStack_30 = 3;
  func_0x000107c6157c(uVar1);
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101e777b4; end: 101e777d3;  */

void FUN_101e777b4(long param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}



/* Entry: 101e777d4; end: 101e7785b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e777d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(param_3 + _DAT_112e343e8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000103b7a7a0(param_1);
    func_0x000107c61170(lVar1);
  }
  uVar2 = *(undefined8 *)(param_3 + _DAT_112e34450);
  uStack_38 = 0;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000107c6157c(uVar2);
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 101e7785c; end: 101e77863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e7785c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(lVar2 + _DAT_112e343e8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000103b7a7a0(param_1);
    func_0x000107c61170(lVar1);
  }
  uVar3 = *(undefined8 *)(lVar2 + _DAT_112e34450);
  uStack_38 = 0;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000107c6157c(uVar3);
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 101e77864; end: 101e778a3;  */

void FUN_101e77864(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


