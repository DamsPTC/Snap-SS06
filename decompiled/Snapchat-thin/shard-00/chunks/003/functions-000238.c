/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10056dbe4; end: 10056dc2b;  */

long FUN_10056dbe4(long param_1)

{
  func_0x00010056dbb0(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x00010056dcdc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10056dc2c; end: 10056dc93;  */

undefined8 FUN_10056dc2c(undefined8 param_1)

{
  FUN_10056dbe4(param_1);
  return param_1;
}



/* Entry: 10056dc94; end: 10056dca7;  */

undefined8 FUN_10056dc94(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056dca8; end: 10056dd43;  */

undefined8 FUN_10056dca8(undefined8 param_1)

{
  FUN_10056dc94(param_1);
  return param_1;
}



/* Entry: 10056dd44; end: 10056dd57;  */

undefined8 FUN_10056dd44(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056dd58; end: 10056df4f;  */

undefined8 FUN_10056dd58(undefined8 param_1)

{
  FUN_10056dd44(param_1);
  return param_1;
}



/* Entry: 10056df50; end: 10056df67;  */

void FUN_10056df50(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10056df68; end: 10056df9b;  */

undefined8 FUN_10056df68(undefined8 param_1)

{
  FUN_10056df50(param_1);
  return param_1;
}



/* Entry: 10056df9c; end: 10056dfaf;  */

undefined8 FUN_10056df9c(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056dfb0; end: 10056e017;  */

undefined8 FUN_10056dfb0(undefined8 param_1)

{
  FUN_10056df9c(param_1);
  return param_1;
}



/* Entry: 10056e018; end: 10056e05b;  */

long * FUN_10056e018(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*param_1 != 0) {
    func_0x000107c2a230(param_1,*param_1);
  }
  return param_1;
}



/* Entry: 10056e05c; end: 10056e0ff;  */

undefined8 FUN_10056e05c(undefined8 param_1)

{
  FUN_10056e018(param_1,0);
  return param_1;
}



/* Entry: 10056e100; end: 10056e143;  */

long * FUN_10056e100(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (*param_1 != 0) {
    func_0x000107c2a238(param_1,*param_1);
  }
  return param_1;
}



/* Entry: 10056e144; end: 10056e1e7;  */

undefined8 FUN_10056e144(undefined8 param_1)

{
  FUN_10056e100(param_1,0);
  return param_1;
}



/* Entry: 10056e1e8; end: 10056e29b;  */

void FUN_10056e1e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 1;
  uVar1 = 0xf0;
  uStack_28 = param_1;
  func_0x000107c60e20();
  FUN_10056e29c();
  uStack_38 = uVar1;
  FUN_10056e318(auStack_48,uVar1);
  func_0x00010056e3f8(auStack_40,auStack_48);
  FUN_10056e454(auStack_60,uStack_38);
  func_0x00010056e534(auStack_58,auStack_60);
  func_0x00010056e6f8(param_1,auStack_40,auStack_58);
  func_0x00010056e824(auStack_58);
  func_0x000100555218(auStack_60);
  func_0x00010056e88c(auStack_40);
  FUN_100555248(auStack_48);
  return;
}



/* Entry: 10056e29c; end: 10056e2f7;  */

undefined8 FUN_10056e29c(undefined8 param_1,undefined8 param_2)

{
  FUN_10055517c(param_1,param_2,0x200000006,&UNK_1088b14b8,1);
  return param_1;
}



/* Entry: 10056e2f8; end: 10056e317;  */

void FUN_10056e2f8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10056e318; end: 10056e353;  */

undefined8 FUN_10056e318(undefined8 param_1,undefined8 param_2)

{
  FUN_10056e2f8(param_1,param_2);
  return param_1;
}



/* Entry: 10056e354; end: 10056e37f;  */

void FUN_10056e354(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



/* Entry: 10056e380; end: 10056e433;  */

undefined8 FUN_10056e380(undefined8 param_1,undefined8 param_2)

{
  FUN_10056e354(param_1,param_2);
  return param_1;
}



/* Entry: 10056e434; end: 10056e453;  */

void FUN_10056e434(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10056e454; end: 10056e48f;  */

undefined8 FUN_10056e454(undefined8 param_1,undefined8 param_2)

{
  FUN_10056e434(param_1,param_2);
  return param_1;
}



/* Entry: 10056e490; end: 10056e4bb;  */

void FUN_10056e490(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  return;
}



/* Entry: 10056e4bc; end: 10056e8bf;  */

undefined8 FUN_10056e4bc(undefined8 param_1,undefined8 param_2)

{
  FUN_10056e490(param_1,param_2);
  return param_1;
}



/* Entry: 10056e8c0; end: 10056e8df;  */

void FUN_10056e8c0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10056e8e0; end: 10056e9f7;  */

long FUN_10056e8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10056e8c0(param_1,param_2);
  FUN_10056ea30(param_1 + 8,param_3);
  return param_1;
}



/* Entry: 10056e9f8; end: 10056ea2f;  */

undefined1  [16] FUN_10056e9f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x00010056e9b4(auStack_20,param_1,param_2);
  return auStack_20;
}



/* Entry: 10056ea30; end: 10056ea63;  */

void FUN_10056ea30(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10056ea64; end: 10056ea87;  */

void FUN_10056ea64(undefined8 param_1)

{
  func_0x00010056ea50(param_1);
  return;
}



/* Entry: 10056ea88; end: 10056eafb;  */

void FUN_10056ea88(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2;
  uStack_30 = param_1;
  FUN_10056ea64(param_2);
  FUN_10056eb40(uStack_30);
  func_0x00010056eb64();
  uStack_3c = 0;
  FUN_10056eba4(uStack_38);
  FUN_10056ebe4(uStack_30);
  func_0x00010056ec0c();
  uStack_40 = 0;
  FUN_10056ec38(&uStack_3c,&uStack_40);
  return;
}



/* Entry: 10056eafc; end: 10056eb27;  */

void FUN_10056eafc(undefined8 param_1,undefined8 param_2)

{
  FUN_10056ea88(param_1,param_2);
  return;
}



/* Entry: 10056eb28; end: 10056eb3f;  */

undefined8 FUN_10056eb28(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10056eb40; end: 10056eb8f;  */

void FUN_10056eb40(undefined8 param_1)

{
  FUN_10056eb28(param_1);
  return;
}



/* Entry: 10056eb90; end: 10056eba3;  */

undefined8 FUN_10056eb90(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10056eba4; end: 10056ebcb;  */

void FUN_10056eba4(long param_1)

{
  FUN_10056eb90(param_1 + 8);
  return;
}



/* Entry: 10056ebcc; end: 10056ebe3;  */

undefined8 FUN_10056ebcc(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10056ebe4; end: 10056ec37;  */

void FUN_10056ebe4(long param_1)

{
  FUN_10056ebcc(param_1 + 8);
  return;
}



/* Entry: 10056ec38; end: 10056ec4b;  */

void FUN_10056ec38(void)

{
  return;
}



/* Entry: 10056ec4c; end: 10056ed8b;  */

undefined8 FUN_10056ec4c(undefined8 param_1)

{
  func_0x00010056e824(param_1);
  return param_1;
}



/* Entry: 10056ed8c; end: 10056eddf;  */

undefined8 * FUN_10056ed8c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056ede0; end: 10056ee1b;  */

undefined8 FUN_10056ede0(undefined8 param_1,undefined8 param_2)

{
  FUN_10056ed8c(param_1,param_2);
  return param_1;
}



/* Entry: 10056ee1c; end: 10056ee6f;  */

undefined8 * FUN_10056ee1c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056ee70; end: 10056eeab;  */

undefined8 FUN_10056ee70(undefined8 param_1,undefined8 param_2)

{
  FUN_10056ee1c(param_1,param_2);
  return param_1;
}



/* Entry: 10056eeac; end: 10056ef27;  */

void FUN_10056eeac(long param_1)

{
  FUN_10056d720(param_1 + 0x10);
  return;
}



/* Entry: 10056ef28; end: 10056ef63;  */

undefined8 FUN_10056ef28(undefined8 param_1,undefined8 param_2)

{
  func_0x00010056eed4(param_1,param_2);
  return param_1;
}



/* Entry: 10056ef64; end: 10056efb7;  */

undefined8 * FUN_10056ef64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056efb8; end: 10056eff3;  */

undefined8 FUN_10056efb8(undefined8 param_1,undefined8 param_2)

{
  FUN_10056ef64(param_1,param_2);
  return param_1;
}



/* Entry: 10056eff4; end: 10056f047;  */

undefined8 * FUN_10056eff4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056f048; end: 10056f083;  */

undefined8 FUN_10056f048(undefined8 param_1,undefined8 param_2)

{
  FUN_10056eff4(param_1,param_2);
  return param_1;
}



/* Entry: 10056f084; end: 10056f0d7;  */

undefined8 * FUN_10056f084(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056f0d8; end: 10056f113;  */

undefined8 FUN_10056f0d8(undefined8 param_1,undefined8 param_2)

{
  FUN_10056f084(param_1,param_2);
  return param_1;
}



/* Entry: 10056f114; end: 10056f167;  */

undefined8 * FUN_10056f114(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056f168; end: 10056f1a3;  */

undefined8 FUN_10056f168(undefined8 param_1,undefined8 param_2)

{
  FUN_10056f114(param_1,param_2);
  return param_1;
}



/* Entry: 10056f1a4; end: 10056f1f7;  */

undefined8 * FUN_10056f1a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    FUN_10056eeac(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056f1f8; end: 10056f233;  */

undefined8 FUN_10056f1f8(undefined8 param_1,undefined8 param_2)

{
  FUN_10056f1a4(param_1,param_2);
  return param_1;
}



/* Entry: 10056f234; end: 10056f287;  */

undefined8 * FUN_10056f234(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056f288; end: 10056f2c3;  */

undefined8 FUN_10056f288(undefined8 param_1,undefined8 param_2)

{
  FUN_10056f234(param_1,param_2);
  return param_1;
}



/* Entry: 10056f2c4; end: 10056f2d3;  */

void FUN_10056f2c4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10056f2d4; end: 10056f2f7;  */

void FUN_10056f2d4(long param_1)

{
  func_0x000100562c58();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056f2f8; end: 10056f317;  */

undefined1 * FUN_10056f2f8(void)

{
  return &stack0x00001230;
}



/* Entry: 10056f318; end: 10056f357;  */

void FUN_10056f318(void)

{
  undefined1 uStack_11;
  
  func_0x000100562908();
  FUN_10056f3c0(&uStack_11);
  return;
}



/* Entry: 10056f358; end: 10056f3bf;  */

void FUN_10056f358(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10056f318(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10056f81c(&uStack_30);
  return;
}



/* Entry: 10056f3c0; end: 10056f46b;  */

void FUN_10056f3c0(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10056ce64();
  uStack_58 = extraout_x8;
  FUN_10056f46c(auStack_70,1);
  FUN_10056cf98(uStack_60);
  FUN_10056f4ec();
  uVar1 = uStack_60;
  uStack_60 = 0;
  FUN_1005628bc(uVar1);
  FUN_10056f80c();
  func_0x0001005628d8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  FUN_10056f80c(auStack_70);
  func_0x000107c33734();
  FUN_100562740();
  FUN_10056f48c();
  FUN_10056279c();
  return;
}



/* Entry: 10056f46c; end: 10056f48b;  */

void FUN_10056f46c(void)

{
  FUN_100562740();
  FUN_10056f48c();
  FUN_10056279c();
  return;
}



/* Entry: 10056f48c; end: 10056f4bb;  */

long FUN_10056f48c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,undefined4 param_10,undefined4 param_11,byte *param_12)

{
  long lVar1;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (param_2 < 0x82082082082083) {
    lVar1 = param_2 * 0x1f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_10056f568(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,unaff_x29,unaff_x30,
                *param_9 * 1000000,*(undefined4 *)CONCAT44(param_11,param_10),*param_12 & 1);
  return param_1;
}



/* Entry: 10056f4bc; end: 10056f4eb;  */

undefined8
FUN_10056f4bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long *param_11,undefined4 param_12,
             undefined4 param_13,byte *param_14)

{
  FUN_10056f568(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                *param_11 * 1000000,*(undefined4 *)CONCAT44(param_13,param_12),*param_14 & 1);
  return param_1;
}



/* Entry: 10056f4ec; end: 10056f53f;  */

undefined8 * FUN_10056f4ec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a73858;
  FUN_10056f4bc(param_1 + 3);
  return param_1;
}



/* Entry: 10056f540; end: 10056f567;  */

void FUN_10056f540(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a80200;
  return;
}



/* Entry: 10056f568; end: 10056f6cf;  */

undefined8 *
FUN_10056f568(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             byte param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [31];
  byte bStack_79;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_11;
  bStack_79 = param_13 & 1;
  uStack_78 = param_8;
  uStack_70 = param_7;
  uStack_68 = param_6;
  uStack_60 = param_5;
  uStack_58 = param_4;
  uStack_50 = param_3;
  uStack_48 = param_2;
  puStack_40 = param_1;
  FUN_10056f540(param_1);
  uVar2 = uStack_48;
  uVar1 = uStack_50;
  func_0x00010056d2bc(auStack_98,&UNK_10f4ea01d);
  FUN_10056d3ac(param_1 + 1,uVar2,uVar1,auStack_98,uStack_60,uStack_38,bStack_79 & 1);
  func_0x000107c60c9c(auStack_98);
  *param_1 = &PTR_DAT_110a80128;
  param_1[1] = &PTR_DAT_110a80180;
  *(undefined4 *)(param_1 + 0x2f) = param_12;
  FUN_10056ede0(param_1 + 0x30,uStack_58);
  FUN_10056f7d0(param_1 + 0x32,uStack_68);
  FUN_10056ee70(param_1 + 0x34,uStack_70);
  FUN_10056ef28(param_1 + 0x36,uStack_78);
  FUN_10056efb8(param_1 + 0x38,param_9);
  FUN_10056f048(param_1 + 0x3a,param_10);
  return param_1;
}



/* Entry: 10056f6d0; end: 10056f77b;  */

undefined8
FUN_10056f6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
             byte param_13)

{
  FUN_10056f568(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13 & 1);
  return param_1;
}



/* Entry: 10056f77c; end: 10056f7cf;  */

undefined8 * FUN_10056f77c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_1[1] != 0) {
    func_0x00010056d784(param_1[1]);
  }
  return param_1;
}



/* Entry: 10056f7d0; end: 10056f80b;  */

undefined8 FUN_10056f7d0(undefined8 param_1,undefined8 param_2)

{
  FUN_10056f77c(param_1,param_2);
  return param_1;
}



/* Entry: 10056f80c; end: 10056f81b;  */

void FUN_10056f80c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10056f81c; end: 10056f83f;  */

void FUN_10056f81c(long param_1)

{
  func_0x000100562c58();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056f840; end: 10056f86b;  */

void FUN_10056f840(void)

{
  undefined1 uStack_11;
  
  func_0x000100562908();
  FUN_10056f8b0(&uStack_11);
  return;
}



/* Entry: 10056f86c; end: 10056f8af;  */

void FUN_10056f86c(void)

{
  undefined1 auStack_30 [16];
  
  FUN_10056f840(auStack_30);
  func_0x000100562c44();
  FUN_10056fb98();
  return;
}



/* Entry: 10056f8b0; end: 10056f94b;  */

void FUN_10056f8b0(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10056ce64();
  uStack_58 = extraout_x8;
  FUN_10056f94c(auStack_70,1);
  FUN_10056cf98(uStack_60);
  FUN_10056f9b0();
  uVar1 = uStack_60;
  uStack_60 = 0;
  FUN_1005628bc(uVar1);
  func_0x00010056fb88();
  func_0x0001005628d8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010056fb88(auStack_70);
  func_0x000107c33734();
  FUN_100562740();
  FUN_10056f96c();
  FUN_10056279c();
  return;
}



/* Entry: 10056f94c; end: 10056f96b;  */

void FUN_10056f94c(void)

{
  FUN_100562740();
  FUN_10056f96c();
  FUN_10056279c();
  return;
}



/* Entry: 10056f96c; end: 10056f99b;  */

undefined8 *
FUN_10056f96c(undefined8 *param_1,ulong param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined4 *unaff_x29;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (0x11a7b9611a7b961 < param_2) {
    func_0x000104bd35f4();
    uVar1 = *param_8;
    uVar2 = *unaff_x29;
    *param_1 = &PTR_DAT_110a60dc8;
    FUN_10054f8dc(param_1 + 1);
    lVar4 = param_3[1];
    uVar5 = *param_3;
    param_1[5] = param_3[1];
    param_1[4] = uVar5;
    if (lVar4 != 0) {
      do {
        FUN_10056fb28();
      } while (extraout_w10 != 0);
    }
    lVar4 = param_4[1];
    uVar5 = *param_4;
    param_1[7] = param_4[1];
    param_1[6] = uVar5;
    if (lVar4 != 0) {
      do {
        FUN_10056fb28();
      } while (extraout_w10_00 != 0);
    }
    lVar4 = param_5[1];
    uVar5 = *param_5;
    param_1[9] = param_5[1];
    param_1[8] = uVar5;
    if (lVar4 != 0) {
      do {
        FUN_10056fb28();
      } while (extraout_w10_01 != 0);
    }
    lVar4 = param_6[1];
    uVar5 = *param_6;
    param_1[0xb] = param_6[1];
    param_1[10] = uVar5;
    if (lVar4 != 0) {
      do {
        FUN_10056fb28();
      } while (extraout_w10_02 != 0);
    }
    lVar4 = param_7[1];
    uVar5 = *param_7;
    param_1[0xd] = param_7[1];
    param_1[0xc] = uVar5;
    if (lVar4 != 0) {
      do {
        FUN_10056fb28();
      } while (extraout_w10_03 != 0);
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010056fb38(param_1 + 0x11,&uStack_78,&uStack_90,0);
    FUN_100100fec(&uStack_90);
    func_0x00010056fb80();
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = uVar1;
    *(undefined4 *)((long)param_1 + 0xcc) = uVar2;
    return param_1;
  }
  puVar3 = (undefined8 *)(param_2 * 0xe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(puVar3);
  return puVar3;
}



/* Entry: 10056f99c; end: 10056f9af;  */

undefined8 *
FUN_10056f99c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,
             undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *param_8;
  uVar2 = *(undefined4 *)CONCAT44(param_10,param_9);
  *param_1 = &PTR_DAT_110a60dc8;
  FUN_10054f8dc(param_1 + 1);
  lVar3 = param_3[1];
  uVar4 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_4[1];
  uVar4 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_00 != 0);
  }
  lVar3 = param_5[1];
  uVar4 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_01 != 0);
  }
  lVar3 = param_6[1];
  uVar4 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_02 != 0);
  }
  lVar3 = param_7[1];
  uVar4 = *param_7;
  param_1[0xd] = param_7[1];
  param_1[0xc] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_03 != 0);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x00010056fb38(param_1 + 0x11,&uStack_68,&uStack_80,0);
  FUN_100100fec(&uStack_80);
  func_0x00010056fb80();
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = uVar1;
  *(undefined4 *)((long)param_1 + 0xcc) = uVar2;
  return param_1;
}



/* Entry: 10056f9b0; end: 10056f9f3;  */

undefined8 * FUN_10056f9b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a738a8;
  FUN_10056f99c(param_1 + 3);
  return param_1;
}



/* Entry: 10056f9f4; end: 10056fb27;  */

undefined8 *
FUN_10056f9f4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
             undefined4 param_9)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_DAT_110a60dc8;
  FUN_10054f8dc(param_1 + 1);
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_4[1];
  uVar2 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_5[1];
  uVar2 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_01 != 0);
  }
  lVar1 = param_6[1];
  uVar2 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_02 != 0);
  }
  lVar1 = param_7[1];
  uVar2 = *param_7;
  param_1[0xd] = param_7[1];
  param_1[0xc] = uVar2;
  if (lVar1 != 0) {
    do {
      FUN_10056fb28();
    } while (extraout_w10_03 != 0);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x00010056fb38(param_1 + 0x11,&uStack_68,&uStack_80,0);
  FUN_100100fec(&uStack_80);
  func_0x00010056fb80();
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = param_8;
  *(undefined4 *)((long)param_1 + 0xcc) = param_9;
  return param_1;
}



