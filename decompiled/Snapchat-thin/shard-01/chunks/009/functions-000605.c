/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101631a90; end: 101631acf;  */

void FUN_101631a90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb220;
  func_0x0001000285a8(0x112dbb220,&UNK_10d970208);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101631ad0; end: 101631af3;  */

void FUN_101631ad0(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101633bc0)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631af4; end: 101631b33;  */

void FUN_101631af4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb280;
  func_0x0001000285a8(0x112dbb280,&UNK_10d970210);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101631b34; end: 101631b5b;  */

void FUN_101631b34(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101631b5c; end: 101631b9b;  */

void FUN_101631b5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb310;
  func_0x0001000285a8(0x112dbb310,&UNK_10d970218);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101631b9c; end: 101631bb3;  */

void FUN_101631b9c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101632a1c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631bb4; end: 101631bf3;  */

void FUN_101631bb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb380;
  func_0x0001000285a8(0x112dbb380,&UNK_10d970220);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101631bf4; end: 101631c33;  */

void FUN_101631bf4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101633bc4)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631c34; end: 101631c73;  */

void FUN_101631c34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb790;
  func_0x0001000285a8(0x112dbb790,&UNK_10d970228);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101631c74; end: 101631c7f;  */

void FUN_101631c74(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101632a28)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631c80; end: 101631d77;  */

void FUN_101631c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000101631c00(uVar1,*(undefined1 *)(unaff_x20 + 1));
  *param_1 = uVar1;
  return;
}



/* Entry: 101631d78; end: 101631dcb;  */

bool FUN_101631d78(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  func_0x000101631c00(lVar2,(char)param_1[1]);
  func_0x000101631c00(lVar3,(char)lVar1);
  return lVar2 == lVar3;
}



/* Entry: 101631dcc; end: 101631dd7;  */

void FUN_101631dcc(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x101633bc8)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631dd8; end: 101631e47;  */

void FUN_101631dd8(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631e48; end: 101631e53;  */

void FUN_101631e48(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101633bc8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631e54; end: 101631f0b;  */

void FUN_101631e54(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631f0c; end: 101631f53;  */

void FUN_101631f0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971b40,0x39,2);
  uRam0000000113801ce0 = uStack_38;
  uRam0000000113801cd8 = uStack_40;
  uRam0000000113801cf0 = uStack_28;
  uRam0000000113801ce8 = uStack_30;
  uRam0000000113801d00 = uStack_18;
  uRam0000000113801cf8 = uStack_20;
  return;
}



/* Entry: 101631f54; end: 101631ff3;  */

/* WARNING: Possible PIC construction at 0x000101631fa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101631fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101631fa4) */
/* WARNING: Removing unreachable block (ram,0x000101631fb4) */

void FUN_101631f54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb808 != -1) {
    func_0x000107c61568(0x112dbb808,FUN_101631f0c);
  }
  uVar5 = uRam0000000113801d00;
  uVar4 = uRam0000000113801cf8;
  uVar3 = uRam0000000113801cf0;
  uVar2 = uRam0000000113801ce8;
  uVar1 = uRam0000000113801ce0;
  *param_1 = uRam0000000113801cd8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101631ff4; end: 10163203b;  */

void FUN_101631ff4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971b20,0x1c,2);
  uRam0000000113801d10 = uStack_38;
  uRam0000000113801d08 = uStack_40;
  uRam0000000113801d20 = uStack_28;
  uRam0000000113801d18 = uStack_30;
  uRam0000000113801d30 = uStack_18;
  uRam0000000113801d28 = uStack_20;
  return;
}



/* Entry: 10163203c; end: 1016320db;  */

/* WARNING: Possible PIC construction at 0x000101632088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101632098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163208c) */
/* WARNING: Removing unreachable block (ram,0x00010163209c) */

void FUN_10163203c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb810 != -1) {
    func_0x000107c61568(0x112dbb810,FUN_101631ff4);
  }
  uVar5 = uRam0000000113801d30;
  uVar4 = uRam0000000113801d28;
  uVar3 = uRam0000000113801d20;
  uVar2 = uRam0000000113801d18;
  uVar1 = uRam0000000113801d10;
  *param_1 = uRam0000000113801d08;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1016320dc; end: 101632123;  */

