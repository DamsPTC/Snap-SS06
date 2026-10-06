/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100219f58; end: 100219f73;  */

void FUN_100219f58(undefined8 param_1)

{
  FUN_1000285a8(0x112dd6878,&UNK_10d9995a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101939e58,param_1);
  return;
}



/* Entry: 100219f74; end: 100219fc3;  */

void FUN_100219f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100219fc4; end: 10021a08b;  */

void FUN_100219fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df0850,&UNK_10d9bd7c0);
  puVar1 = &UNK_110432c68;
  func_0x000107c613fc(&UNK_110432c68,0x40,7);
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
  FUN_1000823a8(FUN_10075c290,puVar1);
  return;
}



/* Entry: 10021a08c; end: 10021a0ab;  */

void FUN_10021a08c(void)

{
  func_0x000107c61168(&PTR_PTR_112df08c8);
  return;
}



/* Entry: 10021a0ac; end: 10021a0c7;  */

void FUN_10021a0ac(undefined8 param_1)

{
  FUN_1000285a8(0x112df0858,&UNK_10d9bd7c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10075c234,param_1);
  return;
}



/* Entry: 10021a0c8; end: 10021a117;  */

void FUN_10021a0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021a118; end: 10021a133;  */

void FUN_10021a118(undefined8 param_1)

{
  FUN_1000285a8(0x112d6af58,&UNK_10d92e430);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003a2e4c,param_1);
  return;
}



/* Entry: 10021a134; end: 10021a183;  */

void FUN_10021a134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021a184; end: 10021a1bb;  */

void FUN_10021a184(undefined8 param_1)

{
  FUN_1000285a8(0x112df1458,&UNK_10d9beac0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_100c1cb20,param_1);
  return;
}



/* Entry: 10021a1bc; end: 10021a237;  */

undefined * FUN_10021a1bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb238 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88818,
                        &UNK_10e5e96a4,&UNK_10e5e96cc,5,&UNK_10b7ecdf4,0);
    do {
      if (puRam00000001137fb238 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137fb238;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb238,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb238 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb238;
}



/* Entry: 10021a238; end: 10021a253;  */

void FUN_10021a238(undefined8 param_1)

{
  FUN_1000285a8(0x112d6a5c0,&UNK_10d92db38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003b387c,param_1);
  return;
}



/* Entry: 10021a254; end: 10021a30f;  */

void FUN_10021a254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df1c18,&UNK_10d9bf7c0);
  puVar1 = &UNK_110434158;
  func_0x000107c613fc(&UNK_110434158,0x38,7);
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
  FUN_1000823a8(FUN_1006d4468,puVar1);
  return;
}



/* Entry: 10021a310; end: 10021a32f;  */

void FUN_10021a310(void)

{
  func_0x000107c61168(&PTR_PTR_112df1c90);
  return;
}



/* Entry: 10021a330; end: 10021a34b;  */

void FUN_10021a330(undefined8 param_1)

{
  FUN_1000285a8(0x112df3520,&UNK_10d9c1908);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004660bc,param_1);
  return;
}



/* Entry: 10021a34c; end: 10021a39b;  */

void FUN_10021a34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021a39c; end: 10021a49f;  */

void FUN_10021a39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d6af88,&UNK_10d986870);
  puVar1 = &UNK_110403058;
  func_0x000107c613fc(&UNK_110403058,0x58,7);
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
  FUN_1000823a8(FUN_1003a71d8,puVar1);
  return;
}



/* Entry: 10021a4a0; end: 10021a51f;  */

void FUN_10021a4a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddd948,&UNK_10d9a39a0);
  puVar1 = &UNK_11041d1e8;
  func_0x000107c613fc(&UNK_11041d1e8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100466040,puVar1);
  return;
}



/* Entry: 10021a520; end: 10021a53f;  */

void FUN_10021a520(void)

{
  func_0x000107c61168(&PTR_PTR_112ddd9c0);
  return;
}



/* Entry: 10021a540; end: 10021a55b;  */

void FUN_10021a540(undefined8 param_1)

{
  FUN_1000285a8(0x112de89f0,&UNK_10d9b3a08);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c9a1c,param_1);
  return;
}



/* Entry: 10021a55c; end: 10021a5ab;  */

void FUN_10021a55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021a5ac; end: 10021a643;  */

void FUN_10021a5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dddcd8,&UNK_10d9a4050);
  puVar1 = &UNK_11041d4b8;
  func_0x000107c613fc(&UNK_11041d4b8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1006426a4,puVar1);
  return;
}



/* Entry: 10021a644; end: 10021a663;  */

void FUN_10021a644(void)

{
  func_0x000107c61168(&PTR_PTR_112dddd50);
  return;
}



/* Entry: 10021a664; end: 10021a67f;  */

void FUN_10021a664(undefined8 param_1)

{
  FUN_1000285a8(0x112dddce0,&UNK_10d9a4058);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100641f70,param_1);
  return;
}



/* Entry: 10021a680; end: 10021a6cf;  */

void FUN_10021a680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021a6d0; end: 10021a71b;  */

void FUN_10021a6d0(undefined8 param_1)

{
  FUN_1000285a8(0x113044c60,&UNK_10dcbe858);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009c9480,param_1);
  return;
}



/* Entry: 10021a71c; end: 10021a73b;  */

void FUN_10021a71c(void)

{
  func_0x000107c61168(&PTR_PTR_11297c310);
  return;
}



/* Entry: 10021a73c; end: 10021a7df;  */

void FUN_10021a73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df5490,&UNK_10d9c3fd0);
  puVar1 = &UNK_110438c78;
  func_0x000107c613fc(&UNK_110438c78,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101a9cad0,puVar1);
  return;
}



/* Entry: 10021a7e0; end: 10021a83b;  */

void FUN_10021a7e0(void)

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



/* Entry: 10021a83c; end: 10021a8df;  */

void FUN_10021a83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dcb318,&UNK_10d98d4d0);
  puVar1 = &UNK_110409060;
  func_0x000107c613fc(&UNK_110409060,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_10040e368,puVar1);
  return;
}



/* Entry: 10021a8e0; end: 10021a8ff;  */

void FUN_10021a8e0(void)

{
  func_0x000107c61168(&PTR_PTR_112dcb390);
  return;
}



/* Entry: 10021a900; end: 10021a91b;  */

void FUN_10021a900(undefined8 param_1)

{
  FUN_1000285a8(0x112dcb320,&UNK_10d98d4d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10040e30c,param_1);
  return;
}



/* Entry: 10021a91c; end: 10021a96b;  */

void FUN_10021a91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021a96c; end: 10021a98b;  */

void FUN_10021a96c(void)

{
  func_0x000107c61168(&PTR_PTR_11294d5e8);
  return;
}



/* Entry: 10021a98c; end: 10021aa53;  */

void FUN_10021a98c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc9d78,&UNK_10d98b190);
  puVar1 = &UNK_110408070;
  func_0x000107c613fc(&UNK_110408070,0x40,7);
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
  FUN_1000823a8(FUN_1003cc050,puVar1);
  return;
}



/* Entry: 10021aa54; end: 10021aa73;  */

void FUN_10021aa54(void)

{
  func_0x000107c61168(&PTR_PTR_112dc9df0);
  return;
}



/* Entry: 10021aa74; end: 10021ab0b;  */

void FUN_10021aa74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc5f68,&UNK_10d985c70);
  puVar1 = &UNK_110402258;
  func_0x000107c613fc(&UNK_110402258,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1017492a4,puVar1);
  return;
}



/* Entry: 10021ab0c; end: 10021ab3f;  */

void FUN_10021ab0c(void)

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



/* Entry: 10021ab40; end: 10021ab63;  */

void FUN_10021ab40(long param_1)

{
  FUN_10020ca0c();
  if (param_1 != 0) {
    func_0x000107c607f0();
  }
  return;
}



/* Entry: 10021ab64; end: 10021abaf;  */

void FUN_10021ab64(undefined8 param_1)

{
  FUN_1000285a8(0x112dc5f70,&UNK_10d985cd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101749308,param_1);
  return;
}



/* Entry: 10021abb0; end: 10021abcf;  */

void FUN_10021abb0(void)

{
  func_0x000107c61168(&PTR_PTR_11297cf80);
  return;
}



/* Entry: 10021abd0; end: 10021ad7f;  */

void FUN_10021abd0(long param_1)

{
  FUN_10020ca0c();
  if (param_1 != 0) {
    func_0x000107c607f0();
  }
  return;
}



/* Entry: 10021ad80; end: 10021ae17;  */

void FUN_10021ad80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dbe928,&UNK_10d979c40);
  puVar1 = &UNK_1103f2df0;
  func_0x000107c613fc(&UNK_1103f2df0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_100669130,puVar1);
  return;
}



/* Entry: 10021ae18; end: 10021b19f;  */

long FUN_10021ae18(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 4);
    puVar1[1] = uVar4;
    *puVar1 = uVar3;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    lVar2 = (long)puVar1 + 0x24;
  }
  else {
    lVar2 = param_1;
    func_0x00010021ae64();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x24;
}



/* Entry: 10021b1a0; end: 10021b1ab;  */

/* WARNING: Removing unreachable block (ram,0x000100203548) */
/* WARNING: Removing unreachable block (ram,0x000100203504) */
/* WARNING: Removing unreachable block (ram,0x000100203508) */
/* WARNING: Removing unreachable block (ram,0x0001002035e8) */
/* WARNING: Removing unreachable block (ram,0x0001002035ec) */

ulong * FUN_10021b1a0(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *unaff_x24;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  ulong *puStack_a0;
  undefined8 uStack_98;
  ulong *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  ulong *puStack_60;
  
  puVar9 = (ulong *)0x0;
  ppuVar4 = &puStack_70;
  ppuVar7 = &puStack_70;
  ppuVar8 = &puStack_70;
  uVar14 = 0;
  if (param_3 != (undefined8 *)0x0) {
    puVar3 = param_3 + 1;
    puVar6 = param_2;
    puStack_70 = param_3;
    puStack_68 = param_1;
    puStack_60 = param_2;
    func_0x000107c61288();
    if ((int)puVar3 != 0) goto LAB_100203728;
    unaff_x20 = (ulong *)*param_3;
    (*(code *)unaff_x20[5])();
    uVar16 = unaff_x20[2];
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = ((ulong)ppuVar4 & 0xffffffff) / uVar16;
    }
    puVar5 = (undefined8 *)(unaff_x20[1] + (((ulong)ppuVar4 & 0xffffffff) - uVar13 * uVar16) * 8);
    unaff_x24 = (undefined8 *)*puVar5;
    if (unaff_x24 != (undefined8 *)0x0) {
      iVar11 = (int)*unaff_x24;
      (*(code *)unaff_x20[4])();
      puVar6 = (ulong *)ppuVar7;
      if (iVar11 != 0) {
        do {
          puVar5 = unaff_x24;
          unaff_x24 = (undefined8 *)puVar5[1];
          puVar6 = (ulong *)ppuVar7;
          if (unaff_x24 == (undefined8 *)0x0) goto LAB_100203510;
          iVar11 = (int)*unaff_x24;
          ppuVar7 = &puStack_70;
          (*(code *)unaff_x20[4])();
        } while (iVar11 != 0);
        puVar5 = puVar5 + 1;
        puVar6 = (ulong *)ppuVar7;
      }
      if (((undefined8 *)*puVar5 != (undefined8 *)0x0) &&
         (unaff_x20 = *(ulong **)*puVar5, unaff_x20 != (ulong *)0x0)) {
        puVar3 = unaff_x20 + 3;
        iVar11 = (int)*puVar3;
        do {
          if (iVar11 == -1) break;
          uVar16 = *puVar3;
          if ((int)uVar16 == iVar11) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *(int *)puVar3 = iVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            bVar2 = cVar1 == '\0';
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          iVar11 = (int)uVar16;
        } while (!bVar2);
        puVar3 = param_3 + 1;
        func_0x000107c6128c();
        if ((int)puVar3 == 0) {
          return unaff_x20;
        }
        goto LAB_100203728;
      }
    }
LAB_100203510:
    puVar3 = param_3 + 1;
    func_0x000107c6128c();
    if ((int)puVar3 != 0) goto LAB_100203728;
  }
  unaff_x24 = (undefined8 *)0x28;
  func_0x000107c610a0();
  if (unaff_x24 == (undefined8 *)0x0) {
    return (ulong *)0x0;
  }
  *unaff_x24 = 0x20;
  unaff_x20 = unaff_x24 + 1;
  unaff_x24[2] = 0;
  *unaff_x20 = 0;
  unaff_x24[4] = 0;
  unaff_x24[3] = 0;
  puVar5 = param_1;
  puVar6 = param_2;
  FUN_1002039d0();
  unaff_x24[2] = puVar5;
  if ((param_2 != (ulong *)0x0) && (puVar5 == (undefined8 *)0x0)) {
    FUN_1001e33e0(unaff_x20);
    return (ulong *)0x0;
  }
  unaff_x24[3] = param_2;
  *(undefined4 *)(unaff_x24 + 4) = 1;
  if (param_3 == (undefined8 *)0x0) {
    return unaff_x20;
  }
  *unaff_x20 = (ulong)param_3;
  puVar3 = param_3 + 1;
  func_0x000107c61290();
  if ((int)puVar3 == 0) {
    param_2 = (ulong *)*param_3;
    puVar3 = unaff_x20;
    (*(code *)param_2[5])();
    uVar16 = param_2[2];
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar13 = ((ulong)puVar3 & 0xffffffff) / uVar16;
    }
    unaff_x24 = (undefined8 *)(param_2[1] + (((ulong)puVar3 & 0xffffffff) - uVar13 * uVar16) * 8);
    param_1 = (undefined8 *)*unaff_x24;
    if (param_1 != (undefined8 *)0x0) {
      iVar11 = (int)*param_1;
      puVar6 = unaff_x20;
      (*(code *)param_2[4])();
      if (iVar11 != 0) {
        do {
          unaff_x24 = param_1;
          param_1 = (undefined8 *)unaff_x24[1];
          if (param_1 == (undefined8 *)0x0) goto LAB_1002035f4;
          iVar11 = (int)*param_1;
          puVar6 = unaff_x20;
          (*(code *)param_2[4])();
        } while (iVar11 != 0);
        unaff_x24 = unaff_x24 + 1;
      }
      if (((undefined8 *)*unaff_x24 != (undefined8 *)0x0) &&
         (param_2 = *(ulong **)*unaff_x24, param_2 != (ulong *)0x0)) {
        puVar3 = param_2 + 3;
        iVar11 = (int)*puVar3;
        do {
          if (iVar11 == -1) break;
          uVar16 = *puVar3;
          if ((int)uVar16 == iVar11) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *(int *)puVar3 = iVar11 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            bVar2 = cVar1 == '\0';
          }
          else {
            bVar2 = false;
            ClearExclusiveLocal();
          }
          iVar11 = (int)uVar16;
        } while (!bVar2);
        puVar3 = param_3 + 1;
        func_0x000107c6128c();
        if ((int)puVar3 != 0) goto LAB_100203728;
        goto LAB_1002036fc;
      }
    }
