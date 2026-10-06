/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006af110; end: 1006af18b;  */

void FUN_1006af110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  auStack_70[0] = 0;
  uStack_58 = 0;
  func_0x0001002a8308(auStack_90);
  FUN_1006af2a8();
  func_0x0001006af2c8(param_1,param_2,param_3,auStack_50,param_5,auStack_70,auStack_90);
  func_0x0001006af2dc();
  func_0x0001006af2e4();
  func_0x0001006af2ec();
  FUN_10062706c(auStack_50);
  return;
}



/* Entry: 1006af18c; end: 1006af2a7;  */

void FUN_1006af18c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_268 [8];
  undefined8 *puStack_260;
  undefined1 auStack_258 [176];
  undefined8 auStack_1a8 [23];
  undefined1 auStack_f0 [176];
  
  FUN_1006af110(auStack_f0,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1006af110(auStack_258,param_3);
  puVar1 = auStack_1a8;
  FUN_1006271e0(puVar1,auStack_258);
  lVar3 = *(long *)(param_4 + 8);
  func_0x0001005ff368();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110a7b398;
  func_0x0001005ff370();
  if (lVar3 != 0) {
    do {
      func_0x0001005ff384();
    } while (extraout_w11 != 0);
  }
  func_0x0001005ff394();
  if (extraout_x9 != 0) {
    do {
      func_0x0001005ff384();
    } while (extraout_w11_00 != 0);
  }
  puStack_260 = puVar1;
  FUN_1006af398(uVar2,param_2,auStack_1a8,auStack_268);
  func_0x0001006b30c8(auStack_268);
  FUN_100609698(auStack_1a8);
  FUN_100627b64(auStack_258);
  FUN_100627b64(auStack_f0);
  return;
}



/* Entry: 1006af2a8; end: 1006af2f3;  */

void FUN_1006af2a8(void)

{
  return;
}



/* Entry: 1006af2f4; end: 1006af397; -[SCNMessagingThumbnailIndexList initWithIndices:] */

undefined1 * FUN_1006af2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112707248;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006af398; end: 1006af4a3;  */

void FUN_1006af398(int param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  
  func_0x0001005ff3c4();
  FUN_1005ff4e4();
  func_0x0001005ff4fc();
  if (param_1 == 0) {
    func_0x000107c34aa8();
    func_0x000107c34a84();
    func_0x000107c34aa4();
    func_0x000107c34aa0();
    func_0x000107c34b10();
    func_0x000107c34a88();
    func_0x000107c34af4();
    func_0x000107c34af0();
    func_0x000107c34af8();
  }
  else {
    func_0x000100601cc4();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000100601cd4();
    func_0x000100601cdc();
    func_0x000100601ce8(&PTR_DAT_110a998c0);
    if (lVar1 != 0) {
      do {
        func_0x000100601cf4();
      } while (extraout_w10 != 0);
      do {
        func_0x000100601cf4();
      } while (extraout_w10_00 != 0);
    }
    func_0x000100601d04();
    FUN_100601d40(&PTR_DAT_110a99910);
    func_0x000100601d58();
    FUN_10061dc6c();
    func_0x00010061dc74();
    FUN_1006b30a4(&stack0x00000158);
    FUN_10061dcac();
  }
  func_0x00010061dcb4();
  return;
}



/* Entry: 1006af4a4; end: 1006af4d3;  */

void FUN_1006af4a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006af4d4; end: 1006af5cb;  */

long FUN_1006af4d4(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x0001006af4b0();
  while (unaff_x22 != 0) {
    FUN_1006af5cc(*unaff_x21);
    func_0x0001006af650();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar2 = *(ulong *)(unaff_x19 + 0x30) & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar2 + 8);
  }
  if (lVar3 != 0) {
    FUN_1006016cc();
    func_0x0001006af670();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_100601764(*(undefined8 *)(unaff_x19 + 0x38));
      func_0x0001006af670();
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x40);
      func_0x000107c2a30c();
      func_0x000107c347ec();
      unaff_x20 = unaff_x20 + lVar3 + extraout_x8 + 1;
    }
  }
  if (*(int *)(unaff_x19 + 0x48) != 0) {
    unaff_x20 = unaff_x20 +
                (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x4c) != 0) {
    unaff_x20 = unaff_x20 +
                (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x4c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107c34830();
    lVar3 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_x20 = lVar3 + unaff_x20;
  }
  *(int *)(unaff_x19 + 0x14) = (int)unaff_x20;
  return unaff_x20;
}



/* Entry: 1006af5cc; end: 1006af63f;  */

void FUN_1006af5cc(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    FUN_100601764();
    iVar1 = iVar1 + 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x000107c34830();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return;
}



/* Entry: 1006af640; end: 1006af69b;  */

void FUN_1006af640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1006af69c; end: 1006af6cb;  */

void FUN_1006af69c(void)

{
  func_0x000107c610f4(PTR_PTR_1126dabf0);
  func_0x000107c46c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006af6cc; end: 1006af787;  */

undefined8 * FUN_1006af6cc(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1107ec918;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  if (*param_2 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"!byte_buffer->Valid()",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_writer.h"
               ,0x43);
  }
  plVar1 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0xf0))(plRam0000000113815c70,0,0);
  if (*param_2 != 0) {
    (**(code **)(*plRam0000000113815c70 + 0xc0))();
  }
  *param_2 = (long)plVar1;
  param_1[3] = plVar1 + 3;
  return param_1;
}



/* Entry: 1006af788; end: 1006af8af;  */

long * FUN_1006af788(ulong param_1)

{
  bool bVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long alStack_88 [2];
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [32];
  
  func_0x0001001a55bc();
  func_0x000100063820();
  FUN_1006af8b0();
  bVar1 = param_1 >> 0x1f != 0;
  if (bVar1) {
    func_0x000107c39c88();
    func_0x000107c2b930(alStack_88);
    func_0x000107c39c80(&puStack_78);
    func_0x000107c2b938(alStack_88,&puStack_78);
    func_0x000107c30358(alStack_88,&UNK_10f774073);
    func_0x000107c39c78();
    func_0x000107c60ca0(&puStack_78);
    func_0x000107c2b934(alStack_88);
  }
  else {
    puStack_78 = auStack_68;
    puStack_70 = puStack_78;
    func_0x0001006af8bc(*(undefined8 *)(*unaff_x20 + 0x38));
    FUN_1006b0c30(&puStack_78,param_1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == extraout_x8) {
    return (long *)(ulong)!bVar1;
  }
  func_0x000107c60e78();
  plVar2 = alStack_88;
  func_0x000107c2b934();
  func_0x000107c39c58();
                    /* WARNING: Could not recover jumptable at 0x0001006af8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return plVar2;
}



/* Entry: 1006af8b0; end: 1006af8d3;  */

void FUN_1006af8b0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001006af8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



/* Entry: 1006af8d4; end: 1006af9fb;  */

long * FUN_1006af8d4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x0001006af8c4();
  uVar2 = *(uint *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    FUN_1006af9fc();
    param_4 = param_1;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x30) & 0xfffffffffffffffc;
  lVar5 = (long)*(char *)(uVar4 + 0x17);
  if (lVar5 < 0) {
    lVar5 = *(long *)(uVar4 + 8);
  }
  if (lVar5 != 0) {
    func_0x0001006b0aec();
    param_4 = param_1;
  }
  iVar7 = *(int *)(unaff_x20 + 0x20);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    uVar4 = *(ulong *)(unaff_x20 + 0x18);
    puVar1 = (ulong *)(unaff_x20 + 0x18);
    if ((uVar4 & 1) != 0) {
      puVar1 = (ulong *)(uVar4 + (long)iVar6 * 8 + 7);
    }
    uVar4 = (ulong)*(uint *)(*puVar1 + 0x14);
    param_1 = (long *)0x3;
    func_0x0001006b0af8();
    param_4 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    uVar4 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x1c);
    param_1 = (long *)0x4;
    func_0x0001006b0af8();
    param_4 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    FUN_1006b0b84();
    plVar3 = (long *)0x28;
    func_0x0001001a59d0(0x28,param_1);
    func_0x0001006b0b9c();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    FUN_1006b0b84();
    param_4 = (long *)0x30;
    func_0x0001001a59d0(0x30,plVar3);
    func_0x0001006b0b9c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c34834();
    if ((long)uVar4 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      uVar4 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)uVar4;
        uVar2 = iVar6 - iVar7;
        uVar4 = (ulong)uVar2;
        if (uVar2 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,uVar4 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)uVar4);
  }
  return param_4;
}