void FUN_1016320dc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971e70,0xf,2);
  uRam0000000113801d40 = uStack_38;
  uRam0000000113801d38 = uStack_40;
  uRam0000000113801d50 = uStack_28;
  uRam0000000113801d48 = uStack_30;
  uRam0000000113801d60 = uStack_18;
  uRam0000000113801d58 = uStack_20;
  return;
}



/* Entry: 101632124; end: 1016321c3;  */

/* WARNING: Possible PIC construction at 0x000101632170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101632180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101632174) */
/* WARNING: Removing unreachable block (ram,0x000101632184) */

void FUN_101632124(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb818 != -1) {
    func_0x000107c61568(0x112dbb818,FUN_1016320dc);
  }
  uVar5 = uRam0000000113801d60;
  uVar4 = uRam0000000113801d58;
  uVar3 = uRam0000000113801d50;
  uVar2 = uRam0000000113801d48;
  uVar1 = uRam0000000113801d40;
  *param_1 = uRam0000000113801d38;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1016321c4; end: 10163220b;  */

void FUN_1016321c4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971a20,0xfb,2);
  uRam0000000113801d70 = uStack_38;
  uRam0000000113801d68 = uStack_40;
  uRam0000000113801d80 = uStack_28;
  uRam0000000113801d78 = uStack_30;
  uRam0000000113801d90 = uStack_18;
  uRam0000000113801d88 = uStack_20;
  return;
}



/* Entry: 10163220c; end: 1016322ab;  */

/* WARNING: Possible PIC construction at 0x000101632258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101632268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163225c) */
/* WARNING: Removing unreachable block (ram,0x00010163226c) */

void FUN_10163220c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb820 != -1) {
    func_0x000107c61568(0x112dbb820,FUN_1016321c4);
  }
  uVar5 = uRam0000000113801d90;
  uVar4 = uRam0000000113801d88;
  uVar3 = uRam0000000113801d80;
  uVar2 = uRam0000000113801d78;
  uVar1 = uRam0000000113801d70;
  *param_1 = uRam0000000113801d68;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1016322ac; end: 1016322f3;  */

void FUN_1016322ac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971a00,0x1a,2);
  uRam0000000113801da0 = uStack_38;
  uRam0000000113801d98 = uStack_40;
  uRam0000000113801db0 = uStack_28;
  uRam0000000113801da8 = uStack_30;
  uRam0000000113801dc0 = uStack_18;
  uRam0000000113801db8 = uStack_20;
  return;
}



/* Entry: 1016322f4; end: 101632393;  */

/* WARNING: Possible PIC construction at 0x000101632340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101632350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101632344) */
/* WARNING: Removing unreachable block (ram,0x000101632354) */

void FUN_1016322f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb828 != -1) {
    func_0x000107c61568(0x112dbb828,FUN_1016322ac);
  }
  uVar5 = uRam0000000113801dc0;
  uVar4 = uRam0000000113801db8;
  uVar3 = uRam0000000113801db0;
  uVar2 = uRam0000000113801da8;
  uVar1 = uRam0000000113801da0;
  *param_1 = uRam0000000113801d98;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101632394; end: 1016323db;  */

void FUN_101632394(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9719b0,0x42,2);
  uRam0000000113801dd0 = uStack_38;
  uRam0000000113801dc8 = uStack_40;
  uRam0000000113801de0 = uStack_28;
  uRam0000000113801dd8 = uStack_30;
  uRam0000000113801df0 = uStack_18;
  uRam0000000113801de8 = uStack_20;
  return;
}



/* Entry: 1016323dc; end: 10163247b;  */

/* WARNING: Possible PIC construction at 0x000101632428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101632438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163242c) */
/* WARNING: Removing unreachable block (ram,0x00010163243c) */