LAB_1002035f4:
    uVar14 = *param_3;
    puVar9 = unaff_x20;
    FUN_100203afc();
    puVar3 = param_3 + 1;
    func_0x000107c6128c();
    puVar6 = (ulong *)ppuVar8;
    if ((int)puVar3 == 0) {
      if ((int)uVar14 != 0) {
        return unaff_x20;
      }
      param_2 = (ulong *)0x0;
LAB_1002036fc:
      FUN_100a41480(unaff_x20);
      return param_2;
    }
  }
LAB_100203728:
  func_0x000107c60ebc();
  pcStack_78 = FUN_10020372c;
  uVar16 = *puVar3 ^ 0x736f6d6570736575;
  uVar13 = puVar3[1] ^ 0x646f72616e646f6d;
  uVar15 = *puVar3 ^ 0x6c7967656e657261;
  uVar17 = puVar3[1] ^ 0x7465646279746573;
  for (puVar3 = puVar9; (ulong *)0x7 < puVar3; puVar3 = puVar3 + -1) {
    uVar17 = *puVar6 ^ uVar17;
    uVar16 = uVar13 + uVar16;
    uVar12 = uVar16 ^ (uVar13 >> 0x33 | uVar13 << 0xd);
    uVar10 = uVar17 + uVar15 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
    uVar13 = uVar17 + uVar15 + uVar12;
    uVar16 = uVar10 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar12 = uVar13 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
    uVar17 = uVar16 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
    uVar16 = uVar16 + uVar12;
    uVar15 = uVar17 + (uVar13 >> 0x20 | uVar13 << 0x20);
    uVar13 = uVar16 ^ (uVar12 >> 0x33 | uVar12 << 0xd);
    uVar17 = uVar15 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
    uVar15 = uVar15 + uVar13;
    uVar16 = uVar17 + (uVar16 >> 0x20 | uVar16 << 0x20);
    uVar13 = uVar15 ^ (uVar13 >> 0x2f | uVar13 << 0x11);
    uVar17 = uVar16 ^ (uVar17 >> 0x2b | uVar17 << 0x15);
    uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
    uVar16 = uVar16 ^ *puVar6;
    puVar6 = puVar6 + 1;
  }
  uStack_b8 = 0;
  if (puVar3 != (ulong *)0x0) {
    puStack_b0 = unaff_x24;
    puStack_a8 = param_1;
    puStack_a0 = param_2;
    uStack_98 = uVar14;
    puStack_90 = unaff_x20;
    puStack_88 = param_3;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000107c60e68(&uStack_b8);
  }
  uStack_b8 = CONCAT17((char)puVar9,(undefined7)uStack_b8);
  uVar17 = uStack_b8 ^ uVar17;
  uVar16 = uVar16 + uVar13;
  uVar12 = uVar16 ^ (uVar13 >> 0x33 | uVar13 << 0xd);
  uVar10 = uVar17 + uVar15 ^ (uVar17 >> 0x30 | uVar17 << 0x10);
  uVar13 = uVar17 + uVar15 + uVar12;
  uVar16 = uVar10 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar17 = uVar13 ^ (uVar12 >> 0x2f | uVar12 << 0x11);
  uVar15 = uVar16 ^ (uVar10 >> 0x2b | uVar10 << 0x15);
  uVar16 = uVar16 + uVar17;
  uVar13 = uVar15 + (uVar13 >> 0x20 | uVar13 << 0x20);
  uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
  uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
  uVar13 = uVar13 + uVar17;
  uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
  uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
  uVar16 = (uVar16 ^ uStack_b8) + uVar17;
  uVar13 = ((uVar13 >> 0x20 | uVar13 << 0x20) ^ 0xff) + uVar15;
  uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
  uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
  uVar13 = uVar17 + uVar13;
  uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
  uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
  uVar16 = uVar17 + uVar16;
  uVar13 = (uVar13 >> 0x20 | uVar13 << 0x20) + uVar15;
  uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
  uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
  uVar13 = uVar17 + uVar13;
  uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
  uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
  uVar16 = uVar17 + uVar16;
  uVar13 = (uVar13 >> 0x20 | uVar13 << 0x20) + uVar15;
  uVar17 = uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
  uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
  uVar13 = uVar17 + uVar13;
  uVar16 = uVar15 + (uVar16 >> 0x20 | uVar16 << 0x20);
  uVar17 = uVar13 ^ (uVar17 >> 0x2f | uVar17 << 0x11);
  uVar15 = uVar16 ^ (uVar15 >> 0x2b | uVar15 << 0x15);
  uVar13 = (uVar13 >> 0x20 | uVar13 << 0x20) + uVar15;
  uVar16 = uVar17 + uVar16 ^ (uVar17 >> 0x33 | uVar17 << 0xd);
  uVar15 = uVar13 ^ (uVar15 >> 0x30 | uVar15 << 0x10);
  uVar13 = uVar16 + uVar13;
  return (ulong *)((uVar15 >> 0x2b | uVar15 << 0x15) ^ (uVar16 >> 0x2f | uVar16 << 0x11) ^
                   (uVar13 >> 0x20 | uVar13 << 0x20) ^ uVar13);
}



/* Entry: 10021b1ac; end: 10021b1f7;  */

void FUN_10021b1ac(undefined8 param_1)

{
  FUN_1000285a8(0x112dbe930,&UNK_10d979c48);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c03e0,param_1);
  return;
}



/* Entry: 10021b1f8; end: 10021b217;  */

void FUN_10021b1f8(void)

{
  func_0x000107c61168(&PTR_PTR_112969060);
  return;
}



/* Entry: 10021b218; end: 10021b247;  */

undefined8 FUN_10021b218(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_11034c650)(uVar1,*(undefined8 *)(param_2 + 8));
    return uVar1;
  }
  return 0;
}



/* Entry: 10021b248; end: 10021b28f;  */

void FUN_10021b248(void)

{
  return;
}



/* Entry: 10021b290; end: 10021b34b;  */

void FUN_10021b290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dddfe8,&UNK_10d9a43e0);
  puVar1 = &UNK_11041dbe8;
  func_0x000107c613fc(&UNK_11041dbe8,0x38,7);
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
  FUN_1000823a8(FUN_10099d5d4,puVar1);
  return;
}



/* Entry: 10021b34c; end: 10021b36b;  */

void FUN_10021b34c(void)

{
  func_0x000107c61168(&PTR_PTR_112dde058);
  return;
}



/* Entry: 10021b36c; end: 10021b46f;  */

void FUN_10021b36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x1130174a0,&UNK_10dc9c4b8);
  puVar1 = &UNK_110716b58;
  func_0x000107c613fc(&UNK_110716b58,0x58,7);
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
  FUN_1000823a8(FUN_10099fa40,puVar1);
  return;
}



/* Entry: 10021b470; end: 10021b48f;  */

void FUN_10021b470(void)

{
  func_0x000107c61168(&PTR_PTR_112953020);
  return;
}



/* Entry: 10021b490; end: 10021b593;  */

void FUN_10021b490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc3d98,&UNK_10d981320);
  puVar1 = &UNK_1103fd6d0;
  func_0x000107c613fc(&UNK_1103fd6d0,0x58,7);
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
  FUN_1000823a8(FUN_10044d1f4,puVar1);
  return;
}



/* Entry: 10021b594; end: 10021b613;  */

void FUN_10021b594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113041e40,&UNK_10dcbac30);
  puVar1 = &UNK_11072f110;
  func_0x000107c613fc(&UNK_11072f110,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10044cda8,puVar1);
  return;
}



/* Entry: 10021b614; end: 10021b633;  */

void FUN_10021b614(void)

{
  func_0x000107c61168(&PTR_PTR_112978a88);
  return;
}



/* Entry: 10021b634; end: 10021b657;  */

void FUN_10021b634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110718d18;
  FUN_1000285a8(0x11301eb68,&UNK_10dca0398);
  func_0x000107c613fc(&UNK_110718d18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009a2ab0,puVar1);
  return;
}



/* Entry: 10021b658; end: 10021b6d7;  */

void FUN_10021b658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 10021b6d8; end: 10021b6f7;  */

void FUN_10021b6d8(void)

{
  func_0x000107c61168(&PTR_PTR_112957db0);
  return;
}



/* Entry: 10021b6f8; end: 10021b79b;  */

void FUN_10021b6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd6540,&UNK_10d999080);
  puVar1 = &UNK_110414f38;
  func_0x000107c613fc(&UNK_110414f38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1003d9d54,puVar1);
  return;
}



/* Entry: 10021b79c; end: 10021b7bb;  */

void FUN_10021b79c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd65b8);
  return;
}



/* Entry: 10021b7bc; end: 10021b7db;  */

void FUN_10021b7bc(void)

{
  FUN_10021b868();
  return;
}



/* Entry: 10021b7dc; end: 10021b7f7;  */

void FUN_10021b7dc(undefined8 param_1)

{
  FUN_1000285a8(0x112dd6548,&UNK_10d999088);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003d9cf8,param_1);
  return;
}



/* Entry: 10021b7f8; end: 10021b847;  */

void FUN_10021b7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021b848; end: 10021b867;  */

void FUN_10021b848(void)

{
  func_0x000107c61168(&PTR_PTR_1128e3210);
  return;
}



/* Entry: 10021b868; end: 10021bb77;  */

undefined * FUN_10021b868(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*param_1 != 0) {
    return (undefined *)0x0;
  }
  uVar4 = 0x208;
  puVar2 = &UNK_10e5842ba;
  do {
    uVar5 = uVar4 >> 1;
    puVar3 = puVar2 + uVar5 * 0x22;
    puVar1 = puVar3;
    func_0x000107c610b0(puVar3,param_1 + 1,0x20);
    puVar3 = puVar3 + 0x22;
    uVar4 = uVar4 + (uVar4 >> 1 ^ 0xffffffffffffffff);
    if (-1 < (int)puVar1) {
      puVar3 = puVar2;
      uVar4 = uVar5;
    }
    puVar2 = puVar3;
  } while (uVar4 != 0);
  if (puVar3 == &UNK_10e5887ca) {
    puVar2 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 1;
    func_0x000107c610b0(param_1,puVar3,0x20);
    puVar2 = (undefined *)0x0;
    if (-1 < (int)param_1) {
      puVar2 = puVar3;
    }
  }
  return puVar2;
}



/* Entry: 10021bb78; end: 10021bc3f;  */

void FUN_10021bb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd6768,&UNK_10d9993f0);
  puVar1 = &UNK_1104150c8;
  func_0x000107c613fc(&UNK_1104150c8,0x40,7);
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
  FUN_1000823a8(FUN_1003d47d8,puVar1);
  return;
}



/* Entry: 10021bc40; end: 10021bc5f;  */

void FUN_10021bc40(void)

{
  func_0x000107c61168(&PTR_PTR_112dd67e0);
  return;
}



/* Entry: 10021bc60; end: 10021bcab;  */

void FUN_10021bc60(undefined8 param_1)

{
  FUN_1000285a8(0x11303e868,&UNK_10dcb78c0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103fbdb04,param_1);
  return;
}



/* Entry: 10021bcac; end: 10021cee3;  */