/* Entry: 1006af9fc; end: 1006afa07;  */

void FUN_1006af9fc(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  FUN_1001a597c();
  uVar1 = 10;
  func_0x0001001a59d0(10,unaff_x19);
  func_0x0001001a59d0(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006018cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_3);
  return;
}



/* Entry: 1006afa08; end: 1006afa57;  */

ulong * FUN_1006afa08(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  do {
    if ((char)param_1[7] == '\x01') {
      return param_1 + 2;
    }
    uVar1 = *param_1;
    puVar2 = param_1;
    FUN_1006b07dc();
    param_2 = (ulong *)((long)puVar2 + (long)((int)param_2 - (int)uVar1));
  } while ((ulong *)*param_1 <= param_2);
  return param_2;
}



/* Entry: 1006afa58; end: 1006afa9f; -[SCNMessagingSnapDisplayInfo initWithHasAudio:] */

void FUN_1006afa58(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127071c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1006afaa0; end: 1006afacb;  */

void FUN_1006afaa0(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000108632994();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006afacc; end: 1006afad3;  */

void FUN_1006afacc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1006afad4; end: 1006afb57;  */

void FUN_1006afad4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010863e248();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006afb58; end: 1006afe0f; -[SCNMessagingMessageContent initWithContent:contentType:remoteMediaInfo:remoteMediaReferences:localMediaReferences:thumbnailIndexLists:quotedMessage:snapDisplayInfo:messageTypeMetadata:snapModeInfo:publicGroupMessageMetadata:massSnapMessageMetadata:] */

undefined8 *
FUN_1006afb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_112707060;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    FUN_1006afe10(uVar3);
    puVar1[2] = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    FUN_1006afe10(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    FUN_1006afe10(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    FUN_1006afe10(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    FUN_1006afe10(uVar3);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006afe10; end: 1006afe47;  */

void FUN_1006afe10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1006afe48; end: 1006b0317;  */

void FUN_1006afe48(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lStack_e8;
  
  puVar2 = PTR_PTR_1126daaf8;
  func_0x000107c610f4();
  lVar3 = param_1;
  FUN_10060ab28();
  func_0x000107c61180();
  lVar4 = param_1 + 0x18;
  FUN_10060ab28();
  func_0x000107c61180();
  lVar5 = param_1 + 0x30;
  FUN_10060ab28();
  func_0x000107c61180();
  lVar6 = param_1 + 0x48;
  FUN_10060ab28();
  func_0x000107c61180();
  lVar7 = param_1 + 0x60;
  FUN_10060ab28();
  func_0x000107c61180();
  lVar8 = param_1 + 0x78;
  FUN_10060ab28();
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) / 0x60);
  func_0x000107c61180();
  lVar15 = *(long *)(param_1 + 0x98);
  for (lVar12 = *(long *)(param_1 + 0x90); lVar12 != lVar15; lVar12 = lVar12 + 0x60) {
    lVar10 = lVar12;
    func_0x0001086462cc(lVar12);
    func_0x000107c61180();
    func_0x000107c3d798(puVar9,param_2,lVar10);
    func_0x0001006b0eac();
  }
  func_0x000107c40794();
  FUN_1006b0318();
  uVar1 = *(undefined1 *)(param_1 + 0xa8);
  if (*(char *)(param_1 + 0xc4) == '\x01') {
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(long)*(int *)(param_1 + 0xc0))
    ;
    func_0x000107c61180();
  }
  else {
    puVar11 = (undefined *)0x0;
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    func_0x000108619f54();
    func_0x000107c61180();
  }
  lVar12 = param_1 + 0xf8;
  FUN_1006b0320();
  func_0x000107c61180();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 5);
  func_0x000107c61180();
  lVar10 = *(long *)(param_1 + 0x108);
  for (lVar15 = *(long *)(param_1 + 0x100); lVar15 != lVar10; lVar15 = lVar15 + 0x20) {
    lVar14 = lVar15;
    func_0x000108638468(lVar15);
    func_0x000107c61180();
    func_0x000107c3d798(puVar13,param_2,lVar14);
    func_0x0001006b0e94();
  }
  func_0x000107c40794();
  FUN_1006b0354();
  FUN_1006b035c();
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x158) == '\x01') {
    lStack_e8 = param_1 + 0x14c;
    func_0x0001086401a0();
    func_0x000107c61180();
  }
  else {
    lStack_e8 = 0;
  }
  func_0x0001006b0388();
  func_0x000107c61180();
  func_0x000107c4856c(puVar2,param_2,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,puVar9,uVar1);
  func_0x0001006b0e94();
  func_0x000107c61170(lStack_e8);
  func_0x0001006b0e9c();
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar12);
  func_0x0001006b0ea4();
  func_0x000107c61170(puVar11);
  FUN_1006b0354();
  func_0x0001006b0eac();
  FUN_1006b0318();
  func_0x0001006b0eb4();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1006b0318; end: 1006b031f;  */

