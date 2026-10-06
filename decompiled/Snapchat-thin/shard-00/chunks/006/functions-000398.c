/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10084f360; end: 10084f36b;  */

undefined8 FUN_10084f360(undefined8 param_1,long *param_2,long param_3)

{
  *param_2 = param_3;
  if (*(int *)(param_3 + 8) == 0) {
    param_2[1] = param_3;
    *(undefined4 *)(param_2 + 2) = 0;
  }
  return 1;
}



/* Entry: 10084f36c; end: 10084f503;  */

undefined8 * FUN_10084f36c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined7 uStack_70;
  char cStack_69;
  undefined4 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  *(undefined4 *)(param_1 + 7) = 0;
  puVar2 = param_1 + 8;
  param_1[9] = 0;
  *puVar2 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107ec8b8;
  if ((*param_2 != 0) &&
     (plVar1 = plRam0000000113815c70,
     (**(code **)(*plRam0000000113815c70 + 0xd0))(plRam0000000113815c70,param_1 + 3),
     (int)plVar1 != 0)) {
    return param_1;
  }
  FUN_10002d4d8(&uStack_80,"Couldn\'t initialize byte buffer reader");
  uStack_68 = 0xd;
  if (cStack_69 < '\0') {
    FUN_100033dac(&uStack_60,uStack_80,uStack_78);
  }
  else {
    uStack_58 = uStack_78;
    uStack_60 = uStack_80;
    uStack_50 = CONCAT17(cStack_69,uStack_70);
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *(undefined4 *)(param_1 + 7) = uStack_68;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    func_0x000107c60e14(*puVar2);
  }
  param_1[9] = uStack_58;
  *puVar2 = uStack_60;
  param_1[10] = uStack_50;
  uStack_50 = uStack_50 & 0xffffffffffffff;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    func_0x000107c60e14(param_1[0xb]);
    param_1[0xc] = uStack_40;
    param_1[0xb] = uStack_48;
    param_1[0xd] = uStack_38;
    uStack_38 = uStack_38 & 0xffffffffffffff;
    uStack_48 = uStack_48 & 0xffffffffffffff00;
    if ((long)uStack_50 < 0) {
      func_0x000107c60e14(uStack_60);
    }
  }
  else {
    param_1[0xc] = uStack_40;
    param_1[0xb] = uStack_48;
    param_1[0xd] = uStack_38;
    uStack_38 = uStack_38 & 0xffffffffffffff;
    uStack_48 = uStack_48 & 0xffffffffffffff00;
  }
  if (cStack_69 < '\0') {
    func_0x000107c60e14(uStack_80);
  }
  return param_1;
}



/* Entry: 10084f504; end: 10084f53f;  */

long * FUN_10084f504(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  undefined8 extraout_x8;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *unaff_x20;
  long *plStack_b0;
  long alStack_a8 [4];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010006364c();
  func_0x0001000637f4();
  plVar1 = (long *)*param_1;
  if ((long *)*param_1 == (long *)0x0) {
    func_0x000107c39c54();
    plVar1 = param_1;
  }
  plVar3 = plVar1;
  func_0x000100063820(*unaff_x20,*unaff_x20);
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x7fffffff00000000;
  uStack_50 = uRam0000000113375758;
  uStack_4c = 0x80000000;
  uStack_48 = 0;
  uStack_40 = 0;
  plVar7 = alStack_a8;
  uStack_38 = extraout_x8;
  FUN_10084f810();
  plStack_b0 = plVar7;
  while( true ) {
    plVar7 = alStack_a8;
    pplVar2 = &plStack_b0;
    func_0x000100063a24();
    if (((ulong)plVar7 & 1) != 0) break;
    pplVar2 = (long **)plStack_b0;
    FUN_100063a9c();
    plVar3 = alStack_a8;
    func_0x000100063abc();
    plStack_b0 = plVar7;
    if ((plVar7 == (long *)0x0) || ((int)uStack_58 != 0)) break;
  }
  plVar4 = plStack_b0;
  if ((*(byte *)((long)plVar1 + 9) & 1) != 0) {
    plVar3 = alStack_a8;
    pplVar2 = (long **)plStack_b0;
    func_0x0001006af8bc(plVar1[5]);
    plVar4 = plVar7;
  }
  plVar1 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    in_ZR = (int)uStack_58 == 1;
    if ((bool)in_ZR) {
      func_0x000100065438();
    }
  }
  func_0x0001000659a8(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  func_0x000107c60e78();
  if ((int)plVar1[7] != 0) {
    return (long *)0x0;
  }
  uVar5 = plVar1[2];
  if (0 < (long)uVar5) {
    plVar7 = (long *)plVar1[6];
    if (*plVar7 == 0) {
      lVar6 = (long)plVar7 + 9;
      uVar8 = (ulong)*(byte *)(plVar7 + 1);
    }
    else {
      uVar8 = plVar7[1];
      lVar6 = plVar7[2];
    }
    *pplVar2 = (long *)((lVar6 + uVar8) - uVar5);
    if (uVar5 >> 0x1f != 0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,"backup_count_ <= INT_MAX",
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_reader.h"
                 ,0x50);
      uVar5 = plVar1[2];
    }
    *(int *)plVar3 = (int)uVar5;
    plVar1[2] = 0;
    return (long *)0x1;
  }
  plVar7 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0xe8))(plRam0000000113815c70,plVar1 + 3,plVar1 + 6);
  if ((int)plVar7 == 0) {
    return plVar7;
  }
  plVar7 = (long *)plVar1[6];
  if (*plVar7 == 0) {
    lVar6 = (long)plVar7 + 9;
  }
  else {
    lVar6 = plVar7[2];
  }
  *pplVar2 = (long *)lVar6;
  plVar7 = (long *)plVar1[6];
  if (*plVar7 != 0) {
    uVar5 = plVar7[1];
    if (uVar5 >> 0x1f == 0) goto LAB_10084f7b8;
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"GRPC_SLICE_LENGTH(*slice_) <= INT_MAX",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_reader.h"
               ,0x5c);
    plVar7 = (long *)plVar1[6];
    if (*plVar7 != 0) {
      uVar5 = plVar7[1];
      goto LAB_10084f7b8;
    }
  }
  uVar5 = (ulong)*(byte *)(plVar7 + 1);
LAB_10084f7b8:
  *(int *)plVar3 = (int)uVar5;
  plVar1[1] = plVar1[1] + (long)(int)uVar5;
  return (long *)0x1;
}



/* Entry: 10084f540; end: 10084f55f;  */

void FUN_10084f540(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10084f504(param_1,&uStack_18);
  return;
}



/* Entry: 10084f560; end: 10084f59f;  */

void FUN_10084f560(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10084f5a0; end: 10084f5b3;  */

void FUN_10084f5a0(void)

{
  return;
}



/* Entry: 10084f5b4; end: 10084f80f;  */

long * FUN_10084f5b4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plStack_b0;
  long alStack_a8 [4];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar3 = param_3;
  func_0x000100063820(param_1,param_1);
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x7fffffff00000000;
  uStack_50 = uRam0000000113375758;
  uStack_4c = 0x80000000;
  uStack_48 = 0;
  uStack_40 = 0;
  plVar1 = alStack_a8;
  uStack_38 = extraout_x8;
  FUN_10084f810();
  plStack_b0 = plVar1;
  while( true ) {
    plVar1 = alStack_a8;
    pplVar2 = &plStack_b0;
    func_0x000100063a24();
    if (((ulong)plVar1 & 1) != 0) break;
    pplVar2 = (long **)plStack_b0;
    FUN_100063a9c();
    plVar3 = alStack_a8;
    func_0x000100063abc();
    plStack_b0 = plVar1;
    if ((plVar1 == (long *)0x0) || ((int)uStack_58 != 0)) break;
  }
  plVar6 = plStack_b0;
  if ((*(byte *)((long)param_3 + 9) & 1) != 0) {
    plVar3 = alStack_a8;
    pplVar2 = (long **)plStack_b0;
    func_0x0001006af8bc(param_3[5]);
    plVar6 = plVar1;
  }
  plVar1 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    in_ZR = (int)uStack_58 == 1;
    if ((bool)in_ZR) {
      func_0x000100065438();
    }
  }
  func_0x0001000659a8(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  func_0x000107c60e78();
  if ((int)plVar1[7] != 0) {
    return (long *)0x0;
  }
  uVar4 = plVar1[2];
  if (0 < (long)uVar4) {
    plVar6 = (long *)plVar1[6];
    if (*plVar6 == 0) {
      lVar5 = (long)plVar6 + 9;
      uVar7 = (ulong)*(byte *)(plVar6 + 1);
    }
    else {
      uVar7 = plVar6[1];
      lVar5 = plVar6[2];
    }
    *pplVar2 = (long *)((lVar5 + uVar7) - uVar4);
    if (uVar4 >> 0x1f != 0) {
      (**(code **)(*plRam0000000113815c70 + 0x10))
                (plRam0000000113815c70,"backup_count_ <= INT_MAX",
                 "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_reader.h"
                 ,0x50);
      uVar4 = plVar1[2];
    }
    *(int *)plVar3 = (int)uVar4;
    plVar1[2] = 0;
    return (long *)0x1;
  }
  plVar6 = plRam0000000113815c70;
  (**(code **)(*plRam0000000113815c70 + 0xe8))(plRam0000000113815c70,plVar1 + 3,plVar1 + 6);
  if ((int)plVar6 == 0) {
    return plVar6;
  }
  plVar6 = (long *)plVar1[6];
  if (*plVar6 == 0) {
    lVar5 = (long)plVar6 + 9;
  }
  else {
    lVar5 = plVar6[2];
  }
  *pplVar2 = (long *)lVar5;
  plVar6 = (long *)plVar1[6];
  if (*plVar6 != 0) {
    uVar4 = plVar6[1];
    if (uVar4 >> 0x1f == 0) goto LAB_10084f7b8;
    (**(code **)(*plRam0000000113815c70 + 0x10))
              (plRam0000000113815c70,"GRPC_SLICE_LENGTH(*slice_) <= INT_MAX",
               "/var/lib/snapci/unsafe_nlo/conan/grpc/1.48.4-63df33afde3bbfd38b8c9d655644ee93bf84f159/_/_/package/a633f1315c67fd3d62ca0fccfe0160352629e3ee/include/S/grpcpp/impl/codegen/proto_buffer_reader.h"
               ,0x5c);
    plVar6 = (long *)plVar1[6];
    if (*plVar6 != 0) {
      uVar4 = plVar6[1];
      goto LAB_10084f7b8;
    }
  }
  uVar4 = (ulong)*(byte *)(plVar6 + 1);
LAB_10084f7b8:
  *(int *)plVar3 = (int)uVar4;
  plVar1[1] = plVar1[1] + (long)(int)uVar4;
  return (long *)0x1;
}