void FUN_1016323dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb830 != -1) {
    func_0x000107c61568(0x112dbb830,FUN_101632394);
  }
  uVar5 = uRam0000000113801df0;
  uVar4 = uRam0000000113801de8;
  uVar3 = uRam0000000113801de0;
  uVar2 = uRam0000000113801dd8;
  uVar1 = uRam0000000113801dd0;
  *param_1 = uRam0000000113801dc8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10163247c; end: 1016324c3;  */

void FUN_10163247c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971960,0x4c,2);
  uRam0000000113801e00 = uStack_38;
  uRam0000000113801df8 = uStack_40;
  uRam0000000113801e10 = uStack_28;
  uRam0000000113801e08 = uStack_30;
  uRam0000000113801e20 = uStack_18;
  uRam0000000113801e18 = uStack_20;
  return;
}



/* Entry: 1016324c4; end: 101632563;  */

/* WARNING: Possible PIC construction at 0x000101632510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101632520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101632514) */
/* WARNING: Removing unreachable block (ram,0x000101632524) */

void FUN_1016324c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb838 != -1) {
    func_0x000107c61568(0x112dbb838,FUN_10163247c);
  }
  uVar5 = uRam0000000113801e20;
  uVar4 = uRam0000000113801e18;
  uVar3 = uRam0000000113801e10;
  uVar2 = uRam0000000113801e08;
  uVar1 = uRam0000000113801e00;
  *param_1 = uRam0000000113801df8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101632564; end: 1016325ab;  */

void FUN_101632564(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971910,0x4c,2);
  uRam0000000113801e30 = uStack_38;
  uRam0000000113801e28 = uStack_40;
  uRam0000000113801e40 = uStack_28;
  uRam0000000113801e38 = uStack_30;
  uRam0000000113801e50 = uStack_18;
  uRam0000000113801e48 = uStack_20;
  return;
}



/* Entry: 1016325ac; end: 10163264b;  */

/* WARNING: Possible PIC construction at 0x0001016325f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101632608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016325fc) */
/* WARNING: Removing unreachable block (ram,0x00010163260c) */

void FUN_1016325ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb840 != -1) {
    func_0x000107c61568(0x112dbb840,FUN_101632564);
  }
  uVar5 = uRam0000000113801e50;
  uVar4 = uRam0000000113801e48;
  uVar3 = uRam0000000113801e40;
  uVar2 = uRam0000000113801e38;
  uVar1 = uRam0000000113801e30;
  *param_1 = uRam0000000113801e28;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10163264c; end: 101632693;  */

void FUN_10163264c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9718a0,0x65,2);
  uRam0000000113801e60 = uStack_38;
  uRam0000000113801e58 = uStack_40;
  uRam0000000113801e70 = uStack_28;
  uRam0000000113801e68 = uStack_30;
  uRam0000000113801e80 = uStack_18;
  uRam0000000113801e78 = uStack_20;
  return;
}



/* Entry: 101632694; end: 101632733;  */

/* WARNING: Possible PIC construction at 0x0001016326e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016326f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016326e4) */
/* WARNING: Removing unreachable block (ram,0x0001016326f4) */

void FUN_101632694(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb848 != -1) {
    func_0x000107c61568(0x112dbb848,FUN_10163264c);
  }
  uVar5 = uRam0000000113801e80;
  uVar4 = uRam0000000113801e78;
  uVar3 = uRam0000000113801e70;
  uVar2 = uRam0000000113801e68;
  uVar1 = uRam0000000113801e60;
  *param_1 = uRam0000000113801e58;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101632734; end: 10163277b;  */

void FUN_101632734(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971830,0x62,2);
  uRam0000000113801e90 = uStack_38;
  uRam0000000113801e88 = uStack_40;
  uRam0000000113801ea0 = uStack_28;
  uRam0000000113801e98 = uStack_30;
  uRam0000000113801eb0 = uStack_18;
  uRam0000000113801ea8 = uStack_20;
  return;
}



/* Entry: 10163277c; end: 10163281b;  */

/* WARNING: Possible PIC construction at 0x0001016327c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016327d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016327cc) */
/* WARNING: Removing unreachable block (ram,0x0001016327dc) */