void FUN_1006b0318(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006b0320; end: 1006b0353;  */

void FUN_1006b0320(undefined4 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x00010863270c(*param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b0354; end: 1006b035b;  */

void FUN_1006b0354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006b035c; end: 1006b03b7;  */

void FUN_1006b035c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010861a4fc();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1006b03b8; end: 1006b07cb; -[SCNMessagingMessageMetadata initWithSeenBy:openedBy:savedBy:mentionedUserIds:screenShottedBy:screenRecordedBy:reactions:tombstone:createdAt:readAt:playableSnapState:isSaveable:isFriendLinkPending:isReactable:isReplyable:isErasable:isEdited:isEditable:botMentionResponseMetadata:snapPostOpenViewingState:replayedByUsers:bundleMetadata:savePolicy:streamingResponseMetadata:isPriorityChatNotificationEligible:didSendPriorityChatNotification:pollMetadata:] */

undefined8 *
FUN_1006b03b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined4 param_23,undefined4 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  FUN_1006b07cc();
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_25);
  puStack_70 = PTR_PTR_112707080;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x0001006b07d4(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x0001006b07d4(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x0001006b07d4(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x0001006b07d4(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x0001006b07d4(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x0001006b07d4(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x0001006b07d4(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_10;
    puVar1[10] = param_12;
    puVar1[0xb] = param_13;
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = (undefined1)param_15;
    *(undefined1 *)((long)puVar1 + 10) = param_15._1_1_;
    *(undefined1 *)((long)puVar1 + 0xb) = param_15._2_1_;
    *(undefined1 *)((long)puVar1 + 0xc) = param_15._3_1_;
    *(undefined1 *)((long)puVar1 + 0xd) = (undefined1)param_16;
    *(undefined1 *)((long)puVar1 + 0xe) = param_16._1_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_16._2_1_;
    FUN_1006b07cc();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_17;
    func_0x000107c61170(uVar2);
    FUN_1006b07cc();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_18;
    func_0x000107c61170(uVar2);
    uVar2 = param_19;
    func_0x000107c40794();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x0001006b07d4(uVar3);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_20;
    func_0x000107c61170(uVar2);
    puVar1[0x11] = param_21;
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_22;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_23;
    *(undefined1 *)((long)puVar1 + 0x11) = param_23._1_1_;
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_25;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1006b07cc; end: 1006b07db;  */

void FUN_1006b07cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1006b07dc; end: 1006b08b7;  */

long * FUN_1006b07dc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plStack_30;
  uint uStack_24;
  
  if (param_1[6] == 0) {
    *(undefined1 *)(param_1 + 7) = 1;
LAB_1006b088c:
    *param_1 = (long)(param_1 + 4);
  }
  else {
    plVar2 = param_1 + 2;
    plVar1 = (long *)*param_1;
    if (param_1[1] == 0) {
      lVar3 = *plVar1;
      param_1[3] = plVar1[1];
      *plVar2 = lVar3;
      plVar2 = param_1 + 4;
    }
    else {
      func_0x000107c610b4(param_1[1],plVar2,(long)plVar1 - (long)plVar2);
      do {
        plVar1 = (long *)param_1[6];
        (**(code **)(*plVar1 + 0x10))(plVar1,&plStack_30,&uStack_24);
        if (((ulong)plVar1 & 1) == 0) {
          *(undefined1 *)(param_1 + 7) = 1;
          goto LAB_1006b088c;
        }
      } while (uStack_24 == 0);
      plVar1 = (long *)*param_1;
      if (0x10 < (int)uStack_24) {
        lVar3 = *plVar1;
        plStack_30[1] = plVar1[1];
        *plStack_30 = lVar3;
        *param_1 = (long)plStack_30 + ((ulong)uStack_24 - 0x10);
        param_1[1] = 0;
        return plStack_30;
      }
      lVar3 = *plVar1;
      param_1[3] = plVar1[1];
      *plVar2 = lVar3;
      plVar2 = (long *)((long)plVar2 + (long)(int)uStack_24);
      plVar1 = plStack_30;
    }
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar1;
  }
  return param_1 + 2;
}



/* Entry: 1006b08b8; end: 1006b0a8b;  */

undefined8 FUN_1006b08b8(long param_1,long *param_2,int *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  plVar2 = &lStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar3 = (long)*(int *)(param_1 + 0xc);
  if (lVar3 <= lVar5) {
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"byte_count_ < total_size_",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_writer.h"
               ,0x55);
    lVar3 = (long)*(int *)(param_1 + 0xc);
    lVar5 = *(long *)(param_1 + 0x10);
  }
  uVar4 = lVar3 - lVar5;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x20) = 0;
    if (*(long *)(param_1 + 0x48) != 0) {
      if (uVar4 < *(ulong *)(param_1 + 0x50)) {
        *(ulong *)(param_1 + 0x50) = uVar4;
      }
      goto LAB_1006b098c;
    }
    if (uVar4 < *(byte *)(param_1 + 0x50)) {
      *(char *)(param_1 + 0x50) = (char)uVar4;
    }
LAB_1006b09a4:
    lVar3 = param_1 + 0x51;
  }
  else {
    if ((ulong)(long)*(int *)(param_1 + 8) <= uVar4) {
      uVar4 = (long)*(int *)(param_1 + 8);
    }
    if (uVar4 < 0x19) {
      uVar4 = 0x18;
    }
    (**(code **)(*plRam0000000113815c70 + 0x148))(&lStack_70,plRam0000000113815c70,uVar4);
    *(undefined8 *)(param_1 + 0x50) = uStack_68;
    *(long *)(param_1 + 0x48) = lStack_70;
    *(undefined8 *)(param_1 + 0x60) = uStack_58;
    *(undefined8 *)(param_1 + 0x58) = uStack_60;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_1006b09a4;
LAB_1006b098c:
    lVar3 = *(long *)(param_1 + 0x58);
  }
  plVar6 = (long *)(param_1 + 0x48);
  *param_2 = lVar3;
  if (*plVar6 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x50);
    if (uVar4 >> 0x1f == 0) goto LAB_1006b09f8;
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"GRPC_SLICE_LENGTH(slice_) <= INT_MAX",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_writer.h"
               ,0x6f);
    if (*plVar6 != 0) {
      uVar4 = *(ulong *)(param_1 + 0x50);
      goto LAB_1006b09f8;
    }
  }
  uVar4 = (ulong)*(byte *)(param_1 + 0x50);
LAB_1006b09f8:
  *param_3 = (int)uVar4;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)(int)uVar4;
  uStack_68 = *(undefined8 *)(param_1 + 0x50);
  lStack_70 = *plVar6;
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  (**(code **)(*plRam0000000113815c70 + 0x180))(plRam0000000113815c70,uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return 1;
  }
  func_0x000107c60e78();
  pcStack_78 = FUN_1006b0a8c;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = plVar2[1];
  uStack_b0 = *plVar2;
  uStack_98 = plVar2[3];
  uStack_a0 = plVar2[2];
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_1005a7ec4(uVar1,&uStack_b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return uVar1;
  }
  func_0x000107c60e78();
  return uVar1;
}



/* Entry: 1006b0a8c; end: 1006b0ae3;  */

void FUN_1006b0a8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  FUN_1005a7ec4(param_2,&uStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1006b0ae4; end: 1006b0aff;  */

void FUN_1006b0ae4(void)

{
  return;
}



/* Entry: 1006b0b00; end: 1006b0b83;  */

long * FUN_1006b0b00(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001006af8c4();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    FUN_1006af9fc();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    FUN_1006b0b84();
    param_4 = (long *)0x10;
    func_0x0001001a59d0(0x10,param_1);
    func_0x0001006b0b90();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107c34834();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 1006b0b84; end: 1006b0bb3;  */

ulong * FUN_1006b0b84(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    FUN_1006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 1006b0bb4; end: 1006b0c2f;  */

long FUN_1006b0bb4(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x19;
  ulong unaff_x20;
  long lVar3;
  
  func_0x0001006b0ba8();
  while( true ) {
    uVar1 = *unaff_x19;
    if (unaff_x19[1] == 0) {
      unaff_x19[1] = unaff_x20;
      return (uVar1 - unaff_x20) + 0x10;
    }
    if (unaff_x20 <= uVar1) break;
    puVar2 = unaff_x19;
    FUN_1006b07dc();
    unaff_x20 = (long)puVar2 + (long)((int)unaff_x20 - (int)uVar1);
    if ((unaff_x19[7] & 1) != 0) {
      return 0;
    }
  }
  lVar3 = unaff_x20 - (long)(unaff_x19 + 2);
  func_0x000107c610b4(unaff_x19[1],unaff_x19 + 2,lVar3);
  unaff_x19[1] = unaff_x19[1] + lVar3;
  return *unaff_x19 - unaff_x20;
}



/* Entry: 1006b0c30; end: 1006b0c6f;  */

long FUN_1006b0c30(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    plVar1 = param_1;
    FUN_1006b0bb4();
    func_0x0001006b0c7c(param_1[6],plVar1);
    param_2 = param_1 + 2;
    *param_1 = (long)param_2;
    param_1[1] = (long)param_2;
  }
  return (long)param_2;
}



/* Entry: 1006b0c70; end: 1006b0c87;  */

void FUN_1006b0c70(void)

{
  return;
}



/* Entry: 1006b0c88; end: 1006b0ddf;  */

void FUN_1006b0c88(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != 0) {
    plVar3 = (long *)(param_1 + 0x48);
    if (*plVar3 == 0) {
      uVar1 = (uint)*(byte *)(param_1 + 0x50);
    }
    else {
      uVar1 = (uint)*(undefined8 *)(param_1 + 0x50);
    }
    if ((int)uVar1 < param_2) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,"count <= static_cast<int>(GRPC_SLICE_LENGTH(slice_))",
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_writer.h"
                 ,0x89);
    }
    (**(code **)(*plRam0000000113815c70 + 0x188))
              (plRam0000000113815c70,*(undefined8 *)(param_1 + 0x18));
    uVar4 = (ulong)param_2;
    if (*(long *)(param_1 + 0x48) == 0) {
      uVar2 = (ulong)*(byte *)(param_1 + 0x50);
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x50);
    }
    if (uVar2 == uVar4) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x50);
      *(long *)(param_1 + 0x28) = *plVar3;
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      (**(code **)(*plRam0000000113815c70 + 0x160))
                (&lStack_60,plRam0000000113815c70,plVar3,uVar2 - uVar4);
      *(undefined8 *)(param_1 + 0x30) = uStack_58;
      *(long *)(param_1 + 0x28) = lStack_60;
      *(undefined8 *)(param_1 + 0x40) = uStack_48;
      *(undefined8 *)(param_1 + 0x38) = uStack_50;
      uStack_58 = *(undefined8 *)(param_1 + 0x50);
      lStack_60 = *plVar3;
      uStack_48 = *(undefined8 *)(param_1 + 0x60);
      uStack_50 = *(undefined8 *)(param_1 + 0x58);
      (**(code **)(*plRam0000000113815c70 + 0x178))
                (plRam0000000113815c70,*(undefined8 *)(param_1 + 0x18),&lStack_60);
    }
    *(bool *)(param_1 + 0x20) = *(long *)(param_1 + 0x28) != 0;
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) - uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 1006b0de0; end: 1006b0df3;  */