bool FUN_10021bcac(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  uStack_40 = 0;
  uStack_38 = 0;
  piStack_50 = (int *)0x0;
  uStack_48 = 0;
  func_0x00010021bcb8(uVar5,*(undefined8 *)(param_1 + 0x10),&uStack_40,&piStack_50);
  uVar3 = uStack_38;
  uVar2 = uStack_40;
  if ((int)uVar5 != 0) {
    uStack_60 = uStack_40;
    uStack_58 = uStack_38;
    piStack_70 = piStack_50;
    uStack_68 = uStack_48;
    puVar6 = &uStack_60;
    func_0x00010021be40(puVar6,&piStack_70);
    if ((int)puVar6 != 0) {
      piStack_70 = (int *)0xaaaaaaaaaaaaaaaa;
      uStack_60 = uVar2;
      uStack_58 = uVar3;
      func_0x00010021bfe4(&piStack_70,&uStack_60,0);
      piVar1 = piStack_70;
      bVar4 = piStack_70 != (int *)0x0;
      if ((piStack_70 != (int *)0x0) && (func_0x00010021c578(piStack_70[1]), *piVar1 == 1)) {
        func_0x00010021c578(*(undefined4 *)(*(long *)(piVar1 + 2) + 8));
      }
      func_0x00010021c5e4(&piStack_70);
      return bVar4;
    }
  }
  return false;
}



/* Entry: 10021cee4; end: 10021cf03;  */

void FUN_10021cee4(void)

{
  func_0x000107c61168(&PTR_PTR_1129758f0);
  return;
}



/* Entry: 10021cf04; end: 10021d66f;  */

long FUN_10021cf04(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000100173644();
  if (*param_1 == param_2) {
    *param_1 = lVar1;
  }
  param_1[2] = param_1[2] + -1;
  FUN_1001a4a3c(param_1[1],param_2);
  return lVar1;
}



/* Entry: 10021d670; end: 10021d673;  */