/* Entry: 10056fb28; end: 10056fb97;  */

void FUN_10056fb28(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10056fb98; end: 10056fbf3;  */

void FUN_10056fb98(long param_1)

{
  func_0x000100562c58();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056fbf4; end: 10056fc0b;  */

void FUN_10056fbf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10056fc0c; end: 10056fc43;  */

undefined8 FUN_10056fc0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10055c568();
  func_0x000100563704();
  return param_1;
}



/* Entry: 10056fc44; end: 10056fcdb;  */

void FUN_10056fc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10056fcdc; end: 10056fd23;  */

void FUN_10056fcdc(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10056fd24; end: 10056fdf7;  */

undefined8 *
FUN_10056fd24(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110a658b8;
  FUN_10054f8dc(param_1 + 3);
  uVar1 = *param_3;
  param_1[7] = param_3[1];
  param_1[6] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[9] = param_4[1];
  param_1[8] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[0xb] = param_5[1];
  param_1[10] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0xd] = param_6[1];
  param_1[0xc] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xf] = param_7[1];
  param_1[0xe] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  uVar1 = *param_8;
  param_1[0x11] = param_8[1];
  param_1[0x10] = uVar1;
  *param_8 = 0;
  param_8[1] = 0;
  uVar1 = *param_9;
  param_1[0x13] = param_9[1];
  param_1[0x12] = uVar1;
  *param_9 = 0;
  param_9[1] = 0;
  return param_1;
}