void FUN_1006b0de0(void)

{
  return;
}



/* Entry: 1006b0df4; end: 1006b0e93;  */

undefined8 * FUN_1006b0df4(undefined8 *param_1,int param_2)

{
  undefined8 *unaff_x23;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_1107ec918;
  if (*(char *)(param_1 + 4) == '\x01') {
    uStack_48 = param_1[6];
    uStack_50 = param_1[5];
    uStack_38 = param_1[8];
    uStack_40 = param_1[7];
    param_2 = (int)&uStack_50;
    (**(code **)(*plRam0000000113815c70 + 0x150))();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  func_0x000107c60e78();
  if (param_2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return unaff_x23;
}



/* Entry: 1006b0e94; end: 1006b0ebb;  */

void FUN_1006b0e94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006b0ebc; end: 1006b0f33;  */

void FUN_1006b0ebc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126daae8;
  func_0x000107c610f4(PTR_PTR_1126daae8);
  lVar2 = param_1;
  FUN_1006a7df8(param_1);
  func_0x000107c61180();
  func_0x000107c45684(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x20),
                      *(undefined1 *)(param_1 + 0x24));
  FUN_1006b0ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1006b0f34; end: 1006b0fef; -[SCNMessagingMessageAnalytics initWithAnalyticsMessageId:messageEncryption:isReencrypted:] */

undefined1 *
FUN_1006b0f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_112707058;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006b0ff0; end: 1006b0ff7;  */

void FUN_1006b0ff0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006b0ff8; end: 1006b1173; -[SCNMessagingMessage initWithDescriptor:senderId:messageContent:metadata:releasePolicy:state:messageAnalytics:orderKey:] */

undefined1 *
FUN_1006b0ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_112707050;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1006b1174; end: 1006b11c7;  */

void FUN_1006b1174(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006b11c8; end: 1006b11e7;  */

bool FUN_1006b11c8(undefined8 param_1,long param_2)

{
  func_0x000107c4a9c4(param_2);
  return param_2 != 0;
}



/* Entry: 1006b11e8; end: 1006b11fb; -[SCNMessagingFeedEntry lastEventUpdateTimestamp] */

undefined8 FUN_1006b11e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1006b11fc; end: 1006b134f; -[SCNativeFeedManager _didFetchFeedUpdateFeedEntries:multiRecipientFeedEntries:updateMetadata:] */

/* WARNING: Possible PIC construction at 0x0001006b1260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006b127c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006b12b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006b1320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006b1330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006b12bc) */
/* WARNING: Removing unreachable block (ram,0x0001006b12c0) */
/* WARNING: Removing unreachable block (ram,0x0001006b1280) */
/* WARNING: Removing unreachable block (ram,0x0001006b12e0) */
/* WARNING: Removing unreachable block (ram,0x0001006b1284) */
/* WARNING: Removing unreachable block (ram,0x0001006b1264) */
/* WARNING: Removing unreachable block (ram,0x0001006b1324) */
/* WARNING: Removing unreachable block (ram,0x0001006b1268) */
/* WARNING: Removing unreachable block (ram,0x0001006b1334) */

void FUN_1006b11fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c5d59c(param_5);
  func_0x000107c61180();
  func_0x000107c40404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1006b1350; end: 1006b1357; -[SCNMessagingFeedUpdateMetadata updateOperationIds] */

undefined8 FUN_1006b1350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1006b1358; end: 1006b1437; -[SCNMessagingUUID isEqual:] */

undefined8 FUN_1006b1358(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  FUN_100449c78();
  func_0x000107c61158(PTR_PTR_1126b0cd8);
  uVar1 = unaff_x19;
  func_0x000107c6115c();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c44fc8();
    func_0x000107c61180();
    func_0x000107c44fc8();
    func_0x000107c61180();
    uVar2 = unaff_x20;
    func_0x000107c49cf4(unaff_x20);
    func_0x000107c61170(unaff_x19);
    func_0x000107c61170(unaff_x20);
    func_0x000100449c88();
  }
  func_0x000100449c88();
  return uVar2;
}



/* Entry: 1006b1438; end: 1006b1457;  */

void FUN_1006b1438(void)

{
  func_0x000107c61168(&PTR_PTR_11288e280);
  return;
}



/* Entry: 1006b1458; end: 1006b14c7;  */

undefined8 FUN_1006b1458(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x000107c61174(param_2);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5aca0();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 1006b14c8; end: 1006b14ff;  */

void FUN_1006b14c8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1006b1500; end: 1006b1507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1006b1500(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  long *plVar10;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    FUN_1000285a8(0x112d61fd0,&UNK_10d9295a0);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c4cdb8(uVar3);
    func_0x000107c61180();
    uVar5 = uVar3;
    FUN_1000bda74();
    func_0x000107c61170(uVar3);
    pcVar4 = FUN_1006bd0d4;
    FUN_1000cb480(FUN_1006bd0d4,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar5);
    FUN_1000285a8(0x112dd07c8,&UNK_10d9bc7b0);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c444a4(uVar5);
    func_0x000107c61180();
    uVar3 = uVar5;
    FUN_1000bda74();
    func_0x000107c61170(uVar5);
    uVar5 = 0x112ddb408;
    FUN_1000285a8(0x112ddb408,&UNK_10d9a01c0);
    puVar6 = &UNK_10196b5d0;
    FUN_1000cb480(&UNK_10196b5d0,0,uVar5);
    func_0x000107c61574(uVar3);
    lVar7 = 0;
    FUN_1006bc48c();
    lVar8 = lVar7;
    func_0x000107c610f8();
    lVar1 = _DAT_112ddb2e8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1006bc4ac();
    *(undefined **)(lVar8 + lVar1) = puVar9;
    *(code **)(lVar8 + _DAT_112ddb2f0) = pcVar4;
    *(undefined **)(lVar8 + _DAT_112ddb2f8) = puVar6;
    puVar9 = PTR_s_init_1125d9248;
    lStack_68 = lVar8;
    lStack_60 = lVar7;
    func_0x000107c6157c(pcVar4);
    func_0x000107c6157c(puVar6);
    plVar10 = &lStack_68;
    func_0x000107c61154(plVar10,puVar9);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(lVar2);
  }
  return plVar10;
}



/* Entry: 1006b1508; end: 1006b16c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1006b1508(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    plVar9 = (long *)0x0;
  }
  else {
    FUN_1000285a8(0x112d61fd0,&UNK_10d9295a0);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c4cdb8(uVar2);
    func_0x000107c61180();
    uVar4 = uVar2;
    FUN_1000bda74();
    func_0x000107c61170(uVar2);
    pcVar3 = FUN_1006bd0d4;
    FUN_1000cb480(FUN_1006bd0d4,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar4);
    FUN_1000285a8(0x112dd07c8,&UNK_10d9bc7b0);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c444a4(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    FUN_1000bda74();
    func_0x000107c61170(uVar4);
    uVar4 = 0x112ddb408;
    FUN_1000285a8(0x112ddb408,&UNK_10d9a01c0);
    puVar5 = &UNK_10196b5d0;
    FUN_1000cb480(&UNK_10196b5d0,0,uVar4);
    func_0x000107c61574(uVar2);
    lVar6 = 0;
    FUN_1006bc48c();
    lVar7 = lVar6;
    func_0x000107c610f8();
    lVar1 = _DAT_112ddb2e8;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1006bc4ac();
    *(undefined **)(lVar7 + lVar1) = puVar8;
    *(code **)(lVar7 + _DAT_112ddb2f0) = pcVar3;
    *(undefined **)(lVar7 + _DAT_112ddb2f8) = puVar5;
    puVar8 = PTR_s_init_1125d9248;
    lStack_68 = lVar7;
    lStack_60 = lVar6;
    func_0x000107c6157c(pcVar3);
    func_0x000107c6157c(puVar5);
    plVar9 = &lStack_68;
    func_0x000107c61154(plVar9,puVar8);
    func_0x000107c61574(pcVar3);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(param_1);
  }
  return plVar9;
}



/* Entry: 1006b16c4; end: 1006b16d7;  */

void FUN_1006b16c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100609858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 1006b16d8; end: 1006b1773;  */

void FUN_1006b16d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_1105a2550;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a2560;
  return;
}