/* Entry: 10084f810; end: 10084f8f3;  */

long * FUN_10084f810(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  uint uStack_2c;
  long *plStack_28;
  
  param_1[4] = (long)param_2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x7fffffff;
  (**(code **)(*param_2 + 0x10))(param_2,&plStack_28,&uStack_2c);
  if ((int)param_2 == 0) {
    *(undefined4 *)((long)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    plVar2 = param_1 + 5;
    param_1[1] = (long)plVar2;
    param_1[2] = 0;
    *param_1 = (long)plVar2;
  }
  else {
    *(uint *)((long)param_1 + 0x54) = *(int *)((long)param_1 + 0x54) - uStack_2c;
    if ((int)uStack_2c < 0x11) {
      *param_1 = (long)(param_1 + 7);
      param_1[1] = (long)(param_1 + 7);
      param_1[2] = (long)(param_1 + 5);
      plVar2 = (long *)((long)param_1 + (0x48 - (long)(int)uStack_2c));
      func_0x000107c610b4(plVar2,plStack_28);
    }
    else {
      *(uint *)((long)param_1 + 0x1c) = (*(int *)((long)param_1 + 0x1c) - uStack_2c) + 0x10;
      lVar1 = (long)plStack_28 + ((ulong)uStack_2c - 0x10);
      *param_1 = lVar1;
      param_1[1] = lVar1;
      param_1[2] = (long)(param_1 + 5);
      plVar2 = plStack_28;
      if (param_1[9] == 1) {
        param_1[9] = 2;
      }
    }
  }
  return plVar2;
}



/* Entry: 10084f8f4; end: 10084f94f;  */

undefined8 FUN_10084f8f4(undefined8 param_1,long *param_2,long *param_3)

{
  if (*(int *)(*param_2 + 8) == 0) {
    if ((ulong)*(uint *)(param_2 + 2) < *(ulong *)(param_2[1] + 0x28)) {
      *param_3 = *(long *)(param_2[1] + 0x20) + (ulong)*(uint *)(param_2 + 2) * 0x20;
      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      return 1;
    }
  }
  return 0;
}



/* Entry: 10084f950; end: 10084f9c3;  */

undefined8 * FUN_10084f950(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107ec8b8;
  if (*(int *)(param_1 + 7) == 0) {
    (**(code **)(*plRam0000000113815c70 + 0xd8))(plRam0000000113815c70,param_1 + 3);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    func_0x000107c60e14(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    func_0x000107c60e14(param_1[8]);
  }
  return param_1;
}



/* Entry: 10084f9c4; end: 10084f9ff;  */

void FUN_10084f9c4(void)

{
  return;
}



/* Entry: 10084fa00; end: 10084fa1b;  */

void FUN_10084fa00(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x00010084f9e8();
  func_0x0001008500e8();
                    /* WARNING: Could not recover jumptable at 0x00010085010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10084fa1c; end: 10084fa27;  */

void FUN_10084fa1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010084fa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x68))();
  return;
}



/* Entry: 10084fa28; end: 10084faa7;  */

void FUN_10084fa28(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10084fa1c();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010084fa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10084faa8; end: 10084fb03;  */

long FUN_10084faa8(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    FUN_10084fb0c();
  }
  FUN_1005fe558(alStack_30);
  return alStack_30[0];
}



/* Entry: 10084fb04; end: 10084fb0b;  */

void FUN_10084fb04(void)

{
  return;
}



/* Entry: 10084fb0c; end: 10084fb6b;  */

bool FUN_10084fb0c(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  else {
    func_0x000108777810(param_1,0);
  }
  return iVar1 == 0;
}



/* Entry: 10084fb6c; end: 10084fce7;  */

void FUN_10084fb6c(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  ulong uStack_68;
  undefined1 uStack_48;
  long *plStack_40;
  undefined8 uStack_38;
  
  plVar4 = *(long **)(param_2 + 0x20);
  func_0x0001005ff0d0(&uStack_70);
  plVar2 = *(long **)(CONCAT71(uStack_6f,uStack_70) + 0x180);
  (**(code **)(*plVar2 + 0x10))();
  func_0x000100564164(&uStack_70);
  FUN_1006a2668(plVar4[0xb]);
  uStack_70 = 0;
  uStack_48 = 0;
  FUN_1006a2aac(plVar4[0xb],&uStack_70);
  FUN_1006a5b38(&uStack_70);
  func_0x00010084fd84(&uStack_70,param_1);
  lVar5 = plVar4[0xd];
  plStack_40 = plVar2;
  do {
    uStack_38 = 0;
    lVar3 = lVar5 + 0x10;
    FUN_10084fe34(lVar3,&uStack_38);
    if ((int)lVar3 != 0) {
      puVar1 = (undefined1 *)(lVar5 + 0x98);
      FUN_10084fe40(puVar1);
      *(undefined ***)(lVar5 + 0x98) = &PTR_DAT_110a98840;
      *(undefined8 *)(lVar5 + 0xa0) = 0;
      *(undefined8 *)(lVar5 + 0xb0) = 0;
      *(undefined8 *)(lVar5 + 0xb8) = 0;
      *(undefined8 *)(lVar5 + 0xa8) = 0;
      *(undefined4 *)(lVar5 + 0xc0) = 0;
      if (puVar1 != &uStack_70) {
        if ((uStack_68 & 1) != 0) {
          uStack_68 = *(ulong *)(uStack_68 & 0xfffffffffffffffe);
        }
        if (uStack_68 == 0) {
          FUN_10084fe70(puVar1,&uStack_70);
        }
        else {
          func_0x000107c2a618(puVar1,&uStack_70);
        }
      }
      *(long **)(lVar5 + 200) = plStack_40;
      *(undefined4 *)(lVar5 + 0xd0) = 1;
      *(undefined1 *)(lVar5 + 0xd8) = 1;
      *(undefined8 *)(lVar5 + 0x10) = 2;
      FUN_1005fb9fc(lVar5,plVar4 + 0xd);
      break;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  FUN_10084fe8c(&uStack_70);
  (**(code **)(*plVar4 + 0x28))(plVar4);
  return;
}



/* Entry: 10084fce8; end: 10084fd07;  */

void FUN_10084fce8(void)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x24;
  long unaff_x29;
  
  uVar1 = *(undefined4 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(long *)(unaff_x29 + -0xd8) = unaff_x24 + 0x10;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined4 *)(unaff_x29 + -0xb8) = uVar1;
  return;
}



/* Entry: 10084fd08; end: 10084fd67;  */

void FUN_10084fd08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [32];
  
  FUN_10028af84(auStack_50,param_5);
  FUN_1006a3234(param_2,param_3,param_4,auStack_50,param_6);
  func_0x0001004b5574();
  return;
}



/* Entry: 10084fd68; end: 10084fd8f;  */

undefined * FUN_10084fd68(uint param_1)

{
  if (param_1 < 0x18) {
    return (&PTR_DAT_110a62200)[param_1];
  }
  return &UNK_10f4b02b6;
}



/* Entry: 10084fd90; end: 10084fdf7;  */