void FUN_10163277c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb850 != -1) {
    func_0x000107c61568(0x112dbb850,FUN_101632734);
  }
  uVar5 = uRam0000000113801eb0;
  uVar4 = uRam0000000113801ea8;
  uVar3 = uRam0000000113801ea0;
  uVar2 = uRam0000000113801e98;
  uVar1 = uRam0000000113801e90;
  *param_1 = uRam0000000113801e88;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10163281c; end: 101632863;  */

void FUN_10163281c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d971120,0x701,2);
  uRam0000000113801ec0 = uStack_38;
  uRam0000000113801eb8 = uStack_40;
  uRam0000000113801ed0 = uStack_28;
  uRam0000000113801ec8 = uStack_30;
  uRam0000000113801ee0 = uStack_18;
  uRam0000000113801ed8 = uStack_20;
  return;
}



/* Entry: 101632864; end: 101632903;  */

/* WARNING: Possible PIC construction at 0x0001016328b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016328c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016328b4) */
/* WARNING: Removing unreachable block (ram,0x0001016328c4) */

void FUN_101632864(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb858 != -1) {
    func_0x000107c61568(0x112dbb858,FUN_10163281c);
  }
  uVar5 = uRam0000000113801ee0;
  uVar4 = uRam0000000113801ed8;
  uVar3 = uRam0000000113801ed0;
  uVar2 = uRam0000000113801ec8;
  uVar1 = uRam0000000113801ec0;
  *param_1 = uRam0000000113801eb8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101632904; end: 10163294b;  */

void FUN_101632904(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9710e0,0x3a,2);
  uRam0000000113801ef0 = uStack_38;
  uRam0000000113801ee8 = uStack_40;
  uRam0000000113801f00 = uStack_28;
  uRam0000000113801ef8 = uStack_30;
  uRam0000000113801f10 = uStack_18;
  uRam0000000113801f08 = uStack_20;
  return;
}



/* Entry: 10163294c; end: 1016329eb;  */

/* WARNING: Possible PIC construction at 0x000101632998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016329a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010163299c) */
/* WARNING: Removing unreachable block (ram,0x0001016329ac) */

void FUN_10163294c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbb860 != -1) {
    func_0x000107c61568(0x112dbb860,FUN_101632904);
  }
  uVar5 = uRam0000000113801f10;
  uVar4 = uRam0000000113801f08;
  uVar3 = uRam0000000113801f00;
  uVar2 = uRam0000000113801ef8;
  uVar1 = uRam0000000113801ef0;
  *param_1 = uRam0000000113801ee8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1016329ec; end: 101632c4f;  */

void FUN_1016329ec(void)

{
  return;
}



/* Entry: 101632c50; end: 101632cfb;  */

void FUN_101632c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9702d0;
  func_0x000107c61520(&UNK_10d9702d0,&UNK_1103eba58);
  puRam0000000112dbb868 = puVar1;
  return;
}



/* Entry: 101632cfc; end: 101632cff;  */

void FUN_101632cfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970310;
  func_0x000107c61520(&UNK_10d970310,&UNK_1103eba58);
  puRam0000000112dbb888 = puVar1;
  return;
}



/* Entry: 101632d00; end: 101632d3f;  */

void FUN_101632d00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970310;
  func_0x000107c61520(&UNK_10d970310,&UNK_1103eba58);
  puRam0000000112dbb888 = puVar1;
  return;
}



/* Entry: 101632d40; end: 101632d53;  */

void FUN_101632d40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101632d54();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101632d94)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101632d54; end: 101632dff;  */

void FUN_101632d54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9703d0;
  func_0x000107c61520(&UNK_10d9703d0,&UNK_1103ebae8);
  puRam0000000112dbb890 = puVar1;
  return;
}



/* Entry: 101632e00; end: 101632e03;  */

void FUN_101632e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970410;
  func_0x000107c61520(&UNK_10d970410,&UNK_1103ebae8);
  puRam0000000112dbb8b0 = puVar1;
  return;
}



/* Entry: 101632e04; end: 101632e43;  */