/* Entry: 1006b1774; end: 1006b177f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b1774(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = lVar1;
  FUN_100083b20(&uStack_48,lVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1006b1438();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112ef6e50) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112ef6e58) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ef6e60) = uStack_48;
  puVar3 = PTR_s_init_1125d9248;
  lStack_58 = lVar5;
  lStack_50 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  plVar6 = &lStack_58;
  func_0x000107c61154(plVar6,puVar3);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 1006b1780; end: 1006b1827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006b1780(long *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_2;
  FUN_100083b20(&uStack_48);
  FUN_1006b1438();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ef6e50) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112ef6e58) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112ef6e60) = uStack_48;
  puVar1 = PTR_s_init_1125d9248;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  plVar4 = &lStack_58;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1006b1828; end: 1006b182f;  */

void FUN_1006b1828(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112ef6ec8,&UNK_10db25b50);
  uVar1 = 0;
  FUN_10023b5f0();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006b1830; end: 1006b189f;  */

void FUN_1006b1830(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_1000285a8(0x112ef6ec8,&UNK_10db25b50);
  uVar1 = 0;
  FUN_10023b5f0();
  FUN_100083b20(&uStack_38);
  FUN_1000a8548(uVar1,uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006b18a0; end: 1006b18eb;  */

void FUN_1006b18a0(void)

{
  long unaff_x20;
  
  FUN_1006b18ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1006b18ec; end: 1006b1f03;  */

void FUN_1006b18ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074deb0;
  ppuVar4 = &PTR_DAT_1130670f0;
  uVar5 = param_4;
  FUN_1000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112ef7a30;
  FUN_1000285a8(0x112ef7a30,&UNK_10db26e90);
  FUN_1000a6ee8(&UNK_1105a2990,
                "LensVenueInternalServicesEntryPointWrapperScopeInitializationPluginKey",0x46,2,
                FUN_1006b2304,param_2,uVar2,&UNK_1105a2990,&PTR_DAT_112ef6fa0);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000a6ee8(&UNK_1105a2a30,
                "SCCameraViewfinderLegacyEntryPointWrapperScopeInitializationPluginKey",0x45,2,
                FUN_1006b23c8,param_3,uVar2,&UNK_1105a2a30,&PTR_DAT_112ef7088);
  func_0x000107c61574(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000a6ee8(&UNK_1105a2ad0,
                "SCLensProcessingCarouselEntryPointWrapperScopeInitializationPluginKey",0x45,2,
                FUN_1006c0f54,param_4,uVar2,&UNK_1105a2ad0,&PTR_DAT_112ef7198);
  func_0x000107c61574(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000a6ee8(&UNK_1105a2bb0,"SCLensProcessingEntryPointWrapperScopeInitializationPluginKey",0x3d,
                2,FUN_1006c1018,param_5,uVar2,&UNK_1105a2bb0,&PTR_DAT_112ef72a0);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000a6ee8(&UNK_1105a2c30,
                "SCLensProcessingInMemoryAssetsPluginEntryPointWrapperScopeInitializationPluginKey",
                0x51,2,FUN_1006c10dc,param_6,uVar2,&UNK_1105a2c30,&PTR_DAT_112ef7420);
  func_0x000107c61574(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000a6ee8(&UNK_1105a2cd0,
                "SCLensProcessingLensModeEntryPointWrapperScopeInitializationPluginKey",0x45,2,
                FUN_1006c1664,param_7,uVar2,&UNK_1105a2cd0,&PTR_DAT_112ef74f8);
  func_0x000107c61574(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000a6ee8(&UNK_1105a2d70,
                "SCLensProcessingLensModeServiceProviderWrapperScopeInitializationPluginKey",0x4a,2,
                FUN_1006c43fc,param_8,uVar2,&UNK_1105a2d70,&PTR_DAT_112ef7628);
  func_0x000107c61574(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000a6ee8(&UNK_1105a2df0,
                "SCLensProcessingViewfinderEventsEntryPointWrapperScopeInitializationPluginKey",0x4d
                ,2,FUN_1006c44c0,param_9,uVar2,&UNK_1105a2df0,&PTR_DAT_112ef7738);
  func_0x000107c61574(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000a6ee8(&UNK_1105a2ed0,"SCViewfinderEntryPointWrapperScopeInitializationPluginKey",0x39,2,
                FUN_1006c53ac,param_10,uVar2,&UNK_1105a2ed0,&PTR_DAT_112ef7828);
  func_0x000107c61574(param_10);
  puVar3 = &UNK_1105a2fa0;
  func_0x000107c613fc(&UNK_1105a2fa0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_12;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  FUN_1000a6ee8(&UNK_1105a2600,"SCViewfinderScopedServicesScopeInitializationPluginKey",0x36,2,
                0x1006c5498,puVar3,uVar2,&UNK_1105a2600,&PTR_DAT_112ef6e78);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_1105a2fc8;
  func_0x000107c613fc(&UNK_1105a2fc8,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_13;
  *(undefined8 *)(puVar3 + 0x20) = param_14;
  *(undefined8 *)(puVar3 + 0x28) = param_15;
  *(undefined8 *)(puVar3 + 0x30) = param_16;
  *(undefined8 *)(puVar3 + 0x38) = param_17;
  *(undefined8 *)(puVar3 + 0x40) = param_18;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  FUN_1000a6ee8(&UNK_1105a37c0,"SelfieSettingsTalkScopeInitializationPluginKey",0x2e,2,FUN_1006c5790
                ,puVar3,uVar2,&UNK_1105a37c0,&PTR_DAT_112ef7d20);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_19);
  FUN_1000a6ee8(&UNK_1105a2f50,
                "ViewfinderMainAppIntegrationEntryPointWrapperScopeInitializationPluginKey",0x49,2,
                FUN_1006c5f64,param_19,uVar2,&UNK_1105a2f50,&PTR_DAT_112ef7950);
  func_0x000107c61574(param_19);
  puVar3 = &UNK_1105a2ff0;
  func_0x000107c613fc(&UNK_1105a2ff0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  *(undefined8 *)(puVar3 + 0x18) = param_20;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_20);
  FUN_1000a6ee8(&UNK_1105a3cd0,"ViewfinderScopeGraphBridgeScopeInitializationPluginKey",0x36,2,
                FUN_1006c677c,puVar3,uVar2,&UNK_1105a3cd0,&PTR_DAT_112ef86c8);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ef7a38;
  FUN_1000285a8(0x112ef7a38,&UNK_10db26e98);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  FUN_1000a7f38("SCViewfinderScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1006b1f04; end: 1006b202f;  */

void FUN_1006b1f04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010060cc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}



/* Entry: 1006b2030; end: 1006b2157;  */

bool FUN_1006b2030(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)*param_2;
  uVar2 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar7 = param_2;
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  puVar6 = (undefined8 *)*param_3;
  uVar3 = param_3[1];
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    puVar6 = param_3;
    uVar3 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar2;
  }
  puVar5 = puVar7;
  func_0x000107c610b0(puVar7,puVar6,uVar1);
  bVar4 = uVar2 < uVar3;
  if ((int)puVar5 != 0) {
    bVar4 = (int)puVar5 < 0;
  }
  if (bVar4) {
    bVar4 = true;
  }
  else {
    func_0x000107c610b0(puVar6,puVar7,uVar1);
    bVar4 = uVar3 < uVar2;
    if ((int)puVar6 != 0) {
      bVar4 = (int)puVar6 < 0;
    }
    if (bVar4) {
      bVar4 = false;
    }
    else {
      puVar7 = (undefined8 *)param_2[3];
      uVar2 = param_2[4];
      if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
        puVar7 = param_2 + 3;
        uVar2 = (ulong)*(byte *)((long)param_2 + 0x2f);
      }
      puVar6 = (undefined8 *)param_3[3];
      uVar3 = param_3[4];
      if (-1 < (char)*(byte *)((long)param_3 + 0x2f)) {
        puVar6 = param_3 + 3;
        uVar3 = (ulong)*(byte *)((long)param_3 + 0x2f);
      }
      uVar1 = uVar3;
      if (uVar2 <= uVar3) {
        uVar1 = uVar2;
      }
      func_0x000107c610b0(puVar7,puVar6,uVar1);
      bVar4 = uVar2 < uVar3;
      if ((int)puVar7 != 0) {
        bVar4 = (int)puVar7 < 0;
      }
    }
  }
  return bVar4;
}



/* Entry: 1006b2158; end: 1006b220b;  */

void FUN_1006b2158(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1006b220c; end: 1006b227f;  */

undefined8 FUN_1006b220c(void)

{
  return 0x1b;
}



/* Entry: 1006b2280; end: 1006b2303;  */

void FUN_1006b2280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(param_4,param_3);
  FUN_100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1006b2304; end: 1006b232f;  */

void FUN_1006b2304(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006b2330; end: 1006b2337;  */

void FUN_1006b2330(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b5dce0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006b2338; end: 1006b23bb;  */

void FUN_1006b2338(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_102b5dce0,param_2,&UNK_102b5dce4,param_2,&UNK_102b5dd0c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006b23bc; end: 1006b23c7;  */

undefined ** FUN_1006b23bc(void)

{
  return &PTR_DAT_1130670f0;
}



/* Entry: 1006b23c8; end: 1006b23f3;  */

void FUN_1006b23c8(void)

{
  FUN_1006b2280();
  return;
}



/* Entry: 1006b23f4; end: 1006b23fb;  */

void FUN_1006b23f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b5e338);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006b23fc; end: 1006b247f;  */

void FUN_1006b23fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_102b5e338,param_2,FUN_1006b2480,param_2,&UNK_102b5e33c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1006b2480; end: 1006b24a7;  */

void FUN_1006b2480(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1006b24a8; end: 1006b24bb;  */

void FUN_1006b24a8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10069b79c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  *(undefined8 *)(lVar2 + 0x50) = uStack_a0;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar10 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126ac000;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174();
  uVar12 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar13 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f3ee0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effce40);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar13);
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f3f00);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  lVar14 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f3f20);
  func_0x000107c5a49c(uVar13);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(uVar13);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 != 0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    *(long *)(lVar2 + 0x58) = lVar14;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2a30);
  (*pcVar1)();
}



/* Entry: 1006b24bc; end: 1006b2a2f;  */

void FUN_1006b24bc(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_10069b79c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126ac000;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f3ee0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85560);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef23cd0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effce40);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0f3f00);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f3f20);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(param_2 + 0x58) = lVar13;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2a30);
  (*pcVar1)();
}