undefined8 * FUN_10084fd90(undefined8 *param_1,undefined8 param_2,long param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110a98840;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  FUN_10084fe08(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 10084fdf8; end: 10084fe07;  */

void FUN_10084fdf8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  FUN_100361ce4();
  plVar2 = param_1;
  FUN_10064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  FUN_100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10084fe08; end: 10084fe33;  */

undefined8 * FUN_10084fe08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  FUN_10084fdf8(param_1,param_3);
  return param_1;
}



/* Entry: 10084fe34; end: 10084fe3f;  */

/* WARNING: Removing unreachable block (ram,0x0001005ef784) */
/* WARNING: Removing unreachable block (ram,0x0001005ef7a8) */
/* WARNING: Removing unreachable block (ram,0x0001005ef7f0) */
/* WARNING: Removing unreachable block (ram,0x0001005ef758) */
/* WARNING: Removing unreachable block (ram,0x0001005ef760) */
/* WARNING: Removing unreachable block (ram,0x0001005ef7c0) */

undefined8 FUN_10084fe34(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == *param_2) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') {
      return 1;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  *param_2 = lVar3;
  return 0;
}



/* Entry: 10084fe40; end: 10084fe6f;  */

void FUN_10084fe40(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_100851890();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 10084fe70; end: 10084fe8b;  */

undefined1  [16] FUN_10084fe70(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 10084fe8c; end: 10084feb7;  */

long FUN_10084fe8c(long param_1)

{
  FUN_10061dd38();
  FUN_10084feb8(param_1 + 0x10);
  return param_1;
}



/* Entry: 10084feb8; end: 10084fee7;  */

long * FUN_10084feb8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1000681a0(param_1);
  }
  return param_1;
}



/* Entry: 10084fee8; end: 10084feeb;  */

void FUN_10084fee8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10084feec();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010084ff5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x100))(*(long **)(param_1 + 0x30),param_1);
    return;
  }
  return;
}



/* Entry: 10084feec; end: 10084ff67;  */

bool FUN_10084feec(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 2) {
    func_0x000108777810(param_1,2);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 2;
  }
  return iVar1 != 2;
}



/* Entry: 10084ff68; end: 10084ff73;  */

undefined1 * FUN_10084ff68(void)

{
  return &stack0x00000008;
}



/* Entry: 10084ff74; end: 100850043;  */

void FUN_10084ff74(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  FUN_10084ff68();
  func_0x000107c60c94();
  FUN_1005fe880(&lStack_50,unaff_x19 + 0x18,auStack_48);
  lVar2 = *(long *)(unaff_x19 + 0x18) + *(long *)(unaff_x19 + 0x20) * 0x28;
  if ((lStack_50 == lVar2) || (*(long *)(lStack_50 + 0x18) != param_2)) {
    func_0x000108777810(param_2,3);
  }
  else {
    while (lVar1 = lStack_50 + 0x28, lVar1 != lVar2) {
      FUN_100850044(lStack_50,lVar1);
      lStack_50 = lVar1;
    }
    FUN_1006aea04(lVar2 + -0x28);
    *(long *)(unaff_x19 + 0x20) = *(long *)(unaff_x19 + 0x20) + -1;
  }
  if ((*(char *)(unaff_x19 + 0x40) == '\x01') && (*(long *)(unaff_x19 + 0x20) == 0)) {
    func_0x0001005ed540(unaff_x19 + 0x50);
  }
  FUN_1005feba8();
  return;
}



/* Entry: 100850044; end: 100850083;  */

long FUN_100850044(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100066230();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_100850084();
  return param_1;
}



/* Entry: 100850084; end: 10085008b;  */

void FUN_100850084(void)

{
  FUN_100562400();
  if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10085008c; end: 1008500df; -[SCCameraViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10085008c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8378;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x000107c4e5d8(*(undefined8 *)(param_1 + _DAT_1127624cc));
  return;
}



/* Entry: 1008500e0; end: 10085010f;  */

void FUN_1008500e0(void)

{
  return;
}



/* Entry: 100850110; end: 1008503af;  */

void FUN_100850110(long param_1,undefined8 param_2,uint param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [40];
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (param_3 == 0) {
    FUN_1008503b0();
    FUN_10002b838(auStack_b8,&UNK_10f4affde);
    func_0x0001008503d0(param_2);
    puVar3 = auStack_a0;
    FUN_1005504ac(puVar3,auStack_b8,param_2);
    FUN_10002b838(auStack_d0,&UNK_10f4ba144);
    FUN_1005504ac(puVar3,auStack_d0,"success");
    func_0x0001005505a0(auStack_78,puVar3);
    (**(code **)(*plVar5 + 0x50))(plVar5,auStack_78);
    FUN_1005505e4(auStack_78);
    func_0x000107c60ca0(auStack_d0);
    func_0x000107c60ca0(auStack_b8);
    FUN_100850df4();
    func_0x0001005ed540(param_1 + 0x20);
    FUN_10054ed98(auStack_a0);
    lStack_e0 = param_1 + 0x28;
    lStack_d8 = param_1 + 0x20;
    FUN_10054eea8(&lStack_e0,auStack_a0);
    func_0x00010054ef4c(auStack_a0);
  }
  else {
    FUN_1008503b0();
    FUN_10002b838(auStack_120,&UNK_10f4affde);
    func_0x0001008503d0(param_2);
    puVar3 = auStack_a0;
    FUN_1005504ac(puVar3,auStack_120,param_2);
    FUN_10002b838(auStack_138,&UNK_10f4ba144);
    if (param_3 < 8) {
      pcVar4 = (&PTR_DAT_110a7aad0)[param_3 - 1];
    }
    else {
      pcVar4 = "success";
    }
    FUN_1005504ac(puVar3,auStack_138,pcVar4);
    FUN_10002b838(auStack_150,&UNK_10f4be218);
    puVar1 = &UNK_10f4be35e;
    if (param_5 == 0) {
      puVar1 = &UNK_10f4be369;
    }
    puVar2 = &UNK_10f4be338;
    if (param_5 == 0) {
      puVar2 = &UNK_10f4be34f;
    }
    if (param_4 == 0) {
      puVar2 = puVar1;
    }
    FUN_1005504ac(puVar3,auStack_150,puVar2);
    func_0x0001005505a0(auStack_108,puVar3);
    (**(code **)(*plVar5 + 0x50))(plVar5,auStack_108);
    FUN_1005505e4(auStack_108);
    func_0x000107c60ca0(auStack_150);
    func_0x000107c60ca0(auStack_138);
    func_0x000107c60ca0(auStack_120);
    FUN_100850df4();
  }
  return;
}



/* Entry: 1008503b0; end: 1008503f3;  */

void FUN_1008503b0(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined ***)(unaff_x29 + -0x90) = &PTR_DAT_110a609a8;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined4 *)(unaff_x29 + -0x70) = 0x7c;
  return;
}



/* Entry: 1008503f4; end: 10085096f; -[SCMainCameraViewControllerStartupWorkflow performViewDidLoad:] */

void FUN_1008503f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  puStack_80 = PTR_PTR_1126f8340;
  uStack_88 = param_1;
  func_0x000107c61154(&uStack_88,PTR_s_performViewDidLoad__11261bef8,param_3);
  uVar8 = param_3;
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  uVar1 = uVar8;
  func_0x000107c4cb08();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  uVar8 = param_3;
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  uVar1 = uVar8;
  func_0x000107c4cb08();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c45444();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  uVar8 = param_3;
  func_0x000107c3f0bc(param_3);
  func_0x000107c61180();
  uVar1 = uVar8;
  func_0x000107c50898();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c5a110();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c3b9fc(param_1);
  func_0x000107c61144(auStack_90,param_3);
  puVar3 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126c82e8;
  func_0x000107c4cc84(PTR_PTR_1126c82e8);
  func_0x000107c61180();
  func_0x000107c3f044(puVar5);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  puStack_a8 = &UNK_106fea3d0;
  puStack_a0 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_98,auStack_90);
  func_0x000107c5e08c(puVar3);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  puVar4 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c82e8;
  puVar5 = PTR_PTR_1126ae960;
  puVar6 = PTR_PTR_1126d3fc8;
  func_0x000107c43e64(PTR_PTR_1126d3fc8);
  func_0x000107c61180();
  func_0x000107c4c198(puVar3);
  func_0x000107c61180();
  func_0x000107c3f044(puVar5);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  uVar8 = 0x15;
  FUN_1000819a8(0x15,0);
  func_0x000107c61180();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  puStack_d0 = &UNK_106fea4f4;
  puStack_c8 = &UNK_1108434b0;
  func_0x000107c6111c(auStack_c0,auStack_90);
  func_0x000107c5e070(puVar4);
  func_0x000107c611b0();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61144(auStack_e8,param_1);
  puVar4 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c82e8;
  puVar5 = PTR_PTR_1126ae960;
  puVar6 = PTR_PTR_1126d3fc8;
  func_0x000107c5d774(PTR_PTR_1126d3fc8);
  func_0x000107c61180();
  func_0x000107c4c198(puVar3);
  func_0x000107c61180();
  func_0x000107c3f044(puVar5);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  uVar8 = 0x15;
  FUN_1000819a8(0x15,0);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_f8,auStack_90);
  func_0x000107c6111c(auStack_f0,auStack_e8);
  func_0x000107c5e070(puVar4);
  func_0x000107c611b0();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_f0);
  func_0x000107c61120(auStack_f8);
  func_0x000107c61120(auStack_e8);
  func_0x000107c61120(auStack_c0);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_90);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100850970; end: 100850df3; -[SCCameraViewControllerStartupWorkflow performViewDidLoad:] */