void FUN_101632e04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb8b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970410;
  func_0x000107c61520(&UNK_10d970410,&UNK_1103ebae8);
  puRam0000000112dbb8b0 = puVar1;
  return;
}



/* Entry: 101632e44; end: 101632e57;  */

void FUN_101632e44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101632e58();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101632e98)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101632e58; end: 101632f03;  */

void FUN_101632e58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb8b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9704d0;
  func_0x000107c61520(&UNK_10d9704d0,&UNK_1103ebb78);
  puRam0000000112dbb8b8 = puVar1;
  return;
}



/* Entry: 101632f04; end: 101632f07;  */

void FUN_101632f04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970510;
  func_0x000107c61520(&UNK_10d970510,&UNK_1103ebb78);
  puRam0000000112dbb8d8 = puVar1;
  return;
}



/* Entry: 101632f08; end: 101632f47;  */

void FUN_101632f08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb8d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970510;
  func_0x000107c61520(&UNK_10d970510,&UNK_1103ebb78);
  puRam0000000112dbb8d8 = puVar1;
  return;
}



/* Entry: 101632f48; end: 101632f5b;  */

void FUN_101632f48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101632f5c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101632f9c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101632f5c; end: 101633007;  */

void FUN_101632f5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9705d0;
  func_0x000107c61520(&UNK_10d9705d0,&UNK_1103ebc08);
  puRam0000000112dbb8e0 = puVar1;
  return;
}



/* Entry: 101633008; end: 10163300b;  */

void FUN_101633008(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970610;
  func_0x000107c61520(&UNK_10d970610,&UNK_1103ebc08);
  puRam0000000112dbb900 = puVar1;
  return;
}



/* Entry: 10163300c; end: 10163304b;  */

void FUN_10163300c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970610;
  func_0x000107c61520(&UNK_10d970610,&UNK_1103ebc08);
  puRam0000000112dbb900 = puVar1;
  return;
}



/* Entry: 10163304c; end: 10163305f;  */

void FUN_10163304c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101633060();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016330a0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101633060; end: 10163310b;  */

void FUN_101633060(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9706d0;
  func_0x000107c61520(&UNK_10d9706d0,&UNK_1103ebc98);
  puRam0000000112dbb908 = puVar1;
  return;
}



/* Entry: 10163310c; end: 10163310f;  */

void FUN_10163310c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970710;
  func_0x000107c61520(&UNK_10d970710,&UNK_1103ebc98);
  puRam0000000112dbb928 = puVar1;
  return;
}



/* Entry: 101633110; end: 10163314f;  */

void FUN_101633110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970710;
  func_0x000107c61520(&UNK_10d970710,&UNK_1103ebc98);
  puRam0000000112dbb928 = puVar1;
  return;
}



/* Entry: 101633150; end: 101633163;  */

void FUN_101633150(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101633164();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016331a4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101633164; end: 10163320f;  */

void FUN_101633164(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9707d0;
  func_0x000107c61520(&UNK_10d9707d0,&UNK_1103ebd28);
  puRam0000000112dbb930 = puVar1;
  return;
}



/* Entry: 101633210; end: 101633213;  */

void FUN_101633210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970810;
  func_0x000107c61520(&UNK_10d970810,&UNK_1103ebd28);
  puRam0000000112dbb950 = puVar1;
  return;
}



/* Entry: 101633214; end: 101633253;  */

void FUN_101633214(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970810;
  func_0x000107c61520(&UNK_10d970810,&UNK_1103ebd28);
  puRam0000000112dbb950 = puVar1;
  return;
}



/* Entry: 101633254; end: 101633267;  */

void FUN_101633254(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101633268();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016332a8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101633268; end: 101633313;  */

void FUN_101633268(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9708d0;
  func_0x000107c61520(&UNK_10d9708d0,&UNK_1103ebdb8);
  puRam0000000112dbb958 = puVar1;
  return;
}



/* Entry: 101633314; end: 101633317;  */

void FUN_101633314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970910;
  func_0x000107c61520(&UNK_10d970910,&UNK_1103ebdb8);
  puRam0000000112dbb978 = puVar1;
  return;
}