bool FUN_10021d670(byte *param_1,long param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  byte bVar51;
  byte bVar52;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar53;
  undefined8 uVar54;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  undefined8 uVar71;
  undefined8 uVar72;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  undefined8 uVar105;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  undefined8 uVar121;
  byte bVar129;
  undefined8 uVar122;
  byte bVar130;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  undefined8 uVar131;
  byte bVar138;
  byte bVar139;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  undefined8 uVar140;
  byte bVar147;
  byte bVar148;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  undefined8 uVar149;
  byte bVar156;
  byte bVar157;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  undefined8 uVar158;
  byte bVar165;
  byte bVar166;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  byte bVar173;
  undefined8 uVar167;
  byte bVar174;
  byte bVar175;
  byte bVar177;
  byte bVar178;
  byte bVar179;
  byte bVar180;
  byte bVar181;
  byte bVar182;
  undefined8 uVar176;
  byte bVar183;
  byte bVar184;
  byte bVar186;
  byte bVar187;
  byte bVar188;
  byte bVar189;
  byte bVar190;
  byte bVar191;
  undefined8 uVar185;
  byte bVar192;
  byte bVar193;
  byte bVar194;
  byte bVar195;
  byte bVar196;
  byte bVar197;
  byte bVar198;
  byte bVar199;
  byte bVar200;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  byte bVar213;
  byte bVar214;
  byte bVar215;
  byte bVar216;
  byte bVar217;
  byte bVar218;
  byte bVar219;
  byte bVar220;
  byte bVar221;
  byte bVar222;
  byte bVar223;
  byte bVar224;
  byte bVar225;
  byte bVar226;
  byte bVar227;
  byte bVar228;
  byte bVar229;
  byte bVar230;
  byte bVar231;
  byte bVar232;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar245;
  byte bVar246;
  byte bVar247;
  byte bVar248;
  byte bVar249;
  byte bVar250;
  byte bVar251;
  byte bVar252;
  byte bVar253;
  byte bVar254;
  byte bVar255;
  byte bVar256;
  byte bVar257;
  byte bVar258;
  byte bVar259;
  byte bVar260;
  byte bVar261;
  byte bVar262;
  byte bVar263;
  byte bVar264;
  byte bVar265;
  byte bVar266;
  byte bVar267;
  byte bVar268;
  byte bVar269;
  byte bVar270;
  byte bVar271;
  byte bVar272;
  byte bVar273;
  byte bVar274;
  byte bVar275;
  byte bVar276;
  byte bVar277;
  byte bVar278;
  byte bVar279;
  byte bVar280;
  byte bVar281;
  byte bVar282;
  byte bVar283;
  byte bVar284;
  byte bVar285;
  byte bVar286;
  byte bVar287;
  byte bVar288;
  byte bVar289;
  byte bVar290;
  byte bVar291;
  byte bVar292;
  byte bVar293;
  byte bVar294;
  byte bVar295;
  byte bVar296;
  byte bVar297;
  byte bVar298;
  byte bVar299;
  byte bVar300;
  ulong uVar301;
  ulong uVar302;
  ulong uVar303;
  byte bVar304;
  
  if (param_2 == 0) {
    return true;
  }
  pbVar12 = param_1;
  if ((0 < param_2) && (((ulong)param_1 & 7) != 0)) {
    pbVar12 = param_1 + 1;
    uVar9 = (uint)*param_1;
    if ((((ulong)pbVar12 & 7) != 0) && (1 < param_2)) {
      pbVar12 = param_1 + 2;
      bVar28 = *param_1 | param_1[1];
      uVar9 = (uint)bVar28;
      if ((((ulong)pbVar12 & 7) != 0) && (2 < param_2)) {
        pbVar12 = param_1 + 3;
        bVar28 = bVar28 | param_1[2];
        uVar9 = (uint)bVar28;
        if ((((ulong)pbVar12 & 7) != 0) && (3 < param_2)) {
          pbVar12 = param_1 + 4;
          bVar28 = bVar28 | param_1[3];
          uVar9 = (uint)bVar28;
          if ((((ulong)pbVar12 & 7) != 0) && (4 < param_2)) {
            pbVar12 = param_1 + 5;
            bVar28 = bVar28 | param_1[4];
            uVar9 = (uint)bVar28;
            if ((((ulong)pbVar12 & 7) != 0) && (5 < param_2)) {
              pbVar12 = param_1 + 6;
              bVar28 = bVar28 | param_1[5];
              uVar9 = (uint)bVar28;
              if ((((ulong)pbVar12 & 7) != 0) && (6 < param_2)) {
                pbVar12 = param_1 + 7;
                bVar28 = bVar28 | param_1[6];
                uVar9 = (uint)bVar28;
                if ((((ulong)pbVar12 & 7) != 0) && (7 < param_2)) {
                  pbVar12 = param_1 + 8;
                  uVar9 = (uint)(bVar28 | param_1[7]);
                }
              }
            }
          }
        }
      }
    }
    if (uVar9 >> 7 != 0) {
      return false;
    }
  }
  puVar18 = (ulong *)(param_1 + param_2);
  pbVar14 = pbVar12 + 0x10;
  pbVar16 = pbVar12 + 8;
  uVar19 = ~(ulong)pbVar12;
  while (puVar10 = (ulong *)(pbVar14 + -0x10), puVar10 <= puVar18 + -0x10) {
    uVar72 = *(undefined8 *)(pbVar14 + 0x38);
    uVar54 = *(undefined8 *)(pbVar14 + 0x30);
    uVar71 = *(undefined8 *)(pbVar14 + -8);
    uVar53 = *(undefined8 *)(pbVar14 + -0x10);
    uVar105 = *(undefined8 *)(pbVar14 + 8);
    uVar122 = *(undefined8 *)pbVar14;
    uVar131 = *(undefined8 *)(pbVar14 + 0x58);
    uVar121 = *(undefined8 *)(pbVar14 + 0x50);
    uVar149 = *(undefined8 *)(pbVar14 + 0x68);
    uVar140 = *(undefined8 *)(pbVar14 + 0x60);
    uVar167 = *(undefined8 *)(pbVar14 + 0x18);
    uVar158 = *(undefined8 *)(pbVar14 + 0x10);
    uVar185 = *(undefined8 *)(pbVar14 + 0x28);
    uVar176 = *(undefined8 *)(pbVar14 + 0x20);
    bVar28 = (byte)uVar53 | (byte)uVar54 | (byte)uVar158 | (byte)uVar121 |
             (byte)uVar122 | pbVar14[0x40] | (byte)uVar176 | (byte)uVar140;
    bVar29 = (byte)((ulong)uVar53 >> 8) | (byte)((ulong)uVar54 >> 8) |
             (byte)((ulong)uVar158 >> 8) | (byte)((ulong)uVar121 >> 8) |
             (byte)((ulong)uVar122 >> 8) | pbVar14[0x41] |
             (byte)((ulong)uVar176 >> 8) | (byte)((ulong)uVar140 >> 8);
    bVar30 = (byte)((ulong)uVar53 >> 0x10) | (byte)((ulong)uVar54 >> 0x10) |
             (byte)((ulong)uVar158 >> 0x10) | (byte)((ulong)uVar121 >> 0x10) |
             (byte)((ulong)uVar122 >> 0x10) | pbVar14[0x42] |
             (byte)((ulong)uVar176 >> 0x10) | (byte)((ulong)uVar140 >> 0x10);
    bVar31 = (byte)((ulong)uVar53 >> 0x18) | (byte)((ulong)uVar54 >> 0x18) |
             (byte)((ulong)uVar158 >> 0x18) | (byte)((ulong)uVar121 >> 0x18) |
             (byte)((ulong)uVar122 >> 0x18) | pbVar14[0x43] |
             (byte)((ulong)uVar176 >> 0x18) | (byte)((ulong)uVar140 >> 0x18);
    bVar32 = (byte)((ulong)uVar53 >> 0x20) | (byte)((ulong)uVar54 >> 0x20) |
             (byte)((ulong)uVar158 >> 0x20) | (byte)((ulong)uVar121 >> 0x20) |
             (byte)((ulong)uVar122 >> 0x20) | pbVar14[0x44] |
             (byte)((ulong)uVar176 >> 0x20) | (byte)((ulong)uVar140 >> 0x20);
    bVar33 = (byte)((ulong)uVar53 >> 0x28) | (byte)((ulong)uVar54 >> 0x28) |
             (byte)((ulong)uVar158 >> 0x28) | (byte)((ulong)uVar121 >> 0x28) |
             (byte)((ulong)uVar122 >> 0x28) | pbVar14[0x45] |
             (byte)((ulong)uVar176 >> 0x28) | (byte)((ulong)uVar140 >> 0x28);
    bVar34 = (byte)((ulong)uVar53 >> 0x30) | (byte)((ulong)uVar54 >> 0x30) |
             (byte)((ulong)uVar158 >> 0x30) | (byte)((ulong)uVar121 >> 0x30) |
             (byte)((ulong)uVar122 >> 0x30) | pbVar14[0x46] |
             (byte)((ulong)uVar176 >> 0x30) | (byte)((ulong)uVar140 >> 0x30);
    bVar35 = (byte)((ulong)uVar53 >> 0x38) | (byte)((ulong)uVar54 >> 0x38) |
             (byte)((ulong)uVar158 >> 0x38) | (byte)((ulong)uVar121 >> 0x38) |
             (byte)((ulong)uVar122 >> 0x38) | pbVar14[0x47] |
             (byte)((ulong)uVar176 >> 0x38) | (byte)((ulong)uVar140 >> 0x38);
    bVar36 = (byte)uVar71 | (byte)uVar72 | (byte)uVar167 | (byte)uVar131 |
             (byte)uVar105 | pbVar14[0x48] | (byte)uVar185 | (byte)uVar149;
    bVar37 = (byte)((ulong)uVar71 >> 8) | (byte)((ulong)uVar72 >> 8) |
             (byte)((ulong)uVar167 >> 8) | (byte)((ulong)uVar131 >> 8) |
             (byte)((ulong)uVar105 >> 8) | pbVar14[0x49] |
             (byte)((ulong)uVar185 >> 8) | (byte)((ulong)uVar149 >> 8);
    bVar38 = (byte)((ulong)uVar71 >> 0x10) | (byte)((ulong)uVar72 >> 0x10) |
             (byte)((ulong)uVar167 >> 0x10) | (byte)((ulong)uVar131 >> 0x10) |
             (byte)((ulong)uVar105 >> 0x10) | pbVar14[0x4a] |
             (byte)((ulong)uVar185 >> 0x10) | (byte)((ulong)uVar149 >> 0x10);
    bVar39 = (byte)((ulong)uVar71 >> 0x18) | (byte)((ulong)uVar72 >> 0x18) |
             (byte)((ulong)uVar167 >> 0x18) | (byte)((ulong)uVar131 >> 0x18) |
             (byte)((ulong)uVar105 >> 0x18) | pbVar14[0x4b] |
             (byte)((ulong)uVar185 >> 0x18) | (byte)((ulong)uVar149 >> 0x18);
    bVar40 = (byte)((ulong)uVar71 >> 0x20) | (byte)((ulong)uVar72 >> 0x20) |
             (byte)((ulong)uVar167 >> 0x20) | (byte)((ulong)uVar131 >> 0x20) |
             (byte)((ulong)uVar105 >> 0x20) | pbVar14[0x4c] |
             (byte)((ulong)uVar185 >> 0x20) | (byte)((ulong)uVar149 >> 0x20);
    bVar41 = (byte)((ulong)uVar71 >> 0x28) | (byte)((ulong)uVar72 >> 0x28) |
             (byte)((ulong)uVar167 >> 0x28) | (byte)((ulong)uVar131 >> 0x28) |
             (byte)((ulong)uVar105 >> 0x28) | pbVar14[0x4d] |
             (byte)((ulong)uVar185 >> 0x28) | (byte)((ulong)uVar149 >> 0x28);
    bVar42 = (byte)((ulong)uVar71 >> 0x30) | (byte)((ulong)uVar72 >> 0x30) |
             (byte)((ulong)uVar167 >> 0x30) | (byte)((ulong)uVar131 >> 0x30) |
             (byte)((ulong)uVar105 >> 0x30) | pbVar14[0x4e] |
             (byte)((ulong)uVar185 >> 0x30) | (byte)((ulong)uVar149 >> 0x30);
    bVar43 = (byte)((ulong)uVar71 >> 0x38) | (byte)((ulong)uVar72 >> 0x38) |
             (byte)((ulong)uVar167 >> 0x38) | (byte)((ulong)uVar131 >> 0x38) |
             (byte)((ulong)uVar105 >> 0x38) | pbVar14[0x4f] |
             (byte)((ulong)uVar185 >> 0x38) | (byte)((ulong)uVar149 >> 0x38);
    auVar45[1] = bVar29;
    auVar45[0] = bVar28;
    auVar45[2] = bVar30;
    auVar45[3] = bVar31;
    auVar45[4] = bVar32;
    auVar45[5] = bVar33;
    auVar45[6] = bVar34;
    auVar45[7] = bVar35;
    auVar45[8] = bVar36;
    auVar45[9] = bVar37;
    auVar45[10] = bVar38;
    auVar45[0xb] = bVar39;
    auVar45[0xc] = bVar40;
    auVar45[0xd] = bVar41;
    auVar45[0xe] = bVar42;
    auVar45[0xf] = bVar43;
    auVar2[1] = bVar29;
    auVar2[0] = bVar28;
    auVar2[2] = bVar30;
    auVar2[3] = bVar31;
    auVar2[4] = bVar32;
    auVar2[5] = bVar33;
    auVar2[6] = bVar34;
    auVar2[7] = bVar35;
    auVar2[8] = bVar36;
    auVar2[9] = bVar37;
    auVar2[10] = bVar38;
    auVar2[0xb] = bVar39;
    auVar2[0xc] = bVar40;
    auVar2[0xd] = bVar41;
    auVar2[0xe] = bVar42;
    auVar2[0xf] = bVar43;
    auVar45 = NEON_ext(auVar45,auVar2,8,1);
    pbVar12 = pbVar12 + 0x80;
    pbVar14 = pbVar14 + 0x80;
    pbVar16 = pbVar16 + 0x80;
    uVar19 = uVar19 - 0x80;
    if ((CONCAT17(bVar35 | auVar45[7],
                  CONCAT16(bVar34 | auVar45[6],
                           CONCAT15(bVar33 | auVar45[5],
                                    CONCAT14(bVar32 | auVar45[4],
                                             CONCAT13(bVar31 | auVar45[3],
                                                      CONCAT12(bVar30 | auVar45[2],
                                                               CONCAT11(bVar29 | auVar45[1],
                                                                        bVar28 | auVar45[0]))))))) &
        0x8080808080808080) != 0) {
      return false;
    }
  }
  if (puVar18 + -1 < puVar10) {
    uVar19 = 0;
  }
  else {
    pbVar21 = param_1 + param_2 + -7;
    pbVar1 = pbVar16;
    if (pbVar16 <= pbVar21) {
      pbVar1 = pbVar21;
    }
    if (pbVar1 + uVar19 < (byte *)0x18) {
      uVar19 = 0;
      puVar11 = puVar10;
    }
    else {
      uVar13 = ((ulong)(pbVar1 + uVar19) >> 3) + 1;
      if (pbVar16 <= pbVar21) {
        pbVar16 = pbVar21;
      }
      uVar19 = ((ulong)(pbVar16 + uVar19) >> 3) + 1 >> 2;
      puVar10 = (ulong *)(pbVar12 + uVar19 * 0x20);
      lVar17 = uVar19 << 2;
      bVar28 = 0;
      bVar30 = 0;
      bVar32 = 0;
      bVar34 = 0;
      bVar36 = 0;
      bVar38 = 0;
      bVar40 = 0;
      bVar42 = 0;
      bVar44 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar62 = 0;
      bVar80 = 0;
      bVar52 = 0;
      bVar56 = 0;
      bVar29 = 0;
      bVar31 = 0;
      bVar33 = 0;
      bVar35 = 0;
      bVar37 = 0;
      bVar39 = 0;
      bVar41 = 0;
      bVar43 = 0;
      bVar58 = 0;
      bVar60 = 0;
      bVar64 = 0;
      bVar66 = 0;
      bVar68 = 0;
      bVar70 = 0;
      bVar74 = 0;
      bVar76 = 0;
      do {
        uVar72 = *(undefined8 *)(pbVar14 + -8);
        uVar54 = *(undefined8 *)(pbVar14 + -0x10);
        uVar71 = *(undefined8 *)(pbVar14 + 8);
        uVar53 = *(undefined8 *)pbVar14;
        bVar28 = (byte)uVar54 | bVar28;
        bVar30 = (byte)((ulong)uVar54 >> 8) | bVar30;
        bVar32 = (byte)((ulong)uVar54 >> 0x10) | bVar32;
        bVar34 = (byte)((ulong)uVar54 >> 0x18) | bVar34;
        bVar36 = (byte)((ulong)uVar54 >> 0x20) | bVar36;
        bVar38 = (byte)((ulong)uVar54 >> 0x28) | bVar38;
        bVar40 = (byte)((ulong)uVar54 >> 0x30) | bVar40;
        bVar42 = (byte)((ulong)uVar54 >> 0x38) | bVar42;
        bVar44 = (byte)uVar72 | bVar44;
        bVar48 = (byte)((ulong)uVar72 >> 8) | bVar48;
        bVar49 = (byte)((ulong)uVar72 >> 0x10) | bVar49;
        bVar50 = (byte)((ulong)uVar72 >> 0x18) | bVar50;
        bVar62 = (byte)((ulong)uVar72 >> 0x20) | bVar62;
        bVar80 = (byte)((ulong)uVar72 >> 0x28) | bVar80;
        bVar52 = (byte)((ulong)uVar72 >> 0x30) | bVar52;
        bVar56 = (byte)((ulong)uVar72 >> 0x38) | bVar56;
        bVar29 = (byte)uVar53 | bVar29;
        bVar31 = (byte)((ulong)uVar53 >> 8) | bVar31;
        bVar33 = (byte)((ulong)uVar53 >> 0x10) | bVar33;
        bVar35 = (byte)((ulong)uVar53 >> 0x18) | bVar35;
        bVar37 = (byte)((ulong)uVar53 >> 0x20) | bVar37;
        bVar39 = (byte)((ulong)uVar53 >> 0x28) | bVar39;
        bVar41 = (byte)((ulong)uVar53 >> 0x30) | bVar41;
        bVar43 = (byte)((ulong)uVar53 >> 0x38) | bVar43;
        bVar58 = (byte)uVar71 | bVar58;
        bVar60 = (byte)((ulong)uVar71 >> 8) | bVar60;
        bVar64 = (byte)((ulong)uVar71 >> 0x10) | bVar64;
        bVar66 = (byte)((ulong)uVar71 >> 0x18) | bVar66;
        bVar68 = (byte)((ulong)uVar71 >> 0x20) | bVar68;
        bVar70 = (byte)((ulong)uVar71 >> 0x28) | bVar70;
        bVar74 = (byte)((ulong)uVar71 >> 0x30) | bVar74;
        bVar76 = (byte)((ulong)uVar71 >> 0x38) | bVar76;
        pbVar14 = pbVar14 + 0x20;
        lVar17 = lVar17 + -4;
      } while (lVar17 != 0);
      bVar29 = bVar29 | bVar28;
      bVar31 = bVar31 | bVar30;
      bVar33 = bVar33 | bVar32;
      bVar35 = bVar35 | bVar34;
      bVar37 = bVar37 | bVar36;
      bVar39 = bVar39 | bVar38;
      bVar41 = bVar41 | bVar40;
      bVar43 = bVar43 | bVar42;
      auVar7[1] = bVar31;
      auVar7[0] = bVar29;
      auVar7[2] = bVar33;
      auVar7[3] = bVar35;
      auVar7[4] = bVar37;
      auVar7[5] = bVar39;
      auVar7[6] = bVar41;
      auVar7[7] = bVar43;
      auVar7[8] = bVar58 | bVar44;
      auVar7[9] = bVar60 | bVar48;
      auVar7[10] = bVar64 | bVar49;
      auVar7[0xb] = bVar66 | bVar50;
      auVar7[0xc] = bVar68 | bVar62;
      auVar7[0xd] = bVar70 | bVar80;
      auVar7[0xe] = bVar74 | bVar52;
      auVar7[0xf] = bVar76 | bVar56;
      auVar8[1] = bVar31;
      auVar8[0] = bVar29;
      auVar8[2] = bVar33;
      auVar8[3] = bVar35;
      auVar8[4] = bVar37;
      auVar8[5] = bVar39;
      auVar8[6] = bVar41;
      auVar8[7] = bVar43;
      auVar8[8] = bVar58 | bVar44;
      auVar8[9] = bVar60 | bVar48;
      auVar8[10] = bVar64 | bVar49;
      auVar8[0xb] = bVar66 | bVar50;
      auVar8[0xc] = bVar68 | bVar62;
      auVar8[0xd] = bVar70 | bVar80;
      auVar8[0xe] = bVar74 | bVar52;
      auVar8[0xf] = bVar76 | bVar56;
      auVar45 = NEON_ext(auVar7,auVar8,8,1);
      uVar19 = CONCAT17(bVar43 | auVar45[7],
                        CONCAT16(bVar41 | auVar45[6],
                                 CONCAT15(bVar39 | auVar45[5],
                                          CONCAT14(bVar37 | auVar45[4],
                                                   CONCAT13(bVar35 | auVar45[3],
                                                            CONCAT12(bVar33 | auVar45[2],
                                                                     CONCAT11(bVar31 | auVar45[1],
                                                                              bVar29 | auVar45[0])))
                                                  ))));
      puVar11 = puVar10;
      if (uVar13 == (uVar13 & 0x3ffffffffffffffc)) goto LAB_1001661a4;
    }
    do {
      puVar10 = puVar11 + 1;
      uVar19 = *puVar11 | uVar19;
      puVar11 = puVar10;
    } while (puVar10 <= puVar18 + -1);
  }
LAB_1001661a4:
  if (puVar18 <= puVar10) goto LAB_1001663d0;
  uVar13 = (long)(param_1 + param_2) - (long)puVar10;
  if (7 < uVar13) {
    if (uVar13 < 0x20) {
      uVar15 = 0;
    }
    else {
      uVar15 = uVar13 & 0xffffffffffffffe0;
      bVar44 = 0;
      bVar48 = 0;
      bVar49 = 0;
      bVar50 = 0;
      bVar62 = 0;
      bVar80 = 0;
      bVar52 = 0;
      bVar56 = 0;
      bVar58 = 0;
      bVar60 = 0;
      bVar64 = 0;
      bVar66 = 0;
      bVar68 = 0;
      bVar70 = 0;
      bVar74 = 0;
      bVar76 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar28 = (byte)uVar19;
      bVar29 = (byte)(uVar19 >> 8);
      bVar30 = (byte)(uVar19 >> 0x10);
      bVar31 = (byte)(uVar19 >> 0x18);
      bVar32 = (byte)(uVar19 >> 0x20);
      bVar33 = (byte)(uVar19 >> 0x28);
      bVar34 = (byte)(uVar19 >> 0x30);
      bVar35 = (byte)(uVar19 >> 0x38);
      puVar18 = puVar10 + 2;
      uVar54 = 0;
      uVar72 = 0;
      uVar158 = 0;
      uVar167 = 0;
      uVar53 = 0;
      uVar71 = 0;
      uVar121 = 0;
      uVar131 = 0;
      uVar122 = 0;
      uVar105 = 0;
      bVar113 = 0;
      bVar115 = 0;
      bVar117 = 0;
      bVar119 = 0;
      bVar193 = 0;
      bVar194 = 0;
      bVar195 = 0;
      bVar196 = 0;
      bVar197 = 0;
      bVar198 = 0;
      bVar199 = 0;
      bVar200 = 0;
      bVar201 = 0;
      bVar202 = 0;
      bVar203 = 0;
      bVar204 = 0;
      uVar140 = 0;
      uVar149 = 0;
      bVar221 = 0;
      bVar222 = 0;
      bVar223 = 0;
      bVar224 = 0;
      bVar225 = 0;
      bVar226 = 0;
      bVar227 = 0;
      bVar228 = 0;
      bVar229 = 0;
      bVar230 = 0;
      bVar231 = 0;
      bVar232 = 0;
      bVar233 = 0;
      bVar234 = 0;
      bVar235 = 0;
      bVar236 = 0;
      bVar205 = 0;
      bVar206 = 0;
      bVar207 = 0;
      bVar208 = 0;
      bVar209 = 0;
      bVar210 = 0;
      bVar211 = 0;
      bVar212 = 0;
      bVar213 = 0;
      bVar214 = 0;
      bVar215 = 0;
      bVar216 = 0;
      bVar217 = 0;
      bVar218 = 0;
      bVar219 = 0;
      bVar220 = 0;
      bVar269 = 0;
      bVar270 = 0;
      bVar271 = 0;
      bVar272 = 0;
      bVar273 = 0;
      bVar274 = 0;
      bVar275 = 0;
      bVar276 = 0;
      bVar277 = 0;
      bVar278 = 0;
      bVar279 = 0;
      bVar280 = 0;
      bVar281 = 0;
      bVar282 = 0;
      bVar283 = 0;
      bVar284 = 0;
      bVar78 = 0;
      bVar82 = 0;
      bVar84 = 0;
      bVar86 = 0;
      bVar88 = 0;
      bVar90 = 0;
      bVar92 = 0;
      bVar94 = 0;
      bVar96 = 0;
      bVar98 = 0;
      bVar100 = 0;
      bVar102 = 0;
      bVar104 = 0;
      bVar107 = 0;
      bVar109 = 0;
      bVar111 = 0;
      bVar253 = 0;
      bVar254 = 0;
      bVar255 = 0;
      bVar256 = 0;
      bVar257 = 0;
      bVar258 = 0;
      bVar259 = 0;
      bVar260 = 0;
      bVar261 = 0;
      bVar262 = 0;
      bVar263 = 0;
      bVar264 = 0;
      bVar265 = 0;
      bVar266 = 0;
      bVar267 = 0;
      bVar268 = 0;
      bVar237 = 0;
      bVar238 = 0;
      bVar239 = 0;
      bVar240 = 0;
      bVar241 = 0;
      bVar242 = 0;
      bVar243 = 0;
      bVar244 = 0;
      bVar245 = 0;
      bVar246 = 0;
      bVar247 = 0;
      bVar248 = 0;
      bVar249 = 0;
      bVar250 = 0;
      bVar251 = 0;
      bVar252 = 0;
      bVar285 = 0;
      bVar286 = 0;
      bVar287 = 0;
      bVar288 = 0;
      bVar289 = 0;
      bVar290 = 0;
      bVar291 = 0;
      bVar292 = 0;
      bVar293 = 0;
      bVar294 = 0;
      bVar295 = 0;
      bVar296 = 0;
      bVar297 = 0;
      bVar298 = 0;
      bVar299 = 0;
      bVar300 = 0;
      uVar19 = uVar15;
      do {
        uVar301 = puVar18[-1];
        uVar20 = puVar18[-2];
        uVar303 = puVar18[1];
        uVar302 = *puVar18;
        bVar157 = (byte)uVar20;
        bVar160 = (byte)(uVar20 >> 8);
        bVar163 = (byte)(uVar20 >> 0x10);
        bVar166 = (byte)(uVar20 >> 0x18);
        bVar61 = (byte)(uVar20 >> 0x20);
        bVar79 = (byte)(uVar20 >> 0x28);
        bVar67 = (byte)(uVar20 >> 0x30);
        bVar69 = (byte)(uVar20 >> 0x38);
        bVar51 = (byte)uVar301;
        bVar55 = (byte)(uVar301 >> 8);
        bVar57 = (byte)(uVar301 >> 0x10);
        bVar59 = (byte)(uVar301 >> 0x18);
        bVar63 = (byte)(uVar301 >> 0x20);
        bVar65 = (byte)(uVar301 >> 0x28);
        bVar22 = (byte)(uVar301 >> 0x30);
        bVar25 = (byte)(uVar301 >> 0x38);
        bVar162 = (byte)uVar302;
        bVar171 = (byte)(uVar302 >> 8);
        bVar164 = (byte)(uVar302 >> 0x10);
        bVar168 = (byte)(uVar302 >> 0x18);
        bVar170 = (byte)(uVar302 >> 0x20);
        bVar173 = (byte)(uVar302 >> 0x28);
        bVar23 = (byte)(uVar302 >> 0x30);
        bVar26 = (byte)(uVar302 >> 0x38);
        bVar159 = (byte)uVar303;
        bVar161 = (byte)(uVar303 >> 8);
        bVar165 = (byte)(uVar303 >> 0x10);
        bVar169 = (byte)(uVar303 >> 0x18);
        bVar172 = (byte)(uVar303 >> 0x20);
        bVar174 = (byte)(uVar303 >> 0x28);
        bVar24 = (byte)(uVar303 >> 0x30);
        bVar27 = (byte)(uVar303 >> 0x38);
        bVar139 = (byte)uVar121 | bVar57;
        bVar141 = (byte)((ulong)uVar121 >> 8) | (char)bVar57 >> 7;
        bVar143 = (byte)((short)(char)bVar57 >> 0xf);
        bVar142 = (byte)((ulong)uVar121 >> 0x10) | bVar143;
        bVar143 = (byte)((ulong)uVar121 >> 0x18) | bVar143;
        bVar147 = (byte)((int)(short)(char)bVar57 >> 0x1f);
        bVar144 = (byte)((ulong)uVar121 >> 0x20) | bVar147;
        bVar145 = (byte)((ulong)uVar121 >> 0x28) | bVar147;
        bVar146 = (byte)((ulong)uVar121 >> 0x30) | bVar147;
        bVar147 = (byte)((ulong)uVar121 >> 0x38) | bVar147;
        uVar121 = CONCAT17(bVar147,CONCAT16(bVar146,CONCAT15(bVar145,CONCAT14(bVar144,CONCAT13(
                                                  bVar143,CONCAT12(bVar142,CONCAT11(bVar141,bVar139)
                                                                  ))))));
        bVar148 = (byte)uVar131 | bVar59;
        bVar150 = (byte)((ulong)uVar131 >> 8) | (char)bVar59 >> 7;
        bVar152 = (byte)((short)(char)bVar59 >> 0xf);
        bVar151 = (byte)((ulong)uVar131 >> 0x10) | bVar152;
        bVar152 = (byte)((ulong)uVar131 >> 0x18) | bVar152;
        bVar156 = (byte)((int)(short)(char)bVar59 >> 0x1f);
        bVar153 = (byte)((ulong)uVar131 >> 0x20) | bVar156;
        bVar154 = (byte)((ulong)uVar131 >> 0x28) | bVar156;
        bVar155 = (byte)((ulong)uVar131 >> 0x30) | bVar156;
        bVar156 = (byte)((ulong)uVar131 >> 0x38) | bVar156;
        uVar131 = CONCAT17(bVar156,CONCAT16(bVar155,CONCAT15(bVar154,CONCAT14(bVar153,CONCAT13(
                                                  bVar152,CONCAT12(bVar151,CONCAT11(bVar150,bVar148)
                                                                  ))))));
        bVar175 = (byte)uVar158 | bVar67;
        bVar177 = (byte)((ulong)uVar158 >> 8) | (char)bVar67 >> 7;
        bVar179 = (byte)((short)(char)bVar67 >> 0xf);
        bVar178 = (byte)((ulong)uVar158 >> 0x10) | bVar179;
        bVar179 = (byte)((ulong)uVar158 >> 0x18) | bVar179;
        bVar183 = (byte)((int)(short)(char)bVar67 >> 0x1f);
        bVar180 = (byte)((ulong)uVar158 >> 0x20) | bVar183;
        bVar181 = (byte)((ulong)uVar158 >> 0x28) | bVar183;
        bVar182 = (byte)((ulong)uVar158 >> 0x30) | bVar183;
        bVar183 = (byte)((ulong)uVar158 >> 0x38) | bVar183;
        uVar158 = CONCAT17(bVar183,CONCAT16(bVar182,CONCAT15(bVar181,CONCAT14(bVar180,CONCAT13(
                                                  bVar179,CONCAT12(bVar178,CONCAT11(bVar177,bVar175)
                                                                  ))))));
        bVar184 = (byte)uVar167 | bVar69;
        bVar186 = (byte)((ulong)uVar167 >> 8) | (char)bVar69 >> 7;
        bVar188 = (byte)((short)(char)bVar69 >> 0xf);
        bVar187 = (byte)((ulong)uVar167 >> 0x10) | bVar188;
        bVar188 = (byte)((ulong)uVar167 >> 0x18) | bVar188;
        bVar192 = (byte)((int)(short)(char)bVar69 >> 0x1f);
        bVar189 = (byte)((ulong)uVar167 >> 0x20) | bVar192;
        bVar190 = (byte)((ulong)uVar167 >> 0x28) | bVar192;
        bVar191 = (byte)((ulong)uVar167 >> 0x30) | bVar192;
        bVar192 = (byte)((ulong)uVar167 >> 0x38) | bVar192;
        uVar167 = CONCAT17(bVar192,CONCAT16(bVar191,CONCAT15(bVar190,CONCAT14(bVar189,CONCAT13(
                                                  bVar188,CONCAT12(bVar187,CONCAT11(bVar186,bVar184)
                                                                  ))))));
        bVar120 = (byte)uVar122 | bVar63;
        bVar123 = (byte)((ulong)uVar122 >> 8) | (char)bVar63 >> 7;
        bVar125 = (byte)((short)(char)bVar63 >> 0xf);
        bVar124 = (byte)((ulong)uVar122 >> 0x10) | bVar125;
        bVar125 = (byte)((ulong)uVar122 >> 0x18) | bVar125;
        bVar129 = (byte)((int)(short)(char)bVar63 >> 0x1f);
        bVar126 = (byte)((ulong)uVar122 >> 0x20) | bVar129;
        bVar127 = (byte)((ulong)uVar122 >> 0x28) | bVar129;
        bVar128 = (byte)((ulong)uVar122 >> 0x30) | bVar129;
        bVar129 = (byte)((ulong)uVar122 >> 0x38) | bVar129;
        uVar122 = CONCAT17(bVar129,CONCAT16(bVar128,CONCAT15(bVar127,CONCAT14(bVar126,CONCAT13(
                                                  bVar125,CONCAT12(bVar124,CONCAT11(bVar123,bVar120)
                                                                  ))))));
        bVar130 = (byte)uVar105 | bVar65;
        bVar132 = (byte)((ulong)uVar105 >> 8) | (char)bVar65 >> 7;
        bVar134 = (byte)((short)(char)bVar65 >> 0xf);
        bVar133 = (byte)((ulong)uVar105 >> 0x10) | bVar134;
        bVar134 = (byte)((ulong)uVar105 >> 0x18) | bVar134;
        bVar138 = (byte)((int)(short)(char)bVar65 >> 0x1f);
        bVar135 = (byte)((ulong)uVar105 >> 0x20) | bVar138;
        bVar136 = (byte)((ulong)uVar105 >> 0x28) | bVar138;
        bVar137 = (byte)((ulong)uVar105 >> 0x30) | bVar138;
        bVar138 = (byte)((ulong)uVar105 >> 0x38) | bVar138;
        uVar105 = CONCAT17(bVar138,CONCAT16(bVar137,CONCAT15(bVar136,CONCAT14(bVar135,CONCAT13(
                                                  bVar134,CONCAT12(bVar133,CONCAT11(bVar132,bVar130)
                                                                  ))))));
        bVar87 = (byte)uVar53 | bVar51;
        bVar89 = (byte)((ulong)uVar53 >> 8) | (char)bVar51 >> 7;
        bVar93 = (byte)((short)(char)bVar51 >> 0xf);
        bVar91 = (byte)((ulong)uVar53 >> 0x10) | bVar93;
        bVar93 = (byte)((ulong)uVar53 >> 0x18) | bVar93;
        bVar101 = (byte)((int)(short)(char)bVar51 >> 0x1f);
        bVar95 = (byte)((ulong)uVar53 >> 0x20) | bVar101;
        bVar97 = (byte)((ulong)uVar53 >> 0x28) | bVar101;
        bVar99 = (byte)((ulong)uVar53 >> 0x30) | bVar101;
        bVar101 = (byte)((ulong)uVar53 >> 0x38) | bVar101;
        uVar53 = CONCAT17(bVar101,CONCAT16(bVar99,CONCAT15(bVar97,CONCAT14(bVar95,CONCAT13(bVar93,
                                                  CONCAT12(bVar91,CONCAT11(bVar89,bVar87)))))));
        bVar103 = (byte)uVar71 | bVar55;
        bVar106 = (byte)((ulong)uVar71 >> 8) | (char)bVar55 >> 7;
        bVar110 = (byte)((short)(char)bVar55 >> 0xf);
        bVar108 = (byte)((ulong)uVar71 >> 0x10) | bVar110;
        bVar110 = (byte)((ulong)uVar71 >> 0x18) | bVar110;
        bVar118 = (byte)((int)(short)(char)bVar55 >> 0x1f);
        bVar112 = (byte)((ulong)uVar71 >> 0x20) | bVar118;
        bVar114 = (byte)((ulong)uVar71 >> 0x28) | bVar118;
        bVar116 = (byte)((ulong)uVar71 >> 0x30) | bVar118;
        bVar118 = (byte)((ulong)uVar71 >> 0x38) | bVar118;
        uVar71 = CONCAT17(bVar118,CONCAT16(bVar116,CONCAT15(bVar114,CONCAT14(bVar112,CONCAT13(
                                                  bVar110,CONCAT12(bVar108,CONCAT11(bVar106,bVar103)
                                                                  ))))));
        bVar51 = (byte)uVar54 | bVar61;
        bVar55 = (byte)((ulong)uVar54 >> 8) | (char)bVar61 >> 7;
        bVar59 = (byte)((short)(char)bVar61 >> 0xf);
        bVar57 = (byte)((ulong)uVar54 >> 0x10) | bVar59;
        bVar59 = (byte)((ulong)uVar54 >> 0x18) | bVar59;
        bVar67 = (byte)((int)(short)(char)bVar61 >> 0x1f);
        bVar61 = (byte)((ulong)uVar54 >> 0x20) | bVar67;
        bVar63 = (byte)((ulong)uVar54 >> 0x28) | bVar67;
        bVar65 = (byte)((ulong)uVar54 >> 0x30) | bVar67;
        bVar67 = (byte)((ulong)uVar54 >> 0x38) | bVar67;
        uVar54 = CONCAT17(bVar67,CONCAT16(bVar65,CONCAT15(bVar63,CONCAT14(bVar61,CONCAT13(bVar59,
                                                  CONCAT12(bVar57,CONCAT11(bVar55,bVar51)))))));
        bVar69 = (byte)uVar72 | bVar79;
        bVar73 = (byte)((ulong)uVar72 >> 8) | (char)bVar79 >> 7;
        bVar77 = (byte)((short)(char)bVar79 >> 0xf);
        bVar75 = (byte)((ulong)uVar72 >> 0x10) | bVar77;
        bVar77 = (byte)((ulong)uVar72 >> 0x18) | bVar77;
        bVar85 = (byte)((int)(short)(char)bVar79 >> 0x1f);
        bVar79 = (byte)((ulong)uVar72 >> 0x20) | bVar85;
        bVar81 = (byte)((ulong)uVar72 >> 0x28) | bVar85;
        bVar83 = (byte)((ulong)uVar72 >> 0x30) | bVar85;
        bVar85 = (byte)((ulong)uVar72 >> 0x38) | bVar85;
        uVar72 = CONCAT17(bVar85,CONCAT16(bVar83,CONCAT15(bVar81,CONCAT14(bVar79,CONCAT13(bVar77,
                                                  CONCAT12(bVar75,CONCAT11(bVar73,bVar69)))))));
        bVar44 = bVar44 | bVar163;
        bVar48 = bVar48 | (char)bVar163 >> 7;
        bVar304 = (byte)((short)(char)bVar163 >> 0xf);
        bVar49 = bVar49 | bVar304;
        bVar50 = bVar50 | bVar304;
        bVar163 = (byte)((int)(short)(char)bVar163 >> 0x1f);
        bVar62 = bVar62 | bVar163;
        bVar80 = bVar80 | bVar163;
        bVar52 = bVar52 | bVar163;
        bVar56 = bVar56 | bVar163;
        bVar58 = bVar58 | bVar166;
        bVar60 = bVar60 | (char)bVar166 >> 7;
        bVar163 = (byte)((short)(char)bVar166 >> 0xf);
        bVar64 = bVar64 | bVar163;
        bVar66 = bVar66 | bVar163;
        bVar163 = (byte)((int)(short)(char)bVar166 >> 0x1f);
        bVar68 = bVar68 | bVar163;
        bVar70 = bVar70 | bVar163;
        bVar74 = bVar74 | bVar163;
        bVar76 = bVar76 | bVar163;
        bVar113 = bVar113 | bVar22;
        bVar115 = bVar115 | (char)bVar22 >> 7;
        bVar163 = (byte)((short)(char)bVar22 >> 0xf);
        bVar117 = bVar117 | bVar163;
        bVar119 = bVar119 | bVar163;
        bVar163 = (byte)((int)(short)(char)bVar22 >> 0x1f);
        bVar193 = bVar193 | bVar163;
        bVar194 = bVar194 | bVar163;
        bVar195 = bVar195 | bVar163;
        bVar196 = bVar196 | bVar163;
        bVar197 = bVar197 | bVar25;
        bVar198 = bVar198 | (char)bVar25 >> 7;
        bVar163 = (byte)((short)(char)bVar25 >> 0xf);
        bVar199 = bVar199 | bVar163;
        bVar200 = bVar200 | bVar163;
        bVar163 = (byte)((int)(short)(char)bVar25 >> 0x1f);
        bVar201 = bVar201 | bVar163;
        bVar202 = bVar202 | bVar163;
        bVar203 = bVar203 | bVar163;
        bVar204 = bVar204 | bVar163;
        bVar28 = bVar28 | bVar157;
        bVar29 = bVar29 | (char)bVar157 >> 7;
        bVar163 = (byte)((short)(char)bVar157 >> 0xf);
        bVar30 = bVar30 | bVar163;
        bVar31 = bVar31 | bVar163;
        bVar157 = (byte)((int)(short)(char)bVar157 >> 0x1f);
        bVar32 = bVar32 | bVar157;
        bVar33 = bVar33 | bVar157;
        bVar34 = bVar34 | bVar157;
        bVar35 = bVar35 | bVar157;
        bVar36 = bVar36 | bVar160;
        bVar37 = bVar37 | (char)bVar160 >> 7;
        bVar157 = (byte)((short)(char)bVar160 >> 0xf);
        bVar38 = bVar38 | bVar157;
        bVar39 = bVar39 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar160 >> 0x1f);
        bVar40 = bVar40 | bVar157;
        bVar41 = bVar41 | bVar157;
        bVar42 = bVar42 | bVar157;
        bVar43 = bVar43 | bVar157;
        bVar253 = bVar253 | bVar165;
        bVar254 = bVar254 | (char)bVar165 >> 7;
        bVar157 = (byte)((short)(char)bVar165 >> 0xf);
        bVar255 = bVar255 | bVar157;
        bVar256 = bVar256 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar165 >> 0x1f);
        bVar257 = bVar257 | bVar157;
        bVar258 = bVar258 | bVar157;
        bVar259 = bVar259 | bVar157;
        bVar260 = bVar260 | bVar157;
        bVar261 = bVar261 | bVar169;
        bVar262 = bVar262 | (char)bVar169 >> 7;
        bVar157 = (byte)((short)(char)bVar169 >> 0xf);
        bVar263 = bVar263 | bVar157;
        bVar264 = bVar264 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar169 >> 0x1f);
        bVar265 = bVar265 | bVar157;
        bVar266 = bVar266 | bVar157;
        bVar267 = bVar267 | bVar157;
        bVar268 = bVar268 | bVar157;
        bVar269 = bVar269 | bVar23;
        bVar270 = bVar270 | (char)bVar23 >> 7;
        bVar157 = (byte)((short)(char)bVar23 >> 0xf);
        bVar271 = bVar271 | bVar157;
        bVar272 = bVar272 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar23 >> 0x1f);
        bVar273 = bVar273 | bVar157;
        bVar274 = bVar274 | bVar157;
        bVar275 = bVar275 | bVar157;
        bVar276 = bVar276 | bVar157;
        bVar277 = bVar277 | bVar26;
        bVar278 = bVar278 | (char)bVar26 >> 7;
        bVar157 = (byte)((short)(char)bVar26 >> 0xf);
        bVar279 = bVar279 | bVar157;
        bVar280 = bVar280 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar26 >> 0x1f);
        bVar281 = bVar281 | bVar157;
        bVar282 = bVar282 | bVar157;
        bVar283 = bVar283 | bVar157;
        bVar284 = bVar284 | bVar157;
        bVar237 = bVar237 | bVar172;
        bVar238 = bVar238 | (char)bVar172 >> 7;
        bVar157 = (byte)((short)(char)bVar172 >> 0xf);
        bVar239 = bVar239 | bVar157;
        bVar240 = bVar240 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar172 >> 0x1f);
        bVar241 = bVar241 | bVar157;
        bVar242 = bVar242 | bVar157;
        bVar243 = bVar243 | bVar157;
        bVar244 = bVar244 | bVar157;
        bVar245 = bVar245 | bVar174;
        bVar246 = bVar246 | (char)bVar174 >> 7;
        bVar157 = (byte)((short)(char)bVar174 >> 0xf);
        bVar247 = bVar247 | bVar157;
        bVar248 = bVar248 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar174 >> 0x1f);
        bVar249 = bVar249 | bVar157;
        bVar250 = bVar250 | bVar157;
        bVar251 = bVar251 | bVar157;
        bVar252 = bVar252 | bVar157;
        bVar78 = bVar78 | bVar159;
        bVar82 = bVar82 | (char)bVar159 >> 7;
        bVar157 = (byte)((short)(char)bVar159 >> 0xf);
        bVar84 = bVar84 | bVar157;
        bVar86 = bVar86 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar159 >> 0x1f);
        bVar88 = bVar88 | bVar157;
        bVar90 = bVar90 | bVar157;
        bVar92 = bVar92 | bVar157;
        bVar94 = bVar94 | bVar157;
        bVar96 = bVar96 | bVar161;
        bVar98 = bVar98 | (char)bVar161 >> 7;
        bVar157 = (byte)((short)(char)bVar161 >> 0xf);
        bVar100 = bVar100 | bVar157;
        bVar102 = bVar102 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar161 >> 0x1f);
        bVar104 = bVar104 | bVar157;
        bVar107 = bVar107 | bVar157;
        bVar109 = bVar109 | bVar157;
        bVar111 = bVar111 | bVar157;
        bVar205 = bVar205 | bVar170;
        bVar206 = bVar206 | (char)bVar170 >> 7;
        bVar157 = (byte)((short)(char)bVar170 >> 0xf);
        bVar207 = bVar207 | bVar157;
        bVar208 = bVar208 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar170 >> 0x1f);
        bVar209 = bVar209 | bVar157;
        bVar210 = bVar210 | bVar157;
        bVar211 = bVar211 | bVar157;
        bVar212 = bVar212 | bVar157;
        bVar213 = bVar213 | bVar173;
        bVar214 = bVar214 | (char)bVar173 >> 7;
        bVar157 = (byte)((short)(char)bVar173 >> 0xf);
        bVar215 = bVar215 | bVar157;
        bVar216 = bVar216 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar173 >> 0x1f);
        bVar217 = bVar217 | bVar157;
        bVar218 = bVar218 | bVar157;
        bVar219 = bVar219 | bVar157;
        bVar220 = bVar220 | bVar157;
        bVar221 = bVar221 | bVar164;
        bVar222 = bVar222 | (char)bVar164 >> 7;
        bVar157 = (byte)((short)(char)bVar164 >> 0xf);
        bVar223 = bVar223 | bVar157;
        bVar224 = bVar224 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar164 >> 0x1f);
        bVar225 = bVar225 | bVar157;
        bVar226 = bVar226 | bVar157;
        bVar227 = bVar227 | bVar157;
        bVar228 = bVar228 | bVar157;
        bVar229 = bVar229 | bVar168;
        bVar230 = bVar230 | (char)bVar168 >> 7;
        bVar157 = (byte)((short)(char)bVar168 >> 0xf);
        bVar231 = bVar231 | bVar157;
        bVar232 = bVar232 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar168 >> 0x1f);
        bVar233 = bVar233 | bVar157;
        bVar234 = bVar234 | bVar157;
        bVar235 = bVar235 | bVar157;
        bVar236 = bVar236 | bVar157;
        bVar285 = bVar285 | bVar24;
        bVar286 = bVar286 | (char)bVar24 >> 7;
        bVar157 = (byte)((short)(char)bVar24 >> 0xf);
        bVar287 = bVar287 | bVar157;
        bVar288 = bVar288 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar24 >> 0x1f);
        bVar289 = bVar289 | bVar157;
        bVar290 = bVar290 | bVar157;
        bVar291 = bVar291 | bVar157;
        bVar292 = bVar292 | bVar157;
        bVar293 = bVar293 | bVar27;
        bVar294 = bVar294 | (char)bVar27 >> 7;
        bVar157 = (byte)((short)(char)bVar27 >> 0xf);
        bVar295 = bVar295 | bVar157;
        bVar296 = bVar296 | bVar157;
        bVar157 = (byte)((int)(short)(char)bVar27 >> 0x1f);
        bVar297 = bVar297 | bVar157;
        bVar298 = bVar298 | bVar157;
        bVar299 = bVar299 | bVar157;
        bVar300 = bVar300 | bVar157;
        puVar18 = puVar18 + 4;
        bVar157 = (byte)uVar140 | bVar162;
        bVar159 = (byte)((ulong)uVar140 >> 8) | (char)bVar162 >> 7;
        bVar161 = (byte)((short)(char)bVar162 >> 0xf);
        bVar160 = (byte)((ulong)uVar140 >> 0x10) | bVar161;
        bVar161 = (byte)((ulong)uVar140 >> 0x18) | bVar161;
        bVar165 = (byte)((int)(short)(char)bVar162 >> 0x1f);
        bVar162 = (byte)((ulong)uVar140 >> 0x20) | bVar165;
        bVar163 = (byte)((ulong)uVar140 >> 0x28) | bVar165;
        bVar164 = (byte)((ulong)uVar140 >> 0x30) | bVar165;
        bVar165 = (byte)((ulong)uVar140 >> 0x38) | bVar165;
        uVar140 = CONCAT17(bVar165,CONCAT16(bVar164,CONCAT15(bVar163,CONCAT14(bVar162,CONCAT13(
                                                  bVar161,CONCAT12(bVar160,CONCAT11(bVar159,bVar157)
                                                                  ))))));
        bVar166 = (byte)uVar149 | bVar171;
        bVar168 = (byte)((ulong)uVar149 >> 8) | (char)bVar171 >> 7;
        bVar170 = (byte)((short)(char)bVar171 >> 0xf);
        bVar169 = (byte)((ulong)uVar149 >> 0x10) | bVar170;
        bVar170 = (byte)((ulong)uVar149 >> 0x18) | bVar170;
        bVar174 = (byte)((int)(short)(char)bVar171 >> 0x1f);
        bVar171 = (byte)((ulong)uVar149 >> 0x20) | bVar174;
        bVar172 = (byte)((ulong)uVar149 >> 0x28) | bVar174;
        bVar173 = (byte)((ulong)uVar149 >> 0x30) | bVar174;
        bVar174 = (byte)((ulong)uVar149 >> 0x38) | bVar174;
        uVar149 = CONCAT17(bVar174,CONCAT16(bVar173,CONCAT15(bVar172,CONCAT14(bVar171,CONCAT13(
                                                  bVar170,CONCAT12(bVar169,CONCAT11(bVar168,bVar166)
                                                                  ))))));
        uVar19 = uVar19 - 0x20;
      } while (uVar19 != 0);
      bVar28 = bVar157 | bVar28 | bVar78 | bVar87 | bVar205 | bVar51 | bVar237 | bVar120 |
               bVar221 | bVar44 | bVar253 | bVar139 | bVar269 | bVar175 | bVar285 | bVar113;
      bVar29 = bVar159 | bVar29 | bVar82 | bVar89 | bVar206 | bVar55 | bVar238 | bVar123 |
               bVar222 | bVar48 | bVar254 | bVar141 | bVar270 | bVar177 | bVar286 | bVar115;
      bVar30 = bVar160 | bVar30 | bVar84 | bVar91 | bVar207 | bVar57 | bVar239 | bVar124 |
               bVar223 | bVar49 | bVar255 | bVar142 | bVar271 | bVar178 | bVar287 | bVar117;
      bVar31 = bVar161 | bVar31 | bVar86 | bVar93 | bVar208 | bVar59 | bVar240 | bVar125 |
               bVar224 | bVar50 | bVar256 | bVar143 | bVar272 | bVar179 | bVar288 | bVar119;
      bVar32 = bVar162 | bVar32 | bVar88 | bVar95 | bVar209 | bVar61 | bVar241 | bVar126 |
               bVar225 | bVar62 | bVar257 | bVar144 | bVar273 | bVar180 | bVar289 | bVar193;
      bVar33 = bVar163 | bVar33 | bVar90 | bVar97 | bVar210 | bVar63 | bVar242 | bVar127 |
               bVar226 | bVar80 | bVar258 | bVar145 | bVar274 | bVar181 | bVar290 | bVar194;
      bVar34 = bVar164 | bVar34 | bVar92 | bVar99 | bVar211 | bVar65 | bVar243 | bVar128 |
               bVar227 | bVar52 | bVar259 | bVar146 | bVar275 | bVar182 | bVar291 | bVar195;
      bVar35 = bVar165 | bVar35 | bVar94 | bVar101 | bVar212 | bVar67 | bVar244 | bVar129 |
               bVar228 | bVar56 | bVar260 | bVar147 | bVar276 | bVar183 | bVar292 | bVar196;
      bVar36 = bVar166 | bVar36 | bVar96 | bVar103 | bVar213 | bVar69 | bVar245 | bVar130 |
               bVar229 | bVar58 | bVar261 | bVar148 | bVar277 | bVar184 | bVar293 | bVar197;
      bVar37 = bVar168 | bVar37 | bVar98 | bVar106 | bVar214 | bVar73 | bVar246 | bVar132 |
               bVar230 | bVar60 | bVar262 | bVar150 | bVar278 | bVar186 | bVar294 | bVar198;
      bVar38 = bVar169 | bVar38 | bVar100 | bVar108 | bVar215 | bVar75 | bVar247 | bVar133 |
               bVar231 | bVar64 | bVar263 | bVar151 | bVar279 | bVar187 | bVar295 | bVar199;
      bVar39 = bVar170 | bVar39 | bVar102 | bVar110 | bVar216 | bVar77 | bVar248 | bVar134 |
               bVar232 | bVar66 | bVar264 | bVar152 | bVar280 | bVar188 | bVar296 | bVar200;
      bVar40 = bVar171 | bVar40 | bVar104 | bVar112 | bVar217 | bVar79 | bVar249 | bVar135 |
               bVar233 | bVar68 | bVar265 | bVar153 | bVar281 | bVar189 | bVar297 | bVar201;
      bVar41 = bVar172 | bVar41 | bVar107 | bVar114 | bVar218 | bVar81 | bVar250 | bVar136 |
               bVar234 | bVar70 | bVar266 | bVar154 | bVar282 | bVar190 | bVar298 | bVar202;
      bVar42 = bVar173 | bVar42 | bVar109 | bVar116 | bVar219 | bVar83 | bVar251 | bVar137 |
               bVar235 | bVar74 | bVar267 | bVar155 | bVar283 | bVar191 | bVar299 | bVar203;
      bVar43 = bVar174 | bVar43 | bVar111 | bVar118 | bVar220 | bVar85 | bVar252 | bVar138 |
               bVar236 | bVar76 | bVar268 | bVar156 | bVar284 | bVar192 | bVar300 | bVar204;
      auVar5[1] = bVar29;
      auVar5[0] = bVar28;
      auVar5[2] = bVar30;
      auVar5[3] = bVar31;
      auVar5[4] = bVar32;
      auVar5[5] = bVar33;
      auVar5[6] = bVar34;
      auVar5[7] = bVar35;
      auVar5[8] = bVar36;
      auVar5[9] = bVar37;
      auVar5[10] = bVar38;
      auVar5[0xb] = bVar39;
      auVar5[0xc] = bVar40;
      auVar5[0xd] = bVar41;
      auVar5[0xe] = bVar42;
      auVar5[0xf] = bVar43;
      auVar6[1] = bVar29;
      auVar6[0] = bVar28;
      auVar6[2] = bVar30;
      auVar6[3] = bVar31;
      auVar6[4] = bVar32;
      auVar6[5] = bVar33;
      auVar6[6] = bVar34;
      auVar6[7] = bVar35;
      auVar6[8] = bVar36;
      auVar6[9] = bVar37;
      auVar6[10] = bVar38;
      auVar6[0xb] = bVar39;
      auVar6[0xc] = bVar40;
      auVar6[0xd] = bVar41;
      auVar6[0xe] = bVar42;
      auVar6[0xf] = bVar43;
      auVar45 = NEON_ext(auVar5,auVar6,8,1);
      uVar19 = CONCAT17(bVar35 | auVar45[7],
                        CONCAT16(bVar34 | auVar45[6],
                                 CONCAT15(bVar33 | auVar45[5],
                                          CONCAT14(bVar32 | auVar45[4],
                                                   CONCAT13(bVar31 | auVar45[3],
                                                            CONCAT12(bVar30 | auVar45[2],
                                                                     CONCAT11(bVar29 | auVar45[1],
                                                                              bVar28 | auVar45[0])))
                                                  ))));
      if (uVar13 == uVar15) goto LAB_1001663d0;
      if ((uVar13 & 0x18) == 0) {
        puVar10 = (ulong *)((long)puVar10 + uVar15);
        goto LAB_1001663c0;
      }
    }
    uVar20 = uVar13 & 0xfffffffffffffff8;
    bVar28 = 0;
    bVar29 = 0;
    bVar30 = 0;
    bVar31 = 0;
    bVar32 = 0;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = 0;
    bVar36 = 0;
    bVar37 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = uVar19;
    lVar17 = uVar15 - uVar20;
    uVar54 = 0;
    uVar72 = 0;
    uVar53 = 0;
    uVar71 = 0;
    pbVar12 = (byte *)((long)puVar10 + uVar15);
    do {
      uVar122 = *(undefined8 *)pbVar12;
      bVar44 = (byte)uVar122;
      bVar48 = (byte)((ulong)uVar122 >> 8);
      bVar49 = (byte)((ulong)uVar122 >> 0x10);
      bVar50 = (byte)((ulong)uVar122 >> 0x18);
      bVar62 = (byte)((ulong)uVar122 >> 0x20);
      bVar80 = (byte)((ulong)uVar122 >> 0x28);
      bVar52 = (byte)((ulong)uVar122 >> 0x30);
      bVar56 = (byte)((ulong)uVar122 >> 0x38);
      bVar88 = (byte)uVar53 | bVar52;
      bVar90 = (byte)((ulong)uVar53 >> 8) | (char)bVar52 >> 7;
      bVar94 = (byte)((short)(char)bVar52 >> 0xf);
      bVar92 = (byte)((ulong)uVar53 >> 0x10) | bVar94;
      bVar94 = (byte)((ulong)uVar53 >> 0x18) | bVar94;
      bVar102 = (byte)((int)(short)(char)bVar52 >> 0x1f);
      bVar96 = (byte)((ulong)uVar53 >> 0x20) | bVar102;
      bVar98 = (byte)((ulong)uVar53 >> 0x28) | bVar102;
      bVar100 = (byte)((ulong)uVar53 >> 0x30) | bVar102;
      bVar102 = (byte)((ulong)uVar53 >> 0x38) | bVar102;
      uVar53 = CONCAT17(bVar102,CONCAT16(bVar100,CONCAT15(bVar98,CONCAT14(bVar96,CONCAT13(bVar94,
                                                  CONCAT12(bVar92,CONCAT11(bVar90,bVar88)))))));
      bVar104 = (byte)uVar71 | bVar56;
      bVar107 = (byte)((ulong)uVar71 >> 8) | (char)bVar56 >> 7;
      bVar111 = (byte)((short)(char)bVar56 >> 0xf);
      bVar109 = (byte)((ulong)uVar71 >> 0x10) | bVar111;
      bVar111 = (byte)((ulong)uVar71 >> 0x18) | bVar111;
      bVar119 = (byte)((int)(short)(char)bVar56 >> 0x1f);
      bVar113 = (byte)((ulong)uVar71 >> 0x20) | bVar119;
      bVar115 = (byte)((ulong)uVar71 >> 0x28) | bVar119;
      bVar117 = (byte)((ulong)uVar71 >> 0x30) | bVar119;
      bVar119 = (byte)((ulong)uVar71 >> 0x38) | bVar119;
      uVar71 = CONCAT17(bVar119,CONCAT16(bVar117,CONCAT15(bVar115,CONCAT14(bVar113,CONCAT13(bVar111,
                                                  CONCAT12(bVar109,CONCAT11(bVar107,bVar104)))))));
      bVar52 = (byte)uVar54 | bVar62;
      bVar56 = (byte)((ulong)uVar54 >> 8) | (char)bVar62 >> 7;
      bVar60 = (byte)((short)(char)bVar62 >> 0xf);
      bVar58 = (byte)((ulong)uVar54 >> 0x10) | bVar60;
      bVar60 = (byte)((ulong)uVar54 >> 0x18) | bVar60;
      bVar68 = (byte)((int)(short)(char)bVar62 >> 0x1f);
      bVar62 = (byte)((ulong)uVar54 >> 0x20) | bVar68;
      bVar64 = (byte)((ulong)uVar54 >> 0x28) | bVar68;
      bVar66 = (byte)((ulong)uVar54 >> 0x30) | bVar68;
      bVar68 = (byte)((ulong)uVar54 >> 0x38) | bVar68;
      uVar54 = CONCAT17(bVar68,CONCAT16(bVar66,CONCAT15(bVar64,CONCAT14(bVar62,CONCAT13(bVar60,
                                                  CONCAT12(bVar58,CONCAT11(bVar56,bVar52)))))));
      bVar70 = (byte)uVar72 | bVar80;
      bVar74 = (byte)((ulong)uVar72 >> 8) | (char)bVar80 >> 7;
      bVar78 = (byte)((short)(char)bVar80 >> 0xf);
      bVar76 = (byte)((ulong)uVar72 >> 0x10) | bVar78;
      bVar78 = (byte)((ulong)uVar72 >> 0x18) | bVar78;
      bVar86 = (byte)((int)(short)(char)bVar80 >> 0x1f);
      bVar80 = (byte)((ulong)uVar72 >> 0x20) | bVar86;
      bVar82 = (byte)((ulong)uVar72 >> 0x28) | bVar86;
      bVar84 = (byte)((ulong)uVar72 >> 0x30) | bVar86;
      bVar86 = (byte)((ulong)uVar72 >> 0x38) | bVar86;
      uVar72 = CONCAT17(bVar86,CONCAT16(bVar84,CONCAT15(bVar82,CONCAT14(bVar80,CONCAT13(bVar78,
                                                  CONCAT12(bVar76,CONCAT11(bVar74,bVar70)))))));
      bVar28 = bVar28 | bVar49;
      bVar29 = bVar29 | (char)bVar49 >> 7;
      bVar193 = (byte)((short)(char)bVar49 >> 0xf);
      bVar30 = bVar30 | bVar193;
      bVar31 = bVar31 | bVar193;
      bVar49 = (byte)((int)(short)(char)bVar49 >> 0x1f);
      bVar32 = bVar32 | bVar49;
      bVar33 = bVar33 | bVar49;
      bVar34 = bVar34 | bVar49;
      bVar35 = bVar35 | bVar49;
      bVar36 = bVar36 | bVar50;
      bVar37 = bVar37 | (char)bVar50 >> 7;
      bVar49 = (byte)((short)(char)bVar50 >> 0xf);
      bVar38 = bVar38 | bVar49;
      bVar39 = bVar39 | bVar49;
      bVar49 = (byte)((int)(short)(char)bVar50 >> 0x1f);
      bVar40 = bVar40 | bVar49;
      bVar41 = bVar41 | bVar49;
      bVar42 = bVar42 | bVar49;
      bVar43 = bVar43 | bVar49;
      auVar47[0] = auVar46[0] | bVar44;
      auVar47[1] = auVar46[1] | (char)bVar44 >> 7;
      bVar49 = (byte)((short)(char)bVar44 >> 0xf);
      auVar47[2] = auVar46[2] | bVar49;
      auVar47[3] = auVar46[3] | bVar49;
      bVar44 = (byte)((int)(short)(char)bVar44 >> 0x1f);
      auVar47[4] = auVar46[4] | bVar44;
      auVar47[5] = auVar46[5] | bVar44;
      auVar47[6] = auVar46[6] | bVar44;
      auVar47[7] = auVar46[7] | bVar44;
      auVar47[8] = auVar46[8] | bVar48;
      auVar47[9] = auVar46[9] | (char)bVar48 >> 7;
      bVar44 = (byte)((short)(char)bVar48 >> 0xf);
      auVar47[10] = auVar46[10] | bVar44;
      auVar47[0xb] = auVar46[0xb] | bVar44;
      bVar44 = (byte)((int)(short)(char)bVar48 >> 0x1f);
      auVar47[0xc] = auVar46[0xc] | bVar44;
      auVar47[0xd] = auVar46[0xd] | bVar44;
      auVar47[0xe] = auVar46[0xe] | bVar44;
      auVar47[0xf] = auVar46[0xf] | bVar44;
      lVar17 = lVar17 + 8;
      pbVar12 = pbVar12 + 8;
      auVar46 = auVar47;
    } while (lVar17 != 0);
    bVar28 = auVar47[0] | bVar52 | bVar28 | bVar88;
    bVar29 = auVar47[1] | bVar56 | bVar29 | bVar90;
    bVar30 = auVar47[2] | bVar58 | bVar30 | bVar92;
    bVar31 = auVar47[3] | bVar60 | bVar31 | bVar94;
    bVar32 = auVar47[4] | bVar62 | bVar32 | bVar96;
    bVar33 = auVar47[5] | bVar64 | bVar33 | bVar98;
    bVar34 = auVar47[6] | bVar66 | bVar34 | bVar100;
    bVar35 = auVar47[7] | bVar68 | bVar35 | bVar102;
    bVar36 = auVar47[8] | bVar70 | bVar36 | bVar104;
    bVar37 = auVar47[9] | bVar74 | bVar37 | bVar107;
    bVar38 = auVar47[10] | bVar76 | bVar38 | bVar109;
    bVar39 = auVar47[0xb] | bVar78 | bVar39 | bVar111;
    bVar40 = auVar47[0xc] | bVar80 | bVar40 | bVar113;
    bVar41 = auVar47[0xd] | bVar82 | bVar41 | bVar115;
    bVar42 = auVar47[0xe] | bVar84 | bVar42 | bVar117;
    bVar43 = auVar47[0xf] | bVar86 | bVar43 | bVar119;
    auVar3[1] = bVar29;
    auVar3[0] = bVar28;
    auVar3[2] = bVar30;
    auVar3[3] = bVar31;
    auVar3[4] = bVar32;
    auVar3[5] = bVar33;
    auVar3[6] = bVar34;
    auVar3[7] = bVar35;
    auVar3[8] = bVar36;
    auVar3[9] = bVar37;
    auVar3[10] = bVar38;
    auVar3[0xb] = bVar39;
    auVar3[0xc] = bVar40;
    auVar3[0xd] = bVar41;
    auVar3[0xe] = bVar42;
    auVar3[0xf] = bVar43;
    auVar4[1] = bVar29;
    auVar4[0] = bVar28;
    auVar4[2] = bVar30;
    auVar4[3] = bVar31;
    auVar4[4] = bVar32;
    auVar4[5] = bVar33;
    auVar4[6] = bVar34;
    auVar4[7] = bVar35;
    auVar4[8] = bVar36;
    auVar4[9] = bVar37;
    auVar4[10] = bVar38;
    auVar4[0xb] = bVar39;
    auVar4[0xc] = bVar40;
    auVar4[0xd] = bVar41;
    auVar4[0xe] = bVar42;
    auVar4[0xf] = bVar43;
    auVar45 = NEON_ext(auVar3,auVar4,8,1);
    uVar19 = CONCAT17(bVar35 | auVar45[7],
                      CONCAT16(bVar34 | auVar45[6],
                               CONCAT15(bVar33 | auVar45[5],
                                        CONCAT14(bVar32 | auVar45[4],
                                                 CONCAT13(bVar31 | auVar45[3],
                                                          CONCAT12(bVar30 | auVar45[2],
                                                                   CONCAT11(bVar29 | auVar45[1],
                                                                            bVar28 | auVar45[0])))))
                              ));
    puVar10 = (ulong *)((long)puVar10 + uVar20);
    if (uVar13 == uVar20) goto LAB_1001663d0;
  }