undefined *** FUN_100850970(undefined8 param_1,undefined8 param_2,undefined ***param_3)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  pppuVar1 = param_3;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  pppuVar2 = param_3;
  func_0x000107c3f1ac();
  func_0x000107c61180();
  func_0x000107c557ec(pppuVar1);
  pppuVar3 = pppuVar2;
  func_0x000107c3f084();
  func_0x000107c61180();
  pppuVar4 = pppuVar3;
  func_0x000107c4008c();
  func_0x000107c61180();
  pppuVar5 = pppuVar4;
  func_0x000107c5b038();
  func_0x000107c61180();
  pppuVar6 = pppuVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  pppuVar7 = pppuVar6;
  func_0x000107c4261c();
  func_0x000107c61170(pppuVar6);
  func_0x000107c61170(pppuVar5);
  func_0x000107c61170(pppuVar4);
  func_0x000107c61170(pppuVar3);
  if (((ulong)pppuVar7 & 1) == 0) {
    func_0x000107c5a880(param_1);
  }
  func_0x000107c40b5c(param_1);
  pppuVar3 = pppuVar2;
  func_0x000107c40534();
  if ((((pppuVar3 == (undefined ***)0x2) ||
       (pppuVar3 = pppuVar2, func_0x000107c40534(), pppuVar3 == (undefined ***)0x3)) ||
      (pppuVar3 = pppuVar2, func_0x000107c40534(), pppuVar3 == (undefined ***)0x4)) ||
     (pppuVar3 = pppuVar2, func_0x000107c40534(), pppuVar3 == (undefined ***)0x5)) {
    pppuVar3 = pppuVar1;
    func_0x000107c3f16c(pppuVar1);
    func_0x000107c61180();
    func_0x000107c4254c();
    func_0x000107c61170(pppuVar3);
  }
  pppuVar3 = pppuVar2;
  func_0x000107c40534();
  if (pppuVar3 == (undefined ***)0x1) {
    pppuVar3 = pppuVar1;
    func_0x000107c3f16c(pppuVar1);
    func_0x000107c61180();
    func_0x000107c4254c();
    func_0x000107c61170(pppuVar3);
  }
  func_0x000107c3acfc(param_1);
  puVar8 = PTR_PTR_1126b19f8;
  func_0x000107c3f040();
  func_0x000107c61180();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar8;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126b7f68;
  func_0x000107c5a9bc(PTR_PTR_1126b7f68);
  func_0x000107c61180();
  func_0x000107c5393c();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61144(auStack_78,param_1);
  func_0x000107c61144(auStack_80,param_3);
  func_0x000107c61144(auStack_88,pppuVar2);
  puVar9 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126ae960;
  puVar10 = PTR_PTR_1126c82e8;
  func_0x000107c5deb4(PTR_PTR_1126c82e8);
  func_0x000107c61180();
  func_0x000107c3f044(puVar8);
  func_0x000107c61180();
  puVar11 = PTR_PTR_1126ae970;
  func_0x000107c5d9b8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(&ppuStack_a0,auStack_78);
  func_0x000107c6111c(auStack_98,auStack_80);
  func_0x000107c6111c(auStack_90,auStack_88);
  func_0x000107c5e084(puVar9);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  pppuVar3 = pppuVar2;
  func_0x000107c5de88(pppuVar2);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126bd5f8;
  func_0x000107c5deb4(PTR_PTR_1126bd5f8);
  func_0x000107c61180();
  func_0x000107c4d664(pppuVar3);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(pppuVar3);
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(&ppuStack_a0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(pppuVar2);
  func_0x000107c61170(pppuVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_90);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(&ppuStack_a0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c60bd8(param_3);
  ppuStack_a0 = &PTR_DAT_110a60a10;
  FUN_1000e30f4(auStack_98);
  return &ppuStack_a0;
}



/* Entry: 100850df4; end: 100850dfb;  */

undefined8 * FUN_100850df4(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x90) = &PTR_DAT_110a60a10;
  FUN_1000e30f4(unaff_x29 + -0x88);
  return (undefined8 *)(unaff_x29 + -0x90);
}



/* Entry: 100850dfc; end: 100850e7b;  */

void FUN_100850dfc(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)(param_2 + 1);
  do {
    uVar4 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar4 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar4 >> 0x21 == 1) {
    (**(code **)(*param_2 + 0x10))(param_2,1,param_1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100850e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 8))(param_2);
      return;
    }
  }
  return;
}



/* Entry: 100850e7c; end: 100850e93; -[SCCameraViewControllerInternalState setIsResigningActive:] */

void FUN_100850e7c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 100850e94; end: 100850ed3; -[SCCameraSimpleUIFeatureGatingConfigurationImpl enableMetalLazyLoading] */

undefined8 FUN_100850e94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c431f0();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100850ed4; end: 100850ee7;  */

void FUN_100850ed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100850ee8; end: 100850f17;  */

undefined8 * FUN_100850ee8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd3e0;
  FUN_100601d1c(param_1 + 1);
  return param_1;
}



/* Entry: 100850f18; end: 100850f3b;  */

void FUN_100850f18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100850f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 100850f3c; end: 100850f6f;  */

undefined8 FUN_100850f3c(undefined8 param_1)

{
  func_0x000100850f2c(&PTR_DAT_110a7b8c8);
  FUN_100850f70();
  FUN_10061dd10();
  return param_1;
}



/* Entry: 100850f70; end: 100850f77;  */

void FUN_100850f70(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0x38) == '\x01') {
    FUN_100850f78();
  }
  return;
}



/* Entry: 100850f78; end: 100850f97;  */

void FUN_100850f78(void)

{
  func_0x000100561e7c();
  FUN_100850fb8();
  return;
}



/* Entry: 100850f98; end: 100850fb7;  */

void FUN_100850f98(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100850f78();
  }
  return;
}



/* Entry: 100850fb8; end: 100850fef;  */

void FUN_100850fb8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_100850fb8(*param_1);
    FUN_100850fb8(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 100850ff0; end: 10085101f; -[SCCameraCircumstanceEngineImpl fetchMetalLazyLoadingEnabled] */

void FUN_100850ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de4b98,0,0);
  return;
}



/* Entry: 100851020; end: 100851053;  */

undefined8 * FUN_100851020(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6c368;
  func_0x000100851018(param_1[0xe]);
  *param_1 = &PTR_DAT_110a6c3f0;
  func_0x000100851018(param_1[8]);
  func_0x000100851018(param_1[2]);
  return param_1;
}



/* Entry: 100851054; end: 10085105b;  */

void FUN_100851054(long param_1)

{
  param_1 = param_1 + 8;
  FUN_100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10085105c; end: 100851097;  */

undefined8 * FUN_10085105c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6c3f0;
  func_0x000100851018(param_1[8]);
  func_0x000100851018(param_1[2]);
  return param_1;
}



/* Entry: 100851098; end: 1008510b3;  */

void FUN_100851098(long param_1)

{
  param_1 = param_1 + 8;
  FUN_100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1008510b4; end: 100851133;  */

undefined8 * FUN_1008510b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6c288;
  func_0x00010054ec98(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  FUN_1005fe494(param_1 + 0xb);
  FUN_1005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 100851134; end: 10085114f;  */

void FUN_100851134(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1006a5ca8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100851150; end: 10085115f;  */

void FUN_100851150(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100851160; end: 1008511e7;  */

void FUN_100851160(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  puVar3 = param_1 + 1;
  uVar1 = *param_1;
  puVar2 = puVar3;
  if ((uVar1 & 1) != 0) {
    puVar2 = (ulong *)*puVar3;
  }
  if (1 < uVar1) {
    uVar1 = uVar1 >> 1;
    puVar2 = puVar2 + uVar1 * 5;
    do {
      puVar2 = puVar2 + -5;
      uVar1 = uVar1 - 1;
      func_0x00010084d4b4(puVar2);
    } while (uVar1 != 0);
    uVar1 = *param_1;
  }
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*puVar3);
    return;
  }
  return;
}



/* Entry: 1008511e8; end: 10085121b;  */

long * FUN_1008511e8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100851160(param_1);
  }
  return param_1;
}