/* Entry: 1006b2a30; end: 1006b2a37;  */

void FUN_1006b2a30(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006b2a38; end: 1006b2a8b;  */

void FUN_1006b2a38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006b2a8c; end: 1006b2a9f;  */

void FUN_1006b2a8c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  func_0x000100692d04();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x30) = uStack_70;
  *(undefined8 *)(lVar2 + 0x38) = uStack_78;
  *(undefined8 *)(lVar2 + 0x40) = uStack_80;
  *(undefined8 *)(lVar2 + 0x48) = uStack_88;
  *(undefined8 *)(lVar2 + 0x50) = uStack_90;
  *(undefined8 *)(lVar2 + 0x58) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar6 = uStack_80;
  func_0x000107c61174();
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x20) = puVar3;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x28) = puVar3;
  puVar3 = PTR_PTR_1126ac038;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar12 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(uVar12);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0f4130);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0f4150);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar11 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f4170);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  lVar14 = *(long *)(lVar2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0f41a0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar11);
  lVar15 = *(long *)(lVar2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f41d0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b309c);
    (*pcVar1)();
  }
  *(long *)(lVar2 + 0x60) = lVar13;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar14 != 0) {
    *(long *)(lVar2 + 0x68) = lVar14;
    func_0x000107c52018();
    func_0x000107c61180();
    if (lVar15 != 0) {
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar9);
      *(long *)(lVar2 + 0x70) = lVar15;
      *param_1 = lVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b30a4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b30a0);
  (*pcVar1)();
}



/* Entry: 1006b2aa0; end: 1006b30a3;  */

void FUN_1006b2aa0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  func_0x000100692d04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x30) = uStack_70;
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174();
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x28) = puVar2;
  puVar2 = PTR_PTR_1126ac038;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0x646e696677656976;
  func_0x000107c5fadc(0x646e696677656976,0xef65706f63537265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar10);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0f4130);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0f4150);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0f4170);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  lVar13 = *(long *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0f41a0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar10);
  lVar14 = *(long *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0f41d0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b309c);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x60) = lVar12;
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    *(long *)(param_2 + 0x68) = lVar13;
    func_0x000107c52018();
    func_0x000107c61180();
    if (lVar14 != 0) {
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar8);
      *(long *)(param_2 + 0x70) = lVar14;
      *param_1 = param_2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b30a4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b30a0);
  (*pcVar1)();
}