LAB_1001663c0:
  do {
    puVar18 = (ulong *)((long)puVar10 + 1);
    uVar19 = uVar19 | (long)(char)(byte)*puVar10;
    puVar10 = puVar18;
  } while (puVar18 != (ulong *)(param_1 + param_2));
LAB_1001663d0:
  return (uVar19 & 0x8080808080808080) == 0;
}



/* Entry: 10021d674; end: 10021d903;  */

undefined8 * FUN_10021d674(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar1[1] = in_stack_00000068;
    *puVar1 = in_stack_00000060;
    puVar1 = puVar1 + 2;
  }
  else {
    puVar1 = param_1;
    func_0x00010021d700();
  }
  param_1[1] = puVar1;
  return puVar1 + -2;
}



/* Entry: 10021d904; end: 10021d9bf;  */

void FUN_10021d904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd9518,&UNK_10d99cf80);
  puVar1 = &UNK_110419040;
  func_0x000107c613fc(&UNK_110419040,0x38,7);
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
  FUN_1000823a8(&UNK_1019627d4,puVar1);
  return;
}



/* Entry: 10021d9c0; end: 10021da23;  */

void FUN_10021d9c0(void)

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



/* Entry: 10021da24; end: 10021da5f;  */

void FUN_10021da24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010021dbf8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10021da60; end: 10021db03;  */