/* Entry: 10085121c; end: 100851887;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000100851580 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10085121c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long **pplVar10;
  uint extraout_w8;
  uint extraout_w8_00;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  ulong uVar11;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x9;
  long extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar12;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 *unaff_x26;
  long unaff_x27;
  long *plVar20;
  undefined8 uStack_228;
  long lStack_218;
  undefined1 auStack_210 [48];
  byte bStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b0;
  undefined1 uStack_1ac;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4c;
  long lStack_38;
  ulong uStack_30;
  undefined1 uStack_18;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  func_0x0001005f9b88();
  plVar20 = (long *)(param_3 + 0x20);
  if ((*(byte *)(param_3 + 0x118) & 1) == 0) {
    plVar8 = plVar20;
    FUN_1005f9618();
    func_0x0001005fdc9c();
    func_0x0001005fdca4();
    func_0x0001005fdcac();
    (**(code **)(extraout_x8 + 0xa0))(param_3 + 0xe0);
    *(undefined8 *)(param_3 + 0x60) = *(undefined8 *)(param_3 + 0xe0);
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f9b68(*(undefined8 *)(param_3 + 0x60));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_3 + 0x118) = 1;
      func_0x00010061de64();
      if (*plVar8 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      plVar8 = extraout_x8_00;
      do {
        if (*plVar8 == 0) {
          func_0x00010061de14();
          plVar8 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar15 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar8 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar15 = extraout_w11;
        }
        if ((uVar15 & 1) != 0) {
          func_0x00010061de24();
          if ((bool)in_ZR) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x00010061de74();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001005f9b68(*(undefined8 *)(param_3 + 0x60));
  lVar13 = *(long *)(param_3 + 0x60);
  if ((extraout_w8_00 >> 5 & 1) == 0) {
    *(undefined1 *)(param_3 + 0x20) = 0;
    *(undefined4 *)(param_3 + 0x58) = 0xffffffff;
    FUN_100851888();
    uVar1 = *(uint *)(lVar13 + 0xd0);
    if (uVar1 != 0xffffffff) {
      plStack_1d8 = plVar20;
      (*(code *)(&PTR_DAT_110a698a8)[uVar1])(&plStack_1d8,lVar13 + 0x98);
      *(uint *)(param_3 + 0x58) = uVar1;
    }
    func_0x0001005fdca4();
    FUN_10054ebfc(param_3 + 0xe0);
    uVar5 = *(int *)(param_3 + 0x58) == 1;
    if ((bool)uVar5) {
      uVar19 = *(ulong *)(param_3 + 0x110);
      uVar16 = *(undefined8 *)(*(long *)(uVar19 + 0xb0) + 0x18);
      func_0x00010085197c();
      func_0x000100851990();
      FUN_100851eac();
      FUN_100851eb4(*(undefined8 *)(uVar19 + 0xb0));
      FUN_1008525a4();
      func_0x0001008525c4();
      for (; unaff_x27 != 0; unaff_x27 = unaff_x27 + -8) {
        func_0x0001087391e4();
        func_0x000108738bdc();
        func_0x000107c29f58(&plStack_1d8,*(undefined8 *)(uVar19 + 0xb0),param_3 + 0xe0);
        func_0x000108663a10(auStack_210,&plStack_1d8);
        bVar3 = bStack_1e0;
        func_0x0001086569a0(auStack_210);
        func_0x000108656820(&plStack_1d8);
        if ((bVar3 & 1) == 0) {
          uVar18 = *(undefined8 *)(uVar19 + 0xb0);
          func_0x000108738b34(&plStack_1d8);
          uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
          uStack_1b8 = uStack_1b8 & 0xffffff00;
          uVar6 = (undefined1)uVar16;
          uStack_1b0 = (int)lVar13;
          uStack_1ac = uVar6;
          func_0x000107c29f5c(uVar18,&plStack_1d8);
          func_0x000108738c7c();
          func_0x000108738b34(&plStack_1d8);
          func_0x0001006623a4(&uStack_1c0);
          func_0x000108738470(auStack_a8);
          uStack_90 = 0;
          uStack_68 = 0;
          uStack_60 = 0;
          uStack_58 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_4c = 2;
          uStack_18 = 0;
          unaff_x26[1] = 0;
          *unaff_x26 = 0;
          unaff_x26[3] = 0;
          unaff_x26[2] = 0;
          *(undefined8 *)((long)unaff_x26 + 0x21) = 0;
          *(undefined8 *)((long)unaff_x26 + 0x19) = 0;
          uStack_88 = uVar6;
          uStack_50 = uVar6;
          uStack_10 = (int)lVar13;
          uStack_c = uVar6;
          func_0x000107c29f70(*(undefined8 *)(uVar19 + 0xb0),&plStack_1d8);
          FUN_10066b5d4(&plStack_1d8);
        }
        func_0x000107c2a040(*(undefined8 *)(uVar19 + 0xb0),param_3 + 0xe0);
        func_0x0001087385d0();
      }
      FUN_1008525f4(*(undefined8 *)(uVar19 + 0xb0),*(undefined8 *)(param_3 + 0x50));
      FUN_10054cbac(param_3 + 0x60);
      uVar14 = *(ulong *)(param_3 + 0x110);
      func_0x0001008526e4();
      func_0x0001008526ec();
      if ((extraout_x10 & 1) != 0) {
        func_0x000100852700();
      }
      func_0x000100852714();
      (*extraout_x8_03)();
      FUN_100852798();
      func_0x0001008527a4(*(undefined8 *)(param_3 + 0x30));
      lVar13 = lStack_218;
      if (!(bool)uVar5) {
        lVar13 = extraout_x9;
      }
      func_0x0001008527b0();
      while( true ) {
        uVar5 = lVar13 - lStack_218 < 0;
        uVar6 = lVar13 == lStack_218;
        if ((bool)uVar6) break;
        func_0x000108738d84();
        func_0x000108738bdc();
        uVar12 = param_3 + 0xe0;
        func_0x000108848654();
        uVar17 = uStack_30;
        if (uStack_30 != 0) {
          uVar19 = uStack_30 - 1;
          uVar5 = (long)(uStack_30 & uVar19) < 0;
          uVar6 = (uStack_30 & uVar19) == 0;
          uVar9 = uVar12;
          if ((bool)uVar6) {
            func_0x000108738aa4();
          }
          else {
            uVar5 = (long)(uVar12 - uStack_30) < 0;
            uVar6 = uVar12 == uStack_30;
            uVar14 = uVar12;
            if (uStack_30 <= uVar12) {
              uVar1 = 0;
              uVar15 = (uint)uStack_30;
              if (uVar15 != 0) {
                uVar1 = (uint)uVar12 / uVar15;
              }
              uVar14 = (ulong)((uint)uVar12 - uVar1 * uVar15);
            }
          }
          plVar20 = *(long **)(lStack_38 + uVar14 * 8);
          if (plVar20 != (long *)0x0) {
            do {
              while( true ) {
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_100851570;
                uVar11 = plVar20[1];
                uVar5 = (long)(uVar11 - uVar12) < 0;
                uVar6 = uVar11 == uVar12;
                if (!(bool)uVar6) break;
                func_0x000108738f34();
                if ((uVar9 & 1) != 0) goto LAB_100851618;
              }
              if ((uVar17 & uVar19) == 0) {
                uVar11 = uVar11 & uVar19;
              }
              else if (uVar17 <= uVar11) {
                uVar2 = 0;
                if (uVar17 != 0) {
                  uVar2 = uVar11 / uVar17;
                }
                uVar11 = uVar11 - uVar2 * uVar17;
              }
              uVar5 = (long)(uVar11 - uVar14) < 0;
              uVar6 = uVar11 == uVar14;
            } while ((bool)uVar6);
          }
        }
LAB_100851570:
        func_0x000108738a94();
        func_0x0001087384ec();
        if ((uVar17 == 0) || (func_0x000108738930(param_1,param_2,(float)uVar17), (bool)uVar5)) {
          func_0x000108738700();
          func_0x000108738168();
          func_0x000108731e00(&lStack_38);
          uVar17 = uStack_30;
          uVar6 = (uStack_30 & uStack_30 - 1) == 0;
          if ((bool)uVar6) {
            func_0x000108738aa4();
          }
          else {
            uVar6 = uVar12 == uStack_30;
            uVar14 = uVar12;
            if (uStack_30 <= uVar12) {
              uVar14 = 0;
              if (uStack_30 != 0) {
                uVar14 = uVar12 / uStack_30;
              }
              uVar14 = uVar12 - uVar14 * uStack_30;
            }
          }
        }
        if (*(long *)(lStack_38 + uVar14 * 8) == 0) {
          func_0x000108738d60();
          if (extraout_x9_00 != 0) {
            func_0x000108738cb4();
            if ((bool)uVar6) {
              uVar12 = extraout_x9_01 & extraout_x10_00;
            }
            else {
              uVar12 = extraout_x9_01;
              if (uVar17 <= extraout_x9_01) {
                uVar12 = 0;
                if (uVar17 != 0) {
                  uVar12 = extraout_x9_01 / uVar17;
                }
                uVar12 = extraout_x9_01 - uVar12 * uVar17;
              }
            }
            *(ulong *)(extraout_x8_04 + uVar12 * 8) = uVar19;
          }
        }
        else {
          func_0x000108738cc4();
        }
        func_0x0001087386e8();
LAB_100851618:
        func_0x0001087385d0();
        lVar13 = lVar13 + 8;
      }
      plVar20 = *(long **)(*(long *)(param_3 + 0x110) + 0x100);
      uStack_1c8 = 0;
      uStack_1c0 = 0;
      func_0x0001008527c4();
      plStack_1d8 = (long *)(extraout_x8_05 + 0x10);
      uStack_1d0 = 0;
      uStack_1b8 = 499;
      FUN_10002b838(auStack_210,PTR_DAT_113268db8);
      func_0x0001008527d0(uStack_228);
      func_0x0001005fb8dc((uint)uStack_228 & 0x19f);
      pplVar10 = &plStack_1d8;
      FUN_1005504ac(pplVar10,auStack_210);
      func_0x0001008528cc();
      func_0x000107c60ca0();
      func_0x0001008528d8();
      func_0x0001008528e8();
      func_0x0001005505a0(param_3 + 0xa0,pplVar10);
      func_0x0001008528f4(*(undefined8 *)(*plVar20 + 0x50));
      func_0x000100852900();
      func_0x000107c60ca0(param_3 + 0xf8);
      FUN_1005505e4(&plStack_1d8);
      func_0x0001005fb930();
    }
    else {
      if (*(int *)(param_3 + 0x58) != 0) {
        func_0x00010563ab98();
        goto LAB_100851714;
      }
      uVar7 = *(undefined4 *)plVar20;
      func_0x000108770c94();
      plStack_1d8 = (long *)CONCAT44(plStack_1d8._4_4_,uVar7);
      func_0x000108738ff4();
    }
    FUN_100851888();
    func_0x0001005f96a0();
    func_0x0001005fbadc();
    return;
  }
  func_0x000107c60c14(&plStack_1d8,lVar13 + 0x18);
  func_0x000107c60e08(&plStack_1d8);
LAB_100851714:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100851718);
  (*pcVar4)();
}



/* Entry: 100851888; end: 10085188f;  */