/* Entry: 1006b30a4; end: 1006b30eb;  */

void FUN_1006b30a4(long param_1)

{
  func_0x00010061dc7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006b30ec; end: 1006b30fb;  */

void FUN_1006b30ec(void)

{
  return;
}



/* Entry: 1006b30fc; end: 1006b3123;  */

long FUN_1006b30fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1006b3124; end: 1006b3167;  */

void FUN_1006b3124(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  while (lVar1 != lVar2) {
    func_0x0001006a62b8();
    (**(code **)(extraout_x8 + 0x90))();
  }
  return;
}



/* Entry: 1006b3168; end: 1006b3197;  */

void FUN_1006b3168(void)

{
  return;
}



/* Entry: 1006b3198; end: 1006b38ef;  */

void FUN_1006b3198(long **param_1,ulong param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  long **pplVar4;
  undefined ***pppuVar5;
  long **pplVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *plVar9;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long *unaff_x24;
  byte bVar14;
  bool bVar15;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined **ppuStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined4 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  long *plStack_a40;
  long *plStack_a38;
  long *plStack_a30;
  long *plStack_a28;
  byte bStack_7d8;
  long *plStack_7c8;
  long *plStack_7c0;
  long *plStack_7b8;
  long *plStack_7b0;
  undefined4 uStack_7a8;
  ulong uStack_7a0;
  long lStack_768;
  char cStack_760;
  byte bStack_560;
  undefined1 auStack_558 [24];
  undefined8 *puStack_540;
  undefined1 auStack_2e0 [16];
  undefined8 *puStack_2d0;
  long *plStack_260;
  float fStack_19c;
  uint uStack_198;
  int iStack_194;
  char cStack_80;
  undefined8 uStack_78;
  
  func_0x0001006b3188();
  uStack_78 = extraout_x8;
  if ((param_3 != 0) || (in_ZR = *(char *)(param_1 + 0x18) == '\x01', !(bool)in_ZR))
  goto LAB_1006b379c;
  uVar8 = param_2;
  FUN_1006b38f0();
  in_ZR = (int)uVar8 == 4;
  iVar10 = (int)param_2;
  if ((bool)in_ZR) {
LAB_1006b31e8:
    uVar12 = 0;
  }
  else {
    bVar14 = 1;
    if (*(char *)(param_1 + 0x1e) == '\x01') {
      switch(param_2 & 0xffffffff) {
      case 0:
        bVar14 = *(byte *)(param_1 + 0x1c);
        break;
      case 1:
        bVar14 = *(byte *)((long)param_1 + 0xe1);
        break;
      case 2:
        bVar14 = *(byte *)((long)param_1 + 0xe2);
        break;
      case 3:
        bVar14 = *(byte *)((long)param_1 + 0xe3);
        break;
      case 5:
        bVar14 = *(byte *)((long)param_1 + 0xe5);
        break;
      case 6:
        bVar14 = *(byte *)((long)param_1 + 0xe6);
        break;
      case 7:
        bVar14 = *(byte *)((long)param_1 + 0xe7);
        break;
      case 8:
        bVar14 = *(byte *)(param_1 + 0x1d);
        break;
      case 9:
        bVar14 = *(byte *)((long)param_1 + 0xe9);
      }
    }
    bVar3 = iVar10 == 3 || iVar10 == 0;
    if ((*(byte *)((long)param_1 + 0xc1) & 1) == 0) {
      plVar11 = param_1[8];
      in_ZR = bVar3;
      func_0x0001006b38fc();
      (*extraout_x8_00)();
      auStack_2e0[0] = 0;
      cStack_80 = '\0';
      pplVar6 = param_1 + 10;
      FUN_1006217cc(auStack_558,*pplVar6);
      func_0x00010062b470(&plStack_7c8,auStack_558);
      func_0x000107c60ee4(&plStack_a40,0x270);
      bVar15 = false;
      while ((((bStack_560 & 1) != 0 || ((bStack_7d8 & 1) != 0)) &&
             (in_ZR = 1, plStack_7c8 != plStack_a40))) {
        pplVar4 = &plStack_7c8;
        FUN_10062b56c();
        in_ZR = *(char *)(pplVar4 + 0x11) == '\x01';
        if ((bool)in_ZR) {
          if (*(char *)(pplVar4 + 0x2c) == '\x01') {
            in_ZR = false;
            if ((cStack_80 != '\x01') ||
               (in_ZR = plStack_260 == pplVar4[0x10], plStack_260 < pplVar4[0x10])) {
              func_0x00010868c744(auStack_2e0,pplVar4);
            }
          }
          else {
LAB_1006b3364:
            func_0x000107c2a050(*pplVar6,plVar11,pplVar4 + 7,2);
            unaff_x24 = param_1[0x14];
            uStack_a88 = 0;
            uStack_a80 = 0;
            uStack_a78 = 0;
            ppuStack_a90 = &PTR_DAT_110a609a8;
            uStack_a70 = 0x272;
            in_ZR = *(int *)(pplVar4 + 0x13) == 1;
            uVar1 = 0x4d01ca;
            if (!(bool)in_ZR) {
              uVar1 = 0x4d01cb;
            }
            pppuVar5 = &ppuStack_a90;
            func_0x0001086901fc(pppuVar5,uVar1);
            func_0x0001005505a0(&uStack_a68,pppuVar5);
            (**(code **)(*unaff_x24 + 0x50))(unaff_x24,&uStack_a68);
            FUN_1005505e4(&uStack_a68);
            FUN_1005505e4(&ppuStack_a90);
          }
        }
        else {
          plVar9 = param_1[0x20];
          if ((plVar9 != (long *)0x0) &&
             (in_ZR = (long *)((long)plVar11 - (long)pplVar4[0x25]) == plVar9,
             plVar9 <= (long *)((long)plVar11 - (long)pplVar4[0x25]))) goto LAB_1006b3364;
          bVar15 = true;
        }
        FUN_1006219b8(&plStack_7c8);
      }
      FUN_10062b818(&plStack_a40);
      FUN_10062b818(&plStack_7c8);
      if (bVar15) {
        bVar15 = false;
        plVar11 = (long *)0x0;
LAB_1006b34ac:
        FUN_1006b38f0();
      }
      else {
        in_ZR = cStack_80 == '\x01';
        if (!(bool)in_ZR) {
          bVar15 = true;
          goto LAB_1006b34ac;
        }
        FUN_10062b9cc(&plStack_7c8,pplVar6);
        FUN_1006b38f0();
        if (((*(char *)((long)param_1 + 0xfb) == '\x01') && (iStack_194 != 0)) &&
           (in_ZR = uStack_7a0 == (long)iStack_194, uStack_7a0 <= (ulong)(long)iStack_194)) {
LAB_1006b34c0:
          plVar11 = (long *)0x0;
        }
        else {
          plStack_260 = (long *)((long)(fStack_19c * 1000.0) + (long)plStack_260);
          in_ZR = plVar11 == plStack_260;
          if ((long)plVar11 < (long)plStack_260) {
            in_ZR = *(char *)((long)param_1 + 0xfa) == '\x01';
            if (!(bool)in_ZR) goto LAB_1006b34c0;
            in_ZR = uStack_198 == 1;
            if ((int)uStack_198 < 1) goto LAB_1006b34b8;
            if (cStack_760 == '\0') {
              lStack_768 = 0;
            }
            in_ZR = plStack_7c8 == (long *)(lStack_768 + (ulong)uStack_198);
            plVar11 = (long *)(ulong)((long *)(lStack_768 + (ulong)uStack_198) <= plStack_7c8);
          }
          else {
LAB_1006b34b8:
            plVar11 = (long *)0x1;
          }
        }
        func_0x0001086933f8(&plStack_7c8);
        bVar15 = false;
      }
      FUN_10062b84c(auStack_558);
      FUN_10062b820(auStack_2e0);
      if (bVar15) goto LAB_1006b34e4;
      if (((ulong)plVar11 & 1) == 0) goto LAB_1006b31e8;
    }
    else {
LAB_1006b34e4:
      if (*(char *)(param_1 + 0x22) == '\x01') {
        pplVar6 = param_1 + 0x21;
        FUN_10088b0cc();
        plVar9 = *pplVar6;
        plVar13 = param_1[0x19];
        plVar11 = param_1[8];
        func_0x0001006b38fc();
        (*extraout_x8_01)();
        bVar15 = (long *)((long)plVar13 + (long)plVar9) <= plVar11;
      }
      else {
        bVar15 = true;
      }
      in_ZR = (bVar3 & bVar14) == 1;
      if ((!(bool)in_ZR) && ((bVar14 & bVar15 & (iVar10 != 3 && iVar10 != 0)) == 0))
      goto LAB_1006b31e8;
    }
    plStack_a38 = param_1[5];
    plStack_a40 = param_1[4];
    if (param_1[5] != (long *)0x0) {
      do {
        FUN_10056fe54();
      } while (extraout_w10 != 0);
    }
    plStack_a28 = param_1[9];
    plStack_a30 = param_1[8];
    if (param_1[9] != (long *)0x0) {
      do {
        FUN_10056fe54();
      } while (extraout_w10_00 != 0);
    }
    plVar11 = param_1[10];
    func_0x000107c29ff0(plVar11,0);
    plVar9 = param_1[10];
    func_0x000107c29ff4(plVar9,0);
    plVar13 = param_1[10];
    func_0x000107c2a004(plVar13,0);
    uStack_a9c = SUB84(plVar11,0);
    uStack_a98 = SUB84(plVar9,0);
    uStack_a94 = SUB84(plVar13,0);
    func_0x000107c29ebc(param_2);
    puVar7 = (undefined8 *)auStack_2e0;
    func_0x00010868e0cc(puVar7,1);
    puVar2 = puStack_2d0;
    unaff_x24 = plStack_a38;
    plVar11 = plStack_a40;
    puStack_2d0[2] = 0;
    *puStack_2d0 = &PTR_DAT_110a62a10;
    puStack_2d0[1] = 0;
    plStack_7c8 = plStack_a40;
    plStack_7c0 = plStack_a38;
    if (plStack_a38 != (long *)0x0) {
      do {
        FUN_10056fe54();
      } while (extraout_w10_01 != 0);
    }
    plVar13 = plStack_a28;
    plVar9 = plStack_a30;
    plStack_7b8 = plStack_a30;
    plStack_7b0 = plStack_a28;
    if (plStack_a28 != (long *)0x0) {
      do {
        FUN_10056fe54();
      } while (extraout_w10_02 != 0);
    }
    puStack_540 = (undefined8 *)0x0;
    func_0x000108693464();
    *puVar7 = &PTR_DAT_110a62de0;
    puVar7[1] = plVar11;
    plStack_7c8 = (long *)0x0;
    plStack_7c0 = (long *)0x0;
    puVar7[2] = unaff_x24;
    puVar7[3] = plVar9;
    puVar7[4] = plVar13;
    plStack_7b8 = (long *)0x0;
    plStack_7b0 = (long *)0x0;
    uStack_a68 = 0;
    uStack_a60 = 0;
    puStack_540 = puVar7;
    func_0x0001086936a4(puVar2 + 3,param_1 + 0x12,param_1 + 0x10,param_1 + 6,param_1 + 0xe,
                        param_1 + 8,param_1 + 0x14,param_2,auStack_558,&uStack_a9c,param_1 + 0x16,
                        &uStack_a68);
    func_0x0001005638ec(&uStack_a68);
    func_0x00010868e450(auStack_558);
    func_0x000108691b70(&plStack_7c8);
    puVar7 = puStack_2d0;
    puStack_2d0 = (undefined8 *)0x0;
    func_0x00010868e0b0(&ppuStack_a90,puVar7 + 3);
    func_0x00010868e57c(auStack_2e0);
    func_0x00010868c708(param_1 + 0x23,&ppuStack_a90);
    func_0x00010868cd80(&ppuStack_a90);
    func_0x0001086938d4(param_1[0x23]);
    FUN_1006b38f0();
    func_0x000108691b70(&plStack_a40);
    uVar12 = 1;
  }
  plVar11 = param_1[0x14];
  plStack_7b8 = (long *)0x0;
  plStack_7b0 = (long *)0x0;
  plStack_7c8 = unaff_x24 + 2;
  plStack_7c0 = (long *)0x0;
  uStack_7a8 = 0x25d;
  FUN_10002b838(&plStack_a40,&DAT_10f4b05df);
  pplVar6 = &plStack_7c8;
  FUN_1005504ac(pplVar6,&plStack_a40,(&PTR_DAT_110a62d50)[iVar10]);
  FUN_10002b838(auStack_2e0,&UNK_10f4b07d3);
  FUN_1005e34cc(pplVar6,auStack_2e0,uVar12);
  func_0x0001005505a0(auStack_558,pplVar6);
  (**(code **)(*plVar11 + 0x50))(plVar11,auStack_558);
  FUN_1005505e4(auStack_558);
  func_0x000107c60ca0(auStack_2e0);
  func_0x000107c60ca0(&plStack_a40);
  param_1 = &plStack_7c8;
  FUN_1005505e4(param_1);
LAB_1006b379c:
  func_0x0001006b3908(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_10062b84c(auStack_558);
  FUN_10062b820(auStack_2e0);
  func_0x000107c60bd8(param_1);
  return;
}



/* Entry: 1006b38f0; end: 1006b391b;  */

void FUN_1006b38f0(void)

{
  return;
}



/* Entry: 1006b391c; end: 1006b3947;  */

undefined8 FUN_1006b391c(undefined8 param_1)

{
  FUN_1006adf74();
  FUN_1006b3948(param_1);
  return param_1;
}



/* Entry: 1006b3948; end: 1006b398f;  */

undefined8 FUN_1006b3948(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_100067de0(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_1005f73a4();
  }
  func_0x000107c60e14();
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x000107c2a308();
  }
  func_0x000107c60e14();
  FUN_1006b3990(param_1 + 0x18);
  if (extraout_x8 != 0) {
    FUN_1006b39c4();
  }
  return unaff_x19;
}



/* Entry: 1006b3990; end: 1006b399b;  */

void FUN_1006b3990(void)

{
  return;
}



/* Entry: 1006b399c; end: 1006b39c3;  */

void FUN_1006b399c(void)

{
  long extraout_x8;
  
  FUN_1006b3990();
  if (extraout_x8 != 0) {
    FUN_1006b39c4();
  }
  return;
}



/* Entry: 1006b39c4; end: 1006b39cb;  */

void FUN_1006b39c4(void)

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



/* Entry: 1006b39cc; end: 1006b39df;  */

void FUN_1006b39cc(void)

{
  FUN_1006adf7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006b39e0; end: 1006b39f3;  */

void FUN_1006b39e0(void)

{
  return;
}



/* Entry: 1006b39f4; end: 1006b3a17;  */

void FUN_1006b39f4(long param_1)

{
  func_0x000100563fa8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006b3a18; end: 1006b3a33;  */

void FUN_1006b3a18(void)

{
  return;
}