/* Entry: 10056fdf8; end: 10056fe03;  */

undefined8 FUN_10056fdf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10056fe04; end: 10056fe27;  */

void FUN_10056fe04(long param_1)

{
  FUN_10056fdf8();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10056fe28; end: 10056fe2f;  */

void FUN_10056fe28(void)

{
  return;
}



/* Entry: 10056fe30; end: 10056fe53;  */

void FUN_10056fe30(long param_1)

{
  FUN_10056fdf8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10056fe54; end: 10056fe63;  */

void FUN_10056fe54(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10056fe64; end: 100570373;  */

undefined8 *
FUN_10056fe64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9,undefined8 *param_10,undefined4 param_11,undefined4 param_12,
             undefined8 *param_13)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [24];
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined4 uStack_94;
  ulong auStack_90 [2];
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined4 uStack_64;
  
  param_1[1] = &PTR_DAT_110a62c08;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_DAT_110a62ba0;
  lVar7 = param_2[1];
  uVar9 = *param_2;
  param_1[7] = param_2[1];
  param_1[6] = uVar9;
  if (lVar7 != 0) {
    do {
      FUN_10056fe54();
    } while (extraout_w10 != 0);
  }
  lVar7 = param_3[1];
  uVar9 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar9;
  if (lVar7 != 0) {
    do {
      FUN_10056fe54();
    } while (extraout_w10_00 != 0);
  }
  lVar7 = param_4[1];
  uVar9 = *param_4;
  param_1[0xb] = param_4[1];
  param_1[10] = uVar9;
  if (lVar7 != 0) {
    do {
      FUN_10056fe54();
    } while (extraout_w10_01 != 0);
  }
  lVar7 = param_5[1];
  uVar9 = *param_5;
  param_1[0xd] = param_5[1];
  param_1[0xc] = uVar9;
  if (lVar7 != 0) {
    do {
      FUN_10056fe54();
    } while (extraout_w10_02 != 0);
  }
  lVar7 = param_6[1];
  uVar9 = *param_6;
  param_1[0xf] = param_6[1];
  param_1[0xe] = uVar9;
  if (lVar7 != 0) {
    do {
      FUN_10056fe54();
    } while (extraout_w10_03 != 0);
  }
  lVar7 = param_7[1];
  uVar9 = *param_7;
  param_1[0x11] = param_7[1];
  param_1[0x10] = uVar9;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar7 = param_8[1];
  uVar9 = *param_8;
  param_1[0x13] = param_8[1];
  param_1[0x12] = uVar9;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar7 = param_10[1];
  uVar9 = *param_10;
  param_1[0x15] = param_10[1];
  param_1[0x14] = uVar9;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar7 = param_13[1];
  uVar9 = *param_13;
  param_1[0x17] = param_13[1];
  param_1[0x16] = uVar9;
  if (lVar7 != 0) {
    plVar8 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *(undefined1 *)(param_1 + 0x18) = (undefined1)param_11;
  *(undefined1 *)((long)param_1 + 0xc1) = param_11._1_1_;
  plVar8 = (long *)*param_9;
  FUN_10002b838(&ppuStack_80,&UNK_10f4b04b6);
  uVar3 = 0;
  (**(code **)(*plVar8 + 0x18))();
  if ((uVar3 & 1) == 0) {
    plVar8 = (long *)0x493e0;
  }
  FUN_100570374();
  param_1[0x19] = plVar8;
  plVar8 = (long *)*param_9;
  FUN_10002b838(auStack_c8,&UNK_10f4b07b2);
  (**(code **)(*plVar8 + 0x38))(auStack_90,plVar8);
  if ((auStack_90[0] == 0) ||
     (uVar3 = auStack_90[0], FUN_1004a6058(auStack_90[0],auStack_c8), (int)uVar3 == 0)) {
    (**(code **)(*plVar8 + 0x20))(&ppuStack_80,plVar8,auStack_c8);
    if (((char)uStack_68 == '\x01') && (ppuStack_80 != ppuStack_78)) {
      uStack_a0 = 0;
      ppuStack_b0 = &PTR_DAT_110d11418;
      uStack_a8 = 0;
      uStack_94 = 0;
      uStack_98 = 0;
      pppuVar5 = &ppuStack_b0;
      FUN_10006369c(pppuVar5,ppuStack_80,(int)ppuStack_78 - (int)ppuStack_80);
      if (((ulong)pppuVar5 & 1) == 0) {
        func_0x00010057037c();
      }
      else {
        func_0x000107c28e18(param_1 + 0x1a,&ppuStack_b0);
      }
      func_0x000107c305d4(&ppuStack_b0);
    }
    else {
      func_0x00010057037c();
    }
    FUN_1002a2294(&ppuStack_80);
  }
  else {
    FUN_1004a6058(auStack_90[0],auStack_c8);
    if ((auStack_90[0] & 1) == 0) {
      func_0x00010057037c();
    }
    else {
      ppuStack_78 = (undefined **)0x0;
      uStack_70 = 0;
      ppuStack_80 = &PTR_DAT_110d11418;
      uStack_64 = 0;
      uStack_68 = 0;
      func_0x000107c32408();
      ppuVar4 = *(undefined ***)(auStack_90[0] + 0x10);
      if (*(int *)(auStack_90[0] + 0x1c) != 6) {
        ppuVar4 = &PTR_PTR_1134051b0;
      }
      ppuVar4 = ppuVar4 + 5;
      func_0x000107c30240(ppuVar4,&UNK_10f4b0882,0x33,&ppuStack_80);
      if (((ulong)ppuVar4 & 1) == 0) {
        func_0x000107c30330(&ppuStack_b0,&ppuStack_80);
        func_0x000107c32408();
        func_0x000107c60ca0(&ppuStack_b0);
        func_0x00010057037c();
      }
      else {
        func_0x000107c28e18(param_1 + 0x1a,&ppuStack_80);
      }
      func_0x000107c305d4(&ppuStack_80);
    }
  }
  FUN_1004a65f8(auStack_90);
  func_0x000107c60ca0(auStack_c8);
  plVar8 = (long *)*param_9;
  FUN_10002b838(&ppuStack_80,&UNK_10f4b07dc);
  (**(code **)(*plVar8 + 0x10))(plVar8,&ppuStack_80,0);
  FUN_100570374();
  *(char *)(param_1 + 0x1f) = (char)plVar8;
  puVar6 = param_9;
  FUN_100570394();
  *(char *)((long)param_1 + 0xf9) = (char)puVar6;
  puVar6 = param_9;
  FUN_100570400();
  *(char *)((long)param_1 + 0xfa) = (char)puVar6;
  puVar6 = param_9;
  FUN_10057044c();
  *(char *)((long)param_1 + 0xfb) = (char)puVar6;
  FUN_1005704bc();
  param_1[0x20] = (long)param_9 * 1000;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  return param_1;
}



/* Entry: 100570374; end: 100570387;  */

void FUN_100570374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000060);
  return;
}



/* Entry: 100570388; end: 100570393; +[SCStoriesLastResponseMetaInfo table] */

undefined * FUN_100570388(void)

{
  return &UNK_10f4a2a79;
}



/* Entry: 100570394; end: 1005703ff;  */

long * FUN_100570394(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)*param_1;
  FUN_10002b838(auStack_38,&UNK_10f4b0800);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_38,0);
  func_0x000107c60ca0(auStack_38);
  return plVar1;
}



/* Entry: 100570400; end: 10057044b;  */

undefined8 * FUN_100570400(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  func_0x00010055acb4(param_1,&UNK_10f4b0567);
  FUN_10055ad08(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010055ad18();
  return param_1;
}



/* Entry: 10057044c; end: 1005704bb;  */

long * FUN_10057044c(undefined8 *param_1)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)*param_1;
  FUN_10002b838(auStack_38,&UNK_10f4b05b3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_38,0);
  func_0x000107c60ca0(auStack_38);
  return plVar1;
}