/* Entry: 101633318; end: 101633357;  */

void FUN_101633318(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970910;
  func_0x000107c61520(&UNK_10d970910,&UNK_1103ebdb8);
  puRam0000000112dbb978 = puVar1;
  return;
}



/* Entry: 101633358; end: 10163336b;  */

void FUN_101633358(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10163336c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016333ac)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10163336c; end: 101633417;  */

void FUN_10163336c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9709d0;
  func_0x000107c61520(&UNK_10d9709d0,&UNK_1103ebe48);
  puRam0000000112dbb980 = puVar1;
  return;
}



/* Entry: 101633418; end: 10163341b;  */

void FUN_101633418(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970a10;
  func_0x000107c61520(&UNK_10d970a10,&UNK_1103ebe48);
  puRam0000000112dbb9a0 = puVar1;
  return;
}



/* Entry: 10163341c; end: 10163345b;  */

void FUN_10163341c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970a10;
  func_0x000107c61520(&UNK_10d970a10,&UNK_1103ebe48);
  puRam0000000112dbb9a0 = puVar1;
  return;
}



/* Entry: 10163345c; end: 10163346f;  */

void FUN_10163345c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101633470();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016334b0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101633470; end: 10163351b;  */

void FUN_101633470(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970ad0;
  func_0x000107c61520(&UNK_10d970ad0,&UNK_1103ebed8);
  puRam0000000112dbb9a8 = puVar1;
  return;
}



/* Entry: 10163351c; end: 10163351f;  */

void FUN_10163351c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970b10;
  func_0x000107c61520(&UNK_10d970b10,&UNK_1103ebed8);
  puRam0000000112dbb9c8 = puVar1;
  return;
}



/* Entry: 101633520; end: 10163355f;  */

void FUN_101633520(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970b10;
  func_0x000107c61520(&UNK_10d970b10,&UNK_1103ebed8);
  puRam0000000112dbb9c8 = puVar1;
  return;
}



/* Entry: 101633560; end: 101633573;  */

void FUN_101633560(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101633574();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016335b4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101633574; end: 10163361f;  */

void FUN_101633574(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970bd0;
  func_0x000107c61520(&UNK_10d970bd0,&UNK_1103ebf68);
  puRam0000000112dbb9d0 = puVar1;
  return;
}



/* Entry: 101633620; end: 101633623;  */

void FUN_101633620(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970c10;
  func_0x000107c61520(&UNK_10d970c10,&UNK_1103ebf68);
  puRam0000000112dbb9f0 = puVar1;
  return;
}



/* Entry: 101633624; end: 101633663;  */

void FUN_101633624(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970c10;
  func_0x000107c61520(&UNK_10d970c10,&UNK_1103ebf68);
  puRam0000000112dbb9f0 = puVar1;
  return;
}



/* Entry: 101633664; end: 101633677;  */

void FUN_101633664(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101633678();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016336b8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101633678; end: 101633723;  */

void FUN_101633678(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbb9f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970cd0;
  func_0x000107c61520(&UNK_10d970cd0,&UNK_1103ebff8);
  puRam0000000112dbb9f8 = puVar1;
  return;
}



/* Entry: 101633724; end: 101633727;  */

void FUN_101633724(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbba18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970d10;
  func_0x000107c61520(&UNK_10d970d10,&UNK_1103ebff8);
  puRam0000000112dbba18 = puVar1;
  return;
}



/* Entry: 101633728; end: 101633767;  */

void FUN_101633728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbba18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970d10;
  func_0x000107c61520(&UNK_10d970d10,&UNK_1103ebff8);
  puRam0000000112dbba18 = puVar1;
  return;
}



/* Entry: 101633768; end: 10163377b;  */

void FUN_101633768(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016337ac();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016337ec)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10163377c; end: 1016337ab;  */

void FUN_10163377c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1016337ac; end: 101633857;  */

void FUN_1016337ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbba20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970dd0;
  func_0x000107c61520(&UNK_10d970dd0,&UNK_1103ec088);
  puRam0000000112dbba20 = puVar1;
  return;
}