void FUN_10021da60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x11303f9c0,&UNK_10dcb89e8);
  puVar1 = &UNK_11072d500;
  func_0x000107c613fc(&UNK_11072d500,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1009aafe0,puVar1);
  return;
}



/* Entry: 10021db04; end: 10021db0b;  */

void FUN_10021db04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10021db0c; end: 10021db2b;  */

void FUN_10021db0c(void)

{
  func_0x000107c61168(&PTR_PTR_1129768f0);
  return;
}



/* Entry: 10021db2c; end: 10021db47;  */

void FUN_10021db2c(undefined8 param_1)

{
  FUN_1000285a8(0x112dc9d80,&UNK_10d98b198);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003cbff4,param_1);
  return;
}



/* Entry: 10021db48; end: 10021db97;  */

void FUN_10021db48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021db98; end: 10021dbb7;  */

void FUN_10021db98(void)

{
  func_0x000107c61168(&PTR_PTR_11297a588);
  return;
}



/* Entry: 10021dbb8; end: 10021e1b7;  */

void FUN_10021dbb8(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10021e1b8; end: 10021e2fb;  */

void FUN_10021e1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dca940,&UNK_10d98c4a0);
  puVar1 = &UNK_110408980;
  func_0x000107c613fc(&UNK_110408980,0x78,7);
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
  FUN_1000823a8(FUN_1003cd158,puVar1);
  return;
}