void FUN_100851888(void)

{
  long unaff_x24;
  
  if (*(uint *)(unaff_x24 + 0x38) != 0xffffffff) {
    func_0x000100851910((&PTR_DAT_110a69898)[*(uint *)(unaff_x24 + 0x38)]);
  }
  *(undefined4 *)(unaff_x24 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 100851890; end: 1008518d3;  */

void FUN_100851890(long param_1)

{
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x000100851910((&PTR_DAT_110a69898)[*(uint *)(param_1 + 0x38)]);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 1008518d4; end: 1008518df;  */

void FUN_1008518d4(void)

{
  return;
}



/* Entry: 1008518e0; end: 100851907;  */

void FUN_1008518e0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010084fd84();
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 100851908; end: 10085191b;  */

void FUN_100851908(void)

{
  return;
}



/* Entry: 10085191c; end: 100851957;  */

undefined8 * FUN_10085191c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6e298;
  if (*(char *)(param_1 + 0x1b) == '\x01') {
    FUN_100851890(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 100851958; end: 10085196b;  */

void FUN_100851958(void)

{
  FUN_10085191c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10085196c; end: 10085199f;  */

long FUN_10085196c(undefined8 param_1,long param_2)

{
  FUN_10061dd38();
  FUN_10084feb8(param_2 + 0x10);
  return param_2;
}



/* Entry: 1008519a0; end: 100851a3b; -[SCMainCameraViewControllerStartupWorkflow setupCaptureVideoPreviewView:] */

void FUN_1008519a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setupCaptureVideoPreviewView__112667ba8;
  puStack_38 = PTR_PTR_1126f8340;
  uStack_40 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  uVar2 = param_3;
  func_0x000107c500f8(param_3);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c54058();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100851a3c; end: 100851eab; -[SCCameraViewControllerStartupWorkflow setupCaptureVideoPreviewView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100851a3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c5de64(param_3);
  func_0x000107c611b0();
  uVar2 = param_3;
  func_0x000107c500f8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5df60();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = uVar4;
  func_0x000107c49eac();
  if ((int)uVar2 != 0) {
    func_0x000107c550d8(uVar4,param_2,0);
  }
  uVar2 = uVar1;
  func_0x000107c3f2cc(uVar1);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(uVar2);
  uVar2 = param_3;
  func_0x000107c5abd4();
  if (((uVar2 & 1) == 0) && (*(char *)(param_1 + _DAT_1127626e0) != '\x01')) {
    func_0x000107c5a050(uVar4,param_2,1);
    uVar2 = uVar1;
    func_0x000107c3f2cc(uVar1);
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c54b80(uVar4);
  }
  else {
    func_0x000107c5a050(uVar4,param_2,0);
    puVar20 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar2 = uVar4;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar3 = uVar1;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x000107c40280(uVar2,param_2,uVar5);
    func_0x000107c61180();
    uVar7 = uVar4;
    uStack_88 = uVar6;
    func_0x000107c50890();
    func_0x000107c61180();
    uVar8 = uVar1;
    func_0x000107c3f2cc();
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c50890();
    func_0x000107c61180();
    uVar10 = uVar7;
    func_0x000107c40280(uVar7,param_2,uVar9);
    func_0x000107c61180();
    uVar11 = uVar4;
    uStack_80 = uVar10;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar12 = uVar1;
    func_0x000107c3f2cc(uVar1);
    func_0x000107c61180();
    uVar13 = uVar12;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar14 = uVar11;
    func_0x000107c40280(uVar11,param_2,uVar13);
    func_0x000107c61180();
    uVar15 = uVar4;
    uStack_78 = uVar14;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar16 = uVar1;
    func_0x000107c3f2cc(uVar1);
    func_0x000107c61180();
    uVar17 = uVar16;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar18 = uVar15;
    func_0x000107c40280(uVar15,param_2,uVar17);
    func_0x000107c61180();
    puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_70 = uVar18;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_88,4);
    func_0x000107c61180();
    func_0x000107c3d048(puVar20,param_2,puVar19);
    func_0x000107c61170(puVar19);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(uVar2);
  uVar2 = param_3;
  func_0x000107c500f8(param_3);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c5df60();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  puVar20 = PTR_PTR_1126aec70;
  func_0x000107c5a9f0();
  func_0x000107c61180();
  puVar19 = puVar20;
  func_0x000107c49a44();
  func_0x000107c61170(puVar20);
  if (((ulong)puVar19 & 1) == 0) {
    puVar20 = PTR_PTR_1126aec70;
    func_0x000107c5a9f0(PTR_PTR_1126aec70);
    func_0x000107c61180();
    func_0x000107c44644();
    func_0x000107c61170(puVar20);
  }
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_3 + 200);
  return;
}



/* Entry: 100851eac; end: 100851eb3;  */

void FUN_100851eac(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19 + 200);
  return;
}



/* Entry: 100851eb4; end: 100851f2b;  */

void FUN_100851eb4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x000100620450();
  if ((bool)in_ZR) {
    FUN_1005ef0c4();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c341a0();
      func_0x000107c3427c();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c34314();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1006204d8(*(undefined8 *)(unaff_x19 + 0x20));
  return;
}



/* Entry: 100851f2c; end: 100851f4b; -[SCCameraViewController renderTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100851f2c(long param_1)

{
  func_0x000107c61148(param_1 + _DAT_112762500);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100851f4c; end: 100851fcb; -[SCCameraViewfinderRenderTargetImpl didMoveToSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100851f4c(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e7420;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_didMoveToSuperview_1125bb968);
  lVar1 = param_1;
  func_0x000107c5c42c();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar1 == 0) {
    param_1 = param_1 + _DAT_112720b98;
    func_0x000107c61148(param_1);
    func_0x000107c5df6c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100851fcc; end: 100851fcf; -[SCAppSession isAppStartupCompleted] */

void FUN_100851fcc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf72430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didAppStartupComplete_1125ba2b0);
  return;
}



/* Entry: 100851fd0; end: 100852007; -[SCAppSession didAppStartupComplete] */

undefined1 FUN_100851fd0(long param_1)

{
  undefined1 uVar1;
  
  func_0x000107c60f74(*(undefined8 *)(param_1 + 0x10),0xffffffffffffffff);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  func_0x000107c60f70(*(undefined8 *)(param_1 + 0x10));
  return uVar1;
}



/* Entry: 100852008; end: 10085202f; -[SCAppSession handleSetCaptureVideoPreviewView] */

void FUN_100852008(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c540dc(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf6fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_determineIfAppStartupComplete_1125b98a8);
  return;
}



/* Entry: 100852030; end: 100852037; -[SCAppSession setDidSetCaptureVideoPreviewView:] */

void FUN_100852030(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x36) = param_3;
  return;
}



/* Entry: 100852038; end: 100852107; -[SCAppSession determineIfAppStartupComplete] */

void FUN_100852038(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_1;
  func_0x000107c3de74();
  if ((((uVar1 == 1) && (uVar1 = param_1, func_0x000107c419c8(), (uVar1 & 1) == 0)) &&
      (uVar1 = param_1, func_0x000107c3ddf8(), uVar1 != 1)) &&
     ((uVar1 = param_1, func_0x000107c5ab64(), (int)uVar1 == 0 ||
      (((uVar1 = param_1, func_0x000107c5ab64(), (int)uVar1 != 0 &&
        (uVar1 = param_1, func_0x000107c41a14(), (int)uVar1 != 0)) &&
       (uVar1 = param_1, func_0x000107c41d1c(), (int)uVar1 != 0)))))) {
    uVar1 = param_1;
    func_0x000107c4a008();
    if ((int)uVar1 != 0) {
      func_0x000107c5b00c(param_1);
      func_0x000107c5ab64(param_1);
      func_0x000107c4d664(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
    }
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
    func_0x000107c61180();
    func_0x000107c427f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 100852108; end: 10085210f; -[SCAppSession appStatus] */

undefined8 FUN_100852108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100852110; end: 100852123; -[SCCameraViewfinderRenderTargetImpl setDetachDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100852110(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112720b98,param_3);
  return;
}



/* Entry: 100852124; end: 100852277; -[SCCameraViewControllerStartupWorkflow createRoundedCornersIfNeededFromViewController:] */

/* WARNING: Possible PIC construction at 0x0001008521d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100852248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100852258: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010085224c) */
/* WARNING: Removing unreachable block (ram,0x0001008521d8) */
/* WARNING: Removing unreachable block (ram,0x00010085225c) */

void FUN_100852124(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_4);
  uVar2 = param_4;
  func_0x000107c5bcc0(param_4);
  func_0x000107c61180();
  func_0x000107c407dc(param_4);
  uVar3 = param_4;
  func_0x000107c5ab28();
  puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
  if ((int)uVar3 == 0) {
    func_0x000107c5ab2c();
    puVar1 = PTR__OBJC_CLASS___UIViewController_1126af898;
    if ((int)param_4 != 0) {
      uVar3 = uVar2;
      func_0x000107c3f2cc(uVar2);
      func_0x000107c61180();
      func_0x000107c3f2cc(uVar2);
      func_0x000107c61180();
      func_0x000107c3ec60();
      if (param_1 == -1.0) {
        func_0x000107c3d91c(puVar1,param_3,uVar3,0);
      }
      else {
        func_0x000107c3d918();
      }
    }
  }
  else {
    uVar3 = uVar2;
    func_0x000107c3f2cc(uVar2);
    func_0x000107c61180();
    func_0x000107c3f2cc(uVar2);
    func_0x000107c61180();
    func_0x000107c3ec60();
    if (param_1 == -1.0) {
      func_0x000107c3d5e8(puVar1,param_3,uVar3,0);
    }
    else {
      func_0x000107c3d5e4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100852278; end: 1008522a3; -[SCCameraViewController cornerRadius] */

undefined8 FUN_100852278(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9aa0;
  func_0x000107c5adf0();
  uVar2 = 0x4034000000000000;
  if ((int)puVar1 == 0) {
    uVar2 = 0xbff0000000000000;
  }
  return uVar2;
}



/* Entry: 1008522a4; end: 1008522a7; +[SCCameraCapriUtils shouldUseCapriViewFinderCornerRadius] */

undefined1 FUN_1008522a4(void)

{
  if (lRam00000001137fbc78 != -1) {
    FUN_10002a2fc(0x1137fbc78,&PTR___NSConcreteGlobalBlock_110d62dc0);
  }
  return uRam00000001137fbc53;
}



/* Entry: 1008522a8; end: 1008522e7;  */

undefined1 FUN_1008522a8(void)

{
  if (lRam00000001137fbc78 != -1) {
    FUN_10002a2fc(0x1137fbc78,&PTR___NSConcreteGlobalBlock_110d62dc0);
  }
  return uRam00000001137fbc53;
}



/* Entry: 1008522e8; end: 10085243f;  */

void FUN_1008522e8(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c4a02c();
  if ((((ulong)puVar1 & 1) != 0) || (cRam00000001137fbc51 == '\x01')) {
    if (lRam00000001137fbc70 != -1) {
      FUN_10002a2fc(0x1137fbc70,&PTR___NSConcreteGlobalBlock_110d62da0);
    }
    if ((bRam00000001137fbc52 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
      func_0x000107c61180();
      func_0x000107c4d488();
      if (2.0 <= param_1) {
        if (lRam00000001137fbca0 != -1) {
          FUN_10002a2fc(0x1137fbca0,&PTR___NSConcreteGlobalBlock_110d62e20);
        }
        uRam00000001137fbc53 = lRam00000001137fbc98 != -1;
      }
      else {
        uRam00000001137fbc53 = 0;
      }
      goto LAB_1008523e8;
    }
  }
  if (lRam00000001137fbc90 != -1) {
    FUN_10002a2fc(0x1137fbc90,&PTR___NSConcreteGlobalBlock_110d62e00);
  }
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if (uRam00000001137fbc88 != 0) {
    uRam00000001137fbc53 = 2 < uRam00000001137fbc88;
    return;
  }
  func_0x000107c61174(PTR____kCFBooleanTrue_11034ab68);
  puVar2 = puVar1;
  func_0x000107c3ebcc();
  uRam00000001137fbc53 = SUB81(puVar2,0);
LAB_1008523e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100852440; end: 100852513;  */

void FUN_100852440(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  if (lRam00000001137fbc90 != -1) {
    FUN_10002a2fc(0x1137fbc90,&PTR___NSConcreteGlobalBlock_110d62e00);
  }
  if (lRam00000001137fbc88 - 5U < 7) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51820();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar3 = param_1;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c4d488();
    uRam00000001137fbc52 = param_1 != dVar3;
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  else {
    uRam00000001137fbc52 = 1;
  }
  uRam00000001137fbc51 = 1;
  return;
}



/* Entry: 100852514; end: 1008525a3;  */

/* WARNING: Possible PIC construction at 0x000100852590: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100852594) */

void FUN_100852514(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  FUN_100478fc4();
  func_0x000107c61180();
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantDictionary_111175698;
  func_0x000107c4d9e8(&PTR__OBJC_CLASS___NSConstantDictionary_111175698,param_2,param_1);
  func_0x000107c61180();
  if (ppuVar1 == (undefined **)0x0) {
    lVar3 = param_1;
    func_0x000107c4040c(param_1,param_2,&PTR____CFConstantStringClassReference_110f5b438);
    if ((int)lVar3 == 0) {
      param_1 = 0;
    }
    else {
      FUN_1007f8b88();
    }
  }
  else {
    ppuVar2 = ppuVar1;
    func_0x000107c49804();
    param_1 = (long)(int)ppuVar2;
  }
  lRam00000001137fbc88 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1008525a4; end: 1008525f3;  */

void FUN_1008525a4(void)

{
  return;
}



/* Entry: 1008525f4; end: 10085266b;  */

void FUN_1008525f4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x0001008525e0();
  if ((bool)in_ZR) {
    FUN_1005ef0c4();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c341a0();
      func_0x000107c341fc();
      func_0x000107c34228();
      FUN_10054f908();
      func_0x000107c34160();
      func_0x000107c342a0();
      func_0x000107c34390();
      func_0x00010054f944();
      func_0x000107c34384();
    }
  }
  FUN_10085266c(*(undefined8 *)(unaff_x19 + 0x20));
  return;
}



/* Entry: 10085266c; end: 100852677;  */

void FUN_10085266c(long param_1)

{
  long in_x9;
  long unaff_x29;
  
  param_1 = param_1 + in_x9;
  func_0x000107c60d88(param_1 + 0x18);
  FUN_1005edcc0(param_1,unaff_x29 + -0x28);
  FUN_10054c3a4(param_1);
  FUN_10062154c();
  func_0x000100621554();
  return;
}



/* Entry: 100852678; end: 1008526d7;  */

void FUN_100852678(long param_1,undefined8 param_2)

{
  func_0x000107c60d88(param_1 + 0x18);
  FUN_1005edcc0(param_1,param_2);
  FUN_10054c3a4(param_1);
  FUN_10062154c();
  func_0x000100621554();
  return;
}



/* Entry: 1008526d8; end: 100852733;  */

void FUN_1008526d8(void)

{
  return;
}



/* Entry: 100852734; end: 100852797;  */

void FUN_100852734(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  if (*(char *)(param_1 + 0x2d) == '\x01') {
    plVar1 = *(long **)(param_1 + 8);
    FUN_1008ca15c(auStack_38,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,auStack_38);
    func_0x0001005fb56c(auStack_38);
  }
  return;
}



/* Entry: 100852798; end: 100852907;  */

void FUN_100852798(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(unaff_x19[0x22] + 0x1b8) != 0) {
    func_0x000107c33264();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 100852908; end: 100852d53;  */

void FUN_100852908(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint extraout_w8;
  long *plVar10;
  long lVar11;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *plVar12;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  uint uVar19;
  long *plVar20;
  long *unaff_x28;
  undefined **in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  FUN_1005fbf48();
  if ((*(byte *)(param_2 + 0xc0) & 1) == 0) {
    func_0x0001005f9610();
    lVar14 = *(long *)(param_2 + 0xb8);
    FUN_1005f9654();
    uVar4 = *(char *)(lVar14 + 0x30) == '\x01';
    if ((bool)uVar4) {
      lVar14 = *(long *)(param_2 + 0xb8);
      FUN_1005fc43c(lVar14 + 0x1a0);
      FUN_1005fc488(param_2 + 0x20,*(undefined8 *)(lVar14 + 0xb0));
      FUN_1005fcdc8(param_2 + 0x50,param_2 + 0x20);
      lVar16 = *(long *)(param_2 + 0xb8);
      FUN_1005fce6c();
      plVar7 = (long *)(lVar16 + 0x1b0);
      while (((*(byte *)(param_2 + 0x70) & 1) != 0 || ((*(byte *)(param_2 + 0x98) & 1) != 0))) {
        uVar3 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x78) < 0;
        uVar4 = *(long *)(param_2 + 0x50) == *(long *)(param_2 + 0x78);
        if ((bool)uVar4) break;
        plVar12 = (long *)(param_2 + 0x50);
        func_0x0001086afc30();
        uVar18 = *(undefined8 *)(lVar16 + 0x1b8);
        plVar5 = plVar12;
        func_0x000108848654();
        plVar20 = *(long **)(lVar16 + 0x1a8);
        plVar6 = plVar5;
        if (plVar20 != (long *)0x0) {
          uVar15 = (long)plVar20 - 1;
          uVar19 = (uint)plVar20;
          if (((ulong)plVar20 & uVar15) == 0) {
            unaff_x28 = (long *)((ulong)(uVar19 - 1) & (ulong)plVar5);
            uVar4 = true;
            uVar3 = false;
          }
          else {
            uVar3 = (long)plVar5 - (long)plVar20 < 0;
            uVar4 = plVar5 == plVar20;
            unaff_x28 = plVar5;
            if (plVar20 <= plVar5) {
              uVar13 = 0;
              if (uVar19 != 0) {
                uVar13 = (uint)plVar5 / uVar19;
              }
              unaff_x28 = (long *)(ulong)((uint)plVar5 - uVar13 * uVar19);
            }
          }
          plVar17 = *(long **)(*(long *)(lVar14 + 0x1a0) + (long)unaff_x28 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_100852a3c;
                plVar10 = (long *)plVar17[1];
                uVar3 = (long)plVar10 - (long)plVar5 < 0;
                uVar4 = plVar10 == plVar5;
                if (!(bool)uVar4) break;
                plVar6 = plVar17 + 2;
                FUN_1006760a8(plVar6,plVar12);
                if (((ulong)plVar6 & 1) != 0) goto LAB_100852b4c;
              }
              if (((ulong)plVar20 & uVar15) == 0) {
                plVar10 = (long *)((ulong)plVar10 & uVar15);
              }
              else if (plVar20 <= plVar10) {
                uVar2 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar2 = (ulong)plVar10 / (ulong)plVar20;
                }
                plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar20);
              }
              uVar3 = (long)plVar10 - (long)unaff_x28 < 0;
              uVar4 = plVar10 == unaff_x28;
            } while ((bool)uVar4);
          }
        }
LAB_100852a3c:
        func_0x000108738a94();
        *(long **)(param_2 + 0xa0) = plVar6;
        *(long **)(param_2 + 0xa8) = plVar7;
        *(undefined8 *)(param_2 + 0xb0) = 0;
        *plVar6 = 0;
        plVar6[1] = (long)plVar5;
        FUN_10054f8dc(plVar6 + 2,plVar12);
        *(int *)(plVar6 + 5) = (int)uVar18;
        *(undefined1 *)(param_2 + 0xb0) = 1;
        func_0x00010873893c(*(undefined8 *)(lVar16 + 0x1b8));
        if ((plVar20 == (long *)0x0) ||
           (func_0x000108738930(param_1,*(undefined4 *)(lVar16 + 0x1c0),(float)plVar20), (bool)uVar3
           )) {
          func_0x000108739158();
          func_0x000108738168();
          func_0x000108731e00(lVar14 + 0x1a0);
          plVar20 = *(long **)(lVar16 + 0x1a8);
          if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
            uVar4 = 1;
            unaff_x28 = (long *)((ulong)((int)plVar20 - 1) & (ulong)plVar5);
          }
          else {
            uVar4 = plVar5 == plVar20;
            unaff_x28 = plVar5;
            if (plVar20 <= plVar5) {
              uVar15 = 0;
              if (plVar20 != (long *)0x0) {
                uVar15 = (ulong)plVar5 / (ulong)plVar20;
              }
              unaff_x28 = (long *)((long)plVar5 - uVar15 * (long)plVar20);
            }
          }
        }
        lVar11 = *(long *)(lVar14 + 0x1a0);
        plVar12 = *(long **)(lVar11 + (long)unaff_x28 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar6 = *plVar7;
          *plVar7 = (long)plVar6;
          *(long **)(lVar11 + (long)unaff_x28 * 8) = plVar7;
          if (*plVar6 != 0) {
            plVar12 = *(long **)(*plVar6 + 8);
            if (((ulong)plVar20 & (long)plVar20 - 1U) == 0) {
              plVar12 = (long *)((ulong)plVar12 & (long)plVar20 - 1U);
              uVar4 = true;
            }
            else {
              uVar4 = plVar12 == plVar20;
              if (plVar20 <= plVar12) {
                uVar15 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar15 = (ulong)plVar12 / (ulong)plVar20;
                }
                plVar12 = (long *)((long)plVar12 - uVar15 * (long)plVar20);
              }
            }
            *(long **)(lVar11 + (long)plVar12 * 8) = plVar6;
          }
        }
        else {
          *plVar6 = *plVar12;
          *plVar12 = (long)plVar6;
        }
        *(undefined8 *)(param_2 + 0xa0) = 0;
        *(long *)(lVar16 + 0x1b8) = *(long *)(lVar16 + 0x1b8) + 1;
        func_0x000108738a60();
LAB_100852b4c:
        FUN_1005fc848(param_2 + 0x50);
      }
      func_0x0001005fce80();
      FUN_1005fcea8();
      FUN_1005fced4(param_2 + 0x20);
    }
    uVar3 = (undefined1)*(undefined8 *)(param_2 + 0xb8);
    FUN_1005fcfb8();
    *(undefined1 *)(param_2 + 0xc1) = uVar3;
    plVar7 = *(long **)(param_2 + 0xb8);
    FUN_1005fd01c(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_2 + 0x78);
    do {
      func_0x0001005f0280();
    } while (extraout_w10 != 0);
    func_0x0001005f9b68(*(undefined8 *)(param_2 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_2 + 0xc0) = 1;
      func_0x00010061de64();
      if (*plVar7 == 0) {
        FUN_10054ef74();
      }
      func_0x00010061de08();
      plVar7 = extraout_x8;
      do {
        if (*plVar7 == 0) {
          func_0x00010061de14();
          plVar7 = extraout_x8_01;
          uVar19 = extraout_w10_01;
          uVar13 = extraout_w11_00;
        }
        else {
          func_0x000108738318();
          plVar7 = extraout_x8_00;
          uVar19 = extraout_w10_00;
          uVar13 = extraout_w11;
        }
        if ((uVar13 & 1) != 0) {
          func_0x00010061de24();
          if ((bool)uVar4) {
            func_0x000108738134();
            func_0x0001087380a0();
            func_0x000108738020();
          }
          func_0x00010061de74();
          return;
        }
      } while ((uVar19 >> 1 & 1) == 0);
    }
  }
  puVar8 = (undefined8 *)(param_2 + 0x50);
  FUN_1005fbafc();
  lVar14 = *(long *)(param_2 + 0xb8);
  *(undefined8 *)(param_2 + 0x20) = *puVar8;
  FUN_100852d54();
  FUN_10054ebfc(param_2 + 0x78);
  (**(code **)(**(long **)(lVar14 + 0xe0) + 0x28))();
  plVar7 = *(long **)(*(long *)(param_2 + 0xb8) + 0x100);
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = &PTR_DAT_110a609a8;
  in_stack_00000018 = 0;
  in_stack_00000030 = 0x1ec;
  uVar1 = 0x3f0190;
  if (*(char *)(param_2 + 0xc1) != '\0') {
    uVar1 = 0x3f0191;
  }
  puVar8 = &stack0x00000010;
  FUN_1005fb84c(puVar8,uVar1);
  puVar9 = puVar8;
  func_0x0001008532f8(*(undefined8 *)(param_2 + 0xb8));
  in_stack_00000038 = puVar9;
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar8,&stack0x00000038);
  FUN_1005505e4(&stack0x00000010);
  FUN_1005fbcb4(param_2 + 0x10,param_2 + 0x20);
  func_0x0001005f96a0();
  func_0x0001005fbadc();
  return;
}