/* Entry: 101633858; end: 10163389b;  */

void FUN_101633858(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10163389c; end: 10163389f;  */

void FUN_10163389c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbba40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970e10;
  func_0x000107c61520(&UNK_10d970e10,&UNK_1103ec088);
  puRam0000000112dbba40 = puVar1;
  return;
}



/* Entry: 1016338a0; end: 1016338df;  */

void FUN_1016338a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbba40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d970e10;
  func_0x000107c61520(&UNK_10d970e10,&UNK_1103ec088);
  puRam0000000112dbba40 = puVar1;
  return;
}



/* Entry: 1016338e0; end: 101633bef;  */

void FUN_1016338e0(void)

{
  return;
}



/* Entry: 101633bf0; end: 101633c2f;  */

void FUN_101633bf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbbaa0;
  func_0x0001000285a8(0x112dbbaa0,&UNK_10d971e90);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101633c30; end: 101633c4b;  */

void FUN_101633c30(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 101633c4c; end: 101633d73;  */

void FUN_101633c4c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10163763c();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101633d74; end: 101633dbb;  */

void FUN_101633d74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d972be0,0x38,2);
  uRam0000000113801f20 = uStack_38;
  uRam0000000113801f18 = uStack_40;
  uRam0000000113801f30 = uStack_28;
  uRam0000000113801f28 = uStack_30;
  uRam0000000113801f40 = uStack_18;
  uRam0000000113801f38 = uStack_20;
  return;
}



/* Entry: 101633dbc; end: 101633e5b;  */

/* WARNING: Possible PIC construction at 0x000101633e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101633e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101633e0c) */
/* WARNING: Removing unreachable block (ram,0x000101633e1c) */

void FUN_101633dbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbb48 != -1) {
    func_0x000107c61568(0x112dbbb48,FUN_101633d74);
  }
  uVar5 = uRam0000000113801f40;
  uVar4 = uRam0000000113801f38;
  uVar3 = uRam0000000113801f30;
  uVar2 = uRam0000000113801f28;
  uVar1 = uRam0000000113801f20;
  *param_1 = uRam0000000113801f18;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101633e5c; end: 101633ea3;  */

void FUN_101633e5c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d972b10,0xc0,2);
  uRam0000000113801f50 = uStack_38;
  uRam0000000113801f48 = uStack_40;
  uRam0000000113801f60 = uStack_28;
  uRam0000000113801f58 = uStack_30;
  uRam0000000113801f70 = uStack_18;
  uRam0000000113801f68 = uStack_20;
  return;
}



/* Entry: 101633ea4; end: 101633f43;  */

/* WARNING: Possible PIC construction at 0x000101633ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101633f00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101633ef4) */
/* WARNING: Removing unreachable block (ram,0x000101633f04) */

void FUN_101633ea4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbbb50 != -1) {
    func_0x000107c61568(0x112dbbb50,FUN_101633e5c);
  }
  uVar5 = uRam0000000113801f70;
  uVar4 = uRam0000000113801f68;
  uVar3 = uRam0000000113801f60;
  uVar2 = uRam0000000113801f58;
  uVar1 = uRam0000000113801f50;
  *param_1 = uRam0000000113801f48;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101633f44; end: 101633f8b;  */

void FUN_101633f44(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d972ab0,0x57,2);
  uRam0000000113801f80 = uStack_38;
  uRam0000000113801f78 = uStack_40;
  uRam0000000113801f90 = uStack_28;
  uRam0000000113801f88 = uStack_30;
  uRam0000000113801fa0 = uStack_18;
  uRam0000000113801f98 = uStack_20;
  return;
}



/* Entry: 101633f8c; end: 1016340c7;  */

void FUN_101633f8c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000101637648();
          goto LAB_101634014;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000101637688();
          goto LAB_101634014;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x0001016376c8();
        }
        else {
          if (lVar1 != 4) goto LAB_101634028;
          pcVar4 = *(code **)(param_3 + 0x1a0);
          func_0x000101637708();
        }
LAB_101634014:
        (*pcVar4)();
      }
LAB_101634028:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}