/* Entry: 10021e2fc; end: 10021e31b;  */

void FUN_10021e2fc(void)

{
  func_0x000107c61168(&PTR_PTR_112dca9c0);
  return;
}



/* Entry: 10021e31c; end: 10021e65f;  */

void FUN_10021e31c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_1;
  func_0x000100177128(param_1,0x2e,0);
  if (puVar2 == (undefined8 *)0xffffffffffffffff) {
    uVar3 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar3;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    puVar1 = (undefined8 *)param_1[1];
    if (puVar2 <= (undefined8 *)param_1[1]) {
      puVar1 = puVar2;
    }
    *param_2 = *param_1;
    param_2[1] = puVar1;
    func_0x00010021e388(param_1,puVar2,0xffffffffffffffff);
    *param_3 = param_1;
    param_3[1] = puVar2;
  }
  return;
}



/* Entry: 10021e660; end: 10021e787;  */

void FUN_10021e660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dcaa90,&UNK_10d98c6b0);
  puVar1 = &UNK_110408a48;
  func_0x000107c613fc(&UNK_110408a48,0x68,7);
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
  FUN_1000823a8(FUN_1003ce224,puVar1);
  return;
}



/* Entry: 10021e788; end: 10021e7a7;  */

void FUN_10021e788(void)

{
  func_0x000107c61168(&PTR_PTR_112dcab08);
  return;
}



/* Entry: 10021e7a8; end: 10021e827;  */

void FUN_10021e7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dcae40,&UNK_10d98ccb0);
  puVar1 = &UNK_110408ca0;
  func_0x000107c613fc(&UNK_110408ca0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100408afc,puVar1);
  return;
}



/* Entry: 10021e828; end: 10021e847;  */

void FUN_10021e828(void)

{
  func_0x000107c61168(&PTR_PTR_112dcaeb8);
  return;
}



/* Entry: 10021e848; end: 10021e8c7;  */

void FUN_10021e848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddc278,&UNK_10d9a10a0);
  puVar1 = &UNK_11041c108;
  func_0x000107c613fc(&UNK_11041c108,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100647e10,puVar1);
  return;
}



/* Entry: 10021e8c8; end: 10021e8e7;  */

void FUN_10021e8c8(void)

{
  func_0x000107c61168(&PTR_PTR_112ddc2f0);
  return;
}



/* Entry: 10021e8e8; end: 10021e903;  */

void FUN_10021e8e8(undefined8 param_1)

{
  FUN_1000285a8(0x112ddc280,&UNK_10d9a10a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100647db4,param_1);
  return;
}



/* Entry: 10021e904; end: 10021e953;  */

void FUN_10021e904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021e954; end: 10021ea8f;  */

undefined8 FUN_10021e954(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbStack_28;
  
  pbStack_28 = (byte *)*param_1;
  if (pbStack_28 == (byte *)0x0) {
    return 0;
  }
  if ((char)param_2 < ' ') {
LAB_10021e9f0:
    uVar2 = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    if (*(char *)(param_1 + 2) == '\x01') {
      uVar3 = (uint)*pbStack_28;
      if ((uVar3 & 0x7f) != (param_2 & 0xff)) goto LAB_10021e9f0;
      *param_1 = pbStack_28 + 1;
    }
    else {
      do {
        puVar1 = param_1;
        func_0x00010021ea0c(param_1,&pbStack_28);
        if (((ulong)puVar1 & 1) == 0) goto LAB_10021e9f0;
        uVar3 = (uint)*pbStack_28;
      } while ((uVar3 & 0x7f) != (param_2 & 0xff));
      *param_1 = pbStack_28 + 1;
    }
    *(byte *)(param_1 + 2) = (byte)(~uVar3 >> 7) & 1;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10021ea90; end: 10021eb33;  */

void FUN_10021ea90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddca18,&UNK_10d9a1ea0);
  puVar1 = &UNK_11041c6f8;
  func_0x000107c613fc(&UNK_11041c6f8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_10197923c,puVar1);
  return;
}



/* Entry: 10021eb34; end: 10021eb8f;  */

void FUN_10021eb34(void)

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



/* Entry: 10021eb90; end: 10021ebab;  */

void FUN_10021eb90(undefined8 param_1)

{
  FUN_1000285a8(0x112ddca20,&UNK_10d9a1ea8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1019795b0,param_1);
  return;
}



/* Entry: 10021ebac; end: 10021ebfb;  */

void FUN_10021ebac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10021ebfc; end: 10021f05b;  */

uint FUN_10021ebfc(undefined8 *param_1)

{
  uint uVar1;
  byte **ppbVar2;
  byte *pbStack_20;
  byte *pbStack_18;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    uVar1 = *(byte *)*param_1 & 0x1f;
    if ((*(byte *)*param_1 & 0xe0) != 0x80) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    pbStack_20 = (byte *)*param_1;
    pbStack_18 = pbStack_20;
    do {
      ppbVar2 = &pbStack_18;
      func_0x00010021ea0c(ppbVar2,&pbStack_20);
      if ((int)ppbVar2 == 0) {
        return 0xffffffff;
      }
    } while ((*pbStack_20 & 0xe0) != 0x80);
    uVar1 = *pbStack_20 & 0x1f;
  }
  return uVar1;
}


